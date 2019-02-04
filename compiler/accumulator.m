%-----------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et
%-----------------------------------------------------------------------------%
% Copyright (C) 1999-2000,2002-2007 The University of Melbourne.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury distribution.
%-----------------------------------------------------------------------------%
%
% Module: accumulator.m.
% Main authors: petdr.
%
% Attempts to transform a single proc to a tail recursive form by
% introducing accumulators.  The algorithm can do this if the code after
% the recursive call has either the order independent state update or
% associative property.
%
% /* Order independent State update property */
% :- promise all [A,B,S0,S]
%   (
%       (some[SA] (update(A, S0, SA), update(B, SA, S)))
%   <=>
%       (some[SB] (update(B, S0, SB), update(A, SB, S)))
%   ).
%
% /* Associativity property */
% :- promise all [A,B,C,ABC]
%   (
%       (some[AB] (assoc(A, B, AB), assoc(AB, C, ABC)))
%   <=>
%       (some[BC] (assoc(B, C, BC), assoc(A, BC, ABC)))
%   ).
%
% XXX What about exceptions and non-termination?
%
% The promise declarations above only provide promises about the declarative
% semantics, but in order to apply this optimization, we ought to check that
% it will preserve the operational semantics (modulo whatever changes are
% allowed by the language semantics options).
%
% Currently we check and respect the --fully-strict option, but not the
% --no-reorder-conj option. XXX we should check --no-reorder-conj!
% If --no-reorder-conj was set, it would still be OK to apply this
% transformation, but ONLY in cases where the goals which get reordered
% are guaranteed not to throw any exceptions.
%
% The algorithm implemented is a combination of the algorithms from
% "Making Mercury Programs Tail Recursive" and
% "State Update Transformation", which can be found at
% <http://www.cs.mu.oz.au/research/mercury/information/papers.html>.
%
% Note that currently "State Update Transformation" paper only resides
% in CVS papers archive in the directory update, but has been submitted
% to PPDP '00.
%
% The transformation recognises predicates in the form
%
% p(In, OutUpdate, OutAssoc) :-
%   minimal(In),
%   initialize(OutUpdate),
%   base(OutAssoc).
% p(In, OutUpdate, OutAssoc) :-
%   decompose(In, Current, Rest),
%   p(Rest, OutUpdate0, OutAssoc0),
%   update(Current, OutUpdate0, OutUpdate),
%   assoc(Current, OutAssoc0, OutAssoc).
%
% which can be transformed by the algorithm in "State Update
% Transformation" to
%
% p(In, OutUpdate, OutAssoc) :-
%   initialize(AccUpdate),
%   p_acc(In, OutUpdate, OutAssoc, AccUpdate).
%
% p_acc(In, OutUpdate, OutAssoc, AccUpdate) :-
%   minimal(In),
%   base(OutAssoc),
%   OutUpdate = AccUpdate.
% p_acc(In, OutUpdate, OutAssoc, AccUpdate0) :-
%   decompose(In, Current, Rest),
%   update(Current, AccUpdate0, AccUpdate),
%   p_acc(Rest, OutUpdate, OutAssoc0, AccUpdate),
%   assoc(Current, OutAssoc0, OutAssoc).
%
% we then apply the algorithm from "Making Mercury Programs Tail
% Recursive" to p_acc to obtain
%
% p_acc(In, OutUpdate, OutAssoc, AccUpdate) :-
%   minimal(In),
%   base(OutAssoc),
%   OutUpdate = AccUpdate.
% p_acc(In, OutUpdate, OutAssoc, AccUpdate0) :-
%   decompose(In, Current, Rest),
%   update(Current, AccUpdate0, AccUpdate),
%   p_acc2(Rest, OutUpdate, OutAssoc, AccUpdate, Current).
%
% p_acc2(In, OutUpdate, OutAssoc, AccUpdate0, AccAssoc0) :-
%   minimal(In),
%   base(Base),
%   assoc(AccAssoc0, Base, OutAssoc),
%   OutUpdate = AccUpdate0.
% p_acc2(In, OutUpdate, OutAssoc, AccUpdate0, AccAssoc0) :-
%   decompose(In, Current, Rest),
%   update(Current, AccUpdate0, AccUpdate),
%   assoc(AccAssoc0, Current, AccAssoc),
%   p_acc2(Rest, OutUpdate, OutAssoc, AccUpdate, AccAssoc).
%
% p_acc is no longer recursive and is only ever called from p, so we
% inline p_acc into p to obtain the final schema.
%
% p(In, OutUpdate, OutAssoc) :-
%   minimal(In),
%   base(OutAssoc),
%   initialize(AccUpdate),
%   OutUpdate = AccUpdate.
% p(In, OutUpdate, OutAssoc) :-
%   decompose(In, Current, Rest),
%   initialize(AccUpdate0),
%   update(Current, AccUpdate0, AccUpdate),
%   p_acc2(Rest, OutUpdate, OutAssoc, AccUpdate, Current).
%
% p_acc2(In, OutUpdate, OutAssoc, AccUpdate0, AccAssoc0) :-
%   minimal(In),
%   base(Base),
%   assoc(AccAssoc0, Base, OutAssoc),
%   OutUpdate = AccUpdate0.
% p_acc2(In, OutUpdate, OutAssoc, AccUpdate0, AccAssoc0) :-
%   decompose(In, Current, Rest),
%   update(Current, AccUpdate0, AccUpdate),
%   assoc(AccAssoc0, Current, AccAssoc),
%   p_acc2(Rest, OutUpdate, OutAssoc, AccUpdate, AccAssoc).
%
% The only real difficulty in this new transformation is identifying the
% initialize/1 and base/1 goals from the original base case.
%
% Note that if the recursive clause contains multiple calls to p, the
% transformation attempts to move each recursive call to the end
% until one succeeds.  This makes the order of independent recursive
% calls in the body irrelevant.
%
% XXX Replace calls to can_reorder_goals with calls to the version that
% use the intermodule-analysis framework.
%
%-----------------------------------------------------------------------------%

:- module transform_hlds.accumulator.
:- interface.

:- import_module hlds.hlds_module.
:- import_module hlds.hlds_pred.

:- import_module io.

:- pred accumulator.process_proc(pred_id::in, proc_id::in,
    proc_info::in, proc_info::out, module_info::in, module_info::out,
    io::di, io::uo) is det.

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- implementation.

:- import_module hlds.assertion.
:- import_module hlds.goal_util.
:- import_module hlds.hlds_data.
:- import_module hlds.hlds_error_util.
:- import_module hlds.hlds_goal.
:- import_module hlds.hlds_out.
:- import_module hlds.instmap.
:- import_module hlds.pred_table.
:- import_module hlds.quantification.
:- import_module libs.compiler_util.
:- import_module libs.globals.
:- import_module libs.options.
:- import_module mdbcomp.prim_data.
:- import_module parse_tree.error_util.
:- import_module parse_tree.prog_data.
:- import_module parse_tree.prog_mode.
:- import_module parse_tree.prog_util.
:- import_module transform_hlds.goal_store.

:- import_module assoc_list.
:- import_module bool.
:- import_module int.
:- import_module list.
:- import_module map.
:- import_module pair.
:- import_module set.
:- import_module solutions.
:- import_module string.
:- import_module term.
:- import_module varset.

%-----------------------------------------------------------------------------%

    % The form of the goal around the base and recursive cases.
    %
:- type top_level
    --->    switch_base_rec
    ;       switch_rec_base
    ;       disj_base_rec
    ;       disj_rec_base
    ;       ite_base_rec
    ;       ite_rec_base.

    % A goal is represented by two integers, the first integer
    % stores which conjunction the goal came from (base or
    % recursive), and the second stores the location of the goal in
    % the conjunction.
    %
:- type goal_id == pair(int).

    % The goal_store associates a goal with each goal_id.
    %
:- type goal_store == goal_store(goal_id).

    % A substitution from the first variable name to the second.
    %
:- type subst == map(prog_var, prog_var).

:- type warning
    --->    warn(prog_context, pred_id, prog_var, prog_var).
            % Warn that two prog_vars in call to pred_id
            % at prog_context were swapped, which may cause
            % an efficiency problem.

:- type warnings == list(warning).

%-----------------------------------------------------------------------------%

    % Attempt to transform a procedure into accumulator recursive form.
    %
process_proc(PredId, ProcId, !ProcInfo, !ModuleInfo, !IO) :-
    globals.io_lookup_bool_option(optimize_constructor_last_call_accumulator,
        DoLCO, !IO),
    globals.io_lookup_bool_option(fully_strict, FullyStrict, !IO),
    (
        module_info_pred_info(!.ModuleInfo, PredId, PredInfo),
        attempt_transform(ProcId, PredId, PredInfo, DoLCO, FullyStrict,
            !ProcInfo, !ModuleInfo, Warnings)
    ->
        globals.io_lookup_bool_option(very_verbose, VeryVerbose, !IO),
        (
            VeryVerbose = yes,
            io.write_string("% Accumulators introduced into ", !IO),
            hlds_out.write_pred_id(!.ModuleInfo, PredId, !IO),
            io.write_string("\n", !IO)
        ;
            VeryVerbose = no
        ),

        globals.io_lookup_bool_option(inhibit_accumulator_warnings,
            InhibitWarnings, !IO),
        (
            ( InhibitWarnings = yes
            ; Warnings = []
            )
        ->
            true
        ;
            pred_info_get_context(PredInfo, Context),
            PredPieces = describe_one_pred_name(!.ModuleInfo,
                should_module_qualify, PredId),
            write_error_pieces(Context, 0, [words("In") | PredPieces], !IO),

            proc_info_get_varset(!.ProcInfo, VarSet),
            output_warnings(Warnings, VarSet, !.ModuleInfo, !IO),

            Pieces1 = [words("Please ensure that these"),
                words("argument rearrangements do not introduce"),
                words("performance problems."),
                words("These warnings can be suppressed by"),
                words("`--inhibit-accumulator-warnings'.")],
            write_error_pieces(Context, 2, Pieces1, !IO),

            globals.io_lookup_bool_option(verbose_errors, VerboseErrors, !IO),
            (
                VerboseErrors = yes,
                Pieces2 = [words("If a predicate has been declared"),
                    words("associative via a `promise' declaration,"),
                    words("the compiler will rearrange the order of"),
                    words("the arguments in calls to that predicate,"),
                    words("if by so doing it makes the containing predicate"),
                    words("tail recursive. In such situations, the compiler"),
                    words("will issue this warning. If this reordering"),
                    words("changes the performance characteristics"),
                    words("of the call to the predicate, use"),
                    words("`--no-accumulator-introduction' to turn"),
                    words("the optimization off, or "),
                    words("`--inhibit-accumulator-warnings' to turn off"),
                    words("the warnings.")],
                write_error_pieces(Context, 2, Pieces2, !IO)
            ;
                VerboseErrors = no,
                globals.io_set_extra_error_info(yes, !IO)
            ),
            globals.io_lookup_bool_option(halt_at_warn, HaltAtWarn, !IO),
            (
                HaltAtWarn = yes,
                io.set_exit_status(1, !IO),
                module_info_incr_errors(!ModuleInfo)
            ;
                HaltAtWarn = no
            )
        )
    ;
        true
    ).

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- pred output_warnings(list(warning)::in, prog_varset::in,
    module_info::in, io::di, io::uo) is det.

