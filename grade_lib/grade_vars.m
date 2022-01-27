%---------------------------------------------------------------------------%
% vim: ts=4 sw=4 et ft=mercury
%---------------------------------------------------------------------------%

:- module grade_vars.
:- interface.

:- import_module grade_solver.

%---------------------------------------------------------------------------%

:- type grade_vars
    --->    grade_vars(
                grade_var_backend,
                grade_var_datarep,
                grade_var_target,
                grade_var_nested_funcs,
                grade_var_gcc_regs,
                grade_var_gcc_gotos,
                grade_var_gcc_labels,
                grade_var_low_tag_bits_use,
                grade_var_stack_len,
                grade_var_trail,
                grade_var_trail_segments,
                grade_var_minmodel,
                grade_var_thread_safe,
                grade_var_gc,
                grade_var_deep_prof,
                grade_var_mprof_call,
                grade_var_mprof_time,
                grade_var_mprof_memory,
                grade_var_tscope_prof,
                grade_var_term_size_prof,
                grade_var_debug,
                grade_var_ssdebug,
                grade_var_lldebug,
                grade_var_rbmm,
                grade_var_rbmm_debug,
                grade_var_rbmm_prof,
                grade_var_merc_file,
                grade_var_pregen,
                grade_var_merc_float
            ).

:- type grade_var_backend
    --->    grade_var_backend_mlds
    ;       grade_var_backend_llds
    ;       grade_var_backend_elds.

:- type grade_var_datarep
    --->    grade_var_datarep_heap_cells
    ;       grade_var_datarep_classes
    ;       grade_var_datarep_erlang.

:- type grade_var_target
    --->    grade_var_target_c
    ;       grade_var_target_csharp
    ;       grade_var_target_java
    ;       grade_var_target_erlang.

:- type grade_var_nested_funcs
    --->    grade_var_nested_funcs_no
    ;       grade_var_nested_funcs_yes.

:- type grade_var_gcc_regs
    --->    grade_var_gcc_regs_use_no
    ;       grade_var_gcc_regs_use_yes.

:- type grade_var_gcc_gotos
    --->    grade_var_gcc_gotos_use_no
    ;       grade_var_gcc_gotos_use_yes.

:- type grade_var_gcc_labels
    --->    grade_var_gcc_labels_use_no
    ;       grade_var_gcc_labels_use_yes.

:- type grade_var_low_tag_bits_use
    --->    grade_var_low_tag_bits_use_0
    ;       grade_var_low_tag_bits_use_2
    ;       grade_var_low_tag_bits_use_3.

:- type grade_var_stack_len
    --->    grade_var_stack_len_std
    ;       grade_var_stack_len_segments
    ;       grade_var_stack_len_extend.

:- type grade_var_trail
    --->    grade_var_trail_no
    ;       grade_var_trail_yes.

:- type grade_var_trail_segments
    --->    grade_var_trail_segments_no
    ;       grade_var_trail_segments_yes.

:- type grade_var_minmodel
    --->    grade_var_minmodel_no
    ;       grade_var_minmodel_stack_copy
    ;       grade_var_minmodel_stack_copy_debug
    ;       grade_var_minmodel_own_stack
    ;       grade_var_minmodel_own_stack_debug.

:- type grade_var_thread_safe
    --->    grade_var_thread_safe_no
    ;       grade_var_thread_safe_yes.

:- type grade_var_gc
    --->    grade_var_gc_none
    ;       grade_var_gc_bdw
    ;       grade_var_gc_bdw_debug
    ;       grade_var_gc_target_native
    ;       grade_var_gc_accurate
    ;       grade_var_gc_history.

:- type grade_var_deep_prof
    --->    grade_var_deep_prof_no
    ;       grade_var_deep_prof_yes.

:- type grade_var_mprof_call
    --->    grade_var_mprof_call_no
    ;       grade_var_mprof_call_yes.

:- type grade_var_mprof_time
    --->    grade_var_mprof_time_no
    ;       grade_var_mprof_time_yes.

:- type grade_var_mprof_memory
    --->    grade_var_mprof_memory_no
    ;       grade_var_mprof_memory_yes.

:- type grade_var_tscope_prof
    --->    grade_var_tscope_prof_no
    ;       grade_var_tscope_prof_yes.

:- type grade_var_term_size_prof
    --->    grade_var_term_size_prof_no
    ;       grade_var_term_size_prof_cells
    ;       grade_var_term_size_prof_words.

