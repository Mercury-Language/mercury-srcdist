%---------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et
%---------------------------------------------------------------------------%
% Copyright (C) 1994-2008 The University of Melbourne.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury distribution.
%---------------------------------------------------------------------------%
%
% File: code_gen.m.
% Main authors: conway, zs.
%
% Code generation - convert from HLDS to LLDS.
%
% The two main tasks of this module are
%
% 1 to look after the aspects of generating code for a procedure
%   that do not involve generating code for a specific goal, and
%
% 2 to provide a generic predicate that can be called from anywhere in
%   the code generator to generate code for a goal.
%
% Code_gen forwards most of the actual construction of code for particular
% goals to other modules. The generation of code for unifications is done
% by unify_gen, for calls, higher-order calls and method calls by call_gen,
% for commits by commit_gen, for if-then-elses and negations by ite_gen,
% for switches by switch_gen and its subsidiary modules, for disjunctions
% by disj_gen, and for pragma_c_codes by pragma_c_gen. The only kind of goal
% handled directly by code_gen is the conjunction.
%
%---------------------------------------------------------------------------%

:- module ll_backend.proc_gen.
:- interface.

:- import_module hlds.hlds_module.
:- import_module hlds.hlds_pred.
:- import_module ll_backend.global_data.
:- import_module ll_backend.llds.

:- import_module io.
:- import_module list.

%---------------------------------------------------------------------------%

    % Translate a HLDS module to LLDS.
    %
:- pred generate_module_code(module_info::in, module_info::out,
    global_data::in, global_data::out,
    list(c_procedure)::out, io::di, io::uo) is det.

    % Translate a HLDS procedure to LLDS, threading through the data structure
    % that records information about layout structures.
    %
:- pred generate_proc_code(pred_info::in, proc_info::in,
    proc_id::in, pred_id::in, module_info::in,
    global_data::in, global_data::out, c_procedure::out) is det.

    % Return the message that identifies the procedure to pass to
    % the incr_sp_push_msg macro in the generated C code.
    %
:- func push_msg(module_info, pred_id, proc_id) = string.

    % Add all the global variables required for tabling by the procedures
    % of the module.
    %
:- pred add_all_tabling_info_structs(module_info::in,
    global_data::in, global_data::out) is det.

%---------------------------------------------------------------------------%
%---------------------------------------------------------------------------%

:- implementation.

:- import_module backend_libs.builtin_ops.
:- import_module backend_libs.proc_label.
:- import_module backend_libs.rtti.
:- import_module hlds.code_model.
:- import_module hlds.goal_util.
:- import_module hlds.hlds_clauses.
:- import_module hlds.hlds_goal.
:- import_module hlds.hlds_llds.
:- import_module hlds.hlds_out.
:- import_module hlds.hlds_rtti.
:- import_module hlds.instmap.
:- import_module libs.compiler_util.
:- import_module libs.file_util.
:- import_module libs.globals.
:- import_module libs.options.
:- import_module libs.trace_params.
:- import_module libs.tree.
:- import_module ll_backend.code_gen.
:- import_module ll_backend.code_info.
:- import_module ll_backend.code_util.
:- import_module ll_backend.continuation_info.
:- import_module ll_backend.layout.
:- import_module ll_backend.llds_out.
:- import_module ll_backend.middle_rec.
:- import_module ll_backend.pragma_c_gen.
:- import_module ll_backend.stack_layout.
:- import_module ll_backend.trace_gen.
:- import_module mdbcomp.prim_data.
:- import_module mdbcomp.program_representation.
:- import_module parse_tree.prog_data.
:- import_module parse_tree.prog_out.

:- import_module assoc_list.
:- import_module bool.
:- import_module counter.
:- import_module int.
:- import_module map.
:- import_module maybe.
:- import_module pair.
:- import_module set.
:- import_module solutions.
:- import_module string.
:- import_module term.

%---------------------------------------------------------------------------%

generate_module_code(!ModuleInfo, !GlobalData, Procedures, !IO) :-
    % Get a list of all the predicate ids for which we will generate code.
    module_info_predids(PredIds, !ModuleInfo),
    % Check if we want to use parallel code generation.
    module_info_get_globals(!.ModuleInfo, Globals),
    globals.lookup_bool_option(Globals, parallel_code_gen, ParallelCodeGen),
    globals.lookup_bool_option(Globals, very_verbose, VeryVerbose),
    globals.lookup_bool_option(Globals, detailed_statistics, Statistics),
    (
        ParallelCodeGen = yes,
        % Can't do parallel code generation if I/O is required.
        VeryVerbose = no,
        Statistics = no
    ->
        generate_code_parallel(!.ModuleInfo, PredIds, !GlobalData,
            Procedures)
    ;
        generate_code_sequential(!.ModuleInfo, PredIds, !GlobalData,
            Procedures, !IO)
    ).

:- pred generate_code_sequential(module_info::in, list(pred_id)::in,
    global_data::in, global_data::out, list(c_procedure)::out, io::di, io::uo)
    is det.

generate_code_sequential(ModuleInfo0, PredIds, !GlobalData, Procedures, !IO) :-
    list.map_foldl2(generate_maybe_pred_code(ModuleInfo0),
        PredIds, PredProcedures, !GlobalData, !IO),
    list.condense(PredProcedures, Procedures).

%-----------------------------------------------------------------------------%

:- pred generate_code_parallel(module_info::in, list(pred_id)::in,
    global_data::in, global_data::out, list(c_procedure)::out) is det.

generate_code_parallel(ModuleInfo0, PredIds, !GlobalData, Procedures) :-
    % Split up the list of predicates into pieces for processing in parallel.
    % Splitting the list in the middle does not work well as the load will be
    % unbalanced.  Splitting the list in any other way (as we do) does mean
    % that the generated code will be slightly different due to the static
    % data being reordered.
    % 
    % We only try to make use of two processors (threads) for now.  Using more
    % processors efficiently probably requires knowing how many processors are
    % available, so we can divide the pred list whilst minimise the time
    % merging global_datas and updating static cell references.
    %
    list.chunk(PredIds, pred_list_chunk_size, ListsOfPredIds),
    interleave(ListsOfPredIds, ListsOfPredIdsA, ListsOfPredIdsB),
    GlobalData0 = !.GlobalData,
    (
        list.condense(ListsOfPredIdsA, PredIdsA),
        list.map_foldl(generate_pred_code_par(ModuleInfo0),
            PredIdsA, PredProceduresA, GlobalData0, GlobalDataA),
        list.condense(PredProceduresA, ProceduresA)
    % XXX the following should be a parallel conjunction
    ,
        list.condense(ListsOfPredIdsB, PredIdsB),
        GlobalData1 = bump_type_num_counter(GlobalData0, type_num_skip),
        list.map_foldl(generate_pred_code_par(ModuleInfo0),
            PredIdsB, PredProceduresB0, GlobalData1, GlobalDataB),
        list.condense(PredProceduresB0, ProceduresB0)
    ),
    merge_global_datas(GlobalDataA, GlobalDataB, !:GlobalData,
        StaticCellRemapInfo),
    list.map(remap_static_cell_references(StaticCellRemapInfo),
        ProceduresB0, ProceduresB),
    Procedures = ProceduresA ++ ProceduresB.

    % These numbers are rather arbitrary.
    %
