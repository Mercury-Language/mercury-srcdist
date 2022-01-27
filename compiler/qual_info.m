%-----------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et
%-----------------------------------------------------------------------------%
% Copyright (C) 2005-2009, 2011-2012 The University of Melbourne.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury distribution.
%-----------------------------------------------------------------------------%
%
% File: qual_info.m.
% Main author: fjh.
%
%-----------------------------------------------------------------------------%

:- module hlds.make_hlds.qual_info.
:- interface.

:- import_module hlds.hlds_goal.
:- import_module hlds.hlds_module.
:- import_module hlds.hlds_pred.
:- import_module mdbcomp.sym_name.
:- import_module parse_tree.equiv_type.
:- import_module parse_tree.error_util.
:- import_module parse_tree.module_qual.
:- import_module parse_tree.prog_data.
:- import_module recompilation.

:- import_module list.
:- import_module bool.

%-----------------------------------------------------------------------------%

:- type qual_info.

:- pred init_qual_info(mq_info::in, eqv_map::in, qual_info::out) is det.

    % Update the qual_info when processing a new clause.
    %
:- pred update_qual_info(tvar_name_map::in, tvarset::in,
    vartypes::in, import_status::in,
    qual_info::in, qual_info::out) is det.

:- pred qual_info_get_tvarset(qual_info::in, tvarset::out) is det.
:- pred qual_info_get_var_types(qual_info::in, vartypes::out) is det.
:- pred qual_info_get_mq_info(qual_info::in, mq_info::out) is det.
:- pred qual_info_get_import_status(qual_info::in, import_status::out) is det.
:- pred qual_info_get_found_syntax_error(qual_info::in, bool::out) is det.

:- pred qual_info_set_mq_info(mq_info::in, qual_info::in, qual_info::out)
    is det.
:- pred qual_info_set_var_types(vartypes::in, qual_info::in, qual_info::out)
    is det.
:- pred qual_info_set_found_syntax_error(bool::in,
    qual_info::in, qual_info::out) is det.

:- pred apply_to_recompilation_info(
    pred(recompilation_info, recompilation_info)::in(pred(in, out) is det),
    qual_info::in, qual_info::out) is det.

    % Move the recompilation_info from the qual_info to the module_info
    % after make_hlds is finished with it and the qual_info is dead.
    %
:- pred set_module_recompilation_info(qual_info::in,
    module_info::in, module_info::out) is det.

    % Process an explicit type qualification.
    %
:- pred process_type_qualification(prog_var::in, mer_type::in, tvarset::in,
    prog_context::in, module_info::in, module_info::out,
    qual_info::in, qual_info::out,
    list(error_spec)::in, list(error_spec)::out) is det.

:- pred make_atomic_unification(prog_var::in, unify_rhs::in, prog_context::in,
    unify_main_context::in, unify_sub_contexts::in, purity::in, hlds_goal::out,
    qual_info::in, qual_info::out) is det.

    % As above, except with default purity pure.
    %
:- pred make_atomic_unification(prog_var::in, unify_rhs::in, prog_context::in,
    unify_main_context::in, unify_sub_contexts::in, hlds_goal::out,
    qual_info::in, qual_info::out) is det.

:- pred record_called_pred_or_func(pred_or_func::in, sym_name::in, arity::in,
    qual_info::in, qual_info::out) is det.

:- pred construct_pred_or_func_call(pred_id::in, pred_or_func::in,
    sym_name::in, list(prog_var)::in, hlds_goal_info::in, hlds_goal::out,
    qual_info::in, qual_info::out) is det.

:- pred do_construct_pred_or_func_call(pred_id::in, pred_or_func::in,
    sym_name::in, list(prog_var)::in, hlds_goal_info::in, hlds_goal::out)
    is det.

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- implementation.

:- import_module hlds.hlds_data.
:- import_module hlds.make_goal.
:- import_module parse_tree.prog_type.
:- import_module parse_tree.prog_type_subst.
:- import_module parse_tree.prog_util.

:- import_module map.
:- import_module term.
:- import_module varset.

%-----------------------------------------------------------------------------%

    % Information used to process explicit type qualifications.
    %
