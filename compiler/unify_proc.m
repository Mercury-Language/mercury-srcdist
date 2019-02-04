%-----------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et
%-----------------------------------------------------------------------------%
% Copyright (C) 1994-2007 The University of Melbourne.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury distribution.
%-----------------------------------------------------------------------------%
%
% File: unify_proc.m.
%
% This module encapsulates access to the proc_requests table, and constructs
% the clauses for out-of-line complicated unification procedures.
% It also generates the code for other compiler-generated type-specific
% predicates such as compare/3.
%
% During mode analysis, we notice each different complicated unification
% that occurs.  For each one we add a new mode to the out-of-line
% unification predicate for that type, and we record in the `proc_requests'
% table that we need to eventually modecheck that mode of the unification
% procedure.
%
% After we've done mode analysis for all the ordinary predicates, we then
% do mode analysis for the out-of-line unification procedures.  Note that
% unification procedures may call other unification procedures which have
% not yet been encountered, causing new entries to be added to the
% proc_requests table.  We store the entries in a queue and continue the
% process until the queue is empty.
%
% The same queuing mechanism is also used for procedures created by
% mode inference during mode analysis and unique mode analysis.
%
% Currently if the same complicated unification procedure is called by
% different modules, each module will end up with a copy of the code for
% that procedure.  In the long run it would be desireable to either delay
% generation of complicated unification procedures until link time (like
% Cfront does with C++ templates) or to have a smart linker which could
% merge duplicate definitions (like Borland C++).  However the amount of
% code duplication involved is probably very small, so it's definitely not
% worth worrying about right now.
%
% XXX What about complicated unification of an abstract type in a partially
% instantiated mode?  Currently we don't implement it correctly. Probably
% it should be disallowed, but we should issue a proper error message.
%
%-----------------------------------------------------------------------------%

:- module check_hlds.unify_proc.
:- interface.

:- import_module check_hlds.mode_info.
:- import_module hlds.
:- import_module hlds.hlds_clauses.
:- import_module hlds.hlds_data.
:- import_module hlds.hlds_goal.
:- import_module hlds.hlds_module.
:- import_module hlds.hlds_pred.
:- import_module hlds.pred_table.
:- import_module mdbcomp.
:- import_module mdbcomp.prim_data.
:- import_module parse_tree.
:- import_module parse_tree.prog_data.

:- import_module bool.
:- import_module io.
:- import_module list.
:- import_module maybe.
:- import_module pair.

%-----------------------------------------------------------------------------%

:- type proc_requests.

:- type unify_proc_id == pair(type_ctor, uni_mode).

    % Initialize the proc_requests table.
    %
:- pred init_requests(proc_requests::out) is det.

    % Add a new request for a unification procedure to the proc_requests table.
    %
:- pred request_unify(unify_proc_id::in, inst_varset::in, determinism::in,
    prog_context::in, module_info::in, module_info::out) is det.

    % Add a new request for a procedure (not necessarily a unification)
    % to the request queue. Return the procedure's newly allocated proc_id.
    % (This is used by unique_modes.m.)
    %
:- pred request_proc(pred_id::in, list(mer_mode)::in, inst_varset::in,
    maybe(list(is_live))::in, maybe(determinism)::in, prog_context::in,
    proc_id::out, module_info::in, module_info::out) is det.

    % add_lazily_generated_unify_pred(TypeCtor, UnifyPredId_for_Type,
    %   !ModuleInfo):
    %
    % For most imported unification procedures, we delay generating
    % declarations and clauses until we know whether they are actually needed
    % because there is a complicated unification involving the type.
    % This predicate is exported for use by higher_order.m when it is
    % specializing calls to unify/2.
    %
:- pred add_lazily_generated_unify_pred(type_ctor::in, pred_id::out,
    module_info::in, module_info::out) is det.

    % add_lazily_generated_compare_pred_decl(TypeCtor, ComparePredId_for_Type,
    %   !ModuleInfo):
    %
    % Add declarations, but not clauses, for a compare or index predicate.
    %
:- pred add_lazily_generated_compare_pred_decl(type_ctor::in, pred_id::out,
    module_info::in, module_info::out) is det.

    % Do mode analysis of the queued procedures. If the first argument is
    % `unique_mode_check', then also go on and do full determinism analysis
    % and unique mode analysis on them as well. The pred_table arguments
    % are used to store copies of the procedure bodies before unique mode
    % analysis, so that we can restore them before doing the next analysis
    % pass.
    %
:- pred modecheck_queued_procs(how_to_check_goal::in,
    pred_table::in, pred_table::out, module_info::in, module_info::out,
    bool::out, io::di, io::uo) is det.

    % Given the type and mode of a unification, look up the mode number
    % for the unification proc.
    %
:- pred lookup_mode_num(module_info::in, type_ctor::in, uni_mode::in,
    determinism::in, proc_id::out) is det.

    % Generate the clauses for one of the compiler-generated special predicates
    % (compare/3, index/3, unify/2, etc.)
    %
:- pred generate_clause_info(special_pred_id::in, mer_type::in,
    hlds_type_body::in, prog_context::in, module_info::in, clauses_info::out)
    is det.

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- implementation.

:- import_module check_hlds.clause_to_proc.
:- import_module check_hlds.cse_detection.
:- import_module check_hlds.det_analysis.
:- import_module check_hlds.inst_match.
:- import_module check_hlds.mode_util.
:- import_module check_hlds.modes.
:- import_module check_hlds.polymorphism.
:- import_module check_hlds.post_typecheck.
:- import_module check_hlds.switch_detection.
:- import_module check_hlds.type_util.
:- import_module check_hlds.unique_modes.
:- import_module hlds.goal_util.
:- import_module hlds.hlds_args.
:- import_module hlds.hlds_out.
:- import_module hlds.hlds_rtti.
:- import_module hlds.instmap.
:- import_module hlds.make_hlds.
:- import_module hlds.quantification.
:- import_module hlds.special_pred.
:- import_module libs.
:- import_module libs.compiler_util.
:- import_module libs.globals.
:- import_module libs.options.
:- import_module mdbcomp.prim_data.
:- import_module parse_tree.error_util.
:- import_module parse_tree.prog_mode.
:- import_module parse_tree.prog_type.
:- import_module parse_tree.prog_util.
:- import_module recompilation.

:- import_module int.
:- import_module map.
:- import_module queue.
:- import_module set.
:- import_module string.
:- import_module svmap.
:- import_module term.
:- import_module varset.

%-----------------------------------------------------------------------------%

    % We keep track of all the complicated unification procs we need
    % by storing them in the proc_requests structure.
    % For each unify_proc_id (i.e. type & mode), we store the proc_id
    % (mode number) of the unification procedure which corresponds to
    % that mode.
    %
:- type unify_req_map == map(unify_proc_id, proc_id).

:- type req_queue == queue(pred_proc_id).

:- type proc_requests
    --->    proc_requests(
                unify_req_map   :: unify_req_map,
                                % The assignment of proc_id numbers to
                                % unify_proc_ids.
                req_queue       :: req_queue
                                % The queue of procs we still to generate code
                                % for.
            ).

%-----------------------------------------------------------------------------%

init_requests(Requests) :-
    map.init(UnifyReqMap),
    queue.init(ReqQueue),
    Requests = proc_requests(UnifyReqMap, ReqQueue).

%-----------------------------------------------------------------------------%

    % Boring access predicates

:- pred get_unify_req_map(proc_requests::in, unify_req_map::out) is det.
:- pred get_req_queue(proc_requests::in, req_queue::out) is det.
:- pred set_unify_req_map(unify_req_map::in,
    proc_requests::in, proc_requests::out) is det.
:- pred set_req_queue(req_queue::in,
    proc_requests::in, proc_requests::out) is det.

get_unify_req_map(PR, PR ^ unify_req_map).
get_req_queue(PR, PR ^ req_queue).
set_unify_req_map(UnifyReqMap, PR, PR ^ unify_req_map := UnifyReqMap).
set_req_queue(ReqQueue, PR, PR ^ req_queue := ReqQueue).

%-----------------------------------------------------------------------------%

lookup_mode_num(ModuleInfo, TypeCtor, UniMode, Det, Num) :-
    ( search_mode_num(ModuleInfo, TypeCtor, UniMode, Det, Num1) ->
        Num = Num1
    ;
        unexpected(this_file, "search_num failed")
    ).

:- pred search_mode_num(module_info::in, type_ctor::in, uni_mode::in,
    determinism::in, proc_id::out) is semidet.

    % Given the type, mode, and determinism of a unification, look up the
    % mode number for the unification proc.
    % We handle semidet unifications with mode (in, in) specially - they
    % are always mode zero.  Similarly for unifications of `any' insts.
    % (It should be safe to use the `in, in' mode for any insts, since
    % we assume that `ground' and `any' have the same representation.)
    % For unreachable unifications, we also use mode zero.
    %
search_mode_num(ModuleInfo, TypeCtor, UniMode, Determinism, ProcId) :-
    UniMode = (XInitial - YInitial -> _Final),
    (
        Determinism = detism_semi,
        inst_is_ground_or_any(ModuleInfo, XInitial),
        inst_is_ground_or_any(ModuleInfo, YInitial)
    ->
        hlds_pred.in_in_unification_proc_id(ProcId)
    ;
        XInitial = not_reached
    ->
        hlds_pred.in_in_unification_proc_id(ProcId)
    ;
        YInitial = not_reached
    ->
        hlds_pred.in_in_unification_proc_id(ProcId)
    ;
        module_info_get_proc_requests(ModuleInfo, Requests),
        get_unify_req_map(Requests, UnifyReqMap),
        map.search(UnifyReqMap, TypeCtor - UniMode, ProcId)
    ).

%-----------------------------------------------------------------------------%

request_unify(UnifyId, InstVarSet, Determinism, Context, !ModuleInfo) :-
    UnifyId = TypeCtor - UnifyMode,

    % Generating a unification procedure for a type uses its body.
    module_info_get_maybe_recompilation_info(!.ModuleInfo, MaybeRecompInfo0),
    (
        MaybeRecompInfo0 = yes(RecompInfo0),
        TypeCtorItem = type_ctor_to_item_name(TypeCtor),
        recompilation.record_used_item(type_body_item,
            TypeCtorItem, TypeCtorItem, RecompInfo0, RecompInfo),
        module_info_set_maybe_recompilation_info(yes(RecompInfo), !ModuleInfo)
    ;
        MaybeRecompInfo0 = no
    ),

    % Check if this unification has already been requested, or
    % if the proc is hand defined.
    (
        (
            search_mode_num(!.ModuleInfo, TypeCtor, UnifyMode, Determinism, _)
        ;
            module_info_get_type_table(!.ModuleInfo, TypeTable),
            map.search(TypeTable, TypeCtor, TypeDefn),
            hlds_data.get_type_defn_body(TypeDefn, TypeBody),
            (
                TypeCtor = type_ctor(TypeName, _TypeArity),
                TypeName = qualified(TypeModuleName, _),
                module_info_get_name(!.ModuleInfo, ModuleName),
                ModuleName = TypeModuleName,
                TypeBody = hlds_abstract_type(_)
            ;
                type_ctor_has_hand_defined_rtti(TypeCtor, TypeBody)
            )
        )
    ->
        true
    ;
        % Lookup the pred_id for the unification procedure that we are
        % going to generate.
        module_info_get_special_pred_map(!.ModuleInfo, SpecialPredMap),
        ( map.search(SpecialPredMap, spec_pred_unify - TypeCtor, PredId0) ->
            PredId = PredId0
        ;
            % We generate unification predicates for most imported types
            % lazily, so add the declarations and clauses now.
            add_lazily_generated_unify_pred(TypeCtor, PredId, !ModuleInfo)
        ),

        % Convert from `uni_mode' to `list(mer_mode)'.
        UnifyMode = ((X_Initial - Y_Initial) -> (X_Final - Y_Final)),
        ArgModes0 = [(X_Initial -> X_Final), (Y_Initial -> Y_Final)],

        % For polymorphic types, add extra modes for the type_infos.
        in_mode(InMode),
        TypeCtor = type_ctor(_, TypeArity),
        list.duplicate(TypeArity, InMode, TypeInfoModes),
        list.append(TypeInfoModes, ArgModes0, ArgModes),

        ArgLives = no,  % XXX ArgLives should be part of the UnifyId

        request_proc(PredId, ArgModes, InstVarSet, ArgLives, yes(Determinism),
            Context, ProcId, !ModuleInfo),

        % Save the proc_id for this unify_proc_id.
        module_info_get_proc_requests(!.ModuleInfo, Requests0),
        get_unify_req_map(Requests0, UnifyReqMap0),
        map.set(UnifyReqMap0, UnifyId, ProcId, UnifyReqMap),
        set_unify_req_map(UnifyReqMap, Requests0, Requests),
        module_info_set_proc_requests(Requests, !ModuleInfo)
    ).