:- func pred_list_chunk_size = int.
pred_list_chunk_size = 50.

:- func type_num_skip = int.
type_num_skip = 10000.

:- pred interleave(list(T)::in, list(T)::out, list(T)::out) is det.
:- pred interleave_2(list(T)::in, list(T)::in, list(T)::out,
    list(T)::in, list(T)::out) is det.

interleave(L, reverse(As), reverse(Bs)) :-
    interleave_2(L, [], As, [], Bs).

interleave_2([], !As, !Bs).
interleave_2([H|T], As0, As, Bs0, Bs) :-
    interleave_2(T, Bs0, Bs, [H|As0], As).

%-----------------------------------------------------------------------------%

:- pred generate_maybe_pred_code(module_info::in,
    pred_id::in, list(c_procedure)::out,
    global_data::in, global_data::out, io::di, io::uo) is det.

    % Note that some of the logic of generate_maybe_pred_code is duplicated
    % by mercury_compile.backend_pass_by_preds, so modifications here may
    % also need to be repeated there.
    %
generate_maybe_pred_code(ModuleInfo, PredId, Predicates, !GlobalData, !IO) :-
    module_info_preds(ModuleInfo, PredInfos),
    map.lookup(PredInfos, PredId, PredInfo),
    ProcIds = pred_info_non_imported_procids(PredInfo),
    (
        ProcIds = [],
        Predicates = []
    ;
        ProcIds = [_ | _],
        module_info_get_globals(ModuleInfo, Globals),
        globals.lookup_bool_option(Globals, very_verbose, VeryVerbose),
        (
            VeryVerbose = yes,
            io.write_string("% Generating code for ", !IO),
            hlds_out.write_pred_id(ModuleInfo, PredId, !IO),
            io.write_string("\n", !IO),
            globals.lookup_bool_option(Globals, detailed_statistics,
                Statistics),
            maybe_report_stats(Statistics, !IO)
        ;
            VeryVerbose = no
        ),
        generate_pred_code(ModuleInfo, PredId, PredInfo, ProcIds, Predicates,
            !GlobalData)
    ).

:- pred generate_pred_code_par(module_info::in, pred_id::in,
    list(c_procedure)::out, global_data::in, global_data::out) is det.

generate_pred_code_par(ModuleInfo, PredId, Predicates, !GlobalData) :-
    module_info_preds(ModuleInfo, PredInfos),
    map.lookup(PredInfos, PredId, PredInfo),
    ProcIds = pred_info_non_imported_procids(PredInfo),
    generate_pred_code(ModuleInfo, PredId, PredInfo, ProcIds, Predicates,
        !GlobalData).

    % Translate a HLDS predicate to LLDS.
    %
:- pred generate_pred_code(module_info::in, 
    pred_id::in, pred_info::in, list(proc_id)::in, list(c_procedure)::out,
    global_data::in, global_data::out) is det.

generate_pred_code(ModuleInfo, PredId, PredInfo, ProcIds, Code, !GlobalData) :-
    generate_proc_list_code(ProcIds, PredId, PredInfo, ModuleInfo,
        !GlobalData, [], Code).

    % Translate all the procedures of a HLDS predicate to LLDS.
    %
:- pred generate_proc_list_code(list(proc_id)::in, pred_id::in, pred_info::in,
    module_info::in, global_data::in, global_data::out,
    list(c_procedure)::in, list(c_procedure)::out) is det.

generate_proc_list_code([], _PredId, _PredInfo, _ModuleInfo,
        !GlobalData, !Procs).
generate_proc_list_code([ProcId | ProcIds], PredId, PredInfo, ModuleInfo0,
        !GlobalData, !Procs) :-
    pred_info_get_procedures(PredInfo, ProcInfos),
    map.lookup(ProcInfos, ProcId, ProcInfo),
    generate_proc_code(PredInfo, ProcInfo, ProcId, PredId, ModuleInfo0,
        !GlobalData, Proc),
    !:Procs = [Proc | !.Procs],
    generate_proc_list_code(ProcIds, PredId, PredInfo, ModuleInfo0,
        !GlobalData, !Procs).

%---------------------------------------------------------------------------%

    % Values of this type hold information about stack frames that is
    % generated when generating prologs and is used in generating epilogs
    % and when massaging the code generated for the procedure.

:- type frame_info
    --->    frame(
                int,        % Number of slots in frame.

                maybe(int), % Slot number of succip if succip is
                            % present in a general slot.

                bool        % Is this the frame of a model_non
                            % proc defined via pragma C code?
            ).

%---------------------------------------------------------------------------%

