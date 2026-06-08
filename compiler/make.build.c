/*
** Automatically generated from `make.build.m'
** by the Mercury compiler,
** version rotd-2026-06-08
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
#include "backend_libs.link_target_code.mih"
#include "io.file.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.handle_options.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.process_util.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "make.index_set.mih"
#include "make.make_info.mih"
#include "make.module_target.mih"
#include "make.options_file.mih"
#include "make.prereqs_cache.mih"
#include "make.util.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_dep_info.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "mdbcomp.feedback.feedback_info.mih"

#line 811 "make.build.m"

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




static const MR_FA_PseudoTypeInfo_Struct1 make__build__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_VA_PseudoTypeInfo_Struct8 make__build____vpti_pred_8__plain_io__type_ctor_info_text_output_stream_0__plain_libs__globals__type_ctor_info_globals_0__pseudo_1__plain_libs__maybe_util__type_ctor_info_maybe_succeeded_0__plain_make__make_info__type_ctor_info_make_info_0__plain_make__make_info__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__build__list__pti_list_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 make__build__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

static const MR_VA_PseudoTypeInfo_Struct8 make__build____vpti_pred_8__plain_io__type_ctor_info_text_output_stream_0__plain_libs__globals__type_ctor_info_globals_0__pseudo_1__plain_libs__maybe_util__type_ctor_info_maybe_succeeded_0__pseudo_2__pseudo_2__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_PseudoTypeInfo make__build__make__build__field_types_error_stream_result_0_0[2];

static const MR_DuFunctorDesc make__build__make__build__du_functor_desc_error_stream_result_0_0;

static const MR_DuFunctorDesc make__build__make__build__du_functor_desc_error_stream_result_0_1;

static const MR_DuFunctorDescPtr make__build__make__build__du_stag_ordered_error_stream_result_0_0[1];

static const MR_DuFunctorDescPtr make__build__make__build__du_stag_ordered_error_stream_result_0_1[1];

static const MR_DuPtagLayout make__build__make__build__du_ptag_ordered_error_stream_result_0[2];

static const MR_DuFunctorDescPtr make__build__make__build__du_name_ordered_error_stream_result_0[2];

static const MR_Integer make__build__make__build__functor_number_map_error_stream_result_0[2];

static const MR_VA_PseudoTypeInfo_Struct8 make__build____vpti_pred_8__plain_io__type_ctor_info_text_output_stream_0__plain_libs__globals__type_ctor_info_globals_0__pseudo_1__plain_libs__maybe_util__type_ctor_info_maybe_succeeded_0__pseudo_2__pseudo_2__pseudo_3__pseudo_3;

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

static const MR_Integer make__build__make__build__functor_number_map_module_error_stream_info_0[1];

static const MR_NotagFunctorDesc make__build__make__build__notag_functor_desc_module_error_stream_info_0;

static void MR_CALL 
make__build__IntroducedFrom__pred__foldl2_maybe_stop_at_error_parallel_processes__485__1_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__build__IntroducedFrom__pred__foldl2_maybe_stop_at_error_parallel_processes__485__1_6_p_0(
  MR_Box JobCtl_15,
  MR_Word Pids_23,
  MR_Word HeadVar__3_61,
  MR_Word * HeadVar__4_62);

static void MR_CALL 
make__build__IntroducedFrom__pred__foldl2_maybe_stop_at_error_parallel_processes__478__1_13_p_0(
  MR_Word TypeInfo_for_T_50,
  MR_Word KeepGoing_13,
  MR_Box JobCtl_15,
  MR_Word MakeTarget_16,
  MR_Word ProgressStream_17,
  MR_Word Globals_18,
  MR_Word Targets_19,
  MR_Word STATE_VARIABLE_Info_1_34,
  MR_Integer HeadVar__9_51,
  MR_Word HeadVar__10_52,
  MR_Word * HeadVar__11_53);

static void MR_CALL 
make__build__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_112_97_114_97_108_108_101_108_95_112_114_111_99_101_115_115_101_115_95_95_52_55_56_95_95_49_95_95_91_57_93_95_48_13_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__build__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_112_97_114_97_108_108_101_108_95_112_114_111_99_101_115_115_101_115_95_95_52_55_56_95_95_49_95_95_91_57_93_95_48_13_p_0(
  MR_Word TypeInfo_for_T_50,
  MR_Word KeepGoing_13,
  MR_Box JobCtl_15,
  MR_Word MakeTarget_16,
  MR_Word ProgressStream_17,
  MR_Word Globals_18,
  MR_Word Targets_19,
  MR_Word STATE_VARIABLE_Info_1_34,
  MR_Word HeadVar__10_52,
  MR_Word * HeadVar__11_53);

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
  MR_Word TypeInfo_for_Info_17,
  MR_Box JobCtl_7,
  MR_Word Pids_8,
  MR_Box Info_9,
  MR_Box * Info_4);

static void MR_CALL 
make__build__mark_abort_3_p_0(
  MR_Box JobCtl_1);

static void MR_CALL 
make__build__child_worker_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__build__child_worker_10_p_0(
  MR_Word TypeInfo_for_T_34,
  MR_Word TypeInfo_for_Info_35,
  MR_Word ProgressStream_11,
  MR_Word Globals_12,
  MR_Word KeepGoing_13,
  MR_Word MakeTarget_14,
  MR_Word Targets_15,
  MR_Box JobCtl_16,
  MR_Box STATE_VARIABLE_Info_0_25,
  MR_Word * Succeeded_18);

static void MR_CALL 
make__build__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_111_114_107_101_114_95_108_111_111_112_95_95_91_50_93_95_48_12_p_0(
  MR_Word TypeInfo_for_T_39,
  MR_Word ProgressStream_13,
  MR_Word Globals_14,
  MR_Word KeepGoing_15,
  MR_Word MakeTarget_16,
  MR_Word Targets_17,
  MR_Box JobCtl_18,
  MR_Word STATE_VARIABLE_Succeeded_0_26,
  MR_Word * STATE_VARIABLE_Succeeded_27,
  MR_Box STATE_VARIABLE_Info_0_28,
  MR_Box * STATE_VARIABLE_Info_29);

static void MR_CALL 
make__build__write_line_nl_4_p_0(
  MR_Word Stream_5,
  MR_String Line_6);

static void MR_CALL 
make__build__foldl2_make_module_targets_maybe_parallel_10_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__build__foldl2_make_module_targets_maybe_parallel_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__build__foldl2_make_module_targets_maybe_parallel_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__build__foldl2_make_module_targets_maybe_parallel_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
make__build__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_111_114_107_101_114_95_108_111_111_112_95_95_104_111_54_95_95_91_53_93_95_48_12_p_0(
  MR_Word Var_41,
  MR_Word ProgressStream_13,
  MR_Word Globals_14,
  MR_Word KeepGoing_15,
  MR_Word Targets_17,
  MR_Box JobCtl_18,
  MR_Word STATE_VARIABLE_Succeeded_0_26,
  MR_Word * STATE_VARIABLE_Succeeded_27,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29);

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
make__build__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_108_111_111_112_95_95_104_111_50_95_95_91_51_93_95_48_11_p_0(
  MR_Word Var_48,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_Succeeded_0_6,
  MR_Word * STATE_VARIABLE_Succeeded_7,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9);

static void MR_CALL 
make__build__write_error_opening_file_5_p_0(
  MR_Word ProgressStream_6,
  MR_String FileName_7,
  MR_Word Error_8);

static void MR_CALL 
make__build__copy_selected_output_lines_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__build__copy_selected_output_lines_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__build__copy_selected_output_lines_6_p_0(
  MR_Word InputLines_7,
  MR_Word MaybeLinesToWrite_8,
  MR_String ErrorFileName_9,
  MR_Word PartialOutputStream_10);

static MR_bool MR_CALL 
make__build____Unify____error_stream_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__build____Compare____error_stream_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

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
make__build____Unify____module_error_stream_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__build____Compare____module_error_stream_info_0_0_10001(
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


static /* final */ const MR_Box make__build_scalar_common_1[6][2];