:- type qual_info
    --->    qual_info(
                % Used to expand equivalence types.
                qual_eqv_map            :: eqv_map,

                % All type variables for predicate.
                qual_tvarset            :: tvarset,

                % Map from clause type variable to actual type variable
                % in tvarset.
                qual_tvar_renaming      :: tvar_renaming,

                % Type variables in tvarset occurring in the predicate's
                % argument types indexed by name.
                qual_tvar_name_map      :: tvar_name_map,

                qual_vartypes           :: vartypes,

                % Module qualification info.
                qual_mq_info            :: mq_info,

                qual_import_status      :: import_status,

                % Was there a syntax error in a field update?
                qual_found_syntax_error :: bool
            ).

init_qual_info(MQInfo0, EqvMap, QualInfo) :-
    mq_info_set_need_qual_flag(may_be_unqualified, MQInfo0, MQInfo),
    varset.init(TVarSet),
    map.init(Renaming),
    map.init(Index),
    init_vartypes(VarTypes),
    FoundSyntaxError = no,
    QualInfo = qual_info(EqvMap, TVarSet, Renaming, Index, VarTypes,
        MQInfo, status_local, FoundSyntaxError).

update_qual_info(TVarNameMap, TVarSet, VarTypes, Status, !QualInfo) :-
    !.QualInfo = qual_info(EqvMap, _TVarSet0, _Renaming0, _TVarNameMap0,
        _VarTypes0, MQInfo, _Status, _FoundError),
    % The renaming for one clause is useless in the others.
    map.init(Renaming),
    !:QualInfo = qual_info(EqvMap, TVarSet, Renaming, TVarNameMap,
        VarTypes, MQInfo, Status, no).

qual_info_get_tvarset(Info, Info ^ qual_tvarset).
qual_info_get_var_types(Info, Info ^ qual_vartypes).
qual_info_get_mq_info(Info, Info ^ qual_mq_info).
qual_info_get_import_status(Info, Info ^ qual_import_status).
qual_info_get_found_syntax_error(Info, Info ^ qual_found_syntax_error).

qual_info_set_mq_info(MQInfo, Info, Info ^ qual_mq_info := MQInfo).
qual_info_set_var_types(VarTypes, Info, Info ^ qual_vartypes := VarTypes).
qual_info_set_found_syntax_error(FoundError, Info,
    Info ^ qual_found_syntax_error := FoundError).

apply_to_recompilation_info(Pred, !QualInfo) :-
    MQInfo0 = !.QualInfo ^ qual_mq_info,
    mq_info_get_recompilation_info(MQInfo0, MaybeRecompInfo0),
    (
        MaybeRecompInfo0 = yes(RecompInfo0),
        Pred(RecompInfo0, RecompInfo),
        mq_info_set_recompilation_info(yes(RecompInfo), MQInfo0, MQInfo),
        !QualInfo ^ qual_mq_info := MQInfo
    ;
        MaybeRecompInfo0 = no
    ).

set_module_recompilation_info(QualInfo, !ModuleInfo) :-
    mq_info_get_recompilation_info(QualInfo ^ qual_mq_info, RecompInfo),
    module_info_set_maybe_recompilation_info(RecompInfo, !ModuleInfo).

%-----------------------------------------------------------------------------%