output_warnings([], _, _, !IO).
output_warnings([W | Ws], VarSet, ModuleInfo, !IO) :-
    output_warning(W, VarSet, ModuleInfo, Context, Format),
    write_error_pieces(Context, 2, Format, !IO),
    output_warnings(Ws, VarSet, ModuleInfo, !IO).

:- pred output_warning(warning::in, prog_varset::in, module_info::in,
    prog_context::out, list(format_component)::out) is det.

output_warning(warn(Context, PredId, VarA, VarB), VarSet, ModuleInfo,
        Context, Formats) :-
    PredPieces = describe_one_pred_name(ModuleInfo, should_module_qualify,
        PredId),

    varset.lookup_name(VarSet, VarA, VarAStr0),
    varset.lookup_name(VarSet, VarB, VarBStr0),
    VarAStr = string.append_list(["`", VarAStr0, "'"]),
    VarBStr = string.append_list(["`", VarBStr0, "'"]),

    Formats = [words("warning: the call to")] ++ PredPieces ++
        [words("has had the location of the variables"),
        words(VarAStr), words("and"), words(VarBStr),
        words("swapped to allow accumulator introduction.")].

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

    % attempt_transform is only true iff the current
    % proc has been transformed to call the newly created
    % accumulator proc.
    %
:- pred attempt_transform(proc_id::in, pred_id::in, pred_info::in,
    bool::in, bool::in, proc_info::in, proc_info::out,
    module_info::in, module_info::out, warnings::out) is semidet.

attempt_transform(ProcId, PredId, PredInfo, DoLCO, FullyStrict,
        !ProcInfo, !ModuleInfo, Warnings) :-
    proc_info_get_goal(!.ProcInfo, Goal0),
    proc_info_get_headvars(!.ProcInfo, HeadVars),
    proc_info_get_initial_instmap(!.ProcInfo, !.ModuleInfo,
        InitialInstMap),
    standardize(Goal0, Goal),
    identify_goal_type(PredId, ProcId, Goal, InitialInstMap,
        TopLevel, Base, BaseInstMap, Rec, RecInstMap),

    C = initialize_goal_store(Rec, RecInstMap, Base, BaseInstMap),
    identify_recursive_calls(PredId, ProcId, C, RecCallIds),
    M = list.length(Rec),
    attempt_transform_2(RecCallIds, C, M, Rec, HeadVars, InitialInstMap,
        TopLevel, DoLCO, FullyStrict, PredId, PredInfo,
        !ProcInfo, !ModuleInfo, Warnings).

    % attempt_transform_2 takes a list of locations of the recursive
    % calls, and attempts to introduce accumulator into each of the
    % recursive calls, stopping at the first one that succeeds.
    % This catches the following case, as selecting the first
    % recursive call allows the second recursive call to be moved
    % before it, and OutA is in the correct spot in list.append.
    %
    %   p(InA, OutA),
    %   p(InB, OutB),
    %   list.append(OutB, OutA, Out)
    %
:- pred attempt_transform_2(list(goal_id)::in, goal_store::in, int::in,
    hlds_goals::in, prog_vars::in, instmap::in, top_level::in,
    bool::in, bool::in, pred_id::in, pred_info::in,
    proc_info::in, proc_info::out, module_info::in, module_info::out,
    warnings::out) is semidet.

attempt_transform_2([Id | Ids], C, M, Rec, HeadVars, InitialInstMap, TopLevel,
        DoLCO, FullyStrict, PredId, PredInfo, !ProcInfo, !ModuleInfo,
        Warnings) :-
    (
        proc_info_get_vartypes(!.ProcInfo, VarTypes0),
        identify_out_and_out_prime(Id, Rec, HeadVars, InitialInstMap,
            VarTypes0, !.ModuleInfo, Out, OutPrime,
            HeadToCallSubst, CallToHeadSubst),
        stage1(Id, M, C, DoLCO, FullyStrict, VarTypes0, !.ModuleInfo, Sets),
        stage2(Id, C, Sets, OutPrime, Out, !.ModuleInfo, !.ProcInfo,
            VarSet, VarTypes, Accs, BaseCase, BasePairs, Substs, CS,
            WarningsPrime),
        stage3(Id, Accs, VarSet, VarTypes, C, CS, Substs,
            HeadToCallSubst, CallToHeadSubst, BaseCase, BasePairs, Sets, Out,
            TopLevel, PredId, PredInfo, !ProcInfo, !ModuleInfo)
    ->
        Warnings = WarningsPrime
    ;
        attempt_transform_2(Ids, C, M, Rec, HeadVars, InitialInstMap,
            TopLevel, DoLCO, FullyStrict, PredId, PredInfo, !ProcInfo,
            !ModuleInfo, Warnings)
    ).

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

    % Transform the goal into a standard form that is amenable to
    % introducing accumulators.
    %
    % At the moment all this does is remove any extra disj/conj
    % wrappers around the top level goal.
    %
    % Future work is for this code to rearrange code with multiple
    % base and recursive cases into a single base and recursive
    % case.
    %
:- pred standardize(hlds_goal::in, hlds_goal::out) is det.

standardize(Goal0, Goal) :-
    (
        Goal0 = hlds_goal(GoalExpr0, _),
        (
            GoalExpr0 = conj(plain_conj, [Goal1])
        ;
            GoalExpr0 = disj([Goal1])
        )
    ->
        standardize(Goal1, Goal)
    ;
        Goal = Goal0
    ).

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

    % This predicate takes the original goal and identifies the
    % `shape' of the goal around the recursive and base cases.
    % Note that the base case can contain a recursive call, as the
    % transformation doesn't depend on what is in the base case.
    %
:- pred identify_goal_type(pred_id::in, proc_id::in, hlds_goal::in,
    instmap::in, top_level::out, hlds_goals::out, instmap::out,
    hlds_goals::out, instmap::out) is semidet.

identify_goal_type(PredId, ProcId, Goal, InitialInstMap,
        Type, Base, BaseInstMap, Rec, RecInstMap) :-
    Goal = hlds_goal(GoalExpr, _GoalInfo),
    (
        GoalExpr = switch(_Var, _CanFail, Cases),
        Cases = [case(_IdA, GoalA), case(_IdB, GoalB)],
        goal_to_conj_list(GoalA, GoalAList),
        goal_to_conj_list(GoalB, GoalBList)
    ->
        ( is_recursive_case(GoalAList, proc(PredId, ProcId)) ->
            Type = switch_rec_base,
            Base = GoalBList,
            Rec = GoalAList
        ; is_recursive_case(GoalBList, proc(PredId, ProcId)) ->
            Type = switch_base_rec,
            Base = GoalAList,
            Rec = GoalBList
        ;
            fail
        ),
        BaseInstMap = InitialInstMap,
        RecInstMap = InitialInstMap
    ;
        GoalExpr = disj(Goals),
        Goals = [GoalA, GoalB],
        goal_to_conj_list(GoalA, GoalAList),
        goal_to_conj_list(GoalB, GoalBList)
    ->
        ( is_recursive_case(GoalAList, proc(PredId, ProcId)) ->
            Type = disj_rec_base,
            Base = GoalBList,
            Rec = GoalAList
        ; is_recursive_case(GoalBList, proc(PredId, ProcId)) ->
            Type = disj_base_rec,
            Base = GoalAList,
            Rec = GoalBList
        ;
            fail
        ),
        BaseInstMap = InitialInstMap,
        RecInstMap = InitialInstMap
    ;
        GoalExpr = if_then_else(_Vars, Cond, Then, Else),
        Cond = hlds_goal(_CondGoalExpr, CondGoalInfo),
        CondInstMapDelta = goal_info_get_instmap_delta(CondGoalInfo),

        goal_to_conj_list(Then, GoalAList),
        goal_to_conj_list(Else, GoalBList)
    ->
        ( is_recursive_case(GoalAList, proc(PredId, ProcId)) ->
            Type = ite_rec_base,
            Base = GoalBList,
            Rec = GoalAList,

            BaseInstMap = InitialInstMap,
            instmap.apply_instmap_delta(InitialInstMap, CondInstMapDelta,
                RecInstMap)
        ; is_recursive_case(GoalBList, proc(PredId, ProcId)) ->
            Type = ite_base_rec,
            Base = GoalAList,
            Rec = GoalBList,

            RecInstMap = InitialInstMap,
            instmap.apply_instmap_delta(InitialInstMap, CondInstMapDelta,
                BaseInstMap)
        ;
            fail
        )
    ;
        fail
    ).

    % is_recursive_case(Gs, Id) is true iff the list of goals, Gs,
    % contains a call to the procedure specified by Id, where the
    % call is located in a position that can be used by the
    % transformation (ie not hidden in a compound goal).
    %
:- pred is_recursive_case(list(hlds_goal)::in, pred_proc_id::in) is semidet.

is_recursive_case(Goals, proc(PredId, ProcId)) :-
    list.append(_Initial, [RecursiveCall | _Final], Goals),
    RecursiveCall = hlds_goal(plain_call(PredId, ProcId, _, _, _, _), _).

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

    % The store info is folded over the list of goals which
    % represent the base and recursive case conjunctions.
:- type store_info
    --->    store_info(
                store_loc       :: int,
                                % The location of the goal in the conjunction.
                store_instmap   :: instmap,
                store_goals     :: goal_store
            ).

    % Initialise the goal_store, which will hold the C_{a,b} goals.
    %
:- func initialize_goal_store(hlds_goals, instmap, hlds_goals, instmap)
    = goal_store.

initialize_goal_store(Rec, RecInstMap, Base, BaseInstMap) = C :-
    goal_store_init(C0),
    list.foldl(store(rec), Rec, store_info(1, RecInstMap, C0),
        store_info(_, _, C1)),
    list.foldl(store(base), Base, store_info(1, BaseInstMap, C1),
        store_info(_, _, C)).

    % store(Id, G, SI0, SI) is true iff the goal G is stored inside
    % the goal_store (which is part of SI) with the correct
    % identifier and instmap associated with the goal.
    %
:- pred store(int::in, hlds_goal::in, store_info::in, store_info::out) is det.

store(Identifier, Goal, store_info(N, IM0, GS0), store_info(N+1, IM, GS)) :-
    Goal = hlds_goal(_, GoalInfo),
    InstMapDelta = goal_info_get_instmap_delta(GoalInfo),
    instmap.apply_instmap_delta(IM0, InstMapDelta, IM),

    goal_store_det_insert(Identifier - N, Goal - IM0, GS0, GS).

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

    % Determine the k's which are recursive calls
    % Note that this doesn't find recursive calls which are `hidden'
    % in compound goals, this is not a problem as currently we can't
    % use these to do transformation.
