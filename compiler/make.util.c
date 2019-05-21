/*
** Automatically generated from `make.util.m'
** by the Mercury compiler,
** version rotd-2017-09-08
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


// :- module make.util.
// :- implementation.

/*
INIT mercury__make__util__init
ENDINIT
*/

#include "make.util.mih"
#include "make.util.mh"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "make.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.compile_target_code.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.handle_options.mih"
#include "libs.lp_rational.mih"
#include "libs.md4.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.process_util.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "make.dependencies.mih"
#include "make.module_dep_file.mih"
#include "make.module_target.mih"
#include "make.options_file.mih"
#include "make.program_target.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "dir.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "require.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "solutions.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "version_hash_table.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_imports.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.mmc_analysis.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"


#line 563 "make.util.m"

#ifdef MR_HAVE_SYS_MMAN_H
  #include <sys/mman.h>

  /* Just in case. */
  #if !defined(MAP_ANONYMOUS) && defined(MAP_ANON)
    #define MAP_ANONYMOUS MAP_ANON
  #endif
#endif

#ifdef MAP_ANONYMOUS
  /*
  ** Darwin 5.x and FreeBSD do not implement process-shared POSIX mutexes.
  ** Use System V semaphores instead. As System V semaphores seem to be more
  ** widely supported we may consider using them exclusively or in preference
  ** to POSIX mutexes in the future.
  */
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
    TASK_NEW,       /* task not yet attempted */
    TASK_ACCEPTED,  /* someone is working on this task */
    TASK_DONE,      /* task successfully completed */
    TASK_ERROR      /* error occurred when working on the task */
};

/* This structure is placed in shared memory. */
struct MC_JobCtl {
    /* Static data. */
    MR_Integer      jc_total_tasks;

    /* Dynamic data.  The mutex protects the rest. */
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

#endif /* MC_HAVE_JOBCTL_IPC */



static const MR_VA_PseudoTypeInfo_Struct7 make__util____vpti_pred_7__plain_libs__globals__type_ctor_info_globals_0__pseudo_1__plain_bool__type_ctor_info_bool_0__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__util__list__pti_list_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 make__util__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

static const MR_VA_PseudoTypeInfo_Struct7 make__util____vpti_pred_7__plain_libs__globals__type_ctor_info_globals_0__pseudo_1__plain_bool__type_ctor_info_bool_0__pseudo_2__pseudo_2__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_VA_PseudoTypeInfo_Struct7 make__util____vpti_pred_7__plain_libs__globals__type_ctor_info_globals_0__pseudo_1__plain_bool__type_ctor_info_bool_0__pseudo_2__pseudo_3__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_VA_PseudoTypeInfo_Struct8 make__util____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__pseudo_1__pseudo_2__plain_bool__type_ctor_info_bool_0__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_VA_PseudoTypeInfo_Struct7 make__util____vpti_pred_7__plain_libs__globals__type_ctor_info_globals_0__pseudo_1__plain_bool__type_ctor_info_bool_0__pseudo_2__pseudo_2__pseudo_3__pseudo_3;

static const MR_VA_PseudoTypeInfo_Struct9 make__util____vpti_pred_9__plain_libs__globals__type_ctor_info_globals_0__pseudo_1__plain_bool__type_ctor_info_bool_0__pseudo_2__pseudo_2__pseudo_3__pseudo_3__pseudo_4__pseudo_4;

static void MR_CALL 
make__util__IntroducedFrom__pred__foldl2_maybe_stop_at_error_parallel_processes__470__1_6_p_0(
  MR_Box JobCtl_21,
  MR_Word Pids_22,
  MR_Word HeadVar__3_104,
  MR_Word * HeadVar__4_105);

static void MR_CALL 
make__util__IntroducedFrom__pred__foldl2_maybe_stop_at_error_parallel_processes__469__1_12_p_0(
  MR_Word TypeInfo_for_T_88,
  MR_Word KeepGoing_11,
  MR_Word MakeTarget_13,
  MR_Word Globals_14,
  MR_Word Targets_15,
  MR_Box JobCtl_21,
  MR_Word HeadVar__7_42,
  MR_Word * HeadVar__8_98,
  MR_Word HeadVar__9_99,
  MR_Word * HeadVar__10_100);

static void MR_CALL 
make__util__IntroducedFrom__pred__foldl2_maybe_stop_at_error_parallel_processes__464__1_12_p_0(
  MR_Word TypeInfo_for_T_88,
  MR_Word KeepGoing_11,
  MR_Word MakeTarget_13,
  MR_Word Globals_14,
  MR_Word Targets_15,
  MR_Box JobCtl_21,
  MR_Word STATE_VARIABLE_Info_30_30,
  MR_Integer HeadVar__8_89,
  MR_Word HeadVar__9_90,
  MR_Word * HeadVar__10_91);

static void MR_CALL 
make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_112_97_114_97_108_108_101_108_95_112_114_111_99_101_115_115_101_115_95_95_52_54_52_95_95_49_95_95_91_56_93_95_48_12_p_0(
  MR_Word TypeInfo_for_T_88,
  MR_Word KeepGoing_11,
  MR_Word MakeTarget_13,
  MR_Word Globals_14,
  MR_Word Targets_15,
  MR_Box JobCtl_21,
  MR_Word STATE_VARIABLE_Info_30_30,
  MR_Word HeadVar__9_90,
  MR_Word * HeadVar__10_91);

static void MR_CALL 
make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_95_119_111_114_107_101_114_95_112_114_111_99_101_115_115_95_95_91_57_93_95_48_11_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_95_119_111_114_107_101_114_95_112_114_111_99_101_115_115_95_95_91_57_93_95_48_11_p_0(
  MR_Word TypeInfo_for_T_30,
  MR_Word TypeInfo_for_Info_31,
  MR_Word Globals_12,
  MR_Word KeepGoing_13,
  MR_Word MakeTarget_14,
  MR_Word Targets_15,
  MR_Box JobCtl_16,
  MR_Box Info_17,
  MR_Word STATE_VARIABLE_Pids_0_23,
  MR_Word * STATE_VARIABLE_Pids_24);

static MR_Word MR_CALL 
make__util__IntroducedFrom__func__make_dependency_list__1462__1_2_f_0(
  MR_Word FileType_5,
  MR_Word LambdaHeadVar__1_8);

static MR_Word MR_CALL 
make__util__IntroducedFrom__func__make_target_file_list__1458__1_2_f_0(
  MR_Word FileType_5,
  MR_Word LambdaHeadVar__1_8);

static void MR_CALL 
make__util__make_write_error_char_7_p_0(
  MR_Word FullOutputStream_8,
  MR_Word PartialOutputStream_9,
  MR_Char Char_10,
  MR_Integer STATE_VARIABLE_LinesRemaining_0_14,
  MR_Integer * STATE_VARIABLE_LinesRemaining_15);

static MR_Word MR_CALL 
make__util__make_no_job_ctl_0_f_0(void);

static MR_Word MR_CALL 
make__util__make_yes_job_ctl_1_f_0(
  MR_Box JobCtl_3);

static void MR_CALL 
make__util__reap_worker_process_5_p_0(
  MR_Integer Pid_6,
  MR_Word STATE_VARIABLE_Success_0_10,
  MR_Word * STATE_VARIABLE_Success_11);

static void MR_CALL 
make__util__worker_loop_signal_cleanup_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__util__worker_loop_signal_cleanup_6_p_0(
  MR_Word TypeInfo_for_Info_19,
  MR_Box JobCtl_7,
  MR_Word Pids_8,
  MR_Box STATE_VARIABLE_Info_0_11,
  MR_Box * STATE_VARIABLE_Info_12);

static void MR_CALL 
make__util__mark_abort_3_p_0(
  MR_Box JobCtl_1);

static void MR_CALL 
make__util__worker_loop_11_p_0(
  MR_Word TypeInfo_for_T_39,
  MR_Word TypeInfo_for_Info_40,
  MR_Word Globals_12,
  MR_Word KeepGoing_13,
  MR_Word MakeTarget_14,
  MR_Word Targets_15,
  MR_Box JobCtl_16,
  MR_Word STATE_VARIABLE_Success_0_23,
  MR_Word * STATE_VARIABLE_Success_24,
  MR_Box STATE_VARIABLE_Info_0_25,
  MR_Box * STATE_VARIABLE_Info_26);

static void MR_CALL 
make__util__mark_task_error_5_p_0(
  MR_Box JobCtl_1,
  MR_Integer TaskNumber_2,
  MR_Word KeepGoing_3);

static void MR_CALL 
make__util__mark_task_done_4_p_0(
  MR_Box JobCtl_1,
  MR_Integer TaskNumber_2);

static void MR_CALL 
make__util__accept_task_4_p_0(
  MR_Box JobCtl_1,
  MR_Integer * TaskNumber_2);

static void MR_CALL 
make__util__child_worker_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__util__child_worker_9_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__util__child_worker_9_p_0(
  MR_Word TypeInfo_for_T_28,
  MR_Word TypeInfo_for_Info_29,
  MR_Word Globals_10,
  MR_Word KeepGoing_11,
  MR_Word MakeTarget_12,
  MR_Word Targets_13,
  MR_Box JobCtl_14,
  MR_Box Info0_15,
  MR_Word * Success_16);

static void MR_CALL 
make__util__IntroducedFrom__pred__maybe_symlink_or_copy_linked_target_message__1852__1_4_p_0(
  MR_Word Globals_5,
  MR_Word Target_6);

static void MR_CALL 
make__util__make_write_module_or_linked_target_4_p_0(
  MR_Word Globals_5,
  MR_Word HeadVar__2_2);

static MR_Box MR_CALL 
make__util__make_dependency_list_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
make__util__make_target_file_list_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__util__get_target_timestamp_analysis_registry_9_p_0(
  MR_Word Globals_10,
  MR_Word Search_11,
  MR_Word TargetFile_12,
  MR_String FileName_13,
  MR_Word * MaybeTimestamp_14,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22);

static void MR_CALL 
make__util__get_target_timestamp_2_9_p_0(
  MR_Word Globals_10,
  MR_Word Search_11,
  MR_Word TargetFile_12,
  MR_String FileName_13,
  MR_Word * MaybeTimestamp_14,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25);

static void MR_CALL 
make__util__get_search_directories_3_p_0(
  MR_Word Globals_4,
  MR_Word FileType_5,
  MR_Word * SearchDirs_6);

static void MR_CALL 
make__util__module_name_to_search_file_name_cache_8_p_0(
  MR_Word Globals_9,
  MR_String Ext_10,
  MR_Word ModuleName_11,
  MR_String * FileName_12,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18);

static void MR_CALL 
make__util__module_target_to_file_name_maybe_search_8_p_0(
  MR_Word Globals_9,
  MR_Word Search_10,
  MR_Word MkDir_11,
  MR_Word TargetType_12,
  MR_Word ModuleName_13,
  MR_String * FileName_14);

static void MR_CALL 
make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_95_104_111_49_48_95_95_91_54_93_95_48_9_p_0(
  MR_Word Var_86,
  MR_Word Var_87,
  MR_Word Globals_10,
  MR_Word ModuleName_11,
  MR_Word ExtraOptions_12,
  MR_Word * Succeeded_14,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19);

static void MR_CALL 
make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_97_114_103_115_95_105_110_118_111_107_101_100_95_95_104_111_49_52_95_95_91_49_48_93_95_48_13_p_0(
  MR_Word Var_55,
  MR_Word Var_56,
  MR_Word Globals_14,
  MR_Word InvokedByMmcMake_15,
  MR_Word ModuleName_16,
  MR_Word DetectedGradeFlags_17,
  MR_Word OptionVariables_18,
  MR_Word OptionArgs_19,
  MR_Word ExtraOptions_20,
  MR_Word * Succeeded_22,
  MR_Word Info0_23,
  MR_Word * MaybeInfo_24);

static void MR_CALL 
make__util__build_with_module_options_and_output_redirect_2_9_p_0(
  MR_Word ModuleName_10,
  MR_Word Build_11,
  MR_Word Globals_12,
  MR_Word AllOptions_13,
  MR_Word * Succeeded_14,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18);

static void MR_CALL 
make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_105_116_104_95_108_111_99_107_101_100_95_115_116_100_111_117_116_95_95_104_111_49_50_95_95_91_52_93_95_48_4_p_0(
  MR_String Var_35,
  MR_Word Var_36,
  MR_Word Info_5);

static void MR_CALL 
make__util__write_error_opening_file_4_p_0(
  MR_String FileName_5,
  MR_Word Error_6);

static void MR_CALL 
make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_105_116_104_95_108_111_99_107_101_100_95_115_116_100_111_117_116_95_95_104_111_49_49_95_95_91_55_93_95_48_4_p_0(
  MR_String Var_35,
  MR_Word Var_36,
  MR_Word Var_37,
  MR_Word Var_38,
  MR_Integer Var_39,
  MR_Word Info_5);

static void MR_CALL 
make__util__make_write_error_streams_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__util__make_write_error_streams_7_p_0(
  MR_String FileName_8,
  MR_Word InputStream_9,
  MR_Word FullOutputStream_10,
  MR_Word PartialOutputStream_11,
  MR_Integer LinesToWrite_12);

static void MR_CALL 
make__util__unlock_stdout_3_p_0(
  MR_Box JobCtl_1);

static void MR_CALL 
make__util__lock_stdout_3_p_0(
  MR_Box JobCtl_1);

static void MR_CALL 
make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_97_114_103_115_95_105_110_118_111_107_101_100_95_95_91_49_44_32_50_93_95_48_13_p_0(
  MR_Word Globals_14,
  MR_Word InvokedByMmcMake_15,
  MR_Word ModuleName_16,
  MR_Word DetectedGradeFlags_17,
  MR_Word OptionVariables_18,
  MR_Word OptionArgs_19,
  MR_Word ExtraOptions_20,
  MR_Word Build_21,
  MR_Word * Succeeded_22,
  MR_Box Info0_23,
  MR_Word * MaybeInfo_24);

static MR_bool MR_CALL 
make__util__have_job_ctl_ipc_0_p_0(void);

static void MR_CALL 
make__util__foldl2_maybe_stop_at_error_parallel_processes_10_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__util__foldl2_maybe_stop_at_error_parallel_processes_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__util__foldl2_maybe_stop_at_error_parallel_processes_10_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__util__foldl2_maybe_stop_at_error_parallel_processes_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__util__foldl2_maybe_stop_at_error_parallel_processes_10_p_0(
  MR_Word TypeInfo_for_T_88,
  MR_Word KeepGoing_11,
  MR_Integer Jobs_12,
  MR_Word MakeTarget_13,
  MR_Word Globals_14,
  MR_Word Targets_15,
  MR_Word * Success_16,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26);

static void MR_CALL 
make__util__destroy_job_ctl_3_p_0(
  MR_Box JobCtl_1);

static void MR_CALL 
make__util__create_job_ctl_4_p_0(
  MR_Integer TotalJobs_1,
  MR_Word * MaybeJobCtl_2);

static void MR_CALL 
make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_50_95_95_91_49_44_32_50_44_32_51_44_32_52_93_95_48_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Success_0_5,
  MR_Word * STATE_VARIABLE_Success_6,
  MR_Box STATE_VARIABLE_Acc_0_7,
  MR_Box * STATE_VARIABLE_Acc_8,
  MR_Box STATE_VARIABLE_Info_0_9,
  MR_Box * STATE_VARIABLE_Info_10,
  MR_Box STATE_VARIABLE_IO_0_11,
  MR_Box * STATE_VARIABLE_IO_12);

static void MR_CALL 
make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_50_95_95_91_49_44_32_50_44_32_51_93_95_48_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Success_0_5,
  MR_Word * STATE_VARIABLE_Success_6,
  MR_Box STATE_VARIABLE_Info_0_7,
  MR_Box * STATE_VARIABLE_Info_8,
  MR_Box STATE_VARIABLE_IO_0_9,
  MR_Box * STATE_VARIABLE_IO_10);

static MR_bool MR_CALL 
make__util____Unify____build_3_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5);

static void MR_CALL 
make__util____Compare____build_3_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6);

static MR_bool MR_CALL 
make__util____Unify____build_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static void MR_CALL 
make__util____Compare____build_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5);

static MR_bool MR_CALL 
make__util____Unify____build_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
make__util____Compare____build_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
make__util____Unify____build2_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static void MR_CALL 
make__util____Compare____build2_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5);

static MR_bool MR_CALL 
make__util____Unify____foldl2_pred_with_status_3_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5);

static void MR_CALL 
make__util____Compare____foldl2_pred_with_status_3_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6);

static MR_bool MR_CALL 
make__util____Unify____foldl3_pred_with_status_4_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6);

static void MR_CALL 
make__util____Compare____foldl3_pred_with_status_4_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box wrapper_arg_7);

static MR_bool MR_CALL 
make__util____Unify____job_ctl_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__util____Compare____job_ctl_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__util____Unify____stdout_lock_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__util____Compare____stdout_lock_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box make__util_scalar_common_1[4][3];

static /* final */ const MR_Box make__util_scalar_common_2[4][2];

static /* final */ const MR_Integer make__util_scalar_common_3[1][2];

static /* final */ const MR_Box make__util_scalar_common_4[2][15];

static /* final */ const MR_Box make__util_scalar_common_5[1][9];

static /* final */ const MR_Box make__util_scalar_common_6[1][8];

static /* final */ const MR_Box make__util_scalar_common_7[23][1];

static /* final */ const MR_Box make__util_scalar_common_8[2][10];

static /* final */ const MR_Box make__util_scalar_common_9[2][6];

static /* final */ const MR_Integer make__util_scalar_common_10[1][3];

static /* final */ const MR_Box make__util_scalar_common_11[1][16];

static /* final */ const MR_Box make__util_scalar_common_12[1][7];

static /* final */ const MR_Box make__util_scalar_common_13[1][14];




static /* final */ const MR_Box make__util_scalar_common_1[4][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_error_2)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make__type_ctor_info_target_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&make__util_scalar_common_6[0])),
    ((MR_Box) (make__util__foldl2_maybe_stop_at_error_parallel_processes_10_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box make__util_scalar_common_2[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_analysis__compiler__arity1__transform_hlds__mmc_analysis__mmc__arity0__)),
    ((MR_Box) (&transform_hlds__mmc_analysis__transform_hlds__mmc_analysis__type_ctor_info_mmc_0))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "--use-subdirs")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "--invoked-by-mmc-make")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Integer make__util_scalar_common_3[1][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box make__util_scalar_common_4[2][15] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&make__util_scalar_common_3[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 12)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&make__util____vpti_pred_7__plain_libs__globals__type_ctor_info_globals_0__pseudo_1__plain_bool__type_ctor_info_bool_0__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__util__list__pti_list_1__pseudo_1)),
    ((MR_Box) (&make__util__make__util__type_ctor_info_job_ctl_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&make__util__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&make__util__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (&make__util_scalar_common_3[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 12)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&make__util____vpti_pred_7__plain_libs__globals__type_ctor_info_globals_0__pseudo_1__plain_bool__type_ctor_info_bool_0__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__util__list__pti_list_1__pseudo_1)),
    ((MR_Box) (&make__util__make__util__type_ctor_info_job_ctl_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__util_scalar_common_5[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&make__util__make__util__type_ctor_info_job_ctl_0)),
    ((MR_Box) (&make__util__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__util_scalar_common_6[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__util_scalar_common_7[23][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) ".analysis"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) ".c"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) ".mh"))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) ".mih"))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) ".cs"))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) ".beam"))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) ".erl"))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) ".hrl"))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) ".err"))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) ".opt"))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) ".class"))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) ".java"))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) ".int"))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) ".int0"))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_String) ".int2"))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_String) ".m"))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_String) ".track_flags"))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_String) ".int3"))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_String) ".xml"))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_String) "invalid module"))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box make__util_scalar_common_8[2][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (&make__util_scalar_common_3[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&make__util__make__util__type_ctor_info_job_ctl_0)),
    ((MR_Box) (&make__util__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__util_scalar_common_9[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&make__make__type_ctor_info_module_target_type_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make__type_ctor_info_target_file_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&make__make__type_ctor_info_module_target_type_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0))
  },
};

static /* final */ const MR_Integer make__util_scalar_common_10[1][3] = {
  /* row 0 */
  {
    (MR_Integer) 2,
    (MR_Integer) 33,
    (MR_Integer) 65
  },
};

