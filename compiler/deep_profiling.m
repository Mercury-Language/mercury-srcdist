%-----------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et
%-----------------------------------------------------------------------------%
% Copyright (C) 2001-2008 The University of Melbourne.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury distribution.
%-----------------------------------------------------------------------------%
%
% File: deep_profiling.m.
% Main author: conway.
%
% This module applies the deep profiling transformation described in the paper
% ``Engineering a profiler for a logic programming language'' by Thomas Conway
% and Zoltan Somogyi.
%
%-----------------------------------------------------------------------------%

:- module ll_backend.deep_profiling.
:- interface.

:- import_module hlds.hlds_module.

%-----------------------------------------------------------------------------%

:- pred apply_deep_profiling_transformation(module_info::in, module_info::out)
    is det.

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- implementation.

:- import_module backend_libs.rtti.
:- import_module check_hlds.mode_util.
:- import_module check_hlds.type_util.
:- import_module hlds.code_model.
:- import_module hlds.goal_util.
:- import_module hlds.hlds_goal.
:- import_module hlds.hlds_pred.
:- import_module hlds.hlds_rtti.
:- import_module hlds.instmap.
:- import_module hlds.pred_table.
:- import_module libs.compiler_util.
:- import_module libs.globals.
:- import_module libs.options.
:- import_module mdbcomp.prim_data.
:- import_module mdbcomp.program_representation.
:- import_module parse_tree.prog_data.
:- import_module parse_tree.prog_type.
:- import_module transform_hlds.
:- import_module transform_hlds.dependency_graph.

:- import_module assoc_list.
:- import_module bool.
:- import_module cord.
:- import_module counter.
:- import_module int.
:- import_module list.
:- import_module map.
:- import_module maybe.
:- import_module pair.
:- import_module set.
:- import_module string.
:- import_module svmap.
:- import_module svvarset.
:- import_module term.
:- import_module varset.

%-----------------------------------------------------------------------------%

apply_deep_profiling_transformation(!ModuleInfo) :-
    module_info_get_globals(!.ModuleInfo, Globals),
    globals.lookup_bool_option(Globals, deep_profile_tail_recursion,
        TailRecursion),
    (
        TailRecursion = yes,
        apply_tail_recursion_transformation(!ModuleInfo)
    ;
        TailRecursion = no
    ),
    module_info_predids(PredIds, !ModuleInfo),
    module_info_get_predicate_table(!.ModuleInfo, PredTable0),
    predicate_table_get_preds(PredTable0, PredMap0),
    list.foldl(transform_predicate(!.ModuleInfo), PredIds, PredMap0, PredMap),
    predicate_table_set_preds(PredMap, PredTable0, PredTable),
    module_info_set_predicate_table(PredTable, !ModuleInfo).

%-----------------------------------------------------------------------------%

:- pred apply_tail_recursion_transformation(module_info::in, module_info::out)
    is det.

apply_tail_recursion_transformation(!ModuleInfo) :-
    module_info_ensure_dependency_info(!ModuleInfo),
    module_info_dependency_info(!.ModuleInfo, DepInfo),
    hlds_dependency_info_get_dependency_ordering(DepInfo, SCCs),
    list.foldl(apply_tail_recursion_to_scc, SCCs, !ModuleInfo).

:- pred apply_tail_recursion_to_scc(list(pred_proc_id)::in,
    module_info::in, module_info::out) is det.

apply_tail_recursion_to_scc(SCC, !ModuleInfo) :-
    % For the time being, we only look for self-tail-recursive calls.
    list.foldl(apply_tail_recursion_to_proc, SCC, !ModuleInfo).

:- pred apply_tail_recursion_to_proc(pred_proc_id::in,
    module_info::in, module_info::out) is det.

apply_tail_recursion_to_proc(PredProcId, !ModuleInfo) :-
    PredProcId = proc(PredId, ProcId),
    module_info_preds(!.ModuleInfo, PredTable0),
    map.lookup(PredTable0, PredId, PredInfo0),
    pred_info_get_arg_types(PredInfo0, Types),
    pred_info_get_procedures(PredInfo0, ProcTable0),
    map.lookup(ProcTable0, ProcId, ProcInfo0),
    proc_info_get_goal(ProcInfo0, Goal0),
    proc_info_interface_determinism(ProcInfo0, Detism),
    (
        determinism_components(Detism, _CanFail, SolnCount),
        SolnCount \= at_most_many,
        proc_info_get_headvars(ProcInfo0, HeadVars),
        proc_info_get_argmodes(ProcInfo0, Modes),
        find_list_of_output_args(HeadVars, Modes, Types, !.ModuleInfo,
            Outputs),
        clone_proc_id(ProcTable0, ProcId, CloneProcId),
        ClonePredProcId = proc(PredId, CloneProcId),
        ApplyInfo = apply_tail_recursion_info(!.ModuleInfo,
            [PredProcId - ClonePredProcId], Detism, Outputs),
        apply_tail_recursion_to_goal(Goal0, Goal, ApplyInfo, no, FoundTailCall,
            _),
        FoundTailCall = yes
    ->
        proc_info_set_goal(Goal, ProcInfo0, ProcInfo1),
        figure_out_rec_call_numbers(Goal, 0, _N, [], TailCallSites),
        OrigDeepRecInfo = yes(deep_recursion_info(
            outer_proc(ClonePredProcId),
            [visible_scc_data(PredProcId, ClonePredProcId, TailCallSites)])),
        OrigDeepProfileInfo = deep_profile_proc_info(OrigDeepRecInfo, no),
        CloneDeepRecInfo = yes(deep_recursion_info(inner_proc(PredProcId),
            [visible_scc_data(PredProcId, ClonePredProcId, TailCallSites)])),
        CloneDeepProfileInfo = deep_profile_proc_info(CloneDeepRecInfo, no),
        proc_info_set_maybe_deep_profile_info(yes(OrigDeepProfileInfo),
            ProcInfo1, ProcInfo),
        proc_info_set_maybe_deep_profile_info(
            yes(CloneDeepProfileInfo), ProcInfo1, CloneProcInfo),
        map.det_update(ProcTable0, ProcId, ProcInfo, ProcTable1),
        map.det_insert(ProcTable1, CloneProcId, CloneProcInfo, ProcTable),
        pred_info_set_procedures(ProcTable, PredInfo0, PredInfo),
        map.det_update(PredTable0, PredId, PredInfo, PredTable),
        module_info_set_preds(PredTable, !ModuleInfo)
    ;
        true
    ).

:- pred find_list_of_output_args(list(prog_var)::in, list(mer_mode)::in,
    list(mer_type)::in, module_info::in, list(prog_var)::out) is det.

find_list_of_output_args(Vars, Modes, Types, ModuleInfo, !:Outputs) :-
    ( find_list_of_output_args_2(Vars, Modes, Types, ModuleInfo, !:Outputs) ->
        true
    ;
        unexpected(this_file, "find_list_of_output_args: list length mismatch")
    ).

:- pred find_list_of_output_args_2(list(prog_var)::in, list(mer_mode)::in,
    list(mer_type)::in, module_info::in, list(prog_var)::out) is semidet.

find_list_of_output_args_2([], [], [], _, []).
find_list_of_output_args_2([Var | Vars], [Mode | Modes], [Type | Types],
        ModuleInfo, Outputs) :-
    find_list_of_output_args_2(Vars, Modes, Types, ModuleInfo, Outputs1),
    mode_to_arg_mode(ModuleInfo, Mode, Type, ArgMode),
    (
        ArgMode = top_in,
        Outputs = Outputs1
    ;
        ( ArgMode = top_out
        ; ArgMode = top_unused
        ),
        Outputs = [Var | Outputs1]
    ).

%-----------------------------------------------------------------------------%

:- type apply_tail_recursion_info
    --->    apply_tail_recursion_info(
                moduleinfo  :: module_info,
                scc_ppids   :: assoc_list(pred_proc_id),
                detism      :: determinism,
                outputs     :: list(prog_var)
            ).

:- pred apply_tail_recursion_to_goal(hlds_goal::in, hlds_goal::out,
    apply_tail_recursion_info::in, bool::in, bool::out,
    maybe(list(prog_var))::out) is det.

apply_tail_recursion_to_goal(Goal0, Goal, ApplyInfo, !FoundTailCall,
        Continue) :-
    Goal0 = hlds_goal(GoalExpr0, GoalInfo0),
    (
        GoalExpr0 = call_foreign_proc(_, _, _, _, _, _, _),
        Goal = Goal0,
        Continue = no
    ;
        GoalExpr0 = plain_call(PredId, ProcId, Args, Builtin, UnifyContext,
            SymName),
        (
            PredProcId = proc(PredId, ProcId),
            assoc_list.search(ApplyInfo ^ scc_ppids, PredProcId,
                ClonePredProcId),
            module_info_pred_proc_info(ApplyInfo ^ moduleinfo,
                PredId, ProcId, PredInfo, ProcInfo),
            proc_info_interface_determinism(ProcInfo, CallDetism),
            CallDetism = ApplyInfo ^ detism,
            pred_info_get_arg_types(PredInfo, Types),
            proc_info_get_argmodes(ProcInfo, Modes),
            find_list_of_output_args(Args, Modes, Types,
                ApplyInfo ^ moduleinfo, CallOutputs),
            CallOutputs = ApplyInfo ^ outputs,
            Builtin = not_builtin
        ->
            ClonePredProcId = proc(ClonePredId, CloneProcId),
            GoalExpr = plain_call(ClonePredId, CloneProcId, Args,
                Builtin, UnifyContext, SymName),
            goal_info_add_feature(feature_tailcall, GoalInfo0, GoalInfo),
            Goal = hlds_goal(GoalExpr, GoalInfo),
            !:FoundTailCall = yes
        ;
            Goal = Goal0
        ),
        Continue = no
    ;
        GoalExpr0 = generic_call(_, _, _, _),
        Goal = Goal0,
        Continue = no
    ;
        GoalExpr0 = unify(_, _, _, Unify0, _),
        Goal = Goal0,
        (
            Unify0 = assign(ToVar, FromVar),
            apply_tail_recursion_process_assign(ApplyInfo ^ outputs,
                ToVar, FromVar, Outputs),
            Continue = yes(Outputs)
        ;
            ( Unify0 = construct(_, _, _, _, _, __, _)
            ; Unify0 = deconstruct(_, _, _, _, __, _)
            ; Unify0 = simple_test(_, _)
            ; Unify0 = complicated_unify(_, _, _)
            ),
            Continue = no
        )
    ;
        GoalExpr0 = conj(ConjType, Goals0),
        (
            ConjType = plain_conj,
            apply_tail_recursion_to_conj(Goals0, Goals, ApplyInfo,
                !FoundTailCall, Continue),
            GoalExpr = conj(ConjType, Goals),
            Goal = hlds_goal(GoalExpr, GoalInfo0)
        ;
            ConjType = parallel_conj,
            Goal = Goal0,
            Continue = no
        )
    ;
        GoalExpr0 = disj(Goals0),
        apply_tail_recursion_to_disj(Goals0, Goals, ApplyInfo, !FoundTailCall),
        GoalExpr = disj(Goals),
        Goal = hlds_goal(GoalExpr, GoalInfo0),
        Continue = no
    ;
        GoalExpr0 = switch(Var, CanFail, Cases0),
        apply_tail_recursion_to_cases(Cases0, Cases, ApplyInfo,
            !FoundTailCall),
        GoalExpr = switch(Var, CanFail, Cases),
        Goal = hlds_goal(GoalExpr, GoalInfo0),
        Continue = no
    ;
        GoalExpr0 = if_then_else(Vars, Cond, Then0, Else0),
        apply_tail_recursion_to_goal(Then0, Then, ApplyInfo,
            !FoundTailCall, _),
        apply_tail_recursion_to_goal(Else0, Else, ApplyInfo,
            !FoundTailCall, _),
        GoalExpr = if_then_else(Vars, Cond, Then, Else),
        Goal = hlds_goal(GoalExpr, GoalInfo0),
        Continue = no
    ;
        GoalExpr0 = scope(_, _),
        Goal = Goal0,
        Continue = no
    ;
        GoalExpr0 = negation(_),
        Goal = Goal0,
        Continue = no
    ;
        GoalExpr0 = shorthand(_),
        unexpected(this_file, "shorthand in apply_tail_recursion_to_goal")
    ).

:- pred apply_tail_recursion_process_assign(list(prog_var)::in,
    prog_var::in, prog_var::in, list(prog_var)::out) is det.

apply_tail_recursion_process_assign([], _, _, []).
apply_tail_recursion_process_assign([Output0 | Outputs0], ToVar, FromVar,
        [Output | Outputs]) :-
    ( ToVar = Output0 ->
        Output = FromVar
    ;
        Output = Output0
    ),
    apply_tail_recursion_process_assign(Outputs0, ToVar, FromVar, Outputs).

:- pred apply_tail_recursion_to_conj(list(hlds_goal)::in,
    list(hlds_goal)::out, apply_tail_recursion_info::in,
    bool::in, bool::out, maybe(list(prog_var))::out) is det.

apply_tail_recursion_to_conj([], [], ApplyInfo,
        !FoundTailCall, yes(ApplyInfo ^ outputs)).
apply_tail_recursion_to_conj([Goal0 | Goals0], [Goal | Goals], ApplyInfo0,
        !FoundTailCall, Continue) :-
    apply_tail_recursion_to_conj(Goals0, Goals, ApplyInfo0, !FoundTailCall,
        Continue1),
    (
        Continue1 = yes(Outputs),
        apply_tail_recursion_to_goal(Goal0, Goal,
            ApplyInfo0 ^ outputs := Outputs, !FoundTailCall, Continue)
    ;
        Continue1 = no,
        Goal = Goal0,
        Continue = no
    ).

:- pred apply_tail_recursion_to_disj(list(hlds_goal)::in, list(hlds_goal)::out,
    apply_tail_recursion_info::in, bool::in, bool::out) is det.

apply_tail_recursion_to_disj([], [], _, !FoundTailCall).
apply_tail_recursion_to_disj([Goal0], [Goal], ApplyInfo, !FoundTailCall) :-
    apply_tail_recursion_to_goal(Goal0, Goal, ApplyInfo, !FoundTailCall, _).
apply_tail_recursion_to_disj([Goal0 | Goals0], [Goal0 | Goals], ApplyInfo,
        !FoundTailCall) :-
    Goals0 = [_ | _],
    apply_tail_recursion_to_disj(Goals0, Goals, ApplyInfo, !FoundTailCall).

:- pred apply_tail_recursion_to_cases(list(case)::in, list(case)::out,
    apply_tail_recursion_info::in, bool::in, bool::out) is det.

apply_tail_recursion_to_cases([], [], _, !FoundTailCall).
apply_tail_recursion_to_cases([Case0 | Cases0], [Case | Cases], ApplyInfo,
        !FoundTailCall) :-
    Case0 = case(MainConsId, OtherConsIds, Goal0),
    apply_tail_recursion_to_goal(Goal0, Goal, ApplyInfo, !FoundTailCall, _),
    Case = case(MainConsId, OtherConsIds, Goal),
    apply_tail_recursion_to_cases(Cases0, Cases, ApplyInfo, !FoundTailCall).

%-----------------------------------------------------------------------------%

:- pred figure_out_rec_call_numbers(hlds_goal::in, int::in, int::out,
    list(int)::in, list(int)::out) is det.

figure_out_rec_call_numbers(Goal, !N, !TailCallSites) :-
    Goal = hlds_goal(GoalExpr, GoalInfo),
    (
        GoalExpr = call_foreign_proc(Attrs, _, _, _, _, _, _),
        ( get_may_call_mercury(Attrs) = proc_may_call_mercury ->
            !:N = !.N + 1
        ;
            true
        )
    ;
        GoalExpr = plain_call(_, _, _, BuiltinState, _, _),
        Features = goal_info_get_features(GoalInfo),
        ( set.member(feature_tailcall, Features) ->
            !:TailCallSites = [!.N | !.TailCallSites]
        ;
            true
        ),
        (
            ( BuiltinState = out_of_line_builtin
            ; BuiltinState = not_builtin
            ),
            !:N = !.N + 1
        ;
            BuiltinState = inline_builtin
        )
    ;
        GoalExpr = generic_call(_, _, _, _),
        !:N = !.N + 1
    ;
        GoalExpr = unify(_, _, _, _, _)
    ;
        GoalExpr = conj(_ConjType, Goals),
        figure_out_rec_call_numbers_in_goal_list(Goals, !N, !TailCallSites)
    ;
        GoalExpr = disj(Goals),
        figure_out_rec_call_numbers_in_goal_list(Goals, !N, !TailCallSites)
    ;
        GoalExpr = switch(_, _, Cases),
        figure_out_rec_call_numbers_in_case_list(Cases, !N, !TailCallSites)
    ;
        GoalExpr = if_then_else(_, Cond, Then, Else),
        figure_out_rec_call_numbers(Cond, !N, !TailCallSites),
        figure_out_rec_call_numbers(Then, !N, !TailCallSites),
        figure_out_rec_call_numbers(Else, !N, !TailCallSites)
    ;
        GoalExpr = scope(_, Goal1),
        figure_out_rec_call_numbers(Goal1, !N, !TailCallSites)
    ;
        GoalExpr = negation(Goal1),
        figure_out_rec_call_numbers(Goal1, !N, !TailCallSites)
    ;
        GoalExpr = shorthand(_),
        unexpected(this_file, "shorthand in apply_tail_recursion_to_goal")
    ).

