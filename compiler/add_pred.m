%-----------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et
%-----------------------------------------------------------------------------%
% Copyright (C) 1993-2012,2014 The University of Melbourne.
% Copyright (C) 2015 The Mercury team.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury distribution.
%-----------------------------------------------------------------------------%
%
% File: add_pred.m.
%
% This submodule of make_hlds handles the type and mode declarations
% for predicates.
%
%-----------------------------------------------------------------------------%

:- module hlds.add_pred.
:- interface.

:- import_module hlds.hlds_module.
:- import_module hlds.hlds_pred.
:- import_module hlds.make_hlds.
:- import_module hlds.status.
:- import_module mdbcomp.
:- import_module mdbcomp.prim_data.
:- import_module mdbcomp.sym_name.
:- import_module parse_tree.
:- import_module parse_tree.error_util.
:- import_module parse_tree.prog_data.
:- import_module parse_tree.prog_item.

:- import_module list.
:- import_module maybe.

%-----------------------------------------------------------------------------%

    % Add a pred or predmode declaration for a predicate.
    %
    % We return MaybePredProcId = yes(...) if and only if the declaration
    % is a predmode declaration, and we could add both parts (the pred part
    % and the mode part) to the HLDS.
    %
    % If there is no mode part, we could return the pred_id, but we would
    % not be able to return a proc_id.
    %
:- pred module_add_pred_decl(pred_status::in, need_qualifier::in,
    item_pred_decl_info::in, maybe(pred_proc_id)::out,
    module_info::in, module_info::out,
    list(error_spec)::in, list(error_spec)::out) is det.

:- pred add_new_proc(prog_context::in, int::in, arity::in,
    inst_varset::in, list(mer_mode)::in,
    maybe(list(mer_mode))::in, maybe(list(is_live))::in,
    detism_decl::in, maybe(determinism)::in,
    is_address_taken::in, has_parallel_conj::in,
    pred_info::in, pred_info::out, proc_id::out) is det.

    % Add a mode declaration for a predicate.
    % XXX We should take an item_mode_decl_info as input, just as
    % module_add_pred_decl takes an item_pred_decl_info.
    %
:- pred module_add_mode(prog_context::in, int::in,
    maybe(item_mercury_status)::in, pred_status::in,
    pred_or_func::in, sym_name::in, inst_varset::in, list(mer_mode)::in,
    maybe(determinism)::in, maybe_class_method::in,
    pred_proc_id::out, module_info::in, module_info::out,
    list(error_spec)::in, list(error_spec)::out) is det.

    % Whenever there is a clause or mode declaration for an undeclared
    % predicate, we add an implicit declaration
    %   :- pred p(T1, T2, ..., Tn).
    % for that predicate; the real types will be inferred by type inference.
    %
:- pred preds_add_implicit_report_error(module_info::in, module_info::out,
    module_name::in, sym_name::in, arity::in, pred_or_func::in,
    pred_status::in, maybe_class_method::in, prog_context::in,
    pred_origin::in, list(format_component)::in, pred_id::out,
    list(error_spec)::in, list(error_spec)::out) is det.

:- pred preds_add_implicit_for_assertion(module_info::in, module_info::out,
    module_name::in, sym_name::in, arity::in, pred_or_func::in,
    list(prog_var)::in, pred_status::in, prog_context::in, pred_id::out)
    is det.

:- pred check_pred_if_field_access_function(module_info::in,
    sec_item(item_pred_decl_info)::in,
    list(error_spec)::in, list(error_spec)::out) is det.

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- implementation.

:- import_module hlds.hlds_args.
:- import_module hlds.hlds_clauses.
:- import_module hlds.hlds_cons.
:- import_module hlds.hlds_goal.
:- import_module hlds.hlds_rtti.
:- import_module hlds.make_hlds_error.
:- import_module hlds.pred_table.
:- import_module hlds.vartypes.
:- import_module libs.
:- import_module libs.globals.
:- import_module libs.options.
:- import_module mdbcomp.builtin_modules.
:- import_module parse_tree.builtin_lib_types.
:- import_module parse_tree.prog_mode.
:- import_module parse_tree.prog_out.
:- import_module parse_tree.prog_type.
:- import_module parse_tree.prog_util.
:- import_module parse_tree.set_of_var.

:- import_module bool.
:- import_module map.
:- import_module require.
:- import_module term.
:- import_module varset.