static /* final */ const MR_Box make__build_scalar_common_2[1][1];

static /* final */ const MR_Box make__build_scalar_common_3[2][7];

static /* final */ const MR_Box make__build_scalar_common_4[1][12];

static /* final */ const MR_Integer make__build_scalar_common_5[1][2];

static /* final */ const MR_Box make__build_scalar_common_6[1][16];

static /* final */ const MR_Box make__build_scalar_common_7[1][9];

static /* final */ const MR_Box make__build_scalar_common_8[1][8];

static /* final */ const MR_Box make__build_scalar_common_9[1][3];

static /* final */ const MR_Box make__build_scalar_common_10[1][10];

static /* final */ const MR_Integer make__build_scalar_common_11[1][3];

static /* final */ const MR_Box make__build_scalar_common_12[1][15];




static /* final */ const MR_Box make__build_scalar_common_1[6][2] = {
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
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box make__build_scalar_common_2[1][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 0U) },
};

static /* final */ const MR_Box make__build_scalar_common_3[2][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
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

static /* final */ const MR_Box make__build_scalar_common_4[1][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&make__build__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_target_id_0)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Integer make__build_scalar_common_5[1][2] = {
  /* row   0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box make__build_scalar_common_6[1][16] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&make__build_scalar_common_5[0])),
    ((MR_Box) ((MR_Integer) 13)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_maybe_keep_going_0)),
    ((MR_Box) (&make__build__make__build__type_ctor_info_job_ctl_0)),
    ((MR_Box) (&make__build____vpti_pred_8__plain_io__type_ctor_info_text_output_stream_0__plain_libs__globals__type_ctor_info_globals_0__pseudo_1__plain_libs__maybe_util__type_ctor_info_maybe_succeeded_0__plain_make__make_info__type_ctor_info_make_info_0__plain_make__make_info__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__build__list__pti_list_1__pseudo_1)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&make__build__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&make__build__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__build_scalar_common_7[1][9] = {
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

static /* final */ const MR_Box make__build_scalar_common_8[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__build_scalar_common_9[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&make__build_scalar_common_8[0])),
    ((MR_Box) (make__build__foldl2_make_module_targets_maybe_parallel_10_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box make__build_scalar_common_10[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&make__build_scalar_common_5[0])),
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

static /* final */ const MR_Box make__build_scalar_common_12[1][15] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&make__build_scalar_common_11[0])),
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_maybe_keep_going_0)),
    ((MR_Box) (&make__build____vpti_pred_8__plain_io__type_ctor_info_text_output_stream_0__plain_libs__globals__type_ctor_info_globals_0__pseudo_1__plain_libs__maybe_util__type_ctor_info_maybe_succeeded_0__pseudo_2__pseudo_2__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&make__build__list__pti_list_1__pseudo_1)),
    ((MR_Box) (&make__build__make__build__type_ctor_info_job_ctl_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0)),
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
#line 878 "make.build.m"

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


#line 746 "make.build.m"
MR_Word 
MC_make_yes_job_ctl(
  MC_JobCtl * JobCtl_3)
#line 746 "make.build.m"
{
#line 746 "make.build.m"
	MR_Box boxed_JobCtl_3;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(MC_JobCtl *, JobCtl_3, boxed_JobCtl_3);
	ret_value = (MR_Word)make__build__make_yes_job_ctl_1_f_0(boxed_JobCtl_3);
	return ret_value;
}

#line 752 "make.build.m"
MR_Word 
MC_make_no_job_ctl(void)
#line 752 "make.build.m"
{
#line 752 "make.build.m"
	MR_Word ret_value;
	ret_value = (MR_Word)make__build__make_no_job_ctl_0_f_0();
	return ret_value;
}


static const MR_FA_PseudoTypeInfo_Struct1 make__build__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_VA_PseudoTypeInfo_Struct8 make__build____vpti_pred_8__plain_io__type_ctor_info_text_output_stream_0__plain_libs__globals__type_ctor_info_globals_0__pseudo_1__plain_libs__maybe_util__type_ctor_info_maybe_succeeded_0__plain_make__make_info__type_ctor_info_make_info_0__plain_make__make_info__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 8,
  {
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_text_output_stream_0),
    (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_globals_0),
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0),
    (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_make_info_0),
    (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_make_info_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__build__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__build__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

static const MR_VA_PseudoTypeInfo_Struct8 make__build____vpti_pred_8__plain_io__type_ctor_info_text_output_stream_0__plain_libs__globals__type_ctor_info_globals_0__pseudo_1__plain_libs__maybe_util__type_ctor_info_maybe_succeeded_0__pseudo_2__pseudo_2__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 8,
  {
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_text_output_stream_0),
    (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_globals_0),
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0),
    (MR_PseudoTypeInfo) ((MR_Integer) 2),
    (MR_PseudoTypeInfo) ((MR_Integer) 2),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0)
  }
};

static const MR_PseudoTypeInfo make__build__make__build__field_types_error_stream_result_0_0[2] = {
  (MR_PseudoTypeInfo) (&make__build__make__build__type_ctor_info_module_error_stream_info_0),
  (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_text_output_stream_0)
};

static const MR_DuFunctorDesc make__build__make__build__du_functor_desc_error_stream_result_0_0 = {
  (MR_String) "es_ok",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  make__build__make__build__field_types_error_stream_result_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc make__build__make__build__du_functor_desc_error_stream_result_0_1 = {
  (MR_String) "es_error_already_reported",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr make__build__make__build__du_stag_ordered_error_stream_result_0_0[1] = { &make__build__make__build__du_functor_desc_error_stream_result_0_1 };

static const MR_DuFunctorDescPtr make__build__make__build__du_stag_ordered_error_stream_result_0_1[1] = { &make__build__make__build__du_functor_desc_error_stream_result_0_0 };

static const MR_DuPtagLayout make__build__make__build__du_ptag_ordered_error_stream_result_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    make__build__make__build__du_stag_ordered_error_stream_result_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__build__make__build__du_stag_ordered_error_stream_result_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr make__build__make__build__du_name_ordered_error_stream_result_0[2] = {
  &make__build__make__build__du_functor_desc_error_stream_result_0_1,
  &make__build__make__build__du_functor_desc_error_stream_result_0_0
};

static const MR_Integer make__build__make__build__functor_number_map_error_stream_result_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct make__build__make__build__type_ctor_info_error_stream_result_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__build____Unify____error_stream_result_0_0_10001)),
  ((MR_Box) (make__build____Compare____error_stream_result_0_0_10001)),
  (MR_String) "make.build",
  (MR_String) "error_stream_result",
  { make__build__make__build__du_name_ordered_error_stream_result_0 },
  { make__build__make__build__du_ptag_ordered_error_stream_result_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  make__build__make__build__functor_number_map_error_stream_result_0,

};