:- type grade_var_debug
    --->    grade_var_debug_none
    ;       grade_var_debug_debug
    ;       grade_var_debug_decldebug.

:- type grade_var_ssdebug
    --->    grade_var_ssdebug_no
    ;       grade_var_ssdebug_yes.

:- type grade_var_lldebug
    --->    grade_var_lldebug_no
    ;       grade_var_lldebug_yes.

:- type grade_var_rbmm
    --->    grade_var_rbmm_no
    ;       grade_var_rbmm_yes.

:- type grade_var_rbmm_debug
    --->    grade_var_rbmm_debug_no
    ;       grade_var_rbmm_debug_yes.

:- type grade_var_rbmm_prof
    --->    grade_var_rbmm_prof_no
    ;       grade_var_rbmm_prof_yes.

:- type grade_var_merc_file
    --->    grade_var_merc_file_no
    ;       grade_var_merc_file_yes.

:- type grade_var_pregen
    --->    grade_var_pregen_no
    ;       grade_var_pregen_yes.

:- type grade_var_merc_float
    --->    grade_var_merc_float_is_boxed_c_double
    ;       grade_var_merc_float_is_unboxed_c_double
    ;       grade_var_merc_float_is_unboxed_c_float.

%---------------------------------------------------------------------------%

    % This function translates the representation of a grade from a form
    % which has one type (solver_var_id) for all solver variables and
    % just one type (solver_var_valud_id) for all solver variable values,
    % and translates it into a representation which has a separate type
    % (soln_<var>) for each solver variable, whose function symbols include
    % only the values appropriate for that variable.
    %
    % The solver needs the first, uniform representation, since without it,
    % one cannot write generic code that can handle all the requirements.
    % However, this representation cannot express the fact that each solver
    % variable has only a restricted set of valid values. The code that deals
    % with grade strings is much easier to write if one can assume that
    % the invariant expressing this fact holds. The return value of this
    % function guarantees that invariant. (If some bug in the solver, or
    % in the data it is given, causes a violation of the invariant, this
    % function will throw an exception.)
    %
:- func success_map_to_grade_vars(success_soln_map) = grade_vars.

%---------------------------------------------------------------------------%

:- implementation.

:- import_module grade_spec.

:- import_module map.
:- import_module require.
:- import_module string.

%---------------------------------------------------------------------------%