:- pred figure_out_rec_call_numbers_in_goal_list(list(hlds_goal)::in,
    int::in, int::out, list(int)::in, list(int)::out) is det.

figure_out_rec_call_numbers_in_goal_list([], !N, !TailCallSites).
figure_out_rec_call_numbers_in_goal_list([Goal|Goals], !N, !TailCallSites) :-
    figure_out_rec_call_numbers(Goal, !N, !TailCallSites),
    figure_out_rec_call_numbers_in_goal_list(Goals, !N, !TailCallSites).

:- pred figure_out_rec_call_numbers_in_case_list(list(case)::in,
    int::in, int::out, list(int)::in, list(int)::out) is det.

figure_out_rec_call_numbers_in_case_list([], !N, !TailCallSites).
figure_out_rec_call_numbers_in_case_list([Case|Cases], !N, !TailCallSites) :-
    Case = case(_, _, Goal),
    figure_out_rec_call_numbers(Goal, !N, !TailCallSites),
    figure_out_rec_call_numbers_in_case_list(Cases, !N, !TailCallSites).

%-----------------------------------------------------------------------------%

:- pred transform_predicate(module_info::in, pred_id::in,
    pred_table::in, pred_table::out) is det.

transform_predicate(ModuleInfo, PredId, PredMap0, PredMap) :-
    map.lookup(PredMap0, PredId, PredInfo0),
    ProcIds = pred_info_non_imported_procids(PredInfo0),
    pred_info_get_procedures(PredInfo0, ProcTable0),
    list.foldl(maybe_transform_procedure(ModuleInfo, PredId),
        ProcIds, ProcTable0, ProcTable),
    pred_info_set_procedures(ProcTable, PredInfo0, PredInfo),
    map.det_update(PredMap0, PredId, PredInfo, PredMap).

:- pred maybe_transform_procedure(module_info::in, pred_id::in, proc_id::in,
    proc_table::in, proc_table::out) is det.

maybe_transform_procedure(ModuleInfo, PredId, ProcId, !ProcTable) :-
    map.lookup(!.ProcTable, ProcId, ProcInfo0),
    proc_info_get_goal(ProcInfo0, Goal0),
    PredModuleName = predicate_module(ModuleInfo, PredId),
    (
        % XXX We need to eliminate nondet C code...
        Goal0 = hlds_goal(call_foreign_proc(_, _, _, _, _, _, Impl), _),
        Impl = fc_impl_model_non(_, _, _, _, _, _, _, _, _)
    ->
        unexpected(this_file,
            "deep profiling is incompatible with nondet foreign code")
    ;
        % We don't want to transform the procedures for managing the deep
        % profiling call graph, or we'd get infinite recursion.
        PredModuleName = mercury_profiling_builtin_module
    ->
        true
    ;
        deep_prof_transform_proc(ModuleInfo, proc(PredId, ProcId),
            ProcInfo0, ProcInfo),
        map.det_update(!.ProcTable, ProcId, ProcInfo, !:ProcTable)
    ).

:- pred deep_prof_transform_proc(module_info::in, pred_proc_id::in,
    proc_info::in, proc_info::out) is det.

deep_prof_transform_proc(ModuleInfo, PredProcId, !ProcInfo) :-
    proc_info_get_maybe_deep_profile_info(!.ProcInfo, MaybeDeepInfo),
    (
        MaybeDeepInfo = yes(DeepInfo),
        DeepInfo = deep_profile_proc_info(MaybeDeepRecInfo, _),
        MaybeDeepRecInfo = yes(RecInfo),
        RecInfo ^ role = inner_proc(_)
    ->
        transform_inner_proc(ModuleInfo, PredProcId, !ProcInfo)
    ;
        transform_normal_proc(ModuleInfo, PredProcId, !ProcInfo)
    ).


%-----------------------------------------------------------------------------%

    % Information relating to variables.  When a variable is added to a
    % procedure both these values should be updated, and can be using
    % generate_var/5 below.
    %
:- type var_info
    --->    var_info(
                varinfo_varset      :: prog_varset,
                varinfo_vartypes    :: vartypes
            ). 


    % This structure contains stateful information used throughout the deep
    % profiling transformation of a procedure.
    %
:- type deep_info
    --->    deep_info(
                deep_module_info        :: module_info,
                deep_pred_proc_id       :: pred_proc_id,
                deep_current_csd        :: prog_var,
                deep_site_num_counter   :: counter,
                deep_call_sites         :: list(call_site_static_data),
                deep_varinfos           :: var_info,
                deep_proc_filename      :: string,
                deep_maybe_rec_info     :: maybe(deep_recursion_info)
            ).


    % Transfrom a procedure.
    %
:- pred transform_normal_proc(module_info::in, pred_proc_id::in,
    proc_info::in, proc_info::out) is det.

transform_normal_proc(ModuleInfo, PredProcId, !ProcInfo) :-
    module_info_get_globals(ModuleInfo, Globals),
    proc_info_get_goal(!.ProcInfo, Goal0),
    Goal0 = hlds_goal(_, GoalInfo0),
    proc_info_get_varset(!.ProcInfo, VarSet0),
    proc_info_get_vartypes(!.ProcInfo, VarTypes0),
    some [!VarInfo] (
        !:VarInfo = var_info(VarSet0, VarTypes0),
        generate_var("TopCSD", c_pointer_type, TopCSD, !VarInfo),
        generate_var("MiddleCSD", c_pointer_type, MiddleCSD, !VarInfo),
        generate_var("ProcStaticLayout", c_pointer_type, ProcStaticVar, 
            !VarInfo),
        
        proc_info_get_context(!.ProcInfo, Context),
        FileName = term.context_file(Context),
        LineNumber = term.context_line(Context),

        proc_info_get_maybe_deep_profile_info(!.ProcInfo, MaybeDeepProfInfo),
        extract_deep_rec_info(MaybeDeepProfInfo, MaybeRecInfo),
        DeepInfo0 = deep_info(ModuleInfo, PredProcId, MiddleCSD,
            counter.init(0), [], !.VarInfo, FileName, MaybeRecInfo),

        % This call transforms the goals of the procedure.
        deep_prof_transform_goal(empty, Goal0, Goal1, _,
            DeepInfo0, DeepInfo),
        !:VarInfo = DeepInfo ^ deep_varinfos,
        CallSites = DeepInfo ^ deep_call_sites,

        % Do coverage profiling if requested.
        globals.lookup_bool_option(Globals, coverage_profiling,
            DoCoverageProfiling),
        (
            DoCoverageProfiling = yes,
            coverage_prof_transform_goal(ModuleInfo, PredProcId,
                MaybeRecInfo, Goal1, TransformedGoal, !VarInfo,
                CoveragePoints)
        ;
            DoCoverageProfiling = no,
            CoveragePoints = [],
            TransformedGoal = Goal1
        ),

        (
            MaybeRecInfo = yes(RecInfo),
            RecInfo ^ role = inner_proc(OuterPredProcId)
        ->
            OuterPredProcId = proc(PredId, ProcId)
        ;
            PredProcId = proc(PredId, ProcId)
        ),

        globals.lookup_bool_option(Globals, use_activation_counts,
            UseActivationCounts),
        
        IsInInterface = is_proc_in_interface(ModuleInfo, PredId, ProcId),
        ProcStatic = hlds_proc_static(FileName, LineNumber, IsInInterface,
            CallSites, CoveragePoints),
        ShroudedPredProcId = shroud_pred_proc_id(proc(PredId, ProcId)),
        ProcStaticConsId = deep_profiling_proc_layout(ShroudedPredProcId),
        generate_unify(ProcStaticConsId, ProcStaticVar,
            BindProcStaticVarGoal),

        % Wrap the procedure body inside more goals that run the port code
        % as necessary.  This depends on the code model of the procedure
        % being considered.
        CodeModel = proc_info_interface_code_model(!.ProcInfo),
        (
            (
                CodeModel = model_det,
                BuildProcBody = build_det_proc_body
            ;
                CodeModel = model_semi,
                BuildProcBody = build_semi_proc_body
            ),
            maybe_generate_activation_ptr(UseActivationCounts, TopCSD,
                MiddleCSD, MaybeActivationPtr, ExcpVars, !VarInfo),
            BuildProcBody(ModuleInfo, TopCSD, MiddleCSD, ProcStaticVar,
                MaybeActivationPtr, GoalInfo0, BindProcStaticVarGoal,
                TransformedGoal, Goal)
        ;
            CodeModel = model_non,
            generate_outermost_proc_dyns(UseActivationCounts, TopCSD,
                MiddleCSD, MaybeOldActivationPtr, NewOutermostProcDyn,
                ExcpVars, !VarInfo),
            build_non_proc_body(ModuleInfo, TopCSD, MiddleCSD,
                ProcStaticVar, MaybeOldActivationPtr, NewOutermostProcDyn,
                GoalInfo0, BindProcStaticVarGoal, TransformedGoal, Goal)
        ),
        
        !.VarInfo = var_info(Vars, VarTypes)
    ),
    proc_info_set_varset(Vars, !ProcInfo),
    proc_info_set_vartypes(VarTypes, !ProcInfo),
    proc_info_set_goal(Goal, !ProcInfo),
    record_hlds_proc_static(ProcStatic, ExcpVars, !ProcInfo).


% Wrap the procedure body in the deep profiling port goals.

:- pred build_det_proc_body(module_info::in, prog_var::in, prog_var::in, 
    prog_var::in, maybe(prog_var)::in, hlds_goal_info::in, hlds_goal::in,
    hlds_goal::in, hlds_goal::out) is det.

build_det_proc_body(ModuleInfo, TopCSD, MiddleCSD, ProcStaticVar,
        MaybeActivationPtr, GoalInfo0, BindProcStaticVarGoal, Goal0, Goal) :-
    (
        MaybeActivationPtr = yes(ActivationPtr1),
        generate_deep_det_call(ModuleInfo, "det_call_port_code_sr", 4,
            [ProcStaticVar, TopCSD, MiddleCSD, ActivationPtr1],
            [TopCSD, MiddleCSD, ActivationPtr1], CallPortCode0),
        goal_add_feature(feature_save_deep_excp_vars,
            CallPortCode0, CallPortCode),
        generate_deep_det_call(ModuleInfo, "det_exit_port_code_sr", 3,
            [TopCSD, MiddleCSD, ActivationPtr1], [], ExitPortCode)
    ;
        MaybeActivationPtr = no,
        generate_deep_det_call(ModuleInfo, "det_call_port_code_ac", 3,
            [ProcStaticVar, TopCSD, MiddleCSD],
            [TopCSD, MiddleCSD], CallPortCode0),
        goal_add_feature(feature_save_deep_excp_vars,
            CallPortCode0, CallPortCode),
        generate_deep_det_call(ModuleInfo, "det_exit_port_code_ac", 2,
            [TopCSD, MiddleCSD], [], ExitPortCode)
    ),

    make_impure(GoalInfo0, GoalInfo),
    GoalExpr = conj(plain_conj, [
        BindProcStaticVarGoal,
        CallPortCode,
        Goal0,
        ExitPortCode
    ]),
    Goal = hlds_goal(GoalExpr, GoalInfo).


:- pred build_semi_proc_body(module_info::in, prog_var::in, prog_var::in, 
    prog_var::in, maybe(prog_var)::in, hlds_goal_info::in, hlds_goal::in,
    hlds_goal::in, hlds_goal::out) is det.

build_semi_proc_body(ModuleInfo, TopCSD, MiddleCSD, ProcStaticVar,
        MaybeActivationPtr, GoalInfo0, BindProcStaticVarGoal, Goal0, Goal) :-
    (
        MaybeActivationPtr = yes(ActivationPtr1),
        generate_deep_det_call(ModuleInfo, "semi_call_port_code_sr", 4,
            [ProcStaticVar, TopCSD, MiddleCSD, ActivationPtr1],
            [TopCSD, MiddleCSD, ActivationPtr1], CallPortCode0),
        goal_add_feature(feature_save_deep_excp_vars,
            CallPortCode0, CallPortCode),
        generate_deep_det_call(ModuleInfo, "semi_exit_port_code_sr", 3,
            [TopCSD, MiddleCSD, ActivationPtr1], [], ExitPortCode),
        generate_deep_call(ModuleInfo, "semi_fail_port_code_sr", 3,
            [TopCSD, MiddleCSD, ActivationPtr1], no, detism_failure,
            FailPortCode),
        NewNonlocals = list_to_set([TopCSD, MiddleCSD, ActivationPtr1])
    ;
        MaybeActivationPtr = no,
        generate_deep_det_call(ModuleInfo, "semi_call_port_code_ac", 3,
            [ProcStaticVar, TopCSD, MiddleCSD],
            [TopCSD, MiddleCSD], CallPortCode0),
        goal_add_feature(feature_save_deep_excp_vars,
            CallPortCode0, CallPortCode),
        generate_deep_det_call(ModuleInfo, "semi_exit_port_code_ac", 2,
            [TopCSD, MiddleCSD], [], ExitPortCode),
        generate_deep_call(ModuleInfo, "semi_fail_port_code_ac", 2,
            [TopCSD, MiddleCSD], no, detism_failure, FailPortCode),
        NewNonlocals = list_to_set([TopCSD, MiddleCSD])
    ),

    ExitConjGoalInfo = goal_info_add_nonlocals_make_impure(GoalInfo0,
        NewNonlocals),

    make_impure(GoalInfo0, GoalInfo),
    GoalExpr = conj(plain_conj, [
        BindProcStaticVarGoal,
        CallPortCode,
        hlds_goal(
            disj([
                hlds_goal(conj(plain_conj, [Goal0, ExitPortCode]),
                    ExitConjGoalInfo),
                FailPortCode
            ]),
            ExitConjGoalInfo)
    ]),
    Goal = hlds_goal(GoalExpr, GoalInfo).


:- pred build_non_proc_body(module_info::in, prog_var::in, prog_var::in, 
    prog_var::in, maybe(prog_var)::in, prog_var::in, hlds_goal_info::in,
    hlds_goal::in, hlds_goal::in, hlds_goal::out) is det.

