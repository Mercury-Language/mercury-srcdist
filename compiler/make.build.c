/*
** Automatically generated from `make.build.m'
** by the Mercury compiler,
** version rotd-2023-04-18
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** UNBOXED_INT64S=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


// :- module make.build.
// :- implementation.

/*
INIT mercury__make__build__init
ENDINIT
*/

#include "make.build.mih"
#include "make.build.mh"


#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "make.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "version_hash_table.mih"
#include "backend_libs.compile_target_code.mih"
#include "io.file.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.handle_options.mih"
#include "libs.maybe_succeeded.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.process_util.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "make.dependencies.mih"
#include "make.deps_set.mih"
#include "make.make_info.mih"
#include "make.module_target.mih"
#include "make.options_file.mih"
#include "make.program_target.mih"
#include "make.top_level.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_dep_info.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"

#line 538 "make.build.m"

#ifdef MR_HAVE_SYS_MMAN_H
  #include <sys/mman.h>

  // Just in case.
  #if !defined(MAP_ANONYMOUS) && defined(MAP_ANON)
    #define MAP_ANONYMOUS MAP_ANON
  #endif
#endif

#ifdef MAP_ANONYMOUS
  // Darwin 5.x and FreeBSD do not implement process-shared POSIX mutexes.
  // Use System V semaphores instead. As System V semaphores seem to be more
  // widely supported we may consider using them exclusively or in preference
  // to POSIX mutexes in the future.
  #if !defined(__APPLE__) && !defined(__FreeBSD__) &&         defined(MR_HAVE_PTHREAD_H) &&         defined(MR_HAVE_PTHREAD_MUTEXATTR_SETPSHARED)
    #include <pthread.h>

    #define MC_HAVE_JOBCTL_IPC 1
  #elif defined(MR_HAVE_SYS_SEM_H)
    #include <sys/sem.h>

    #define MC_USE_SYSV_SEMAPHORE 1
    #define MC_HAVE_JOBCTL_IPC 1
  #endif
#endif

#ifdef MC_HAVE_JOBCTL_IPC

typedef enum MC_TaskStatus MC_TaskStatus;

enum MC_TaskStatus {
    TASK_NEW,       // task not yet attempted
    TASK_ACCEPTED,  // someone is working on this task
    TASK_DONE,      // task successfully completed
    TASK_ERROR      // error occurred when working on the task
};

// This structure is placed in shared memory.
struct MC_JobCtl {
    // Static data.
    MR_Integer      jc_total_tasks;

    // Dynamic data.  The mutex protects the rest.
  #ifdef MC_USE_SYSV_SEMAPHORE
    int             jc_semid;
  #else
    pthread_mutex_t jc_mutex;
  #endif
    MR_bool         jc_abort;
    MC_TaskStatus   jc_tasks[MR_VARIABLE_SIZED];
};

#define MC_JOB_CTL_SIZE(N)  (sizeof(MC_JobCtl) + (N) * sizeof(MC_TaskStatus))

static MC_JobCtl *  MC_create_job_ctl(MR_Integer total_tasks);
static void         MC_lock_job_ctl(MC_JobCtl *job_ctl);
static void         MC_unlock_job_ctl(MC_JobCtl *job_ctl);

#endif // MC_HAVE_JOBCTL_IPC




static const MR_VA_PseudoTypeInfo_Struct7 make__build____vpti_pred_7__plain_libs__globals__type_ctor_info_globals_0__pseudo_1__plain_libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0__plain_make__make_info__type_ctor_info_make_info_0__plain_make__make_info__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__build__list__pti_list_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 make__build__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__build__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_VA_PseudoTypeInfo_Struct7 make__build____vpti_pred_7__plain_libs__globals__type_ctor_info_globals_0__pseudo_1__plain_libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0__pseudo_2__pseudo_2__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_VA_PseudoTypeInfo_Struct7 make__build____vpti_pred_7__plain_libs__globals__type_ctor_info_globals_0__pseudo_1__plain_libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0__pseudo_2__pseudo_2__pseudo_3__pseudo_3;

static const MR_FA_TypeInfo_Struct1 make__build__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_PseudoTypeInfo make__build__make__build__field_types_may_build_0_0[1];

static const MR_DuFunctorDesc make__build__make__build__du_functor_desc_may_build_0_0;

static const MR_FA_TypeInfo_Struct1 make__build__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo make__build__make__build__field_types_may_build_0_1[2];

static const MR_DuFunctorDesc make__build__make__build__du_functor_desc_may_build_0_1;

static const MR_DuFunctorDescPtr make__build__make__build__du_stag_ordered_may_build_0_0[1];

static const MR_DuFunctorDescPtr make__build__make__build__du_stag_ordered_may_build_0_1[1];

static const MR_DuPtagLayout make__build__make__build__du_ptag_ordered_may_build_0[2];

static const MR_DuFunctorDescPtr make__build__make__build__du_name_ordered_may_build_0[2];

static const MR_Integer make__build__make__build__functor_number_map_may_build_0[2];

static const MR_EnumFunctorDesc make__build__make__build__enum_functor_desc_maybe_invoked_by_mmc_make_0_0;

static const MR_EnumFunctorDesc make__build__make__build__enum_functor_desc_maybe_invoked_by_mmc_make_0_1;

static const MR_EnumFunctorDescPtr make__build__make__build__enum_ordinal_ordered_maybe_invoked_by_mmc_make_0[2];

static const MR_EnumFunctorDescPtr make__build__make__build__enum_name_ordered_maybe_invoked_by_mmc_make_0[2];

static const MR_Integer make__build__make__build__functor_number_map_maybe_invoked_by_mmc_make_0[2];

static void MR_CALL 
make__build__IntroducedFrom__pred__foldl2_maybe_stop_at_error_parallel_processes__436__1_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__build__IntroducedFrom__pred__foldl2_maybe_stop_at_error_parallel_processes__436__1_6_p_0(
  MR_Box JobCtl_21,
  MR_Word Pids_22,
  MR_Word HeadVar__3_108,
  MR_Word * HeadVar__4_109);

static void MR_CALL 
make__build__IntroducedFrom__pred__foldl2_maybe_stop_at_error_parallel_processes__429__1_12_p_0(
  MR_Word TypeInfo_for_T_97,
  MR_Word KeepGoing_11,
  MR_Word MakeTarget_13,
  MR_Word Globals_14,
  MR_Word Targets_15,
  MR_Box JobCtl_21,
  MR_Word STATE_VARIABLE_Info_33_33,
  MR_Integer HeadVar__8_98,
  MR_Word HeadVar__9_99,
  MR_Word * HeadVar__10_100);

static void MR_CALL 
make__build__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_112_97_114_97_108_108_101_108_95_112_114_111_99_101_115_115_101_115_95_95_52_50_57_95_95_49_95_95_91_56_93_95_48_12_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__build__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_112_97_114_97_108_108_101_108_95_112_114_111_99_101_115_115_101_115_95_95_52_50_57_95_95_49_95_95_91_56_93_95_48_12_p_0(
  MR_Word TypeInfo_for_T_97,
  MR_Word KeepGoing_11,
  MR_Word MakeTarget_13,
  MR_Word Globals_14,
  MR_Word Targets_15,
  MR_Box JobCtl_21,
  MR_Word STATE_VARIABLE_Info_33_33,
  MR_Word HeadVar__9_99,
  MR_Word * HeadVar__10_100);

static MR_Word MR_CALL 
make__build__make_no_job_ctl_0_f_0(void);

static MR_Word MR_CALL 
make__build__make_yes_job_ctl_1_f_0(
  MR_Box JobCtl_3);

static void MR_CALL 
make__build__reap_worker_process_5_p_0(
  MR_Integer Pid_6,
  MR_Word STATE_VARIABLE_Succeeded_0_10,
  MR_Word * STATE_VARIABLE_Succeeded_11);

static void MR_CALL 
make__build__worker_loop_signal_cleanup_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__build__worker_loop_signal_cleanup_6_p_0(
  MR_Word TypeInfo_for_Info_19,
  MR_Box JobCtl_7,
  MR_Word Pids_8,
  MR_Box STATE_VARIABLE_Info_0_11,
  MR_Box * STATE_VARIABLE_Info_12);

static void MR_CALL 
make__build__mark_abort_3_p_0(
  MR_Box JobCtl_1);

static void MR_CALL 
make__build__child_worker_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__build__child_worker_9_p_0(
  MR_Word TypeInfo_for_T_32,
  MR_Word TypeInfo_for_Info_33,
  MR_Word Globals_10,
  MR_Word KeepGoing_11,
  MR_Word MakeTarget_12,
  MR_Word Targets_13,
  MR_Box JobCtl_14,
  MR_Box STATE_VARIABLE_Info_0_23,
  MR_Word * Succeeded_16);

static void MR_CALL 
make__build__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_111_114_107_101_114_95_108_111_111_112_95_95_91_50_93_95_48_11_p_0(
  MR_Word TypeInfo_for_T_37,
  MR_Word Globals_12,
  MR_Word KeepGoing_13,
  MR_Word MakeTarget_14,
  MR_Word Targets_15,
  MR_Box JobCtl_16,
  MR_Word STATE_VARIABLE_Succeeded_0_24,
  MR_Word * STATE_VARIABLE_Succeeded_25,
  MR_Box STATE_VARIABLE_Info_0_26,
  MR_Box * STATE_VARIABLE_Info_27);

static void MR_CALL 
make__build__write_line_nl_4_p_0(
  MR_Word Stream_5,
  MR_String Line_6);

static void MR_CALL 
make__build__foldl2_make_module_targets_maybe_parallel_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
make__build__foldl2_maybe_stop_at_error_parallel_processes__ho1_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__build__foldl2_maybe_stop_at_error_parallel_processes__ho1_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__build__foldl2_maybe_stop_at_error_parallel_processes__ho1_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__build__foldl2_maybe_stop_at_error_parallel_processes__ho1_10_p_0(
  MR_Word Var_119,
  MR_Word KeepGoing_11,
  MR_Integer Jobs_12,
  MR_Word MakeTarget_13,
  MR_Word Globals_14,
  MR_Word Targets_15,
  MR_Word * Succeeded_16,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29);

static void MR_CALL 
make__build__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_111_114_107_101_114_95_108_111_111_112_95_95_104_111_56_95_95_91_52_93_95_48_11_p_0(
  MR_Word Var_39,
  MR_Word Globals_12,
  MR_Word KeepGoing_13,
  MR_Word Targets_15,
  MR_Box JobCtl_16,
  MR_Word STATE_VARIABLE_Succeeded_0_24,
  MR_Word * STATE_VARIABLE_Succeeded_25,
  MR_Word STATE_VARIABLE_Info_0_26,
  MR_Word * STATE_VARIABLE_Info_27);

static void MR_CALL 
make__build__mark_task_error_5_p_0(
  MR_Box JobCtl_1,
  MR_Integer TaskNumber_2,
  MR_Word KeepGoing_3);

static void MR_CALL 
make__build__mark_task_done_4_p_0(
  MR_Box JobCtl_1,
  MR_Integer TaskNumber_2);

static void MR_CALL 
make__build__accept_task_4_p_0(
  MR_Box JobCtl_1,
  MR_Integer * TaskNumber_2);

static void MR_CALL 
make__build__destroy_job_ctl_3_p_0(
  MR_Box JobCtl_1);

static void MR_CALL 
make__build__create_job_ctl_4_p_0(
  MR_Integer TotalJobs_1,
  MR_Word * MaybeJobCtl_2);

static MR_bool MR_CALL 
make__build__have_job_ctl_ipc_0_p_0(void);

static void MR_CALL 
make__build__foldl2_maybe_stop_at_error_loop__ho2_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Succeeded_0_5,
  MR_Word * STATE_VARIABLE_Succeeded_6,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8);

static void MR_CALL 
make__build__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_108_111_111_112_95_95_104_111_51_95_95_91_53_93_95_48_10_p_0(
  MR_Word Var_44,
  MR_Word Var_45,
  MR_Word Var_46,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Succeeded_0_5,
  MR_Word * STATE_VARIABLE_Succeeded_6,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8);

static void MR_CALL 
make__build__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_108_111_111_112_95_95_104_111_52_95_95_91_51_93_95_48_10_p_0(
  MR_Word Var_44,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Succeeded_0_5,
  MR_Word * STATE_VARIABLE_Succeeded_6,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8);

