%----------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et
%----------------------------------------------------------------------------%
% Copyright (C) 2014 The Mercury team.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury distribution.
%----------------------------------------------------------------------------%
%
% File: simplify_goal_unify.m.
%
% This module handles simplification of unifications.
%
%----------------------------------------------------------------------------%

:- module check_hlds.simplify.simplify_goal_unify.
:- interface.

:- import_module check_hlds.simplify.common.
:- import_module check_hlds.simplify.simplify_info.
:- import_module hlds.
:- import_module hlds.hlds_goal.
:- import_module hlds.instmap.

:- pred simplify_goal_unify(
    hlds_goal_expr::in(goal_expr_unify), hlds_goal_expr::out,
    hlds_goal_info::in, hlds_goal_info::out,
    simplify_nested_context::in, instmap::in,
    common_info::in, common_info::out,
    simplify_info::in, simplify_info::out) is det.

%----------------------------------------------------------------------------%

:- implementation.

:- import_module check_hlds.polymorphism.
:- import_module check_hlds.simplify.simplify_goal.
:- import_module check_hlds.type_util.
:- import_module check_hlds.unify_proc.
:- import_module hlds.code_model.
:- import_module hlds.goal_util.
:- import_module hlds.hlds_module.
:- import_module hlds.hlds_pred.
:- import_module hlds.hlds_rtti.
:- import_module hlds.make_goal.
:- import_module hlds.pred_table.
:- import_module hlds.special_pred.
:- import_module libs.
:- import_module libs.globals.
:- import_module libs.options.
:- import_module mdbcomp.
:- import_module mdbcomp.builtin_modules.
:- import_module mdbcomp.prim_data.
:- import_module mdbcomp.sym_name.
:- import_module parse_tree.
:- import_module parse_tree.prog_data.
:- import_module parse_tree.prog_type.
:- import_module parse_tree.set_of_var.

:- import_module bool.
:- import_module int.
:- import_module list.
:- import_module map.
:- import_module maybe.
:- import_module pair.
:- import_module require.
:- import_module term.

simplify_goal_unify(GoalExpr0, GoalExpr, GoalInfo0, GoalInfo,
        NestedContext0, InstMap0, !Common, !Info) :-
    GoalExpr0 = unify(LT0, RT0, M, U0, C),
    (
        RT0 = rhs_lambda_goal(Purity, Groundness, PredOrFunc, EvalMethod,
            NonLocals, Vars, Modes, LambdaDeclaredDet, LambdaGoal0),
        determinism_to_code_model(LambdaDeclaredDet, LambdaCodeModel),
        (
            ( LambdaCodeModel = model_det
            ; LambdaCodeModel = model_semi
            ),
            ProcIsModelNon = no
        ;
            LambdaCodeModel = model_non,
            Context = goal_info_get_context(GoalInfo0),
            ProcIsModelNon = yes(imp_lambda(Context))
        ),
        NestedContext0 = simplify_nested_context(InsideDuplForSwitch,
            NumEnclosingLambdas0, _ProcModelNon),
        LambdaNestedContext = simplify_nested_context(InsideDuplForSwitch,
            NumEnclosingLambdas0 + 1, ProcIsModelNon),

        simplify_info_get_module_info(!.Info, ModuleInfo),
        instmap.pre_lambda_update(ModuleInfo, Vars, Modes,
            InstMap0, LambdaInstMap0),

        % Don't attempt to pass structs into lambda_goals,
        % since that could change the curried non-locals of the
        % lambda_goal, and that would be difficult to fix up.
        LambdaCommon0 = common_info_init,

        % Don't attempt to pass structs out of lambda_goals.
        simplify_goal(LambdaGoal0, LambdaGoal, LambdaNestedContext,
            LambdaInstMap0, LambdaCommon0, _, !Info),

        RT = rhs_lambda_goal(Purity, Groundness, PredOrFunc, EvalMethod,
            NonLocals, Vars, Modes, LambdaDeclaredDet, LambdaGoal),
        GoalExpr = unify(LT0, RT, M, U0, C),
        GoalInfo = GoalInfo0
    ;
        ( RT0 = rhs_functor(_, _, _)
        ; RT0 = rhs_var(_)
        ),
        (
            % A unification of the form X = X can be safely optimised away.
            RT0 = rhs_var(LT0)
        ->
            Context = goal_info_get_context(GoalInfo0),
            hlds_goal(GoalExpr, GoalInfo) = true_goal_with_context(Context)
        ;
            U0 = complicated_unify(UniMode, CanFail, TypeInfoVars)
        ->
            (
                RT0 = rhs_var(V),
                process_compl_unify(LT0, V, UniMode, CanFail, TypeInfoVars, C,
                    GoalInfo0, GoalExpr1,
                    NestedContext0, InstMap0, !Common, !Info),
                GoalExpr1 = hlds_goal(GoalExpr, GoalInfo)
            ;
                RT0 = rhs_functor(_, _, _),
                unexpected($module, $pred, "invalid RHS for complicated unify")
            )
        ;
            simplify_do_common_struct(!.Info)
        ->
            common_optimise_unification(U0, M,
                GoalExpr0, GoalExpr, GoalInfo0, GoalInfo, !Common, !Info)
        ;
            ( simplify_do_opt_duplicate_calls(!.Info)
            ; simplify_do_warn_duplicate_calls(!.Info)
            )
        ->
            % We need to do the pass, to record the variable equivalences
            % used for optimizing or warning about duplicate calls.
            % But we don't want to perform the optimization, so we disregard
            % the optimized goal and instead use the original one.
            common_optimise_unification(U0, M,
                GoalExpr0, _GoalExpr1, GoalInfo0, _GoalInfo1, !Common, !Info),
            GoalExpr = GoalExpr0,
            GoalInfo = GoalInfo0
        ;
            GoalExpr = GoalExpr0,
            GoalInfo = GoalInfo0
        )
    ).