build_non_proc_body(ModuleInfo, TopCSD, MiddleCSD, ProcStaticVar,
        MaybeOldActivationPtr, NewOutermostProcDyn, GoalInfo0,
        BindProcStaticVarGoal, Goal0, Goal) :-
    (
        MaybeOldActivationPtr = yes(OldOutermostProcDyn2),
        generate_deep_det_call(ModuleInfo, "non_call_port_code_sr", 5,
            [ProcStaticVar, TopCSD, MiddleCSD,
            OldOutermostProcDyn2, NewOutermostProcDyn],
            [TopCSD, MiddleCSD, OldOutermostProcDyn2, NewOutermostProcDyn],
            CallPortCode0),
        goal_add_feature(feature_save_deep_excp_vars,
            CallPortCode0, CallPortCode),
        generate_deep_det_call(ModuleInfo, "non_exit_port_code_sr", 3,
            [TopCSD, MiddleCSD, OldOutermostProcDyn2], [],
            ExitPortCode),
        generate_deep_call(ModuleInfo, "non_fail_port_code_sr", 3,
            [TopCSD, MiddleCSD, OldOutermostProcDyn2], no,
            detism_failure, FailPortCode),
        generate_deep_call(ModuleInfo, "non_redo_port_code_sr", 2,
            [MiddleCSD, NewOutermostProcDyn], no,
            detism_failure, RedoPortCode0),
        NewNonlocals = list_to_set([TopCSD, MiddleCSD, OldOutermostProcDyn2])
    ;
        MaybeOldActivationPtr = no,
        generate_deep_det_call(ModuleInfo, "non_call_port_code_ac", 4,
            [ProcStaticVar, TopCSD, MiddleCSD, NewOutermostProcDyn],
            [TopCSD, MiddleCSD, NewOutermostProcDyn],
            CallPortCode0),
        goal_add_feature(feature_save_deep_excp_vars,
            CallPortCode0, CallPortCode),
        generate_deep_det_call(ModuleInfo, "non_exit_port_code_ac", 2,
            [TopCSD, MiddleCSD], [], ExitPortCode),
        generate_deep_call(ModuleInfo, "non_fail_port_code_ac", 2,
            [TopCSD, MiddleCSD], no, detism_failure, FailPortCode),
        generate_deep_call(ModuleInfo, "non_redo_port_code_ac", 2,
            [MiddleCSD, NewOutermostProcDyn], no,
            detism_failure, RedoPortCode0),
        NewNonlocals = list_to_set([TopCSD, MiddleCSD])
    ),

    RedoPortCode0 = hlds_goal(RedoPortExpr, RedoPortGoalInfo0),
    goal_info_add_feature(feature_preserve_backtrack_into,
        RedoPortGoalInfo0, RedoPortGoalInfo),
    RedoPortCode = hlds_goal(RedoPortExpr, RedoPortGoalInfo),

    % Even though the procedure has a model_non interface determinism, the
    % actual determinism of its original body goal may have been at_most once.
    % However, the exit/redo disjunction we insert into the procedure body
    % means that the procedure body does actually leave a nondet stack frame
    % when it succeeds, and its determinism must be adjusted accordingly.
    %
    Detism0 = goal_info_get_determinism(GoalInfo0),
    determinism_components(Detism0, CanFail, _),
    determinism_components(Detism, CanFail, at_most_many),
    goal_info_set_determinism(Detism, GoalInfo0, GoalInfo1),

    ExitRedoNonLocals = set.union(NewNonlocals,
        list_to_set([NewOutermostProcDyn])),
    ExitRedoGoalInfo = impure_reachable_init_goal_info(ExitRedoNonLocals,
        detism_multi),

    CallExitRedoGoalInfo = goal_info_add_nonlocals_make_impure(GoalInfo1,
        ExitRedoNonLocals),

    make_impure(GoalInfo1, GoalInfo),
    GoalExpr = conj(plain_conj, [
        BindProcStaticVarGoal,
        CallPortCode,
        hlds_goal(
            disj([
                hlds_goal(
                    conj(plain_conj, [
                        Goal0,
                        hlds_goal(
                            disj([
                                ExitPortCode,
                                RedoPortCode
                            ]),
                            ExitRedoGoalInfo)
                    ]),
                    CallExitRedoGoalInfo),
                FailPortCode
            ]),
            CallExitRedoGoalInfo)
    ]),
    Goal = hlds_goal(GoalExpr, GoalInfo).


    % Transform an inner procedure for deep profiling.  Inner procedures are
    % created by the tail recursion preservation pass above.
    %
    % XXX: Inner procedures have no coverage profiling transformation done to
    % them yet.  This is because they are currently broken, and hence disabled.
    %
:- pred transform_inner_proc(module_info::in, pred_proc_id::in,
    proc_info::in, proc_info::out) is det.

transform_inner_proc(ModuleInfo, PredProcId, !ProcInfo) :-
    proc_info_get_goal(!.ProcInfo, Goal0),
    Goal0 = hlds_goal(_, GoalInfo0),
    proc_info_get_varset(!.ProcInfo, VarSet0),
    proc_info_get_vartypes(!.ProcInfo, VarTypes0),
    VarInfo0 = var_info(VarSet0, VarTypes0),
    generate_var("MiddleCSD", c_pointer_type, MiddleCSD, VarInfo0,
        VarInfo1),

    Context = goal_info_get_context(GoalInfo0),
    FileName = term.context_file(Context),

    proc_info_get_maybe_deep_profile_info(!.ProcInfo, MaybeDeepProfInfo),
    extract_deep_rec_info(MaybeDeepProfInfo, MaybeRecInfo),
    DeepInfo0 = deep_info(ModuleInfo, PredProcId, MiddleCSD,
        counter.init(0), [], VarInfo1,
        FileName, MaybeRecInfo),

    deep_prof_transform_goal(empty, Goal0, TransformedGoal, _,
        DeepInfo0, DeepInfo),

    VarInfo = DeepInfo ^ deep_varinfos,
    VarInfo = var_info(VarSet, VarTypes),

    proc_info_set_varset(VarSet, !ProcInfo),
    proc_info_set_vartypes(VarTypes, !ProcInfo),
    proc_info_set_goal(TransformedGoal, !ProcInfo).

%-----------------------------------------------------------------------------%

:- func is_proc_in_interface(module_info, pred_id, proc_id) = bool.

is_proc_in_interface(ModuleInfo, PredId, _ProcId) = IsInInterface :-
    module_info_pred_info(ModuleInfo, PredId, PredInfo),
    (
        ( pred_info_is_exported(PredInfo)
        ; pred_info_is_pseudo_exported(PredInfo)
        )
    ->
        IsInInterface = yes
    ;
        IsInInterface = no
    ).

%-----------------------------------------------------------------------------%

:- pred deep_prof_transform_goal(goal_path::in, hlds_goal::in, hlds_goal::out,
    bool::out, deep_info::in, deep_info::out) is det.

deep_prof_transform_goal(Path, Goal0, Goal, AddedImpurity, !DeepInfo) :-
    Goal0 = hlds_goal(GoalExpr0, GoalInfo0),
    (
        GoalExpr0 = plain_call(_, _, _, BuiltinState, _, _),
        (
            ( BuiltinState = out_of_line_builtin
            ; BuiltinState = not_builtin
            ),
            deep_prof_wrap_call(Path, Goal0, Goal, !DeepInfo),
            AddedImpurity = yes
        ;
            BuiltinState = inline_builtin,
            Goal = Goal0,
            AddedImpurity = no
        )
    ;
        GoalExpr0 = generic_call(GenericCall, _, _, _),
        (
            ( GenericCall = higher_order(_, _, _, _)
            ; GenericCall = class_method(_, _, _, _)
            ),
            deep_prof_wrap_call(Path, Goal0, Goal, !DeepInfo),
            AddedImpurity = yes
        ;
            ( GenericCall = event_call(_)
            ; GenericCall = cast(_)
            ),
            Goal = Goal0,
            AddedImpurity = no
        )
    ;
        GoalExpr0 = call_foreign_proc(Attrs, _, _, _, _, _, _),
        ( get_may_call_mercury(Attrs) = proc_may_call_mercury ->
            deep_prof_wrap_foreign_code(Path, Goal0, Goal, !DeepInfo),
            AddedImpurity = yes
        ;
            Goal = Goal0,
            AddedImpurity = no
        )
    ;
        GoalExpr0 = unify(_, _, _, _, _),
        Goal = Goal0,
        AddedImpurity = no
    ;
        GoalExpr0 = conj(ConjType, Goals0),
        deep_prof_transform_conj(0, ConjType, Path, Goals0, Goals,
            AddedImpurity, !DeepInfo),
        add_impurity_if_needed(AddedImpurity, GoalInfo0, GoalInfo),
        GoalExpr = conj(ConjType, Goals),
        Goal = hlds_goal(GoalExpr, GoalInfo)
    ;
        GoalExpr0 = disj(Goals0),
        deep_prof_transform_disj(0, Path, Goals0, Goals, AddedImpurity,
            !DeepInfo),
        add_impurity_if_needed(AddedImpurity, GoalInfo0, GoalInfo),
        GoalExpr = disj(Goals),
        Goal = hlds_goal(GoalExpr, GoalInfo)
    ;
        GoalExpr0 = switch(Var, CF, Cases0),
        ModuleInfo = !.DeepInfo ^ deep_module_info,
        VarTypes = !.DeepInfo ^ deep_varinfos ^ varinfo_vartypes,
        map.lookup(VarTypes, Var, Type),
        ( switch_type_num_functors(ModuleInfo, Type, NumFunctors) ->
            MaybeNumFunctors = yes(NumFunctors)
        ;
            MaybeNumFunctors = no
        ),
        deep_prof_transform_switch(MaybeNumFunctors, 0, Path, Cases0, Cases,
            AddedImpurity, !DeepInfo),
        add_impurity_if_needed(AddedImpurity, GoalInfo0, GoalInfo),
        GoalExpr = switch(Var, CF, Cases),
        Goal = hlds_goal(GoalExpr, GoalInfo)
    ;
        GoalExpr0 = negation(SubGoal0),
        deep_prof_transform_goal(cord.snoc(Path, step_neg), SubGoal0, SubGoal,
            AddedImpurity, !DeepInfo),
        add_impurity_if_needed(AddedImpurity, GoalInfo0, GoalInfo),
        GoalExpr = negation(SubGoal),
        Goal = hlds_goal(GoalExpr, GoalInfo)
    ;
        GoalExpr0 = if_then_else(IVars, Cond0, Then0, Else0),
        deep_prof_transform_goal(cord.snoc(Path, step_ite_cond), Cond0, Cond,
            AddedImpurityC, !DeepInfo),
        deep_prof_transform_goal(cord.snoc(Path, step_ite_then), Then0, Then,
            AddedImpurityT, !DeepInfo),
        deep_prof_transform_goal(cord.snoc(Path, step_ite_else), Else0, Else,
            AddedImpurityE, !DeepInfo),
        (
            ( AddedImpurityC = yes
            ; AddedImpurityT = yes
            ; AddedImpurityE = yes
            )
        ->
            AddedImpurity = yes
        ;
            AddedImpurity = no
        ),
        add_impurity_if_needed(AddedImpurity, GoalInfo0, GoalInfo),
        GoalExpr = if_then_else(IVars, Cond, Then, Else),
        Goal = hlds_goal(GoalExpr, GoalInfo)
    ;
        GoalExpr0 = scope(Reason0, SubGoal0),
        SubGoal0 = hlds_goal(_, InnerInfo),
        OuterDetism = goal_info_get_determinism(GoalInfo0),
        InnerDetism = goal_info_get_determinism(InnerInfo),
        ( InnerDetism = OuterDetism ->
            MaybeCut = scope_is_no_cut,
            Reason = Reason0,
            AddForceCommit = no
        ;
            % Given a subgoal containing both at_most_many code and impure
            % code, determinism analysis will remove the `scope' wrapped
            % around that subgoal if it is allowed to. If we get here, then
            % the subgoal inside the `scope' contains at_most_many code
            % (which means that removing the scope will change its determinism)
            % and the deep profiling transformation will make it impure
            % as well.

            MaybeCut = scope_is_cut,
            ( Reason0 = commit(_) ->
                Reason = commit(force_pruning),
                AddForceCommit = no
            ;
                Reason = Reason0,
                AddForceCommit = yes
            )
        ),
        deep_prof_transform_goal(cord.snoc(Path, step_scope(MaybeCut)),
            SubGoal0, SubGoal, AddedImpurity, !DeepInfo),
        add_impurity_if_needed(AddedImpurity, GoalInfo0, GoalInfo),
        (
            AddForceCommit = no,
            Goal = hlds_goal(scope(Reason, SubGoal), GoalInfo)
        ;
            AddForceCommit = yes,
            InnerGoal = hlds_goal(scope(Reason, SubGoal), GoalInfo),
            Goal = hlds_goal(scope(commit(force_pruning), InnerGoal), GoalInfo)
        )
    ;
        GoalExpr0 = shorthand(_),
        unexpected(this_file,
            "deep_prof_transform_goal: shorthand should have gone by now")
    ).

:- pred deep_prof_transform_conj(int::in,
    conj_type::in, goal_path::in,
    list(hlds_goal)::in, list(hlds_goal)::out, bool::out,
    deep_info::in, deep_info::out) is det.

deep_prof_transform_conj(_, _, _, [], [], no, !DeepInfo).
deep_prof_transform_conj(N, ConjType, Path, [Goal0 | Goals0], Goals,
        AddedImpurity, !DeepInfo) :-
    N1 = N + 1,
    deep_prof_transform_goal(cord.snoc(Path, step_conj(N1)), Goal0, Goal,
        AddedImpurityFirst, !DeepInfo),
    deep_prof_transform_conj(N1, ConjType, Path, Goals0,
        TailGoals, AddedImpurityLater, !DeepInfo),
    Goal = hlds_goal(GoalExpr, _),
    (
        GoalExpr = conj(plain_conj, Conjuncts),
        ConjType = plain_conj
    ->
        Goals = Conjuncts ++ TailGoals
    ;
        Goals = [Goal | TailGoals]
    ),
    bool.or(AddedImpurityFirst, AddedImpurityLater, AddedImpurity).

:- pred deep_prof_transform_disj(int::in, goal_path::in,
    list(hlds_goal)::in, list(hlds_goal)::out, bool::out,
    deep_info::in, deep_info::out) is det.

deep_prof_transform_disj(_, _, [], [], no, !DeepInfo).
deep_prof_transform_disj(N, Path, [Goal0 | Goals0], [Goal | Goals],
        AddedImpurity, !DeepInfo) :-
    N1 = N + 1,
    deep_prof_transform_goal(cord.snoc(Path, step_disj(N1)), Goal0, Goal,
        AddedImpurityFirst, !DeepInfo),
    deep_prof_transform_disj(N1, Path, Goals0, Goals, AddedImpurityLater,
        !DeepInfo),
    bool.or(AddedImpurityFirst, AddedImpurityLater, AddedImpurity).

:- pred deep_prof_transform_switch(maybe(int)::in, int::in, goal_path::in,
    list(case)::in, list(case)::out, bool::out,
    deep_info::in, deep_info::out) is det.

deep_prof_transform_switch(_, _, _, [], [], no, !DeepInfo).
deep_prof_transform_switch(MaybeNumCases, N, Path,
        [Case0 | Cases0], [Case | Cases], AddedImpurity, !DeepInfo) :-
    N1 = N + 1,
    Case0 = case(MainConsId, OtherConsIds, Goal0),
    deep_prof_transform_goal(cord.snoc(Path, step_switch(N1, MaybeNumCases)),
        Goal0, Goal, AddedImpurityFirst, !DeepInfo),
    Case = case(MainConsId, OtherConsIds, Goal),
    deep_prof_transform_switch(MaybeNumCases, N1, Path, Cases0, Cases,
        AddedImpurityLater, !DeepInfo),
    bool.or(AddedImpurityFirst, AddedImpurityLater, AddedImpurity).

:- pred deep_prof_wrap_call(goal_path::in, hlds_goal::in, hlds_goal::out,
    deep_info::in, deep_info::out) is det.