static void MR_CALL 
make__build__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_105_116_104_95_108_111_99_107_101_100_95_115_116_100_111_117_116_95_95_104_111_54_95_95_91_54_93_95_48_4_p_0(
  MR_Word Var_36,
  MR_Integer Var_37,
  MR_Word Var_38,
  MR_Word Var_39,
  MR_Word Info_5);

static void MR_CALL 
make__build__make_write_error_streams_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__build__make_write_error_streams_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__build__make_write_error_streams_6_p_0(
  MR_Word InputLines_7,
  MR_Integer LinesToWrite_8,
  MR_Word FullOutputStream_9,
  MR_Word PartialOutputStream_10);

static void MR_CALL 
make__build__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_105_116_104_95_108_111_99_107_101_100_95_115_116_100_111_117_116_95_95_104_111_53_95_95_91_52_93_95_48_4_p_0(
  MR_String Var_36,
  MR_Word Var_37,
  MR_Word Info_5);

static void MR_CALL 
make__build__write_error_opening_file_4_p_0(
  MR_String FileName_5,
  MR_Word Error_6);

static void MR_CALL 
make__build__unlock_stdout_3_p_0(
  MR_Box JobCtl_1);

static void MR_CALL 
make__build__lock_stdout_3_p_0(
  MR_Box JobCtl_1);

static MR_bool MR_CALL 
make__build____Unify____foldl2_pred_with_status_3_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5);

static void MR_CALL 
make__build____Compare____foldl2_pred_with_status_3_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6);

static MR_bool MR_CALL 
make__build____Unify____job_ctl_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__build____Compare____job_ctl_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__build____Unify____may_build_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__build____Compare____may_build_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__build____Unify____maybe_invoked_by_mmc_make_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__build____Compare____maybe_invoked_by_mmc_make_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__build____Unify____stdout_lock_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__build____Compare____stdout_lock_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box make__build_scalar_common_1[5][2];

static /* final */ const MR_Box make__build_scalar_common_2[2][1];

static /* final */ const MR_Box make__build_scalar_common_3[2][7];

static /* final */ const MR_Integer make__build_scalar_common_4[1][2];

static /* final */ const MR_Box make__build_scalar_common_5[1][15];

static /* final */ const MR_Box make__build_scalar_common_6[1][9];

static /* final */ const MR_Box make__build_scalar_common_7[1][8];

static /* final */ const MR_Box make__build_scalar_common_8[1][3];

static /* final */ const MR_Box make__build_scalar_common_9[1][11];

static /* final */ const MR_Box make__build_scalar_common_10[1][10];

static /* final */ const MR_Integer make__build_scalar_common_11[1][3];

static /* final */ const MR_Box make__build_scalar_common_12[1][14];




static /* final */ const MR_Box make__build_scalar_common_1[5][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_String) "--use-subdirs")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_String) "--invoked-by-mmc-make")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box make__build_scalar_common_2[2][1] = {
  /* row   0 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".err"))))
  },
  /* row   1 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
};

static /* final */ const MR_Box make__build_scalar_common_3[2][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Integer make__build_scalar_common_4[1][2] = {
  /* row   0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box make__build_scalar_common_5[1][15] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&make__build_scalar_common_4[0])),
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_maybe_keep_going_0)),
    ((MR_Box) (&make__build____vpti_pred_7__plain_libs__globals__type_ctor_info_globals_0__pseudo_1__plain_libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0__plain_make__make_info__type_ctor_info_make_info_0__plain_make__make_info__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__build__list__pti_list_1__pseudo_1)),
    ((MR_Box) (&make__build__make__build__type_ctor_info_job_ctl_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&make__build__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&make__build__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__build_scalar_common_6[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&make__build__make__build__type_ctor_info_job_ctl_0)),
    ((MR_Box) (&make__build__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__build_scalar_common_7[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__build_scalar_common_8[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&make__build_scalar_common_7[0])),
    ((MR_Box) (make__build__foldl2_maybe_stop_at_error_parallel_processes__ho1_10_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box make__build_scalar_common_9[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&make__build__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0)),
    ((MR_Box) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__build_scalar_common_10[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&make__build_scalar_common_4[0])),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&make__build__make__build__type_ctor_info_job_ctl_0)),
    ((MR_Box) (&make__build__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Integer make__build_scalar_common_11[1][3] = {
  /* row   0 */
  {
    (MR_Integer) 2,
    (MR_Integer) 33,
    (MR_Integer) 65
  },
};

static /* final */ const MR_Box make__build_scalar_common_12[1][14] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&make__build_scalar_common_11[0])),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_maybe_keep_going_0)),
    ((MR_Box) (&make__build____vpti_pred_7__plain_libs__globals__type_ctor_info_globals_0__pseudo_1__plain_libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0__pseudo_2__pseudo_2__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&make__build__list__pti_list_1__pseudo_1)),
    ((MR_Box) (&make__build__make__build__type_ctor_info_job_ctl_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "version_array.mh"
#include "io.stream_ops.mh"
#include "libs.process_util.mh"
#include "make.build.mh"
#line 603 "make.build.m"


#ifdef MC_HAVE_JOBCTL_IPC

static MC_JobCtl *
MC_create_job_ctl(MR_Integer total_tasks)
{
    size_t              size;
    MC_JobCtl           *job_ctl;
    MR_Integer          i;

    size = MC_JOB_CTL_SIZE(total_tasks);

    // Create the shared memory segment.
    job_ctl = mmap(NULL, size, PROT_READ | PROT_WRITE,
        MAP_ANONYMOUS | MAP_SHARED, -1, 0);
    if (job_ctl == (void *) -1) {
        perror("MC_create_job_ctl: mmap");
        return NULL;
    }

#ifdef MC_USE_SYSV_SEMAPHORE
    {
        struct sembuf sb;

        job_ctl->jc_semid = semget(IPC_PRIVATE, 1, 0600);
        if (job_ctl->jc_semid == -1) {
            perror("MC_create_sem: semget");
            munmap(job_ctl, size);
            return NULL;
        }

        sb.sem_num = 0;
        sb.sem_op = 1;
        sb.sem_flg = 0;
        if (semop(job_ctl->jc_semid, &sb, 1) == -1) {
            perror("MC_create_sem: semop");
            semctl(job_ctl->jc_semid, 0, IPC_RMID);
            munmap(job_ctl, size);
            return NULL;
        }
    }
#else
    {
        pthread_mutexattr_t mutex_attr;

        pthread_mutexattr_init(&mutex_attr);
        if (pthread_mutexattr_setpshared(&mutex_attr, PTHREAD_PROCESS_SHARED)
            != 0)
        {
            perror("MC_create_job_ctl: pthread_mutexattr_setpshared");
            pthread_mutexattr_destroy(&mutex_attr);
            munmap(job_ctl, size);
            return NULL;
        }

        if (pthread_mutex_init(&job_ctl->jc_mutex, &mutex_attr) != 0) {
            perror("MC_create_job_ctl: sem_init");
            pthread_mutexattr_destroy(&mutex_attr);
            munmap(job_ctl, size);
            return NULL;
        }

        pthread_mutexattr_destroy(&mutex_attr);
    }
#endif

    job_ctl->jc_total_tasks = total_tasks;
    job_ctl->jc_abort = MR_FALSE;
    for (i = 0; i < total_tasks; i++) {
        job_ctl->jc_tasks[i] = TASK_NEW;
    }

    return job_ctl;
}

static void
MC_lock_job_ctl(MC_JobCtl *job_ctl)
{
#ifdef MC_USE_SYSV_SEMAPHORE
    struct sembuf sb;

    sb.sem_num = 0;
    sb.sem_op = -1;
    sb.sem_flg = 0;
    if (semop(job_ctl->jc_semid, &sb, 1) == -1) {
        perror("MC_lock_job_ctl: semop");
    }
#else
    pthread_mutex_lock(&job_ctl->jc_mutex);
#endif
}

static void
MC_unlock_job_ctl(MC_JobCtl *job_ctl)
{
#ifdef MC_USE_SYSV_SEMAPHORE
    struct sembuf sb;

    sb.sem_num = 0;
    sb.sem_op = 1;
    sb.sem_flg = 0;
    if (semop(job_ctl->jc_semid, &sb, 1) == -1) {
        perror("MC_unlock_job_ctl: semop");
    }
#else
    pthread_mutex_unlock(&job_ctl->jc_mutex);
#endif
}

#endif // MC_HAVE_JOBCTL_IPC


#line 877 "make.build.m"
MR_Word 
MC_make_yes_job_ctl(
  MC_JobCtl * JobCtl_3)
#line 877 "make.build.m"
{
#line 877 "make.build.m"
	MR_Box boxed_JobCtl_3;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(MC_JobCtl *, JobCtl_3, boxed_JobCtl_3);
	ret_value = (MR_Word)make__build__make_yes_job_ctl_1_f_0(boxed_JobCtl_3);
	return ret_value;
}

#line 883 "make.build.m"
MR_Word 
MC_make_no_job_ctl(void)
#line 883 "make.build.m"
{
#line 883 "make.build.m"
	MR_Word ret_value;
	ret_value = (MR_Word)make__build__make_no_job_ctl_0_f_0();
	return ret_value;
}


static const MR_VA_PseudoTypeInfo_Struct7 make__build____vpti_pred_7__plain_libs__globals__type_ctor_info_globals_0__pseudo_1__plain_libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0__plain_make__make_info__type_ctor_info_make_info_0__plain_make__make_info__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 7,
  {
    (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_globals_0),
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0),
    (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_make_info_0),
    (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_make_info_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__build__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__build__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__build__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct7 make__build____vpti_pred_7__plain_libs__globals__type_ctor_info_globals_0__pseudo_1__plain_libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0__pseudo_2__pseudo_2__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 7,
  {
    (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_globals_0),
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0),
    (MR_PseudoTypeInfo) ((MR_Integer) 2),
    (MR_PseudoTypeInfo) ((MR_Integer) 2),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct7 make__build____vpti_pred_7__plain_libs__globals__type_ctor_info_globals_0__pseudo_1__plain_libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0__pseudo_2__pseudo_2__pseudo_3__pseudo_3 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 7,
  {
    (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_globals_0),
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0),
    (MR_PseudoTypeInfo) ((MR_Integer) 2),
    (MR_PseudoTypeInfo) ((MR_Integer) 2),
    (MR_PseudoTypeInfo) ((MR_Integer) 3),
    (MR_PseudoTypeInfo) ((MR_Integer) 3)
  }
};

const MR_TypeCtorInfo_Struct make__build__make__build__type_ctor_info_foldl2_pred_with_status_3 = {
  (MR_Integer) 3,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (make__build____Unify____foldl2_pred_with_status_3_0_10001)),
  ((MR_Box) (make__build____Compare____foldl2_pred_with_status_3_0_10001)),
  (MR_String) "make.build",
  (MR_String) "foldl2_pred_with_status",
  { NULL },
  { (MR_PseudoTypeInfo) (&make__build____vpti_pred_7__plain_libs__globals__type_ctor_info_globals_0__pseudo_1__plain_libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0__pseudo_2__pseudo_2__pseudo_3__pseudo_3) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct make__build__make__build__type_ctor_info_job_ctl_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_FOREIGN,
  ((MR_Box) (make__build____Unify____job_ctl_0_0_10001)),
  ((MR_Box) (make__build____Compare____job_ctl_0_0_10001)),
  (MR_String) "make.build",
  (MR_String) "job_ctl",
  { NULL },
  { NULL },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 make__build__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0)
  }
};

static const MR_PseudoTypeInfo make__build__make__build__field_types_may_build_0_0[1] = {
  (MR_PseudoTypeInfo) (&make__build__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0)
};

