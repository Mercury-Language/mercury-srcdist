/*
** Automatically generated from `make.util.m'
** by the Mercury compiler,
** version rotd-2016-02-18
** configured for x86_64-apple-darwin13.4.0.
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


/* :- module make.util. */
/* :- implementation. */

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
#include "top_level.mih"
#include "transform_hlds.mih"
#include "backend_libs.compile_target_code.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
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
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "top_level.mercury_compile_main.mih"
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


#line 564 "make.util.m"

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

static MR_bool MR_CALL 
make__util____Unify____build_3_0_10001(
  MR_Box make__util__wrapper_arg_1,
  MR_Box make__util__wrapper_arg_2,
  MR_Box make__util__wrapper_arg_3,
  MR_Box make__util__wrapper_arg_4,
  MR_Box make__util__wrapper_arg_5);

static void MR_CALL 
make__util____Compare____build_3_0_10001(
  MR_Box make__util__wrapper_arg_1,
  MR_Box make__util__wrapper_arg_2,
  MR_Box make__util__wrapper_arg_3,
  MR_Box * make__util__wrapper_arg_4,
  MR_Box make__util__wrapper_arg_5,
  MR_Box make__util__wrapper_arg_6);

static MR_bool MR_CALL 
make__util____Unify____build_2_0_10001(
  MR_Box make__util__wrapper_arg_1,
  MR_Box make__util__wrapper_arg_2,
  MR_Box make__util__wrapper_arg_3,
  MR_Box make__util__wrapper_arg_4);

static void MR_CALL 
make__util____Compare____build_2_0_10001(
  MR_Box make__util__wrapper_arg_1,
  MR_Box make__util__wrapper_arg_2,
  MR_Box * make__util__wrapper_arg_3,
  MR_Box make__util__wrapper_arg_4,
  MR_Box make__util__wrapper_arg_5);

static MR_bool MR_CALL 
make__util____Unify____build_1_0_10001(
  MR_Box make__util__wrapper_arg_1,
  MR_Box make__util__wrapper_arg_2,
  MR_Box make__util__wrapper_arg_3);

static void MR_CALL 
make__util____Compare____build_1_0_10001(
  MR_Box make__util__wrapper_arg_1,
  MR_Box * make__util__wrapper_arg_2,
  MR_Box make__util__wrapper_arg_3,
  MR_Box make__util__wrapper_arg_4);

static MR_bool MR_CALL 
make__util____Unify____build2_2_0_10001(
  MR_Box make__util__wrapper_arg_1,
  MR_Box make__util__wrapper_arg_2,
  MR_Box make__util__wrapper_arg_3,
  MR_Box make__util__wrapper_arg_4);

static void MR_CALL 
make__util____Compare____build2_2_0_10001(
  MR_Box make__util__wrapper_arg_1,
  MR_Box make__util__wrapper_arg_2,
  MR_Box * make__util__wrapper_arg_3,
  MR_Box make__util__wrapper_arg_4,
  MR_Box make__util__wrapper_arg_5);

static MR_bool MR_CALL 
make__util____Unify____foldl2_pred_with_status_3_0_10001(
  MR_Box make__util__wrapper_arg_1,
  MR_Box make__util__wrapper_arg_2,
  MR_Box make__util__wrapper_arg_3,
  MR_Box make__util__wrapper_arg_4,
  MR_Box make__util__wrapper_arg_5);

static void MR_CALL 
make__util____Compare____foldl2_pred_with_status_3_0_10001(
  MR_Box make__util__wrapper_arg_1,
  MR_Box make__util__wrapper_arg_2,
  MR_Box make__util__wrapper_arg_3,
  MR_Box * make__util__wrapper_arg_4,
  MR_Box make__util__wrapper_arg_5,
  MR_Box make__util__wrapper_arg_6);

static MR_bool MR_CALL 
make__util____Unify____foldl3_pred_with_status_4_0_10001(
  MR_Box make__util__wrapper_arg_1,
  MR_Box make__util__wrapper_arg_2,
  MR_Box make__util__wrapper_arg_3,
  MR_Box make__util__wrapper_arg_4,
  MR_Box make__util__wrapper_arg_5,
  MR_Box make__util__wrapper_arg_6);

static void MR_CALL 
make__util____Compare____foldl3_pred_with_status_4_0_10001(
  MR_Box make__util__wrapper_arg_1,
  MR_Box make__util__wrapper_arg_2,
  MR_Box make__util__wrapper_arg_3,
  MR_Box make__util__wrapper_arg_4,
  MR_Box * make__util__wrapper_arg_5,
  MR_Box make__util__wrapper_arg_6,
  MR_Box make__util__wrapper_arg_7);

static MR_bool MR_CALL 
make__util____Unify____job_ctl_0_0_10001(
  MR_Box make__util__wrapper_arg_1,
  MR_Box make__util__wrapper_arg_2);

static void MR_CALL 
make__util____Compare____job_ctl_0_0_10001(
  MR_Box * make__util__wrapper_arg_1,
  MR_Box make__util__wrapper_arg_2,
  MR_Box make__util__wrapper_arg_3);

static MR_bool MR_CALL 
make__util____Unify____stdout_lock_0_0_10001(
  MR_Box make__util__wrapper_arg_1,
  MR_Box make__util__wrapper_arg_2);

static void MR_CALL 
make__util____Compare____stdout_lock_0_0_10001(
  MR_Box * make__util__wrapper_arg_1,
  MR_Box make__util__wrapper_arg_2,
  MR_Box make__util__wrapper_arg_3);

static void MR_CALL 
make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_97_114_103_115_95_105_110_118_111_107_101_100_95_95_104_111_49_52_95_95_91_49_48_93_95_48_13_p_0(
  MR_Word make__util__V_55_55,
  MR_Word make__util__V_56_56,
  MR_Word make__util__Globals_14,
  MR_Word make__util__InvokedByMmcMake_15,
  MR_Word make__util__ModuleName_16,
  MR_Word make__util__DetectedGradeFlags_17,
  MR_Word make__util__OptionVariables_18,
  MR_Word make__util__OptionArgs_19,
  MR_Word make__util__ExtraOptions_20,
  MR_Word * make__util__Succeeded_22,
  MR_Word make__util__Info0_23,
  MR_Word * make__util__MaybeInfo_24);

static void MR_CALL 
make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_105_116_104_95_108_111_99_107_101_100_95_115_116_100_111_117_116_95_95_104_111_49_50_95_95_91_52_93_95_48_4_p_0(
  MR_String make__util__V_35_35,
  MR_Word make__util__V_36_36,
  MR_Word make__util__Info_5);

static void MR_CALL 
make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_105_116_104_95_108_111_99_107_101_100_95_115_116_100_111_117_116_95_95_104_111_49_49_95_95_91_55_93_95_48_4_p_0(
  MR_String make__util__V_35_35,
  MR_Word make__util__V_36_36,
  MR_Word make__util__V_37_37,
  MR_Word make__util__V_38_38,
  MR_Integer make__util__V_39_39,
  MR_Word make__util__Info_5);

static void MR_CALL 
make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_95_104_111_49_48_95_95_91_54_93_95_48_9_p_0(
  MR_Word make__util__V_86_86,
  MR_Word make__util__V_87_87,
  MR_Word make__util__Globals_10,
  MR_Word make__util__ModuleName_11,
  MR_Word make__util__ExtraOptions_12,
  MR_Word * make__util__Succeeded_14,
  MR_Word make__util__STATE_VARIABLE_Info_0_18,
  MR_Word * make__util__STATE_VARIABLE_Info_19);

static void MR_CALL 
make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_112_97_114_97_108_108_101_108_95_112_114_111_99_101_115_115_101_115_95_95_52_54_53_95_95_49_95_95_91_56_93_95_48_12_p_0(
  MR_Word make__util__TypeInfo_for_T_88,
  MR_Word make__util__KeepGoing_11,
  MR_Word make__util__MakeTarget_13,
  MR_Word make__util__Globals_14,
  MR_Word make__util__Targets_15,
  MR_Box make__util__JobCtl_21,
  MR_Word make__util__STATE_VARIABLE_Info_30_30,
  MR_Word make__util__HeadVar__9_90,
  MR_Word * make__util__HeadVar__10_91);

static void MR_CALL 
make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_97_114_103_115_95_105_110_118_111_107_101_100_95_95_91_49_44_32_50_93_95_48_13_p_0(
  MR_Word make__util__Globals_14,
  MR_Word make__util__InvokedByMmcMake_15,
  MR_Word make__util__ModuleName_16,
  MR_Word make__util__DetectedGradeFlags_17,
  MR_Word make__util__OptionVariables_18,
  MR_Word make__util__OptionArgs_19,
  MR_Word make__util__ExtraOptions_20,
  MR_Word make__util__Build_21,
  MR_Word * make__util__Succeeded_22,
  MR_Box make__util__Info0_23,
  MR_Word * make__util__MaybeInfo_24);

static void MR_CALL 
make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_95_119_111_114_107_101_114_95_112_114_111_99_101_115_115_95_95_91_57_93_95_48_11_p_0_1(
  MR_Box make__util__closure_arg,
  MR_Box * make__util__wrapper_arg_1,
  MR_Box make__util__wrapper_arg_2,
  MR_Box * make__util__wrapper_arg_3);

static void MR_CALL 
make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_95_119_111_114_107_101_114_95_112_114_111_99_101_115_115_95_95_91_57_93_95_48_11_p_0(
  MR_Word make__util__TypeInfo_for_T_30,
  MR_Word make__util__TypeInfo_for_Info_31,
  MR_Word make__util__Globals_12,
  MR_Word make__util__KeepGoing_13,
  MR_Word make__util__MakeTarget_14,
  MR_Word make__util__Targets_15,
  MR_Box make__util__JobCtl_16,
  MR_Box make__util__Info_17,
  MR_Word make__util__STATE_VARIABLE_Pids_0_23,
  MR_Word * make__util__STATE_VARIABLE_Pids_24);

static void MR_CALL 
make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_50_95_95_91_49_44_32_50_44_32_51_44_32_52_93_95_48_12_p_0(
  MR_Word make__util__HeadVar__1_1,
  MR_Word make__util__HeadVar__2_2,
  MR_Word make__util__HeadVar__3_3,
  MR_Word make__util__HeadVar__4_4,
  MR_Word make__util__STATE_VARIABLE_Success_0_5,
  MR_Word * make__util__STATE_VARIABLE_Success_6,
  MR_Box make__util__STATE_VARIABLE_Acc_0_7,
  MR_Box * make__util__STATE_VARIABLE_Acc_8,
  MR_Box make__util__STATE_VARIABLE_Info_0_9,
  MR_Box * make__util__STATE_VARIABLE_Info_10,
  MR_Box make__util__STATE_VARIABLE_IO_0_11,
  MR_Box * make__util__STATE_VARIABLE_IO_12);

static void MR_CALL 
make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_50_95_95_91_49_44_32_50_44_32_51_93_95_48_10_p_0(
  MR_Word make__util__HeadVar__1_1,
  MR_Word make__util__HeadVar__2_2,
  MR_Word make__util__HeadVar__3_3,
  MR_Word make__util__HeadVar__4_4,
  MR_Word make__util__STATE_VARIABLE_Success_0_5,
  MR_Word * make__util__STATE_VARIABLE_Success_6,
  MR_Box make__util__STATE_VARIABLE_Info_0_7,
  MR_Box * make__util__STATE_VARIABLE_Info_8,
  MR_Box make__util__STATE_VARIABLE_IO_0_9,
  MR_Box * make__util__STATE_VARIABLE_IO_10);

static void MR_CALL 
make__util__IntroducedFrom__pred__foldl2_maybe_stop_at_error_parallel_processes__471__1_6_p_0(
  MR_Box make__util__JobCtl_21,
  MR_Word make__util__Pids_22,
  MR_Word make__util__HeadVar__3_104,
  MR_Word * make__util__HeadVar__4_105);

static void MR_CALL 
make__util__IntroducedFrom__pred__foldl2_maybe_stop_at_error_parallel_processes__470__1_12_p_0(
  MR_Word make__util__TypeInfo_for_T_88,
  MR_Word make__util__KeepGoing_11,
  MR_Word make__util__MakeTarget_13,
  MR_Word make__util__Globals_14,
  MR_Word make__util__Targets_15,
  MR_Box make__util__JobCtl_21,
  MR_Word make__util__HeadVar__7_42,
  MR_Word * make__util__HeadVar__8_98,
  MR_Word make__util__HeadVar__9_99,
  MR_Word * make__util__HeadVar__10_100);

static void MR_CALL 
make__util__IntroducedFrom__pred__foldl2_maybe_stop_at_error_parallel_processes__465__1_12_p_0(
  MR_Word make__util__TypeInfo_for_T_88,
  MR_Word make__util__KeepGoing_11,
  MR_Word make__util__MakeTarget_13,
  MR_Word make__util__Globals_14,
  MR_Word make__util__Targets_15,
  MR_Box make__util__JobCtl_21,
  MR_Word make__util__STATE_VARIABLE_Info_30_30,
  MR_Integer make__util__HeadVar__8_89,
  MR_Word make__util__HeadVar__9_90,
  MR_Word * make__util__HeadVar__10_91);

static void MR_CALL 
make__util__IntroducedFrom__pred__maybe_symlink_or_copy_linked_target_message__1850__1_4_p_0(
  MR_Word make__util__Globals_5,
  MR_Word make__util__Target_6);

static MR_Word MR_CALL 
make__util__IntroducedFrom__func__make_dependency_list__1460__1_2_f_0(
  MR_Word make__util__FileType_5,
  MR_Word make__util__LambdaHeadVar__1_8);

static MR_Word MR_CALL 
make__util__IntroducedFrom__func__make_target_file_list__1456__1_2_f_0(
  MR_Word make__util__FileType_5,
  MR_Word make__util__LambdaHeadVar__1_8);

static void MR_CALL 
make__util__make_write_module_or_linked_target_4_p_0(
  MR_Word make__util__Globals_5,
  MR_Word make__util__HeadVar__2_2);

static void MR_CALL 
make__util__module_target_to_file_name_maybe_search_8_p_0(
  MR_Word make__util__Globals_9,
  MR_Word make__util__ModuleName_10,
  MR_Word make__util__TargetType_11,
  MR_Word make__util__MkDir_12,
  MR_Word make__util__Search_13,
  MR_String * make__util__FileName_14);

static void MR_CALL 
make__util__get_search_directories_3_p_0(
  MR_Word make__util__Globals_4,
  MR_Word make__util__FileType_5,
  MR_Word * make__util__SearchDirs_6);

static void MR_CALL 
make__util__module_name_to_search_file_name_cache_8_p_0(
  MR_Word make__util__Globals_9,
  MR_Word make__util__ModuleName_10,
  MR_String make__util__Ext_11,
  MR_String * make__util__FileName_12,
  MR_Word make__util__STATE_VARIABLE_Info_0_17,
  MR_Word * make__util__STATE_VARIABLE_Info_18);

static void MR_CALL 
make__util__get_target_timestamp_2_9_p_0(
  MR_Word make__util__Globals_10,
  MR_Word make__util__Search_11,
  MR_Word make__util__TargetFile_12,
  MR_String make__util__FileName_13,
  MR_Word * make__util__MaybeTimestamp_14,
  MR_Word make__util__STATE_VARIABLE_Info_0_24,
  MR_Word * make__util__STATE_VARIABLE_Info_25);

static void MR_CALL 
make__util__get_target_timestamp_analysis_registry_9_p_0(
  MR_Word make__util__Globals_10,
  MR_Word make__util__Search_11,
  MR_Word make__util__TargetFile_12,
  MR_String make__util__FileName_13,
  MR_Word * make__util__MaybeTimestamp_14,
  MR_Word make__util__STATE_VARIABLE_Info_0_21,
  MR_Word * make__util__STATE_VARIABLE_Info_22);

static void MR_CALL 
make__util__write_error_opening_file_4_p_0(
  MR_String make__util__FileName_5,
  MR_Word make__util__Error_6);

static void MR_CALL 
make__util__write_error_opening_output_4_p_0(
  MR_String make__util__FileName_5,
  MR_Word make__util__Error_6);

static void MR_CALL 
make__util__make_write_error_char_7_p_0(
  MR_Word make__util__FullOutputStream_8,
  MR_Word make__util__PartialOutputStream_9,
  MR_Char make__util__Char_10,
  MR_Integer make__util__STATE_VARIABLE_LinesRemaining_0_14,
  MR_Integer * make__util__STATE_VARIABLE_LinesRemaining_15);

static void MR_CALL 
make__util__make_write_error_streams_7_p_0_1(
  MR_Box make__util__closure_arg,
  MR_Box make__util__wrapper_arg_1,
  MR_Box make__util__wrapper_arg_2,
  MR_Box * make__util__wrapper_arg_3,
  MR_Box make__util__wrapper_arg_4,
  MR_Box * make__util__wrapper_arg_5);

static void MR_CALL 
make__util__make_write_error_streams_7_p_0(
  MR_String make__util__FileName_8,
  MR_Word make__util__InputStream_9,
  MR_Word make__util__FullOutputStream_10,
  MR_Word make__util__PartialOutputStream_11,
  MR_Integer make__util__LinesToWrite_12);

static void MR_CALL 
make__util__build_with_module_options_and_output_redirect_2_9_p_0(
  MR_Word make__util__ModuleName_10,
  MR_Word make__util__Build_11,
  MR_Word make__util__Globals_12,
  MR_Word make__util__AllOptions_13,
  MR_Word * make__util__Succeeded_14,
  MR_Word make__util__STATE_VARIABLE_Info_0_17,
  MR_Word * make__util__STATE_VARIABLE_Info_18);

static void MR_CALL 
make__util__unlock_stdout_3_p_0(
  MR_Box make__util__JobCtl_1);

static void MR_CALL 
make__util__lock_stdout_3_p_0(
  MR_Box make__util__JobCtl_1);

static MR_Word MR_CALL 
make__util__make_no_job_ctl_0_f_0(void);

static MR_Word MR_CALL 
make__util__make_yes_job_ctl_1_f_0(
  MR_Box make__util__JobCtl_3);

static void MR_CALL 
make__util__mark_abort_3_p_0(
  MR_Box make__util__JobCtl_1);

static void MR_CALL 
make__util__mark_task_error_5_p_0(
  MR_Box make__util__JobCtl_1,
  MR_Integer make__util__TaskNumber_2,
  MR_Word make__util__KeepGoing_3);

static void MR_CALL 
make__util__mark_task_done_4_p_0(
  MR_Box make__util__JobCtl_1,
  MR_Integer make__util__TaskNumber_2);

static void MR_CALL 
make__util__accept_task_4_p_0(
  MR_Box make__util__JobCtl_1,
  MR_Integer * make__util__TaskNumber_2);

static void MR_CALL 
make__util__destroy_job_ctl_3_p_0(
  MR_Box make__util__JobCtl_1);

static void MR_CALL 
make__util__create_job_ctl_4_p_0(
  MR_Integer make__util__TotalJobs_1,
  MR_Word * make__util__MaybeJobCtl_2);

static MR_bool MR_CALL 
make__util__have_job_ctl_ipc_0_p_0(void);

static void MR_CALL 
make__util__reap_worker_process_5_p_0(
  MR_Integer make__util__Pid_6,
  MR_Word make__util__STATE_VARIABLE_Success_0_10,
  MR_Word * make__util__STATE_VARIABLE_Success_11);

static void MR_CALL 
make__util__worker_loop_signal_cleanup_6_p_0_1(
  MR_Box make__util__closure_arg,
  MR_Box make__util__wrapper_arg_1,
  MR_Box make__util__wrapper_arg_2,
  MR_Box * make__util__wrapper_arg_3);

static void MR_CALL 
make__util__worker_loop_signal_cleanup_6_p_0(
  MR_Word make__util__TypeInfo_for_Info_19,
  MR_Box make__util__JobCtl_7,
  MR_Word make__util__Pids_8,
  MR_Box make__util__STATE_VARIABLE_Info_0_11,
  MR_Box * make__util__STATE_VARIABLE_Info_12);

static void MR_CALL 
make__util__worker_loop_11_p_0(
  MR_Word make__util__TypeInfo_for_T_39,
  MR_Word make__util__TypeInfo_for_Info_40,
  MR_Word make__util__Globals_12,
  MR_Word make__util__KeepGoing_13,
  MR_Word make__util__MakeTarget_14,
  MR_Word make__util__Targets_15,
  MR_Box make__util__JobCtl_16,
  MR_Word make__util__STATE_VARIABLE_Success_0_23,
  MR_Word * make__util__STATE_VARIABLE_Success_24,
  MR_Box make__util__STATE_VARIABLE_Info_0_25,
  MR_Box * make__util__STATE_VARIABLE_Info_26);

static void MR_CALL 
make__util__child_worker_9_p_0_2(
  MR_Box make__util__closure_arg,
  MR_Box make__util__wrapper_arg_1,
  MR_Box * make__util__wrapper_arg_2,
  MR_Box make__util__wrapper_arg_3,
  MR_Box * make__util__wrapper_arg_4);

static void MR_CALL 
make__util__child_worker_9_p_0_1(
  MR_Box make__util__closure_arg,
  MR_Box * make__util__wrapper_arg_1,
  MR_Box make__util__wrapper_arg_2,
  MR_Box * make__util__wrapper_arg_3,
  MR_Box make__util__wrapper_arg_4,
  MR_Box * make__util__wrapper_arg_5);

static void MR_CALL 
make__util__child_worker_9_p_0(
  MR_Word make__util__TypeInfo_for_T_28,
  MR_Word make__util__TypeInfo_for_Info_29,
  MR_Word make__util__Globals_10,
  MR_Word make__util__KeepGoing_11,
  MR_Word make__util__MakeTarget_12,
  MR_Word make__util__Targets_13,
  MR_Box make__util__JobCtl_14,
  MR_Box make__util__Info0_15,
  MR_Word * make__util__Success_16);

static void MR_CALL 
make__util__foldl2_maybe_stop_at_error_parallel_processes_10_p_0_4(
  MR_Box make__util__closure_arg,
  MR_Box make__util__wrapper_arg_1,
  MR_Box make__util__wrapper_arg_2,
  MR_Box * make__util__wrapper_arg_3,
  MR_Box make__util__wrapper_arg_4,
  MR_Box * make__util__wrapper_arg_5);

static void MR_CALL 
make__util__foldl2_maybe_stop_at_error_parallel_processes_10_p_0_3(
  MR_Box make__util__closure_arg,
  MR_Box make__util__wrapper_arg_1,
  MR_Box * make__util__wrapper_arg_2,
  MR_Box make__util__wrapper_arg_3,
  MR_Box * make__util__wrapper_arg_4);

static void MR_CALL 
make__util__foldl2_maybe_stop_at_error_parallel_processes_10_p_0_2(
  MR_Box make__util__closure_arg,
  MR_Box * make__util__wrapper_arg_1,
  MR_Box make__util__wrapper_arg_2,
  MR_Box * make__util__wrapper_arg_3,
  MR_Box make__util__wrapper_arg_4,
  MR_Box * make__util__wrapper_arg_5);

static void MR_CALL 
make__util__foldl2_maybe_stop_at_error_parallel_processes_10_p_0_1(
  MR_Box make__util__closure_arg,
  MR_Box make__util__wrapper_arg_1,
  MR_Box make__util__wrapper_arg_2,
  MR_Box * make__util__wrapper_arg_3,
  MR_Box make__util__wrapper_arg_4,
  MR_Box * make__util__wrapper_arg_5);

static void MR_CALL 
make__util__foldl2_maybe_stop_at_error_parallel_processes_10_p_0(
  MR_Word make__util__TypeInfo_for_T_88,
  MR_Word make__util__KeepGoing_11,
  MR_Integer make__util__Jobs_12,
  MR_Word make__util__MakeTarget_13,
  MR_Word make__util__Globals_14,
  MR_Word make__util__Targets_15,
  MR_Word * make__util__Success_16,
  MR_Word make__util__STATE_VARIABLE_Info_0_25,
  MR_Word * make__util__STATE_VARIABLE_Info_26);

static MR_Box MR_CALL 
make__util__make_dependency_list_2_f_0_1(
  MR_Box make__util__closure_arg,
  MR_Box make__util__wrapper_arg_1);

static MR_Box MR_CALL 
make__util__make_target_file_list_2_f_0_1(
  MR_Box make__util__closure_arg,
  MR_Box make__util__wrapper_arg_1);


static /* final */ const MR_Box make__util_scalar_common_1[4][3];

static /* final */ const MR_Box make__util_scalar_common_2[4][2];

static /* final */ const MR_Box make__util_scalar_common_3[23][1];

static /* final */ const MR_Box make__util_scalar_common_4[2][6];

static /* final */ const MR_Integer make__util_scalar_common_5[1][2];

static /* final */ const MR_Box make__util_scalar_common_6[2][15];

static /* final */ const MR_Box make__util_scalar_common_7[1][9];

static /* final */ const MR_Box make__util_scalar_common_8[1][8];

static /* final */ const MR_Integer make__util_scalar_common_9[1][3];

static /* final */ const MR_Box make__util_scalar_common_10[1][16];

static /* final */ const MR_Box make__util_scalar_common_11[2][10];

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
    ((MR_Box) (&make__util_scalar_common_8[0])),
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

static /* final */ const MR_Box make__util_scalar_common_3[23][1] = {
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
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_String) "invalid module"))
  },
};

static /* final */ const MR_Box make__util_scalar_common_4[2][6] = {
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

static /* final */ const MR_Integer make__util_scalar_common_5[1][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box make__util_scalar_common_6[2][15] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&make__util_scalar_common_5[0])),
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
    ((MR_Box) (&make__util_scalar_common_5[0])),
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

static /* final */ const MR_Box make__util_scalar_common_7[1][9] = {
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

static /* final */ const MR_Box make__util_scalar_common_8[1][8] = {
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

static /* final */ const MR_Integer make__util_scalar_common_9[1][3] = {
  /* row 0 */
  {
    (MR_Integer) 2,
    (MR_Integer) 33,
    (MR_Integer) 65
  },
};

static /* final */ const MR_Box make__util_scalar_common_10[1][16] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&make__util_scalar_common_9[0])),
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

