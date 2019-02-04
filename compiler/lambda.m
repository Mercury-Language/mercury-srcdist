%-----------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et
%-----------------------------------------------------------------------------%
% Copyright (C) 1995-2008 The University of Melbourne.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury distribution.
%-----------------------------------------------------------------------------%
%
% File: lambda.m.
% Main author: fjh.
%
% This module is a pass over the HLDS to deal with lambda expressions.
%
% Lambda expressions are converted into separate predicates, so for
% example we translate
%
%   :- pred p(int::in) is det.
%   p(X) :-
%       V__1 = (pred(Y::out) is nondet :- q(Y, X)),
%       solutions(V__1, List),
%       ...
%   :- pred q(int::out, int::in) is nondet.
%
% into
%
%   p(X) :-
%       V__1 = '__LambdaGoal__1'(X)
%       solutions(V__1, List),
%       ...
%
%   :- pred '__LambdaGoal__1'(int::in, int::out) is nondet.
%   '__LambdaGoal__1'(X, Y) :- q(Y, X).
%
%
% Note that the mode checker requires that a lambda expression
% not bind any of the non-local variables such as `X' in the above
% example.
%
% Similarly, a lambda expression may not bind any of the type_infos for
% those variables; that is, none of the non-local variables
% should be existentially typed (from the perspective of the lambda goal).
% Now that we run the polymorphism.m pass before mode checking, this is
% also checked by mode analysis.
%
% It might be OK to allow the parameters of the lambda goal to be
% existentially typed, but currently that is not supported.
% One difficulty is that it's hard to determine here which type variables
% should be existentially quantified.  The information is readily
% available during type inference, and really type inference should save
% that information in a field in the lambda_goal struct, but currently it
% doesn't; it saves the head_type_params field in the pred_info, which
% tells us which type variables where produced by the body, but for
% any given lambda goal we don't know whether the type variable was
% produced by something outside the lambda goal or by something inside
% the lambda goal (only in the latter case should it be existentially
% quantified).
% The other difficulty is that taking the address of a predicate with an
% existential type would require second-order polymorphism:  for a predicate
% declared as `:- some [T] pred p(int, T)', the expression `p' must have
% type `some [T] pred(int, T)', which is quite a different thing to saying
% that there is some type `T' for which `p' has type `pred(int, T)' --
% we don't know what `T' is until the predicate is called, and it might
% be different for each call.
% Currently we don't support second-order polymorphism, so we
% don't support existentially typed lambda expressions either.
%
%-----------------------------------------------------------------------------%

:- module transform_hlds.lambda.
:- interface.

:- import_module hlds.hlds_module.
:- import_module hlds.hlds_pred.

%-----------------------------------------------------------------------------%

:- pred lambda_process_module(module_info::in, module_info::out) is det.

:- pred lambda_process_pred(pred_id::in, module_info::in, module_info::out)
    is det.

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- implementation.

:- import_module check_hlds.mode_util.
:- import_module hlds.code_model.
:- import_module hlds.goal_util.
:- import_module hlds.hlds_data.
:- import_module hlds.hlds_goal.
:- import_module hlds.hlds_rtti.
:- import_module hlds.pred_table.
:- import_module hlds.quantification.
:- import_module libs.compiler_util.
:- import_module libs.globals.
:- import_module libs.options.
:- import_module mdbcomp.prim_data.
:- import_module parse_tree.prog_data.
:- import_module parse_tree.prog_mode.
:- import_module parse_tree.prog_type.
:- import_module parse_tree.prog_util.

:- import_module bool.
:- import_module list.
:- import_module map.
:- import_module pair.
:- import_module set.
:- import_module term.
:- import_module varset.

%-----------------------------------------------------------------------------%

:- type lambda_info
    --->    lambda_info(
                prog_varset,            % from the proc_info
                vartypes,               % from the proc_info
                tvarset,                % from the proc_info
                inst_varset,            % from the proc_info
                rtti_varmaps,           % from the proc_info
                pred_markers,           % from the pred_info
                bool,                   % has_parallel_conj, from the proc_info
                pred_or_func,
                string,                 % pred/func name
                module_info,
                bool                    % true iff we need to recompute
                                        % the nonlocals
            ).

%-----------------------------------------------------------------------------%
%
% This whole section just traverses the module structure
%