generate_proc_code(PredInfo, ProcInfo0, ProcId, PredId, ModuleInfo0,
        !GlobalData, Proc) :-
    % The modified module_info and proc_info are both discarded
    % on return from generate_proc_code.
    maybe_set_trace_level(PredInfo, ModuleInfo0, ModuleInfo),
    ensure_all_headvars_are_named(ProcInfo0, ProcInfo),

    proc_info_interface_determinism(ProcInfo, Detism),
    CodeModel = proc_info_interface_code_model(ProcInfo),
    proc_info_get_goal(ProcInfo, Goal),
    Goal = hlds_goal(_, GoalInfo),
    goal_info_get_follow_vars(GoalInfo, MaybeFollowVars),
    (
        MaybeFollowVars = yes(FollowVars)
    ;
        MaybeFollowVars = no,
        map.init(FollowVarsMap),
        FollowVars = abs_follow_vars(FollowVarsMap, 1)
    ),
    module_info_get_globals(ModuleInfo, Globals),
    continuation_info.basic_stack_layout_for_proc(PredInfo, Globals,
        BasicStackLayout, ForceProcId),
    SaveSuccip = BasicStackLayout,

    % Initialise the code_info structure. Generate_category_code below will use
    % the returned OutsideResumePoint as the entry to the code that handles
    % the failure of the procedure, if such code is needed. It is never needed
    % for model_det procedures, always needed for model_semi procedures, and
    % needed for model_non procedures only if we are doing execution tracing.
    global_data_get_static_cell_info(!.GlobalData, StaticCellInfo0),
    code_info_init(SaveSuccip, Globals, PredId, ProcId, PredInfo,
        ProcInfo, FollowVars, ModuleInfo, StaticCellInfo0,
        OutsideResumePoint, TraceSlotInfo, CodeInfo0),

    % Find out the approriate context for the predicate's interface events.
    pred_info_get_clauses_info(PredInfo, ClausesInfo),
    get_clause_list(ClausesInfo ^ clauses_rep, Clauses),
    (
        Clauses = [],
        % This predicate must have been created by the compiler. In that case,
        % the context of the body goal is the best we can do.
        ProcContext = goal_info_get_context(GoalInfo)
    ;
        Clauses = [FirstClause | _],
        ProcContext = FirstClause ^ clause_context
    ),

    % Generate code for the procedure.
    generate_category_code(CodeModel, ProcContext, Goal, OutsideResumePoint,
        TraceSlotInfo, CodeTree, MaybeTraceCallLabel, FrameInfo,
        CodeInfo0, CodeInfo),
    get_max_reg_in_use_at_trace(CodeInfo, MaxTraceReg),
    get_static_cell_info(CodeInfo, StaticCellInfo),
    global_data_set_static_cell_info(StaticCellInfo, !GlobalData),

    globals.get_trace_level(Globals, TraceLevel),
    get_created_temp_frame(CodeInfo, CreatedTempFrame),

    get_proc_trace_events(CodeInfo, ProcTraceEvents),
    % You can have user trace events even if the effective trace level is none.
    (
        ProcTraceEvents =  yes,
        CreatedTempFrame = yes,
        CodeModel \= model_non
    ->
        % If tracing is enabled, the procedure lives on the det stack and the
        % code created any temporary nondet stack frames, then we must have
        % reserved a stack slot for storing the value of maxfr; if we didn't,
        % a retry command in the debugger from a point in the middle of this
        % procedure will do the wrong thing.
        proc_info_get_need_maxfr_slot(ProcInfo, HaveMaxfrSlot),
        expect(unify(HaveMaxfrSlot, yes), this_file,
            "should have reserved a slot for maxfr, but didn't")
    ;
        true
    ),

    % Turn the code tree into a list.
    tree.flatten(CodeTree, FragmentList),
    % Now the code is a list of code fragments (== list(instr)),
    % so we need to do a level of unwinding to get a flat list.
    list.condense(FragmentList, Instructions0),
    FrameInfo = frame(TotalSlots, MaybeSuccipSlot, _),
    (
        MaybeSuccipSlot = yes(SuccipSlot),
        % The set of recorded live values at calls (for value numbering)
        % and returns (for accurate gc and execution tracing) do not yet record
        % the stack slot holding the succip, so add it to those sets.
        add_saved_succip(Instructions0, SuccipSlot, Instructions)
    ;
        MaybeSuccipSlot = no,
        Instructions = Instructions0
    ),

    proc_info_get_maybe_proc_table_io_info(ProcInfo, MaybeTableIOInfo),
    (
        ( BasicStackLayout = yes
        ; MaybeTableIOInfo = yes(_TableIODeclInfo)
        )
    ->
        % Create the procedure layout structure.
        RttiProcLabel = make_rtti_proc_label(ModuleInfo, PredId, ProcId),
        get_layout_info(CodeInfo, InternalMap),
        EntryLabel = make_local_entry_label(ModuleInfo, PredId, ProcId, no),
        proc_info_get_eval_method(ProcInfo, EvalMethod),
        proc_info_get_initial_instmap(ProcInfo, ModuleInfo, InstMap0),
        proc_info_get_headvars(ProcInfo, HeadVars),
        proc_info_get_varset(ProcInfo, VarSet),
        proc_info_get_argmodes(ProcInfo, ArgModes),
        proc_info_get_vartypes(ProcInfo, VarTypes),
        globals.get_trace_suppress(Globals, TraceSuppress),
        (
            eff_trace_needs_proc_body_reps(ModuleInfo, PredInfo, ProcInfo,
                TraceLevel, TraceSuppress) = yes
        ->
            NeedGoalRep = trace_needs_body_rep
        ;
            NeedGoalRep = trace_does_not_need_body_rep
        ),
        NeedsAllNames = eff_trace_needs_all_var_names(ModuleInfo, PredInfo,
            ProcInfo, TraceLevel, TraceSuppress),
        proc_info_get_maybe_deep_profile_info(ProcInfo, MaybeHLDSDeepInfo),
        (
            MaybeHLDSDeepInfo = yes(HLDSDeepInfo),
            DeepProfInfo = generate_deep_prof_info(ProcInfo, HLDSDeepInfo),
            MaybeDeepProfInfo = yes(DeepProfInfo)
        ;
            MaybeHLDSDeepInfo = no,
            MaybeDeepProfInfo = no
        ),
        EffTraceLevel = eff_trace_level(ModuleInfo, PredInfo, ProcInfo,
            TraceLevel),
        module_info_get_table_struct_map(ModuleInfo, TableStructMap),
        PredProcId = proc(PredId, ProcId),
        (
            MaybeTableIOInfo = no,
            ( map.search(TableStructMap, PredProcId, TableStructInfo) ->
                TableStructInfo = table_struct_info(ProcTableStructInfo,
                    _Attributes),
                MaybeTableInfo = yes(proc_table_struct(ProcTableStructInfo))
            ;
                MaybeTableInfo = no
            )
        ;
            MaybeTableIOInfo = yes(TableIOInfo),
            ( map.search(TableStructMap, PredProcId, _TableStructInfo) ->
                unexpected(this_file,
                    "generate_proc_code: conflicting kinds of tabling")
            ;
                MaybeTableInfo = yes(proc_table_io_decl(TableIOInfo))
            )
        ),
        ProcLayout = proc_layout_info(RttiProcLabel, EntryLabel,
            Detism, TotalSlots, MaybeSuccipSlot, EvalMethod,
            EffTraceLevel, MaybeTraceCallLabel, MaxTraceReg,
            HeadVars, ArgModes, Goal, NeedGoalRep, InstMap0,
            TraceSlotInfo, ForceProcId, VarSet, VarTypes,
            InternalMap, MaybeTableInfo, NeedsAllNames,
            MaybeDeepProfInfo),
        global_data_add_new_proc_layout(proc(PredId, ProcId), ProcLayout,
            !GlobalData)
    ;
        true
    ),

    get_closure_layouts(CodeInfo, ClosureLayouts),
    global_data_add_new_closure_layouts(ClosureLayouts, !GlobalData),
    ProcLabel = make_proc_label(ModuleInfo, PredId, ProcId),

    Name = pred_info_name(PredInfo),
    Arity = pred_info_orig_arity(PredInfo),

    get_label_counter(CodeInfo, LabelCounter),
    % You can have user trace events even if the effective trace level is none.
    (
        ProcTraceEvents = no,
        MayAlterRtti = may_alter_rtti
    ;
        ProcTraceEvents = yes,
        MayAlterRtti = must_not_alter_rtti
    ),

    globals.lookup_bool_option(Globals, generate_bytecode, GenBytecode),
    (
        % XXX: There is a mass of calls above that the bytecode doesn't need;
        % work out which is and isn't needed and put inside the else case
        % below.
        GenBytecode = yes,
        % We don't generate bytecode for unify and compare preds.
        % The automatically generated unify and compare predicates
        % are correct by construction; for user-defined unify and
        % compare predicates, we *assume* their correctness for now
        % (perhaps not wisely).
        \+ is_unify_or_compare_pred(PredInfo),
        % Don't generate bytecode for procs with foreign code.
        goal_has_foreign(Goal) = no
    ->
        bytecode_stub(ModuleInfo, PredId, ProcId, ProcInstructions),
        ProcLabelCounter = counter.init(0)
    ;
        ProcInstructions = Instructions,
        ProcLabelCounter = LabelCounter
    ),
    get_used_env_vars(CodeInfo, UsedEnvVars),
    Proc = c_procedure(Name, Arity, proc(PredId, ProcId), CodeModel,
        ProcInstructions, ProcLabel, ProcLabelCounter, MayAlterRtti,
        UsedEnvVars).

:- pred maybe_set_trace_level(pred_info::in,
    module_info::in, module_info::out) is det.