static /* final */ const MR_Box make__util_scalar_common_11[1][16] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&make__util_scalar_common_10[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&make__util____vpti_pred_7__plain_libs__globals__type_ctor_info_globals_0__pseudo_1__plain_bool__type_ctor_info_bool_0__pseudo_2__pseudo_2__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&make__util__list__pti_list_1__pseudo_1)),
    ((MR_Box) (&make__util__make__util__type_ctor_info_job_ctl_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__util_scalar_common_12[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__util_scalar_common_13[1][14] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&make__util_scalar_common_10[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 11)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&make__util____vpti_pred_7__plain_libs__globals__type_ctor_info_globals_0__pseudo_1__plain_bool__type_ctor_info_bool_0__pseudo_2__pseudo_2__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&make__util__list__pti_list_1__pseudo_1)),
    ((MR_Box) (&make__util__make__util__type_ctor_info_job_ctl_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "version_array.mh"
#include "libs.process_util.mh"
#include "make.util.mh"
#include "mdbcomp.rtti_access.mh"
#line 630 "make.util.m"


#ifdef MC_HAVE_JOBCTL_IPC

static MC_JobCtl *
MC_create_job_ctl(MR_Integer total_tasks)
{
    size_t              size;
    MC_JobCtl           *job_ctl;
    MR_Integer          i;

    size = MC_JOB_CTL_SIZE(total_tasks);

    /* Create the shared memory segment. */
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

#endif /* MC_HAVE_JOBCTL_IPC */

#line 905 "make.util.m"
MR_Word 
MC_make_yes_job_ctl(
  MC_JobCtl * JobCtl_3)
#line 905 "make.util.m"
{
#line 905 "make.util.m"
	MR_Box boxed_JobCtl_3;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(MC_JobCtl *, JobCtl_3, boxed_JobCtl_3);
	ret_value = (MR_Word)make__util__make_yes_job_ctl_1_f_0(boxed_JobCtl_3);
	return ret_value;
}

#line 911 "make.util.m"
MR_Word 
MC_make_no_job_ctl(void)
#line 911 "make.util.m"
{
#line 911 "make.util.m"
	MR_Word ret_value;
	ret_value = (MR_Word)make__util__make_no_job_ctl_0_f_0();
	return ret_value;
}


static const MR_VA_PseudoTypeInfo_Struct7 make__util____vpti_pred_7__plain_libs__globals__type_ctor_info_globals_0__pseudo_1__plain_bool__type_ctor_info_bool_0__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 7,
  {
    (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_globals_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
    (MR_PseudoTypeInfo) &make__make__type_ctor_info_make_info_0,
    (MR_PseudoTypeInfo) &make__make__type_ctor_info_make_info_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__util__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__util__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct7 make__util____vpti_pred_7__plain_libs__globals__type_ctor_info_globals_0__pseudo_1__plain_bool__type_ctor_info_bool_0__pseudo_2__pseudo_2__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 7,
  {
    (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_globals_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
    (MR_PseudoTypeInfo) (MR_Integer) 2,
    (MR_PseudoTypeInfo) (MR_Integer) 2,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct7 make__util____vpti_pred_7__plain_libs__globals__type_ctor_info_globals_0__pseudo_1__plain_bool__type_ctor_info_bool_0__pseudo_2__pseudo_3__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 7,
  {
    (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_globals_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
    (MR_PseudoTypeInfo) (MR_Integer) 2,
    (MR_PseudoTypeInfo) (MR_Integer) 3,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

const MR_TypeCtorInfo_Struct make__util__make__util__type_ctor_info_build_3 = {
  (MR_Integer) 3,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (make__util____Unify____build_3_0_10001)),
  ((MR_Box) (make__util____Compare____build_3_0_10001)),
  (MR_String) "make.util",
  (MR_String) "build",
  {     NULL },
  {     (MR_PseudoTypeInfo) &make__util____vpti_pred_7__plain_libs__globals__type_ctor_info_globals_0__pseudo_1__plain_bool__type_ctor_info_bool_0__pseudo_2__pseudo_3__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct make__util__make__util__type_ctor_info_build_2 = {
  (MR_Integer) 2,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (make__util____Unify____build_2_0_10001)),
  ((MR_Box) (make__util____Compare____build_2_0_10001)),
  (MR_String) "make.util",
  (MR_String) "build",
  {     NULL },
  {     (MR_PseudoTypeInfo) &make__util____vpti_pred_7__plain_libs__globals__type_ctor_info_globals_0__pseudo_1__plain_bool__type_ctor_info_bool_0__pseudo_2__pseudo_2__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct make__util__make__util__type_ctor_info_build_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (make__util____Unify____build_1_0_10001)),
  ((MR_Box) (make__util____Compare____build_1_0_10001)),
  (MR_String) "make.util",
  (MR_String) "build",
  {     NULL },
  {     (MR_PseudoTypeInfo) &make__util____vpti_pred_7__plain_libs__globals__type_ctor_info_globals_0__pseudo_1__plain_bool__type_ctor_info_bool_0__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_VA_PseudoTypeInfo_Struct8 make__util____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__pseudo_1__pseudo_2__plain_bool__type_ctor_info_bool_0__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 8,
  {
    (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_globals_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2,
    (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
    (MR_PseudoTypeInfo) &make__make__type_ctor_info_make_info_0,
    (MR_PseudoTypeInfo) &make__make__type_ctor_info_make_info_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

const MR_TypeCtorInfo_Struct make__util__make__util__type_ctor_info_build2_2 = {
  (MR_Integer) 2,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (make__util____Unify____build2_2_0_10001)),
  ((MR_Box) (make__util____Compare____build2_2_0_10001)),
  (MR_String) "make.util",
  (MR_String) "build2",
  {     NULL },
  {     (MR_PseudoTypeInfo) &make__util____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__pseudo_1__pseudo_2__plain_bool__type_ctor_info_bool_0__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_VA_PseudoTypeInfo_Struct7 make__util____vpti_pred_7__plain_libs__globals__type_ctor_info_globals_0__pseudo_1__plain_bool__type_ctor_info_bool_0__pseudo_2__pseudo_2__pseudo_3__pseudo_3 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 7,
  {
    (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_globals_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
    (MR_PseudoTypeInfo) (MR_Integer) 2,
    (MR_PseudoTypeInfo) (MR_Integer) 2,
    (MR_PseudoTypeInfo) (MR_Integer) 3,
    (MR_PseudoTypeInfo) (MR_Integer) 3
  }
};

const MR_TypeCtorInfo_Struct make__util__make__util__type_ctor_info_foldl2_pred_with_status_3 = {
  (MR_Integer) 3,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (make__util____Unify____foldl2_pred_with_status_3_0_10001)),
  ((MR_Box) (make__util____Compare____foldl2_pred_with_status_3_0_10001)),
  (MR_String) "make.util",
  (MR_String) "foldl2_pred_with_status",
  {     NULL },
  {     (MR_PseudoTypeInfo) &make__util____vpti_pred_7__plain_libs__globals__type_ctor_info_globals_0__pseudo_1__plain_bool__type_ctor_info_bool_0__pseudo_2__pseudo_2__pseudo_3__pseudo_3 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_VA_PseudoTypeInfo_Struct9 make__util____vpti_pred_9__plain_libs__globals__type_ctor_info_globals_0__pseudo_1__plain_bool__type_ctor_info_bool_0__pseudo_2__pseudo_2__pseudo_3__pseudo_3__pseudo_4__pseudo_4 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 9,
  {
    (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_globals_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
    (MR_PseudoTypeInfo) (MR_Integer) 2,
    (MR_PseudoTypeInfo) (MR_Integer) 2,
    (MR_PseudoTypeInfo) (MR_Integer) 3,
    (MR_PseudoTypeInfo) (MR_Integer) 3,
    (MR_PseudoTypeInfo) (MR_Integer) 4,
    (MR_PseudoTypeInfo) (MR_Integer) 4
  }
};

const MR_TypeCtorInfo_Struct make__util__make__util__type_ctor_info_foldl3_pred_with_status_4 = {
  (MR_Integer) 4,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (make__util____Unify____foldl3_pred_with_status_4_0_10001)),
  ((MR_Box) (make__util____Compare____foldl3_pred_with_status_4_0_10001)),
  (MR_String) "make.util",
  (MR_String) "foldl3_pred_with_status",
  {     NULL },
  {     (MR_PseudoTypeInfo) &make__util____vpti_pred_9__plain_libs__globals__type_ctor_info_globals_0__pseudo_1__plain_bool__type_ctor_info_bool_0__pseudo_2__pseudo_2__pseudo_3__pseudo_3__pseudo_4__pseudo_4 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct make__util__make__util__type_ctor_info_job_ctl_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_FOREIGN,
  ((MR_Box) (make__util____Unify____job_ctl_0_0_10001)),
  ((MR_Box) (make__util____Compare____job_ctl_0_0_10001)),
  (MR_String) "make.util",
  (MR_String) "job_ctl",
  {     NULL },
  {     NULL },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct make__util__make__util__type_ctor_info_stdout_lock_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (make__util____Unify____stdout_lock_0_0_10001)),
  ((MR_Box) (make__util____Compare____stdout_lock_0_0_10001)),
  (MR_String) "make.util",
  (MR_String) "stdout_lock",
  {     NULL },
  {     (MR_PseudoTypeInfo) &make__util__make__util__type_ctor_info_job_ctl_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static void MR_CALL 
make__util__IntroducedFrom__pred__foldl2_maybe_stop_at_error_parallel_processes__470__1_6_p_0(
  MR_Box JobCtl_21,
  MR_Word Pids_22,
  MR_Word HeadVar__3_104,
  MR_Word * HeadVar__4_105)
{
  {
    MR_Box conv0_HeadVar__4_105;

    make__util__worker_loop_signal_cleanup_6_p_0((MR_Word) &make__make__type_ctor_info_make_info_0, JobCtl_21, Pids_22, ((MR_Box) (HeadVar__3_104)), &conv0_HeadVar__4_105);
    *HeadVar__4_105 = ((MR_Word) conv0_HeadVar__4_105);
  }
}

static void MR_CALL 
make__util__IntroducedFrom__pred__foldl2_maybe_stop_at_error_parallel_processes__469__1_12_p_0(
  MR_Word TypeInfo_for_T_88,
  MR_Word KeepGoing_11,
  MR_Word MakeTarget_13,
  MR_Word Globals_14,
  MR_Word Targets_15,
  MR_Box JobCtl_21,
  MR_Word HeadVar__7_42,
  MR_Word * HeadVar__8_98,
  MR_Word HeadVar__9_99,
  MR_Word * HeadVar__10_100)
{
  {
    MR_Box conv0_HeadVar__10_100;

    make__util__worker_loop_11_p_0(TypeInfo_for_T_88, (MR_Word) &make__make__type_ctor_info_make_info_0, Globals_14, KeepGoing_11, MakeTarget_13, Targets_15, JobCtl_21, HeadVar__7_42, HeadVar__8_98, ((MR_Box) (HeadVar__9_99)), &conv0_HeadVar__10_100);
    *HeadVar__10_100 = ((MR_Word) conv0_HeadVar__10_100);
  }
}

static void MR_CALL 
make__util__IntroducedFrom__pred__foldl2_maybe_stop_at_error_parallel_processes__464__1_12_p_0(
  MR_Word TypeInfo_for_T_88,
  MR_Word KeepGoing_11,
  MR_Word MakeTarget_13,
  MR_Word Globals_14,
  MR_Word Targets_15,
  MR_Box JobCtl_21,
  MR_Word STATE_VARIABLE_Info_30_30,
  MR_Integer HeadVar__8_89,
  MR_Word HeadVar__9_90,
  MR_Word * HeadVar__10_91)
{
  make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_112_97_114_97_108_108_101_108_95_112_114_111_99_101_115_115_101_115_95_95_52_54_52_95_95_49_95_95_91_56_93_95_48_12_p_0(TypeInfo_for_T_88, KeepGoing_11, MakeTarget_13, Globals_14, Targets_15, JobCtl_21, STATE_VARIABLE_Info_30_30, HeadVar__9_90, HeadVar__10_91);
}

static void MR_CALL 
make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_112_97_114_97_108_108_101_108_95_112_114_111_99_101_115_115_101_115_95_95_52_54_52_95_95_49_95_95_91_56_93_95_48_12_p_0(
  MR_Word TypeInfo_for_T_88,
  MR_Word KeepGoing_11,
  MR_Word MakeTarget_13,
  MR_Word Globals_14,
  MR_Word Targets_15,
  MR_Box JobCtl_21,
  MR_Word STATE_VARIABLE_Info_30_30,
  MR_Word HeadVar__9_90,
  MR_Word * HeadVar__10_91)
{
  {
    make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_95_119_111_114_107_101_114_95_112_114_111_99_101_115_115_95_95_91_57_93_95_48_11_p_0(TypeInfo_for_T_88, (MR_Word) &make__make__type_ctor_info_make_info_0, Globals_14, KeepGoing_11, MakeTarget_13, Targets_15, JobCtl_21, ((MR_Box) (STATE_VARIABLE_Info_30_30)), HeadVar__9_90, HeadVar__10_91);
  }
}

static void MR_CALL 
make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_95_119_111_114_107_101_114_95_112_114_111_99_101_115_115_95_95_91_57_93_95_48_11_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Success_16;

    make__util__child_worker_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8))), ((MR_Box) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 9))), (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 10)), &conv0_Success_16);
    *wrapper_arg_1 = ((MR_Box) (conv0_Success_16));
  }
}

static void MR_CALL 
make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_95_119_111_114_107_101_114_95_112_114_111_99_101_115_115_95_95_91_57_93_95_48_11_p_0(
  MR_Word TypeInfo_for_T_30,
  MR_Word TypeInfo_for_Info_31,
  MR_Word Globals_12,
  MR_Word KeepGoing_13,
  MR_Word MakeTarget_14,
  MR_Word Targets_15,
  MR_Box JobCtl_16,
  MR_Box Info_17,
  MR_Word STATE_VARIABLE_Pids_0_23,
  MR_Word * STATE_VARIABLE_Pids_24)
{
  {
    MR_Word MaybePid_21;
    MR_Word Var_27;

    {
      Var_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (&make__util_scalar_common_13[0]));
      MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_95_119_111_114_107_101_114_95_112_114_111_99_101_115_115_95_95_91_57_93_95_48_11_p_0_1));
      MR_hl_field(MR_mktag(0), Var_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(0), Var_27, 3) = ((MR_Box) (TypeInfo_for_T_30));
      MR_hl_field(MR_mktag(0), Var_27, 4) = ((MR_Box) (TypeInfo_for_Info_31));
      MR_hl_field(MR_mktag(0), Var_27, 5) = ((MR_Box) (Globals_12));
      MR_hl_field(MR_mktag(0), Var_27, 6) = ((MR_Box) (KeepGoing_13));
      MR_hl_field(MR_mktag(0), Var_27, 7) = ((MR_Box) (MakeTarget_14));
      MR_hl_field(MR_mktag(0), Var_27, 8) = ((MR_Box) (Targets_15));
      MR_hl_field(MR_mktag(0), Var_27, 9) = ((MR_Box) (JobCtl_16));
      MR_hl_field(MR_mktag(0), Var_27, 10) = Info_17;
    }
    libs__process_util__start_in_forked_process_4_p_0(Var_27, &MaybePid_21);
    if ((MaybePid_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_Pids_24 = STATE_VARIABLE_Pids_0_23;
    else
    {
      MR_Integer Pid_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), MaybePid_21, (MR_Integer) 0)));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Pids_24 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Pid_22));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Pids_0_23));
      }
    }
  }
}

static MR_Word MR_CALL 
make__util__IntroducedFrom__func__make_dependency_list__1462__1_2_f_0(
  MR_Word FileType_5,
  MR_Word LambdaHeadVar__1_8)
{
  {
    MR_Word LambdaHeadVar__2_9;
    MR_Word Var_10;

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (LambdaHeadVar__1_8));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (FileType_5));
    }
    {
      LambdaHeadVar__2_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_9, 0) = ((MR_Box) (Var_10));
    }
    return LambdaHeadVar__2_9;
  }
}

static MR_Word MR_CALL 
make__util__IntroducedFrom__func__make_target_file_list__1458__1_2_f_0(
  MR_Word FileType_5,
  MR_Word LambdaHeadVar__1_8)
{
  {
    MR_Word LambdaHeadVar__2_9;

    {
      LambdaHeadVar__2_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_9, 0) = ((MR_Box) (LambdaHeadVar__1_8));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_9, 1) = ((MR_Box) (FileType_5));
    }
    return LambdaHeadVar__2_9;
  }
}

void MR_CALL 
make__util____Compare____stdout_lock_0_0(
  MR_Word * HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3)
{
  {
    MR_Box Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Box Cast_HeadVar2_5 = HeadVar__3_3;
    MR_Word Cast_HeadVar1_7 = (MR_Word) Cast_HeadVar1_4;
    MR_Word Cast_HeadVar2_8 = (MR_Word) Cast_HeadVar2_5;

    mercury__builtin____Compare____c_pointer_0_0(HeadVar__1_1, Cast_HeadVar1_7, Cast_HeadVar2_8);
  }
}

MR_bool MR_CALL 
make__util____Unify____stdout_lock_0_0(
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Box Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Box Cast_HeadVar2_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar1_5 = (MR_Word) Cast_HeadVar1_3;
    MR_Word Cast_HeadVar2_6 = (MR_Word) Cast_HeadVar2_4;

    succeeded = mercury__builtin____Unify____c_pointer_0_0(Cast_HeadVar1_5, Cast_HeadVar2_6);
    return succeeded;
  }
}

void MR_CALL 
make__util____Compare____job_ctl_0_0(
  MR_Word * HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = (MR_Word) HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = (MR_Word) HeadVar__3_3;

    mercury__builtin____Compare____c_pointer_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
make__util____Unify____job_ctl_0_0(
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = (MR_Word) HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = (MR_Word) HeadVar__2_2;

    succeeded = mercury__builtin____Unify____c_pointer_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
make__util____Compare____foldl3_pred_with_status_4_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word TypeInfo_for_Acc_7,
  MR_Word TypeInfo_for_Info_8,
  MR_Word TypeInfo_for_IO_9,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) Cast_HeadVar1_4, (MR_Word) Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
make__util____Unify____foldl3_pred_with_status_4_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word TypeInfo_for_Acc_6,
  MR_Word TypeInfo_for_Info_7,
  MR_Word TypeInfo_for_IO_8,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) Cast_HeadVar1_3, (MR_Word) Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
make__util____Compare____foldl2_pred_with_status_3_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word TypeInfo_for_Info_7,
  MR_Word TypeInfo_for_IO_8,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) Cast_HeadVar1_4, (MR_Word) Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
make__util____Unify____foldl2_pred_with_status_3_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word TypeInfo_for_Info_6,
  MR_Word TypeInfo_for_IO_7,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) Cast_HeadVar1_3, (MR_Word) Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
make__util____Compare____build2_2_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word TypeInfo_for_U_7,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) Cast_HeadVar1_4, (MR_Word) Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
make__util____Unify____build2_2_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word TypeInfo_for_U_6,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) Cast_HeadVar1_3, (MR_Word) Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
make__util____Compare____build_3_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word TypeInfo_for_Info1_7,
  MR_Word TypeInfo_for_Info2_8,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) Cast_HeadVar1_4, (MR_Word) Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
make__util____Unify____build_3_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word TypeInfo_for_Info1_6,
  MR_Word TypeInfo_for_Info2_7,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) Cast_HeadVar1_3, (MR_Word) Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
make__util____Compare____build_2_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word TypeInfo_for_Info_7,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) Cast_HeadVar1_4, (MR_Word) Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
make__util____Unify____build_2_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word TypeInfo_for_Info_6,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) Cast_HeadVar1_3, (MR_Word) Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
make__util____Compare____build_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) Cast_HeadVar1_4, (MR_Word) Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
make__util____Unify____build_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) Cast_HeadVar1_3, (MR_Word) Cast_HeadVar2_4);
    return succeeded;
  }
}

static void MR_CALL 
make__util__make_write_error_char_7_p_0(
  MR_Word FullOutputStream_8,
  MR_Word PartialOutputStream_9,
  MR_Char Char_10,
  MR_Integer STATE_VARIABLE_LinesRemaining_0_14,
  MR_Integer * STATE_VARIABLE_LinesRemaining_15)
{
  {
    MR_bool succeeded;

    mercury__io__write_char_4_p_0(FullOutputStream_8, Char_10);
    succeeded = (STATE_VARIABLE_LinesRemaining_0_14 > (MR_Integer) 0);
    if (succeeded)
    {
      mercury__io__write_char_4_p_0(PartialOutputStream_9, Char_10);
      succeeded = (Char_10 == (MR_Char) 10);
      if (succeeded)
      {
        *STATE_VARIABLE_LinesRemaining_15 = (STATE_VARIABLE_LinesRemaining_0_14 - (MR_Integer) 1);
      }
      else
        *STATE_VARIABLE_LinesRemaining_15 = STATE_VARIABLE_LinesRemaining_0_14;
    }
    else
    {
      succeeded = (STATE_VARIABLE_LinesRemaining_0_14 == (MR_Integer) 0);
      if (succeeded)
      {
        MR_String FullOutputFileName_13;

        mercury__io__output_stream_name_4_p_0(FullOutputStream_8, &FullOutputFileName_13);
        mercury__io__write_string_4_p_0(PartialOutputStream_9, (MR_String) "... error log truncated, see \140");
        mercury__io__write_string_4_p_0(PartialOutputStream_9, FullOutputFileName_13);
        mercury__io__write_string_4_p_0(PartialOutputStream_9, (MR_String) "\' for the complete log.\n");
        *STATE_VARIABLE_LinesRemaining_15 = (MR_Integer) -1;
      }
      else
        *STATE_VARIABLE_LinesRemaining_15 = STATE_VARIABLE_LinesRemaining_0_14;
    }
  }
}

static MR_Word MR_CALL 
make__util__make_no_job_ctl_0_f_0(void)
{
  {
    return (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

static MR_Word MR_CALL 
make__util__make_yes_job_ctl_1_f_0(
  MR_Box JobCtl_3)
{
  {
    MR_Word HeadVar__2_2;

    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (JobCtl_3));
    }
    return HeadVar__2_2;
  }
}

static void MR_CALL 
make__util__reap_worker_process_5_p_0(
  MR_Integer Pid_6,
  MR_Word STATE_VARIABLE_Success_0_10,
  MR_Word * STATE_VARIABLE_Success_11)
{
  {
    MR_bool succeeded;
    MR_Word Status_9;
    MR_Word Var_15;
    MR_Integer Var_16;

    libs__process_util__wait_pid_4_p_0(Pid_6, &Status_9);
    succeeded = (STATE_VARIABLE_Success_0_10 == (MR_Integer) 1);
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Status_9)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Status_9, (MR_Integer) 0)));
        succeeded = ((MR_tag((MR_Word) Var_15)) == (MR_mktag((MR_Integer) 0)));
        if (succeeded)
        {
          Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 0)));
          succeeded = (Var_16 == (MR_Integer) 0);
        }
      }
    }
    if (succeeded)
      *STATE_VARIABLE_Success_11 = STATE_VARIABLE_Success_0_10;
    else
      *STATE_VARIABLE_Success_11 = (MR_Integer) 0;
  }
}

static void MR_CALL 
make__util__worker_loop_signal_cleanup_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    libs__process_util__send_signal_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) wrapper_arg_1));
  }
}

static void MR_CALL 
make__util__worker_loop_signal_cleanup_6_p_0(
  MR_Word TypeInfo_for_Info_19,
  MR_Box JobCtl_7,
  MR_Word Pids_8,
  MR_Box STATE_VARIABLE_Info_0_11,
  MR_Box * STATE_VARIABLE_Info_12)
{
  {
    MR_Word Var_16;
    MR_Integer Var_18;
    MR_Box conv0_STATE_VARIABLE_IO_14;

    make__util__mark_abort_3_p_0(JobCtl_7);
    Var_18 = libs__process_util__sigint_0_f_0();
    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&make__util_scalar_common_12[0]));
      MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (make__util__worker_loop_signal_cleanup_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (Var_18));
    }
    mercury__list__foldl_4_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_16, Pids_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_14);
    *STATE_VARIABLE_Info_12 = STATE_VARIABLE_Info_0_11;
  }
}