static /* final */ const MR_Box make__util_scalar_common_11[2][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&make__util_scalar_common_5[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&make__util__make__util__type_ctor_info_job_ctl_0)),
    ((MR_Box) (&make__util__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
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
    ((MR_Box) (&make__util_scalar_common_9[0])),
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
#line 631 "make.util.m"


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

#line 900 "make.util.m"
MR_Word 
MC_make_yes_job_ctl(
  MC_JobCtl * make__util__JobCtl_3)
#line 900 "make.util.m"
{
#line 900 "make.util.m"
	MR_Box make__util__boxed_JobCtl_3;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(MC_JobCtl *, make__util__JobCtl_3, make__util__boxed_JobCtl_3);
	ret_value = (MR_Word)make__util__make_yes_job_ctl_1_f_0(make__util__boxed_JobCtl_3);
	return ret_value;
}

#line 906 "make.util.m"
MR_Word 
MC_make_no_job_ctl(void)
#line 906 "make.util.m"
{
#line 906 "make.util.m"
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
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
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
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
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
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
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
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
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
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
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
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
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
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_FOREIGN,
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
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
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

static MR_bool MR_CALL 
make__util____Unify____build_3_0_10001(
  MR_Box make__util__wrapper_arg_1,
  MR_Box make__util__wrapper_arg_2,
  MR_Box make__util__wrapper_arg_3,
  MR_Box make__util__wrapper_arg_4,
  MR_Box make__util__wrapper_arg_5)
{
  {
    MR_bool make__util__succeeded;

    {
      make__util__succeeded = make__util____Unify____build_3_0(((MR_Word) make__util__wrapper_arg_1), ((MR_Word) make__util__wrapper_arg_2), ((MR_Word) make__util__wrapper_arg_3), ((MR_Word) make__util__wrapper_arg_4), ((MR_Word) make__util__wrapper_arg_5));
    }
    return make__util__succeeded;
  }
}

static void MR_CALL 
make__util____Compare____build_3_0_10001(
  MR_Box make__util__wrapper_arg_1,
  MR_Box make__util__wrapper_arg_2,
  MR_Box make__util__wrapper_arg_3,
  MR_Box * make__util__wrapper_arg_4,
  MR_Box make__util__wrapper_arg_5,
  MR_Box make__util__wrapper_arg_6)
{
  {
    MR_Word make__util__conv0_HeadVar__1_1;

    {
      make__util____Compare____build_3_0(((MR_Word) make__util__wrapper_arg_1), ((MR_Word) make__util__wrapper_arg_2), ((MR_Word) make__util__wrapper_arg_3), &make__util__conv0_HeadVar__1_1, ((MR_Word) make__util__wrapper_arg_5), ((MR_Word) make__util__wrapper_arg_6));
    }
    *make__util__wrapper_arg_4 = ((MR_Box) (make__util__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make__util____Unify____build_2_0_10001(
  MR_Box make__util__wrapper_arg_1,
  MR_Box make__util__wrapper_arg_2,
  MR_Box make__util__wrapper_arg_3,
  MR_Box make__util__wrapper_arg_4)
{
  {
    MR_bool make__util__succeeded;

    {
      make__util__succeeded = make__util____Unify____build_2_0(((MR_Word) make__util__wrapper_arg_1), ((MR_Word) make__util__wrapper_arg_2), ((MR_Word) make__util__wrapper_arg_3), ((MR_Word) make__util__wrapper_arg_4));
    }
    return make__util__succeeded;
  }
}

static void MR_CALL 
make__util____Compare____build_2_0_10001(
  MR_Box make__util__wrapper_arg_1,
  MR_Box make__util__wrapper_arg_2,
  MR_Box * make__util__wrapper_arg_3,
  MR_Box make__util__wrapper_arg_4,
  MR_Box make__util__wrapper_arg_5)
{
  {
    MR_Word make__util__conv0_HeadVar__1_1;

    {
      make__util____Compare____build_2_0(((MR_Word) make__util__wrapper_arg_1), ((MR_Word) make__util__wrapper_arg_2), &make__util__conv0_HeadVar__1_1, ((MR_Word) make__util__wrapper_arg_4), ((MR_Word) make__util__wrapper_arg_5));
    }
    *make__util__wrapper_arg_3 = ((MR_Box) (make__util__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make__util____Unify____build_1_0_10001(
  MR_Box make__util__wrapper_arg_1,
  MR_Box make__util__wrapper_arg_2,
  MR_Box make__util__wrapper_arg_3)
{
  {
    MR_bool make__util__succeeded;

    {
      make__util__succeeded = make__util____Unify____build_1_0(((MR_Word) make__util__wrapper_arg_1), ((MR_Word) make__util__wrapper_arg_2), ((MR_Word) make__util__wrapper_arg_3));
    }
    return make__util__succeeded;
  }
}

static void MR_CALL 
make__util____Compare____build_1_0_10001(
  MR_Box make__util__wrapper_arg_1,
  MR_Box * make__util__wrapper_arg_2,
  MR_Box make__util__wrapper_arg_3,
  MR_Box make__util__wrapper_arg_4)
{
  {
    MR_Word make__util__conv0_HeadVar__1_1;

    {
      make__util____Compare____build_1_0(((MR_Word) make__util__wrapper_arg_1), &make__util__conv0_HeadVar__1_1, ((MR_Word) make__util__wrapper_arg_3), ((MR_Word) make__util__wrapper_arg_4));
    }
    *make__util__wrapper_arg_2 = ((MR_Box) (make__util__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make__util____Unify____build2_2_0_10001(
  MR_Box make__util__wrapper_arg_1,
  MR_Box make__util__wrapper_arg_2,
  MR_Box make__util__wrapper_arg_3,
  MR_Box make__util__wrapper_arg_4)
{
  {
    MR_bool make__util__succeeded;

    {
      make__util__succeeded = make__util____Unify____build2_2_0(((MR_Word) make__util__wrapper_arg_1), ((MR_Word) make__util__wrapper_arg_2), ((MR_Word) make__util__wrapper_arg_3), ((MR_Word) make__util__wrapper_arg_4));
    }
    return make__util__succeeded;
  }
}

static void MR_CALL 
make__util____Compare____build2_2_0_10001(
  MR_Box make__util__wrapper_arg_1,
  MR_Box make__util__wrapper_arg_2,
  MR_Box * make__util__wrapper_arg_3,
  MR_Box make__util__wrapper_arg_4,
  MR_Box make__util__wrapper_arg_5)
{
  {
    MR_Word make__util__conv0_HeadVar__1_1;

    {
      make__util____Compare____build2_2_0(((MR_Word) make__util__wrapper_arg_1), ((MR_Word) make__util__wrapper_arg_2), &make__util__conv0_HeadVar__1_1, ((MR_Word) make__util__wrapper_arg_4), ((MR_Word) make__util__wrapper_arg_5));
    }
    *make__util__wrapper_arg_3 = ((MR_Box) (make__util__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make__util____Unify____foldl2_pred_with_status_3_0_10001(
  MR_Box make__util__wrapper_arg_1,
  MR_Box make__util__wrapper_arg_2,
  MR_Box make__util__wrapper_arg_3,
  MR_Box make__util__wrapper_arg_4,
  MR_Box make__util__wrapper_arg_5)
{
  {
    MR_bool make__util__succeeded;

    {
      make__util__succeeded = make__util____Unify____foldl2_pred_with_status_3_0(((MR_Word) make__util__wrapper_arg_1), ((MR_Word) make__util__wrapper_arg_2), ((MR_Word) make__util__wrapper_arg_3), ((MR_Word) make__util__wrapper_arg_4), ((MR_Word) make__util__wrapper_arg_5));
    }
    return make__util__succeeded;
  }
}

static void MR_CALL 
make__util____Compare____foldl2_pred_with_status_3_0_10001(
  MR_Box make__util__wrapper_arg_1,
  MR_Box make__util__wrapper_arg_2,
  MR_Box make__util__wrapper_arg_3,
  MR_Box * make__util__wrapper_arg_4,
  MR_Box make__util__wrapper_arg_5,
  MR_Box make__util__wrapper_arg_6)
{
  {
    MR_Word make__util__conv0_HeadVar__1_1;

    {
      make__util____Compare____foldl2_pred_with_status_3_0(((MR_Word) make__util__wrapper_arg_1), ((MR_Word) make__util__wrapper_arg_2), ((MR_Word) make__util__wrapper_arg_3), &make__util__conv0_HeadVar__1_1, ((MR_Word) make__util__wrapper_arg_5), ((MR_Word) make__util__wrapper_arg_6));
    }
    *make__util__wrapper_arg_4 = ((MR_Box) (make__util__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make__util____Unify____foldl3_pred_with_status_4_0_10001(
  MR_Box make__util__wrapper_arg_1,
  MR_Box make__util__wrapper_arg_2,
  MR_Box make__util__wrapper_arg_3,
  MR_Box make__util__wrapper_arg_4,
  MR_Box make__util__wrapper_arg_5,
  MR_Box make__util__wrapper_arg_6)
{
  {
    MR_bool make__util__succeeded;

    {
      make__util__succeeded = make__util____Unify____foldl3_pred_with_status_4_0(((MR_Word) make__util__wrapper_arg_1), ((MR_Word) make__util__wrapper_arg_2), ((MR_Word) make__util__wrapper_arg_3), ((MR_Word) make__util__wrapper_arg_4), ((MR_Word) make__util__wrapper_arg_5), ((MR_Word) make__util__wrapper_arg_6));
    }
    return make__util__succeeded;
  }
}

static void MR_CALL 
make__util____Compare____foldl3_pred_with_status_4_0_10001(
  MR_Box make__util__wrapper_arg_1,
  MR_Box make__util__wrapper_arg_2,
  MR_Box make__util__wrapper_arg_3,
  MR_Box make__util__wrapper_arg_4,
  MR_Box * make__util__wrapper_arg_5,
  MR_Box make__util__wrapper_arg_6,
  MR_Box make__util__wrapper_arg_7)
{
  {
    MR_Word make__util__conv0_HeadVar__1_1;

    {
      make__util____Compare____foldl3_pred_with_status_4_0(((MR_Word) make__util__wrapper_arg_1), ((MR_Word) make__util__wrapper_arg_2), ((MR_Word) make__util__wrapper_arg_3), ((MR_Word) make__util__wrapper_arg_4), &make__util__conv0_HeadVar__1_1, ((MR_Word) make__util__wrapper_arg_6), ((MR_Word) make__util__wrapper_arg_7));
    }
    *make__util__wrapper_arg_5 = ((MR_Box) (make__util__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make__util____Unify____job_ctl_0_0_10001(
  MR_Box make__util__wrapper_arg_1,
  MR_Box make__util__wrapper_arg_2)
{
  {
    MR_bool make__util__succeeded;

    {
      make__util__succeeded = make__util____Unify____job_ctl_0_0(((MR_Box) make__util__wrapper_arg_1), ((MR_Box) make__util__wrapper_arg_2));
    }
    return make__util__succeeded;
  }
}

static void MR_CALL 
make__util____Compare____job_ctl_0_0_10001(
  MR_Box * make__util__wrapper_arg_1,
  MR_Box make__util__wrapper_arg_2,
  MR_Box make__util__wrapper_arg_3)
{
  {
    MR_Word make__util__conv0_HeadVar__1_1;

    {
      make__util____Compare____job_ctl_0_0(&make__util__conv0_HeadVar__1_1, ((MR_Box) make__util__wrapper_arg_2), ((MR_Box) make__util__wrapper_arg_3));
    }
    *make__util__wrapper_arg_1 = ((MR_Box) (make__util__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make__util____Unify____stdout_lock_0_0_10001(
  MR_Box make__util__wrapper_arg_1,
  MR_Box make__util__wrapper_arg_2)
{
  {
    MR_bool make__util__succeeded;

    {
      make__util__succeeded = make__util____Unify____stdout_lock_0_0(((MR_Box) make__util__wrapper_arg_1), ((MR_Box) make__util__wrapper_arg_2));
    }
    return make__util__succeeded;
  }
}

static void MR_CALL 
make__util____Compare____stdout_lock_0_0_10001(
  MR_Box * make__util__wrapper_arg_1,
  MR_Box make__util__wrapper_arg_2,
  MR_Box make__util__wrapper_arg_3)
{
  {
    MR_Word make__util__conv0_HeadVar__1_1;

    {
      make__util____Compare____stdout_lock_0_0(&make__util__conv0_HeadVar__1_1, ((MR_Box) make__util__wrapper_arg_2), ((MR_Box) make__util__wrapper_arg_3));
    }
    *make__util__wrapper_arg_1 = ((MR_Box) (make__util__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_97_114_103_115_95_105_110_118_111_107_101_100_95_95_104_111_49_52_95_95_91_49_48_93_95_48_13_p_0(
  MR_Word make__util__V_55_55,
  MR_Word make__util__V_56_56,
  MR_Word make__util__Globals_14,
  MR_Word make__util__InvokedByMmcMake_15,
  MR_Word make__util__ModuleName_16,
  MR_Word make__util__DetectedGradeFlags_17,
  MR_Word make__util__OptionVariables_18,
  MR_Word make__util__OptionArgs_19,
  MR_Word make__util__ExtraOptions_20,
  MR_Word * make__util__Succeeded_22,
  MR_Word make__util__Info0_23,
  MR_Word * make__util__MaybeInfo_24)
{
  {
    MR_bool make__util__succeeded;
    MR_Word make__util__OptionsResult_26;

    {
      make__options_file__lookup_mmc_module_options_6_p_0(make__util__Globals_14, make__util__OptionVariables_18, make__util__ModuleName_16, &make__util__OptionsResult_26);
    }
    if ((make__util__OptionsResult_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *make__util__MaybeInfo_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *make__util__Succeeded_22 = (MR_Integer) 0;
      }
    else
      {
        MR_Word make__util__TypeCtorInfo_54_54;
        MR_Word make__util__ModuleOptionArgs_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__util__OptionsResult_26, (MR_Integer) 0)));
        MR_Word make__util__UseSubdirs_28;
        MR_Word make__util__InvokedByMake_29;
        MR_Word make__util__AllOptionArgs_30;
        MR_Word make__util__OptionSpecs_33;
        MR_Word make__util__BuildGlobals_34;
        MR_Word make__util__V_45_45;
        MR_Word make__util__V_46_46;
        MR_Word make__util__V_47_47;
        MR_Word make__util__V_48_48;
        MR_Word make__util__V_31_31;
        MR_Word make__util__V_32_32;

        switch (make__util__InvokedByMmcMake_15) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              make__util__UseSubdirs_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              make__util__InvokedByMake_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 1:
            {
              make__util__UseSubdirs_28 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_2[2]);
              make__util__InvokedByMake_29 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_2[3]);
            }
            break;
        }
        make__util__TypeCtorInfo_54_54 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        {
          make__util__V_48_48 = mercury__list__f_43_43_2_f_0(make__util__TypeCtorInfo_54_54, make__util__ExtraOptions_20, make__util__UseSubdirs_28);
        }
        {
          make__util__V_47_47 = mercury__list__f_43_43_2_f_0(make__util__TypeCtorInfo_54_54, make__util__OptionArgs_19, make__util__V_48_48);
        }
        {
          make__util__V_46_46 = mercury__list__f_43_43_2_f_0(make__util__TypeCtorInfo_54_54, make__util__ModuleOptionArgs_27, make__util__V_47_47);
        }
        {
          make__util__V_45_45 = mercury__list__f_43_43_2_f_0(make__util__TypeCtorInfo_54_54, make__util__DetectedGradeFlags_17, make__util__V_46_46);
        }
        {
          make__util__AllOptionArgs_30 = mercury__list__f_43_43_2_f_0(make__util__TypeCtorInfo_54_54, make__util__InvokedByMake_29, make__util__V_45_45);
        }
        {
          libs__handle_options__handle_given_options_7_p_0(make__util__AllOptionArgs_30, &make__util__V_31_31, &make__util__V_32_32, &make__util__OptionSpecs_33, &make__util__BuildGlobals_34);
        }
        if ((make__util__OptionSpecs_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word make__util__Info_37;

            {
              make__util__build_with_module_options_and_output_redirect_2_9_p_0(make__util__V_55_55, make__util__V_56_56, make__util__BuildGlobals_34, make__util__AllOptionArgs_30, make__util__Succeeded_22, make__util__Info0_23, &make__util__Info_37);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *make__util__MaybeInfo_24 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__util__Info_37));
            }
          }
        else
          {
            *make__util__Succeeded_22 = (MR_Integer) 0;
            *make__util__MaybeInfo_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            {
              libs__handle_options__usage_errors_4_p_0(make__util__BuildGlobals_34, make__util__OptionSpecs_33);
            }
          }
      }
  }
}

static void MR_CALL 
make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_105_116_104_95_108_111_99_107_101_100_95_115_116_100_111_117_116_95_95_104_111_49_50_95_95_91_52_93_95_48_4_p_0(
  MR_String make__util__V_35_35,
  MR_Word make__util__V_36_36,
  MR_Word make__util__Info_5)
{
  {
    MR_bool make__util__succeeded;
    MR_Word make__util__MaybeLock_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 19)));
    MR_Word make__util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 0)));
    MR_Word make__util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 1)));
    MR_Word make__util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 2)));
    MR_Word make__util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 3)));
    MR_Word make__util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 4)));
    MR_Word make__util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 5)));
    MR_Word make__util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 6)));
    MR_Word make__util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 7)));
    MR_Word make__util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 8)));
    MR_Word make__util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 9)));
    MR_Word make__util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 10)));
    MR_Word make__util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 11)));
    MR_Word make__util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 12)));
    MR_Word make__util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 13)));
    MR_Word make__util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 14)));
    MR_Word make__util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 15)));
    MR_Word make__util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 16)));
    MR_Word make__util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 17)));
    MR_Integer make__util__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 18)));

    if ((make__util__MaybeLock_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        make__util__write_error_opening_file_4_p_0(make__util__V_35_35, make__util__V_36_36);
      }
    else
      {
        MR_Box make__util__Lock_9 = ((MR_Box) (MR_hl_field(MR_mktag(1), make__util__MaybeLock_8, (MR_Integer) 0)));

        {
          make__util__lock_stdout_3_p_0(make__util__Lock_9);
        }
        {
          make__util__write_error_opening_file_4_p_0(make__util__V_35_35, make__util__V_36_36);
        }
        {
          make__util__unlock_stdout_3_p_0(make__util__Lock_9);
        }
      }
  }
}

static void MR_CALL 
make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_105_116_104_95_108_111_99_107_101_100_95_115_116_100_111_117_116_95_95_104_111_49_49_95_95_91_55_93_95_48_4_p_0(
  MR_String make__util__V_35_35,
  MR_Word make__util__V_36_36,
  MR_Word make__util__V_37_37,
  MR_Word make__util__V_38_38,
  MR_Integer make__util__V_39_39,
  MR_Word make__util__Info_5)
{
  {
    MR_bool make__util__succeeded;
    MR_Word make__util__MaybeLock_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 19)));
    MR_Word make__util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 0)));
    MR_Word make__util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 1)));
    MR_Word make__util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 2)));
    MR_Word make__util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 3)));
    MR_Word make__util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 4)));
    MR_Word make__util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 5)));
    MR_Word make__util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 6)));
    MR_Word make__util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 7)));
    MR_Word make__util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 8)));
    MR_Word make__util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 9)));
    MR_Word make__util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 10)));
    MR_Word make__util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 11)));
    MR_Word make__util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 12)));
    MR_Word make__util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 13)));
    MR_Word make__util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 14)));
    MR_Word make__util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 15)));
    MR_Word make__util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 16)));
    MR_Word make__util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 17)));
    MR_Integer make__util__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 18)));

    if ((make__util__MaybeLock_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        make__util__make_write_error_streams_7_p_0(make__util__V_35_35, make__util__V_36_36, make__util__V_37_37, make__util__V_38_38, make__util__V_39_39);
      }
    else
      {
        MR_Box make__util__Lock_9 = ((MR_Box) (MR_hl_field(MR_mktag(1), make__util__MaybeLock_8, (MR_Integer) 0)));

        {
          make__util__lock_stdout_3_p_0(make__util__Lock_9);
        }
        {
          make__util__make_write_error_streams_7_p_0(make__util__V_35_35, make__util__V_36_36, make__util__V_37_37, make__util__V_38_38, make__util__V_39_39);
        }
        {
          make__util__unlock_stdout_3_p_0(make__util__Lock_9);
        }
      }
  }
}

static void MR_CALL 
make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_95_104_111_49_48_95_95_91_54_93_95_48_9_p_0(
  MR_Word make__util__V_86_86,
  MR_Word make__util__V_87_87,
  MR_Word make__util__Globals_10,
  MR_Word make__util__ModuleName_11,
  MR_Word make__util__ExtraOptions_12,
  MR_Word * make__util__Succeeded_14,
  MR_Word make__util__STATE_VARIABLE_Info_0_18,
  MR_Word * make__util__STATE_VARIABLE_Info_19)
{
  {
    MR_bool make__util__succeeded;
    MR_Word make__util__MaybeInfo_17;
    MR_Word make__util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 3)));
    MR_Word make__util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 4)));
    MR_Word make__util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 5)));
    MR_Word make__util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 0)));
    MR_Word make__util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 1)));
    MR_Word make__util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 2)));
    MR_Word make__util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 6)));
    MR_Word make__util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 7)));
    MR_Word make__util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 8)));
    MR_Word make__util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 9)));
    MR_Word make__util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 10)));
    MR_Word make__util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 11)));
    MR_Word make__util__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 12)));
    MR_Word make__util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 13)));
    MR_Word make__util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 14)));
    MR_Word make__util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 15)));
    MR_Word make__util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 16)));
    MR_Word make__util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 17)));
    MR_Integer make__util__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 18)));
    MR_Word make__util__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 19)));

    {
      make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_97_114_103_115_95_105_110_118_111_107_101_100_95_95_104_111_49_52_95_95_91_49_48_93_95_48_13_p_0(make__util__V_86_86, make__util__V_87_87, make__util__Globals_10, (MR_Integer) 1, make__util__ModuleName_11, make__util__V_23_23, make__util__V_32_32, make__util__V_31_31, make__util__ExtraOptions_12, make__util__Succeeded_14, make__util__STATE_VARIABLE_Info_0_18, &make__util__MaybeInfo_17);
    }
    if ((make__util__MaybeInfo_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *make__util__STATE_VARIABLE_Info_19 = make__util__STATE_VARIABLE_Info_0_18;
    else
      *make__util__STATE_VARIABLE_Info_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__util__MaybeInfo_17, (MR_Integer) 0)));
  }
}

static void MR_CALL 
make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_112_97_114_97_108_108_101_108_95_112_114_111_99_101_115_115_101_115_95_95_52_54_53_95_95_49_95_95_91_56_93_95_48_12_p_0(
  MR_Word make__util__TypeInfo_for_T_88,
  MR_Word make__util__KeepGoing_11,
  MR_Word make__util__MakeTarget_13,
  MR_Word make__util__Globals_14,
  MR_Word make__util__Targets_15,
  MR_Box make__util__JobCtl_21,
  MR_Word make__util__STATE_VARIABLE_Info_30_30,
  MR_Word make__util__HeadVar__9_90,
  MR_Word * make__util__HeadVar__10_91)
{
  {
    MR_bool make__util__succeeded;

    {
      make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_95_119_111_114_107_101_114_95_112_114_111_99_101_115_115_95_95_91_57_93_95_48_11_p_0(make__util__TypeInfo_for_T_88, (MR_Word) &make__make__type_ctor_info_make_info_0, make__util__Globals_14, make__util__KeepGoing_11, make__util__MakeTarget_13, make__util__Targets_15, make__util__JobCtl_21, ((MR_Box) (make__util__STATE_VARIABLE_Info_30_30)), make__util__HeadVar__9_90, make__util__HeadVar__10_91);
    }
  }
}

static void MR_CALL 
make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_97_114_103_115_95_105_110_118_111_107_101_100_95_95_91_49_44_32_50_93_95_48_13_p_0(
  MR_Word make__util__Globals_14,
  MR_Word make__util__InvokedByMmcMake_15,
  MR_Word make__util__ModuleName_16,
  MR_Word make__util__DetectedGradeFlags_17,
  MR_Word make__util__OptionVariables_18,
  MR_Word make__util__OptionArgs_19,
  MR_Word make__util__ExtraOptions_20,
  MR_Word make__util__Build_21,
  MR_Word * make__util__Succeeded_22,
  MR_Box make__util__Info0_23,
  MR_Word * make__util__MaybeInfo_24)
{
  {
    MR_bool make__util__succeeded;
    MR_Word make__util__OptionsResult_26;

    {
      make__options_file__lookup_mmc_module_options_6_p_0(make__util__Globals_14, make__util__OptionVariables_18, make__util__ModuleName_16, &make__util__OptionsResult_26);
    }
    if ((make__util__OptionsResult_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *make__util__MaybeInfo_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *make__util__Succeeded_22 = (MR_Integer) 0;
      }
    else
      {
        MR_Word make__util__TypeCtorInfo_54_54;
        MR_Word make__util__ModuleOptionArgs_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__util__OptionsResult_26, (MR_Integer) 0)));
        MR_Word make__util__UseSubdirs_28;
        MR_Word make__util__InvokedByMake_29;
        MR_Word make__util__AllOptionArgs_30;
        MR_Word make__util__OptionSpecs_33;
        MR_Word make__util__BuildGlobals_34;
        MR_Word make__util__V_45_45;
        MR_Word make__util__V_46_46;
        MR_Word make__util__V_47_47;
        MR_Word make__util__V_48_48;
        MR_Word make__util__V_31_31;
        MR_Word make__util__V_32_32;

        switch (make__util__InvokedByMmcMake_15) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              make__util__UseSubdirs_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              make__util__InvokedByMake_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 1:
            {
              make__util__UseSubdirs_28 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_2[2]);
              make__util__InvokedByMake_29 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_2[3]);
            }
            break;
        }
        make__util__TypeCtorInfo_54_54 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        {
          make__util__V_48_48 = mercury__list__f_43_43_2_f_0(make__util__TypeCtorInfo_54_54, make__util__ExtraOptions_20, make__util__UseSubdirs_28);
        }
        {
          make__util__V_47_47 = mercury__list__f_43_43_2_f_0(make__util__TypeCtorInfo_54_54, make__util__OptionArgs_19, make__util__V_48_48);
        }
        {
          make__util__V_46_46 = mercury__list__f_43_43_2_f_0(make__util__TypeCtorInfo_54_54, make__util__ModuleOptionArgs_27, make__util__V_47_47);
        }
        {
          make__util__V_45_45 = mercury__list__f_43_43_2_f_0(make__util__TypeCtorInfo_54_54, make__util__DetectedGradeFlags_17, make__util__V_46_46);
        }
        {
          make__util__AllOptionArgs_30 = mercury__list__f_43_43_2_f_0(make__util__TypeCtorInfo_54_54, make__util__InvokedByMake_29, make__util__V_45_45);
        }
        {
          libs__handle_options__handle_given_options_7_p_0(make__util__AllOptionArgs_30, &make__util__V_31_31, &make__util__V_32_32, &make__util__OptionSpecs_33, &make__util__BuildGlobals_34);
        }
        if ((make__util__OptionSpecs_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Box make__util__Info_37;
            void MR_CALL (* make__util__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), make__util__Build_21, (MR_Integer) 1)));
            MR_Box make__util__conv2_Succeeded_22;
            MR_Box make__util__conv1_STATE_VARIABLE_IO_39;

            {
              make__util__func_0(((MR_Box) make__util__Build_21), ((MR_Box) (make__util__BuildGlobals_34)), ((MR_Box) (make__util__AllOptionArgs_30)), &make__util__conv2_Succeeded_22, make__util__Info0_23, &make__util__Info_37, ((MR_Box) ((MR_Integer) 0)), &make__util__conv1_STATE_VARIABLE_IO_39);
            }
            *make__util__Succeeded_22 = ((MR_Word) make__util__conv2_Succeeded_22);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *make__util__MaybeInfo_24 = base;
              MR_hl_field(MR_mktag(1), base, 0) = make__util__Info_37;
            }
          }
        else
          {
            *make__util__Succeeded_22 = (MR_Integer) 0;
            *make__util__MaybeInfo_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            {
              libs__handle_options__usage_errors_4_p_0(make__util__BuildGlobals_34, make__util__OptionSpecs_33);
            }
          }
      }
  }
}

static void MR_CALL 
make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_95_119_111_114_107_101_114_95_112_114_111_99_101_115_115_95_95_91_57_93_95_48_11_p_0_1(
  MR_Box make__util__closure_arg,
  MR_Box * make__util__wrapper_arg_1,
  MR_Box make__util__wrapper_arg_2,
  MR_Box * make__util__wrapper_arg_3)
{
  {
    MR_Box make__util__closure = make__util__closure_arg;
    MR_Word make__util__conv0_Success_16;

    {
      make__util__child_worker_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 8))), ((MR_Box) (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 9))), (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 10)), &make__util__conv0_Success_16);
    }
    *make__util__wrapper_arg_1 = ((MR_Box) (make__util__conv0_Success_16));
  }
}

static void MR_CALL 
make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_95_119_111_114_107_101_114_95_112_114_111_99_101_115_115_95_95_91_57_93_95_48_11_p_0(
  MR_Word make__util__TypeInfo_for_T_30,
  MR_Word make__util__TypeInfo_for_Info_31,
  MR_Word make__util__Globals_12,
  MR_Word make__util__KeepGoing_13,
  MR_Word make__util__MakeTarget_14,
  MR_Word make__util__Targets_15,
  MR_Box make__util__JobCtl_16,
  MR_Box make__util__Info_17,
  MR_Word make__util__STATE_VARIABLE_Pids_0_23,
  MR_Word * make__util__STATE_VARIABLE_Pids_24)
{
  {
    MR_bool make__util__succeeded;
    MR_Word make__util__MaybePid_21;
    MR_Word make__util__V_27_27;

    {
      make__util__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), make__util__V_27_27, 0) = ((MR_Box) (&make__util_scalar_common_13[0]));
      MR_hl_field(MR_mktag(0), make__util__V_27_27, 1) = ((MR_Box) (make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_95_119_111_114_107_101_114_95_112_114_111_99_101_115_115_95_95_91_57_93_95_48_11_p_0_1));
      MR_hl_field(MR_mktag(0), make__util__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(0), make__util__V_27_27, 3) = ((MR_Box) (make__util__TypeInfo_for_T_30));
      MR_hl_field(MR_mktag(0), make__util__V_27_27, 4) = ((MR_Box) (make__util__TypeInfo_for_Info_31));
      MR_hl_field(MR_mktag(0), make__util__V_27_27, 5) = ((MR_Box) (make__util__Globals_12));
      MR_hl_field(MR_mktag(0), make__util__V_27_27, 6) = ((MR_Box) (make__util__KeepGoing_13));
      MR_hl_field(MR_mktag(0), make__util__V_27_27, 7) = ((MR_Box) (make__util__MakeTarget_14));
      MR_hl_field(MR_mktag(0), make__util__V_27_27, 8) = ((MR_Box) (make__util__Targets_15));
      MR_hl_field(MR_mktag(0), make__util__V_27_27, 9) = ((MR_Box) (make__util__JobCtl_16));
      MR_hl_field(MR_mktag(0), make__util__V_27_27, 10) = make__util__Info_17;
    }
    {
      libs__process_util__start_in_forked_process_4_p_0(make__util__V_27_27, &make__util__MaybePid_21);
    }
    if ((make__util__MaybePid_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *make__util__STATE_VARIABLE_Pids_24 = make__util__STATE_VARIABLE_Pids_0_23;
    else
      {
        MR_Integer make__util__Pid_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), make__util__MaybePid_21, (MR_Integer) 0)));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *make__util__STATE_VARIABLE_Pids_24 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__util__Pid_22));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (make__util__STATE_VARIABLE_Pids_0_23));
        }
      }
  }
}

static void MR_CALL 
make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_50_95_95_91_49_44_32_50_44_32_51_44_32_52_93_95_48_12_p_0(
  MR_Word make__util__HeadVar__1_1,
  MR_Word make__util__HeadVar__2_2,
  MR_Word make__util__HeadVar__3_3,
  MR_Word make__util__HeadVar__4_4,
  MR_Word make__util__STATE_VARIABLE_Success_0_5,
  MR_Word * make__util__STATE_VARIABLE_Success_6,
  MR_Box make__util__STATE_VARIABLE_Acc_0_7,
  MR_Box * make__util__STATE_VARIABLE_Acc_8,
  MR_Box make__util__STATE_VARIABLE_Info_0_9,
  MR_Box * make__util__STATE_VARIABLE_Info_10,
  MR_Box make__util__STATE_VARIABLE_IO_0_11,
  MR_Box * make__util__STATE_VARIABLE_IO_12)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool make__util__succeeded;

        if ((make__util__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *make__util__STATE_VARIABLE_IO_12 = make__util__STATE_VARIABLE_IO_0_11;
            *make__util__STATE_VARIABLE_Info_10 = make__util__STATE_VARIABLE_Info_0_9;
            *make__util__STATE_VARIABLE_Acc_8 = make__util__STATE_VARIABLE_Acc_0_7;
            *make__util__STATE_VARIABLE_Success_6 = make__util__STATE_VARIABLE_Success_0_5;
          }
        else
          {
            MR_Box make__util__T_31 = (MR_hl_field(MR_mktag(1), make__util__HeadVar__4_4, (MR_Integer) 0));
            MR_Word make__util__Ts_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__util__HeadVar__4_4, (MR_Integer) 1)));
            MR_Word make__util__NewSuccess_37;
            MR_Box make__util__STATE_VARIABLE_Acc_46_46;
            MR_Box make__util__STATE_VARIABLE_Info_47_47;
            MR_Box make__util__STATE_VARIABLE_IO_48_48;
            void MR_CALL (* make__util__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), make__util__HeadVar__2_2, (MR_Integer) 1)));
            MR_Box make__util__conv1_NewSuccess_37;

            {
              make__util__func_0(((MR_Box) make__util__HeadVar__2_2), ((MR_Box) (make__util__HeadVar__3_3)), make__util__T_31, &make__util__conv1_NewSuccess_37, make__util__STATE_VARIABLE_Acc_0_7, &make__util__STATE_VARIABLE_Acc_46_46, make__util__STATE_VARIABLE_Info_0_9, &make__util__STATE_VARIABLE_Info_47_47, make__util__STATE_VARIABLE_IO_0_11, &make__util__STATE_VARIABLE_IO_48_48);
            }
            make__util__NewSuccess_37 = ((MR_Word) make__util__conv1_NewSuccess_37);
            make__util__succeeded = (make__util__NewSuccess_37 == (MR_Integer) 1);
            if (!(make__util__succeeded))
              make__util__succeeded = (make__util__HeadVar__1_1 == (MR_Integer) 1);
            if (make__util__succeeded)
              {
                MR_Word make__util__STATE_VARIABLE_Success_49_49;

                {
                  make__util__STATE_VARIABLE_Success_49_49 = mercury__bool__and_2_f_0(make__util__STATE_VARIABLE_Success_0_5, make__util__NewSuccess_37);
                }
                /* direct tailcall eliminated */
                {
                  MR_Word make__util__HeadVar__4__tmp_copy_4 = make__util__Ts_32;
                  MR_Word make__util__STATE_VARIABLE_Success_0__tmp_copy_5 = make__util__STATE_VARIABLE_Success_49_49;
                  MR_Box make__util__STATE_VARIABLE_Acc_0__tmp_copy_7 = make__util__STATE_VARIABLE_Acc_46_46;
                  MR_Box make__util__STATE_VARIABLE_Info_0__tmp_copy_9 = make__util__STATE_VARIABLE_Info_47_47;
                  MR_Box make__util__STATE_VARIABLE_IO_0__tmp_copy_11 = make__util__STATE_VARIABLE_IO_48_48;

                  make__util__STATE_VARIABLE_IO_0_11 = make__util__STATE_VARIABLE_IO_0__tmp_copy_11;
                  make__util__STATE_VARIABLE_Info_0_9 = make__util__STATE_VARIABLE_Info_0__tmp_copy_9;
                  make__util__STATE_VARIABLE_Acc_0_7 = make__util__STATE_VARIABLE_Acc_0__tmp_copy_7;
                  make__util__STATE_VARIABLE_Success_0_5 = make__util__STATE_VARIABLE_Success_0__tmp_copy_5;
                  make__util__HeadVar__4_4 = make__util__HeadVar__4__tmp_copy_4;
                }
                continue;
              }
            else
              {
                *make__util__STATE_VARIABLE_Success_6 = (MR_Integer) 0;
                *make__util__STATE_VARIABLE_IO_12 = make__util__STATE_VARIABLE_IO_48_48;
                *make__util__STATE_VARIABLE_Info_10 = make__util__STATE_VARIABLE_Info_47_47;
                *make__util__STATE_VARIABLE_Acc_8 = make__util__STATE_VARIABLE_Acc_46_46;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_50_95_95_91_49_44_32_50_44_32_51_93_95_48_10_p_0(
  MR_Word make__util__HeadVar__1_1,
  MR_Word make__util__HeadVar__2_2,
  MR_Word make__util__HeadVar__3_3,
  MR_Word make__util__HeadVar__4_4,
  MR_Word make__util__STATE_VARIABLE_Success_0_5,
  MR_Word * make__util__STATE_VARIABLE_Success_6,
  MR_Box make__util__STATE_VARIABLE_Info_0_7,
  MR_Box * make__util__STATE_VARIABLE_Info_8,
  MR_Box make__util__STATE_VARIABLE_IO_0_9,
  MR_Box * make__util__STATE_VARIABLE_IO_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool make__util__succeeded;

        if ((make__util__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *make__util__STATE_VARIABLE_IO_10 = make__util__STATE_VARIABLE_IO_0_9;
            *make__util__STATE_VARIABLE_Info_8 = make__util__STATE_VARIABLE_Info_0_7;
            *make__util__STATE_VARIABLE_Success_6 = make__util__STATE_VARIABLE_Success_0_5;
          }
        else
          {
            MR_Box make__util__T_26 = (MR_hl_field(MR_mktag(1), make__util__HeadVar__4_4, (MR_Integer) 0));
            MR_Word make__util__Ts_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__util__HeadVar__4_4, (MR_Integer) 1)));
            MR_Word make__util__NewSuccess_31;
            MR_Box make__util__STATE_VARIABLE_Info_38_38;
            MR_Box make__util__STATE_VARIABLE_IO_39_39;
            void MR_CALL (* make__util__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), make__util__HeadVar__2_2, (MR_Integer) 1)));
            MR_Box make__util__conv1_NewSuccess_31;

            {
              make__util__func_0(((MR_Box) make__util__HeadVar__2_2), ((MR_Box) (make__util__HeadVar__3_3)), make__util__T_26, &make__util__conv1_NewSuccess_31, make__util__STATE_VARIABLE_Info_0_7, &make__util__STATE_VARIABLE_Info_38_38, make__util__STATE_VARIABLE_IO_0_9, &make__util__STATE_VARIABLE_IO_39_39);
            }
            make__util__NewSuccess_31 = ((MR_Word) make__util__conv1_NewSuccess_31);
            make__util__succeeded = (make__util__NewSuccess_31 == (MR_Integer) 1);
            if (!(make__util__succeeded))
              make__util__succeeded = (make__util__HeadVar__1_1 == (MR_Integer) 1);
            if (make__util__succeeded)
              {
                MR_Word make__util__STATE_VARIABLE_Success_40_40;

                {
                  make__util__STATE_VARIABLE_Success_40_40 = mercury__bool__and_2_f_0(make__util__STATE_VARIABLE_Success_0_5, make__util__NewSuccess_31);
                }
                /* direct tailcall eliminated */
                {
                  MR_Word make__util__HeadVar__4__tmp_copy_4 = make__util__Ts_27;
                  MR_Word make__util__STATE_VARIABLE_Success_0__tmp_copy_5 = make__util__STATE_VARIABLE_Success_40_40;
                  MR_Box make__util__STATE_VARIABLE_Info_0__tmp_copy_7 = make__util__STATE_VARIABLE_Info_38_38;
                  MR_Box make__util__STATE_VARIABLE_IO_0__tmp_copy_9 = make__util__STATE_VARIABLE_IO_39_39;

                  make__util__STATE_VARIABLE_IO_0_9 = make__util__STATE_VARIABLE_IO_0__tmp_copy_9;
                  make__util__STATE_VARIABLE_Info_0_7 = make__util__STATE_VARIABLE_Info_0__tmp_copy_7;
                  make__util__STATE_VARIABLE_Success_0_5 = make__util__STATE_VARIABLE_Success_0__tmp_copy_5;
                  make__util__HeadVar__4_4 = make__util__HeadVar__4__tmp_copy_4;
                }
                continue;
              }
            else
              {
                *make__util__STATE_VARIABLE_Success_6 = (MR_Integer) 0;
                *make__util__STATE_VARIABLE_IO_10 = make__util__STATE_VARIABLE_IO_39_39;
                *make__util__STATE_VARIABLE_Info_8 = make__util__STATE_VARIABLE_Info_38_38;
              }
          }
      }
      break;
    }
}