success_map_to_grade_vars(!.SuccMap) = GradeVars :-
    map.det_remove(svar_ac_gcc_regs_avail, _GccRegsAvail, !SuccMap),
    map.det_remove(svar_ac_gcc_gotos_avail, _GccGotosAvail, !SuccMap),
    map.det_remove(svar_ac_gcc_labels_avail, _GccLabelsAvail, !SuccMap),
    map.det_remove(svar_ac_low_tag_bits_avail, _LowTagBitsAvail, !SuccMap),
    map.det_remove(svar_ac_size_of_double, _SizeOfDouble, !SuccMap),

    map.det_remove(svar_ac_merc_file, MercFile, !SuccMap),
    map.det_remove(svar_backend, Backend, !SuccMap),
    map.det_remove(svar_datarep, DataRep, !SuccMap),
    map.det_remove(svar_target, Target, !SuccMap),
    map.det_remove(svar_nested_funcs, NestedFuncs, !SuccMap),
    map.det_remove(svar_gcc_regs_use, GccRegsUse, !SuccMap),
    map.det_remove(svar_gcc_gotos_use, GccGotosUse, !SuccMap),
    map.det_remove(svar_gcc_labels_use, GccLabelsUse, !SuccMap),
    map.det_remove(svar_low_tag_bits_use, LowTagBitsUse, !SuccMap),
    map.det_remove(svar_stack_len, StackLen, !SuccMap),
    map.det_remove(svar_trail, Trail, !SuccMap),
    map.det_remove(svar_trail_segments, TrailSegments, !SuccMap),
    map.det_remove(svar_minmodel, MinimalModel, !SuccMap),
    map.det_remove(svar_thread_safe, ThreadSafe, !SuccMap),
    map.det_remove(svar_gc, Gc, !SuccMap),
    map.det_remove(svar_deep_prof, DeepProf, !SuccMap),
    map.det_remove(svar_mprof_call, MprofCall, !SuccMap),
    map.det_remove(svar_mprof_time, MprofTime, !SuccMap),
    map.det_remove(svar_mprof_memory, MprofMemory, !SuccMap),
    map.det_remove(svar_tscope_prof, TScopeProf, !SuccMap),
    map.det_remove(svar_term_size_prof, TermSizeProf, !SuccMap),
    map.det_remove(svar_debug, Debug, !SuccMap),
    map.det_remove(svar_ssdebug, SSDebug, !SuccMap),
    map.det_remove(svar_lldebug, LLDebug, !SuccMap),
    map.det_remove(svar_rbmm, RBMM, !SuccMap),
    map.det_remove(svar_rbmm_debug, RBMMDebug, !SuccMap),
    map.det_remove(svar_rbmm_prof, RBMMProf, !SuccMap),
    map.det_remove(svar_pregen, Pregen, !SuccMap),
    map.det_remove(svar_request_single_prec_float, _ReqSinglePrecFloat,
        !SuccMap),
    map.det_remove(svar_merc_float, MercFloat, !SuccMap),
    expect(map.is_empty(!.SuccMap), $pred, "unexpected entries in SuccMap"),

    ( if Backend = svalue_backend_mlds then
        GradeVarBackend = grade_var_backend_mlds
    else if Backend = svalue_backend_llds then
        GradeVarBackend = grade_var_backend_llds
    else if Backend = svalue_backend_elds then
        GradeVarBackend = grade_var_backend_elds
    else
        unexpected($pred, "unexpected value of Backend")
    ),

    ( if DataRep = svalue_datarep_heap_cells then
        GradeVarDataRep = grade_var_datarep_heap_cells
    else if DataRep = svalue_datarep_classes then
        GradeVarDataRep = grade_var_datarep_classes
    else if DataRep = svalue_datarep_erlang then
        GradeVarDataRep = grade_var_datarep_erlang
    else
        unexpected($pred, "unexpected value of DataRep")
    ),

    ( if Target = svalue_target_c then
        GradeVarTarget = grade_var_target_c
    else if Target = svalue_target_csharp then
        GradeVarTarget = grade_var_target_csharp
    else if Target = svalue_target_java then
        GradeVarTarget = grade_var_target_java
    else if Target = svalue_target_erlang then
        GradeVarTarget = grade_var_target_erlang
    else
        unexpected($pred, "unexpected value of Target")
    ),

    ( if NestedFuncs = svalue_nested_funcs_no then
        GradeVarNestedFuncs = grade_var_nested_funcs_no
    else if NestedFuncs = svalue_nested_funcs_yes then
        GradeVarNestedFuncs = grade_var_nested_funcs_yes
    else
        unexpected($pred, "unexpected value of NestedFuncs")
    ),

    ( if GccRegsUse = svalue_gcc_regs_use_no then
        GradeVarGccRegsUse = grade_var_gcc_regs_use_no
    else if GccRegsUse = svalue_gcc_regs_use_yes then
        GradeVarGccRegsUse = grade_var_gcc_regs_use_yes
    else
        unexpected($pred, "unexpected value of GccRegsUse")
    ),

    ( if GccGotosUse = svalue_gcc_gotos_use_no then
        GradeVarGccGotosUse = grade_var_gcc_gotos_use_no
    else if GccGotosUse = svalue_gcc_gotos_use_yes then
        GradeVarGccGotosUse = grade_var_gcc_gotos_use_yes
    else
        unexpected($pred, "unexpected value of GccGotosUse")
    ),

    ( if GccLabelsUse = svalue_gcc_labels_use_no then
        GradeVarGccLabelsUse = grade_var_gcc_labels_use_no
    else if GccLabelsUse = svalue_gcc_labels_use_yes then
        GradeVarGccLabelsUse = grade_var_gcc_labels_use_yes
    else
        unexpected($pred, "unexpected value of GccLabelsUse")
    ),

    ( if LowTagBitsUse = svalue_low_tag_bits_use_0 then
        GradeVarLowTagBitsUse = grade_var_low_tag_bits_use_0
    else if LowTagBitsUse = svalue_low_tag_bits_use_2 then
        GradeVarLowTagBitsUse = grade_var_low_tag_bits_use_2
    else if LowTagBitsUse = svalue_low_tag_bits_use_3 then
        GradeVarLowTagBitsUse = grade_var_low_tag_bits_use_3
    else
        unexpected($pred, "unexpected value of LowTagBitsUse")
    ),

    ( if StackLen = svalue_stack_len_std then
        GradeVarStackLen = grade_var_stack_len_std
    else if StackLen = svalue_stack_len_segments then
        GradeVarStackLen = grade_var_stack_len_segments
    else if StackLen = svalue_stack_len_extend then
        GradeVarStackLen = grade_var_stack_len_extend
    else
        unexpected($pred, "unexpected value of StackLen")
    ),

    ( if Trail = svalue_trail_no then
        GradeVarTrail = grade_var_trail_no
    else if Trail = svalue_trail_yes then
        GradeVarTrail = grade_var_trail_yes
    else
        unexpected($pred, "unexpected value of Trail")
    ),

    ( if TrailSegments = svalue_trail_segments_no then
        GradeVarTrailSegments = grade_var_trail_segments_no
    else if TrailSegments = svalue_trail_segments_yes then
        GradeVarTrailSegments = grade_var_trail_segments_yes
    else
        unexpected($pred, "unexpected value of TrailSegments")
    ),

    ( if MinimalModel = svalue_minmodel_no then
        GradeVarMinimalModel = grade_var_minmodel_no
    else if MinimalModel = svalue_minmodel_stack_copy then
        GradeVarMinimalModel = grade_var_minmodel_stack_copy
    else if MinimalModel = svalue_minmodel_stack_copy_debug then
        GradeVarMinimalModel = grade_var_minmodel_stack_copy_debug
    else if MinimalModel = svalue_minmodel_own_stack then
        GradeVarMinimalModel = grade_var_minmodel_own_stack
    else if MinimalModel = svalue_minmodel_own_stack_debug then
        GradeVarMinimalModel = grade_var_minmodel_own_stack_debug
    else
        unexpected($pred, "unexpected value of MinimalModel")
    ),

    ( if ThreadSafe = svalue_thread_safe_no then
        GradeVarThreadSafe = grade_var_thread_safe_no
    else if ThreadSafe = svalue_thread_safe_yes then
        GradeVarThreadSafe = grade_var_thread_safe_yes
    else
        unexpected($pred, "unexpected value of ThreadSafe")
    ),

    ( if Gc = svalue_gc_none then
        GradeVarGc = grade_var_gc_none
    else if Gc = svalue_gc_bdw then
        GradeVarGc = grade_var_gc_bdw
    else if Gc = svalue_gc_bdw_debug then
        GradeVarGc = grade_var_gc_bdw_debug
    else if Gc = svalue_gc_target_native then
        GradeVarGc = grade_var_gc_target_native
    else if Gc = svalue_gc_accurate then
        GradeVarGc = grade_var_gc_accurate
    else if Gc = svalue_gc_history then
        GradeVarGc = grade_var_gc_history
    else
        unexpected($pred, "unexpected value of Gc")
    ),

    ( if DeepProf = svalue_deep_prof_no then
        GradeVarDeepProf = grade_var_deep_prof_no
    else if DeepProf = svalue_deep_prof_yes then
        GradeVarDeepProf = grade_var_deep_prof_yes
    else
        unexpected($pred, "unexpected value of DeepProf")
    ),

    ( if MprofCall = svalue_mprof_call_no then
        GradeVarMprofCall = grade_var_mprof_call_no
    else if MprofCall = svalue_mprof_call_yes then
        GradeVarMprofCall = grade_var_mprof_call_yes
    else
        unexpected($pred, "unexpected value of MprofCall")
    ),

    ( if MprofTime = svalue_mprof_time_no then
        GradeVarMprofTime = grade_var_mprof_time_no
    else if MprofTime = svalue_mprof_time_yes then
        GradeVarMprofTime = grade_var_mprof_time_yes
    else
        unexpected($pred, "unexpected value of MprofTime")
    ),

    ( if MprofMemory = svalue_mprof_memory_no then
        GradeVarMprofMemory = grade_var_mprof_memory_no
    else if MprofMemory = svalue_mprof_memory_yes then
        GradeVarMprofMemory = grade_var_mprof_memory_yes
    else
        unexpected($pred, "unexpected value of MprofMemory")
    ),

    ( if TScopeProf = svalue_tscope_prof_no then
        GradeVarTScopeProf = grade_var_tscope_prof_no
    else if TScopeProf = svalue_tscope_prof_yes then
        GradeVarTScopeProf = grade_var_tscope_prof_yes
    else
        unexpected($pred, "unexpected value of TScopeProf")
    ),

    ( if TermSizeProf = svalue_term_size_prof_no then
        GradeVarTermSizeProf = grade_var_term_size_prof_no
    else if TermSizeProf = svalue_term_size_prof_cells then
        GradeVarTermSizeProf = grade_var_term_size_prof_cells
    else if TermSizeProf = svalue_term_size_prof_words then
        GradeVarTermSizeProf = grade_var_term_size_prof_words
    else
        unexpected($pred, "unexpected value of TermSizeProf")
    ),

    ( if Debug = svalue_debug_none then
        GradeVarDebug = grade_var_debug_none
    else if Debug = svalue_debug_debug then
        GradeVarDebug = grade_var_debug_debug
    else if Debug = svalue_debug_decldebug then
        GradeVarDebug = grade_var_debug_decldebug
    else
        unexpected($pred, "unexpected value of Debug")
    ),

    ( if SSDebug = svalue_ssdebug_no then
        GradeVarSSDebug = grade_var_ssdebug_no
    else if SSDebug = svalue_ssdebug_yes then
        GradeVarSSDebug = grade_var_ssdebug_yes
    else
        unexpected($pred, "unexpected value of SSDebug")
    ),

    ( if LLDebug = svalue_lldebug_no then
        GradeVarLLDebug = grade_var_lldebug_no
    else if LLDebug = svalue_lldebug_yes then
        GradeVarLLDebug = grade_var_lldebug_yes
    else
        unexpected($pred, "unexpected value of LLDebug")
    ),

    ( if RBMM = svalue_rbmm_no then
        GradeVarRBMM = grade_var_rbmm_no
    else if RBMM = svalue_rbmm_yes then
        GradeVarRBMM = grade_var_rbmm_yes
    else
        unexpected($pred, "unexpected value of RBMM")
    ),

    ( if RBMMDebug = svalue_rbmm_debug_no then
        GradeVarRBMMDebug = grade_var_rbmm_debug_no
    else if RBMMDebug = svalue_rbmm_debug_yes then
        GradeVarRBMMDebug = grade_var_rbmm_debug_yes
    else
        unexpected($pred, "unexpected value of RBMMDebug")
    ),

    ( if RBMMProf = svalue_rbmm_prof_no then
        GradeVarRBMMProf = grade_var_rbmm_prof_no
    else if RBMMProf = svalue_rbmm_prof_yes then
        GradeVarRBMMProf = grade_var_rbmm_prof_yes
    else
        unexpected($pred, "unexpected value of RBMMProf")
    ),

    ( if MercFile = svalue_ac_merc_file_no then
        GradeVarMercFile = grade_var_merc_file_no
    else if MercFile = svalue_ac_merc_file_yes then
        GradeVarMercFile = grade_var_merc_file_yes
    else
        unexpected($pred, "unexpected value of MercFile")
    ),

    ( if Pregen = svalue_pregen_no then
        GradeVarPregen = grade_var_pregen_no
    else if Pregen = svalue_pregen_yes then
        GradeVarPregen = grade_var_pregen_yes
    else
        unexpected($pred, "unexpected value of Pregen")
    ),

    ( if MercFloat = svalue_merc_float_is_boxed_c_double then
        GradeVarMercFloat = grade_var_merc_float_is_boxed_c_double
    else if MercFloat = svalue_merc_float_is_unboxed_c_double then
        GradeVarMercFloat = grade_var_merc_float_is_unboxed_c_double
    else if MercFloat = svalue_merc_float_is_unboxed_c_float then
        GradeVarMercFloat = grade_var_merc_float_is_unboxed_c_float
    else
        unexpected($pred, "unexpected value of MercFloat")
    ),

    GradeVars = grade_vars(
        GradeVarBackend, GradeVarDataRep,
        GradeVarTarget, GradeVarNestedFuncs,
        GradeVarGccRegsUse, GradeVarGccGotosUse, GradeVarGccLabelsUse,
        GradeVarLowTagBitsUse, GradeVarStackLen,
        GradeVarTrail, GradeVarTrailSegments,
        GradeVarMinimalModel, GradeVarThreadSafe, GradeVarGc,
        GradeVarDeepProf,
        GradeVarMprofCall, GradeVarMprofTime, GradeVarMprofMemory,
        GradeVarTScopeProf, GradeVarTermSizeProf,
        GradeVarDebug, GradeVarSSDebug, GradeVarLLDebug,
        GradeVarRBMM, GradeVarRBMMDebug, GradeVarRBMMProf,
        GradeVarMercFile, GradeVarPregen, GradeVarMercFloat
    ).

%---------------------------------------------------------------------------%
:- end_module grade_vars.
%---------------------------------------------------------------------------%