deep_prof_wrap_call(GoalPath, Goal0, Goal, !DeepInfo) :-
    Goal0 = hlds_goal(GoalExpr0, GoalInfo0),
    ModuleInfo = !.DeepInfo ^ deep_module_info,
    GoalFeatures = goal_info_get_features(GoalInfo0),
    goal_info_remove_feature(feature_tailcall, GoalInfo0, GoalInfo1),
    make_impure(GoalInfo1, GoalInfo),

    % We need to make the call itself impure. If we didn't do so,
    % then simplify could eliminate the goal (e.g. if it was a duplicate
    % call). The result would be a prepare_for_{...}_call whose execution
    % is not followed by the execution of the call port code of the callee.
    % This would leave the MR_csd_callee_ptr field NULL, which violates
    % invariants of the deep profiling tree (which allows this field to be
    % NULL only temporarily, between the prepare_for_{...}_call and the
    % call port code).
    Goal1 = hlds_goal(GoalExpr0, GoalInfo),

    SiteNumCounter0 = !.DeepInfo ^ deep_site_num_counter,
    counter.allocate(SiteNum, SiteNumCounter0, SiteNumCounter),
    VarInfo0 = !.DeepInfo ^ deep_varinfos,
    generate_var("SiteNum", int_type, SiteNumVar, VarInfo0, VarInfo1),
    generate_unify(int_const(SiteNum), SiteNumVar, SiteNumVarGoal),
    !:DeepInfo = !.DeepInfo ^ deep_varinfos := VarInfo1,
    !:DeepInfo = !.DeepInfo ^ deep_site_num_counter := SiteNumCounter,

    Context = goal_info_get_context(GoalInfo0),
    FileName0 = term.context_file(Context),
    LineNumber = term.context_line(Context),
    compress_filename(!.DeepInfo, FileName0, FileName),
    CallKind = classify_call(ModuleInfo, GoalExpr0),
    (
        CallKind = call_class_normal(PredProcId),
        ( set.member(feature_tailcall, GoalFeatures) ->
            generate_deep_det_call(ModuleInfo, "prepare_for_tail_call", 1,
                [SiteNumVar], [], PrepareGoal)
        ;
            generate_deep_det_call(ModuleInfo, "prepare_for_normal_call", 1,
                [SiteNumVar], [], PrepareGoal)
        ),
        PredProcId = proc(PredId, ProcId),
        TypeSubst = compute_type_subst(GoalExpr0, !.DeepInfo),
        MaybeRecInfo = !.DeepInfo ^ deep_maybe_rec_info,
        (
            MaybeRecInfo = yes(RecInfo1),
            RecInfo1 ^ role = inner_proc(OuterPredProcId),
            PredProcId = !.DeepInfo ^ deep_pred_proc_id
        ->
            OuterPredProcId = proc(OuterPredId, OuterProcId),
            RttiProcLabel = make_rtti_proc_label(ModuleInfo,
                OuterPredId, OuterProcId)
        ;
            MaybeRecInfo = yes(RecInfo2),
            RecInfo2 ^ role = outer_proc(InnerPredProcId),
            PredProcId = InnerPredProcId
        ->
            OuterPredProcId = !.DeepInfo ^ deep_pred_proc_id,
            OuterPredProcId = proc(OuterPredId, OuterProcId),
            RttiProcLabel = make_rtti_proc_label(ModuleInfo,
                OuterPredId, OuterProcId)
        ;
            RttiProcLabel = make_rtti_proc_label(ModuleInfo, PredId, ProcId)
        ),
        CallSite = normal_call(RttiProcLabel, TypeSubst,
            FileName, LineNumber, GoalPath),
        Goal2 = Goal1
    ;
        CallKind = call_class_special(_PredProcId, TypeInfoVar),
        generate_deep_det_call(ModuleInfo, "prepare_for_special_call", 2,
            [SiteNumVar, TypeInfoVar], [], PrepareGoal),
        CallSite = special_call(FileName, LineNumber, GoalPath),
        Goal2 = Goal1
    ;
        CallKind = call_class_generic(Generic),
        (
            Generic = higher_order(ClosureVar, _, _, _),
            generate_deep_det_call(ModuleInfo, "prepare_for_ho_call", 2,
                [SiteNumVar, ClosureVar], [], PrepareGoal),
            CallSite = higher_order_call(FileName, LineNumber, GoalPath)
        ;
            Generic = class_method(TypeClassInfoVar, MethodNum, _, _),
            VarInfo2 = !.DeepInfo ^ deep_varinfos,
            generate_var("MethodNum", int_type, MethodNumVar, VarInfo2, 
                VarInfo3),
            !:DeepInfo = !.DeepInfo ^ deep_varinfos := VarInfo3,
            generate_unify(int_const(MethodNum), MethodNumVar,
                MethodNumVarGoal),
            generate_deep_det_call(ModuleInfo, "prepare_for_method_call", 3,
                [SiteNumVar, TypeClassInfoVar, MethodNumVar],
                [], PrepareCallGoal),
            PrepareCallGoal = hlds_goal(_, PrepareCallGoalInfo),
            PrepareGoalExpr = conj(plain_conj,
                [MethodNumVarGoal, PrepareCallGoal]),
            PrepareGoal = hlds_goal(PrepareGoalExpr, PrepareCallGoalInfo),
            CallSite = method_call(FileName, LineNumber, GoalPath)
        ;
            Generic = event_call(_),
            unexpected(this_file, "deep_profiling.wrap_call: event_call")
        ;
            Generic = cast(_),
            unexpected(this_file, "deep_profiling.wrap_call: cast")
        ),
        GoalCodeModel = goal_info_get_code_model(GoalInfo0),
        module_info_get_globals(ModuleInfo, Globals),
        globals.lookup_bool_option(Globals, use_zeroing_for_ho_cycles,
            UseZeroing),
        (
            UseZeroing = yes,
            deep_prof_transform_higher_order_call(Globals, GoalCodeModel,
                Goal1, Goal2, !DeepInfo)
        ;
            UseZeroing = no,
            Goal2 = Goal1
        )
    ),

    !:DeepInfo = !.DeepInfo ^ deep_call_sites :=
        (!.DeepInfo ^ deep_call_sites ++ [CallSite]),
    (
        set.member(feature_tailcall, GoalFeatures),
        !.DeepInfo ^ deep_maybe_rec_info = yes(RecInfo),
        RecInfo ^ role = outer_proc(_)
    ->
        VisSCC = RecInfo ^ visible_scc,
        MiddleCSD = !.DeepInfo ^ deep_current_csd,
        (
            VisSCC = [],
            CallGoals = [],
            ExitGoals = [],
            FailGoals = [],
            SaveRestoreVars = []
        ;
            VisSCC = [SCCmember],
            generate_recursion_counter_saves_and_restores(
                SCCmember ^ rec_call_sites, MiddleCSD,
                CallGoals, ExitGoals, FailGoals, SaveRestoreVars, !DeepInfo)
        ;
            VisSCC = [_, _ | _],
            unexpected(this_file,
                "wrap_call: multi-procedure SCCs not yet implemented")
        ),

        CodeModel = goal_info_get_code_model(GoalInfo0),
        (
            CodeModel = model_det,
            list.condense([
                CallGoals,
                [SiteNumVarGoal, PrepareGoal, Goal2],
                ExitGoals
            ], Goals),
            GoalExpr = conj(plain_conj, Goals)
        ;
            ( CodeModel = model_semi
            ; CodeModel = model_non
            ),
            ExtraVars = list_to_set([MiddleCSD | SaveRestoreVars]),
            WrappedGoalGoalInfo =
                goal_info_add_nonlocals_make_impure(GoalInfo, ExtraVars),

            ReturnFailsGoalInfo =
                impure_unreachable_init_goal_info(ExtraVars, detism_failure),

            FailGoalInfo = fail_goal_info,
            FailGoal = hlds_goal(disj([]), FailGoalInfo),

            list.append(FailGoals, [FailGoal], FailGoalsAndFail),

            DisjGoalExpr = disj([
                hlds_goal(
                    conj(plain_conj, [
                        SiteNumVarGoal,
                        PrepareGoal,
                        Goal2 |
                        ExitGoals
                    ]),
                    WrappedGoalGoalInfo),
                hlds_goal(
                    conj(plain_conj, FailGoalsAndFail),
                    ReturnFailsGoalInfo)
            ]),
            DisjGoal = hlds_goal(DisjGoalExpr, WrappedGoalGoalInfo),
            Goals = CallGoals ++ [DisjGoal],
            GoalExpr = conj(plain_conj, Goals)
        )
    ;
        GoalExpr = conj(plain_conj, [SiteNumVarGoal, PrepareGoal, Goal2])
    ),
    Goal = hlds_goal(GoalExpr, GoalInfo).

:- pred deep_prof_transform_higher_order_call(globals::in, code_model::in,
    hlds_goal::in, hlds_goal::out, deep_info::in, deep_info::out) is det.

deep_prof_transform_higher_order_call(Globals, CodeModel, Goal0, Goal,
        !DeepInfo) :-
    some [!VarInfo] (
        !:VarInfo = !.DeepInfo ^ deep_varinfos,

        generate_var("SavedPtr", c_pointer_type, SavedPtrVar, !VarInfo),

        globals.lookup_bool_option(Globals, use_activation_counts,
            UseActivationCounts),
        (
            UseActivationCounts = yes,

            generate_var("SavedCounter", int_type, SavedCountVar, !VarInfo),
            ExtraNonLocals = set.list_to_set([SavedCountVar, SavedPtrVar]),

            generate_deep_det_call(!.DeepInfo ^ deep_module_info,
                "save_and_zero_activation_info_ac", 2,
                [SavedCountVar, SavedPtrVar],
                [SavedCountVar, SavedPtrVar], SaveStuff),
            generate_deep_det_call(!.DeepInfo ^ deep_module_info,
                "reset_activation_info_ac", 2,
                [SavedCountVar, SavedPtrVar], [], RestoreStuff),
            generate_deep_det_call(!.DeepInfo ^ deep_module_info,
                "rezero_activation_info_ac", 0,
                [], [], ReZeroStuff)
        ;
            UseActivationCounts = no,

            ExtraNonLocals = set.list_to_set([SavedPtrVar]),

            generate_deep_det_call(!.DeepInfo ^ deep_module_info,
                "save_and_zero_activation_info_sr", 1,
                [SavedPtrVar], [SavedPtrVar], SaveStuff),
            generate_deep_det_call(!.DeepInfo ^ deep_module_info,
                "reset_activation_info_sr", 1,
                [SavedPtrVar], [], RestoreStuff),
            generate_deep_det_call(!.DeepInfo ^ deep_module_info,
                "rezero_activation_info_sr", 0,
                [], [], ReZeroStuff)
        ),

        !:DeepInfo = !.DeepInfo ^ deep_varinfos := !.VarInfo
    ),
    
    Goal0 = hlds_goal(_, GoalInfo0),
    ExtGoalInfo = goal_info_add_nonlocals_make_impure(GoalInfo0,
        ExtraNonLocals),

    % XXX We should build up NoBindExtGoalInfo from scratch.
    instmap_delta_init_reachable(EmptyDelta),
    goal_info_set_instmap_delta(EmptyDelta, ExtGoalInfo, NoBindExtGoalInfo),

    FailGoalInfo = fail_goal_info,
    FailGoal = hlds_goal(disj([]), FailGoalInfo),

    RestoreFailGoalInfo = impure_unreachable_init_goal_info(ExtraNonLocals,
        detism_failure),

    RezeroFailGoalInfo = impure_unreachable_init_goal_info(set.init,
        detism_failure),

    make_impure(GoalInfo0, GoalInfo),
    (
        CodeModel = model_det,
        GoalExpr = conj(plain_conj, [SaveStuff, Goal0, RestoreStuff]),
        Goal = hlds_goal(GoalExpr, GoalInfo)
    ;
        CodeModel = model_semi,
        GoalExpr = conj(plain_conj, [
            SaveStuff,
            hlds_goal(
                disj([
                    hlds_goal(
                        conj(plain_conj, [Goal0, RestoreStuff]),
                        ExtGoalInfo),
                    hlds_goal(
                        conj(plain_conj, [RestoreStuff, FailGoal]),
                        RestoreFailGoalInfo)
                ]),
                ExtGoalInfo)
        ]),
        Goal = hlds_goal(GoalExpr, GoalInfo)
    ;
        CodeModel = model_non,
        GoalExpr = conj(plain_conj, [
            SaveStuff,
            hlds_goal(
                disj([
                    hlds_goal(
                        conj(plain_conj, [
                            Goal0,
                            hlds_goal(
                                disj([
                                    RestoreStuff,
                                    hlds_goal(
                                        conj(plain_conj,
                                            [ReZeroStuff, FailGoal]),
                                        RezeroFailGoalInfo)
                                ]),
                                NoBindExtGoalInfo)
                        ]),
                        ExtGoalInfo),
                    hlds_goal(
                        conj(plain_conj, [RestoreStuff, FailGoal]),
                        RestoreFailGoalInfo)
                ]),
                ExtGoalInfo)
        ]),
        Goal = hlds_goal(GoalExpr, GoalInfo)
    ).

:- pred deep_prof_wrap_foreign_code(goal_path::in,
    hlds_goal::in, hlds_goal::out, deep_info::in, deep_info::out) is det.

deep_prof_wrap_foreign_code(GoalPath, Goal0, Goal, !DeepInfo) :-
    Goal0 = hlds_goal(_, GoalInfo0),
    ModuleInfo = !.DeepInfo ^ deep_module_info,

    SiteNumCounter0 = !.DeepInfo ^ deep_site_num_counter,
    counter.allocate(SiteNum, SiteNumCounter0, SiteNumCounter),
    generate_var("SiteNum", int_type, SiteNumVar, !.DeepInfo ^
        deep_varinfos, VarInfo),
    generate_unify(int_const(SiteNum), SiteNumVar, SiteNumVarGoal),

    generate_deep_det_call(ModuleInfo, "prepare_for_callback", 1,
        [SiteNumVar], [], PrepareGoal),

    Context = goal_info_get_context(GoalInfo0),
    LineNumber = term.context_line(Context),
    FileName0 = term.context_file(Context),
    compress_filename(!.DeepInfo, FileName0, FileName),
    CallSite = callback(FileName, LineNumber, GoalPath),

    make_impure(GoalInfo0, GoalInfo),
    Goal = hlds_goal(conj(plain_conj, [SiteNumVarGoal, PrepareGoal, Goal0]),
        GoalInfo),
    !:DeepInfo = !.DeepInfo ^ deep_site_num_counter := SiteNumCounter,
    !:DeepInfo = !.DeepInfo ^ deep_varinfos := VarInfo,
    !:DeepInfo = !.DeepInfo ^ deep_call_sites :=
        !.DeepInfo ^ deep_call_sites ++ [CallSite].

:- pred compress_filename(deep_info::in, string::in, string::out) is det.

compress_filename(Deep, FileName0, FileName) :-
    ( FileName0 = Deep ^ deep_proc_filename ->
        FileName = ""
    ;
        FileName = FileName0
    ).

:- type call_class
    --->    call_class_normal(pred_proc_id)
            % For normal first order calls

    ;       call_class_special(pred_proc_id, prog_var)
            % For calls to unify/2, compare/3 and
            % compare_representation/3

    ;       call_class_generic(generic_call).
            % For higher order and typeclass method calls

:- func classify_call(module_info, hlds_goal_expr) = call_class.

classify_call(ModuleInfo, Expr) = Class :-
    (
        Expr = plain_call(PredId, ProcId, Args, _, _, _),
        (
            lookup_builtin_pred_proc_id(ModuleInfo,
                mercury_public_builtin_module, "unify",
                pf_predicate, 2, mode_no(0), PredId, _),
            Args = [TypeInfoVar | _]
        ->
            Class = call_class_special(proc(PredId, ProcId), TypeInfoVar)
        ;
            lookup_builtin_pred_proc_id(ModuleInfo,
                mercury_public_builtin_module, "compare",
                pf_predicate, 3, mode_no(0), PredId, _),
            Args = [TypeInfoVar | _]
        ->
            Class = call_class_special(proc(PredId, ProcId), TypeInfoVar)
        ;
            lookup_builtin_pred_proc_id(ModuleInfo,
                mercury_public_builtin_module,
                "compare_representation", pf_predicate, 3,
                mode_no(0), PredId, _),
            Args = [TypeInfoVar | _]
        ->
            Class = call_class_special(proc(PredId, ProcId), TypeInfoVar)
        ;
            Class = call_class_normal(proc(PredId, ProcId))
        )
    ;
        Expr = generic_call(Generic, _, _, _),
        Class = call_class_generic(Generic)
    ;
        ( Expr = call_foreign_proc(_, _, _, _, _, _, _)
        ; Expr = unify(_, _, _, _, _)
        ; Expr = conj(_, _)
        ; Expr = disj(_)
        ; Expr = switch(_, _, _)
        ; Expr = if_then_else(_, _, _, _)
        ; Expr = negation(_)
        ; Expr = scope(_, _)
        ; Expr = shorthand(_)
        ),
        unexpected(this_file, "unexpected goal type in classify_call/2")
    ).

:- func compute_type_subst(hlds_goal_expr, deep_info) = string.

% XXX we don't compute type substitution strings yet.
compute_type_subst(_, _) = "".

    % The maximum value of N for which save_recursion_depth_N,
    % restore_recursion_depth_exit_N and restore_recursion_depth_fail_N
    % exist in library/profiling_builtin.m.
    %
:- func max_save_restore_vector_size = int.

max_save_restore_vector_size = 9.

:- pred generate_recursion_counter_saves_and_restores(list(int)::in,
    prog_var::in, list(hlds_goal)::out, list(hlds_goal)::out,
    list(hlds_goal)::out, list(prog_var)::out,
    deep_info::in, deep_info::out) is det.

generate_recursion_counter_saves_and_restores(CSNs, CSDVar, CallGoals,
        ExitGoals, FailGoals, ExtraVars, !DeepInfo) :-
    list.chunk(CSNs, max_save_restore_vector_size, CSNChunks),
    generate_recursion_counter_saves_and_restores_2(CSNChunks, CSDVar,
        CallGoals, ExitGoals, FailGoals, ExtraVars, !DeepInfo).

:- pred generate_recursion_counter_saves_and_restores_2(list(list(int))::in,
    prog_var::in, list(hlds_goal)::out, list(hlds_goal)::out,
    list(hlds_goal)::out, list(prog_var)::out,
    deep_info::in, deep_info::out) is det.

generate_recursion_counter_saves_and_restores_2([], _, [], [], [], [],
        !DeepInfo).