request_proc(PredId, ArgModes, InstVarSet, ArgLives, MaybeDet, Context, ProcId,
        !ModuleInfo) :-
    some [!PredInfo, !ProcInfo, !PredMap, !ProcMap, !Goal] (
        % Create a new proc_info for this procedure.
        module_info_preds(!.ModuleInfo, !:PredMap),
        map.lookup(!.PredMap, PredId, !:PredInfo),
        list.length(ArgModes, Arity),
        DeclaredArgModes = no,
        add_new_proc(InstVarSet, Arity, ArgModes, DeclaredArgModes, ArgLives,
            MaybeDet, Context, address_is_not_taken, !PredInfo, ProcId),

        % Copy the clauses for the procedure from the pred_info
        % to the proc_info, and mark the procedure as one that
        % cannot be processed yet.
        pred_info_get_procedures(!.PredInfo, !:ProcMap),
        pred_info_get_clauses_info(!.PredInfo, ClausesInfo),
        map.lookup(!.ProcMap, ProcId, !:ProcInfo),
        proc_info_set_can_process(no, !ProcInfo),

        copy_clauses_to_proc(ProcId, ClausesInfo, !ProcInfo),

        proc_info_get_goal(!.ProcInfo, !:Goal),
        set_goal_contexts(Context, !Goal),
        
        % The X == Y pretest on unifications makes sense only for in-in
        % unifications, and if the initial insts are incompatible, then
        % casts in the pretest prevents mode analysis from discovering this
        % fact.
        (
            all [ArgMode] (
                list.member(ArgMode, ArgModes)
            =>
                mode_is_fully_input(!.ModuleInfo, ArgMode)
            ),
            \+ MaybeDet = yes(detism_failure)
        ->
            true
        ;
            !:Goal = maybe_strip_equality_pretest(!.Goal)
        ),
        proc_info_set_goal(!.Goal, !ProcInfo),

        svmap.det_update(ProcId, !.ProcInfo, !ProcMap),
        pred_info_set_procedures(!.ProcMap, !PredInfo),
        svmap.det_update(PredId, !.PredInfo, !PredMap),
        module_info_set_preds(!.PredMap, !ModuleInfo),

        % Insert the pred_proc_id into the request queue.
        module_info_get_proc_requests(!.ModuleInfo, Requests0),
        get_req_queue(Requests0, ReqQueue0),
        queue.put(ReqQueue0, proc(PredId, ProcId), ReqQueue),
        set_req_queue(ReqQueue, Requests0, Requests),
        module_info_set_proc_requests(Requests, !ModuleInfo)
    ).

%-----------------------------------------------------------------------------%

    % XXX these belong in modes.m

modecheck_queued_procs(HowToCheckGoal, !OldPredTable, !ModuleInfo, Changed,
        !IO) :-
    module_info_get_proc_requests(!.ModuleInfo, Requests0),
    get_req_queue(Requests0, RequestQueue0),
    ( queue.get(RequestQueue0, PredProcId, RequestQueue1) ->
        set_req_queue(RequestQueue1, Requests0, Requests1),
        module_info_set_proc_requests(Requests1, !ModuleInfo),

        % Check that the procedure is valid (i.e. type-correct), before
        % we attempt to do mode analysis on it. This check is necessary
        % to avoid internal errors caused by doing mode analysis on
        % type-incorrect code.
        % XXX inefficient! This is O(N*M).

        PredProcId = proc(PredId, _ProcId),
        module_info_predids(ValidPredIds, !ModuleInfo),
        ( list.member(PredId, ValidPredIds) ->
            queued_proc_progress_message(PredProcId, HowToCheckGoal,
                !.ModuleInfo, !IO),
            modecheck_queued_proc(HowToCheckGoal, PredProcId,
                !OldPredTable, !ModuleInfo, Changed1, !IO)
        ;
            Changed1 = no
        ),
        modecheck_queued_procs(HowToCheckGoal, !OldPredTable, !ModuleInfo,
            Changed2, !IO),
        bool.or(Changed1, Changed2, Changed)
    ;
        Changed = no
    ).

:- pred queued_proc_progress_message(pred_proc_id::in, how_to_check_goal::in,
    module_info::in, io::di, io::uo) is det.

queued_proc_progress_message(PredProcId, HowToCheckGoal, ModuleInfo, !IO) :-
    globals.io_lookup_bool_option(very_verbose, VeryVerbose, !IO),
    (
        VeryVerbose = yes,
        (
            HowToCheckGoal = check_modes,
            io.write_string("% Mode-analyzing ", !IO)
        ;
            HowToCheckGoal = check_unique_modes,
            io.write_string("% Analyzing modes, determinism, " ++
                "and unique-modes for\n% ", !IO)
        ),
        hlds_out.write_pred_proc_id(ModuleInfo, PredProcId, !IO),
        io.write_string("\n", !IO)
%       /*****
%       mode_list_get_initial_insts(Modes, ModuleInfo1,
%           InitialInsts),
%       io.write_string("% Initial insts: `", !IO),
%       varset.init(InstVarSet),
%       mercury_output_inst_list(InitialInsts, InstVarSet, !IO),
%       io.write_string("'\n", !IO)
%       *****/
    ;
        VeryVerbose = no
    ).

:- pred modecheck_queued_proc(how_to_check_goal::in, pred_proc_id::in,
    pred_table::in, pred_table::out, module_info::in, module_info::out,
    bool::out, io::di, io::uo) is det.

modecheck_queued_proc(HowToCheckGoal, PredProcId, !OldPredTable, !ModuleInfo,
        !:Changed, !IO) :-
    % Mark the procedure as ready to be processed.
    PredProcId = proc(PredId, ProcId),
    module_info_preds(!.ModuleInfo, Preds0),
    map.lookup(Preds0, PredId, PredInfo0),
    pred_info_get_procedures(PredInfo0, Procs0),
    map.lookup(Procs0, ProcId, ProcInfo0),
    proc_info_set_can_process(yes, ProcInfo0, ProcInfo1),
    map.det_update(Procs0, ProcId, ProcInfo1, Procs1),
    pred_info_set_procedures(Procs1, PredInfo0, PredInfo1),
    map.det_update(Preds0, PredId, PredInfo1, Preds1),
    module_info_set_preds(Preds1, !ModuleInfo),

    % Modecheck the procedure.
    modecheck_proc(ProcId, PredId, !ModuleInfo, ErrorSpecs, !:Changed, !IO),

    module_info_get_globals(!.ModuleInfo, Globals),
    write_error_specs(ErrorSpecs, Globals, 0, _NumWarnings, 0, NumErrors, !IO),
    module_info_incr_num_errors(NumErrors, !ModuleInfo),
    ( NumErrors > 0 ->
        module_info_remove_predid(PredId, !ModuleInfo)
    ;
        (
            HowToCheckGoal = check_unique_modes,
            detect_switches_in_proc(ProcId, PredId, !ModuleInfo),
            detect_cse_in_proc(ProcId, PredId, !ModuleInfo, !IO),
            determinism_check_proc(ProcId, PredId, !ModuleInfo, Specs),
            (
                Specs = []
            ;
                Specs = [_ | _],
                unexpected(this_file, "modecheck_queued_proc: found error")
            ),
            save_proc_info(ProcId, PredId, !.ModuleInfo, !OldPredTable),
            unique_modes_check_proc(ProcId, PredId, !ModuleInfo, NewChanged,
                !IO),
            bool.or(NewChanged, !Changed)
        ;
            HowToCheckGoal = check_modes
        )
    ).

    % Save a copy of the proc info for the specified procedure in
    % !OldProcTable.
    %
:- pred save_proc_info(proc_id::in, pred_id::in, module_info::in,
    pred_table::in, pred_table::out) is det.

save_proc_info(ProcId, PredId, ModuleInfo, !OldPredTable) :-
    module_info_pred_proc_info(ModuleInfo, PredId, ProcId,
        _PredInfo, ProcInfo),
    map.lookup(!.OldPredTable, PredId, OldPredInfo0),
    pred_info_get_procedures(OldPredInfo0, OldProcTable0),
    map.set(OldProcTable0, ProcId, ProcInfo, OldProcTable),
    pred_info_set_procedures(OldProcTable, OldPredInfo0, OldPredInfo),
    map.det_update(!.OldPredTable, PredId, OldPredInfo, !:OldPredTable).

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

add_lazily_generated_unify_pred(TypeCtor, PredId, !ModuleInfo) :-
    ( type_ctor_is_tuple(TypeCtor) ->
        TypeCtor = type_ctor(_, TupleArity),

        % Build a hlds_type_body for the tuple constructor, which will
        % be used by generate_clause_info.
        varset.init(TVarSet0),
        varset.new_vars(TVarSet0, TupleArity, TupleArgTVars, TVarSet),
        prog_type.var_list_to_type_list(map.init, TupleArgTVars,
            TupleArgTypes),

        % Tuple constructors can't be existentially quantified.
        ExistQVars = [],
        ClassConstraints = [],

        MakeUnamedField = (func(ArgType) = ctor_arg(no, ArgType, Context)),
        CtorArgs = list.map(MakeUnamedField, TupleArgTypes),

        Ctor = ctor(ExistQVars,
                ClassConstraints, CtorSymName, CtorArgs, Context),

        CtorSymName = unqualified("{}"),
        ConsId = cons(CtorSymName, TupleArity),
        map.from_assoc_list([ConsId - single_functor_tag], ConsTagValues),
        UnifyPred = no,
        IsEnum = not_enum_or_dummy,
        IsForeign = no,
        ReservedTag = no,
        IsForeign = no,
        TypeBody = hlds_du_type([Ctor], ConsTagValues, IsEnum, UnifyPred,
            ReservedTag, IsForeign),
        construct_type(TypeCtor, TupleArgTypes, Type),

        term.context_init(Context)
    ;
        collect_type_defn(!.ModuleInfo, TypeCtor, Type, TVarSet, TypeBody,
            Context)
    ),
    (
        can_generate_special_pred_clauses_for_type(!.ModuleInfo,
            TypeCtor, TypeBody)
    ->
        % If the unification predicate has another status it should
        % already have been generated.
        UnifyPredStatus = status_pseudo_imported,
        Item = clauses
    ;
        UnifyPredStatus = status_imported(import_locn_implementation),
        Item = declaration
    ),
    add_lazily_generated_special_pred(spec_pred_unify, Item, TVarSet, Type,
        TypeCtor, TypeBody, Context, UnifyPredStatus, PredId, !ModuleInfo).