:- pred process_compl_unify(prog_var::in, prog_var::in, uni_mode::in,
    can_fail::in, list(prog_var)::in, unify_context::in, hlds_goal_info::in,
    hlds_goal::out, simplify_nested_context::in, instmap::in,
    common_info::in, common_info::out,
    simplify_info::in, simplify_info::out) is det.

process_compl_unify(XVar, YVar, UniMode, CanFail, _OldTypeInfoVars, Context,
        GoalInfo0, Goal, NestedContext0, InstMap0, !Common, !Info) :-
    simplify_info_get_module_info(!.Info, ModuleInfo),
    simplify_info_get_var_types(!.Info, VarTypes),
    lookup_var_type(VarTypes, XVar, Type),
    ( Type = type_variable(TypeVar, Kind) ->
        % Convert polymorphic unifications into calls to `unify/2',
        % the general unification predicate, passing the appropriate type_info:
        %   unify(TypeInfoVar, X, Y)
        % where TypeInfoVar is the type_info variable associated with
        % the type of the variables that are being unified.

        type_info_locn(TypeVar, Kind, TypeInfoVar, ExtraGoals, !Info),
        call_generic_unify(TypeInfoVar, XVar, YVar, ModuleInfo, !.Info,
            Context, GoalInfo0, Call)
    ; type_is_higher_order(Type) ->
        % Convert higher-order unifications into calls to
        % builtin_unify_pred (which calls error/1).
        GContext = goal_info_get_context(GoalInfo0),
        generate_simple_call(mercury_private_builtin_module,
            "builtin_unify_pred", pf_predicate, mode_no(0), detism_semi,
            purity_pure, [XVar, YVar], [], instmap_delta_bind_no_var,
            ModuleInfo, GContext, hlds_goal(Call0, _)),
        simplify_goal_expr(Call0, Call1, GoalInfo0, GoalInfo,
            NestedContext0, InstMap0, !Common, !Info),
        Call = hlds_goal(Call1, GoalInfo),
        ExtraGoals = []
    ;
        type_to_ctor_and_args_det(Type, TypeCtor, TypeArgs),
        determinism_components(Det, CanFail, at_most_one),
        unify_proc.lookup_mode_num(ModuleInfo, TypeCtor, UniMode, Det, ProcId),
        module_info_get_globals(ModuleInfo, Globals),
        globals.lookup_bool_option(Globals, special_preds, SpecialPreds),
        globals.lookup_bool_option(Globals, can_compare_compound_values,
            CanCompareCompoundValues),
        (
            % On the Erlang backend, it is faster for us to use builtin
            % comparison operators on high level data structures than to
            % deconstruct the data structure and compare the atomic
            % constituents. We can only do this on values of a type
            % if that type does not have user-defined equality.
            hlds_pred.in_in_unification_proc_id(ProcId),
            CanCompareCompoundValues = yes,
            type_definitely_has_no_user_defined_equality_pred(ModuleInfo, Type)
        ->
            ExtraGoals = [],
            call_builtin_compound_eq(XVar, YVar, ModuleInfo, GoalInfo0, Call)
        ;
            hlds_pred.in_in_unification_proc_id(ProcId),
            (
                SpecialPreds = no
            ;
                SpecialPreds = yes,

                % For most imported types we only generate unification
                % predicate declarations if they are needed for complicated
                % unifications other than proc_id 0. higher_order.m will
                % specialize these cases if possible.
                %
                special_pred_is_generated_lazily(ModuleInfo, TypeCtor)
            )
        ->
            make_type_info_vars([Type], TypeInfoVars, ExtraGoals, !Info),
            ( TypeInfoVars = [TypeInfoVarPrime] ->
                TypeInfoVar = TypeInfoVarPrime
            ;
                unexpected($module, $pred,
                    "more than one typeinfo for one type var")
            ),
            call_generic_unify(TypeInfoVar, XVar, YVar, ModuleInfo, !.Info,
                Context, GoalInfo0, Call)
        ;
            % Convert other complicated unifications into calls to
            % specific unification predicates, inserting extra typeinfo
            % arguments if necessary.
            make_type_info_vars(TypeArgs, TypeInfoVars, ExtraGoals, !Info),
            call_specific_unify(TypeCtor, TypeInfoVars, XVar, YVar, ProcId,
                ModuleInfo, Context, GoalInfo0, Call0, CallGoalInfo0),
            simplify_goal_expr(Call0, Call1, CallGoalInfo0, CallGoalInfo1,
                NestedContext0, InstMap0, !Common, !Info),
            Call = hlds_goal(Call1, CallGoalInfo1)
        )
    ),
    Conjuncts = ExtraGoals ++ [Call],
    conj_list_to_goal(Conjuncts, GoalInfo0, Goal).

:- pred call_generic_unify(prog_var::in, prog_var::in,  prog_var::in,
    module_info::in, simplify_info::in, unify_context::in,
    hlds_goal_info::in, hlds_goal::out) is det.

call_generic_unify(TypeInfoVar, XVar, YVar, ModuleInfo, _, _, GoalInfo,
        Call) :-
    ArgVars = [TypeInfoVar, XVar, YVar],
    Context = goal_info_get_context(GoalInfo),
    goal_util.generate_simple_call(mercury_public_builtin_module,
        "unify", pf_predicate, mode_no(0), detism_semi, purity_pure, ArgVars,
        [], instmap_delta_bind_no_var, ModuleInfo, Context, Call).

:- pred call_specific_unify(type_ctor::in, list(prog_var)::in,
    prog_var::in, prog_var::in, proc_id::in,
    module_info::in, unify_context::in, hlds_goal_info::in,
    hlds_goal_expr::out, hlds_goal_info::out) is det.

call_specific_unify(TypeCtor, TypeInfoVars, XVar, YVar, ProcId, ModuleInfo,
        Context, GoalInfo0, CallExpr, CallGoalInfo) :-
    % Create the new call goal.
    ArgVars = TypeInfoVars ++ [XVar, YVar],
    module_info_get_special_pred_map(ModuleInfo, SpecialPredMap),
    map.lookup(SpecialPredMap, spec_pred_unify - TypeCtor, PredId),
    module_info_pred_info(ModuleInfo, PredId, PredInfo),
    ModuleName = pred_info_module(PredInfo),
    PredName = pred_info_name(PredInfo),
    SymName = qualified(ModuleName, PredName),
    CallContext = call_unify_context(XVar, rhs_var(YVar), Context),
    CallExpr = plain_call(PredId, ProcId, ArgVars, not_builtin,
        yes(CallContext), SymName),

    % Add the extra type_info vars to the nonlocals for the call.
    NonLocals0 = goal_info_get_nonlocals(GoalInfo0),
    set_of_var.insert_list(TypeInfoVars, NonLocals0, NonLocals),
    goal_info_set_nonlocals(NonLocals, GoalInfo0, CallGoalInfo).

:- pred call_builtin_compound_eq(prog_var::in, prog_var::in, module_info::in,
    hlds_goal_info::in, hlds_goal::out) is det.

call_builtin_compound_eq(XVar, YVar, ModuleInfo, GoalInfo, Call) :-
    Context = goal_info_get_context(GoalInfo),
    goal_util.generate_simple_call(mercury_private_builtin_module,
        "builtin_compound_eq", pf_predicate, only_mode, detism_semi,
        purity_pure, [XVar, YVar], [], instmap_delta_bind_no_var, ModuleInfo,
        Context, Call).

%---------------------------------------------------------------------------%

:- pred make_type_info_vars(list(mer_type)::in, list(prog_var)::out,
    list(hlds_goal)::out, simplify_info::in, simplify_info::out) is det.

make_type_info_vars(Types, TypeInfoVars, TypeInfoGoals, !Info) :-
    % Extract the information from simplify_info.
    simplify_info_get_varset(!.Info, VarSet0),
    simplify_info_get_var_types(!.Info, VarTypes0),
    simplify_info_get_rtti_varmaps(!.Info, RttiVarMaps0),
    simplify_info_get_module_info(!.Info, ModuleInfo0),
    simplify_info_get_pred_proc_id(!.Info, PredId, ProcId),

    some [!PredInfo, !ProcInfo, !PolyInfo] (
        % The varset, vartypes and rtti_varmaps get updated by the call to
        % polymorphism.m, below. That module will work on the poly_info,
        % however, which is derived from the information in the proc_info.
        % Therefore we:
        %   - copy the info from the simplify_info to the proc_info,
        %   - create a poly_info from the proc_info,
        %   - do the polymorphism transformation,
        %   - extract info from the poly_info and put it in the proc_info,
        %   - copy the information from the proc_info back into the
        %     simplify_info.

        module_info_pred_proc_info(ModuleInfo0, PredId, ProcId,
            !:PredInfo, !:ProcInfo),
        proc_info_set_vartypes(VarTypes0, !ProcInfo),
        proc_info_set_varset(VarSet0, !ProcInfo),
        proc_info_set_rtti_varmaps(RttiVarMaps0, !ProcInfo),

        % Call polymorphism.m to create the type_infos.
        create_poly_info(ModuleInfo0, !.PredInfo, !.ProcInfo, !:PolyInfo),
        term.context_init(Context),
        polymorphism_make_type_info_vars(Types, Context,
            TypeInfoVars, TypeInfoGoals, !PolyInfo),
        poly_info_extract(!.PolyInfo, !PredInfo, !ProcInfo, ModuleInfo1),

        proc_info_get_vartypes(!.ProcInfo, VarTypes),
        proc_info_get_varset(!.ProcInfo, VarSet),
        proc_info_get_rtti_varmaps(!.ProcInfo, RttiVarMaps),
        simplify_info_set_var_types(VarTypes, !Info),
        simplify_info_set_varset(VarSet, !Info),
        simplify_info_set_rtti_varmaps(RttiVarMaps, !Info),

        % Put the new proc_info and pred_info back in the module_info
        % and put the new module_info back in the simplify_info.
        module_info_set_pred_proc_info(PredId, ProcId, !.PredInfo, !.ProcInfo,
            ModuleInfo1, ModuleInfo)
    ),
    simplify_info_set_module_info(ModuleInfo, !Info).

:- pred type_info_locn(tvar::in, kind::in, prog_var::out,
    list(hlds_goal)::out, simplify_info::in, simplify_info::out) is det.

type_info_locn(TypeVar, Kind, TypeInfoVar, Goals, !Info) :-
    simplify_info_get_rtti_varmaps(!.Info, RttiVarMaps),
    rtti_lookup_type_info_locn(RttiVarMaps, TypeVar, TypeInfoLocn),
    (
        % If the typeinfo is available in a variable, just use it.
        TypeInfoLocn = type_info(TypeInfoVar),
        Goals = []
    ;
        % If the typeinfo is in a typeclass_info then we need to extract it.
        TypeInfoLocn = typeclass_info(TypeClassInfoVar, Index),
        extract_type_info(TypeVar, Kind, TypeClassInfoVar, Index, Goals,
            TypeInfoVar, !Info)
    ).

:- pred extract_type_info(tvar::in, kind::in, prog_var::in, int::in,
    list(hlds_goal)::out, prog_var::out,
    simplify_info::in, simplify_info::out) is det.

extract_type_info(TypeVar, Kind, TypeClassInfoVar, Index, Goals, TypeInfoVar,
        !Info) :-
    simplify_info_get_module_info(!.Info, ModuleInfo),
    simplify_info_get_varset(!.Info, VarSet0),
    simplify_info_get_var_types(!.Info, VarTypes0),
    simplify_info_get_rtti_varmaps(!.Info, RttiVarMaps0),

    polymorphism.gen_extract_type_info(ModuleInfo, TypeVar, Kind,
        TypeClassInfoVar, iov_int(Index), Goals, TypeInfoVar,
        VarSet0, VarSet, VarTypes0, VarTypes, RttiVarMaps0, RttiVarMaps),

    simplify_info_set_var_types(VarTypes, !Info),
    simplify_info_set_varset(VarSet, !Info),
    simplify_info_set_rtti_varmaps(RttiVarMaps, !Info).

%---------------------------------------------------------------------------%
:- end_module check_hlds.simplify.simplify_goal_unify.
%---------------------------------------------------------------------------%