static const MR_VA_PseudoTypeInfo_Struct8 make__build____vpti_pred_8__plain_io__type_ctor_info_text_output_stream_0__plain_libs__globals__type_ctor_info_globals_0__pseudo_1__plain_libs__maybe_util__type_ctor_info_maybe_succeeded_0__pseudo_2__pseudo_2__pseudo_3__pseudo_3 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 8,
  {
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_text_output_stream_0),
    (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_globals_0),
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0),
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
  { (MR_PseudoTypeInfo) (&make__build____vpti_pred_8__plain_io__type_ctor_info_text_output_stream_0__plain_libs__globals__type_ctor_info_globals_0__pseudo_1__plain_libs__maybe_util__type_ctor_info_maybe_succeeded_0__pseudo_2__pseudo_2__pseudo_3__pseudo_3) },
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
  { (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_PseudoTypeInfo make__build__make__build__field_types_may_build_0_0[1] = { (MR_PseudoTypeInfo) (&make__build__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0) };

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
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
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

static const MR_DuFunctorDescPtr make__build__make__build__du_stag_ordered_may_build_0_0[1] = { &make__build__make__build__du_functor_desc_may_build_0_0 };

static const MR_DuFunctorDescPtr make__build__make__build__du_stag_ordered_may_build_0_1[1] = { &make__build__make__build__du_functor_desc_may_build_0_1 };

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

static const MR_Integer make__build__make__build__functor_number_map_module_error_stream_info_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc make__build__make__build__notag_functor_desc_module_error_stream_info_0 = {
  (MR_String) "mesi_err_file",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct make__build__make__build__type_ctor_info_module_error_stream_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (make__build____Unify____module_error_stream_info_0_0_10001)),
  ((MR_Box) (make__build____Compare____module_error_stream_info_0_0_10001)),
  (MR_String) "make.build",
  (MR_String) "module_error_stream_info",
  { &make__build__make__build__notag_functor_desc_module_error_stream_info_0 },
  { &make__build__make__build__notag_functor_desc_module_error_stream_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  make__build__make__build__functor_number_map_module_error_stream_info_0,

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
make__build__IntroducedFrom__pred__foldl2_maybe_stop_at_error_parallel_processes__485__1_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  libs__process_util__send_signal_4_p_0(((MR_Integer) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) (wrapper_arg_1)));
}

static void MR_CALL 
make__build__IntroducedFrom__pred__foldl2_maybe_stop_at_error_parallel_processes__485__1_6_p_0(
  MR_Box JobCtl_15,
  MR_Word Pids_23,
  MR_Word HeadVar__3_61,
  MR_Word * HeadVar__4_62)
{
  MR_Word Var_67;
  MR_Integer Var_68;
  MR_Box conv0_HeadVar__6_64;

  *HeadVar__4_62 = HeadVar__3_61;
  make__build__mark_abort_3_p_0(JobCtl_15);
  Var_68 = libs__process_util__sigint_0_f_0();
  {
    Var_67 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_67, 0) = ((MR_Box) (&make__build_scalar_common_3[1]));
    MR_hl_field(0, Var_67, 1) = ((MR_Box) (make__build__IntroducedFrom__pred__foldl2_maybe_stop_at_error_parallel_processes__485__1_6_p_0_1));
    MR_hl_field(0, Var_67, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_67, 3) = ((MR_Box) (Var_68));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_67, Pids_23, ((MR_Box) ((MR_Integer) 0)), &conv0_HeadVar__6_64);
}

static void MR_CALL 
make__build__IntroducedFrom__pred__foldl2_maybe_stop_at_error_parallel_processes__478__1_13_p_0(
  MR_Word TypeInfo_for_T_50,
  MR_Word KeepGoing_13,
  MR_Box JobCtl_15,
  MR_Word MakeTarget_16,
  MR_Word ProgressStream_17,
  MR_Word Globals_18,
  MR_Word Targets_19,
  MR_Word STATE_VARIABLE_Info_1_34,
  MR_Integer HeadVar__9_51,
  MR_Word HeadVar__10_52,
  MR_Word * HeadVar__11_53)
{
  make__build__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_112_97_114_97_108_108_101_108_95_112_114_111_99_101_115_115_101_115_95_95_52_55_56_95_95_49_95_95_91_57_93_95_48_13_p_0(TypeInfo_for_T_50, KeepGoing_13, JobCtl_15, MakeTarget_16, ProgressStream_17, Globals_18, Targets_19, STATE_VARIABLE_Info_1_34, HeadVar__10_52, HeadVar__11_53);
}

static void MR_CALL 
make__build__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_112_97_114_97_108_108_101_108_95_112_114_111_99_101_115_115_101_115_95_95_52_55_56_95_95_49_95_95_91_57_93_95_48_13_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Succeeded_18;

  make__build__child_worker_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), ((MR_Word) ((MR_hl_field(0, closure, 8)))), ((MR_Word) ((MR_hl_field(0, closure, 9)))), ((MR_Box) ((MR_hl_field(0, closure, 10)))), (MR_hl_field(0, closure, 11)), &conv0_Succeeded_18);
  *wrapper_arg_1 = ((MR_Box) (conv0_Succeeded_18));
}

static void MR_CALL 
make__build__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_112_97_114_97_108_108_101_108_95_112_114_111_99_101_115_115_101_115_95_95_52_55_56_95_95_49_95_95_91_57_93_95_48_13_p_0(
  MR_Word TypeInfo_for_T_50,
  MR_Word KeepGoing_13,
  MR_Box JobCtl_15,
  MR_Word MakeTarget_16,
  MR_Word ProgressStream_17,
  MR_Word Globals_18,
  MR_Word Targets_19,
  MR_Word STATE_VARIABLE_Info_1_34,
  MR_Word HeadVar__10_52,
  MR_Word * HeadVar__11_53)
{
  MR_Word MaybePid_57;
  MR_Word Var_59;

  {
    Var_59 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_59, 0) = ((MR_Box) (&make__build_scalar_common_12[0]));
    MR_hl_field(0, Var_59, 1) = ((MR_Box) (make__build__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_112_97_114_97_108_108_101_108_95_112_114_111_99_101_115_115_101_115_95_95_52_55_56_95_95_49_95_95_91_57_93_95_48_13_p_0_1));
    MR_hl_field(0, Var_59, 2) = ((MR_Box) ((MR_Integer) 9));
    MR_hl_field(0, Var_59, 3) = ((MR_Box) (TypeInfo_for_T_50));
    MR_hl_field(0, Var_59, 4) = ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0));
    MR_hl_field(0, Var_59, 5) = ((MR_Box) (ProgressStream_17));
    MR_hl_field(0, Var_59, 6) = ((MR_Box) (Globals_18));
    MR_hl_field(0, Var_59, 7) = ((MR_Box) (KeepGoing_13));
    MR_hl_field(0, Var_59, 8) = ((MR_Box) (MakeTarget_16));
    MR_hl_field(0, Var_59, 9) = ((MR_Box) (Targets_19));
    MR_hl_field(0, Var_59, 10) = ((MR_Box) (JobCtl_15));
    MR_hl_field(0, Var_59, 11) = ((MR_Box) (STATE_VARIABLE_Info_1_34));
  }
  libs__process_util__start_in_forked_process_4_p_0(Var_59, &MaybePid_57);
  if ((MaybePid_57 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__11_53 = HeadVar__10_52;
  else
  {
    MR_Integer Pid_58 = ((MR_Integer) ((MR_hl_field(1, MaybePid_57, 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__11_53 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Pid_58));
      MR_hl_field(1, base, 1) = ((MR_Box) (HeadVar__10_52));
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
make__build____Compare____module_error_stream_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_String ArgX1_4 = (MR_String) (HeadVar__2_2);
    MR_String ArgY1_5 = (MR_String) (HeadVar__3_3);

    mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

MR_bool MR_CALL 
make__build____Unify____module_error_stream_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_String ArgX1_3 = (MR_String) (HeadVar__1_1);
    MR_String ArgY1_4 = (MR_String) (HeadVar__2_2);

    succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
  }
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
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word ArgY2_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word SubResult1_8;

      mercury__builtin__compare_3_p_0((MR_Word) (&make__build_scalar_common_1[1]), &SubResult1_8, ((MR_Box) (ArgX1_6)), ((MR_Box) (ArgY1_7)));
      succeeded = (SubResult1_8 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_8;
      else
        libs__globals____Compare____globals_0_0(HeadVar__1_1, ArgX2_9, ArgY2_10);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));

    mercury__builtin__compare_3_p_0((MR_Word) (&make__build_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
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
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_6;
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word ArgY2_8;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      TypeInfo_11_11 = (MR_Word) (&make__build_scalar_common_1[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
      if (succeeded)
        succeeded = libs__globals____Unify____globals_0_0(ArgX2_7, ArgY2_8);
    }
  }
  else
  {
    MR_Word TypeInfo_13_13;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
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
  MR_Word TypeInfo_for_T_4,
  MR_Word TypeInfo_for_Info_5,
  MR_Word TypeInfo_for_IO_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (HeadVar__2_2), (MR_Word) (HeadVar__3_3));
}

MR_bool MR_CALL 
make__build____Unify____foldl2_pred_with_status_3_0(
  MR_Word TypeInfo_for_T_3,
  MR_Word TypeInfo_for_Info_4,
  MR_Word TypeInfo_for_IO_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;

  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (HeadVar__1_1), (MR_Word) (HeadVar__2_2));
  return succeeded;
}

void MR_CALL 
make__build____Compare____error_stream_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;
    MR_String Var_13 = (MR_String) (ArgX1_4);
    MR_String Var_14 = (MR_String) (ArgY1_5);

    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, Var_13, Var_14);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__io____Compare____text_output_stream_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

MR_bool MR_CALL 
make__build____Unify____error_stream_result_0_0(
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
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_8 == CastX_7);
  }
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word ArgY2_6;
    MR_Integer CastX_14;
    MR_Integer CastY_15;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      ArgY2_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      CastX_14 = (MR_Integer) (ArgX1_3);
      CastY_15 = (MR_Integer) (ArgY1_4);
      succeeded = (CastX_14 == CastY_15);
      if (succeeded)
        succeeded = MR_TRUE;
      else
      {
        MR_String ArgX1_12 = (MR_String) (ArgX1_3);
        MR_String ArgY1_13 = (MR_String) (ArgY1_4);

        succeeded = (strcmp(ArgX1_12, ArgY1_13) == 0);
      }
      if (succeeded)
        succeeded = mercury__io____Unify____text_output_stream_0_0(ArgX2_5, ArgY2_6);
    }
  }
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
      Var_15 = ((MR_Word) ((MR_hl_field(0, Status_9, 0))));
      succeeded = ((MR_tag((MR_Word) Var_15)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_16 = ((MR_Integer) ((MR_hl_field(0, Var_15, 0))));
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

  libs__process_util__send_signal_4_p_0(((MR_Integer) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) (wrapper_arg_1)));
}