maybe_set_trace_level(PredInfo, !ModuleInfo) :-
    module_info_get_globals(!.ModuleInfo, Globals0),
    (
        PredModule = pred_info_module(PredInfo),
        PredName = pred_info_name(PredInfo),
        PredArity = pred_info_orig_arity(PredInfo),
        no_type_info_builtin(PredModule, PredName, PredArity)
    ->
        % These predicates should never be traced, since they do not obey
        % typeinfo_liveness. Since they may be opt_imported into other
        % modules, we must switch off the tracing of such preds on a
        % pred-by-pred basis.
        globals.set_trace_level_none(Globals0, Globals1),
        module_info_set_globals(Globals1, !ModuleInfo)
    ;
        pred_info_get_origin(PredInfo, origin_special_pred(_)),
        globals.get_trace_level(Globals0, TraceLevel),
        UC_TraceLevel = trace_level_for_unify_compare(TraceLevel)
    ->
        globals.set_trace_level(UC_TraceLevel, Globals0, Globals1),
        module_info_set_globals(Globals1, !ModuleInfo)
    ;
        true
    ).

:- func generate_deep_prof_info(proc_info, deep_profile_proc_info)
    = proc_layout_proc_static.

generate_deep_prof_info(ProcInfo, HLDSDeepInfo) = DeepProfInfo :-
    HLDSDeepInfo ^ deep_layout = MaybeHLDSDeepLayout,
    (
        MaybeHLDSDeepLayout = yes(HLDSDeepLayout)
    ;
        MaybeHLDSDeepLayout = no,
        unexpected(this_file,
            "generate_deep_prof_info: no HLDS deep profiling layout info")
    ),
    HLDSDeepLayout = hlds_deep_layout(HLDSProcStatic, HLDSExcpVars),
    HLDSExcpVars = hlds_deep_excp_vars(TopCSDVar, MiddleCSDVar,
        MaybeOldOutermostVar),
    proc_info_get_stack_slots(ProcInfo, StackSlots),
    ( map.search(StackSlots, TopCSDVar, TopCSDSlot) ->
        TopCSDSlotNum = stack_slot_num(TopCSDSlot),
        map.lookup(StackSlots, MiddleCSDVar, MiddleCSDSlot),
        MiddleCSDSlotNum = stack_slot_num(MiddleCSDSlot),
        (
            MaybeOldOutermostVar = yes(OldOutermostVar),
            map.lookup(StackSlots, OldOutermostVar, OldOutermostSlot),
            OldOutermostSlotNum = stack_slot_num(OldOutermostSlot)
        ;
            MaybeOldOutermostVar = no,
            OldOutermostSlotNum = -1
        )
    ;
        TopCSDSlotNum = -1,
        MiddleCSDSlotNum = -1,
        OldOutermostSlotNum = -1
    ),
    DeepExcpSlots = deep_excp_slots(TopCSDSlotNum, MiddleCSDSlotNum,
        OldOutermostSlotNum),
    DeepProfInfo = proc_layout_proc_static(HLDSProcStatic, DeepExcpSlots).

%---------------------------------------------------------------------------%
%---------------------------------------------------------------------------%

    % Generate_category_code generates code for an entire procedure.
    % Its algorithm has three or four main stages:
    %
    %   - generate code for the body goal
    %   - generate code for the procedure entry
    %   - generate code for the procedure exit
    %   - generate code for the procedure fail (if needed)
    %
    % The first three tasks are forwarded to other procedures.
    % The fourth task, if needed, is done by generate_category_code.
    %
    % The only caller of generate_category_code, generate_proc_code,
    % has set up the code generator state to reflect what the machine
    % state will be on entry to the procedure. Ensuring that the
    % machine state at exit will conform to the expectation
    % of the caller is the job of generate_exit.
    %
    % The reason why we generate the entry code after the body is that
    % information such as the total number of stack slots needed,
    % which is needed in the procedure entry prologue, cannot be
    % conveniently obtained before generating the body, since the
    % code generator may allocate temporary variables to hold values
    % such as saved heap and trail pointers.
    %
    % Code_gen.generate_entry cannot depend on the code generator
    % state, since when it is invoked this state is not appropriate
    % for the procedure entry. Nor can it change the code generator state,
    % since that would confuse generate_exit.
    %
    % Generating CALL trace events is done by generate_category_code,
    % since only on entry to generate_category_code is the code generator
    % state set up right. Generating EXIT trace events is done by
    % generate_exit. Generating FAIL trace events is done
    % by generate_category_code, since this requires modifying how
    % we generate code for the body of the procedure (failures must
    % now branch to a different place). Since FAIL trace events are
    % part of the failure continuation, generate_category_code takes
    % care of the failure continuation as well. (Model_det procedures
    % of course have no failure continuation. Model_non procedures have
    % a failure continuation, but in the absence of tracing this
    % continuation needs no code. Only model_semi procedures need code
    % for the failure continuation at all times.)
    %
:- pred generate_category_code(code_model::in, prog_context::in, hlds_goal::in,
    resume_point_info::in, trace_slot_info::in, code_tree::out,
    maybe(label)::out, frame_info::out, code_info::in, code_info::out) is det.

generate_category_code(model_det, ProcContext, Goal, ResumePoint,
        TraceSlotInfo, Code, MaybeTraceCallLabel, FrameInfo, !CI) :-
    % Generate the code for the body of the procedure.
    get_globals(!.CI, Globals),
    globals.lookup_bool_option(Globals, middle_rec, MiddleRec),
    (
        MiddleRec = yes,
        middle_rec.match_and_generate(Goal, MiddleRecCode, !CI)
    ->
        Code = MiddleRecCode,
        MaybeTraceCallLabel = no,
        FrameInfo = frame(0, no, no)
    ;
        get_maybe_trace_info(!.CI, MaybeTraceInfo),
        (
            MaybeTraceInfo = yes(TraceInfo),
            generate_call_event(TraceInfo, ProcContext, MaybeTraceCallLabel,
                TraceCallCode, !CI)
        ;
            MaybeTraceInfo = no,
            MaybeTraceCallLabel = no,
            TraceCallCode = empty
        ),
        generate_goal(model_det, Goal, BodyCode, !CI),
        generate_entry(!.CI, model_det, Goal, ResumePoint, FrameInfo,
            EntryCode),
        generate_exit(model_det, FrameInfo, TraceSlotInfo, ProcContext,
            _, ExitCode, !CI),
        Code = tree_list([EntryCode, TraceCallCode, BodyCode, ExitCode])
    ).