static const MR_DuFunctorDesc make__build__make__build__du_functor_desc_may_build_0_0 = {
  (MR_String) "may_not_build",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  make__build__make__build__field_types_may_build_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 make__build__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_PseudoTypeInfo make__build__make__build__field_types_may_build_0_1[2] = {
  (MR_PseudoTypeInfo) (&make__build__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_globals_0)
};

static const MR_DuFunctorDesc make__build__make__build__du_functor_desc_may_build_0_1 = {
  (MR_String) "may_build",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  make__build__make__build__field_types_may_build_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr make__build__make__build__du_stag_ordered_may_build_0_0[1] = {
  &make__build__make__build__du_functor_desc_may_build_0_0
};

static const MR_DuFunctorDescPtr make__build__make__build__du_stag_ordered_may_build_0_1[1] = {
  &make__build__make__build__du_functor_desc_may_build_0_1
};

static const MR_DuPtagLayout make__build__make__build__du_ptag_ordered_may_build_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__build__make__build__du_stag_ordered_may_build_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__build__make__build__du_stag_ordered_may_build_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr make__build__make__build__du_name_ordered_may_build_0[2] = {
  &make__build__make__build__du_functor_desc_may_build_0_1,
  &make__build__make__build__du_functor_desc_may_build_0_0
};

static const MR_Integer make__build__make__build__functor_number_map_may_build_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct make__build__make__build__type_ctor_info_may_build_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__build____Unify____may_build_0_0_10001)),
  ((MR_Box) (make__build____Compare____may_build_0_0_10001)),
  (MR_String) "make.build",
  (MR_String) "may_build",
  { make__build__make__build__du_name_ordered_may_build_0 },
  { make__build__make__build__du_ptag_ordered_may_build_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  make__build__make__build__functor_number_map_may_build_0,

};

static const MR_EnumFunctorDesc make__build__make__build__enum_functor_desc_maybe_invoked_by_mmc_make_0_0 = {
  (MR_String) "not_invoked_by_mmc_make",
  INT32_C(0)
};

static const MR_EnumFunctorDesc make__build__make__build__enum_functor_desc_maybe_invoked_by_mmc_make_0_1 = {
  (MR_String) "invoked_by_mmc_make",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr make__build__make__build__enum_ordinal_ordered_maybe_invoked_by_mmc_make_0[2] = {
  &make__build__make__build__enum_functor_desc_maybe_invoked_by_mmc_make_0_0,
  &make__build__make__build__enum_functor_desc_maybe_invoked_by_mmc_make_0_1
};

static const MR_EnumFunctorDescPtr make__build__make__build__enum_name_ordered_maybe_invoked_by_mmc_make_0[2] = {
  &make__build__make__build__enum_functor_desc_maybe_invoked_by_mmc_make_0_1,
  &make__build__make__build__enum_functor_desc_maybe_invoked_by_mmc_make_0_0
};

static const MR_Integer make__build__make__build__functor_number_map_maybe_invoked_by_mmc_make_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct make__build__make__build__type_ctor_info_maybe_invoked_by_mmc_make_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (make__build____Unify____maybe_invoked_by_mmc_make_0_0_10001)),
  ((MR_Box) (make__build____Compare____maybe_invoked_by_mmc_make_0_0_10001)),
  (MR_String) "make.build",
  (MR_String) "maybe_invoked_by_mmc_make",
  { make__build__make__build__enum_name_ordered_maybe_invoked_by_mmc_make_0 },
  { make__build__make__build__enum_ordinal_ordered_maybe_invoked_by_mmc_make_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  make__build__make__build__functor_number_map_maybe_invoked_by_mmc_make_0,

};

const MR_TypeCtorInfo_Struct make__build__make__build__type_ctor_info_stdout_lock_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (make__build____Unify____stdout_lock_0_0_10001)),
  ((MR_Box) (make__build____Compare____stdout_lock_0_0_10001)),
  (MR_String) "make.build",
  (MR_String) "stdout_lock",
  { NULL },
  { (MR_PseudoTypeInfo) (&make__build__make__build__type_ctor_info_job_ctl_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static void MR_CALL 
make__build__IntroducedFrom__pred__foldl2_maybe_stop_at_error_parallel_processes__436__1_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  libs__process_util__send_signal_4_p_0(((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)));
}

static void MR_CALL 
make__build__IntroducedFrom__pred__foldl2_maybe_stop_at_error_parallel_processes__436__1_6_p_0(
  MR_Box JobCtl_21,
  MR_Word Pids_22,
  MR_Word HeadVar__3_108,
  MR_Word * HeadVar__4_109)
{
  MR_Word Var_114;
  MR_Integer Var_115;
  MR_Box conv0_HeadVar__6_111;

  make__build__mark_abort_3_p_0(JobCtl_21);
  Var_115 = libs__process_util__sigint_0_f_0();
  {
    Var_114 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_114, 0) = ((MR_Box) (&make__build_scalar_common_3[1]));
    MR_hl_field(0, Var_114, 1) = ((MR_Box) (make__build__IntroducedFrom__pred__foldl2_maybe_stop_at_error_parallel_processes__436__1_6_p_0_1));
    MR_hl_field(0, Var_114, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_114, 3) = ((MR_Box) (Var_115));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_114, Pids_22, ((MR_Box) ((MR_Integer) 0)), &conv0_HeadVar__6_111);
  *HeadVar__4_109 = HeadVar__3_108;
}

static void MR_CALL 
make__build__IntroducedFrom__pred__foldl2_maybe_stop_at_error_parallel_processes__429__1_12_p_0(
  MR_Word TypeInfo_for_T_97,
  MR_Word KeepGoing_11,
  MR_Word MakeTarget_13,
  MR_Word Globals_14,
  MR_Word Targets_15,
  MR_Box JobCtl_21,
  MR_Word STATE_VARIABLE_Info_33_33,
  MR_Integer HeadVar__8_98,
  MR_Word HeadVar__9_99,
  MR_Word * HeadVar__10_100)
{
  make__build__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_112_97_114_97_108_108_101_108_95_112_114_111_99_101_115_115_101_115_95_95_52_50_57_95_95_49_95_95_91_56_93_95_48_12_p_0(TypeInfo_for_T_97, KeepGoing_11, MakeTarget_13, Globals_14, Targets_15, JobCtl_21, STATE_VARIABLE_Info_33_33, HeadVar__9_99, HeadVar__10_100);
}

static void MR_CALL 
make__build__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_112_97_114_97_108_108_101_108_95_112_114_111_99_101_115_115_101_115_95_95_52_50_57_95_95_49_95_95_91_56_93_95_48_12_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Succeeded_16;

  make__build__child_worker_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 8)))), ((MR_Box) ((MR_hl_field(0, closure, (MR_Integer) 9)))), (MR_hl_field(0, closure, (MR_Integer) 10)), &conv0_Succeeded_16);
  *wrapper_arg_1 = ((MR_Box) (conv0_Succeeded_16));
}

static void MR_CALL 
make__build__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_112_97_114_97_108_108_101_108_95_112_114_111_99_101_115_115_101_115_95_95_52_50_57_95_95_49_95_95_91_56_93_95_48_12_p_0(
  MR_Word TypeInfo_for_T_97,
  MR_Word KeepGoing_11,
  MR_Word MakeTarget_13,
  MR_Word Globals_14,
  MR_Word Targets_15,
  MR_Box JobCtl_21,
  MR_Word STATE_VARIABLE_Info_33_33,
  MR_Word HeadVar__9_99,
  MR_Word * HeadVar__10_100)
{
  MR_Word MaybePid_104;
  MR_Word Var_106;

  {
    Var_106 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_106, 0) = ((MR_Box) (&make__build_scalar_common_12[0]));
    MR_hl_field(0, Var_106, 1) = ((MR_Box) (make__build__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_112_97_114_97_108_108_101_108_95_112_114_111_99_101_115_115_101_115_95_95_52_50_57_95_95_49_95_95_91_56_93_95_48_12_p_0_1));
    MR_hl_field(0, Var_106, 2) = ((MR_Box) ((MR_Integer) 8));
    MR_hl_field(0, Var_106, 3) = ((MR_Box) (TypeInfo_for_T_97));
    MR_hl_field(0, Var_106, 4) = ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0));
    MR_hl_field(0, Var_106, 5) = ((MR_Box) (Globals_14));
    MR_hl_field(0, Var_106, 6) = ((MR_Box) (KeepGoing_11));
    MR_hl_field(0, Var_106, 7) = ((MR_Box) (MakeTarget_13));
    MR_hl_field(0, Var_106, 8) = ((MR_Box) (Targets_15));
    MR_hl_field(0, Var_106, 9) = ((MR_Box) (JobCtl_21));
    MR_hl_field(0, Var_106, 10) = ((MR_Box) (STATE_VARIABLE_Info_33_33));
  }
  libs__process_util__start_in_forked_process_4_p_0(Var_106, &MaybePid_104);
  if ((MaybePid_104 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__10_100 = HeadVar__9_99;
  else
  {
    MR_Integer Pid_105 = ((MR_Integer) ((MR_hl_field(1, MaybePid_104, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__10_100 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Pid_105));
      MR_hl_field(1, base, 1) = ((MR_Box) (HeadVar__9_99));
    }
  }
}

void MR_CALL 
make__build____Compare____stdout_lock_0_0(
  MR_Word * HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3)
{
  MR_Box Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Box Cast_HeadVar2_5 = HeadVar__3_3;
  MR_Word Cast_HeadVar1_7 = (MR_Word) (Cast_HeadVar1_4);
  MR_Word Cast_HeadVar2_8 = (MR_Word) (Cast_HeadVar2_5);

  mercury__builtin____Compare____c_pointer_0_0(HeadVar__1_1, Cast_HeadVar1_7, Cast_HeadVar2_8);
}

MR_bool MR_CALL 
make__build____Unify____stdout_lock_0_0(
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Box Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Box Cast_HeadVar2_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar1_5 = (MR_Word) (Cast_HeadVar1_3);
  MR_Word Cast_HeadVar2_6 = (MR_Word) (Cast_HeadVar2_4);

  succeeded = mercury__builtin____Unify____c_pointer_0_0(Cast_HeadVar1_5, Cast_HeadVar2_6);
  return succeeded;
}

void MR_CALL 
make__build____Compare____maybe_invoked_by_mmc_make_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
make__build____Unify____maybe_invoked_by_mmc_make_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
make__build____Compare____may_build_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_17 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_18 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_17 == CastY_18);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
  {
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Word ArgY1_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgY2_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_14;

      mercury__builtin__compare_3_p_0((MR_Word) (&make__build_scalar_common_1[1]), &SubResult1_14, ((MR_Box) (Var_23)), ((MR_Box) (ArgY1_13)));
      succeeded = (SubResult1_14 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_14;
      else
        libs__globals____Compare____globals_0_0(HeadVar__1_1, Var_22, ArgY2_16);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  }
  else
  {
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));

      mercury__builtin__compare_3_p_0((MR_Word) (&make__build_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Var_24)), ((MR_Box) (ArgY1_5)));
    }
  }
}

MR_bool MR_CALL 
make__build____Unify____may_build_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Word TypeInfo_11_11;
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_8;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      TypeInfo_11_11 = (MR_Word) (&make__build_scalar_common_1[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
      if (succeeded)
        succeeded = libs__globals____Unify____globals_0_0(ArgX2_7, ArgY2_8);
    }
  }
  else
  {
    MR_Word TypeInfo_13_13;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
      TypeInfo_13_13 = (MR_Word) (&make__build_scalar_common_1[2]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    }
  }
  return succeeded;
}

void MR_CALL 
make__build____Compare____job_ctl_0_0(
  MR_Word * HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = (MR_Word) (HeadVar__2_2);
  MR_Word Cast_HeadVar2_5 = (MR_Word) (HeadVar__3_3);

  mercury__builtin____Compare____c_pointer_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
make__build____Unify____job_ctl_0_0(
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = (MR_Word) (HeadVar__1_1);
  MR_Word Cast_HeadVar2_4 = (MR_Word) (HeadVar__2_2);

  succeeded = mercury__builtin____Unify____c_pointer_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
make__build____Compare____foldl2_pred_with_status_3_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word TypeInfo_for_Info_7,
  MR_Word TypeInfo_for_IO_8,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
}

MR_bool MR_CALL 
make__build____Unify____foldl2_pred_with_status_3_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word TypeInfo_for_Info_6,
  MR_Word TypeInfo_for_IO_7,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
  return succeeded;
}

static MR_Word MR_CALL 
make__build__make_no_job_ctl_0_f_0(void)
{
  return (MR_Word) ((MR_Unsigned) 0U);
}

static MR_Word MR_CALL 
make__build__make_yes_job_ctl_1_f_0(
  MR_Box JobCtl_3)
{
  MR_Word HeadVar__2_2;

  {
    HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (JobCtl_3));
  }
  return HeadVar__2_2;
}