process_type_qualification(Var, Type0, VarSet, Context, !ModuleInfo,
        !QualInfo, !Specs) :-
    !.QualInfo = qual_info(EqvMap, TVarSet0, TVarRenaming0,
        TVarNameMap0, VarTypes0, MQInfo0, Status, FoundError),
    ( Status = status_opt_imported ->
        % Types in `.opt' files should already be fully module qualified.
        Type1 = Type0,
        MQInfo = MQInfo0
    ;
        qualify_type_qualification(Type0, Type1, Context, MQInfo0, MQInfo,
            !Specs)
    ),

    % Find any new type variables introduced by this type, and
    % add them to the var-name index and the variable renaming.
    type_vars(Type1, TVars),
    get_new_tvars(TVars, VarSet, TVarSet0, TVarSet1,
        TVarNameMap0, TVarNameMap, TVarRenaming0, TVarRenaming),

    % Apply the updated renaming to convert type variables in
    % the clause to type variables in the tvarset.
    apply_variable_renaming_to_type(TVarRenaming, Type1, Type2),

    % Expand equivalence types.
    % We don't need to record the expanded types for smart recompilation
    % because at the moment no recompilation.item_id can depend on a
    % clause item.
    RecordExpanded = no,
    equiv_type.replace_in_type(EqvMap, Type2, Type, _, TVarSet1, TVarSet,
        RecordExpanded, _),
    update_var_types(Var, Type, Context, VarTypes0, VarTypes, !Specs),
    !:QualInfo = qual_info(EqvMap, TVarSet, TVarRenaming,
        TVarNameMap, VarTypes, MQInfo, Status, FoundError).

:- pred update_var_types(prog_var::in, mer_type::in, prog_context::in,
    vartypes::in, vartypes::out,
    list(error_spec)::in, list(error_spec)::out) is det.

update_var_types(Var, Type, Context, !VarTypes, !Specs) :-
    ( search_var_type(!.VarTypes, Var, Type0) ->
        ( Type = Type0 ->
            true
        ;
            Pieces = [words("Error: explicit type qualification"),
                words("does not match prior qualification."), nl],
            Msg = simple_msg(Context, [always(Pieces)]),
            Spec = error_spec(severity_error, phase_parse_tree_to_hlds, [Msg]),
            !:Specs = [Spec | !.Specs]
        )
    ;
        add_var_type(Var, Type, !VarTypes)
    ).

%-----------------------------------------------------------------------------%

make_atomic_unification(Var, RHS, Context, MainContext, SubContext,
        Goal, !QualInfo) :-
    make_atomic_unification(Var, RHS, Context, MainContext, SubContext,
        purity_pure, Goal, !QualInfo).

make_atomic_unification(Var, RHS, Context, MainContext, SubContext, Purity,
        Goal, !QualInfo) :-
    (
        RHS = rhs_var(_)
    ;
        RHS = rhs_lambda_goal(_, _, _, _, _, _, _, _, _)
    ;
        RHS = rhs_functor(ConsId, _, _),
        record_used_functor(ConsId, !QualInfo)
    ),
    create_atomic_complicated_unification(Var, RHS, Context,
        MainContext, SubContext, Purity, Goal).

record_called_pred_or_func(PredOrFunc, SymName, Arity, !QualInfo) :-
    Id = item_name(SymName, Arity),
    apply_to_recompilation_info(recompilation.record_used_item(
        pred_or_func_to_item_type(PredOrFunc), Id, Id), !QualInfo).

:- pred record_used_functor(cons_id::in, qual_info::in, qual_info::out) is det.

record_used_functor(ConsId, !QualInfo) :-
    ( ConsId = cons(SymName, Arity, _) ->
        Id = item_name(SymName, Arity),
        apply_to_recompilation_info(record_used_item(functor_item, Id, Id),
            !QualInfo)
    ;
        true
    ).

%-----------------------------------------------------------------------------%

construct_pred_or_func_call(PredId, PredOrFunc, SymName, Args, GoalInfo, Goal,
        !QualInfo) :-
    do_construct_pred_or_func_call(PredId, PredOrFunc, SymName, Args,
        GoalInfo, Goal),
    list.length(Args, Arity),
    adjust_func_arity(PredOrFunc, OrigArity, Arity),
    record_called_pred_or_func(PredOrFunc, SymName, OrigArity, !QualInfo).

do_construct_pred_or_func_call(PredId, PredOrFunc, SymName, Args,
        GoalInfo, Goal) :-
    (
        PredOrFunc = pf_predicate,
        GoalExpr = plain_call(PredId, invalid_proc_id, Args, not_builtin, no,
            SymName),
        Goal = hlds_goal(GoalExpr, GoalInfo)
    ;
        PredOrFunc = pf_function,
        pred_args_to_func_args(Args, FuncArgs, RetArg),
        list.length(FuncArgs, Arity),
        TypeCtor = cons_id_dummy_type_ctor,
        ConsId = cons(SymName, Arity, TypeCtor),
        Context = goal_info_get_context(GoalInfo),
        RHS = rhs_functor(ConsId, is_not_exist_constr, FuncArgs),
        create_pure_atomic_complicated_unification(RetArg, RHS,
            Context, umc_explicit, [], hlds_goal(GoalExpr, _)),
        Goal = hlds_goal(GoalExpr, GoalInfo)
    ).

%-----------------------------------------------------------------------------%
:- end_module hlds.make_hlds.qual_info.
%-----------------------------------------------------------------------------%