generate_category_code(model_semi, ProcContext, Goal, ResumePoint,
        TraceSlotInfo, Code, MaybeTraceCallLabel, FrameInfo, !CI) :-
    set.singleton_set(FailureLiveRegs, reg(reg_r, 1)),
    FailCode = node([
        llds_instr(assign(reg(reg_r, 1), const(llconst_false)), "Fail"),
        llds_instr(livevals(FailureLiveRegs), ""),
        llds_instr(goto(code_succip), "Return from procedure call")
    ]),
    get_maybe_trace_info(!.CI, MaybeTraceInfo),
    (
        MaybeTraceInfo = yes(TraceInfo),
        generate_call_event(TraceInfo, ProcContext, MaybeTraceCallLabel,
            TraceCallCode, !CI),
        generate_goal(model_semi, Goal, BodyCode, !CI),
        generate_entry(!.CI, model_semi, Goal, ResumePoint,
            FrameInfo, EntryCode),
        generate_exit(model_semi, FrameInfo, TraceSlotInfo,
            ProcContext, RestoreDeallocCode, ExitCode, !CI),

        generate_resume_point(ResumePoint, ResumeCode, !CI),
        resume_point_vars(ResumePoint, ResumeVarList),
        set.list_to_set(ResumeVarList, ResumeVars),
        set_forward_live_vars(ResumeVars, !CI),
        % XXX A context that gives the end of the procedure definition
        % would be better than ProcContext.
        generate_external_event_code(external_port_fail, TraceInfo,
            ProcContext, MaybeFailExternalInfo, !CI),
        (
            MaybeFailExternalInfo = yes(FailExternalInfo),
            FailExternalInfo = external_event_info(_, _, TraceFailCode)
        ;
            MaybeFailExternalInfo = no,
            TraceFailCode = empty
        ),
        Code = tree_list([EntryCode, TraceCallCode, BodyCode, ExitCode,
            ResumeCode, TraceFailCode, RestoreDeallocCode, FailCode])
    ;
        MaybeTraceInfo = no,
        MaybeTraceCallLabel = no,
        generate_goal(model_semi, Goal, BodyCode, !CI),
        generate_entry(!.CI, model_semi, Goal, ResumePoint,
            FrameInfo, EntryCode),
        generate_exit(model_semi, FrameInfo, TraceSlotInfo,
            ProcContext, RestoreDeallocCode, ExitCode, !CI),
        generate_resume_point(ResumePoint, ResumeCode, !CI),
        Code = tree_list([EntryCode, BodyCode, ExitCode,
            ResumeCode, RestoreDeallocCode, FailCode])
    ).

generate_category_code(model_non, ProcContext, Goal, ResumePoint,
        TraceSlotInfo, Code, MaybeTraceCallLabel, FrameInfo, !CI) :-
    get_maybe_trace_info(!.CI, MaybeTraceInfo),
    (
        MaybeTraceInfo = yes(TraceInfo),
        generate_call_event(TraceInfo, ProcContext, MaybeTraceCallLabel,
            TraceCallCode, !CI),
        generate_goal(model_non, Goal, BodyCode, !CI),
        generate_entry(!.CI, model_non, Goal, ResumePoint,
            FrameInfo, EntryCode),
        generate_exit(model_non, FrameInfo, TraceSlotInfo,
            ProcContext, _, ExitCode, !CI),

        generate_resume_point(ResumePoint, ResumeCode, !CI),
        resume_point_vars(ResumePoint, ResumeVarList),
        set.list_to_set(ResumeVarList, ResumeVars),
        set_forward_live_vars(ResumeVars, !CI),
        % XXX A context that gives the end of the procedure definition
        % would be better than ProcContext.
        generate_external_event_code(external_port_fail, TraceInfo,
            ProcContext, MaybeFailExternalInfo, !CI),
        (
            MaybeFailExternalInfo = yes(FailExternalInfo),
            FailExternalInfo = external_event_info(_, _, TraceFailCode)
        ;
            MaybeFailExternalInfo = no,
            TraceFailCode = empty
        ),
        ( TraceSlotInfo ^ slot_trail = yes(_) ->
            MaybeFromFull = TraceSlotInfo ^ slot_from_full,
            (
                MaybeFromFull = yes(FromFullSlot),
                % Generate code which discards the ticket only if it was
                % allocated, i.e. only if MR_trace_from_full was true on entry.
                FromFullSlotLval =
                    llds.stack_slot_num_to_lval(nondet_stack, FromFullSlot),
                get_next_label(SkipLabel, !CI),
                DiscardTraceTicketCode = node([
                    llds_instr(
                        if_val(unop(logical_not, lval(FromFullSlotLval)),
                            code_label(SkipLabel)), ""),
                    llds_instr(discard_ticket, "discard retry ticket"),
                    llds_instr(label(SkipLabel), "")
                ])
            ;
                MaybeFromFull = no,
                DiscardTraceTicketCode = node([
                    llds_instr(discard_ticket, "discard retry ticket")
                ])
            )
        ;
            DiscardTraceTicketCode = empty
        ),
        FailCode = node([
            llds_instr(goto(do_fail), "fail after fail trace port")
        ]),
        Code = tree_list([EntryCode, TraceCallCode, BodyCode, ExitCode,
            ResumeCode, TraceFailCode, DiscardTraceTicketCode, FailCode])
    ;
        MaybeTraceInfo = no,
        MaybeTraceCallLabel = no,
        generate_goal(model_non, Goal, BodyCode, !CI),
        generate_entry(!.CI, model_non, Goal, ResumePoint,
            FrameInfo, EntryCode),
        generate_exit(model_non, FrameInfo, TraceSlotInfo,
            ProcContext, _, ExitCode, !CI),
        Code = tree_list([EntryCode, BodyCode, ExitCode])
    ).

:- pred generate_call_event(trace_info::in, prog_context::in,
    maybe(label)::out, code_tree::out, code_info::in, code_info::out) is det.

generate_call_event(TraceInfo, ProcContext, MaybeTraceCallLabel, TraceCallCode,
        !CI) :-
    generate_external_event_code(external_port_call, TraceInfo,
        ProcContext, MaybeCallExternalInfo, !CI),
    (
        MaybeCallExternalInfo = yes(CallExternalInfo),
        CallExternalInfo = external_event_info(TraceCallLabel, _,
            TraceCallCode),
        MaybeTraceCallLabel = yes(TraceCallLabel)
    ;
        MaybeCallExternalInfo = no,
        % This can happen for procedures containing user events
        % in shallow traced modules.
        TraceCallCode = empty,
        MaybeTraceCallLabel = no
    ).

%---------------------------------------------------------------------------%

    % Generate the prologue for a procedure.
    %
    % The prologue will contain
    %
    %   a comment to mark prologue start
    %   a comment explaining the stack layout
    %   the procedure entry label
    %   code to allocate a stack frame
    %   code to fill in some special slots in the stack frame
    %   a comment to mark prologue end
    %
    % At the moment the only special slots are the succip slot, and
    % the slots holding the call number and call depth for tracing.
    %
    % Not all frames will have all these components. For example, the code
    % to allocate a stack frame will be missing if the procedure doesn't
    % need a stack frame, and if the procedure is nondet, then the code
    % to fill in the succip slot is subsumed by the mkframe.

:- pred generate_entry(code_info::in, code_model::in, hlds_goal::in,
    resume_point_info::in, frame_info::out, code_tree::out) is det.