void MR_CALL 
make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_100_105_114_101_99_116_95_111_117_116_112_117_116_95_95_91_49_93_95_48_6_p_0(
  MR_Word * make__util__MaybeErrorStream_8,
  MR_Word make__util__STATE_VARIABLE_Info_0_15,
  MR_Word * make__util__STATE_VARIABLE_Info_16)
{
  {
    MR_bool make__util__succeeded;
    MR_String make__util__ErrorFileName_11;
    MR_Word make__util__ErrorFileRes_12;

    {
      mercury__io__make_temp_3_p_0(&make__util__ErrorFileName_11);
    }
    {
      mercury__io__open_output_4_p_0(make__util__ErrorFileName_11, &make__util__ErrorFileRes_12);
    }
    if (((MR_tag((MR_Word) make__util__ErrorFileRes_12)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word make__util__IOError_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__util__ErrorFileRes_12, (MR_Integer) 0)));
        MR_Word make__util__MaybeLock_30;
        MR_Word make__util__V_36_36;
        MR_Word make__util__V_37_37;
        MR_Word make__util__V_38_38;
        MR_Word make__util__V_39_39;
        MR_Word make__util__V_40_40;
        MR_Word make__util__V_41_41;
        MR_Word make__util__V_42_42;
        MR_Word make__util__V_43_43;
        MR_Word make__util__V_44_44;
        MR_Word make__util__V_45_45;
        MR_Word make__util__V_46_46;
        MR_Word make__util__V_47_47;
        MR_Word make__util__V_48_48;
        MR_Word make__util__V_49_49;
        MR_Word make__util__V_50_50;
        MR_Word make__util__V_51_51;
        MR_Word make__util__V_52_52;
        MR_Word make__util__V_53_53;
        MR_Integer make__util__V_54_54;

        *make__util__MaybeErrorStream_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        make__util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_15, (MR_Integer) 0)));
        make__util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_15, (MR_Integer) 1)));
        make__util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_15, (MR_Integer) 2)));
        make__util__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)));
        make__util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_15, (MR_Integer) 4)));
        make__util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_15, (MR_Integer) 5)));
        make__util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_15, (MR_Integer) 6)));
        make__util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_15, (MR_Integer) 7)));
        make__util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_15, (MR_Integer) 8)));
        make__util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_15, (MR_Integer) 9)));
        make__util__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_15, (MR_Integer) 10)));
        make__util__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_15, (MR_Integer) 11)));
        make__util__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_15, (MR_Integer) 12)));
        make__util__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_15, (MR_Integer) 13)));
        make__util__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_15, (MR_Integer) 14)));
        make__util__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_15, (MR_Integer) 15)));
        make__util__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_15, (MR_Integer) 16)));
        make__util__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_15, (MR_Integer) 17)));
        make__util__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_15, (MR_Integer) 18)));
        make__util__MaybeLock_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_15, (MR_Integer) 19)));
        if ((make__util__MaybeLock_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            make__util__write_error_opening_output_4_p_0(make__util__ErrorFileName_11, make__util__IOError_14);
          }
        else
          {
            MR_Box make__util__Lock_31 = ((MR_Box) (MR_hl_field(MR_mktag(1), make__util__MaybeLock_30, (MR_Integer) 0)));

            {
              make__util__lock_stdout_3_p_0(make__util__Lock_31);
            }
            {
              make__util__write_error_opening_output_4_p_0(make__util__ErrorFileName_11, make__util__IOError_14);
            }
            {
              make__util__unlock_stdout_3_p_0(make__util__Lock_31);
            }
          }
      }
    else
      {
        MR_Word make__util__ErrorOutputStream_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__ErrorFileRes_12, (MR_Integer) 0)));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *make__util__MaybeErrorStream_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__util__ErrorOutputStream_13));
        }
      }
    *make__util__STATE_VARIABLE_Info_16 = make__util__STATE_VARIABLE_Info_0_15;
  }
}

static void MR_CALL 
make__util__IntroducedFrom__pred__foldl2_maybe_stop_at_error_parallel_processes__471__1_6_p_0(
  MR_Box make__util__JobCtl_21,
  MR_Word make__util__Pids_22,
  MR_Word make__util__HeadVar__3_104,
  MR_Word * make__util__HeadVar__4_105)
{
  {
    MR_bool make__util__succeeded;
    MR_Box make__util__conv0_HeadVar__4_105;

    {
      make__util__worker_loop_signal_cleanup_6_p_0((MR_Word) &make__make__type_ctor_info_make_info_0, make__util__JobCtl_21, make__util__Pids_22, ((MR_Box) (make__util__HeadVar__3_104)), &make__util__conv0_HeadVar__4_105);
    }
    *make__util__HeadVar__4_105 = ((MR_Word) make__util__conv0_HeadVar__4_105);
  }
}

static void MR_CALL 
make__util__IntroducedFrom__pred__foldl2_maybe_stop_at_error_parallel_processes__470__1_12_p_0(
  MR_Word make__util__TypeInfo_for_T_88,
  MR_Word make__util__KeepGoing_11,
  MR_Word make__util__MakeTarget_13,
  MR_Word make__util__Globals_14,
  MR_Word make__util__Targets_15,
  MR_Box make__util__JobCtl_21,
  MR_Word make__util__HeadVar__7_42,
  MR_Word * make__util__HeadVar__8_98,
  MR_Word make__util__HeadVar__9_99,
  MR_Word * make__util__HeadVar__10_100)
{
  {
    MR_bool make__util__succeeded;
    MR_Box make__util__conv0_HeadVar__10_100;

    {
      make__util__worker_loop_11_p_0(make__util__TypeInfo_for_T_88, (MR_Word) &make__make__type_ctor_info_make_info_0, make__util__Globals_14, make__util__KeepGoing_11, make__util__MakeTarget_13, make__util__Targets_15, make__util__JobCtl_21, make__util__HeadVar__7_42, make__util__HeadVar__8_98, ((MR_Box) (make__util__HeadVar__9_99)), &make__util__conv0_HeadVar__10_100);
    }
    *make__util__HeadVar__10_100 = ((MR_Word) make__util__conv0_HeadVar__10_100);
  }
}

static void MR_CALL 
make__util__IntroducedFrom__pred__foldl2_maybe_stop_at_error_parallel_processes__465__1_12_p_0(
  MR_Word make__util__TypeInfo_for_T_88,
  MR_Word make__util__KeepGoing_11,
  MR_Word make__util__MakeTarget_13,
  MR_Word make__util__Globals_14,
  MR_Word make__util__Targets_15,
  MR_Box make__util__JobCtl_21,
  MR_Word make__util__STATE_VARIABLE_Info_30_30,
  MR_Integer make__util__HeadVar__8_89,
  MR_Word make__util__HeadVar__9_90,
  MR_Word * make__util__HeadVar__10_91)
{
  {
    MR_bool make__util__succeeded;

    {
      make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_112_97_114_97_108_108_101_108_95_112_114_111_99_101_115_115_101_115_95_95_52_54_53_95_95_49_95_95_91_56_93_95_48_12_p_0(make__util__TypeInfo_for_T_88, make__util__KeepGoing_11, make__util__MakeTarget_13, make__util__Globals_14, make__util__Targets_15, make__util__JobCtl_21, make__util__STATE_VARIABLE_Info_30_30, make__util__HeadVar__9_90, make__util__HeadVar__10_91);
    }
  }
}

static void MR_CALL 
make__util__IntroducedFrom__pred__maybe_symlink_or_copy_linked_target_message__1850__1_4_p_0(
  MR_Word make__util__Globals_5,
  MR_Word make__util__Target_6)
{
  {
    MR_bool make__util__succeeded;
    MR_Word make__util__ModuleName_26;
    MR_Word make__util__FileType_27;

    {
      mercury__io__write_string_3_p_0((MR_String) "Made symlink/copy of ");
    }
    make__util__ModuleName_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Target_6, (MR_Integer) 0)));
    make__util__FileType_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Target_6, (MR_Integer) 1)));
    switch (MR_tag((MR_Word) make__util__FileType_27)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word make__util__ModuleTargetType_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__FileType_27, (MR_Integer) 0)));
          MR_Word make__util__TargetFile_30;

          {
            make__util__TargetFile_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), make__util__TargetFile_30, 0) = ((MR_Box) (make__util__ModuleName_26));
            MR_hl_field(MR_mktag(0), make__util__TargetFile_30, 1) = ((MR_Box) (make__util__ModuleTargetType_29));
          }
          {
            make__util__make_write_target_file_wrapped_6_p_0(make__util__Globals_5, (MR_String) "", make__util__TargetFile_30, (MR_String) "");
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word make__util__LinkedTargetType_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__util__FileType_27, (MR_Integer) 0)));
          MR_String make__util__FileName_32;

          {
            make__util__linked_target_file_name_6_p_0(make__util__Globals_5, make__util__ModuleName_26, make__util__LinkedTargetType_31, &make__util__FileName_32);
          }
          {
            mercury__io__write_string_3_p_0(make__util__FileName_32);
          }
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
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
  }
}

static MR_Word MR_CALL 
make__util__IntroducedFrom__func__make_dependency_list__1460__1_2_f_0(
  MR_Word make__util__FileType_5,
  MR_Word make__util__LambdaHeadVar__1_8)
{
  {
    MR_bool make__util__succeeded;
    MR_Word make__util__LambdaHeadVar__2_9;
    MR_Word make__util__V_10_10;

    {
      make__util__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), make__util__V_10_10, 0) = ((MR_Box) (make__util__LambdaHeadVar__1_8));
      MR_hl_field(MR_mktag(0), make__util__V_10_10, 1) = ((MR_Box) (make__util__FileType_5));
    }
    {
      make__util__LambdaHeadVar__2_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), make__util__LambdaHeadVar__2_9, 0) = ((MR_Box) (make__util__V_10_10));
    }
    return make__util__LambdaHeadVar__2_9;
  }
}

static MR_Word MR_CALL 
make__util__IntroducedFrom__func__make_target_file_list__1456__1_2_f_0(
  MR_Word make__util__FileType_5,
  MR_Word make__util__LambdaHeadVar__1_8)
{
  {
    MR_bool make__util__succeeded;
    MR_Word make__util__LambdaHeadVar__2_9;

    {
      make__util__LambdaHeadVar__2_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), make__util__LambdaHeadVar__2_9, 0) = ((MR_Box) (make__util__LambdaHeadVar__1_8));
      MR_hl_field(MR_mktag(0), make__util__LambdaHeadVar__2_9, 1) = ((MR_Box) (make__util__FileType_5));
    }
    return make__util__LambdaHeadVar__2_9;
  }
}

void MR_CALL 
make__util____Compare____stdout_lock_0_0(
  MR_Word * make__util__HeadVar__1_1,
  MR_Box make__util__HeadVar__2_2,
  MR_Box make__util__HeadVar__3_3)
{
  {
    MR_bool make__util__succeeded;
    MR_Box make__util__Cast_HeadVar1_4 = make__util__HeadVar__2_2;
    MR_Box make__util__Cast_HeadVar2_5 = make__util__HeadVar__3_3;
    MR_Word make__util__Cast_HeadVar1_7 = (MR_Word) make__util__Cast_HeadVar1_4;
    MR_Word make__util__Cast_HeadVar2_8 = (MR_Word) make__util__Cast_HeadVar2_5;

    {
      mercury__builtin____Compare____c_pointer_0_0(make__util__HeadVar__1_1, make__util__Cast_HeadVar1_7, make__util__Cast_HeadVar2_8);
    }
  }
}

MR_bool MR_CALL 
make__util____Unify____stdout_lock_0_0(
  MR_Box make__util__HeadVar__1_1,
  MR_Box make__util__HeadVar__2_2)
{
  {
    MR_bool make__util__succeeded;
    MR_Box make__util__Cast_HeadVar1_3 = make__util__HeadVar__1_1;
    MR_Box make__util__Cast_HeadVar2_4 = make__util__HeadVar__2_2;
    MR_Word make__util__Cast_HeadVar1_5 = (MR_Word) make__util__Cast_HeadVar1_3;
    MR_Word make__util__Cast_HeadVar2_6 = (MR_Word) make__util__Cast_HeadVar2_4;

    {
      make__util__succeeded = mercury__builtin____Unify____c_pointer_0_0(make__util__Cast_HeadVar1_5, make__util__Cast_HeadVar2_6);
    }
    return make__util__succeeded;
  }
}

void MR_CALL 
make__util____Compare____job_ctl_0_0(
  MR_Word * make__util__HeadVar__1_1,
  MR_Box make__util__HeadVar__2_2,
  MR_Box make__util__HeadVar__3_3)
{
  {
    MR_bool make__util__succeeded;
    MR_Word make__util__Cast_HeadVar1_4 = (MR_Word) make__util__HeadVar__2_2;
    MR_Word make__util__Cast_HeadVar2_5 = (MR_Word) make__util__HeadVar__3_3;

    {
      mercury__builtin____Compare____c_pointer_0_0(make__util__HeadVar__1_1, make__util__Cast_HeadVar1_4, make__util__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
make__util____Unify____job_ctl_0_0(
  MR_Box make__util__HeadVar__1_1,
  MR_Box make__util__HeadVar__2_2)
{
  {
    MR_bool make__util__succeeded;
    MR_Word make__util__Cast_HeadVar1_3 = (MR_Word) make__util__HeadVar__1_1;
    MR_Word make__util__Cast_HeadVar2_4 = (MR_Word) make__util__HeadVar__2_2;

    {
      make__util__succeeded = mercury__builtin____Unify____c_pointer_0_0(make__util__Cast_HeadVar1_3, make__util__Cast_HeadVar2_4);
    }
    return make__util__succeeded;
  }
}

void MR_CALL 
make__util____Compare____foldl3_pred_with_status_4_0(
  MR_Word make__util__TypeInfo_for_T_6,
  MR_Word make__util__TypeInfo_for_Acc_7,
  MR_Word make__util__TypeInfo_for_Info_8,
  MR_Word make__util__TypeInfo_for_IO_9,
  MR_Word * make__util__HeadVar__1_1,
  MR_Word make__util__HeadVar__2_2,
  MR_Word make__util__HeadVar__3_3)
{
  {
    MR_bool make__util__succeeded;
    MR_Word make__util__Cast_HeadVar1_4 = make__util__HeadVar__2_2;
    MR_Word make__util__Cast_HeadVar2_5 = make__util__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_pred_3_p_0(make__util__HeadVar__1_1, (MR_Word) make__util__Cast_HeadVar1_4, (MR_Word) make__util__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
make__util____Unify____foldl3_pred_with_status_4_0(
  MR_Word make__util__TypeInfo_for_T_5,
  MR_Word make__util__TypeInfo_for_Acc_6,
  MR_Word make__util__TypeInfo_for_Info_7,
  MR_Word make__util__TypeInfo_for_IO_8,
  MR_Word make__util__HeadVar__1_1,
  MR_Word make__util__HeadVar__2_2)
{
  {
    MR_bool make__util__succeeded;
    MR_Word make__util__Cast_HeadVar1_3 = make__util__HeadVar__1_1;
    MR_Word make__util__Cast_HeadVar2_4 = make__util__HeadVar__2_2;

    {
      make__util__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) make__util__Cast_HeadVar1_3, (MR_Word) make__util__Cast_HeadVar2_4);
    }
    return make__util__succeeded;
  }
}

void MR_CALL 
make__util____Compare____foldl2_pred_with_status_3_0(
  MR_Word make__util__TypeInfo_for_T_6,
  MR_Word make__util__TypeInfo_for_Info_7,
  MR_Word make__util__TypeInfo_for_IO_8,
  MR_Word * make__util__HeadVar__1_1,
  MR_Word make__util__HeadVar__2_2,
  MR_Word make__util__HeadVar__3_3)
{
  {
    MR_bool make__util__succeeded;
    MR_Word make__util__Cast_HeadVar1_4 = make__util__HeadVar__2_2;
    MR_Word make__util__Cast_HeadVar2_5 = make__util__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_pred_3_p_0(make__util__HeadVar__1_1, (MR_Word) make__util__Cast_HeadVar1_4, (MR_Word) make__util__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
make__util____Unify____foldl2_pred_with_status_3_0(
  MR_Word make__util__TypeInfo_for_T_5,
  MR_Word make__util__TypeInfo_for_Info_6,
  MR_Word make__util__TypeInfo_for_IO_7,
  MR_Word make__util__HeadVar__1_1,
  MR_Word make__util__HeadVar__2_2)
{
  {
    MR_bool make__util__succeeded;
    MR_Word make__util__Cast_HeadVar1_3 = make__util__HeadVar__1_1;
    MR_Word make__util__Cast_HeadVar2_4 = make__util__HeadVar__2_2;

    {
      make__util__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) make__util__Cast_HeadVar1_3, (MR_Word) make__util__Cast_HeadVar2_4);
    }
    return make__util__succeeded;
  }
}

void MR_CALL 
make__util____Compare____build2_2_0(
  MR_Word make__util__TypeInfo_for_T_6,
  MR_Word make__util__TypeInfo_for_U_7,
  MR_Word * make__util__HeadVar__1_1,
  MR_Word make__util__HeadVar__2_2,
  MR_Word make__util__HeadVar__3_3)
{
  {
    MR_bool make__util__succeeded;
    MR_Word make__util__Cast_HeadVar1_4 = make__util__HeadVar__2_2;
    MR_Word make__util__Cast_HeadVar2_5 = make__util__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_pred_3_p_0(make__util__HeadVar__1_1, (MR_Word) make__util__Cast_HeadVar1_4, (MR_Word) make__util__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
make__util____Unify____build2_2_0(
  MR_Word make__util__TypeInfo_for_T_5,
  MR_Word make__util__TypeInfo_for_U_6,
  MR_Word make__util__HeadVar__1_1,
  MR_Word make__util__HeadVar__2_2)
{
  {
    MR_bool make__util__succeeded;
    MR_Word make__util__Cast_HeadVar1_3 = make__util__HeadVar__1_1;
    MR_Word make__util__Cast_HeadVar2_4 = make__util__HeadVar__2_2;

    {
      make__util__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) make__util__Cast_HeadVar1_3, (MR_Word) make__util__Cast_HeadVar2_4);
    }
    return make__util__succeeded;
  }
}

void MR_CALL 
make__util____Compare____build_3_0(
  MR_Word make__util__TypeInfo_for_T_6,
  MR_Word make__util__TypeInfo_for_Info1_7,
  MR_Word make__util__TypeInfo_for_Info2_8,
  MR_Word * make__util__HeadVar__1_1,
  MR_Word make__util__HeadVar__2_2,
  MR_Word make__util__HeadVar__3_3)
{
  {
    MR_bool make__util__succeeded;
    MR_Word make__util__Cast_HeadVar1_4 = make__util__HeadVar__2_2;
    MR_Word make__util__Cast_HeadVar2_5 = make__util__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_pred_3_p_0(make__util__HeadVar__1_1, (MR_Word) make__util__Cast_HeadVar1_4, (MR_Word) make__util__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
make__util____Unify____build_3_0(
  MR_Word make__util__TypeInfo_for_T_5,
  MR_Word make__util__TypeInfo_for_Info1_6,
  MR_Word make__util__TypeInfo_for_Info2_7,
  MR_Word make__util__HeadVar__1_1,
  MR_Word make__util__HeadVar__2_2)
{
  {
    MR_bool make__util__succeeded;
    MR_Word make__util__Cast_HeadVar1_3 = make__util__HeadVar__1_1;
    MR_Word make__util__Cast_HeadVar2_4 = make__util__HeadVar__2_2;

    {
      make__util__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) make__util__Cast_HeadVar1_3, (MR_Word) make__util__Cast_HeadVar2_4);
    }
    return make__util__succeeded;
  }
}

void MR_CALL 
make__util____Compare____build_2_0(
  MR_Word make__util__TypeInfo_for_T_6,
  MR_Word make__util__TypeInfo_for_Info_7,
  MR_Word * make__util__HeadVar__1_1,
  MR_Word make__util__HeadVar__2_2,
  MR_Word make__util__HeadVar__3_3)
{
  {
    MR_bool make__util__succeeded;
    MR_Word make__util__Cast_HeadVar1_4 = make__util__HeadVar__2_2;
    MR_Word make__util__Cast_HeadVar2_5 = make__util__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_pred_3_p_0(make__util__HeadVar__1_1, (MR_Word) make__util__Cast_HeadVar1_4, (MR_Word) make__util__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
make__util____Unify____build_2_0(
  MR_Word make__util__TypeInfo_for_T_5,
  MR_Word make__util__TypeInfo_for_Info_6,
  MR_Word make__util__HeadVar__1_1,
  MR_Word make__util__HeadVar__2_2)
{
  {
    MR_bool make__util__succeeded;
    MR_Word make__util__Cast_HeadVar1_3 = make__util__HeadVar__1_1;
    MR_Word make__util__Cast_HeadVar2_4 = make__util__HeadVar__2_2;

    {
      make__util__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) make__util__Cast_HeadVar1_3, (MR_Word) make__util__Cast_HeadVar2_4);
    }
    return make__util__succeeded;
  }
}

void MR_CALL 
make__util____Compare____build_1_0(
  MR_Word make__util__TypeInfo_for_T_6,
  MR_Word * make__util__HeadVar__1_1,
  MR_Word make__util__HeadVar__2_2,
  MR_Word make__util__HeadVar__3_3)
{
  {
    MR_bool make__util__succeeded;
    MR_Word make__util__Cast_HeadVar1_4 = make__util__HeadVar__2_2;
    MR_Word make__util__Cast_HeadVar2_5 = make__util__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_pred_3_p_0(make__util__HeadVar__1_1, (MR_Word) make__util__Cast_HeadVar1_4, (MR_Word) make__util__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
make__util____Unify____build_1_0(
  MR_Word make__util__TypeInfo_for_T_5,
  MR_Word make__util__HeadVar__1_1,
  MR_Word make__util__HeadVar__2_2)
{
  {
    MR_bool make__util__succeeded;
    MR_Word make__util__Cast_HeadVar1_3 = make__util__HeadVar__1_1;
    MR_Word make__util__Cast_HeadVar2_4 = make__util__HeadVar__2_2;

    {
      make__util__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) make__util__Cast_HeadVar1_3, (MR_Word) make__util__Cast_HeadVar2_4);
    }
    return make__util__succeeded;
  }
}

static void MR_CALL 
make__util__make_write_module_or_linked_target_4_p_0(
  MR_Word make__util__Globals_5,
  MR_Word make__util__HeadVar__2_2)
{
  {
    MR_bool make__util__succeeded;
    MR_Word make__util__ModuleName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word make__util__FileType_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__HeadVar__2_2, (MR_Integer) 1)));

    switch (MR_tag((MR_Word) make__util__FileType_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word make__util__ModuleTargetType_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__FileType_7, (MR_Integer) 0)));
          MR_Word make__util__TargetFile_10;

          {
            make__util__TargetFile_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), make__util__TargetFile_10, 0) = ((MR_Box) (make__util__ModuleName_6));
            MR_hl_field(MR_mktag(0), make__util__TargetFile_10, 1) = ((MR_Box) (make__util__ModuleTargetType_9));
          }
          {
            make__util__make_write_target_file_wrapped_6_p_0(make__util__Globals_5, (MR_String) "", make__util__TargetFile_10, (MR_String) "");
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word make__util__LinkedTargetType_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__util__FileType_7, (MR_Integer) 0)));
          MR_String make__util__FileName_12;

          {
            make__util__linked_target_file_name_6_p_0(make__util__Globals_5, make__util__ModuleName_6, make__util__LinkedTargetType_11, &make__util__FileName_12);
          }
          {
            mercury__io__write_string_3_p_0(make__util__FileName_12);
          }
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

static void MR_CALL 
make__util__module_target_to_file_name_maybe_search_8_p_0(
  MR_Word make__util__Globals_9,
  MR_Word make__util__ModuleName_10,
  MR_Word make__util__TargetType_11,
  MR_Word make__util__MkDir_12,
  MR_Word make__util__Search_13,
  MR_String * make__util__FileName_14)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool make__util__succeeded;
        MR_Word make__util__MaybeExt_16;

        {
          make__util__MaybeExt_16 = make__util__target_extension_2_f_0(make__util__Globals_9, make__util__TargetType_11);
        }
        if ((make__util__MaybeExt_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          switch (MR_tag((MR_Word) make__util__TargetType_11)) {
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
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__util__TargetType_11, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word make__util__PIC_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__util__TargetType_11, (MR_Integer) 1)));
                    MR_Word make__util__Lang_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__util__TargetType_11, (MR_Integer) 2)));
                    MR_Word make__util__ForeignModuleName_20;

                    {
                      make__util__succeeded = parse_tree__prog_foreign__foreign_language_module_name_2_f_0(make__util__ModuleName_10, make__util__Lang_19, &make__util__ForeignModuleName_20);
                    }
                    if (make__util__succeeded)
                      {
                        MR_Word make__util__V_30_30;

                        {
                          make__util__V_30_30 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), make__util__V_30_30, 0) = ((MR_Box) (make__util__PIC_18));
                        }
                        /* direct tailcall eliminated */
                        {
                          MR_Word make__util__ModuleName__tmp_copy_10 = make__util__ForeignModuleName_20;
                          MR_Word make__util__TargetType__tmp_copy_11 = make__util__V_30_30;

                          make__util__TargetType_11 = make__util__TargetType__tmp_copy_11;
                          make__util__ModuleName_10 = make__util__ModuleName__tmp_copy_10;
                        }
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
                    MR_String make__util__FactFile_21 = ((MR_String) (MR_hl_field(MR_mktag(3), make__util__TargetType_11, (MR_Integer) 2)));
                    MR_String make__util__Ext_37;
                    MR_Word make__util__PIC_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__util__TargetType_11, (MR_Integer) 1)));

                    {
                      backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(make__util__Globals_9, make__util__PIC_38, &make__util__Ext_37);
                    }
                    {
                      parse_tree__file_names__fact_table_file_name_8_p_0(make__util__Globals_9, make__util__ModuleName_10, make__util__FactFile_21, make__util__Ext_37, make__util__MkDir_12, make__util__FileName_14);
                    }
                  }
                  break;
              }
              break;
          }
        else
          {
            MR_String make__util__Ext_17 = ((MR_String) (MR_hl_field(MR_mktag(1), make__util__MaybeExt_16, (MR_Integer) 0)));

            switch (make__util__Search_13) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  parse_tree__file_names__module_name_to_file_name_7_p_0(make__util__Globals_9, make__util__ModuleName_10, make__util__Ext_17, make__util__MkDir_12, make__util__FileName_14);
                }
                break;
              case (MR_Integer) 0:
                {
                  parse_tree__file_names__module_name_to_search_file_name_6_p_0(make__util__Globals_9, make__util__ModuleName_10, make__util__Ext_17, make__util__FileName_14);
                }
                break;
            }
          }
      }
      break;
    }
}

static void MR_CALL 
make__util__get_search_directories_3_p_0(
  MR_Word make__util__Globals_4,
  MR_Word make__util__FileType_5,
  MR_Word * make__util__SearchDirs_6)
{
  {
    MR_bool make__util__succeeded;

    switch (MR_tag((MR_Word) make__util__FileType_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(make__util__FileType_5)) {
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
              MR_String make__util__V_10_10;

              {
                make__util__V_10_10 = mercury__dir__this_directory_0_f_0();
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *make__util__SearchDirs_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__util__V_10_10));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
            {
              MR_Word make__util__SearchDirs0_64;
              MR_String make__util__V_56_56;

              {
                libs__globals__lookup_accumulating_option_3_p_0(make__util__Globals_4, (MR_Integer) 636, &make__util__SearchDirs0_64);
              }
              {
                make__util__V_56_56 = mercury__dir__this_directory_0_f_0();
              }
              {
                make__util__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (make__util__V_56_56)), make__util__SearchDirs0_64);
              }
              if (make__util__succeeded)
                *make__util__SearchDirs_6 = make__util__SearchDirs0_64;
              else
                {
                  MR_String make__util__V_58_58;

                  {
                    make__util__V_58_58 = mercury__dir__this_directory_0_f_0();
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *make__util__SearchDirs_6 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__util__V_58_58));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (make__util__SearchDirs0_64));
                  }
                }
            }
            break;
          case (MR_Integer) 6:
          case (MR_Integer) 7:
            {
              MR_Word make__util__SearchDirs0_9;
              MR_String make__util__V_12_12;

              {
                libs__globals__lookup_accumulating_option_3_p_0(make__util__Globals_4, (MR_Integer) 637, &make__util__SearchDirs0_9);
              }
              {
                make__util__V_12_12 = mercury__dir__this_directory_0_f_0();
              }
              {
                make__util__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (make__util__V_12_12)), make__util__SearchDirs0_9);
              }
              if (make__util__succeeded)
                *make__util__SearchDirs_6 = make__util__SearchDirs0_9;
              else
                {
                  MR_String make__util__V_13_13;

                  {
                    make__util__V_13_13 = mercury__dir__this_directory_0_f_0();
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *make__util__SearchDirs_6 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__util__V_13_13));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (make__util__SearchDirs0_9));
                  }
                }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word make__util__SearchDirs0_51;
              MR_String make__util__V_43_43;

              {
                libs__globals__lookup_accumulating_option_3_p_0(make__util__Globals_4, (MR_Integer) 523, &make__util__SearchDirs0_51);
              }
              {
                make__util__V_43_43 = mercury__dir__this_directory_0_f_0();
              }
              {
                make__util__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (make__util__V_43_43)), make__util__SearchDirs0_51);
              }
              if (make__util__succeeded)
                *make__util__SearchDirs_6 = make__util__SearchDirs0_51;
              else
                {
                  MR_String make__util__V_45_45;

                  {
                    make__util__V_45_45 = mercury__dir__this_directory_0_f_0();
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *make__util__SearchDirs_6 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__util__V_45_45));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (make__util__SearchDirs0_51));
                  }
                }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word make__util__SearchDirs0_38;
          MR_String make__util__V_30_30;

          {
            libs__globals__lookup_accumulating_option_3_p_0(make__util__Globals_4, (MR_Integer) 485, &make__util__SearchDirs0_38);
          }
          {
            make__util__V_30_30 = mercury__dir__this_directory_0_f_0();
          }
          {
            make__util__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (make__util__V_30_30)), make__util__SearchDirs0_38);
          }
          if (make__util__succeeded)
            *make__util__SearchDirs_6 = make__util__SearchDirs0_38;
          else
            {
              MR_String make__util__V_32_32;

              {
                make__util__V_32_32 = mercury__dir__this_directory_0_f_0();
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *make__util__SearchDirs_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__util__V_32_32));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (make__util__SearchDirs0_38));
              }
            }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String make__util__V_10_10;

          {
            make__util__V_10_10 = mercury__dir__this_directory_0_f_0();
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *make__util__SearchDirs_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__util__V_10_10));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_String make__util__V_10_10;

          {
            make__util__V_10_10 = mercury__dir__this_directory_0_f_0();
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *make__util__SearchDirs_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__util__V_10_10));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
make__util__module_name_to_search_file_name_cache_8_p_0(
  MR_Word make__util__Globals_9,
  MR_Word make__util__ModuleName_10,
  MR_String make__util__Ext_11,
  MR_String * make__util__FileName_12,
  MR_Word make__util__STATE_VARIABLE_Info_0_17,
  MR_Word * make__util__STATE_VARIABLE_Info_18)
{
  {
    MR_bool make__util__succeeded;
    MR_Word make__util__Key_15;
    MR_String make__util__FileName0_16;
    MR_Word make__util__V_21_21;
    MR_Word make__util__V_26_26;
    MR_Word make__util__V_27_27;
    MR_Word make__util__V_28_28;
    MR_Word make__util__V_29_29;
    MR_Word make__util__V_30_30;
    MR_Word make__util__V_31_31;
    MR_Word make__util__V_32_32;
    MR_Word make__util__V_33_33;
    MR_Word make__util__V_34_34;
    MR_Word make__util__V_35_35;
    MR_Word make__util__V_36_36;
    MR_Word make__util__V_37_37;
    MR_Word make__util__V_38_38;
    MR_Word make__util__V_39_39;
    MR_Word make__util__V_40_40;
    MR_Word make__util__V_41_41;
    MR_Word make__util__V_42_42;
    MR_Integer make__util__V_43_43;
    MR_Word make__util__V_44_44;
    MR_Box make__util__conv0_FileName0_16;

    {
      make__util__Key_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), make__util__Key_15, 0) = ((MR_Box) (make__util__ModuleName_10));
      MR_hl_field(MR_mktag(0), make__util__Key_15, 1) = ((MR_Box) (make__util__Ext_11));
    }
    make__util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
    make__util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 1)));
    make__util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
    make__util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
    make__util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 4)));
    make__util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 5)));
    make__util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 6)));
    make__util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 7)));
    make__util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 8)));
    make__util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 9)));
    make__util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 10)));
    make__util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 11)));
    make__util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 12)));
    make__util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 13)));
    make__util__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 14)));
    make__util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 15)));
    make__util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 16)));
    make__util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 17)));
    make__util__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 18)));
    make__util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 19)));
    {
      make__util__succeeded = mercury__map__search_3_p_0((MR_Word) &make__util_scalar_common_1[2], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, make__util__V_21_21, ((MR_Box) (make__util__Key_15)), &make__util__conv0_FileName0_16);
    }
    if (make__util__succeeded)
      {
        make__util__FileName0_16 = ((MR_String) make__util__conv0_FileName0_16);
        make__util__succeeded = MR_TRUE;
      }
    if (make__util__succeeded)
      {
        *make__util__FileName_12 = make__util__FileName0_16;
        *make__util__STATE_VARIABLE_Info_18 = make__util__STATE_VARIABLE_Info_0_17;
      }
    else
      {
        MR_Word make__util__V_24_24;
        MR_Word make__util__V_25_25;
        MR_Word make__util__V_45_45;
        MR_Word make__util__V_46_46;
        MR_Word make__util__V_47_47;
        MR_Word make__util__V_48_48;
        MR_Word make__util__V_49_49;
        MR_Word make__util__V_50_50;
        MR_Word make__util__V_51_51;
        MR_Word make__util__V_52_52;
        MR_Word make__util__V_53_53;
        MR_Word make__util__V_54_54;
        MR_Word make__util__V_55_55;
        MR_Word make__util__V_56_56;
        MR_Word make__util__V_57_57;
        MR_Word make__util__V_58_58;
        MR_Word make__util__V_59_59;
        MR_Word make__util__V_60_60;
        MR_Word make__util__V_61_61;
        MR_Integer make__util__V_62_62;
        MR_Word make__util__V_63_63;
        MR_Word make__util__V_64_64;
        MR_Word make__util__V_65_65;
        MR_Word make__util__V_67_67;
        MR_Word make__util__V_68_68;
        MR_Word make__util__V_69_69;
        MR_Word make__util__V_70_70;
        MR_Word make__util__V_71_71;
        MR_Word make__util__V_72_72;
        MR_Word make__util__V_73_73;
        MR_Word make__util__V_74_74;
        MR_Word make__util__V_75_75;
        MR_Word make__util__V_76_76;
        MR_Word make__util__V_77_77;
        MR_Word make__util__V_78_78;
        MR_Word make__util__V_79_79;
        MR_Word make__util__V_80_80;
        MR_Word make__util__V_81_81;
        MR_Integer make__util__V_82_82;
        MR_Word make__util__V_83_83;
        MR_Word make__util__V_66_66;

        {
          parse_tree__file_names__module_name_to_search_file_name_6_p_0(make__util__Globals_9, make__util__ModuleName_10, make__util__Ext_11, make__util__FileName_12);
        }
        make__util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
        make__util__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 1)));
        make__util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
        make__util__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
        make__util__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 4)));
        make__util__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 5)));
        make__util__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 6)));
        make__util__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 7)));
        make__util__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 8)));
        make__util__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 9)));
        make__util__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 10)));
        make__util__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 11)));
        make__util__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 12)));
        make__util__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 13)));
        make__util__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 14)));
        make__util__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 15)));
        make__util__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 16)));
        make__util__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 17)));
        make__util__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 18)));
        make__util__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 19)));
        {
          make__util__V_25_25 = mercury__map__f_101_108_101_109_32_58_61_3_f_0((MR_Word) &make__util_scalar_common_1[2], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (make__util__Key_15)), make__util__V_24_24, ((MR_Box) (*make__util__FileName_12)));
        }
        make__util__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
        make__util__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 1)));
        make__util__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
        make__util__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
        make__util__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 4)));
        make__util__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 5)));
        make__util__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 6)));
        make__util__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 7)));
        make__util__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 8)));
        make__util__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 9)));
        make__util__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 10)));
        make__util__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 11)));
        make__util__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 12)));
        make__util__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 13)));
        make__util__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 14)));
        make__util__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 15)));
        make__util__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 16)));
        make__util__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 17)));
        make__util__V_82_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 18)));
        make__util__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 19)));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
          *make__util__STATE_VARIABLE_Info_18 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__util__V_64_64));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__util__V_65_65));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__util__V_25_25));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (make__util__V_67_67));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (make__util__V_68_68));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (make__util__V_69_69));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (make__util__V_70_70));
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (make__util__V_71_71));
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (make__util__V_72_72));
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (make__util__V_73_73));
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (make__util__V_74_74));
          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (make__util__V_75_75));
          MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (make__util__V_76_76));
          MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (make__util__V_77_77));
          MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (make__util__V_78_78));
          MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (make__util__V_79_79));
          MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (make__util__V_80_80));
          MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (make__util__V_81_81));
          MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (make__util__V_82_82));
          MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (make__util__V_83_83));
        }
      }
  }
}