lambda_process_module(!ModuleInfo) :-
    module_info_predids(PredIds, !ModuleInfo),
    list.foldl(lambda_process_pred, PredIds, !ModuleInfo),
    % Need update the dependency graph to include the lambda predicates.
    module_info_clobber_dependency_info(!ModuleInfo).

lambda_process_pred(PredId, !ModuleInfo) :-
    module_info_pred_info(!.ModuleInfo, PredId, PredInfo),
    ProcIds = pred_info_procids(PredInfo),
    list.foldl(lambda_process_proc(PredId), ProcIds, !ModuleInfo).

:- pred lambda_process_proc(pred_id::in, proc_id::in,
    module_info::in, module_info::out) is det.

lambda_process_proc(PredId, ProcId, !ModuleInfo) :-
    module_info_preds(!.ModuleInfo, PredTable0),
    map.lookup(PredTable0, PredId, PredInfo0),
    pred_info_get_procedures(PredInfo0, ProcTable0),
    map.lookup(ProcTable0, ProcId, ProcInfo0),

    lambda_process_proc_2(ProcInfo0, ProcInfo, PredInfo0, PredInfo1,
        !ModuleInfo),

    pred_info_get_procedures(PredInfo1, ProcTable1),
    map.det_update(ProcTable1, ProcId, ProcInfo, ProcTable),
    pred_info_set_procedures(ProcTable, PredInfo1, PredInfo),
    module_info_preds(!.ModuleInfo, PredTable1),
    map.det_update(PredTable1, PredId, PredInfo, PredTable),
    module_info_set_preds(PredTable, !ModuleInfo).

:- pred lambda_process_proc_2(proc_info::in, proc_info::out,
    pred_info::in, pred_info::out, module_info::in, module_info::out) is det.

lambda_process_proc_2(!ProcInfo, !PredInfo, !ModuleInfo) :-
    % Grab the appropriate fields from the pred_info and proc_info.
    PredName = pred_info_name(!.PredInfo),
    PredOrFunc = pred_info_is_pred_or_func(!.PredInfo),
    pred_info_get_typevarset(!.PredInfo, TypeVarSet0),
    pred_info_get_markers(!.PredInfo, Markers),
    proc_info_get_headvars(!.ProcInfo, HeadVars),
    proc_info_get_varset(!.ProcInfo, VarSet0),
    proc_info_get_vartypes(!.ProcInfo, VarTypes0),
    proc_info_get_goal(!.ProcInfo, Goal0),
    proc_info_get_rtti_varmaps(!.ProcInfo, RttiVarMaps0),
    proc_info_get_inst_varset(!.ProcInfo, InstVarSet0),
    proc_info_get_has_parallel_conj(!.ProcInfo, HasParallelConj),
    MustRecomputeNonLocals0 = no,

    % Process the goal.
    Info0 = lambda_info(VarSet0, VarTypes0, TypeVarSet0,
        InstVarSet0, RttiVarMaps0, Markers, HasParallelConj, PredOrFunc,
        PredName, !.ModuleInfo, MustRecomputeNonLocals0),
    lambda_process_goal(Goal0, Goal1, Info0, Info1),
    Info1 = lambda_info(VarSet1, VarTypes1, TypeVarSet,
        _, RttiVarMaps1, _, _, _, _, !:ModuleInfo, MustRecomputeNonLocals),

    % Check if we need to requantify.
    (
        MustRecomputeNonLocals = yes,
        implicitly_quantify_clause_body(HeadVars, _Warnings,
            Goal1, Goal, VarSet1, VarSet, VarTypes1, VarTypes,
            RttiVarMaps1, RttiVarMaps)
    ;
        MustRecomputeNonLocals = no,
        Goal = Goal1,
        VarSet = VarSet1,
        VarTypes = VarTypes1,
        RttiVarMaps = RttiVarMaps1
    ),

    % Set the new values of the fields in proc_info and pred_info.
    proc_info_set_goal(Goal, !ProcInfo),
    proc_info_set_varset(VarSet, !ProcInfo),
    proc_info_set_vartypes(VarTypes, !ProcInfo),
    proc_info_set_rtti_varmaps(RttiVarMaps, !ProcInfo),
    pred_info_set_typevarset(TypeVarSet, !PredInfo).

    % The job of lambda_process_goal is to traverse the goal, processing each
    % unification with lambda_process_unify_goal.
    %
:- pred lambda_process_goal(hlds_goal::in, hlds_goal::out,
    lambda_info::in, lambda_info::out) is det.