static void MR_CALL 
make__build__worker_loop_signal_cleanup_6_p_0(
  MR_Word TypeInfo_for_Info_17,
  MR_Box JobCtl_7,
  MR_Word Pids_8,
  MR_Box Info_9,
  MR_Box * Info_4)
{
  MR_Word Var_14;
  MR_Integer Var_16;
  MR_Box conv0_STATE_VARIABLE_IO_12;

  *Info_4 = Info_9;
  make__build__mark_abort_3_p_0(JobCtl_7);
  Var_16 = libs__process_util__sigint_0_f_0();
  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (&make__build_scalar_common_3[1]));
    MR_hl_field(0, Var_14, 1) = ((MR_Box) (make__build__worker_loop_signal_cleanup_6_p_0_1));
    MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_14, 3) = ((MR_Box) (Var_16));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_14, Pids_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_12);
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
make__build__child_worker_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  make__build__worker_loop_signal_cleanup_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Box) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), wrapper_arg_1, wrapper_arg_2);
}

static void MR_CALL 
make__build__child_worker_10_p_0(
  MR_Word TypeInfo_for_T_34,
  MR_Word TypeInfo_for_Info_35,
  MR_Word ProgressStream_11,
  MR_Word Globals_12,
  MR_Word KeepGoing_13,
  MR_Word MakeTarget_14,
  MR_Word Targets_15,
  MR_Box JobCtl_16,
  MR_Box STATE_VARIABLE_Info_0_25,
  MR_Word * Succeeded_18)
{
  MR_Word VeryVerbose_20;
  MR_Box Cookie_21;
  MR_Word Succeeded0_22;
  MR_Word Cleanup_23;
  MR_Box STATE_VARIABLE_Info_1_31;
  MR_Box _Info_24;

  libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 132, &VeryVerbose_20);
  libs__process_util__setup_checking_for_interrupt_3_p_0(&Cookie_21);
  make__build__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_111_114_107_101_114_95_108_111_111_112_95_95_91_50_93_95_48_12_p_0(TypeInfo_for_T_34, ProgressStream_11, Globals_12, KeepGoing_13, MakeTarget_14, Targets_15, JobCtl_16, (MR_Integer) 1, &Succeeded0_22, STATE_VARIABLE_Info_0_25, &STATE_VARIABLE_Info_1_31);
  {
    Cleanup_23 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Cleanup_23, 0) = ((MR_Box) (&make__build_scalar_common_10[0]));
    MR_hl_field(0, Cleanup_23, 1) = ((MR_Box) (make__build__child_worker_10_p_0_1));
    MR_hl_field(0, Cleanup_23, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Cleanup_23, 3) = ((MR_Box) (TypeInfo_for_Info_35));
    MR_hl_field(0, Cleanup_23, 4) = ((MR_Box) (JobCtl_16));
    MR_hl_field(0, Cleanup_23, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  libs__process_util__teardown_checking_for_interrupt_9_p_0(TypeInfo_for_Info_35, VeryVerbose_20, Cookie_21, Cleanup_23, Succeeded0_22, Succeeded_18, STATE_VARIABLE_Info_1_31, &_Info_24);
}

static void MR_CALL 
make__build__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_111_114_107_101_114_95_108_111_111_112_95_95_91_50_93_95_48_12_p_0(
  MR_Word TypeInfo_for_T_39,
  MR_Word ProgressStream_13,
  MR_Word Globals_14,
  MR_Word KeepGoing_15,
  MR_Word MakeTarget_16,
  MR_Word Targets_17,
  MR_Box JobCtl_18,
  MR_Word STATE_VARIABLE_Succeeded_0_26,
  MR_Word * STATE_VARIABLE_Succeeded_27,
  MR_Box STATE_VARIABLE_Info_0_28,
  MR_Box * STATE_VARIABLE_Info_29)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer TaskNumber_22;

    // setup for model_det tailcalls optimized into a loop
    ;
    make__build__accept_task_4_p_0(JobCtl_18, &TaskNumber_22);
    succeeded = (TaskNumber_22 >= (MR_Integer) 0);
    if (succeeded)
    {
      MR_Box Target_23;
      MR_Word TargetSucceeded_24;
      MR_Box STATE_VARIABLE_Info_1_34;
      MR_Word STATE_VARIABLE_Succeeded_1_38;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Box conv2_TargetSucceeded_24;
      MR_Box conv1_STATE_VARIABLE_IO_2_35;
      MR_Word next_value_of_STATE_VARIABLE_Succeeded_0_26;
      MR_Box next_value_of_STATE_VARIABLE_Info_0_28;

      Target_23 = mercury__list__det_index0_2_f_0(TypeInfo_for_T_39, Targets_17, TaskNumber_22);
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, MakeTarget_16, 1))));
      func_0(((MR_Box) (MakeTarget_16)), ((MR_Box) (ProgressStream_13)), ((MR_Box) (Globals_14)), Target_23, &conv2_TargetSucceeded_24, STATE_VARIABLE_Info_0_28, &STATE_VARIABLE_Info_1_34, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_2_35);
      TargetSucceeded_24 = ((MR_Word) (conv2_TargetSucceeded_24));
      switch (TargetSucceeded_24) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word KeepGoingBool_25;

            succeeded = (KeepGoing_15 == (MR_Integer) 1);
            if (succeeded)
              KeepGoingBool_25 = (MR_Integer) 1;
            else
              KeepGoingBool_25 = (MR_Integer) 0;
            make__build__mark_task_error_5_p_0(JobCtl_18, TaskNumber_22, KeepGoingBool_25);
            STATE_VARIABLE_Succeeded_1_38 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 1:
          {
            make__build__mark_task_done_4_p_0(JobCtl_18, TaskNumber_22);
            STATE_VARIABLE_Succeeded_1_38 = STATE_VARIABLE_Succeeded_0_26;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_STATE_VARIABLE_Succeeded_0_26 = STATE_VARIABLE_Succeeded_1_38;
      next_value_of_STATE_VARIABLE_Info_0_28 = STATE_VARIABLE_Info_1_34;
      STATE_VARIABLE_Succeeded_0_26 = next_value_of_STATE_VARIABLE_Succeeded_0_26;
      STATE_VARIABLE_Info_0_28 = next_value_of_STATE_VARIABLE_Info_0_28;
      continue;
    }
    else
    {
      *STATE_VARIABLE_Info_29 = STATE_VARIABLE_Info_0_28;
      *STATE_VARIABLE_Succeeded_27 = STATE_VARIABLE_Succeeded_0_26;
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
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "\n");
}

