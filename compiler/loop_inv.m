%-----------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et tw=0 wm=0
%-----------------------------------------------------------------------------%
% Copyright (C) 2002-2007 The University of Melbourne.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury distribution.
%-----------------------------------------------------------------------------%
%
% File: loop_inv.m.
% Main author: rafe,
%
% This module implements conservative loop invariant hoisting.
% The basic idea can be outlined as a transformation on functions.
% We want to convert
%
%     f(X, Y) = if p(X, Y) then g(X, Y) else f(X, h(i(X), Y))
%
% to
%
%     f(X, Y)     = if p(X, Y) then g(X, Y) else f2(X, i(X), h(i(X), Y))
%
%     f2(X, W, Y) = if p(X, Y) then g(X, Y) else f2(X, W, h(W, Y))
%
% where W, X, Y may each stand for more several program variables.
%
% In the HLDS, functions are converted to predicates, hence the above
% will look like this:
%
%     f(X, Y, R) :-
%         if p(X, Y) then g(X, Y, R)
%                    else i(X, W),     h(W, Y, V),    f(X, V, R).
%
% and will be translated by the optimization into
%
%     f(X, Y, R) :-
%         if p(X, Y) then g(X, Y, R)
%                    else i(X, W),     h(W, Y, V),    f2(X, W, V, R).
%
%     f2(X, W, Y, R) :-
%         if p(X, Y) then g(X, Y, R)
%                    else h(W, Y, V),  f2(X, W, V, R).
%
% We proceed as follows:
%
% 1. Identify the invariant args to f (that is, all input args that
% are identical across all calls to f at the end of recursive paths
% (a recursive path is a path from the start of the definition of f
% to a recursive call to f comprised entirely of model det goals,
% other than in the conditions of if-then-elses or switch
% unifications.)
%
% 2. Identify the set of invariant goals and vars in the body of f:
% - A var is invariant iff it is an invariant arg or it is the output
% of an invariant goal.
% - A goal is invariant iff
%   - it is model det,
%   - it is invoked on all recursive paths, and
%   - all of its input args are invariant vars.
%
% In the example above, X is an invariant arg, i(X, W) is an
% invariant goal, X and W are invariant vars, and
%
%     /* if */ p(X, Y), /* else */ i(X, W), h(W, Y, V), f(X, V, R)
%
% is a recursive path.
%
% At this point we construct f2, which is a copy of f taking the
% invariant vars as extra args, in which the invariant goals
% appearing on the recursive paths have been deleted, and in
% which the recursive calls to f at the end of the recursive paths
% have been replaced with calls to f2.
%
% We adjust the definition of f such that the recursive calls to f
% at the end of the recursive paths are replaced with calls to f2.
%
%
%
% NOTE that this version of the optimization does not perform
% variable renaming, so the two calls to i/1 here will not be
% hoisted because they have different output variables:
%
%     f(X, Y, R) :-
%         if      p(X, Y) then g(X, Y, R)
%         else if q(X, Y) then i(X, W1),    h1(W1, Y, V),  f(X, V, R)
%         else                 i(X, W2),    h1(W2, Y, V),  f(X, V, R)
%
% In general this means that currently the optimization will only be
% effective if there is a single recursive call.
%
% This may be the subject of a future improvement of the optimization.
% Similarly for broadening the scope of the optimization to include non
% model_det recursive paths.
%
%-----------------------------------------------------------------------------%

:- module transform_hlds.loop_inv.
:- interface.

:- import_module hlds.
:- import_module hlds.hlds_pred.
:- import_module hlds.hlds_module.

%-----------------------------------------------------------------------------%

    % hoist_loop_invariants(PredId, ProcId, PredInfo,
    %       ProcInfo0, ProcInfo, ModuleInfo0, ModuleInfo)
    %
    % Analyze the procedure identified by PredProcId and, if appropriate,
    % split it into two applying the loop invariant hoisting optimization.
    %
:- pred hoist_loop_invariants(pred_id::in, proc_id::in, pred_info::in,
    proc_info::in, proc_info::out, module_info::in, module_info::out) is det.

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- implementation.

:- import_module check_hlds.
:- import_module check_hlds.inst_match.
:- import_module check_hlds.inst_util.
:- import_module check_hlds.mode_util.
:- import_module hlds.code_model.
:- import_module hlds.hlds_goal.
:- import_module hlds.instmap.
:- import_module hlds.quantification.
:- import_module libs.compiler_util.
:- import_module mdbcomp.prim_data.
:- import_module parse_tree.prog_data.
:- import_module parse_tree.prog_util.

:- import_module assoc_list.
:- import_module bool.
:- import_module list.
:- import_module maybe.
:- import_module pair.
:- import_module set.
:- import_module string.
:- import_module term.

%-----------------------------------------------------------------------------%

hoist_loop_invariants(PredId, ProcId, PredInfo, !ProcInfo, !ModuleInfo) :-

    ( if

            % We only want to apply this optimization to pure preds (e.g.
            % not benchmark_det_loop).
            %
       pred_info_get_purity(PredInfo, purity_pure),

            % Next, work out whether this predicate is optimizable and
            % compute some auxiliary results along the way.

            % Obtain the requisite info for this procedure.
            %
        PredProcId = proc(PredId, ProcId),
        proc_info_get_goal(!.ProcInfo, Body),
        proc_info_get_headvars(!.ProcInfo, HeadVars),
        proc_info_get_argmodes(!.ProcInfo, HeadVarModes),

            % Find the set of variables that are used as (partly) unique
            % inputs to calls.  These variables are not safe candidates
            % for hoisting.  (A variable whose initial bound inst is
            % inferred as unique may be hoistable if it is not used as a
            % unique input to any call.)
            %
        UniquelyUsedVars = uniquely_used_vars(!.ModuleInfo, Body),

            % Find the set of candidate goals that may be invariant
            % and the set of recursive calls involved.
            %
            % A goal must appear on all recursive paths to be a
            % candidate.
            %
            % The recursive calls are the set of calls at the end
            % of each recursive path.
            %
        invariant_goal_candidates(PredProcId, Body, InvGoals0, RecCalls),

            % We can calculate the set of invariant args from
            % the set of recursive calls.
            %
        InvArgs0 = inv_args(!.ModuleInfo, HeadVars, HeadVarModes, RecCalls),
        InvArgs  = InvArgs0 `delete_elems` UniquelyUsedVars,

            % Given the invariant args, we can calculate the set
            % of invariant goals and vars.
            %
        inv_goals_vars(!.ModuleInfo, UniquelyUsedVars,
            InvGoals0, InvGoals1, InvArgs, InvVars1),

            % We don't want to hoist out unifications with constants (i.e.
            % constructions where the RHS has no arguments) or deconstructions
            % (it's probably cheaper to do the dereference than pass an extra
            % argument).
            %
            % We also don't want to hoist out goals that can't succeed,
            % e.g. calls to error/1, and in fact we MUST NOT hoist out
            % such goals, because if we hoisted out such goals, later
            % passes might think that the code which follows is actually
            % reachable, which may lead to internal errors because code
            % which follow a call to error/1 need not be determinism-correct.
            %
            % We also must not hoist impure goals.
            %
            % So here we compute the subset of InvGoals (and the corresponding
            % InvVars) that should not be hoisted.
            %
        dont_hoist(!.ModuleInfo, InvGoals1, DontHoistGoals, DontHoistVars),

        InvGoals = InvGoals1 `delete_elems` DontHoistGoals,
        InvVars  = InvVars1  `delete_elems` DontHoistVars,

            % We only apply the optimization if the set of invariant goals
            % is non-empty.
            %
        InvGoals = [_ | _]

            % NOTE!  At this point it is vital that
            % - none of the InvVars are used as (partially) unique
            % inputs in any goals;
            % - all of the InvVars are either head vars or constructed
            % by one of the InvGoals;
            % - all non-local vars in InvGoals are also in InvVars.

      then

            % The set of computed invariant vars is the difference
            % between the whole invariant var set and the set of
            % invariant args.
            %
        ComputedInvVars = InvVars `delete_elems` InvArgs,

            % We need to calculate the initial instmap for the aux
            % proc by applying the instmap_deltas from the InvGoals
            % to InitialInstMap.
            %
        proc_info_get_initial_instmap(!.ProcInfo, !.ModuleInfo,
            InitialInstMap),
        InitialAuxInstMap =
            compute_initial_aux_instmap(InvGoals, InitialInstMap),

            % Create the pred for the aux proc.  This is initially a
            % copy of the in proc with the head vars extended with the
            % list of computed inv vars.  The body is adjusted
            % appropriately in the next step.
            %
        create_aux_pred(PredProcId, HeadVars, ComputedInvVars,
            InitialAuxInstMap, AuxPredProcId, CallAux,
            AuxPredInfo, AuxProcInfo, !ModuleInfo),

            % We update the body of AuxProc by replacing adding the
            % set of computed invariant vars to the argument list,
            % replacing invariant goals in InProc with `true', and
            % recursive calls at the end of recursive paths with
            % calls to the auxiliary procedure.
            %
        gen_aux_proc(InvGoals, PredProcId,
            AuxPredProcId, CallAux, Body, AuxPredInfo, AuxProcInfo,
            !ModuleInfo),

            % We construct OutProc by replacing recursive calls to
            % the InProc at the end of recursive paths with calls
            % to the auxiliary procedure.
            %
        gen_out_proc(PredProcId, PredInfo, !ProcInfo, CallAux, Body,
            !ModuleInfo)

      else
        true
    ).

%-----------------------------------------------------------------------------%

:- type rec_call ==
            pair(
                hlds_goal,         % The recursive call.
                list(hlds_goal)    % The candidate invariant goal list
                                   %    for this recursive call.
            ).

:- type rec_calls == list(rec_call).

:- type invariant_goal_candidates_acc
    --->    invariant_goal_candidates_acc(
                    % path_candidates is the list of accumulated invariant
                    % goal candidates.
                    %
                path_candidates         :: hlds_goals,

                    % rec_calls is the list of pairs of recursive calls
                    % with the path_candidates up to that point.  This is
                    % extended whenever a recursive call is identified.
                    %
                rec_calls               :: rec_calls
            ).

    % invariant_goal_candidates(PredProcId, Body, CandidateInvGoals,
    %       RecCallGoals)
    %
    % Computes (a conservative approximation to) the set of candidate
    % invariant atomic goals in Body and the set of recursive calls
    % in Body identified via PredProcId.
    %
:- pred invariant_goal_candidates(pred_proc_id::in, hlds_goal::in,
    hlds_goals::out, hlds_goals::out) is det.

invariant_goal_candidates(PredProcId, Body, CandidateInvGoals, RecCallGoals) :-
    invariant_goal_candidates_acc(_, RecCalls) =
        invariant_goal_candidates_2(PredProcId, Body,
            invariant_goal_candidates_acc([], [])),
    assoc_list.keys_and_values(RecCalls, RecCallGoals, CandidateInvGoalsList),
    CandidateInvGoals = intersect_candidate_inv_goals(CandidateInvGoalsList).

%-----------------------------------------------------------------------------%

:- func invariant_goal_candidates_2(pred_proc_id, hlds_goal,
            invariant_goal_candidates_acc
        ) = invariant_goal_candidates_acc.

invariant_goal_candidates_2(PPId,
        hlds_goal(Call @ plain_call(PredId, ProcId, _, _, _, _), GoalInfo),
        IGCs) =
    ( if   proc(PredId, ProcId) = PPId
      then add_recursive_call(hlds_goal(Call, GoalInfo), IGCs)
      else invariant_goal_candidates_handle_non_recursive_call(
                hlds_goal(Call, GoalInfo), IGCs)
    ).

invariant_goal_candidates_2(_PPId,
        hlds_goal(Call @ generic_call(_, _, _, _), GoalInfo),  IGCs) =
    invariant_goal_candidates_handle_non_recursive_call(
        hlds_goal(Call, GoalInfo),
        IGCs).

invariant_goal_candidates_2(_PPId,
        hlds_goal(Unification @ unify(_, _, _, _, _), GoalInfo), IGCs) =
    invariant_goal_candidates_handle_non_recursive_call(
        hlds_goal(Unification, GoalInfo),
        IGCs).

invariant_goal_candidates_2(_PPId,
        hlds_goal(ForeignProc @ call_foreign_proc(_, _, _, _, _, _, _),
            GoalInfo),
        IGCs) =
    invariant_goal_candidates_handle_non_recursive_call(
        hlds_goal(ForeignProc, GoalInfo),
        IGCs).

invariant_goal_candidates_2(PPId,
        hlds_goal(conj(ConjType, Conjuncts), _GoalInfo), IGCs0)
        = IGCs :-
    (
        ConjType = plain_conj,
        IGCs = list.foldl(invariant_goal_candidates_2(PPId), Conjuncts, IGCs0)
    ;
        ConjType = parallel_conj,
        IGCs = list.foldl(
            invariant_goal_candidates_keeping_path_candidates(PPId),
            Conjuncts, IGCs0)
    ).

invariant_goal_candidates_2(PPId,
        hlds_goal(disj(Disjuncts), _GoalInfo), IGCs) =
    list.foldl(invariant_goal_candidates_keeping_path_candidates(PPId),
                Disjuncts,
                IGCs).

invariant_goal_candidates_2(PPId,
        hlds_goal(switch(_, _, Cases), _GoalInfo), IGCs) =
    list.foldl(invariant_goal_candidates_keeping_path_candidates(PPId),
                case_goals(Cases),
                IGCs).

invariant_goal_candidates_2(PPId,
        hlds_goal(negation(NegatedGoal), _GoalInfo), IGCs) =
    invariant_goal_candidates_keeping_path_candidates(PPId, NegatedGoal, IGCs).

invariant_goal_candidates_2(PPId,
        hlds_goal(scope(_, QuantifiedGoal), _GoalInfo), IGCs) =
    invariant_goal_candidates_2(PPId, QuantifiedGoal, IGCs).

invariant_goal_candidates_2(PPId,
        hlds_goal(if_then_else(_XVs, Cond, Then, Else), GoalInfo),  IGCs0)
        = IGCs :-
    CondThenGoal = hlds_goal(conj(plain_conj, [Cond, Then]), GoalInfo),
    IGCs1        = invariant_goal_candidates_keeping_path_candidates(PPId,
                        CondThenGoal, IGCs0),
    ElseGoal     = Else,
    IGCs         = invariant_goal_candidates_keeping_path_candidates(PPId,
                        ElseGoal,     IGCs1).

invariant_goal_candidates_2(_PPId,
        hlds_goal(shorthand(_), _GoalInfo), _IGCs) = _ :-
    unexpected(this_file,
        "invariant_goal_candidates_2/3: shorthand/1 in hlds_goal").

%-----------------------------------------------------------------------------%

:- func invariant_goal_candidates_keeping_path_candidates(pred_proc_id,
            hlds_goal, invariant_goal_candidates_acc
        ) = invariant_goal_candidates_acc.

invariant_goal_candidates_keeping_path_candidates(PPId, Goal, IGCs) =
    ( invariant_goal_candidates_2(PPId, Goal, IGCs) ^ path_candidates :=
        IGCs ^ path_candidates ).

%-----------------------------------------------------------------------------%

:- func case_goals(list(case)) = hlds_goals.

case_goals(Cases) =
    list.map(func(case(_ConsId, Goal)) = Goal, Cases).

%-----------------------------------------------------------------------------%

:- func add_recursive_call(hlds_goal, invariant_goal_candidates_acc) =
            invariant_goal_candidates_acc.

    % We have to reverse the path_candidates because they are
    % accumulated in reverse order, whereas we need them in
    % producer-consumer order as they appear in the procedure.
    %
add_recursive_call(Goal, IGCs) =
    IGCs ^ rec_calls :=
        [Goal - list.reverse(IGCs ^ path_candidates) | IGCs ^ rec_calls].

%-----------------------------------------------------------------------------%

    % NOTE: we could hoist semipure goals that have no preceeding
    % impure goals, but that's a very low-level optimization that
    % is not entirely trivial to implement.
    %
:- func invariant_goal_candidates_handle_non_recursive_call(
            hlds_goal, invariant_goal_candidates_acc
        ) = invariant_goal_candidates_acc.

invariant_goal_candidates_handle_non_recursive_call(
        Goal @ hlds_goal(_GoalExpr, GoalInfo), IGCs) =
    ( if   not model_non(GoalInfo),
           goal_info_get_purity(GoalInfo, purity_pure)
      then IGCs ^ path_candidates := [Goal | IGCs ^ path_candidates]
      else IGCs
    ).

%-----------------------------------------------------------------------------%

:- pred model_non(hlds_goal_info::in) is semidet.

model_non(GoalInfo) :-
    hlds_goal.goal_info_get_determinism(GoalInfo, Detism),
    code_model.determinism_to_code_model(Detism, model_non).

%-----------------------------------------------------------------------------%

:- func intersect_candidate_inv_goals(list(hlds_goals)) = hlds_goals.

intersect_candidate_inv_goals([]) = [].

intersect_candidate_inv_goals([Goals | Goalss]) =
    list.filter(common_goal(Goalss), Goals).

%-----------------------------------------------------------------------------%

:- pred common_goal(list(hlds_goals)::in, hlds_goal::in) is semidet.

common_goal(Goalss, Goal) :-
    all [Gs] (
        list.member(Gs, Goalss)
    =>
        (
            list.member(G,  Gs),
            equivalent_goals(G, Goal)
        )
    ).

%-----------------------------------------------------------------------------%

:- pred equivalent_goals(hlds_goal::in, hlds_goal::in) is semidet.

equivalent_goals(hlds_goal(GoalExprX, _), hlds_goal(GoalExprY, _)) :-
    (
        GoalExprX = GoalExprY
    ;
        GoalExprX =
            plain_call(PredId, ProcId, Args, _BuiltinX, _ContextX, _SymNameX),
        GoalExprY =
            plain_call(PredId, ProcId, Args, _BuiltinY, _ContextY, _SymNameY)
    ).

%-----------------------------------------------------------------------------%

:- func inv_args(module_info, prog_vars, list(mer_mode), hlds_goals)
    = prog_vars.

inv_args(ModuleInfo, HeadVars, HeadVarModes, RecCalls) = InvArgs :-
    MaybeInvArgs0 =
        list.map_corresponding(
                arg_to_maybe_inv_arg(ModuleInfo), HeadVars, HeadVarModes),
    MaybeInvArgs  =
        list.foldl(refine_candidate_inv_args, RecCalls, MaybeInvArgs0),
    InvArgs       =
        list.filter_map(func(yes(Arg)) = Arg is semidet, MaybeInvArgs).

%-----------------------------------------------------------------------------%

    % Maps an Arg in HeadVars to yes(Arg) if Arg is an input
    %                      or to no       otherwise.
    %
:- func arg_to_maybe_inv_arg(module_info, prog_var, mer_mode)
    = maybe(prog_var).

arg_to_maybe_inv_arg(ModuleInfo, Arg, Mode) =
    ( if input_arg(ModuleInfo, Arg, Mode) = InvArg then yes(InvArg) else no ).

%-----------------------------------------------------------------------------%

:- func refine_candidate_inv_args(hlds_goal, list(maybe(prog_var))) =
    list(maybe(prog_var)).

refine_candidate_inv_args(hlds_goal(RecCall, _RecCallInfo), MaybeInvArgs) =
    ( if   RecCall = plain_call(_, _, CallArgs, _, _, _)
      then list.map_corresponding(refine_candidate_inv_args_2,
                                   MaybeInvArgs,
                                   CallArgs)
      else unexpected(this_file, "refine_candidate_inv_args/2: " ++
        "non call/6 found in argument 1")
    ).

:- func refine_candidate_inv_args_2(maybe(prog_var), prog_var) =
    maybe(prog_var).

refine_candidate_inv_args_2(no,     _) = no.
refine_candidate_inv_args_2(yes(X), Y) = ( if X = Y then yes(X) else no ).

%-----------------------------------------------------------------------------%

    % A goal is invariant if all its input args are invariant.
    % The outputs of an invariant goal are also invariant.
    %
    % Since mode reordering has already been applied at this point,
    % we know that if goal A precedes goal B in the candidate list,
    % goal A will not depend upon the results of goal B (although B
    % may depend on A).
    %
    % The list returned will not contain duplicate goals judged
    % to be the same by equivalent_goals/2.
    %
    % We do not hoist goals with unique outputs that are elsewhere
    % used as unique inputs since the user may clobber the variable
    % in question.
    %
:- pred inv_goals_vars(module_info::in, prog_vars::in,
        hlds_goals::in, hlds_goals::out, prog_vars::in, prog_vars::out) is det.

inv_goals_vars(ModuleInfo, UniquelyUsedVars,
        InvGoals0, InvGoals, InvVars0, InvVars) :-
    list.foldl2(
        inv_goals_vars_2(ModuleInfo, UniquelyUsedVars),
        InvGoals0,
        [],         InvGoals,
        InvVars0,   InvVars
    ).

%-----------------------------------------------------------------------------%

:- pred inv_goals_vars_2(module_info::in, prog_vars::in, hlds_goal::in,
    hlds_goals::in, hlds_goals::out, prog_vars::in, prog_vars::out) is det.

inv_goals_vars_2(MI, UUVs, Goal, IGs0, IGs, IVs0, IVs) :-
    ( if
        not invariant_goal(IGs0, Goal),
        not has_uniquely_used_arg(UUVs, Goal),
        input_args_are_invariant(MI, Goal, IVs0)
      then
        IGs = [Goal | IGs0],
        IVs = add_outputs(MI, UUVs, Goal, IVs0)
      else
        IGs = IGs0,
        IVs = IVs0
    ).

%-----------------------------------------------------------------------------%

:- pred has_uniquely_used_arg(prog_vars::in, hlds_goal::in) is semidet.

has_uniquely_used_arg(UUVs, hlds_goal(_GoalExpr, GoalInfo)) :-
    goal_info_get_nonlocals(GoalInfo, NonLocals),
    list.member(UUV, UUVs),
    set.member(UUV, NonLocals).

%-----------------------------------------------------------------------------%

:- pred invariant_goal(hlds_goals::in, hlds_goal::in) is semidet.

invariant_goal(InvariantGoals, Goal) :-
    list.member(InvariantGoal, InvariantGoals),
    equivalent_goals(InvariantGoal, Goal).

%-----------------------------------------------------------------------------%

:- pred input_args_are_invariant(module_info::in, hlds_goal::in, prog_vars::in)
        is semidet.

input_args_are_invariant(ModuleInfo, Goal, InvVars) :-
    Inputs = goal_inputs(ModuleInfo, Goal),
    all [V] (
        list.member(V, Inputs)
    =>
        list.member(V, InvVars)
    ).

%-----------------------------------------------------------------------------%

:- pred dont_hoist(module_info::in, hlds_goals::in,
    hlds_goals::out, prog_vars::out) is det.

dont_hoist(ModuleInfo, InvGoals, DontHoistGoals, DontHoistVars) :-
    list.foldl2(dont_hoist_2(ModuleInfo), InvGoals,
        [], DontHoistGoals, [], DontHoistVars).

:- pred dont_hoist_2(module_info::in, hlds_goal::in,
    hlds_goals::in, hlds_goals::out, prog_vars::in, prog_vars::out) is det.

dont_hoist_2(ModuleInfo, Goal, !DHGs, !DHVs) :-
    ( if
        ( const_construction(Goal)
        ; deconstruction(Goal)
        ; impure_goal(Goal)
        ; cannot_succeed(Goal)
        ; call_has_inst_any(ModuleInfo, Goal)
        )
      then
        list.cons(Goal, !DHGs),
        !:DHVs = add_outputs(ModuleInfo, [], Goal, !.DHVs)
      else
        true
    ).

%-----------------------------------------------------------------------------%

    % A constant construction is a construction unification with no
    % arguments or which is constructed from a statically initialized
    % constant.
    %
:- pred const_construction(hlds_goal::in) is semidet.

const_construction(hlds_goal(GoalExpr, _GoalInfo)) :-
    Construction = GoalExpr ^ unify_kind,
    (   Construction ^ construct_args = []
    ;   Construction ^ construct_how  = construct_statically(_)
    ).

%-----------------------------------------------------------------------------%

:- pred deconstruction(hlds_goal::in) is semidet.

deconstruction(hlds_goal(GoalExpr, _GoalInfo)) :-
    GoalExpr ^ unify_kind = deconstruct(_, _, _, _, _, _).

%-----------------------------------------------------------------------------%

:- pred impure_goal(hlds_goal::in) is semidet.

impure_goal(Goal) :-
    goal_get_purity(Goal, purity_impure).

%-----------------------------------------------------------------------------%

:- pred cannot_succeed(hlds_goal::in) is semidet.

cannot_succeed(hlds_goal(_GoalExpr, GoalInfo)) :-
    goal_info_get_determinism(GoalInfo, Detism),
    determinism_components(Detism, _CanFail, MaxSolns),
    MaxSolns = at_most_zero.

%-----------------------------------------------------------------------------%

    % Succeeds if any of the components of the insts of the modes of a
    % (generic) call is inst any.
    %
:- pred call_has_inst_any(module_info::in, hlds_goal::in) is semidet.

call_has_inst_any(ModuleInfo, Goal) :-
    Goal = hlds_goal(GoalExpr, _GoalInfo),
    (
        GoalExpr = generic_call(_, _, Modes, _)
    ;
        GoalExpr = plain_call(PredId, ProcId, _, _, _, _),
        Modes = argmodes(ModuleInfo, PredId, ProcId)
    ),
    some [Mode] (
        list.member(Mode, Modes),
        mode_get_insts(ModuleInfo, Mode, InitialInst, FinalInst),
        (
            inst_contains_any(ModuleInfo, InitialInst)
        ;
            inst_contains_any(ModuleInfo, FinalInst)
        )
    ).

%-----------------------------------------------------------------------------%

:- type inst_info == {module_info, instmap}.

:- pred arg_is_input(inst_info::in, prog_var::in) is semidet.

arg_is_input(InstInfo, Arg) :-
    InstInfo = {_ModuleInfo, InstMap},
    instmap.lookup_var(InstMap, Arg, Inst),
    inst_is_input(InstInfo, Inst).

%-----------------------------------------------------------------------------%

    % We take an initial inst to be an input if it is fully ground
    % and not unique.
    %
:- pred inst_is_input(inst_info::in, mer_inst::in) is semidet.

inst_is_input({ModuleInfo, _InstMap}, Inst) :-
    inst_is_ground(ModuleInfo, Inst),
    inst_is_not_partly_unique(ModuleInfo, Inst).

%-----------------------------------------------------------------------------%

:- func add_outputs(module_info, prog_vars, hlds_goal, prog_vars) =
    prog_vars.

add_outputs(ModuleInfo, UUVs, Goal, InvVars) =
    list.foldl(add_output(UUVs), goal_outputs(ModuleInfo, Goal), InvVars).

:- func add_output(prog_vars, prog_var, prog_vars) = prog_vars.

add_output(UniquelyUsedVars, X, InvVars) =
    ( if   not list.member(X, InvVars),
           not list.member(X, UniquelyUsedVars)
      then [X | InvVars]
      else InvVars
    ).

%-----------------------------------------------------------------------------%

:- func compute_initial_aux_instmap(hlds_goals, instmap) = instmap.

compute_initial_aux_instmap(Gs, IM) = list.foldl(ApplyGoalInstMap, Gs, IM) :-
    ApplyGoalInstMap =
        ( func(hlds_goal(_GoalExpr, GoalInfo), IM0) = IM1 :-
            goal_info_get_instmap_delta(GoalInfo, IMD),
            apply_instmap_delta(IM0, IMD, IM1)
        ).

%-----------------------------------------------------------------------------%

:- pred create_aux_pred(pred_proc_id::in, prog_vars::in, prog_vars::in,
    instmap::in, pred_proc_id::out, hlds_goal::out, pred_info::out,
    proc_info::out, module_info::in, module_info::out) is det.

create_aux_pred(PredProcId, HeadVars, ComputedInvArgs,
        InitialAuxInstMap, AuxPredProcId, CallAux,
        AuxPredInfo, AuxProcInfo, ModuleInfo0, ModuleInfo) :-
    PredProcId = proc(PredId, ProcId),

    AuxHeadVars = HeadVars ++ ComputedInvArgs,

    module_info_get_name(ModuleInfo0, ModuleName),
    module_info_pred_proc_info(ModuleInfo0, PredId, ProcId,
        PredInfo, ProcInfo),

    proc_info_get_goal(ProcInfo, Goal @ hlds_goal(_GoalExpr, GoalInfo)),
    pred_info_get_typevarset(PredInfo, TVarSet),
    proc_info_get_vartypes(ProcInfo, VarTypes),
    pred_info_get_class_context(PredInfo, ClassContext),
    proc_info_get_rtti_varmaps(ProcInfo, RttiVarMaps),
    proc_info_get_varset(ProcInfo, VarSet),
    proc_info_get_inst_varset(ProcInfo, InstVarSet),
    pred_info_get_markers(PredInfo, Markers),
    pred_info_get_origin(PredInfo, OrigOrigin),

    PredName = pred_info_name(PredInfo),
    PredOrFunc = pred_info_is_pred_or_func(PredInfo),
    goal_info_get_context(GoalInfo, Context),
    term.context_line(Context, Line),
    hlds_pred.proc_id_to_int(ProcId, ProcNo),
    AuxNamePrefix = string.format("loop_inv_%d", [i(ProcNo)]),
    make_pred_name_with_context(ModuleName, AuxNamePrefix,
        PredOrFunc, PredName, Line, 1, AuxPredSymName),
    (
        AuxPredSymName = unqualified(AuxPredName)
    ;
        AuxPredSymName = qualified(_ModuleSpecifier, AuxPredName)
    ),

    Origin = origin_transformed(transform_loop_invariant(ProcNo),
        OrigOrigin, PredId),
    hlds_pred.define_new_pred(
        Origin,         % in    - The origin of this new predicate
        Goal,           % in    - The goal for the new aux proc.
        CallAux,        % out   - How we can call the new aux proc.
        AuxHeadVars,    % in    - The args for the new aux proc.
        _ExtraArgs,     % out   - Extra args prepended to Args for typeinfo
                        %           liveness purposes.
        InitialAuxInstMap,
                        % in    - The initial instmap for the new aux proc.
        AuxPredName,    % in    - The name of the new aux proc.
        TVarSet,        % in    - ???
        VarTypes,       % in    - The var -> type mapping for the new aux proc.
        ClassContext,   % in    - Typeclass constraints on the new aux proc.
        RttiVarMaps,    % in    - type_info and typeclass_info locations.
        VarSet,         % in    - ???
        InstVarSet,     % in    - ???
        Markers,        % in    - Markers for the new aux proc.
        address_is_not_taken,
                        % in    - The address of the new aux proc is not taken.
        ModuleInfo0,
        ModuleInfo,
        AuxPredProcId   % out   - The pred_proc_id for the new aux proc.
    ),

    % Note on CallAux:
    % - we change the call args as necessary in gen_aux_call;
    % - we handle the changes to nonlocals by requantifying
    %   over the entire goal after we've transformed it.

    AuxPredProcId = proc(AuxPredId, AuxProcId),
    module_info_pred_proc_info(ModuleInfo, AuxPredId, AuxProcId, AuxPredInfo,
        AuxProcInfo).

%-----------------------------------------------------------------------------%

:- type gen_aux_proc_info
    --->    gen_aux_proc_info(
                module_info             :: module_info,
                inv_goals               :: hlds_goals,
                pred_proc_id            :: pred_proc_id,
                call_aux_goal           :: hlds_goal
            ).

    % Replace the invariant goals in the original Body
    % with just `true' in the new AuxBody.
    %
:- pred gen_aux_proc(hlds_goals::in, pred_proc_id::in, pred_proc_id::in,
    hlds_goal::in, hlds_goal::in, pred_info::in, proc_info::in,
    module_info::in, module_info::out) is det.

gen_aux_proc(InvGoals, PredProcId, AuxPredProcId, CallAux, Body,
        AuxPredInfo, !.AuxProcInfo, !ModuleInfo) :-

        % Compute the aux proc body.
        %
    GapInfo = gen_aux_proc_info(!.ModuleInfo, InvGoals, PredProcId, CallAux),
    AuxBody = gen_aux_proc_2(GapInfo, Body),

        % Put the new proc body and instmap into the module_info.
        %
    AuxPredProcId = proc(AuxPredId, AuxProcId),
    hlds_pred.proc_info_set_goal(AuxBody, !AuxProcInfo),

    requantify_proc(!AuxProcInfo),
    recompute_instmap_delta_proc(no, !AuxProcInfo, !ModuleInfo),

    module_info_set_pred_proc_info(AuxPredId, AuxProcId,
        AuxPredInfo, !.AuxProcInfo, !ModuleInfo).

%-----------------------------------------------------------------------------%

:- func gen_aux_proc_2(gen_aux_proc_info, hlds_goal) = hlds_goal.

gen_aux_proc_2(Info,
        hlds_goal(Call @ plain_call(PredId, ProcId, _,_,_,_), GoalInfo)) =
    ( if   proc(PredId, ProcId) = Info ^ pred_proc_id
      then gen_aux_call(Info ^ call_aux_goal, hlds_goal(Call, GoalInfo))
      else gen_aux_proc_handle_non_recursive_call(Info,
        hlds_goal(Call, GoalInfo))
    ).

gen_aux_proc_2(Info, hlds_goal(Call @ generic_call(_, _, _, _), GoalInfo)) =
    gen_aux_proc_handle_non_recursive_call(Info, hlds_goal(Call, GoalInfo)).

gen_aux_proc_2(Info, hlds_goal(Unification @ unify(_, _, _, _, _), GoalInfo)) =
    gen_aux_proc_handle_non_recursive_call(Info,
        hlds_goal(Unification, GoalInfo)).

gen_aux_proc_2(Info,
        hlds_goal(ForeignProc @ call_foreign_proc(_, _, _, _, _, _, _),
            GoalInfo)) =
    gen_aux_proc_handle_non_recursive_call(Info,
        hlds_goal(ForeignProc, GoalInfo)).

gen_aux_proc_2(Info, hlds_goal(conj(ConjType, Conjuncts), GoalInfo)) =
    hlds_goal(conj(ConjType, gen_aux_proc_list(Info, Conjuncts)), GoalInfo).

gen_aux_proc_2(Info, hlds_goal(disj(Disjuncts), GoalInfo)) =
    hlds_goal(disj(gen_aux_proc_list(Info, Disjuncts)), GoalInfo).

gen_aux_proc_2(Info, hlds_goal(switch(Var, CanFail, Cases), GoalInfo)) =
    hlds_goal(switch(Var, CanFail, gen_aux_proc_switch(Info, Cases)),
        GoalInfo).

gen_aux_proc_2(Info, hlds_goal(negation(NegatedGoal), GoalInfo)) =
    hlds_goal(negation(gen_aux_proc_2(Info, NegatedGoal)), GoalInfo).

gen_aux_proc_2(Info, hlds_goal(scope(Reason, QuantifiedGoal), GoalInfo)) =
    hlds_goal(scope(Reason, gen_aux_proc_2(Info, QuantifiedGoal)), GoalInfo).

gen_aux_proc_2(Info,
        hlds_goal(if_then_else(XVars, Cond, Then, Else), GoalInfo)) =
    hlds_goal(
        if_then_else(XVars,
             gen_aux_proc_2(Info, Cond),
             gen_aux_proc_2(Info, Then),
             gen_aux_proc_2(Info, Else)
        ),
        GoalInfo).

gen_aux_proc_2(_Info, hlds_goal(shorthand(_), _GoalInfo)) = _ :-
    unexpected(this_file, "gen_aux_proc_2/2: shorthand/1 in hlds_goal").

%-----------------------------------------------------------------------------%

:- func gen_aux_proc_list(gen_aux_proc_info, hlds_goals) = hlds_goals.

gen_aux_proc_list(Info, Goals) = list.map(gen_aux_proc_2(Info), Goals).

%-----------------------------------------------------------------------------%

:- func gen_aux_proc_switch(gen_aux_proc_info, list(case)) = list(case).

gen_aux_proc_switch(Info, Cases) =
    list.map(
        func(case(CaseId, Goal)) = case(CaseId, gen_aux_proc_2(Info, Goal)),
        Cases
    ).

%-----------------------------------------------------------------------------%

:- func gen_aux_proc_handle_non_recursive_call(gen_aux_proc_info, hlds_goal) =
    hlds_goal.

gen_aux_proc_handle_non_recursive_call(Info, Goal0) =
    ( if   invariant_goal(Info ^ inv_goals, Goal0)
      then true_goal
      else Goal0
    ).

%-----------------------------------------------------------------------------%

    % We construct OutProc by replacing recursive calls to the InProc at the
    % end of recursive paths with calls to the auxiliary procedure.
    %
:- pred gen_out_proc(pred_proc_id::in, pred_info::in,
    proc_info::in, proc_info::out, hlds_goal::in, hlds_goal::in,
    module_info::in, module_info::out) is det.

gen_out_proc(PredProcId, PredInfo0, ProcInfo0, ProcInfo, CallAux, Body0,
        ModuleInfo0, ModuleInfo) :-

        % Compute the new procedure body.
        %
    Body = gen_out_proc_2(PredProcId, CallAux, Body0),

        % Put the new procedure body into the module_info.
        %
    PredProcId = proc(PredId, ProcId),

    proc_info_get_varset(ProcInfo0, VarSet),
    proc_info_get_vartypes(ProcInfo0, VarTypes),
    proc_info_get_headvars(ProcInfo0, HeadVars),
    proc_info_get_rtti_varmaps(ProcInfo0, RttiVarMaps),

    proc_info_set_body(VarSet, VarTypes, HeadVars, Body,
        RttiVarMaps, ProcInfo0, ProcInfo1),

    quantification.requantify_proc(ProcInfo1, ProcInfo2),
    recompute_instmap_delta_proc(no, ProcInfo2, ProcInfo,
        ModuleInfo0, ModuleInfo1),

    module_info_set_pred_proc_info(PredId, ProcId,
        PredInfo0, ProcInfo, ModuleInfo1, ModuleInfo).

%-----------------------------------------------------------------------------%

    % gen_out_proc_2(PredProcId, CallAux, Goal0) = Goal:
    %
    % Goal is Goal0 with calls to PredProcId replaced with CallAux.
    %
:- func gen_out_proc_2(pred_proc_id, hlds_goal, hlds_goal) = hlds_goal.

gen_out_proc_2(PPId, CallAux,
        hlds_goal(Call @ plain_call(PredId, ProcId, _, _, _, _), GoalInfo)) =
    ( if   proc(PredId, ProcId) = PPId
      then gen_aux_call(CallAux, hlds_goal(Call, GoalInfo))
      else hlds_goal(Call, GoalInfo)
    ).

gen_out_proc_2(_PPId, _CallAux,
        hlds_goal(Call @ generic_call(_, _, _, _), GoalInfo)) =
    hlds_goal(Call, GoalInfo).

gen_out_proc_2(_PPId, _CallAux,
        hlds_goal(Unification @ unify(_, _, _, _, _), GoalInfo)) =
    hlds_goal(Unification, GoalInfo).

gen_out_proc_2(_PPId, _CallAux,
        hlds_goal(ForeignProc @ call_foreign_proc(_, _, _, _, _, _, _),
            GoalInfo)) =
    hlds_goal(ForeignProc, GoalInfo).

gen_out_proc_2(PPId, CallAux,
        hlds_goal(conj(ConjType, Conjuncts), GoalInfo)) =
    hlds_goal(
        conj(ConjType, list.map(gen_out_proc_2(PPId, CallAux), Conjuncts)),
        GoalInfo).

gen_out_proc_2(PPId, CallAux,
        hlds_goal(disj(Disjuncts), GoalInfo)) =
    hlds_goal(
        disj(list.map(gen_out_proc_2(PPId, CallAux), Disjuncts)),
        GoalInfo).

gen_out_proc_2(PPId, CallAux,
        hlds_goal(switch(Var, CanFail, Cases), GoalInfo)) =
    hlds_goal(switch(Var, CanFail, list.map(GOPCase, Cases)), GoalInfo)
 :-
    GOPCase =
        ( func(case(ConsId, Goal)) =
                case(ConsId, gen_out_proc_2(PPId, CallAux, Goal)) ).

gen_out_proc_2(PPId, CallAux,
        hlds_goal(negation(NegatedGoal), GoalInfo)) =
    hlds_goal(negation(gen_out_proc_2(PPId, CallAux, NegatedGoal)), GoalInfo).

gen_out_proc_2(PPId, CallAux,
        hlds_goal(scope(Reason, QuantifiedGoal), GoalInfo)) =
    hlds_goal(
        scope(Reason, gen_out_proc_2(PPId, CallAux, QuantifiedGoal)),
        GoalInfo).

gen_out_proc_2(PPId, CallAux,
        hlds_goal(if_then_else(XVars, Cond, Then, Else), GoalInfo)) =
    hlds_goal(
        if_then_else( XVars,
            gen_out_proc_2(PPId, CallAux, Cond),
            gen_out_proc_2(PPId, CallAux, Then),
            gen_out_proc_2(PPId, CallAux, Else)),
        GoalInfo).

gen_out_proc_2(_PPId, _CallAux, hlds_goal(shorthand(_), _GoalInfo)) = _ :-
    unexpected(this_file, "gen_out_proc_2/3: shorthand/1 in hlds_goal").

%-----------------------------------------------------------------------------%

:- func gen_aux_call(hlds_goal, hlds_goal) = hlds_goal.

gen_aux_call(hlds_goal(CallAux0, _CallAuxInfo0), hlds_goal(Call, CallInfo)) =
    ( if
        AuxArgs0      = CallAux0   ^ call_args,
        Args0         = Call       ^ call_args,
        Args          = replace_initial_args(Args0, AuxArgs0),
        CallAux       = ( CallAux0 ^ call_args := Args )

        % Note that one might expect instmap_delta to change, however the
        % invariant arguments are just that -invariant- hence their insts
        % are not changed by the recursive call and there is no need
        % to adjust the instmap_delta.  All other fields are correct for
        % CallInfo.
      then
        hlds_goal(CallAux, CallInfo)
      else
        unexpected(this_file, "gen_aux_call/2: args not both ordinary calls")
    ).

%-----------------------------------------------------------------------------%

:- func replace_initial_args(list(T), list(T)) = list(T).

replace_initial_args([],       Ys      ) = Ys.

replace_initial_args([X | Xs], [_ | Ys]) = [X | replace_initial_args(Xs, Ys)].

replace_initial_args([_ | _],  []      ) = _ :-
    unexpected(this_file,
        "replace_initial_args/2: first arg longer than second").

%-----------------------------------------------------------------------------%

    % This predicate computes the set of variables that are used as (partly)
    % unique inputs to goals.  This information is needed because unique local
    % values for which uniqueness is important cannot be hoisted, although
    % those for which uniqueness is inferred, but not important, can be
    % hoisted.
    %
    % TODO: get this to handle unification properly.  See the XXX below.
    %
:- func uniquely_used_vars(module_info, hlds_goal) = prog_vars.

uniquely_used_vars(ModuleInfo, Goal) =
    list.sort_and_remove_dups(uniquely_used_vars_2(ModuleInfo, Goal)).

%-----------------------------------------------------------------------------%

:- func uniquely_used_vars_2(module_info, hlds_goal) = prog_vars.

uniquely_used_vars_2(ModuleInfo, Goal) =
    uniquely_used_vars_3(ModuleInfo, Goal ^ hlds_goal_expr).

:- func uniquely_used_vars_3(module_info, hlds_goal_expr) = prog_vars.

uniquely_used_vars_3(MI, plain_call(PredId, ProcId, Args, _, _, _)) =
    list.filter_map_corresponding(uniquely_used_args(MI), Args,
        argmodes(MI, PredId, ProcId)).

uniquely_used_vars_3(MI, generic_call(_, Args, Modes, _)) =
    list.filter_map_corresponding(uniquely_used_args(MI), Args, Modes).

uniquely_used_vars_3(MI,
        call_foreign_proc(_, PredId, ProcId, Args, Extras, _, _)) =
    %
    % XXX `Extras' should be empty for pure calls.  We cannot apply LIO to
    % non-pure goals so we shouldn't need to consider `Extras'.  However, we
    % currently don't deal with the situation where we may be trying to apply
    % LIO to a non-pure goal until *after* we have called this predicate, so
    % `Extras' may not be empty.  As a work-around we just add any variables
    % in `Extras' to the set of variables that cannot be hoisted.
    %
    list.filter_map_corresponding(uniquely_used_args(MI),
        list.map(foreign_arg_var, Args),
        argmodes(MI,PredId,ProcId)) ++ list.map(foreign_arg_var, Extras).

    % XXX This is very conservative!
    %
uniquely_used_vars_3(_MI, unify(_LHS, _RHS, _UMode, _UKind, _)) = [].

uniquely_used_vars_3(MI, conj(_, Conjuncts)) =
    list.condense(list.map(uniquely_used_vars_2(MI), Conjuncts)).

uniquely_used_vars_3(MI, disj(Disjuncts)) =
    list.condense(list.map(uniquely_used_vars_2(MI), Disjuncts)).

uniquely_used_vars_3(MI, switch(_, _, Cases)) =
    list.condense(list.map(uniquely_used_vars_2(MI), case_goals(Cases))).

uniquely_used_vars_3(MI, negation(NegatedGoal)) =
    uniquely_used_vars_2(MI, NegatedGoal).

uniquely_used_vars_3(MI, scope(_, QuantifiedGoal)) =
    uniquely_used_vars_2(MI, QuantifiedGoal).

uniquely_used_vars_3(MI, if_then_else(_, Cond, Then, Else)) =
    uniquely_used_vars_2(MI, Cond) ++
        uniquely_used_vars_2(MI, Then) ++
            uniquely_used_vars_2(MI, Else).

uniquely_used_vars_3(_MI, shorthand(_)) = _ :-
    unexpected(this_file, "uniquely_used_vars_3/2: shorthand/1 in hlds_goal").

%-----------------------------------------------------------------------------%

:- func uniquely_used_args(module_info, prog_var, mer_mode) = prog_var
    is semidet.

uniquely_used_args(MI, X, M) = X :-
    mode_get_insts(MI, M, InInst, _OutInst),
    not inst_is_not_partly_unique(MI, InInst).

%-----------------------------------------------------------------------------%

:- func argmodes(module_info, pred_id, proc_id) = list(mer_mode).

argmodes(ModuleInfo, PredId, ProcId) = ArgModes :-
    module_info_pred_proc_info(ModuleInfo, PredId, ProcId, _, ProcInfo),
    proc_info_get_argmodes(ProcInfo, ArgModes).

%-----------------------------------------------------------------------------%

    % Find the list of vars for a goal that are free before the call.
    % This only applies to calls and unifications.
    %
:- func goal_inputs(module_info, hlds_goal) = prog_vars.

goal_inputs(ModuleInfo, Goal) =
    goal_expr_inputs(ModuleInfo, Goal ^ hlds_goal_expr).

:- func goal_expr_inputs(module_info, hlds_goal_expr) = prog_vars.

goal_expr_inputs(MI, plain_call(PredId, ProcId, Args, _, _, _)) =
    list.filter_map_corresponding(input_arg(MI), Args,
        argmodes(MI, PredId, ProcId)).

goal_expr_inputs(MI, generic_call(_, Args, ArgModes, _)) =
    list.filter_map_corresponding(input_arg(MI), Args, ArgModes).

goal_expr_inputs(MI, call_foreign_proc(_, PredId, ProcId, Args, _, _, _)) =
    list.filter_map_corresponding(input_arg(MI),
        list.map(foreign_arg_var, Args), argmodes(MI, PredId, ProcId)).

goal_expr_inputs(MI, unify(LHS, UnifyRHS, _, Kind, _)) = Inputs :-
    (
            % The LHS is always an output var in constructions.
            %
        Kind   = construct(_, _, RHSArgs, ArgUniModes, _, _, _),
        Inputs = list.filter_map_corresponding(
                        input_arg(MI), RHSArgs, rhs_modes(ArgUniModes))
    ;
            % The LHS is always in input var in deconstructions.
            %
        Kind   = deconstruct(_, _, RHSArgs, ArgUniModes, _, _),
        Inputs = [ LHS
                 | list.filter_map_corresponding(
                        input_arg(MI), RHSArgs, rhs_modes(ArgUniModes)) ]
    ;
            % The RHS is the only input in an assignment.
            %
        Kind   = assign(_, RHS),
        Inputs = [RHS]
    ;
            % Both sides of a simple test are inputs.
            %
        Kind   = simple_test(_, RHS),
        Inputs = [LHS, RHS]
    ;
            % Both sides of a complicated unification are inputs.
            %
        Kind   = complicated_unify(_, _, _),
        Inputs = ( if UnifyRHS = rhs_var(RHS) then [LHS, RHS] else [LHS] )
    ).

goal_expr_inputs(_MI, conj(_, _)) = _ :-
    unexpected(this_file, "goal_expr_inputs/2: conj/2 in hlds_goal").

goal_expr_inputs(_MI, switch(_, _, _)) = _ :-
    unexpected(this_file, "goal_expr_inputs/2: switch/3 in hlds_goal").

goal_expr_inputs(_MI, disj(_)) = _ :-
    unexpected(this_file, "goal_expr_inputs/2: disj/1 in hlds_goal").

goal_expr_inputs(_MI, negation(_)) = _ :-
    unexpected(this_file, "goal_expr_inputs/2: negation/1 in hlds_goal").

goal_expr_inputs(_MI, scope(_, _)) = _ :-
    unexpected(this_file, "goal_expr_inputs/2: some/3 in hlds_goal").

goal_expr_inputs(_MI, if_then_else(_, _, _, _)) = _ :-
    unexpected(this_file, "goal_expr_inputs/2: if_then_else/4 in hlds_goal").

goal_expr_inputs(_MI, shorthand(_)) = _ :-
    unexpected(this_file, "goal_expr_inputs/2: shorthand/1 in hlds_goal").

%-----------------------------------------------------------------------------%

    % An input arg is one whose pre-call inst is not free.
    %
:- func input_arg(module_info, prog_var, mer_mode) = prog_var is semidet.

input_arg(MI, X, M) = X :-
    mode_get_insts(MI, M, InInst, _OutInst),
    not inst_is_free(MI, InInst).

%-----------------------------------------------------------------------------%

    % Find the list of vars for a goal that are free before the call.
    % This only applies to calls and unifications.
    %
:- func goal_outputs(module_info, hlds_goal) = prog_vars.

goal_outputs(ModuleInfo, Goal) =
    goal_expr_outputs(ModuleInfo, Goal ^ hlds_goal_expr).

:- func goal_expr_outputs(module_info, hlds_goal_expr) = prog_vars.

goal_expr_outputs(MI, plain_call(PredId, ProcId, Args, _, _, _)) =
    list.filter_map_corresponding(output_arg(MI), Args,
        argmodes(MI, PredId, ProcId)).

goal_expr_outputs(MI, generic_call(_, Args, ArgModes, _)) =
    list.filter_map_corresponding(output_arg(MI), Args, ArgModes).

goal_expr_outputs(MI, call_foreign_proc(_, PredId, ProcId, Args, _, _, _)) =
    list.filter_map_corresponding(output_arg(MI),
        list.map(foreign_arg_var, Args), argmodes(MI, PredId, ProcId)).

goal_expr_outputs(MI, unify(LHS, _RHS, _, Kind, _)) = Outputs :-
    (
            % The LHS is the only output in a construction.
            %
        Kind    = construct(_, _, _, _, _, _, _),
        Outputs = [LHS]
    ;
            % The LHS is always in input in deconstructions.
            %
        Kind    = deconstruct(_, _, RHSArgs, ArgUniModes, _, _),
        Outputs = list.filter_map_corresponding(
                            output_arg(MI), RHSArgs, rhs_modes(ArgUniModes))
    ;
            % The LHS is the only output in an assignment.
            %
        Kind    = assign(_, _),
        Outputs = [LHS]
    ;
            % Both sides of a simple test are inputs.
            %
        Kind    = simple_test(_, _),
        Outputs = []
    ;
            % Both sides of a complicated unification are inputs.
            %
        Kind    = complicated_unify(_, _, _),
        Outputs = []
    ).

goal_expr_outputs(_MI, conj(_, _)) = _ :-
    unexpected(this_file, "goal_expr_outputs/2: conj/2 in hlds_goal").

goal_expr_outputs(_MI, switch(_, _, _)) = _ :-
    unexpected(this_file, "goal_expr_outputs/2: switch/3 in hlds_goal").

goal_expr_outputs(_MI, disj(_)) = _ :-
    unexpected(this_file, "goal_expr_outputs/2: disj/1 in hlds_goal").

goal_expr_outputs(_MI, negation(_)) = _ :-
    unexpected(this_file, "goal_expr_outputs/2: negation/1 in hlds_goal").

goal_expr_outputs(_MI, scope(_, _)) = _ :-
    unexpected(this_file, "goal_expr_outputs/2: some/3 in hlds_goal").

goal_expr_outputs(_MI, if_then_else(_, _, _, _)) = _ :-
    unexpected(this_file, "goal_expr_outputs/2: if_then_else/4 in hlds_goal").

goal_expr_outputs(_MI, shorthand(_)) = _ :-
    unexpected(this_file, "goal_expr_outputs/2: shorthand/1 in hlds_goal").

%-----------------------------------------------------------------------------%

    % An output arg is one whose pre-call inst is free.
    %
:- func output_arg(module_info, prog_var, mer_mode) = prog_var is semidet.

output_arg(MI, X, M) = X :-
    mode_get_insts(MI, M, InInst, _OutInst),
    inst_is_free(MI, InInst).

%-----------------------------------------------------------------------------%

:- func rhs_modes(list(uni_mode)) = list(mer_mode).

rhs_modes(UniModes) =
    list.map(func((_ - Pre) -> (_ - Post)) = (Pre -> Post), UniModes).

%-----------------------------------------------------------------------------%

:- func lhs_modes(list(uni_mode)) = list(mer_mode).

lhs_modes(UniModes) =
    list.map(func((Pre - _) -> (Post - _)) = (Pre -> Post), UniModes).

%-----------------------------------------------------------------------------%

:- func this_file = string.

this_file = "loop_inv.m".

%-----------------------------------------------------------------------------%
:- end_module loop_inv.
%-----------------------------------------------------------------------------%