add_lazily_generated_compare_pred_decl(TypeCtor, PredId, !ModuleInfo) :-
    collect_type_defn(!.ModuleInfo, TypeCtor, Type, TVarSet, TypeBody,
        Context),

    % If the compare predicate has another status, it should already have been
    % generated.
    ImportStatus = status_imported(import_locn_implementation),
    add_lazily_generated_special_pred(spec_pred_compare, declaration, TVarSet,
        Type, TypeCtor, TypeBody, Context, ImportStatus, PredId, !ModuleInfo).

:- pred add_lazily_generated_special_pred(special_pred_id::in,
    unify_pred_item::in, tvarset::in, mer_type::in, type_ctor::in,
    hlds_type_body::in, context::in, import_status::in, pred_id::out,
    module_info::in, module_info::out) is det.

add_lazily_generated_special_pred(SpecialId, Item, TVarSet, Type, TypeCtor,
        TypeBody, Context, PredStatus, PredId, !ModuleInfo) :-
    % Add the declaration and maybe clauses.
    (
        Item = clauses,
        add_special_pred_for_real(SpecialId, TVarSet, Type, TypeCtor,
            TypeBody, Context, PredStatus, !ModuleInfo)
    ;
        Item = declaration,
        add_special_pred_decl_for_real(SpecialId, TVarSet, Type, TypeCtor,
            Context, PredStatus, !ModuleInfo)
    ),

    module_info_get_special_pred_map(!.ModuleInfo, SpecialPredMap),
    map.lookup(SpecialPredMap, SpecialId - TypeCtor, PredId),
    module_info_pred_info(!.ModuleInfo, PredId, PredInfo0),

    % The clauses are generated with all type information computed,
    % so just go on to post_typecheck.
    (
        Item = clauses,
        post_typecheck_finish_pred_no_io(!.ModuleInfo,
            ErrorProcs, PredInfo0, PredInfo)
    ;
        Item = declaration,
        post_typecheck_finish_imported_pred_no_io(!.ModuleInfo,
            ErrorProcs, PredInfo0, PredInfo)
    ),
    expect(unify(ErrorProcs, []), this_file,
        "add_lazily_generated_special_pred: error in post_typecheck"),

    % Call polymorphism to introduce type_info arguments
    % for polymorphic types.
    module_info_set_pred_info(PredId, PredInfo, !ModuleInfo),

    % Note that this will not work if the generated clauses call a polymorphic
    % predicate which requires type_infos to be added. Such calls can be
    % generated by generate_clause_info, but unification predicates which
    % contain such calls are never generated lazily.
    polymorphism_process_generated_pred(PredId, !ModuleInfo).

:- type unify_pred_item
    --->    declaration
    ;       clauses.

:- pred collect_type_defn(module_info::in, type_ctor::in, mer_type::out,
    tvarset::out, hlds_type_body::out, prog_context::out) is det.

collect_type_defn(ModuleInfo, TypeCtor, Type, TVarSet, TypeBody, Context) :-
    module_info_get_type_table(ModuleInfo, Types),
    map.lookup(Types, TypeCtor, TypeDefn),
    hlds_data.get_type_defn_tvarset(TypeDefn, TVarSet),
    hlds_data.get_type_defn_tparams(TypeDefn, TypeParams),
    hlds_data.get_type_defn_kind_map(TypeDefn, KindMap),
    hlds_data.get_type_defn_body(TypeDefn, TypeBody),
    hlds_data.get_type_defn_status(TypeDefn, TypeStatus),
    hlds_data.get_type_defn_context(TypeDefn, Context),

    expect(special_pred_is_generated_lazily(ModuleInfo, TypeCtor, TypeBody,
        TypeStatus), this_file, "add_lazily_generated_unify_pred"),
    prog_type.var_list_to_type_list(KindMap, TypeParams, TypeArgs),
    construct_type(TypeCtor, TypeArgs, Type).

%-----------------------------------------------------------------------------%

generate_clause_info(SpecialPredId, Type, TypeBody, Context, ModuleInfo,
        ClauseInfo) :-
    special_pred_interface(SpecialPredId, Type, ArgTypes, _Modes, _Det),
    some [!Info] (
        info_init(ModuleInfo, !:Info),
        make_fresh_named_vars_from_types(ArgTypes, "HeadVar__", 1, Args,
            !Info),
        (
            SpecialPredId = spec_pred_unify,
            ( Args = [X, Y] ->
                generate_unify_proc_body(Type, TypeBody, X, Y,
                    Context, Clause, !Info)
            ;
                unexpected(this_file, "generate_clause_info: bad unify args")
            )
        ;
            SpecialPredId = spec_pred_index,
            ( Args = [X, Index] ->
                generate_index_proc_body(TypeBody, X, Index,
                    Context, Clause, !Info)
            ;
                unexpected(this_file, "generate_clause_info: bad index args")
            )
        ;
            SpecialPredId = spec_pred_compare,
            ( Args = [Res, X, Y] ->
                generate_compare_proc_body(Type, TypeBody, Res, X, Y,
                    Context, Clause, !Info)
            ;
                unexpected(this_file, "generate_clause_info: bad compare args")
            )
        ;
            SpecialPredId = spec_pred_init,
            ( Args = [X] ->
                generate_initialise_proc_body(Type, TypeBody, X,
                    Context, Clause, !Info)
            ;
                unexpected(this_file, "generate_clause_info: bad init args")
            )
        ),
        info_extract(!.Info, VarSet, Types)
    ),
    map.init(TVarNameMap),
    ArgVec = proc_arg_vector_init(pf_predicate, Args),
    set_clause_list([Clause], ClausesRep),
    rtti_varmaps_init(RttiVarMaps),
    HasForeignClauses = yes,
    ClauseInfo = clauses_info(VarSet, Types, TVarNameMap, Types, ArgVec,
        ClausesRep, RttiVarMaps, HasForeignClauses).

:- pred generate_initialise_proc_body(mer_type::in, hlds_type_body::in,
    prog_var::in, prog_context::in, clause::out,
    unify_proc_info::in, unify_proc_info::out) is det.

generate_initialise_proc_body(_Type, TypeBody, X, Context, Clause, !Info) :-
    info_get_module_info(!.Info, ModuleInfo),
    (
        type_util.type_body_has_solver_type_details(ModuleInfo,
            TypeBody, SolverTypeDetails)
    ->
        % Just generate a call to the specified predicate, which is
        % the user-defined equality pred for this type.
        % (The pred_id and proc_id will be figured out by type checking
        % and mode analysis.)

        InitPred = SolverTypeDetails ^ init_pred,
        PredId = invalid_pred_id,
        ModeId = invalid_proc_id,
        Call = plain_call(PredId, ModeId, [X], not_builtin, no, InitPred),
        goal_info_init(Context, GoalInfo),
        Goal = hlds_goal(Call, GoalInfo),
        quantify_clause_body([X], Goal, Context, Clause, !Info)
    ;
        % If this is an equivalence type then we just generate a call
        % to the initialisation pred of the type on the RHS of the equivalence
        % and cast the result back to the type on the LHS of the equivalence.
        TypeBody = hlds_eqv_type(EqvType)
    ->
        goal_info_init(Context, GoalInfo),
        make_fresh_named_var_from_type(EqvType, "PreCast_HeadVar", 1, X0,
            !Info),
        type_to_ctor_det(EqvType, TypeCtor),
        PredName = special_pred.special_pred_name(spec_pred_init, TypeCtor),
        hlds_module.module_info_get_name(ModuleInfo, ModuleName),
        TypeCtor = type_ctor(TypeSymName, _TypeArity),
        sym_name_get_module_name(TypeSymName, ModuleName, TypeModuleName),
        InitPred = qualified(TypeModuleName, PredName),
        PredId   = invalid_pred_id,
        ModeId   = invalid_proc_id,
        InitCall = plain_call(PredId, ModeId, [X0], not_builtin, no, InitPred),
        InitGoal = hlds_goal(InitCall, GoalInfo),

        Any = any(shared),
        generate_cast_with_insts(equiv_type_cast, X0, X, Any, Any, Context,
            CastGoal),
        Goal = hlds_goal(conj(plain_conj, [InitGoal, CastGoal]), GoalInfo),
        quantify_clause_body([X], Goal, Context, Clause, !Info)
    ;
        unexpected(this_file, "generate_initialise_proc_body: " ++
            "trying to create initialisation proc for type " ++
            "that has no solver_type_details")
    ).

:- pred generate_unify_proc_body(mer_type::in, hlds_type_body::in,
    prog_var::in, prog_var::in, prog_context::in, clause::out,
    unify_proc_info::in, unify_proc_info::out) is det.

generate_unify_proc_body(Type, TypeBody, X, Y, Context, Clause, !Info) :-
    info_get_module_info(!.Info, ModuleInfo),
    (
        type_to_ctor_det(Type, TypeCtor),
        is_builtin_dummy_argument_type(TypeCtor)
    ->
        Goal = true_goal_with_context(Context),
        quantify_clause_body([X, Y], Goal, Context, Clause, !Info)
    ;
        type_body_has_user_defined_equality_pred(ModuleInfo,
            TypeBody, UserEqComp)
    ->
        generate_user_defined_unify_proc_body(UserEqComp, X, Y, Context,
            Clause, !Info)
    ;
        (
            TypeBody = hlds_du_type(Ctors, _, EnumDummy, _, _, _),
            (
                EnumDummy = is_enum,
                make_simple_test(X, Y, umc_explicit, [], Goal),
                quantify_clause_body([X, Y], Goal, Context, Clause, !Info)
            ;
                EnumDummy = is_dummy,
                Goal = true_goal_with_context(Context),
                quantify_clause_body([X, Y], Goal, Context, Clause, !Info)
            ;
                EnumDummy = not_enum_or_dummy,
                generate_du_unify_proc_body(Ctors, X, Y, Context, Clause,
                    !Info)
            )
        ;
            TypeBody = hlds_eqv_type(EqvType),
            ( is_dummy_argument_type(ModuleInfo, EqvType) ->
                % Treat this type as if it were a dummy type itself.
                Goal = true_goal_with_context(Context),
                quantify_clause_body([X, Y], Goal, Context, Clause, !Info)
            ;
                generate_eqv_unify_proc_body(EqvType, X, Y, Context,
                    Clause, !Info)
            )
        ;
            TypeBody = hlds_solver_type(_, _),
            % If no user defined equality predicate is given,
            % we treat solver types as if they were an equivalent
            % to the builtin type c_pointer.
            generate_eqv_unify_proc_body(c_pointer_type, X, Y, Context,
                Clause, !Info)
        ;
            TypeBody = hlds_foreign_type(_),
            % If no user defined equality predicate is given,
            % we treat foreign_type as if they were an equivalent
            % to the builtin type c_pointer.
            generate_eqv_unify_proc_body(c_pointer_type, X, Y, Context,
                Clause, !Info)
        ;
            TypeBody = hlds_abstract_type(_),
            ( compiler_generated_rtti_for_builtins(ModuleInfo) ->
                TypeCategory = classify_type(ModuleInfo, Type),
                generate_builtin_unify(TypeCategory, X, Y, Context, Clause,
                    !Info)
            ;
                unexpected(this_file,
                    "trying to create unify proc for abstract type")
            )
        )
    ).

:- pred generate_builtin_unify((type_category)::in, prog_var::in, prog_var::in,
    prog_context::in, clause::out,
    unify_proc_info::in, unify_proc_info::out) is det.