void MR_CALL 
make__build__with_locked_stdout_4_p_0(
  MR_Word Info_5,
  MR_Word Pred_6)
{
  MR_Word MaybeLock_8;

  MaybeLock_8 = make__make_info__make_info_get_maybe_stdout_lock_1_f_0(Info_5);
  if ((MaybeLock_8 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_6, 1))));
    MR_Box conv1_STATE_VARIABLE_IO_11;

    func_0(((MR_Box) (Pred_6)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_11);
  }
  else
  {
    MR_Box Lock_9 = ((MR_Box) ((MR_hl_field(1, MaybeLock_8, 0))));
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box *);
    MR_Box conv3_STATE_VARIABLE_IO_2_13;

    make__build__lock_stdout_3_p_0(Lock_9);
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_6, 1))));
    func_2(((MR_Box) (Pred_6)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_2_13);
    make__build__unlock_stdout_3_p_0(Lock_9);
  }
}

void MR_CALL 
make__build__foldl2_make_module_targets_maybe_parallel_build2_10_p_0(
  MR_Word KeepGoing_11,
  MR_Word ExtraOpts_12,
  MR_Word Globals_13,
  MR_Word Targets_14,
  MR_Word ProgressStream_15,
  MR_Word * Succeeded_16,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20)
{
  make__build__foldl2_make_module_targets_maybe_parallel_10_p_0(KeepGoing_11, ExtraOpts_12, ProgressStream_15, Globals_13, Targets_14, Succeeded_16, STATE_VARIABLE_Info_0_19, STATE_VARIABLE_Info_20);
}

static void MR_CALL 
make__build__foldl2_make_module_targets_maybe_parallel_10_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_STATE_VARIABLE_Succeeded_11;

  make__build__reap_worker_process_5_p_0(((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_STATE_VARIABLE_Succeeded_11);
  *wrapper_arg_3 = ((MR_Box) (conv7_STATE_VARIABLE_Succeeded_11));
}

static void MR_CALL 
make__build__foldl2_make_module_targets_maybe_parallel_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_HeadVar__4_62;

  make__build__IntroducedFrom__pred__foldl2_maybe_stop_at_error_parallel_processes__485__1_6_p_0(((MR_Box) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv5_HeadVar__4_62);
  *wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__4_62));
}

static void MR_CALL 
make__build__foldl2_make_module_targets_maybe_parallel_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__11_53;

  make__build__IntroducedFrom__pred__foldl2_maybe_stop_at_error_parallel_processes__478__1_13_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Box) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), ((MR_Word) ((MR_hl_field(0, closure, 8)))), ((MR_Word) ((MR_hl_field(0, closure, 9)))), ((MR_Word) ((MR_hl_field(0, closure, 10)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_HeadVar__11_53);
  *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__11_53));
}

static void MR_CALL 
make__build__foldl2_make_module_targets_maybe_parallel_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__5_5;
  MR_Word conv0_HeadVar__7_7;

  make__module_target__make_module_target_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_HeadVar__5_5, ((MR_Word) (wrapper_arg_5)), &conv0_HeadVar__7_7);
  *wrapper_arg_4 = ((MR_Box) (conv1_HeadVar__5_5));
  *wrapper_arg_6 = ((MR_Box) (conv0_HeadVar__7_7));
}

