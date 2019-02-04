%-----------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et
%-----------------------------------------------------------------------------%
% Copyright (C) 1993-2007 The University of Melbourne.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury distribution.
%-----------------------------------------------------------------------------%

:- module hlds.make_hlds.add_clause.
:- interface.

:- import_module hlds.hlds_goal.
:- import_module hlds.hlds_module.
:- import_module hlds.hlds_pred.
:- import_module hlds.make_hlds.qual_info.
:- import_module hlds.make_hlds.state_var.
:- import_module hlds.quantification.
:- import_module mdbcomp.prim_data.
:- import_module parse_tree.error_util.
:- import_module parse_tree.prog_data.

:- import_module list.

%-----------------------------------------------------------------------------%

:- pred module_add_clause(prog_varset::in, pred_or_func::in, sym_name::in,
    list(prog_term)::in, goal::in, import_status::in, prog_context::in,
    goal_type::in, module_info::in, module_info::out,
    qual_info::in, qual_info::out,
    list(error_spec)::in, list(error_spec)::out) is det.

:- pred clauses_info_add_clause(list(proc_id)::in,
    prog_varset::in, tvarset::in, list(prog_term)::in, goal::in,
    prog_context::in, import_status::in, pred_or_func::in, arity::in,
    goal_type::in, hlds_goal::out, prog_varset::out, tvarset::out,
    clauses_info::in, clauses_info::out, list(quant_warning)::out,
    module_info::in, module_info::out, qual_info::in, qual_info::out,
    list(error_spec)::in, list(error_spec)::out) is det.

    % Convert goals from the prog_data `goal' structure into the HLDS
    % `hlds_goal' structure.  At the same time, convert it to super-homogeneous
    % form by unravelling all the complex unifications, and annotate those
    % unifications with a unify_context so that we can still give good error
    % messages. And also at the same time, apply the given substitution to
    % the goal, to rename it apart from the other clauses.
    %
:- pred transform_goal(goal::in, prog_var_renaming::in, hlds_goal::out,
    int::out, prog_varset::in, prog_varset::out,
    module_info::in, module_info::out, qual_info::in, qual_info::out,
    svar_info::in, svar_info::out,
    list(error_spec)::in, list(error_spec)::out) is det.

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- implementation.

:- import_module check_hlds.clause_to_proc.
:- import_module check_hlds.mode_errors.
:- import_module hlds.goal_util.
:- import_module hlds.hlds_args.
:- import_module hlds.hlds_data.
:- import_module hlds.hlds_error_util.
:- import_module hlds.hlds_out.
:- import_module hlds.hlds_pred.
:- import_module hlds.hlds_rtti.
:- import_module hlds.make_hlds.add_pragma.
:- import_module hlds.make_hlds.add_pred.
:- import_module hlds.make_hlds.field_access.
:- import_module hlds.make_hlds.make_hlds_warn.
:- import_module hlds.make_hlds.superhomogeneous.
:- import_module hlds.pred_table.
:- import_module libs.compiler_util.
:- import_module libs.globals.
:- import_module libs.options.
:- import_module parse_tree.mercury_to_mercury.
:- import_module parse_tree.module_qual.
:- import_module parse_tree.prog_data.
:- import_module parse_tree.prog_io_util.
:- import_module parse_tree.prog_mode.
:- import_module parse_tree.prog_out.
:- import_module parse_tree.prog_util.

:- import_module assoc_list.
:- import_module bool.
:- import_module int.
:- import_module map.
:- import_module pair.
:- import_module set.
:- import_module string.
:- import_module varset.

%-----------------------------------------------------------------------------%

module_add_clause(ClauseVarSet, PredOrFunc, PredName, Args0, Body, Status,
        Context, GoalType, !ModuleInfo, !QualInfo, !Specs) :-
    ( illegal_state_var_func_result(PredOrFunc, Args0, SVar) ->
        IllegalSVarResult = yes(SVar)
    ;
        IllegalSVarResult = no
    ),
    ArityAdjustment = ( if IllegalSVarResult = yes(_) then -1 else 0 ),
    Args = expand_bang_state_var_args(Args0),

    % Lookup the pred declaration in the predicate table.
    % (If it's not there, call maybe_undefined_pred_error and insert
    % an implicit declaration for the predicate.)
    module_info_get_name(!.ModuleInfo, ModuleName),
    list.length(Args, Arity0),
    Arity = Arity0 + ArityAdjustment,
    some [!PredInfo, !PredicateTable] (
        module_info_get_predicate_table(!.ModuleInfo, !:PredicateTable),
        (
            predicate_table_search_pf_sym_arity(!.PredicateTable,
                is_fully_qualified, PredOrFunc, PredName, Arity, [PredId0])
        ->
            PredId = PredId0,
            ( GoalType = goal_type_promise(_) ->
                NameString = sym_name_to_string(PredName),
                string.format("%s %s %s (%s).\n",
                    [s("Attempted to introduce a predicate"),
                    s("for a promise with an identical"),
                    s("name to an existing predicate"),
                    s(NameString)], String),
                unexpected(this_file, String)
            ;
                true
            )
        ;
            % A promise will not have a corresponding pred declaration.
            ( GoalType = goal_type_promise(_) ->
                HeadVars = term.term_list_to_var_list(Args),
                preds_add_implicit_for_assertion(HeadVars, !.ModuleInfo,
                    ModuleName, PredName, Arity, Status, Context, PredOrFunc,
                    PredId, !PredicateTable),
                module_info_set_predicate_table(!.PredicateTable, !ModuleInfo)
            ;
                preds_add_implicit_report_error(ModuleName, PredOrFunc,
                    PredName, Arity, Status, no, Context,
                    origin_user(PredName), "clause", PredId, !ModuleInfo,
                    !Specs)
            )
        ),
        % Lookup the pred_info for this pred, add the clause to the
        % clauses_info in the pred_info, if there are no modes add an
        % `infer_modes' marker, and then save the pred_info.
        module_info_get_predicate_table(!.ModuleInfo, !:PredicateTable),
        predicate_table_get_preds(!.PredicateTable, Preds0),
        map.lookup(Preds0, PredId, !:PredInfo),

        trace [io(!IO)] (
            globals.io_lookup_bool_option(very_verbose, VeryVerbose, !IO),
            (
                VeryVerbose = yes,
                pred_info_get_clauses_info(!.PredInfo, MsgClauses),
                NumClauses =
                    num_clauses_in_clauses_rep(MsgClauses ^ clauses_rep),
                io.format("%% Processing clause %d for ", [i(NumClauses + 1)],
                    !IO),
                write_pred_or_func(PredOrFunc, !IO),
                io.write_string(" `", !IO),
                list.length(Args, PredArity0),
                PredArity = PredArity0 + ArityAdjustment,
                adjust_func_arity(PredOrFunc, OrigArity, PredArity),
                prog_out.write_sym_name_and_arity(PredName/OrigArity, !IO),
                io.write_string("'...\n", !IO)
            ;
                VeryVerbose = no
            )
        ),

        % Opt_imported preds are initially tagged as imported, and are tagged
        % as opt_imported only if/when we see a clause for them.
        ( Status = status_opt_imported ->
            pred_info_set_import_status(status_opt_imported, !PredInfo),
            pred_info_get_markers(!.PredInfo, InitMarkers0),
            add_marker(marker_calls_are_fully_qualified,
                InitMarkers0, InitMarkers),
            pred_info_set_markers(InitMarkers, !PredInfo)
        ;
            true
        ),
        (
            IllegalSVarResult = yes(StateVar),
            report_illegal_func_svar_result(Context, ClauseVarSet, StateVar,
                !Specs)
        ;
            IllegalSVarResult = no,
            (
                % User-supplied clauses for field access functions are not
                % allowed -- the clauses are always generated by the compiler.
                %
                PredOrFunc = pf_function,
                adjust_func_arity(pf_function, FuncArity, Arity),
                is_field_access_function_name(!.ModuleInfo, PredName,
                    FuncArity, _, _),

                % Don't report errors for clauses for field access
                % function clauses in `.opt' files.
                Status \= status_opt_imported
            ->
                CallId = simple_call_id(PredOrFunc, PredName, Arity),
                MainPieces = [
                    words("Error: clause for automatically generated"),
                    words("field access"), simple_call(CallId),
                    suffix("."), nl],
                VerbosePieces = [words("Clauses for field access functions"),
                    words("are automatically generated by the compiler."),
                    words("To supply your own definition for a field access"),
                    words("function, for example to check the input"),
                    words("to a field update, give the field"),
                    words("of the constructor a different name.")],
                Msg = simple_msg(Context,
                    [always(MainPieces), verbose_only(VerbosePieces)]),
                Spec = error_spec(severity_error, phase_parse_tree_to_hlds,
                    [Msg]),
                !:Specs = [Spec | !.Specs]
            ;
                pred_info_is_builtin(!.PredInfo)
            ->
                % When bootstrapping a change that redefines a builtin as
                % normal Mercury code, you may need to disable this action.
                Msg = simple_msg(Context,
                    [always([words("Error: clause for builtin.")])]),
                Spec = error_spec(severity_error, phase_parse_tree_to_hlds,
                    [Msg]),
                !:Specs = [Spec | !.Specs]
            ;
                pred_info_get_clauses_info(!.PredInfo, Clauses0),
                pred_info_get_typevarset(!.PredInfo, TVarSet0),
                maybe_add_default_func_mode(!PredInfo, _),
                select_applicable_modes(Args, ClauseVarSet, Status, Context,
                    PredId, !.PredInfo, ArgTerms, ProcIdsForThisClause,
                    !ModuleInfo, !QualInfo, !Specs),
                clauses_info_add_clause(ProcIdsForThisClause, ClauseVarSet,
                    TVarSet0, ArgTerms, Body, Context, Status, PredOrFunc,
                    Arity, GoalType, Goal, VarSet, TVarSet, Clauses0, Clauses,
                    Warnings, !ModuleInfo, !QualInfo, !Specs),
                pred_info_set_clauses_info(Clauses, !PredInfo),
                ( GoalType = goal_type_promise(PromiseType) ->
                    pred_info_set_goal_type(goal_type_promise(PromiseType),
                        !PredInfo)
                ;
                    pred_info_update_goal_type(goal_type_clause, !PredInfo)
                ),
                pred_info_set_typevarset(TVarSet, !PredInfo),
                pred_info_get_arg_types(!.PredInfo, _ArgTVarSet, ExistQVars,
                    ArgTypes),
                pred_info_set_arg_types(TVarSet, ExistQVars, ArgTypes,
                    !PredInfo),

                % Check if there are still no modes for the predicate, and
                % if so, set the `infer_modes' flag for that predicate.

                ProcIds = pred_info_all_procids(!.PredInfo),
                (
                    ProcIds = [],
                    pred_info_get_markers(!.PredInfo, EndMarkers0),
                    add_marker(marker_infer_modes, EndMarkers0, EndMarkers),
                    pred_info_set_markers(EndMarkers, !PredInfo)
                ;
                    ProcIds = [_ | _]
                ),
                map.det_update(Preds0, PredId, !.PredInfo, Preds),
                predicate_table_set_preds(Preds, !PredicateTable),
                module_info_set_predicate_table(!.PredicateTable, !ModuleInfo),
                ( Status = status_opt_imported ->
                    true
                ;
                    % Warn about singleton variables.
                    SimpleCallId = simple_call_id(PredOrFunc, PredName, Arity),
                    warn_singletons(VarSet, SimpleCallId, !.ModuleInfo, Goal,
                        !Specs),
                    % Warn about variables with overlapping scopes.
                    warn_overlap(Warnings, VarSet, SimpleCallId, !Specs)
                )
            )
        )
    ).

    % Extract the mode annotations (if any) from the clause arguments,
    % and determine which mode(s) this clause should apply to.
    %