lambda_process_goal(hlds_goal(GoalExpr0, GoalInfo),
        hlds_goal(GoalExpr, GoalInfo), !Info) :-
    (
        GoalExpr0 = unify(XVar, Y, Mode, Unification, Context),
        lambda_process_unify_goal(XVar, Y, Mode, Unification, Context,
            GoalExpr, !Info)
    ;
        GoalExpr0 = conj(ConjType, Goals0),
        lambda_process_goal_list(Goals0, Goals, !Info),
        GoalExpr = conj(ConjType, Goals)
    ;
        GoalExpr0 = disj(Goals0),
        lambda_process_goal_list(Goals0, Goals, !Info),
        GoalExpr = disj(Goals)
    ;
        GoalExpr0 = negation(Goal0),
        lambda_process_goal(Goal0, Goal, !Info),
        GoalExpr = negation(Goal)
    ;
        GoalExpr0 = switch(Var, CanFail, Cases0),
        lambda_process_cases(Cases0, Cases, !Info),
        GoalExpr = switch(Var, CanFail, Cases)
    ;
        GoalExpr0 = scope(Reason, Goal0),
        lambda_process_goal(Goal0, Goal, !Info),
        GoalExpr = scope(Reason, Goal)
    ;
        GoalExpr0 = if_then_else(Vars, Cond0, Then0, Else0),
        lambda_process_goal(Cond0, Cond, !Info),
        lambda_process_goal(Then0, Then, !Info),
        lambda_process_goal(Else0, Else, !Info),
        GoalExpr = if_then_else(Vars, Cond, Then, Else)
    ;
        ( GoalExpr0 = generic_call(_, _, _, _)
        ; GoalExpr0 = plain_call(_, _, _, _, _, _)
        ; GoalExpr0 = call_foreign_proc(_, _, _, _, _, _, _)
        ),
        GoalExpr = GoalExpr0
    ;
        GoalExpr0 = shorthand(ShortHand0),
        (
            ShortHand0 = atomic_goal(GoalType, Outer, Inner, MaybeOutputVars,
                MainGoal0, OrElseGoals0),
            lambda_process_goal(MainGoal0, MainGoal, !Info),
            lambda_process_goal_list(OrElseGoals0, OrElseGoals, !Info),
            ShortHand = atomic_goal(GoalType, Outer, Inner, MaybeOutputVars, 
                MainGoal, OrElseGoals),
            GoalExpr = shorthand(ShortHand)
        ;
            ShortHand0 = bi_implication(_, _),
            % These should have been expanded out by now.
            unexpected(this_file, "lambda_process_goal_2: bi_implication")
        )
    ).

:- pred lambda_process_goal_list(list(hlds_goal)::in, list(hlds_goal)::out,
    lambda_info::in, lambda_info::out) is det.

lambda_process_goal_list([], [], !Info).
lambda_process_goal_list([Goal0 | Goals0], [Goal | Goals], !Info) :-
    lambda_process_goal(Goal0, Goal, !Info),
    lambda_process_goal_list(Goals0, Goals, !Info).

:- pred lambda_process_cases(list(case)::in, list(case)::out,
    lambda_info::in, lambda_info::out) is det.

lambda_process_cases([], [], !Info).
lambda_process_cases([Case0 | Cases0], [Case | Cases], !Info) :-
    Case0 = case(MainConsId, OtherConsIds, Goal0),
    lambda_process_goal(Goal0, Goal, !Info),
    Case = case(MainConsId, OtherConsIds, Goal),
    lambda_process_cases(Cases0, Cases, !Info).

:- pred lambda_process_unify_goal(prog_var::in, unify_rhs::in, unify_mode::in,
    unification::in, unify_context::in, hlds_goal_expr::out,
    lambda_info::in, lambda_info::out) is det.

lambda_process_unify_goal(LHS, RHS0, Mode, Unification0, Context, GoalExpr,
        !Info) :-
    (
        RHS0 = rhs_lambda_goal(Purity, Groundness, PredOrFunc, EvalMethod,
            NonLocalVars, Vars, Modes, Det, LambdaGoal0),
        % First, process the lambda goal recursively, in case it contains
        % some nested lambda expressions.
        lambda_process_goal(LambdaGoal0, LambdaGoal, !Info),

        % Then, convert the lambda expression into a new predicate.
        lambda_process_lambda(Purity, Groundness, PredOrFunc, EvalMethod, Vars,
            Modes, Det, NonLocalVars, LambdaGoal, Unification0, Y, Unification,
            !Info),
        GoalExpr = unify(LHS, Y, Mode, Unification, Context)
    ;
        ( RHS0 = rhs_var(_)
        ; RHS0 = rhs_functor(_, _, _)
        ),
        % Ordinary unifications are left unchanged.
        GoalExpr = unify(LHS, RHS0, Mode, Unification0, Context)
    ).