void MR_CALL 
make__build__foldl2_make_module_targets_maybe_parallel_10_p_0(
  MR_Word KeepGoing_11,
  MR_Word ExtraOpts_12,
  MR_Word ProgressStream_13,
  MR_Word Globals_14,
  MR_Word Targets_15,
  MR_Word * Succeeded_16,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26)
{
  MR_bool succeeded;
  MR_Integer MaxNumJobs_37;

  libs__globals__lookup_int_option_3_p_0(Globals_14, (MR_Integer) 467, &MaxNumJobs_37);
  succeeded = (MaxNumJobs_37 > (MR_Integer) 1);
  if (succeeded)
  {
    succeeded = libs__process_util__can_fork_0_p_0();
    if (succeeded)
      succeeded = make__build__have_job_ctl_ipc_0_p_0();
  }
  if (succeeded)
  {
    MR_Integer TotalTasks_38;
    MR_Word MaybeJobCtl_39;

    TotalTasks_38 = mercury__list__length_1_f_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_id_0), Targets_15);
    make__build__create_job_ctl_4_p_0(TotalTasks_38, &MaybeJobCtl_39);
    if ((MaybeJobCtl_39 == (MR_Word) ((MR_Unsigned) 0U)))
      make__build__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_108_111_111_112_95_95_104_111_50_95_95_91_51_93_95_48_11_p_0(ExtraOpts_12, KeepGoing_11, ProgressStream_13, Globals_14, Targets_15, (MR_Integer) 1, Succeeded_16, STATE_VARIABLE_Info_0_25, STATE_VARIABLE_Info_26);
    else
    {
      MR_Box JobCtl_21 = ((MR_Box) ((MR_hl_field(1, MaybeJobCtl_39, 0))));
      MR_Word MakeTarget_22;
      MR_Word Succeeded0_23;
      MR_Word STATE_VARIABLE_Info_1_31;
      MR_Word Pids_49;
      MR_Word VeryVerbose_50;
      MR_Box Cookie_51;
      MR_Word Succeeded0_52;
      MR_Word Cleanup_53;
      MR_Word Succeeded1_54;
      MR_Word STATE_VARIABLE_Info_1_56;
      MR_Word Var_57;
      MR_Word Var_58;
      MR_Word STATE_VARIABLE_Info_2_65;
      MR_Word STATE_VARIABLE_Info_3_67;
      MR_Box conv4_Pids_49;
      MR_Box conv3_STATE_VARIABLE_IO_1_60;
      MR_Box conv6_STATE_VARIABLE_Info_3_67;
      MR_Box conv9_Succeeded0_23;
      MR_Box conv8_STATE_VARIABLE_IO_5_70;

      {
        MakeTarget_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, MakeTarget_22, 0) = ((MR_Box) (&make__build_scalar_common_4[0]));
        MR_hl_field(0, MakeTarget_22, 1) = ((MR_Box) (make__build__foldl2_make_module_targets_maybe_parallel_10_p_0_1));
        MR_hl_field(0, MakeTarget_22, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, MakeTarget_22, 3) = ((MR_Box) (ExtraOpts_12));
      }
      make__make_info__make_info_set_maybe_stdout_lock_3_p_0(MaybeJobCtl_39, STATE_VARIABLE_Info_0_25, &STATE_VARIABLE_Info_1_56);
      {
        Var_57 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_57, 0) = ((MR_Box) (&make__build_scalar_common_6[0]));
        MR_hl_field(0, Var_57, 1) = ((MR_Box) (make__build__foldl2_make_module_targets_maybe_parallel_10_p_0_2));
        MR_hl_field(0, Var_57, 2) = ((MR_Box) ((MR_Integer) 8));
        MR_hl_field(0, Var_57, 3) = ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_target_id_0));
        MR_hl_field(0, Var_57, 4) = ((MR_Box) (KeepGoing_11));
        MR_hl_field(0, Var_57, 5) = ((MR_Box) (JobCtl_21));
        MR_hl_field(0, Var_57, 6) = ((MR_Box) (MakeTarget_22));
        MR_hl_field(0, Var_57, 7) = ((MR_Box) (ProgressStream_13));
        MR_hl_field(0, Var_57, 8) = ((MR_Box) (Globals_14));
        MR_hl_field(0, Var_57, 9) = ((MR_Box) (Targets_15));
        MR_hl_field(0, Var_57, 10) = ((MR_Box) (STATE_VARIABLE_Info_1_56));
      }
      Var_58 = mercury__list__f_46_46_2_f_0((MR_Integer) 2, MaxNumJobs_37);
      mercury__list__foldl2_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&make__build_scalar_common_1[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_57, Var_58, ((MR_Box) ((MR_Unsigned) 0U)), &conv4_Pids_49, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_1_60);
      Pids_49 = ((MR_Word) (conv4_Pids_49));
      libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 132, &VeryVerbose_50);
      libs__process_util__setup_checking_for_interrupt_3_p_0(&Cookie_51);
      make__build__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_111_114_107_101_114_95_108_111_111_112_95_95_104_111_54_95_95_91_53_93_95_48_12_p_0(ExtraOpts_12, ProgressStream_13, Globals_14, KeepGoing_11, Targets_15, JobCtl_21, (MR_Integer) 1, &Succeeded0_52, STATE_VARIABLE_Info_1_56, &STATE_VARIABLE_Info_2_65);
      {
        Cleanup_53 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Cleanup_53, 0) = ((MR_Box) (&make__build_scalar_common_7[0]));
        MR_hl_field(0, Cleanup_53, 1) = ((MR_Box) (make__build__foldl2_make_module_targets_maybe_parallel_10_p_0_3));
        MR_hl_field(0, Cleanup_53, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Cleanup_53, 3) = ((MR_Box) (JobCtl_21));
        MR_hl_field(0, Cleanup_53, 4) = ((MR_Box) (Pids_49));
      }
      libs__process_util__teardown_checking_for_interrupt_9_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), VeryVerbose_50, Cookie_51, Cleanup_53, Succeeded0_52, &Succeeded1_54, ((MR_Box) (STATE_VARIABLE_Info_2_65)), &conv6_STATE_VARIABLE_Info_3_67);
      STATE_VARIABLE_Info_3_67 = ((MR_Word) (conv6_STATE_VARIABLE_Info_3_67));
      mercury__list__foldl2_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&make__build_scalar_common_9[0]), Pids_49, ((MR_Box) (Succeeded1_54)), &conv9_Succeeded0_23, ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_IO_5_70);
      Succeeded0_23 = ((MR_Word) (conv9_Succeeded0_23));
      make__make_info__make_info_set_maybe_stdout_lock_3_p_0((MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Info_3_67, &STATE_VARIABLE_Info_1_31);
      make__build__destroy_job_ctl_3_p_0(JobCtl_21);
      switch (Succeeded0_23) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *Succeeded_16 = (MR_Integer) 0;
            *STATE_VARIABLE_Info_26 = STATE_VARIABLE_Info_1_31;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word NoRebuildGlobals_24;

            libs__globals__set_option_4_p_0((MR_Integer) 24, (MR_Word) (MR_mkword(1, &make__build_scalar_common_2[0])), Globals_14, &NoRebuildGlobals_24);
            make__build__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_108_111_111_112_95_95_104_111_50_95_95_91_51_93_95_48_11_p_0(ExtraOpts_12, KeepGoing_11, ProgressStream_13, NoRebuildGlobals_24, Targets_15, (MR_Integer) 1, Succeeded_16, STATE_VARIABLE_Info_1_31, STATE_VARIABLE_Info_26);
          }
          break;
      }
    }
  }
  else
    make__build__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_108_111_111_112_95_95_104_111_50_95_95_91_51_93_95_48_11_p_0(ExtraOpts_12, KeepGoing_11, ProgressStream_13, Globals_14, Targets_15, (MR_Integer) 1, Succeeded_16, STATE_VARIABLE_Info_0_25, STATE_VARIABLE_Info_26);
}