static void MR_CALL 
make__build__reap_worker_process_5_p_0(
  MR_Integer Pid_6,
  MR_Word STATE_VARIABLE_Succeeded_0_10,
  MR_Word * STATE_VARIABLE_Succeeded_11)
{
  MR_bool succeeded;
  MR_Word Status_9;
  MR_Word Var_15;
  MR_Integer Var_16;

  libs__process_util__wait_pid_4_p_0(Pid_6, &Status_9);
  succeeded = (STATE_VARIABLE_Succeeded_0_10 == (MR_Integer) 1);
  if (succeeded)
  {
    succeeded = ((MR_tag((MR_Word) Status_9)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_15 = ((MR_Word) ((MR_hl_field(0, Status_9, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) Var_15)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_16 = ((MR_Integer) ((MR_hl_field(0, Var_15, (MR_Integer) 0))));
        succeeded = (Var_16 == (MR_Integer) 0);
      }
    }
  }
  if (succeeded)
    *STATE_VARIABLE_Succeeded_11 = STATE_VARIABLE_Succeeded_0_10;
  else
    *STATE_VARIABLE_Succeeded_11 = (MR_Integer) 0;
}

static void MR_CALL 
make__build__worker_loop_signal_cleanup_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  libs__process_util__send_signal_4_p_0(((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)));
}

static void MR_CALL 
make__build__worker_loop_signal_cleanup_6_p_0(
  MR_Word TypeInfo_for_Info_19,
  MR_Box JobCtl_7,
  MR_Word Pids_8,
  MR_Box STATE_VARIABLE_Info_0_11,
  MR_Box * STATE_VARIABLE_Info_12)
{
  MR_Word Var_16;
  MR_Integer Var_18;
  MR_Box conv0_STATE_VARIABLE_IO_14;

  make__build__mark_abort_3_p_0(JobCtl_7);
  Var_18 = libs__process_util__sigint_0_f_0();
  {
    Var_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_16, 0) = ((MR_Box) (&make__build_scalar_common_3[1]));
    MR_hl_field(0, Var_16, 1) = ((MR_Box) (make__build__worker_loop_signal_cleanup_6_p_0_1));
    MR_hl_field(0, Var_16, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_16, 3) = ((MR_Box) (Var_18));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_16, Pids_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_14);
  *STATE_VARIABLE_Info_12 = STATE_VARIABLE_Info_0_11;
}

static void MR_CALL 
make__build__mark_abort_3_p_0(
  MR_Box JobCtl_1)
{
{
#define MR_PROC_LABEL make__build__mark_abort_3_p_0

	MC_JobCtl * JobCtl;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MC_JobCtl *, JobCtl_1 , JobCtl);
		{

#ifdef MC_HAVE_JOBCTL_IPC
    MC_lock_job_ctl(JobCtl);
    JobCtl->jc_abort = MR_TRUE;
    MC_unlock_job_ctl(JobCtl);
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
make__build__child_worker_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  make__build__worker_loop_signal_cleanup_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Box) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), wrapper_arg_1, wrapper_arg_2);
}

static void MR_CALL 
make__build__child_worker_9_p_0(
  MR_Word TypeInfo_for_T_32,
  MR_Word TypeInfo_for_Info_33,
  MR_Word Globals_10,
  MR_Word KeepGoing_11,
  MR_Word MakeTarget_12,
  MR_Word Targets_13,
  MR_Box JobCtl_14,
  MR_Box STATE_VARIABLE_Info_0_23,
  MR_Word * Succeeded_16)
{
  MR_Word VeryVerbose_18;
  MR_Box Cookie_19;
  MR_Word Succeeded0_20;
  MR_Word Cleanup_21;
  MR_Box STATE_VARIABLE_Info_29_29;
  MR_Box _Info_22;

  libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 73, &VeryVerbose_18);
  libs__process_util__setup_checking_for_interrupt_3_p_0(&Cookie_19);
  make__build__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_111_114_107_101_114_95_108_111_111_112_95_95_91_50_93_95_48_11_p_0(TypeInfo_for_T_32, Globals_10, KeepGoing_11, MakeTarget_12, Targets_13, JobCtl_14, (MR_Integer) 1, &Succeeded0_20, STATE_VARIABLE_Info_0_23, &STATE_VARIABLE_Info_29_29);
  {
    Cleanup_21 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Cleanup_21, 0) = ((MR_Box) (&make__build_scalar_common_10[0]));
    MR_hl_field(0, Cleanup_21, 1) = ((MR_Box) (make__build__child_worker_9_p_0_1));
    MR_hl_field(0, Cleanup_21, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Cleanup_21, 3) = ((MR_Box) (TypeInfo_for_Info_33));
    MR_hl_field(0, Cleanup_21, 4) = ((MR_Box) (JobCtl_14));
    MR_hl_field(0, Cleanup_21, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  libs__process_util__teardown_checking_for_interrupt_9_p_0(TypeInfo_for_Info_33, VeryVerbose_18, Cookie_19, Cleanup_21, Succeeded0_20, Succeeded_16, STATE_VARIABLE_Info_29_29, &_Info_22);
}

static void MR_CALL 
make__build__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_111_114_107_101_114_95_108_111_111_112_95_95_91_50_93_95_48_11_p_0(
  MR_Word TypeInfo_for_T_37,
  MR_Word Globals_12,
  MR_Word KeepGoing_13,
  MR_Word MakeTarget_14,
  MR_Word Targets_15,
  MR_Box JobCtl_16,
  MR_Word STATE_VARIABLE_Succeeded_0_24,
  MR_Word * STATE_VARIABLE_Succeeded_25,
  MR_Box STATE_VARIABLE_Info_0_26,
  MR_Box * STATE_VARIABLE_Info_27)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer TaskNumber_20;

    // setup for model_det tailcalls optimized into a loop
    ;
    make__build__accept_task_4_p_0(JobCtl_16, &TaskNumber_20);
    succeeded = (TaskNumber_20 >= (MR_Integer) 0);
    if (succeeded)
    {
      MR_Box Target_21;
      MR_Word TargetSucceeded_22;
      MR_Box STATE_VARIABLE_Info_32_32;
      MR_Word STATE_VARIABLE_Succeeded_36_36;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Box conv2_TargetSucceeded_22;
      MR_Box conv1_STATE_VARIABLE_IO_33_33;
      MR_Word next_value_of_STATE_VARIABLE_Succeeded_0_24;
      MR_Box next_value_of_STATE_VARIABLE_Info_0_26;

      Target_21 = mercury__list__det_index0_2_f_0(TypeInfo_for_T_37, Targets_15, TaskNumber_20);
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, MakeTarget_14, (MR_Integer) 1))));
      func_0(((MR_Box) (MakeTarget_14)), ((MR_Box) (Globals_12)), Target_21, &conv2_TargetSucceeded_22, STATE_VARIABLE_Info_0_26, &STATE_VARIABLE_Info_32_32, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_33_33);
      TargetSucceeded_22 = ((MR_Word) (conv2_TargetSucceeded_22));
      switch (TargetSucceeded_22) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word KeepGoingBool_23;

            succeeded = (KeepGoing_13 == (MR_Integer) 1);
            if (succeeded)
              KeepGoingBool_23 = (MR_Integer) 1;
            else
              KeepGoingBool_23 = (MR_Integer) 0;
            make__build__mark_task_error_5_p_0(JobCtl_16, TaskNumber_20, KeepGoingBool_23);
            STATE_VARIABLE_Succeeded_36_36 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 1:
          {
            make__build__mark_task_done_4_p_0(JobCtl_16, TaskNumber_20);
            STATE_VARIABLE_Succeeded_36_36 = STATE_VARIABLE_Succeeded_0_24;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_STATE_VARIABLE_Succeeded_0_24 = STATE_VARIABLE_Succeeded_36_36;
      next_value_of_STATE_VARIABLE_Info_0_26 = STATE_VARIABLE_Info_32_32;
      STATE_VARIABLE_Succeeded_0_24 = next_value_of_STATE_VARIABLE_Succeeded_0_24;
      STATE_VARIABLE_Info_0_26 = next_value_of_STATE_VARIABLE_Info_0_26;
      continue;
    }
    else
    {
      *STATE_VARIABLE_Info_27 = STATE_VARIABLE_Info_0_26;
      *STATE_VARIABLE_Succeeded_25 = STATE_VARIABLE_Succeeded_0_24;
    }
    break;
  }
}

static void MR_CALL 
make__build__write_line_nl_4_p_0(
  MR_Word Stream_5,
  MR_String Line_6)
{
  mercury__io__write_string_4_p_0(Stream_5, Line_6);
  mercury__io__nl_3_p_0(Stream_5);
}

void MR_CALL 
make__build__with_locked_stdout_4_p_0(
  MR_Word Info_5,
  MR_Word Pred_6)
{
  MR_Word MaybeLock_8 = ((MR_Word) ((MR_hl_field(0, Info_5, (MR_Integer) 20))));

  if ((MaybeLock_8 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_6, (MR_Integer) 1))));
    MR_Box conv1_STATE_VARIABLE_IO_11;

    func_0(((MR_Box) (Pred_6)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_11);
  }
  else
  {
    MR_Box Lock_9 = ((MR_Box) ((MR_hl_field(1, MaybeLock_8, (MR_Integer) 0))));
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box *);
    MR_Box conv3_STATE_VARIABLE_IO_13_13;

    make__build__lock_stdout_3_p_0(Lock_9);
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_6, (MR_Integer) 1))));
    func_2(((MR_Box) (Pred_6)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_13_13);
    make__build__unlock_stdout_3_p_0(Lock_9);
  }
}

static void MR_CALL 
make__build__foldl2_make_module_targets_maybe_parallel_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__4_4;
  MR_Word conv0_HeadVar__6_6;

  make__module_target__make_module_target_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_HeadVar__4_4, ((MR_Word) (wrapper_arg_4)), &conv0_HeadVar__6_6);
  *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__4_4));
  *wrapper_arg_5 = ((MR_Box) (conv0_HeadVar__6_6));
}

void MR_CALL 
make__build__foldl2_make_module_targets_maybe_parallel_9_p_0(
  MR_Word KeepGoing_10,
  MR_Word ExtraOpts_11,
  MR_Word Globals_12,
  MR_Word Targets_13,
  MR_Word * Succeeded_14,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22)
{
  MR_bool succeeded;
  MR_Integer Jobs_17;

  libs__globals__lookup_int_option_3_p_0(Globals_12, (MR_Integer) 665, &Jobs_17);
  succeeded = (Jobs_17 > (MR_Integer) 1);
  if (succeeded)
  {
    succeeded = libs__process_util__can_fork_0_p_0();
    if (succeeded)
      succeeded = make__build__have_job_ctl_ipc_0_p_0();
  }
  if (succeeded)
  {
    MR_Word MakeTarget_18;
    MR_Word Succeeded0_19;
    MR_Word STATE_VARIABLE_Info_27_27;

    {
      MakeTarget_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, MakeTarget_18, 0) = ((MR_Box) (&make__build_scalar_common_9[0]));
      MR_hl_field(0, MakeTarget_18, 1) = ((MR_Box) (make__build__foldl2_make_module_targets_maybe_parallel_9_p_0_1));
      MR_hl_field(0, MakeTarget_18, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, MakeTarget_18, 3) = ((MR_Box) (ExtraOpts_11));
    }
    make__build__foldl2_maybe_stop_at_error_parallel_processes__ho1_10_p_0(ExtraOpts_11, KeepGoing_10, Jobs_17, MakeTarget_18, Globals_12, Targets_13, &Succeeded0_19, STATE_VARIABLE_Info_0_21, &STATE_VARIABLE_Info_27_27);
    switch (Succeeded0_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *Succeeded_14 = (MR_Integer) 0;
          *STATE_VARIABLE_Info_22 = STATE_VARIABLE_Info_27_27;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word NoRebuildGlobals_20;

          libs__globals__set_option_4_p_0((MR_Integer) 663, (MR_Word) (MR_mkword(1, &make__build_scalar_common_2[1])), Globals_12, &NoRebuildGlobals_20);
          make__build__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_108_111_111_112_95_95_104_111_52_95_95_91_51_93_95_48_10_p_0(ExtraOpts_11, KeepGoing_10, NoRebuildGlobals_20, Targets_13, (MR_Integer) 1, Succeeded_14, STATE_VARIABLE_Info_27_27, STATE_VARIABLE_Info_22);
        }
        break;
    }
  }
  else
    make__build__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_108_111_111_112_95_95_104_111_52_95_95_91_51_93_95_48_10_p_0(ExtraOpts_11, KeepGoing_10, Globals_12, Targets_13, (MR_Integer) 1, Succeeded_14, STATE_VARIABLE_Info_0_21, STATE_VARIABLE_Info_22);
}