:- pred select_applicable_modes(list(prog_term)::in, prog_varset::in,
    import_status::in, prog_context::in, pred_id::in, pred_info::in,
    list(prog_term)::out, list(proc_id)::out,
    module_info::in, module_info::out, qual_info::in, qual_info::out,
    list(error_spec)::in, list(error_spec)::out) is det.

select_applicable_modes(Args0, VarSet, Status, Context, PredId, PredInfo,
        Args, ProcIds, !ModuleInfo, !QualInfo, !Specs) :-
    get_mode_annotations(Args0, Args, empty, ModeAnnotations),
    (
        ModeAnnotations = modes(ModeList0),

        % The user specified some mode annotations on this clause.
        % First module-qualify the mode annotations. The annotations
        % on clauses from `.opt' files will already be fully module
        % qualified.
        %
        ( Status = status_opt_imported ->
            ModeList = ModeList0
        ;
            qual_info_get_mq_info(!.QualInfo, MQInfo0),
            qualify_clause_mode_list(ModeList0, ModeList, Context,
                MQInfo0, MQInfo, !Specs),
            qual_info_set_mq_info(MQInfo, !QualInfo)
        ),

        % Now find the procedure which matches these mode annotations.
        pred_info_get_procedures(PredInfo, Procs),
        map.to_assoc_list(Procs, ExistingProcs),
        (
            get_procedure_matching_declmodes_with_renaming(ExistingProcs,
                ModeList, !.ModuleInfo, ProcId)
        ->
            ProcIds = [ProcId]
        ;
            undeclared_mode_error(ModeList, VarSet, PredId, PredInfo,
                !.ModuleInfo, Context, !Specs),
            % apply the clause to all modes
            % XXX would it be better to apply it to none?
            ProcIds = pred_info_all_procids(PredInfo)
        )
    ;
        ModeAnnotations = empty,
        ( pred_info_pragma_goal_type(PredInfo) ->
            % We are only allowed to mix foreign procs and
            % mode specific clauses, so make this clause
            % mode specific but apply to all modes.
            ProcIds = pred_info_all_procids(PredInfo)
        ;
            % this means the clauses applies to all modes
            ProcIds = []
        )
    ;
        ModeAnnotations = none,
        ( pred_info_pragma_goal_type(PredInfo) ->
            % We are only allowed to mix foreign procs and
            % mode specific clauses, so make this clause
            % mode specific but apply to all modes.
            ProcIds = pred_info_all_procids(PredInfo)
        ;
            % this means the clauses applies to all modes
            ProcIds = []
        )
    ;
        ModeAnnotations = mixed,
        PredIdStr = pred_id_to_string(!.ModuleInfo, PredId),
        Pieces = [words("In clause for"), fixed(PredIdStr), suffix(":"), nl,
            words("syntax error: some but not all arguments"),
            words("have mode annotations."), nl],
        Msg = simple_msg(Context, [always(Pieces)]),
        Spec = error_spec(severity_error, phase_parse_tree_to_hlds, [Msg]),
        !:Specs = [Spec | !.Specs],

        % Apply the clause to all modes.
        % XXX Would it be better to apply it to none?
        ProcIds = pred_info_all_procids(PredInfo)
    ).

:- pred undeclared_mode_error(list(mer_mode)::in, prog_varset::in,
    pred_id::in, pred_info::in, module_info::in, prog_context::in,
    list(error_spec)::in, list(error_spec)::out) is det.

undeclared_mode_error(ModeList, VarSet, PredId, PredInfo, ModuleInfo, Context,
        !Specs) :-
    PredIdPieces = describe_one_pred_name(ModuleInfo,
        should_not_module_qualify, PredId),
    strip_builtin_qualifiers_from_mode_list(ModeList, StrippedModeList),
    PredOrFunc = pred_info_is_pred_or_func(PredInfo),
    Name = pred_info_name(PredInfo),
    MaybeDet = no,
    SubDeclStr = mercury_mode_subdecl_to_string(PredOrFunc,
        varset.coerce(VarSet), unqualified(Name), StrippedModeList,
        MaybeDet, Context),

    MainPieces = [words("In clause for")] ++ PredIdPieces ++ [suffix(":"), nl,
        words("error: mode annotation specifies undeclared mode"),
        quote(SubDeclStr), suffix("."), nl],
    ProcIds = pred_info_all_procids(PredInfo),
    (
        ProcIds = [],
        VerbosePieces = [words("(There are no declared modes for this"),
            p_or_f(PredOrFunc), suffix(".)"), nl]
    ;
        ProcIds = [ProcIdsHead | ProcIdsTail],
        (
            ProcIdsTail = [],
            VerbosePieces = [words("The declared mode for this"),
                p_or_f(PredOrFunc), words("is:"),
                nl_indent_delta(1)] ++
                mode_decl_for_pred_info_to_pieces(PredInfo, ProcIdsHead) ++
                [nl_indent_delta(-1)]
        ;
            ProcIdsTail = [_ | _],
            VerbosePieces = [words("The declared modes for this"),
                p_or_f(PredOrFunc), words("are the following:"),
                nl_indent_delta(1)] ++
                component_list_to_line_pieces(
                    list.map(mode_decl_for_pred_info_to_pieces(PredInfo),
                        ProcIds),
                    []) ++
                [nl_indent_delta(-1)]
        )
    ),
    Msg = simple_msg(Context,
        [always(MainPieces), verbose_only(VerbosePieces)]),
    Spec = error_spec(severity_error, phase_parse_tree_to_hlds, [Msg]),
    !:Specs = [Spec | !.Specs].

:- func mode_decl_for_pred_info_to_pieces(pred_info, proc_id)
    = list(format_component).

mode_decl_for_pred_info_to_pieces(PredInfo, ProcId) =
    [words(":- mode"), words(mode_decl_to_string(ProcId, PredInfo)),
    suffix(".")].

    % Clauses can have mode annotations on them, to indicate that the
    % clause should only be used for particular modes of a predicate.
    % This type specifies the mode annotations on a clause.
:- type mode_annotations
    --->    empty   % No arguments.

    ;       none    % One or more arguments,
                    % each without any mode annotations.

    ;       modes(list(mer_mode))
                    % One or more arguments, each with a mode annotation.

    ;       mixed.  % Two or more arguments, including some with mode
                    % annotations and some without.  (This is not allowed.)

    % Extract the mode annotations (if any) from a list of arguments.
    %
:- pred get_mode_annotations(list(prog_term)::in, list(prog_term)::out,
    mode_annotations::in, mode_annotations::out) is det.

get_mode_annotations([], [], !Annotations).
get_mode_annotations([Arg0 | Args0], [Arg | Args], !Annotations) :-
    get_mode_annotation(Arg0, Arg, MaybeAnnotation),
    add_annotation(MaybeAnnotation, !Annotations),
    get_mode_annotations(Args0, Args, !Annotations).

:- pred add_annotation(maybe(mer_mode)::in,
    mode_annotations::in, mode_annotations::out) is det.

add_annotation(no,        empty, none).
add_annotation(yes(Mode), empty, modes([Mode])).
add_annotation(no,        modes(_ `with_type` list(mer_mode)), mixed).
add_annotation(yes(Mode), modes(Modes), modes(Modes ++ [Mode])).
add_annotation(no,        none, none).
add_annotation(yes(_),    none, mixed).
add_annotation(_,         mixed, mixed).

    % Extract the mode annotations (if any) from a single argument.
    %
:- pred get_mode_annotation(prog_term::in, prog_term::out,
    maybe(mer_mode)::out) is det.

get_mode_annotation(Arg0, Arg, MaybeAnnotation) :-
    (
        Arg0 = term.functor(term.atom("::"), [Arg1, ModeTerm], _),
        convert_mode(allow_constrained_inst_var, term.coerce(ModeTerm), Mode)
    ->
        Arg = Arg1,
        MaybeAnnotation = yes(Mode)
    ;
        Arg = Arg0,
        MaybeAnnotation = no
    ).

clauses_info_add_clause(ModeIds0, CVarSet, TVarSet0, Args, Body, Context,
        Status, PredOrFunc, Arity, GoalType, Goal, VarSet, TVarSet,
        !ClausesInfo, Warnings, !ModuleInfo, !QualInfo, !Specs) :-
    !.ClausesInfo = clauses_info(VarSet0, ExplicitVarTypes0,
        TVarNameMap0, InferredVarTypes, HeadVars, ClausesRep0,
        RttiVarMaps, HasForeignClauses),
    IsEmpty = clause_list_is_empty(ClausesRep0),
    (
        IsEmpty = yes,
        % Create the mapping from type variable name, used to
        % rename type variables occurring in explicit type
        % qualifications. The version of this mapping stored
        % in the clauses_info should only contain type variables
        % which occur in the argument types of the predicate.
        % Type variables which only occur in explicit type
        % qualifications are local to the clause in which they appear.
        varset.create_name_var_map(TVarSet0, TVarNameMap)
    ;
        IsEmpty = no,
        TVarNameMap = TVarNameMap0
    ),
    update_qual_info(TVarNameMap, TVarSet0, ExplicitVarTypes0, Status,
        !QualInfo),
    varset.merge_renaming(VarSet0, CVarSet, VarSet1, Renaming),
    add_clause_transform(Renaming, HeadVars, Args, Body, Context, PredOrFunc,
        Arity, GoalType, Goal0, VarSet1, VarSet, Warnings, !ModuleInfo,
        !QualInfo, !Specs),
    qual_info_get_tvarset(!.QualInfo, TVarSet),
    qual_info_get_found_syntax_error(!.QualInfo, FoundError),
    qual_info_set_found_syntax_error(no, !QualInfo),
    (
        FoundError = yes,
        % Don't insert clauses containing syntax errors into the clauses_info,
        % because doing that would cause typecheck.m to report spurious type
        % errors. Don't report singleton variable warnings if there were
        % syntax errors.
        Goal = true_goal
    ;
        FoundError = no,
        Goal = Goal0,

        % If we have foreign clauses, we should only add this clause
        % for modes *not* covered by the foreign clauses.
        (
            HasForeignClauses = yes,
            get_clause_list_any_order(ClausesRep0, AnyOrderClauseList),
            ForeignModeIds = list.condense(list.filter_map(
                (func(C) = ProcIds is semidet :-
                    C = clause(ProcIds, _, ClauseLang, _),
                    not ClauseLang = impl_lang_mercury
                ),
                AnyOrderClauseList)),
            ModeIds = list.delete_elems(ModeIds0, ForeignModeIds),
            (
                ModeIds = [],
                ClausesRep = ClausesRep0
            ;
                ModeIds = [_ | _],
                Clause = clause(ModeIds, Goal, impl_lang_mercury, Context),
                add_clause(Clause, ClausesRep0, ClausesRep)
            )
        ;
            HasForeignClauses = no,
            Clause = clause(ModeIds0, Goal, impl_lang_mercury, Context),
            add_clause(Clause, ClausesRep0, ClausesRep)
        ),
        qual_info_get_var_types(!.QualInfo, ExplicitVarTypes),
        !:ClausesInfo = clauses_info(VarSet, ExplicitVarTypes, TVarNameMap,
            InferredVarTypes, HeadVars, ClausesRep, RttiVarMaps,
            HasForeignClauses)
    ).

:- pred add_clause_transform(prog_var_renaming::in,
    proc_arg_vector(prog_var)::in, list(prog_term)::in, goal::in,
    prog_context::in, pred_or_func::in, arity::in, goal_type::in,
    hlds_goal::out, prog_varset::in, prog_varset::out,
    list(quant_warning)::out, module_info::in, module_info::out,
    qual_info::in, qual_info::out,
    list(error_spec)::in, list(error_spec)::out) is det.

add_clause_transform(Renaming, HeadVars, Args0, ParseBody, Context, PredOrFunc,
        Arity, GoalType, Goal, !VarSet, Warnings, !ModuleInfo,
        !QualInfo, !Specs) :-
    some [!SInfo] (
        HeadVarList = proc_arg_vector_to_list(HeadVars),
        prepare_for_head(!:SInfo),
        rename_vars_in_term_list(need_not_rename, Renaming, Args0, Args1),
        substitute_state_var_mappings(Args1, Args, !VarSet, !SInfo, !Specs),
        HeadGoal0 = true_goal,
        ( GoalType = goal_type_promise(_) ->
            HeadGoal = HeadGoal0
        ;
            ArgContext = ac_head(PredOrFunc, Arity),
            insert_arg_unifications(HeadVarList, Args, Context, ArgContext,
                HeadGoal0, HeadGoal1, _, !VarSet, !ModuleInfo, !QualInfo,
                !SInfo, !Specs),
            attach_features_to_all_goals([feature_from_head],
                HeadGoal1, HeadGoal)
        ),
        prepare_for_body(FinalSVarMap, !VarSet, !SInfo),
        transform_goal(ParseBody, Renaming, BodyGoal, _, !VarSet, !ModuleInfo,
            !QualInfo, !SInfo, !Specs),
        finish_goals(Context, FinalSVarMap, [HeadGoal, BodyGoal], Goal0,
            !.SInfo),
        qual_info_get_var_types(!.QualInfo, VarTypes0),
        %
        % The RTTI varmaps here are just a dummy value because the real
        % ones are not introduced until typechecking and polymorphism.
        %
        rtti_varmaps_init(EmptyRttiVarmaps),
        implicitly_quantify_clause_body(HeadVarList, Warnings, Goal0, Goal,
            !VarSet, VarTypes0, VarTypes, EmptyRttiVarmaps, _),
        qual_info_set_var_types(VarTypes, !QualInfo)
    ).

%-----------------------------------------------------------------------------%

transform_goal(Goal0 - Context, Renaming, hlds_goal(GoalExpr, GoalInfo),
        NumAdded, !VarSet, !ModuleInfo, !QualInfo, !SInfo, !Specs) :-
    transform_goal_2(Goal0, Context, Renaming, hlds_goal(GoalExpr, GoalInfo1),
        NumAdded, !VarSet, !ModuleInfo, !QualInfo, !SInfo, !Specs),
    goal_info_set_context(Context, GoalInfo1, GoalInfo).

:- pred transform_goal_2(goal_expr::in, prog_context::in,
    prog_var_renaming::in, hlds_goal::out, num_added_goals::out,
    prog_varset::in, prog_varset::out,
    module_info::in, module_info::out, qual_info::in, qual_info::out,
    svar_info::in, svar_info::out,
    list(error_spec)::in, list(error_spec)::out) is det.

transform_goal_2(fail_expr, _, _, hlds_goal(disj([]), GoalInfo), 0,
        !VarSet, !ModuleInfo, !QualInfo, !SInfo, !Specs) :-
    goal_info_init(GoalInfo),
    prepare_for_next_conjunct(set.init, !VarSet, !SInfo).
transform_goal_2(true_expr, _, _, hlds_goal(conj(plain_conj, []), GoalInfo), 0,
        !VarSet, !ModuleInfo, !QualInfo, !SInfo, !Specs) :-
    goal_info_init(GoalInfo),
    prepare_for_next_conjunct(set.init, !VarSet, !SInfo).
transform_goal_2(all_expr(Vars0, Goal0), Context, Renaming, Goal, NumAdded,
        !VarSet, !ModuleInfo, !QualInfo, !SInfo, !Specs) :-
    % Convert `all [Vars] Goal' into `not some [Vars] not Goal'.
    TransformedGoal = not_expr(some_expr(Vars0, not_expr(Goal0) - Context)
        - Context),
    transform_goal_2(TransformedGoal, Context, Renaming, Goal, NumAdded,
        !VarSet, !ModuleInfo, !QualInfo, !SInfo, !Specs).
transform_goal_2(all_state_vars_expr(StateVars, Goal0), Context, Renaming,
        Goal, NumAdded, !VarSet, !ModuleInfo, !QualInfo, !SInfo, !Specs) :-
    transform_goal_2(
        not_expr(some_state_vars_expr(StateVars,
            not_expr(Goal0) - Context) - Context),
        Context, Renaming, Goal, NumAdded, !VarSet, !ModuleInfo, !QualInfo,
        !SInfo, !Specs).
transform_goal_2(some_expr(Vars0, Goal0), _, Renaming,
        hlds_goal(scope(exist_quant(Vars), Goal), GoalInfo), NumAdded,
        !VarSet, !ModuleInfo, !QualInfo, !SInfo, !Specs) :-
    rename_var_list(need_not_rename, Renaming, Vars0, Vars),
    transform_goal(Goal0, Renaming, Goal, NumAdded, !VarSet, !ModuleInfo,
        !QualInfo, !SInfo, !Specs),
    goal_info_init(GoalInfo).
transform_goal_2(some_state_vars_expr(StateVars0, Goal0), _, Renaming,
        hlds_goal(scope(exist_quant(Vars), Goal), GoalInfo), NumAdded,
        !VarSet, !ModuleInfo, !QualInfo, !SInfo, !Specs) :-
    BeforeSInfo = !.SInfo,
    rename_var_list(need_not_rename, Renaming, StateVars0, StateVars),
    prepare_for_local_state_vars(StateVars, !VarSet, !SInfo),
    transform_goal(Goal0, Renaming, Goal, NumAdded, !VarSet, !ModuleInfo,
        !QualInfo, !SInfo, !Specs),
    finish_local_state_vars(StateVars, Vars, BeforeSInfo, !SInfo),
    goal_info_init(GoalInfo).
transform_goal_2(promise_purity_expr(Implicit, Purity, Goal0), _, Renaming,
        hlds_goal(
            scope(promise_purity(Implicit, Purity), Goal),
            GoalInfo),
        NumAdded, !VarSet, !ModuleInfo, !QualInfo, !SInfo, !Specs) :-
    transform_goal(Goal0, Renaming, Goal, NumAdded, !VarSet, !ModuleInfo,
        !QualInfo, !SInfo, !Specs),
    goal_info_init(GoalInfo).
transform_goal_2(
        promise_equivalent_solutions_expr(Vars0, DotSVars0, ColonSVars0,
            Goal0),
        Context, Renaming,
        hlds_goal(
            scope(promise_solutions(Vars, equivalent_solutions), Goal),
            GoalInfo),
        NumAdded, !VarSet, !ModuleInfo, !QualInfo, !SInfo, !Specs) :-
    transform_promise_eqv_goal(Vars0, DotSVars0, ColonSVars0,
        Context, Renaming, Vars, Goal0, Goal, GoalInfo, NumAdded,
        !VarSet, !ModuleInfo, !QualInfo, !SInfo, !Specs).
transform_goal_2(
        promise_equivalent_solution_sets_expr(Vars0, DotSVars0, ColonSVars0,
            Goal0),
        Context, Renaming,
        hlds_goal(
            scope(promise_solutions(Vars, equivalent_solution_sets), Goal),
            GoalInfo),
        NumAdded, !VarSet, !ModuleInfo, !QualInfo, !SInfo, !Specs) :-
    transform_promise_eqv_goal(Vars0, DotSVars0, ColonSVars0,
        Context, Renaming, Vars, Goal0, Goal, GoalInfo, NumAdded,
        !VarSet, !ModuleInfo, !QualInfo, !SInfo, !Specs).
transform_goal_2(
        promise_equivalent_solution_arbitrary_expr(Vars0,
            DotSVars0, ColonSVars0, Goal0),
        Context, Renaming,
        hlds_goal(
            scope(promise_solutions(Vars, equivalent_solution_sets_arbitrary),
                Goal),
            GoalInfo),
        NumAdded, !VarSet, !ModuleInfo, !QualInfo, !SInfo, !Specs) :-
    transform_promise_eqv_goal(Vars0, DotSVars0, ColonSVars0,
        Context, Renaming, Vars, Goal0, Goal, GoalInfo, NumAdded,
        !VarSet, !ModuleInfo, !QualInfo, !SInfo, !Specs).
transform_goal_2(
        trace_expr(MaybeCompileTime, MaybeRunTime, MaybeIO, Mutables, Goal0),
        Context, Renaming, hlds_goal(scope(Reason, Goal), GoalInfo), NumAdded,
        !VarSet, !ModuleInfo, !QualInfo, !SInfo, !Specs) :-
    list.map4(extract_trace_mutable_var(Context, !.VarSet), Mutables,
        MutableHLDSs, MutableStateVars, MutableGetGoals, MutableSetGoals),
    (
        MaybeIO = yes(IOStateVar),
        varset.lookup_name(!.VarSet, IOStateVar, IOStateVarName),
        MaybeIOHLDS = yes(IOStateVarName),
        extract_trace_io_var(Context, IOStateVar, IOGetGoal, IOSetGoal),
        StateVars0 = [IOStateVar | MutableStateVars],
        GetGoals = [IOGetGoal | MutableGetGoals],
        SetGoals = [IOSetGoal | MutableSetGoals]
    ;
        MaybeIO = no,
        MaybeIOHLDS = no,
        StateVars0 = MutableStateVars,
        GetGoals = MutableGetGoals,
        SetGoals = MutableSetGoals
    ),
    Goal1 = goal_list_to_conj(Context, GetGoals ++ [Goal0] ++ SetGoals),
    BeforeSInfo = !.SInfo,
    rename_var_list(need_not_rename, Renaming, StateVars0, StateVars),
    prepare_for_local_state_vars(StateVars, !VarSet, !SInfo),
    transform_goal(Goal1, Renaming, Goal, NumAdded1, !VarSet, !ModuleInfo,
        !QualInfo, !SInfo, !Specs),
    NumAdded = list.length(GetGoals) + NumAdded1 + list.length(SetGoals),
    finish_local_state_vars(StateVars, Vars, BeforeSInfo, !SInfo),
    Reason = trace_goal(MaybeCompileTime, MaybeRunTime, MaybeIOHLDS,
        MutableHLDSs, Vars),
    goal_info_init(GoalInfo).
transform_goal_2(if_then_else_expr(Vars0, StateVars0, Cond0, Then0, Else0),
        Context, Renaming,
        hlds_goal(if_then_else(Vars, Cond, Then, Else), GoalInfo),
        NumAdded, !VarSet, !ModuleInfo, !QualInfo, !SInfo, !Specs) :-
    BeforeSInfo = !.SInfo,
    rename_var_list(need_not_rename, Renaming, Vars0, Vars),
    rename_var_list(need_not_rename, Renaming, StateVars0, StateVars),
    prepare_for_if_then_else_goal(StateVars, !VarSet, !SInfo),
    transform_goal(Cond0, Renaming, Cond, CondAdded, !VarSet, !ModuleInfo,
        !QualInfo, !SInfo, !Specs),
    finish_if_then_else_goal_condition(StateVars,
        BeforeSInfo, !.SInfo, AfterCondSInfo, !:SInfo),
    transform_goal(Then0, Renaming, Then1, ThenAdded, !VarSet, !ModuleInfo,
        !QualInfo, !SInfo, !Specs),
    finish_if_then_else_goal_then_goal(StateVars, BeforeSInfo, !SInfo),
    AfterThenSInfo = !.SInfo,
    transform_goal(Else0, Renaming, Else1, ElseAdded, !VarSet, !ModuleInfo,
        !QualInfo, BeforeSInfo, !:SInfo, !Specs),
    NumAdded = CondAdded + ThenAdded + ElseAdded,
    goal_info_init(Context, GoalInfo),
    finish_if_then_else(Context, Then1, Then, Else1, Else,
        BeforeSInfo, AfterCondSInfo, AfterThenSInfo, !SInfo, !VarSet).
transform_goal_2(not_expr(SubGoal0), _, Renaming,
        hlds_goal(negation(SubGoal), GoalInfo),
        NumAdded, !VarSet, !ModuleInfo, !QualInfo, !SInfo, !Specs) :-
    BeforeSInfo = !.SInfo,
    transform_goal(SubGoal0, Renaming, SubGoal, NumAdded, !VarSet, !ModuleInfo,
        !QualInfo, !SInfo, !Specs),
    goal_info_init(GoalInfo),
    finish_negation(BeforeSInfo, !SInfo).
transform_goal_2(conj_expr(A0, B0), _, Renaming, Goal, NumAdded, !VarSet,
        !ModuleInfo, !QualInfo, !SInfo, !Specs) :-
    get_rev_conj(A0, Renaming, [], R0, 0, NumAddedA,
        !VarSet, !ModuleInfo, !QualInfo, !SInfo, !Specs),
    get_rev_conj(B0, Renaming, R0, R,  NumAddedA, NumAdded,
        !VarSet, !ModuleInfo, !QualInfo, !SInfo, !Specs),
    L = list.reverse(R),
    goal_info_init(GoalInfo),
    conj_list_to_goal(L, GoalInfo, Goal).
transform_goal_2(par_conj_expr(A0, B0), _, Renaming, Goal, NumAdded, !VarSet,
        !ModuleInfo, !QualInfo, !SInfo, !Specs) :-
    get_rev_par_conj(A0, Renaming, [], R0, 0, NumAddedA,
        !VarSet, !ModuleInfo, !QualInfo, !SInfo, !Specs),
    get_rev_par_conj(B0, Renaming, R0, R,  NumAddedA, NumAdded,
        !VarSet, !ModuleInfo, !QualInfo, !SInfo, !Specs),
    L = list.reverse(R),
    goal_info_init(GoalInfo),
    par_conj_list_to_goal(L, GoalInfo, Goal).
transform_goal_2(disj_expr(A0, B0), Context, Renaming, Goal, NumAdded, !VarSet,
        !ModuleInfo, !QualInfo, !SInfo, !Specs) :-
    get_disj(B0, Renaming, [], L0, 0, NumAddedB,
        !VarSet, !ModuleInfo, !QualInfo, !.SInfo, !Specs),
    get_disj(A0, Renaming, L0, L1, NumAddedB, NumAdded,
        !VarSet, !ModuleInfo, !QualInfo, !.SInfo, !Specs),
    finish_disjunction(Context, !.VarSet, L1, L, !:SInfo),
    goal_info_init(Context, GoalInfo),
    disj_list_to_goal(L, GoalInfo, Goal).
transform_goal_2(implies_expr(P, Q), Context, Renaming, Goal, NumAdded,
        !VarSet, !ModuleInfo, !QualInfo, !SInfo, !Specs) :-
        % `P => Q' is defined as `not (P, not Q)'
    TransformedGoal = not_expr(conj_expr(P, not_expr(Q) - Context) - Context),
    transform_goal_2(TransformedGoal, Context, Renaming, Goal, NumAdded,
        !VarSet, !ModuleInfo, !QualInfo, !SInfo, !Specs).
transform_goal_2(equivalent_expr(P0, Q0), _, Renaming, Goal, NumAdded, !VarSet,
        !ModuleInfo, !QualInfo, !SInfo, !Specs) :-
    % `P <=> Q' is defined as `(P => Q), (Q => P)',
    % but that transformation must not be done until
    % after quantification analysis, lest the duplication of
    % the goals concerned affect the implicit quantification
    % of the variables inside them.

    BeforeSInfo = !.SInfo,
    goal_info_init(GoalInfo),
    transform_goal(P0, Renaming, P, NumAddedP, !VarSet, !ModuleInfo, !QualInfo,
        !SInfo, !Specs),
    transform_goal(Q0, Renaming, Q, NumAddedQ, !VarSet, !ModuleInfo, !QualInfo,
        !SInfo, !Specs),
    NumAdded = NumAddedP + NumAddedQ,
    Goal = hlds_goal(shorthand(bi_implication(P, Q)), GoalInfo),
    finish_equivalence(BeforeSInfo, !SInfo).
transform_goal_2(event_expr(EventName, Args0), Context, Renaming, Goal,
        NumAdded, !VarSet, !ModuleInfo, !QualInfo, !SInfo, !Specs) :-
    Args1 = expand_bang_state_var_args(Args0),
    prepare_for_call(!SInfo),
    rename_vars_in_term_list(need_not_rename, Renaming, Args1, Args),
    make_fresh_arg_vars(Args, HeadVars, !VarSet, !SInfo, !Specs),
    list.length(HeadVars, Arity),
    list.duplicate(Arity, in_mode, Modes),
    goal_info_init(Context, GoalInfo),
    Details = event_call(EventName),
    GoalExpr0 = generic_call(Details, HeadVars, Modes, detism_det),
    Goal0 = hlds_goal(GoalExpr0, GoalInfo),
    CallId = generic_call_id(gcid_event_call(EventName)),
    insert_arg_unifications(HeadVars, Args, Context, ac_call(CallId),
        Goal0, Goal, NumAdded, !VarSet, !ModuleInfo, !QualInfo,
        !SInfo, !Specs),
    finish_call(!VarSet, !SInfo).
transform_goal_2(call_expr(Name, Args0, Purity), Context, Renaming, Goal,
        NumAdded, !VarSet, !ModuleInfo, !QualInfo, !SInfo, !Specs) :-
    Args1 = expand_bang_state_var_args(Args0),
    (
        Name = unqualified("\\="),
        Args1 = [LHS, RHS]
    ->
        prepare_for_call(!SInfo),
        % `LHS \= RHS' is defined as `not (LHS = RHS)'
        transform_goal_2(not_expr(unify_expr(LHS, RHS, Purity) - Context),
            Context, Renaming, Goal, NumAdded, !VarSet, !ModuleInfo, !QualInfo,
            !SInfo, !Specs),
        finish_call(!VarSet, !SInfo)
    ;
        % check for a state var record assignment:
        % !Var ^ field := Value
        Name = unqualified(":="),
        Args1 = [LHS0, RHS0],
        LHS0 = functor(atom("^"), [StateVar0, Remainder], FieldListContext),
        StateVar0 = functor(atom("!"), Args @ [variable(_, _)],
                StateVarContext)
    ->
        prepare_for_call(!SInfo),
        % !Var ^ field := Value is defined as !:Var = !.Var ^ field := Value.
        LHS = functor(atom("!:"), Args, StateVarContext),
        StateVar = functor(atom("!."), Args, StateVarContext),
        FieldList = functor(atom("^"), [StateVar, Remainder],
                FieldListContext),
        RHS = functor(atom(":="), [FieldList, RHS0], Context),
        transform_goal_2(unify_expr(LHS, RHS, Purity),
            Context, Renaming, Goal, NumAdded, !VarSet, !ModuleInfo, !QualInfo,
            !SInfo, !Specs),
        finish_call(!VarSet, !SInfo)
    ;
        % check for a DCG field access goal:
        % get: Field =^ field
        % set: ^ field := Field
        ( Name = unqualified(Operator) ),
        ( Operator = "=^"
        ; Operator = ":="
        )
    ->
        prepare_for_call(!SInfo),
        rename_vars_in_term_list(need_not_rename, Renaming, Args1, Args2),
        transform_dcg_record_syntax(Operator, Args2, Context, Goal, NumAdded,
            !VarSet, !ModuleInfo, !QualInfo, !SInfo, !Specs),
        finish_call(!VarSet, !SInfo)
    ;
        prepare_for_call(!SInfo),
        rename_vars_in_term_list(need_not_rename, Renaming, Args1, Args),
        make_fresh_arg_vars(Args, HeadVars, !VarSet, !SInfo, !Specs),
        list.length(Args, Arity),
        (
            % Check for a higher-order call,
            % i.e. a call to either call/N or ''/N.
            ( Name = unqualified("call")
            ; Name = unqualified("")
            ),
            HeadVars = [PredVar | RealHeadVars]
        ->
            % Initialize some fields to junk.
            Modes = [],
            Det = detism_erroneous,

            GenericCall = higher_order(PredVar, Purity, pf_predicate, Arity),
            Call = generic_call(GenericCall, RealHeadVars, Modes, Det),

            hlds_goal.generic_call_id(GenericCall, CallId)
        ;
            % Initialize some fields to junk.
            PredId = invalid_pred_id,
            ModeId = invalid_proc_id,

            MaybeUnifyContext = no,
            Call = plain_call(PredId, ModeId, HeadVars, not_builtin,
                MaybeUnifyContext, Name),
            CallId = plain_call_id(simple_call_id(pf_predicate, Name, Arity))
        ),
        goal_info_init(Context, GoalInfo0),
        goal_info_set_purity(Purity, GoalInfo0, GoalInfo),
        Goal0 = hlds_goal(Call, GoalInfo),

        record_called_pred_or_func(pf_predicate, Name, Arity, !QualInfo),
        insert_arg_unifications(HeadVars, Args, Context, ac_call(CallId),
            Goal0, Goal, NumAdded, !VarSet, !ModuleInfo, !QualInfo,
            !SInfo, !Specs),
        finish_call(!VarSet, !SInfo)
    ).
transform_goal_2(unify_expr(A0, B0, Purity), Context, Renaming, Goal,
        NumAdded, !VarSet, !ModuleInfo, !QualInfo, !SInfo, !Specs) :-
    rename_vars_in_term(need_not_rename, Renaming, A0, A),
    rename_vars_in_term(need_not_rename, Renaming, B0, B),
    % It is an error for the left or right hand side of a
    % unification to be !X (it may be !.X or !:X, however).
    ( A = functor(atom("!"), [variable(StateVarA, _)], _) ->
        report_svar_unify_error(Context, !.VarSet, StateVarA, !Specs),
        Goal = true_goal,
        NumAdded = 0
    ; B = functor(atom("!"), [variable(StateVarB, _)], _) ->
        report_svar_unify_error(Context, !.VarSet, StateVarB, !Specs),
        Goal = true_goal,
        NumAdded = 0
    ;
        prepare_for_call(!SInfo),
        unravel_unification(A, B, Context, umc_explicit, [], Purity, Goal,
            NumAdded, !VarSet, !ModuleInfo, !QualInfo, !SInfo, !Specs),
        finish_call(!VarSet, !SInfo)
    ).

:- pred extract_trace_mutable_var(prog_context::in, prog_varset::in,
    trace_mutable_var::in, trace_mutable_var_hlds::out,
    prog_var::out, goal::out, goal::out) is det.

extract_trace_mutable_var(Context, VarSet, Mutable, MutableHLDS, StateVar,
        GetGoal, SetGoal) :-
    Mutable = trace_mutable_var(MutableName, StateVar),
    varset.lookup_name(VarSet, StateVar, StateVarName),
    MutableHLDS = trace_mutable_var_hlds(MutableName, StateVarName),
    GetPredName = unqualified("get_" ++ MutableName),
    SetPredName = unqualified("set_" ++ MutableName),
    SetVar = functor(atom("!:"), [variable(StateVar, Context)], Context),
    UseVar = functor(atom("!."), [variable(StateVar, Context)], Context),
    GetPurity = purity_semipure,
    SetPurity = purity_impure,
    GetGoal = call_expr(GetPredName, [SetVar], GetPurity) - Context,
    SetGoal = call_expr(SetPredName, [UseVar], SetPurity) - Context.

:- pred extract_trace_io_var(prog_context::in, prog_var::in,
    goal::out, goal::out) is det.

extract_trace_io_var(Context, StateVar, GetGoal, SetGoal) :-
    Builtin = mercury_private_builtin_module,
    GetPredName = qualified(Builtin, "trace_get_io_state"),
    SetPredName = qualified(Builtin, "trace_set_io_state"),
    SetVar = functor(atom("!:"), [variable(StateVar, Context)], Context),
    UseVar = functor(atom("!."), [variable(StateVar, Context)], Context),
    GetPurity = purity_semipure,
    SetPurity = purity_impure,
    GetGoal = call_expr(GetPredName, [SetVar], GetPurity) - Context,
    SetGoal = call_expr(SetPredName, [UseVar], SetPurity) - Context.

:- pred transform_promise_eqv_goal(prog_vars::in, prog_vars::in, prog_vars::in,
    prog_context::in, prog_var_renaming::in, prog_vars::out,
    goal::in, hlds_goal::out, hlds_goal_info::out, int::out,
    prog_varset::in, prog_varset::out, module_info::in, module_info::out,
    qual_info::in, qual_info::out, svar_info::in, svar_info::out,
    list(error_spec)::in, list(error_spec)::out) is det.

transform_promise_eqv_goal(Vars0, DotSVars0, ColonSVars0, Context, Renaming,
        Vars, Goal0, Goal, GoalInfo, NumAdded, !VarSet, !ModuleInfo, !QualInfo,
        !SInfo, !Specs) :-
    rename_var_list(need_not_rename, Renaming, Vars0, Vars1),
    rename_var_list(need_not_rename, Renaming, DotSVars0, DotSVars1),
    convert_dot_state_vars(Context, DotSVars1, DotSVars, !VarSet,
        !SInfo, !Specs),
    transform_goal(Goal0, Renaming, Goal, NumAdded, !VarSet, !ModuleInfo,
        !QualInfo, !SInfo, !Specs),
    goal_info_init(GoalInfo),
    rename_var_list(need_not_rename, Renaming, ColonSVars0, ColonSVars1),
    convert_dot_state_vars(Context, ColonSVars1, ColonSVars, !VarSet,
        !SInfo, !Specs),
    Vars = Vars1 ++ DotSVars ++ ColonSVars.

:- pred convert_dot_state_vars(prog_context::in, prog_vars::in, prog_vars::out,
    prog_varset::in, prog_varset::out, svar_info::in, svar_info::out,
    list(error_spec)::in, list(error_spec)::out) is det.

convert_dot_state_vars(_Context, [], [], !VarSet, !SInfo, !Specs).
convert_dot_state_vars(Context, [Dot0 | Dots0], [Dot | Dots],
        !VarSet, !SInfo, !Specs) :-
    dot(Context, Dot0, Dot, !VarSet, !SInfo, !Specs),
    convert_dot_state_vars(Context, Dots0, Dots, !VarSet, !SInfo, !Specs).

:- pred convert_colon_state_vars(prog_context::in,
    prog_vars::in, prog_vars::out, prog_varset::in, prog_varset::out,
    svar_info::in, svar_info::out,
    list(error_spec)::in, list(error_spec)::out) is det.

convert_colon_state_vars(_Context, [], [], !VarSet, !SInfo, !Specs).
convert_colon_state_vars(Context, [Colon0 | Colons0], [Colon | Colons],
        !VarSet, !SInfo, !Specs) :-
    colon(Context, Colon0, Colon, !VarSet, !SInfo, !Specs),
    convert_colon_state_vars(Context, Colons0, Colons, !VarSet,
        !SInfo, !Specs).

:- pred report_svar_unify_error(prog_context::in, prog_varset::in, svar::in,
    list(error_spec)::in, list(error_spec)::out) is det.

report_svar_unify_error(Context, VarSet, StateVar, !Specs) :-
    Name = varset.lookup_name(VarSet, StateVar),
    Pieces = [nl, words("Error:"), fixed("!" ++ Name),
        words("cannot appear as a unification argument."), nl,
        words("You probably meant"), fixed("!." ++ Name),
        words("or"), fixed("!:" ++ Name), suffix(".")],
    Msg = simple_msg(Context, [always(Pieces)]),
    Spec = error_spec(severity_error, phase_parse_tree_to_hlds, [Msg]),
    !:Specs = [Spec | !.Specs].

:- inst dcg_record_syntax_op == bound("=^"; ":=").

:- pred transform_dcg_record_syntax(string::in(dcg_record_syntax_op),
    list(prog_term)::in, prog_context::in, hlds_goal::out, int::out,
    prog_varset::in, prog_varset::out,
    module_info::in, module_info::out, qual_info::in, qual_info::out,
    svar_info::in, svar_info::out,
    list(error_spec)::in, list(error_spec)::out) is det.

transform_dcg_record_syntax(Operator, ArgTerms0, Context, Goal, NumAdded,
        !VarSet, !ModuleInfo, !QualInfo, !SInfo, !Specs) :-
    goal_info_init(Context, GoalInfo),
    (
        ArgTerms0 = [LHSTerm, RHSTerm, TermInputTerm, TermOutputTerm],
        (
            Operator = "=^",
            AccessType = get,
            FieldNameTerm = RHSTerm,
            FieldValueTerm = LHSTerm
        ;
            Operator = ":=",
            AccessType = set,
            LHSTerm = term.functor(term.atom("^"), [FieldNameTerm0], _),
            FieldNameTerm = FieldNameTerm0,
            FieldValueTerm = RHSTerm
        )
    ->
        parse_field_list(FieldNameTerm, MaybeFieldNames),
        (
            MaybeFieldNames = ok1(FieldNames),
            ArgTerms = [FieldValueTerm, TermInputTerm, TermOutputTerm],
            transform_dcg_record_syntax_2(AccessType, FieldNames, ArgTerms,
                Context, Goal, NumAdded, !VarSet, !ModuleInfo, !QualInfo,
                !SInfo, !Specs)
        ;
            MaybeFieldNames = error1(Errors),
            invalid_goal("^", ArgTerms0, GoalInfo, Goal, !VarSet,
                !SInfo, !Specs),
            NumAdded = 0,
            qual_info_set_found_syntax_error(yes, !QualInfo),
            list.foldl(report_dcg_field_error(Context, AccessType, !.VarSet),
                Errors, !Specs)
        )
    ;
        invalid_goal("^", ArgTerms0, GoalInfo, Goal, !VarSet, !SInfo, !Specs),
        NumAdded = 0,
        qual_info_set_found_syntax_error(yes, !QualInfo),
        Pieces = [words("Error: expected `Field =^ field1 ^ ... ^ fieldN'"),
            words("or `^ field1 ^ ... ^ fieldN := Field'"),
            words("in DCG field access goal."), nl],
        Msg = simple_msg(Context, [always(Pieces)]),
        Spec = error_spec(severity_error, phase_parse_tree_to_hlds, [Msg]),
        !:Specs = [Spec | !.Specs]
    ).

:- pred report_dcg_field_error(term.context::in, field_access_type::in,
    prog_varset::in, pair(string, term(prog_var_type))::in,
    list(error_spec)::in, list(error_spec)::out) is det.

report_dcg_field_error(Context, AccessType, VarSet, Error, !Specs) :-
    Error = ErrorMsg - ErrorTerm,
    (
        AccessType = set,
        Action = "update"
    ;
        AccessType = get,
        Action = "extraction"
    ),
    GenericVarSet = varset.coerce(VarSet),
    TermStr = mercury_term_to_string(GenericVarSet, no, ErrorTerm),
    Pieces = [words("In DCG field"), words(Action), words("goal:"), nl,
        words("error:"), words(ErrorMsg), words("at term"),
        quote(TermStr), suffix("."), nl],
    Msg = simple_msg(Context, [always(Pieces)]),
    Spec = error_spec(severity_error, phase_parse_tree_to_hlds, [Msg]),
    !:Specs = [Spec | !.Specs].

    % Produce an invalid goal.
    %
:- pred invalid_goal(string::in, list(prog_term)::in, hlds_goal_info::in,
    hlds_goal::out, prog_varset::in, prog_varset::out,
    svar_info::in, svar_info::out,
    list(error_spec)::in, list(error_spec)::out) is det.

invalid_goal(UpdateStr, Args0, GoalInfo, Goal, !VarSet, !SInfo, !Specs) :-
    make_fresh_arg_vars(Args0, HeadVars, !VarSet, !SInfo, !Specs),
    MaybeUnifyContext = no,
    GoalExpr = plain_call(invalid_pred_id, invalid_proc_id, HeadVars,
        not_builtin, MaybeUnifyContext, unqualified(UpdateStr)),
    Goal = hlds_goal(GoalExpr, GoalInfo).

:- pred transform_dcg_record_syntax_2(field_access_type::in, field_list::in,
    list(prog_term)::in, prog_context::in, hlds_goal::out,
    num_added_goals::out, prog_varset::in, prog_varset::out,
    module_info::in, module_info::out, qual_info::in, qual_info::out,
    svar_info::in, svar_info::out,
    list(error_spec)::in, list(error_spec)::out) is det.

transform_dcg_record_syntax_2(AccessType, FieldNames, ArgTerms, Context, Goal,
        NumAdded, !VarSet, !ModuleInfo, !QualInfo, !SInfo, !Specs) :-
    make_fresh_arg_vars(ArgTerms, ArgVars, !VarSet, !SInfo, !Specs),
    ( ArgVars = [FieldValueVar, TermInputVar, TermOutputVar] ->
        (
            AccessType = set,
            expand_set_field_function_call(Context, umc_explicit, [],
                FieldNames, FieldValueVar, TermInputVar, TermOutputVar,
                Functor, InnermostFunctor - InnermostSubContext, Goal0,
                SetAdded, !VarSet, !ModuleInfo, !QualInfo, !SInfo, !Specs),

            FieldArgNumber = 2,
            FieldArgContext = ac_functor(InnermostFunctor, umc_explicit,
                InnermostSubContext),
            InputTermArgNumber = 1,
            InputTermArgContext = ac_functor(Functor, umc_explicit, []),
            ( Functor = cons(FuncName0, FuncArity0) ->
                FuncName = FuncName0,
                FuncArity = FuncArity0
            ;
                unexpected(this_file, "transform_dcg_record_syntax_2")
            ),
            % DCG arguments should always be distinct variables,
            % so this context should never be used.
            OutputTermArgNumber = 3,
            SimpleCallId = simple_call_id(pf_function, FuncName, FuncArity),
            OutputTermArgContext = ac_call(plain_call_id(SimpleCallId)),

            ArgContexts = [
                FieldArgNumber - FieldArgContext,
                InputTermArgNumber - InputTermArgContext,
                OutputTermArgNumber - OutputTermArgContext
            ],
            insert_arg_unifications_with_supplied_contexts(ArgVars, ArgTerms,
                ArgContexts, Context, Goal0, Goal, ArgAdded, !VarSet,
                !ModuleInfo, !QualInfo, !SInfo, !Specs),
            NumAdded = SetAdded + ArgAdded
        ;
            AccessType = get,
            expand_dcg_field_extraction_goal(Context, umc_explicit, [],
                FieldNames, FieldValueVar, TermInputVar, TermOutputVar,
                Functor, InnermostFunctor - _InnerSubContext, Goal0,
                ExtractAdded, !VarSet, !ModuleInfo, !QualInfo, !SInfo, !Specs),
            InputTermArgNumber = 1,
            InputTermArgContext = ac_functor(Functor, umc_explicit, []),

            ( InnermostFunctor = cons(FuncName0, FuncArity0) ->
                FuncName = FuncName0,
                FuncArity = FuncArity0
            ;
                unexpected(this_file, "transform_dcg_record_syntax_2")
            ),
            FieldArgNumber = 2,
            SimpleCallId = simple_call_id(pf_function, FuncName, FuncArity),
            FieldArgContext = ac_call(plain_call_id(SimpleCallId)),

            % DCG arguments should always be distinct variables,
            % so this context should never be used.
            OutputTermArgNumber = 1,
            OutputTermArgContext = ac_functor(Functor, umc_explicit, []),
            ArgContexts = [
                FieldArgNumber - FieldArgContext,
                InputTermArgNumber - InputTermArgContext,
                OutputTermArgNumber - OutputTermArgContext
            ],
            insert_arg_unifications_with_supplied_contexts(ArgVars, ArgTerms,
                ArgContexts, Context, Goal0, Goal, ArgAdded, !VarSet,
                !ModuleInfo, !QualInfo, !SInfo, !Specs),
            NumAdded = ExtractAdded + ArgAdded
        )
    ;
        unexpected(this_file, "do_transform_dcg_record_syntax")
    ).

    % get_rev_conj(Goal, Renaming, RevConj0, RevConj) :
    %
    % Goal is a tree of conjuncts. Flatten it into a list (applying Renaming),
    % reverse it, append RevConj0, and return the result in RevConj.
    %
:- pred get_rev_conj(goal::in, prog_var_renaming::in,
    list(hlds_goal)::in, list(hlds_goal)::out, int::in, int::out,
    prog_varset::in, prog_varset::out, module_info::in, module_info::out,
    qual_info::in, qual_info::out, svar_info::in, svar_info::out,
    list(error_spec)::in, list(error_spec)::out) is det.

get_rev_conj(Goal, Renaming, RevConj0, RevConj, !NumAdded, !VarSet,
        !ModuleInfo, !QualInfo, !SInfo, !Specs) :-
    ( Goal = conj_expr(A, B) - _Context ->
        get_rev_conj(A, Renaming, RevConj0, RevConj1, !NumAdded,
            !VarSet, !ModuleInfo, !QualInfo, !SInfo, !Specs),
        get_rev_conj(B, Renaming, RevConj1, RevConj, !NumAdded,
            !VarSet, !ModuleInfo, !QualInfo, !SInfo, !Specs)
    ;
        transform_goal(Goal, Renaming, Goal1, GoalAdded, !VarSet, !ModuleInfo,
            !QualInfo, !SInfo, !Specs),
        !:NumAdded = !.NumAdded + GoalAdded,
        goal_to_conj_list(Goal1, ConjList),
        RevConj = list.reverse(ConjList) ++ RevConj0
    ).

    % get_rev_par_conj(Goal, Renaming, RevParConj0, RevParConj) :
    %
    % Goal is a tree of conjuncts.  Flatten it into a list (applying Renaming),
    % reverse it, append RevParConj0, and return the result in RevParConj.
    %
:- pred get_rev_par_conj(goal::in, prog_var_renaming::in,
    list(hlds_goal)::in, list(hlds_goal)::out, int::in, int::out,
    prog_varset::in, prog_varset::out, module_info::in, module_info::out,
    qual_info::in, qual_info::out, svar_info::in, svar_info::out,
    list(error_spec)::in, list(error_spec)::out) is det.

get_rev_par_conj(Goal, Renaming, RevParConj0, RevParConj, !NumAdded, !VarSet,
        !ModuleInfo, !QualInfo, !SInfo, !Specs) :-
    ( Goal = par_conj_expr(A, B) - _Context ->
        get_rev_par_conj(A, Renaming, RevParConj0, RevParConj1, !NumAdded,
            !VarSet, !ModuleInfo, !QualInfo, !SInfo, !Specs),
        get_rev_par_conj(B, Renaming, RevParConj1, RevParConj, !NumAdded,
            !VarSet, !ModuleInfo, !QualInfo, !SInfo, !Specs)
    ;
        transform_goal(Goal, Renaming, Goal1, GoalAdded, !VarSet, !ModuleInfo,
            !QualInfo, !SInfo, !Specs),
        !:NumAdded = !.NumAdded + GoalAdded,
        goal_to_par_conj_list(Goal1, ParConjList),
        RevParConj = list.reverse(ParConjList) ++ RevParConj0
    ).

    % get_disj(Goal, Renaming, Disj0, Disj):
    %
    % Goal is a tree of disjuncts.  Flatten it into a list (applying Renaming),
    % append Disj0, and return the result in Disj.
    %
:- pred get_disj(goal::in, prog_var_renaming::in,
    hlds_goal_svar_infos::in, hlds_goal_svar_infos::out, int::in, int::out,
    prog_varset::in, prog_varset::out, module_info::in, module_info::out,
    qual_info::in, qual_info::out, svar_info::in,
    list(error_spec)::in, list(error_spec)::out) is det.

get_disj(Goal, Renaming, Disj0, Disj, !NumAdded, !VarSet, !ModuleInfo,
        !QualInfo, SInfo, !Specs) :-
    ( Goal = disj_expr(A, B) - _Context ->
        get_disj(B, Renaming, Disj0, Disj1, !NumAdded, !VarSet, !ModuleInfo,
            !QualInfo, SInfo, !Specs),
        get_disj(A, Renaming, Disj1, Disj,  !NumAdded, !VarSet, !ModuleInfo,
            !QualInfo, SInfo, !Specs)
    ;
        transform_goal(Goal, Renaming, Goal1, GoalAdded, !VarSet, !ModuleInfo,
            !QualInfo, SInfo, SInfo1, !Specs),
        !:NumAdded = !.NumAdded + GoalAdded,
        Disj = [{Goal1, SInfo1} | Disj0]
    ).

%----------------------------------------------------------------------------%

:- func this_file = string.

this_file = "add_clause.m".

%----------------------------------------------------------------------------%