:- pred identify_recursive_calls(pred_id::in, proc_id::in,
        goal_store::in, list(goal_id)::out) is det.

identify_recursive_calls(PredId, ProcId, GoalStore, Ids) :-
    P = (pred(Key::out) is nondet :-
        goal_store_member(GoalStore, Key, Goal - _InstMap),
        Key = rec - _,
        Goal = hlds_goal(plain_call(PredId, ProcId, _, _, _, _), _)
    ),
    solutions.solutions(P, Ids).

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

    % Determine the variables which are members of the sets Out and
    % Out', and initialize the substitutions between the two sets.
    %
    % This is done by identifing those variables whose
    % instantiatedness change in the goals after the recursive call
    % and are headvars.
    %
    % Note that we are only identifying the output variables which
    % will need to be accumulated, as there may be other output
    % variables which are produced prior to the recursive call.
    %
:- pred identify_out_and_out_prime(goal_id::in, hlds_goals::in, prog_vars::in,
    instmap::in, vartypes::in, module_info::in, prog_vars::out,
    prog_vars::out, subst::out, subst::out) is det.

identify_out_and_out_prime(_N - K, Rec, HeadVars, InitialInstMap, VarTypes,
        ModuleInfo, Out, OutPrime, HeadToCallSubst, CallToHeadSubst) :-
    (
        list.take(K, Rec, InitialGoals),
        list.drop(K-1, Rec, FinalGoals),
        FinalGoals = [hlds_goal(plain_call(_, _, Args, _, _, _), _) | Rest]
    ->
        goal_list_instmap_delta(InitialGoals, InitInstMapDelta),
        instmap.apply_instmap_delta(InitialInstMap,
            InitInstMapDelta, InstMapBeforeRest),

        goal_list_instmap_delta(Rest, InstMapDelta),
        instmap.apply_instmap_delta(InstMapBeforeRest,
            InstMapDelta, InstMapAfterRest),

        instmap_changed_vars(InstMapBeforeRest, InstMapAfterRest,
            VarTypes, ModuleInfo, ChangedVars),

        assoc_list.from_corresponding_lists(HeadVars, Args, HeadArg0),

        Member = (pred(M::in) is semidet :-
            M = HeadVar - _,
            set.member(HeadVar, ChangedVars)
        ),
        list.filter(Member, HeadArg0, HeadArg),
        list.map(fst, HeadArg, Out),
        list.map(snd, HeadArg, OutPrime),

        map.from_assoc_list(HeadArg, HeadToCallSubst),

        list.map((pred(X-Y::in, Y-X::out) is det), HeadArg, ArgHead),
        map.from_assoc_list(ArgHead, CallToHeadSubst)
    ;
        unexpected(this_file, "identify_out_and_out_prime")
    ).

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

    % For each goal after the recursive call, we place that goal
    % into a set according to what properties that goal has.
    % For the definition of what goes into each set, inspect the
    % documentation for the functions named before, assoc, and so on.
    %
:- type sets
    --->    sets(
                before          ::  set(goal_id),
                assoc           ::  set(goal_id),
                construct_assoc ::  set(goal_id),
                construct       ::  set(goal_id),
                update          ::  set(goal_id),
                reject          ::  set(goal_id)
            ).

    % Stage 1 is responsible for identifying which goals are
    % associative, which can be moved before the recursive call and
    % so on.
    %
:- pred stage1(goal_id::in, int::in, goal_store::in, bool::in, bool::in,
    vartypes::in, module_info::in, sets::out) is semidet.

stage1(N - K, M, GoalStore, DoLCO, FullyStrict, VarTypes, ModuleInfo, Sets) :-
    sets_init(Sets0),
    stage1_2(N - (K+1), K, M, GoalStore, FullyStrict, VarTypes, ModuleInfo,
        Sets0, Sets1),
    Sets1 = sets(Before, Assoc, ConstructAssoc, Construct, Update, Reject),
    Sets = sets(Before `set.union` set_upto(N, (K-1)), Assoc,
        ConstructAssoc, Construct, Update, Reject),

    % Continue the transformation only if the set reject is empty and
    % the set assoc or update contains something that needs to be moved
    % before the recursive call.
    set.empty(Reject),
    (
        not set.empty(Assoc)
    ;
        not set.empty(Update)
    ),
    (
        DoLCO = no,
        % If LCMC is not turned on then there must be no construction
        % unifications after the recursive call.
        set.empty(Construct),
        set.empty(ConstructAssoc)
    ;
        DoLCO = yes
    ).

    % For each goal after the recursive call decide which set
    % the goal belongs to.
    %
:- pred stage1_2(goal_id::in, int::in, int::in, goal_store::in,
    bool::in, vartypes::in, module_info::in, sets::in, sets::out) is det.

stage1_2(N - I, K, M, GoalStore, FullyStrict, VarTypes, ModuleInfo, !Sets) :-
    ( I > M ->
        true
    ;
        (
            before(N - I, K, GoalStore, !.Sets, FullyStrict, VarTypes,
                ModuleInfo)
        ->
            !:Sets = !.Sets ^ before := set.insert(!.Sets ^ before, N - I),
            stage1_2(N - (I+1), K, M, GoalStore, FullyStrict, VarTypes,
                ModuleInfo, !Sets)
        ;
            assoc(N - I, K, GoalStore, !.Sets, FullyStrict, VarTypes,
                ModuleInfo)
        ->
            !:Sets = !.Sets ^ assoc := set.insert(!.Sets ^ assoc, N - I),
            stage1_2(N - (I+1), K, M, GoalStore, FullyStrict, VarTypes,
                ModuleInfo, !Sets)
        ;
            construct(N - I, K, GoalStore, !.Sets, FullyStrict, VarTypes,
                ModuleInfo)
        ->
            !:Sets = !.Sets ^ construct :=
                set.insert(!.Sets ^ construct, N - I),
            stage1_2(N - (I+1), K, M, GoalStore, FullyStrict, VarTypes,
                ModuleInfo, !Sets)
        ;
            construct_assoc(N - I, K, GoalStore, !.Sets, FullyStrict, VarTypes,
                ModuleInfo)
        ->
            !:Sets = !.Sets ^ construct_assoc :=
                set.insert(!.Sets ^ construct_assoc, N-I),
            stage1_2(N - (I+1), K, M, GoalStore, FullyStrict, VarTypes,
                ModuleInfo, !Sets)
        ;
            update(N - I, K, GoalStore, !.Sets, FullyStrict, VarTypes,
                ModuleInfo)
        ->
            !:Sets = !.Sets ^ update := set.insert(!.Sets ^ update, N - I),
            stage1_2(N - (I+1), K, M, GoalStore, FullyStrict, VarTypes,
                ModuleInfo, !Sets)
        ;
            !:Sets = !.Sets ^ reject := set.insert(!.Sets ^ reject, N - I)
        )
    ).

%-----------------------------------------------------------------------------%

:- pred sets_init(sets::out) is det.

sets_init(Sets) :-
    set.init(EmptySet),
    Before = EmptySet,
    Assoc = EmptySet,
    ConstructAssoc = EmptySet,
    Construct = EmptySet,
    Update = EmptySet,
    Reject = EmptySet,
    Sets = sets(Before, Assoc, ConstructAssoc, Construct, Update, Reject).

    % set_upto(N, K) returns the set {(N,1)...(N,K)}.
    %
:- func set_upto(int, int) = set(goal_id).

set_upto(N, K) = Set :-
    ( K =< 0 ->
        set.init(Set)
    ;
        Set0 = set_upto(N, K-1),
        set.insert(Set0, pair(N, K), Set)
    ).

%-----------------------------------------------------------------------------%

    % A goal is a member of the before set iff the goal only depends on
    % goals which are before the recursive call or can be moved
    % before the recursive call (member of the before set).
    %
:- pred before(goal_id::in, int::in, goal_store::in, sets::in,
    bool::in, vartypes::in, module_info::in) is semidet.