static void MR_CALL 
make__util__mark_abort_3_p_0(
  MR_Box JobCtl_1)
{
  {
{
#define MR_PROC_LABEL make__util__mark_abort_3_p_0

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
}

static void MR_CALL 
make__util__worker_loop_11_p_0(
  MR_Word TypeInfo_for_T_39,
  MR_Word TypeInfo_for_Info_40,
  MR_Word Globals_12,
  MR_Word KeepGoing_13,
  MR_Word MakeTarget_14,
  MR_Word Targets_15,
  MR_Box JobCtl_16,
  MR_Word STATE_VARIABLE_Success_0_23,
  MR_Word * STATE_VARIABLE_Success_24,
  MR_Box STATE_VARIABLE_Info_0_25,
  MR_Box * STATE_VARIABLE_Info_26)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer TaskNumber_20;

    // setup for tailcalls optimized into a loop
    make__util__accept_task_4_p_0(JobCtl_16, &TaskNumber_20);
    succeeded = (TaskNumber_20 >= (MR_Integer) 0);
    if (succeeded)
    {
      MR_Box Target_21;
      MR_Word TargetSuccess_22;
      MR_Box STATE_VARIABLE_Info_31_31;
      MR_Word STATE_VARIABLE_Success_34_34;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Box conv2_TargetSuccess_22;
      MR_Box conv1_STATE_VARIABLE_IO_32_32;
      MR_Word next_value_of_STATE_VARIABLE_Success_0_23;
      MR_Box next_value_of_STATE_VARIABLE_Info_0_25;

      Target_21 = mercury__list__det_index0_2_f_0(TypeInfo_for_T_39, Targets_15, TaskNumber_20);
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), MakeTarget_14, (MR_Integer) 1)));
      func_0(((MR_Box) MakeTarget_14), ((MR_Box) (Globals_12)), Target_21, &conv2_TargetSuccess_22, STATE_VARIABLE_Info_0_25, &STATE_VARIABLE_Info_31_31, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_32_32);
      TargetSuccess_22 = ((MR_Word) conv2_TargetSuccess_22);
      switch (TargetSuccess_22) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            make__util__mark_task_error_5_p_0(JobCtl_16, TaskNumber_20, KeepGoing_13);
            STATE_VARIABLE_Success_34_34 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 1:
          {
            make__util__mark_task_done_4_p_0(JobCtl_16, TaskNumber_20);
            STATE_VARIABLE_Success_34_34 = STATE_VARIABLE_Success_0_23;
          }
          break;
      }
      // direct tailcall eliminated
      next_value_of_STATE_VARIABLE_Success_0_23 = STATE_VARIABLE_Success_34_34;
      next_value_of_STATE_VARIABLE_Info_0_25 = STATE_VARIABLE_Info_31_31;
      STATE_VARIABLE_Success_0_23 = next_value_of_STATE_VARIABLE_Success_0_23;
      STATE_VARIABLE_Info_0_25 = next_value_of_STATE_VARIABLE_Info_0_25;
      continue;
    }
    else
    {
      *STATE_VARIABLE_Info_26 = STATE_VARIABLE_Info_0_25;
      *STATE_VARIABLE_Success_24 = STATE_VARIABLE_Success_0_23;
    }
    break;
  }
}

static void MR_CALL 
make__util__mark_task_error_5_p_0(
  MR_Box JobCtl_1,
  MR_Integer TaskNumber_2,
  MR_Word KeepGoing_3)
{
  {
{
#define MR_PROC_LABEL make__util__mark_task_error_5_p_0

	MC_JobCtl * JobCtl;
	MR_Integer TaskNumber;
	MR_Word KeepGoing;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MC_JobCtl *, JobCtl_1 , JobCtl);
	TaskNumber =  TaskNumber_2 ;
	KeepGoing =  KeepGoing_3 ;
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
}

static void MR_CALL 
make__util__mark_task_done_4_p_0(
  MR_Box JobCtl_1,
  MR_Integer TaskNumber_2)
{
  {
{
#define MR_PROC_LABEL make__util__mark_task_done_4_p_0

	MC_JobCtl * JobCtl;
	MR_Integer TaskNumber;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MC_JobCtl *, JobCtl_1 , JobCtl);
	TaskNumber =  TaskNumber_2 ;
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
}

static void MR_CALL 
make__util__accept_task_4_p_0(
  MR_Box JobCtl_1,
  MR_Integer * TaskNumber_2)
{
  {
{
#define MR_PROC_LABEL make__util__accept_task_4_p_0

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
}

static void MR_CALL 
make__util__child_worker_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    make__util__worker_loop_signal_cleanup_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Box) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), wrapper_arg_1, wrapper_arg_2);
  }
}

static void MR_CALL 
make__util__child_worker_9_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Success_24;

    make__util__worker_loop_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8))), ((MR_Box) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 9))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 10))), &conv0_STATE_VARIABLE_Success_24, wrapper_arg_2, wrapper_arg_3);
    *wrapper_arg_1 = ((MR_Box) (conv0_STATE_VARIABLE_Success_24));
  }
}

static void MR_CALL 
make__util__child_worker_9_p_0(
  MR_Word TypeInfo_for_T_28,
  MR_Word TypeInfo_for_Info_29,
  MR_Word Globals_10,
  MR_Word KeepGoing_11,
  MR_Word MakeTarget_12,
  MR_Word Targets_13,
  MR_Box JobCtl_14,
  MR_Box Info0_15,
  MR_Word * Success_16)
{
  {
    MR_Word VeryVerbose_18;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Box _Info_19;

    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 57, &VeryVerbose_18);
    {
      Var_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&make__util_scalar_common_11[0]));
      MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (make__util__child_worker_9_p_0_1));
      MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (TypeInfo_for_T_28));
      MR_hl_field(MR_mktag(0), Var_23, 4) = ((MR_Box) (TypeInfo_for_Info_29));
      MR_hl_field(MR_mktag(0), Var_23, 5) = ((MR_Box) (Globals_10));
      MR_hl_field(MR_mktag(0), Var_23, 6) = ((MR_Box) (KeepGoing_11));
      MR_hl_field(MR_mktag(0), Var_23, 7) = ((MR_Box) (MakeTarget_12));
      MR_hl_field(MR_mktag(0), Var_23, 8) = ((MR_Box) (Targets_13));
      MR_hl_field(MR_mktag(0), Var_23, 9) = ((MR_Box) (JobCtl_14));
      MR_hl_field(MR_mktag(0), Var_23, 10) = ((MR_Box) ((MR_Integer) 1));
    }
    {
      Var_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (&make__util_scalar_common_8[1]));
      MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (make__util__child_worker_9_p_0_2));
      MR_hl_field(MR_mktag(0), Var_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_24, 3) = ((MR_Box) (TypeInfo_for_Info_29));
      MR_hl_field(MR_mktag(0), Var_24, 4) = ((MR_Box) (JobCtl_14));
      MR_hl_field(MR_mktag(0), Var_24, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    libs__process_util__build_with_check_for_interrupt_8_p_0(TypeInfo_for_Info_29, VeryVerbose_18, Var_23, Var_24, Success_16, Info0_15, &_Info_19);
  }
}

void MR_CALL 
make__util__dependency_file_hash_2_p_0(
  MR_Word DepFile_3,
  MR_Integer * Hash_4)
{
  if (((MR_tag((MR_Word) DepFile_3)) == (MR_mktag((MR_Integer) 1))))
  {
    MR_String FileName_6 = ((MR_String) (MR_hl_field(MR_mktag(1), DepFile_3, (MR_Integer) 0)));
    MR_Word _MaybeOption_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), DepFile_3, (MR_Integer) 1)));

    *Hash_4 = mercury__string__hash_1_f_0(FileName_6);
  }
  else
  {
    MR_Word TargetFile_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), DepFile_3, (MR_Integer) 0)));
    MR_Word ModuleName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), TargetFile_5, (MR_Integer) 0)));
    MR_Word Type_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), TargetFile_5, (MR_Integer) 1)));
    MR_Integer Hash0_12;
    MR_Integer Hash1_13;
    MR_Integer H1_41;
    MR_Integer Var_42;

    if (((MR_tag((MR_Word) ModuleName_10)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_String String_18 = ((MR_String) (MR_hl_field(MR_mktag(1), ModuleName_10, (MR_Integer) 1)));
      MR_Word _Qual_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ModuleName_10, (MR_Integer) 0)));

      Hash0_12 = mercury__string__hash_1_f_0(String_18);
    }
    else
    {
      MR_String String_16 = ((MR_String) (MR_hl_field(MR_mktag(0), ModuleName_10, (MR_Integer) 0)));

      Hash0_12 = mercury__string__hash_1_f_0(String_16);
    }
    switch (MR_tag((MR_Word) Type_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Type_11)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Hash1_13 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            Hash1_13 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            Hash1_13 = (MR_Integer) 3;
            break;
          case (MR_Integer) 3:
            Hash1_13 = (MR_Integer) 4;
            break;
          case (MR_Integer) 4:
            Hash1_13 = (MR_Integer) 5;
            break;
          case (MR_Integer) 5:
            Hash1_13 = (MR_Integer) 6;
            break;
          case (MR_Integer) 6:
            Hash1_13 = (MR_Integer) 7;
            break;
          case (MR_Integer) 7:
            Hash1_13 = (MR_Integer) 8;
            break;
          case (MR_Integer) 8:
            Hash1_13 = (MR_Integer) 20;
            break;
          case (MR_Integer) 9:
            Hash1_13 = (MR_Integer) 11;
            break;
          case (MR_Integer) 10:
            Hash1_13 = (MR_Integer) 22;
            break;
          case (MR_Integer) 11:
            Hash1_13 = (MR_Integer) 12;
            break;
          case (MR_Integer) 12:
            Hash1_13 = (MR_Integer) 21;
            break;
          case (MR_Integer) 13:
            Hash1_13 = (MR_Integer) 13;
            break;
          case (MR_Integer) 14:
            Hash1_13 = (MR_Integer) 14;
            break;
          case (MR_Integer) 15:
            Hash1_13 = (MR_Integer) 15;
            break;
          case (MR_Integer) 16:
            Hash1_13 = (MR_Integer) 19;
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), Type_11, (MR_Integer) 0)));

          switch (Var_31) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              Hash1_13 = (MR_Integer) 9;
              break;
            case (MR_Integer) 1:
              Hash1_13 = (MR_Integer) 10;
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PIC_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), Type_11, (MR_Integer) 0)));
          MR_Integer Var_26;
          MR_Integer H1_35;

          switch (PIC_21) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              Var_26 = (MR_Integer) 3;
              break;
            case (MR_Integer) 0:
              Var_26 = (MR_Integer) 1;
              break;
          }
          H1_35 = ((MR_Integer) 16 ^ (((MR_Integer) 16 << (MR_Integer) 5)));
          Hash1_13 = (H1_35 ^ Var_26);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Type_11, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Hash1_13 = (MR_Integer) 17;
            break;
          case (MR_Integer) 1:
            Hash1_13 = (MR_Integer) 18;
            break;
        }
        break;
    }
    Var_42 = (Hash0_12 << (MR_Integer) 5);
    H1_41 = (Hash0_12 ^ Var_42);
    *Hash_4 = (H1_41 ^ Hash1_13);
  }
}

void MR_CALL 
make__util__module_name_hash_2_p_0(
  MR_Word SymName_3,
  MR_Integer * Hash_4)
{
  if (((MR_tag((MR_Word) SymName_3)) == (MR_mktag((MR_Integer) 1))))
  {
    MR_String String_7 = ((MR_String) (MR_hl_field(MR_mktag(1), SymName_3, (MR_Integer) 1)));
    MR_Word _Qual_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), SymName_3, (MR_Integer) 0)));

    *Hash_4 = mercury__string__hash_1_f_0(String_7);
  }
  else
  {
    MR_String String_5 = ((MR_String) (MR_hl_field(MR_mktag(0), SymName_3, (MR_Integer) 0)));

    *Hash_4 = mercury__string__hash_1_f_0(String_5);
  }
}

void MR_CALL 
make__util__get_real_milliseconds_3_p_0(
  MR_Integer * Time_1)
{
  {
{
#define MR_PROC_LABEL make__util__get_real_milliseconds_3_p_0

	MR_Integer Time;

		{

    Time = MR_get_real_milliseconds();


		;}
#undef MR_PROC_LABEL
	 *Time_1  = Time;
}
  }
}

void MR_CALL 
make__util__maybe_symlink_or_copy_linked_target_message_4_p_0(
  MR_Word Globals_5,
  MR_Word Target_6)
{
  {
    MR_Word OptionValue_36;

    libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 61, &OptionValue_36);
    switch (OptionValue_36) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          make__util__IntroducedFrom__pred__maybe_symlink_or_copy_linked_target_message__1852__1_4_p_0(Globals_5, Target_6);
          mercury__io__flush_output_2_p_0();
        }
        break;
    }
  }
}

static void MR_CALL 
make__util__IntroducedFrom__pred__maybe_symlink_or_copy_linked_target_message__1852__1_4_p_0(
  MR_Word Globals_5,
  MR_Word Target_6)
{
  {
    MR_Word ModuleName_26;
    MR_Word FileType_27;

    mercury__io__write_string_3_p_0((MR_String) "Made symlink/copy of ");
    ModuleName_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Target_6, (MR_Integer) 0)));
    FileType_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Target_6, (MR_Integer) 1)));
    switch (MR_tag((MR_Word) FileType_27)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ModuleTargetType_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), FileType_27, (MR_Integer) 0)));
          MR_Word TargetFile_30;

          {
            TargetFile_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TargetFile_30, 0) = ((MR_Box) (ModuleName_26));
            MR_hl_field(MR_mktag(0), TargetFile_30, 1) = ((MR_Box) (ModuleTargetType_29));
          }
          make__util__make_write_target_file_wrapped_6_p_0(Globals_5, (MR_String) "", TargetFile_30, (MR_String) "");
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word LinkedTargetType_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), FileType_27, (MR_Integer) 0)));
          MR_String FileName_32;

          make__util__linked_target_file_name_6_p_0(Globals_5, ModuleName_26, LinkedTargetType_31, &FileName_32);
          mercury__io__write_string_3_p_0(FileName_32);
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "make.util", (MR_String) "predicate \140make.util.make_write_module_or_linked_target\'/4", (MR_String) "misc_target");
            return;
          }
        }
        break;
    }
    mercury__io__write_string_3_p_0((MR_String) "\n");
  }
}

void MR_CALL 
make__util__maybe_warn_up_to_date_target_6_p_0(
  MR_Word Globals_7,
  MR_Word Target_8,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15)
{
  {
    MR_bool succeeded;
    MR_Word Warn_11;
    MR_Word CmdLineTargets0_12;
    MR_Word CmdLineTargets_13;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Integer Var_62;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word Var_78;
    MR_Word Var_79;
    MR_Word Var_80;
    MR_Integer Var_82;
    MR_Word Var_83;
    MR_Word Var_81;

    libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 35, &Warn_11);
    switch (Warn_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 17)));
          MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 0)));
          MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 1)));
          MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 2)));
          MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 3)));
          MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 4)));
          MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 5)));
          MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 6)));
          MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 7)));
          MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 8)));
          MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 9)));
          MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 10)));
          MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 11)));
          MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 12)));
          MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 13)));
          MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 14)));
          MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 15)));
          MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 16)));
          MR_Integer Var_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 18)));
          MR_Word Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 19)));

          succeeded = mercury__set__member_2_p_0((MR_Word) &make__util_scalar_common_1[1], ((MR_Box) (Target_8)), Var_19);
          if (succeeded)
          {
            mercury__io__write_string_3_p_0((MR_String) "** Nothing to be done for \140");
            make__util__make_write_module_or_linked_target_4_p_0(Globals_7, Target_8);
            mercury__io__write_string_3_p_0((MR_String) "\'.\n");
          }
          else
          {
          }
        }
        break;
    }
    Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 0)));
    Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 1)));
    Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 2)));
    Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 3)));
    Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 4)));
    Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 5)));
    Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 6)));
    Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 7)));
    Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 8)));
    Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 9)));
    Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 10)));
    Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 11)));
    Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 12)));
    Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 13)));
    Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 14)));
    Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 15)));
    Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 16)));
    CmdLineTargets0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 17)));
    Var_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 18)));
    Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 19)));
    mercury__set__delete_3_p_0((MR_Word) &make__util_scalar_common_1[1], ((MR_Box) (Target_8)), CmdLineTargets0_12, &CmdLineTargets_13);
    Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 0)));
    Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 1)));
    Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 2)));
    Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 3)));
    Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 4)));
    Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 5)));
    Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 6)));
    Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 7)));
    Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 8)));
    Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 9)));
    Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 10)));
    Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 11)));
    Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 12)));
    Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 13)));
    Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 14)));
    Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 15)));
    Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 16)));
    Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 17)));
    Var_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 18)));
    Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 19)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_15 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_64));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_65));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_66));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_67));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_68));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_69));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_70));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_71));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_72));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_73));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_74));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_75));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_76));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_77));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_78));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_79));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_80));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (CmdLineTargets_13));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_82));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_83));
    }
  }
}

static void MR_CALL 
make__util__make_write_module_or_linked_target_4_p_0(
  MR_Word Globals_5,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word ModuleName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word FileType_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));

    switch (MR_tag((MR_Word) FileType_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ModuleTargetType_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), FileType_7, (MR_Integer) 0)));
          MR_Word TargetFile_10;

          {
            TargetFile_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TargetFile_10, 0) = ((MR_Box) (ModuleName_6));
            MR_hl_field(MR_mktag(0), TargetFile_10, 1) = ((MR_Box) (ModuleTargetType_9));
          }
          make__util__make_write_target_file_wrapped_6_p_0(Globals_5, (MR_String) "", TargetFile_10, (MR_String) "");
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word LinkedTargetType_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), FileType_7, (MR_Integer) 0)));
          MR_String FileName_12;

          make__util__linked_target_file_name_6_p_0(Globals_5, ModuleName_6, LinkedTargetType_11, &FileName_12);
          mercury__io__write_string_3_p_0(FileName_12);
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "make.util", (MR_String) "predicate \140make.util.make_write_module_or_linked_target\'/4", (MR_String) "misc_target");
            return;
          }
        }
        break;
    }
  }
}

void MR_CALL 
make__util__file_error_4_p_0(
  MR_Word Info_5,
  MR_String TargetFile_6)
{
  {
    MR_String Var_12;
    MR_String Var_14;
    MR_Word MaybeLock_23;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Integer Var_47;

    Var_14 = mercury__string__f_43_43_2_f_0(TargetFile_6, (MR_String) "\'.\n");
    Var_12 = mercury__string__f_43_43_2_f_0((MR_String) "** Error making \140", Var_14);
    Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 0)));
    Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1)));
    Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 2)));
    Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 3)));
    Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 4)));
    Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 5)));
    Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 6)));
    Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 7)));
    Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 8)));
    Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 9)));
    Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 10)));
    Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 11)));
    Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 12)));
    Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 13)));
    Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 14)));
    Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 15)));
    Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 16)));
    Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 17)));
    Var_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 18)));
    MaybeLock_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 19)));
    if ((MaybeLock_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__io__write_string_3_p_0(Var_12);
    else
    {
      MR_Box Lock_24 = ((MR_Box) (MR_hl_field(MR_mktag(1), MaybeLock_23, (MR_Integer) 0)));

      make__util__lock_stdout_3_p_0(Lock_24);
      mercury__io__write_string_3_p_0(Var_12);
      make__util__unlock_stdout_3_p_0(Lock_24);
    }
  }
}

void MR_CALL 
make__util__target_file_error_5_p_0(
  MR_Word Info_6,
  MR_Word Globals_7,
  MR_Word TargetFile_8)
{
  {
    MR_Word MaybeLock_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 19)));
    MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 0)));
    MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)));
    MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 2)));
    MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 3)));
    MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 4)));
    MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 5)));
    MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 6)));
    MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 7)));
    MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 8)));
    MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 9)));
    MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 10)));
    MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 11)));
    MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 12)));
    MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 13)));
    MR_Word Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 14)));
    MR_Word Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 15)));
    MR_Word Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 16)));
    MR_Word Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 17)));
    MR_Integer Var_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 18)));

    if ((MaybeLock_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      make__util__make_write_target_file_wrapped_6_p_0(Globals_7, (MR_String) "** Error making \140", TargetFile_8, (MR_String) "\'.\n");
    else
    {
      MR_Box Lock_24 = ((MR_Box) (MR_hl_field(MR_mktag(1), MaybeLock_23, (MR_Integer) 0)));

      make__util__lock_stdout_3_p_0(Lock_24);
      make__util__make_write_target_file_wrapped_6_p_0(Globals_7, (MR_String) "** Error making \140", TargetFile_8, (MR_String) "\'.\n");
      make__util__unlock_stdout_3_p_0(Lock_24);
    }
  }
}

void MR_CALL 
make__util__maybe_reanalyse_modules_message_3_p_0(
  MR_Word Globals_4)
{
  {
    MR_Word OptionValue_35;

    libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 61, &OptionValue_35);
    switch (OptionValue_35) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word OutputStream_43;

          mercury__io__output_stream_3_p_0(&OutputStream_43);
          mercury__io__write_string_4_p_0(OutputStream_43, (MR_String) "Reanalysing invalid/suboptimal modules\n");
          mercury__io__flush_output_2_p_0();
        }
        break;
    }
  }
}

void MR_CALL 
make__util__maybe_make_target_message_4_p_0(
  MR_Word Globals_5,
  MR_Word TargetFile_6)
{
  {
    MR_Word OutputStream_8;

    mercury__io__output_stream_3_p_0(&OutputStream_8);
    make__util__maybe_make_target_message_to_stream_5_p_0(Globals_5, OutputStream_8, TargetFile_6);
  }
}

void MR_CALL 
make__util__maybe_make_target_message_to_stream_5_p_0(
  MR_Word Globals_6,
  MR_Word OutputStream_7,
  MR_Word TargetFile_8)
{
  {
    MR_Word OptionValue_40;

    libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 61, &OptionValue_40);
    switch (OptionValue_40) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word OldOutputStream_49;
          MR_Word Var_50;

          mercury__io__set_output_stream_4_p_0(OutputStream_7, &OldOutputStream_49);
          make__util__make_write_target_file_wrapped_6_p_0(Globals_6, (MR_String) "Making ", TargetFile_8, (MR_String) "\n");
          mercury__io__set_output_stream_4_p_0(OldOutputStream_49, &Var_50);
          mercury__io__flush_output_2_p_0();
        }
        break;
    }
  }
}

void MR_CALL 
make__util__maybe_make_linked_target_message_4_p_0(
  MR_Word Globals_5,
  MR_String TargetFile_6)
{
  {
    MR_Word OptionValue_36;

    libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 61, &OptionValue_36);
    switch (OptionValue_36) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Var_51;
          MR_String Var_54;

          Var_54 = mercury__string__f_43_43_2_f_0(TargetFile_6, (MR_String) "\n");
          Var_51 = mercury__string__f_43_43_2_f_0((MR_String) "Making ", Var_54);
          mercury__io__write_string_3_p_0(Var_51);
          mercury__io__flush_output_2_p_0();
        }
        break;
    }
  }
}

void MR_CALL 
make__util__make_write_target_file_4_p_0(
  MR_Word Globals_5,
  MR_Word TargetFile_6)
{
  {
    make__util__make_write_target_file_wrapped_6_p_0(Globals_5, (MR_String) "", TargetFile_6, (MR_String) "");
  }
}