generate_entry(CI, CodeModel, Goal, OutsideResumePoint, FrameInfo,
        EntryCode) :-
    get_stack_slots(CI, StackSlots),
    get_varset(CI, VarSet),
    SlotsComment = explain_stack_slots(StackSlots, VarSet),
    StartComment = node([
        llds_instr(comment("Start of procedure prologue"), ""),
        llds_instr(comment(SlotsComment), "")
    ]),
    get_total_stackslot_count(CI, MainSlots),
    get_pred_id(CI, PredId),
    get_proc_id(CI, ProcId),
    get_module_info(CI, ModuleInfo),
    EntryLabel = make_local_entry_label(ModuleInfo, PredId, ProcId, no),
    LabelCode = node([
        llds_instr(label(EntryLabel), "Procedure entry point")
    ]),
    get_succip_used(CI, Used),
    (
        % Do we need to save the succip across calls?
        Used = yes,
        % Do we need to use a general slot for storing succip?
        CodeModel \= model_non
    ->
        SuccipSlot = MainSlots + 1,
        SaveSuccipCode = node([
            llds_instr(assign(stackvar(SuccipSlot), lval(succip)),
                "Save the success ip")
        ]),
        TotalSlots = SuccipSlot,
        MaybeSuccipSlot = yes(SuccipSlot)
    ;
        SaveSuccipCode = empty,
        TotalSlots = MainSlots,
        MaybeSuccipSlot = no
    ),
    get_maybe_trace_info(CI, MaybeTraceInfo),
    (
        MaybeTraceInfo = yes(TraceInfo),
        generate_slot_fill_code(CI, TraceInfo, TraceFillCode)
    ;
        MaybeTraceInfo = no,
        TraceFillCode = empty
    ),
    module_info_pred_info(ModuleInfo, PredId, PredInfo),
    ModuleName = pred_info_module(PredInfo),
    PredName = pred_info_name(PredInfo),
    Arity = pred_info_orig_arity(PredInfo),

    PushMsg = push_msg(ModuleInfo, PredId, ProcId),
    (
        CodeModel = model_non,
        resume_point_stack_addr(OutsideResumePoint, OutsideResumeAddress),
        (
            Goal = hlds_goal(call_foreign_proc(_, _, _, _, _, _, PragmaCode),
                _),
            PragmaCode = fc_impl_model_non(Fields, FieldsContext,
                _, _, _, _, _, _, _)
        ->
            StructName = foreign_proc_struct_name(ModuleName, PredName, Arity,
                ProcId),
            Struct = foreign_proc_struct(StructName, Fields, FieldsContext),
            string.format("#define\tMR_ORDINARY_SLOTS\t%d\n",
                [i(TotalSlots)], DefineStr),
            DefineComponents = [foreign_proc_raw_code(cannot_branch_away,
                proc_does_not_affect_liveness, live_lvals_info(set.init),
                DefineStr)],
            NondetFrameInfo = ordinary_frame(PushMsg, TotalSlots, yes(Struct)),
            MD = proc_may_not_duplicate,
            AllocCode = node([
                llds_instr(mkframe(NondetFrameInfo, yes(OutsideResumeAddress)),
                    "Allocate stack frame"),
                llds_instr(foreign_proc_code([], DefineComponents,
                    proc_will_not_call_mercury, no, no, no, no, no, MD), "")
            ]),
            NondetPragma = yes
        ;
            NondetFrameInfo = ordinary_frame(PushMsg, TotalSlots, no),
            AllocCode = node([
                llds_instr(mkframe(NondetFrameInfo, yes(OutsideResumeAddress)),
                    "Allocate stack frame")
            ]),
            NondetPragma = no
        )
    ;
        ( CodeModel = model_det
        ; CodeModel = model_semi
        ),
        IsLeaf = proc_body_is_leaf(Goal),
        (
            IsLeaf = is_not_leaf,
            StackIncrKind = stack_incr_nonleaf
        ;
            IsLeaf = is_leaf,
            StackIncrKind = stack_incr_leaf
        ),
        ( TotalSlots > 0 ->
            AllocCode = node([
                llds_instr(incr_sp(TotalSlots, PushMsg, StackIncrKind),
                    "Allocate stack frame")
            ])
        ;
            AllocCode = empty
        ),
        NondetPragma = no
    ),
    FrameInfo = frame(TotalSlots, MaybeSuccipSlot, NondetPragma),
    EndComment = node([
        llds_instr(comment("End of procedure prologue"), "")
    ]),
    EntryCode = tree_list([StartComment, LabelCode, AllocCode,
        SaveSuccipCode, TraceFillCode, EndComment]).

%---------------------------------------------------------------------------%

    % Generate the success epilogue for a procedure.
    %
    % The success epilogue will contain
    %
    %   a comment to mark epilogue start
    %   code to place the output arguments where their caller expects
    %   code to restore registers from some special slots
    %   code to deallocate the stack frame
    %   code to set r1 to MR_TRUE (for semidet procedures only)
    %   a jump back to the caller, including livevals information
    %   a comment to mark epilogue end
    %
    % The parts of this that restore registers and deallocate the stack
    % frame are also part of the failure epilog, which is handled by
    % our caller; this is why we return RestoreDeallocCode.
    %
    % At the moment the only special slots are the succip slot, and
    % the tracing slots (holding the call sequence number, call event
    % number, call depth, from-full indication, and trail state).
    %
    % Not all frames will have all these components. For example, for
    % nondet procedures we don't deallocate the stack frame before
    % success.
    %
    % Epilogues for procedures defined by nondet pragma C codes do not
    % follow the rules above. For such procedures, the normal functions
    % of the epilogue are handled when traversing the pragma C code goal;
    % we need only #undef a macro defined by the procedure prologue.

:- pred generate_exit(code_model::in, frame_info::in,
    trace_slot_info::in, prog_context::in, code_tree::out, code_tree::out,
    code_info::in, code_info::out) is det.