static void MR_CALL 
make__build__foldl2_maybe_stop_at_error_parallel_processes__ho1_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_STATE_VARIABLE_Succeeded_11;

  make__build__reap_worker_process_5_p_0(((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_Succeeded_11);
  *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_Succeeded_11));
}

static void MR_CALL 
make__build__foldl2_maybe_stop_at_error_parallel_processes__ho1_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_HeadVar__4_109;

  make__build__IntroducedFrom__pred__foldl2_maybe_stop_at_error_parallel_processes__436__1_6_p_0(((MR_Box) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv3_HeadVar__4_109);
  *wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__4_109));
}

static void MR_CALL 
make__build__foldl2_maybe_stop_at_error_parallel_processes__ho1_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__10_100;

  make__build__IntroducedFrom__pred__foldl2_maybe_stop_at_error_parallel_processes__429__1_12_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Box) ((MR_hl_field(0, closure, (MR_Integer) 8)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 9)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__10_100);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__10_100));
}

static void MR_CALL 
make__build__foldl2_maybe_stop_at_error_parallel_processes__ho1_10_p_0(
  MR_Word Var_119,
  MR_Word KeepGoing_11,
  MR_Integer Jobs_12,
  MR_Word MakeTarget_13,
  MR_Word Globals_14,
  MR_Word Targets_15,
  MR_Word * Succeeded_16,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29)
{
  MR_Integer TotalTasks_19;
  MR_Word MaybeJobCtl_20;

  TotalTasks_19 = mercury__list__length_1_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), Targets_15);
  make__build__create_job_ctl_4_p_0(TotalTasks_19, &MaybeJobCtl_20);
  if ((MaybeJobCtl_20 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *Succeeded_16 = (MR_Integer) 0;
    *STATE_VARIABLE_Info_29 = STATE_VARIABLE_Info_0_28;
  }
  else
  {
    MR_Box JobCtl_21 = ((MR_Box) ((MR_hl_field(1, MaybeJobCtl_20, (MR_Integer) 0))));
    MR_Word Pids_22;
    MR_Word VeryVerbose_23;
    MR_Box Cookie_24;
    MR_Word Succeeded0_25;
    MR_Word Cleanup_26;
    MR_Word Succeeded1_27;
    MR_Word STATE_VARIABLE_Info_33_33;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word STATE_VARIABLE_Info_43_43;
    MR_Word STATE_VARIABLE_Info_45_45;
    MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_28, (MR_Integer) 0))));
    MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_28, (MR_Integer) 1))));
    MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_28, (MR_Integer) 2))));
    MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_28, (MR_Integer) 3))));
    MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_28, (MR_Integer) 4))));
    MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_28, (MR_Integer) 5))));
    MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_28, (MR_Integer) 6))));
    MR_Word Var_58 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_28, (MR_Integer) 7))));
    MR_Word Var_59 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_28, (MR_Integer) 8))));
    MR_Word Var_60 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_28, (MR_Integer) 9))));
    MR_Word Var_61 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_28, (MR_Integer) 10))));
    MR_Word Var_62 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_28, (MR_Integer) 11))));
    MR_Word Var_63 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_28, (MR_Integer) 12))));
    MR_Word Var_64 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_28, (MR_Integer) 13))));
    MR_Word Var_65 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_28, (MR_Integer) 14))));
    MR_Word Var_68 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_28, (MR_Integer) 16))));
    MR_Word Var_69 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_28, (MR_Integer) 17))));
    MR_Word Var_70 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_28, (MR_Integer) 18))));
    MR_Integer Var_71 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_0_28, (MR_Integer) 19))));
    MR_Word Var_73 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_28, (MR_Integer) 21))));
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_28, (MR_Integer) 15)));
    MR_Box conv2_Pids_22;
    MR_Box conv1_STATE_VARIABLE_IO_38_38;
    MR_Box conv4_STATE_VARIABLE_Info_45_45;
    MR_Box conv7_Succeeded_16;
    MR_Box conv6_STATE_VARIABLE_IO_48_48;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word Var_78;
    MR_Word Var_79;
    MR_Word Var_80;
    MR_Word Var_81;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Word Var_85;
    MR_Word Var_86;
    MR_Word Var_87;
    MR_Word Var_88;
    MR_Word Var_91;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Integer Var_94;
    MR_Word Var_96;
    MR_Unsigned packed_word_1;

    {
      STATE_VARIABLE_Info_33_33 = (MR_Word) MR_new_object(MR_Word, (22 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_Info_33_33, 0) = ((MR_Box) (Var_51));
      MR_hl_field(0, STATE_VARIABLE_Info_33_33, 1) = ((MR_Box) (Var_52));
      MR_hl_field(0, STATE_VARIABLE_Info_33_33, 2) = ((MR_Box) (Var_53));
      MR_hl_field(0, STATE_VARIABLE_Info_33_33, 3) = ((MR_Box) (Var_54));
      MR_hl_field(0, STATE_VARIABLE_Info_33_33, 4) = ((MR_Box) (Var_55));
      MR_hl_field(0, STATE_VARIABLE_Info_33_33, 5) = ((MR_Box) (Var_56));
      MR_hl_field(0, STATE_VARIABLE_Info_33_33, 6) = ((MR_Box) (Var_57));
      MR_hl_field(0, STATE_VARIABLE_Info_33_33, 7) = ((MR_Box) (Var_58));
      MR_hl_field(0, STATE_VARIABLE_Info_33_33, 8) = ((MR_Box) (Var_59));
      MR_hl_field(0, STATE_VARIABLE_Info_33_33, 9) = ((MR_Box) (Var_60));
      MR_hl_field(0, STATE_VARIABLE_Info_33_33, 10) = ((MR_Box) (Var_61));
      MR_hl_field(0, STATE_VARIABLE_Info_33_33, 11) = ((MR_Box) (Var_62));
      MR_hl_field(0, STATE_VARIABLE_Info_33_33, 12) = ((MR_Box) (Var_63));
      MR_hl_field(0, STATE_VARIABLE_Info_33_33, 13) = ((MR_Box) (Var_64));
      MR_hl_field(0, STATE_VARIABLE_Info_33_33, 14) = ((MR_Box) (Var_65));
      MR_hl_field(0, STATE_VARIABLE_Info_33_33, 15) = (MR_Box) (packed_word_0);
      MR_hl_field(0, STATE_VARIABLE_Info_33_33, 16) = ((MR_Box) (Var_68));
      MR_hl_field(0, STATE_VARIABLE_Info_33_33, 17) = ((MR_Box) (Var_69));
      MR_hl_field(0, STATE_VARIABLE_Info_33_33, 18) = ((MR_Box) (Var_70));
      MR_hl_field(0, STATE_VARIABLE_Info_33_33, 19) = ((MR_Box) (Var_71));
      MR_hl_field(0, STATE_VARIABLE_Info_33_33, 20) = ((MR_Box) (MaybeJobCtl_20));
      MR_hl_field(0, STATE_VARIABLE_Info_33_33, 21) = ((MR_Box) (Var_73));
    }
    {
      Var_35 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_35, 0) = ((MR_Box) (&make__build_scalar_common_5[0]));
      MR_hl_field(0, Var_35, 1) = ((MR_Box) (make__build__foldl2_maybe_stop_at_error_parallel_processes__ho1_10_p_0_1));
      MR_hl_field(0, Var_35, 2) = ((MR_Box) ((MR_Integer) 7));
      MR_hl_field(0, Var_35, 3) = ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0));
      MR_hl_field(0, Var_35, 4) = ((MR_Box) (KeepGoing_11));
      MR_hl_field(0, Var_35, 5) = ((MR_Box) (MakeTarget_13));
      MR_hl_field(0, Var_35, 6) = ((MR_Box) (Globals_14));
      MR_hl_field(0, Var_35, 7) = ((MR_Box) (Targets_15));
      MR_hl_field(0, Var_35, 8) = ((MR_Box) (JobCtl_21));
      MR_hl_field(0, Var_35, 9) = ((MR_Box) (STATE_VARIABLE_Info_33_33));
    }
    Var_36 = mercury__list__f_46_46_2_f_0((MR_Integer) 2, Jobs_12);
    mercury__list__foldl2_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&make__build_scalar_common_1[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_35, Var_36, ((MR_Box) ((MR_Unsigned) 0U)), &conv2_Pids_22, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_38_38);
    Pids_22 = ((MR_Word) (conv2_Pids_22));
    libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 73, &VeryVerbose_23);
    libs__process_util__setup_checking_for_interrupt_3_p_0(&Cookie_24);
    make__build__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_111_114_107_101_114_95_108_111_111_112_95_95_104_111_56_95_95_91_52_93_95_48_11_p_0(Var_119, Globals_14, KeepGoing_11, Targets_15, JobCtl_21, (MR_Integer) 1, &Succeeded0_25, STATE_VARIABLE_Info_33_33, &STATE_VARIABLE_Info_43_43);
    {
      Cleanup_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Cleanup_26, 0) = ((MR_Box) (&make__build_scalar_common_6[0]));
      MR_hl_field(0, Cleanup_26, 1) = ((MR_Box) (make__build__foldl2_maybe_stop_at_error_parallel_processes__ho1_10_p_0_2));
      MR_hl_field(0, Cleanup_26, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Cleanup_26, 3) = ((MR_Box) (JobCtl_21));
      MR_hl_field(0, Cleanup_26, 4) = ((MR_Box) (Pids_22));
    }
    libs__process_util__teardown_checking_for_interrupt_9_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), VeryVerbose_23, Cookie_24, Cleanup_26, Succeeded0_25, &Succeeded1_27, ((MR_Box) (STATE_VARIABLE_Info_43_43)), &conv4_STATE_VARIABLE_Info_45_45);
    STATE_VARIABLE_Info_45_45 = ((MR_Word) (conv4_STATE_VARIABLE_Info_45_45));
    mercury__list__foldl2_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&make__build_scalar_common_8[0]), Pids_22, ((MR_Box) (Succeeded1_27)), &conv7_Succeeded_16, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_48_48);
    *Succeeded_16 = ((MR_Word) (conv7_Succeeded_16));
    Var_74 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_45_45, (MR_Integer) 0))));
    Var_75 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_45_45, (MR_Integer) 1))));
    Var_76 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_45_45, (MR_Integer) 2))));
    Var_77 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_45_45, (MR_Integer) 3))));
    Var_78 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_45_45, (MR_Integer) 4))));
    Var_79 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_45_45, (MR_Integer) 5))));
    Var_80 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_45_45, (MR_Integer) 6))));
    Var_81 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_45_45, (MR_Integer) 7))));
    Var_82 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_45_45, (MR_Integer) 8))));
    Var_83 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_45_45, (MR_Integer) 9))));
    Var_84 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_45_45, (MR_Integer) 10))));
    Var_85 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_45_45, (MR_Integer) 11))));
    Var_86 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_45_45, (MR_Integer) 12))));
    Var_87 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_45_45, (MR_Integer) 13))));
    Var_88 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_45_45, (MR_Integer) 14))));
    packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_45_45, (MR_Integer) 15)));
    Var_91 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_45_45, (MR_Integer) 16))));
    Var_92 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_45_45, (MR_Integer) 17))));
    Var_93 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_45_45, (MR_Integer) 18))));
    Var_94 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_45_45, (MR_Integer) 19))));
    Var_96 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_45_45, (MR_Integer) 21))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (22 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_29 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_74));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_75));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_76));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_77));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_78));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_79));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_80));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_81));
      MR_hl_field(0, base, 8) = ((MR_Box) (Var_82));
      MR_hl_field(0, base, 9) = ((MR_Box) (Var_83));
      MR_hl_field(0, base, 10) = ((MR_Box) (Var_84));
      MR_hl_field(0, base, 11) = ((MR_Box) (Var_85));
      MR_hl_field(0, base, 12) = ((MR_Box) (Var_86));
      MR_hl_field(0, base, 13) = ((MR_Box) (Var_87));
      MR_hl_field(0, base, 14) = ((MR_Box) (Var_88));
      MR_hl_field(0, base, 15) = (MR_Box) (packed_word_1);
      MR_hl_field(0, base, 16) = ((MR_Box) (Var_91));
      MR_hl_field(0, base, 17) = ((MR_Box) (Var_92));
      MR_hl_field(0, base, 18) = ((MR_Box) (Var_93));
      MR_hl_field(0, base, 19) = ((MR_Box) (Var_94));
      MR_hl_field(0, base, 20) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, base, 21) = ((MR_Box) (Var_96));
    }
    make__build__destroy_job_ctl_3_p_0(JobCtl_21);
  }
}