:- pred lambda_process_lambda(purity::in, ho_groundness::in,
    pred_or_func::in, lambda_eval_method::in,
    list(prog_var)::in, list(mer_mode)::in, determinism::in,
    list(prog_var)::in, hlds_goal::in, unification::in, unify_rhs::out,
    unification::out, lambda_info::in, lambda_info::out) is det.

lambda_process_lambda(Purity, _Groundness, PredOrFunc, EvalMethod, Vars, Modes,
        Detism, OrigNonLocals0, LambdaGoal, Unification0, Functor, Unification,
        LambdaInfo0, LambdaInfo) :-
    LambdaInfo0 = lambda_info(VarSet, VarTypes, TVarSet,
        InstVarSet, RttiVarMaps, Markers, HasParallelConj, POF, OrigPredName,
        ModuleInfo0, MustRecomputeNonLocals0),

    % Calculate the constraints which apply to this lambda expression.
    % Note currently we only allow lambda expressions to have universally
    % quantified constraints.
    rtti_varmaps_reusable_constraints(RttiVarMaps, AllConstraints),
    map.apply_to_list(Vars, VarTypes, LambdaVarTypes),
    list.map(type_vars, LambdaVarTypes, LambdaTypeVarsList),
    list.condense(LambdaTypeVarsList, LambdaTypeVars),
    list.filter(constraint_contains_vars(LambdaTypeVars),
        AllConstraints, UnivConstraints),
    Constraints = constraints(UnivConstraints, []),

    % Existentially typed lambda expressions are not yet supported
    % (see the documentation at top of this file).
    ExistQVars = [],
    LambdaGoal = hlds_goal(_, LambdaGoalInfo),
    LambdaGoalNonLocals = goal_info_get_nonlocals(LambdaGoalInfo),
    set.insert_list(LambdaGoalNonLocals, Vars, LambdaNonLocals),
    goal_util.extra_nonlocal_typeinfos(RttiVarMaps, VarTypes, ExistQVars,
        LambdaNonLocals, ExtraTypeInfos),
    OrigVars = OrigNonLocals0,

    (
        Unification0 = construct(Var, _, _, UniModes0, _, _, _)
    ;
        ( Unification0 = deconstruct(_, _, _, _, _, _)
        ; Unification0 = assign(_, _)
        ; Unification0 = simple_test(_, _)
        ; Unification0 = complicated_unify(_, _, _)
        ),
        unexpected(this_file, "transform_lambda: weird unification")
    ),

    set.delete_list(LambdaGoalNonLocals, Vars, NonLocals1),

    % We need all the typeinfos, including the ones that are not used,
    % for the layout structure describing the closure.
    NewTypeInfos = ExtraTypeInfos `set.difference` NonLocals1,
    NonLocals = NonLocals1 `set.union` NewTypeInfos,

    % If we added variables to the nonlocals of the lambda goal, then
    % we need to recompute the nonlocals for the procedure that contains it.
    ( \+ set.empty(NewTypeInfos) ->
        MustRecomputeNonLocals = yes
    ;
        MustRecomputeNonLocals = MustRecomputeNonLocals0
    ),

    set.to_sorted_list(NonLocals, ArgVars1),

    (
        % Optimize a special case: replace
        %   `(pred(Y1, Y2, ...) is Detism :-
        %       p(X1, X2, ..., Y1, Y2, ...))'
        % where `p' has determinism `Detism' with
        %   `p(X1, X2, ...)'
        %
        % This optimization is only valid if the modes of the Xi are input,
        % since only input arguments can be curried. It's also only valid
        % if all the inputs in the Yi precede the outputs. It's also not valid
        % if any of the Xi are in the Yi.

        LambdaGoal = hlds_goal(plain_call(PredId0, ProcId0, CallVars, _, _, _),
            _),
        module_info_pred_proc_info(ModuleInfo0, PredId0, ProcId0,
            Call_PredInfo, Call_ProcInfo),
        list.remove_suffix(CallVars, Vars, InitialVars),

        % check that none of the variables that we're trying to
        % use as curried arguments are lambda-bound variables
        \+ (
            list.member(InitialVar, InitialVars),
            list.member(InitialVar, Vars)
        ),

        % Check that the code models are compatible. Note that det is not
        % compatible with semidet, and semidet is not compatible with nondet,
        % since the calling conventions are different. If we're using the LLDS
        % back-end (i.e. not --high-level-code), det is compatible with nondet.
        % If we're using the MLDS back-end, then predicates and functions have
        % different calling conventions.
        Call_CodeModel = proc_info_interface_code_model(Call_ProcInfo),
        determinism_to_code_model(Detism, CodeModel),
        module_info_get_globals(ModuleInfo0, Globals),
        globals.get_target(Globals, Target),
        globals.lookup_bool_option(Globals, highlevel_code, HighLevelCode),
        (
            ( Target = target_c
            ; Target = target_il
            ; Target = target_java
            ; Target = target_asm
            ; Target = target_x86_64
            ),
            (
                HighLevelCode = no,
                (
                    CodeModel = Call_CodeModel
                ;
                    CodeModel = model_non,
                    Call_CodeModel = model_det
                )
            ;
                HighLevelCode = yes,
                Call_PredOrFunc = pred_info_is_pred_or_func(Call_PredInfo),
                PredOrFunc = Call_PredOrFunc,
                CodeModel = Call_CodeModel
            )
        ;
            Target = target_erlang,
            CodeModel = Call_CodeModel
        ),

        % Check that the curried arguments are all input.
        proc_info_get_argmodes(Call_ProcInfo, Call_ArgModes),
        list.length(InitialVars, NumInitialVars),
        list.take(NumInitialVars, Call_ArgModes, CurriedArgModes),
        (
            list.member(Mode, CurriedArgModes)
        =>
            mode_is_input(ModuleInfo0, Mode)
        )
    ->
        ArgVars = InitialVars,
        PredId = PredId0,
        ProcId = ProcId0,
        mode_util.modes_to_uni_modes(ModuleInfo0,
            CurriedArgModes, CurriedArgModes, UniModes),
        % We must mark the procedure as having had its address taken.
        proc_info_set_address_taken(address_is_taken,
            Call_ProcInfo, Call_NewProcInfo),
        module_info_set_pred_proc_info(PredId, ProcId,
            Call_PredInfo, Call_NewProcInfo,
            ModuleInfo0, ModuleInfo)
    ;
        % Prepare to create a new predicate for the lambda expression:
        % work out the arguments, module name, predicate name, arity,
        % arg types, determinism, context, status, etc. for the new predicate.

        ArgVars = put_typeinfo_vars_first(ArgVars1, VarTypes),
        list.append(ArgVars, Vars, AllArgVars),

        module_info_get_name(ModuleInfo0, ModuleName),
        OrigContext = goal_info_get_context(LambdaGoalInfo),
        term.context_file(OrigContext, OrigFile),
        term.context_line(OrigContext, OrigLine),
        module_info_next_lambda_count(OrigContext, LambdaCount,
            ModuleInfo0, ModuleInfo1),
        make_pred_name_with_context(ModuleName, "IntroducedFrom",
            PredOrFunc, OrigPredName, OrigLine, LambdaCount, PredName),
        LambdaContext = goal_info_get_context(LambdaGoalInfo),
        % The TVarSet is a superset of what it really ought be,
        % but that shouldn't matter.
        % Existentially typed lambda expressions are not yet supported
        % (see the documentation at top of this file).
        ExistQVars = [],
        uni_modes_to_modes(UniModes0, OrigArgModes),

        % We have to jump through hoops to work out the mode of the lambda
        % predicate. For introduced type_info arguments, we use the mode "in".
        % For the original non-local vars, we use the modes from `UniModes1'.
        % For the lambda var arguments at the end, we use the mode in the
        % lambda expression.

        list.length(ArgVars, NumArgVars),
        in_mode(In),
        list.duplicate(NumArgVars, In, InModes),
        map.from_corresponding_lists(ArgVars, InModes, ArgModesMap),

        map.from_corresponding_lists(OrigVars, OrigArgModes, OrigArgModesMap),
        map.overlay(ArgModesMap, OrigArgModesMap, ArgModesMap1),
        map.apply_to_list(ArgVars, ArgModesMap1, ArgModes1),

        % Recompute the uni_modes.
        modes_to_uni_modes(ModuleInfo1, ArgModes1, ArgModes1, UniModes),

        list.append(ArgModes1, Modes, AllArgModes),
        map.apply_to_list(AllArgVars, VarTypes, ArgTypes),

        purity_to_markers(Purity, LambdaMarkers),

        % Now construct the proc_info and pred_info for the new single-mode
        % predicate, using the information computed above.
        map.init(VarNameRemap),
        proc_info_create(LambdaContext, VarSet, VarTypes, AllArgVars,
            InstVarSet, AllArgModes, Detism, LambdaGoal, RttiVarMaps,
            address_is_taken, VarNameRemap, ProcInfo0),

        % The debugger ignores unnamed variables.
        ensure_all_headvars_are_named(ProcInfo0, ProcInfo1),

        % If the original procedure contained parallel conjunctions, then the
        % one we are creating here may have them as well. If it does not, then
        % the value in the proc_info of the lambda predicate will be an
        % overconservative estimate.
        proc_info_set_has_parallel_conj(HasParallelConj, ProcInfo1, ProcInfo2),

        % If we previously already needed to recompute the nonlocals,
        % then we'd better to that recomputation for the procedure
        % that we just created.
        (
            MustRecomputeNonLocals0 = yes,
            requantify_proc(ProcInfo2, ProcInfo)
        ;
            MustRecomputeNonLocals0 = no,
            ProcInfo = ProcInfo2
        ),
        set.init(Assertions),
        pred_info_create(ModuleName, PredName, PredOrFunc, LambdaContext,
            origin_lambda(OrigFile, OrigLine, LambdaCount), status_local,
            LambdaMarkers, ArgTypes, TVarSet, ExistQVars, Constraints,
            Assertions, VarNameRemap, ProcInfo, ProcId, PredInfo),

        % Save the new predicate in the predicate table.
        module_info_get_predicate_table(ModuleInfo1, PredicateTable0),
        predicate_table_insert(PredInfo, PredId,
            PredicateTable0, PredicateTable),
        module_info_set_predicate_table(PredicateTable,
            ModuleInfo1, ModuleInfo)
    ),
    ShroudedPredProcId = shroud_pred_proc_id(proc(PredId, ProcId)),
    ConsId = pred_const(ShroudedPredProcId, EvalMethod),
    Functor = rhs_functor(ConsId, no, ArgVars),

    Unification = construct(Var, ConsId, ArgVars, UniModes,
        construct_dynamically, cell_is_unique, no_construct_sub_info),
    LambdaInfo = lambda_info(VarSet, VarTypes, TVarSet,
        InstVarSet, RttiVarMaps, Markers, HasParallelConj, POF, OrigPredName,
        ModuleInfo, MustRecomputeNonLocals).