generate_recursion_counter_saves_and_restores_2([Chunk | Chunks], CSDVar,
        CallGoals, ExitGoals, FailGoals, ExtraVars, !DeepInfo) :-

    list.map_foldl(generate_depth_var, Chunk, DepthVars, !DeepInfo),

    % We generate three separate variables to hold the constant CSN vector.
    % If we used only one, the code generator would have to save its value
    % on the stack when we enter the disjunction that wraps the goal.
    list.length(Chunk, Length),
    generate_csn_vector(Length, Chunk, CallVars1, CallGoals1, CallCellVar,
        !DeepInfo),
    generate_csn_vector(Length, Chunk, ExitVars1, ExitGoals1, ExitCellVar,
        !DeepInfo),
    generate_csn_vector(Length, Chunk, FailVars1, FailGoals1, FailCellVar,
        !DeepInfo),
    list.condense([CallVars1, ExitVars1, FailVars1], ExtraVars1),

    CallPredName = string.format("save_recursion_depth_%d", [i(Length)]),
    ExitPredName = string.format("restore_recursion_depth_exit_%d",
        [i(Length)]),
    FailPredName = string.format("restore_recursion_depth_fail_%d",
        [i(Length)]),
    ModuleInfo = !.DeepInfo ^ deep_module_info,
    generate_deep_det_call(ModuleInfo, CallPredName, Length + 2,
        [CSDVar, CallCellVar | DepthVars], DepthVars, CallCellGoal),
    generate_deep_det_call(ModuleInfo, ExitPredName, Length + 2,
        [CSDVar, ExitCellVar | DepthVars], [], ExitCellGoal),
    generate_deep_det_call(ModuleInfo, FailPredName, Length + 2,
        [CSDVar, FailCellVar | DepthVars], [], FailCellGoal),

    generate_recursion_counter_saves_and_restores_2(Chunks, CSDVar,
        CallGoals2, ExitGoals2, FailGoals2, ExtraVars2, !DeepInfo),

    list.append(CallGoals1, [CallCellGoal | CallGoals2], CallGoals),
    list.append(ExitGoals1, [ExitCellGoal | ExitGoals2], ExitGoals),
    list.append(FailGoals1, [FailCellGoal | FailGoals2], FailGoals),
    list.append(ExtraVars1, ExtraVars2, ExtraVars).

:- pred generate_depth_var(int::in, prog_var::out,
    deep_info::in, deep_info::out) is det.

generate_depth_var(CSN, DepthVar, !DeepInfo) :-
    VarInfo0 = !.DeepInfo ^ deep_varinfos,
    VarName = string.format("Depth%d", [i(CSN)]),
    generate_var(VarName, int_type, DepthVar, VarInfo0, VarInfo),
    !:DeepInfo = !.DeepInfo ^ deep_varinfos := VarInfo.


:- pred generate_csn_vector(int::in, list(int)::in, list(prog_var)::out,
    list(hlds_goal)::out, prog_var::out,
    deep_info::in, deep_info::out) is det.

generate_csn_vector(Length, CSNs, CSNVars, UnifyGoals, CellVar, !DeepInfo) :-
    ( CSNs = [CSN] ->
        generate_single_csn_unify(CSN, CSNVar - UnifyGoal, !DeepInfo),
        CSNVars = [CSNVar],
        UnifyGoals = [UnifyGoal],
        CellVar = CSNVar
    ;
        expect(Length =< max_save_restore_vector_size, this_file,
            "generate_csn_vector_unifies: too long"),
        list.map_foldl(generate_single_csn_unify, CSNs, CSNVarsGoals,
            !DeepInfo),
        InnerVars = assoc_list.keys(CSNVarsGoals),
        InnerGoals = assoc_list.values(CSNVarsGoals),
        generate_csn_vector_cell(Length, InnerVars, CellVar, CellGoal,
            !DeepInfo),
        CSNVars = [CellVar | InnerVars],
        UnifyGoals = list.append(InnerGoals, [CellGoal])
    ).

:- pred generate_csn_vector_cell(int::in, list(prog_var)::in,
    prog_var::out, hlds_goal::out, deep_info::in, deep_info::out) is det.

generate_csn_vector_cell(Length, CSNVars, CellVar, CellGoal, !DeepInfo) :-
    VarInfo0 = !.DeepInfo ^ deep_varinfos,
    ProfilingBuiltin = mercury_profiling_builtin_module,
    CellTypeName = string.format("call_site_nums_%d", [i(Length)]),
    CellTypeId = type_ctor(qualified(ProfilingBuiltin, CellTypeName), Length),
    construct_type(CellTypeId, [], CellType),
    generate_var("CSNCell", CellType, CellVar, VarInfo0, VarInfo),
    !:DeepInfo = !.DeepInfo ^ deep_varinfos := VarInfo,
    ConsId = cons(qualified(ProfilingBuiltin, CellTypeName), Length),
    generate_cell_unify(Length, ConsId, CSNVars, CellVar, CellGoal).

:- pred generate_single_csn_unify(int::in,
    pair(prog_var, hlds_goal)::out, deep_info::in, deep_info::out) is det.

generate_single_csn_unify(CSN, CSNVar - UnifyGoal, !DeepInfo) :-
    VarInfo0 = !.DeepInfo ^ deep_varinfos,
    VarName = string.format("CSN%d", [i(CSN)]),
    generate_var(VarName, int_type, CSNVar, VarInfo0, VarInfo),
    !:DeepInfo = !.DeepInfo ^ deep_varinfos := VarInfo,
    generate_unify(int_const(CSN), CSNVar, UnifyGoal).

:- pred generate_deep_det_call(module_info::in, string::in, int::in,
    list(prog_var)::in, list(prog_var)::in, hlds_goal::out) is det.

generate_deep_det_call(ModuleInfo, Name, Arity, ArgVars, OutputVars, Goal) :-
    generate_deep_call(ModuleInfo, Name, Arity, ArgVars, yes(OutputVars),
        detism_det, Goal).

:- pred generate_deep_call(module_info::in, string::in, int::in,
    list(prog_var)::in, maybe(list(prog_var))::in, determinism::in,
    hlds_goal::out) is det.

generate_deep_call(ModuleInfo, Name, Arity, ArgVars, MaybeOutputVars, Detism,
        Goal) :-
    get_deep_profile_builtin_ppid(ModuleInfo, Name, Arity, PredId, ProcId),
    NonLocals = list_to_set(ArgVars),
    Ground = ground(shared, none),
    (
        MaybeOutputVars = yes(OutputVars),
        map((pred(V::in, P::out) is det :-
            P = V - Ground
        ), OutputVars, OutputInsts),
        instmap_delta_from_assoc_list(OutputInsts, InstMapDelta)
    ;
        MaybeOutputVars = no,
        instmap_delta_init_unreachable(InstMapDelta)
    ),
    SymName = unqualified(Name),
    GoalExpr = plain_call(PredId, ProcId, ArgVars, not_builtin, no, SymName),
    GoalInfo = impure_init_goal_info(NonLocals, InstMapDelta, Detism),
    Goal = hlds_goal(GoalExpr, GoalInfo).

:- pred generate_unify(cons_id::in, prog_var::in, hlds_goal::out) is det.

generate_unify(ConsId, Var, Goal) :-
    Ground = ground(shared, none),
    NonLocals = set.make_singleton_set(Var),
    instmap_delta_from_assoc_list([Var - ground(shared, none)], InstMapDelta),
    Determinism = detism_det,
    goal_info_init(NonLocals, InstMapDelta, Determinism, purity_pure,
        GoalInfo),
    GoalExpr = unify(Var, rhs_functor(ConsId, no, []),
        (free -> Ground) - (Ground -> Ground),
        construct(Var, ConsId, [], [], construct_statically([]),
            cell_is_shared, no_construct_sub_info),
        unify_context(umc_explicit, [])),
    Goal = hlds_goal(GoalExpr, GoalInfo).

:- pred generate_cell_unify(int::in, cons_id::in, list(prog_var)::in,
    prog_var::in, hlds_goal::out) is det.

generate_cell_unify(Length, ConsId, Args, Var, Goal) :-
    Ground = ground(shared, none),
    NonLocals = set.list_to_set([Var | Args]),
    instmap_delta_from_assoc_list([Var - Ground], InstMapDelta),
    Determinism = detism_det,
    goal_info_init(NonLocals, InstMapDelta, Determinism, purity_pure,
        GoalInfo),
    ArgMode = ((free - Ground) -> (Ground - Ground)),
    list.duplicate(Length, ArgMode, ArgModes),
    GoalExpr = unify(Var, rhs_functor(ConsId, no, Args),
        (free -> Ground) - (Ground -> Ground),
        construct(Var, ConsId, Args, ArgModes,
            construct_statically([]), cell_is_shared, no_construct_sub_info),
        unify_context(umc_explicit, [])),
    Goal = hlds_goal(GoalExpr, GoalInfo).


    % Create a variable with the given name and type, adding it to the
    % var_info structure.
    %
:- pred generate_var(string::in, mer_type::in, prog_var::out, var_info::in,
    var_info::out) is det.

generate_var(Name, Type, Var, !VarInfo) :-
    some [!VarSet, !VarTypes]
    (
        !.VarInfo = var_info(!:VarSet, !:VarTypes),
        generate_var_2(Name, Type, Var, !VarSet, !VarTypes),
        !:VarInfo = var_info(!.VarSet, !.VarTypes)
    ).


    % Create a variable with the given name and type, adding it to the
    % separate prog_varset and vartypes structures. 
    %
:- pred generate_var_2(string::in, mer_type::in, prog_var::out,
    prog_varset::in, prog_varset::out, vartypes::in, vartypes::out) is det. 

generate_var_2(Name, Type, Var, !VarSet, !VarTypes) :-
    svvarset.new_named_var(Name, Var, !VarSet),
    svmap.set(Var, Type, !VarTypes).


:- pred maybe_generate_activation_ptr(bool::in, prog_var::in, prog_var::in,
        maybe(prog_var)::out, hlds_deep_excp_vars::out, var_info::in, 
        var_info::out) is det.

maybe_generate_activation_ptr(UseActivationCounts, TopCSD, MiddleCSD,
    MaybeActivationPtr, ExcpVars, !VarInfo) :-
    (
        UseActivationCounts = no,
        generate_var("ActivationPtr", c_pointer_type, ActivationPtr0, 
            !VarInfo),
        MaybeActivationPtr = yes(ActivationPtr0)
    ;
        UseActivationCounts = yes,
        MaybeActivationPtr = no
    ),
    ExcpVars = hlds_deep_excp_vars(TopCSD, MiddleCSD, MaybeActivationPtr).


:- pred generate_outermost_proc_dyns(bool::in, prog_var::in, prog_var::in, 
        maybe(prog_var)::out, prog_var::out, hlds_deep_excp_vars::out, 
        var_info::in, var_info::out) is det.

generate_outermost_proc_dyns(UseActivationCounts, TopCSD, MiddleCSD,
        MaybeOldActivationPtr, NewOutermostProcDyn, ExcpVars, !VarInfo) :-
    (   
        UseActivationCounts = no,
        generate_var("OldOutermost", c_pointer_type, OldOutermostProcDyn0,
            !VarInfo),
        MaybeOldActivationPtr = yes(OldOutermostProcDyn0)
    ;   
        UseActivationCounts = yes,
        MaybeOldActivationPtr = no
    ),
    ExcpVars = hlds_deep_excp_vars(TopCSD, MiddleCSD,
        MaybeOldActivationPtr),
    generate_var("NewOutermost", c_pointer_type, NewOutermostProcDyn,
        !VarInfo).


%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- pred get_deep_profile_builtin_ppid(module_info::in, string::in, int::in,
    pred_id::out, proc_id::out) is det.

get_deep_profile_builtin_ppid(ModuleInfo, Name, Arity, PredId, ProcId) :-
    ModuleName = mercury_profiling_builtin_module,
    module_info_get_predicate_table(ModuleInfo, PredTable),
    (
        predicate_table_search_pred_m_n_a(PredTable,
            is_fully_qualified, ModuleName, Name, Arity, PredIds)
    ->
        (
            PredIds = [],
            unexpected(this_file, "get_deep_profile_builtin_ppid: no pred_id")
        ;
            PredIds = [PredId],
            predicate_table_get_preds(PredTable, Preds),
            lookup(Preds, PredId, PredInfo),
            ProcIds = pred_info_procids(PredInfo),
            (
                ProcIds = [],
                unexpected(this_file,
                    "get_deep_profile_builtin_ppid: no proc_id")
            ;
                ProcIds = [ProcId]
            ;
                ProcIds = [_, _ | _],
                unexpected(this_file,
                    "get_deep_profile_builtin_ppid: proc_id not unique")
            )
        ;
            PredIds = [_, _ | _],
            unexpected(this_file,
                "get_deep_profile_builtin_ppid: pred_id not unique")
        )
    ;
        format("couldn't find pred_id for `%s'/%d", [s(Name), i(Arity)], Msg),
        unexpected(this_file, Msg)
    ).

%-----------------------------------------------------------------------------%

:- func impure_init_goal_info(set(prog_var), instmap_delta, determinism)
    = hlds_goal_info.

impure_init_goal_info(NonLocals, InstMapDelta, Determinism) = GoalInfo :-
    goal_info_init(NonLocals, InstMapDelta, Determinism, purity_impure,
        GoalInfo0),
    goal_info_add_feature(feature_not_impure_for_determinism,
        GoalInfo0, GoalInfo).

:- func impure_reachable_init_goal_info(set(prog_var), determinism)
    = hlds_goal_info.

impure_reachable_init_goal_info(NonLocals, Determinism) = GoalInfo :-
    instmap_delta_init_reachable(InstMapDelta),
    goal_info_init(NonLocals, InstMapDelta, Determinism, purity_impure,
        GoalInfo).

:- func impure_unreachable_init_goal_info(set(prog_var), determinism)
    = hlds_goal_info.

impure_unreachable_init_goal_info(NonLocals, Determinism) = GoalInfo :-
    instmap_delta_init_unreachable(InstMapDelta),
    goal_info_init(NonLocals, InstMapDelta, Determinism, purity_impure,
        GoalInfo0),
    goal_info_add_feature(feature_not_impure_for_determinism,
        GoalInfo0, GoalInfo).

:- func goal_info_add_nonlocals_make_impure(hlds_goal_info, set(prog_var))
    = hlds_goal_info.

goal_info_add_nonlocals_make_impure(!.GoalInfo, NewNonLocals) = !:GoalInfo :-
    NonLocals0 = goal_info_get_nonlocals(!.GoalInfo),
    NonLocals = set.union(NonLocals0, NewNonLocals),
    goal_info_set_nonlocals(NonLocals, !GoalInfo),
    make_impure(!GoalInfo).

:- func fail_goal_info = hlds_goal_info.

fail_goal_info = GoalInfo :-
    instmap_delta_init_unreachable(InstMapDelta),
    goal_info_init(set.init, InstMapDelta, detism_failure, purity_pure,
        GoalInfo).

:- pred make_impure(hlds_goal_info::in, hlds_goal_info::out) is det.

make_impure(!GoalInfo) :-
    ( goal_info_get_purity(!.GoalInfo) = purity_impure ->
        % We don't add not_impure_for_determinism, since we want to
        % keep the existing determinism.
        true
    ;
        goal_info_set_purity(purity_impure, !GoalInfo),
        goal_info_add_feature(feature_not_impure_for_determinism, !GoalInfo)
    ).

:- pred add_impurity_if_needed(bool::in, hlds_goal_info::in,
    hlds_goal_info::out) is det.

add_impurity_if_needed(AddedImpurity, !GoalInfo) :-
    (
        AddedImpurity = no
    ;
        AddedImpurity = yes,
        make_impure(!GoalInfo)
    ).

%-----------------------------------------------------------------------------%

:- pred extract_deep_rec_info(maybe(deep_profile_proc_info)::in,
    maybe(deep_recursion_info)::out) is det.

extract_deep_rec_info(MaybeDeepProfInfo, MaybeRecInfo) :-
    (
        MaybeDeepProfInfo = yes(DeepProfInfo),
        DeepProfInfo = deep_profile_proc_info(MaybeRecInfo, _)
    ;
        MaybeDeepProfInfo = no,
        MaybeRecInfo = no
    ).

:- pred record_hlds_proc_static(hlds_proc_static::in, hlds_deep_excp_vars::in,
    proc_info::in, proc_info::out) is det.

record_hlds_proc_static(ProcStatic, ExcpVars, !ProcInfo) :-
    proc_info_get_maybe_deep_profile_info(!.ProcInfo, MaybeDeepInfo0),
    MaybeDeepLayoutInfo = yes(hlds_deep_layout(ProcStatic, ExcpVars)),
    (
        MaybeDeepInfo0 = yes(DeepInfo0),
        DeepInfo = DeepInfo0 ^ deep_layout := MaybeDeepLayoutInfo
    ;
        MaybeDeepInfo0 = no,
        DeepInfo = deep_profile_proc_info(no, MaybeDeepLayoutInfo)
    ),
    MaybeDeepInfo = yes(DeepInfo),
    proc_info_set_maybe_deep_profile_info(MaybeDeepInfo, !ProcInfo).