static void MR_CALL 
make__build__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_111_114_107_101_114_95_108_111_111_112_95_95_104_111_56_95_95_91_52_93_95_48_11_p_0(
  MR_Word Var_39,
  MR_Word Globals_12,
  MR_Word KeepGoing_13,
  MR_Word Targets_15,
  MR_Box JobCtl_16,
  MR_Word STATE_VARIABLE_Succeeded_0_24,
  MR_Word * STATE_VARIABLE_Succeeded_25,
  MR_Word STATE_VARIABLE_Info_0_26,
  MR_Word * STATE_VARIABLE_Info_27)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer TaskNumber_20;

    // setup for model_det tailcalls optimized into a loop
    ;
    make__build__accept_task_4_p_0(JobCtl_16, &TaskNumber_20);
    succeeded = (TaskNumber_20 >= (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word Target_21;
      MR_Word TargetSucceeded_22;
      MR_Word STATE_VARIABLE_Info_32_32;
      MR_Word STATE_VARIABLE_Succeeded_36_36;
      MR_Box conv0_Target_21;
      MR_Word next_value_of_STATE_VARIABLE_Succeeded_0_24;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_26;

      conv0_Target_21 = mercury__list__det_index0_2_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), Targets_15, TaskNumber_20);
      Target_21 = ((MR_Word) (conv0_Target_21));
      make__module_target__make_module_target_8_p_0(Var_39, Globals_12, Target_21, &TargetSucceeded_22, STATE_VARIABLE_Info_0_26, &STATE_VARIABLE_Info_32_32);
      switch (TargetSucceeded_22) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word KeepGoingBool_23;

            succeeded = (KeepGoing_13 == (MR_Integer) 1);
            if (succeeded)
              KeepGoingBool_23 = (MR_Integer) 1;
            else
              KeepGoingBool_23 = (MR_Integer) 0;
            make__build__mark_task_error_5_p_0(JobCtl_16, TaskNumber_20, KeepGoingBool_23);
            STATE_VARIABLE_Succeeded_36_36 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 1:
          {
            make__build__mark_task_done_4_p_0(JobCtl_16, TaskNumber_20);
            STATE_VARIABLE_Succeeded_36_36 = STATE_VARIABLE_Succeeded_0_24;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_STATE_VARIABLE_Succeeded_0_24 = STATE_VARIABLE_Succeeded_36_36;
      next_value_of_STATE_VARIABLE_Info_0_26 = STATE_VARIABLE_Info_32_32;
      STATE_VARIABLE_Succeeded_0_24 = next_value_of_STATE_VARIABLE_Succeeded_0_24;
      STATE_VARIABLE_Info_0_26 = next_value_of_STATE_VARIABLE_Info_0_26;
      continue;
    }
    else
    {
      *STATE_VARIABLE_Info_27 = STATE_VARIABLE_Info_0_26;
      *STATE_VARIABLE_Succeeded_25 = STATE_VARIABLE_Succeeded_0_24;
    }
    break;
  }
}

static void MR_CALL 
make__build__mark_task_error_5_p_0(
  MR_Box JobCtl_1,
  MR_Integer TaskNumber_2,
  MR_Word KeepGoing_3)
{
{
#define MR_PROC_LABEL make__build__mark_task_error_5_p_0

	MC_JobCtl * JobCtl;
	MR_Integer TaskNumber;
	MR_Word KeepGoing;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MC_JobCtl *, JobCtl_1 , JobCtl);
	TaskNumber = TaskNumber_2 ;
	KeepGoing = KeepGoing_3 ;
		{

#ifdef MC_HAVE_JOBCTL_IPC
    MC_lock_job_ctl(JobCtl);

    JobCtl->jc_tasks[TaskNumber] = TASK_ERROR;
    if (!KeepGoing) {
        JobCtl->jc_abort = MR_TRUE;
    }

    MC_unlock_job_ctl(JobCtl);
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
make__build__mark_task_done_4_p_0(
  MR_Box JobCtl_1,
  MR_Integer TaskNumber_2)
{
{
#define MR_PROC_LABEL make__build__mark_task_done_4_p_0

	MC_JobCtl * JobCtl;
	MR_Integer TaskNumber;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MC_JobCtl *, JobCtl_1 , JobCtl);
	TaskNumber = TaskNumber_2 ;
		{

#ifdef MC_HAVE_JOBCTL_IPC
    MC_lock_job_ctl(JobCtl);
    JobCtl->jc_tasks[TaskNumber] = TASK_DONE;
    MC_unlock_job_ctl(JobCtl);
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
make__build__accept_task_4_p_0(
  MR_Box JobCtl_1,
  MR_Integer * TaskNumber_2)
{
{
#define MR_PROC_LABEL make__build__accept_task_4_p_0

	MC_JobCtl * JobCtl;
	MR_Integer TaskNumber;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MC_JobCtl *, JobCtl_1 , JobCtl);
		{

    TaskNumber = -1;

#ifdef MC_HAVE_JOBCTL_IPC
    MC_lock_job_ctl(JobCtl);

    if (!JobCtl->jc_abort) {
        MR_Integer  i;

        for (i = 0; i < JobCtl->jc_total_tasks; i++) {
            if (JobCtl->jc_tasks[i] == TASK_NEW) {
                JobCtl->jc_tasks[i] = TASK_ACCEPTED;
                TaskNumber = i;
                break;
            }
        }
    }

    MC_unlock_job_ctl(JobCtl);
#endif


		;}
#undef MR_PROC_LABEL
	*TaskNumber_2  = TaskNumber;
}
}

static void MR_CALL 
make__build__destroy_job_ctl_3_p_0(
  MR_Box JobCtl_1)
{
{
#define MR_PROC_LABEL make__build__destroy_job_ctl_3_p_0

	MC_JobCtl * JobCtl;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MC_JobCtl *, JobCtl_1 , JobCtl);
		{

#ifdef MC_HAVE_JOBCTL_IPC
  #ifdef MC_USE_SYSV_SEMAPHORE
    semctl(JobCtl->jc_semid, 0, IPC_RMID);
  #else
    pthread_mutex_destroy(&JobCtl->jc_mutex);
  #endif

    munmap(JobCtl, MC_JOB_CTL_SIZE(JobCtl->jc_total_tasks));
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
make__build__create_job_ctl_4_p_0(
  MR_Integer TotalJobs_1,
  MR_Word * MaybeJobCtl_2)
{
{
#define MR_PROC_LABEL make__build__create_job_ctl_4_p_0

	MR_Integer TotalJobs;
	MR_Word MaybeJobCtl;

	TotalJobs = TotalJobs_1 ;
		{

#ifdef MC_HAVE_JOBCTL_IPC
    MC_JobCtl *job_ctl;

    job_ctl = MC_create_job_ctl(TotalJobs);
    if (job_ctl != NULL) {
        MaybeJobCtl = MC_make_yes_job_ctl(job_ctl);
    } else {
        MaybeJobCtl = MC_make_no_job_ctl();
    }
#else
    MaybeJobCtl = MC_make_no_job_ctl();
#endif


		;}
#undef MR_PROC_LABEL
	*MaybeJobCtl_2  = MaybeJobCtl;
}
}

static MR_bool MR_CALL 
make__build__have_job_ctl_ipc_0_p_0(void)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL make__build__have_job_ctl_ipc_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#ifdef MC_HAVE_JOBCTL_IPC
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  return succeeded;
}

void MR_CALL 
make__build__foldl2_make_top_targets_8_p_0(
  MR_Word KeepGoing_9,
  MR_Word Globals_10,
  MR_Word Targets_11,
  MR_Word * Succeeded_12,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16)
{
  make__build__foldl2_maybe_stop_at_error_loop__ho2_10_p_0(KeepGoing_9, Globals_10, Targets_11, (MR_Integer) 1, Succeeded_12, STATE_VARIABLE_Info_0_15, STATE_VARIABLE_Info_16);
}

static void MR_CALL 
make__build__foldl2_maybe_stop_at_error_loop__ho2_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Succeeded_0_5,
  MR_Word * STATE_VARIABLE_Succeeded_6,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Info_8 = STATE_VARIABLE_Info_0_7;
      *STATE_VARIABLE_Succeeded_6 = STATE_VARIABLE_Succeeded_0_5;
    }
    else
    {
      MR_Word T_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Ts_27 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_Word NewSucceeded_31;
      MR_Word STATE_VARIABLE_Info_38_38;

      make__top_level__make_top_target_7_p_0(HeadVar__3_3, T_26, &NewSucceeded_31, STATE_VARIABLE_Info_0_7, &STATE_VARIABLE_Info_38_38);
      succeeded = (NewSucceeded_31 == (MR_Integer) 1);
      if (!(succeeded))
        succeeded = (HeadVar__1_1 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_Succeeded_40_40;
        MR_Word next_value_of_HeadVar__4_4;
        MR_Word next_value_of_STATE_VARIABLE_Succeeded_0_5;
        MR_Word next_value_of_STATE_VARIABLE_Info_0_7;

        STATE_VARIABLE_Succeeded_40_40 = libs__maybe_succeeded__and_2_f_0(STATE_VARIABLE_Succeeded_0_5, NewSucceeded_31);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__4_4 = Ts_27;
        next_value_of_STATE_VARIABLE_Succeeded_0_5 = STATE_VARIABLE_Succeeded_40_40;
        next_value_of_STATE_VARIABLE_Info_0_7 = STATE_VARIABLE_Info_38_38;
        HeadVar__4_4 = next_value_of_HeadVar__4_4;
        STATE_VARIABLE_Succeeded_0_5 = next_value_of_STATE_VARIABLE_Succeeded_0_5;
        STATE_VARIABLE_Info_0_7 = next_value_of_STATE_VARIABLE_Info_0_7;
        continue;
      }
      else
      {
        *STATE_VARIABLE_Succeeded_6 = (MR_Integer) 0;
        *STATE_VARIABLE_Info_8 = STATE_VARIABLE_Info_38_38;
      }
    }
    break;
  }
}

void MR_CALL 
make__build__foldl2_install_library_grades_11_p_0(
  MR_Word KeepGoing_12,
  MR_Word LinkSucceeded_13,
  MR_Word MainModuleName_14,
  MR_Word AllModules_15,
  MR_Word Globals_16,
  MR_Word LibGrades_17,
  MR_Word * Succeeded_18,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22)
{
  make__build__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_108_111_111_112_95_95_104_111_51_95_95_91_53_93_95_48_10_p_0(LinkSucceeded_13, MainModuleName_14, AllModules_15, KeepGoing_12, Globals_16, LibGrades_17, (MR_Integer) 1, Succeeded_18, STATE_VARIABLE_Info_0_21, STATE_VARIABLE_Info_22);
}

static void MR_CALL 
make__build__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_108_111_111_112_95_95_104_111_51_95_95_91_53_93_95_48_10_p_0(
  MR_Word Var_44,
  MR_Word Var_45,
  MR_Word Var_46,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Succeeded_0_5,
  MR_Word * STATE_VARIABLE_Succeeded_6,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Info_8 = STATE_VARIABLE_Info_0_7;
      *STATE_VARIABLE_Succeeded_6 = STATE_VARIABLE_Succeeded_0_5;
    }
    else
    {
      MR_String T_26 = ((MR_String) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Ts_27 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_Word NewSucceeded_31;
      MR_Word STATE_VARIABLE_Info_38_38;

      make__program_target__install_library_grade_10_p_0(Var_44, Var_45, Var_46, HeadVar__3_3, T_26, &NewSucceeded_31, STATE_VARIABLE_Info_0_7, &STATE_VARIABLE_Info_38_38);
      succeeded = (NewSucceeded_31 == (MR_Integer) 1);
      if (!(succeeded))
        succeeded = (HeadVar__1_1 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_Succeeded_40_40;
        MR_Word next_value_of_HeadVar__4_4;
        MR_Word next_value_of_STATE_VARIABLE_Succeeded_0_5;
        MR_Word next_value_of_STATE_VARIABLE_Info_0_7;

        STATE_VARIABLE_Succeeded_40_40 = libs__maybe_succeeded__and_2_f_0(STATE_VARIABLE_Succeeded_0_5, NewSucceeded_31);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__4_4 = Ts_27;
        next_value_of_STATE_VARIABLE_Succeeded_0_5 = STATE_VARIABLE_Succeeded_40_40;
        next_value_of_STATE_VARIABLE_Info_0_7 = STATE_VARIABLE_Info_38_38;
        HeadVar__4_4 = next_value_of_HeadVar__4_4;
        STATE_VARIABLE_Succeeded_0_5 = next_value_of_STATE_VARIABLE_Succeeded_0_5;
        STATE_VARIABLE_Info_0_7 = next_value_of_STATE_VARIABLE_Info_0_7;
        continue;
      }
      else
      {
        *STATE_VARIABLE_Succeeded_6 = (MR_Integer) 0;
        *STATE_VARIABLE_Info_8 = STATE_VARIABLE_Info_38_38;
      }
    }
    break;
  }
}