:- pred constraint_contains_vars(list(tvar)::in, prog_constraint::in)
    is semidet.

constraint_contains_vars(LambdaVars, ClassConstraint) :-
    ClassConstraint = constraint(_, ConstraintTypes),
    list.map(type_vars, ConstraintTypes, ConstraintVarsList),
    list.condense(ConstraintVarsList, ConstraintVars),
    % Probably not the most efficient way of doing it, but I wouldn't think
    % that it matters.
    set.list_to_set(LambdaVars, LambdaVarsSet),
    set.list_to_set(ConstraintVars, ConstraintVarsSet),
    set.subset(ConstraintVarsSet, LambdaVarsSet).

    % This predicate works out the modes of the original non-local variables
    % of a lambda expression based on the list of uni_mode in the unify_info
    % for the lambda unification.
    %
:- pred uni_modes_to_modes(list(uni_mode)::in, list(mer_mode)::out) is det.

uni_modes_to_modes([], []).
uni_modes_to_modes([UniMode | UniModes], [Mode | Modes]) :-
    UniMode = ((_Initial0 - Initial1) -> (_Final0 - _Final1)),
    Mode = (Initial1 -> Initial1),
    uni_modes_to_modes(UniModes, Modes).

%---------------------------------------------------------------------------%

:- func this_file = string.

this_file = "lambda.m".

%---------------------------------------------------------------------------%
:- end_module lambda.
%---------------------------------------------------------------------------%