%-----------------------------------------------------------------------------%
% Coverage Profiling.
%-----------------------------------------------------------------------------%

    % This structure is passed between predicates in this section.
    %
:- type proc_coverage_info
    --->    proc_coverage_info(
                ci_coverage_points          :: map(int, coverage_point_info),
                                            % A map from coverage point indexes
                                            % to coverage point information,
                                            % Updated as coverage points are
                                            % inserted.
                
                ci_cp_index_counter         :: counter,
                                            % Used to track the next coverage
                                            % point index to be allocated.
                                            
                ci_var_info                 :: var_info,
                                            % Information about variables, this
                                            % is updated as variables are
                                            % introduced. 

                ci_module_info              :: module_info,
                ci_pred_proc_id             :: pred_proc_id,
                ci_maybe_rec_info           :: maybe(deep_recursion_info),
                ci_coverage_profiling_opts  :: coverage_profiling_options
            ).

    % Store what coverage profiling options have been selected.
    %
:- type coverage_profiling_options
    --->    coverage_profiling_options(
                
                %
                % These fields correspond to coverage profiling options that
                % may be specified on the command line.  Except cpu_use_2pass.
                %
                cpo_may_fail            :: bool,
                cpo_multi               :: bool,
                cpo_any                 :: bool,
                cpo_branch_ite          :: bool,
                cpo_branch_switch       :: bool,
                cpo_branch_disj         :: bool,
                cpo_use_portcounts      :: bool,
                cpo_use_trivial         :: bool,

                cpo_use_2pass           :: bool
                                        % cpu_use_2pass is true if some
                                        % information needs to be collected in
                                        % an initial forwards-pass. 
            ).

    % Return wheather each coverage point type should be enabled and iff
    % coverage any coverage points are enabled then preform the coverage
    % proflining pass.
    %
:- pred coverage_profiling_options(module_info::in,
    coverage_profiling_options::out) is det.

coverage_profiling_options(ModuleInfo, CoveragePointOptions) :-
    module_info_get_globals(ModuleInfo, Globals),

    %
    % Coverage point types.
    %
    globals.lookup_bool_option(Globals, profile_deep_coverage_may_fail,
        MayFail),
    globals.lookup_bool_option(Globals, profile_deep_coverage_multi,
        Multi),
    globals.lookup_bool_option(Globals, profile_deep_coverage_any,
        Any),
    globals.lookup_bool_option(Globals, profile_deep_coverage_branch_ite,
        BranchIf),
    globals.lookup_bool_option(Globals, profile_deep_coverage_branch_switch,
        BranchSwitch),
    globals.lookup_bool_option(Globals, profile_deep_coverage_branch_disj,
        BranchDisj),

    %
    % Interpret options for tuning the coverage profiling pass.
    %
    globals.lookup_bool_option(Globals, profile_deep_coverage_use_portcounts,
        UsePortCounts),
    globals.lookup_bool_option(Globals, profile_deep_coverage_use_trivial,
        UseTrivial),
    bool.or(UsePortCounts, UseTrivial, Use2Pass),

    CoveragePointOptions = coverage_profiling_options(MayFail, Multi, Any,
        BranchIf, BranchSwitch, BranchDisj, UsePortCounts, UseTrivial,
        Use2Pass).



    % Transform the goal if coverage profiling should be performed, otherwise
    % return it un-altered.
    %
:- pred coverage_prof_transform_goal(module_info::in, pred_proc_id::in,
    maybe(deep_recursion_info)::in, hlds_goal::in, hlds_goal::out,
    var_info::in, var_info::out, list(coverage_point_info)::out) is det.

coverage_prof_transform_goal(ModuleInfo, PredProcId, MaybeRecInfo, !Goal,
        !VarInfo, CoveragePoints) :-
    coverage_profiling_options(ModuleInfo, CoverageProfilingOptions),
    CoverageInfo0 = init_proc_coverage_info(!.VarInfo, ModuleInfo,
        PredProcId, MaybeRecInfo, CoverageProfilingOptions),
    (
        CoverageProfilingOptions ^ cpo_use_2pass = yes,
        coverage_prof_first_pass(CoverageProfilingOptions, !Goal,
            goal_has_port_counts, _)
    ;
        CoverageProfilingOptions ^ cpo_use_2pass = no
    ),
    coverage_prof_second_pass_goal(cord.empty, !Goal,
        coverage_after_known, _, CoverageInfo0, CoverageInfo, _),
    CoverageInfo ^ ci_coverage_points = CoveragePointsMap,
    CoverageInfo ^ ci_var_info = !:VarInfo,
    coverage_points_map_list(CoveragePointsMap, CoveragePoints).
   

    % Transform a goal for coverage profiling.  This is the second pass of
    % the coverage profiling transformation.  This is done in several steps.
    %
    % If the first pass has been performed then relevant information is
    % collected from the goal_info structure.
    %
    % Step 1: Make a decision weather to insert a coverage point after this
    % goal or not.  This applies to may_fail multi and any coverage point
    % types only.  Other coverage point types are handled seperatly.
    %
    % Step 2: Determine if coverage information is known for goals that
    % execute before this goal completes.  This includes goals before this
    % goal (such as within a conjunction) or goals within this goal.
    % Information collected in the first pass is used here.
    %
    % Step 3: Transform inner goals if this goal is non-atomic.
    %
    % Step 4: Insert a coverage point after this goal if we decided to
    % at step 1.  This is done here after any inner goals have been
    % transformed.
    % 
:- pred coverage_prof_second_pass_goal(goal_path::in, 
    hlds_goal::in, hlds_goal::out, 
    coverage_after_known::in, coverage_after_known::out, 
    proc_coverage_info::in, proc_coverage_info::out, bool::out) is det.

coverage_prof_second_pass_goal(Path, Goal0, Goal,
    CoverageAfterKnown0, NextCoverageAfterKnown, !Info, AddedImpurity) :- 
    Goal0 = hlds_goal(GoalExpr0, GoalInfo0),
    Detism = GoalInfo0 ^ goal_info_get_determinism,
   
    %
    % Depending on command line arguments first pass information may or
    % may-not be available, if it is not avalible sensible defaults are
    % assumed.
    %
    Use2Pass = !.Info ^ ci_coverage_profiling_opts ^ cpo_use_2pass,
    (
        Use2Pass = yes,
        dp_goal_info(GoalTrivial, GoalHasPortCounts) = 
            goal_info_get_dp_info(GoalInfo0)
    ;
        Use2Pass = no,
        
        % XXX: Zoltan says;
        % Is this the best default you can get? You should be able to do
        % better for goals like unifications.
        
        GoalTrivial = goal_is_nontrivial,
        GoalHasPortCounts = goal_does_not_have_port_counts
    ),
  
    %
    % Step 1.
    %
    % Consider inserting a coverage point after this goal to measure how
    % many solutions it may have.
    %
    (
        GoalTrivial = goal_is_nontrivial,
        (
            GoalHasPortCounts = goal_does_not_have_port_counts,
            (
                CoverageAfterKnown0 = coverage_after_unknown,
                
                (
                    % I havn't thought about parallel conjunctions here,
                    % They should have the same declartive semantics as
                    % plain conjunctions, and I beleive they arn't possible
                    % where the first goal is anything other than model_det,
                    % Only other models can affect the coverage after the
                    % second goal.  However I can't be sure the
                    % implementation won't change.
                    %
                    % Because parallel conjunctions arn't common and this is
                    % really only an optimiztion so I've only enabled it for
                    % plain conjunctions.
                    %
                    GoalExpr0 = conj(plain_conj, _)
                ->
                    %
                    % Never insert coverage points after conjunctions, wait
                    % until the algorithm recurses to inside the conjunction
                    % and make a better decision about the last conjunct.
                    % This can reduce the number of coverage points inserted
                    % in some cases.
                    %
                    MaybeCPType = no
                ;
                    (
                        ( Detism = detism_semi
                        ; Detism = detism_cc_non
                        ),
                        
                        CoverMayFail = !.Info ^ ci_coverage_profiling_opts ^
                            cpo_may_fail,
                        (
                            CoverMayFail = yes,
                            MaybeCPType = yes(cp_type_solns_may_fail)
                        ;
                            CoverMayFail = no,
                            MaybeCPType = no
                        )
                    ;
                        Detism = detism_multi,
                        
                        CoverMulti = !.Info ^ ci_coverage_profiling_opts ^
                            cpo_multi,
                        (
                            CoverMulti = yes,
                            MaybeCPType = yes(cp_type_solns_multi)
                        ;
                            CoverMulti = no,
                            MaybeCPType = no
                        )
                    ;
                        Detism = detism_non,
                        
                        CoverAny = !.Info ^ ci_coverage_profiling_opts ^
                            cpo_any,
                        (
                            CoverAny = yes,
                            MaybeCPType = yes(cp_type_solns_any)
                        ;
                            CoverAny = no,
                            MaybeCPType = no
                        )
                    ;
                        %
                        % In this case we know that execution will always stop
                        % at this goal, no coverage point is needed (or would
                        % work).
                        %
                        ( Detism = detism_erroneous
                        ; Detism = detism_failure
                        ),
                        MaybeCPType = no
                    ;
                        %
                        % This should never occur, as other coverage points
                        % would have been inserted to ensure coverage is known
                        % here, unless they are disabled.  We don't insert a
                        % coverage point here since we shouldn't have to.
                        %
                        ( Detism = detism_det
                        ; Detism = detism_cc_multi
                        ),
                        MaybeCPType = no
                    )
                )
            ;
                CoverageAfterKnown0 = coverage_after_known,
                MaybeCPType = no
            )
        ;
            GoalHasPortCounts = goal_has_port_counts,
            MaybeCPType = no
        )
    ;
        GoalTrivial = goal_is_trivial,

        MaybeCPType = no
    ),

    %
    % Step 2.
    %
    % Update coverage known information.  
    %
    (
        MaybeCPType = yes(_),
        CoverageAfterKnown = coverage_after_known
    ;
        MaybeCPType = no,
        (
            % If the goal has a port count then coverage is known at the
            % point directy before this goal.
            GoalHasPortCounts = goal_has_port_counts,
            CoverageAfterKnown = coverage_after_known
        ;
            GoalHasPortCounts = goal_does_not_have_port_counts,
            (
                % If there is not exactly one solution then the coverage is
                % not known.
                ( Detism = detism_semi
                ; Detism = detism_multi
                ; Detism = detism_non
                ; Detism = detism_cc_non
                ; Detism = detism_erroneous
                ; Detism = detism_failure
                ),
                CoverageAfterKnown = coverage_after_unknown
            ; 
                % Otherwise the coverage remains the same.
                ( Detism = detism_det
                ; Detism = detism_cc_multi
                ),
                CoverageAfterKnown = CoverageAfterKnown0
            )
        )
    ),

    %
    % Step 3.
    %
    % Apply transformation recursively.
    %
    (   
        ( GoalExpr0 = unify(_, _, _, _, _)
        ; GoalExpr0 = plain_call(_, _, _, _, _, _)
        ; GoalExpr0 = generic_call(_, _, _, _)
        ; GoalExpr0 = call_foreign_proc(_, _, _, _, _, _, _)
        ),
        AddedImpurityInner = no,
        GoalExpr1 = GoalExpr0,
        NextCoverageAfterKnown = CoverageAfterKnown
    ;
        GoalExpr0 = conj(ConjType, Goals0),
        coverage_prof_second_pass_conj(Path, 1, ConjType, Goals0, Goals,
            CoverageAfterKnown, NextCoverageAfterKnown, !Info,
            AddedImpurityInner),
        GoalExpr1 = conj(ConjType, Goals)
    ;
        %
        % There may be optimizations that can allow us to avoid inserting
        % superfluous coverage points, however they are most likely to be
        % non-trivial.
        %
        GoalExpr0 = disj(Goals0),
        coverage_prof_second_pass_disj(Path, 1, Goals0, Goals, !Info,
            AddedImpurityInner),
        (
            ( Detism = detism_det
            ; Detism = detism_cc_multi
            ),
            NextCoverageAfterKnown = CoverageAfterKnown
        ;
            ( Detism = detism_semi
            ; Detism = detism_multi
            ; Detism = detism_non
            ; Detism = detism_cc_non
            ; Detism = detism_erroneous
            ; Detism = detism_failure
            ),
            NextCoverageAfterKnown = coverage_after_unknown
        ),
        GoalExpr1 = disj(Goals)
    ;
        GoalExpr0 = switch(Var, SwitchCanFail, Cases0),
        coverage_prof_second_pass_switchcase(Path, 1, SwitchCanFail,
            Cases0, Cases, CoverageAfterKnown, NextCoverageAfterKnown0,
            !Info, AddedImpurityInner),
        (
            SwitchCanFail = cannot_fail,
            NextCoverageAfterKnown = NextCoverageAfterKnown0
        ;
            SwitchCanFail = can_fail,
            NextCoverageAfterKnown = coverage_after_unknown
        ),
        GoalExpr1 = switch(Var, SwitchCanFail, Cases)
    ;
        GoalExpr0 = negation(NegGoal0),
        coverage_prof_second_pass_goal(snoc(Path, step_neg), 
            NegGoal0, NegGoal, CoverageAfterKnown, NextCoverageAfterKnown,
            !Info, AddedImpurityInner), 
        GoalExpr1 = negation(NegGoal)
    ;
        GoalExpr0 = scope(Reason, ScopeGoal0),
        ( 
            Detism = ScopeGoal0 ^ hlds_goal_info ^
                goal_info_get_determinism
        ->
            ScopeCut = scope_is_no_cut
        ;
            ScopeCut = scope_is_cut
        ),
        coverage_prof_second_pass_goal(snoc(Path, step_scope(ScopeCut)),
            ScopeGoal0, ScopeGoal,
            CoverageAfterKnown, NextCoverageAfterKnown, !Info,
            AddedImpurityInner), 
        GoalExpr1 = scope(Reason, ScopeGoal)
    ;
        GoalExpr0 = if_then_else(ITEExistVars, Cond, Then, Else),
        coverage_prof_second_pass_ite(Path, ITEExistVars,
            Cond, Then, Else, GoalExpr1,
            CoverageAfterKnown, NextCoverageAfterKnown, !Info,
            AddedImpurityInner)
    ;
        GoalExpr0 = shorthand(_),
        unexpected(this_file, 
            "deep_profiling.coverage_prof_transform_goal: " ++ 
            "shorthand should have gone by now")
    ),
    add_impurity_if_needed(AddedImpurityInner, GoalInfo0, GoalInfo1),
    Goal1 = hlds_goal(GoalExpr1, GoalInfo1),
    
    %
    % Step 4.
    %
    % Insert the coverage point if we decided to earlier.
    %
    (
        MaybeCPType = yes(CPType),
        CPInfo = coverage_point_info(Path, CPType),
       
        make_coverage_point(CPInfo, CPGoals, !Info),
        create_conj_from_list([Goal1 | CPGoals], plain_conj, Goal),

        AddedImpurity = yes
    ;
        MaybeCPType = no,
        Goal = Goal1,
        AddedImpurity = AddedImpurityInner
    ).


    % Perform the coverage profiling transformation for conjuncts starting
    % at the tail of the goal list and moving back towards the head.  The
    % goal list represents the list of goals within a conjunction minus
    % 'Pos' goals removed from the head.
    %
    % This is done tail first as to take advantage of knoledge of goals after
    % the current goal within the conjunction.
    %
:- pred coverage_prof_second_pass_conj(goal_path::in, int::in,
    conj_type::in, list(hlds_goal)::in, list(hlds_goal)::out,
    coverage_after_known::in, coverage_after_known::out,
    proc_coverage_info::in, proc_coverage_info::out, bool::out) is det.

coverage_prof_second_pass_conj(_, _, _, [], [], !CoverageAfterKnown,
    !Info, no).
coverage_prof_second_pass_conj(Path, Pos, ConjType, 
        [Goal0 | Goals0], Goals, 
        CoverageAfterKnown0, NextCoverageAfterKnown, !Info,
        AddedImpurity) :-
    coverage_prof_second_pass_conj(Path, Pos+1, ConjType,
        Goals0, Goals1, CoverageAfterKnown0, CoverageAfterKnown, !Info,
        AddedImpurityTail),
    coverage_prof_second_pass_goal(snoc(Path, step_conj(Pos)),
        Goal0, Goal1, CoverageAfterKnown, NextCoverageAfterKnown, !Info,
        AddedImpurityHead),
    (
        Goal1 = hlds_goal(conj(plain_conj, ConjGoals), _),
        ConjType = plain_conj
    ->
        Goals = ConjGoals ++ Goals1
    ;
        Goals = [ Goal1 | Goals1 ]
    ),
    bool.or(AddedImpurityHead, AddedImpurityTail, AddedImpurity).


    % Perform the coverage profiling transformation over goals within a
    % disjunction.  The list of goals represents the tail of the disjunction
    % currently being transformed.
    %
    % Disjuncts are also transformed in reverse order, as knoledge from
    % later disjuncts can be used to reduce the number of coverage points
    % placed in earlier disjuncts.
    %