module_add_pred_decl(PredStatus, NeedQual, ItemPredDecl, MaybePredProcId,
        !ModuleInfo, !Specs) :-
    ItemPredDecl = item_pred_decl_info(PredSymName, PredOrFunc, TypesAndModes,
        WithType, WithInst, MaybeDetism, Origin, TypeVarSet, InstVarSet,
        ExistQVars, Purity, Constraints, Context, SeqNum),
    % Any WithType and WithInst annotations should have been expanded
    % and the type and/or inst put into TypesAndModes by equiv_type.m.
    expect(unify(WithType, no), $pred, "WithType != no"),
    expect(unify(WithInst, no), $pred, "WithInst != no"),

    % If this predicate was added as a result of the mutable
    % transformation, then mark this predicate as a mutable access pred.
    % We do this so that we can tell optimizations, like inlining,
    % to treat it specially.
    init_markers(Markers0),
    (
        Origin = item_origin_compiler(CompilerAttrs),
        CompilerAttrs = item_compiler_attributes(CompilerOrigin),
        (
            CompilerOrigin = compiler_origin_initialise,
            PredOrigin = origin_initialise,
            Markers = Markers0
        ;
            CompilerOrigin = compiler_origin_finalise,
            PredOrigin = origin_finalise,
            Markers = Markers0
        ;
            CompilerOrigin = compiler_origin_class_method,
            PredOrigin = origin_class_method,
            add_marker(marker_class_method, Markers0, Markers)
        ;
            CompilerOrigin = compiler_origin_solver_type(TypeCtorName,
                TypeCtorArity, SolverPredKind),
            PredOrigin = origin_solver_type(TypeCtorName,
                TypeCtorArity, SolverPredKind),
            Markers = Markers0
        ;
            CompilerOrigin = compiler_origin_mutable(ModuleName, MutableName,
                MutablePredKind),
            PredOrigin = origin_mutable(ModuleName, MutableName,
                MutablePredKind),
            add_marker(marker_mutable_access_pred, Markers0, Markers)
        ;
            CompilerOrigin = compiler_origin_tabling(SimpleCallId,
                TablingPredKind),
            PredOrigin = origin_tabling(SimpleCallId, TablingPredKind),
            Markers = Markers0
        )
    ;
        Origin = item_origin_user,
        PredOrigin = origin_user(PredSymName),
        Markers = Markers0
    ),

    split_types_and_modes(TypesAndModes, Types, MaybeModes0),
    list.length(Types, Arity),
    ( if
        PredOrFunc = pf_predicate,
        MaybeModes0 = yes(Modes0),

        % For predicates with no arguments, if the determinism is not declared,
        % a mode is not added. The determinism can be specified by a separate
        % mode declaration.
        Modes0 = [],
        MaybeDetism = no
    then
        MaybeModes = no
    else if
        % A function declaration that contains no argument modes but does
        % specify a determinism is implicitly specifying the default mode.
        PredOrFunc = pf_function,
        MaybeModes0 = no,
        MaybeDetism = yes(_)
    then
        adjust_func_arity(pf_function, FuncArity, Arity),
        in_mode(InMode),
        list.duplicate(FuncArity, InMode, InModes),
        out_mode(OutMode),
        list.append(InModes, [OutMode], ArgModes),
        MaybeModes = yes(ArgModes)
    else
        MaybeModes = MaybeModes0
    ),
    add_new_pred(PredOrigin, Context, SeqNum, PredStatus, NeedQual,
        PredOrFunc, PredSymName, TypeVarSet, ExistQVars, Types, Constraints,
        MaybeModes, Purity, Markers, Succeeded, !ModuleInfo, !Specs),
    (
        MaybeModes = yes(Modes),
        (
            Succeeded = no,
            % Do not try to add the mode declaration part of the predmode
            % declaration to the HLDS if adding the pred declaration part
            % has failed.
            MaybePredProcId = no
        ;
            Succeeded = yes,
            ( if check_marker(Markers, marker_class_method) then
                IsClassMethod = is_a_class_method
            else
                IsClassMethod = is_not_a_class_method
            ),
            % By setting MaybeModeItemMercuryStatus to no, we are telling
            % module_add_mode that there *was* no separate mode declaration.
            % Since we have already recorded (in the cur_user_decl_info slot
            % of the predicate's pred_info) that this predicate has a predmode
            % declaration, the addition of a *separate* mode declaration
            % would lead to the generation of an error message.
            MaybeModeItemMercuryStatus = maybe.no,
            module_add_mode(Context, SeqNum,
                MaybeModeItemMercuryStatus, PredStatus,
                PredOrFunc, PredSymName, InstVarSet, Modes, MaybeDetism,
                IsClassMethod, PredProcId, !ModuleInfo, !Specs),
            MaybePredProcId = yes(PredProcId)
        )
    ;
        MaybeModes = no,
        % There is no valid mode declaration part we can add to the HLDS.
        % Check for an invalid mode declaration part anyway.
        MaybePredProcId = no,
        ( if
            MaybeDetism = yes(_),
            % Functions are allowed to declare a determinism without declaring
            % argument modes; the determinism will apply to the default mode.
            % Predicates do not have a default mode, so they may NOT declare
            % a determinism without declaring the argument modes, UNLESS
            % there are no arguments whose mode needs to be declared.
            PredOrFunc = pf_predicate,
            Types = [_ | _],
            % The declaration of "is" looks like this:
            %   :- pred is(T, T) is det.
            % We can't just delete "is det" part, because if we do, the
            % compiler will think that the predicate name "is" is introducing
            % a determinism, which yields a syntax error.
            PredSymName \= qualified(mercury_int_module, "is"),
            % Don't generate an error message unless the predicate is defined
            % in this module.
            pred_status_defined_in_this_module(PredStatus) = yes
        then
            DetPieces = [words("Error: predicate"),
                unqual_sym_name_and_arity(sym_name_arity(PredSymName, Arity)),
                words("declares a determinism without declaring"),
                words("the modes of its arguments."), nl],
            DetMsg = simple_msg(Context, [always(DetPieces)]),
            DetSpec = error_spec(severity_error, phase_parse_tree_to_hlds,
                [DetMsg]),
            !:Specs = [DetSpec | !.Specs]
        else
            true
        )
    ).

:- pred add_new_pred(pred_origin::in, prog_context::in, int::in,
    pred_status::in, need_qualifier::in, pred_or_func::in, sym_name::in,
    tvarset::in, existq_tvars::in, list(mer_type)::in, prog_constraints::in,
    maybe_modes::in, purity::in, pred_markers::in, bool::out,
    module_info::in, module_info::out,
    list(error_spec)::in, list(error_spec)::out) is det.

add_new_pred(PredOrigin, Context, SeqNum, PredStatus0, NeedQual,
        PredOrFunc, PredSymName, TVarSet, ExistQVars, Types, Constraints,
        MaybeModes, Purity, Markers0, Succeeded, !ModuleInfo, !Specs) :-
    % NB. Predicates are also added in lambda.m, which converts
    % lambda expressions into separate predicates, so any changes may need
    % to be reflected there too.

    % Only preds with opt_imported clauses are tagged as opt_imported, so that
    % the compiler doesn't look for clauses for other preds read in from
    % optimization interfaces.
    ( if PredStatus0 = pred_status(status_opt_imported) then
        PredStatus = pred_status(status_imported(import_locn_interface))
    else
        PredStatus = PredStatus0
    ),
    module_info_get_name(!.ModuleInfo, ModuleName),
    list.length(Types, PredArity),
    (
        PredSymName = unqualified(_PName),
        % All predicate names passed into this predicate should have been
        % qualified by the parser when they were first read.
        Succeeded = no,
        module_info_incr_errors(!ModuleInfo),
        unqualified_pred_error(PredSymName, PredArity, Context, !Specs)
    ;
        PredSymName = qualified(MNameOfPred, PName),
        ( if
            % NOTE This code is duplicating the effect of
            %
            % MaybeItemMercuryStatus = yes(ItemMercuryStatus),
            % ItemMercuryStatus = item_defined_in_this_module(ItemExport)
            %
            % without requiring our caller to pass ItemMercuryStatus here.
            % The reason why this is important is that for compiler-generated
            % predicate declarations, there is no natural ItemMercuryStatus.
            PredStatus = pred_status(OldItemStatus),
            (
                OldItemStatus = status_local,
                ItemExport = item_export_nowhere
            ;
                OldItemStatus = status_exported_to_submodules,
                ItemExport = item_export_only_submodules
            ;
                OldItemStatus = status_exported,
                ItemExport = item_export_anywhere
            )
        then
            DeclSection = item_decl_section(ItemExport),
            (
                MaybeModes = no,
                PredmodeDecl = no_predmode_decl
            ;
                MaybeModes = yes(_),
                PredmodeDecl = predmode_decl
            ),
            CurUserDecl = yes(cur_user_decl_info(DeclSection, PredmodeDecl,
                SeqNum))
        else
            CurUserDecl = no
        ),
        module_info_get_predicate_table(!.ModuleInfo, PredTable0),
        clauses_info_init(PredOrFunc, PredArity, init_clause_item_numbers_user,
            ClausesInfo),
        map.init(Proofs),
        map.init(ConstraintMap),
        purity_to_markers(Purity, PurityMarkers),
        add_markers(PurityMarkers, Markers0, Markers),
        map.init(VarNameRemap),
        pred_info_init(ModuleName, PredSymName, PredArity, PredOrFunc, Context,
            PredOrigin, PredStatus, CurUserDecl, goal_type_none,
            Markers, Types, TVarSet, ExistQVars, Constraints, Proofs,
            ConstraintMap, ClausesInfo, VarNameRemap, PredInfo0),
        predicate_table_lookup_pf_m_n_a(PredTable0, is_fully_qualified,
            PredOrFunc, MNameOfPred, PName, PredArity, PredIds),
        (
            PredIds = [OrigPred | _],
            Succeeded = no,
            module_info_pred_info(!.ModuleInfo, OrigPred, OrigPredInfo),
            pred_info_get_context(OrigPredInfo, OrigContext),
            DeclString = pred_or_func_to_str(PredOrFunc),
            adjust_func_arity(PredOrFunc, PorFArity, PredArity),
            ( if PredStatus0 = pred_status(status_opt_imported) then
                true
            else
                report_multiple_def_error(PredSymName, PorFArity, DeclString,
                    Context, OrigContext, [], !Specs)
            )
        ;
            PredIds = [],
            Succeeded = yes,
            module_info_get_partial_qualifier_info(!.ModuleInfo, PQInfo),
            predicate_table_insert_qual(PredInfo0, NeedQual, PQInfo, PredId,
                PredTable0, PredTable1),
            ( if pred_info_is_builtin(PredInfo0) then
                module_info_get_globals(!.ModuleInfo, Globals),
                globals.get_target(Globals, CompilationTarget),
                add_builtin(PredId, Types, CompilationTarget,
                    PredInfo0, PredInfo),
                predicate_table_get_preds(PredTable1, Preds1),
                map.det_update(PredId, PredInfo, Preds1, Preds),
                predicate_table_set_preds(Preds, PredTable1, PredTable)
            else
                PredTable = PredTable1
            ),
            module_info_set_predicate_table(PredTable, !ModuleInfo)
        )
    ).

:- func item_decl_section(item_export) = decl_section.

item_decl_section(ItemExport) = DeclSection :-
    (
        ItemExport = item_export_anywhere,
        DeclSection = decl_interface
    ;
        ( ItemExport = item_export_nowhere
        ; ItemExport = item_export_only_submodules
        ),
        DeclSection = decl_implementation
    ).

%-----------------------------------------------------------------------------%

    % For most builtin predicates, say foo/2, we add a clause
    %
    %   foo(H1, H2) :- foo(H1, H2).
    %
    % This does not generate an infinite loop! Instead, the compiler will
    % generate the usual builtin inline code for foo/2 in the body. The reason
    % for generating this forwarding code stub is so that things work correctly
    % if you take the address of the predicate.
    %
    % A few builtins are treated specially.
    %
:- pred add_builtin(pred_id::in, list(mer_type)::in, compilation_target::in,
    pred_info::in, pred_info::out) is det.

add_builtin(PredId, HeadTypes0, CompilationTarget, !PredInfo) :-
    Module = pred_info_module(!.PredInfo),
    Name = pred_info_name(!.PredInfo),
    pred_info_get_context(!.PredInfo, Context),
    pred_info_get_clauses_info(!.PredInfo, ClausesInfo0),
    clauses_info_get_varset(ClausesInfo0, VarSet0),
    clauses_info_get_headvars(ClausesInfo0, ProcArgVector),
    % XXX ARGVEC - clean this up after the pred_info is converted to use
    % the arg_vector structure.
    HeadVars0 = proc_arg_vector_to_list(ProcArgVector),

    goal_info_init(Context, GoalInfo0),
    NonLocals = set_of_var.list_to_set(HeadVars0),
    goal_info_set_nonlocals(NonLocals, GoalInfo0, GoalInfo1),
    ( if
        Module = mercury_private_builtin_module,
        (
            ( Name = "builtin_compound_eq"
            ; Name = "builtin_compound_lt"
            )
        ;
            % These predicates are incompatible with some backends.
            Name = "store_at_ref_impure",
            require_complete_switch [CompilationTarget]
            (
                ( CompilationTarget = target_java
                ; CompilationTarget = target_csharp
                ; CompilationTarget = target_erlang
                ),
                SupportsStore = no
            ;
                CompilationTarget = target_c,
                SupportsStore = yes
            ),
            SupportsStore = no
        )
    then
        GoalExpr = conj(plain_conj, []),
        GoalInfo = GoalInfo1,
        HeadVars = HeadVars0,
        HeadTypes = HeadTypes0,
        VarSet = VarSet0,
        Stub = yes
    else if
        (
            Module = mercury_private_builtin_module,
            Name = "trace_get_io_state"
        ;
            Module = mercury_io_module,
            Name = "unsafe_get_io_state"
        )
    then
        varset.new_var(ZeroVar, VarSet0, VarSet),
        HeadVars = [ZeroVar | HeadVars0],
        HeadTypes = [int_type | HeadTypes0],

        ConsId = int_const(0),
        LHS = ZeroVar,
        RHS = rhs_functor(ConsId, is_not_exist_constr, []),
        UnifyMode = unify_modes_lhs_rhs(
            from_to_insts(free, ground_inst),
            from_to_insts(ground_inst, ground_inst)),
        Unification = construct(ZeroVar, ConsId, [], [UnifyMode],
            construct_dynamically, cell_is_shared, no_construct_sub_info),
        UnifyContext = unify_context(umc_explicit, []),
        AssignExpr = unify(LHS, RHS, UnifyMode, Unification, UnifyContext),
        goal_info_set_nonlocals(set_of_var.make_singleton(ZeroVar),
            GoalInfo0, GoalInfoWithZero),
        AssignGoal = hlds_goal(AssignExpr, GoalInfoWithZero),

        CastExpr = generic_call(cast(unsafe_type_inst_cast), HeadVars,
            [in_mode, uo_mode], arg_reg_types_unset, detism_det),
        goal_info_set_nonlocals(set_of_var.list_to_set(HeadVars),
            GoalInfo0, GoalInfoWithZeroHeadVars),
        CastGoal = hlds_goal(CastExpr, GoalInfoWithZeroHeadVars),

        ConjExpr = conj(plain_conj, [AssignGoal, CastGoal]),
        ConjGoal = hlds_goal(ConjExpr, GoalInfoWithZeroHeadVars),

        Reason = promise_purity(purity_semipure),
        GoalExpr = scope(Reason, ConjGoal),
        GoalInfo = GoalInfo1,
        Stub = no
    else if
        (
            Module = mercury_private_builtin_module,
            Name = "trace_set_io_state"
        ;
            Module = mercury_io_module,
            Name = "unsafe_set_io_state"
        )
    then
        ConjExpr = conj(plain_conj, []),
        ConjGoal = hlds_goal(ConjExpr, GoalInfo),
        Reason = promise_purity(purity_impure),
        GoalExpr = scope(Reason, ConjGoal),
        GoalInfo = GoalInfo1,
        HeadVars = HeadVars0,
        HeadTypes = HeadTypes0,
        VarSet = VarSet0,
        Stub = no
    else
        % Construct the pseudo-recursive call to Module.Name(HeadVars).
        SymName = qualified(Module, Name),
        % Mode checking will figure out the mode.
        ModeId = invalid_proc_id,
        MaybeUnifyContext = no,
        % XXX ARGVEC
        GoalExpr = plain_call(PredId, ModeId, HeadVars0, inline_builtin,
            MaybeUnifyContext, SymName),
        pred_info_get_purity(!.PredInfo, Purity),
        goal_info_set_purity(Purity, GoalInfo1, GoalInfo),
        HeadVars = HeadVars0,
        HeadTypes = HeadTypes0,
        VarSet = VarSet0,
        Stub = no
    ),

    (
        Stub = no,
        % Construct a clause containing that pseudo-recursive call.
        Goal = hlds_goal(GoalExpr, GoalInfo),
        Clause = clause(all_modes, Goal, impl_lang_mercury, Context, []),
        set_clause_list([Clause], ClausesRep)
    ;
        Stub = yes,
        set_clause_list([], ClausesRep)
    ),

    % Put the clause we just built (if any) into the pred_info,
    % annotated with the appropriate types.
    vartypes_from_corresponding_lists(HeadVars, HeadTypes, VarTypes),
    map.init(TVarNameMap),
    rtti_varmaps_init(RttiVarMaps),
    ClausesInfo = clauses_info(VarSet, TVarNameMap, VarTypes, VarTypes,
        ProcArgVector, ClausesRep, init_clause_item_numbers_comp_gen,
        RttiVarMaps, no_foreign_lang_clauses, no_clause_syntax_errors),
    pred_info_set_clauses_info(ClausesInfo, !PredInfo),

    % It is pointless but harmless to inline these clauses. The main purpose
    % of the `no_inline' marker is to stop constraint propagation creating
    % real infinite loops in the generated code when processing calls to these
    % predicates. The code generator will still generate inline code for calls
    % to these predicates.
    pred_info_get_markers(!.PredInfo, Markers0),
    add_marker(marker_user_marked_no_inline, Markers0, Markers1),
    (
        Stub = yes,
        add_marker(marker_stub, Markers1, Markers2),
        add_marker(marker_builtin_stub, Markers2, Markers)
    ;
        Stub = no,
        Markers = Markers1
    ),
    pred_info_set_markers(Markers, !PredInfo).

%-----------------------------------------------------------------------------%

add_new_proc(Context, SeqNum, Arity, InstVarSet, ArgModes,
        MaybeDeclaredArgModes, MaybeArgLives, DetismDecl, MaybeDetism,
        IsAddressTaken, HasParallelConj, PredInfo0, PredInfo, ModeId) :-
    pred_info_get_proc_table(PredInfo0, Procs0),
    pred_info_get_arg_types(PredInfo0, ArgTypes),
    pred_info_get_var_name_remap(PredInfo0, VarNameRemap),
    next_mode_id(Procs0, ModeId),
    proc_info_init(Context, SeqNum, Arity, ArgTypes,
        MaybeDeclaredArgModes, ArgModes, MaybeArgLives,
        DetismDecl, MaybeDetism, IsAddressTaken, HasParallelConj,
        VarNameRemap, NewProc0),
    proc_info_set_inst_varset(InstVarSet, NewProc0, NewProc),
    map.det_insert(ModeId, NewProc, Procs0, Procs),
    pred_info_set_proc_table(Procs, PredInfo0, PredInfo).

%-----------------------------------------------------------------------------%

module_add_mode(Context, SeqNum, MaybeItemMercuryStatus, PredStatus,
        PredOrFunc, PredSymName, InstVarSet, Modes, MaybeDetism,
        IsClassMethod, PredProcId, !ModuleInfo, !Specs) :-
    % We should store the mode varset and the mode condition in the HLDS
    % - at the moment we just ignore those two arguments.

    % Lookup the pred or func declaration in the predicate table.
    % If it is not there (or if it is ambiguous), optionally print a warning
    % message and insert an implicit definition for the predicate;
    % it is presumed to be local, and its type will be inferred automatically.

    module_info_get_name(!.ModuleInfo, ModuleName0),
    sym_name_get_module_name_default(PredSymName, ModuleName0, ModuleName),
    list.length(Modes, Arity),
    module_info_get_predicate_table(!.ModuleInfo, PredicateTable0),
    predicate_table_lookup_pf_sym_arity(PredicateTable0,
        is_fully_qualified, PredOrFunc, PredSymName, Arity, PredIds),
    ( if PredIds = [PredIdPrime] then
        PredId = PredIdPrime
    else
        preds_add_implicit_report_error(!ModuleInfo, ModuleName,
            PredSymName, Arity, PredOrFunc, PredStatus, IsClassMethod, Context,
            origin_user(PredSymName), [decl("mode"), words("declaration")],
            PredId, !Specs)
    ),
    module_info_get_predicate_table(!.ModuleInfo, PredicateTable1),
    predicate_table_get_preds(PredicateTable1, Preds0),
    map.lookup(Preds0, PredId, PredInfo0),
    module_do_add_mode(Context, SeqNum, MaybeItemMercuryStatus, Arity,
        InstVarSet, Modes, MaybeDetism, IsClassMethod,
        PredInfo0, PredInfo, ProcId, !Specs),
    map.det_update(PredId, PredInfo, Preds0, Preds),
    predicate_table_set_preds(Preds, PredicateTable1, PredicateTable),
    module_info_set_predicate_table(PredicateTable, !ModuleInfo),
    PredProcId = proc(PredId, ProcId).

:- pred module_do_add_mode(prog_context::in, int::in,
    maybe(item_mercury_status)::in, arity::in,
    inst_varset::in, list(mer_mode)::in,
    maybe(determinism)::in, maybe_class_method::in,
    pred_info::in, pred_info::out, proc_id::out,
    list(error_spec)::in, list(error_spec)::out) is det.

module_do_add_mode(Context, SeqNum, MaybeItemMercuryStatus, Arity,
        InstVarSet, Modes, MaybeDetism, IsClassMethod,
        !PredInfo, ProcId, !Specs) :-
    PredName = pred_info_name(!.PredInfo),
    PredOrFunc = pred_info_is_pred_or_func(!.PredInfo),
    % Check that the determinism was specified.
    (
        MaybeDetism = no,
        DetismDecl = detism_decl_none,
        pred_info_get_status(!.PredInfo, PredStatus),
        PredModule = pred_info_module(!.PredInfo),
        PredSymName = qualified(PredModule, PredName),
        (
            IsClassMethod = is_a_class_method,
            unspecified_det_for_method(PredSymName, Arity, PredOrFunc,
                Context, !Specs)
        ;
            IsClassMethod = is_not_a_class_method,
            IsExported = pred_status_is_exported(PredStatus),
            (
                IsExported = yes,
                unspecified_det_for_exported(PredSymName, Arity, PredOrFunc,
                    Context, !Specs)
            ;
                IsExported = no,
                unspecified_det_for_local(PredSymName, Arity, PredOrFunc,
                    Context, !Specs)
            )
        )
    ;
        MaybeDetism = yes(_),
        DetismDecl = detism_decl_explicit
    ),
    pred_info_get_cur_user_decl_info(!.PredInfo, MaybeCurUserDecl),
    (
        MaybeCurUserDecl = yes(CurUserDecl),
        CurUserDecl = cur_user_decl_info(PredDeclSection, PredIsPredMode,
            _PredDeclSeqNum),
        ( if
            MaybeItemMercuryStatus = yes(ItemMercuryStatus),
            ItemMercuryStatus = item_defined_in_this_module(ItemExport)
        then
            ModeDeclSection = item_decl_section(ItemExport),
            ( if PredDeclSection = ModeDeclSection then
                true
            else
                ModeSectionStr = decl_section_to_string(ModeDeclSection),
                PredSectionStr = decl_section_to_string(PredDeclSection),
                SectionPieces = [words("Error: mode declaration in the"),
                    fixed(ModeSectionStr), words("section"),
                    words("for"), p_or_f(PredOrFunc),
                    unqual_sym_name_and_arity(
                        sym_name_arity(unqualified(PredName), Arity)),
                    suffix(","), words("whose"),
                    p_or_f(PredOrFunc), words("declaration"), words("is"),
                    words("in the"), fixed(PredSectionStr), suffix("."), nl],
                SectionMsg = simple_msg(Context, [always(SectionPieces)]),
                SectionSpec = error_spec(severity_error,
                    phase_parse_tree_to_hlds, [SectionMsg]),
                !:Specs = [SectionSpec | !.Specs]
            ),
            (
                PredIsPredMode = no_predmode_decl
            ;
                PredIsPredMode = predmode_decl,
                PredModePieces = [words("Error:"),
                    p_or_f(PredOrFunc),
                    unqual_sym_name_and_arity(
                        sym_name_arity(unqualified(PredName), Arity)),
                    words("has its"), p_or_f(PredOrFunc), words("declaration"),
                    words("combined with a mode declaration,"),
                    words("so it may not have a separate mode declaration."),
                    nl],
                PredModeMsg = simple_msg(Context, [always(PredModePieces)]),
                PredModeSpec = error_spec(severity_error,
                    phase_parse_tree_to_hlds, [PredModeMsg]),
                !:Specs = [PredModeSpec | !.Specs]
            )
        else
            true
        )
    ;
        MaybeCurUserDecl = no
        % We allow mode declarations for predicates (and functions) that have
        % no item_pred_decl. If the right options are given, the argument types
        % will be inferred.
    ),
    % Add the mode declaration to the pred_info for this procedure.
    ArgLives = no,
    % Before the simplification pass, HasParallelConj is not meaningful.
    HasParallelConj = has_no_parallel_conj,
    add_new_proc(Context, SeqNum, Arity, InstVarSet, Modes, yes(Modes),
        ArgLives, DetismDecl, MaybeDetism, address_is_not_taken,
        HasParallelConj, !PredInfo, ProcId).

:- func decl_section_to_string(decl_section) = string.

decl_section_to_string(decl_interface) = "interface".
decl_section_to_string(decl_implementation) = "implementation".

%-----------------------------------------------------------------------------%

:- pred unspecified_det_for_local(sym_name::in, arity::in, pred_or_func::in,
    prog_context::in, list(error_spec)::in, list(error_spec)::out) is det.

unspecified_det_for_local(Name, Arity, PredOrFunc, Context, !Specs) :-
    MainPieces = [words("Error: no determinism declaration for local"),
        simple_call(simple_call_id(PredOrFunc, Name, Arity)), suffix("."), nl],
    VerbosePieces = [words("(This is an error because"),
        words("you specified the"), quote("--no-infer-det"), words("option."),
        words("Use the"), quote("--infer-det"),
        words("option if you want the compiler"),
        words("to automatically infer the determinism"),
        words("of local predicates.)"), nl],
    InnerComponents = [always(MainPieces),
        verbose_only(verbose_once, VerbosePieces)],
    Msg = simple_msg(Context,
        [option_is_set(infer_det, no, InnerComponents)]),
    Severity = severity_conditional(infer_det, no, severity_error, no),
    Spec = error_spec(Severity, phase_parse_tree_to_hlds, [Msg]),
    !:Specs = [Spec | !.Specs].

:- pred unspecified_det_for_method(sym_name::in, arity::in, pred_or_func::in,
    prog_context::in, list(error_spec)::in, list(error_spec)::out) is det.

unspecified_det_for_method(Name, Arity, PredOrFunc, Context, !Specs) :-
    Pieces = [words("Error: no determinism declaration"),
        words("for type class method"), p_or_f(PredOrFunc),
        qual_sym_name_and_arity(sym_name_arity(Name, Arity)), suffix("."), nl],
    Msg = simple_msg(Context, [always(Pieces)]),
    Spec = error_spec(severity_error, phase_parse_tree_to_hlds, [Msg]),
    !:Specs = [Spec | !.Specs].

:- pred unspecified_det_for_exported(sym_name::in, arity::in, pred_or_func::in,
    prog_context::in, list(error_spec)::in, list(error_spec)::out) is det.

unspecified_det_for_exported(Name, Arity, PredOrFunc, Context, !Specs) :-
    Pieces = [words("Error: no determinism declaration for exported"),
        p_or_f(PredOrFunc),
        qual_sym_name_and_arity(sym_name_arity(Name, Arity)), suffix("."), nl],
    Msg = simple_msg(Context, [always(Pieces)]),
    Spec = error_spec(severity_error, phase_parse_tree_to_hlds, [Msg]),
    !:Specs = [Spec | !.Specs].

:- pred unqualified_pred_error(sym_name::in, int::in, prog_context::in,
    list(error_spec)::in, list(error_spec)::out) is det.

unqualified_pred_error(PredSymName, Arity, Context, !Specs) :-
    Pieces = [words("Internal error: the unqualified predicate name"),
        unqual_sym_name_and_arity(sym_name_arity(PredSymName, Arity)),
        words("should have been qualified by the parser."), nl],
    Msg = simple_msg(Context, [always(Pieces)]),
    Spec = error_spec(severity_error, phase_parse_tree_to_hlds, [Msg]),
    !:Specs = [Spec | !.Specs].

%-----------------------------------------------------------------------------%

preds_add_implicit_report_error(!ModuleInfo, ModuleName,
        PredSymName, PredArity, PredOrFunc, Status, IsClassMethod, Context,
        PredOrigin, DescPieces, PredId, !Specs) :-
    maybe_report_undefined_pred_error(!.ModuleInfo, PredSymName, PredArity,
        PredOrFunc, Status, IsClassMethod, Context, DescPieces, !Specs),
    (
        PredOrFunc = pf_function,
        adjust_func_arity(pf_function, FuncArity, PredArity),
        maybe_check_field_access_function(!.ModuleInfo, PredSymName, FuncArity,
            Status, Context, !Specs)
    ;
        PredOrFunc = pf_predicate
    ),
    clauses_info_init(PredOrFunc, PredArity, init_clause_item_numbers_user,
        ClausesInfo),
    preds_do_add_implicit(ModuleName, PredSymName, PredArity, PredOrFunc,
        Status, Context, PredOrigin, ClausesInfo, PredId, !ModuleInfo).

preds_add_implicit_for_assertion(!ModuleInfo, ModuleName, PredSymName,
        PredArity, PredOrFunc, HeadVars, Status, Context, PredId) :-
    clauses_info_init_for_assertion(HeadVars, ClausesInfo),
    term.context_file(Context, FileName),
    term.context_line(Context, LineNum),
    PredOrigin = origin_assertion(FileName, LineNum),
    preds_do_add_implicit(ModuleName, PredSymName, PredArity, PredOrFunc,
        Status, Context, PredOrigin, ClausesInfo, PredId, !ModuleInfo).

:- pred preds_do_add_implicit(module_name::in, sym_name::in, arity::in,
    pred_or_func::in, pred_status::in, prog_context::in, pred_origin::in,
    clauses_info::in, pred_id::out, module_info::in, module_info::out) is det.

preds_do_add_implicit(ModuleName, PredSymName, PredArity, PredOrFunc,
        PredStatus, Context, PredOrigin, ClausesInfo, PredId, !ModuleInfo) :-
    CurUserDecl = maybe.no,
    init_markers(Markers0),
    varset.init(TVarSet0),
    make_n_fresh_vars("T", PredArity, TypeVars, TVarSet0, TVarSet),
    prog_type.var_list_to_type_list(map.init, TypeVars, Types),
    % We assume none of the arguments are existentially typed.
    % Existential types must be declared, they won't be inferred.
    ExistQVars = [],
    % The class context is empty since this is an implicit definition.
    % Inference will fill it in.
    Constraints = constraints([], []),
    map.init(Proofs),
    map.init(ConstraintMap),
    map.init(VarNameRemap),
    pred_info_init(ModuleName, PredSymName, PredArity, PredOrFunc, Context,
        PredOrigin, PredStatus, CurUserDecl, goal_type_none, Markers0,
        Types, TVarSet, ExistQVars, Constraints, Proofs, ConstraintMap,
        ClausesInfo, VarNameRemap, PredInfo0),
    add_marker(marker_infer_type, Markers0, Markers1),
    add_marker(marker_no_pred_decl, Markers1, Markers),
    pred_info_set_markers(Markers, PredInfo0, PredInfo),
    module_info_get_predicate_table(!.ModuleInfo, PredicateTable0),
    predicate_table_lookup_pf_sym_arity(PredicateTable0,
        is_fully_qualified, PredOrFunc, PredSymName, PredArity, PredIds),
    (
        PredIds = [],
        module_info_get_partial_qualifier_info(!.ModuleInfo, MQInfo),
        predicate_table_insert_qual(PredInfo, may_be_unqualified, MQInfo,
            PredId, PredicateTable0, PredicateTable),
        module_info_set_predicate_table(PredicateTable, !ModuleInfo)
    ;
        PredIds = [_ | _],
        unexpected($pred, "search succeeded")
    ).

%-----------------------------------------------------------------------------%

check_pred_if_field_access_function(ModuleInfo, SectionItem, !Specs) :-
    SectionItem = sec_item(SectionInfo, ItemPredDecl),
    SectionInfo = sec_info(ItemMercuryStatus, _NeedQual),
    ItemPredDecl = item_pred_decl_info(SymName, PredOrFunc, TypesAndModes,
        _, _, _, _, _, _, _, _, _, Context, _SeqNum),
    (
        PredOrFunc = pf_predicate
    ;
        PredOrFunc = pf_function,
        list.length(TypesAndModes, PredArity),
        adjust_func_arity(pf_function, FuncArity, PredArity),
        item_mercury_status_to_pred_status(ItemMercuryStatus, PredStatus),
        maybe_check_field_access_function(ModuleInfo, SymName, FuncArity,
            PredStatus, Context, !Specs)
    ).

:- pred maybe_check_field_access_function(module_info::in,
    sym_name::in, arity::in, pred_status::in, prog_context::in,
    list(error_spec)::in, list(error_spec)::out) is det.

maybe_check_field_access_function(ModuleInfo, FuncName, FuncArity, FuncStatus,
        Context, !Specs) :-
    ( if
        is_field_access_function_name(ModuleInfo, FuncName, FuncArity,
            AccessType, FieldName)
    then
        check_field_access_function(ModuleInfo, AccessType, FieldName,
            FuncName, FuncArity, FuncStatus, Context, !Specs)
    else
        true
    ).

:- pred check_field_access_function(module_info::in, field_access_type::in,
    sym_name::in, sym_name::in, arity::in, pred_status::in,
    prog_context::in, list(error_spec)::in, list(error_spec)::out) is det.

check_field_access_function(ModuleInfo, _AccessType, FieldName, FuncName,
        FuncArity, FuncStatus, Context, !Specs) :-
    % XXX Our caller adjusted the arity one way; we now adjust it back.
    % It should be possible to do without the double adjustment.
    adjust_func_arity(pf_function, FuncArity, PredArity),
    FuncCallId = simple_call_id(pf_function, FuncName, PredArity),

    % Check that a function applied to an exported type is also exported.
    module_info_get_ctor_field_table(ModuleInfo, CtorFieldTable),
    ( if
        % Abstract types have status `abstract_exported', so errors won't be
        % reported for local field access functions for them.
        map.search(CtorFieldTable, FieldName, [FieldDefn]),
        FieldDefn = hlds_ctor_field_defn(_, DefnStatus, _, _, _),
        DefnStatus = type_status(status_exported),
        FuncStatus \= pred_status(status_exported)
    then
        report_field_status_mismatch(Context, FuncCallId, !Specs)
    else
        true
    ).

:- pred report_field_status_mismatch(prog_context::in, simple_call_id::in,
    list(error_spec)::in, list(error_spec)::out) is det.

report_field_status_mismatch(Context, CallId, !Specs) :-
    Pieces = [words("In declaration of"), simple_call(CallId), suffix(":"), nl,
        words("error: a field access function for an exported field"),
        words("must also be exported."), nl],
    Msg = simple_msg(Context, [always(Pieces)]),
    Spec = error_spec(severity_error, phase_parse_tree_to_hlds, [Msg]),
    !:Specs = [Spec | !.Specs].

%-----------------------------------------------------------------------------%
:- end_module hlds.add_pred.
%-----------------------------------------------------------------------------%