static void MR_CALL 
make__util__get_target_timestamp_2_9_p_0(
  MR_Word make__util__Globals_10,
  MR_Word make__util__Search_11,
  MR_Word make__util__TargetFile_12,
  MR_String make__util__FileName_13,
  MR_Word * make__util__MaybeTimestamp_14,
  MR_Word make__util__STATE_VARIABLE_Info_0_24,
  MR_Word * make__util__STATE_VARIABLE_Info_25)
{
  {
    MR_bool make__util__succeeded;
    MR_Word make__util__ModuleName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__TargetFile_12, (MR_Integer) 0)));
    MR_Word make__util__FileType_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__TargetFile_12, (MR_Integer) 1)));
    MR_Word make__util__SearchDirs_19;
    MR_Word make__util__MaybeTimestamp0_20;
    MR_Word make__util__STATE_VARIABLE_Info_30_30;
    MR_String make__util__V_21_21;

    switch (make__util__Search_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_String make__util__V_28_28;

          {
            make__util__V_28_28 = mercury__dir__this_directory_0_f_0();
          }
          {
            make__util__SearchDirs_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), make__util__SearchDirs_19, 0) = ((MR_Box) (make__util__V_28_28));
            MR_hl_field(MR_mktag(1), make__util__SearchDirs_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          make__util__get_search_directories_3_p_0(make__util__Globals_10, make__util__FileType_18, &make__util__SearchDirs_19);
        }
        break;
    }
    {
      make__util__get_file_timestamp_7_p_0(make__util__SearchDirs_19, make__util__FileName_13, &make__util__MaybeTimestamp0_20, make__util__STATE_VARIABLE_Info_0_24, &make__util__STATE_VARIABLE_Info_30_30);
    }
    make__util__succeeded = ((MR_tag((MR_Word) make__util__MaybeTimestamp0_20)) == (MR_mktag((MR_Integer) 1)));
    if (make__util__succeeded)
      {
        make__util__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(1), make__util__MaybeTimestamp0_20, (MR_Integer) 0)));
        if ((make__util__FileType_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
          make__util__succeeded = MR_TRUE;
        else
        if ((make__util__FileType_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
          make__util__succeeded = MR_TRUE;
        else
          make__util__succeeded = MR_FALSE;
      }
    if (make__util__succeeded)
      {
        MR_Word make__util__MaybeImports_22;
        MR_Word make__util__STATE_VARIABLE_Info_32_32;
        MR_Word make__util__Imports_23;
        MR_String make__util__V_34_34;
        MR_String make__util__V_106_106;
        MR_String make__util__V_39_39;
        MR_Word make__util__V_40_40;
        MR_Word make__util__V_41_41;
        MR_Word make__util__V_42_42;
        MR_Word make__util__V_43_43;
        MR_Word make__util__V_44_44;
        MR_Word make__util__V_45_45;
        MR_Word make__util__V_46_46;
        MR_Word make__util__V_47_47;
        MR_Word make__util__V_48_48;
        MR_Word make__util__V_49_49;
        MR_Word make__util__V_50_50;
        MR_Word make__util__V_51_51;
        MR_Word make__util__V_52_52;
        MR_Word make__util__V_53_53;
        MR_Word make__util__V_54_54;
        MR_Word make__util__V_55_55;
        MR_Word make__util__V_56_56;
        MR_Word make__util__V_57_57;
        MR_Word make__util__V_58_58;
        MR_Word make__util__V_59_59;
        MR_Word make__util__V_60_60;
        MR_Word make__util__V_61_61;
        MR_Word make__util__V_62_62;
        MR_Word make__util__V_63_63;
        MR_Word make__util__V_64_64;

        {
          make__module_dep_file__get_module_dependencies_7_p_0(make__util__Globals_10, make__util__ModuleName_17, &make__util__MaybeImports_22, make__util__STATE_VARIABLE_Info_30_30, &make__util__STATE_VARIABLE_Info_32_32);
        }
        make__util__succeeded = ((MR_tag((MR_Word) make__util__MaybeImports_22)) == (MR_mktag((MR_Integer) 1)));
        if (make__util__succeeded)
          {
            make__util__Imports_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__util__MaybeImports_22, (MR_Integer) 0)));
            make__util__V_39_39 = ((MR_String) (MR_hl_field(MR_mktag(0), make__util__Imports_23, (MR_Integer) 0)));
            make__util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_23, (MR_Integer) 1)));
            make__util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_23, (MR_Integer) 2)));
            make__util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_23, (MR_Integer) 3)));
            make__util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_23, (MR_Integer) 4)));
            make__util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_23, (MR_Integer) 5)));
            make__util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_23, (MR_Integer) 6)));
            make__util__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_23, (MR_Integer) 7)));
            make__util__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_23, (MR_Integer) 8)));
            make__util__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_23, (MR_Integer) 9)));
            make__util__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_23, (MR_Integer) 10)));
            make__util__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_23, (MR_Integer) 11)));
            make__util__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_23, (MR_Integer) 12)));
            make__util__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_23, (MR_Integer) 13)));
            make__util__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_23, (MR_Integer) 14)));
            make__util__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_23, (MR_Integer) 15)));
            make__util__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_23, (MR_Integer) 16)));
            make__util__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_23, (MR_Integer) 17)));
            make__util__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_23, (MR_Integer) 18)));
            make__util__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_23, (MR_Integer) 19)));
            make__util__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_23, (MR_Integer) 20)));
            make__util__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_23, (MR_Integer) 21)));
            make__util__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_23, (MR_Integer) 22)));
            make__util__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_23, (MR_Integer) 23)));
            make__util__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_23, (MR_Integer) 24)));
            make__util__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_23, (MR_Integer) 25)));
            make__util__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(0), make__util__Imports_23, (MR_Integer) 26)));
            {
              make__util__V_106_106 = mercury__dir__this_directory_0_f_0();
            }
            make__util__succeeded = (strcmp(make__util__V_34_34, make__util__V_106_106) == 0);
            make__util__succeeded = !(make__util__succeeded);
          }
        if (make__util__succeeded)
          {
            MR_Word make__util__V_35_35;
            MR_Word make__util__V_37_37;
            MR_Word make__util__V_38_38;
            MR_Word make__util__V_65_65;
            MR_Word make__util__V_66_66;
            MR_Word make__util__V_67_67;
            MR_Word make__util__V_68_68;
            MR_Word make__util__V_69_69;
            MR_Word make__util__V_70_70;
            MR_Word make__util__V_71_71;
            MR_Word make__util__V_72_72;
            MR_Word make__util__V_73_73;
            MR_Word make__util__V_74_74;
            MR_Word make__util__V_75_75;
            MR_Word make__util__V_76_76;
            MR_Word make__util__V_77_77;
            MR_Word make__util__V_78_78;
            MR_Word make__util__V_79_79;
            MR_Word make__util__V_80_80;
            MR_Word make__util__V_81_81;
            MR_Integer make__util__V_82_82;
            MR_Word make__util__V_83_83;
            MR_Word make__util__V_84_84;
            MR_Word make__util__V_86_86;
            MR_Word make__util__V_87_87;
            MR_Word make__util__V_88_88;
            MR_Word make__util__V_89_89;
            MR_Word make__util__V_90_90;
            MR_Word make__util__V_91_91;
            MR_Word make__util__V_92_92;
            MR_Word make__util__V_93_93;
            MR_Word make__util__V_94_94;
            MR_Word make__util__V_95_95;
            MR_Word make__util__V_96_96;
            MR_Word make__util__V_97_97;
            MR_Word make__util__V_98_98;
            MR_Word make__util__V_99_99;
            MR_Word make__util__V_100_100;
            MR_Word make__util__V_101_101;
            MR_Integer make__util__V_102_102;
            MR_Word make__util__V_103_103;
            MR_Word make__util__V_85_85;

            {
              make__util__V_35_35 = libs__timestamp__oldest_timestamp_0_f_0();
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *make__util__MaybeTimestamp_14 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__util__V_35_35));
            }
            make__util__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 0)));
            make__util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 1)));
            make__util__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 2)));
            make__util__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 3)));
            make__util__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 4)));
            make__util__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 5)));
            make__util__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 6)));
            make__util__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 7)));
            make__util__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 8)));
            make__util__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 9)));
            make__util__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 10)));
            make__util__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 11)));
            make__util__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 12)));
            make__util__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 13)));
            make__util__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 14)));
            make__util__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 15)));
            make__util__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 16)));
            make__util__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 17)));
            make__util__V_82_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 18)));
            make__util__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 19)));
            {
              make__util__V_38_38 = mercury__map__f_101_108_101_109_32_58_61_3_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &make__util_scalar_common_1[0], ((MR_Box) (make__util__FileName_13)), make__util__V_37_37, ((MR_Box) (*make__util__MaybeTimestamp_14)));
            }
            make__util__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 0)));
            make__util__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 1)));
            make__util__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 2)));
            make__util__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 3)));
            make__util__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 4)));
            make__util__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 5)));
            make__util__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 6)));
            make__util__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 7)));
            make__util__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 8)));
            make__util__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 9)));
            make__util__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 10)));
            make__util__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 11)));
            make__util__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 12)));
            make__util__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 13)));
            make__util__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 14)));
            make__util__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 15)));
            make__util__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 16)));
            make__util__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 17)));
            make__util__V_102_102 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 18)));
            make__util__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 19)));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
              *make__util__STATE_VARIABLE_Info_25 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__util__V_84_84));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__util__V_38_38));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__util__V_86_86));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (make__util__V_87_87));
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (make__util__V_88_88));
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (make__util__V_89_89));
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (make__util__V_90_90));
              MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (make__util__V_91_91));
              MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (make__util__V_92_92));
              MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (make__util__V_93_93));
              MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (make__util__V_94_94));
              MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (make__util__V_95_95));
              MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (make__util__V_96_96));
              MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (make__util__V_97_97));
              MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (make__util__V_98_98));
              MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (make__util__V_99_99));
              MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (make__util__V_100_100));
              MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (make__util__V_101_101));
              MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (make__util__V_102_102));
              MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (make__util__V_103_103));
            }
          }
        else
          {
            *make__util__MaybeTimestamp_14 = make__util__MaybeTimestamp0_20;
            *make__util__STATE_VARIABLE_Info_25 = make__util__STATE_VARIABLE_Info_32_32;
          }
      }
    else
      {
        *make__util__MaybeTimestamp_14 = make__util__MaybeTimestamp0_20;
        *make__util__STATE_VARIABLE_Info_25 = make__util__STATE_VARIABLE_Info_30_30;
      }
  }
}

static void MR_CALL 
make__util__get_target_timestamp_analysis_registry_9_p_0(
  MR_Word make__util__Globals_10,
  MR_Word make__util__Search_11,
  MR_Word make__util__TargetFile_12,
  MR_String make__util__FileName_13,
  MR_Word * make__util__MaybeTimestamp_14,
  MR_Word make__util__STATE_VARIABLE_Info_0_21,
  MR_Word * make__util__STATE_VARIABLE_Info_22)
{
  {
    MR_bool make__util__succeeded;
    MR_Word make__util__ModuleName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__TargetFile_12, (MR_Integer) 0)));
    MR_Word make__util___FileType_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__TargetFile_12, (MR_Integer) 1)));
    MR_Word make__util__MaybeTimestamp0_19;
    MR_Word make__util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 1)));
    MR_Word make__util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 0)));
    MR_Word make__util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 2)));
    MR_Word make__util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 3)));
    MR_Word make__util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 4)));
    MR_Word make__util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 5)));
    MR_Word make__util__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 6)));
    MR_Word make__util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 7)));
    MR_Word make__util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 8)));
    MR_Word make__util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 9)));
    MR_Word make__util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 10)));
    MR_Word make__util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 11)));
    MR_Word make__util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 12)));
    MR_Word make__util__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 13)));
    MR_Word make__util__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 14)));
    MR_Word make__util__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 15)));
    MR_Word make__util__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 16)));
    MR_Word make__util__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 17)));
    MR_Integer make__util__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 18)));
    MR_Word make__util__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 19)));
    MR_Box make__util__conv0_MaybeTimestamp0_19;

    {
      make__util__succeeded = mercury__map__elem_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &make__util_scalar_common_1[0], ((MR_Box) (make__util__FileName_13)), make__util__V_25_25, &make__util__conv0_MaybeTimestamp0_19);
    }
    if (make__util__succeeded)
      {
        make__util__MaybeTimestamp0_19 = ((MR_Word) make__util__conv0_MaybeTimestamp0_19);
        make__util__succeeded = MR_TRUE;
      }
    if (make__util__succeeded)
      {
        *make__util__MaybeTimestamp_14 = make__util__MaybeTimestamp0_19;
        *make__util__STATE_VARIABLE_Info_22 = make__util__STATE_VARIABLE_Info_0_21;
      }
    else
      {
        MR_Word make__util__Status_20;

        mercury__private_builtin__dummy_var = (MR_Integer) 0;
        {
          analysis__do_read_module_overall_status_6_p_0((MR_Word) &make__util_scalar_common_2[1], ((MR_Box) ((MR_Integer) 0)), make__util__Globals_10, make__util__ModuleName_17, &make__util__Status_20);
        }
        switch (make__util__Status_20) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word make__util__V_30_30;
              MR_Word make__util__V_31_31;
              MR_Word make__util__V_53_53;
              MR_Word make__util__V_54_54;
              MR_Word make__util__V_55_55;
              MR_Word make__util__V_56_56;
              MR_Word make__util__V_57_57;
              MR_Word make__util__V_58_58;
              MR_Word make__util__V_59_59;
              MR_Word make__util__V_60_60;
              MR_Word make__util__V_61_61;
              MR_Word make__util__V_62_62;
              MR_Word make__util__V_63_63;
              MR_Word make__util__V_64_64;
              MR_Word make__util__V_65_65;
              MR_Word make__util__V_66_66;
              MR_Word make__util__V_67_67;
              MR_Word make__util__V_68_68;
              MR_Word make__util__V_69_69;
              MR_Integer make__util__V_70_70;
              MR_Word make__util__V_71_71;
              MR_Word make__util__V_72_72;
              MR_Word make__util__V_74_74;
              MR_Word make__util__V_75_75;
              MR_Word make__util__V_76_76;
              MR_Word make__util__V_77_77;
              MR_Word make__util__V_78_78;
              MR_Word make__util__V_79_79;
              MR_Word make__util__V_80_80;
              MR_Word make__util__V_81_81;
              MR_Word make__util__V_82_82;
              MR_Word make__util__V_83_83;
              MR_Word make__util__V_84_84;
              MR_Word make__util__V_85_85;
              MR_Word make__util__V_86_86;
              MR_Word make__util__V_87_87;
              MR_Word make__util__V_88_88;
              MR_Word make__util__V_89_89;
              MR_Integer make__util__V_90_90;
              MR_Word make__util__V_91_91;
              MR_Word make__util__V_73_73;

              *make__util__MaybeTimestamp_14 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_3[22]);
              make__util__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 0)));
              make__util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 1)));
              make__util__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 2)));
              make__util__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 3)));
              make__util__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 4)));
              make__util__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 5)));
              make__util__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 6)));
              make__util__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 7)));
              make__util__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 8)));
              make__util__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 9)));
              make__util__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 10)));
              make__util__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 11)));
              make__util__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 12)));
              make__util__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 13)));
              make__util__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 14)));
              make__util__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 15)));
              make__util__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 16)));
              make__util__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 17)));
              make__util__V_70_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 18)));
              make__util__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 19)));
              {
                make__util__V_31_31 = mercury__map__f_101_108_101_109_32_58_61_3_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &make__util_scalar_common_1[0], ((MR_Box) (make__util__FileName_13)), make__util__V_30_30, ((MR_Box) (*make__util__MaybeTimestamp_14)));
              }
              make__util__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 0)));
              make__util__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 1)));
              make__util__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 2)));
              make__util__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 3)));
              make__util__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 4)));
              make__util__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 5)));
              make__util__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 6)));
              make__util__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 7)));
              make__util__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 8)));
              make__util__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 9)));
              make__util__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 10)));
              make__util__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 11)));
              make__util__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 12)));
              make__util__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 13)));
              make__util__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 14)));
              make__util__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 15)));
              make__util__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 16)));
              make__util__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 17)));
              make__util__V_90_90 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 18)));
              make__util__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 19)));
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
                *make__util__STATE_VARIABLE_Info_22 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__util__V_72_72));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__util__V_31_31));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__util__V_74_74));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (make__util__V_75_75));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (make__util__V_76_76));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (make__util__V_77_77));
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (make__util__V_78_78));
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (make__util__V_79_79));
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (make__util__V_80_80));
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (make__util__V_81_81));
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (make__util__V_82_82));
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (make__util__V_83_83));
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (make__util__V_84_84));
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (make__util__V_85_85));
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (make__util__V_86_86));
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (make__util__V_87_87));
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (make__util__V_88_88));
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (make__util__V_89_89));
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (make__util__V_90_90));
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (make__util__V_91_91));
              }
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 1:
            {
              make__util__get_target_timestamp_2_9_p_0(make__util__Globals_10, make__util__Search_11, make__util__TargetFile_12, make__util__FileName_13, make__util__MaybeTimestamp_14, make__util__STATE_VARIABLE_Info_0_21, make__util__STATE_VARIABLE_Info_22);
            }
            break;
        }
      }
  }
}

static void MR_CALL 
make__util__write_error_opening_file_4_p_0(
  MR_String make__util__FileName_5,
  MR_Word make__util__Error_6)
{
  {
    MR_bool make__util__succeeded;
    MR_String make__util__V_16_16;

    {
      make__util__V_16_16 = mercury__io__error_message_1_f_0(make__util__Error_6);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "Error opening \140");
    }
    {
      mercury__io__write_string_3_p_0(make__util__FileName_5);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\': ");
    }
    {
      mercury__io__write_string_3_p_0(make__util__V_16_16);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
  }
}

static void MR_CALL 
make__util__write_error_opening_output_4_p_0(
  MR_String make__util__FileName_5,
  MR_Word make__util__Error_6)
{
  {
    MR_bool make__util__succeeded;
    MR_String make__util__V_16_16;

    {
      make__util__V_16_16 = mercury__io__error_message_1_f_0(make__util__Error_6);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "** Error opening \140");
    }
    {
      mercury__io__write_string_3_p_0(make__util__FileName_5);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\' for output: ");
    }
    {
      mercury__io__write_string_3_p_0(make__util__V_16_16);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
  }
}

static void MR_CALL 
make__util__make_write_error_char_7_p_0(
  MR_Word make__util__FullOutputStream_8,
  MR_Word make__util__PartialOutputStream_9,
  MR_Char make__util__Char_10,
  MR_Integer make__util__STATE_VARIABLE_LinesRemaining_0_14,
  MR_Integer * make__util__STATE_VARIABLE_LinesRemaining_15)
{
  {
    MR_bool make__util__succeeded;

    {
      mercury__io__write_char_4_p_0(make__util__FullOutputStream_8, make__util__Char_10);
    }
    make__util__succeeded = (make__util__STATE_VARIABLE_LinesRemaining_0_14 > (MR_Integer) 0);
    if (make__util__succeeded)
      {
        {
          mercury__io__write_char_4_p_0(make__util__PartialOutputStream_9, make__util__Char_10);
        }
        make__util__succeeded = (make__util__Char_10 == (MR_Char) 10);
        if (make__util__succeeded)
          {
            *make__util__STATE_VARIABLE_LinesRemaining_15 = (make__util__STATE_VARIABLE_LinesRemaining_0_14 - (MR_Integer) 1);
          }
        else
          *make__util__STATE_VARIABLE_LinesRemaining_15 = make__util__STATE_VARIABLE_LinesRemaining_0_14;
      }
    else
      {
        make__util__succeeded = (make__util__STATE_VARIABLE_LinesRemaining_0_14 == (MR_Integer) 0);
        if (make__util__succeeded)
          {
            MR_String make__util__FullOutputFileName_13;

            {
              mercury__io__output_stream_name_4_p_0(make__util__FullOutputStream_8, &make__util__FullOutputFileName_13);
            }
            {
              mercury__io__write_string_4_p_0(make__util__PartialOutputStream_9, (MR_String) "... error log truncated, see \140");
            }
            {
              mercury__io__write_string_4_p_0(make__util__PartialOutputStream_9, make__util__FullOutputFileName_13);
            }
            {
              mercury__io__write_string_4_p_0(make__util__PartialOutputStream_9, (MR_String) "\' for the complete log.\n");
            }
            *make__util__STATE_VARIABLE_LinesRemaining_15 = (MR_Integer) -1;
          }
        else
          *make__util__STATE_VARIABLE_LinesRemaining_15 = make__util__STATE_VARIABLE_LinesRemaining_0_14;
      }
  }
}

static void MR_CALL 
make__util__make_write_error_streams_7_p_0_1(
  MR_Box make__util__closure_arg,
  MR_Box make__util__wrapper_arg_1,
  MR_Box make__util__wrapper_arg_2,
  MR_Box * make__util__wrapper_arg_3,
  MR_Box make__util__wrapper_arg_4,
  MR_Box * make__util__wrapper_arg_5)
{
  {
    MR_Box make__util__closure = make__util__closure_arg;
    MR_Integer make__util__conv0_STATE_VARIABLE_LinesRemaining_15;

    {
      make__util__make_write_error_char_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 4))), ((MR_Char) (MR_Word) make__util__wrapper_arg_1), ((MR_Integer) make__util__wrapper_arg_2), &make__util__conv0_STATE_VARIABLE_LinesRemaining_15);
    }
    *make__util__wrapper_arg_3 = ((MR_Box) (make__util__conv0_STATE_VARIABLE_LinesRemaining_15));
  }
}

static void MR_CALL 
make__util__make_write_error_streams_7_p_0(
  MR_String make__util__FileName_8,
  MR_Word make__util__InputStream_9,
  MR_Word make__util__FullOutputStream_10,
  MR_Word make__util__PartialOutputStream_11,
  MR_Integer make__util__LinesToWrite_12)
{
  {
    MR_bool make__util__succeeded;
    MR_Word make__util__Res_14;
    MR_Word make__util__V_20_20;

    {
      make__util__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), make__util__V_20_20, 0) = ((MR_Box) (&make__util_scalar_common_11[1]));
      MR_hl_field(MR_mktag(0), make__util__V_20_20, 1) = ((MR_Box) (make__util__make_write_error_streams_7_p_0_1));
      MR_hl_field(MR_mktag(0), make__util__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), make__util__V_20_20, 3) = ((MR_Box) (make__util__FullOutputStream_10));
      MR_hl_field(MR_mktag(0), make__util__V_20_20, 4) = ((MR_Box) (make__util__PartialOutputStream_11));
    }
    {
      mercury__io__input_stream_foldl2_io_6_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, make__util__InputStream_9, make__util__V_20_20, ((MR_Box) (make__util__LinesToWrite_12)), &make__util__Res_14);
    }
    if (((MR_tag((MR_Word) make__util__Res_14)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word make__util__Error_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__util__Res_14, (MR_Integer) 1)));
        MR_String make__util__V_28_28;
        MR_Integer make__util__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), make__util__Res_14, (MR_Integer) 0)));

        {
          make__util__V_28_28 = mercury__io__error_message_1_f_0(make__util__Error_17);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "Error reading \140");
        }
        {
          mercury__io__write_string_3_p_0(make__util__FileName_8);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\': ");
        }
        {
          mercury__io__write_string_3_p_0(make__util__V_28_28);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
      }
    else
      {
      }
  }
}

static void MR_CALL 
make__util__build_with_module_options_and_output_redirect_2_9_p_0(
  MR_Word make__util__ModuleName_10,
  MR_Word make__util__Build_11,
  MR_Word make__util__Globals_12,
  MR_Word make__util__AllOptions_13,
  MR_Word * make__util__Succeeded_14,
  MR_Word make__util__STATE_VARIABLE_Info_0_17,
  MR_Word * make__util__STATE_VARIABLE_Info_18)
{
  {
    MR_bool make__util__succeeded;
    MR_Word make__util__RedirectResult_41;
    MR_Word make__util__STATE_VARIABLE_Info_21_43;

    {
      make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_100_105_114_101_99_116_95_111_117_116_112_117_116_95_95_91_49_93_95_48_6_p_0(&make__util__RedirectResult_41, make__util__STATE_VARIABLE_Info_0_17, &make__util__STATE_VARIABLE_Info_21_43);
    }
    if ((make__util__RedirectResult_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *make__util__Succeeded_14 = (MR_Integer) 0;
        *make__util__STATE_VARIABLE_Info_18 = make__util__STATE_VARIABLE_Info_21_43;
      }
    else
      {
        MR_Word make__util__ErrorStream_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__util__RedirectResult_41, (MR_Integer) 0)));
        MR_Word make__util__STATE_VARIABLE_Info_23_45;
        void MR_CALL (* make__util__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), make__util__Build_11, (MR_Integer) 1)));
        MR_Box make__util__conv3_Succeeded_14;
        MR_Box make__util__conv2_STATE_VARIABLE_Info_23_45;
        MR_Box make__util__conv1_STATE_VARIABLE_IO_24_46;

        {
          make__util__func_0(((MR_Box) make__util__Build_11), ((MR_Box) (make__util__Globals_12)), ((MR_Box) (make__util__AllOptions_13)), ((MR_Box) (make__util__ErrorStream_42)), &make__util__conv3_Succeeded_14, ((MR_Box) (make__util__STATE_VARIABLE_Info_21_43)), &make__util__conv2_STATE_VARIABLE_Info_23_45, ((MR_Box) ((MR_Integer) 0)), &make__util__conv1_STATE_VARIABLE_IO_24_46);
        }
        *make__util__Succeeded_14 = ((MR_Word) make__util__conv3_Succeeded_14);
        make__util__STATE_VARIABLE_Info_23_45 = ((MR_Word) make__util__conv2_STATE_VARIABLE_Info_23_45);
        {
          make__util__unredirect_output_7_p_0(make__util__Globals_12, make__util__ModuleName_10, make__util__ErrorStream_42, make__util__STATE_VARIABLE_Info_23_45, make__util__STATE_VARIABLE_Info_18);
        }
      }
  }
}

static void MR_CALL 
make__util__unlock_stdout_3_p_0(
  MR_Box make__util__JobCtl_1)
{
  {
    MR_bool make__util__succeeded;

{
#define MR_PROC_LABEL make__util__unlock_stdout_3_p_0

	MC_JobCtl * JobCtl;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MC_JobCtl *, make__util__JobCtl_1 , JobCtl);
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
  MR_Box make__util__JobCtl_1)
{
  {
    MR_bool make__util__succeeded;

{
#define MR_PROC_LABEL make__util__lock_stdout_3_p_0

	MC_JobCtl * JobCtl;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MC_JobCtl *, make__util__JobCtl_1 , JobCtl);
		{

#ifdef MC_HAVE_JOBCTL_IPC
    MC_lock_job_ctl(JobCtl);
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static MR_Word MR_CALL 
make__util__make_no_job_ctl_0_f_0(void)
{
  {
    MR_bool make__util__succeeded;

    return (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

static MR_Word MR_CALL 
make__util__make_yes_job_ctl_1_f_0(
  MR_Box make__util__JobCtl_3)
{
  {
    MR_bool make__util__succeeded;
    MR_Word make__util__HeadVar__2_2;

    {
      make__util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), make__util__HeadVar__2_2, 0) = ((MR_Box) (make__util__JobCtl_3));
    }
    return make__util__HeadVar__2_2;
  }
}

static void MR_CALL 
make__util__mark_abort_3_p_0(
  MR_Box make__util__JobCtl_1)
{
  {
    MR_bool make__util__succeeded;

{
#define MR_PROC_LABEL make__util__mark_abort_3_p_0

	MC_JobCtl * JobCtl;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MC_JobCtl *, make__util__JobCtl_1 , JobCtl);
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
make__util__mark_task_error_5_p_0(
  MR_Box make__util__JobCtl_1,
  MR_Integer make__util__TaskNumber_2,
  MR_Word make__util__KeepGoing_3)
{
  {
    MR_bool make__util__succeeded;

{
#define MR_PROC_LABEL make__util__mark_task_error_5_p_0

	MC_JobCtl * JobCtl;
	MR_Integer TaskNumber;
	MR_Word KeepGoing;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MC_JobCtl *, make__util__JobCtl_1 , JobCtl);
	TaskNumber =  make__util__TaskNumber_2 ;
	KeepGoing =  make__util__KeepGoing_3 ;
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
  MR_Box make__util__JobCtl_1,
  MR_Integer make__util__TaskNumber_2)
{
  {
    MR_bool make__util__succeeded;

{
#define MR_PROC_LABEL make__util__mark_task_done_4_p_0

	MC_JobCtl * JobCtl;
	MR_Integer TaskNumber;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MC_JobCtl *, make__util__JobCtl_1 , JobCtl);
	TaskNumber =  make__util__TaskNumber_2 ;
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
  MR_Box make__util__JobCtl_1,
  MR_Integer * make__util__TaskNumber_2)
{
  {
    MR_bool make__util__succeeded;

{
#define MR_PROC_LABEL make__util__accept_task_4_p_0

	MC_JobCtl * JobCtl;
	MR_Integer TaskNumber;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MC_JobCtl *, make__util__JobCtl_1 , JobCtl);
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
	 *make__util__TaskNumber_2  = TaskNumber;
}
  }
}

static void MR_CALL 
make__util__destroy_job_ctl_3_p_0(
  MR_Box make__util__JobCtl_1)
{
  {
    MR_bool make__util__succeeded;

{
#define MR_PROC_LABEL make__util__destroy_job_ctl_3_p_0

	MC_JobCtl * JobCtl;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MC_JobCtl *, make__util__JobCtl_1 , JobCtl);
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
  MR_Integer make__util__TotalJobs_1,
  MR_Word * make__util__MaybeJobCtl_2)
{
  {
    MR_bool make__util__succeeded;

{
#define MR_PROC_LABEL make__util__create_job_ctl_4_p_0

	MR_Integer TotalJobs;
	MR_Word MaybeJobCtl;

	TotalJobs =  make__util__TotalJobs_1 ;
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
	 *make__util__MaybeJobCtl_2  = MaybeJobCtl;
}
  }
}

static MR_bool MR_CALL 
make__util__have_job_ctl_ipc_0_p_0(void)
{
  {
    MR_bool make__util__succeeded;

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
make__util__succeeded  = SUCCESS_INDICATOR;
}
    return make__util__succeeded;
  }
}

static void MR_CALL 
make__util__reap_worker_process_5_p_0(
  MR_Integer make__util__Pid_6,
  MR_Word make__util__STATE_VARIABLE_Success_0_10,
  MR_Word * make__util__STATE_VARIABLE_Success_11)
{
  {
    MR_bool make__util__succeeded;
    MR_Word make__util__Status_9;
    MR_Word make__util__V_15_15;
    MR_Integer make__util__V_16_16;

    {
      libs__process_util__wait_pid_4_p_0(make__util__Pid_6, &make__util__Status_9);
    }
    make__util__succeeded = (make__util__STATE_VARIABLE_Success_0_10 == (MR_Integer) 1);
    if (make__util__succeeded)
      {
        make__util__succeeded = ((MR_tag((MR_Word) make__util__Status_9)) == (MR_mktag((MR_Integer) 0)));
        if (make__util__succeeded)
          {
            make__util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Status_9, (MR_Integer) 0)));
            make__util__succeeded = ((MR_tag((MR_Word) make__util__V_15_15)) == (MR_mktag((MR_Integer) 0)));
            if (make__util__succeeded)
              {
                make__util__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__util__V_15_15, (MR_Integer) 0)));
                make__util__succeeded = (make__util__V_16_16 == (MR_Integer) 0);
              }
          }
      }
    if (make__util__succeeded)
      *make__util__STATE_VARIABLE_Success_11 = make__util__STATE_VARIABLE_Success_0_10;
    else
      *make__util__STATE_VARIABLE_Success_11 = (MR_Integer) 0;
  }
}

static void MR_CALL 
make__util__worker_loop_signal_cleanup_6_p_0_1(
  MR_Box make__util__closure_arg,
  MR_Box make__util__wrapper_arg_1,
  MR_Box make__util__wrapper_arg_2,
  MR_Box * make__util__wrapper_arg_3)
{
  {
    MR_Box make__util__closure = make__util__closure_arg;

    {
      libs__process_util__send_signal_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 3))), ((MR_Integer) make__util__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
make__util__worker_loop_signal_cleanup_6_p_0(
  MR_Word make__util__TypeInfo_for_Info_19,
  MR_Box make__util__JobCtl_7,
  MR_Word make__util__Pids_8,
  MR_Box make__util__STATE_VARIABLE_Info_0_11,
  MR_Box * make__util__STATE_VARIABLE_Info_12)
{
  {
    MR_bool make__util__succeeded;
    MR_Word make__util__V_16_16;
    MR_Integer make__util__V_18_18;
    MR_Box make__util__conv0_STATE_VARIABLE_IO_14;

    {
      make__util__mark_abort_3_p_0(make__util__JobCtl_7);
    }
    {
      make__util__V_18_18 = libs__process_util__sigint_0_f_0();
    }
    {
      make__util__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), make__util__V_16_16, 0) = ((MR_Box) (&make__util_scalar_common_12[0]));
      MR_hl_field(MR_mktag(0), make__util__V_16_16, 1) = ((MR_Box) (make__util__worker_loop_signal_cleanup_6_p_0_1));
      MR_hl_field(MR_mktag(0), make__util__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), make__util__V_16_16, 3) = ((MR_Box) (make__util__V_18_18));
    }
    {
      mercury__list__foldl_4_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__util__V_16_16, make__util__Pids_8, ((MR_Box) ((MR_Integer) 0)), &make__util__conv0_STATE_VARIABLE_IO_14);
    }
    *make__util__STATE_VARIABLE_Info_12 = make__util__STATE_VARIABLE_Info_0_11;
  }
}