void MR_CALL 
make__util__make_write_dependency_file_list_4_p_0(
  MR_Word Globals_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for tailcalls optimized into a loop
    if (!((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Word DepFile_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word DepFiles_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word next_value_of_HeadVar__2_2;

      mercury__io__write_string_3_p_0((MR_String) "\t");
      if (((MR_tag((MR_Word) DepFile_10)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String FileName_27 = ((MR_String) (MR_hl_field(MR_mktag(1), DepFile_10, (MR_Integer) 0)));
        MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), DepFile_10, (MR_Integer) 1)));

        mercury__io__write_string_3_p_0(FileName_27);
      }
      else
      {
        MR_Word TargetFile_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), DepFile_10, (MR_Integer) 0)));

        make__util__make_write_target_file_wrapped_6_p_0(Globals_1, (MR_String) "", TargetFile_21, (MR_String) "");
      }
      mercury__io__nl_2_p_0();
      // direct tailcall eliminated
      next_value_of_HeadVar__2_2 = DepFiles_11;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

void MR_CALL 
make__util__make_write_dependency_file_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
  {
    MR_String FileName_12 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));

    mercury__io__write_string_3_p_0(FileName_12);
  }
  else
  {
    MR_Word TargetFile_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));

    make__util__make_write_target_file_wrapped_6_p_0(HeadVar__1_1, (MR_String) "", TargetFile_6, (MR_String) "");
  }
}

void MR_CALL 
make__util__debug_file_msg_5_p_0(
  MR_Word Globals_6,
  MR_Word TargetFile_7,
  MR_String Msg_8)
{
  {
    MR_Word OptionValue_38;

    libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 86, &OptionValue_38);
    switch (OptionValue_38) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          make__util__make_write_target_file_wrapped_6_p_0(Globals_6, (MR_String) "", TargetFile_7, (MR_String) "");
          mercury__io__write_string_3_p_0((MR_String) ": ");
          mercury__io__write_string_3_p_0(Msg_8);
          mercury__io__nl_2_p_0();
          mercury__io__flush_output_2_p_0();
        }
        break;
    }
  }
}

void MR_CALL 
make__util__make_write_target_file_wrapped_6_p_0(
  MR_Word Globals_7,
  MR_String Prefix_8,
  MR_Word TargetFile_9,
  MR_String Suffix_10)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), TargetFile_9, (MR_Integer) 0)));
    MR_Word FileType_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), TargetFile_9, (MR_Integer) 1)));
    MR_String FileName_14;

    make__util__module_target_to_file_name_maybe_search_8_p_0(Globals_7, (MR_Integer) 1, (MR_Integer) 1, FileType_13, ModuleName_12, &FileName_14);
    succeeded = (strcmp(Prefix_8, (MR_String) "") == 0);
    if (succeeded)
      succeeded = (strcmp(Suffix_10, (MR_String) "") == 0);
    if (succeeded)
      mercury__io__write_string_3_p_0(FileName_14);
    else
    {
      MR_String Var_20;
      MR_String Var_22;

      Var_22 = mercury__string__f_43_43_2_f_0(FileName_14, Suffix_10);
      Var_20 = mercury__string__f_43_43_2_f_0(Prefix_8, Var_22);
      mercury__io__write_string_3_p_0(Var_20);
    }
  }
}

void MR_CALL 
make__util__verbose_make_msg_option_5_p_0(
  MR_Word Globals_6,
  MR_Word Option_7,
  MR_Word P_8)
{
  {
    MR_Word OptionValue_10;

    libs__globals__lookup_bool_option_3_p_0(Globals_6, Option_7, &OptionValue_10);
    switch (OptionValue_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_8, (MR_Integer) 1)));
          MR_Box conv1_STATE_VARIABLE_IO_13_13;

          func_0(((MR_Box) P_8), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_13_13);
          mercury__io__flush_output_2_p_0();
        }
        break;
    }
  }
}

void MR_CALL 
make__util__verbose_make_msg_4_p_0(
  MR_Word Globals_5,
  MR_Word P_6)
{
  {
    MR_Word OptionValue_18;

    libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 61, &OptionValue_18);
    switch (OptionValue_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_6, (MR_Integer) 1)));
          MR_Box conv1_STATE_VARIABLE_IO_13_19;

          func_0(((MR_Box) P_6), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_13_19);
          mercury__io__flush_output_2_p_0();
        }
        break;
    }
  }
}

void MR_CALL 
make__util__debug_make_msg_4_p_0(
  MR_Word Globals_5,
  MR_Word P_6)
{
  {
    MR_Word OptionValue_18;

    libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 86, &OptionValue_18);
    switch (OptionValue_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), P_6, (MR_Integer) 1)));
          MR_Box conv1_STATE_VARIABLE_IO_13_19;

          func_0(((MR_Box) P_6), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_13_19);
          mercury__io__flush_output_2_p_0();
        }
        break;
    }
  }
}

MR_bool MR_CALL 
make__util__target_is_grade_or_arch_dependent_1_p_0(
  MR_Word Target_2)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Target_2)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        switch (MR_unmkbody(Target_2)) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 6:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 7:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 8:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 9:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 10:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 11:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 12:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 13:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 14:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 15:
            succeeded = MR_TRUE;
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), Target_2, (MR_Integer) 0)));

          succeeded = (Var_13 == (MR_Integer) 1);
        }
        break;
      case (MR_Integer) 2:
        succeeded = MR_TRUE;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Target_2, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 1:
            succeeded = MR_TRUE;
            break;
        }
        break;
    }
    return succeeded;
  }
}

void MR_CALL 
make__util__linked_target_file_name_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleName_8,
  MR_Word TargetType_9,
  MR_String * FileName_10)
{
  switch (TargetType_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 3:
      {
        parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_7, (MR_Integer) 1, (MR_String) ".exe", ModuleName_8, FileName_10);
      }
      break;
    case (MR_Integer) 4:
      {
        parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_7, (MR_Integer) 1, (MR_String) ".dll", ModuleName_8, FileName_10);
      }
      break;
    case (MR_Integer) 8:
      {
        parse_tree__file_names__module_name_to_lib_file_name_8_p_0(Globals_7, (MR_String) "lib", ModuleName_8, (MR_String) ".beams", (MR_Integer) 1, FileName_10);
      }
      break;
    case (MR_Integer) 7:
      {
        parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_7, (MR_Integer) 1, (MR_String) "", ModuleName_8, FileName_10);
      }
      break;
    case (MR_Integer) 0:
      {
        MR_String Ext_12;

        libs__globals__lookup_string_option_3_p_0(Globals_7, (MR_Integer) 580, &Ext_12);
        parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_7, (MR_Integer) 1, Ext_12, ModuleName_8, FileName_10);
      }
      break;
    case (MR_Integer) 6:
    case (MR_Integer) 5:
      {
        parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_7, (MR_Integer) 1, (MR_String) ".jar", ModuleName_8, FileName_10);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String Ext_43;

        libs__globals__lookup_string_option_3_p_0(Globals_7, (MR_Integer) 578, &Ext_43);
        parse_tree__file_names__module_name_to_lib_file_name_8_p_0(Globals_7, (MR_String) "lib", ModuleName_8, Ext_43, (MR_Integer) 1, FileName_10);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String Ext_42;

        libs__globals__lookup_string_option_3_p_0(Globals_7, (MR_Integer) 579, &Ext_42);
        parse_tree__file_names__module_name_to_lib_file_name_8_p_0(Globals_7, (MR_String) "lib", ModuleName_8, Ext_42, (MR_Integer) 1, FileName_10);
      }
      break;
  }
}

MR_bool MR_CALL 
make__util__target_extension_synonym_2_p_0(
  MR_String HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_bool succeeded = (strcmp(HeadVar__1_1, (MR_String) ".csharp") == 0);

    if (succeeded)
    {
      *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

void MR_CALL 
make__util__target_extension_2_f_1(
  MR_Word Globals_1,
  MR_Word * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    MR_bool succeeded;

    {
      MR_String Var_5;

      *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      Var_5 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      succeeded = (strcmp(Var_5, (MR_String) ".m") == 0);
      if (succeeded)
        cont(cont_env_ptr);
    }
    {
      MR_String Var_7;

      *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
      Var_7 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      succeeded = (strcmp(Var_7, (MR_String) ".err") == 0);
      if (succeeded)
        cont(cont_env_ptr);
    }
    {
      MR_String Var_9;

      *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
      Var_9 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      succeeded = (strcmp(Var_9, (MR_String) ".int0") == 0);
      if (succeeded)
        cont(cont_env_ptr);
    }
    {
      MR_String Var_11;

      *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
      Var_11 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      succeeded = (strcmp(Var_11, (MR_String) ".int") == 0);
      if (succeeded)
        cont(cont_env_ptr);
    }
    {
      MR_String Var_13;

      *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4));
      Var_13 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      succeeded = (strcmp(Var_13, (MR_String) ".int2") == 0);
      if (succeeded)
        cont(cont_env_ptr);
    }
    {
      MR_String Var_15;

      *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
      Var_15 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      succeeded = (strcmp(Var_15, (MR_String) ".int3") == 0);
      if (succeeded)
        cont(cont_env_ptr);
    }
    {
      MR_String Var_17;

      *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
      Var_17 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      succeeded = (strcmp(Var_17, (MR_String) ".opt") == 0);
      if (succeeded)
        cont(cont_env_ptr);
    }
    {
      MR_String Var_19;

      *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
      Var_19 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      succeeded = (strcmp(Var_19, (MR_String) ".analysis") == 0);
      if (succeeded)
        cont(cont_env_ptr);
    }
    {
      MR_String Var_21;

      *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
      Var_21 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      succeeded = (strcmp(Var_21, (MR_String) ".track_flags") == 0);
      if (succeeded)
        cont(cont_env_ptr);
    }
    {
      MR_String Var_24 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));

      succeeded = (strcmp(Var_24, (MR_String) ".mih") == 0);
      if (succeeded)
      {
        *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_7[21]);
        succeeded = MR_TRUE;
      }
      if (succeeded)
        cont(cont_env_ptr);
    }
    {
      MR_String Var_27 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));

      succeeded = (strcmp(Var_27, (MR_String) ".mh") == 0);
      if (succeeded)
      {
        *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_7[22]);
        succeeded = MR_TRUE;
      }
      if (succeeded)
        cont(cont_env_ptr);
    }
    {
      MR_String Var_29;

      *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
      Var_29 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      succeeded = (strcmp(Var_29, (MR_String) ".c") == 0);
      if (succeeded)
        cont(cont_env_ptr);
    }
    {
      MR_String Var_31;

      *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10));
      Var_31 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      succeeded = (strcmp(Var_31, (MR_String) ".cs") == 0);
      if (succeeded)
        cont(cont_env_ptr);
    }
    {
      MR_String Var_33;

      *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
      Var_33 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      succeeded = (strcmp(Var_33, (MR_String) ".java") == 0);
      if (succeeded)
        cont(cont_env_ptr);
    }
    {
      MR_String Var_35;

      *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12));
      Var_35 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      succeeded = (strcmp(Var_35, (MR_String) ".class") == 0);
      if (succeeded)
        cont(cont_env_ptr);
    }
    {
      MR_String Var_37;

      *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13));
      Var_37 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      succeeded = (strcmp(Var_37, (MR_String) ".hrl") == 0);
      if (succeeded)
        cont(cont_env_ptr);
    }
    {
      MR_String Var_39;

      *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14));
      Var_39 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      succeeded = (strcmp(Var_39, (MR_String) ".erl") == 0);
      if (succeeded)
        cont(cont_env_ptr);
    }
    {
      MR_String Var_41;

      *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 15));
      Var_41 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      succeeded = (strcmp(Var_41, (MR_String) ".beam") == 0);
      if (succeeded)
        cont(cont_env_ptr);
    }
    {
      MR_Word PIC_43;
      MR_String Ext_44 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));

      succeeded = backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_1(Globals_1, &PIC_43, Ext_44);
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (PIC_43));
        }
        succeeded = MR_TRUE;
      }
      if (succeeded)
        cont(cont_env_ptr);
    }
    {
      MR_String Var_46;

      *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16));
      Var_46 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      succeeded = (strcmp(Var_46, (MR_String) ".xml") == 0);
      if (succeeded)
        cont(cont_env_ptr);
    }
  }
}

static MR_Box MR_CALL 
make__util__make_dependency_list_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_9;

    conv0_LambdaHeadVar__2_9 = make__util__IntroducedFrom__func__make_dependency_list__1462__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_9));
    return wrapper_arg_2;
  }
}

MR_Word MR_CALL 
make__util__make_dependency_list_2_f_0(
  MR_Word ModuleNames_4,
  MR_Word FileType_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_Word Var_7;

    {
      Var_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_7, 0) = ((MR_Box) (&make__util_scalar_common_9[1]));
      MR_hl_field(MR_mktag(0), Var_7, 1) = ((MR_Box) (make__util__make_dependency_list_2_f_0_1));
      MR_hl_field(MR_mktag(0), Var_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_7, 3) = ((MR_Box) (FileType_5));
    }
    HeadVar__3_3 = mercury__list__map_2_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0, Var_7, ModuleNames_4);
    return HeadVar__3_3;
  }
}

static MR_Box MR_CALL 
make__util__make_target_file_list_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_9;

    conv0_LambdaHeadVar__2_9 = make__util__IntroducedFrom__func__make_target_file_list__1458__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_9));
    return wrapper_arg_2;
  }
}

MR_Word MR_CALL 
make__util__make_target_file_list_2_f_0(
  MR_Word ModuleNames_4,
  MR_Word FileType_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_Word Var_7;

    {
      Var_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_7, 0) = ((MR_Box) (&make__util_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), Var_7, 1) = ((MR_Box) (make__util__make_target_file_list_2_f_0_1));
      MR_hl_field(MR_mktag(0), Var_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_7, 3) = ((MR_Box) (FileType_5));
    }
    HeadVar__3_3 = mercury__list__map_2_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &make__make__type_ctor_info_target_file_0, Var_7, ModuleNames_4);
    return HeadVar__3_3;
  }
}

void MR_CALL 
make__util__make_remove_module_file_8_p_0(
  MR_Word Globals_9,
  MR_Word VerboseOption_10,
  MR_Word ModuleName_11,
  MR_String Ext_12,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  {
    MR_String FileName_15;

    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, Ext_12, ModuleName_11, &FileName_15);
    make__util__make_remove_file_7_p_0(Globals_9, VerboseOption_10, FileName_15, STATE_VARIABLE_Info_0_16, STATE_VARIABLE_Info_17);
  }
}

void MR_CALL 
make__util__make_remove_target_file_7_p_0(
  MR_Word Globals_8,
  MR_Word VerboseOption_9,
  MR_Word Target_10,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16)
{
  {
    MR_Word ModuleName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Target_10, (MR_Integer) 0)));
    MR_Word FileType_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Target_10, (MR_Integer) 1)));

    make__util__make_remove_target_file_by_name_8_p_0(Globals_8, VerboseOption_9, ModuleName_13, FileType_14, STATE_VARIABLE_Info_0_15, STATE_VARIABLE_Info_16);
  }
}

void MR_CALL 
make__util__make_remove_target_file_by_name_8_p_0(
  MR_Word Globals_9,
  MR_Word VerboseOption_10,
  MR_Word ModuleName_11,
  MR_Word FileType_12,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  {
    MR_bool succeeded;
    MR_String FileName_15;
    MR_Word STATE_VARIABLE_Info_23_23;
    MR_String TimestampExt_16;

    make__util__module_target_to_file_name_maybe_search_8_p_0(Globals_9, (MR_Integer) 1, (MR_Integer) 1, FileType_12, ModuleName_11, &FileName_15);
    make__util__make_remove_file_7_p_0(Globals_9, VerboseOption_10, FileName_15, STATE_VARIABLE_Info_0_17, &STATE_VARIABLE_Info_23_23);
    succeeded = make__util__timestamp_extension_2_p_0(FileType_12, &TimestampExt_16);
    if (succeeded)
    {
      MR_String FileName_47;

      parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, TimestampExt_16, ModuleName_11, &FileName_47);
      make__util__make_remove_file_7_p_0(Globals_9, VerboseOption_10, FileName_47, STATE_VARIABLE_Info_23_23, STATE_VARIABLE_Info_18);
    }
    else
      *STATE_VARIABLE_Info_18 = STATE_VARIABLE_Info_23_23;
  }
}

void MR_CALL 
make__util__make_remove_file_7_p_0(
  MR_Word Globals_8,
  MR_Word VerboseOption_9,
  MR_String FileName_10,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  {
    MR_Word FileTimestamps0_14;
    MR_Word FileTimestamps_15;
    MR_Word OptionValue_73;
    MR_Word Var_13;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Integer Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Integer Var_61;
    MR_Word Var_62;
    MR_Word Var_44;

    libs__globals__lookup_bool_option_3_p_0(Globals_8, VerboseOption_9, &OptionValue_73);
    switch (OptionValue_73) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__write_string_3_p_0((MR_String) "Removing ");
          mercury__io__write_string_3_p_0(FileName_10);
          mercury__io__nl_2_p_0();
          mercury__io__flush_output_2_p_0();
        }
        break;
    }
    mercury__io__remove_file_recursively_4_p_0(FileName_10, &Var_13);
    Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 0)));
    FileTimestamps0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 1)));
    Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 2)));
    Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 3)));
    Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 4)));
    Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 5)));
    Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 6)));
    Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 7)));
    Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 8)));
    Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 9)));
    Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 10)));
    Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 11)));
    Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 12)));
    Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 13)));
    Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 14)));
    Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 15)));
    Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 16)));
    Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 17)));
    Var_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 18)));
    Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 19)));
    mercury__map__delete_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &make__util_scalar_common_1[0], ((MR_Box) (FileName_10)), FileTimestamps0_14, &FileTimestamps_15);
    Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 0)));
    Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 1)));
    Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 2)));
    Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 3)));
    Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 4)));
    Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 5)));
    Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 6)));
    Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 7)));
    Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 8)));
    Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 9)));
    Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 10)));
    Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 11)));
    Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 12)));
    Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 13)));
    Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 14)));
    Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 15)));
    Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 16)));
    Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 17)));
    Var_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 18)));
    Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 19)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_17 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (FileTimestamps_15));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_57));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_58));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_60));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_61));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_62));
    }
  }
}

MR_Word MR_CALL 
make__util__find_oldest_timestamp_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word HeadVar__3_3;

    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
      HeadVar__3_3 = HeadVar__1_1;
    else
    {
      MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
        HeadVar__3_3 = HeadVar__2_2;
      else
      {
        MR_Word Timestamp2_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
        MR_Word Timestamp_12;
        MR_Word Var_15;

        libs__timestamp____Compare____timestamp_0_0(&Var_15, Var_16, Timestamp2_11);
        succeeded = ((MR_Integer) 1 == Var_15);
        if (succeeded)
          Timestamp_12 = Var_16;
        else
          Timestamp_12 = Timestamp2_11;
        {
          HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), HeadVar__3_3, 0) = ((MR_Box) (Timestamp_12));
        }
      }
    }
    return HeadVar__3_3;
  }
}

void MR_CALL 
make__util__get_target_timestamp_8_p_0(
  MR_Word Globals_9,
  MR_Word Search_10,
  MR_Word TargetFile_11,
  MR_Word * MaybeTimestamp_12,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19)
{
  {
    MR_bool succeeded;
    MR_Word FileType_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), TargetFile_11, (MR_Integer) 1)));
    MR_String FileName_17;
    MR_Word STATE_VARIABLE_Info_22_22;
    MR_Word _ModuleName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), TargetFile_11, (MR_Integer) 0)));

    make__util__get_file_name_8_p_0(Globals_9, Search_10, TargetFile_11, &FileName_17, STATE_VARIABLE_Info_0_18, &STATE_VARIABLE_Info_22_22);
    succeeded = (FileType_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
    if (succeeded)
      make__util__get_target_timestamp_analysis_registry_9_p_0(Globals_9, Search_10, TargetFile_11, FileName_17, MaybeTimestamp_12, STATE_VARIABLE_Info_22_22, STATE_VARIABLE_Info_19);
    else
      make__util__get_target_timestamp_2_9_p_0(Globals_9, Search_10, TargetFile_11, FileName_17, MaybeTimestamp_12, STATE_VARIABLE_Info_22_22, STATE_VARIABLE_Info_19);
  }
}

void MR_CALL 
make__util__get_dependency_timestamp_7_p_0(
  MR_Word Globals_8,
  MR_Word DependencyFile_9,
  MR_Word * MaybeTimestamp_10,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) DependencyFile_9)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_String FileName_13 = ((MR_String) (MR_hl_field(MR_mktag(1), DependencyFile_9, (MR_Integer) 0)));
      MR_Word MaybeOption_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), DependencyFile_9, (MR_Integer) 1)));
      MR_Word SearchDirs_16;

      if ((MaybeOption_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_String Var_31;

        Var_31 = mercury__dir__this_directory_0_f_0();
        {
          SearchDirs_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), SearchDirs_16, 0) = ((MR_Box) (Var_31));
          MR_hl_field(MR_mktag(1), SearchDirs_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
      else
      {
        MR_Word Option_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeOption_14, (MR_Integer) 0)));

        libs__globals__lookup_accumulating_option_3_p_0(Globals_8, Option_15, &SearchDirs_16);
      }
      make__util__get_file_timestamp_7_p_0(SearchDirs_16, FileName_13, MaybeTimestamp_10, STATE_VARIABLE_Info_0_21, STATE_VARIABLE_Info_22);
    }
    else
    {
      MR_Word Target_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), DependencyFile_9, (MR_Integer) 0)));
      MR_Word MaybeTimestamp0_18;
      MR_Word FileType_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), Target_17, (MR_Integer) 1)));
      MR_String FileName_47;
      MR_Word STATE_VARIABLE_Info_22_48;
      MR_Word _ModuleName_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), Target_17, (MR_Integer) 0)));
      MR_Word Var_28;
      MR_Word Var_29;
      MR_Word Var_20;
      MR_Word Var_19;

      make__util__get_file_name_8_p_0(Globals_8, (MR_Integer) 0, Target_17, &FileName_47, STATE_VARIABLE_Info_0_21, &STATE_VARIABLE_Info_22_48);
      succeeded = (FileType_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
      if (succeeded)
        make__util__get_target_timestamp_analysis_registry_9_p_0(Globals_8, (MR_Integer) 0, Target_17, FileName_47, &MaybeTimestamp0_18, STATE_VARIABLE_Info_22_48, STATE_VARIABLE_Info_22);
      else
        make__util__get_target_timestamp_2_9_p_0(Globals_8, (MR_Integer) 0, Target_17, FileName_47, &MaybeTimestamp0_18, STATE_VARIABLE_Info_22_48, STATE_VARIABLE_Info_22);
      succeeded = ((MR_tag((MR_Word) MaybeTimestamp0_18)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), MaybeTimestamp0_18, (MR_Integer) 0)));
        Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Target_17, (MR_Integer) 0)));
        Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), Target_17, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) Var_28)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_28, (MR_Integer) 0)));
          succeeded = (Var_29 == (MR_Integer) 1);
        }
      }
      if (succeeded)
      {
        MR_Word Var_30;

        Var_30 = libs__timestamp__oldest_timestamp_0_f_0();
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeTimestamp_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_30));
        }
      }
      else
        *MaybeTimestamp_10 = MaybeTimestamp0_18;
    }
  }
}