generate_exit(CodeModel, FrameInfo, TraceSlotInfo, ProcContext,
        RestoreDeallocCode, ExitCode, !CI) :-
    StartComment = node([
        llds_instr(comment("Start of procedure epilogue"), "")
    ]),
    EndComment = node([
        llds_instr(comment("End of procedure epilogue"), "")
    ]),
    FrameInfo = frame(TotalSlots, MaybeSuccipSlot, NondetPragma),
    (
        NondetPragma = yes,
        UndefStr = "#undef\tMR_ORDINARY_SLOTS\n",
        UndefComponents = [foreign_proc_raw_code(cannot_branch_away,
            proc_does_not_affect_liveness, live_lvals_info(set.init),
            UndefStr)],
        MD = proc_may_not_duplicate,
        UndefCode = node([
            llds_instr(foreign_proc_code([], UndefComponents,
                proc_will_not_call_mercury, no, no, no, no, no, MD), "")
        ]),
        RestoreDeallocCode = empty, % always empty for nondet code
        ExitCode = tree_list([StartComment, UndefCode, EndComment])
    ;
        NondetPragma = no,
        get_instmap(!.CI, InstMap),
        ArgModes = get_arginfo(!.CI),
        HeadVars = get_headvars(!.CI),
        assoc_list.from_corresponding_lists(HeadVars, ArgModes, Args),
        ( instmap.is_unreachable(InstMap) ->
            OutLvals = set.init,
            FlushCode = empty
        ;
            setup_return(Args, OutLvals, FlushCode, !CI)
        ),
        (
            MaybeSuccipSlot = yes(SuccipSlot),
            RestoreSuccipCode = node([
                llds_instr(assign(succip, lval(stackvar(SuccipSlot))),
                    "restore the success ip")
            ])
        ;
            MaybeSuccipSlot = no,
            RestoreSuccipCode = empty
        ),
        (
            ( TotalSlots = 0
            ; CodeModel = model_non
            )
        ->
            DeallocCode = empty
        ;
            DeallocCode = node([
               llds_instr(decr_sp(TotalSlots), "Deallocate stack frame")
            ])
        ),
        (
            TraceSlotInfo ^ slot_trail = yes(_),
            CodeModel \= model_non
        ->
            MaybeFromFull = TraceSlotInfo ^ slot_from_full,
            (
                MaybeFromFull = yes(FromFullSlot),
                % Generate code which prunes the ticket only if it was
                % allocated, i.e. only if MR_trace_from_full was true on entry.
                %
                % Note that to avoid duplicating label names, we need to
                % generate two different copies of this with different labels;
                % this is needed for semidet code, which will get one copy
                % in the success epilogue and one copy in the failure epilogue.

                StackId = code_model_to_main_stack(CodeModel),
                FromFullSlotLval =
                    llds.stack_slot_num_to_lval(StackId, FromFullSlot),
                get_next_label(SkipLabel, !CI),
                get_next_label(SkipLabelCopy, !CI),
                PruneTraceTicketCode = node([
                    llds_instr(if_val(unop(logical_not, lval(FromFullSlotLval)),
                        code_label(SkipLabel)), ""),
                    llds_instr(prune_ticket, "prune retry ticket"),
                    llds_instr(label(SkipLabel), "")
                ]),
                PruneTraceTicketCodeCopy = node([
                    llds_instr(if_val(unop(logical_not, lval(FromFullSlotLval)),
                        code_label(SkipLabelCopy)), ""),
                    llds_instr(prune_ticket, "prune retry ticket"),
                    llds_instr(label(SkipLabelCopy), "")
                ])
            ;
                MaybeFromFull = no,
                PruneTraceTicketCode = node([
                    llds_instr(prune_ticket, "prune retry ticket")
                ]),
                PruneTraceTicketCodeCopy = PruneTraceTicketCode
            )
        ;
            PruneTraceTicketCode = empty,
            PruneTraceTicketCodeCopy = empty
        ),

        RestoreDeallocCode = tree_list([RestoreSuccipCode,
            PruneTraceTicketCode, DeallocCode]),
        RestoreDeallocCodeCopy = tree_list([RestoreSuccipCode,
            PruneTraceTicketCodeCopy, DeallocCode]),

        get_maybe_trace_info(!.CI, MaybeTraceInfo),
        (
            MaybeTraceInfo = yes(TraceInfo),
            % XXX A context that gives the end of the procedure definition
            % would be better than CallContext.
            generate_external_event_code(external_port_exit, TraceInfo,
                ProcContext, MaybeExitExternalInfo, !CI),
            (
                MaybeExitExternalInfo = yes(ExitExternalInfo),
                ExitExternalInfo = external_event_info(_, TypeInfoDatas,
                    TraceExitCode)
            ;
                MaybeExitExternalInfo = no,
                TypeInfoDatas = map.init,
                TraceExitCode = empty
            ),
            map.values(TypeInfoDatas, TypeInfoLocnSets),
            FindBaseLvals = (pred(Lval::out) is nondet :-
                list.member(LocnSet, TypeInfoLocnSets),
                set.member(Locn, LocnSet),
                (
                    Locn = locn_direct(Lval)
                ;
                    Locn = locn_indirect(Lval, _)
                )
            ),
            solutions.solutions(FindBaseLvals, TypeInfoLvals),
            set.insert_list(OutLvals, TypeInfoLvals, LiveLvals)
        ;
            MaybeTraceInfo = no,
            TraceExitCode = empty,
            LiveLvals = OutLvals
        ),

        get_proc_info(!.CI, ProcInfo),
        proc_info_get_maybe_special_return(ProcInfo, MaybeSpecialReturn),
        (
            CodeModel = model_det,
            expect(unify(MaybeSpecialReturn, no), this_file,
                "generate_exit: det special_return"),
            SuccessCode = node([
                llds_instr(livevals(LiveLvals), ""),
                llds_instr(goto(code_succip), "Return from procedure call")
            ]),
            AllSuccessCode = tree_list([TraceExitCode, RestoreDeallocCodeCopy,
                SuccessCode])
        ;
            CodeModel = model_semi,
            expect(unify(MaybeSpecialReturn, no), this_file,
                "generate_exit: semi special_return"),
            set.insert(LiveLvals, reg(reg_r, 1), SuccessLiveRegs),
            SuccessCode = node([
                llds_instr(assign(reg(reg_r, 1), const(llconst_true)),
                    "Succeed"),
                llds_instr(livevals(SuccessLiveRegs), ""),
                llds_instr(goto(code_succip), "Return from procedure call")
            ]),
            AllSuccessCode = tree_list([TraceExitCode, RestoreDeallocCodeCopy,
                SuccessCode])
        ;
            CodeModel = model_non,
            (
                MaybeTraceInfo = yes(TraceInfo2),
                maybe_setup_redo_event(TraceInfo2, SetupRedoCode)
            ;
                MaybeTraceInfo = no,
                SetupRedoCode = empty
            ),
            (
                MaybeSpecialReturn = yes(SpecialReturn),
                SpecialReturn = generator_return(GeneratorLocnStr, DebugStr),
                ReturnMacroName = "MR_tbl_mmos_return_answer",
                ReturnCodeStr = "\t" ++ ReturnMacroName ++ "(" ++
                    DebugStr ++ ", " ++ GeneratorLocnStr ++ ");\n",
                Component = foreign_proc_user_code(no,
                    proc_does_not_affect_liveness, ReturnCodeStr),
                MD = proc_may_not_duplicate,
                SuccessCode = node([
                    llds_instr(livevals(LiveLvals), ""),
                    llds_instr(foreign_proc_code([], [Component],
                        proc_may_call_mercury, no, no, no, no, no, MD), "")
                ])
            ;
                MaybeSpecialReturn = no,
                SuccessCode = node([
                    llds_instr(livevals(LiveLvals), ""),
                    llds_instr(goto(do_succeed(no)),
                        "Return from procedure call")
                ])
            ),
            AllSuccessCode = tree_list([SetupRedoCode, TraceExitCode,
                SuccessCode])
        ),
        ExitCode = tree_list([StartComment, FlushCode, AllSuccessCode,
            EndComment])
    ).

%---------------------------------------------------------------------------%

    % Add the succip to the livevals before and after calls. Traverses the list
    % of instructions looking for livevals and calls, adding succip in the
    % stackvar number given as an argument.
    %
:- pred add_saved_succip(list(instruction)::in, int::in,
    list(instruction)::out) is det.

add_saved_succip([], _StackLoc, []).
add_saved_succip([Instr0 | Instrs0], StackLoc, [Instr | Instrs]) :-
    Instr0 = llds_instr(Uinstr0, Comment),
    (
        Uinstr0 = livevals(LiveVals0),
        Instrs0 \= [llds_instr(goto(code_succip), _) | _]
        % XXX We should also test for tailcalls
        % once we start generating them directly.
    ->
        set.insert(LiveVals0, stackvar(StackLoc), LiveVals1),
        Uinstr = livevals(LiveVals1),
        Instr = llds_instr(Uinstr, Comment)
    ;
        Uinstr0 = llcall(Target, ReturnLabel, LiveVals0, Context, GP, CM)
    ->
        map.init(Empty),
        LiveVals = [live_lvalue(locn_direct(stackvar(StackLoc)),
            live_value_succip, Empty) | LiveVals0],
        Uinstr = llcall(Target, ReturnLabel, LiveVals, Context, GP, CM),
        Instr = llds_instr(Uinstr, Comment)
    ;
        Instr = Instr0
    ),
    add_saved_succip(Instrs0, StackLoc, Instrs).