static void MR_CALL 
make__util__worker_loop_11_p_0(
  MR_Word make__util__TypeInfo_for_T_39,
  MR_Word make__util__TypeInfo_for_Info_40,
  MR_Word make__util__Globals_12,
  MR_Word make__util__KeepGoing_13,
  MR_Word make__util__MakeTarget_14,
  MR_Word make__util__Targets_15,
  MR_Box make__util__JobCtl_16,
  MR_Word make__util__STATE_VARIABLE_Success_0_23,
  MR_Word * make__util__STATE_VARIABLE_Success_24,
  MR_Box make__util__STATE_VARIABLE_Info_0_25,
  MR_Box * make__util__STATE_VARIABLE_Info_26)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool make__util__succeeded;
        MR_Integer make__util__TaskNumber_20;

        {
          make__util__accept_task_4_p_0(make__util__JobCtl_16, &make__util__TaskNumber_20);
        }
        make__util__succeeded = (make__util__TaskNumber_20 >= (MR_Integer) 0);
        if (make__util__succeeded)
          {
            MR_Box make__util__Target_21;
            MR_Word make__util__TargetSuccess_22;
            MR_Box make__util__STATE_VARIABLE_Info_31_31;
            MR_Word make__util__STATE_VARIABLE_Success_34_34;
            void MR_CALL (* make__util__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
            MR_Box make__util__conv2_TargetSuccess_22;
            MR_Box make__util__conv1_STATE_VARIABLE_IO_32_32;

            {
              make__util__Target_21 = mercury__list__det_index0_2_f_0(make__util__TypeInfo_for_T_39, make__util__Targets_15, make__util__TaskNumber_20);
            }
            make__util__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), make__util__MakeTarget_14, (MR_Integer) 1)));
            {
              make__util__func_0(((MR_Box) make__util__MakeTarget_14), ((MR_Box) (make__util__Globals_12)), make__util__Target_21, &make__util__conv2_TargetSuccess_22, make__util__STATE_VARIABLE_Info_0_25, &make__util__STATE_VARIABLE_Info_31_31, ((MR_Box) ((MR_Integer) 0)), &make__util__conv1_STATE_VARIABLE_IO_32_32);
            }
            make__util__TargetSuccess_22 = ((MR_Word) make__util__conv2_TargetSuccess_22);
            switch (make__util__TargetSuccess_22) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  {
                    make__util__mark_task_error_5_p_0(make__util__JobCtl_16, make__util__TaskNumber_20, make__util__KeepGoing_13);
                  }
                  make__util__STATE_VARIABLE_Success_34_34 = (MR_Integer) 0;
                }
                break;
              case (MR_Integer) 1:
                {
                  {
                    make__util__mark_task_done_4_p_0(make__util__JobCtl_16, make__util__TaskNumber_20);
                  }
                  make__util__STATE_VARIABLE_Success_34_34 = make__util__STATE_VARIABLE_Success_0_23;
                }
                break;
            }
            /* direct tailcall eliminated */
            {
              MR_Word make__util__STATE_VARIABLE_Success_0__tmp_copy_23 = make__util__STATE_VARIABLE_Success_34_34;
              MR_Box make__util__STATE_VARIABLE_Info_0__tmp_copy_25 = make__util__STATE_VARIABLE_Info_31_31;

              make__util__STATE_VARIABLE_Info_0_25 = make__util__STATE_VARIABLE_Info_0__tmp_copy_25;
              make__util__STATE_VARIABLE_Success_0_23 = make__util__STATE_VARIABLE_Success_0__tmp_copy_23;
            }
            continue;
          }
        else
          {
            *make__util__STATE_VARIABLE_Info_26 = make__util__STATE_VARIABLE_Info_0_25;
            *make__util__STATE_VARIABLE_Success_24 = make__util__STATE_VARIABLE_Success_0_23;
          }
      }
      break;
    }
}

static void MR_CALL 
make__util__child_worker_9_p_0_2(
  MR_Box make__util__closure_arg,
  MR_Box make__util__wrapper_arg_1,
  MR_Box * make__util__wrapper_arg_2,
  MR_Box make__util__wrapper_arg_3,
  MR_Box * make__util__wrapper_arg_4)
{
  {
    MR_Box make__util__closure = make__util__closure_arg;

    {
      make__util__worker_loop_signal_cleanup_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 3))), ((MR_Box) (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 5))), make__util__wrapper_arg_1, make__util__wrapper_arg_2);
    }
  }
}

static void MR_CALL 
make__util__child_worker_9_p_0_1(
  MR_Box make__util__closure_arg,
  MR_Box * make__util__wrapper_arg_1,
  MR_Box make__util__wrapper_arg_2,
  MR_Box * make__util__wrapper_arg_3,
  MR_Box make__util__wrapper_arg_4,
  MR_Box * make__util__wrapper_arg_5)
{
  {
    MR_Box make__util__closure = make__util__closure_arg;
    MR_Word make__util__conv0_STATE_VARIABLE_Success_24;

    {
      make__util__worker_loop_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 8))), ((MR_Box) (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 9))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 10))), &make__util__conv0_STATE_VARIABLE_Success_24, make__util__wrapper_arg_2, make__util__wrapper_arg_3);
    }
    *make__util__wrapper_arg_1 = ((MR_Box) (make__util__conv0_STATE_VARIABLE_Success_24));
  }
}

static void MR_CALL 
make__util__child_worker_9_p_0(
  MR_Word make__util__TypeInfo_for_T_28,
  MR_Word make__util__TypeInfo_for_Info_29,
  MR_Word make__util__Globals_10,
  MR_Word make__util__KeepGoing_11,
  MR_Word make__util__MakeTarget_12,
  MR_Word make__util__Targets_13,
  MR_Box make__util__JobCtl_14,
  MR_Box make__util__Info0_15,
  MR_Word * make__util__Success_16)
{
  {
    MR_bool make__util__succeeded;
    MR_Word make__util__VeryVerbose_18;
    MR_Word make__util__V_23_23;
    MR_Word make__util__V_24_24;
    MR_Box make__util___Info_19;

    {
      libs__globals__lookup_bool_option_3_p_0(make__util__Globals_10, (MR_Integer) 48, &make__util__VeryVerbose_18);
    }
    {
      make__util__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), make__util__V_23_23, 0) = ((MR_Box) (&make__util_scalar_common_10[0]));
      MR_hl_field(MR_mktag(0), make__util__V_23_23, 1) = ((MR_Box) (make__util__child_worker_9_p_0_1));
      MR_hl_field(MR_mktag(0), make__util__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(0), make__util__V_23_23, 3) = ((MR_Box) (make__util__TypeInfo_for_T_28));
      MR_hl_field(MR_mktag(0), make__util__V_23_23, 4) = ((MR_Box) (make__util__TypeInfo_for_Info_29));
      MR_hl_field(MR_mktag(0), make__util__V_23_23, 5) = ((MR_Box) (make__util__Globals_10));
      MR_hl_field(MR_mktag(0), make__util__V_23_23, 6) = ((MR_Box) (make__util__KeepGoing_11));
      MR_hl_field(MR_mktag(0), make__util__V_23_23, 7) = ((MR_Box) (make__util__MakeTarget_12));
      MR_hl_field(MR_mktag(0), make__util__V_23_23, 8) = ((MR_Box) (make__util__Targets_13));
      MR_hl_field(MR_mktag(0), make__util__V_23_23, 9) = ((MR_Box) (make__util__JobCtl_14));
      MR_hl_field(MR_mktag(0), make__util__V_23_23, 10) = ((MR_Box) ((MR_Integer) 1));
    }
    {
      make__util__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), make__util__V_24_24, 0) = ((MR_Box) (&make__util_scalar_common_11[0]));
      MR_hl_field(MR_mktag(0), make__util__V_24_24, 1) = ((MR_Box) (make__util__child_worker_9_p_0_2));
      MR_hl_field(MR_mktag(0), make__util__V_24_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), make__util__V_24_24, 3) = ((MR_Box) (make__util__TypeInfo_for_Info_29));
      MR_hl_field(MR_mktag(0), make__util__V_24_24, 4) = ((MR_Box) (make__util__JobCtl_14));
      MR_hl_field(MR_mktag(0), make__util__V_24_24, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      libs__process_util__build_with_check_for_interrupt_8_p_0(make__util__TypeInfo_for_Info_29, make__util__VeryVerbose_18, make__util__V_23_23, make__util__V_24_24, make__util__Success_16, make__util__Info0_15, &make__util___Info_19);
    }
  }
}

static void MR_CALL 
make__util__foldl2_maybe_stop_at_error_parallel_processes_10_p_0_4(
  MR_Box make__util__closure_arg,
  MR_Box make__util__wrapper_arg_1,
  MR_Box make__util__wrapper_arg_2,
  MR_Box * make__util__wrapper_arg_3,
  MR_Box make__util__wrapper_arg_4,
  MR_Box * make__util__wrapper_arg_5)
{
  {
    MR_Box make__util__closure = make__util__closure_arg;
    MR_Word make__util__conv7_STATE_VARIABLE_Success_11;

    {
      make__util__reap_worker_process_5_p_0(((MR_Integer) make__util__wrapper_arg_1), ((MR_Word) make__util__wrapper_arg_2), &make__util__conv7_STATE_VARIABLE_Success_11);
    }
    *make__util__wrapper_arg_3 = ((MR_Box) (make__util__conv7_STATE_VARIABLE_Success_11));
  }
}

static void MR_CALL 
make__util__foldl2_maybe_stop_at_error_parallel_processes_10_p_0_3(
  MR_Box make__util__closure_arg,
  MR_Box make__util__wrapper_arg_1,
  MR_Box * make__util__wrapper_arg_2,
  MR_Box make__util__wrapper_arg_3,
  MR_Box * make__util__wrapper_arg_4)
{
  {
    MR_Box make__util__closure = make__util__closure_arg;
    MR_Word make__util__conv5_HeadVar__4_105;

    {
      make__util__IntroducedFrom__pred__foldl2_maybe_stop_at_error_parallel_processes__471__1_6_p_0(((MR_Box) (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 4))), ((MR_Word) make__util__wrapper_arg_1), &make__util__conv5_HeadVar__4_105);
    }
    *make__util__wrapper_arg_2 = ((MR_Box) (make__util__conv5_HeadVar__4_105));
  }
}

static void MR_CALL 
make__util__foldl2_maybe_stop_at_error_parallel_processes_10_p_0_2(
  MR_Box make__util__closure_arg,
  MR_Box * make__util__wrapper_arg_1,
  MR_Box make__util__wrapper_arg_2,
  MR_Box * make__util__wrapper_arg_3,
  MR_Box make__util__wrapper_arg_4,
  MR_Box * make__util__wrapper_arg_5)
{
  {
    MR_Box make__util__closure = make__util__closure_arg;
    MR_Word make__util__conv4_HeadVar__8_98;
    MR_Word make__util__conv3_HeadVar__10_100;

    {
      make__util__IntroducedFrom__pred__foldl2_maybe_stop_at_error_parallel_processes__470__1_12_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 7))), ((MR_Box) (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 9))), &make__util__conv4_HeadVar__8_98, ((MR_Word) make__util__wrapper_arg_2), &make__util__conv3_HeadVar__10_100);
    }
    *make__util__wrapper_arg_1 = ((MR_Box) (make__util__conv4_HeadVar__8_98));
    *make__util__wrapper_arg_3 = ((MR_Box) (make__util__conv3_HeadVar__10_100));
  }
}

static void MR_CALL 
make__util__foldl2_maybe_stop_at_error_parallel_processes_10_p_0_1(
  MR_Box make__util__closure_arg,
  MR_Box make__util__wrapper_arg_1,
  MR_Box make__util__wrapper_arg_2,
  MR_Box * make__util__wrapper_arg_3,
  MR_Box make__util__wrapper_arg_4,
  MR_Box * make__util__wrapper_arg_5)
{
  {
    MR_Box make__util__closure = make__util__closure_arg;
    MR_Word make__util__conv0_HeadVar__10_91;

    {
      make__util__IntroducedFrom__pred__foldl2_maybe_stop_at_error_parallel_processes__465__1_12_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 7))), ((MR_Box) (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 9))), ((MR_Integer) make__util__wrapper_arg_1), ((MR_Word) make__util__wrapper_arg_2), &make__util__conv0_HeadVar__10_91);
    }
    *make__util__wrapper_arg_3 = ((MR_Box) (make__util__conv0_HeadVar__10_91));
  }
}

static void MR_CALL 
make__util__foldl2_maybe_stop_at_error_parallel_processes_10_p_0(
  MR_Word make__util__TypeInfo_for_T_88,
  MR_Word make__util__KeepGoing_11,
  MR_Integer make__util__Jobs_12,
  MR_Word make__util__MakeTarget_13,
  MR_Word make__util__Globals_14,
  MR_Word make__util__Targets_15,
  MR_Word * make__util__Success_16,
  MR_Word make__util__STATE_VARIABLE_Info_0_25,
  MR_Word * make__util__STATE_VARIABLE_Info_26)
{
  {
    MR_bool make__util__succeeded;
    MR_Integer make__util__TotalTasks_19;
    MR_Word make__util__MaybeJobCtl_20;

    {
      make__util__TotalTasks_19 = mercury__list__length_1_f_0(make__util__TypeInfo_for_T_88, make__util__Targets_15);
    }
    {
      make__util__create_job_ctl_4_p_0(make__util__TotalTasks_19, &make__util__MaybeJobCtl_20);
    }
    if ((make__util__MaybeJobCtl_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *make__util__Success_16 = (MR_Integer) 0;
        *make__util__STATE_VARIABLE_Info_26 = make__util__STATE_VARIABLE_Info_0_25;
      }
    else
      {
        MR_Word make__util__TypeCtorInfo_95_95;
        MR_Word make__util__TypeCtorInfo_97_97;
        MR_Box make__util__JobCtl_21 = ((MR_Box) (MR_hl_field(MR_mktag(1), make__util__MaybeJobCtl_20, (MR_Integer) 0)));
        MR_Word make__util__Pids_22;
        MR_Word make__util__VeryVerbose_23;
        MR_Word make__util__Success0_24;
        MR_Word make__util__STATE_VARIABLE_Info_30_30;
        MR_Word make__util__V_32_32;
        MR_Word make__util__V_33_33;
        MR_Word make__util__V_38_38;
        MR_Word make__util__V_39_39;
        MR_Word make__util__STATE_VARIABLE_Info_40_40;
        MR_Word make__util__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_25, (MR_Integer) 0)));
        MR_Word make__util__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_25, (MR_Integer) 1)));
        MR_Word make__util__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_25, (MR_Integer) 2)));
        MR_Word make__util__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_25, (MR_Integer) 3)));
        MR_Word make__util__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_25, (MR_Integer) 4)));
        MR_Word make__util__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_25, (MR_Integer) 5)));
        MR_Word make__util__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_25, (MR_Integer) 6)));
        MR_Word make__util__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_25, (MR_Integer) 7)));
        MR_Word make__util__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_25, (MR_Integer) 8)));
        MR_Word make__util__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_25, (MR_Integer) 9)));
        MR_Word make__util__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_25, (MR_Integer) 10)));
        MR_Word make__util__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_25, (MR_Integer) 11)));
        MR_Word make__util__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_25, (MR_Integer) 12)));
        MR_Word make__util__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_25, (MR_Integer) 13)));
        MR_Word make__util__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_25, (MR_Integer) 14)));
        MR_Word make__util__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_25, (MR_Integer) 15)));
        MR_Word make__util__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_25, (MR_Integer) 16)));
        MR_Word make__util__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_25, (MR_Integer) 17)));
        MR_Integer make__util__V_66_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_25, (MR_Integer) 18)));
        MR_Word make__util__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_25, (MR_Integer) 19)));
        MR_Box make__util__conv2_Pids_22;
        MR_Box make__util__conv1_STATE_VARIABLE_IO_35_35;
        MR_Box make__util__conv6_STATE_VARIABLE_Info_40_40;
        MR_Box make__util__conv9_Success_16;
        MR_Box make__util__conv8_STATE_VARIABLE_IO_44_44;
        MR_Word make__util__V_68_68;
        MR_Word make__util__V_69_69;
        MR_Word make__util__V_70_70;
        MR_Word make__util__V_71_71;
        MR_Word make__util__V_72_72;
        MR_Word make__util__V_73_73;
        MR_Word make__util__V_74_74;
        MR_Word make__util__V_75_75;
        MR_Word make__util__V_76_76;
        MR_Word make__util__V_77_77;
        MR_Word make__util__V_78_78;
        MR_Word make__util__V_79_79;
        MR_Word make__util__V_80_80;
        MR_Word make__util__V_81_81;
        MR_Word make__util__V_82_82;
        MR_Word make__util__V_83_83;
        MR_Word make__util__V_84_84;
        MR_Word make__util__V_85_85;
        MR_Integer make__util__V_86_86;
        MR_Word make__util__V_87_87;

        {
          make__util__STATE_VARIABLE_Info_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_30_30, 0) = ((MR_Box) (make__util__V_48_48));
          MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_30_30, 1) = ((MR_Box) (make__util__V_49_49));
          MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_30_30, 2) = ((MR_Box) (make__util__V_50_50));
          MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_30_30, 3) = ((MR_Box) (make__util__V_51_51));
          MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_30_30, 4) = ((MR_Box) (make__util__V_52_52));
          MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_30_30, 5) = ((MR_Box) (make__util__V_53_53));
          MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_30_30, 6) = ((MR_Box) (make__util__V_54_54));
          MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_30_30, 7) = ((MR_Box) (make__util__V_55_55));
          MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_30_30, 8) = ((MR_Box) (make__util__V_56_56));
          MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_30_30, 9) = ((MR_Box) (make__util__V_57_57));
          MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_30_30, 10) = ((MR_Box) (make__util__V_58_58));
          MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_30_30, 11) = ((MR_Box) (make__util__V_59_59));
          MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_30_30, 12) = ((MR_Box) (make__util__V_60_60));
          MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_30_30, 13) = ((MR_Box) (make__util__V_61_61));
          MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_30_30, 14) = ((MR_Box) (make__util__V_62_62));
          MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_30_30, 15) = ((MR_Box) (make__util__V_63_63));
          MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_30_30, 16) = ((MR_Box) (make__util__V_64_64));
          MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_30_30, 17) = ((MR_Box) (make__util__V_65_65));
          MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_30_30, 18) = ((MR_Box) (make__util__V_66_66));
          MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_30_30, 19) = ((MR_Box) (make__util__MaybeJobCtl_20));
        }
        {
          make__util__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), make__util__V_32_32, 0) = ((MR_Box) (&make__util_scalar_common_6[0]));
          MR_hl_field(MR_mktag(0), make__util__V_32_32, 1) = ((MR_Box) (make__util__foldl2_maybe_stop_at_error_parallel_processes_10_p_0_1));
          MR_hl_field(MR_mktag(0), make__util__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
          MR_hl_field(MR_mktag(0), make__util__V_32_32, 3) = ((MR_Box) (make__util__TypeInfo_for_T_88));
          MR_hl_field(MR_mktag(0), make__util__V_32_32, 4) = ((MR_Box) (make__util__KeepGoing_11));
          MR_hl_field(MR_mktag(0), make__util__V_32_32, 5) = ((MR_Box) (make__util__MakeTarget_13));
          MR_hl_field(MR_mktag(0), make__util__V_32_32, 6) = ((MR_Box) (make__util__Globals_14));
          MR_hl_field(MR_mktag(0), make__util__V_32_32, 7) = ((MR_Box) (make__util__Targets_15));
          MR_hl_field(MR_mktag(0), make__util__V_32_32, 8) = ((MR_Box) (make__util__JobCtl_21));
          MR_hl_field(MR_mktag(0), make__util__V_32_32, 9) = ((MR_Box) (make__util__STATE_VARIABLE_Info_30_30));
        }
        {
          make__util__V_33_33 = mercury__list__f_46_46_2_f_0((MR_Integer) 2, make__util__Jobs_12);
        }
        make__util__TypeCtorInfo_95_95 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        make__util__TypeCtorInfo_97_97 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
        {
          mercury__list__foldl2_6_p_2(make__util__TypeCtorInfo_95_95, (MR_Word) &make__util_scalar_common_2[0], make__util__TypeCtorInfo_97_97, make__util__V_32_32, make__util__V_33_33, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &make__util__conv2_Pids_22, ((MR_Box) ((MR_Integer) 0)), &make__util__conv1_STATE_VARIABLE_IO_35_35);
        }
        make__util__Pids_22 = ((MR_Word) make__util__conv2_Pids_22);
        {
          libs__globals__lookup_bool_option_3_p_0(make__util__Globals_14, (MR_Integer) 48, &make__util__VeryVerbose_23);
        }
        {
          make__util__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), make__util__V_38_38, 0) = ((MR_Box) (&make__util_scalar_common_6[1]));
          MR_hl_field(MR_mktag(0), make__util__V_38_38, 1) = ((MR_Box) (make__util__foldl2_maybe_stop_at_error_parallel_processes_10_p_0_2));
          MR_hl_field(MR_mktag(0), make__util__V_38_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
          MR_hl_field(MR_mktag(0), make__util__V_38_38, 3) = ((MR_Box) (make__util__TypeInfo_for_T_88));
          MR_hl_field(MR_mktag(0), make__util__V_38_38, 4) = ((MR_Box) (make__util__KeepGoing_11));
          MR_hl_field(MR_mktag(0), make__util__V_38_38, 5) = ((MR_Box) (make__util__MakeTarget_13));
          MR_hl_field(MR_mktag(0), make__util__V_38_38, 6) = ((MR_Box) (make__util__Globals_14));
          MR_hl_field(MR_mktag(0), make__util__V_38_38, 7) = ((MR_Box) (make__util__Targets_15));
          MR_hl_field(MR_mktag(0), make__util__V_38_38, 8) = ((MR_Box) (make__util__JobCtl_21));
          MR_hl_field(MR_mktag(0), make__util__V_38_38, 9) = ((MR_Box) ((MR_Integer) 1));
        }
        {
          make__util__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), make__util__V_39_39, 0) = ((MR_Box) (&make__util_scalar_common_7[0]));
          MR_hl_field(MR_mktag(0), make__util__V_39_39, 1) = ((MR_Box) (make__util__foldl2_maybe_stop_at_error_parallel_processes_10_p_0_3));
          MR_hl_field(MR_mktag(0), make__util__V_39_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), make__util__V_39_39, 3) = ((MR_Box) (make__util__JobCtl_21));
          MR_hl_field(MR_mktag(0), make__util__V_39_39, 4) = ((MR_Box) (make__util__Pids_22));
        }
        {
          libs__process_util__build_with_check_for_interrupt_8_p_0((MR_Word) &make__make__type_ctor_info_make_info_0, make__util__VeryVerbose_23, make__util__V_38_38, make__util__V_39_39, &make__util__Success0_24, ((MR_Box) (make__util__STATE_VARIABLE_Info_30_30)), &make__util__conv6_STATE_VARIABLE_Info_40_40);
        }
        make__util__STATE_VARIABLE_Info_40_40 = ((MR_Word) make__util__conv6_STATE_VARIABLE_Info_40_40);
        {
          mercury__list__foldl2_6_p_2(make__util__TypeCtorInfo_95_95, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, make__util__TypeCtorInfo_97_97, (MR_Word) &make__util_scalar_common_1[3], make__util__Pids_22, ((MR_Box) (make__util__Success0_24)), &make__util__conv9_Success_16, ((MR_Box) ((MR_Integer) 0)), &make__util__conv8_STATE_VARIABLE_IO_44_44);
        }
        *make__util__Success_16 = ((MR_Word) make__util__conv9_Success_16);
        make__util__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_40_40, (MR_Integer) 0)));
        make__util__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_40_40, (MR_Integer) 1)));
        make__util__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_40_40, (MR_Integer) 2)));
        make__util__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_40_40, (MR_Integer) 3)));
        make__util__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_40_40, (MR_Integer) 4)));
        make__util__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_40_40, (MR_Integer) 5)));
        make__util__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_40_40, (MR_Integer) 6)));
        make__util__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_40_40, (MR_Integer) 7)));
        make__util__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_40_40, (MR_Integer) 8)));
        make__util__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_40_40, (MR_Integer) 9)));
        make__util__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_40_40, (MR_Integer) 10)));
        make__util__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_40_40, (MR_Integer) 11)));
        make__util__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_40_40, (MR_Integer) 12)));
        make__util__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_40_40, (MR_Integer) 13)));
        make__util__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_40_40, (MR_Integer) 14)));
        make__util__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_40_40, (MR_Integer) 15)));
        make__util__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_40_40, (MR_Integer) 16)));
        make__util__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_40_40, (MR_Integer) 17)));
        make__util__V_86_86 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_40_40, (MR_Integer) 18)));
        make__util__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_40_40, (MR_Integer) 19)));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
          *make__util__STATE_VARIABLE_Info_26 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__util__V_68_68));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__util__V_69_69));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__util__V_70_70));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (make__util__V_71_71));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (make__util__V_72_72));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (make__util__V_73_73));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (make__util__V_74_74));
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (make__util__V_75_75));
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (make__util__V_76_76));
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (make__util__V_77_77));
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (make__util__V_78_78));
          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (make__util__V_79_79));
          MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (make__util__V_80_80));
          MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (make__util__V_81_81));
          MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (make__util__V_82_82));
          MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (make__util__V_83_83));
          MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (make__util__V_84_84));
          MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (make__util__V_85_85));
          MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (make__util__V_86_86));
          MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          make__util__destroy_job_ctl_3_p_0(make__util__JobCtl_21);
        }
      }
  }
}

void MR_CALL 
make__util__dependency_file_hash_2_p_0(
  MR_Word make__util__DepFile_3,
  MR_Integer * make__util__Hash_4)
{
  {
    MR_bool make__util__succeeded;

    if (((MR_tag((MR_Word) make__util__DepFile_3)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String make__util__FileName_6 = ((MR_String) (MR_hl_field(MR_mktag(1), make__util__DepFile_3, (MR_Integer) 0)));
        MR_Word make__util___MaybeOption_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__util__DepFile_3, (MR_Integer) 1)));

        {
          *make__util__Hash_4 = mercury__string__hash_1_f_0(make__util__FileName_6);
        }
      }
    else
      {
        MR_Word make__util__TargetFile_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__DepFile_3, (MR_Integer) 0)));
        MR_Word make__util__ModuleName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__TargetFile_5, (MR_Integer) 0)));
        MR_Word make__util__Type_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__TargetFile_5, (MR_Integer) 1)));
        MR_Integer make__util__Hash0_12;
        MR_Integer make__util__Hash1_13;
        MR_Integer make__util__H1_41;
        MR_Integer make__util__V_42_42;

        if (((MR_tag((MR_Word) make__util__ModuleName_10)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_String make__util__String_18 = ((MR_String) (MR_hl_field(MR_mktag(1), make__util__ModuleName_10, (MR_Integer) 1)));
            MR_Word make__util___Qual_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__util__ModuleName_10, (MR_Integer) 0)));

            {
              make__util__Hash0_12 = mercury__string__hash_1_f_0(make__util__String_18);
            }
          }
        else
          {
            MR_String make__util__String_16 = ((MR_String) (MR_hl_field(MR_mktag(0), make__util__ModuleName_10, (MR_Integer) 0)));

            {
              make__util__Hash0_12 = mercury__string__hash_1_f_0(make__util__String_16);
            }
          }
        switch (MR_tag((MR_Word) make__util__Type_11)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(make__util__Type_11)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                make__util__Hash1_13 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                make__util__Hash1_13 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                make__util__Hash1_13 = (MR_Integer) 3;
                break;
              case (MR_Integer) 3:
                make__util__Hash1_13 = (MR_Integer) 4;
                break;
              case (MR_Integer) 4:
                make__util__Hash1_13 = (MR_Integer) 5;
                break;
              case (MR_Integer) 5:
                make__util__Hash1_13 = (MR_Integer) 6;
                break;
              case (MR_Integer) 6:
                make__util__Hash1_13 = (MR_Integer) 7;
                break;
              case (MR_Integer) 7:
                make__util__Hash1_13 = (MR_Integer) 8;
                break;
              case (MR_Integer) 8:
                make__util__Hash1_13 = (MR_Integer) 20;
                break;
              case (MR_Integer) 9:
                make__util__Hash1_13 = (MR_Integer) 11;
                break;
              case (MR_Integer) 10:
                make__util__Hash1_13 = (MR_Integer) 22;
                break;
              case (MR_Integer) 11:
                make__util__Hash1_13 = (MR_Integer) 12;
                break;
              case (MR_Integer) 12:
                make__util__Hash1_13 = (MR_Integer) 21;
                break;
              case (MR_Integer) 13:
                make__util__Hash1_13 = (MR_Integer) 13;
                break;
              case (MR_Integer) 14:
                make__util__Hash1_13 = (MR_Integer) 14;
                break;
              case (MR_Integer) 15:
                make__util__Hash1_13 = (MR_Integer) 15;
                break;
              case (MR_Integer) 16:
                make__util__Hash1_13 = (MR_Integer) 19;
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word make__util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__util__Type_11, (MR_Integer) 0)));

              switch (make__util__V_31_31) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  make__util__Hash1_13 = (MR_Integer) 9;
                  break;
                case (MR_Integer) 1:
                  make__util__Hash1_13 = (MR_Integer) 10;
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word make__util__PIC_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__util__Type_11, (MR_Integer) 0)));
              MR_Integer make__util__V_26_26;
              MR_Integer make__util__H1_35;

              switch (make__util__PIC_21) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  make__util__V_26_26 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  make__util__V_26_26 = (MR_Integer) 3;
                  break;
                case (MR_Integer) 0:
                  make__util__V_26_26 = (MR_Integer) 1;
                  break;
              }
              make__util__H1_35 = ((MR_Integer) 16 ^ (((MR_Integer) 16 << (MR_Integer) 5)));
              make__util__Hash1_13 = (make__util__H1_35 ^ make__util__V_26_26);
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__util__Type_11, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                make__util__Hash1_13 = (MR_Integer) 17;
                break;
              case (MR_Integer) 1:
                make__util__Hash1_13 = (MR_Integer) 18;
                break;
            }
            break;
        }
        make__util__V_42_42 = (make__util__Hash0_12 << (MR_Integer) 5);
        make__util__H1_41 = (make__util__Hash0_12 ^ make__util__V_42_42);
        *make__util__Hash_4 = (make__util__H1_41 ^ make__util__Hash1_13);
      }
  }
}