static void MR_CALL 
make__util__get_target_timestamp_analysis_registry_9_p_0(
  MR_Word Globals_10,
  MR_Word Search_11,
  MR_Word TargetFile_12,
  MR_String FileName_13,
  MR_Word * MaybeTimestamp_14,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), TargetFile_12, (MR_Integer) 0)));
    MR_Word _FileType_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), TargetFile_12, (MR_Integer) 1)));
    MR_Word MaybeTimestamp0_19;
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 1)));
    MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 0)));
    MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 2)));
    MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 3)));
    MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 4)));
    MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 5)));
    MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 6)));
    MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 7)));
    MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 8)));
    MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 9)));
    MR_Word Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 10)));
    MR_Word Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 11)));
    MR_Word Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 12)));
    MR_Word Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 13)));
    MR_Word Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 14)));
    MR_Word Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 15)));
    MR_Word Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 16)));
    MR_Word Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 17)));
    MR_Integer Var_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 18)));
    MR_Word Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 19)));
    MR_Box conv0_MaybeTimestamp0_19;

    succeeded = mercury__map__elem_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &make__util_scalar_common_1[0], ((MR_Box) (FileName_13)), Var_25, &conv0_MaybeTimestamp0_19);
    if (succeeded)
    {
      MaybeTimestamp0_19 = ((MR_Word) conv0_MaybeTimestamp0_19);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      *MaybeTimestamp_14 = MaybeTimestamp0_19;
      *STATE_VARIABLE_Info_22 = STATE_VARIABLE_Info_0_21;
    }
    else
    {
      MR_Word Status_20;

      analysis__do_read_module_overall_status_6_p_0((MR_Word) &make__util_scalar_common_2[1], ((MR_Box) ((MR_Integer) 0)), Globals_10, ModuleName_17, &Status_20);
      switch (Status_20) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_30;
            MR_Word Var_31;
            MR_Word Var_53;
            MR_Word Var_54;
            MR_Word Var_55;
            MR_Word Var_56;
            MR_Word Var_57;
            MR_Word Var_58;
            MR_Word Var_59;
            MR_Word Var_60;
            MR_Word Var_61;
            MR_Word Var_62;
            MR_Word Var_63;
            MR_Word Var_64;
            MR_Word Var_65;
            MR_Word Var_66;
            MR_Word Var_67;
            MR_Word Var_68;
            MR_Word Var_69;
            MR_Integer Var_70;
            MR_Word Var_71;
            MR_Word Var_72;
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
            MR_Word Var_89;
            MR_Integer Var_90;
            MR_Word Var_91;
            MR_Word Var_73;

            *MaybeTimestamp_14 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_7[20]);
            Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 0)));
            Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 1)));
            Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 2)));
            Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 3)));
            Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 4)));
            Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 5)));
            Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 6)));
            Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 7)));
            Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 8)));
            Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 9)));
            Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 10)));
            Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 11)));
            Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 12)));
            Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 13)));
            Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 14)));
            Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 15)));
            Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 16)));
            Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 17)));
            Var_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 18)));
            Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 19)));
            Var_31 = mercury__map__f_101_108_101_109_32_58_61_3_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &make__util_scalar_common_1[0], ((MR_Box) (FileName_13)), Var_30, ((MR_Box) (*MaybeTimestamp_14)));
            Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 0)));
            Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 1)));
            Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 2)));
            Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 3)));
            Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 4)));
            Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 5)));
            Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 6)));
            Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 7)));
            Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 8)));
            Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 9)));
            Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 10)));
            Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 11)));
            Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 12)));
            Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 13)));
            Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 14)));
            Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 15)));
            Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 16)));
            Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 17)));
            Var_90 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 18)));
            Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 19)));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_Info_22 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_72));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_31));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_74));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_75));
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_76));
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_77));
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_78));
              MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_79));
              MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_80));
              MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_81));
              MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_82));
              MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_83));
              MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_84));
              MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_85));
              MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_86));
              MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_87));
              MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_88));
              MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_89));
              MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_90));
              MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_91));
            }
          }
          break;
        case (MR_Integer) 2:
        case (MR_Integer) 1:
          make__util__get_target_timestamp_2_9_p_0(Globals_10, Search_11, TargetFile_12, FileName_13, MaybeTimestamp_14, STATE_VARIABLE_Info_0_21, STATE_VARIABLE_Info_22);
          break;
      }
    }
  }
}

static void MR_CALL 
make__util__get_target_timestamp_2_9_p_0(
  MR_Word Globals_10,
  MR_Word Search_11,
  MR_Word TargetFile_12,
  MR_String FileName_13,
  MR_Word * MaybeTimestamp_14,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), TargetFile_12, (MR_Integer) 0)));
    MR_Word FileType_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), TargetFile_12, (MR_Integer) 1)));
    MR_Word SearchDirs_19;
    MR_Word MaybeTimestamp0_20;
    MR_Word STATE_VARIABLE_Info_30_30;
    MR_String Var_21;

    switch (Search_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_String Var_28;

          Var_28 = mercury__dir__this_directory_0_f_0();
          {
            SearchDirs_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), SearchDirs_19, 0) = ((MR_Box) (Var_28));
            MR_hl_field(MR_mktag(1), SearchDirs_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        }
        break;
      case (MR_Integer) 0:
        make__util__get_search_directories_3_p_0(Globals_10, FileType_18, &SearchDirs_19);
        break;
    }
    make__util__get_file_timestamp_7_p_0(SearchDirs_19, FileName_13, &MaybeTimestamp0_20, STATE_VARIABLE_Info_0_24, &STATE_VARIABLE_Info_30_30);
    succeeded = ((MR_tag((MR_Word) MaybeTimestamp0_20)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      Var_21 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeTimestamp0_20, (MR_Integer) 0)));
      if ((FileType_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
        succeeded = MR_TRUE;
      else
      if ((FileType_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
        succeeded = MR_TRUE;
      else
        succeeded = MR_FALSE;
    }
    if (succeeded)
    {
      MR_Word MaybeImports_22;
      MR_Word STATE_VARIABLE_Info_32_32;
      MR_Word Imports_23;
      MR_String Var_34;
      MR_String Var_106;
      MR_String Var_39;
      MR_Word Var_40;
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word Var_44;
      MR_Word Var_45;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_48;
      MR_Word Var_49;
      MR_Word Var_50;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Word Var_53;
      MR_Word Var_54;
      MR_Word Var_55;
      MR_Word Var_56;
      MR_Word Var_57;
      MR_Word Var_58;
      MR_Word Var_59;
      MR_Word Var_60;
      MR_Word Var_61;
      MR_Word Var_62;
      MR_Word Var_63;
      MR_Word Var_64;

      make__module_dep_file__get_module_dependencies_7_p_0(Globals_10, ModuleName_17, &MaybeImports_22, STATE_VARIABLE_Info_30_30, &STATE_VARIABLE_Info_32_32);
      succeeded = ((MR_tag((MR_Word) MaybeImports_22)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Imports_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeImports_22, (MR_Integer) 0)));
        Var_39 = ((MR_String) (MR_hl_field(MR_mktag(0), Imports_23, (MR_Integer) 0)));
        Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_23, (MR_Integer) 1)));
        Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_23, (MR_Integer) 2)));
        Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_23, (MR_Integer) 3)));
        Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_23, (MR_Integer) 4)));
        Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_23, (MR_Integer) 5)));
        Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_23, (MR_Integer) 6)));
        Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_23, (MR_Integer) 7)));
        Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_23, (MR_Integer) 8)));
        Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_23, (MR_Integer) 9)));
        Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_23, (MR_Integer) 10)));
        Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_23, (MR_Integer) 11)));
        Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_23, (MR_Integer) 12)));
        Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_23, (MR_Integer) 13)));
        Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_23, (MR_Integer) 14)));
        Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_23, (MR_Integer) 15)));
        Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_23, (MR_Integer) 16)));
        Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_23, (MR_Integer) 17)));
        Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_23, (MR_Integer) 18)));
        Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_23, (MR_Integer) 19)));
        Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_23, (MR_Integer) 20)));
        Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_23, (MR_Integer) 21)));
        Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_23, (MR_Integer) 22)));
        Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_23, (MR_Integer) 23)));
        Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_23, (MR_Integer) 24)));
        Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_23, (MR_Integer) 25)));
        Var_34 = ((MR_String) (MR_hl_field(MR_mktag(0), Imports_23, (MR_Integer) 26)));
        Var_106 = mercury__dir__this_directory_0_f_0();
        succeeded = (strcmp(Var_34, Var_106) == 0);
        succeeded = !(succeeded);
      }
      if (succeeded)
      {
        MR_Word Var_35;
        MR_Word Var_37;
        MR_Word Var_38;
        MR_Word Var_65;
        MR_Word Var_66;
        MR_Word Var_67;
        MR_Word Var_68;
        MR_Word Var_69;
        MR_Word Var_70;
        MR_Word Var_71;
        MR_Word Var_72;
        MR_Word Var_73;
        MR_Word Var_74;
        MR_Word Var_75;
        MR_Word Var_76;
        MR_Word Var_77;
        MR_Word Var_78;
        MR_Word Var_79;
        MR_Word Var_80;
        MR_Word Var_81;
        MR_Integer Var_82;
        MR_Word Var_83;
        MR_Word Var_84;
        MR_Word Var_86;
        MR_Word Var_87;
        MR_Word Var_88;
        MR_Word Var_89;
        MR_Word Var_90;
        MR_Word Var_91;
        MR_Word Var_92;
        MR_Word Var_93;
        MR_Word Var_94;
        MR_Word Var_95;
        MR_Word Var_96;
        MR_Word Var_97;
        MR_Word Var_98;
        MR_Word Var_99;
        MR_Word Var_100;
        MR_Word Var_101;
        MR_Integer Var_102;
        MR_Word Var_103;
        MR_Word Var_85;

        Var_35 = libs__timestamp__oldest_timestamp_0_f_0();
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeTimestamp_14 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_35));
        }
        Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 0)));
        Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 1)));
        Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 2)));
        Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 3)));
        Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 4)));
        Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 5)));
        Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 6)));
        Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 7)));
        Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 8)));
        Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 9)));
        Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 10)));
        Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 11)));
        Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 12)));
        Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 13)));
        Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 14)));
        Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 15)));
        Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 16)));
        Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 17)));
        Var_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 18)));
        Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 19)));
        Var_38 = mercury__map__f_101_108_101_109_32_58_61_3_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &make__util_scalar_common_1[0], ((MR_Box) (FileName_13)), Var_37, ((MR_Box) (*MaybeTimestamp_14)));
        Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 0)));
        Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 1)));
        Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 2)));
        Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 3)));
        Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 4)));
        Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 5)));
        Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 6)));
        Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 7)));
        Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 8)));
        Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 9)));
        Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 10)));
        Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 11)));
        Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 12)));
        Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 13)));
        Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 14)));
        Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 15)));
        Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 16)));
        Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 17)));
        Var_102 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 18)));
        Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 19)));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Info_25 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_84));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_38));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_86));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_87));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_88));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_89));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_90));
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_91));
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_92));
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_93));
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_94));
          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_95));
          MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_96));
          MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_97));
          MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_98));
          MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_99));
          MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_100));
          MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_101));
          MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_102));
          MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_103));
        }
      }
      else
      {
        *MaybeTimestamp_14 = MaybeTimestamp0_20;
        *STATE_VARIABLE_Info_25 = STATE_VARIABLE_Info_32_32;
      }
    }
    else
    {
      *MaybeTimestamp_14 = MaybeTimestamp0_20;
      *STATE_VARIABLE_Info_25 = STATE_VARIABLE_Info_30_30;
    }
  }
}

static void MR_CALL 
make__util__get_search_directories_3_p_0(
  MR_Word Globals_4,
  MR_Word FileType_5,
  MR_Word * SearchDirs_6)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) FileType_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(FileType_5)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 8:
          case (MR_Integer) 9:
          case (MR_Integer) 10:
          case (MR_Integer) 11:
          case (MR_Integer) 12:
          case (MR_Integer) 14:
          case (MR_Integer) 15:
          case (MR_Integer) 16:
            {
              MR_String Var_10;

              Var_10 = mercury__dir__this_directory_0_f_0();
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *SearchDirs_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_10));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
            {
              MR_Word SearchDirs0_64;
              MR_String Var_56;

              libs__globals__lookup_accumulating_option_3_p_0(Globals_4, (MR_Integer) 653, &SearchDirs0_64);
              Var_56 = mercury__dir__this_directory_0_f_0();
              succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (Var_56)), SearchDirs0_64);
              if (succeeded)
                *SearchDirs_6 = SearchDirs0_64;
              else
              {
                MR_String Var_58;

                Var_58 = mercury__dir__this_directory_0_f_0();
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *SearchDirs_6 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_58));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SearchDirs0_64));
                }
              }
            }
            break;
          case (MR_Integer) 6:
          case (MR_Integer) 7:
            {
              MR_Word SearchDirs0_9;
              MR_String Var_12;

              libs__globals__lookup_accumulating_option_3_p_0(Globals_4, (MR_Integer) 654, &SearchDirs0_9);
              Var_12 = mercury__dir__this_directory_0_f_0();
              succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (Var_12)), SearchDirs0_9);
              if (succeeded)
                *SearchDirs_6 = SearchDirs0_9;
              else
              {
                MR_String Var_13;

                Var_13 = mercury__dir__this_directory_0_f_0();
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *SearchDirs_6 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_13));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SearchDirs0_9));
                }
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word SearchDirs0_51;
              MR_String Var_43;

              libs__globals__lookup_accumulating_option_3_p_0(Globals_4, (MR_Integer) 538, &SearchDirs0_51);
              Var_43 = mercury__dir__this_directory_0_f_0();
              succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (Var_43)), SearchDirs0_51);
              if (succeeded)
                *SearchDirs_6 = SearchDirs0_51;
              else
              {
                MR_String Var_45;

                Var_45 = mercury__dir__this_directory_0_f_0();
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *SearchDirs_6 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_45));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SearchDirs0_51));
                }
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word SearchDirs0_38;
          MR_String Var_30;

          libs__globals__lookup_accumulating_option_3_p_0(Globals_4, (MR_Integer) 500, &SearchDirs0_38);
          Var_30 = mercury__dir__this_directory_0_f_0();
          succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (Var_30)), SearchDirs0_38);
          if (succeeded)
            *SearchDirs_6 = SearchDirs0_38;
          else
          {
            MR_String Var_32;

            Var_32 = mercury__dir__this_directory_0_f_0();
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *SearchDirs_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_32));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SearchDirs0_38));
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String Var_10;

          Var_10 = mercury__dir__this_directory_0_f_0();
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *SearchDirs_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_10));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_String Var_10;

          Var_10 = mercury__dir__this_directory_0_f_0();
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *SearchDirs_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_10));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        }
        break;
    }
  }
}

void MR_CALL 
make__util__get_file_name_8_p_0(
  MR_Word Globals_9,
  MR_Word Search_10,
  MR_Word TargetFile_11,
  MR_String * FileName_12,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), TargetFile_11, (MR_Integer) 0)));
    MR_Word FileType_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), TargetFile_11, (MR_Integer) 1)));

    succeeded = (FileType_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (succeeded)
    {
      MR_Word MaybeImports_17;

      make__module_dep_file__get_module_dependencies_7_p_0(Globals_9, ModuleName_15, &MaybeImports_17, STATE_VARIABLE_Info_0_21, STATE_VARIABLE_Info_22);
      if ((MaybeImports_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, (MR_String) ".m", ModuleName_15, FileName_12);
      }
      else
      {
        MR_Word Imports_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeImports_17, (MR_Integer) 0)));
        MR_Word Var_36;
        MR_Word Var_37;
        MR_Word Var_38;
        MR_Word Var_39;
        MR_Word Var_40;
        MR_Word Var_41;
        MR_Word Var_42;
        MR_Word Var_43;
        MR_Word Var_44;
        MR_Word Var_45;
        MR_Word Var_46;
        MR_Word Var_47;
        MR_Word Var_48;
        MR_Word Var_49;
        MR_Word Var_50;
        MR_Word Var_51;
        MR_Word Var_52;
        MR_Word Var_53;
        MR_Word Var_54;
        MR_Word Var_55;
        MR_Word Var_56;
        MR_Word Var_57;
        MR_Word Var_58;
        MR_Word Var_59;
        MR_Word Var_60;
        MR_String Var_61;

        *FileName_12 = ((MR_String) (MR_hl_field(MR_mktag(0), Imports_18, (MR_Integer) 0)));
        Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_18, (MR_Integer) 1)));
        Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_18, (MR_Integer) 2)));
        Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_18, (MR_Integer) 3)));
        Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_18, (MR_Integer) 4)));
        Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_18, (MR_Integer) 5)));
        Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_18, (MR_Integer) 6)));
        Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_18, (MR_Integer) 7)));
        Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_18, (MR_Integer) 8)));
        Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_18, (MR_Integer) 9)));
        Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_18, (MR_Integer) 10)));
        Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_18, (MR_Integer) 11)));
        Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_18, (MR_Integer) 12)));
        Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_18, (MR_Integer) 13)));
        Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_18, (MR_Integer) 14)));
        Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_18, (MR_Integer) 15)));
        Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_18, (MR_Integer) 16)));
        Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_18, (MR_Integer) 17)));
        Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_18, (MR_Integer) 18)));
        Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_18, (MR_Integer) 19)));
        Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_18, (MR_Integer) 20)));
        Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_18, (MR_Integer) 21)));
        Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_18, (MR_Integer) 22)));
        Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_18, (MR_Integer) 23)));
        Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_18, (MR_Integer) 24)));
        Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_18, (MR_Integer) 25)));
        Var_61 = ((MR_String) (MR_hl_field(MR_mktag(0), Imports_18, (MR_Integer) 26)));
      }
    }
    else
    {
      MR_Word MaybeExt_19;

      MaybeExt_19 = make__util__target_extension_2_f_0(Globals_9, FileType_16);
      if ((MaybeExt_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        make__util__module_target_to_file_name_maybe_search_8_p_0(Globals_9, Search_10, (MR_Integer) 1, FileType_16, ModuleName_15, FileName_12);
        *STATE_VARIABLE_Info_22 = STATE_VARIABLE_Info_0_21;
      }
      else
      {
        MR_String Ext_20 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeExt_19, (MR_Integer) 0)));

        switch (Search_10) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, Ext_20, ModuleName_15, FileName_12);
              *STATE_VARIABLE_Info_22 = STATE_VARIABLE_Info_0_21;
            }
            break;
          case (MR_Integer) 0:
            make__util__module_name_to_search_file_name_cache_8_p_0(Globals_9, Ext_20, ModuleName_15, FileName_12, STATE_VARIABLE_Info_0_21, STATE_VARIABLE_Info_22);
            break;
        }
      }
    }
  }
}

static void MR_CALL 
make__util__module_name_to_search_file_name_cache_8_p_0(
  MR_Word Globals_9,
  MR_String Ext_10,
  MR_Word ModuleName_11,
  MR_String * FileName_12,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  {
    MR_bool succeeded;
    MR_Word Key_15;
    MR_String FileName0_16;
    MR_Word Var_21;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Integer Var_43;
    MR_Word Var_44;
    MR_Box conv0_FileName0_16;

    {
      Key_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Key_15, 0) = ((MR_Box) (ModuleName_11));
      MR_hl_field(MR_mktag(0), Key_15, 1) = ((MR_Box) (Ext_10));
    }
    Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
    Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 1)));
    Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
    Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
    Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 4)));
    Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 5)));
    Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 6)));
    Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 7)));
    Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 8)));
    Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 9)));
    Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 10)));
    Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 11)));
    Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 12)));
    Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 13)));
    Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 14)));
    Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 15)));
    Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 16)));
    Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 17)));
    Var_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 18)));
    Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 19)));
    succeeded = mercury__map__search_3_p_0((MR_Word) &make__util_scalar_common_1[2], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, Var_21, ((MR_Box) (Key_15)), &conv0_FileName0_16);
    if (succeeded)
    {
      FileName0_16 = ((MR_String) conv0_FileName0_16);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      *FileName_12 = FileName0_16;
      *STATE_VARIABLE_Info_18 = STATE_VARIABLE_Info_0_17;
    }
    else
    {
      MR_Word Var_24;
      MR_Word Var_25;
      MR_Word Var_45;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_48;
      MR_Word Var_49;
      MR_Word Var_50;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Word Var_53;
      MR_Word Var_54;
      MR_Word Var_55;
      MR_Word Var_56;
      MR_Word Var_57;
      MR_Word Var_58;
      MR_Word Var_59;
      MR_Word Var_60;
      MR_Word Var_61;
      MR_Integer Var_62;
      MR_Word Var_63;
      MR_Word Var_64;
      MR_Word Var_65;
      MR_Word Var_67;
      MR_Word Var_68;
      MR_Word Var_69;
      MR_Word Var_70;
      MR_Word Var_71;
      MR_Word Var_72;
      MR_Word Var_73;
      MR_Word Var_74;
      MR_Word Var_75;
      MR_Word Var_76;
      MR_Word Var_77;
      MR_Word Var_78;
      MR_Word Var_79;
      MR_Word Var_80;
      MR_Word Var_81;
      MR_Integer Var_82;
      MR_Word Var_83;
      MR_Word Var_66;

      parse_tree__file_names__module_name_to_search_file_name_6_p_0(Globals_9, Ext_10, ModuleName_11, FileName_12);
      Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
      Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 1)));
      Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
      Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
      Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 4)));
      Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 5)));
      Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 6)));
      Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 7)));
      Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 8)));
      Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 9)));
      Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 10)));
      Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 11)));
      Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 12)));
      Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 13)));
      Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 14)));
      Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 15)));
      Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 16)));
      Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 17)));
      Var_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 18)));
      Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 19)));
      Var_25 = mercury__map__f_101_108_101_109_32_58_61_3_f_0((MR_Word) &make__util_scalar_common_1[2], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (Key_15)), Var_24, ((MR_Box) (*FileName_12)));
      Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
      Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 1)));
      Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
      Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
      Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 4)));
      Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 5)));
      Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 6)));
      Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 7)));
      Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 8)));
      Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 9)));
      Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 10)));
      Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 11)));
      Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 12)));
      Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 13)));
      Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 14)));
      Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 15)));
      Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 16)));
      Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 17)));
      Var_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 18)));
      Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 19)));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_18 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_64));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_65));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_25));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_67));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_68));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_69));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_70));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_71));
        MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_72));
        MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_73));
        MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_74));
        MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_75));
        MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_76));
        MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_77));
        MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_78));
        MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_79));
        MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_80));
        MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_81));
        MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_82));
        MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_83));
      }
    }
  }
}