before(N - I, K, GoalStore, sets(Before, _, _, _, _, _),
        FullyStrict, VarTypes, ModuleInfo) :-
    goal_store_lookup(GoalStore, N - I, LaterGoal - LaterInstMap),
    (
        member_lessthan_goalid(GoalStore, N - I, N - J,
            EarlierGoal - EarlierInstMap),
        not can_reorder_goals_old(ModuleInfo, VarTypes, FullyStrict,
            EarlierInstMap, EarlierGoal, LaterInstMap, LaterGoal)
    )
    =>
    (
        set.member(N - J, set_upto(N, K-1) `union` Before)
    ).

    % A goal is a member of the assoc set iff the goal only depends
    % on goals upto and including the recursive call and goals which
    % can be moved before the recursive call (member of the before
    % set) AND the goal is associative.
    %
:- pred assoc(goal_id::in, int::in, goal_store::in, sets::in, bool::in,
    vartypes::in, module_info::in) is semidet.

assoc(N - I, K, GoalStore, sets(Before, _, _, _, _, _),
        FullyStrict, VarTypes, ModuleInfo) :-
    goal_store_lookup(GoalStore, N - I, LaterGoal - LaterInstMap),
    LaterGoal = hlds_goal(plain_call(PredId, _, Args, _, _, _), _),
    is_associative(PredId, ModuleInfo, Args, _),
    (
        member_lessthan_goalid(GoalStore, N - I, _N - J,
            EarlierGoal - EarlierInstMap),
        not can_reorder_goals_old(ModuleInfo, VarTypes, FullyStrict,
            EarlierInstMap, EarlierGoal, LaterInstMap, LaterGoal)
    )
    =>
    (
        set.member(N - J, set_upto(N, K) `union` Before)
    ).

    % A goal is a member of the construct set iff the goal only depends
    % on goals upto and including the recursive call and goals which
    % can be moved before the recursive call (member of the before
    % set) AND the goal is construction unification.
    %
:- pred construct(goal_id::in, int::in, goal_store::in, sets::in,
    bool::in, vartypes::in, module_info::in) is semidet.

construct(N - I, K, GoalStore, sets(Before, _, _, Construct, _, _),
        FullyStrict, VarTypes, ModuleInfo) :-
    goal_store_lookup(GoalStore, N - I, LaterGoal - LaterInstMap),
    LaterGoal = hlds_goal(unify(_, _, _, Unify, _), _GoalInfo),
    Unify = construct(_, _, _, _, _, _, _),
    (
        member_lessthan_goalid(GoalStore, N - I, _N - J,
            EarlierGoal - EarlierInstMap),
        not can_reorder_goals_old(ModuleInfo, VarTypes, FullyStrict,
            EarlierInstMap, EarlierGoal, LaterInstMap, LaterGoal)
    )
    =>
    (
        set.member(N - J, set_upto(N, K) `union` Before `union` Construct)
    ).

    % A goal is a member of the construct_assoc set iff the goal
    % only depends on goals upto and including the recursive call
    % and goals which can be moved before the recursive call (member
    % of the before set) and goals which are associative AND the
    % goal is construction unification AND the there is only one
    % member of the assoc set which the construction unification
    % depends on AND the construction unification can be expressed
    % as a call to the member of the assoc set which the
    % construction unification depends on.
    %
:- pred construct_assoc(goal_id::in, int::in, goal_store::in, sets::in,
    bool::in, vartypes::in, module_info::in) is semidet.

construct_assoc(N - I, K, GoalStore, sets(Before, Assoc, ConstructAssoc,
        _, _, _), FullyStrict, VarTypes, ModuleInfo) :-
    goal_store_lookup(GoalStore, N - I, LaterGoal - LaterInstMap),
    LaterGoal = hlds_goal(unify(_, _, _, Unify, _), _GoalInfo),
    Unify = construct(_, ConsId, _, _, _, _, _),

    goal_store_all_ancestors(GoalStore, N - I, VarTypes, ModuleInfo,
        FullyStrict, Ancestors),

    set.singleton_set(Assoc `intersect` Ancestors, AssocId),
    goal_store_lookup(GoalStore, AssocId, AssocGoal - _AssocInstMap),
    AssocGoal = hlds_goal(plain_call(PredId, _, _, _, _, _), _),

    is_associative_construction(ConsId, PredId, ModuleInfo),
    (
        member_lessthan_goalid(GoalStore, N - I, _N - J,
            EarlierGoal - EarlierInstMap),
        not can_reorder_goals_old(ModuleInfo, VarTypes, FullyStrict,
            EarlierInstMap, EarlierGoal, LaterInstMap, LaterGoal)
    )
    =>
    (
        set.member(N - J, set_upto(N, K) `union` Before `union`
            Assoc `union` ConstructAssoc)
    ).

    % A goal is a member of the update set iff the goal only depends
    % on goals upto and including the recursive call and goals which
    % can be moved before the recursive call (member of the before
    % set) AND the goal updates some state.
    %
:- pred update(goal_id::in, int::in, goal_store::in, sets::in, bool::in,
    vartypes::in, module_info::in) is semidet.

update(N - I, K, GoalStore, sets(Before, _, _, _, _, _),
        FullyStrict, VarTypes, ModuleInfo) :-
    goal_store_lookup(GoalStore, N - I, LaterGoal - LaterInstMap),
    LaterGoal = hlds_goal(plain_call(PredId, _, Args, _, _, _), _),
    is_update(PredId, ModuleInfo, Args, _),
    (
        member_lessthan_goalid(GoalStore, N - I, _N - J,
            EarlierGoal - EarlierInstMap),
        not can_reorder_goals_old(ModuleInfo, VarTypes, FullyStrict,
            EarlierInstMap, EarlierGoal, LaterInstMap, LaterGoal)
    )
    =>
    (
        set.member(N - J, set_upto(N, K) `union` Before)
    ).

    % member_lessthan_goalid(GS, IdA, IdB, GB) is true iff the
    % goal_id, IdB, and its associated goal, GB, is a member of the
    % goal_store, GS, and IdB is less than IdA.
    %
:- pred member_lessthan_goalid(goal_store::in, goal_id::in,
    goal_id::out, stored_goal::out) is nondet.

member_lessthan_goalid(GoalStore, N - I, N - J, Goal) :-
    goal_store_member(GoalStore, N - J, Goal),
    J < I.

%-----------------------------------------------------------------------------%

:- type assoc
    --->    assoc(
                set(prog_var),      % the associative input args
                prog_var,           % the corresponding output arg
                bool                % is the predicate commutative?
            ).

    % If accumulator_is_associative is true, it returns the two
    % arguments which are associative and the variable which depends
    % on those two arguments, and an indicator of whether or not
    % the predicate is commutative.
    %
:- pred is_associative(pred_id::in, module_info::in, prog_vars::in, assoc::out)
    is semidet.

is_associative(PredId, ModuleInfo, Args, Result) :-
    module_info_pred_info(ModuleInfo, PredId, PredInfo),
    pred_info_get_assertions(PredInfo, Assertions),
    associativity_assertion(set.to_sorted_list(Assertions), ModuleInfo,
        Args, AssociativeVars, OutputVar),
    (
        commutativity_assertion(set.to_sorted_list(Assertions),
            ModuleInfo, Args, _CommutativeVars)
    ->
        IsCommutative = yes
    ;
        IsCommutative = no
    ),
    Result = assoc(AssociativeVars, OutputVar, IsCommutative).

    % Does there exist one (and only one) associativity assertion for the
    % current predicate.
    % The 'and only one condition' is required because we currently
    % don't handle the case of predicates which have individual
    % parts which are associative, because then we don't know which
    % variable is descended from which.
    %
:- pred associativity_assertion(list(assert_id)::in, module_info::in,
    prog_vars::in, set(prog_var)::out, prog_var::out) is semidet.

associativity_assertion([AssertId | AssertIds], ModuleInfo, Args0, VarAB,
        OutputVar) :-
    (
        assertion.is_associativity_assertion(ModuleInfo, AssertId,
            Args0, VarA - VarB, OutputVar0)
    ->
        \+ associativity_assertion(AssertIds, ModuleInfo, Args0, _, _),
        VarAB = set.list_to_set([VarA, VarB]),
        OutputVar = OutputVar0
    ;
        associativity_assertion(AssertIds, ModuleInfo, Args0, VarAB, OutputVar)
    ).

    % Does there exist one (and only one) commutativity assertion for the
    % current predicate.
    % The 'and only one condition' is required because we currently
    % don't handle the case of predicates which have individual
    % parts which are commutative, because then we don't know which
    % variable is descended from which.
    %
:- pred commutativity_assertion(list(assert_id)::in, module_info::in,
    prog_vars::in, set(prog_var)::out) is semidet.

commutativity_assertion([AssertId | AssertIds], ModuleInfo, Args0,
        PossibleStaticVars) :-
    (
        assertion.is_commutativity_assertion(ModuleInfo, AssertId,
            Args0, StaticVarA - StaticVarB)
    ->
        \+ commutativity_assertion(AssertIds, ModuleInfo, Args0, _),
        PossibleStaticVars = set.list_to_set([StaticVarA, StaticVarB])
    ;
        commutativity_assertion(AssertIds, ModuleInfo, Args0,
            PossibleStaticVars)
    ).

%-----------------------------------------------------------------------------%

    % Does the current predicate update some state?
    %
:- pred is_update(pred_id::in, module_info::in, prog_vars::in,
    pair(prog_var)::out) is semidet.

is_update(PredId, ModuleInfo, Args, ResultStateVars) :-
    module_info_pred_info(ModuleInfo, PredId, PredInfo),

    pred_info_get_assertions(PredInfo, Assertions),

    list.filter_map(
        (pred(AssertId::in, StateVars::out) is semidet :-
            assertion.is_update_assertion(ModuleInfo, AssertId,
                PredId, Args, StateVars)
        ),
        set.to_sorted_list(Assertions), Result),

        % XXX maybe we should just match on the first result,
        % just in case there is duplicate promises.
    Result = [ResultStateVars].

%-----------------------------------------------------------------------------%

    % Can the construction unification be expressed as a call to the
    % specified predicate.
    %
:- pred is_associative_construction(cons_id::in, pred_id::in,
    module_info::in) is semidet.