void MR_CALL 
make__util__module_name_hash_2_p_0(
  MR_Word make__util__SymName_3,
  MR_Integer * make__util__Hash_4)
{
  {
    MR_bool make__util__succeeded;

    if (((MR_tag((MR_Word) make__util__SymName_3)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String make__util__String_7 = ((MR_String) (MR_hl_field(MR_mktag(1), make__util__SymName_3, (MR_Integer) 1)));
        MR_Word make__util___Qual_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__util__SymName_3, (MR_Integer) 0)));

        {
          *make__util__Hash_4 = mercury__string__hash_1_f_0(make__util__String_7);
        }
      }
    else
      {
        MR_String make__util__String_5 = ((MR_String) (MR_hl_field(MR_mktag(0), make__util__SymName_3, (MR_Integer) 0)));

        {
          *make__util__Hash_4 = mercury__string__hash_1_f_0(make__util__String_5);
        }
      }
  }
}

void MR_CALL 
make__util__get_real_milliseconds_3_p_0(
  MR_Integer * make__util__Time_1)
{
  {
    MR_bool make__util__succeeded;

{
#define MR_PROC_LABEL make__util__get_real_milliseconds_3_p_0

	MR_Integer Time;

		{

    Time = MR_get_real_milliseconds();


		;}
#undef MR_PROC_LABEL
	 *make__util__Time_1  = Time;
}
  }
}

void MR_CALL 
make__util__maybe_symlink_or_copy_linked_target_message_4_p_0(
  MR_Word make__util__Globals_5,
  MR_Word make__util__Target_6)
{
  {
    MR_bool make__util__succeeded;
    MR_Word make__util__OptionValue_36;

    {
      libs__globals__lookup_bool_option_3_p_0(make__util__Globals_5, (MR_Integer) 52, &make__util__OptionValue_36);
    }
    switch (make__util__OptionValue_36) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          {
            make__util__IntroducedFrom__pred__maybe_symlink_or_copy_linked_target_message__1850__1_4_p_0(make__util__Globals_5, make__util__Target_6);
          }
          {
            mercury__io__flush_output_2_p_0();
          }
        }
        break;
    }
  }
}

void MR_CALL 
make__util__maybe_warn_up_to_date_target_6_p_0(
  MR_Word make__util__Globals_7,
  MR_Word make__util__Target_8,
  MR_Word make__util__STATE_VARIABLE_Info_0_14,
  MR_Word * make__util__STATE_VARIABLE_Info_15)
{
  {
    MR_bool make__util__succeeded;
    MR_Word make__util__Warn_11;
    MR_Word make__util__CmdLineTargets0_12;
    MR_Word make__util__CmdLineTargets_13;
    MR_Word make__util__V_45_45;
    MR_Word make__util__V_46_46;
    MR_Word make__util__V_47_47;
    MR_Word make__util__V_48_48;
    MR_Word make__util__V_49_49;
    MR_Word make__util__V_50_50;
    MR_Word make__util__V_51_51;
    MR_Word make__util__V_52_52;
    MR_Word make__util__V_53_53;
    MR_Word make__util__V_54_54;
    MR_Word make__util__V_55_55;
    MR_Word make__util__V_56_56;
    MR_Word make__util__V_57_57;
    MR_Word make__util__V_58_58;
    MR_Word make__util__V_59_59;
    MR_Word make__util__V_60_60;
    MR_Word make__util__V_61_61;
    MR_Integer make__util__V_62_62;
    MR_Word make__util__V_63_63;
    MR_Word make__util__V_64_64;
    MR_Word make__util__V_65_65;
    MR_Word make__util__V_66_66;
    MR_Word make__util__V_67_67;
    MR_Word make__util__V_68_68;
    MR_Word make__util__V_69_69;
    MR_Word make__util__V_70_70;
    MR_Word make__util__V_71_71;
    MR_Word make__util__V_72_72;
    MR_Word make__util__V_73_73;
    MR_Word make__util__V_74_74;
    MR_Word make__util__V_75_75;
    MR_Word make__util__V_76_76;
    MR_Word make__util__V_77_77;
    MR_Word make__util__V_78_78;
    MR_Word make__util__V_79_79;
    MR_Word make__util__V_80_80;
    MR_Integer make__util__V_82_82;
    MR_Word make__util__V_83_83;
    MR_Word make__util__V_81_81;

    {
      libs__globals__lookup_bool_option_3_p_0(make__util__Globals_7, (MR_Integer) 28, &make__util__Warn_11);
    }
    switch (make__util__Warn_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word make__util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 17)));
          MR_Word make__util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 0)));
          MR_Word make__util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 1)));
          MR_Word make__util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 2)));
          MR_Word make__util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 3)));
          MR_Word make__util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 4)));
          MR_Word make__util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 5)));
          MR_Word make__util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 6)));
          MR_Word make__util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 7)));
          MR_Word make__util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 8)));
          MR_Word make__util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 9)));
          MR_Word make__util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 10)));
          MR_Word make__util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 11)));
          MR_Word make__util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 12)));
          MR_Word make__util__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 13)));
          MR_Word make__util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 14)));
          MR_Word make__util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 15)));
          MR_Word make__util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 16)));
          MR_Integer make__util__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 18)));
          MR_Word make__util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 19)));

          {
            make__util__succeeded = mercury__set__member_2_p_0((MR_Word) &make__util_scalar_common_1[1], ((MR_Box) (make__util__Target_8)), make__util__V_19_19);
          }
          if (make__util__succeeded)
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "** Nothing to be done for \140");
              }
              {
                make__util__make_write_module_or_linked_target_4_p_0(make__util__Globals_7, make__util__Target_8);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "\'.\n");
              }
            }
          else
            {
            }
        }
        break;
    }
    make__util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 0)));
    make__util__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 1)));
    make__util__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 2)));
    make__util__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 3)));
    make__util__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 4)));
    make__util__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 5)));
    make__util__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 6)));
    make__util__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 7)));
    make__util__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 8)));
    make__util__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 9)));
    make__util__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 10)));
    make__util__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 11)));
    make__util__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 12)));
    make__util__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 13)));
    make__util__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 14)));
    make__util__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 15)));
    make__util__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 16)));
    make__util__CmdLineTargets0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 17)));
    make__util__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 18)));
    make__util__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 19)));
    {
      mercury__set__delete_3_p_0((MR_Word) &make__util_scalar_common_1[1], ((MR_Box) (make__util__Target_8)), make__util__CmdLineTargets0_12, &make__util__CmdLineTargets_13);
    }
    make__util__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 0)));
    make__util__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 1)));
    make__util__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 2)));
    make__util__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 3)));
    make__util__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 4)));
    make__util__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 5)));
    make__util__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 6)));
    make__util__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 7)));
    make__util__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 8)));
    make__util__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 9)));
    make__util__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 10)));
    make__util__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 11)));
    make__util__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 12)));
    make__util__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 13)));
    make__util__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 14)));
    make__util__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 15)));
    make__util__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 16)));
    make__util__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 17)));
    make__util__V_82_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 18)));
    make__util__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 19)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
      *make__util__STATE_VARIABLE_Info_15 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__util__V_64_64));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__util__V_65_65));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__util__V_66_66));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (make__util__V_67_67));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (make__util__V_68_68));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (make__util__V_69_69));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (make__util__V_70_70));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (make__util__V_71_71));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (make__util__V_72_72));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (make__util__V_73_73));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (make__util__V_74_74));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (make__util__V_75_75));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (make__util__V_76_76));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (make__util__V_77_77));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (make__util__V_78_78));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (make__util__V_79_79));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (make__util__V_80_80));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (make__util__CmdLineTargets_13));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (make__util__V_82_82));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (make__util__V_83_83));
    }
  }
}

void MR_CALL 
make__util__file_error_4_p_0(
  MR_Word make__util__Info_5,
  MR_String make__util__TargetFile_6)
{
  {
    MR_bool make__util__succeeded;
    MR_String make__util__V_12_12;
    MR_String make__util__V_14_14;
    MR_Word make__util__MaybeLock_23;
    MR_Word make__util__V_29_29;
    MR_Word make__util__V_30_30;
    MR_Word make__util__V_31_31;
    MR_Word make__util__V_32_32;
    MR_Word make__util__V_33_33;
    MR_Word make__util__V_34_34;
    MR_Word make__util__V_35_35;
    MR_Word make__util__V_36_36;
    MR_Word make__util__V_37_37;
    MR_Word make__util__V_38_38;
    MR_Word make__util__V_39_39;
    MR_Word make__util__V_40_40;
    MR_Word make__util__V_41_41;
    MR_Word make__util__V_42_42;
    MR_Word make__util__V_43_43;
    MR_Word make__util__V_44_44;
    MR_Word make__util__V_45_45;
    MR_Word make__util__V_46_46;
    MR_Integer make__util__V_47_47;

    {
      make__util__V_14_14 = mercury__string__f_43_43_2_f_0(make__util__TargetFile_6, (MR_String) "\'.\n");
    }
    {
      make__util__V_12_12 = mercury__string__f_43_43_2_f_0((MR_String) "** Error making \140", make__util__V_14_14);
    }
    make__util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 0)));
    make__util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 1)));
    make__util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 2)));
    make__util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 3)));
    make__util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 4)));
    make__util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 5)));
    make__util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 6)));
    make__util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 7)));
    make__util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 8)));
    make__util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 9)));
    make__util__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 10)));
    make__util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 11)));
    make__util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 12)));
    make__util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 13)));
    make__util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 14)));
    make__util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 15)));
    make__util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 16)));
    make__util__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 17)));
    make__util__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 18)));
    make__util__MaybeLock_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 19)));
    if ((make__util__MaybeLock_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        mercury__io__write_string_3_p_0(make__util__V_12_12);
      }
    else
      {
        MR_Box make__util__Lock_24 = ((MR_Box) (MR_hl_field(MR_mktag(1), make__util__MaybeLock_23, (MR_Integer) 0)));

        {
          make__util__lock_stdout_3_p_0(make__util__Lock_24);
        }
        {
          mercury__io__write_string_3_p_0(make__util__V_12_12);
        }
        {
          make__util__unlock_stdout_3_p_0(make__util__Lock_24);
        }
      }
  }
}

void MR_CALL 
make__util__target_file_error_5_p_0(
  MR_Word make__util__Info_6,
  MR_Word make__util__Globals_7,
  MR_Word make__util__TargetFile_8)
{
  {
    MR_bool make__util__succeeded;
    MR_Word make__util__MaybeLock_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_6, (MR_Integer) 19)));
    MR_Word make__util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_6, (MR_Integer) 0)));
    MR_Word make__util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_6, (MR_Integer) 1)));
    MR_Word make__util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_6, (MR_Integer) 2)));
    MR_Word make__util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_6, (MR_Integer) 3)));
    MR_Word make__util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_6, (MR_Integer) 4)));
    MR_Word make__util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_6, (MR_Integer) 5)));
    MR_Word make__util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_6, (MR_Integer) 6)));
    MR_Word make__util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_6, (MR_Integer) 7)));
    MR_Word make__util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_6, (MR_Integer) 8)));
    MR_Word make__util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_6, (MR_Integer) 9)));
    MR_Word make__util__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_6, (MR_Integer) 10)));
    MR_Word make__util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_6, (MR_Integer) 11)));
    MR_Word make__util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_6, (MR_Integer) 12)));
    MR_Word make__util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_6, (MR_Integer) 13)));
    MR_Word make__util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_6, (MR_Integer) 14)));
    MR_Word make__util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_6, (MR_Integer) 15)));
    MR_Word make__util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_6, (MR_Integer) 16)));
    MR_Word make__util__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_6, (MR_Integer) 17)));
    MR_Integer make__util__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__util__Info_6, (MR_Integer) 18)));

    if ((make__util__MaybeLock_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        make__util__make_write_target_file_wrapped_6_p_0(make__util__Globals_7, (MR_String) "** Error making \140", make__util__TargetFile_8, (MR_String) "\'.\n");
      }
    else
      {
        MR_Box make__util__Lock_24 = ((MR_Box) (MR_hl_field(MR_mktag(1), make__util__MaybeLock_23, (MR_Integer) 0)));

        {
          make__util__lock_stdout_3_p_0(make__util__Lock_24);
        }
        {
          make__util__make_write_target_file_wrapped_6_p_0(make__util__Globals_7, (MR_String) "** Error making \140", make__util__TargetFile_8, (MR_String) "\'.\n");
        }
        {
          make__util__unlock_stdout_3_p_0(make__util__Lock_24);
        }
      }
  }
}

void MR_CALL 
make__util__maybe_reanalyse_modules_message_3_p_0(
  MR_Word make__util__Globals_4)
{
  {
    MR_bool make__util__succeeded;
    MR_Word make__util__OptionValue_35;

    {
      libs__globals__lookup_bool_option_3_p_0(make__util__Globals_4, (MR_Integer) 52, &make__util__OptionValue_35);
    }
    switch (make__util__OptionValue_35) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word make__util__OutputStream_43;

          {
            mercury__io__output_stream_3_p_0(&make__util__OutputStream_43);
          }
          {
            mercury__io__write_string_4_p_0(make__util__OutputStream_43, (MR_String) "Reanalysing invalid/suboptimal modules\n");
          }
          {
            mercury__io__flush_output_2_p_0();
          }
        }
        break;
    }
  }
}

void MR_CALL 
make__util__maybe_make_target_message_to_stream_5_p_0(
  MR_Word make__util__Globals_6,
  MR_Word make__util__OutputStream_7,
  MR_Word make__util__TargetFile_8)
{
  {
    MR_bool make__util__succeeded;
    MR_Word make__util__OptionValue_40;

    {
      libs__globals__lookup_bool_option_3_p_0(make__util__Globals_6, (MR_Integer) 52, &make__util__OptionValue_40);
    }
    switch (make__util__OptionValue_40) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word make__util__OldOutputStream_49;
          MR_Word make__util__V_50_50;

          {
            mercury__io__set_output_stream_4_p_0(make__util__OutputStream_7, &make__util__OldOutputStream_49);
          }
          {
            make__util__make_write_target_file_wrapped_6_p_0(make__util__Globals_6, (MR_String) "Making ", make__util__TargetFile_8, (MR_String) "\n");
          }
          {
            mercury__io__set_output_stream_4_p_0(make__util__OldOutputStream_49, &make__util__V_50_50);
          }
          {
            mercury__io__flush_output_2_p_0();
          }
        }
        break;
    }
  }
}

void MR_CALL 
make__util__maybe_make_target_message_4_p_0(
  MR_Word make__util__Globals_5,
  MR_Word make__util__TargetFile_6)
{
  {
    MR_bool make__util__succeeded;
    MR_Word make__util__OutputStream_8;

    {
      mercury__io__output_stream_3_p_0(&make__util__OutputStream_8);
    }
    {
      make__util__maybe_make_target_message_to_stream_5_p_0(make__util__Globals_5, make__util__OutputStream_8, make__util__TargetFile_6);
    }
  }
}

void MR_CALL 
make__util__maybe_make_linked_target_message_4_p_0(
  MR_Word make__util__Globals_5,
  MR_String make__util__TargetFile_6)
{
  {
    MR_bool make__util__succeeded;
    MR_Word make__util__OptionValue_36;

    {
      libs__globals__lookup_bool_option_3_p_0(make__util__Globals_5, (MR_Integer) 52, &make__util__OptionValue_36);
    }
    switch (make__util__OptionValue_36) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String make__util__V_51_51;
          MR_String make__util__V_54_54;

          {
            make__util__V_54_54 = mercury__string__f_43_43_2_f_0(make__util__TargetFile_6, (MR_String) "\n");
          }
          {
            make__util__V_51_51 = mercury__string__f_43_43_2_f_0((MR_String) "Making ", make__util__V_54_54);
          }
          {
            mercury__io__write_string_3_p_0(make__util__V_51_51);
          }
          {
            mercury__io__flush_output_2_p_0();
          }
        }
        break;
    }
  }
}

void MR_CALL 
make__util__make_write_target_file_wrapped_6_p_0(
  MR_Word make__util__Globals_7,
  MR_String make__util__Prefix_8,
  MR_Word make__util__TargetFile_9,
  MR_String make__util__Suffix_10)
{
  {
    MR_bool make__util__succeeded;
    MR_Word make__util__ModuleName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__TargetFile_9, (MR_Integer) 0)));
    MR_Word make__util__FileType_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__TargetFile_9, (MR_Integer) 1)));
    MR_String make__util__FileName_14;

    {
      make__util__module_target_to_file_name_maybe_search_8_p_0(make__util__Globals_7, make__util__ModuleName_12, make__util__FileType_13, (MR_Integer) 1, (MR_Integer) 1, &make__util__FileName_14);
    }
    make__util__succeeded = (strcmp(make__util__Prefix_8, (MR_String) "") == 0);
    if (make__util__succeeded)
      make__util__succeeded = (strcmp(make__util__Suffix_10, (MR_String) "") == 0);
    if (make__util__succeeded)
      {
        mercury__io__write_string_3_p_0(make__util__FileName_14);
      }
    else
      {
        MR_String make__util__V_20_20;
        MR_String make__util__V_22_22;

        {
          make__util__V_22_22 = mercury__string__f_43_43_2_f_0(make__util__FileName_14, make__util__Suffix_10);
        }
        {
          make__util__V_20_20 = mercury__string__f_43_43_2_f_0(make__util__Prefix_8, make__util__V_22_22);
        }
        {
          mercury__io__write_string_3_p_0(make__util__V_20_20);
        }
      }
  }
}

void MR_CALL 
make__util__make_write_target_file_4_p_0(
  MR_Word make__util__Globals_5,
  MR_Word make__util__TargetFile_6)
{
  {
    MR_bool make__util__succeeded;

    {
      make__util__make_write_target_file_wrapped_6_p_0(make__util__Globals_5, (MR_String) "", make__util__TargetFile_6, (MR_String) "");
    }
  }
}

void MR_CALL 
make__util__make_write_dependency_file_list_4_p_0(
  MR_Word make__util__Globals_1,
  MR_Word make__util__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool make__util__succeeded;

        if ((make__util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word make__util__DepFile_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__util__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word make__util__DepFiles_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__util__HeadVar__2_2, (MR_Integer) 1)));

            {
              mercury__io__write_string_3_p_0((MR_String) "\t");
            }
            if (((MR_tag((MR_Word) make__util__DepFile_10)) == (MR_mktag((MR_Integer) 1))))
              {
                MR_String make__util__FileName_27 = ((MR_String) (MR_hl_field(MR_mktag(1), make__util__DepFile_10, (MR_Integer) 0)));
                MR_Word make__util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__util__DepFile_10, (MR_Integer) 1)));

                {
                  mercury__io__write_string_3_p_0(make__util__FileName_27);
                }
              }
            else
              {
                MR_Word make__util__TargetFile_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__DepFile_10, (MR_Integer) 0)));

                {
                  make__util__make_write_target_file_wrapped_6_p_0(make__util__Globals_1, (MR_String) "", make__util__TargetFile_21, (MR_String) "");
                }
              }
            {
              mercury__io__nl_2_p_0();
            }
            /* direct tailcall eliminated */
            {
              MR_Word make__util__HeadVar__2__tmp_copy_2 = make__util__DepFiles_11;

              make__util__HeadVar__2_2 = make__util__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
make__util__make_write_dependency_file_4_p_0(
  MR_Word make__util__HeadVar__1_1,
  MR_Word make__util__HeadVar__2_2)
{
  {
    MR_bool make__util__succeeded;

    if (((MR_tag((MR_Word) make__util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String make__util__FileName_12 = ((MR_String) (MR_hl_field(MR_mktag(1), make__util__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word make__util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__util__HeadVar__2_2, (MR_Integer) 1)));

        {
          mercury__io__write_string_3_p_0(make__util__FileName_12);
        }
      }
    else
      {
        MR_Word make__util__TargetFile_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__HeadVar__2_2, (MR_Integer) 0)));

        {
          make__util__make_write_target_file_wrapped_6_p_0(make__util__HeadVar__1_1, (MR_String) "", make__util__TargetFile_6, (MR_String) "");
        }
      }
  }
}

void MR_CALL 
make__util__debug_file_msg_5_p_0(
  MR_Word make__util__Globals_6,
  MR_Word make__util__TargetFile_7,
  MR_String make__util__Msg_8)
{
  {
    MR_bool make__util__succeeded;
    MR_Word make__util__OptionValue_38;

    {
      libs__globals__lookup_bool_option_3_p_0(make__util__Globals_6, (MR_Integer) 77, &make__util__OptionValue_38);
    }
    switch (make__util__OptionValue_38) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          {
            make__util__make_write_target_file_wrapped_6_p_0(make__util__Globals_6, (MR_String) "", make__util__TargetFile_7, (MR_String) "");
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ": ");
          }
          {
            mercury__io__write_string_3_p_0(make__util__Msg_8);
          }
          {
            mercury__io__nl_2_p_0();
          }
          {
            mercury__io__flush_output_2_p_0();
          }
        }
        break;
    }
  }
}

void MR_CALL 
make__util__verbose_make_msg_option_5_p_0(
  MR_Word make__util__Globals_6,
  MR_Word make__util__Option_7,
  MR_Word make__util__P_8)
{
  {
    MR_bool make__util__succeeded;
    MR_Word make__util__OptionValue_10;

    {
      libs__globals__lookup_bool_option_3_p_0(make__util__Globals_6, make__util__Option_7, &make__util__OptionValue_10);
    }
    switch (make__util__OptionValue_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          void MR_CALL (* make__util__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), make__util__P_8, (MR_Integer) 1)));
          MR_Box make__util__conv1_STATE_VARIABLE_IO_13_13;

          {
            make__util__func_0(((MR_Box) make__util__P_8), ((MR_Box) ((MR_Integer) 0)), &make__util__conv1_STATE_VARIABLE_IO_13_13);
          }
          {
            mercury__io__flush_output_2_p_0();
          }
        }
        break;
    }
  }
}

void MR_CALL 
make__util__verbose_make_msg_4_p_0(
  MR_Word make__util__Globals_5,
  MR_Word make__util__P_6)
{
  {
    MR_bool make__util__succeeded;
    MR_Word make__util__OptionValue_18;

    {
      libs__globals__lookup_bool_option_3_p_0(make__util__Globals_5, (MR_Integer) 52, &make__util__OptionValue_18);
    }
    switch (make__util__OptionValue_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          void MR_CALL (* make__util__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), make__util__P_6, (MR_Integer) 1)));
          MR_Box make__util__conv1_STATE_VARIABLE_IO_13_19;

          {
            make__util__func_0(((MR_Box) make__util__P_6), ((MR_Box) ((MR_Integer) 0)), &make__util__conv1_STATE_VARIABLE_IO_13_19);
          }
          {
            mercury__io__flush_output_2_p_0();
          }
        }
        break;
    }
  }
}

void MR_CALL 
make__util__debug_make_msg_4_p_0(
  MR_Word make__util__Globals_5,
  MR_Word make__util__P_6)
{
  {
    MR_bool make__util__succeeded;
    MR_Word make__util__OptionValue_18;

    {
      libs__globals__lookup_bool_option_3_p_0(make__util__Globals_5, (MR_Integer) 77, &make__util__OptionValue_18);
    }
    switch (make__util__OptionValue_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          void MR_CALL (* make__util__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), make__util__P_6, (MR_Integer) 1)));
          MR_Box make__util__conv1_STATE_VARIABLE_IO_13_19;

          {
            make__util__func_0(((MR_Box) make__util__P_6), ((MR_Box) ((MR_Integer) 0)), &make__util__conv1_STATE_VARIABLE_IO_13_19);
          }
          {
            mercury__io__flush_output_2_p_0();
          }
        }
        break;
    }
  }
}

MR_bool MR_CALL 
make__util__target_is_grade_or_arch_dependent_1_p_0(
  MR_Word make__util__Target_2)
{
  {
    MR_bool make__util__succeeded;

    switch (MR_tag((MR_Word) make__util__Target_2)) {
      default:
        make__util__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        switch (MR_unmkbody(make__util__Target_2)) {
          default:
            make__util__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 6:
            make__util__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 7:
            make__util__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 8:
            make__util__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 9:
            make__util__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 10:
            make__util__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 11:
            make__util__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 12:
            make__util__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 13:
            make__util__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 14:
            make__util__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 15:
            make__util__succeeded = MR_TRUE;
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word make__util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__util__Target_2, (MR_Integer) 0)));

          make__util__succeeded = (make__util__V_13_13 == (MR_Integer) 1);
        }
        break;
      case (MR_Integer) 2:
        make__util__succeeded = MR_TRUE;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__util__Target_2, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            make__util__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 1:
            make__util__succeeded = MR_TRUE;
            break;
        }
        break;
    }
    return make__util__succeeded;
  }
}

MR_bool MR_CALL 
make__util__timestamp_extension_2_p_0(
  MR_Word make__util__ModuleTargetType_3,
  MR_String * make__util__Extension_4)
{
  {
    MR_bool make__util__succeeded;

    switch (MR_tag((MR_Word) make__util__ModuleTargetType_3)) {
      default:
        make__util__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        switch (MR_unmkbody(make__util__ModuleTargetType_3)) {
          default:
            make__util__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            {
              *make__util__Extension_4 = (MR_String) ".err_date";
              make__util__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 2:
            {
              *make__util__Extension_4 = (MR_String) ".date0";
              make__util__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 3:
            {
              *make__util__Extension_4 = (MR_String) ".date";
              make__util__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 4:
            {
              *make__util__Extension_4 = (MR_String) ".date";
              make__util__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 5:
            {
              *make__util__Extension_4 = (MR_String) ".date3";
              make__util__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 6:
            {
              *make__util__Extension_4 = (MR_String) ".optdate";
              make__util__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 7:
            {
              *make__util__Extension_4 = (MR_String) ".analysis_date";
              make__util__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 9:
            {
              *make__util__Extension_4 = (MR_String) ".c_date";
              make__util__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 10:
            {
              *make__util__Extension_4 = (MR_String) ".cs_date";
              make__util__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 11:
            {
              *make__util__Extension_4 = (MR_String) ".java_date";
              make__util__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 13:
          case (MR_Integer) 14:
            {
              *make__util__Extension_4 = (MR_String) ".erl_date";
              make__util__succeeded = MR_TRUE;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          *make__util__Extension_4 = (MR_String) ".c_date";
          make__util__succeeded = MR_TRUE;
        }
        break;
    }
    return make__util__succeeded;
  }
}

void MR_CALL 
make__util__linked_target_file_name_6_p_0(
  MR_Word make__util__Globals_7,
  MR_Word make__util__ModuleName_8,
  MR_Word make__util__TargetType_9,
  MR_String * make__util__FileName_10)
{
  {
    MR_bool make__util__succeeded;

    switch (make__util__TargetType_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
        {
          {
            parse_tree__file_names__module_name_to_file_name_7_p_0(make__util__Globals_7, make__util__ModuleName_8, (MR_String) ".exe", (MR_Integer) 1, make__util__FileName_10);
          }
        }
        break;
      case (MR_Integer) 4:
        {
          {
            parse_tree__file_names__module_name_to_file_name_7_p_0(make__util__Globals_7, make__util__ModuleName_8, (MR_String) ".dll", (MR_Integer) 1, make__util__FileName_10);
          }
        }
        break;
      case (MR_Integer) 8:
        {
          {
            parse_tree__file_names__module_name_to_lib_file_name_8_p_0(make__util__Globals_7, (MR_String) "lib", make__util__ModuleName_8, (MR_String) ".beams", (MR_Integer) 1, make__util__FileName_10);
          }
        }
        break;
      case (MR_Integer) 7:
        {
          {
            parse_tree__file_names__module_name_to_file_name_7_p_0(make__util__Globals_7, make__util__ModuleName_8, (MR_String) "", (MR_Integer) 1, make__util__FileName_10);
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_String make__util__Ext_12;

          {
            libs__globals__lookup_string_option_3_p_0(make__util__Globals_7, (MR_Integer) 564, &make__util__Ext_12);
          }
          {
            parse_tree__file_names__module_name_to_file_name_7_p_0(make__util__Globals_7, make__util__ModuleName_8, make__util__Ext_12, (MR_Integer) 1, make__util__FileName_10);
          }
        }
        break;
      case (MR_Integer) 6:
      case (MR_Integer) 5:
        {
          {
            parse_tree__file_names__module_name_to_file_name_7_p_0(make__util__Globals_7, make__util__ModuleName_8, (MR_String) ".jar", (MR_Integer) 1, make__util__FileName_10);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String make__util__Ext_43;

          {
            libs__globals__lookup_string_option_3_p_0(make__util__Globals_7, (MR_Integer) 562, &make__util__Ext_43);
          }
          {
            parse_tree__file_names__module_name_to_lib_file_name_8_p_0(make__util__Globals_7, (MR_String) "lib", make__util__ModuleName_8, make__util__Ext_43, (MR_Integer) 1, make__util__FileName_10);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String make__util__Ext_42;

          {
            libs__globals__lookup_string_option_3_p_0(make__util__Globals_7, (MR_Integer) 563, &make__util__Ext_42);
          }
          {
            parse_tree__file_names__module_name_to_lib_file_name_8_p_0(make__util__Globals_7, (MR_String) "lib", make__util__ModuleName_8, make__util__Ext_42, (MR_Integer) 1, make__util__FileName_10);
          }
        }
        break;
    }
  }
}

MR_bool MR_CALL 
make__util__target_extension_synonym_2_p_0(
  MR_String make__util__HeadVar__1_1,
  MR_Word * make__util__HeadVar__2_2)
{
  {
    MR_bool make__util__succeeded = (strcmp(make__util__HeadVar__1_1, (MR_String) ".csharp") == 0);

    if (make__util__succeeded)
      {
        *make__util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10));
        make__util__succeeded = MR_TRUE;
      }
    return make__util__succeeded;
  }
}

void MR_CALL 
make__util__target_extension_2_f_1(
  MR_Word make__util__Globals_1,
  MR_Word * make__util__HeadVar__2_2,
  MR_Word make__util__HeadVar__3_3,
  MR_Cont make__util__cont,
  void * make__util__cont_env_ptr)
{
  {
    MR_bool make__util__succeeded;

    {
      MR_String make__util__V_5_5;

      *make__util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      make__util__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), make__util__HeadVar__3_3, (MR_Integer) 0)));
      make__util__succeeded = (strcmp(make__util__V_5_5, (MR_String) ".m") == 0);
      if (make__util__succeeded)
        {
          make__util__cont(make__util__cont_env_ptr);
        }
    }
    {
      MR_String make__util__V_7_7;

      *make__util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
      make__util__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(1), make__util__HeadVar__3_3, (MR_Integer) 0)));
      make__util__succeeded = (strcmp(make__util__V_7_7, (MR_String) ".err") == 0);
      if (make__util__succeeded)
        {
          make__util__cont(make__util__cont_env_ptr);
        }
    }
    {
      MR_String make__util__V_9_9;

      *make__util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
      make__util__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(1), make__util__HeadVar__3_3, (MR_Integer) 0)));
      make__util__succeeded = (strcmp(make__util__V_9_9, (MR_String) ".int0") == 0);
      if (make__util__succeeded)
        {
          make__util__cont(make__util__cont_env_ptr);
        }
    }
    {
      MR_String make__util__V_11_11;

      *make__util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
      make__util__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(1), make__util__HeadVar__3_3, (MR_Integer) 0)));
      make__util__succeeded = (strcmp(make__util__V_11_11, (MR_String) ".int") == 0);
      if (make__util__succeeded)
        {
          make__util__cont(make__util__cont_env_ptr);
        }
    }
    {
      MR_String make__util__V_13_13;

      *make__util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4));
      make__util__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(1), make__util__HeadVar__3_3, (MR_Integer) 0)));
      make__util__succeeded = (strcmp(make__util__V_13_13, (MR_String) ".int2") == 0);
      if (make__util__succeeded)
        {
          make__util__cont(make__util__cont_env_ptr);
        }
    }
    {
      MR_String make__util__V_15_15;

      *make__util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
      make__util__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(1), make__util__HeadVar__3_3, (MR_Integer) 0)));
      make__util__succeeded = (strcmp(make__util__V_15_15, (MR_String) ".int3") == 0);
      if (make__util__succeeded)
        {
          make__util__cont(make__util__cont_env_ptr);
        }
    }
    {
      MR_String make__util__V_17_17;

      *make__util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
      make__util__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(1), make__util__HeadVar__3_3, (MR_Integer) 0)));
      make__util__succeeded = (strcmp(make__util__V_17_17, (MR_String) ".opt") == 0);
      if (make__util__succeeded)
        {
          make__util__cont(make__util__cont_env_ptr);
        }
    }
    {
      MR_String make__util__V_19_19;

      *make__util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
      make__util__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(1), make__util__HeadVar__3_3, (MR_Integer) 0)));
      make__util__succeeded = (strcmp(make__util__V_19_19, (MR_String) ".analysis") == 0);
      if (make__util__succeeded)
        {
          make__util__cont(make__util__cont_env_ptr);
        }
    }
    {
      MR_String make__util__V_21_21;

      *make__util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
      make__util__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(1), make__util__HeadVar__3_3, (MR_Integer) 0)));
      make__util__succeeded = (strcmp(make__util__V_21_21, (MR_String) ".track_flags") == 0);
      if (make__util__succeeded)
        {
          make__util__cont(make__util__cont_env_ptr);
        }
    }
    {
      MR_String make__util__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(1), make__util__HeadVar__3_3, (MR_Integer) 0)));

      make__util__succeeded = (strcmp(make__util__V_24_24, (MR_String) ".mih") == 0);
      if (make__util__succeeded)
        {
          *make__util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_3[20]);
          make__util__succeeded = MR_TRUE;
        }
      if (make__util__succeeded)
        {
          make__util__cont(make__util__cont_env_ptr);
        }
    }
    {
      MR_String make__util__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(1), make__util__HeadVar__3_3, (MR_Integer) 0)));

      make__util__succeeded = (strcmp(make__util__V_27_27, (MR_String) ".mh") == 0);
      if (make__util__succeeded)
        {
          *make__util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_3[21]);
          make__util__succeeded = MR_TRUE;
        }
      if (make__util__succeeded)
        {
          make__util__cont(make__util__cont_env_ptr);
        }
    }
    {
      MR_String make__util__V_29_29;

      *make__util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
      make__util__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(1), make__util__HeadVar__3_3, (MR_Integer) 0)));
      make__util__succeeded = (strcmp(make__util__V_29_29, (MR_String) ".c") == 0);
      if (make__util__succeeded)
        {
          make__util__cont(make__util__cont_env_ptr);
        }
    }
    {
      MR_String make__util__V_31_31;

      *make__util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10));
      make__util__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(1), make__util__HeadVar__3_3, (MR_Integer) 0)));
      make__util__succeeded = (strcmp(make__util__V_31_31, (MR_String) ".cs") == 0);
      if (make__util__succeeded)
        {
          make__util__cont(make__util__cont_env_ptr);
        }
    }
    {
      MR_String make__util__V_33_33;

      *make__util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
      make__util__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(1), make__util__HeadVar__3_3, (MR_Integer) 0)));
      make__util__succeeded = (strcmp(make__util__V_33_33, (MR_String) ".java") == 0);
      if (make__util__succeeded)
        {
          make__util__cont(make__util__cont_env_ptr);
        }
    }
    {
      MR_String make__util__V_35_35;

      *make__util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12));
      make__util__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(1), make__util__HeadVar__3_3, (MR_Integer) 0)));
      make__util__succeeded = (strcmp(make__util__V_35_35, (MR_String) ".class") == 0);
      if (make__util__succeeded)
        {
          make__util__cont(make__util__cont_env_ptr);
        }
    }
    {
      MR_String make__util__V_37_37;

      *make__util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13));
      make__util__V_37_37 = ((MR_String) (MR_hl_field(MR_mktag(1), make__util__HeadVar__3_3, (MR_Integer) 0)));
      make__util__succeeded = (strcmp(make__util__V_37_37, (MR_String) ".hrl") == 0);
      if (make__util__succeeded)
        {
          make__util__cont(make__util__cont_env_ptr);
        }
    }
    {
      MR_String make__util__V_39_39;

      *make__util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14));
      make__util__V_39_39 = ((MR_String) (MR_hl_field(MR_mktag(1), make__util__HeadVar__3_3, (MR_Integer) 0)));
      make__util__succeeded = (strcmp(make__util__V_39_39, (MR_String) ".erl") == 0);
      if (make__util__succeeded)
        {
          make__util__cont(make__util__cont_env_ptr);
        }
    }
    {
      MR_String make__util__V_41_41;

      *make__util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 15));
      make__util__V_41_41 = ((MR_String) (MR_hl_field(MR_mktag(1), make__util__HeadVar__3_3, (MR_Integer) 0)));
      make__util__succeeded = (strcmp(make__util__V_41_41, (MR_String) ".beam") == 0);
      if (make__util__succeeded)
        {
          make__util__cont(make__util__cont_env_ptr);
        }
    }
    {
      MR_Word make__util__PIC_43;
      MR_String make__util__Ext_44 = ((MR_String) (MR_hl_field(MR_mktag(1), make__util__HeadVar__3_3, (MR_Integer) 0)));

      {
        make__util__succeeded = backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_1(make__util__Globals_1, &make__util__PIC_43, make__util__Ext_44);
      }
      if (make__util__succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *make__util__HeadVar__2_2 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (make__util__PIC_43));
          }
          make__util__succeeded = MR_TRUE;
        }
      if (make__util__succeeded)
        {
          make__util__cont(make__util__cont_env_ptr);
        }
    }
    {
      MR_String make__util__V_46_46;

      *make__util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16));
      make__util__V_46_46 = ((MR_String) (MR_hl_field(MR_mktag(1), make__util__HeadVar__3_3, (MR_Integer) 0)));
      make__util__succeeded = (strcmp(make__util__V_46_46, (MR_String) ".xml") == 0);
      if (make__util__succeeded)
        {
          make__util__cont(make__util__cont_env_ptr);
        }
    }
  }
}