void MR_CALL 
make__util__get_timestamp_file_timestamp_7_p_0(
  MR_Word Globals_8,
  MR_Word HeadVar__2_2,
  MR_Word * MaybeTimestamp_11,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word FileType_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
    MR_String FileName_15;
    MR_Word SearchDirs_16;
    MR_String Var_25;
    MR_String TimestampExt_14;

    succeeded = make__util__timestamp_extension_2_p_0(FileType_10, &TimestampExt_14);
    if (succeeded)
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_8, (MR_Integer) 1, TimestampExt_14, ModuleName_9, &FileName_15);
    }
    else
    {
      make__util__module_target_to_file_name_maybe_search_8_p_0(Globals_8, (MR_Integer) 1, (MR_Integer) 1, FileType_10, ModuleName_9, &FileName_15);
    }
    Var_25 = mercury__dir__this_directory_0_f_0();
    {
      SearchDirs_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), SearchDirs_16, 0) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(1), SearchDirs_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    make__util__get_file_timestamp_7_p_0(SearchDirs_16, FileName_15, MaybeTimestamp_11, STATE_VARIABLE_Info_0_17, STATE_VARIABLE_Info_18);
  }
}

static void MR_CALL 
make__util__module_target_to_file_name_maybe_search_8_p_0(
  MR_Word Globals_9,
  MR_Word Search_10,
  MR_Word MkDir_11,
  MR_Word TargetType_12,
  MR_Word ModuleName_13,
  MR_String * FileName_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word MaybeExt_16;

    // setup for tailcalls optimized into a loop
    MaybeExt_16 = make__util__target_extension_2_f_0(Globals_9, TargetType_12);
    if ((MaybeExt_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      switch (MR_tag((MR_Word) TargetType_12)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "make.util", (MR_String) "predicate \140make.util.module_target_to_file_name_maybe_search\'/8", (MR_String) "unexpected TargetType");
              return;
            }
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "make.util", (MR_String) "predicate \140make.util.module_target_to_file_name_maybe_search\'/8", (MR_String) "unexpected TargetType");
              return;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TargetType_12, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word PIC_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), TargetType_12, (MR_Integer) 1)));
                MR_Word Lang_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), TargetType_12, (MR_Integer) 2)));
                MR_Word ForeignModuleName_20;

                succeeded = parse_tree__prog_foreign__foreign_language_module_name_2_f_0(ModuleName_13, Lang_19, &ForeignModuleName_20);
                if (succeeded)
                {
                  MR_Word Var_30;
                  MR_Word next_value_of_TargetType_12;
                  MR_Word next_value_of_ModuleName_13;

                  {
                    Var_30 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Var_30, 0) = ((MR_Box) (PIC_18));
                  }
                  // direct tailcall eliminated
                  next_value_of_TargetType_12 = Var_30;
                  next_value_of_ModuleName_13 = ForeignModuleName_20;
                  TargetType_12 = next_value_of_TargetType_12;
                  ModuleName_13 = next_value_of_ModuleName_13;
                  continue;
                }
                else
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "make.util", (MR_String) "predicate \140make.util.module_target_to_file_name_maybe_search\'/8", (MR_String) "object test failed");
                    return;
                  }
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String FactFile_21 = ((MR_String) (MR_hl_field(MR_mktag(3), TargetType_12, (MR_Integer) 2)));
                MR_String Ext_37;
                MR_Word PIC_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), TargetType_12, (MR_Integer) 1)));

                backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(Globals_9, PIC_38, &Ext_37);
                parse_tree__file_names__fact_table_file_name_8_p_0(Globals_9, ModuleName_13, FactFile_21, Ext_37, MkDir_11, FileName_14);
              }
              break;
          }
          break;
      }
    else
    {
      MR_String Ext_17 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeExt_16, (MR_Integer) 0)));

      switch (Search_10) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, MkDir_11, Ext_17, ModuleName_13, FileName_14);
          break;
        case (MR_Integer) 0:
          parse_tree__file_names__module_name_to_search_file_name_6_p_0(Globals_9, Ext_17, ModuleName_13, FileName_14);
          break;
      }
    }
    break;
  }
}

MR_Word MR_CALL 
make__util__target_extension_2_f_0(
  MR_Word Globals_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word HeadVar__3_3;

    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_7[16]);
            }
            break;
          case (MR_Integer) 1:
            {
              HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_7[9]);
            }
            break;
          case (MR_Integer) 2:
            {
              HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_7[14]);
            }
            break;
          case (MR_Integer) 3:
            {
              HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_7[13]);
            }
            break;
          case (MR_Integer) 4:
            {
              HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_7[15]);
            }
            break;
          case (MR_Integer) 5:
            {
              HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_7[18]);
            }
            break;
          case (MR_Integer) 6:
            {
              HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_7[10]);
            }
            break;
          case (MR_Integer) 7:
            {
              HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_7[1]);
            }
            break;
          case (MR_Integer) 8:
            {
              HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_7[17]);
            }
            break;
          case (MR_Integer) 9:
            {
              HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_7[2]);
            }
            break;
          case (MR_Integer) 10:
            {
              HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_7[5]);
            }
            break;
          case (MR_Integer) 11:
            {
              HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_7[12]);
            }
            break;
          case (MR_Integer) 12:
            {
              HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_7[11]);
            }
            break;
          case (MR_Integer) 13:
            {
              HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_7[8]);
            }
            break;
          case (MR_Integer) 14:
            {
              HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_7[7]);
            }
            break;
          case (MR_Integer) 15:
            {
              HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_7[6]);
            }
            break;
          case (MR_Integer) 16:
            {
              HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_7[19]);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

          switch (Var_53) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_7[3]);
              }
              break;
            case (MR_Integer) 1:
              {
                HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_7[4]);
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PIC_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0)));
          MR_String Ext_44;

          backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(Globals_1, PIC_43, &Ext_44);
          {
            HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (Ext_44));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 1:
            HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
        }
        break;
    }
    return HeadVar__3_3;
  }
}

MR_bool MR_CALL 
make__util__timestamp_extension_2_p_0(
  MR_Word ModuleTargetType_3,
  MR_String * Extension_4)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) ModuleTargetType_3)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        switch (MR_unmkbody(ModuleTargetType_3)) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            {
              *Extension_4 = (MR_String) ".err_date";
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 2:
            {
              *Extension_4 = (MR_String) ".date0";
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 3:
            {
              *Extension_4 = (MR_String) ".date";
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 4:
            {
              *Extension_4 = (MR_String) ".date";
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 5:
            {
              *Extension_4 = (MR_String) ".date3";
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 6:
            {
              *Extension_4 = (MR_String) ".optdate";
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 7:
            {
              *Extension_4 = (MR_String) ".analysis_date";
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 9:
            {
              *Extension_4 = (MR_String) ".c_date";
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 10:
            {
              *Extension_4 = (MR_String) ".cs_date";
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 11:
            {
              *Extension_4 = (MR_String) ".java_date";
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 13:
          case (MR_Integer) 14:
            {
              *Extension_4 = (MR_String) ".erl_date";
              succeeded = MR_TRUE;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          *Extension_4 = (MR_String) ".c_date";
          succeeded = MR_TRUE;
        }
        break;
    }
    return succeeded;
  }
}

void MR_CALL 
make__util__get_file_timestamp_7_p_0(
  MR_Word SearchDirs_8,
  MR_String FileName_9,
  MR_Word * MaybeTimestamp_10,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19)
{
  {
    MR_bool succeeded;
    MR_Word MaybeTimestamp0_13;
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 1)));
    MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 0)));
    MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 2)));
    MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 3)));
    MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 4)));
    MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 5)));
    MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 6)));
    MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 7)));
    MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 8)));
    MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 9)));
    MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 10)));
    MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 11)));
    MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 12)));
    MR_Word Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 13)));
    MR_Word Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 14)));
    MR_Word Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 15)));
    MR_Word Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 16)));
    MR_Word Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 17)));
    MR_Integer Var_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 18)));
    MR_Word Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 19)));
    MR_Box conv0_MaybeTimestamp0_13;

    succeeded = mercury__map__elem_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &make__util_scalar_common_1[0], ((MR_Box) (FileName_9)), Var_22, &conv0_MaybeTimestamp0_13);
    if (succeeded)
    {
      MaybeTimestamp0_13 = ((MR_Word) conv0_MaybeTimestamp0_13);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      *MaybeTimestamp_10 = MaybeTimestamp0_13;
      *STATE_VARIABLE_Info_19 = STATE_VARIABLE_Info_0_18;
    }
    else
    {
      MR_Word SearchResult_14;

      libs__file_util__search_for_file_mod_time_5_p_0(SearchDirs_8, FileName_9, &SearchResult_14);
      if (((MR_tag((MR_Word) SearchResult_14)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String Var_24;
        MR_String Var_26;

        Var_26 = mercury__string__f_43_43_2_f_0(FileName_9, (MR_String) "\' not found");
        Var_24 = mercury__string__f_43_43_2_f_0((MR_String) "file \140", Var_26);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeTimestamp_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_24));
        }
        *STATE_VARIABLE_Info_19 = STATE_VARIABLE_Info_0_18;
      }
      else
      {
        MR_Word TimeT_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), SearchResult_14, (MR_Integer) 0)));
        MR_Word Timestamp_16;
        MR_Word Var_29;
        MR_Word Var_30;
        MR_Word Var_50;
        MR_Word Var_51;
        MR_Word Var_52;
        MR_Word Var_53;
        MR_Word Var_54;
        MR_Word Var_55;
        MR_Word Var_56;
        MR_Word Var_57;
        MR_Word Var_58;
        MR_Word Var_59;
        MR_Word Var_60;
        MR_Word Var_61;
        MR_Word Var_62;
        MR_Word Var_63;
        MR_Word Var_64;
        MR_Word Var_65;
        MR_Word Var_66;
        MR_Integer Var_67;
        MR_Word Var_68;
        MR_Word Var_69;
        MR_Word Var_71;
        MR_Word Var_72;
        MR_Word Var_73;
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
        MR_Integer Var_87;
        MR_Word Var_88;
        MR_Word Var_70;

        Timestamp_16 = libs__timestamp__time_t_to_timestamp_1_f_0(TimeT_15);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeTimestamp_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Timestamp_16));
        }
        Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 0)));
        Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 1)));
        Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 2)));
        Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 3)));
        Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 4)));
        Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 5)));
        Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 6)));
        Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 7)));
        Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 8)));
        Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 9)));
        Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 10)));
        Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 11)));
        Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 12)));
        Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 13)));
        Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 14)));
        Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 15)));
        Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 16)));
        Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 17)));
        Var_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 18)));
        Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 19)));
        Var_30 = mercury__map__f_101_108_101_109_32_58_61_3_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &make__util_scalar_common_1[0], ((MR_Box) (FileName_9)), Var_29, ((MR_Box) (*MaybeTimestamp_10)));
        Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 0)));
        Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 1)));
        Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 2)));
        Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 3)));
        Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 4)));
        Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 5)));
        Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 6)));
        Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 7)));
        Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 8)));
        Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 9)));
        Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 10)));
        Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 11)));
        Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 12)));
        Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 13)));
        Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 14)));
        Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 15)));
        Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 16)));
        Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 17)));
        Var_87 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 18)));
        Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 19)));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Info_19 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_69));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_30));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_71));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_72));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_73));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_74));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_75));
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_76));
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_77));
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_78));
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_79));
          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_80));
          MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_81));
          MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_82));
          MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_83));
          MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_84));
          MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_85));
          MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_86));
          MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_87));
          MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_88));
        }
      }
    }
  }
}

void MR_CALL 
make__util__build_with_module_options_and_output_redirect_9_p_0(
  MR_Word Globals_10,
  MR_Word ModuleName_11,
  MR_Word ExtraOptions_12,
  MR_Word Build_13,
  MR_Word * Succeeded_14,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_95_104_111_49_48_95_95_91_54_93_95_48_9_p_0(ModuleName_11, Build_13, Globals_10, ModuleName_11, ExtraOptions_12, Succeeded_14, STATE_VARIABLE_Info_0_17, STATE_VARIABLE_Info_18);
}

static void MR_CALL 
make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_95_104_111_49_48_95_95_91_54_93_95_48_9_p_0(
  MR_Word Var_86,
  MR_Word Var_87,
  MR_Word Globals_10,
  MR_Word ModuleName_11,
  MR_Word ExtraOptions_12,
  MR_Word * Succeeded_14,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19)
{
  {
    MR_Word MaybeInfo_17;
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 3)));
    MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 4)));
    MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 5)));
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 0)));
    MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 1)));
    MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 2)));
    MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 6)));
    MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 7)));
    MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 8)));
    MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 9)));
    MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 10)));
    MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 11)));
    MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 12)));
    MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 13)));
    MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 14)));
    MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 15)));
    MR_Word Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 16)));
    MR_Word Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 17)));
    MR_Integer Var_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 18)));
    MR_Word Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 19)));

    make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_97_114_103_115_95_105_110_118_111_107_101_100_95_95_104_111_49_52_95_95_91_49_48_93_95_48_13_p_0(Var_86, Var_87, Globals_10, (MR_Integer) 1, ModuleName_11, Var_23, Var_32, Var_31, ExtraOptions_12, Succeeded_14, STATE_VARIABLE_Info_0_18, &MaybeInfo_17);
    if ((MaybeInfo_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_Info_19 = STATE_VARIABLE_Info_0_18;
    else
      *STATE_VARIABLE_Info_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeInfo_17, (MR_Integer) 0)));
  }
}

static void MR_CALL 
make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_97_114_103_115_95_105_110_118_111_107_101_100_95_95_104_111_49_52_95_95_91_49_48_93_95_48_13_p_0(
  MR_Word Var_55,
  MR_Word Var_56,
  MR_Word Globals_14,
  MR_Word InvokedByMmcMake_15,
  MR_Word ModuleName_16,
  MR_Word DetectedGradeFlags_17,
  MR_Word OptionVariables_18,
  MR_Word OptionArgs_19,
  MR_Word ExtraOptions_20,
  MR_Word * Succeeded_22,
  MR_Word Info0_23,
  MR_Word * MaybeInfo_24)
{
  {
    MR_Word OptionsResult_26;

    make__options_file__lookup_mmc_module_options_6_p_0(Globals_14, OptionVariables_18, ModuleName_16, &OptionsResult_26);
    if ((OptionsResult_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *MaybeInfo_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *Succeeded_22 = (MR_Integer) 0;
    }
    else
    {
      MR_Word TypeCtorInfo_54_54;
      MR_Word ModuleOptionArgs_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), OptionsResult_26, (MR_Integer) 0)));
      MR_Word UseSubdirs_28;
      MR_Word InvokedByMake_29;
      MR_Word AllOptionArgs_30;
      MR_Word OptionSpecs_33;
      MR_Word BuildGlobals_34;
      MR_Word Var_45;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_48;
      MR_Word Var_31;
      MR_Word Var_32;

      switch (InvokedByMmcMake_15) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            UseSubdirs_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            InvokedByMake_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
          break;
        case (MR_Integer) 1:
          {
            UseSubdirs_28 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_2[2]);
            InvokedByMake_29 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_2[3]);
          }
          break;
      }
      TypeCtorInfo_54_54 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
      Var_48 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_54_54, ExtraOptions_20, UseSubdirs_28);
      Var_47 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_54_54, OptionArgs_19, Var_48);
      Var_46 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_54_54, ModuleOptionArgs_27, Var_47);
      Var_45 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_54_54, DetectedGradeFlags_17, Var_46);
      AllOptionArgs_30 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_54_54, InvokedByMake_29, Var_45);
      libs__handle_options__handle_given_options_7_p_0(AllOptionArgs_30, &Var_31, &Var_32, &OptionSpecs_33, &BuildGlobals_34);
      if ((OptionSpecs_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word Info_37;

        make__util__build_with_module_options_and_output_redirect_2_9_p_0(Var_55, Var_56, BuildGlobals_34, AllOptionArgs_30, Succeeded_22, Info0_23, &Info_37);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeInfo_24 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Info_37));
        }
      }
      else
      {
        *Succeeded_22 = (MR_Integer) 0;
        *MaybeInfo_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        libs__handle_options__usage_errors_4_p_0(BuildGlobals_34, OptionSpecs_33);
      }
    }
  }
}

static void MR_CALL 
make__util__build_with_module_options_and_output_redirect_2_9_p_0(
  MR_Word ModuleName_10,
  MR_Word Build_11,
  MR_Word Globals_12,
  MR_Word AllOptions_13,
  MR_Word * Succeeded_14,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  {
    MR_Word RedirectResult_41;
    MR_Word STATE_VARIABLE_Info_21_43;

    make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_100_105_114_101_99_116_95_111_117_116_112_117_116_95_95_91_49_93_95_48_6_p_0(&RedirectResult_41, STATE_VARIABLE_Info_0_17, &STATE_VARIABLE_Info_21_43);
    if ((RedirectResult_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *Succeeded_14 = (MR_Integer) 0;
      *STATE_VARIABLE_Info_18 = STATE_VARIABLE_Info_21_43;
    }
    else
    {
      MR_Word ErrorStream_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), RedirectResult_41, (MR_Integer) 0)));
      MR_Word STATE_VARIABLE_Info_23_45;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), Build_11, (MR_Integer) 1)));
      MR_Box conv3_Succeeded_14;
      MR_Box conv2_STATE_VARIABLE_Info_23_45;
      MR_Box conv1_STATE_VARIABLE_IO_24_46;

      func_0(((MR_Box) Build_11), ((MR_Box) (Globals_12)), ((MR_Box) (AllOptions_13)), ((MR_Box) (ErrorStream_42)), &conv3_Succeeded_14, ((MR_Box) (STATE_VARIABLE_Info_21_43)), &conv2_STATE_VARIABLE_Info_23_45, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_24_46);
      *Succeeded_14 = ((MR_Word) conv3_Succeeded_14);
      STATE_VARIABLE_Info_23_45 = ((MR_Word) conv2_STATE_VARIABLE_Info_23_45);
      make__util__unredirect_output_7_p_0(Globals_12, ModuleName_10, ErrorStream_42, STATE_VARIABLE_Info_23_45, STATE_VARIABLE_Info_18);
    }
  }
}

void MR_CALL 
make__util__redirect_output_6_p_0(
  MR_Word _ModuleName_7,
  MR_Word * MaybeErrorStream_8,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16)
{
  make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_100_105_114_101_99_116_95_111_117_116_112_117_116_95_95_91_49_93_95_48_6_p_0(MaybeErrorStream_8, STATE_VARIABLE_Info_0_15, STATE_VARIABLE_Info_16);
}

void MR_CALL 
make__util__build_with_output_redirect_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_Word Build_11,
  MR_Word * Succeeded_12,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  {
    MR_Word RedirectResult_15;
    MR_Word STATE_VARIABLE_Info_21_21;

    make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_100_105_114_101_99_116_95_111_117_116_112_117_116_95_95_91_49_93_95_48_6_p_0(&RedirectResult_15, STATE_VARIABLE_Info_0_17, &STATE_VARIABLE_Info_21_21);
    if ((RedirectResult_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *Succeeded_12 = (MR_Integer) 0;
      *STATE_VARIABLE_Info_18 = STATE_VARIABLE_Info_21_21;
    }
    else
    {
      MR_Word ErrorStream_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), RedirectResult_15, (MR_Integer) 0)));
      MR_Word STATE_VARIABLE_Info_23_23;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), Build_11, (MR_Integer) 1)));
      MR_Box conv3_Succeeded_12;
      MR_Box conv2_STATE_VARIABLE_Info_23_23;
      MR_Box conv1_STATE_VARIABLE_IO_24_24;

      func_0(((MR_Box) Build_11), ((MR_Box) (Globals_9)), ((MR_Box) (ErrorStream_16)), &conv3_Succeeded_12, ((MR_Box) (STATE_VARIABLE_Info_21_21)), &conv2_STATE_VARIABLE_Info_23_23, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_24_24);
      *Succeeded_12 = ((MR_Word) conv3_Succeeded_12);
      STATE_VARIABLE_Info_23_23 = ((MR_Word) conv2_STATE_VARIABLE_Info_23_23);
      make__util__unredirect_output_7_p_0(Globals_9, ModuleName_10, ErrorStream_16, STATE_VARIABLE_Info_23_23, STATE_VARIABLE_Info_18);
    }
  }
}

void MR_CALL 
make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_100_105_114_101_99_116_95_111_117_116_112_117_116_95_95_91_49_93_95_48_6_p_0(
  MR_Word * MaybeErrorStream_8,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16)
{
  {
    MR_Word ErrorFileResult_11;

    libs__file_util__open_temp_output_3_p_0(&ErrorFileResult_11);
    if (((MR_tag((MR_Word) ErrorFileResult_11)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_String ErrorMessage_14 = ((MR_String) (MR_hl_field(MR_mktag(1), ErrorFileResult_11, (MR_Integer) 0)));
      MR_Word MaybeLock_30;
      MR_Word Var_36;
      MR_Word Var_37;
      MR_Word Var_38;
      MR_Word Var_39;
      MR_Word Var_40;
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word Var_44;
      MR_Word Var_45;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_48;
      MR_Word Var_49;
      MR_Word Var_50;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Word Var_53;
      MR_Integer Var_54;

      *MaybeErrorStream_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 0)));
      Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 1)));
      Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 2)));
      Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 3)));
      Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 4)));
      Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 5)));
      Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 6)));
      Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 7)));
      Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 8)));
      Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 9)));
      Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 10)));
      Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 11)));
      Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 12)));
      Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 13)));
      Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 14)));
      Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 15)));
      Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 16)));
      Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 17)));
      Var_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 18)));
      MaybeLock_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 19)));
      if ((MaybeLock_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        mercury__io__write_string_3_p_0(ErrorMessage_14);
        mercury__io__nl_2_p_0();
      }
      else
      {
        MR_Box Lock_31 = ((MR_Box) (MR_hl_field(MR_mktag(1), MaybeLock_30, (MR_Integer) 0)));

        make__util__lock_stdout_3_p_0(Lock_31);
        mercury__io__write_string_3_p_0(ErrorMessage_14);
        mercury__io__nl_2_p_0();
        make__util__unlock_stdout_3_p_0(Lock_31);
      }
    }
    else
    {
      MR_Word ErrorOutputStream_13;
      MR_Tuple Var_22 = ((MR_Tuple) (MR_hl_field(MR_mktag(0), ErrorFileResult_11, (MR_Integer) 0)));
      MR_String _ErrorFileName_12 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 0)));

      ErrorOutputStream_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 1)));
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeErrorStream_8 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ErrorOutputStream_13));
      }
    }
    *STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_0_15;
  }
}