is_associative_construction(ConsId, PredId, ModuleInfo) :-
    module_info_pred_info(ModuleInfo, PredId, PredInfo),
    pred_info_get_assertions(PredInfo, Assertions),
    list.filter(
        (pred(AssertId::in) is semidet :-
            assertion.is_construction_equivalence_assertion(ModuleInfo,
                AssertId, ConsId, PredId)
        ),
        set.to_sorted_list(Assertions), Result),
    Result = [_ | _].

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- type substs
    --->    substs(
                acc_var_subst       :: subst,
                rec_call_subst      :: subst,
                assoc_call_subst    :: subst,
                update_subst        :: subst
            ).

:- type base
    --->    base(
                init_update         :: set(goal_id),
                                    % goals which initialize update
                init_assoc          :: set(goal_id),
                                    % goals which initialize assoc
                other               :: set(goal_id)
                                    % other goals
            ).

    % Stage 2 is responsible for identifying the substitutions which
    % are needed to mimic the unfold/fold process that was used as
    % the justification of the algorithm in the paper.
    % It is also responsible for ensuring that the reordering of
    % arguments doesn't worsen the big-O complexity of the
    % procedure.
    % It also divides the base case into goals that initialize the
    % variables used by the update goals and those used by the assoc
    % goals and then all the rest.
    %
:- pred stage2(goal_id::in, goal_store::in, sets::in,
    prog_vars::in, prog_vars::in, module_info::in, proc_info::in,
    prog_varset::out, vartypes::out,
    prog_vars::out, base::out, list(pair(prog_var))::out,
    substs::out, goal_store::out, warnings::out) is semidet.

stage2(N - K, GoalStore, Sets, OutPrime, Out, ModuleInfo, ProcInfo0,
        !:VarSet, !:VarTypes, Accs, BaseCase, BasePairs,
        !:Substs, CS, Warnings) :-
    Sets = sets(Before0, Assoc, ConstructAssoc, Construct, Update, _),
    Before = Before0 `union` set_upto(N, K-1),

        % Note Update set is not placed in the after set, as the
        % after set is used to determine the variables that need
        % to be accumulated for the associative calls.
    After = Assoc `union` ConstructAssoc `union` Construct,

    P = (pred(Id::in, Set0::in, Set::out) is det :-
        goal_store_lookup(GoalStore, Id, Goal - _InstMap),
        Goal = hlds_goal(_GoalExpr, GoalInfo),
        NonLocals = goal_info_get_nonlocals(GoalInfo),
        Set = NonLocals `union` Set0
    ),
    list.foldl(P, set.to_sorted_list(Before), set.init, BeforeNonLocals),
    list.foldl(P, set.to_sorted_list(After), set.init, AfterNonLocals),
    InitAccs = BeforeNonLocals `intersect` AfterNonLocals,

    proc_info_get_varset(ProcInfo0, !:VarSet),
    proc_info_get_vartypes(ProcInfo0, !:VarTypes),

    substs_init(set.to_sorted_list(InitAccs), !VarSet, !VarTypes, !:Substs),

    set.list_to_set(OutPrime, OutPrimeSet),
    process_assoc_set(set.to_sorted_list(Assoc), GoalStore, OutPrimeSet,
        ModuleInfo, !Substs, !VarSet, !VarTypes, CS, Warnings),

    process_update_set(set.to_sorted_list(Update), GoalStore, OutPrimeSet,
        ModuleInfo, !Substs, !VarSet, !VarTypes, UpdateOut, UpdateAccOut,
        BasePairs),

    Accs = set.to_sorted_list(InitAccs) ++ UpdateAccOut,

    divide_base_case(UpdateOut, Out, GoalStore, !.VarTypes, ModuleInfo,
        UpdateBase, AssocBase, OtherBase),

    BaseCase = base(UpdateBase, AssocBase, OtherBase).

%-----------------------------------------------------------------------------%

:- pred substs_init(prog_vars::in, prog_varset::in, prog_varset::out,
    vartypes::in, vartypes::out, substs::out) is det.

substs_init(InitAccs, !VarSet, !VarTypes, Substs) :-
    map.init(Subst),
    acc_var_subst_init(InitAccs, !VarSet, !VarTypes, AccVarSubst),
    RecCallSubst = Subst,
    AssocCallSubst = Subst,
    UpdateSubst = Subst,
    Substs = substs(AccVarSubst, RecCallSubst, AssocCallSubst,
        UpdateSubst).

    % Initialise the acc_var_subst to be from Var to A_Var where
    % Var is a member of InitAccs and A_Var is a fresh variable of
    % the same type of Var.
    %
:- pred acc_var_subst_init(prog_vars::in, prog_varset::in, prog_varset::out,
    vartypes::in, vartypes::out, subst::out) is det.

acc_var_subst_init([], !VarSet, !VarTypes, map.init).
acc_var_subst_init([Var | Vars], !VarSet, !VarTypes, Subst) :-
    create_new_var(Var, "A_", AccVar, !VarSet, !VarTypes),
    acc_var_subst_init(Vars, !VarSet, !VarTypes, Subst0),
    map.det_insert(Subst0, Var, AccVar, Subst).

    % Create a fresh variable which is the same type as the old
    % variable and has the same name except that it begins with the
    % prefix.
    %
:- pred create_new_var(prog_var::in, string::in, prog_var::out,
    prog_varset::in, prog_varset::out, vartypes::in, vartypes::out) is det.

create_new_var(OldVar, Prefix, NewVar, !VarSet, !VarTypes) :-
    varset.lookup_name(!.VarSet, OldVar, OldName),
    string.append(Prefix, OldName, NewName),
    varset.new_named_var(!.VarSet, NewName, NewVar, !:VarSet),
    map.lookup(!.VarTypes, OldVar, Type),
    map.det_insert(!.VarTypes, NewVar, Type, !:VarTypes).

%-----------------------------------------------------------------------------%

    % For each member of the assoc set determine the substitutions
    % needed, and also check the efficiency of the procedure isn't
    % worsened by reordering the arguments to a call.
    %
:- pred process_assoc_set(list(goal_id)::in, goal_store::in, set(prog_var)::in,
    module_info::in, substs::in, substs::out,
    prog_varset::in, prog_varset::out, vartypes::in, vartypes::out,
    goal_store::out, warnings::out) is semidet.

process_assoc_set([], _GS, _OutPrime, _ModuleInfo, !Substs,
        !VarSet, !VarTypes, CS, []) :-
    goal_store_init(CS).
process_assoc_set([Id | Ids], GS, OutPrime, ModuleInfo, !Substs,
        !VarSet, !VarTypes, CS, Warnings) :-
    !.Substs = substs(AccVarSubst, RecCallSubst0, AssocCallSubst0,
        UpdateSubst),

    lookup_call(GS, Id, Goal - InstMap),

    Goal = hlds_goal(plain_call(PredId, _, Args, _, _, _), GoalInfo),
    is_associative(PredId, ModuleInfo, Args, AssocInfo),
    AssocInfo = assoc(Vars, AssocOutput, IsCommutative),
    set.singleton_set(Vars `intersect` OutPrime, DuringAssocVar),
    set.singleton_set(Vars `difference` (Vars `intersect` OutPrime),
        BeforeAssocVar),

    map.lookup(AccVarSubst, BeforeAssocVar, AccVar),
    create_new_var(BeforeAssocVar, "NewAcc_", NewAcc, !VarSet, !VarTypes),

    map.det_insert(AssocCallSubst0, DuringAssocVar, AccVar, AssocCallSubst1),
    map.det_insert(AssocCallSubst1, AssocOutput, NewAcc, AssocCallSubst),
    map.det_insert(RecCallSubst0, DuringAssocVar, AssocOutput, RecCallSubst1),
    map.det_insert(RecCallSubst1, BeforeAssocVar, NewAcc, RecCallSubst),

    !:Substs = substs(AccVarSubst, RecCallSubst, AssocCallSubst, UpdateSubst),

    % ONLY swap the order of the variables if the goal is
    % associative and not commutative.
    (
        IsCommutative = yes,
        CSGoal = Goal - InstMap,
        Warning = []
    ;
        IsCommutative = no,

        % Ensure that the reordering doesn't cause a efficiency problem.
        module_info_pred_info(ModuleInfo, PredId, PredInfo),
        ModuleName = pred_info_module(PredInfo),
        PredName = pred_info_name(PredInfo),
        Arity = pred_info_orig_arity(PredInfo),
        (
            has_heuristic(ModuleName, PredName, Arity)
        ->
            % Only do the transformation if the accumulator variable is
            % *not* in a position where it will control the running time
            % of the predicate.
            heuristic(ModuleName, PredName, Arity, Args,
                PossibleDuringAssocVars),
            set.member(DuringAssocVar, PossibleDuringAssocVars),
            Warning = []
        ;
            ProgContext = goal_info_get_context(GoalInfo),
            Warning = [warn(ProgContext, PredId, BeforeAssocVar,
                DuringAssocVar)]
        ),
        % Swap the arguments.
        [A, B] = set.to_sorted_list(Vars),
        map.from_assoc_list([A-B, B-A], Subst),
        rename_some_vars_in_goal(Subst, Goal, SwappedGoal),
        CSGoal = SwappedGoal - InstMap
    ),

    process_assoc_set(Ids, GS, OutPrime, ModuleInfo, !Substs,
        !VarSet, !VarTypes, CS0, Warnings0),
    goal_store_det_insert(Id, CSGoal, CS0, CS),
    list.append(Warnings0, Warning, Warnings).

:- pred has_heuristic(module_name::in, string::in, arity::in) is semidet.

has_heuristic(unqualified("list"), "append", 3).

    % heuristic returns the set of which head variables are
    % important in the running time of the predicate.
    %
:- pred heuristic(module_name::in, string::in, arity::in, prog_vars::in,
    set(prog_var)::out) is semidet.

heuristic(unqualified("list"), "append", 3, [_Typeinfo, A, _B, _C], Set) :-
    set.list_to_set([A], Set).

%-----------------------------------------------------------------------------%

    % For each member of the update set determine the substitutions
    % needed (creating the accumulator variables when needed).
    % Also associate with each Output variable which accumulator
    % variable to get the result from.
    %
