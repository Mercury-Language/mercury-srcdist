%-----------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et
%-----------------------------------------------------------------------------%
% Copyright (C) 2001-2007 The University of Melbourne.
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
        apply_tail_recursion_to_goal(Goal0, ApplyInfo, Goal, no,
            FoundTailCall, _),
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

:- pred apply_tail_recursion_to_goal(hlds_goal::in,
    apply_tail_recursion_info::in, hlds_goal::out, bool::in, bool::out,
    maybe(list(prog_var))::out) is det.

apply_tail_recursion_to_goal(Goal0, ApplyInfo, Goal, !FoundTailCall,
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
            apply_tail_recursion_to_conj(Goals0, ApplyInfo, Goals,
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
        apply_tail_recursion_to_disj(Goals0, ApplyInfo, Goals, !FoundTailCall),
        GoalExpr = disj(Goals),
        Goal = hlds_goal(GoalExpr, GoalInfo0),
        Continue = no
    ;
        GoalExpr0 = switch(Var, CanFail, Cases0),
        apply_tail_recursion_to_cases(Cases0, ApplyInfo, Cases,
            !FoundTailCall),
        GoalExpr = switch(Var, CanFail, Cases),
        Goal = hlds_goal(GoalExpr, GoalInfo0),
        Continue = no
    ;
        GoalExpr0 = if_then_else(Vars, Cond, Then0, Else0),
        apply_tail_recursion_to_goal(Then0, ApplyInfo, Then,
            !FoundTailCall, _),
        apply_tail_recursion_to_goal(Else0, ApplyInfo, Else,
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
    apply_tail_recursion_info::in, list(hlds_goal)::out,
    bool::in, bool::out, maybe(list(prog_var))::out) is det.

apply_tail_recursion_to_conj([], ApplyInfo, [],
        !FoundTailCall, yes(ApplyInfo ^ outputs)).
apply_tail_recursion_to_conj([Goal0 | Goals0], ApplyInfo0, [Goal | Goals],
        !FoundTailCall, Continue) :-
    apply_tail_recursion_to_conj(Goals0, ApplyInfo0, Goals,
        !FoundTailCall, Continue1),
    (
        Continue1 = yes(Outputs),
        apply_tail_recursion_to_goal(Goal0,
            ApplyInfo0 ^ outputs := Outputs, Goal,
            !FoundTailCall, Continue)
    ;
        Continue1 = no,
        Goal = Goal0,
        Continue = no
    ).

:- pred apply_tail_recursion_to_disj(list(hlds_goal)::in,
    apply_tail_recursion_info::in, list(hlds_goal)::out,
    bool::in, bool::out) is det.

apply_tail_recursion_to_disj([], _, [], !FoundTailCall).
apply_tail_recursion_to_disj([Goal0], ApplyInfo, [Goal],
        !FoundTailCall) :-
    apply_tail_recursion_to_goal(Goal0, ApplyInfo, Goal, !FoundTailCall, _).
apply_tail_recursion_to_disj([Goal0 | Goals0], ApplyInfo, [Goal0 | Goals],
        !FoundTailCall) :-
    Goals0 = [_ | _],
    apply_tail_recursion_to_disj(Goals0, ApplyInfo, Goals, !FoundTailCall).

:- pred apply_tail_recursion_to_cases(list(case)::in,
    apply_tail_recursion_info::in, list(case)::out,
    bool::in, bool::out) is det.

apply_tail_recursion_to_cases([], _, [], !FoundTailCall).
apply_tail_recursion_to_cases([case(ConsId, Goal0) | Cases0], ApplyInfo,
        [case(ConsId, Goal) | Cases], !FoundTailCall) :-
    apply_tail_recursion_to_goal(Goal0, ApplyInfo, Goal, !FoundTailCall, _),
    apply_tail_recursion_to_cases(Cases0, ApplyInfo, Cases, !FoundTailCall).

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
    Case = case(_, Goal),
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
        deep_prof_transform_goal(empty, Goal0, TransformedGoal, _,
            DeepInfo0, DeepInfo),

        !:VarInfo = DeepInfo ^ deep_varinfos,
        CallSites = DeepInfo ^ deep_call_sites,

        (
            MaybeRecInfo = yes(RecInfo),
            RecInfo ^ role = inner_proc(OuterPredProcId)
        ->
            OuterPredProcId = proc(PredId, ProcId)
        ;
            PredProcId = proc(PredId, ProcId)
        ),

        module_info_get_globals(ModuleInfo, Globals),
        globals.lookup_bool_option(Globals, use_activation_counts,
            UseActivationCounts),
        
        IsInInterface = is_proc_in_interface(ModuleInfo, PredId, ProcId),
        ProcStatic = hlds_proc_static(FileName, LineNumber, IsInInterface,
            CallSites),
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
        deep_prof_transform_conj(0, Path, Goals0, Goals1, AddedImpurity,
            !DeepInfo),
        add_impurity_if_needed(AddedImpurity, GoalInfo0, GoalInfo),
        flatten_conj(Goals1, Goals),
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

:- pred deep_prof_transform_conj(int::in, goal_path::in,
    list(hlds_goal)::in, list(hlds_goal)::out, bool::out,
    deep_info::in, deep_info::out) is det.

deep_prof_transform_conj(_, _, [], [], no, !DeepInfo).
deep_prof_transform_conj(N, Path, [Goal0 | Goals0], [Goal | Goals],
        AddedImpurity, !DeepInfo) :-
    N1 = N + 1,
    deep_prof_transform_goal(cord.snoc(Path, step_conj(N1)), Goal0, Goal,
        AddedImpurityFirst, !DeepInfo),
    deep_prof_transform_conj(N1, Path, Goals0, Goals, AddedImpurityLater,
        !DeepInfo),
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
deep_prof_transform_switch(MaybeNumCases, N, Path, [case(Id, Goal0) | Goals0],
        [case(Id, Goal) | Goals], AddedImpurity, !DeepInfo) :-
    N1 = N + 1,
    deep_prof_transform_goal(cord.snoc(Path, step_switch(N1, MaybeNumCases)),
        Goal0, Goal, AddedImpurityFirst, !DeepInfo),
    deep_prof_transform_switch(MaybeNumCases, N1, Path, Goals0, Goals,
        AddedImpurityLater, !DeepInfo),
    bool.or(AddedImpurityFirst, AddedImpurityLater, AddedImpurity).

:- pred deep_prof_wrap_call(goal_path::in, hlds_goal::in, hlds_goal::out,
    deep_info::in, deep_info::out) is det.

deep_prof_wrap_call(GoalPath, hlds_goal(GoalExpr0, GoalInfo0),
        hlds_goal(GoalExpr, GoalInfo), !DeepInfo) :-
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
    ).

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

:- func this_file = string.

this_file = "deep_profiling.m".

%-----------------------------------------------------------------------------%
:- end_module deep_profiling.
%-----------------------------------------------------------------------------%