void MR_CALL 
make__build__foldl2_make_module_targets_9_p_0(
  MR_Word KeepGoing_10,
  MR_Word ExtraOptions_11,
  MR_Word Globals_12,
  MR_Word Targets_13,
  MR_Word * Succeeded_14,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  make__build__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_108_111_111_112_95_95_104_111_52_95_95_91_51_93_95_48_10_p_0(ExtraOptions_11, KeepGoing_10, Globals_12, Targets_13, (MR_Integer) 1, Succeeded_14, STATE_VARIABLE_Info_0_17, STATE_VARIABLE_Info_18);
}

static void MR_CALL 
make__build__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_108_111_111_112_95_95_104_111_52_95_95_91_51_93_95_48_10_p_0(
  MR_Word Var_44,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Succeeded_0_5,
  MR_Word * STATE_VARIABLE_Succeeded_6,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Info_8 = STATE_VARIABLE_Info_0_7;
      *STATE_VARIABLE_Succeeded_6 = STATE_VARIABLE_Succeeded_0_5;
    }
    else
    {
      MR_Word T_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Ts_27 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_Word NewSucceeded_31;
      MR_Word STATE_VARIABLE_Info_38_38;

      make__module_target__make_module_target_8_p_0(Var_44, HeadVar__3_3, T_26, &NewSucceeded_31, STATE_VARIABLE_Info_0_7, &STATE_VARIABLE_Info_38_38);
      succeeded = (NewSucceeded_31 == (MR_Integer) 1);
      if (!(succeeded))
        succeeded = (HeadVar__1_1 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_Succeeded_40_40;
        MR_Word next_value_of_HeadVar__4_4;
        MR_Word next_value_of_STATE_VARIABLE_Succeeded_0_5;
        MR_Word next_value_of_STATE_VARIABLE_Info_0_7;

        STATE_VARIABLE_Succeeded_40_40 = libs__maybe_succeeded__and_2_f_0(STATE_VARIABLE_Succeeded_0_5, NewSucceeded_31);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__4_4 = Ts_27;
        next_value_of_STATE_VARIABLE_Succeeded_0_5 = STATE_VARIABLE_Succeeded_40_40;
        next_value_of_STATE_VARIABLE_Info_0_7 = STATE_VARIABLE_Info_38_38;
        HeadVar__4_4 = next_value_of_HeadVar__4_4;
        STATE_VARIABLE_Succeeded_0_5 = next_value_of_STATE_VARIABLE_Succeeded_0_5;
        STATE_VARIABLE_Info_0_7 = next_value_of_STATE_VARIABLE_Info_0_7;
        continue;
      }
      else
      {
        *STATE_VARIABLE_Succeeded_6 = (MR_Integer) 0;
        *STATE_VARIABLE_Info_8 = STATE_VARIABLE_Info_38_38;
      }
    }
    break;
  }
}

void MR_CALL 
make__build__unredirect_output_7_p_0(
  MR_Word Globals_8,
  MR_Word ModuleName_9,
  MR_Word ErrorOutputStream_10,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24)
{
  MR_bool succeeded;
  MR_String TmpErrorFileName_13;
  MR_Word TmpErrorLinesRes_14;
  MR_Word Var_22;

  mercury__io__output_stream_name_4_p_0(ErrorOutputStream_10, &TmpErrorFileName_13);
  mercury__io__close_output_3_p_0(ErrorOutputStream_10);
  mercury__io__read_named_file_as_lines_4_p_0(TmpErrorFileName_13, &TmpErrorLinesRes_14);
  if (((MR_tag((MR_Word) TmpErrorLinesRes_14)) == (MR_Integer) 1))
  {
    MR_Word Error_52 = ((MR_Word) ((MR_hl_field(1, TmpErrorLinesRes_14, (MR_Integer) 0))));

    make__build__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_105_116_104_95_108_111_99_107_101_100_95_115_116_100_111_117_116_95_95_104_111_53_95_95_91_52_93_95_48_4_p_0(TmpErrorFileName_13, Error_52, STATE_VARIABLE_Info_0_23);
    *STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_0_23;
  }
  else
  {
    MR_Word TmpErrorLines_15 = ((MR_Word) ((MR_hl_field(0, TmpErrorLinesRes_14, (MR_Integer) 0))));
    MR_String ErrorFileName_16;
    MR_Word ErrorFileRes_17;
    MR_Word Var_36;

    parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_8, (MR_String) "predicate \140make.build.unredirect_output\'/7", (MR_Integer) 0, (MR_Word) (MR_mkword(1, &make__build_scalar_common_2[0])), ModuleName_9, &ErrorFileName_16);
    Var_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_23, (MR_Integer) 16))));
    succeeded = mercury__set__member_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_9)), Var_36);
    if (succeeded)
      mercury__io__open_append_4_p_0(ErrorFileName_16, &ErrorFileRes_17);
    else
      mercury__io__open_output_4_p_0(ErrorFileName_16, &ErrorFileRes_17);
    if (((MR_tag((MR_Word) ErrorFileRes_17)) == (MR_Integer) 1))
    {
      MR_Word Error_21 = ((MR_Word) ((MR_hl_field(1, ErrorFileRes_17, (MR_Integer) 0))));

      make__build__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_105_116_104_95_108_111_99_107_101_100_95_115_116_100_111_117_116_95_95_104_111_53_95_95_91_52_93_95_48_4_p_0(TmpErrorFileName_13, Error_21, STATE_VARIABLE_Info_0_23);
      *STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_0_23;
    }
    else
    {
      MR_Word ErrorFileOutputStream_18 = ((MR_Word) ((MR_hl_field(0, ErrorFileRes_17, (MR_Integer) 0))));
      MR_Integer LinesToWrite_19;
      MR_Word CurrentOutputStream_20;
      MR_Word Var_45;
      MR_Word Var_46;
      MR_Word Var_97;
      MR_Word Var_98;
      MR_Word Var_99;
      MR_Word Var_100;
      MR_Word Var_101;
      MR_Word Var_102;
      MR_Word Var_103;
      MR_Word Var_104;
      MR_Word Var_105;
      MR_Word Var_106;
      MR_Word Var_107;
      MR_Word Var_108;
      MR_Word Var_109;
      MR_Word Var_110;
      MR_Word Var_111;
      MR_Word Var_115;
      MR_Word Var_116;
      MR_Integer Var_117;
      MR_Word Var_118;
      MR_Word Var_119;
      MR_Unsigned packed_word_2;

      libs__globals__lookup_int_option_3_p_0(Globals_8, (MR_Integer) 79, &LinesToWrite_19);
      mercury__io__output_stream_3_p_0(&CurrentOutputStream_20);
      make__build__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_105_116_104_95_108_111_99_107_101_100_95_115_116_100_111_117_116_95_95_104_111_54_95_95_91_54_93_95_48_4_p_0(TmpErrorLines_15, LinesToWrite_19, ErrorFileOutputStream_18, CurrentOutputStream_20, STATE_VARIABLE_Info_0_23);
      mercury__io__close_output_3_p_0(ErrorFileOutputStream_18);
      Var_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_23, (MR_Integer) 16))));
      Var_45 = mercury__set__insert_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_46, ((MR_Box) (ModuleName_9)));
      Var_97 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_23, (MR_Integer) 0))));
      Var_98 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_23, (MR_Integer) 1))));
      Var_99 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_23, (MR_Integer) 2))));
      Var_100 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_23, (MR_Integer) 3))));
      Var_101 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_23, (MR_Integer) 4))));
      Var_102 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_23, (MR_Integer) 5))));
      Var_103 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_23, (MR_Integer) 6))));
      Var_104 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_23, (MR_Integer) 7))));
      Var_105 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_23, (MR_Integer) 8))));
      Var_106 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_23, (MR_Integer) 9))));
      Var_107 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_23, (MR_Integer) 10))));
      Var_108 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_23, (MR_Integer) 11))));
      Var_109 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_23, (MR_Integer) 12))));
      Var_110 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_23, (MR_Integer) 13))));
      Var_111 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_23, (MR_Integer) 14))));
      packed_word_2 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_23, (MR_Integer) 15)));
      Var_115 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_23, (MR_Integer) 17))));
      Var_116 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_23, (MR_Integer) 18))));
      Var_117 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_0_23, (MR_Integer) 19))));
      Var_118 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_23, (MR_Integer) 20))));
      Var_119 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_23, (MR_Integer) 21))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (22 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_24 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_97));
        MR_hl_field(0, base, 1) = ((MR_Box) (Var_98));
        MR_hl_field(0, base, 2) = ((MR_Box) (Var_99));
        MR_hl_field(0, base, 3) = ((MR_Box) (Var_100));
        MR_hl_field(0, base, 4) = ((MR_Box) (Var_101));
        MR_hl_field(0, base, 5) = ((MR_Box) (Var_102));
        MR_hl_field(0, base, 6) = ((MR_Box) (Var_103));
        MR_hl_field(0, base, 7) = ((MR_Box) (Var_104));
        MR_hl_field(0, base, 8) = ((MR_Box) (Var_105));
        MR_hl_field(0, base, 9) = ((MR_Box) (Var_106));
        MR_hl_field(0, base, 10) = ((MR_Box) (Var_107));
        MR_hl_field(0, base, 11) = ((MR_Box) (Var_108));
        MR_hl_field(0, base, 12) = ((MR_Box) (Var_109));
        MR_hl_field(0, base, 13) = ((MR_Box) (Var_110));
        MR_hl_field(0, base, 14) = ((MR_Box) (Var_111));
        MR_hl_field(0, base, 15) = (MR_Box) (packed_word_2);
        MR_hl_field(0, base, 16) = ((MR_Box) (Var_45));
        MR_hl_field(0, base, 17) = ((MR_Box) (Var_115));
        MR_hl_field(0, base, 18) = ((MR_Box) (Var_116));
        MR_hl_field(0, base, 19) = ((MR_Box) (Var_117));
        MR_hl_field(0, base, 20) = ((MR_Box) (Var_118));
        MR_hl_field(0, base, 21) = ((MR_Box) (Var_119));
      }
    }
  }
  mercury__io__file__remove_file_4_p_0(TmpErrorFileName_13, &Var_22);
}