:- pred process_update_set(list(goal_id)::in, goal_store::in,
    set(prog_var)::in, module_info::in, substs::in, substs::out,
    prog_varset::in, prog_varset::out, vartypes::in, vartypes::out,
    prog_vars::out, prog_vars::out, list(pair(prog_var))::out) is semidet.

process_update_set([], _GS, _OutPrime, _ModuleInfo, !Substs,
        !VarSet, !VarTypes, [], [], []).
process_update_set([Id | Ids], GS, OutPrime, ModuleInfo, !Substs,
        !VarSet, !VarTypes, StateOutputVars, Accs, BasePairs) :-
    !.Substs = substs(AccVarSubst0, RecCallSubst0, AssocCallSubst,
        UpdateSubst0),
    lookup_call(GS, Id, Goal - _InstMap),

    Goal = hlds_goal(plain_call(PredId, _, Args, _, _, _), _GoalInfo),
    is_update(PredId, ModuleInfo, Args, StateVarA - StateVarB),

    ( set.member(StateVarA, OutPrime) ->
        StateInputVar = StateVarA,
        StateOutputVar = StateVarB
    ;
        StateInputVar = StateVarB,
        StateOutputVar = StateVarA
    ),

    create_new_var(StateInputVar, "Acc_", Acc0, !VarSet, !VarTypes),
    create_new_var(StateOutputVar, "Acc_", Acc, !VarSet, !VarTypes),

    map.det_insert(UpdateSubst0, StateInputVar, Acc0, UpdateSubst1),
    map.det_insert(UpdateSubst1, StateOutputVar, Acc, UpdateSubst),
    map.det_insert(RecCallSubst0, StateInputVar, StateOutputVar,
        RecCallSubst),
    map.det_insert(AccVarSubst0, Acc, Acc0, AccVarSubst),
    !:Substs = substs(AccVarSubst, RecCallSubst, AssocCallSubst, UpdateSubst),

    process_update_set(Ids, GS, OutPrime, ModuleInfo, !Substs,
        !VarSet, !VarTypes, StateOutputVars0, Accs0, BasePairs0),

    % Rather then concatenating to start of the list we concatenate to the end
    % of the list. This allows the accumulator introduction to be applied
    % as the heuristic will succeed (remember after transforming the two
    % input variables will have their order swapped, so they must be in the
    % inefficient order to start with)

    append(StateOutputVars0, [StateOutputVar], StateOutputVars),
    append(Accs0, [Acc], Accs),
    append(BasePairs0, [StateOutputVar - Acc0], BasePairs).

%-----------------------------------------------------------------------------%

    % divide_base_case(UpdateOut, Out, U, A, O):
    %
    % is true iff given the output variables which are instantiated
    % by update goals, UpdateOut, and all the variables that need to
    % be accumulated, Out, divide the base case up into three sets,
    % those base case goals which initialize the variables used by
    % update calls, U, those which initialize variables used by
    % assoc calls, A, and the rest of the goals, O.  Note that the
    % sets are not necessarily disjoint, as the result of a goal may
    % be used to initialize a variable in both U and A, so both U
    % and A will contain the same goal_id.
    %
:- pred divide_base_case(prog_vars::in, prog_vars::in, goal_store::in,
    vartypes::in, module_info::in, set(goal_id)::out,
    set(goal_id)::out, set(goal_id)::out) is det.

divide_base_case(UpdateOut, Out, C, VarTypes, ModuleInfo,
        UpdateBase, AssocBase, OtherBase) :-
    list.delete_elems(Out, UpdateOut, AssocOut),

    list.map(related(C, VarTypes, ModuleInfo), UpdateOut, UpdateBaseList),
    list.map(related(C, VarTypes, ModuleInfo), AssocOut, AssocBaseList),
    UpdateBase = set.power_union(set.list_to_set(UpdateBaseList)),
    AssocBase = set.power_union(set.list_to_set(AssocBaseList)),

    Set = base_case_ids_set(C) `difference` (UpdateBase `union` AssocBase),
    set.to_sorted_list(Set, List),

    list.map(
        (pred(GoalId::in, Ancestors::out) is det :-
            goal_store_all_ancestors(C, GoalId, VarTypes,
                ModuleInfo, no, Ancestors)
        ), List, OtherBaseList),

    OtherBase = set.list_to_set(List) `union`
        (base_case_ids_set(C) `intersect`
        set.power_union(set.list_to_set(OtherBaseList))).

    % related(GS, MI, V, Ids):
    %
    % Return all the goal_ids, Ids, which are needed to initialize
    % the variable, V, from the goal store, GS.
    %
:- pred related(goal_store::in, vartypes::in, module_info::in, prog_var::in,
    set(goal_id)::out) is det.

related(GS, VarTypes, ModuleInfo, Var, Related) :-
    solutions.solutions(
        (pred(Key::out) is nondet :-
            goal_store_member(GS, Key, Goal - InstMap0),
            Key = base - _,
            Goal = hlds_goal(_GoalExpr, GoalInfo),
            InstMapDelta = goal_info_get_instmap_delta(GoalInfo),
            apply_instmap_delta(InstMap0, InstMapDelta, InstMap),
            instmap_changed_vars(InstMap0, InstMap, VarTypes,
                ModuleInfo, ChangedVars),
            set.singleton_set(ChangedVars, Var)
        ), Ids),
    ( Ids = [Id] ->
        goal_store_all_ancestors(GS, Id, VarTypes, ModuleInfo, no, Ancestors),
        list.filter((pred((base - _)::in) is semidet),
            set.to_sorted_list(set.insert(Ancestors, Id)), RelatedList),
        Related = set.list_to_set(RelatedList)
    ;
        unexpected(this_file, "related")
    ).

%-----------------------------------------------------------------------------%

:- inst plain_call
    --->    plain_call(ground, ground, ground, ground, ground, ground).
:- inst hlds_plain_call
    --->    hlds_goal(plain_call, ground).
:- inst plain_call_goal
    --->    hlds_plain_call - ground.

    % Do a goal_store_lookup where the result is known to be a call.
    %
:- pred lookup_call(goal_store::in, goal_id::in,
    stored_goal::out(plain_call_goal)) is det.

lookup_call(GoalStore, Id, Call - InstMap) :-
    goal_store_lookup(GoalStore, Id, Goal - InstMap),
    ( Goal = hlds_goal(plain_call(_, _, _, _, _, _), _) ->
        Call = Goal
    ;
        unexpected(this_file, "lookup_call: not a call.")
    ).

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

    % stage3 creates the accumulator version of the predicate using
    % the substitutions determined in stage2, it also redefines the
    % original procedure to call the accumulator version of the
    % procedure.
    %
:- pred stage3(goal_id::in, prog_vars::in, prog_varset::in, vartypes::in,
    goal_store::in, goal_store::in, substs::in, subst::in,
    subst::in, base::in, list(pair(prog_var))::in, sets::in,
    prog_vars::in, top_level::in, pred_id::in, pred_info::in,
    proc_info::in, proc_info::out, module_info::in, module_info::out) is det.

stage3(RecCallId, Accs, VarSet, VarTypes, C, CS, Substs,
        HeadToCallSubst, CallToHeadSubst, BaseCase, BasePairs, Sets, Out,
        TopLevel, OrigPredId, OrigPredInfo, !OrigProcInfo, !ModuleInfo) :-
    acc_proc_info(Accs, VarSet, VarTypes, Substs, !.OrigProcInfo,
        AccTypes, AccProcInfo),
    acc_pred_info(AccTypes, Out, AccProcInfo, OrigPredId, OrigPredInfo,
        AccProcId, AccPredInfo),
    AccName = unqualified(pred_info_name(AccPredInfo)),

    module_info_get_predicate_table(!.ModuleInfo, PredTable0),
    predicate_table_insert(AccPredInfo, AccPredId, PredTable0, PredTable),
    module_info_set_predicate_table(PredTable, !ModuleInfo),
    create_goal(RecCallId, Accs, AccPredId, AccProcId, AccName, Substs,
        HeadToCallSubst, CallToHeadSubst, BaseCase, BasePairs, Sets, C, CS,
        OrigBaseGoal, OrigRecGoal, AccBaseGoal, AccRecGoal),

    proc_info_get_goal(!.OrigProcInfo, OrigGoal0),
    top_level(TopLevel, OrigGoal0, OrigBaseGoal, OrigRecGoal,
        AccBaseGoal, AccRecGoal, OrigGoal, AccGoal),

    proc_info_set_goal(OrigGoal, !OrigProcInfo),
    proc_info_set_varset(VarSet, !OrigProcInfo),
    proc_info_set_vartypes(VarTypes, !OrigProcInfo),

    requantify_proc(!OrigProcInfo),
    update_accumulator_pred(AccPredId, AccProcId, AccGoal, !ModuleInfo).

%-----------------------------------------------------------------------------%

    % Construct a proc_info for the introduced predicate.
    %
:- pred acc_proc_info(prog_vars::in, prog_varset::in, vartypes::in,
    substs::in, proc_info::in, list(mer_type)::out, proc_info::out) is det.

acc_proc_info(Accs0, VarSet, VarTypes, Substs, OrigProcInfo,
        AccTypes, AccProcInfo) :-
    % ProcInfo Stuff that must change.
    proc_info_get_headvars(OrigProcInfo, HeadVars0),
    proc_info_get_argmodes(OrigProcInfo, HeadModes0),

    proc_info_get_inst_varset(OrigProcInfo, InstVarSet),
    proc_info_get_inferred_determinism(OrigProcInfo, Detism),
    proc_info_get_goal(OrigProcInfo, Goal),
    proc_info_get_context(OrigProcInfo, Context),
    proc_info_get_rtti_varmaps(OrigProcInfo, RttiVarMaps),
    proc_info_get_is_address_taken(OrigProcInfo, IsAddressTaken),
    proc_info_get_var_name_remap(OrigProcInfo, VarNameRemap),

    Substs = substs(AccVarSubst, _RecCallSubst, _AssocCallSubst,
        _UpdateSubst),
    list.map(map.lookup(AccVarSubst), Accs0, Accs),

    % We place the extra accumulator variables at the start, because placing
    % them at the end breaks the convention that the last variable of a
    % function is the output variable.
    HeadVars = Accs ++ HeadVars0,

    % XXX we don't want to use the inst of the var as it can be more specific
    % than it should be. ie int_const(1) when it should be any integer.
    % However this will no longer handle partially instantiated data
    % structures.
    Inst = ground(shared, none),
    inst_lists_to_mode_list([Inst], [Inst], Mode),
    list.duplicate(list.length(Accs), list.det_head(Mode), AccModes),
    HeadModes = AccModes ++ HeadModes0,

    list.map(map.lookup(VarTypes), Accs, AccTypes),

    proc_info_create(Context, VarSet, VarTypes, HeadVars, InstVarSet,
        HeadModes, Detism, Goal, RttiVarMaps, IsAddressTaken, VarNameRemap,
        AccProcInfo).