:- pred coverage_prof_second_pass_disj(goal_path::in, int::in,
    list(hlds_goal)::in, list(hlds_goal)::out,
    proc_coverage_info::in, proc_coverage_info::out, bool::out) is det.

coverage_prof_second_pass_disj(_, _, [], [], !Info, no).

coverage_prof_second_pass_disj(Path, Pos, [Goal0 | Goals0], [Goal | Goals],
        !Info, AddedImpurity) :-
    % Transform the tail of the disjunction.
    coverage_prof_second_pass_disj(Path, Pos+1, Goals0, Goals, !Info,
        AddedImpurityTail),

    % Transform this goal and optionally add a coverage point before it.
    DisjPath = snoc(Path, step_disj(Pos)),
    coverage_prof_second_pass_goal(DisjPath, Goal0, Goal1, 
        coverage_after_unknown, NextCoverageAfterKnown, !Info,
        AddedImpurityHead0),
    CPOBranchDisj = !.Info ^ ci_coverage_profiling_opts ^ cpo_branch_disj,
    (
        CPOBranchDisj = yes,
        (
            NextCoverageAfterKnown = coverage_after_unknown,
            insert_coverage_point_before(coverage_point_info(DisjPath,
                cp_type_branch_arm), Goal1, Goal, !Info),
            AddedImpurityHead = yes
        ;
            NextCoverageAfterKnown = coverage_after_known,
            Goal = Goal1,
            AddedImpurityHead = AddedImpurityHead0
        )
    ;
        CPOBranchDisj = no,
        Goal = Goal1,
        AddedImpurityHead = AddedImpurityHead0
    ),

    bool.or(AddedImpurityHead, AddedImpurityTail, AddedImpurity).


:- pred coverage_prof_second_pass_switchcase(goal_path::in, int::in, 
    can_fail::in, list(case)::in, list(case)::out, 
    coverage_after_known::in, coverage_after_known::out, 
    proc_coverage_info::in, proc_coverage_info::out, bool::out) is det.

coverage_prof_second_pass_switchcase(_, _, _, [], [], 
    _, coverage_after_known, !Info, no).

coverage_prof_second_pass_switchcase(Path, Pos, SwitchCanFail,
        [Case0 | Cases0], [Case | Cases], CoverageAfterSwitchKnown,
        NextCoverageAfterKnown, !Info, AddedImpurity) :-
    Goal0 = Case0 ^ case_goal,

    %
    % If the switch cannot fail and this is the last case then the coverage
    % at the end of this case can be computed from the coverage after the
    % entire switch and coverage information for the tail of the switch
    % such as branch coverage points.
    %
    (
        Cases0 = [],
        (
            SwitchCanFail = cannot_fail,
            CoverageAfterHeadKnown = CoverageAfterSwitchKnown
        ;
            SwitchCanFail = can_fail,
            CoverageAfterHeadKnown = coverage_after_unknown
        )
    ;
        Cases0 = [_ | _],
        CoverageAfterHeadKnown = coverage_after_unknown
    ),

    SwitchPath = snoc(Path, step_disj(Pos)),
    coverage_prof_second_pass_goal(SwitchPath, Goal0, Goal1, 
        CoverageAfterHeadKnown, NextCoverageAfterKnown0, !Info,
        AddedImpurityHead0),
    
    % Possibly insert coverage point.
    CPOBranchSwitch = !.Info ^ ci_coverage_profiling_opts ^
        cpo_branch_switch,
    (
        CPOBranchSwitch = yes,
        (
            NextCoverageAfterKnown0 = coverage_after_unknown,
            insert_coverage_point_before(coverage_point_info(SwitchPath,
                cp_type_branch_arm), Goal1, Goal, !Info),
            AddedImpurityHead = yes,
            NextCoverageAfterKnownHead = coverage_after_known
        ;
            NextCoverageAfterKnown0 = coverage_after_known,
            Goal = Goal1,
            AddedImpurityHead = AddedImpurityHead0,
            NextCoverageAfterKnownHead = NextCoverageAfterKnown0
        )
    ;
        CPOBranchSwitch = no,
        Goal = Goal1,
        AddedImpurityHead = AddedImpurityHead0,
        NextCoverageAfterKnownHead = NextCoverageAfterKnown0
    ),

    % Handle recursive case and prepare output variables.
    coverage_prof_second_pass_switchcase(Path, Pos+1,
        SwitchCanFail, Cases0, Cases,
        CoverageAfterSwitchKnown, NextCoverageAfterKnownTail, !Info,
        AddedImpurityTail),
    Case = Case0 ^ case_goal := Goal,
    coverage_after_known_branch(NextCoverageAfterKnownHead,
        NextCoverageAfterKnownTail, NextCoverageAfterKnown), 
    bool.or(AddedImpurityHead, AddedImpurityTail, AddedImpurity).


    % Determine if branch coverage points should be inserted in either or
    % both of the then and else branches, insert them and transform the
    % sub-goals.
    %
    % This is performed by first transforming the Else and Then branches,
    % then making decisions about cooverage points and inserting them, then
    % transforming the condition and constructing the new ITE goal_expr.
    %
:- pred coverage_prof_second_pass_ite(goal_path::in, list(prog_var)::in, 
    hlds_goal::in, hlds_goal::in, hlds_goal::in, hlds_goal_expr::out,
    coverage_after_known::in, coverage_after_known::out, 
    proc_coverage_info::in, proc_coverage_info::out, bool::out) is det.

coverage_prof_second_pass_ite(Path, ITEExistVars, Cond0, Then0, Else0, 
        GoalExpr, CoverageAfterITEKnown, NextCoverageAfterKnown,
        !Info, AddedImpurity) :-
    %
    % If the then and else goals have exactly one solution and coverage is
    % known after the ite, then the coverage at the end of one branch can
    % be computed from the other branch and the coverage known after the
    % ITE.  This helps later to insert fewer coverage points in the
    % beginning of the branches, and may also help reduce coverage points
    % within the branches. 
    %
    (
        CoverageAfterITEKnown = coverage_after_known,
        ThenDetism = Then0 ^ hlds_goal_info ^ goal_info_get_determinism,
        (
            ( ThenDetism = detism_det
            ; ThenDetism = detism_cc_multi
            ),
            ElseDetism = Else0 ^ hlds_goal_info ^ goal_info_get_determinism,
            (
                ( ElseDetism = detism_det
                ; ElseDetism = detism_cc_multi
                ),
                
                %
                % Now which should have coverage known,
                %
                Use2Pass = !.Info ^ ci_coverage_profiling_opts ^
                    cpo_use_2pass,
                (
                    Use2Pass = yes,
                    dp_goal_info(_, ThenHasPortCounts) =
                        goal_info_get_dp_info(Then0 ^ hlds_goal_info)
                ;
                    Use2Pass = no,
                    ThenHasPortCounts = goal_does_not_have_port_counts
                ),
                
                (
                    ThenHasPortCounts = goal_does_not_have_port_counts,

                    CoverageAfterElseKnown = coverage_after_known,
                    CoverageAfterThenKnown = coverage_after_unknown
                ;
                    ThenHasPortCounts = goal_has_port_counts,
                   
                    % 
                    % Although we don't know if Else has port counts, at
                    % this point we're either making the deliberate
                    % decision below or an arbitrary decision, so
                    % it doesn't matter if Else has port counts or not.
                    %
                    CoverageAfterElseKnown = coverage_after_unknown,
                    CoverageAfterThenKnown = coverage_after_known
                )
            ;
                ( ElseDetism = detism_semi
                ; ElseDetism = detism_multi
                ; ElseDetism = detism_non
                ; ElseDetism = detism_cc_non
                ; ElseDetism = detism_erroneous
                ; ElseDetism = detism_failure
                ),
                CoverageAfterElseKnown = coverage_after_unknown,
                CoverageAfterThenKnown = coverage_after_unknown
            )
        ;
            ( ThenDetism = detism_semi
            ; ThenDetism = detism_multi
            ; ThenDetism = detism_non
            ; ThenDetism = detism_cc_non
            ; ThenDetism = detism_erroneous
            ; ThenDetism = detism_failure
            ),
            CoverageAfterElseKnown = coverage_after_unknown,
            CoverageAfterThenKnown = coverage_after_unknown
        )
    ;
        CoverageAfterITEKnown = coverage_after_unknown,
        CoverageAfterElseKnown = coverage_after_unknown,
        CoverageAfterThenKnown = coverage_after_unknown
    ),
    
    
    % Transform Else branch,
    coverage_prof_second_pass_goal(snoc(Path, step_ite_else), Else0, Else1, 
        CoverageAfterElseKnown, CoverageBeforeElseKnown1, !Info, 
        AddedImpurityElseGoal),
   
    % Transform Then branch.
    coverage_prof_second_pass_goal(snoc(Path, step_ite_then), Then0, Then1,
        CoverageAfterThenKnown, CoverageBeforeThenKnown1, !Info,
        AddedImpurityThenGoal),
    
    %
    % Gather information and decide what coverage points to insert.
    %
    % Notice that it doesn't matter if any of the goals are trivial or not,
    % we want to know what branch is taken regardless of how inexpensive it
    % may be as different variables may be used in different branches.
    %
    % Whatever we do we will ensure that the coverage will be known at the
    % beginning of each branch,
    %
    CPOBranchIf = !.Info ^ ci_coverage_profiling_opts ^ cpo_branch_ite,
    dp_goal_info(_, CondHasPortCounts) =
        Cond0 ^ hlds_goal_info ^ goal_info_get_dp_info, 
    (
        CPOBranchIf = yes,
        CondHasPortCounts = goal_does_not_have_port_counts,
        
        (
            CoverageBeforeThenKnown1 = coverage_after_unknown,
            
            InsertCPThen = yes(coverage_point_info(snoc(Path, step_ite_then),
                cp_type_branch_arm))
        ;
            CoverageBeforeThenKnown1 = coverage_after_known,
            
            InsertCPThen = no
        ),
        (
            CoverageBeforeElseKnown1 = coverage_after_unknown,
       
            InsertCPElse = yes(coverage_point_info(snoc(Path, step_ite_else),
                cp_type_branch_arm))
        ;
            CoverageBeforeElseKnown1 = coverage_after_known,
            
            InsertCPElse = no
        )
    ;
        CPOBranchIf = yes,
        CondHasPortCounts = goal_has_port_counts,
        
        % Don't insert any coverage points.
        InsertCPThen = no,
        InsertCPElse = no
    ;
        CPOBranchIf = no,
        
        % Don't insert any coverage points,
        InsertCPThen = no,
        InsertCPElse = no
    ),

    %
    % Insert any coverage points.
    %
    maybe_insert_coverage_point_before(InsertCPElse, Else1, Else,
        CoverageBeforeElseKnown1, CoverageBeforeElseKnown, !Info, 
        AddedImpurityElseCP),
    bool.or(AddedImpurityElseGoal, AddedImpurityElseCP, AddedImpurityElse),

    maybe_insert_coverage_point_before(InsertCPThen, Then1, Then,
        CoverageBeforeThenKnown1, CoverageBeforeThenKnown, !Info,
        AddedImpurityThenCP),
    bool.or(AddedImpurityThenGoal, AddedImpurityThenCP, AddedImpurityThen),

    %
    % Transform Cond branch.
    %
    coverage_after_known_branch(CoverageBeforeThenKnown,
        CoverageBeforeElseKnown, CoverageKnownAfterCond),
    coverage_prof_second_pass_goal(snoc(Path, step_ite_cond), 
        Cond0, Cond, CoverageKnownAfterCond, NextCoverageAfterKnown, !Info,
        AddedImpurityCond),
    
    %
    % Build goal experession and tidy up.
    %
    AddedImpurity = bool.or(AddedImpurityCond,
        bool.or(AddedImpurityThen, AddedImpurityElse)), 
    GoalExpr = if_then_else(ITEExistVars, Cond, Then, Else).


    % Insert a coverage point in a conjunction before the current goal if
    % the coverage point info has been provided.
    %
:- pred maybe_insert_coverage_point_before(maybe(coverage_point_info)::in,
    hlds_goal::in, hlds_goal::out,
    coverage_after_known::in, coverage_after_known::out, 
    proc_coverage_info::in, proc_coverage_info::out, bool::out) is det.

maybe_insert_coverage_point_before(no, !Goal, !CoverageAfterKnown,
    !Info, no).

maybe_insert_coverage_point_before(yes(CPInfo), !Goal,
        _, coverage_after_known, !Info, yes) :-
    insert_coverage_point_before(CPInfo, !Goal, !Info).


    % Insert a coverage point before the given goal,  This returns a flat
    % conjunction consisting of a coverage point followed by the input
    % goal.
    %
:- pred insert_coverage_point_before(coverage_point_info::in,
    hlds_goal::in, hlds_goal::out, 
    proc_coverage_info::in, proc_coverage_info::out) is det.

insert_coverage_point_before(CPInfo, !Goal, !Info) :-
    make_coverage_point(CPInfo, CPGoals, !Info),
    (
        !.Goal = hlds_goal(conj(plain_conj, InnerGoals), _)
    ->
        Goals = CPGoals ++ InnerGoals
    ;
        Goals = CPGoals ++ [!.Goal]
    ),
    create_conj_from_list(Goals, plain_conj, !:Goal).


    % Used to describe if coverage information is known at a partiular point
    % within a procedure.
    %
:- type coverage_after_known
    --->    coverage_after_known
    ;       coverage_after_unknown.

    % At a branch of execution two coverage known values must be merged,
    % this is at the beginning of the branch since it's used for the main
    % pass which is done in reverse.
    %
:- pred coverage_after_known_branch(coverage_after_known::in,
    coverage_after_known::in, coverage_after_known::out) is det.

coverage_after_known_branch(coverage_after_known, coverage_after_known,
    coverage_after_known).
coverage_after_known_branch(coverage_after_known, coverage_after_unknown,
    coverage_after_unknown).
coverage_after_known_branch(coverage_after_unknown, _,
    coverage_after_unknown).
    
    % Create a coverage info struture, initializing some values to sensible
    % defaults..
    %
:- func init_proc_coverage_info(var_info, module_info, pred_proc_id,
        maybe(deep_recursion_info), coverage_profiling_options) = 
    proc_coverage_info.

init_proc_coverage_info(VarInfo, ModuleInfo, PredProcId, MaybeRecInfo,
        CoverageProfilingOptions) = CoverageInfo :-
    CoverageInfo = proc_coverage_info(map.init, counter.init(0), VarInfo,
        ModuleInfo, PredProcId, MaybeRecInfo, CoverageProfilingOptions).

    % Boolean or for goal_trivial data type.
    %
:- pred goal_trivial_and(goal_trivial::in, goal_trivial::in,
    goal_trivial::out) is det.

goal_trivial_and(A, B, Trivial) :-
    (
        A = goal_is_trivial,
        B = goal_is_trivial
    ->
        Trivial = goal_is_trivial
    ;
        Trivial = goal_is_nontrivial
    ).


:- pred goal_has_port_counts_and(goal_has_port_counts::in,
    goal_has_port_counts::in, goal_has_port_counts::out) is det.

goal_has_port_counts_and(A, B, HasPortCounts) :-
    (
        A = goal_has_port_counts,
        B = goal_has_port_counts
    ->
        HasPortCounts = goal_has_port_counts
    ;
        HasPortCounts = goal_does_not_have_port_counts
    ).


    % Given the a goal and whether port counts are availible before it
    % determine if port counts can be used to determine how often execution
    % reaches the poind imediatly after this goal.
    %
:- pred has_port_counts_after(hlds_goal::in, goal_has_port_counts::in,
    goal_has_port_counts::in, goal_has_port_counts::out) is det.

has_port_counts_after(Goal, PCDirect, PCBefore, PC) :-
    (
        % 
        % The trivial case.  If port counts are directly availible then
        % the can be used to determine coverage immediately after it.
        %
        PCDirect = goal_has_port_counts,
        PC = goal_has_port_counts
    ;
        PCDirect = goal_does_not_have_port_counts,
        
        %
        % If port counts arn't directly avalible but are before this goal
        % and this goal behaves deterministically (it cannot fail or redo),
        % then they can be used to determine how often execution reaches the
        % point after this goal).
        %
        Detism = Goal ^ hlds_goal_info ^ goal_info_get_determinism,
        has_port_counts_if_det(Detism, PCBefore, PC)
    ).
    
    
    % Given the current goal's determinism and wheather the next earliest goal
    % has port counts does this goal have port counts
    %