void MR_CALL 
make__util__unredirect_output_7_p_0(
  MR_Word Globals_8,
  MR_Word ModuleName_9,
  MR_Word ErrorOutputStream_10,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24)
{
  {
    MR_bool succeeded;
    MR_String TmpErrorFileName_13;
    MR_Word TmpErrorInputRes_14;
    MR_Word Var_22;

    mercury__io__output_stream_name_4_p_0(ErrorOutputStream_10, &TmpErrorFileName_13);
    mercury__io__close_output_3_p_0(ErrorOutputStream_10);
    mercury__io__open_input_4_p_0(TmpErrorFileName_13, &TmpErrorInputRes_14);
    if (((MR_tag((MR_Word) TmpErrorInputRes_14)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word Error_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), TmpErrorInputRes_14, (MR_Integer) 0)));

      make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_105_116_104_95_108_111_99_107_101_100_95_115_116_100_111_117_116_95_95_104_111_49_50_95_95_91_52_93_95_48_4_p_0(TmpErrorFileName_13, Error_50, STATE_VARIABLE_Info_0_23);
      *STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_0_23;
    }
    else
    {
      MR_Word TmpErrorInputStream_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), TmpErrorInputRes_14, (MR_Integer) 0)));
      MR_String ErrorFileName_16;
      MR_Word ErrorFileRes_17;
      MR_Word Var_35;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Word Var_53;
      MR_Word Var_54;
      MR_Word Var_55;
      MR_Word Var_56;
      MR_Word Var_57;
      MR_Word Var_58;
      MR_Word Var_59;
      MR_Word Var_60;
      MR_Word Var_61;
      MR_Word Var_62;
      MR_Word Var_63;
      MR_Word Var_64;
      MR_Word Var_65;
      MR_Word Var_66;
      MR_Word Var_67;
      MR_Integer Var_68;
      MR_Word Var_69;

      parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_8, (MR_Integer) 0, (MR_String) ".err", ModuleName_9, &ErrorFileName_16);
      Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 0)));
      Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 1)));
      Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 2)));
      Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 3)));
      Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 4)));
      Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 5)));
      Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 6)));
      Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 7)));
      Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 8)));
      Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 9)));
      Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 10)));
      Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 11)));
      Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 12)));
      Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 13)));
      Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 14)));
      Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 15)));
      Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 16)));
      Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 17)));
      Var_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 18)));
      Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 19)));
      succeeded = mercury__set__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (ModuleName_9)), Var_35);
      if (succeeded)
        mercury__io__open_append_4_p_0(ErrorFileName_16, &ErrorFileRes_17);
      else
        mercury__io__open_output_4_p_0(ErrorFileName_16, &ErrorFileRes_17);
      if (((MR_tag((MR_Word) ErrorFileRes_17)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word Error_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ErrorFileRes_17, (MR_Integer) 0)));

        make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_105_116_104_95_108_111_99_107_101_100_95_115_116_100_111_117_116_95_95_104_111_49_50_95_95_91_52_93_95_48_4_p_0(TmpErrorFileName_13, Error_21, STATE_VARIABLE_Info_0_23);
        *STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_0_23;
      }
      else
      {
        MR_Word ErrorFileOutputStream_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ErrorFileRes_17, (MR_Integer) 0)));
        MR_Integer LinesToWrite_19;
        MR_Word CurrentOutputStream_20;
        MR_Word Var_46;
        MR_Word Var_47;
        MR_Word Var_70;
        MR_Word Var_71;
        MR_Word Var_72;
        MR_Word Var_73;
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
        MR_Integer Var_87;
        MR_Word Var_88;
        MR_Word Var_89;
        MR_Word Var_90;
        MR_Word Var_91;
        MR_Word Var_92;
        MR_Word Var_93;
        MR_Word Var_94;
        MR_Word Var_95;
        MR_Word Var_96;
        MR_Word Var_97;
        MR_Word Var_98;
        MR_Word Var_99;
        MR_Word Var_100;
        MR_Word Var_101;
        MR_Word Var_102;
        MR_Word Var_103;
        MR_Word Var_105;
        MR_Word Var_106;
        MR_Integer Var_107;
        MR_Word Var_108;
        MR_Word Var_104;

        libs__globals__lookup_int_option_3_p_0(Globals_8, (MR_Integer) 63, &LinesToWrite_19);
        mercury__io__output_stream_3_p_0(&CurrentOutputStream_20);
        make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_105_116_104_95_108_111_99_107_101_100_95_115_116_100_111_117_116_95_95_104_111_49_49_95_95_91_55_93_95_48_4_p_0(TmpErrorFileName_13, TmpErrorInputStream_15, ErrorFileOutputStream_18, CurrentOutputStream_20, LinesToWrite_19, STATE_VARIABLE_Info_0_23);
        mercury__io__close_output_3_p_0(ErrorFileOutputStream_18);
        Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 0)));
        Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 1)));
        Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 2)));
        Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 3)));
        Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 4)));
        Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 5)));
        Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 6)));
        Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 7)));
        Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 8)));
        Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 9)));
        Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 10)));
        Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 11)));
        Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 12)));
        Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 13)));
        Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 14)));
        Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 15)));
        Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 16)));
        Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 17)));
        Var_87 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 18)));
        Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 19)));
        Var_46 = mercury__set__insert_2_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, Var_47, ((MR_Box) (ModuleName_9)));
        Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 0)));
        Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 1)));
        Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 2)));
        Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 3)));
        Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 4)));
        Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 5)));
        Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 6)));
        Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 7)));
        Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 8)));
        Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 9)));
        Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 10)));
        Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 11)));
        Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 12)));
        Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 13)));
        Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 14)));
        Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 15)));
        Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 16)));
        Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 17)));
        Var_107 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 18)));
        Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 19)));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Info_24 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_89));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_90));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_91));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_92));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_93));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_94));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_95));
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_96));
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_97));
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_98));
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_99));
          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_100));
          MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_101));
          MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_102));
          MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_103));
          MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_46));
          MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_105));
          MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_106));
          MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_107));
          MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_108));
        }
      }
      mercury__io__close_input_3_p_0(TmpErrorInputStream_15);
    }
    mercury__io__remove_file_4_p_0(TmpErrorFileName_13, &Var_22);
  }
}

static void MR_CALL 
make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_105_116_104_95_108_111_99_107_101_100_95_115_116_100_111_117_116_95_95_104_111_49_50_95_95_91_52_93_95_48_4_p_0(
  MR_String Var_35,
  MR_Word Var_36,
  MR_Word Info_5)
{
  {
    MR_Word MaybeLock_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 19)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 0)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 2)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 3)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 4)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 5)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 6)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 7)));
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 8)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 9)));
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 10)));
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 11)));
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 12)));
    MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 13)));
    MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 14)));
    MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 15)));
    MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 16)));
    MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 17)));
    MR_Integer Var_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 18)));

    if ((MaybeLock_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      make__util__write_error_opening_file_4_p_0(Var_35, Var_36);
    else
    {
      MR_Box Lock_9 = ((MR_Box) (MR_hl_field(MR_mktag(1), MaybeLock_8, (MR_Integer) 0)));

      make__util__lock_stdout_3_p_0(Lock_9);
      make__util__write_error_opening_file_4_p_0(Var_35, Var_36);
      make__util__unlock_stdout_3_p_0(Lock_9);
    }
  }
}

static void MR_CALL 
make__util__write_error_opening_file_4_p_0(
  MR_String FileName_5,
  MR_Word Error_6)
{
  {
    MR_String Var_16;

    Var_16 = mercury__io__error_message_1_f_0(Error_6);
    mercury__io__write_string_3_p_0((MR_String) "Error opening \140");
    mercury__io__write_string_3_p_0(FileName_5);
    mercury__io__write_string_3_p_0((MR_String) "\': ");
    mercury__io__write_string_3_p_0(Var_16);
    mercury__io__write_string_3_p_0((MR_String) "\n");
  }
}

static void MR_CALL 
make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_105_116_104_95_108_111_99_107_101_100_95_115_116_100_111_117_116_95_95_104_111_49_49_95_95_91_55_93_95_48_4_p_0(
  MR_String Var_35,
  MR_Word Var_36,
  MR_Word Var_37,
  MR_Word Var_38,
  MR_Integer Var_39,
  MR_Word Info_5)
{
  {
    MR_Word MaybeLock_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 19)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 0)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 2)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 3)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 4)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 5)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 6)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 7)));
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 8)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 9)));
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 10)));
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 11)));
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 12)));
    MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 13)));
    MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 14)));
    MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 15)));
    MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 16)));
    MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 17)));
    MR_Integer Var_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 18)));

    if ((MaybeLock_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      make__util__make_write_error_streams_7_p_0(Var_35, Var_36, Var_37, Var_38, Var_39);
    else
    {
      MR_Box Lock_9 = ((MR_Box) (MR_hl_field(MR_mktag(1), MaybeLock_8, (MR_Integer) 0)));

      make__util__lock_stdout_3_p_0(Lock_9);
      make__util__make_write_error_streams_7_p_0(Var_35, Var_36, Var_37, Var_38, Var_39);
      make__util__unlock_stdout_3_p_0(Lock_9);
    }
  }
}

static void MR_CALL 
make__util__make_write_error_streams_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv0_STATE_VARIABLE_LinesRemaining_15;

    make__util__make_write_error_char_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Char) (MR_Word) wrapper_arg_1), ((MR_Integer) wrapper_arg_2), &conv0_STATE_VARIABLE_LinesRemaining_15);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_LinesRemaining_15));
  }
}

static void MR_CALL 
make__util__make_write_error_streams_7_p_0(
  MR_String FileName_8,
  MR_Word InputStream_9,
  MR_Word FullOutputStream_10,
  MR_Word PartialOutputStream_11,
  MR_Integer LinesToWrite_12)
{
  {
    MR_Word Res_14;
    MR_Word Var_20;

    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (&make__util_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (make__util__make_write_error_streams_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_20, 3) = ((MR_Box) (FullOutputStream_10));
      MR_hl_field(MR_mktag(0), Var_20, 4) = ((MR_Box) (PartialOutputStream_11));
    }
    mercury__io__input_stream_foldl2_io_6_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, InputStream_9, Var_20, ((MR_Box) (LinesToWrite_12)), &Res_14);
    if (((MR_tag((MR_Word) Res_14)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word Error_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), Res_14, (MR_Integer) 1)));
      MR_String Var_28;
      MR_Integer Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Res_14, (MR_Integer) 0)));

      Var_28 = mercury__io__error_message_1_f_0(Error_17);
      mercury__io__write_string_3_p_0((MR_String) "Error reading \140");
      mercury__io__write_string_3_p_0(FileName_8);
      mercury__io__write_string_3_p_0((MR_String) "\': ");
      mercury__io__write_string_3_p_0(Var_28);
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    else
    {
    }
  }
}

static void MR_CALL 
make__util__unlock_stdout_3_p_0(
  MR_Box JobCtl_1)
{
  {
{
#define MR_PROC_LABEL make__util__unlock_stdout_3_p_0

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
}

static void MR_CALL 
make__util__lock_stdout_3_p_0(
  MR_Box JobCtl_1)
{
  {
{
#define MR_PROC_LABEL make__util__lock_stdout_3_p_0

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
}

void MR_CALL 
make__util__build_with_module_options_args_12_p_0(
  MR_Word TypeInfo_for_Info1_30,
  MR_Word TypeInfo_for_Info2_31,
  MR_Word Globals_13,
  MR_Word ModuleName_14,
  MR_Word DetectedGradeFlags_15,
  MR_Word OptionVariables_16,
  MR_Word OptionArgs_17,
  MR_Word ExtraOptions_18,
  MR_Word Build_19,
  MR_Word * Succeeded_20,
  MR_Box STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24)
{
  {
    MR_Word OptionsResult_46;

    make__options_file__lookup_mmc_module_options_6_p_0(Globals_13, OptionVariables_16, ModuleName_14, &OptionsResult_46);
    if ((OptionsResult_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_Info_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *Succeeded_20 = (MR_Integer) 0;
    }
    else
    {
      MR_Word TypeCtorInfo_54_70 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
      MR_Word ModuleOptionArgs_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), OptionsResult_46, (MR_Integer) 0)));
      MR_Word AllOptionArgs_50;
      MR_Word OptionSpecs_53;
      MR_Word BuildGlobals_54;
      MR_Word Var_63;
      MR_Word Var_64;
      MR_Word Var_65;
      MR_Word Var_66;
      MR_Word Var_51;
      MR_Word Var_52;

      Var_66 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_54_70, ExtraOptions_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
      Var_65 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_54_70, OptionArgs_17, Var_66);
      Var_64 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_54_70, ModuleOptionArgs_47, Var_65);
      Var_63 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_54_70, DetectedGradeFlags_15, Var_64);
      AllOptionArgs_50 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_54_70, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Var_63);
      libs__handle_options__handle_given_options_7_p_0(AllOptionArgs_50, &Var_51, &Var_52, &OptionSpecs_53, &BuildGlobals_54);
      if ((OptionSpecs_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Box Info_57;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), Build_19, (MR_Integer) 1)));
        MR_Box conv2_Succeeded_20;
        MR_Box conv1_STATE_VARIABLE_IO_26;

        func_0(((MR_Box) Build_19), ((MR_Box) (BuildGlobals_54)), ((MR_Box) (AllOptionArgs_50)), &conv2_Succeeded_20, STATE_VARIABLE_Info_0_23, &Info_57, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_26);
        *Succeeded_20 = ((MR_Word) conv2_Succeeded_20);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Info_24 = base;
          MR_hl_field(MR_mktag(1), base, 0) = Info_57;
        }
      }
      else
      {
        *Succeeded_20 = (MR_Integer) 0;
        *STATE_VARIABLE_Info_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        libs__handle_options__usage_errors_4_p_0(BuildGlobals_54, OptionSpecs_53);
      }
    }
  }
}

void MR_CALL 
make__util__build_with_module_options_9_p_0(
  MR_Word Globals_10,
  MR_Word ModuleName_11,
  MR_Word ExtraOptions_12,
  MR_Word Build_13,
  MR_Word * Succeeded_14,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19)
{
  {
    MR_Word MaybeInfo_17;
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 3)));
    MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 4)));
    MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 5)));
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 0)));
    MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 1)));
    MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 2)));
    MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 6)));
    MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 7)));
    MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 8)));
    MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 9)));
    MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 10)));
    MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 11)));
    MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 12)));
    MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 13)));
    MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 14)));
    MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 15)));
    MR_Word Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 16)));
    MR_Word Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 17)));
    MR_Integer Var_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 18)));
    MR_Word Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 19)));

    make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_97_114_103_115_95_105_110_118_111_107_101_100_95_95_91_49_44_32_50_93_95_48_13_p_0(Globals_10, (MR_Integer) 1, ModuleName_11, Var_23, Var_32, Var_31, ExtraOptions_12, Build_13, Succeeded_14, ((MR_Box) (STATE_VARIABLE_Info_0_18)), &MaybeInfo_17);
    if ((MaybeInfo_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_Info_19 = STATE_VARIABLE_Info_0_18;
    else
      *STATE_VARIABLE_Info_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeInfo_17, (MR_Integer) 0)));
  }
}

static void MR_CALL 
make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_97_114_103_115_95_105_110_118_111_107_101_100_95_95_91_49_44_32_50_93_95_48_13_p_0(
  MR_Word Globals_14,
  MR_Word InvokedByMmcMake_15,
  MR_Word ModuleName_16,
  MR_Word DetectedGradeFlags_17,
  MR_Word OptionVariables_18,
  MR_Word OptionArgs_19,
  MR_Word ExtraOptions_20,
  MR_Word Build_21,
  MR_Word * Succeeded_22,
  MR_Box Info0_23,
  MR_Word * MaybeInfo_24)
{
  {
    MR_Word OptionsResult_26;

    make__options_file__lookup_mmc_module_options_6_p_0(Globals_14, OptionVariables_18, ModuleName_16, &OptionsResult_26);
    if ((OptionsResult_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *MaybeInfo_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *Succeeded_22 = (MR_Integer) 0;
    }
    else
    {
      MR_Word TypeCtorInfo_54_54;
      MR_Word ModuleOptionArgs_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), OptionsResult_26, (MR_Integer) 0)));
      MR_Word UseSubdirs_28;
      MR_Word InvokedByMake_29;
      MR_Word AllOptionArgs_30;
      MR_Word OptionSpecs_33;
      MR_Word BuildGlobals_34;
      MR_Word Var_45;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_48;
      MR_Word Var_31;
      MR_Word Var_32;

      switch (InvokedByMmcMake_15) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            UseSubdirs_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            InvokedByMake_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
          break;
        case (MR_Integer) 1:
          {
            UseSubdirs_28 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_2[2]);
            InvokedByMake_29 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_2[3]);
          }
          break;
      }
      TypeCtorInfo_54_54 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
      Var_48 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_54_54, ExtraOptions_20, UseSubdirs_28);
      Var_47 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_54_54, OptionArgs_19, Var_48);
      Var_46 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_54_54, ModuleOptionArgs_27, Var_47);
      Var_45 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_54_54, DetectedGradeFlags_17, Var_46);
      AllOptionArgs_30 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_54_54, InvokedByMake_29, Var_45);
      libs__handle_options__handle_given_options_7_p_0(AllOptionArgs_30, &Var_31, &Var_32, &OptionSpecs_33, &BuildGlobals_34);
      if ((OptionSpecs_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Box Info_37;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), Build_21, (MR_Integer) 1)));
        MR_Box conv2_Succeeded_22;
        MR_Box conv1_STATE_VARIABLE_IO_39;

        func_0(((MR_Box) Build_21), ((MR_Box) (BuildGlobals_34)), ((MR_Box) (AllOptionArgs_30)), &conv2_Succeeded_22, Info0_23, &Info_37, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_39);
        *Succeeded_22 = ((MR_Word) conv2_Succeeded_22);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeInfo_24 = base;
          MR_hl_field(MR_mktag(1), base, 0) = Info_37;
        }
      }
      else
      {
        *Succeeded_22 = (MR_Integer) 0;
        *MaybeInfo_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        libs__handle_options__usage_errors_4_p_0(BuildGlobals_34, OptionSpecs_33);
      }
    }
  }
}

void MR_CALL 
make__util__foldl2_maybe_stop_at_error_maybe_parallel_9_p_0(
  MR_Word TypeInfo_for_T_35,
  MR_Word KeepGoing_10,
  MR_Word MakeTarget_11,
  MR_Word Globals_12,
  MR_Word Targets_13,
  MR_Word * Success_14,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21)
{
  {
    MR_bool succeeded;
    MR_Integer Jobs_17;

    libs__globals__lookup_int_option_3_p_0(Globals_12, (MR_Integer) 631, &Jobs_17);
    succeeded = (Jobs_17 > (MR_Integer) 1);
    if (succeeded)
    {
      succeeded = libs__process_util__can_fork_0_p_0();
      if (succeeded)
        succeeded = make__util__have_job_ctl_ipc_0_p_0();
    }
    if (succeeded)
    {
      MR_Word Success0_18;
      MR_Word STATE_VARIABLE_Info_26_26;

      make__util__foldl2_maybe_stop_at_error_parallel_processes_10_p_0(TypeInfo_for_T_35, KeepGoing_10, Jobs_17, MakeTarget_11, Globals_12, Targets_13, &Success0_18, STATE_VARIABLE_Info_0_20, &STATE_VARIABLE_Info_26_26);
      switch (Success0_18) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *Success_14 = (MR_Integer) 0;
            *STATE_VARIABLE_Info_21 = STATE_VARIABLE_Info_26_26;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word NoRebuildGlobals_19;
            MR_Box conv1_STATE_VARIABLE_Info_21;
            MR_Box conv0_STATE_VARIABLE_IO_23;

            libs__globals__set_option_4_p_0((MR_Integer) 629, (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_7[0]), Globals_12, &NoRebuildGlobals_19);
            make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_50_95_95_91_49_44_32_50_44_32_51_93_95_48_10_p_0(KeepGoing_10, MakeTarget_11, NoRebuildGlobals_19, Targets_13, (MR_Integer) 1, Success_14, ((MR_Box) (STATE_VARIABLE_Info_26_26)), &conv1_STATE_VARIABLE_Info_21, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_23);
            *STATE_VARIABLE_Info_21 = ((MR_Word) conv1_STATE_VARIABLE_Info_21);
          }
          break;
      }
    }
    else
    {
      MR_Box conv3_STATE_VARIABLE_Info_21;
      MR_Box conv2_STATE_VARIABLE_IO_23;

      make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_50_95_95_91_49_44_32_50_44_32_51_93_95_48_10_p_0(KeepGoing_10, MakeTarget_11, Globals_12, Targets_13, (MR_Integer) 1, Success_14, ((MR_Box) (STATE_VARIABLE_Info_0_20)), &conv3_STATE_VARIABLE_Info_21, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_23);
      *STATE_VARIABLE_Info_21 = ((MR_Word) conv3_STATE_VARIABLE_Info_21);
    }
  }
}

static MR_bool MR_CALL 
make__util__have_job_ctl_ipc_0_p_0(void)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL make__util__have_job_ctl_ipc_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#ifdef MC_HAVE_JOBCTL_IPC
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

static void MR_CALL 
make__util__foldl2_maybe_stop_at_error_parallel_processes_10_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv7_STATE_VARIABLE_Success_11;

    make__util__reap_worker_process_5_p_0(((MR_Integer) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv7_STATE_VARIABLE_Success_11);
    *wrapper_arg_3 = ((MR_Box) (conv7_STATE_VARIABLE_Success_11));
  }
}

static void MR_CALL 
make__util__foldl2_maybe_stop_at_error_parallel_processes_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_HeadVar__4_105;

    make__util__IntroducedFrom__pred__foldl2_maybe_stop_at_error_parallel_processes__470__1_6_p_0(((MR_Box) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), &conv5_HeadVar__4_105);
    *wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__4_105));
  }
}

static void MR_CALL 
make__util__foldl2_maybe_stop_at_error_parallel_processes_10_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_HeadVar__8_98;
    MR_Word conv3_HeadVar__10_100;

    make__util__IntroducedFrom__pred__foldl2_maybe_stop_at_error_parallel_processes__469__1_12_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7))), ((MR_Box) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 9))), &conv4_HeadVar__8_98, ((MR_Word) wrapper_arg_2), &conv3_HeadVar__10_100);
    *wrapper_arg_1 = ((MR_Box) (conv4_HeadVar__8_98));
    *wrapper_arg_3 = ((MR_Box) (conv3_HeadVar__10_100));
  }
}

static void MR_CALL 
make__util__foldl2_maybe_stop_at_error_parallel_processes_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__10_91;

    make__util__IntroducedFrom__pred__foldl2_maybe_stop_at_error_parallel_processes__464__1_12_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7))), ((MR_Box) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 9))), ((MR_Integer) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_HeadVar__10_91);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__10_91));
  }
}