MR_Word MR_CALL 
make__util__target_extension_2_f_0(
  MR_Word make__util__Globals_1,
  MR_Word make__util__HeadVar__2_2)
{
  {
    MR_bool make__util__succeeded;
    MR_Word make__util__HeadVar__3_3;

    switch (MR_tag((MR_Word) make__util__HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(make__util__HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              make__util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_3[16]);
            }
            break;
          case (MR_Integer) 1:
            {
              make__util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_3[9]);
            }
            break;
          case (MR_Integer) 2:
            {
              make__util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_3[14]);
            }
            break;
          case (MR_Integer) 3:
            {
              make__util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_3[13]);
            }
            break;
          case (MR_Integer) 4:
            {
              make__util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_3[15]);
            }
            break;
          case (MR_Integer) 5:
            {
              make__util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_3[18]);
            }
            break;
          case (MR_Integer) 6:
            {
              make__util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_3[10]);
            }
            break;
          case (MR_Integer) 7:
            {
              make__util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_3[1]);
            }
            break;
          case (MR_Integer) 8:
            {
              make__util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_3[17]);
            }
            break;
          case (MR_Integer) 9:
            {
              make__util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_3[2]);
            }
            break;
          case (MR_Integer) 10:
            {
              make__util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_3[5]);
            }
            break;
          case (MR_Integer) 11:
            {
              make__util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_3[12]);
            }
            break;
          case (MR_Integer) 12:
            {
              make__util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_3[11]);
            }
            break;
          case (MR_Integer) 13:
            {
              make__util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_3[8]);
            }
            break;
          case (MR_Integer) 14:
            {
              make__util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_3[7]);
            }
            break;
          case (MR_Integer) 15:
            {
              make__util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_3[6]);
            }
            break;
          case (MR_Integer) 16:
            {
              make__util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_3[19]);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word make__util__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__util__HeadVar__2_2, (MR_Integer) 0)));

          switch (make__util__V_53_53) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                make__util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_3[3]);
              }
              break;
            case (MR_Integer) 1:
              {
                make__util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_3[4]);
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word make__util__PIC_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__util__HeadVar__2_2, (MR_Integer) 0)));
          MR_String make__util__Ext_44;

          {
            backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(make__util__Globals_1, make__util__PIC_43, &make__util__Ext_44);
          }
          {
            make__util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), make__util__HeadVar__3_3, 0) = ((MR_Box) (make__util__Ext_44));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__util__HeadVar__2_2, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            make__util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 1:
            make__util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
        }
        break;
    }
    return make__util__HeadVar__3_3;
  }
}

static MR_Box MR_CALL 
make__util__make_dependency_list_2_f_0_1(
  MR_Box make__util__closure_arg,
  MR_Box make__util__wrapper_arg_1)
{
  {
    MR_Box make__util__wrapper_arg_2;
    MR_Box make__util__closure = make__util__closure_arg;
    MR_Word make__util__conv0_LambdaHeadVar__2_9;

    {
      make__util__conv0_LambdaHeadVar__2_9 = make__util__IntroducedFrom__func__make_dependency_list__1460__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 3))), ((MR_Word) make__util__wrapper_arg_1));
    }
    make__util__wrapper_arg_2 = ((MR_Box) (make__util__conv0_LambdaHeadVar__2_9));
    return make__util__wrapper_arg_2;
  }
}

MR_Word MR_CALL 
make__util__make_dependency_list_2_f_0(
  MR_Word make__util__ModuleNames_4,
  MR_Word make__util__FileType_5)
{
  {
    MR_bool make__util__succeeded;
    MR_Word make__util__HeadVar__3_3;
    MR_Word make__util__V_7_7;

    {
      make__util__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), make__util__V_7_7, 0) = ((MR_Box) (&make__util_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), make__util__V_7_7, 1) = ((MR_Box) (make__util__make_dependency_list_2_f_0_1));
      MR_hl_field(MR_mktag(0), make__util__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), make__util__V_7_7, 3) = ((MR_Box) (make__util__FileType_5));
    }
    {
      make__util__HeadVar__3_3 = mercury__list__map_2_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0, make__util__V_7_7, make__util__ModuleNames_4);
    }
    return make__util__HeadVar__3_3;
  }
}

static MR_Box MR_CALL 
make__util__make_target_file_list_2_f_0_1(
  MR_Box make__util__closure_arg,
  MR_Box make__util__wrapper_arg_1)
{
  {
    MR_Box make__util__wrapper_arg_2;
    MR_Box make__util__closure = make__util__closure_arg;
    MR_Word make__util__conv0_LambdaHeadVar__2_9;

    {
      make__util__conv0_LambdaHeadVar__2_9 = make__util__IntroducedFrom__func__make_target_file_list__1456__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 3))), ((MR_Word) make__util__wrapper_arg_1));
    }
    make__util__wrapper_arg_2 = ((MR_Box) (make__util__conv0_LambdaHeadVar__2_9));
    return make__util__wrapper_arg_2;
  }
}

MR_Word MR_CALL 
make__util__make_target_file_list_2_f_0(
  MR_Word make__util__ModuleNames_4,
  MR_Word make__util__FileType_5)
{
  {
    MR_bool make__util__succeeded;
    MR_Word make__util__HeadVar__3_3;
    MR_Word make__util__V_7_7;

    {
      make__util__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), make__util__V_7_7, 0) = ((MR_Box) (&make__util_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), make__util__V_7_7, 1) = ((MR_Box) (make__util__make_target_file_list_2_f_0_1));
      MR_hl_field(MR_mktag(0), make__util__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), make__util__V_7_7, 3) = ((MR_Box) (make__util__FileType_5));
    }
    {
      make__util__HeadVar__3_3 = mercury__list__map_2_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &make__make__type_ctor_info_target_file_0, make__util__V_7_7, make__util__ModuleNames_4);
    }
    return make__util__HeadVar__3_3;
  }
}

void MR_CALL 
make__util__make_remove_file_7_p_0(
  MR_Word make__util__Globals_8,
  MR_Word make__util__VerboseOption_9,
  MR_String make__util__FileName_10,
  MR_Word make__util__STATE_VARIABLE_Info_0_16,
  MR_Word * make__util__STATE_VARIABLE_Info_17)
{
  {
    MR_bool make__util__succeeded;
    MR_Word make__util__FileTimestamps0_14;
    MR_Word make__util__FileTimestamps_15;
    MR_Word make__util__OptionValue_73;
    MR_Word make__util__V_13_13;
    MR_Word make__util__V_24_24;
    MR_Word make__util__V_25_25;
    MR_Word make__util__V_26_26;
    MR_Word make__util__V_27_27;
    MR_Word make__util__V_28_28;
    MR_Word make__util__V_29_29;
    MR_Word make__util__V_30_30;
    MR_Word make__util__V_31_31;
    MR_Word make__util__V_32_32;
    MR_Word make__util__V_33_33;
    MR_Word make__util__V_34_34;
    MR_Word make__util__V_35_35;
    MR_Word make__util__V_36_36;
    MR_Word make__util__V_37_37;
    MR_Word make__util__V_38_38;
    MR_Word make__util__V_39_39;
    MR_Word make__util__V_40_40;
    MR_Integer make__util__V_41_41;
    MR_Word make__util__V_42_42;
    MR_Word make__util__V_43_43;
    MR_Word make__util__V_45_45;
    MR_Word make__util__V_46_46;
    MR_Word make__util__V_47_47;
    MR_Word make__util__V_48_48;
    MR_Word make__util__V_49_49;
    MR_Word make__util__V_50_50;
    MR_Word make__util__V_51_51;
    MR_Word make__util__V_52_52;
    MR_Word make__util__V_53_53;
    MR_Word make__util__V_54_54;
    MR_Word make__util__V_55_55;
    MR_Word make__util__V_56_56;
    MR_Word make__util__V_57_57;
    MR_Word make__util__V_58_58;
    MR_Word make__util__V_59_59;
    MR_Word make__util__V_60_60;
    MR_Integer make__util__V_61_61;
    MR_Word make__util__V_62_62;
    MR_Word make__util__V_44_44;

    {
      libs__globals__lookup_bool_option_3_p_0(make__util__Globals_8, make__util__VerboseOption_9, &make__util__OptionValue_73);
    }
    switch (make__util__OptionValue_73) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "Removing ");
          }
          {
            mercury__io__write_string_3_p_0(make__util__FileName_10);
          }
          {
            mercury__io__nl_2_p_0();
          }
          {
            mercury__io__flush_output_2_p_0();
          }
        }
        break;
    }
    {
      mercury__io__remove_file_recursively_4_p_0(make__util__FileName_10, &make__util__V_13_13);
    }
    make__util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_16, (MR_Integer) 0)));
    make__util__FileTimestamps0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_16, (MR_Integer) 1)));
    make__util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_16, (MR_Integer) 2)));
    make__util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)));
    make__util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_16, (MR_Integer) 4)));
    make__util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_16, (MR_Integer) 5)));
    make__util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_16, (MR_Integer) 6)));
    make__util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_16, (MR_Integer) 7)));
    make__util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_16, (MR_Integer) 8)));
    make__util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_16, (MR_Integer) 9)));
    make__util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_16, (MR_Integer) 10)));
    make__util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_16, (MR_Integer) 11)));
    make__util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_16, (MR_Integer) 12)));
    make__util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_16, (MR_Integer) 13)));
    make__util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_16, (MR_Integer) 14)));
    make__util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_16, (MR_Integer) 15)));
    make__util__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_16, (MR_Integer) 16)));
    make__util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_16, (MR_Integer) 17)));
    make__util__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_16, (MR_Integer) 18)));
    make__util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_16, (MR_Integer) 19)));
    {
      mercury__map__delete_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &make__util_scalar_common_1[0], ((MR_Box) (make__util__FileName_10)), make__util__FileTimestamps0_14, &make__util__FileTimestamps_15);
    }
    make__util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_16, (MR_Integer) 0)));
    make__util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_16, (MR_Integer) 1)));
    make__util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_16, (MR_Integer) 2)));
    make__util__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)));
    make__util__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_16, (MR_Integer) 4)));
    make__util__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_16, (MR_Integer) 5)));
    make__util__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_16, (MR_Integer) 6)));
    make__util__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_16, (MR_Integer) 7)));
    make__util__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_16, (MR_Integer) 8)));
    make__util__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_16, (MR_Integer) 9)));
    make__util__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_16, (MR_Integer) 10)));
    make__util__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_16, (MR_Integer) 11)));
    make__util__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_16, (MR_Integer) 12)));
    make__util__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_16, (MR_Integer) 13)));
    make__util__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_16, (MR_Integer) 14)));
    make__util__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_16, (MR_Integer) 15)));
    make__util__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_16, (MR_Integer) 16)));
    make__util__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_16, (MR_Integer) 17)));
    make__util__V_61_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_16, (MR_Integer) 18)));
    make__util__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_16, (MR_Integer) 19)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
      *make__util__STATE_VARIABLE_Info_17 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__util__V_43_43));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__util__FileTimestamps_15));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__util__V_45_45));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (make__util__V_46_46));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (make__util__V_47_47));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (make__util__V_48_48));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (make__util__V_49_49));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (make__util__V_50_50));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (make__util__V_51_51));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (make__util__V_52_52));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (make__util__V_53_53));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (make__util__V_54_54));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (make__util__V_55_55));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (make__util__V_56_56));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (make__util__V_57_57));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (make__util__V_58_58));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (make__util__V_59_59));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (make__util__V_60_60));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (make__util__V_61_61));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (make__util__V_62_62));
    }
  }
}

void MR_CALL 
make__util__make_remove_module_file_8_p_0(
  MR_Word make__util__Globals_9,
  MR_Word make__util__VerboseOption_10,
  MR_Word make__util__ModuleName_11,
  MR_String make__util__Ext_12,
  MR_Word make__util__STATE_VARIABLE_Info_0_16,
  MR_Word * make__util__STATE_VARIABLE_Info_17)
{
  {
    MR_bool make__util__succeeded;
    MR_String make__util__FileName_15;

    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(make__util__Globals_9, make__util__ModuleName_11, make__util__Ext_12, (MR_Integer) 1, &make__util__FileName_15);
    }
    {
      make__util__make_remove_file_7_p_0(make__util__Globals_9, make__util__VerboseOption_10, make__util__FileName_15, make__util__STATE_VARIABLE_Info_0_16, make__util__STATE_VARIABLE_Info_17);
    }
  }
}

void MR_CALL 
make__util__make_remove_target_file_by_name_8_p_0(
  MR_Word make__util__Globals_9,
  MR_Word make__util__VerboseOption_10,
  MR_Word make__util__ModuleName_11,
  MR_Word make__util__FileType_12,
  MR_Word make__util__STATE_VARIABLE_Info_0_17,
  MR_Word * make__util__STATE_VARIABLE_Info_18)
{
  {
    MR_bool make__util__succeeded;
    MR_String make__util__FileName_15;
    MR_Word make__util__STATE_VARIABLE_Info_23_23;
    MR_String make__util__TimestampExt_16;

    {
      make__util__module_target_to_file_name_maybe_search_8_p_0(make__util__Globals_9, make__util__ModuleName_11, make__util__FileType_12, (MR_Integer) 1, (MR_Integer) 1, &make__util__FileName_15);
    }
    {
      make__util__make_remove_file_7_p_0(make__util__Globals_9, make__util__VerboseOption_10, make__util__FileName_15, make__util__STATE_VARIABLE_Info_0_17, &make__util__STATE_VARIABLE_Info_23_23);
    }
    {
      make__util__succeeded = make__util__timestamp_extension_2_p_0(make__util__FileType_12, &make__util__TimestampExt_16);
    }
    if (make__util__succeeded)
      {
        MR_String make__util__FileName_47;

        {
          parse_tree__file_names__module_name_to_file_name_7_p_0(make__util__Globals_9, make__util__ModuleName_11, make__util__TimestampExt_16, (MR_Integer) 1, &make__util__FileName_47);
        }
        {
          make__util__make_remove_file_7_p_0(make__util__Globals_9, make__util__VerboseOption_10, make__util__FileName_47, make__util__STATE_VARIABLE_Info_23_23, make__util__STATE_VARIABLE_Info_18);
        }
      }
    else
      *make__util__STATE_VARIABLE_Info_18 = make__util__STATE_VARIABLE_Info_23_23;
  }
}

void MR_CALL 
make__util__make_remove_target_file_7_p_0(
  MR_Word make__util__Globals_8,
  MR_Word make__util__VerboseOption_9,
  MR_Word make__util__Target_10,
  MR_Word make__util__STATE_VARIABLE_Info_0_15,
  MR_Word * make__util__STATE_VARIABLE_Info_16)
{
  {
    MR_bool make__util__succeeded;
    MR_Word make__util__ModuleName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Target_10, (MR_Integer) 0)));
    MR_Word make__util__FileType_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Target_10, (MR_Integer) 1)));

    {
      make__util__make_remove_target_file_by_name_8_p_0(make__util__Globals_8, make__util__VerboseOption_9, make__util__ModuleName_13, make__util__FileType_14, make__util__STATE_VARIABLE_Info_0_15, make__util__STATE_VARIABLE_Info_16);
    }
  }
}

MR_Word MR_CALL 
make__util__find_oldest_timestamp_2_f_0(
  MR_Word make__util__HeadVar__1_1,
  MR_Word make__util__HeadVar__2_2)
{
  {
    MR_bool make__util__succeeded;
    MR_Word make__util__HeadVar__3_3;

    if (((MR_tag((MR_Word) make__util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
      make__util__HeadVar__3_3 = make__util__HeadVar__1_1;
    else
      {
        MR_Word make__util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__HeadVar__1_1, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) make__util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
          make__util__HeadVar__3_3 = make__util__HeadVar__2_2;
        else
          {
            MR_Word make__util__Timestamp2_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word make__util__Timestamp_12;
            MR_Word make__util__V_15_15;

            {
              libs__timestamp____Compare____timestamp_0_0(&make__util__V_15_15, make__util__V_16_16, make__util__Timestamp2_11);
            }
            make__util__succeeded = ((MR_Integer) 1 == make__util__V_15_15);
            if (make__util__succeeded)
              make__util__Timestamp_12 = make__util__V_16_16;
            else
              make__util__Timestamp_12 = make__util__Timestamp2_11;
            {
              make__util__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), make__util__HeadVar__3_3, 0) = ((MR_Box) (make__util__Timestamp_12));
            }
          }
      }
    return make__util__HeadVar__3_3;
  }
}

void MR_CALL 
make__util__get_file_timestamp_7_p_0(
  MR_Word make__util__SearchDirs_8,
  MR_String make__util__FileName_9,
  MR_Word * make__util__MaybeTimestamp_10,
  MR_Word make__util__STATE_VARIABLE_Info_0_18,
  MR_Word * make__util__STATE_VARIABLE_Info_19)
{
  {
    MR_bool make__util__succeeded;
    MR_Word make__util__MaybeTimestamp0_13;
    MR_Word make__util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 1)));
    MR_Word make__util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 0)));
    MR_Word make__util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 2)));
    MR_Word make__util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 3)));
    MR_Word make__util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 4)));
    MR_Word make__util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 5)));
    MR_Word make__util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 6)));
    MR_Word make__util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 7)));
    MR_Word make__util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 8)));
    MR_Word make__util__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 9)));
    MR_Word make__util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 10)));
    MR_Word make__util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 11)));
    MR_Word make__util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 12)));
    MR_Word make__util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 13)));
    MR_Word make__util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 14)));
    MR_Word make__util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 15)));
    MR_Word make__util__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 16)));
    MR_Word make__util__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 17)));
    MR_Integer make__util__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 18)));
    MR_Word make__util__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 19)));
    MR_Box make__util__conv0_MaybeTimestamp0_13;

    {
      make__util__succeeded = mercury__map__elem_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &make__util_scalar_common_1[0], ((MR_Box) (make__util__FileName_9)), make__util__V_22_22, &make__util__conv0_MaybeTimestamp0_13);
    }
    if (make__util__succeeded)
      {
        make__util__MaybeTimestamp0_13 = ((MR_Word) make__util__conv0_MaybeTimestamp0_13);
        make__util__succeeded = MR_TRUE;
      }
    if (make__util__succeeded)
      {
        *make__util__MaybeTimestamp_10 = make__util__MaybeTimestamp0_13;
        *make__util__STATE_VARIABLE_Info_19 = make__util__STATE_VARIABLE_Info_0_18;
      }
    else
      {
        MR_Word make__util__SearchResult_14;

        {
          libs__file_util__search_for_file_mod_time_5_p_0(make__util__SearchDirs_8, make__util__FileName_9, &make__util__SearchResult_14);
        }
        if (((MR_tag((MR_Word) make__util__SearchResult_14)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_String make__util__V_24_24;
            MR_String make__util__V_26_26;

            {
              make__util__V_26_26 = mercury__string__f_43_43_2_f_0(make__util__FileName_9, (MR_String) "\' not found");
            }
            {
              make__util__V_24_24 = mercury__string__f_43_43_2_f_0((MR_String) "file \140", make__util__V_26_26);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *make__util__MaybeTimestamp_10 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__util__V_24_24));
            }
            *make__util__STATE_VARIABLE_Info_19 = make__util__STATE_VARIABLE_Info_0_18;
          }
        else
          {
            MR_Word make__util__TimeT_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__SearchResult_14, (MR_Integer) 0)));
            MR_Word make__util__Timestamp_16;
            MR_Word make__util__V_29_29;
            MR_Word make__util__V_30_30;
            MR_Word make__util__V_50_50;
            MR_Word make__util__V_51_51;
            MR_Word make__util__V_52_52;
            MR_Word make__util__V_53_53;
            MR_Word make__util__V_54_54;
            MR_Word make__util__V_55_55;
            MR_Word make__util__V_56_56;
            MR_Word make__util__V_57_57;
            MR_Word make__util__V_58_58;
            MR_Word make__util__V_59_59;
            MR_Word make__util__V_60_60;
            MR_Word make__util__V_61_61;
            MR_Word make__util__V_62_62;
            MR_Word make__util__V_63_63;
            MR_Word make__util__V_64_64;
            MR_Word make__util__V_65_65;
            MR_Word make__util__V_66_66;
            MR_Integer make__util__V_67_67;
            MR_Word make__util__V_68_68;
            MR_Word make__util__V_69_69;
            MR_Word make__util__V_71_71;
            MR_Word make__util__V_72_72;
            MR_Word make__util__V_73_73;
            MR_Word make__util__V_74_74;
            MR_Word make__util__V_75_75;
            MR_Word make__util__V_76_76;
            MR_Word make__util__V_77_77;
            MR_Word make__util__V_78_78;
            MR_Word make__util__V_79_79;
            MR_Word make__util__V_80_80;
            MR_Word make__util__V_81_81;
            MR_Word make__util__V_82_82;
            MR_Word make__util__V_83_83;
            MR_Word make__util__V_84_84;
            MR_Word make__util__V_85_85;
            MR_Word make__util__V_86_86;
            MR_Integer make__util__V_87_87;
            MR_Word make__util__V_88_88;
            MR_Word make__util__V_70_70;

            {
              make__util__Timestamp_16 = libs__timestamp__time_t_to_timestamp_1_f_0(make__util__TimeT_15);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *make__util__MaybeTimestamp_10 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__util__Timestamp_16));
            }
            make__util__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 0)));
            make__util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 1)));
            make__util__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 2)));
            make__util__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 3)));
            make__util__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 4)));
            make__util__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 5)));
            make__util__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 6)));
            make__util__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 7)));
            make__util__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 8)));
            make__util__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 9)));
            make__util__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 10)));
            make__util__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 11)));
            make__util__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 12)));
            make__util__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 13)));
            make__util__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 14)));
            make__util__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 15)));
            make__util__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 16)));
            make__util__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 17)));
            make__util__V_67_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 18)));
            make__util__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 19)));
            {
              make__util__V_30_30 = mercury__map__f_101_108_101_109_32_58_61_3_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &make__util_scalar_common_1[0], ((MR_Box) (make__util__FileName_9)), make__util__V_29_29, ((MR_Box) (*make__util__MaybeTimestamp_10)));
            }
            make__util__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 0)));
            make__util__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 1)));
            make__util__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 2)));
            make__util__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 3)));
            make__util__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 4)));
            make__util__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 5)));
            make__util__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 6)));
            make__util__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 7)));
            make__util__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 8)));
            make__util__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 9)));
            make__util__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 10)));
            make__util__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 11)));
            make__util__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 12)));
            make__util__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 13)));
            make__util__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 14)));
            make__util__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 15)));
            make__util__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 16)));
            make__util__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 17)));
            make__util__V_87_87 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 18)));
            make__util__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 19)));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
              *make__util__STATE_VARIABLE_Info_19 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__util__V_69_69));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__util__V_30_30));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__util__V_71_71));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (make__util__V_72_72));
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (make__util__V_73_73));
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (make__util__V_74_74));
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (make__util__V_75_75));
              MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (make__util__V_76_76));
              MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (make__util__V_77_77));
              MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (make__util__V_78_78));
              MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (make__util__V_79_79));
              MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (make__util__V_80_80));
              MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (make__util__V_81_81));
              MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (make__util__V_82_82));
              MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (make__util__V_83_83));
              MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (make__util__V_84_84));
              MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (make__util__V_85_85));
              MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (make__util__V_86_86));
              MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (make__util__V_87_87));
              MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (make__util__V_88_88));
            }
          }
      }
  }
}

void MR_CALL 
make__util__get_file_name_8_p_0(
  MR_Word make__util__Globals_9,
  MR_Word make__util__Search_10,
  MR_Word make__util__TargetFile_11,
  MR_String * make__util__FileName_12,
  MR_Word make__util__STATE_VARIABLE_Info_0_21,
  MR_Word * make__util__STATE_VARIABLE_Info_22)
{
  {
    MR_bool make__util__succeeded;
    MR_Word make__util__ModuleName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__TargetFile_11, (MR_Integer) 0)));
    MR_Word make__util__FileType_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__TargetFile_11, (MR_Integer) 1)));

    make__util__succeeded = (make__util__FileType_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (make__util__succeeded)
      {
        MR_Word make__util__MaybeImports_17;

        {
          make__module_dep_file__get_module_dependencies_7_p_0(make__util__Globals_9, make__util__ModuleName_15, &make__util__MaybeImports_17, make__util__STATE_VARIABLE_Info_0_21, make__util__STATE_VARIABLE_Info_22);
        }
        if ((make__util__MaybeImports_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              parse_tree__file_names__module_name_to_file_name_7_p_0(make__util__Globals_9, make__util__ModuleName_15, (MR_String) ".m", (MR_Integer) 1, make__util__FileName_12);
            }
          }
        else
          {
            MR_Word make__util__Imports_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__util__MaybeImports_17, (MR_Integer) 0)));
            MR_Word make__util__V_36_36;
            MR_Word make__util__V_37_37;
            MR_Word make__util__V_38_38;
            MR_Word make__util__V_39_39;
            MR_Word make__util__V_40_40;
            MR_Word make__util__V_41_41;
            MR_Word make__util__V_42_42;
            MR_Word make__util__V_43_43;
            MR_Word make__util__V_44_44;
            MR_Word make__util__V_45_45;
            MR_Word make__util__V_46_46;
            MR_Word make__util__V_47_47;
            MR_Word make__util__V_48_48;
            MR_Word make__util__V_49_49;
            MR_Word make__util__V_50_50;
            MR_Word make__util__V_51_51;
            MR_Word make__util__V_52_52;
            MR_Word make__util__V_53_53;
            MR_Word make__util__V_54_54;
            MR_Word make__util__V_55_55;
            MR_Word make__util__V_56_56;
            MR_Word make__util__V_57_57;
            MR_Word make__util__V_58_58;
            MR_Word make__util__V_59_59;
            MR_Word make__util__V_60_60;
            MR_String make__util__V_61_61;

            *make__util__FileName_12 = ((MR_String) (MR_hl_field(MR_mktag(0), make__util__Imports_18, (MR_Integer) 0)));
            make__util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_18, (MR_Integer) 1)));
            make__util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_18, (MR_Integer) 2)));
            make__util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_18, (MR_Integer) 3)));
            make__util__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_18, (MR_Integer) 4)));
            make__util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_18, (MR_Integer) 5)));
            make__util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_18, (MR_Integer) 6)));
            make__util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_18, (MR_Integer) 7)));
            make__util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_18, (MR_Integer) 8)));
            make__util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_18, (MR_Integer) 9)));
            make__util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_18, (MR_Integer) 10)));
            make__util__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_18, (MR_Integer) 11)));
            make__util__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_18, (MR_Integer) 12)));
            make__util__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_18, (MR_Integer) 13)));
            make__util__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_18, (MR_Integer) 14)));
            make__util__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_18, (MR_Integer) 15)));
            make__util__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_18, (MR_Integer) 16)));
            make__util__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_18, (MR_Integer) 17)));
            make__util__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_18, (MR_Integer) 18)));
            make__util__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_18, (MR_Integer) 19)));
            make__util__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_18, (MR_Integer) 20)));
            make__util__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_18, (MR_Integer) 21)));
            make__util__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_18, (MR_Integer) 22)));
            make__util__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_18, (MR_Integer) 23)));
            make__util__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_18, (MR_Integer) 24)));
            make__util__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_18, (MR_Integer) 25)));
            make__util__V_61_61 = ((MR_String) (MR_hl_field(MR_mktag(0), make__util__Imports_18, (MR_Integer) 26)));
          }
      }
    else
      {
        MR_Word make__util__MaybeExt_19;

        {
          make__util__MaybeExt_19 = make__util__target_extension_2_f_0(make__util__Globals_9, make__util__FileType_16);
        }
        if ((make__util__MaybeExt_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              make__util__module_target_to_file_name_maybe_search_8_p_0(make__util__Globals_9, make__util__ModuleName_15, make__util__FileType_16, (MR_Integer) 1, make__util__Search_10, make__util__FileName_12);
            }
            *make__util__STATE_VARIABLE_Info_22 = make__util__STATE_VARIABLE_Info_0_21;
          }
        else
          {
            MR_String make__util__Ext_20 = ((MR_String) (MR_hl_field(MR_mktag(1), make__util__MaybeExt_19, (MR_Integer) 0)));

            switch (make__util__Search_10) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  {
                    parse_tree__file_names__module_name_to_file_name_7_p_0(make__util__Globals_9, make__util__ModuleName_15, make__util__Ext_20, (MR_Integer) 1, make__util__FileName_12);
                  }
                  *make__util__STATE_VARIABLE_Info_22 = make__util__STATE_VARIABLE_Info_0_21;
                }
                break;
              case (MR_Integer) 0:
                {
                  make__util__module_name_to_search_file_name_cache_8_p_0(make__util__Globals_9, make__util__ModuleName_15, make__util__Ext_20, make__util__FileName_12, make__util__STATE_VARIABLE_Info_0_21, make__util__STATE_VARIABLE_Info_22);
                }
                break;
            }
          }
      }
  }
}