:- pred has_port_counts_if_det(determinism::in, goal_has_port_counts::in,
    goal_has_port_counts::out) is det.

has_port_counts_if_det(Detism, HasPortCounts0, HasPortCounts) :-
    (
        ( Detism = detism_det
        ; Detism = detism_cc_multi )
    ->
        HasPortCounts = HasPortCounts0
    ;
        HasPortCounts = goal_does_not_have_port_counts
    ).



    % Used to gather some information about goals before the coverage
    % transformation.
    %
:- pred coverage_prof_first_pass(coverage_profiling_options::in, hlds_goal::in,
    hlds_goal::out, goal_has_port_counts::in, dp_goal_info::out) is det.

coverage_prof_first_pass(CPOptions, Goal0, hlds_goal(GoalExpr, GoalInfo),
        HasPortCountsBefore, Info) :-
    Goal0 = hlds_goal(GoalExpr0, GoalInfo0),

    (
        %
        % Call Goals
        %
        ( GoalExpr0 = plain_call(_, _, _, _, _, _)
        ; GoalExpr0 = generic_call(_, _, _, _)
        ; GoalExpr0 = call_foreign_proc(_, _, _, _, _, _, _) ),
        
        Trivial0 = goal_is_nontrivial,
        HasPortCountsDirect = goal_has_port_counts,
        GoalExpr = GoalExpr0
    ;
        GoalExpr0 = unify(_, _, _, _, _),

        Trivial0 = goal_is_trivial,
        HasPortCountsDirect = goal_does_not_have_port_counts,
        GoalExpr = GoalExpr0
    ;
        GoalExpr0 = conj(ConjType, Goals0),
        map_foldl2(coverage_prof_first_pass_conj(CPOptions), Goals0, Goals,
            goal_is_trivial, Trivial0, HasPortCountsBefore,
            HasPortCountsDirect),
        GoalExpr = conj(ConjType, Goals) 
    ;
        GoalExpr0 = disj(Goals0),
        coverage_prof_first_pass_disj(CPOptions, Goals0, Goals,
            Trivial0, HasPortCountsBefore, HasPortCountsDirect0),
        GoalExpr = disj(Goals),
        
        %
        % Only if the disjunction cannot fail can we know the coverage after
        % the disjunction if port counts are available from every disjunct.
        %
        Detism = goal_info_get_determinism(GoalInfo0),
        determinism_components(Detism, CanFail, _),
        (
            CanFail = can_fail,
            HasPortCountsDirect = goal_does_not_have_port_counts
        ;
            CanFail = cannot_fail,
            HasPortCountsDirect0 = HasPortCountsDirect
        )
    ;
        GoalExpr0 = switch(Var, CanFail, Cases0),
        coverage_prof_first_pass_switchcase(CPOptions, Cases0, Cases, Trivial0,
            HasPortCountsCases),
        GoalExpr = switch(Var, CanFail, Cases),
        (
            CanFail = can_fail,
            HasPortCountsDirect = goal_does_not_have_port_counts
        ;
            CanFail = cannot_fail,
            HasPortCountsDirect = HasPortCountsCases
        )
    ;
        GoalExpr0 = negation(InnerGoal0),
        coverage_prof_first_pass(CPOptions, InnerGoal0, InnerGoal,
            HasPortCountsBefore, dp_goal_info(Trivial0, HasPortCountsDirect)),
        GoalExpr = negation(InnerGoal)
    ;
        GoalExpr0 = scope(Reason, InnerGoal0),
        coverage_prof_first_pass(CPOptions, InnerGoal0, InnerGoal,
            HasPortCountsBefore, dp_goal_info(Trivial0, HasPortCountsDirect)),
        GoalExpr = scope(Reason, InnerGoal)
    ;
        GoalExpr0 = if_then_else(Vars, CondGoal0, ThenGoal0, ElseGoal0),
       
        %
        % The then and else parts of a ITE goal will be able to use the
        % port counts provided by the cond goal if it has them.
        %
        coverage_prof_first_pass(CPOptions, CondGoal0, CondGoal,
            HasPortCountsBefore, dp_goal_info(TrivialCond, HasPortCountsCond)),
        
        coverage_prof_first_pass(CPOptions, ThenGoal0, ThenGoal,
            HasPortCountsCond, dp_goal_info(TrivialThen, HasPortCountsThen)),
        coverage_prof_first_pass(CPOptions, ElseGoal0, ElseGoal,
            HasPortCountsCond, dp_goal_info(TrivialElse, HasPortCountsElse)),

        GoalExpr = if_then_else(Vars, CondGoal, ThenGoal, ElseGoal),


        %
        % An ITE is trivial iff all of it's inner goals are trivial, 
        %
        goal_trivial_and(TrivialCond, TrivialThen, Trivial1),
        goal_trivial_and(Trivial1, TrivialElse, Trivial0),

        %
        % And it has port counts iff it will end in a goal with a port count
        % regardless of how the condition evaluates.
        %
        goal_has_port_counts_and(HasPortCountsThen, HasPortCountsElse,
            HasPortCountsDirect)
    ;
        GoalExpr0 = shorthand(_),
        unexpected(this_file, 
            "deep_profiling.goal_is_nontrivial: " ++ 
            "shorthand should have gone by now")
    ),
    
    (
        CPOptions ^ cpo_use_portcounts = yes,
        has_port_counts_after(Goal0, HasPortCountsDirect, HasPortCountsBefore,
            HasPortCounts)
    ;
        CPOptions ^ cpo_use_portcounts = no,
        HasPortCounts = goal_does_not_have_port_counts
    ),
   
    (
        CPOptions ^ cpo_use_trivial = yes,
        Trivial = Trivial0
    ;
        CPOptions ^ cpo_use_trivial = no,
        Trivial = goal_is_nontrivial
    ),

    %
    % Annotate the goal with this new information.
    %
    Info = dp_goal_info(Trivial, HasPortCounts),
    goal_info_set_maybe_dp_info(yes(Info), GoalInfo0, GoalInfo).


    % Combine information about goals within a conjunction
    %
:- pred coverage_prof_first_pass_conj(coverage_profiling_options::in,
    hlds_goal::in, hlds_goal::out, goal_trivial::in, goal_trivial::out,
    goal_has_port_counts::in, goal_has_port_counts::out) is det.

coverage_prof_first_pass_conj(CPOptions, Goal0, Goal, TrivialAcc, Trivial,
        HasPortCountsAcc, HasPortCounts) :-
    coverage_prof_first_pass(CPOptions, Goal0, Goal, HasPortCountsAcc,
        dp_goal_info(TrivialGoal, HasPortCounts)),
    goal_trivial_and(TrivialAcc, TrivialGoal, Trivial).


    % Combine information about goals within a disjunction
    %
    % A portcount may be avalible to the goal executed when first entering a
    % disjunction.  However it's impractical to deterimine if any disjuncts
    % other than the first are ever tried.  So port counts at the beginning of
    % them are unknown.
    %
:- pred coverage_prof_first_pass_disj(coverage_profiling_options::in,
    list(hlds_goal)::in, list(hlds_goal)::out, goal_trivial::out, 
    goal_has_port_counts::in, goal_has_port_counts::out) is det.

coverage_prof_first_pass_disj(_, [], [], goal_is_trivial, !HasPortCounts).

coverage_prof_first_pass_disj(CPOptions, [ Goal0 | Goals0 ], [ Goal | Goals ],
        Trivial, HasPortCountsBefore, HasPortCounts) :-
    coverage_prof_first_pass(CPOptions, Goal0, Goal, HasPortCountsBefore,
        dp_goal_info(TrivialGoal, HasPortCountsGoal)),
    coverage_prof_first_pass_disj(CPOptions, Goals0, Goals, TrivialDisj,
        goal_does_not_have_port_counts, HasPortCountsDisj), 
    goal_trivial_and(TrivialGoal, TrivialDisj, Trivial),
    goal_has_port_counts_and(HasPortCountsGoal, HasPortCountsDisj,
        HasPortCounts).


    % A switch is handled like a disjunction except that it can't be known
    % how often execution will enter the first case, so this also cannot use
    % the portcount of a goal before it.
    %
:- pred coverage_prof_first_pass_switchcase(coverage_profiling_options::in,
    list(case)::in, list(case)::out, goal_trivial::out, 
    goal_has_port_counts::out) is det.

coverage_prof_first_pass_switchcase(_, [], [], goal_is_trivial, 
    goal_has_port_counts).

coverage_prof_first_pass_switchcase(CPOptions, 
    [ Case0 | Cases0 ], [ Case | Cases ], Trivial, HasPortCounts) :-
    Case0 = case(FirstFunctor, LaterFunctors, Goal0),

    coverage_prof_first_pass(CPOptions, Goal0, Goal,
        goal_does_not_have_port_counts, 
        dp_goal_info(TrivialGoal, HasPortCountsGoal)),
    coverage_prof_first_pass_switchcase(CPOptions, Cases0, Cases,
        TrivialSwitchcase, HasPortCountsSwitchcase), 
    goal_trivial_and(TrivialGoal, TrivialSwitchcase, Trivial),
    goal_has_port_counts_and(HasPortCountsGoal, HasPortCountsSwitchcase,
        HasPortCounts),

    Case = case(FirstFunctor, LaterFunctors, Goal).


    % Builds a list of goals that will form a conjunction) for a coverage
    % point.
    %
:- pred make_coverage_point(coverage_point_info::in, list(hlds_goal)::out, 
    proc_coverage_info::in, proc_coverage_info::out) is det.

make_coverage_point(CoveragePointInfo, Goals, !CoverageInfo) :-
    CoveragePointInfos0 = !.CoverageInfo ^ ci_coverage_points,
    CPIndexCounter0 = !.CoverageInfo ^ ci_cp_index_counter,

    counter.allocate(CPIndex, CPIndexCounter0, CPIndexCounter),
    map.det_insert(CoveragePointInfos0, CPIndex, CoveragePointInfo, 
        CoveragePointInfos),
    !:CoverageInfo = !.CoverageInfo ^ ci_coverage_points := CoveragePointInfos,
    !:CoverageInfo = !.CoverageInfo ^ ci_cp_index_counter := CPIndexCounter,

    %
    % Build unifications for the coverage point index and the proc static.
    %
    some [!VarInfo] (
        !:VarInfo = !.CoverageInfo ^ ci_var_info,
        
        generate_var("CPIndex", int_type, CPIndexVar, !VarInfo),
        generate_unify(int_const(CPIndex), CPIndexVar, GoalUnifyIndex),
        generate_var("ProcLayout", c_pointer_type, ProcLayoutVar, !VarInfo),
        proc_static_cons_id(!.CoverageInfo, ProcStaticConsId),
        generate_unify(ProcStaticConsId, ProcLayoutVar, GoalUnifyProcLayout), 
        
        !:CoverageInfo = !.CoverageInfo ^ ci_var_info := !.VarInfo
    ),

    %
    % Build a call to the instrumentation code.
    %
    ModuleInfo = !.CoverageInfo ^ ci_module_info,
    get_deep_profile_builtin_ppid(ModuleInfo, "increment_coverage_point_count", 
        2, PredId, ProcId),
    Ground = ground(shared, none),
    make_foreign_args([ ProcLayoutVar, CPIndexVar ],
        [ (yes("ProcLayout" - (Ground -> Ground)) - native_if_possible),
          (yes("CPIndex" - (Ground -> Ground)) - native_if_possible) ],
        [ c_pointer_type, int_type ], ForeignArgVars),
    coverage_point_ll_code(ForeignCallAttrs, ForeignCode),
    CallGoalExpr = call_foreign_proc(ForeignCallAttrs, PredId, ProcId, 
        ForeignArgVars, [], no, ForeignCode),
    
    Vars = [ ProcLayoutVar, CPIndexVar ],
    NonLocals = list_to_set(Vars),
    instmap_delta_from_assoc_list(assoc_list.from_corresponding_lists(Vars, 
        [Ground, Ground]), InstMapDelta),
    CallGoalInfo = impure_init_goal_info(NonLocals, InstMapDelta, detism_det),
    CallGoal = hlds_goal(CallGoalExpr, CallGoalInfo), 

    % construct complete goal list.
    Goals = [ GoalUnifyIndex, GoalUnifyProcLayout, CallGoal ].
      


    % Turn a map of coverage points and their indexs into a list in sorted
    % order.
    %
:- pred coverage_points_map_list(map(int, coverage_point_info)::in, 
    list(coverage_point_info)::out) is det.

coverage_points_map_list(Map, List) :-
    to_sorted_assoc_list(Map, AssocList),
    values(AssocList, List).


    % Retrive the pred and proc ids from either the deep_mabye_rec_info or
    % deep_pred_proc_id fields of a deep_info structure.
    %
:- pred pred_proc_id(proc_coverage_info::in, pred_id::out, proc_id::out) is det.

pred_proc_id(CoverageInfo, PredId, ProcId) :-
    MaybeRecInfo = CoverageInfo ^ ci_maybe_rec_info,
    PredProcId = CoverageInfo ^ ci_pred_proc_id,
    (
        MaybeRecInfo = yes(RecInfo),
        RecInfo ^ role = inner_proc(OuterPredProcId)
    ->
        OuterPredProcId = proc(PredId, ProcId)
    ;
        PredProcId = proc(PredId, ProcId)
    ).
    
    
    % Create a proc static cons id from the deep recursion info.  This is used
    % in several places.
    %
:- pred proc_static_cons_id(proc_coverage_info::in, cons_id::out) is det.

proc_static_cons_id(CoverageInfo, ProcStaticConsId) :-
    pred_proc_id(CoverageInfo, PredId, ProcId),
    ShroudedPredProcId = shroud_pred_proc_id(proc(PredId, ProcId)),
    ProcStaticConsId = deep_profiling_proc_layout(ShroudedPredProcId).


    % Returns a string containing the Low Level C code for a coverage point.
    %
:- pred coverage_point_ll_code(pragma_foreign_proc_attributes::out, 
    pragma_foreign_code_impl::out) is det.

coverage_point_ll_code(ForeignProcAttrs, ForeignCodeImpl) :-
    some [ !ForeignProcAttrs ] (
        % I don't think this would be thread safe but the cost of the mutexes
        % may be too high.
        !:ForeignProcAttrs = default_attributes(lang_c),
        set_may_call_mercury(proc_will_not_call_mercury, !ForeignProcAttrs),
        set_purity(purity_impure, !ForeignProcAttrs),
        set_terminates(proc_terminates, !ForeignProcAttrs),
        set_may_throw_exception(proc_will_not_throw_exception, 
            !ForeignProcAttrs),
        ForeignProcAttrs = !.ForeignProcAttrs
    ),
    ForeignCodeImpl = fc_impl_ordinary(Code, no),
    Code = 
"{
#ifdef MR_DEEP_PROFILING

    const MR_ProcLayout *pl;
    MR_ProcStatic       *ps;

    MR_enter_instrumentation();

  #ifdef MR_DEEP_PROFILING_LOWLEVEL_DEBUG
    if (MR_calldebug && MR_lld_print_enabled) {
        MR_print_deep_prof_vars(stdout, ""increment_coverage_point_count"");
        printf("", ProcLayout: 0x%x, CPIndex: %d\\n"", ProcLayout, CPIndex);
    }
  #endif

    pl = (const MR_ProcLayout *) ProcLayout;

    MR_deep_assert(NULL, NULL, NULL, pl != NULL);
    ps = pl->MR_sle_proc_static;
    MR_deep_assert(NULL, pl, NULL, ps != NULL);

    MR_deep_assert(NULL, pl, ps, 
        CPIndex >= ps->MR_ps_num_coverage_points);
    MR_deep_assert(NULL, pl, ps, ps->MR_ps_coverage_points != NULL);

    ps->MR_ps_coverage_points[CPIndex]++;

    /*
     * This procedure doesn't collect statistics about the deep profiler as
     * they can be generated by the profiling data it's self.
     */

    MR_leave_instrumentation();
#else
    MR_fatal_error(
        ""increment_coverage_point_count: deep profiling not enabled"");
#endif /* MR_DEEP_PROFILING */
}".

%-----------------------------------------------------------------------------%

:- func this_file = string.

this_file = "deep_profiling.m".

%-----------------------------------------------------------------------------%
:- end_module deep_profiling.
%-----------------------------------------------------------------------------%