static void MR_CALL 
make__build__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_111_114_107_101_114_95_108_111_111_112_95_95_104_111_54_95_95_91_53_93_95_48_12_p_0(
  MR_Word Var_41,
  MR_Word ProgressStream_13,
  MR_Word Globals_14,
  MR_Word KeepGoing_15,
  MR_Word Targets_17,
  MR_Box JobCtl_18,
  MR_Word STATE_VARIABLE_Succeeded_0_26,
  MR_Word * STATE_VARIABLE_Succeeded_27,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer TaskNumber_22;

    // setup for model_det tailcalls optimized into a loop
    ;
    make__build__accept_task_4_p_0(JobCtl_18, &TaskNumber_22);
    succeeded = (TaskNumber_22 >= (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word Target_23;
      MR_Word TargetSucceeded_24;
      MR_Word STATE_VARIABLE_Info_1_34;
      MR_Word STATE_VARIABLE_Succeeded_1_38;
      MR_Box conv0_Target_23;
      MR_Word next_value_of_STATE_VARIABLE_Succeeded_0_26;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_28;

      conv0_Target_23 = mercury__list__det_index0_2_f_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_id_0), Targets_17, TaskNumber_22);
      Target_23 = ((MR_Word) (conv0_Target_23));
      make__module_target__make_module_target_9_p_0(Var_41, ProgressStream_13, Globals_14, Target_23, &TargetSucceeded_24, STATE_VARIABLE_Info_0_28, &STATE_VARIABLE_Info_1_34);
      switch (TargetSucceeded_24) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word KeepGoingBool_25;

            succeeded = (KeepGoing_15 == (MR_Integer) 1);
            if (succeeded)
              KeepGoingBool_25 = (MR_Integer) 1;
            else
              KeepGoingBool_25 = (MR_Integer) 0;
            make__build__mark_task_error_5_p_0(JobCtl_18, TaskNumber_22, KeepGoingBool_25);
            STATE_VARIABLE_Succeeded_1_38 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 1:
          {
            make__build__mark_task_done_4_p_0(JobCtl_18, TaskNumber_22);
            STATE_VARIABLE_Succeeded_1_38 = STATE_VARIABLE_Succeeded_0_26;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_STATE_VARIABLE_Succeeded_0_26 = STATE_VARIABLE_Succeeded_1_38;
      next_value_of_STATE_VARIABLE_Info_0_28 = STATE_VARIABLE_Info_1_34;
      STATE_VARIABLE_Succeeded_0_26 = next_value_of_STATE_VARIABLE_Succeeded_0_26;
      STATE_VARIABLE_Info_0_28 = next_value_of_STATE_VARIABLE_Info_0_28;
      continue;
    }
    else
    {
      *STATE_VARIABLE_Info_29 = STATE_VARIABLE_Info_0_28;
      *STATE_VARIABLE_Succeeded_27 = STATE_VARIABLE_Succeeded_0_26;
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
make__build__foldl2_make_module_targets_10_p_0(
  MR_Word KeepGoing_11,
  MR_Word ExtraOptions_12,
  MR_Word ProgressStream_13,
  MR_Word Globals_14,
  MR_Word Targets_15,
  MR_Word * Succeeded_16,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20)
{
  make__build__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_108_111_111_112_95_95_104_111_50_95_95_91_51_93_95_48_11_p_0(ExtraOptions_12, KeepGoing_11, ProgressStream_13, Globals_14, Targets_15, (MR_Integer) 1, Succeeded_16, STATE_VARIABLE_Info_0_19, STATE_VARIABLE_Info_20);
}

static void MR_CALL 
make__build__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_108_111_111_112_95_95_104_111_50_95_95_91_51_93_95_48_11_p_0(
  MR_Word Var_48,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_Succeeded_0_6,
  MR_Word * STATE_VARIABLE_Succeeded_7,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Info_9 = STATE_VARIABLE_Info_0_8;
      *STATE_VARIABLE_Succeeded_7 = STATE_VARIABLE_Succeeded_0_6;
    }
    else
    {
      MR_Word Target_29 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 0))));
      MR_Word Targets_30 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
      MR_Word NewSucceeded_34;
      MR_Word StopOrContinue_35;
      MR_Word STATE_VARIABLE_Info_1_42;
      MR_Word STATE_VARIABLE_Succeeded_1_44;

      make__module_target__make_module_target_9_p_0(Var_48, HeadVar__3_3, HeadVar__4_4, Target_29, &NewSucceeded_34, STATE_VARIABLE_Info_0_8, &STATE_VARIABLE_Info_1_42);
      make__util__should_we_stop_or_continue_5_p_0(HeadVar__1_1, NewSucceeded_34, &StopOrContinue_35, STATE_VARIABLE_Succeeded_0_6, &STATE_VARIABLE_Succeeded_1_44);
      switch (StopOrContinue_35) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word next_value_of_HeadVar__5_5 = Targets_30;
            MR_Word next_value_of_STATE_VARIABLE_Succeeded_0_6 = STATE_VARIABLE_Succeeded_1_44;
            MR_Word next_value_of_STATE_VARIABLE_Info_0_8 = STATE_VARIABLE_Info_1_42;

            // direct tailcall eliminated
            ;
            HeadVar__5_5 = next_value_of_HeadVar__5_5;
            STATE_VARIABLE_Succeeded_0_6 = next_value_of_STATE_VARIABLE_Succeeded_0_6;
            STATE_VARIABLE_Info_0_8 = next_value_of_STATE_VARIABLE_Info_0_8;
            continue;
          }
          break;
        case (MR_Integer) 0:
          {
            *STATE_VARIABLE_Succeeded_7 = STATE_VARIABLE_Succeeded_1_44;
            *STATE_VARIABLE_Info_9 = STATE_VARIABLE_Info_1_42;
          }
          break;
      }
    }
    break;
  }
}

void MR_CALL 
make__build__close_module_error_stream_handle_errors_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Globals_9,
  MR_Word MESI_10,
  MR_Word ErrorOutputStream_11,
  MR_Word Info_12)
{
  MR_String ErrorFileName_14;
  MR_Word ErrorLinesResult_15;

  mercury__io__close_output_3_p_0(ErrorOutputStream_11);
  ErrorFileName_14 = (MR_String) (MESI_10);
  mercury__io__read_named_file_as_lines_4_p_0(ErrorFileName_14, &ErrorLinesResult_15);
  if (((MR_tag((MR_Word) ErrorLinesResult_15)) == (MR_Integer) 1))
  {
    MR_Word Error_18 = ((MR_Word) ((MR_hl_field(1, ErrorLinesResult_15, 0))));
    MR_Word MaybeLock_27;

    MaybeLock_27 = make__make_info__make_info_get_maybe_stdout_lock_1_f_0(Info_12);
    if ((MaybeLock_27 == (MR_Word) ((MR_Unsigned) 0U)))
      make__build__write_error_opening_file_5_p_0(ProgressStream_8, ErrorFileName_14, Error_18);
    else
    {
      MR_Box Lock_28 = ((MR_Box) ((MR_hl_field(1, MaybeLock_27, 0))));

      make__build__lock_stdout_3_p_0(Lock_28);
      make__build__write_error_opening_file_5_p_0(ProgressStream_8, ErrorFileName_14, Error_18);
      make__build__unlock_stdout_3_p_0(Lock_28);
    }
  }
  else
  {
    MR_Word ErrorLines_16 = ((MR_Word) ((MR_hl_field(0, ErrorLinesResult_15, 0))));
    MR_Word MaybeLinesToWrite_17;
    MR_Word MaybeLock_31;

    libs__globals__lookup_maybe_int_option_3_p_0(Globals_9, (MR_Integer) 135, &MaybeLinesToWrite_17);
    MaybeLock_31 = make__make_info__make_info_get_maybe_stdout_lock_1_f_0(Info_12);
    if ((MaybeLock_31 == (MR_Word) ((MR_Unsigned) 0U)))
      make__build__copy_selected_output_lines_6_p_0(ErrorLines_16, MaybeLinesToWrite_17, ErrorFileName_14, ProgressStream_8);
    else
    {
      MR_Box Lock_32 = ((MR_Box) ((MR_hl_field(1, MaybeLock_31, 0))));

      make__build__lock_stdout_3_p_0(Lock_32);
      make__build__copy_selected_output_lines_6_p_0(ErrorLines_16, MaybeLinesToWrite_17, ErrorFileName_14, ProgressStream_8);
      make__build__unlock_stdout_3_p_0(Lock_32);
    }
  }
}

static void MR_CALL 
make__build__write_error_opening_file_5_p_0(
  MR_Word ProgressStream_6,
  MR_String FileName_7,
  MR_Word Error_8)
{
  MR_String Var_18;

  Var_18 = mercury__io__error_message_1_f_0(Error_8);
  mercury__io__write_string_4_p_0(ProgressStream_6, (MR_String) "Error opening \140");
  mercury__io__write_string_4_p_0(ProgressStream_6, FileName_7);
  mercury__io__write_string_4_p_0(ProgressStream_6, (MR_String) "\': ");
  mercury__io__write_string_4_p_0(ProgressStream_6, Var_18);
  mercury__io__write_string_4_p_0(ProgressStream_6, (MR_String) "\n");
}

static void MR_CALL 
make__build__copy_selected_output_lines_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  make__build__write_line_nl_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) (wrapper_arg_1)));
}

static void MR_CALL 
make__build__copy_selected_output_lines_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  make__build__write_line_nl_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) (wrapper_arg_1)));
}

static void MR_CALL 
make__build__copy_selected_output_lines_6_p_0(
  MR_Word InputLines_7,
  MR_Word MaybeLinesToWrite_8,
  MR_String ErrorFileName_9,
  MR_Word PartialOutputStream_10)
{
  if ((MaybeLinesToWrite_8 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_19;
    MR_Box conv0_STATE_VARIABLE_IO_18;

    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_19, 0) = ((MR_Box) (&make__build_scalar_common_3[0]));
      MR_hl_field(0, Var_19, 1) = ((MR_Box) (make__build__copy_selected_output_lines_6_p_0_1));
      MR_hl_field(0, Var_19, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_19, 3) = ((MR_Box) (PartialOutputStream_10));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_19, InputLines_7, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_18);
  }
  else
  {
    MR_Integer LinesToWrite_12 = ((MR_Integer) ((MR_hl_field(1, MaybeLinesToWrite_8, 0))));
    MR_Word InputLinesToWrite_13;
    MR_Word InputLinesNotToWrite_14;
    MR_Word Var_21;
    MR_Box conv1_STATE_VARIABLE_IO_2_22;

    mercury__list__split_upto_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), LinesToWrite_12, InputLines_7, &InputLinesToWrite_13, &InputLinesNotToWrite_14);
    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_21, 0) = ((MR_Box) (&make__build_scalar_common_3[0]));
      MR_hl_field(0, Var_21, 1) = ((MR_Box) (make__build__copy_selected_output_lines_6_p_0_2));
      MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_21, 3) = ((MR_Box) (PartialOutputStream_10));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_21, InputLinesToWrite_13, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_2_22);
    if (!((InputLinesNotToWrite_14 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      mercury__io__write_string_4_p_0(PartialOutputStream_10, (MR_String) "... output log truncated, see \140");
      mercury__io__write_string_4_p_0(PartialOutputStream_10, ErrorFileName_9);
      mercury__io__write_string_4_p_0(PartialOutputStream_10, (MR_String) "\' for the complete log.\n");
    }
  }
}