static void MR_CALL 
make__build__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_105_116_104_95_108_111_99_107_101_100_95_115_116_100_111_117_116_95_95_104_111_54_95_95_91_54_93_95_48_4_p_0(
  MR_Word Var_36,
  MR_Integer Var_37,
  MR_Word Var_38,
  MR_Word Var_39,
  MR_Word Info_5)
{
  MR_Word MaybeLock_8 = ((MR_Word) ((MR_hl_field(0, Info_5, (MR_Integer) 20))));

  if ((MaybeLock_8 == (MR_Word) ((MR_Unsigned) 0U)))
    make__build__make_write_error_streams_6_p_0(Var_36, Var_37, Var_38, Var_39);
  else
  {
    MR_Box Lock_9 = ((MR_Box) ((MR_hl_field(1, MaybeLock_8, (MR_Integer) 0))));

    make__build__lock_stdout_3_p_0(Lock_9);
    make__build__make_write_error_streams_6_p_0(Var_36, Var_37, Var_38, Var_39);
    make__build__unlock_stdout_3_p_0(Lock_9);
  }
}

static void MR_CALL 
make__build__make_write_error_streams_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  make__build__write_line_nl_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
}

static void MR_CALL 
make__build__make_write_error_streams_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  make__build__write_line_nl_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
}

static void MR_CALL 
make__build__make_write_error_streams_6_p_0(
  MR_Word InputLines_7,
  MR_Integer LinesToWrite_8,
  MR_Word FullOutputStream_9,
  MR_Word PartialOutputStream_10)
{
  MR_Word InputLinesToWrite_12;
  MR_Word InputLinesNotToWrite_13;
  MR_Word Var_19;
  MR_Word Var_21;
  MR_Box conv0_STATE_VARIABLE_IO_20_20;
  MR_Box conv1_STATE_VARIABLE_IO_22_22;

  {
    Var_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_19, 0) = ((MR_Box) (&make__build_scalar_common_3[0]));
    MR_hl_field(0, Var_19, 1) = ((MR_Box) (make__build__make_write_error_streams_6_p_0_1));
    MR_hl_field(0, Var_19, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_19, 3) = ((MR_Box) (FullOutputStream_9));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_19, InputLines_7, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_20_20);
  mercury__list__split_upto_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), LinesToWrite_8, InputLines_7, &InputLinesToWrite_12, &InputLinesNotToWrite_13);
  {
    Var_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_21, 0) = ((MR_Box) (&make__build_scalar_common_3[0]));
    MR_hl_field(0, Var_21, 1) = ((MR_Box) (make__build__make_write_error_streams_6_p_0_2));
    MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_21, 3) = ((MR_Box) (PartialOutputStream_10));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_21, InputLinesToWrite_12, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_22_22);
  if (!((InputLinesNotToWrite_13 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_String FullOutputFileName_16;

    mercury__io__output_stream_name_4_p_0(FullOutputStream_9, &FullOutputFileName_16);
    mercury__io__write_string_4_p_0(PartialOutputStream_10, (MR_String) "... output log truncated, see \140");
    mercury__io__write_string_4_p_0(PartialOutputStream_10, FullOutputFileName_16);
    mercury__io__write_string_4_p_0(PartialOutputStream_10, (MR_String) "\' for the complete log.\n");
  }
}

static void MR_CALL 
make__build__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_105_116_104_95_108_111_99_107_101_100_95_115_116_100_111_117_116_95_95_104_111_53_95_95_91_52_93_95_48_4_p_0(
  MR_String Var_36,
  MR_Word Var_37,
  MR_Word Info_5)
{
  MR_Word MaybeLock_8 = ((MR_Word) ((MR_hl_field(0, Info_5, (MR_Integer) 20))));

  if ((MaybeLock_8 == (MR_Word) ((MR_Unsigned) 0U)))
    make__build__write_error_opening_file_4_p_0(Var_36, Var_37);
  else
  {
    MR_Box Lock_9 = ((MR_Box) ((MR_hl_field(1, MaybeLock_8, (MR_Integer) 0))));

    make__build__lock_stdout_3_p_0(Lock_9);
    make__build__write_error_opening_file_4_p_0(Var_36, Var_37);
    make__build__unlock_stdout_3_p_0(Lock_9);
  }
}

static void MR_CALL 
make__build__write_error_opening_file_4_p_0(
  MR_String FileName_5,
  MR_Word Error_6)
{
  MR_String Var_16;

  Var_16 = mercury__io__error_message_1_f_0(Error_6);
  mercury__io__write_string_3_p_0((MR_String) "Error opening \140");
  mercury__io__write_string_3_p_0(FileName_5);
  mercury__io__write_string_3_p_0((MR_String) "\': ");
  mercury__io__write_string_3_p_0(Var_16);
  mercury__io__write_string_3_p_0((MR_String) "\n");
}

void MR_CALL 
make__build__prepare_to_redirect_output_6_p_0(
  MR_Word _ModuleName_7,
  MR_Word * MaybeErrorStream_8,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16)
{
  make__build__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_112_97_114_101_95_116_111_95_114_101_100_105_114_101_99_116_95_111_117_116_112_117_116_95_95_91_49_93_95_48_6_p_0(MaybeErrorStream_8, STATE_VARIABLE_Info_0_15, STATE_VARIABLE_Info_16);
}

void MR_CALL 
make__build__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_112_97_114_101_95_116_111_95_114_101_100_105_114_101_99_116_95_111_117_116_112_117_116_95_95_91_49_93_95_48_6_p_0(
  MR_Word * MaybeErrorStream_8,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16)
{
  MR_Word ErrorFileResult_11;

  libs__file_util__open_temp_output_3_p_0(&ErrorFileResult_11);
  if (((MR_tag((MR_Word) ErrorFileResult_11)) == (MR_Integer) 1))
  {
    MR_String ErrorMessage_14 = ((MR_String) ((MR_hl_field(1, ErrorFileResult_11, (MR_Integer) 0))));
    MR_Word MaybeLock_22;

    *MaybeErrorStream_8 = (MR_Word) ((MR_Unsigned) 0U);
    MaybeLock_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_15, (MR_Integer) 20))));
    if ((MaybeLock_22 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_String Var_48;

      Var_48 = mercury__string__f_43_43_2_f_0(ErrorMessage_14, (MR_String) "\n");
      mercury__io__write_string_3_p_0(Var_48);
    }
    else
    {
      MR_Box Lock_23 = ((MR_Box) ((MR_hl_field(1, MaybeLock_22, (MR_Integer) 0))));
      MR_String Var_50;

      make__build__lock_stdout_3_p_0(Lock_23);
      Var_50 = mercury__string__f_43_43_2_f_0(ErrorMessage_14, (MR_String) "\n");
      mercury__io__write_string_3_p_0(Var_50);
      make__build__unlock_stdout_3_p_0(Lock_23);
    }
  }
  else
  {
    MR_Word ErrorOutputStream_13;
    MR_Tuple Var_20 = ((MR_Tuple) ((MR_hl_field(0, ErrorFileResult_11, (MR_Integer) 0))));

    ErrorOutputStream_13 = ((MR_Word) ((MR_hl_field(0, Var_20, (MR_Integer) 1))));
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeErrorStream_8 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ErrorOutputStream_13));
    }
  }
  *STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_0_15;
}

static void MR_CALL 
make__build__unlock_stdout_3_p_0(
  MR_Box JobCtl_1)
{
{
#define MR_PROC_LABEL make__build__unlock_stdout_3_p_0

	MC_JobCtl * JobCtl;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MC_JobCtl *, JobCtl_1 , JobCtl);
		{

#ifdef MC_HAVE_JOBCTL_IPC
    MC_unlock_job_ctl(JobCtl);
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
make__build__lock_stdout_3_p_0(
  MR_Box JobCtl_1)
{
{
#define MR_PROC_LABEL make__build__lock_stdout_3_p_0

	MC_JobCtl * JobCtl;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MC_JobCtl *, JobCtl_1 , JobCtl);
		{

#ifdef MC_HAVE_JOBCTL_IPC
    MC_lock_job_ctl(JobCtl);
#endif


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
make__build__setup_for_build_with_module_options_9_p_0(
  MR_Word InvokedByMmcMake_10,
  MR_Word ModuleName_11,
  MR_Word DetectedGradeFlags_12,
  MR_Word OptionVariables_13,
  MR_Word OptionArgs_14,
  MR_Word ExtraOptions_15,
  MR_Word * MayBuild_16)
{
  MR_Word MaybeModuleOptionArgs_18;

  make__options_file__lookup_mmc_module_options_3_p_0(OptionVariables_13, ModuleName_11, &MaybeModuleOptionArgs_18);
  if (((MR_tag((MR_Word) MaybeModuleOptionArgs_18)) == (MR_Integer) 0))
  {
    MR_Word LookupSpecs_19 = ((MR_Word) ((MR_hl_field(0, MaybeModuleOptionArgs_18, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MayBuild_16 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (LookupSpecs_19));
    }
  }
  else
  {
    MR_Word ModuleOptionArgs_20 = ((MR_Word) ((MR_hl_field(1, MaybeModuleOptionArgs_18, (MR_Integer) 0))));
    MR_Word UseSubdirs_21;
    MR_Word InvokedByMake_22;
    MR_Word AllOptionArgs_23;
    MR_Word CurStream_24;
    MR_Word OptionSpecs_27;
    MR_Word BuildGlobals_28;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_25;
    MR_Word Var_26;

    switch (InvokedByMmcMake_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          UseSubdirs_21 = (MR_Word) (MR_mkword(1, &make__build_scalar_common_1[3]));
          InvokedByMake_22 = (MR_Word) (MR_mkword(1, &make__build_scalar_common_1[4]));
        }
        break;
      case (MR_Integer) 0:
        {
          UseSubdirs_21 = (MR_Word) ((MR_Unsigned) 0U);
          InvokedByMake_22 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
    }
    Var_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExtraOptions_15, UseSubdirs_21);
    Var_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OptionArgs_14, Var_40);
    Var_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ModuleOptionArgs_20, Var_39);
    Var_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DetectedGradeFlags_12, Var_38);
    AllOptionArgs_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), InvokedByMake_22, Var_37);
    mercury__io__output_stream_3_p_0(&CurStream_24);
    libs__handle_options__handle_given_options_8_p_0(CurStream_24, AllOptionArgs_23, &Var_25, &Var_26, &OptionSpecs_27, &BuildGlobals_28);
    if ((OptionSpecs_27 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *MayBuild_16 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (AllOptionArgs_23));
        MR_hl_field(1, base, 1) = ((MR_Box) (BuildGlobals_28));
      }
    else
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MayBuild_16 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (OptionSpecs_27));
      }
  }
}

static MR_bool MR_CALL 
make__build____Unify____foldl2_pred_with_status_3_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  MR_bool succeeded;

  succeeded = make__build____Unify____foldl2_pred_with_status_3_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
  return succeeded;
}

static void MR_CALL 
make__build____Compare____foldl2_pred_with_status_3_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6)
{
  MR_Word conv0_HeadVar__1_1;

  make__build____Compare____foldl2_pred_with_status_3_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_5)), ((MR_Word) (wrapper_arg_6)));
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__build____Unify____job_ctl_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__build____Unify____job_ctl_0_0(((MR_Box) (wrapper_arg_1)), ((MR_Box) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__build____Compare____job_ctl_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__build____Compare____job_ctl_0_0(&conv0_HeadVar__1_1, ((MR_Box) (wrapper_arg_2)), ((MR_Box) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__build____Unify____may_build_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__build____Unify____may_build_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__build____Compare____may_build_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__build____Compare____may_build_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__build____Unify____maybe_invoked_by_mmc_make_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__build____Unify____maybe_invoked_by_mmc_make_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__build____Compare____maybe_invoked_by_mmc_make_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__build____Compare____maybe_invoked_by_mmc_make_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__build____Unify____stdout_lock_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__build____Unify____stdout_lock_0_0(((MR_Box) (wrapper_arg_1)), ((MR_Box) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__build____Compare____stdout_lock_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__build____Compare____stdout_lock_0_0(&conv0_HeadVar__1_1, ((MR_Box) (wrapper_arg_2)), ((MR_Box) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__make__build__init(void)
{
}

void mercury__make__build__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&make__build__make__build__type_ctor_info_foldl2_pred_with_status_3);
	MR_register_type_ctor_info(&make__build__make__build__type_ctor_info_job_ctl_0);
	MR_register_type_ctor_info(&make__build__make__build__type_ctor_info_may_build_0);
	MR_register_type_ctor_info(&make__build__make__build__type_ctor_info_maybe_invoked_by_mmc_make_0);
	MR_register_type_ctor_info(&make__build__make__build__type_ctor_info_stdout_lock_0);
}

void mercury__make__build__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__make__build__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module make.build.