generate_builtin_unify(TypeCategory, X, Y, Context, Clause, !Info) :-
    ArgVars = [X, Y],

    % can_generate_special_pred_clauses_for_type ensures the unexpected
    % cases can never occur.
    (
        TypeCategory = type_cat_int,
        Name = "builtin_unify_int"
    ;
        TypeCategory = type_cat_char,
        Name = "builtin_unify_character"
    ;
        TypeCategory = type_cat_string,
        Name = "builtin_unify_string"
    ;
        TypeCategory = type_cat_float,
        Name = "builtin_unify_float"
    ;
        TypeCategory = type_cat_higher_order,
        Name = "builtin_unify_pred"
    ;
        TypeCategory = type_cat_tuple,
        unexpected(this_file, "generate_builtin_unify: tuple")
    ;
        TypeCategory = type_cat_enum,
        unexpected(this_file, "generate_builtin_unify: enum")
    ;
        TypeCategory = type_cat_dummy,
        unexpected(this_file, "generate_builtin_unify: enum")
    ;
        TypeCategory = type_cat_variable,
        unexpected(this_file, "generate_builtin_unify: variable type")
    ;
        TypeCategory = type_cat_type_info,
        unexpected(this_file, "generate_builtin_unify: type_info type")
    ;
        TypeCategory = type_cat_type_ctor_info,
        unexpected(this_file, "generate_builtin_unify: type_ctor_info type")
    ;
        TypeCategory = type_cat_typeclass_info,
        unexpected(this_file, "generate_builtin_unify: typeclass_info type")
    ;
        TypeCategory = type_cat_base_typeclass_info,
        unexpected(this_file,
            "generate_builtin_unify: base_typeclass_info type")
    ;
        TypeCategory = type_cat_void,
        unexpected(this_file, "generate_builtin_unify: void type")
    ;
        TypeCategory = type_cat_user_ctor,
        unexpected(this_file, "generate_builtin_unify: user_ctor type")
    ),
    build_call(Name, ArgVars, Context, UnifyGoal, !Info),
    quantify_clause_body(ArgVars, UnifyGoal, Context, Clause, !Info).

:- pred generate_user_defined_unify_proc_body(unify_compare::in,
    prog_var::in, prog_var::in, prog_context::in, clause::out,
    unify_proc_info::in, unify_proc_info::out) is det.

generate_user_defined_unify_proc_body(UserEqCompare, _, _, _, _, !Info) :-
    UserEqCompare = abstract_noncanonical_type(_IsSolverType),
    unexpected(this_file,
        "trying to create unify proc for abstract noncanonical type").