%-----------------------------------------------------------------------------%

    % Construct the pred_info for the introduced predicate.
    %
:- pred acc_pred_info(list(mer_type)::in, prog_vars::in, proc_info::in,
    pred_id::in, pred_info::in, proc_id::out, pred_info::out) is det.

acc_pred_info(NewTypes, OutVars, NewProcInfo, OrigPredId, OrigPredInfo,
        NewProcId, NewPredInfo) :-
    % PredInfo stuff that must change.
    pred_info_get_arg_types(OrigPredInfo, TypeVarSet, ExistQVars, Types0),

    ModuleName = pred_info_module(OrigPredInfo),
    Name = pred_info_name(OrigPredInfo),
    PredOrFunc = pred_info_is_pred_or_func(OrigPredInfo),
    pred_info_get_context(OrigPredInfo, PredContext),
    pred_info_get_markers(OrigPredInfo, Markers),
    pred_info_get_class_context(OrigPredInfo, ClassContext),
    pred_info_get_origin(OrigPredInfo, OldOrigin),
    pred_info_get_var_name_remap(OrigPredInfo, VarNameRemap),

    set.init(Assertions),

    proc_info_get_context(NewProcInfo, Context),
    term.context_line(Context, Line),
    Counter = 0,

    Types = NewTypes ++ Types0,

    make_pred_name_with_context(ModuleName, "AccFrom", PredOrFunc, Name,
        Line, Counter, SymName),

    OutVarNums = list.map(term.var_to_int, OutVars),
    Origin = origin_transformed(transform_accumulator(OutVarNums),
        OldOrigin, OrigPredId),
    pred_info_create(ModuleName, SymName, PredOrFunc, PredContext, Origin,
        status_local, Markers, Types, TypeVarSet, ExistQVars, ClassContext,
        Assertions, VarNameRemap, NewProcInfo, NewProcId, NewPredInfo).

%-----------------------------------------------------------------------------%

    % create_goal creates the new base and recursive case of the
    % original procedure (OrigBaseGoal and OrigRecGoal) and the base
    % and recursive cases of accumulator version (AccBaseGoal and
    % AccRecGoal).
    %
:- pred create_goal(goal_id::in, prog_vars::in, pred_id::in, proc_id::in,
    sym_name::in, substs::in, subst::in, subst::in, base::in,
    list(pair(prog_var))::in, sets::in, goal_store::in, goal_store::in,
    hlds_goal::out, hlds_goal::out, hlds_goal::out, hlds_goal::out) is det.

create_goal(RecCallId, Accs, AccPredId, AccProcId, AccName, Substs,
        HeadToCallSubst, CallToHeadSubst, BaseIds, BasePairs,
        Sets, C, CS, OrigBaseGoal, OrigRecGoal, AccBaseGoal, AccRecGoal) :-
    lookup_call(C, RecCallId, OrigCall - _InstMap),
    Call = create_acc_call(OrigCall, Accs, AccPredId, AccProcId, AccName),
    create_orig_goal(Call, Substs, HeadToCallSubst, CallToHeadSubst,
        BaseIds, Sets, C, OrigBaseGoal, OrigRecGoal),
    create_acc_goal(Call, Substs, HeadToCallSubst, BaseIds, BasePairs,
        Sets, C, CS, AccBaseGoal, AccRecGoal).

    % create_acc_call takes the original call and generates a call
    % to the accumulator version of the call, which can have the
    % substitutions applied to it easily.
    %
:- func create_acc_call(hlds_goal::in(hlds_plain_call), prog_vars::in,
    pred_id::in, proc_id::in, sym_name::in) = (hlds_goal::out(hlds_plain_call))
    is det.

create_acc_call(OrigCall, Accs, AccPredId, AccProcId, AccName) = Call :-
    OrigCall = hlds_goal(OrigCallExpr, GoalInfo),
    OrigCallExpr = plain_call(_PredId, _ProcId, Args, Builtin,
        Context, _Name),
    CallExpr = plain_call(AccPredId, AccProcId, Accs ++ Args, Builtin,
        Context, AccName),
    Call = hlds_goal(CallExpr, GoalInfo).

    % Create the goals which are to replace the original predicate.
    %
:- pred create_orig_goal(hlds_goal::in, substs::in, subst::in,
    subst::in, base::in, sets::in, goal_store::in,
    hlds_goal::out, hlds_goal::out) is det.

create_orig_goal(Call, Substs, HeadToCallSubst, CallToHeadSubst,
        BaseIds, Sets, C, OrigBaseGoal, OrigRecGoal) :-
    Substs = substs(_AccVarSubst, _RecCallSubst, _AssocCallSubst, UpdateSubst),

    BaseIds = base(UpdateBase, _AssocBase, _OtherBase),
    Sets = sets(Before, _Assoc, _ConstructAssoc, _Construct, Update, _Reject),

    U = create_new_orig_recursive_goals(UpdateBase, Update,
        HeadToCallSubst, UpdateSubst, C),

    rename_some_vars_in_goal(CallToHeadSubst, Call, BaseCall),
    Cbefore = goal_list(set.to_sorted_list(Before), C),
    Uupdate = goal_list(set.to_sorted_list(UpdateBase) ++
        set.to_sorted_list(Update), U),
    Cbase = goal_list(base_case_ids(C), C),
    calculate_goal_info(conj(plain_conj, Cbefore ++ Uupdate ++ [BaseCall]),
        OrigRecGoal),
    calculate_goal_info(conj(plain_conj, Cbase), OrigBaseGoal).

    % Create the goals which are to go in the new accumulator
    % version of the predicate.
    %
:- pred create_acc_goal(hlds_goal::in, substs::in, subst::in, base::in,
    list(pair(prog_var))::in, sets::in, goal_store::in,
    goal_store::in, hlds_goal::out, hlds_goal::out) is det.

create_acc_goal(Call, Substs, HeadToCallSubst, BaseIds, BasePairs, Sets,
        C, CS, AccBaseGoal, AccRecGoal) :-
    Substs = substs(AccVarSubst, RecCallSubst, AssocCallSubst, UpdateSubst),

    BaseIds = base(_UpdateBase, AssocBase, OtherBase),
    Sets = sets(Before, Assoc, ConstructAssoc, Construct, Update, _Reject),

    rename_some_vars_in_goal(RecCallSubst, Call, RecCall),

    Cbefore = goal_list(set.to_sorted_list(Before), C),

    % Create the goals which will be used in the new recursive case.
    R = create_new_recursive_goals(Assoc, Construct `union` ConstructAssoc,
        Update, AssocCallSubst, AccVarSubst, UpdateSubst, C, CS),

    Rassoc = goal_list(set.to_sorted_list(Assoc), R),
    Rupdate = goal_list(set.to_sorted_list(Update), R),
    Rconstruct = goal_list(set.to_sorted_list(Construct `union`
        ConstructAssoc), R),

    % Create the goals which will be used in the new base case.
    B = create_new_base_goals(Assoc `union` Construct `union`
        ConstructAssoc, C, AccVarSubst, HeadToCallSubst),
    Bafter = set.to_sorted_list(Assoc `union`
        Construct `union` ConstructAssoc),

    BaseCase = goal_list(set.to_sorted_list(AssocBase `union` OtherBase)
        ++ Bafter, B),

    list.map(acc_unification, BasePairs, UpdateBase),

    calculate_goal_info(conj(plain_conj, Cbefore ++ Rassoc ++ Rupdate
        ++ [RecCall] ++ Rconstruct), AccRecGoal),
    calculate_goal_info(conj(plain_conj, UpdateBase ++ BaseCase), AccBaseGoal).

    % Create the U set of goals (those that will be used in the
    % original recursive case) by renaming all the goals which are
    % used to initialize the update state variable using the
    % head_to_call followed by the update_subst, and rename all the
    % update goals using the update_subst.
    %
:- func create_new_orig_recursive_goals(set(goal_id), set(goal_id),
    subst, subst, goal_store) = goal_store.

create_new_orig_recursive_goals(UpdateBase, Update, HeadToCallSubst,
        UpdateSubst, C)
        = rename(set.to_sorted_list(Update), UpdateSubst, C, Ubase) :-
    Ubase = rename(set.to_sorted_list(UpdateBase),
        chain_subst(HeadToCallSubst, UpdateSubst), C, goal_store_init).

    % Create the R set of goals (those that will be used in the new
    % recursive case) by renaming all the members of assoc in CS
    % using assoc_call_subst and all the members of (construct U
    % construct_assoc) in C with acc_var_subst.
    %
:- func create_new_recursive_goals(set(goal_id), set(goal_id), set(goal_id),
    subst, subst, subst, goal_store, goal_store) = goal_store.

create_new_recursive_goals(Assoc, Constructs, Update,
        AssocCallSubst, AccVarSubst, UpdateSubst, C, CS)
        = rename(set.to_sorted_list(Constructs), AccVarSubst, C, RBase) :-
    RBase0 = rename(set.to_sorted_list(Assoc), AssocCallSubst, CS,
        goal_store_init),
    RBase = rename(set.to_sorted_list(Update), UpdateSubst, C, RBase0).

    % Create the B set of goals (those that will be used in the new
    % base case) by renaming all the base case goals of C with
    % head_to_call and all the members of (assoc U construct U
    % construct_assoc) of C with acc_var_subst.
    %