%---------------------------------------------------------------------------%

:- pred bytecode_stub(module_info::in, pred_id::in, proc_id::in,
    list(instruction)::out) is det.

bytecode_stub(ModuleInfo, PredId, ProcId, BytecodeInstructions) :-

    module_info_pred_info(ModuleInfo, PredId, PredInfo),
    ModuleSymName = pred_info_module(PredInfo),

    ModuleName = sym_name_to_string_sep(ModuleSymName, "__"),

    EntryLabel = make_local_entry_label(ModuleInfo, PredId, ProcId, no),

    PredName = pred_info_name(PredInfo),
    proc_id_to_int(ProcId, ProcNum),
    string.int_to_string(ProcNum, ProcStr),
    Arity = pred_info_orig_arity(PredInfo),
    int_to_string(Arity, ArityStr),
    PredOrFunc = pred_info_is_pred_or_func(PredInfo),

    CallStructName = "bytecode_call_info",

    append_list([
        "\t\tstatic MB_Call ", CallStructName, " = {\n",
        "\t\t\t(MB_Word)NULL,\n",
        "\t\t\t""", ModuleName, """,\n",
        "\t\t\t""", PredName, """,\n",
        "\t\t\t", ProcStr, ",\n",
        "\t\t\t", ArityStr, ",\n",
        "\t\t\t", (PredOrFunc = pf_function -> "MR_TRUE" ; "MR_FALSE"), "\n",
        "\t\t};\n"
        ], CallStruct),

    append_list([
        "\t\tMB_Native_Addr return_addr;\n",
        "\t\tMR_save_registers();\n",
        "\t\treturn_addr = MB_bytecode_call_entry(", "&",CallStructName,");\n",
        "\t\tMR_restore_registers();\n",
        "\t\tMR_GOTO(return_addr);\n"
        ], BytecodeCall),

    BytecodeInstructionsComponents = [
        foreign_proc_raw_code(cannot_branch_away,
            proc_does_not_affect_liveness, live_lvals_info(set.init), "\t{\n"),
        foreign_proc_raw_code(cannot_branch_away,
            proc_does_not_affect_liveness, live_lvals_info(set.init),
            CallStruct),
        foreign_proc_raw_code(cannot_branch_away,
            proc_does_not_affect_liveness, no_live_lvals_info, BytecodeCall),
        foreign_proc_raw_code(cannot_branch_away,
            proc_does_not_affect_liveness, live_lvals_info(set.init), "\t}\n")
    ],

    MD = proc_may_not_duplicate,
    BytecodeInstructions = [
        llds_instr(label(EntryLabel), "Procedure entry point"),
        llds_instr(foreign_proc_code([], BytecodeInstructionsComponents,
            proc_may_call_mercury, no, no, no, no, no, MD), "Entry stub")
    ].

%---------------------------------------------------------------------------%

:- type type_giving_arg
    --->    last_arg
    ;       last_but_one_arg.

push_msg(ModuleInfo, PredId, ProcId) = PushMsg :-
    module_info_pred_info(ModuleInfo, PredId, PredInfo),
    PredOrFunc = pred_info_is_pred_or_func(PredInfo),
    ModuleName = pred_info_module(PredInfo),
    PredName = pred_info_name(PredInfo),
    Arity = pred_info_orig_arity(PredInfo),
    pred_info_get_origin(PredInfo, Origin),
    ( Origin = origin_special_pred(SpecialId - TypeCtor) ->
        find_arg_type_ctor_name(TypeCtor, TypeName),
        SpecialPredName = get_special_pred_id_generic_name(SpecialId),
        FullPredName = SpecialPredName ++ "_for_" ++ TypeName
    ;
        FullPredName = PredName
    ),
    % XXX if ModuleNameString ends with [0-9] and/or FullPredName starts with
    % [0-9] then ideally we should use "'.'" rather than just ".".
    %
    PushMsg = pred_or_func_to_str(PredOrFunc) ++ " " ++
        sym_name_to_string(ModuleName) ++ "." ++
        FullPredName ++ "/" ++ int_to_string(Arity) ++ "-" ++
        int_to_string(proc_id_to_int(ProcId)).

:- pred find_arg_type_ctor_name((type_ctor)::in, string::out) is det.

find_arg_type_ctor_name(TypeCtor, TypeName) :-
    TypeCtor = type_ctor(TypeCtorSymName, TypeCtorArity),
    TypeCtorName = sym_name_to_string(TypeCtorSymName),
    string.int_to_string(TypeCtorArity, ArityStr),
    string.append_list([TypeCtorName, "_", ArityStr], TypeName).

%---------------------------------------------------------------------------%
%---------------------------------------------------------------------------%

add_all_tabling_info_structs(ModuleInfo, !GlobalData) :-
    module_info_get_table_struct_map(ModuleInfo, TableStructMap),
    map.to_assoc_list(TableStructMap, TableStructs),
    list.foldl(add_tabling_info_struct, TableStructs, !GlobalData).

:- pred add_tabling_info_struct(pair(pred_proc_id, table_struct_info)::in,
    global_data::in, global_data::out) is det.

add_tabling_info_struct(PredProcId - TableStructInfo, !GlobalData) :-
    TableStructInfo = table_struct_info(ProcTableStructInfo, TableAttributes),
    ProcTableStructInfo = proc_table_struct_info(RttiProcLabel, _TVarSet,
        _Context, NumInputs, NumOutputs, InputSteps, MaybeOutputSteps,
        ArgInfos, EvalMethod),

    global_data_get_static_cell_info(!.GlobalData, StaticCellInfo0),
    convert_table_arg_info(ArgInfos, NumPTIs, PTIVectorRval,
        TVarVectorRval, StaticCellInfo0, StaticCellInfo),
    global_data_set_static_cell_info(StaticCellInfo, !GlobalData),
    NumArgs = NumInputs + NumOutputs,
    expect(unify(NumArgs, NumPTIs), this_file,
        "add_tabling_info_struct: args mismatch"),

    MaybeSizeLimit = TableAttributes ^ table_attr_size_limit,
    Statistics = TableAttributes ^ table_attr_statistics,
    ModuleName = RttiProcLabel ^ proc_module,
    ProcLabel = make_proc_label_from_rtti(RttiProcLabel),
    Var = tabling_info_struct(ModuleName, ProcLabel, EvalMethod,
        NumInputs, NumOutputs, InputSteps, MaybeOutputSteps, PTIVectorRval,
        TVarVectorRval, MaybeSizeLimit, Statistics),
    global_data_add_new_proc_var(PredProcId, Var, !GlobalData).

%---------------------------------------------------------------------------%

:- func this_file = string.

this_file = "proc_gen.m".

%---------------------------------------------------------------------------%