void MR_CALL 
make__util__get_target_timestamp_8_p_0(
  MR_Word make__util__Globals_9,
  MR_Word make__util__Search_10,
  MR_Word make__util__TargetFile_11,
  MR_Word * make__util__MaybeTimestamp_12,
  MR_Word make__util__STATE_VARIABLE_Info_0_18,
  MR_Word * make__util__STATE_VARIABLE_Info_19)
{
  {
    MR_bool make__util__succeeded;
    MR_Word make__util__FileType_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__TargetFile_11, (MR_Integer) 1)));
    MR_String make__util__FileName_17;
    MR_Word make__util__STATE_VARIABLE_Info_22_22;
    MR_Word make__util___ModuleName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__TargetFile_11, (MR_Integer) 0)));

    {
      make__util__get_file_name_8_p_0(make__util__Globals_9, make__util__Search_10, make__util__TargetFile_11, &make__util__FileName_17, make__util__STATE_VARIABLE_Info_0_18, &make__util__STATE_VARIABLE_Info_22_22);
    }
    make__util__succeeded = (make__util__FileType_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
    if (make__util__succeeded)
      {
        make__util__get_target_timestamp_analysis_registry_9_p_0(make__util__Globals_9, make__util__Search_10, make__util__TargetFile_11, make__util__FileName_17, make__util__MaybeTimestamp_12, make__util__STATE_VARIABLE_Info_22_22, make__util__STATE_VARIABLE_Info_19);
      }
    else
      {
        make__util__get_target_timestamp_2_9_p_0(make__util__Globals_9, make__util__Search_10, make__util__TargetFile_11, make__util__FileName_17, make__util__MaybeTimestamp_12, make__util__STATE_VARIABLE_Info_22_22, make__util__STATE_VARIABLE_Info_19);
      }
  }
}

void MR_CALL 
make__util__get_dependency_timestamp_7_p_0(
  MR_Word make__util__Globals_8,
  MR_Word make__util__DependencyFile_9,
  MR_Word * make__util__MaybeTimestamp_10,
  MR_Word make__util__STATE_VARIABLE_Info_0_21,
  MR_Word * make__util__STATE_VARIABLE_Info_22)
{
  {
    MR_bool make__util__succeeded;

    if (((MR_tag((MR_Word) make__util__DependencyFile_9)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String make__util__FileName_13 = ((MR_String) (MR_hl_field(MR_mktag(1), make__util__DependencyFile_9, (MR_Integer) 0)));
        MR_Word make__util__MaybeOption_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__util__DependencyFile_9, (MR_Integer) 1)));
        MR_Word make__util__SearchDirs_16;

        if ((make__util__MaybeOption_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_String make__util__V_31_31;

            {
              make__util__V_31_31 = mercury__dir__this_directory_0_f_0();
            }
            {
              make__util__SearchDirs_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), make__util__SearchDirs_16, 0) = ((MR_Box) (make__util__V_31_31));
              MR_hl_field(MR_mktag(1), make__util__SearchDirs_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
        else
          {
            MR_Word make__util__Option_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__util__MaybeOption_14, (MR_Integer) 0)));

            {
              libs__globals__lookup_accumulating_option_3_p_0(make__util__Globals_8, make__util__Option_15, &make__util__SearchDirs_16);
            }
          }
        {
          make__util__get_file_timestamp_7_p_0(make__util__SearchDirs_16, make__util__FileName_13, make__util__MaybeTimestamp_10, make__util__STATE_VARIABLE_Info_0_21, make__util__STATE_VARIABLE_Info_22);
        }
      }
    else
      {
        MR_Word make__util__Target_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__DependencyFile_9, (MR_Integer) 0)));
        MR_Word make__util__MaybeTimestamp0_18;
        MR_Word make__util__FileType_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Target_17, (MR_Integer) 1)));
        MR_String make__util__FileName_47;
        MR_Word make__util__STATE_VARIABLE_Info_22_48;
        MR_Word make__util___ModuleName_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Target_17, (MR_Integer) 0)));
        MR_Word make__util__V_28_28;
        MR_Word make__util__V_29_29;
        MR_Word make__util__V_20_20;
        MR_Word make__util__V_19_19;

        {
          make__util__get_file_name_8_p_0(make__util__Globals_8, (MR_Integer) 0, make__util__Target_17, &make__util__FileName_47, make__util__STATE_VARIABLE_Info_0_21, &make__util__STATE_VARIABLE_Info_22_48);
        }
        make__util__succeeded = (make__util__FileType_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
        if (make__util__succeeded)
          {
            make__util__get_target_timestamp_analysis_registry_9_p_0(make__util__Globals_8, (MR_Integer) 0, make__util__Target_17, make__util__FileName_47, &make__util__MaybeTimestamp0_18, make__util__STATE_VARIABLE_Info_22_48, make__util__STATE_VARIABLE_Info_22);
          }
        else
          {
            make__util__get_target_timestamp_2_9_p_0(make__util__Globals_8, (MR_Integer) 0, make__util__Target_17, make__util__FileName_47, &make__util__MaybeTimestamp0_18, make__util__STATE_VARIABLE_Info_22_48, make__util__STATE_VARIABLE_Info_22);
          }
        make__util__succeeded = ((MR_tag((MR_Word) make__util__MaybeTimestamp0_18)) == (MR_mktag((MR_Integer) 0)));
        if (make__util__succeeded)
          {
            make__util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__MaybeTimestamp0_18, (MR_Integer) 0)));
            make__util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Target_17, (MR_Integer) 0)));
            make__util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Target_17, (MR_Integer) 1)));
            make__util__succeeded = ((MR_tag((MR_Word) make__util__V_28_28)) == (MR_mktag((MR_Integer) 1)));
            if (make__util__succeeded)
              {
                make__util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__util__V_28_28, (MR_Integer) 0)));
                make__util__succeeded = (make__util__V_29_29 == (MR_Integer) 1);
              }
          }
        if (make__util__succeeded)
          {
            MR_Word make__util__V_30_30;

            {
              make__util__V_30_30 = libs__timestamp__oldest_timestamp_0_f_0();
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *make__util__MaybeTimestamp_10 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__util__V_30_30));
            }
          }
        else
          *make__util__MaybeTimestamp_10 = make__util__MaybeTimestamp0_18;
      }
  }
}

void MR_CALL 
make__util__get_timestamp_file_timestamp_7_p_0(
  MR_Word make__util__Globals_8,
  MR_Word make__util__HeadVar__2_2,
  MR_Word * make__util__MaybeTimestamp_11,
  MR_Word make__util__STATE_VARIABLE_Info_0_17,
  MR_Word * make__util__STATE_VARIABLE_Info_18)
{
  {
    MR_bool make__util__succeeded;
    MR_Word make__util__ModuleName_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word make__util__FileType_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__HeadVar__2_2, (MR_Integer) 1)));
    MR_String make__util__FileName_15;
    MR_Word make__util__SearchDirs_16;
    MR_String make__util__V_25_25;
    MR_String make__util__TimestampExt_14;

    {
      make__util__succeeded = make__util__timestamp_extension_2_p_0(make__util__FileType_10, &make__util__TimestampExt_14);
    }
    if (make__util__succeeded)
      {
        {
          parse_tree__file_names__module_name_to_file_name_7_p_0(make__util__Globals_8, make__util__ModuleName_9, make__util__TimestampExt_14, (MR_Integer) 1, &make__util__FileName_15);
        }
      }
    else
      {
        {
          make__util__module_target_to_file_name_maybe_search_8_p_0(make__util__Globals_8, make__util__ModuleName_9, make__util__FileType_10, (MR_Integer) 1, (MR_Integer) 1, &make__util__FileName_15);
        }
      }
    {
      make__util__V_25_25 = mercury__dir__this_directory_0_f_0();
    }
    {
      make__util__SearchDirs_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), make__util__SearchDirs_16, 0) = ((MR_Box) (make__util__V_25_25));
      MR_hl_field(MR_mktag(1), make__util__SearchDirs_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      make__util__get_file_timestamp_7_p_0(make__util__SearchDirs_16, make__util__FileName_15, make__util__MaybeTimestamp_11, make__util__STATE_VARIABLE_Info_0_17, make__util__STATE_VARIABLE_Info_18);
    }
  }
}

void MR_CALL 
make__util__build_with_module_options_and_output_redirect_9_p_0(
  MR_Word make__util__Globals_10,
  MR_Word make__util__ModuleName_11,
  MR_Word make__util__ExtraOptions_12,
  MR_Word make__util__Build_13,
  MR_Word * make__util__Succeeded_14,
  MR_Word make__util__STATE_VARIABLE_Info_0_17,
  MR_Word * make__util__STATE_VARIABLE_Info_18)
{
  {
    MR_bool make__util__succeeded;

    {
      make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_95_104_111_49_48_95_95_91_54_93_95_48_9_p_0(make__util__ModuleName_11, make__util__Build_13, make__util__Globals_10, make__util__ModuleName_11, make__util__ExtraOptions_12, make__util__Succeeded_14, make__util__STATE_VARIABLE_Info_0_17, make__util__STATE_VARIABLE_Info_18);
    }
  }
}

void MR_CALL 
make__util__unredirect_output_7_p_0(
  MR_Word make__util__Globals_8,
  MR_Word make__util__ModuleName_9,
  MR_Word make__util__ErrorOutputStream_10,
  MR_Word make__util__STATE_VARIABLE_Info_0_23,
  MR_Word * make__util__STATE_VARIABLE_Info_24)
{
  {
    MR_bool make__util__succeeded;
    MR_String make__util__TmpErrorFileName_13;
    MR_Word make__util__TmpErrorInputRes_14;
    MR_Word make__util__V_22_22;

    {
      mercury__io__output_stream_name_4_p_0(make__util__ErrorOutputStream_10, &make__util__TmpErrorFileName_13);
    }
    {
      mercury__io__close_output_3_p_0(make__util__ErrorOutputStream_10);
    }
    {
      mercury__io__open_input_4_p_0(make__util__TmpErrorFileName_13, &make__util__TmpErrorInputRes_14);
    }
    if (((MR_tag((MR_Word) make__util__TmpErrorInputRes_14)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word make__util__Error_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__util__TmpErrorInputRes_14, (MR_Integer) 0)));

        {
          make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_105_116_104_95_108_111_99_107_101_100_95_115_116_100_111_117_116_95_95_104_111_49_50_95_95_91_52_93_95_48_4_p_0(make__util__TmpErrorFileName_13, make__util__Error_50, make__util__STATE_VARIABLE_Info_0_23);
        }
        *make__util__STATE_VARIABLE_Info_24 = make__util__STATE_VARIABLE_Info_0_23;
      }
    else
      {
        MR_Word make__util__TmpErrorInputStream_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__TmpErrorInputRes_14, (MR_Integer) 0)));
        MR_String make__util__ErrorFileName_16;
        MR_Word make__util__ErrorFileRes_17;
        MR_Word make__util__V_35_35;
        MR_Word make__util__V_51_51;
        MR_Word make__util__V_52_52;
        MR_Word make__util__V_53_53;
        MR_Word make__util__V_54_54;
        MR_Word make__util__V_55_55;
        MR_Word make__util__V_56_56;
        MR_Word make__util__V_57_57;
        MR_Word make__util__V_58_58;
        MR_Word make__util__V_59_59;
        MR_Word make__util__V_60_60;
        MR_Word make__util__V_61_61;
        MR_Word make__util__V_62_62;
        MR_Word make__util__V_63_63;
        MR_Word make__util__V_64_64;
        MR_Word make__util__V_65_65;
        MR_Word make__util__V_66_66;
        MR_Word make__util__V_67_67;
        MR_Integer make__util__V_68_68;
        MR_Word make__util__V_69_69;

        {
          parse_tree__file_names__module_name_to_file_name_7_p_0(make__util__Globals_8, make__util__ModuleName_9, (MR_String) ".err", (MR_Integer) 0, &make__util__ErrorFileName_16);
        }
        make__util__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 0)));
        make__util__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 1)));
        make__util__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 2)));
        make__util__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)));
        make__util__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 4)));
        make__util__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 5)));
        make__util__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 6)));
        make__util__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 7)));
        make__util__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 8)));
        make__util__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 9)));
        make__util__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 10)));
        make__util__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 11)));
        make__util__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 12)));
        make__util__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 13)));
        make__util__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 14)));
        make__util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 15)));
        make__util__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 16)));
        make__util__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 17)));
        make__util__V_68_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 18)));
        make__util__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 19)));
        {
          make__util__succeeded = mercury__set__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (make__util__ModuleName_9)), make__util__V_35_35);
        }
        if (make__util__succeeded)
          {
            mercury__io__open_append_4_p_0(make__util__ErrorFileName_16, &make__util__ErrorFileRes_17);
          }
        else
          {
            mercury__io__open_output_4_p_0(make__util__ErrorFileName_16, &make__util__ErrorFileRes_17);
          }
        if (((MR_tag((MR_Word) make__util__ErrorFileRes_17)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word make__util__Error_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__util__ErrorFileRes_17, (MR_Integer) 0)));

            {
              make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_105_116_104_95_108_111_99_107_101_100_95_115_116_100_111_117_116_95_95_104_111_49_50_95_95_91_52_93_95_48_4_p_0(make__util__TmpErrorFileName_13, make__util__Error_21, make__util__STATE_VARIABLE_Info_0_23);
            }
            *make__util__STATE_VARIABLE_Info_24 = make__util__STATE_VARIABLE_Info_0_23;
          }
        else
          {
            MR_Word make__util__ErrorFileOutputStream_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__ErrorFileRes_17, (MR_Integer) 0)));
            MR_Integer make__util__LinesToWrite_19;
            MR_Word make__util__CurrentOutputStream_20;
            MR_Word make__util__V_46_46;
            MR_Word make__util__V_47_47;
            MR_Word make__util__V_70_70;
            MR_Word make__util__V_71_71;
            MR_Word make__util__V_72_72;
            MR_Word make__util__V_73_73;
            MR_Word make__util__V_74_74;
            MR_Word make__util__V_75_75;
            MR_Word make__util__V_76_76;
            MR_Word make__util__V_77_77;
            MR_Word make__util__V_78_78;
            MR_Word make__util__V_79_79;
            MR_Word make__util__V_80_80;
            MR_Word make__util__V_81_81;
            MR_Word make__util__V_82_82;
            MR_Word make__util__V_83_83;
            MR_Word make__util__V_84_84;
            MR_Word make__util__V_85_85;
            MR_Word make__util__V_86_86;
            MR_Integer make__util__V_87_87;
            MR_Word make__util__V_88_88;
            MR_Word make__util__V_89_89;
            MR_Word make__util__V_90_90;
            MR_Word make__util__V_91_91;
            MR_Word make__util__V_92_92;
            MR_Word make__util__V_93_93;
            MR_Word make__util__V_94_94;
            MR_Word make__util__V_95_95;
            MR_Word make__util__V_96_96;
            MR_Word make__util__V_97_97;
            MR_Word make__util__V_98_98;
            MR_Word make__util__V_99_99;
            MR_Word make__util__V_100_100;
            MR_Word make__util__V_101_101;
            MR_Word make__util__V_102_102;
            MR_Word make__util__V_103_103;
            MR_Word make__util__V_105_105;
            MR_Word make__util__V_106_106;
            MR_Integer make__util__V_107_107;
            MR_Word make__util__V_108_108;
            MR_Word make__util__V_104_104;

            {
              libs__globals__lookup_int_option_3_p_0(make__util__Globals_8, (MR_Integer) 54, &make__util__LinesToWrite_19);
            }
            {
              mercury__io__output_stream_3_p_0(&make__util__CurrentOutputStream_20);
            }
            {
              make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_105_116_104_95_108_111_99_107_101_100_95_115_116_100_111_117_116_95_95_104_111_49_49_95_95_91_55_93_95_48_4_p_0(make__util__TmpErrorFileName_13, make__util__TmpErrorInputStream_15, make__util__ErrorFileOutputStream_18, make__util__CurrentOutputStream_20, make__util__LinesToWrite_19, make__util__STATE_VARIABLE_Info_0_23);
            }
            {
              mercury__io__close_output_3_p_0(make__util__ErrorFileOutputStream_18);
            }
            make__util__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 0)));
            make__util__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 1)));
            make__util__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 2)));
            make__util__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)));
            make__util__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 4)));
            make__util__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 5)));
            make__util__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 6)));
            make__util__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 7)));
            make__util__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 8)));
            make__util__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 9)));
            make__util__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 10)));
            make__util__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 11)));
            make__util__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 12)));
            make__util__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 13)));
            make__util__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 14)));
            make__util__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 15)));
            make__util__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 16)));
            make__util__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 17)));
            make__util__V_87_87 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 18)));
            make__util__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 19)));
            {
              make__util__V_46_46 = mercury__set__insert_2_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, make__util__V_47_47, ((MR_Box) (make__util__ModuleName_9)));
            }
            make__util__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 0)));
            make__util__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 1)));
            make__util__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 2)));
            make__util__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)));
            make__util__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 4)));
            make__util__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 5)));
            make__util__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 6)));
            make__util__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 7)));
            make__util__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 8)));
            make__util__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 9)));
            make__util__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 10)));
            make__util__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 11)));
            make__util__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 12)));
            make__util__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 13)));
            make__util__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 14)));
            make__util__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 15)));
            make__util__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 16)));
            make__util__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 17)));
            make__util__V_107_107 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 18)));
            make__util__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 19)));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
              *make__util__STATE_VARIABLE_Info_24 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__util__V_89_89));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__util__V_90_90));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__util__V_91_91));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (make__util__V_92_92));
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (make__util__V_93_93));
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (make__util__V_94_94));
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (make__util__V_95_95));
              MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (make__util__V_96_96));
              MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (make__util__V_97_97));
              MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (make__util__V_98_98));
              MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (make__util__V_99_99));
              MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (make__util__V_100_100));
              MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (make__util__V_101_101));
              MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (make__util__V_102_102));
              MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (make__util__V_103_103));
              MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (make__util__V_46_46));
              MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (make__util__V_105_105));
              MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (make__util__V_106_106));
              MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (make__util__V_107_107));
              MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (make__util__V_108_108));
            }
          }
        {
          mercury__io__close_input_3_p_0(make__util__TmpErrorInputStream_15);
        }
      }
    {
      mercury__io__remove_file_4_p_0(make__util__TmpErrorFileName_13, &make__util__V_22_22);
    }
  }
}

void MR_CALL 
make__util__redirect_output_6_p_0(
  MR_Word make__util___ModuleName_7,
  MR_Word * make__util__MaybeErrorStream_8,
  MR_Word make__util__STATE_VARIABLE_Info_0_15,
  MR_Word * make__util__STATE_VARIABLE_Info_16)
{
  {
    MR_bool make__util__succeeded;

    {
      make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_100_105_114_101_99_116_95_111_117_116_112_117_116_95_95_91_49_93_95_48_6_p_0(make__util__MaybeErrorStream_8, make__util__STATE_VARIABLE_Info_0_15, make__util__STATE_VARIABLE_Info_16);
    }
  }
}

void MR_CALL 
make__util__build_with_output_redirect_8_p_0(
  MR_Word make__util__Globals_9,
  MR_Word make__util__ModuleName_10,
  MR_Word make__util__Build_11,
  MR_Word * make__util__Succeeded_12,
  MR_Word make__util__STATE_VARIABLE_Info_0_17,
  MR_Word * make__util__STATE_VARIABLE_Info_18)
{
  {
    MR_bool make__util__succeeded;
    MR_Word make__util__RedirectResult_15;
    MR_Word make__util__STATE_VARIABLE_Info_21_21;

    {
      make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_100_105_114_101_99_116_95_111_117_116_112_117_116_95_95_91_49_93_95_48_6_p_0(&make__util__RedirectResult_15, make__util__STATE_VARIABLE_Info_0_17, &make__util__STATE_VARIABLE_Info_21_21);
    }
    if ((make__util__RedirectResult_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *make__util__Succeeded_12 = (MR_Integer) 0;
        *make__util__STATE_VARIABLE_Info_18 = make__util__STATE_VARIABLE_Info_21_21;
      }
    else
      {
        MR_Word make__util__ErrorStream_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__util__RedirectResult_15, (MR_Integer) 0)));
        MR_Word make__util__STATE_VARIABLE_Info_23_23;
        void MR_CALL (* make__util__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), make__util__Build_11, (MR_Integer) 1)));
        MR_Box make__util__conv3_Succeeded_12;
        MR_Box make__util__conv2_STATE_VARIABLE_Info_23_23;
        MR_Box make__util__conv1_STATE_VARIABLE_IO_24_24;

        {
          make__util__func_0(((MR_Box) make__util__Build_11), ((MR_Box) (make__util__Globals_9)), ((MR_Box) (make__util__ErrorStream_16)), &make__util__conv3_Succeeded_12, ((MR_Box) (make__util__STATE_VARIABLE_Info_21_21)), &make__util__conv2_STATE_VARIABLE_Info_23_23, ((MR_Box) ((MR_Integer) 0)), &make__util__conv1_STATE_VARIABLE_IO_24_24);
        }
        *make__util__Succeeded_12 = ((MR_Word) make__util__conv3_Succeeded_12);
        make__util__STATE_VARIABLE_Info_23_23 = ((MR_Word) make__util__conv2_STATE_VARIABLE_Info_23_23);
        {
          make__util__unredirect_output_7_p_0(make__util__Globals_9, make__util__ModuleName_10, make__util__ErrorStream_16, make__util__STATE_VARIABLE_Info_23_23, make__util__STATE_VARIABLE_Info_18);
        }
      }
  }
}

void MR_CALL 
make__util__build_with_module_options_args_12_p_0(
  MR_Word make__util__TypeInfo_for_Info1_30,
  MR_Word make__util__TypeInfo_for_Info2_31,
  MR_Word make__util__Globals_13,
  MR_Word make__util__ModuleName_14,
  MR_Word make__util__DetectedGradeFlags_15,
  MR_Word make__util__OptionVariables_16,
  MR_Word make__util__OptionArgs_17,
  MR_Word make__util__ExtraOptions_18,
  MR_Word make__util__Build_19,
  MR_Word * make__util__Succeeded_20,
  MR_Box make__util__STATE_VARIABLE_Info_0_23,
  MR_Word * make__util__STATE_VARIABLE_Info_24)
{
  {
    MR_bool make__util__succeeded;
    MR_Word make__util__OptionsResult_46;

    {
      make__options_file__lookup_mmc_module_options_6_p_0(make__util__Globals_13, make__util__OptionVariables_16, make__util__ModuleName_14, &make__util__OptionsResult_46);
    }
    if ((make__util__OptionsResult_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *make__util__STATE_VARIABLE_Info_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *make__util__Succeeded_20 = (MR_Integer) 0;
      }
    else
      {
        MR_Word make__util__TypeCtorInfo_54_70 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        MR_Word make__util__ModuleOptionArgs_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__util__OptionsResult_46, (MR_Integer) 0)));
        MR_Word make__util__AllOptionArgs_50;
        MR_Word make__util__OptionSpecs_53;
        MR_Word make__util__BuildGlobals_54;
        MR_Word make__util__V_63_63;
        MR_Word make__util__V_64_64;
        MR_Word make__util__V_65_65;
        MR_Word make__util__V_66_66;
        MR_Word make__util__V_51_51;
        MR_Word make__util__V_52_52;

        {
          make__util__V_66_66 = mercury__list__f_43_43_2_f_0(make__util__TypeCtorInfo_54_70, make__util__ExtraOptions_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        }
        {
          make__util__V_65_65 = mercury__list__f_43_43_2_f_0(make__util__TypeCtorInfo_54_70, make__util__OptionArgs_17, make__util__V_66_66);
        }
        {
          make__util__V_64_64 = mercury__list__f_43_43_2_f_0(make__util__TypeCtorInfo_54_70, make__util__ModuleOptionArgs_47, make__util__V_65_65);
        }
        {
          make__util__V_63_63 = mercury__list__f_43_43_2_f_0(make__util__TypeCtorInfo_54_70, make__util__DetectedGradeFlags_15, make__util__V_64_64);
        }
        {
          make__util__AllOptionArgs_50 = mercury__list__f_43_43_2_f_0(make__util__TypeCtorInfo_54_70, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), make__util__V_63_63);
        }
        {
          libs__handle_options__handle_given_options_7_p_0(make__util__AllOptionArgs_50, &make__util__V_51_51, &make__util__V_52_52, &make__util__OptionSpecs_53, &make__util__BuildGlobals_54);
        }
        if ((make__util__OptionSpecs_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Box make__util__Info_57;
            void MR_CALL (* make__util__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), make__util__Build_19, (MR_Integer) 1)));
            MR_Box make__util__conv2_Succeeded_20;
            MR_Box make__util__conv1_STATE_VARIABLE_IO_26;

            {
              make__util__func_0(((MR_Box) make__util__Build_19), ((MR_Box) (make__util__BuildGlobals_54)), ((MR_Box) (make__util__AllOptionArgs_50)), &make__util__conv2_Succeeded_20, make__util__STATE_VARIABLE_Info_0_23, &make__util__Info_57, ((MR_Box) ((MR_Integer) 0)), &make__util__conv1_STATE_VARIABLE_IO_26);
            }
            *make__util__Succeeded_20 = ((MR_Word) make__util__conv2_Succeeded_20);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *make__util__STATE_VARIABLE_Info_24 = base;
              MR_hl_field(MR_mktag(1), base, 0) = make__util__Info_57;
            }
          }
        else
          {
            *make__util__Succeeded_20 = (MR_Integer) 0;
            *make__util__STATE_VARIABLE_Info_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            {
              libs__handle_options__usage_errors_4_p_0(make__util__BuildGlobals_54, make__util__OptionSpecs_53);
            }
          }
      }
  }
}

void MR_CALL 
make__util__build_with_module_options_9_p_0(
  MR_Word make__util__Globals_10,
  MR_Word make__util__ModuleName_11,
  MR_Word make__util__ExtraOptions_12,
  MR_Word make__util__Build_13,
  MR_Word * make__util__Succeeded_14,
  MR_Word make__util__STATE_VARIABLE_Info_0_18,
  MR_Word * make__util__STATE_VARIABLE_Info_19)
{
  {
    MR_bool make__util__succeeded;
    MR_Word make__util__MaybeInfo_17;
    MR_Word make__util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 3)));
    MR_Word make__util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 4)));
    MR_Word make__util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 5)));
    MR_Word make__util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 0)));
    MR_Word make__util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 1)));
    MR_Word make__util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 2)));
    MR_Word make__util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 6)));
    MR_Word make__util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 7)));
    MR_Word make__util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 8)));
    MR_Word make__util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 9)));
    MR_Word make__util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 10)));
    MR_Word make__util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 11)));
    MR_Word make__util__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 12)));
    MR_Word make__util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 13)));
    MR_Word make__util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 14)));
    MR_Word make__util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 15)));
    MR_Word make__util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 16)));
    MR_Word make__util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 17)));
    MR_Integer make__util__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 18)));
    MR_Word make__util__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 19)));

    {
      make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_97_114_103_115_95_105_110_118_111_107_101_100_95_95_91_49_44_32_50_93_95_48_13_p_0(make__util__Globals_10, (MR_Integer) 1, make__util__ModuleName_11, make__util__V_23_23, make__util__V_32_32, make__util__V_31_31, make__util__ExtraOptions_12, make__util__Build_13, make__util__Succeeded_14, ((MR_Box) (make__util__STATE_VARIABLE_Info_0_18)), &make__util__MaybeInfo_17);
    }
    if ((make__util__MaybeInfo_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *make__util__STATE_VARIABLE_Info_19 = make__util__STATE_VARIABLE_Info_0_18;
    else
      *make__util__STATE_VARIABLE_Info_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__util__MaybeInfo_17, (MR_Integer) 0)));
  }
}

void MR_CALL 
make__util__foldl2_maybe_stop_at_error_maybe_parallel_9_p_0(
  MR_Word make__util__TypeInfo_for_T_34,
  MR_Word make__util__KeepGoing_10,
  MR_Word make__util__MakeTarget_11,
  MR_Word make__util__Globals_12,
  MR_Word make__util__Targets_13,
  MR_Word * make__util__Success_14,
  MR_Word make__util__STATE_VARIABLE_Info_0_20,
  MR_Word * make__util__STATE_VARIABLE_Info_21)
{
  {
    MR_bool make__util__succeeded;
    MR_Integer make__util__Jobs_17;

    {
      libs__globals__lookup_int_option_3_p_0(make__util__Globals_12, (MR_Integer) 614, &make__util__Jobs_17);
    }
    make__util__succeeded = (make__util__Jobs_17 > (MR_Integer) 1);
    if (make__util__succeeded)
      {
        {
          make__util__succeeded = libs__process_util__can_fork_0_p_0();
        }
        if (make__util__succeeded)
          {
            make__util__succeeded = make__util__have_job_ctl_ipc_0_p_0();
          }
      }
    if (make__util__succeeded)
      {
        MR_Word make__util__Success0_18;
        MR_Word make__util__STATE_VARIABLE_Info_26_26;

        {
          make__util__foldl2_maybe_stop_at_error_parallel_processes_10_p_0(make__util__TypeInfo_for_T_34, make__util__KeepGoing_10, make__util__Jobs_17, make__util__MakeTarget_11, make__util__Globals_12, make__util__Targets_13, &make__util__Success0_18, make__util__STATE_VARIABLE_Info_0_20, &make__util__STATE_VARIABLE_Info_26_26);
        }
        switch (make__util__Success0_18) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *make__util__Success_14 = (MR_Integer) 0;
              *make__util__STATE_VARIABLE_Info_21 = make__util__STATE_VARIABLE_Info_26_26;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word make__util__NoRebuildGlobals_19;
              MR_Box make__util__conv1_STATE_VARIABLE_Info_21;
              MR_Box make__util__conv0_STATE_VARIABLE_IO_23;

              {
                libs__globals__set_op_mode_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_3[0]), make__util__Globals_12, &make__util__NoRebuildGlobals_19);
              }
              {
                make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_50_95_95_91_49_44_32_50_44_32_51_93_95_48_10_p_0(make__util__KeepGoing_10, make__util__MakeTarget_11, make__util__NoRebuildGlobals_19, make__util__Targets_13, (MR_Integer) 1, make__util__Success_14, ((MR_Box) (make__util__STATE_VARIABLE_Info_26_26)), &make__util__conv1_STATE_VARIABLE_Info_21, ((MR_Box) ((MR_Integer) 0)), &make__util__conv0_STATE_VARIABLE_IO_23);
              }
              *make__util__STATE_VARIABLE_Info_21 = ((MR_Word) make__util__conv1_STATE_VARIABLE_Info_21);
            }
            break;
        }
      }
    else
      {
        MR_Box make__util__conv3_STATE_VARIABLE_Info_21;
        MR_Box make__util__conv2_STATE_VARIABLE_IO_23;

        {
          make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_50_95_95_91_49_44_32_50_44_32_51_93_95_48_10_p_0(make__util__KeepGoing_10, make__util__MakeTarget_11, make__util__Globals_12, make__util__Targets_13, (MR_Integer) 1, make__util__Success_14, ((MR_Box) (make__util__STATE_VARIABLE_Info_0_20)), &make__util__conv3_STATE_VARIABLE_Info_21, ((MR_Box) ((MR_Integer) 0)), &make__util__conv2_STATE_VARIABLE_IO_23);
        }
        *make__util__STATE_VARIABLE_Info_21 = ((MR_Word) make__util__conv3_STATE_VARIABLE_Info_21);
      }
  }
}

void MR_CALL 
make__util__foldl3_maybe_stop_at_error_11_p_0(
  MR_Word make__util__TypeInfo_for_T_30,
  MR_Word make__util__TypeInfo_for_Acc_31,
  MR_Word make__util__TypeInfo_for_Info_32,
  MR_Word make__util__TypeInfo_for_IO_33,
  MR_Word make__util__KeepGoing_12,
  MR_Word make__util__P_13,
  MR_Word make__util__Globals_14,
  MR_Word make__util__Ts_15,
  MR_Word * make__util__Success_16,
  MR_Box make__util__STATE_VARIABLE_Acc_0_20,
  MR_Box * make__util__STATE_VARIABLE_Acc_21,
  MR_Box make__util__STATE_VARIABLE_Info_0_22,
  MR_Box * make__util__STATE_VARIABLE_Info_23,
  MR_Box make__util__STATE_VARIABLE_IO_0_24,
  MR_Box * make__util__STATE_VARIABLE_IO_25)
{
  {
    MR_bool make__util__succeeded;

    {
      make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_50_95_95_91_49_44_32_50_44_32_51_44_32_52_93_95_48_12_p_0(make__util__KeepGoing_12, make__util__P_13, make__util__Globals_14, make__util__Ts_15, (MR_Integer) 1, make__util__Success_16, make__util__STATE_VARIABLE_Acc_0_20, make__util__STATE_VARIABLE_Acc_21, make__util__STATE_VARIABLE_Info_0_22, make__util__STATE_VARIABLE_Info_23, make__util__STATE_VARIABLE_IO_0_24, make__util__STATE_VARIABLE_IO_25);
    }
  }
}

void MR_CALL 
make__util__foldl2_maybe_stop_at_error_9_p_0(
  MR_Word make__util__TypeInfo_for_T_24,
  MR_Word make__util__TypeInfo_for_Info_25,
  MR_Word make__util__TypeInfo_for_IO_26,
  MR_Word make__util__KeepGoing_10,
  MR_Word make__util__MakeTarget_11,
  MR_Word make__util__Globals_12,
  MR_Word make__util__Targets_13,
  MR_Word * make__util__Success_14,
  MR_Box make__util__STATE_VARIABLE_Info_0_17,
  MR_Box * make__util__STATE_VARIABLE_Info_18,
  MR_Box make__util__STATE_VARIABLE_IO_0_19,
  MR_Box * make__util__STATE_VARIABLE_IO_20)
{
  {
    MR_bool make__util__succeeded;

    {
      make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_50_95_95_91_49_44_32_50_44_32_51_93_95_48_10_p_0(make__util__KeepGoing_10, make__util__MakeTarget_11, make__util__Globals_12, make__util__Targets_13, (MR_Integer) 1, make__util__Success_14, make__util__STATE_VARIABLE_Info_0_17, make__util__STATE_VARIABLE_Info_18, make__util__STATE_VARIABLE_IO_0_19, make__util__STATE_VARIABLE_IO_20);
    }
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module make.util. */