:- func create_new_base_goals(set(goal_id), goal_store, subst, subst)
    = goal_store.

create_new_base_goals(Ids, C, AccVarSubst, HeadToCallSubst)
        = rename(set.to_sorted_list(Ids), AccVarSubst, C, Bbase) :-
    Bbase = rename(base_case_ids(C), HeadToCallSubst, C, goal_store_init).

    % acc_unification(O-A, G):
    %
    % is true if G represents the assignment unification Out = Acc.
    %
:- pred acc_unification(pair(prog_var)::in, hlds_goal::out) is det.

acc_unification(Out - Acc, Goal) :-
    out_mode(LHSMode),
    in_mode(RHSMode),
    UniMode = LHSMode - RHSMode,
    Context = unify_context(umc_explicit, []),
    Expr = unify(Out, rhs_var(Acc), UniMode, assign(Out,Acc), Context),
    set.list_to_set([Out,Acc], NonLocalVars),
    instmap_delta_from_assoc_list([Out - ground(shared, none)], InstMapDelta),
    goal_info_init(NonLocalVars, InstMapDelta, detism_det, purity_pure, Info),
    Goal = hlds_goal(Expr, Info).

%-----------------------------------------------------------------------------%

    % Given the top level structure of the goal create new version
    % with new base and recursive cases plugged in.
    %
:- pred top_level(top_level::in, hlds_goal::in,
    hlds_goal::in, hlds_goal::in, hlds_goal::in,
    hlds_goal::in, hlds_goal::out, hlds_goal::out) is det.

top_level(switch_base_rec, Goal, OrigBaseGoal, OrigRecGoal,
        NewBaseGoal, NewRecGoal, OrigGoal, NewGoal) :-
    (
        Goal = hlds_goal(switch(Var, CanFail, Cases0), GoalInfo),
        Cases0 = [case(IdA, _), case(IdB, _)]
    ->
        OrigCases = [case(IdA, OrigBaseGoal), case(IdB, OrigRecGoal)],
        OrigGoal = hlds_goal(switch(Var, CanFail, OrigCases), GoalInfo),

        NewCases = [case(IdA, NewBaseGoal), case(IdB, NewRecGoal)],
        NewGoal = hlds_goal(switch(Var, CanFail, NewCases), GoalInfo)
    ;
        unexpected(this_file, "top_level: not the correct top level")
    ).
top_level(switch_rec_base, Goal, OrigBaseGoal, OrigRecGoal,
        NewBaseGoal, NewRecGoal, OrigGoal, NewGoal) :-
    (
        Goal = hlds_goal(switch(Var, CanFail, Cases0), GoalInfo),
        Cases0 = [case(IdA, _), case(IdB, _)]
    ->
        OrigCases = [case(IdA, OrigRecGoal), case(IdB, OrigBaseGoal)],
        OrigGoal = hlds_goal(switch(Var, CanFail, OrigCases), GoalInfo),

        NewCases = [case(IdA, NewRecGoal), case(IdB, NewBaseGoal)],
        NewGoal = hlds_goal(switch(Var, CanFail, NewCases), GoalInfo)
    ;
        unexpected(this_file, "top_level: not the correct top level")
    ).
top_level(disj_base_rec, Goal, OrigBaseGoal,
        OrigRecGoal, NewBaseGoal, NewRecGoal, OrigGoal, NewGoal) :-
    (
        Goal = hlds_goal(disj(Goals), GoalInfo),
        Goals = [_, _]
    ->
        OrigGoals = [OrigBaseGoal, OrigRecGoal],
        OrigGoal = hlds_goal(disj(OrigGoals), GoalInfo),

        NewGoals = [NewBaseGoal, NewRecGoal],
        NewGoal = hlds_goal(disj(NewGoals), GoalInfo)
    ;
        unexpected(this_file, "top_level: not the correct top level")
    ).
top_level(disj_rec_base, Goal, OrigBaseGoal,
        OrigRecGoal, NewBaseGoal, NewRecGoal, OrigGoal, NewGoal) :-
    (
        Goal = hlds_goal(disj(Goals), GoalInfo),
        Goals = [_, _]
    ->
        OrigGoals = [OrigRecGoal, OrigBaseGoal],
        OrigGoal = hlds_goal(disj(OrigGoals), GoalInfo),

        NewGoals = [NewRecGoal, NewBaseGoal],
        NewGoal = hlds_goal(disj(NewGoals), GoalInfo)
    ;
        unexpected(this_file, "top_level: not the correct top level")
    ).
top_level(ite_base_rec, Goal, OrigBaseGoal,
        OrigRecGoal, NewBaseGoal, NewRecGoal, OrigGoal, NewGoal) :-
    ( Goal = hlds_goal(if_then_else(Vars, If, _, _), GoalInfo) ->
        OrigGoal = hlds_goal(if_then_else(Vars, If, OrigBaseGoal, OrigRecGoal),
            GoalInfo),
        NewGoal = hlds_goal(if_then_else(Vars, If, NewBaseGoal, NewRecGoal),
            GoalInfo)
    ;
        unexpected(this_file, "top_level: not the correct top level")
    ).
top_level(ite_rec_base, Goal, OrigBaseGoal,
        OrigRecGoal, NewBaseGoal, NewRecGoal, OrigGoal, NewGoal) :-
    ( Goal = hlds_goal(if_then_else(Vars, If, _, _), GoalInfo) ->
        OrigGoal = hlds_goal(if_then_else(Vars, If, OrigRecGoal, OrigBaseGoal),
            GoalInfo),
        NewGoal = hlds_goal(if_then_else(Vars, If, NewRecGoal, NewBaseGoal),
            GoalInfo)
    ;
        unexpected(this_file, "top_level: not the correct top level")
    ).

%-----------------------------------------------------------------------------%

    % Place the accumulator version of the predicate in the
    % module_info structure.
    %
:- pred update_accumulator_pred(pred_id::in, proc_id::in,
    hlds_goal::in, module_info::in, module_info::out) is det.

update_accumulator_pred(NewPredId, NewProcId, AccGoal, !ModuleInfo) :-
    module_info_pred_proc_info(!.ModuleInfo, NewPredId, NewProcId,
        PredInfo, ProcInfo0),
    proc_info_set_goal(AccGoal, ProcInfo0, ProcInfo1),
    requantify_proc(ProcInfo1, ProcInfo),
    module_info_set_pred_proc_info(NewPredId, NewProcId,
        PredInfo, ProcInfo, !ModuleInfo).

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

    % rename(Ids, Subst, From, Initial):
    %
    % Return a goal_store, Final, which is the result of looking up each
    % member of set of goal_ids, Ids, in the goal_store, From, applying
    % the substitution and then storing the goal into the goal_store, Initial.
    %
:- func rename(list(goal_id), subst, goal_store, goal_store) = goal_store.

rename(Ids, Subst, From, Initial) = Final :-
    list.foldl(
        (pred(Id::in, GS0::in, GS::out) is det :-
            goal_store_lookup(From, Id, Goal0 - InstMap),
            rename_some_vars_in_goal(Subst, Goal0, Goal),
            goal_store_det_insert(Id, Goal - InstMap, GS0, GS)
        ), Ids, Initial, Final).

    % Return all the goal_ids which belong in the base case.
    %
:- func base_case_ids(goal_store) = list(goal_id).

base_case_ids(GS) = Base :-
    solutions.solutions(
        (pred(Key::out) is nondet :-
            goal_store_member(GS, Key, _Goal),
            Key = base - _
        ), Base).

:- func base_case_ids_set(goal_store) = set(goal_id).

base_case_ids_set(GS) = set.list_to_set(base_case_ids(GS)).

    % Given a list of goal_ids, return the list of hlds_goals from
    % the goal_store.
    %
:- func goal_list(list(goal_id), goal_store) = hlds_goals.

goal_list(Ids, GS) = Goals :-
    list.map(
        (pred(Key::in, G::out) is det :-
            goal_store_lookup(GS, Key, G - _)
        ), Ids, Goals).

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- pred calculate_goal_info(hlds_goal_expr::in, hlds_goal::out) is det.

calculate_goal_info(GoalExpr, hlds_goal(GoalExpr, GoalInfo)) :-
    ( GoalExpr = conj(plain_conj, GoalList) ->
        goal_list_nonlocals(GoalList, NonLocals),
        goal_list_instmap_delta(GoalList, InstMapDelta),
        goal_list_determinism(GoalList, Detism),

        goal_info_init(NonLocals, InstMapDelta, Detism, purity_pure, GoalInfo)
    ;
        unexpected(this_file, "calculate_goal_info: not a conj.")
    ).

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

    % The number which indicates the base case.
    %
:- func base = int.

base = 2.

    % The number which indicates the recursive case.
    %
:- func rec = int.

rec = 1.

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- func reverse_subst(subst) = subst.

reverse_subst(Subst0) = Subst :-
    map.to_assoc_list(Subst0, List0),
    assoc_list.reverse_members(List0, List),
    map.from_assoc_list(List, Subst).

:- func chain_subst(subst, subst) = subst.

chain_subst(AtoB, BtoC) = AtoC :-
    map.keys(AtoB, Keys),
    chain_subst_2(Keys, AtoB, BtoC, AtoC).

:- pred chain_subst_2(list(A)::in, map(A, B)::in, map(B, C)::in,
    map(A, C)::out) is det.

chain_subst_2([], _, _, AtoC) :-
    map.init(AtoC).
chain_subst_2([A|As], AtoB, BtoC, AtoC) :-
    chain_subst_2(As, AtoB, BtoC, AtoC0),
    map.lookup(AtoB, A, B),
    ( map.search(BtoC, B, C) ->
        map.det_insert(AtoC0, A, C, AtoC)
    ;
        AtoC = AtoC0
    ).

%-----------------------------------------------------------------------------%

:- func this_file = string.

this_file = "accumulator.m".

%-----------------------------------------------------------------------------%
:- end_module accumulator.
%-----------------------------------------------------------------------------%