static void MR_CALL 
make__util__foldl2_maybe_stop_at_error_parallel_processes_10_p_0(
  MR_Word TypeInfo_for_T_88,
  MR_Word KeepGoing_11,
  MR_Integer Jobs_12,
  MR_Word MakeTarget_13,
  MR_Word Globals_14,
  MR_Word Targets_15,
  MR_Word * Success_16,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26)
{
  {
    MR_Integer TotalTasks_19;
    MR_Word MaybeJobCtl_20;

    TotalTasks_19 = mercury__list__length_1_f_0(TypeInfo_for_T_88, Targets_15);
    make__util__create_job_ctl_4_p_0(TotalTasks_19, &MaybeJobCtl_20);
    if ((MaybeJobCtl_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *Success_16 = (MR_Integer) 0;
      *STATE_VARIABLE_Info_26 = STATE_VARIABLE_Info_0_25;
    }
    else
    {
      MR_Word TypeCtorInfo_95_95;
      MR_Word TypeCtorInfo_97_97;
      MR_Box JobCtl_21 = ((MR_Box) (MR_hl_field(MR_mktag(1), MaybeJobCtl_20, (MR_Integer) 0)));
      MR_Word Pids_22;
      MR_Word VeryVerbose_23;
      MR_Word Success0_24;
      MR_Word STATE_VARIABLE_Info_30_30;
      MR_Word Var_32;
      MR_Word Var_33;
      MR_Word Var_38;
      MR_Word Var_39;
      MR_Word STATE_VARIABLE_Info_40_40;
      MR_Word Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 0)));
      MR_Word Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 1)));
      MR_Word Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 2)));
      MR_Word Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 3)));
      MR_Word Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 4)));
      MR_Word Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 5)));
      MR_Word Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 6)));
      MR_Word Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 7)));
      MR_Word Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 8)));
      MR_Word Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 9)));
      MR_Word Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 10)));
      MR_Word Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 11)));
      MR_Word Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 12)));
      MR_Word Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 13)));
      MR_Word Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 14)));
      MR_Word Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 15)));
      MR_Word Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 16)));
      MR_Word Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 17)));
      MR_Integer Var_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 18)));
      MR_Word Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 19)));
      MR_Box conv2_Pids_22;
      MR_Box conv1_STATE_VARIABLE_IO_35_35;
      MR_Box conv6_STATE_VARIABLE_Info_40_40;
      MR_Box conv9_Success_16;
      MR_Box conv8_STATE_VARIABLE_IO_44_44;
      MR_Word Var_68;
      MR_Word Var_69;
      MR_Word Var_70;
      MR_Word Var_71;
      MR_Word Var_72;
      MR_Word Var_73;
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
      MR_Integer Var_86;
      MR_Word Var_87;

      {
        STATE_VARIABLE_Info_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 0) = ((MR_Box) (Var_48));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 1) = ((MR_Box) (Var_49));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 2) = ((MR_Box) (Var_50));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 3) = ((MR_Box) (Var_51));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 4) = ((MR_Box) (Var_52));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 5) = ((MR_Box) (Var_53));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 6) = ((MR_Box) (Var_54));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 7) = ((MR_Box) (Var_55));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 8) = ((MR_Box) (Var_56));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 9) = ((MR_Box) (Var_57));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 10) = ((MR_Box) (Var_58));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 11) = ((MR_Box) (Var_59));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 12) = ((MR_Box) (Var_60));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 13) = ((MR_Box) (Var_61));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 14) = ((MR_Box) (Var_62));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 15) = ((MR_Box) (Var_63));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 16) = ((MR_Box) (Var_64));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 17) = ((MR_Box) (Var_65));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 18) = ((MR_Box) (Var_66));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 19) = ((MR_Box) (MaybeJobCtl_20));
      }
      {
        Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (&make__util_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (make__util__foldl2_maybe_stop_at_error_parallel_processes_10_p_0_1));
        MR_hl_field(MR_mktag(0), Var_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
        MR_hl_field(MR_mktag(0), Var_32, 3) = ((MR_Box) (TypeInfo_for_T_88));
        MR_hl_field(MR_mktag(0), Var_32, 4) = ((MR_Box) (KeepGoing_11));
        MR_hl_field(MR_mktag(0), Var_32, 5) = ((MR_Box) (MakeTarget_13));
        MR_hl_field(MR_mktag(0), Var_32, 6) = ((MR_Box) (Globals_14));
        MR_hl_field(MR_mktag(0), Var_32, 7) = ((MR_Box) (Targets_15));
        MR_hl_field(MR_mktag(0), Var_32, 8) = ((MR_Box) (JobCtl_21));
        MR_hl_field(MR_mktag(0), Var_32, 9) = ((MR_Box) (STATE_VARIABLE_Info_30_30));
      }
      Var_33 = mercury__list__f_46_46_2_f_0((MR_Integer) 2, Jobs_12);
      TypeCtorInfo_95_95 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
      TypeCtorInfo_97_97 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
      mercury__list__foldl2_6_p_2(TypeCtorInfo_95_95, (MR_Word) &make__util_scalar_common_2[0], TypeCtorInfo_97_97, Var_32, Var_33, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &conv2_Pids_22, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_35_35);
      Pids_22 = ((MR_Word) conv2_Pids_22);
      libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 57, &VeryVerbose_23);
      {
        Var_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (&make__util_scalar_common_4[1]));
        MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (make__util__foldl2_maybe_stop_at_error_parallel_processes_10_p_0_2));
        MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
        MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) (TypeInfo_for_T_88));
        MR_hl_field(MR_mktag(0), Var_38, 4) = ((MR_Box) (KeepGoing_11));
        MR_hl_field(MR_mktag(0), Var_38, 5) = ((MR_Box) (MakeTarget_13));
        MR_hl_field(MR_mktag(0), Var_38, 6) = ((MR_Box) (Globals_14));
        MR_hl_field(MR_mktag(0), Var_38, 7) = ((MR_Box) (Targets_15));
        MR_hl_field(MR_mktag(0), Var_38, 8) = ((MR_Box) (JobCtl_21));
        MR_hl_field(MR_mktag(0), Var_38, 9) = ((MR_Box) ((MR_Integer) 1));
      }
      {
        Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (&make__util_scalar_common_5[0]));
        MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (make__util__foldl2_maybe_stop_at_error_parallel_processes_10_p_0_3));
        MR_hl_field(MR_mktag(0), Var_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_39, 3) = ((MR_Box) (JobCtl_21));
        MR_hl_field(MR_mktag(0), Var_39, 4) = ((MR_Box) (Pids_22));
      }
      libs__process_util__build_with_check_for_interrupt_8_p_0((MR_Word) &make__make__type_ctor_info_make_info_0, VeryVerbose_23, Var_38, Var_39, &Success0_24, ((MR_Box) (STATE_VARIABLE_Info_30_30)), &conv6_STATE_VARIABLE_Info_40_40);
      STATE_VARIABLE_Info_40_40 = ((MR_Word) conv6_STATE_VARIABLE_Info_40_40);
      mercury__list__foldl2_6_p_2(TypeCtorInfo_95_95, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, TypeCtorInfo_97_97, (MR_Word) &make__util_scalar_common_1[3], Pids_22, ((MR_Box) (Success0_24)), &conv9_Success_16, ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_IO_44_44);
      *Success_16 = ((MR_Word) conv9_Success_16);
      Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_40_40, (MR_Integer) 0)));
      Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_40_40, (MR_Integer) 1)));
      Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_40_40, (MR_Integer) 2)));
      Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_40_40, (MR_Integer) 3)));
      Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_40_40, (MR_Integer) 4)));
      Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_40_40, (MR_Integer) 5)));
      Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_40_40, (MR_Integer) 6)));
      Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_40_40, (MR_Integer) 7)));
      Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_40_40, (MR_Integer) 8)));
      Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_40_40, (MR_Integer) 9)));
      Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_40_40, (MR_Integer) 10)));
      Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_40_40, (MR_Integer) 11)));
      Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_40_40, (MR_Integer) 12)));
      Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_40_40, (MR_Integer) 13)));
      Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_40_40, (MR_Integer) 14)));
      Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_40_40, (MR_Integer) 15)));
      Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_40_40, (MR_Integer) 16)));
      Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_40_40, (MR_Integer) 17)));
      Var_86 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_40_40, (MR_Integer) 18)));
      Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_40_40, (MR_Integer) 19)));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_26 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_68));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_69));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_70));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_71));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_72));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_73));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_74));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_75));
        MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_76));
        MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_77));
        MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_78));
        MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_79));
        MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_80));
        MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_81));
        MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_82));
        MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_83));
        MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_84));
        MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_85));
        MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_86));
        MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      make__util__destroy_job_ctl_3_p_0(JobCtl_21);
    }
  }
}

static void MR_CALL 
make__util__destroy_job_ctl_3_p_0(
  MR_Box JobCtl_1)
{
  {
{
#define MR_PROC_LABEL make__util__destroy_job_ctl_3_p_0

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
}

static void MR_CALL 
make__util__create_job_ctl_4_p_0(
  MR_Integer TotalJobs_1,
  MR_Word * MaybeJobCtl_2)
{
  {
{
#define MR_PROC_LABEL make__util__create_job_ctl_4_p_0

	MR_Integer TotalJobs;
	MR_Word MaybeJobCtl;

	TotalJobs =  TotalJobs_1 ;
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
}

void MR_CALL 
make__util__foldl3_maybe_stop_at_error_11_p_0(
  MR_Word TypeInfo_for_T_30,
  MR_Word TypeInfo_for_Acc_31,
  MR_Word TypeInfo_for_Info_32,
  MR_Word TypeInfo_for_IO_33,
  MR_Word KeepGoing_12,
  MR_Word P_13,
  MR_Word Globals_14,
  MR_Word Ts_15,
  MR_Word * Success_16,
  MR_Box STATE_VARIABLE_Acc_0_20,
  MR_Box * STATE_VARIABLE_Acc_21,
  MR_Box STATE_VARIABLE_Info_0_22,
  MR_Box * STATE_VARIABLE_Info_23,
  MR_Box STATE_VARIABLE_IO_0_24,
  MR_Box * STATE_VARIABLE_IO_25)
{
  {
    make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_50_95_95_91_49_44_32_50_44_32_51_44_32_52_93_95_48_12_p_0(KeepGoing_12, P_13, Globals_14, Ts_15, (MR_Integer) 1, Success_16, STATE_VARIABLE_Acc_0_20, STATE_VARIABLE_Acc_21, STATE_VARIABLE_Info_0_22, STATE_VARIABLE_Info_23, STATE_VARIABLE_IO_0_24, STATE_VARIABLE_IO_25);
  }
}

static void MR_CALL 
make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_50_95_95_91_49_44_32_50_44_32_51_44_32_52_93_95_48_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Success_0_5,
  MR_Word * STATE_VARIABLE_Success_6,
  MR_Box STATE_VARIABLE_Acc_0_7,
  MR_Box * STATE_VARIABLE_Acc_8,
  MR_Box STATE_VARIABLE_Info_0_9,
  MR_Box * STATE_VARIABLE_Info_10,
  MR_Box STATE_VARIABLE_IO_0_11,
  MR_Box * STATE_VARIABLE_IO_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for tailcalls optimized into a loop
    if ((HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_IO_12 = STATE_VARIABLE_IO_0_11;
      *STATE_VARIABLE_Info_10 = STATE_VARIABLE_Info_0_9;
      *STATE_VARIABLE_Acc_8 = STATE_VARIABLE_Acc_0_7;
      *STATE_VARIABLE_Success_6 = STATE_VARIABLE_Success_0_5;
    }
    else
    {
      MR_Box T_31 = (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0));
      MR_Word Ts_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1)));
      MR_Word NewSuccess_37;
      MR_Box STATE_VARIABLE_Acc_46_46;
      MR_Box STATE_VARIABLE_Info_47_47;
      MR_Box STATE_VARIABLE_IO_48_48;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Box conv1_NewSuccess_37;

      func_0(((MR_Box) HeadVar__2_2), ((MR_Box) (HeadVar__3_3)), T_31, &conv1_NewSuccess_37, STATE_VARIABLE_Acc_0_7, &STATE_VARIABLE_Acc_46_46, STATE_VARIABLE_Info_0_9, &STATE_VARIABLE_Info_47_47, STATE_VARIABLE_IO_0_11, &STATE_VARIABLE_IO_48_48);
      NewSuccess_37 = ((MR_Word) conv1_NewSuccess_37);
      succeeded = (NewSuccess_37 == (MR_Integer) 1);
      if (!(succeeded))
        succeeded = (HeadVar__1_1 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_Success_49_49;
        MR_Word next_value_of_HeadVar__4_4;
        MR_Word next_value_of_STATE_VARIABLE_Success_0_5;
        MR_Box next_value_of_STATE_VARIABLE_Acc_0_7;
        MR_Box next_value_of_STATE_VARIABLE_Info_0_9;
        MR_Box next_value_of_STATE_VARIABLE_IO_0_11;

        STATE_VARIABLE_Success_49_49 = mercury__bool__and_2_f_0(STATE_VARIABLE_Success_0_5, NewSuccess_37);
        // direct tailcall eliminated
        next_value_of_HeadVar__4_4 = Ts_32;
        next_value_of_STATE_VARIABLE_Success_0_5 = STATE_VARIABLE_Success_49_49;
        next_value_of_STATE_VARIABLE_Acc_0_7 = STATE_VARIABLE_Acc_46_46;
        next_value_of_STATE_VARIABLE_Info_0_9 = STATE_VARIABLE_Info_47_47;
        next_value_of_STATE_VARIABLE_IO_0_11 = STATE_VARIABLE_IO_48_48;
        HeadVar__4_4 = next_value_of_HeadVar__4_4;
        STATE_VARIABLE_Success_0_5 = next_value_of_STATE_VARIABLE_Success_0_5;
        STATE_VARIABLE_Acc_0_7 = next_value_of_STATE_VARIABLE_Acc_0_7;
        STATE_VARIABLE_Info_0_9 = next_value_of_STATE_VARIABLE_Info_0_9;
        STATE_VARIABLE_IO_0_11 = next_value_of_STATE_VARIABLE_IO_0_11;
        continue;
      }
      else
      {
        *STATE_VARIABLE_Success_6 = (MR_Integer) 0;
        *STATE_VARIABLE_IO_12 = STATE_VARIABLE_IO_48_48;
        *STATE_VARIABLE_Info_10 = STATE_VARIABLE_Info_47_47;
        *STATE_VARIABLE_Acc_8 = STATE_VARIABLE_Acc_46_46;
      }
    }
    break;
  }
}

void MR_CALL 
make__util__foldl2_maybe_stop_at_error_9_p_0(
  MR_Word TypeInfo_for_T_24,
  MR_Word TypeInfo_for_Info_25,
  MR_Word TypeInfo_for_IO_26,
  MR_Word KeepGoing_10,
  MR_Word MakeTarget_11,
  MR_Word Globals_12,
  MR_Word Targets_13,
  MR_Word * Success_14,
  MR_Box STATE_VARIABLE_Info_0_17,
  MR_Box * STATE_VARIABLE_Info_18,
  MR_Box STATE_VARIABLE_IO_0_19,
  MR_Box * STATE_VARIABLE_IO_20)
{
  {
    make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_50_95_95_91_49_44_32_50_44_32_51_93_95_48_10_p_0(KeepGoing_10, MakeTarget_11, Globals_12, Targets_13, (MR_Integer) 1, Success_14, STATE_VARIABLE_Info_0_17, STATE_VARIABLE_Info_18, STATE_VARIABLE_IO_0_19, STATE_VARIABLE_IO_20);
  }
}

static void MR_CALL 
make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_50_95_95_91_49_44_32_50_44_32_51_93_95_48_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Success_0_5,
  MR_Word * STATE_VARIABLE_Success_6,
  MR_Box STATE_VARIABLE_Info_0_7,
  MR_Box * STATE_VARIABLE_Info_8,
  MR_Box STATE_VARIABLE_IO_0_9,
  MR_Box * STATE_VARIABLE_IO_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for tailcalls optimized into a loop
    if ((HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_IO_10 = STATE_VARIABLE_IO_0_9;
      *STATE_VARIABLE_Info_8 = STATE_VARIABLE_Info_0_7;
      *STATE_VARIABLE_Success_6 = STATE_VARIABLE_Success_0_5;
    }
    else
    {
      MR_Box T_26 = (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0));
      MR_Word Ts_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1)));
      MR_Word NewSuccess_31;
      MR_Box STATE_VARIABLE_Info_38_38;
      MR_Box STATE_VARIABLE_IO_39_39;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Box conv1_NewSuccess_31;

      func_0(((MR_Box) HeadVar__2_2), ((MR_Box) (HeadVar__3_3)), T_26, &conv1_NewSuccess_31, STATE_VARIABLE_Info_0_7, &STATE_VARIABLE_Info_38_38, STATE_VARIABLE_IO_0_9, &STATE_VARIABLE_IO_39_39);
      NewSuccess_31 = ((MR_Word) conv1_NewSuccess_31);
      succeeded = (NewSuccess_31 == (MR_Integer) 1);
      if (!(succeeded))
        succeeded = (HeadVar__1_1 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_Success_40_40;
        MR_Word next_value_of_HeadVar__4_4;
        MR_Word next_value_of_STATE_VARIABLE_Success_0_5;
        MR_Box next_value_of_STATE_VARIABLE_Info_0_7;
        MR_Box next_value_of_STATE_VARIABLE_IO_0_9;

        STATE_VARIABLE_Success_40_40 = mercury__bool__and_2_f_0(STATE_VARIABLE_Success_0_5, NewSuccess_31);
        // direct tailcall eliminated
        next_value_of_HeadVar__4_4 = Ts_27;
        next_value_of_STATE_VARIABLE_Success_0_5 = STATE_VARIABLE_Success_40_40;
        next_value_of_STATE_VARIABLE_Info_0_7 = STATE_VARIABLE_Info_38_38;
        next_value_of_STATE_VARIABLE_IO_0_9 = STATE_VARIABLE_IO_39_39;
        HeadVar__4_4 = next_value_of_HeadVar__4_4;
        STATE_VARIABLE_Success_0_5 = next_value_of_STATE_VARIABLE_Success_0_5;
        STATE_VARIABLE_Info_0_7 = next_value_of_STATE_VARIABLE_Info_0_7;
        STATE_VARIABLE_IO_0_9 = next_value_of_STATE_VARIABLE_IO_0_9;
        continue;
      }
      else
      {
        *STATE_VARIABLE_Success_6 = (MR_Integer) 0;
        *STATE_VARIABLE_IO_10 = STATE_VARIABLE_IO_39_39;
        *STATE_VARIABLE_Info_8 = STATE_VARIABLE_Info_38_38;
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
make__util____Unify____build_3_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  {
    MR_bool succeeded;

    succeeded = make__util____Unify____build_3_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3), ((MR_Word) wrapper_arg_4), ((MR_Word) wrapper_arg_5));
    return succeeded;
  }
}

static void MR_CALL 
make__util____Compare____build_3_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6)
{
  {
    MR_Word conv0_HeadVar__1_1;

    make__util____Compare____build_3_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3), &conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_5), ((MR_Word) wrapper_arg_6));
    *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make__util____Unify____build_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_bool succeeded;

    succeeded = make__util____Unify____build_2_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3), ((MR_Word) wrapper_arg_4));
    return succeeded;
  }
}

static void MR_CALL 
make__util____Compare____build_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  {
    MR_Word conv0_HeadVar__1_1;

    make__util____Compare____build_2_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_4), ((MR_Word) wrapper_arg_5));
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make__util____Unify____build_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = make__util____Unify____build_1_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    return succeeded;
  }
}

static void MR_CALL 
make__util____Compare____build_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    make__util____Compare____build_1_0(((MR_Word) wrapper_arg_1), &conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_3), ((MR_Word) wrapper_arg_4));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make__util____Unify____build2_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_bool succeeded;

    succeeded = make__util____Unify____build2_2_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3), ((MR_Word) wrapper_arg_4));
    return succeeded;
  }
}

static void MR_CALL 
make__util____Compare____build2_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  {
    MR_Word conv0_HeadVar__1_1;

    make__util____Compare____build2_2_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_4), ((MR_Word) wrapper_arg_5));
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make__util____Unify____foldl2_pred_with_status_3_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  {
    MR_bool succeeded;

    succeeded = make__util____Unify____foldl2_pred_with_status_3_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3), ((MR_Word) wrapper_arg_4), ((MR_Word) wrapper_arg_5));
    return succeeded;
  }
}

static void MR_CALL 
make__util____Compare____foldl2_pred_with_status_3_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6)
{
  {
    MR_Word conv0_HeadVar__1_1;

    make__util____Compare____foldl2_pred_with_status_3_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3), &conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_5), ((MR_Word) wrapper_arg_6));
    *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make__util____Unify____foldl3_pred_with_status_4_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6)
{
  {
    MR_bool succeeded;

    succeeded = make__util____Unify____foldl3_pred_with_status_4_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3), ((MR_Word) wrapper_arg_4), ((MR_Word) wrapper_arg_5), ((MR_Word) wrapper_arg_6));
    return succeeded;
  }
}

static void MR_CALL 
make__util____Compare____foldl3_pred_with_status_4_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box wrapper_arg_7)
{
  {
    MR_Word conv0_HeadVar__1_1;

    make__util____Compare____foldl3_pred_with_status_4_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3), ((MR_Word) wrapper_arg_4), &conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_6), ((MR_Word) wrapper_arg_7));
    *wrapper_arg_5 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make__util____Unify____job_ctl_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = make__util____Unify____job_ctl_0_0(((MR_Box) wrapper_arg_1), ((MR_Box) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
make__util____Compare____job_ctl_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    make__util____Compare____job_ctl_0_0(&conv0_HeadVar__1_1, ((MR_Box) wrapper_arg_2), ((MR_Box) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make__util____Unify____stdout_lock_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = make__util____Unify____stdout_lock_0_0(((MR_Box) wrapper_arg_1), ((MR_Box) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
make__util____Compare____stdout_lock_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    make__util____Compare____stdout_lock_0_0(&conv0_HeadVar__1_1, ((MR_Box) wrapper_arg_2), ((MR_Box) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__make__util__init(void)
{
}

void mercury__make__util__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&make__util__make__util__type_ctor_info_build_3);
	MR_register_type_ctor_info(&make__util__make__util__type_ctor_info_build_2);
	MR_register_type_ctor_info(&make__util__make__util__type_ctor_info_build_1);
	MR_register_type_ctor_info(&make__util__make__util__type_ctor_info_build2_2);
	MR_register_type_ctor_info(&make__util__make__util__type_ctor_info_foldl2_pred_with_status_3);
	MR_register_type_ctor_info(&make__util__make__util__type_ctor_info_foldl3_pred_with_status_4);
	MR_register_type_ctor_info(&make__util__make__util__type_ctor_info_job_ctl_0);
	MR_register_type_ctor_info(&make__util__make__util__type_ctor_info_stdout_lock_0);
}

void mercury__make__util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__make__util__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module make.util.