void MR_CALL 
make__build__open_module_error_stream_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Globals_9,
  MR_Word Info_10,
  MR_Word ModuleName_11,
  MR_Word * MaybeErrorStream_12)
{
  MR_String ErrorFileName_14;
  MR_Word ErrorFileResult_16;
  MR_String _ErrorFileNameProposed_15;

  parse_tree__file_names__module_name_to_file_name_create_dirs_8_p_0(Globals_9, (MR_String) "predicate \140make.build.open_module_error_stream\'/7", (MR_Word) (MR_mkword(3, &make__build_scalar_common_1[5])), ModuleName_11, &ErrorFileName_14, &_ErrorFileNameProposed_15);
  mercury__io__open_output_4_p_0(ErrorFileName_14, &ErrorFileResult_16);
  if (((MR_tag((MR_Word) ErrorFileResult_16)) == (MR_Integer) 1))
  {
    MR_Word ErrorMsg_19 = ((MR_Word) ((MR_hl_field(1, ErrorFileResult_16, 0))));
    MR_String ErrorMsgStr_20;
    MR_Word MaybeLock_29;

    mercury__io__error_message_2_p_0(ErrorMsg_19, &ErrorMsgStr_20);
    MaybeLock_29 = make__make_info__make_info_get_maybe_stdout_lock_1_f_0(Info_10);
    if ((MaybeLock_29 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_String Var_33;

      Var_33 = mercury__string__f_43_43_2_f_0(ErrorMsgStr_20, (MR_String) "\n");
      mercury__io__write_string_4_p_0(ProgressStream_8, Var_33);
    }
    else
    {
      MR_Box Lock_30 = ((MR_Box) ((MR_hl_field(1, MaybeLock_29, 0))));
      MR_String Var_35;

      make__build__lock_stdout_3_p_0(Lock_30);
      Var_35 = mercury__string__f_43_43_2_f_0(ErrorMsgStr_20, (MR_String) "\n");
      mercury__io__write_string_4_p_0(ProgressStream_8, Var_35);
      make__build__unlock_stdout_3_p_0(Lock_30);
    }
    *MaybeErrorStream_12 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word ErrFileStream_17 = ((MR_Word) ((MR_hl_field(0, ErrorFileResult_16, 0))));
    MR_Word MESI_18 = (MR_Word) (ErrorFileName_14);

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *MaybeErrorStream_12 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (MESI_18));
      MR_hl_field(1, base, 1) = ((MR_Box) (ErrFileStream_17));
    }
  }
}

void MR_CALL 
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

void MR_CALL 
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
make__build__setup_for_build_with_module_options_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word DefaultOptionTable_12,
  MR_Word MaybeStdLibGrades_13,
  MR_Word InvokedByMmcMake_14,
  MR_Word ModuleName_15,
  MR_Word Params_16,
  MR_Word ExtraOptions_17,
  MR_Word * MayBuild_18)
{
  MR_Word EnvOptFileVariables_20 = ((MR_Word) ((MR_hl_field(0, Params_16, 0))));
  MR_Word EnvVarArgs_21 = ((MR_Word) ((MR_hl_field(0, Params_16, 1))));
  MR_Word OptionArgs_22 = ((MR_Word) ((MR_hl_field(0, Params_16, 2))));
  MR_Word MaybeModuleOptionArgs_23;

  make__options_file__lookup_mmc_module_options_3_p_0(EnvOptFileVariables_20, ModuleName_15, &MaybeModuleOptionArgs_23);
  if (((MR_tag((MR_Word) MaybeModuleOptionArgs_23)) == (MR_Integer) 0))
  {
    MR_Word LookupSpecs_24 = ((MR_Word) ((MR_hl_field(0, MaybeModuleOptionArgs_23, 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MayBuild_18 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (LookupSpecs_24));
    }
  }
  else
  {
    MR_Word ModuleOptionArgs_25 = ((MR_Word) ((MR_hl_field(1, MaybeModuleOptionArgs_23, 0))));
    MR_Word UseSubdirsFlags_26;
    MR_Word InvokedByMakeFlags_27;
    MR_Word AllOptionArgs_28;
    MR_Word MaybeEnvOptFileStdLibDirs_29;
    MR_Word OptionSpecs_32;
    MR_Word BuildGlobals_33;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_30;
    MR_Word Var_31;

    switch (InvokedByMmcMake_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          UseSubdirsFlags_26 = (MR_Word) (MR_mkword(1, &make__build_scalar_common_1[3]));
          InvokedByMakeFlags_27 = (MR_Word) (MR_mkword(1, &make__build_scalar_common_1[4]));
        }
        break;
      case (MR_Integer) 0:
        {
          UseSubdirsFlags_26 = (MR_Word) ((MR_Unsigned) 0U);
          InvokedByMakeFlags_27 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
    }
    Var_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExtraOptions_17, UseSubdirsFlags_26);
    Var_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OptionArgs_22, Var_45);
    Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), EnvVarArgs_21, Var_44);
    Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ModuleOptionArgs_25, Var_43);
    AllOptionArgs_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), InvokedByMakeFlags_27, Var_42);
    make__options_file__lookup_mercury_stdlib_dir_2_p_0(EnvOptFileVariables_20, &MaybeEnvOptFileStdLibDirs_29);
    libs__handle_options__handle_given_options_11_p_0(ProgressStream_11, DefaultOptionTable_12, MaybeStdLibGrades_13, MaybeEnvOptFileStdLibDirs_29, AllOptionArgs_28, &Var_30, &Var_31, &OptionSpecs_32, &BuildGlobals_33);
    if ((OptionSpecs_32 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *MayBuild_18 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (AllOptionArgs_28));
        MR_hl_field(1, base, 1) = ((MR_Box) (BuildGlobals_33));
      }
    else
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MayBuild_18 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (OptionSpecs_32));
      }
  }
}

static MR_bool MR_CALL 
make__build____Unify____error_stream_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__build____Unify____error_stream_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__build____Compare____error_stream_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__build____Compare____error_stream_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
make__build____Unify____module_error_stream_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__build____Unify____module_error_stream_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__build____Compare____module_error_stream_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__build____Compare____module_error_stream_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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

  MR_register_type_ctor_info(&make__build__make__build__type_ctor_info_error_stream_result_0);
  MR_register_type_ctor_info(&make__build__make__build__type_ctor_info_foldl2_pred_with_status_3);
  MR_register_type_ctor_info(&make__build__make__build__type_ctor_info_job_ctl_0);
  MR_register_type_ctor_info(&make__build__make__build__type_ctor_info_may_build_0);
  MR_register_type_ctor_info(&make__build__make__build__type_ctor_info_maybe_invoked_by_mmc_make_0);
  MR_register_type_ctor_info(&make__build__make__build__type_ctor_info_module_error_stream_info_0);
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