generate_user_defined_unify_proc_body(UserEqCompare, X, Y, Context, Clause,
        !Info) :-
    UserEqCompare = unify_compare(MaybeUnify, MaybeCompare),
    ( MaybeUnify = yes(UnifyPredName) ->
        % Just generate a call to the specified predicate, which is the
        % user-defined equality pred for this type. (The pred_id and proc_id
        % will be figured out by type checking and mode analysis.)

        PredId = invalid_pred_id,
        ModeId = invalid_proc_id,
        Call = plain_call(PredId, ModeId, [X, Y], not_builtin, no,
            UnifyPredName),
        goal_info_init(Context, GoalInfo),
        Goal0 = hlds_goal(Call, GoalInfo)
    ; MaybeCompare = yes(ComparePredName) ->
        % Just generate a call to the specified predicate, which is the
        % user-defined comparison pred for this type, and unify the result
        % with `='. (The pred_id and proc_id will be figured out by type
        % checking and mode analysis.)

        info_new_var(comparison_result_type, ResultVar, !Info),
        PredId = invalid_pred_id,
        ModeId = invalid_proc_id,
        Call = plain_call(PredId, ModeId, [ResultVar, X, Y], not_builtin, no,
            ComparePredName),
        goal_info_init(Context, GoalInfo),
        CallGoal = hlds_goal(Call, GoalInfo),

        create_pure_atomic_complicated_unification(ResultVar, equal_functor,
            Context, umc_explicit, [], UnifyGoal),
        Goal0 = hlds_goal(conj(plain_conj, [CallGoal, UnifyGoal]), GoalInfo)
    ;
        unexpected(this_file, "generate_user_defined_unify_proc_body")
    ),
    maybe_wrap_with_pretest_equality(Context, X, Y, no, Goal0, Goal, !Info),
    quantify_clause_body([X, Y], Goal, Context, Clause, !Info).

:- pred generate_eqv_unify_proc_body(mer_type::in, prog_var::in,
    prog_var::in, prog_context::in, clause::out,
    unify_proc_info::in, unify_proc_info::out) is det.

generate_eqv_unify_proc_body(EqvType, X, Y, Context, Clause, !Info) :-
    % We should check whether EqvType is a type variable,
    % an abstract type or a concrete type.
    % If it is type variable, then we should generate the same code
    % we generate now. If it is an abstract type, we should call
    % its unification procedure directly; if it is a concrete type,
    % we should generate the body of its unification procedure
    % inline here.
    make_fresh_named_var_from_type(EqvType, "Cast_HeadVar", 1, CastX,
        !Info),
    make_fresh_named_var_from_type(EqvType, "Cast_HeadVar", 2, CastY,
        !Info),
    generate_cast(equiv_type_cast, X, CastX, Context, CastXGoal),
    generate_cast(equiv_type_cast, Y, CastY, Context, CastYGoal),
    create_pure_atomic_complicated_unification(CastX, rhs_var(CastY),
        Context, umc_explicit, [], UnifyGoal),

    goal_info_init(GoalInfo0),
    goal_info_set_context(Context, GoalInfo0, GoalInfo),
    conj_list_to_goal([CastXGoal, CastYGoal, UnifyGoal], GoalInfo, Goal),
    quantify_clause_body([X, Y], Goal, Context, Clause, !Info).

    % This predicate generates the bodies of index predicates for the
    % types that need index predicates.
    %
    % add_special_preds in make_hlds.m should include index in the list
    % of special preds to define only for the kinds of types which do not
    % lead this predicate to abort.
    %
:- pred generate_index_proc_body(hlds_type_body::in,
    prog_var::in, prog_var::in, prog_context::in, clause::out,
    unify_proc_info::in, unify_proc_info::out) is det.

generate_index_proc_body(TypeBody, X, Index, Context, Clause, !Info) :-
    info_get_module_info(!.Info, ModuleInfo),
    ( type_body_has_user_defined_equality_pred(ModuleInfo, TypeBody, _) ->
        % For non-canonical types, the generated comparison predicate either
        % calls a user-specified comparison predicate or returns an error,
        % and does not call the type's index predicate, so do not generate
        % an index predicate for such types.
        unexpected(this_file,
            "trying to create index proc for non-canonical type")
    ;
        (
            TypeBody = hlds_du_type(Ctors, _, EnumDummy, _, _, _),
            (
                % For enum types, the generated comparison predicate performs
                % an integer comparison, and does not call the type's index
                % predicate, so do not generate an index predicate for such
                % types.
                EnumDummy = is_enum,
                unexpected(this_file,
                    "trying to create index proc for enum type")
            ;
                EnumDummy = is_dummy,
                unexpected(this_file,
                    "trying to create index proc for dummy type")
            ;
                EnumDummy = not_enum_or_dummy,
                generate_du_index_proc_body(Ctors, X, Index, Context,
                    Clause, !Info)
            )
        ;
            TypeBody = hlds_eqv_type(_Type),
            % The only place that the index predicate for a type can ever
            % be called from is the compare predicate for that type. However,
            % the compare predicate for an equivalence type never calls
            % the index predicate for that type; it calls the compare predicate
            % of the expanded type instead. Therefore the clause body we are
            % generating should never be invoked.
            unexpected(this_file, "trying to create index proc for eqv type")
        ;
            TypeBody = hlds_foreign_type(_),
            unexpected(this_file,
                "trying to create index proc for a foreign type")
        ;
            TypeBody = hlds_solver_type(_, _),
            unexpected(this_file,
                "trying to create index proc for a solver type")
        ;
            TypeBody = hlds_abstract_type(_),
            unexpected(this_file,
                "trying to create index proc for abstract type")
        )
    ).

:- pred generate_compare_proc_body(mer_type::in, hlds_type_body::in,
    prog_var::in, prog_var::in, prog_var::in, prog_context::in,
    clause::out, unify_proc_info::in, unify_proc_info::out) is det.

generate_compare_proc_body(Type, TypeBody, Res, X, Y, Context, Clause,
        !Info) :-
    info_get_module_info(!.Info, ModuleInfo),
    (
        type_to_ctor_det(Type, TypeCtor),
        is_builtin_dummy_argument_type(TypeCtor)
    ->
        generate_dummy_compare_proc_body(Res, X, Y, Context, Clause, !Info)
    ;
        type_body_has_user_defined_equality_pred(ModuleInfo, TypeBody,
            UserEqComp)
    ->
        generate_user_defined_compare_proc_body(UserEqComp,
            Res, X, Y, Context, Clause, !Info)
    ;
        (
            TypeBody = hlds_du_type(Ctors, _, EnumDummy, _, _, _),
            (
                EnumDummy = is_enum,
                generate_enum_compare_proc_body(Res, X, Y, Context, Clause,
                    !Info)
            ;
                EnumDummy = is_dummy,
                generate_dummy_compare_proc_body(Res, X, Y, Context, Clause,
                    !Info)
            ;
                EnumDummy = not_enum_or_dummy,
                generate_du_compare_proc_body(Type, Ctors, Res, X, Y,
                    Context, Clause, !Info)
            )
        ;
            TypeBody = hlds_eqv_type(EqvType),
            ( is_dummy_argument_type(ModuleInfo, EqvType) ->
                % Treat this type as if it were a dummy type itself.
                generate_dummy_compare_proc_body(Res, X, Y, Context, Clause,
                    !Info)
            ;
                generate_eqv_compare_proc_body(EqvType, Res, X, Y,
                    Context, Clause, !Info)
            )
        ;
            TypeBody = hlds_foreign_type(_),
            generate_eqv_compare_proc_body(c_pointer_type, Res, X, Y,
                Context, Clause, !Info)
        ;
            TypeBody = hlds_solver_type(_, _),
            generate_eqv_compare_proc_body(c_pointer_type, Res, X, Y,
                Context, Clause, !Info)
        ;
            TypeBody = hlds_abstract_type(_),
            ( compiler_generated_rtti_for_builtins(ModuleInfo) ->
                TypeCategory = classify_type(ModuleInfo, Type),
                generate_builtin_compare(TypeCategory, Res, X, Y,
                    Context, Clause, !Info)
            ;
                unexpected(this_file,
                    "trying to create compare proc for abstract type")
            )
        )
    ).

:- pred generate_enum_compare_proc_body(prog_var::in,
    prog_var::in, prog_var::in, prog_context::in, clause::out,
    unify_proc_info::in, unify_proc_info::out) is det.

generate_enum_compare_proc_body(Res, X, Y, Context, Clause, !Info) :-
    IntType = int_type,
    make_fresh_named_var_from_type(IntType, "Cast_HeadVar", 1, CastX, !Info),
    make_fresh_named_var_from_type(IntType, "Cast_HeadVar", 2, CastY, !Info),
    generate_cast(unsafe_type_cast, X, CastX, Context, CastXGoal),
    generate_cast(unsafe_type_cast, Y, CastY, Context, CastYGoal),
    build_call("builtin_compare_int", [Res, CastX, CastY], Context,
        CompareGoal, !Info),

    goal_info_init(GoalInfo0),
    goal_info_set_context(Context, GoalInfo0, GoalInfo),
    conj_list_to_goal([CastXGoal, CastYGoal, CompareGoal], GoalInfo, Goal),
    quantify_clause_body([Res, X, Y], Goal, Context, Clause, !Info).

:- pred generate_dummy_compare_proc_body(prog_var::in, prog_var::in,
    prog_var::in, prog_context::in, clause::out,
    unify_proc_info::in, unify_proc_info::out) is det.

generate_dummy_compare_proc_body(Res, X, Y, Context, Clause, !Info) :-
    generate_return_equal(Res, Context, Goal),
    % XXX check me
    quantify_clause_body([Res, X, Y], Goal, Context, Clause, !Info).

:- pred generate_builtin_compare(type_category::in,
    prog_var::in, prog_var::in, prog_var::in, prog_context::in, clause::out,
    unify_proc_info::in, unify_proc_info::out) is det.

generate_builtin_compare(TypeCategory, Res, X, Y, Context, Clause, !Info) :-
    ArgVars = [Res, X, Y],

    % can_generate_special_pred_clauses_for_type ensures the unexpected
    % cases can never occur.
    (
        TypeCategory = type_cat_int,
        Name = "builtin_compare_int"
    ;
        TypeCategory = type_cat_char,
        Name = "builtin_compare_character"
    ;
        TypeCategory = type_cat_string,
        Name = "builtin_compare_string"
    ;
        TypeCategory = type_cat_float,
        Name = "builtin_compare_float"
    ;
        TypeCategory = type_cat_higher_order,
        Name = "builtin_compare_pred"
    ;
        TypeCategory = type_cat_tuple,
        unexpected(this_file, "generate_builtin_compare: tuple type")
    ;
        TypeCategory = type_cat_enum,
        unexpected(this_file, "generate_builtin_compare: enum type")
    ;
        TypeCategory = type_cat_dummy,
        unexpected(this_file, "generate_builtin_compare: dummy type")
    ;
        TypeCategory = type_cat_variable,
        unexpected(this_file, "generate_builtin_compare: variable type")
    ;
        TypeCategory = type_cat_type_info,
        unexpected(this_file, "generate_builtin_compare: type_info type")
    ;
        TypeCategory = type_cat_type_ctor_info,
        unexpected(this_file, "generate_builtin_compare: type_ctor_info type")
    ;
        TypeCategory = type_cat_typeclass_info,
        unexpected(this_file, "generate_builtin_compare: typeclass_info type")
    ;
        TypeCategory = type_cat_base_typeclass_info,
        unexpected(this_file,
            "generate_builtin_compare: base_typeclass_info type")
    ;
        TypeCategory = type_cat_void,
        unexpected(this_file, "generate_builtin_compare: void type")
    ;
        TypeCategory = type_cat_user_ctor,
        unexpected(this_file, "generate_builtin_compare: user_ctor type")
    ),
    build_call(Name, ArgVars, Context, CompareGoal, !Info),
    quantify_clause_body(ArgVars, CompareGoal, Context, Clause, !Info).

:- pred generate_user_defined_compare_proc_body(unify_compare::in,
    prog_var::in, prog_var::in, prog_var::in, prog_context::in, clause::out,
    unify_proc_info::in, unify_proc_info::out) is det.

generate_user_defined_compare_proc_body(abstract_noncanonical_type(_),
        _, _, _, _, _, !Info) :-
    unexpected(this_file,
        "trying to create compare proc for abstract noncanonical type").
generate_user_defined_compare_proc_body(unify_compare(_, MaybeCompare),
        Res, X, Y, Context, Clause, !Info) :-
    ArgVars = [Res, X, Y],
    (
        MaybeCompare = yes(ComparePredName),

        % Just generate a call to the specified predicate, which is the
        % user-defined comparison pred for this type. (The pred_id and proc_id
        % will be figured out by type checking and mode analysis.)

        PredId = invalid_pred_id,
        ModeId = invalid_proc_id,
        Call = plain_call(PredId, ModeId, ArgVars, not_builtin, no,
            ComparePredName),
        goal_info_init(Context, GoalInfo),
        Goal0 = hlds_goal(Call, GoalInfo),
        maybe_wrap_with_pretest_equality(Context, X, Y, yes(Res), Goal0, Goal,
            !Info)
    ;
        MaybeCompare = no,
        % Just generate code that will call error/1.
        build_call("builtin_compare_non_canonical_type", ArgVars, Context,
            Goal, !Info)
    ),
    quantify_clause_body(ArgVars, Goal, Context, Clause, !Info).

:- pred generate_eqv_compare_proc_body(mer_type::in,
    prog_var::in, prog_var::in, prog_var::in, prog_context::in, clause::out,
    unify_proc_info::in, unify_proc_info::out) is det.

generate_eqv_compare_proc_body(EqvType, Res, X, Y, Context, Clause, !Info) :-
    % We should check whether EqvType is a type variable, an abstract type
    % or a concrete type. If it is type variable, then we should generate
    % the same code we generate now. If it is an abstract type, we should call
    % its comparison procedure directly; if it is a concrete type, we should
    % generate the body of its comparison procedure inline here.
    make_fresh_named_var_from_type(EqvType, "Cast_HeadVar", 1, CastX,
        !Info),
    make_fresh_named_var_from_type(EqvType, "Cast_HeadVar", 2, CastY,
        !Info),
    generate_cast(equiv_type_cast, X, CastX, Context, CastXGoal),
    generate_cast(equiv_type_cast, Y, CastY, Context, CastYGoal),
    build_call("compare", [Res, CastX, CastY], Context, CompareGoal,
        !Info),

    goal_info_init(GoalInfo0),
    goal_info_set_context(Context, GoalInfo0, GoalInfo),
    conj_list_to_goal([CastXGoal, CastYGoal, CompareGoal], GoalInfo, Goal),
    quantify_clause_body([Res, X, Y], Goal, Context, Clause, !Info).

%-----------------------------------------------------------------------------%

    % For a type such as
    %
    %   type t ---> a1 ; a2 ; b(int) ; c(float); d(int, string, t).
    %
    % we want to generate the code
    %
    %   __Unify__(X, Y) :-
    %       (
    %           X = a1,
    %           Y = X
    %           % Actually, to avoid infinite recursion,
    %           % the above unification is done as type int:
    %           %   CastX = unsafe_cast(X) `with_type` int,
    %           %   CastY = unsafe_cast(Y) `with_type` int,
    %           %   CastX = CastY
    %       ;
    %           X = a2,
    %           Y = X   % Likewise, done as type int
    %       ;
    %           X = b(X1),
    %           Y = b(Y2),
    %           X1 = Y2,
    %       ;
    %           X = c(X1),
    %           Y = c(Y1),
    %           X1 = X2,
    %       ;
    %           X = d(X1, X2, X3),
    %           Y = c(Y1, Y2, Y3),
    %           X1 = y1,
    %           X2 = Y2,
    %           X3 = Y3
    %       ).
    %
    % Note that in the disjuncts handling constants, we want to unify Y with
    % X, not with the constant. Doing this allows dupelim to take the code
    % fragments implementing the switch arms for constants and eliminate all
    % but one of them. This can be a significant code size saving for types
    % with lots of constants which can lead to significant reductions in C
    % compilation time. The keep_constant_binding feature on the cast goals is
    % there to ask mode analysis to copy any known bound inst on the cast-from
    % variable to the cast-to variable. This is necessary to keep determinism
    % analysis working for modes in which the inputs of the unify predicate
    % are known to be bound to the same constant, modes whose determinism
    % should therefore be inferred to be det.
    % (tests/general/det_complicated_unify2.m tests this case.)
    %
:- pred generate_du_unify_proc_body(list(constructor)::in,
    prog_var::in, prog_var::in, prog_context::in,
    clause::out, unify_proc_info::in, unify_proc_info::out) is det.

generate_du_unify_proc_body(Ctors, X, Y, Context, Clause, !Info) :-
    CanCompareAsInt = can_compare_constants_as_ints(!.Info),
    list.map_foldl(generate_du_unify_case(X, Y, Context, CanCompareAsInt),
        Ctors, Disjuncts, !Info),
    goal_info_init(GoalInfo0),
    goal_info_set_context(Context, GoalInfo0, GoalInfo),
    Goal0 = hlds_goal(disj(Disjuncts), GoalInfo),
    maybe_wrap_with_pretest_equality(Context, X, Y, no, Goal0, Goal, !Info),
    quantify_clause_body([X, Y], Goal, Context, Clause, !Info).

:- pred generate_du_unify_case(prog_var::in, prog_var::in, prog_context::in,
    bool::in, constructor::in, hlds_goal::out,
    unify_proc_info::in, unify_proc_info::out) is det.

generate_du_unify_case(X, Y, Context, CanCompareAsInt, Ctor, Goal, !Info) :-
    Ctor = ctor(ExistQTVars, _Constraints, FunctorName, ArgTypes, _Ctxt),
    list.length(ArgTypes, FunctorArity),
    FunctorConsId = cons(FunctorName, FunctorArity),
    (
        ArgTypes = [],
        CanCompareAsInt = yes
    ->
        create_pure_atomic_complicated_unification(X,
            rhs_functor(FunctorConsId, no, []), Context,
            umc_explicit, [], UnifyX_Goal),
        info_new_named_var(int_type, "CastX", CastX, !Info),
        info_new_named_var(int_type, "CastY", CastY, !Info),
        generate_cast(unsafe_type_cast, X, CastX, Context, CastXGoal0),
        generate_cast(unsafe_type_cast, Y, CastY, Context, CastYGoal0),
        goal_add_feature(feature_keep_constant_binding, CastXGoal0, CastXGoal),
        goal_add_feature(feature_keep_constant_binding, CastYGoal0, CastYGoal),
        create_pure_atomic_complicated_unification(CastY, rhs_var(CastX),
            Context, umc_explicit, [], UnifyY_Goal),
        GoalList = [UnifyX_Goal, CastXGoal, CastYGoal, UnifyY_Goal]
    ;
        make_fresh_vars(ArgTypes, ExistQTVars, Vars1, !Info),
        make_fresh_vars(ArgTypes, ExistQTVars, Vars2, !Info),
        create_pure_atomic_complicated_unification(X,
            rhs_functor(FunctorConsId, no, Vars1),
            Context, umc_explicit, [], UnifyX_Goal),
        create_pure_atomic_complicated_unification(Y,
            rhs_functor(FunctorConsId, no, Vars2),
            Context, umc_explicit, [], UnifyY_Goal),
        unify_var_lists(ArgTypes, ExistQTVars, Vars1, Vars2, UnifyArgs_Goals,
            !Info),
        GoalList = [UnifyX_Goal, UnifyY_Goal | UnifyArgs_Goals]
    ),
    goal_info_init(GoalInfo0),
    goal_info_set_context(Context, GoalInfo0, GoalInfo),
    conj_list_to_goal(GoalList, GoalInfo, Goal).

    % Succeed iff the target back end guarantees that comparing two constants
    % for equality can be done by casting them both to integers and comparing
    % the integers for equality.
    %
:- func can_compare_constants_as_ints(unify_proc_info) = bool.

can_compare_constants_as_ints(Info) = CanCompareAsInt :-
    ModuleInfo = Info ^ module_info,
    module_info_get_globals(ModuleInfo, Globals),
    lookup_bool_option(Globals, can_compare_constants_as_ints,
        CanCompareAsInt).

%-----------------------------------------------------------------------------%

    % For a type such as
    %
    %   :- type foo ---> f ; g(a, b, c) ; h(foo).
    %
    % we want to generate the code
    %
    %   index(X, Index) :-
    %       (
    %           X = f,
    %           Index = 0
    %       ;
    %           X = g(_, _, _),
    %           Index = 1
    %       ;
    %           X = h(_),
    %           Index = 2
    %       ).
:- pred generate_du_index_proc_body(list(constructor)::in,
    prog_var::in, prog_var::in, prog_context::in, clause::out,
    unify_proc_info::in, unify_proc_info::out) is det.

generate_du_index_proc_body(Ctors, X, Index, Context, Clause, !Info) :-
    list.map_foldl2(generate_du_index_case(X, Index, Context),
        Ctors, Disjuncts, 0, _, !Info),
    goal_info_init(GoalInfo0),
    goal_info_set_context(Context, GoalInfo0, GoalInfo),
    Goal = hlds_goal(disj(Disjuncts), GoalInfo),
    quantify_clause_body([X, Index], Goal, Context, Clause, !Info).

:- pred generate_du_index_case(prog_var::in, prog_var::in, prog_context::in,
    constructor::in, hlds_goal::out, int::in, int::out,
    unify_proc_info::in, unify_proc_info::out) is det.

generate_du_index_case(X, Index, Context, Ctor, Goal, !N, !Info) :-
    Ctor = ctor(ExistQTVars, _Constraints, FunctorName, ArgTypes, _Ctxt),
    list.length(ArgTypes, FunctorArity),
    FunctorConsId = cons(FunctorName, FunctorArity),
    make_fresh_vars(ArgTypes, ExistQTVars, ArgVars, !Info),
    create_pure_atomic_complicated_unification(X,
        rhs_functor(FunctorConsId, no, ArgVars),
        Context, umc_explicit, [], UnifyX_Goal),
    make_int_const_construction(Index, !.N, UnifyIndex_Goal),
    !:N = !.N + 1,
    GoalList = [UnifyX_Goal, UnifyIndex_Goal],
    goal_info_init(GoalInfo0),
    goal_info_set_context(Context, GoalInfo0, GoalInfo),
    conj_list_to_goal(GoalList, GoalInfo, Goal).

%-----------------------------------------------------------------------------%

:- pred generate_du_compare_proc_body(mer_type::in, list(constructor)::in,
    prog_var::in, prog_var::in, prog_var::in, prog_context::in,
    clause::out, unify_proc_info::in, unify_proc_info::out) is det.

generate_du_compare_proc_body(Type, Ctors, Res, X, Y, Context, Clause,
        !Info) :-
    (
        Ctors = [],
        unexpected(this_file, "compare for type with no functors")
    ;
        Ctors = [_ | _],
        info_get_module_info(!.Info, ModuleInfo),
        module_info_get_globals(ModuleInfo, Globals),
        globals.lookup_int_option(Globals, compare_specialization,
            CompareSpec),
        list.length(Ctors, NumCtors),
        ( NumCtors =< CompareSpec ->
            generate_du_quad_compare_proc_body(Ctors, Res, X, Y,
                Context, Goal0, !Info)
        ;
            generate_du_linear_compare_proc_body(Type, Ctors, Res, X, Y,
                Context, Goal0, !Info)
        ),
        maybe_wrap_with_pretest_equality(Context, X, Y, yes(Res), Goal0, Goal,
            !Info),
        HeadVars = [Res, X, Y],
        quantify_clause_body(HeadVars, Goal, Context, Clause, !Info)
    ).

%-----------------------------------------------------------------------------%

    % For a du type, such as
    %
    %   :- type foo ---> f(a) ; g(a, b, c) ; h.
    %
    % the quadratic code we want to generate is
    %
    %   compare(Res, X, Y) :-
    %       (
    %           X = f(X1),
    %           Y = f(Y1),
    %           compare(R, X1, Y1)
    %       ;
    %           X = f(_),
    %           Y = g(_, _, _),
    %           R = (<)
    %       ;
    %           X = f(_),
    %           Y = h,
    %           R = (<)
    %       ;
    %           X = g(_, _, _),
    %           Y = f(_),
    %           R = (>)
    %       ;
    %           X = g(X1, X2, X3),
    %           Y = g(Y1, Y2, Y3),
    %           ( compare(R1, X1, Y1), R1 \= (=) ->
    %               R = R1
    %           ; compare(R2, X2, Y2), R2 \= (=) ->
    %               R = R2
    %           ;
    %               compare(R, X3, Y3)
    %           )
    %       ;
    %           X = g(_, _, _),
    %           Y = h,
    %           R = (<)
    %       ;
    %           X = f(_),
    %           Y = h,
    %           R = (<)
    %       ;
    %           X = g(_, _, _),
    %           Y = h,
    %           R = (<)
    %       ;
    %           X = h,
    %           Y = h,
    %           R = (<)
    %       ).
    %
    % Note that in the clauses handling two copies of the same constant,
    % we unify Y with the constant, not with X. This is required to get
    % switch_detection and det_analysis to recognize the determinism of the
    % predicate.
    %
:- pred generate_du_quad_compare_proc_body(list(constructor)::in,
    prog_var::in, prog_var::in, prog_var::in, prog_context::in,
    hlds_goal::out, unify_proc_info::in, unify_proc_info::out) is det.

generate_du_quad_compare_proc_body(Ctors, R, X, Y, Context, Goal, !Info) :-
    generate_du_quad_compare_switch_on_x(Ctors, Ctors, R, X, Y,
        Context, [], Cases, !Info),
    goal_info_init(GoalInfo0),
    goal_info_set_context(Context, GoalInfo0, GoalInfo),
    disj_list_to_goal(Cases, GoalInfo, Goal).

:- pred generate_du_quad_compare_switch_on_x(
    list(constructor)::in, list(constructor)::in,
    prog_var::in, prog_var::in, prog_var::in,
    prog_context::in, list(hlds_goal)::in, list(hlds_goal)::out,
    unify_proc_info::in, unify_proc_info::out) is det.

generate_du_quad_compare_switch_on_x([], _RightCtors, _R, _X, _Y, _Context,
        !Cases, !Info).
generate_du_quad_compare_switch_on_x([LeftCtor | LeftCtors], RightCtors,
        R, X, Y, Context, !Cases, !Info) :-
    generate_du_quad_compare_switch_on_y(LeftCtor, RightCtors, ">", R, X, Y,
        Context, !Cases, !Info),
    generate_du_quad_compare_switch_on_x(LeftCtors, RightCtors, R, X, Y,
        Context, !Cases, !Info).

:- pred generate_du_quad_compare_switch_on_y(
    constructor::in, list(constructor)::in, string::in,
    prog_var::in, prog_var::in, prog_var::in, prog_context::in,
    list(hlds_goal)::in, list(hlds_goal)::out,
    unify_proc_info::in, unify_proc_info::out) is det.

generate_du_quad_compare_switch_on_y(_LeftCtor, [],
        _Cmp, _R, _X, _Y, _Context, !Cases, !Info).
generate_du_quad_compare_switch_on_y(LeftCtor, [RightCtor | RightCtors],
        Cmp0, R, X, Y, Context, !Cases, !Info) :-
    ( LeftCtor = RightCtor ->
        generate_compare_case(LeftCtor, R, X, Y, Context, quad, Case, !Info),
        Cmp1 = "<"
    ;
        generate_asymmetric_compare_case(LeftCtor, RightCtor, Cmp0, R, X, Y,
            Context, Case, !Info),
        Cmp1 = Cmp0
    ),
    generate_du_quad_compare_switch_on_y(LeftCtor, RightCtors, Cmp1, R, X, Y,
        Context, [Case | !.Cases], !:Cases, !Info).

%-----------------------------------------------------------------------------%

    % For a du type, such as
    %
    %   :- type foo ---> f ; g(a) ; h(b, foo).
    %
    % the linear code we want to generate is
    %
    %   compare(Res, X, Y) :-
    %       __Index__(X, X_Index),  % Call_X_Index
    %       __Index__(Y, Y_Index),  % Call_Y_Index
    %       ( X_Index < Y_Index ->  % Call_Less_Than
    %           Res = (<)   % Return_Less_Than
    %       ; X_Index > Y_Index ->  % Call_Greater_Than
    %           Res = (>)   % Return_Greater_Than
    %       ;
    %           % This disjunction is generated by generate_compare_cases,
    %           % below.
    %           (
    %               X = f
    %               R = (=)
    %           ;
    %               X = g(X1),
    %               Y = g(Y1),
    %               compare(R, X1, Y1)
    %           ;
    %               X = h(X1, X2),
    %               Y = h(Y1, Y2),
    %               ( compare(R1, X1, Y1), R1 \= (=) ->
    %                   R = R1
    %               ;
    %                   compare(R, X2, Y2)
    %               )
    %           )
    %       ->
    %           Res = R     % Return_R
    %       ;
    %           compare_error   % Abort
    %       ).
    %
    % Note that disjuncts covering constants do not test Y, since for constants
    % X_Index = Y_Index implies X = Y.
    %
:- pred generate_du_linear_compare_proc_body(mer_type::in,
    list(constructor)::in, prog_var::in, prog_var::in, prog_var::in,
    prog_context::in, hlds_goal::out,
    unify_proc_info::in, unify_proc_info::out) is det.

generate_du_linear_compare_proc_body(Type, Ctors, Res, X, Y, Context, Goal,
        !Info) :-
    IntType = int_type,
    info_new_var(IntType, X_Index, !Info),
    info_new_var(IntType, Y_Index, !Info),
    info_new_var(comparison_result_type, R, !Info),

    goal_info_init(GoalInfo0),
    goal_info_set_context(Context, GoalInfo0, GoalInfo),

    instmap_delta_from_assoc_list([X_Index - ground(shared, none)],
        X_InstmapDelta),
    build_specific_call(Type, spec_pred_index, [X, X_Index],
        X_InstmapDelta, detism_det, Context, Call_X_Index, !Info),
    instmap_delta_from_assoc_list([Y_Index - ground(shared, none)],
        Y_InstmapDelta),
    build_specific_call(Type, spec_pred_index, [Y, Y_Index],
        Y_InstmapDelta, detism_det, Context, Call_Y_Index, !Info),

    build_call("builtin_int_lt", [X_Index, Y_Index], Context,
        Call_Less_Than, !Info),
    build_call("builtin_int_gt", [X_Index, Y_Index], Context,
        Call_Greater_Than, !Info),

    Builtin = mercury_public_builtin_module,
    make_const_construction(Res, cons(qualified(Builtin, "<"), 0),
        Return_Less_Than),
    make_const_construction(Res, cons(qualified(Builtin, ">"), 0),
        Return_Greater_Than),

    create_pure_atomic_complicated_unification(Res, rhs_var(R), Context,
        umc_explicit, [], Return_R),

    generate_compare_cases(Ctors, R, X, Y, Context, Cases, !Info),
    CasesGoal = hlds_goal(disj(Cases), GoalInfo),

    build_call("compare_error", [], Context, Abort, !Info),

    HandleEqualGoal =
        hlds_goal(
            if_then_else([], CasesGoal, Return_R, Abort),
            GoalInfo),
    HandleGreaterEqualGoal =
        hlds_goal(
            if_then_else([], Call_Greater_Than, Return_Greater_Than,
                HandleEqualGoal),
            GoalInfo),
    HandleLessGreaterEqualGoal =
        hlds_goal(
            if_then_else([], Call_Less_Than, Return_Less_Than,
                HandleGreaterEqualGoal),
            GoalInfo),
    Goal =
        hlds_goal(
            conj(plain_conj,
                [Call_X_Index, Call_Y_Index, HandleLessGreaterEqualGoal]),
            GoalInfo).

    % generate_compare_cases: for a type such as
    %
    %   :- type foo ---> f ; g(a) ; h(b, foo).
    %
    % we want to generate code
    %
    %   (
    %       X = f,      % UnifyX_Goal
    %       Y = X,      % UnifyY_Goal
    %       R = (=)     % CompareArgs_Goal
    %   ;
    %       X = g(X1),
    %       Y = g(Y1),
    %       compare(R, X1, Y1)
    %   ;
    %       X = h(X1, X2),
    %       Y = h(Y1, Y2),
    %       ( compare(R1, X1, Y1), R1 \= (=) ->
    %           R = R1
    %       ;
    %           compare(R, X2, Y2)
    %       )
    %   )
    %
    % Note that in the clauses for constants, we unify Y with X, not with
    % the constant. This is to allow dupelim to eliminate all but one of
    % the code fragments implementing such switch arms.
    %
:- pred generate_compare_cases(list(constructor)::in, prog_var::in,
    prog_var::in, prog_var::in, prog_context::in, list(hlds_goal)::out,
    unify_proc_info::in, unify_proc_info::out) is det.

generate_compare_cases([], _R, _X, _Y, _Context, [], !Info).
generate_compare_cases([Ctor | Ctors], R, X, Y, Context, [Case | Cases],
        !Info) :-
    generate_compare_case(Ctor, R, X, Y, Context, linear, Case, !Info),
    generate_compare_cases(Ctors, R, X, Y, Context, Cases, !Info).

:- type linear_or_quad
    --->    linear
    ;       quad.

:- pred generate_compare_case(constructor::in, prog_var::in, prog_var::in,
    prog_var::in, prog_context::in, linear_or_quad::in,
    hlds_goal::out, unify_proc_info::in, unify_proc_info::out) is det.

generate_compare_case(Ctor, R, X, Y, Context, Kind, Case, !Info) :-
    Ctor = ctor(ExistQTVars, _Constraints, FunctorName, ArgTypes, _Ctxt),
    list.length(ArgTypes, FunctorArity),
    FunctorConsId = cons(FunctorName, FunctorArity),
    (
        ArgTypes = [],
        create_pure_atomic_complicated_unification(X,
            rhs_functor(FunctorConsId, no, []), Context, umc_explicit, [],
            UnifyX_Goal),
        generate_return_equal(R, Context, EqualGoal),
        (
            Kind = linear,
            % The disjunct we are generating is executed only if the index
            % values of X and Y are the same, so if X is bound to a constant,
            % Y must also be bound to that same constant.
            GoalList = [UnifyX_Goal, EqualGoal]
        ;
            Kind = quad,
            create_pure_atomic_complicated_unification(Y,
                rhs_functor(FunctorConsId, no, []), Context, umc_explicit, [],
                UnifyY_Goal),
            GoalList = [UnifyX_Goal, UnifyY_Goal, EqualGoal]
        )
    ;
        ArgTypes = [_ | _],
        make_fresh_vars(ArgTypes, ExistQTVars, Vars1, !Info),
        make_fresh_vars(ArgTypes, ExistQTVars, Vars2, !Info),
        create_pure_atomic_complicated_unification(X,
            rhs_functor(FunctorConsId, no, Vars1), Context, umc_explicit, [],
            UnifyX_Goal),
        create_pure_atomic_complicated_unification(Y,
            rhs_functor(FunctorConsId, no, Vars2), Context, umc_explicit, [],
            UnifyY_Goal),
        compare_args(ArgTypes, ExistQTVars, Vars1, Vars2, R,
            Context, CompareArgs_Goal, !Info),
        GoalList = [UnifyX_Goal, UnifyY_Goal, CompareArgs_Goal]
    ),
    goal_info_init(GoalInfo0),
    goal_info_set_context(Context, GoalInfo0, GoalInfo),
    conj_list_to_goal(GoalList, GoalInfo, Case).

:- pred generate_asymmetric_compare_case(constructor::in, constructor::in,
    string::in, prog_var::in, prog_var::in, prog_var::in, prog_context::in,
    hlds_goal::out, unify_proc_info::in, unify_proc_info::out) is det.

generate_asymmetric_compare_case(Ctor1, Ctor2, CompareOp, R, X, Y, Context,
        Case, !Info) :-
    Ctor1 = ctor(ExistQTVars1, _Constraints1, FunctorName1, ArgTypes1, _Ctxt1),
    Ctor2 = ctor(ExistQTVars2, _Constraints2, FunctorName2, ArgTypes2, _Ctxt2),
    list.length(ArgTypes1, FunctorArity1),
    list.length(ArgTypes2, FunctorArity2),
    FunctorConsId1 = cons(FunctorName1, FunctorArity1),
    FunctorConsId2 = cons(FunctorName2, FunctorArity2),
    make_fresh_vars(ArgTypes1, ExistQTVars1, Vars1, !Info),
    make_fresh_vars(ArgTypes2, ExistQTVars2, Vars2, !Info),
    create_pure_atomic_complicated_unification(X,
        rhs_functor(FunctorConsId1, no, Vars1), Context, umc_explicit, [],
        UnifyX_Goal),
    create_pure_atomic_complicated_unification(Y,
        rhs_functor(FunctorConsId2, no, Vars2), Context, umc_explicit, [],
        UnifyY_Goal),
    Builtin = mercury_public_builtin_module,
    make_const_construction(R, cons(qualified(Builtin, CompareOp), 0),
        ReturnResult),
    GoalList = [UnifyX_Goal, UnifyY_Goal, ReturnResult],
    goal_info_init(GoalInfo0),
    goal_info_set_context(Context, GoalInfo0, GoalInfo),
    conj_list_to_goal(GoalList, GoalInfo, Case).

    % compare_args: for a constructor such as
    %
    %   h(list(int), foo, string)
    %
    % we want to generate code
    %
    %   (
    %       compare(R1, X1, Y1),    % Do_Comparison
    %       R1 \= (=)       % Check_Not_Equal
    %   ->
    %       R = R1          % Return_R1
    %   ;
    %       compare(R2, X2, Y2),
    %       R2 \= (=)
    %   ->
    %       R = R2
    %   ;
    %       compare(R, X3, Y3)  % Return_Comparison
    %   )
    %
    % For a constructor with no arguments, we want to generate code
    %
    %   R = (=)     % Return_Equal
    %
:- pred compare_args(list(constructor_arg)::in, existq_tvars::in,
    list(prog_var)::in, list(prog_var)::in, prog_var::in, prog_context::in,
    hlds_goal::out, unify_proc_info::in, unify_proc_info::out) is det.

compare_args(ArgTypes, ExistQTVars, Xs, Ys, R, Context, Goal, !Info) :-
    (
        compare_args_2(ArgTypes, ExistQTVars, Xs, Ys, R, Context, Goal0, !Info)
    ->
        Goal = Goal0
    ;
        unexpected(this_file, "compare_args: length mismatch")
    ).

:- pred compare_args_2(list(constructor_arg)::in, existq_tvars::in,
    list(prog_var)::in, list(prog_var)::in, prog_var::in, prog_context::in,
    hlds_goal::out, unify_proc_info::in, unify_proc_info::out) is semidet.

compare_args_2([], _, [], [], R, Context, Return_Equal, !Info) :-
    generate_return_equal(R, Context, Return_Equal).
compare_args_2([Arg | ArgTypes], ExistQTVars, [X | Xs], [Y | Ys], R,
        Context, Goal, !Info) :-
    goal_info_init(GoalInfo0),
    goal_info_set_context(Context, GoalInfo0, GoalInfo),

    Type = Arg ^ arg_type,

    % When comparing existentially typed arguments, the arguments may have
    % different types; in that case, rather than just comparing them,
    % which would be a type error, we call `typed_compare', which is a builtin
    % that first compares their types and then compares their values.
    (
        list.member(ExistQTVar, ExistQTVars),
        type_contains_var(Type, ExistQTVar)
    ->
        ComparePred = "typed_compare"
    ;
        ComparePred = "compare"
    ),
    (
        info_get_module_info(!.Info, ModuleInfo),
        is_dummy_argument_type(ModuleInfo, Type)
    ->
        % X and Y contain dummy values, so there is nothing to compare.
        compare_args_2(ArgTypes, ExistQTVars, Xs, Ys, R, Context, Goal, !Info)
    ;
        Xs = [],
        Ys = []
    ->
        build_call(ComparePred, [R, X, Y], Context, Goal, !Info)
    ;
        info_new_var(comparison_result_type, R1, !Info),
        build_call(ComparePred, [R1, X, Y], Context, Do_Comparison, !Info),

        make_const_construction(R1, equal_cons_id, Check_Equal),
        Check_Not_Equal = hlds_goal(negation(Check_Equal), GoalInfo),

        create_pure_atomic_complicated_unification(R, rhs_var(R1),
            Context, umc_explicit, [], Return_R1),
        Condition = hlds_goal(
            conj(plain_conj, [Do_Comparison, Check_Not_Equal]),
            GoalInfo),
        compare_args_2(ArgTypes, ExistQTVars, Xs, Ys, R, Context, ElseCase,
            !Info),
        Goal = hlds_goal(
            if_then_else([], Condition, Return_R1, ElseCase),
            GoalInfo)
    ).

:- pred generate_return_equal(prog_var::in, prog_context::in,
    hlds_goal::out) is det.

generate_return_equal(ResultVar, Context, Goal) :-
    make_const_construction(ResultVar, equal_cons_id, Goal0),
    goal_set_context(Context, Goal0, Goal).

%-----------------------------------------------------------------------------%

:- pred build_call(string::in, list(prog_var)::in, prog_context::in,
    hlds_goal::out, unify_proc_info::in, unify_proc_info::out) is det.

build_call(Name, ArgVars, Context, Goal, !Info) :-
    info_get_module_info(!.Info, ModuleInfo),
    list.length(ArgVars, Arity),

    % We assume that the special preds compare/3, index/2, and unify/2
    % are the only public builtins called by code generated by this module.

    ( special_pred_name_arity(_, Name, _, Arity) ->
        MercuryBuiltin = mercury_public_builtin_module
    ;
        MercuryBuiltin = mercury_private_builtin_module
    ),
    goal_util.generate_simple_call(MercuryBuiltin, Name, pf_predicate,
        mode_no(0), detism_erroneous, purity_pure, ArgVars, [], [],
        ModuleInfo, Context, Goal).

:- pred build_specific_call(mer_type::in, special_pred_id::in,
    list(prog_var)::in, instmap_delta::in, determinism::in,
    prog_context::in, hlds_goal::out,
    unify_proc_info::in, unify_proc_info::out) is det.

build_specific_call(Type, SpecialPredId, ArgVars, InstmapDelta, Detism,
        Context, Goal, !Info) :-
    info_get_module_info(!.Info, ModuleInfo),
    (
        polymorphism.get_special_proc(Type, SpecialPredId, ModuleInfo,
            PredName, PredId, ProcId)
    ->
        GoalExpr = plain_call(PredId, ProcId, ArgVars, not_builtin, no,
            PredName),
        set.list_to_set(ArgVars, NonLocals),
        goal_info_init(NonLocals, InstmapDelta, Detism, purity_pure,
            GoalInfo0),
        goal_info_set_context(Context, GoalInfo0, GoalInfo),
        Goal = hlds_goal(GoalExpr, GoalInfo)
    ;
        % build_specific_call is only ever used to build calls
        % to special preds for a type in the bodies of other special preds
        % for that same type. If the special preds for a type are built in the
        % right order (index before compare), the lookup should never fail.
        unexpected(this_file, "build_specific_call: lookup failed")
    ).

%-----------------------------------------------------------------------------%

:- pred make_fresh_named_var_from_type(mer_type::in, string::in, int::in,
    prog_var::out, unify_proc_info::in, unify_proc_info::out) is det.

make_fresh_named_var_from_type(Type, BaseName, Num, Var, !Info) :-
    string.int_to_string(Num, NumStr),
    string.append(BaseName, NumStr, Name),
    info_new_named_var(Type, Name, Var, !Info).

:- pred make_fresh_named_vars_from_types(list(mer_type)::in, string::in,
    int::in, list(prog_var)::out, unify_proc_info::in, unify_proc_info::out)
    is det.

make_fresh_named_vars_from_types([], _, _, [], !Info).
make_fresh_named_vars_from_types([Type | Types], BaseName, Num,
        [Var | Vars], !Info) :-
    make_fresh_named_var_from_type(Type, BaseName, Num, Var, !Info),
    make_fresh_named_vars_from_types(Types, BaseName, Num + 1, Vars, !Info).

:- pred make_fresh_vars_from_types(list(mer_type)::in, list(prog_var)::out,
    unify_proc_info::in, unify_proc_info::out) is det.

make_fresh_vars_from_types([], [], !Info).
make_fresh_vars_from_types([Type | Types], [Var | Vars], !Info) :-
    info_new_var(Type, Var, !Info),
    make_fresh_vars_from_types(Types, Vars, !Info).

:- pred make_fresh_vars(list(constructor_arg)::in, existq_tvars::in,
    list(prog_var)::out, unify_proc_info::in, unify_proc_info::out) is det.

make_fresh_vars(CtorArgs, ExistQTVars, Vars, !Info) :-
    (
        ExistQTVars = [],
        ArgTypes = list.map(func(C) = C ^ arg_type, CtorArgs),
        make_fresh_vars_from_types(ArgTypes, Vars, !Info)
    ;
        ExistQTVars = [_ | _],
        %
        % If there are existential types involved, then it's too hard to get
        % the types right here (it would require allocating new type variables)
        % -- instead, typecheck.m will typecheck the clause to figure out
        % the correct types. So we just allocate the variables and leave it
        % up to typecheck.m to infer their types.
        %
        info_get_varset(!.Info, VarSet0),
        list.length(CtorArgs, NumVars),
        varset.new_vars(VarSet0, NumVars, Vars, VarSet),
        info_set_varset(VarSet, !Info)
    ).

:- pred unify_var_lists(list(constructor_arg)::in, existq_tvars::in,
    list(prog_var)::in, list(prog_var)::in, list(hlds_goal)::out,
    unify_proc_info::in, unify_proc_info::out) is det.

unify_var_lists(ArgTypes, ExistQVars, Vars1, Vars2, Goal, !Info) :-
    ( unify_var_lists_2(ArgTypes, ExistQVars, Vars1, Vars2, Goal0, !Info) ->
        Goal = Goal0
    ;
        unexpected(this_file, "unify_var_lists: length mismatch")
    ).

:- pred unify_var_lists_2(list(constructor_arg)::in, existq_tvars::in,
    list(prog_var)::in, list(prog_var)::in, list(hlds_goal)::out,
    unify_proc_info::in, unify_proc_info::out) is semidet.

unify_var_lists_2([], _, [], [], [], !Info).
unify_var_lists_2([Arg | ArgTypes], ExistQTVars, [X | Xs], [Y | Ys],
        [Goal | Goals], !Info) :-
    Type = Arg ^ arg_type,
    term.context_init(Context),
    (
        info_get_module_info(!.Info, ModuleInfo),
        is_dummy_argument_type(ModuleInfo, Type)
    ->
        Goal = true_goal
    ;
        % When unifying existentially typed arguments, the arguments may have
        % different types; in that case, rather than just unifying them,
        % which would be a type error, we call `typed_unify', which is
        % a builtin that first checks that their types are equal and then
        % unifies the values.

        list.member(ExistQTVar, ExistQTVars),
        type_contains_var(Type, ExistQTVar)
    ->
        build_call("typed_unify", [X, Y], Context, Goal, !Info)
    ;
        create_pure_atomic_complicated_unification(X, rhs_var(Y),
            Context, umc_explicit, [], Goal)
    ),
    unify_var_lists_2(ArgTypes, ExistQTVars, Xs, Ys, Goals, !Info).

%-----------------------------------------------------------------------------%

:- pred maybe_wrap_with_pretest_equality(prog_context::in,
    prog_var::in, prog_var::in, maybe(prog_var)::in,
    hlds_goal::in, hlds_goal::out,
    unify_proc_info::in, unify_proc_info::out) is det.

maybe_wrap_with_pretest_equality(Context, X, Y, MaybeCompareRes, Goal0, Goal,
        !Info) :-
    ShouldPretestEq = should_pretest_equality(!.Info),
    (
        ShouldPretestEq = no,
        Goal = Goal0
    ;
        ShouldPretestEq = yes,
        info_new_named_var(int_type, "CastX", CastX, !Info),
        info_new_named_var(int_type, "CastY", CastY, !Info),
        generate_cast(unsafe_type_cast, X, CastX, Context, CastXGoal0),
        generate_cast(unsafe_type_cast, Y, CastY, Context, CastYGoal0),
        goal_add_feature(feature_keep_constant_binding, CastXGoal0, CastXGoal),
        goal_add_feature(feature_keep_constant_binding, CastYGoal0, CastYGoal),
        create_pure_atomic_complicated_unification(CastX, rhs_var(CastY),
            Context, umc_explicit, [], EqualityGoal),
        CondGoalExpr = conj(plain_conj, [CastXGoal, CastYGoal, EqualityGoal]),
        goal_info_init(GoalInfo0),
        goal_info_set_context(Context, GoalInfo0, ContextGoalInfo),
        CondGoal= hlds_goal(CondGoalExpr, ContextGoalInfo),
        (
            MaybeCompareRes = no,
            EqualGoal = true_goal_with_context(Context),
            GoalInfo = ContextGoalInfo
        ;
            MaybeCompareRes = yes(Res),
            Builtin = mercury_public_builtin_module,
            make_const_construction(Res, cons(qualified(Builtin, "="), 0),
                EqualGoal),
            EqualGoal = hlds_goal(_, EqualGoalInfo),
            goal_info_get_instmap_delta(EqualGoalInfo, InstmapDelta),
            goal_info_set_instmap_delta(InstmapDelta,
                ContextGoalInfo, GoalInfo)
        ),
        GoalExpr = if_then_else([], CondGoal, EqualGoal, Goal0),
        goal_info_add_feature(feature_pretest_equality, GoalInfo,
            FeaturedGoalInfo),
        Goal = hlds_goal(GoalExpr, FeaturedGoalInfo)
    ).

    % We can start unify and compare predicates that may call other predicates
    % with an equality test, since it often succeeds, and when it does, it is 
    % faster than executing the rest of the predicate body.
    %
:- func should_pretest_equality(unify_proc_info) = bool.

should_pretest_equality(Info) = ShouldPretestEq :-
    ModuleInfo = Info ^ module_info,
    module_info_get_globals(ModuleInfo, Globals),
    lookup_bool_option(Globals, should_pretest_equality, ShouldPretestEq).

%-----------------------------------------------------------------------------%

:- pred quantify_clause_body(list(prog_var)::in, hlds_goal::in,
    prog_context::in, clause::out,
    unify_proc_info::in, unify_proc_info::out) is det.

quantify_clause_body(HeadVars, Goal0, Context, Clause, !Info) :-
    info_get_varset(!.Info, Varset0),
    info_get_types(!.Info, Types0),
    info_get_rtti_varmaps(!.Info, RttiVarMaps0),
    implicitly_quantify_clause_body(HeadVars, _Warnings, Goal0, Goal,
        Varset0, Varset, Types0, Types, RttiVarMaps0, RttiVarMaps),
    info_set_varset(Varset, !Info),
    info_set_types(Types, !Info),
    info_set_rtti_varmaps(RttiVarMaps, !Info),
    Clause = clause([], Goal, impl_lang_mercury, Context).

%-----------------------------------------------------------------------------%

:- func equal_cons_id = cons_id.

equal_cons_id = cons(qualified(mercury_public_builtin_module, "="), 0).

:- func equal_functor = unify_rhs.

equal_functor = rhs_functor(equal_cons_id, no, []).

%-----------------------------------------------------------------------------%

:- type unify_proc_info.

:- pred info_init(module_info::in, unify_proc_info::out) is det.
:- pred info_new_var(mer_type::in, prog_var::out,
    unify_proc_info::in, unify_proc_info::out) is det.
:- pred info_new_named_var(mer_type::in, string::in, prog_var::out,
    unify_proc_info::in, unify_proc_info::out) is det.

:- pred info_extract(unify_proc_info::in,
    prog_varset::out, vartypes::out) is det.

:- pred info_get_varset(unify_proc_info::in, prog_varset::out) is det.
:- pred info_get_types(unify_proc_info::in, vartypes::out) is det.
:- pred info_get_rtti_varmaps(unify_proc_info::in, rtti_varmaps::out) is det.
:- pred info_get_module_info(unify_proc_info::in, module_info::out) is det.

:- pred info_set_varset(prog_varset::in,
    unify_proc_info::in, unify_proc_info::out) is det.
:- pred info_set_types(vartypes::in,
    unify_proc_info::in, unify_proc_info::out) is det.
:- pred info_set_rtti_varmaps(rtti_varmaps::in,
    unify_proc_info::in, unify_proc_info::out) is det.

%-----------------------------------------------------------------------------%

:- type unify_proc_info
    --->    unify_proc_info(
                varset          ::  prog_varset,
                vartypes        ::  vartypes,
                rtti_varmaps    ::  rtti_varmaps,
                module_info     ::  module_info
            ).

info_init(ModuleInfo, UPI) :-
    varset.init(VarSet),
    map.init(Types),
    rtti_varmaps_init(RttiVarMaps),
    UPI = unify_proc_info(VarSet, Types, RttiVarMaps, ModuleInfo).

info_new_var(Type, Var, !UPI) :-
    varset.new_var(!.UPI ^ varset, Var, VarSet),
    map.det_insert(!.UPI ^ vartypes, Var, Type, VarTypes),
    !:UPI = !.UPI ^ varset := VarSet,
    !:UPI = !.UPI ^ vartypes := VarTypes.

info_new_named_var(Type, Name, Var, !UPI) :-
    varset.new_named_var(!.UPI ^ varset, Name, Var, VarSet),
    map.det_insert(!.UPI ^ vartypes, Var, Type, VarTypes),
    !:UPI = !.UPI ^ varset := VarSet,
    !:UPI = !.UPI ^ vartypes := VarTypes.

info_extract(UPI, UPI ^ varset, UPI ^ vartypes).

info_get_varset(UPI, UPI ^ varset).
info_get_types(UPI, UPI ^ vartypes).
info_get_rtti_varmaps(UPI, UPI ^ rtti_varmaps).
info_get_module_info(UPI, UPI ^ module_info).

info_set_varset(VarSet, UPI, UPI ^ varset := VarSet).
info_set_types(Types, UPI, UPI ^ vartypes := Types).
info_set_rtti_varmaps(RttiVarMaps, UPI, UPI ^ rtti_varmaps := RttiVarMaps).

%-----------------------------------------------------------------------------%

:- func this_file = string.

this_file = "unify_proc.m".

%-----------------------------------------------------------------------------%
:- end_module unify_proc.
%-----------------------------------------------------------------------------%
