/*
** Automatically generated from `make.util.m'
** by the Mercury compiler,
** version DEV
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
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "bytecode_backend.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "dir.mih"
#include "enum.mih"
#include "erl_backend.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
#include "make.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "recompilation.mih"
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
#include "top_level.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "version_hash_table.mih"
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
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.handle_options.mih"
#include "libs.lp_rational.mih"
#include "libs.md4.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_imports.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_io_error.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "top_level.mercury_compile.mih"
#include "transform_hlds.mmc_analysis.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"


#line 561 "make.util.m"

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



#line 230 "make.util.c"
static const MR_VA_PseudoTypeInfo_Struct7 make__util____vpti_pred_7__plain_libs__globals__type_ctor_info_globals_0__pseudo_1__plain_bool__type_ctor_info_bool_0__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

#line 233 "make.util.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__util__list__pti_list_1__pseudo_1;

#line 236 "make.util.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__util__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

#line 239 "make.util.c"
static const MR_VA_PseudoTypeInfo_Struct7 make__util____vpti_pred_7__plain_libs__globals__type_ctor_info_globals_0__pseudo_1__plain_bool__type_ctor_info_bool_0__pseudo_2__pseudo_2__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

#line 242 "make.util.c"
static const MR_VA_PseudoTypeInfo_Struct7 make__util____vpti_pred_7__plain_libs__globals__type_ctor_info_globals_0__pseudo_1__plain_bool__type_ctor_info_bool_0__pseudo_2__pseudo_3__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

#line 245 "make.util.c"
static const MR_VA_PseudoTypeInfo_Struct8 make__util____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__pseudo_1__pseudo_2__plain_bool__type_ctor_info_bool_0__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

#line 248 "make.util.c"
static const MR_VA_PseudoTypeInfo_Struct7 make__util____vpti_pred_7__plain_libs__globals__type_ctor_info_globals_0__pseudo_1__plain_bool__type_ctor_info_bool_0__pseudo_2__pseudo_2__pseudo_3__pseudo_3;

#line 251 "make.util.c"
static const MR_VA_PseudoTypeInfo_Struct9 make__util____vpti_pred_9__plain_libs__globals__type_ctor_info_globals_0__pseudo_1__plain_bool__type_ctor_info_bool_0__pseudo_2__pseudo_2__pseudo_3__pseudo_3__pseudo_4__pseudo_4;

#line 254 "make.util.c"
static MR_bool MR_CALL 
make__util____Unify____build_3_0_10001(
#line 257 "make.util.c"
  MR_Box make__util__wrapper_arg_1,
#line 259 "make.util.c"
  MR_Box make__util__wrapper_arg_2,
#line 261 "make.util.c"
  MR_Box make__util__wrapper_arg_3,
#line 263 "make.util.c"
  MR_Box make__util__wrapper_arg_4,
#line 265 "make.util.c"
  MR_Box make__util__wrapper_arg_5);

#line 268 "make.util.c"
static void MR_CALL 
make__util____Compare____build_3_0_10001(
#line 271 "make.util.c"
  MR_Box make__util__wrapper_arg_1,
#line 273 "make.util.c"
  MR_Box make__util__wrapper_arg_2,
#line 275 "make.util.c"
  MR_Box make__util__wrapper_arg_3,
#line 277 "make.util.c"
  MR_Box * make__util__wrapper_arg_4,
#line 279 "make.util.c"
  MR_Box make__util__wrapper_arg_5,
#line 281 "make.util.c"
  MR_Box make__util__wrapper_arg_6);

#line 284 "make.util.c"
static MR_bool MR_CALL 
make__util____Unify____build_2_0_10001(
#line 287 "make.util.c"
  MR_Box make__util__wrapper_arg_1,
#line 289 "make.util.c"
  MR_Box make__util__wrapper_arg_2,
#line 291 "make.util.c"
  MR_Box make__util__wrapper_arg_3,
#line 293 "make.util.c"
  MR_Box make__util__wrapper_arg_4);

#line 296 "make.util.c"
static void MR_CALL 
make__util____Compare____build_2_0_10001(
#line 299 "make.util.c"
  MR_Box make__util__wrapper_arg_1,
#line 301 "make.util.c"
  MR_Box make__util__wrapper_arg_2,
#line 303 "make.util.c"
  MR_Box * make__util__wrapper_arg_3,
#line 305 "make.util.c"
  MR_Box make__util__wrapper_arg_4,
#line 307 "make.util.c"
  MR_Box make__util__wrapper_arg_5);

#line 310 "make.util.c"
static MR_bool MR_CALL 
make__util____Unify____build_1_0_10001(
#line 313 "make.util.c"
  MR_Box make__util__wrapper_arg_1,
#line 315 "make.util.c"
  MR_Box make__util__wrapper_arg_2,
#line 317 "make.util.c"
  MR_Box make__util__wrapper_arg_3);

#line 320 "make.util.c"
static void MR_CALL 
make__util____Compare____build_1_0_10001(
#line 323 "make.util.c"
  MR_Box make__util__wrapper_arg_1,
#line 325 "make.util.c"
  MR_Box * make__util__wrapper_arg_2,
#line 327 "make.util.c"
  MR_Box make__util__wrapper_arg_3,
#line 329 "make.util.c"
  MR_Box make__util__wrapper_arg_4);

#line 332 "make.util.c"
static MR_bool MR_CALL 
make__util____Unify____build2_2_0_10001(
#line 335 "make.util.c"
  MR_Box make__util__wrapper_arg_1,
#line 337 "make.util.c"
  MR_Box make__util__wrapper_arg_2,
#line 339 "make.util.c"
  MR_Box make__util__wrapper_arg_3,
#line 341 "make.util.c"
  MR_Box make__util__wrapper_arg_4);

#line 344 "make.util.c"
static void MR_CALL 
make__util____Compare____build2_2_0_10001(
#line 347 "make.util.c"
  MR_Box make__util__wrapper_arg_1,
#line 349 "make.util.c"
  MR_Box make__util__wrapper_arg_2,
#line 351 "make.util.c"
  MR_Box * make__util__wrapper_arg_3,
#line 353 "make.util.c"
  MR_Box make__util__wrapper_arg_4,
#line 355 "make.util.c"
  MR_Box make__util__wrapper_arg_5);

#line 358 "make.util.c"
static MR_bool MR_CALL 
make__util____Unify____foldl2_pred_with_status_3_0_10001(
#line 361 "make.util.c"
  MR_Box make__util__wrapper_arg_1,
#line 363 "make.util.c"
  MR_Box make__util__wrapper_arg_2,
#line 365 "make.util.c"
  MR_Box make__util__wrapper_arg_3,
#line 367 "make.util.c"
  MR_Box make__util__wrapper_arg_4,
#line 369 "make.util.c"
  MR_Box make__util__wrapper_arg_5);

#line 372 "make.util.c"
static void MR_CALL 
make__util____Compare____foldl2_pred_with_status_3_0_10001(
#line 375 "make.util.c"
  MR_Box make__util__wrapper_arg_1,
#line 377 "make.util.c"
  MR_Box make__util__wrapper_arg_2,
#line 379 "make.util.c"
  MR_Box make__util__wrapper_arg_3,
#line 381 "make.util.c"
  MR_Box * make__util__wrapper_arg_4,
#line 383 "make.util.c"
  MR_Box make__util__wrapper_arg_5,
#line 385 "make.util.c"
  MR_Box make__util__wrapper_arg_6);

#line 388 "make.util.c"
static MR_bool MR_CALL 
make__util____Unify____foldl3_pred_with_status_4_0_10001(
#line 391 "make.util.c"
  MR_Box make__util__wrapper_arg_1,
#line 393 "make.util.c"
  MR_Box make__util__wrapper_arg_2,
#line 395 "make.util.c"
  MR_Box make__util__wrapper_arg_3,
#line 397 "make.util.c"
  MR_Box make__util__wrapper_arg_4,
#line 399 "make.util.c"
  MR_Box make__util__wrapper_arg_5,
#line 401 "make.util.c"
  MR_Box make__util__wrapper_arg_6);

#line 404 "make.util.c"
static void MR_CALL 
make__util____Compare____foldl3_pred_with_status_4_0_10001(
#line 407 "make.util.c"
  MR_Box make__util__wrapper_arg_1,
#line 409 "make.util.c"
  MR_Box make__util__wrapper_arg_2,
#line 411 "make.util.c"
  MR_Box make__util__wrapper_arg_3,
#line 413 "make.util.c"
  MR_Box make__util__wrapper_arg_4,
#line 415 "make.util.c"
  MR_Box * make__util__wrapper_arg_5,
#line 417 "make.util.c"
  MR_Box make__util__wrapper_arg_6,
#line 419 "make.util.c"
  MR_Box make__util__wrapper_arg_7);

#line 422 "make.util.c"
static MR_bool MR_CALL 
make__util____Unify____job_ctl_0_0_10001(
#line 425 "make.util.c"
  MR_Box make__util__wrapper_arg_1,
#line 427 "make.util.c"
  MR_Box make__util__wrapper_arg_2);

#line 430 "make.util.c"
static void MR_CALL 
make__util____Compare____job_ctl_0_0_10001(
#line 433 "make.util.c"
  MR_Box * make__util__wrapper_arg_1,
#line 435 "make.util.c"
  MR_Box make__util__wrapper_arg_2,
#line 437 "make.util.c"
  MR_Box make__util__wrapper_arg_3);

#line 440 "make.util.c"
static MR_bool MR_CALL 
make__util____Unify____stdout_lock_0_0_10001(
#line 443 "make.util.c"
  MR_Box make__util__wrapper_arg_1,
#line 445 "make.util.c"
  MR_Box make__util__wrapper_arg_2);

#line 448 "make.util.c"
static void MR_CALL 
make__util____Compare____stdout_lock_0_0_10001(
#line 451 "make.util.c"
  MR_Box * make__util__wrapper_arg_1,
#line 453 "make.util.c"
  MR_Box make__util__wrapper_arg_2,
#line 455 "make.util.c"
  MR_Box make__util__wrapper_arg_3);

#line 1020 "make.util.m"
static void MR_CALL 
make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_97_114_103_115_95_105_110_118_111_107_101_100_95_95_104_111_49_52_95_95_91_49_48_93_95_48_13_p_0(
#line 1020 "make.util.m"
  MR_Word make__util__V_56_56,
#line 1020 "make.util.m"
  MR_Word make__util__V_57_57,
#line 1020 "make.util.m"
  MR_Word make__util__Globals_14,
#line 1020 "make.util.m"
  MR_Word make__util__InvokedByMmcMake_15,
#line 1020 "make.util.m"
  MR_Word make__util__ModuleName_16,
#line 1020 "make.util.m"
  MR_Word make__util__DetectedGradeFlags_17,
#line 1020 "make.util.m"
  MR_Word make__util__OptionVariables_18,
#line 1020 "make.util.m"
  MR_Word make__util__OptionArgs_19,
#line 1020 "make.util.m"
  MR_Word make__util__ExtraOptions_20,
#line 1020 "make.util.m"
  MR_Word * make__util__Succeeded_22,
#line 1020 "make.util.m"
  MR_Word make__util__Info0_23,
#line 1020 "make.util.m"
  MR_Word * make__util__MaybeInfo_24);

#line 945 "make.util.m"
static void MR_CALL 
make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_105_116_104_95_108_111_99_107_101_100_95_115_116_100_111_117_116_95_95_104_111_49_50_95_95_91_52_93_95_48_4_p_0(
#line 945 "make.util.m"
  MR_String make__util__V_35_35,
#line 945 "make.util.m"
  MR_Word make__util__V_36_36,
#line 945 "make.util.m"
  MR_Word make__util__Info_5);

#line 945 "make.util.m"
static void MR_CALL 
make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_105_116_104_95_108_111_99_107_101_100_95_115_116_100_111_117_116_95_95_104_111_49_49_95_95_91_55_93_95_48_4_p_0(
#line 945 "make.util.m"
  MR_String make__util__V_35_35,
#line 945 "make.util.m"
  MR_Word make__util__V_36_36,
#line 945 "make.util.m"
  MR_Word make__util__V_37_37,
#line 945 "make.util.m"
  MR_Word make__util__V_38_38,
#line 945 "make.util.m"
  MR_Integer make__util__V_39_39,
#line 945 "make.util.m"
  MR_Word make__util__Info_5);

#line 88 "make.util.m"
static void MR_CALL 
make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_95_104_111_49_48_95_95_91_54_93_95_48_9_p_0(
#line 88 "make.util.m"
  MR_Word make__util__V_86_86,
#line 88 "make.util.m"
  MR_Word make__util__V_87_87,
#line 88 "make.util.m"
  MR_Word make__util__Globals_10,
#line 88 "make.util.m"
  MR_Word make__util__ModuleName_11,
#line 88 "make.util.m"
  MR_Word make__util__ExtraOptions_12,
#line 88 "make.util.m"
  MR_Word * make__util__Succeeded_14,
#line 88 "make.util.m"
  MR_Word make__util__STATE_VARIABLE_Info_0_18,
#line 88 "make.util.m"
  MR_Word * make__util__STATE_VARIABLE_Info_19);

#line 462 "make.util.m"
static void MR_CALL 
make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_112_97_114_97_108_108_101_108_95_112_114_111_99_101_115_115_101_115_95_95_52_54_50_95_95_49_95_95_91_56_93_95_48_12_p_0(
#line 462 "make.util.m"
  MR_Word make__util__TypeInfo_for_T_88,
#line 462 "make.util.m"
  MR_Word make__util__KeepGoing_11,
#line 462 "make.util.m"
  MR_Word make__util__MakeTarget_13,
#line 462 "make.util.m"
  MR_Word make__util__Globals_14,
#line 462 "make.util.m"
  MR_Word make__util__Targets_15,
#line 462 "make.util.m"
  MR_Box make__util__JobCtl_21,
#line 462 "make.util.m"
  MR_Word make__util__STATE_VARIABLE_Info_30_30,
#line 462 "make.util.m"
  MR_Word make__util__HeadVar__9_90,
#line 462 "make.util.m"
  MR_Word * make__util__HeadVar__10_91);

#line 1020 "make.util.m"
static void MR_CALL 
make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_97_114_103_115_95_105_110_118_111_107_101_100_95_95_91_49_44_32_50_93_95_48_13_p_0(
#line 1020 "make.util.m"
  MR_Word make__util__Globals_14,
#line 1020 "make.util.m"
  MR_Word make__util__InvokedByMmcMake_15,
#line 1020 "make.util.m"
  MR_Word make__util__ModuleName_16,
#line 1020 "make.util.m"
  MR_Word make__util__DetectedGradeFlags_17,
#line 1020 "make.util.m"
  MR_Word make__util__OptionVariables_18,
#line 1020 "make.util.m"
  MR_Word make__util__OptionArgs_19,
#line 1020 "make.util.m"
  MR_Word make__util__ExtraOptions_20,
#line 1020 "make.util.m"
  MR_Word make__util__Build_21,
#line 1020 "make.util.m"
  MR_Word * make__util__Succeeded_22,
#line 1020 "make.util.m"
  MR_Box make__util__Info0_23,
#line 1020 "make.util.m"
  MR_Word * make__util__MaybeInfo_24);

#line 485 "make.util.m"
static void MR_CALL 
make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_95_119_111_114_107_101_114_95_112_114_111_99_101_115_115_95_95_91_57_93_95_48_11_p_0_1(
#line 485 "make.util.m"
  MR_Box make__util__closure_arg,
#line 485 "make.util.m"
  MR_Box * make__util__wrapper_arg_1,
#line 485 "make.util.m"
  MR_Box make__util__wrapper_arg_2,
#line 485 "make.util.m"
  MR_Box * make__util__wrapper_arg_3);

#line 477 "make.util.m"
static void MR_CALL 
make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_95_119_111_114_107_101_114_95_112_114_111_99_101_115_115_95_95_91_57_93_95_48_11_p_0(
#line 477 "make.util.m"
  MR_Word make__util__TypeInfo_for_T_30,
#line 477 "make.util.m"
  MR_Word make__util__TypeInfo_for_Info_31,
#line 477 "make.util.m"
  MR_Word make__util__Globals_12,
#line 477 "make.util.m"
  MR_Word make__util__KeepGoing_13,
#line 477 "make.util.m"
  MR_Word make__util__MakeTarget_14,
#line 477 "make.util.m"
  MR_Word make__util__Targets_15,
#line 477 "make.util.m"
  MR_Box make__util__JobCtl_16,
#line 477 "make.util.m"
  MR_Box make__util__Info_17,
#line 477 "make.util.m"
  MR_Word make__util__STATE_VARIABLE_Pids_0_23,
#line 477 "make.util.m"
  MR_Word * make__util__STATE_VARIABLE_Pids_24);

#line 394 "make.util.m"
static void MR_CALL 
make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_50_95_95_91_49_44_32_50_44_32_51_44_32_52_93_95_48_12_p_0(
#line 394 "make.util.m"
  MR_Word make__util__HeadVar__1_1,
#line 394 "make.util.m"
  MR_Word make__util__HeadVar__2_2,
#line 394 "make.util.m"
  MR_Word make__util__HeadVar__3_3,
#line 394 "make.util.m"
  MR_Word make__util__HeadVar__4_4,
#line 394 "make.util.m"
  MR_Word make__util__STATE_VARIABLE_Success_0_5,
#line 394 "make.util.m"
  MR_Word * make__util__STATE_VARIABLE_Success_6,
#line 394 "make.util.m"
  MR_Box make__util__STATE_VARIABLE_Acc_0_7,
#line 394 "make.util.m"
  MR_Box * make__util__STATE_VARIABLE_Acc_8,
#line 394 "make.util.m"
  MR_Box make__util__STATE_VARIABLE_Info_0_9,
#line 394 "make.util.m"
  MR_Box * make__util__STATE_VARIABLE_Info_10,
#line 394 "make.util.m"
  MR_Box make__util__STATE_VARIABLE_IO_0_11,
#line 394 "make.util.m"
  MR_Box * make__util__STATE_VARIABLE_IO_12);

#line 367 "make.util.m"
static void MR_CALL 
make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_50_95_95_91_49_44_32_50_44_32_51_93_95_48_10_p_0(
#line 367 "make.util.m"
  MR_Word make__util__HeadVar__1_1,
#line 367 "make.util.m"
  MR_Word make__util__HeadVar__2_2,
#line 367 "make.util.m"
  MR_Word make__util__HeadVar__3_3,
#line 367 "make.util.m"
  MR_Word make__util__HeadVar__4_4,
#line 367 "make.util.m"
  MR_Word make__util__STATE_VARIABLE_Success_0_5,
#line 367 "make.util.m"
  MR_Word * make__util__STATE_VARIABLE_Success_6,
#line 367 "make.util.m"
  MR_Box make__util__STATE_VARIABLE_Info_0_7,
#line 367 "make.util.m"
  MR_Box * make__util__STATE_VARIABLE_Info_8,
#line 367 "make.util.m"
  MR_Box make__util__STATE_VARIABLE_IO_0_9,
#line 367 "make.util.m"
  MR_Box * make__util__STATE_VARIABLE_IO_10);

#line 468 "make.util.m"
static void MR_CALL 
make__util__IntroducedFrom__pred__foldl2_maybe_stop_at_error_parallel_processes__468__1_6_p_0(
#line 468 "make.util.m"
  MR_Box make__util__JobCtl_21,
#line 468 "make.util.m"
  MR_Word make__util__Pids_22,
#line 468 "make.util.m"
  MR_Word make__util__HeadVar__3_104,
#line 468 "make.util.m"
  MR_Word * make__util__HeadVar__4_105);

#line 467 "make.util.m"
static void MR_CALL 
make__util__IntroducedFrom__pred__foldl2_maybe_stop_at_error_parallel_processes__467__1_12_p_0(
#line 467 "make.util.m"
  MR_Word make__util__TypeInfo_for_T_88,
#line 467 "make.util.m"
  MR_Word make__util__KeepGoing_11,
#line 467 "make.util.m"
  MR_Word make__util__MakeTarget_13,
#line 467 "make.util.m"
  MR_Word make__util__Globals_14,
#line 467 "make.util.m"
  MR_Word make__util__Targets_15,
#line 467 "make.util.m"
  MR_Box make__util__JobCtl_21,
#line 467 "make.util.m"
  MR_Word make__util__HeadVar__7_42,
#line 467 "make.util.m"
  MR_Word * make__util__HeadVar__8_98,
#line 467 "make.util.m"
  MR_Word make__util__HeadVar__9_99,
#line 467 "make.util.m"
  MR_Word * make__util__HeadVar__10_100);

#line 462 "make.util.m"
static void MR_CALL 
make__util__IntroducedFrom__pred__foldl2_maybe_stop_at_error_parallel_processes__462__1_12_p_0(
#line 462 "make.util.m"
  MR_Word make__util__TypeInfo_for_T_88,
#line 462 "make.util.m"
  MR_Word make__util__KeepGoing_11,
#line 462 "make.util.m"
  MR_Word make__util__MakeTarget_13,
#line 462 "make.util.m"
  MR_Word make__util__Globals_14,
#line 462 "make.util.m"
  MR_Word make__util__Targets_15,
#line 462 "make.util.m"
  MR_Box make__util__JobCtl_21,
#line 462 "make.util.m"
  MR_Word make__util__STATE_VARIABLE_Info_30_30,
#line 462 "make.util.m"
  MR_Integer make__util__HeadVar__8_89,
#line 462 "make.util.m"
  MR_Word make__util__HeadVar__9_90,
#line 462 "make.util.m"
  MR_Word * make__util__HeadVar__10_91);

#line 1845 "make.util.m"
static void MR_CALL 
make__util__IntroducedFrom__pred__maybe_symlink_or_copy_linked_target_message__1845__1_4_p_0(
#line 1845 "make.util.m"
  MR_Word make__util__Globals_5,
#line 1845 "make.util.m"
  MR_Word make__util__Target_6);

#line 1456 "make.util.m"
static MR_Word MR_CALL 
make__util__IntroducedFrom__func__make_dependency_list__1456__1_2_f_0(
#line 1456 "make.util.m"
  MR_Word make__util__FileType_5,
#line 1456 "make.util.m"
  MR_Word make__util__HeadVar__2_8);

#line 1452 "make.util.m"
static MR_Word MR_CALL 
make__util__IntroducedFrom__func__make_target_file_list__1452__1_2_f_0(
#line 1452 "make.util.m"
  MR_Word make__util__FileType_5,
#line 1452 "make.util.m"
  MR_Word make__util__HeadVar__2_8);

#line 1852 "make.util.m"
static void MR_CALL 
make__util__make_write_module_or_linked_target_4_p_0(
#line 1852 "make.util.m"
  MR_Word make__util__Globals_5,
#line 1852 "make.util.m"
  MR_Word make__util__HeadVar__2_2);

#line 1554 "make.util.m"
static void MR_CALL 
make__util__module_target_to_file_name_maybe_search_8_p_0(
#line 1554 "make.util.m"
  MR_Word make__util__Globals_9,
#line 1554 "make.util.m"
  MR_Word make__util__ModuleName_10,
#line 1554 "make.util.m"
  MR_Word make__util__TargetType_11,
#line 1554 "make.util.m"
  MR_Word make__util__MkDir_12,
#line 1554 "make.util.m"
  MR_Word make__util__Search_13,
#line 1554 "make.util.m"
  MR_String * make__util__FileName_14);

#line 1382 "make.util.m"
static void MR_CALL 
make__util__get_search_directories_3_p_0(
#line 1382 "make.util.m"
  MR_Word make__util__Globals_4,
#line 1382 "make.util.m"
  MR_Word make__util__FileType_5,
#line 1382 "make.util.m"
  MR_Word * make__util__SearchDirs_6);

#line 1351 "make.util.m"
static void MR_CALL 
make__util__module_name_to_search_file_name_cache_8_p_0(
#line 1351 "make.util.m"
  MR_Word make__util__Globals_9,
#line 1351 "make.util.m"
  MR_Word make__util__ModuleName_10,
#line 1351 "make.util.m"
  MR_String make__util__Ext_11,
#line 1351 "make.util.m"
  MR_String * make__util__FileName_12,
#line 1351 "make.util.m"
  MR_Word make__util__STATE_VARIABLE_Info_0_17,
#line 1351 "make.util.m"
  MR_Word * make__util__STATE_VARIABLE_Info_18);

#line 1271 "make.util.m"
static void MR_CALL 
make__util__get_target_timestamp_2_9_p_0(
#line 1271 "make.util.m"
  MR_Word make__util__Globals_10,
#line 1271 "make.util.m"
  MR_Word make__util__Search_11,
#line 1271 "make.util.m"
  MR_Word make__util__TargetFile_12,
#line 1271 "make.util.m"
  MR_String make__util__FileName_13,
#line 1271 "make.util.m"
  MR_Word * make__util__MaybeTimestamp_14,
#line 1271 "make.util.m"
  MR_Word make__util__STATE_VARIABLE_Info_0_24,
#line 1271 "make.util.m"
  MR_Word * make__util__STATE_VARIABLE_Info_25);

#line 1247 "make.util.m"
static void MR_CALL 
make__util__get_target_timestamp_analysis_registry_9_p_0(
#line 1247 "make.util.m"
  MR_Word make__util__Globals_10,
#line 1247 "make.util.m"
  MR_Word make__util__Search_11,
#line 1247 "make.util.m"
  MR_Word make__util__TargetFile_12,
#line 1247 "make.util.m"
  MR_String make__util__FileName_13,
#line 1247 "make.util.m"
  MR_Word * make__util__MaybeTimestamp_14,
#line 1247 "make.util.m"
  MR_Word make__util__STATE_VARIABLE_Info_0_21,
#line 1247 "make.util.m"
  MR_Word * make__util__STATE_VARIABLE_Info_22);

#line 1175 "make.util.m"
static void MR_CALL 
make__util__write_error_opening_file_4_p_0(
#line 1175 "make.util.m"
  MR_String make__util__FileName_5,
#line 1175 "make.util.m"
  MR_Word make__util__Error_6);

#line 1168 "make.util.m"
static void MR_CALL 
make__util__write_error_opening_output_4_p_0(
#line 1168 "make.util.m"
  MR_String make__util__FileName_5,
#line 1168 "make.util.m"
  MR_Word make__util__Error_6);

#line 1143 "make.util.m"
static void MR_CALL 
make__util__make_write_error_char_7_p_0(
#line 1143 "make.util.m"
  MR_Word make__util__FullOutputStream_8,
#line 1143 "make.util.m"
  MR_Word make__util__PartialOutputStream_9,
#line 1143 "make.util.m"
  MR_Char make__util__Char_10,
#line 1143 "make.util.m"
  MR_Integer make__util__STATE_VARIABLE_LinesRemaining_0_14,
#line 1143 "make.util.m"
  MR_Integer * make__util__STATE_VARIABLE_LinesRemaining_15);

#line 1133 "make.util.m"
static void MR_CALL 
make__util__make_write_error_streams_7_p_0_1(
#line 1133 "make.util.m"
  MR_Box make__util__closure_arg,
#line 1133 "make.util.m"
  MR_Box make__util__wrapper_arg_1,
#line 1133 "make.util.m"
  MR_Box make__util__wrapper_arg_2,
#line 1133 "make.util.m"
  MR_Box * make__util__wrapper_arg_3,
#line 1133 "make.util.m"
  MR_Box make__util__wrapper_arg_4,
#line 1133 "make.util.m"
  MR_Box * make__util__wrapper_arg_5);

#line 1126 "make.util.m"
static void MR_CALL 
make__util__make_write_error_streams_7_p_0(
#line 1126 "make.util.m"
  MR_String make__util__FileName_8,
#line 1126 "make.util.m"
  MR_Word make__util__InputStream_9,
#line 1126 "make.util.m"
  MR_Word make__util__FullOutputStream_10,
#line 1126 "make.util.m"
  MR_Word make__util__PartialOutputStream_11,
#line 1126 "make.util.m"
  MR_Integer make__util__LinesToWrite_12);

#line 969 "make.util.m"
static void MR_CALL 
make__util__build_with_module_options_and_output_redirect_2_9_p_0(
#line 969 "make.util.m"
  MR_Word make__util__ModuleName_10,
#line 969 "make.util.m"
  MR_Word make__util__Build_11,
#line 969 "make.util.m"
  MR_Word make__util__Globals_12,
#line 969 "make.util.m"
  MR_Word make__util__AllOptions_13,
#line 969 "make.util.m"
  MR_Word * make__util__Succeeded_14,
#line 969 "make.util.m"
  MR_Word make__util__STATE_VARIABLE_Info_0_17,
#line 969 "make.util.m"
  MR_Word * make__util__STATE_VARIABLE_Info_18);

#line 931 "make.util.m"
static void MR_CALL 
make__util__unlock_stdout_3_p_0(
#line 931 "make.util.m"
  MR_Box make__util__JobCtl_1);

#line 917 "make.util.m"
static void MR_CALL 
make__util__lock_stdout_3_p_0(
#line 917 "make.util.m"
  MR_Box make__util__JobCtl_1);

#line 902 "make.util.m"
static MR_Word MR_CALL 
make__util__make_no_job_ctl_0_f_0(void);

#line 896 "make.util.m"
static MR_Word MR_CALL 
make__util__make_yes_job_ctl_1_f_0(
#line 896 "make.util.m"
  MR_Box make__util__JobCtl_3);

#line 879 "make.util.m"
static void MR_CALL 
make__util__mark_abort_3_p_0(
#line 879 "make.util.m"
  MR_Box make__util__JobCtl_1);

#line 856 "make.util.m"
static void MR_CALL 
make__util__mark_task_error_5_p_0(
#line 856 "make.util.m"
  MR_Box make__util__JobCtl_1,
#line 856 "make.util.m"
  MR_Integer make__util__TaskNumber_2,
#line 856 "make.util.m"
  MR_Word make__util__KeepGoing_3);

#line 839 "make.util.m"
static void MR_CALL 
make__util__mark_task_done_4_p_0(
#line 839 "make.util.m"
  MR_Box make__util__JobCtl_1,
#line 839 "make.util.m"
  MR_Integer make__util__TaskNumber_2);

#line 808 "make.util.m"
static void MR_CALL 
make__util__accept_task_4_p_0(
#line 808 "make.util.m"
  MR_Box make__util__JobCtl_1,
#line 808 "make.util.m"
  MR_Integer * make__util__TaskNumber_2);

#line 787 "make.util.m"
static void MR_CALL 
make__util__destroy_job_ctl_3_p_0(
#line 787 "make.util.m"
  MR_Box make__util__JobCtl_1);

#line 763 "make.util.m"
static void MR_CALL 
make__util__create_job_ctl_4_p_0(
#line 763 "make.util.m"
  MR_Integer make__util__TotalJobs_1,
#line 763 "make.util.m"
  MR_Word * make__util__MaybeJobCtl_2);

#line 747 "make.util.m"
static MR_bool MR_CALL 
make__util__have_job_ctl_ipc_0_p_0(void);

#line 538 "make.util.m"
static void MR_CALL 
make__util__reap_worker_process_5_p_0(
#line 538 "make.util.m"
  MR_Integer make__util__Pid_6,
#line 538 "make.util.m"
  MR_Word make__util__STATE_VARIABLE_Success_0_10,
#line 538 "make.util.m"
  MR_Word * make__util__STATE_VARIABLE_Success_11);

#line 536 "make.util.m"
static void MR_CALL 
make__util__worker_loop_signal_cleanup_6_p_0_1(
#line 536 "make.util.m"
  MR_Box make__util__closure_arg,
#line 536 "make.util.m"
  MR_Box make__util__wrapper_arg_1,
#line 536 "make.util.m"
  MR_Box make__util__wrapper_arg_2,
#line 536 "make.util.m"
  MR_Box * make__util__wrapper_arg_3);

#line 531 "make.util.m"
static void MR_CALL 
make__util__worker_loop_signal_cleanup_6_p_0(
#line 531 "make.util.m"
  MR_Word make__util__TypeInfo_for_Info_19,
#line 531 "make.util.m"
  MR_Box make__util__JobCtl_7,
#line 531 "make.util.m"
  MR_Word make__util__Pids_8,
#line 531 "make.util.m"
  MR_Box make__util__STATE_VARIABLE_Info_0_11,
#line 531 "make.util.m"
  MR_Box * make__util__STATE_VARIABLE_Info_12);

#line 505 "make.util.m"
static void MR_CALL 
make__util__worker_loop_11_p_0(
#line 505 "make.util.m"
  MR_Word make__util__TypeInfo_for_T_39,
#line 505 "make.util.m"
  MR_Word make__util__TypeInfo_for_Info_40,
#line 505 "make.util.m"
  MR_Word make__util__Globals_12,
#line 505 "make.util.m"
  MR_Word make__util__KeepGoing_13,
#line 505 "make.util.m"
  MR_Word make__util__MakeTarget_14,
#line 505 "make.util.m"
  MR_Word make__util__Targets_15,
#line 505 "make.util.m"
  MR_Box make__util__JobCtl_16,
#line 505 "make.util.m"
  MR_Word make__util__STATE_VARIABLE_Success_0_23,
#line 505 "make.util.m"
  MR_Word * make__util__STATE_VARIABLE_Success_24,
#line 505 "make.util.m"
  MR_Box make__util__STATE_VARIABLE_Info_0_25,
#line 505 "make.util.m"
  MR_Box * make__util__STATE_VARIABLE_Info_26);

#line 503 "make.util.m"
static void MR_CALL 
make__util__child_worker_9_p_0_2(
#line 503 "make.util.m"
  MR_Box make__util__closure_arg,
#line 503 "make.util.m"
  MR_Box make__util__wrapper_arg_1,
#line 503 "make.util.m"
  MR_Box * make__util__wrapper_arg_2,
#line 503 "make.util.m"
  MR_Box make__util__wrapper_arg_3,
#line 503 "make.util.m"
  MR_Box * make__util__wrapper_arg_4);

#line 502 "make.util.m"
static void MR_CALL 
make__util__child_worker_9_p_0_1(
#line 502 "make.util.m"
  MR_Box make__util__closure_arg,
#line 502 "make.util.m"
  MR_Box * make__util__wrapper_arg_1,
#line 502 "make.util.m"
  MR_Box make__util__wrapper_arg_2,
#line 502 "make.util.m"
  MR_Box * make__util__wrapper_arg_3,
#line 502 "make.util.m"
  MR_Box make__util__wrapper_arg_4,
#line 502 "make.util.m"
  MR_Box * make__util__wrapper_arg_5);

#line 494 "make.util.m"
static void MR_CALL 
make__util__child_worker_9_p_0(
#line 494 "make.util.m"
  MR_Word make__util__TypeInfo_for_T_28,
#line 494 "make.util.m"
  MR_Word make__util__TypeInfo_for_Info_29,
#line 494 "make.util.m"
  MR_Word make__util__Globals_10,
#line 494 "make.util.m"
  MR_Word make__util__KeepGoing_11,
#line 494 "make.util.m"
  MR_Word make__util__MakeTarget_12,
#line 494 "make.util.m"
  MR_Word make__util__Targets_13,
#line 494 "make.util.m"
  MR_Box make__util__JobCtl_14,
#line 494 "make.util.m"
  MR_Box make__util__Info0_15,
#line 494 "make.util.m"
  MR_Word * make__util__Success_16);

#line 469 "make.util.m"
static void MR_CALL 
make__util__foldl2_maybe_stop_at_error_parallel_processes_10_p_0_4(
#line 469 "make.util.m"
  MR_Box make__util__closure_arg,
#line 469 "make.util.m"
  MR_Box make__util__wrapper_arg_1,
#line 469 "make.util.m"
  MR_Box make__util__wrapper_arg_2,
#line 469 "make.util.m"
  MR_Box * make__util__wrapper_arg_3,
#line 469 "make.util.m"
  MR_Box make__util__wrapper_arg_4,
#line 469 "make.util.m"
  MR_Box * make__util__wrapper_arg_5);

#line 468 "make.util.m"
static void MR_CALL 
make__util__foldl2_maybe_stop_at_error_parallel_processes_10_p_0_3(
#line 468 "make.util.m"
  MR_Box make__util__closure_arg,
#line 468 "make.util.m"
  MR_Box make__util__wrapper_arg_1,
#line 468 "make.util.m"
  MR_Box * make__util__wrapper_arg_2,
#line 468 "make.util.m"
  MR_Box make__util__wrapper_arg_3,
#line 468 "make.util.m"
  MR_Box * make__util__wrapper_arg_4);

#line 467 "make.util.m"
static void MR_CALL 
make__util__foldl2_maybe_stop_at_error_parallel_processes_10_p_0_2(
#line 467 "make.util.m"
  MR_Box make__util__closure_arg,
#line 467 "make.util.m"
  MR_Box * make__util__wrapper_arg_1,
#line 467 "make.util.m"
  MR_Box make__util__wrapper_arg_2,
#line 467 "make.util.m"
  MR_Box * make__util__wrapper_arg_3,
#line 467 "make.util.m"
  MR_Box make__util__wrapper_arg_4,
#line 467 "make.util.m"
  MR_Box * make__util__wrapper_arg_5);

#line 462 "make.util.m"
static void MR_CALL 
make__util__foldl2_maybe_stop_at_error_parallel_processes_10_p_0_1(
#line 462 "make.util.m"
  MR_Box make__util__closure_arg,
#line 462 "make.util.m"
  MR_Box make__util__wrapper_arg_1,
#line 462 "make.util.m"
  MR_Box make__util__wrapper_arg_2,
#line 462 "make.util.m"
  MR_Box * make__util__wrapper_arg_3,
#line 462 "make.util.m"
  MR_Box make__util__wrapper_arg_4,
#line 462 "make.util.m"
  MR_Box * make__util__wrapper_arg_5);

#line 449 "make.util.m"
static void MR_CALL 
make__util__foldl2_maybe_stop_at_error_parallel_processes_10_p_0(
#line 449 "make.util.m"
  MR_Word make__util__TypeInfo_for_T_88,
#line 449 "make.util.m"
  MR_Word make__util__KeepGoing_11,
#line 449 "make.util.m"
  MR_Integer make__util__Jobs_12,
#line 449 "make.util.m"
  MR_Word make__util__MakeTarget_13,
#line 449 "make.util.m"
  MR_Word make__util__Globals_14,
#line 449 "make.util.m"
  MR_Word make__util__Targets_15,
#line 449 "make.util.m"
  MR_Word * make__util__Success_16,
#line 449 "make.util.m"
  MR_Word make__util__STATE_VARIABLE_Info_0_25,
#line 449 "make.util.m"
  MR_Word * make__util__STATE_VARIABLE_Info_26);

#line 1456 "make.util.m"
static MR_Box MR_CALL 
make__util__make_dependency_list_2_f_0_1(
#line 1456 "make.util.m"
  MR_Box make__util__closure_arg,
#line 1456 "make.util.m"
  MR_Box make__util__wrapper_arg_1);

#line 1452 "make.util.m"
static MR_Box MR_CALL 
make__util__make_target_file_list_2_f_0_1(
#line 1452 "make.util.m"
  MR_Box make__util__closure_arg,
#line 1452 "make.util.m"
  MR_Box make__util__wrapper_arg_1);


static /* final */ const MR_Box make__util_scalar_common_1[4][3];

static /* final */ const MR_Box make__util_scalar_common_2[4][2];

static /* final */ const MR_Box make__util_scalar_common_3[26][1];

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

static /* final */ const MR_Box make__util_scalar_common_3[26][1] = {
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
    ((MR_Box) ((MR_String) ".dll"))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) ".il"))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) ".opt"))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) ".class"))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) ".java"))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_String) ".int"))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_String) ".int0"))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_String) ".int2"))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_String) ".m"))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_String) ".track_flags"))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_String) ".int3"))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_String) ".xml"))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 24 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
  /* row 25 */
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



#include "make.util.mh"
#include "dir.mh"
#include "dir.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "version_array.mh"
#include "version_array.mh"
#include "libs.process_util.mh"
#include "libs.process_util.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#line 628 "make.util.m"


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

#line 897 "make.util.m"
MR_Word 
MC_make_yes_job_ctl(
#line 897 "make.util.m"
  MC_JobCtl * make__util__JobCtl_3)
#line 897 "make.util.m"
{
#line 897 "make.util.m"
	MR_Box make__util__boxed_JobCtl_3;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(MC_JobCtl *, make__util__JobCtl_3, make__util__boxed_JobCtl_3);
	ret_value = (MR_Word)make__util__make_yes_job_ctl_1_f_0(make__util__boxed_JobCtl_3);
	return ret_value;
}

#line 903 "make.util.m"
MR_Word 
MC_make_no_job_ctl(void)
#line 903 "make.util.m"
{
#line 903 "make.util.m"
	MR_Word ret_value;
	ret_value = (MR_Word)make__util__make_no_job_ctl_0_f_0();
	return ret_value;
}


#line 1734 "make.util.c"
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

#line 1749 "make.util.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__util__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1757 "make.util.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__util__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1765 "make.util.c"
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

#line 1780 "make.util.c"
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

#line 1795 "make.util.c"
const MR_TypeCtorInfo_Struct make__util__make__util__type_ctor_info_build_3 = {
  (MR_Integer) 3,
  (MR_Integer) 15,
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

#line 1812 "make.util.c"
const MR_TypeCtorInfo_Struct make__util__make__util__type_ctor_info_build_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
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

#line 1829 "make.util.c"
const MR_TypeCtorInfo_Struct make__util__make__util__type_ctor_info_build_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
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

#line 1846 "make.util.c"
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

#line 1862 "make.util.c"
const MR_TypeCtorInfo_Struct make__util__make__util__type_ctor_info_build2_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
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

#line 1879 "make.util.c"
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

#line 1894 "make.util.c"
const MR_TypeCtorInfo_Struct make__util__make__util__type_ctor_info_foldl2_pred_with_status_3 = {
  (MR_Integer) 3,
  (MR_Integer) 15,
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

#line 1911 "make.util.c"
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

#line 1928 "make.util.c"
const MR_TypeCtorInfo_Struct make__util__make__util__type_ctor_info_foldl3_pred_with_status_4 = {
  (MR_Integer) 4,
  (MR_Integer) 15,
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

#line 1945 "make.util.c"
const MR_TypeCtorInfo_Struct make__util__make__util__type_ctor_info_job_ctl_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 1962 "make.util.c"
const MR_TypeCtorInfo_Struct make__util__make__util__type_ctor_info_stdout_lock_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 1979 "make.util.c"
static MR_bool MR_CALL 
make__util____Unify____build_3_0_10001(
#line 1982 "make.util.c"
  MR_Box make__util__wrapper_arg_1,
#line 1984 "make.util.c"
  MR_Box make__util__wrapper_arg_2,
#line 1986 "make.util.c"
  MR_Box make__util__wrapper_arg_3,
#line 1988 "make.util.c"
  MR_Box make__util__wrapper_arg_4,
#line 1990 "make.util.c"
  MR_Box make__util__wrapper_arg_5)
#line 1992 "make.util.c"
{
#line 1994 "make.util.c"
  {
#line 1996 "make.util.c"
    MR_bool make__util__succeeded;

#line 1999 "make.util.c"
    {
#line 2001 "make.util.c"
      make__util__succeeded = make__util____Unify____build_3_0(((MR_Word) make__util__wrapper_arg_1), ((MR_Word) make__util__wrapper_arg_2), ((MR_Word) make__util__wrapper_arg_3), ((MR_Word) make__util__wrapper_arg_4), ((MR_Word) make__util__wrapper_arg_5));
    }
#line 2004 "make.util.c"
    return make__util__succeeded;
#line 2006 "make.util.c"
  }
#line 2008 "make.util.c"
}

#line 2011 "make.util.c"
static void MR_CALL 
make__util____Compare____build_3_0_10001(
#line 2014 "make.util.c"
  MR_Box make__util__wrapper_arg_1,
#line 2016 "make.util.c"
  MR_Box make__util__wrapper_arg_2,
#line 2018 "make.util.c"
  MR_Box make__util__wrapper_arg_3,
#line 2020 "make.util.c"
  MR_Box * make__util__wrapper_arg_4,
#line 2022 "make.util.c"
  MR_Box make__util__wrapper_arg_5,
#line 2024 "make.util.c"
  MR_Box make__util__wrapper_arg_6)
#line 2026 "make.util.c"
{
#line 2028 "make.util.c"
  {
#line 2030 "make.util.c"
    MR_Word make__util__conv0_HeadVar__1_1;

#line 2033 "make.util.c"
    {
#line 2035 "make.util.c"
      make__util____Compare____build_3_0(((MR_Word) make__util__wrapper_arg_1), ((MR_Word) make__util__wrapper_arg_2), ((MR_Word) make__util__wrapper_arg_3), &make__util__conv0_HeadVar__1_1, ((MR_Word) make__util__wrapper_arg_5), ((MR_Word) make__util__wrapper_arg_6));
    }
#line 2038 "make.util.c"
    *make__util__wrapper_arg_4 = ((MR_Box) (make__util__conv0_HeadVar__1_1));
#line 2040 "make.util.c"
  }
#line 2042 "make.util.c"
}

#line 2045 "make.util.c"
static MR_bool MR_CALL 
make__util____Unify____build_2_0_10001(
#line 2048 "make.util.c"
  MR_Box make__util__wrapper_arg_1,
#line 2050 "make.util.c"
  MR_Box make__util__wrapper_arg_2,
#line 2052 "make.util.c"
  MR_Box make__util__wrapper_arg_3,
#line 2054 "make.util.c"
  MR_Box make__util__wrapper_arg_4)
#line 2056 "make.util.c"
{
#line 2058 "make.util.c"
  {
#line 2060 "make.util.c"
    MR_bool make__util__succeeded;

#line 2063 "make.util.c"
    {
#line 2065 "make.util.c"
      make__util__succeeded = make__util____Unify____build_2_0(((MR_Word) make__util__wrapper_arg_1), ((MR_Word) make__util__wrapper_arg_2), ((MR_Word) make__util__wrapper_arg_3), ((MR_Word) make__util__wrapper_arg_4));
    }
#line 2068 "make.util.c"
    return make__util__succeeded;
#line 2070 "make.util.c"
  }
#line 2072 "make.util.c"
}

#line 2075 "make.util.c"
static void MR_CALL 
make__util____Compare____build_2_0_10001(
#line 2078 "make.util.c"
  MR_Box make__util__wrapper_arg_1,
#line 2080 "make.util.c"
  MR_Box make__util__wrapper_arg_2,
#line 2082 "make.util.c"
  MR_Box * make__util__wrapper_arg_3,
#line 2084 "make.util.c"
  MR_Box make__util__wrapper_arg_4,
#line 2086 "make.util.c"
  MR_Box make__util__wrapper_arg_5)
#line 2088 "make.util.c"
{
#line 2090 "make.util.c"
  {
#line 2092 "make.util.c"
    MR_Word make__util__conv0_HeadVar__1_1;

#line 2095 "make.util.c"
    {
#line 2097 "make.util.c"
      make__util____Compare____build_2_0(((MR_Word) make__util__wrapper_arg_1), ((MR_Word) make__util__wrapper_arg_2), &make__util__conv0_HeadVar__1_1, ((MR_Word) make__util__wrapper_arg_4), ((MR_Word) make__util__wrapper_arg_5));
    }
#line 2100 "make.util.c"
    *make__util__wrapper_arg_3 = ((MR_Box) (make__util__conv0_HeadVar__1_1));
#line 2102 "make.util.c"
  }
#line 2104 "make.util.c"
}

#line 2107 "make.util.c"
static MR_bool MR_CALL 
make__util____Unify____build_1_0_10001(
#line 2110 "make.util.c"
  MR_Box make__util__wrapper_arg_1,
#line 2112 "make.util.c"
  MR_Box make__util__wrapper_arg_2,
#line 2114 "make.util.c"
  MR_Box make__util__wrapper_arg_3)
#line 2116 "make.util.c"
{
#line 2118 "make.util.c"
  {
#line 2120 "make.util.c"
    MR_bool make__util__succeeded;

#line 2123 "make.util.c"
    {
#line 2125 "make.util.c"
      make__util__succeeded = make__util____Unify____build_1_0(((MR_Word) make__util__wrapper_arg_1), ((MR_Word) make__util__wrapper_arg_2), ((MR_Word) make__util__wrapper_arg_3));
    }
#line 2128 "make.util.c"
    return make__util__succeeded;
#line 2130 "make.util.c"
  }
#line 2132 "make.util.c"
}

#line 2135 "make.util.c"
static void MR_CALL 
make__util____Compare____build_1_0_10001(
#line 2138 "make.util.c"
  MR_Box make__util__wrapper_arg_1,
#line 2140 "make.util.c"
  MR_Box * make__util__wrapper_arg_2,
#line 2142 "make.util.c"
  MR_Box make__util__wrapper_arg_3,
#line 2144 "make.util.c"
  MR_Box make__util__wrapper_arg_4)
#line 2146 "make.util.c"
{
#line 2148 "make.util.c"
  {
#line 2150 "make.util.c"
    MR_Word make__util__conv0_HeadVar__1_1;

#line 2153 "make.util.c"
    {
#line 2155 "make.util.c"
      make__util____Compare____build_1_0(((MR_Word) make__util__wrapper_arg_1), &make__util__conv0_HeadVar__1_1, ((MR_Word) make__util__wrapper_arg_3), ((MR_Word) make__util__wrapper_arg_4));
    }
#line 2158 "make.util.c"
    *make__util__wrapper_arg_2 = ((MR_Box) (make__util__conv0_HeadVar__1_1));
#line 2160 "make.util.c"
  }
#line 2162 "make.util.c"
}

#line 2165 "make.util.c"
static MR_bool MR_CALL 
make__util____Unify____build2_2_0_10001(
#line 2168 "make.util.c"
  MR_Box make__util__wrapper_arg_1,
#line 2170 "make.util.c"
  MR_Box make__util__wrapper_arg_2,
#line 2172 "make.util.c"
  MR_Box make__util__wrapper_arg_3,
#line 2174 "make.util.c"
  MR_Box make__util__wrapper_arg_4)
#line 2176 "make.util.c"
{
#line 2178 "make.util.c"
  {
#line 2180 "make.util.c"
    MR_bool make__util__succeeded;

#line 2183 "make.util.c"
    {
#line 2185 "make.util.c"
      make__util__succeeded = make__util____Unify____build2_2_0(((MR_Word) make__util__wrapper_arg_1), ((MR_Word) make__util__wrapper_arg_2), ((MR_Word) make__util__wrapper_arg_3), ((MR_Word) make__util__wrapper_arg_4));
    }
#line 2188 "make.util.c"
    return make__util__succeeded;
#line 2190 "make.util.c"
  }
#line 2192 "make.util.c"
}

#line 2195 "make.util.c"
static void MR_CALL 
make__util____Compare____build2_2_0_10001(
#line 2198 "make.util.c"
  MR_Box make__util__wrapper_arg_1,
#line 2200 "make.util.c"
  MR_Box make__util__wrapper_arg_2,
#line 2202 "make.util.c"
  MR_Box * make__util__wrapper_arg_3,
#line 2204 "make.util.c"
  MR_Box make__util__wrapper_arg_4,
#line 2206 "make.util.c"
  MR_Box make__util__wrapper_arg_5)
#line 2208 "make.util.c"
{
#line 2210 "make.util.c"
  {
#line 2212 "make.util.c"
    MR_Word make__util__conv0_HeadVar__1_1;

#line 2215 "make.util.c"
    {
#line 2217 "make.util.c"
      make__util____Compare____build2_2_0(((MR_Word) make__util__wrapper_arg_1), ((MR_Word) make__util__wrapper_arg_2), &make__util__conv0_HeadVar__1_1, ((MR_Word) make__util__wrapper_arg_4), ((MR_Word) make__util__wrapper_arg_5));
    }
#line 2220 "make.util.c"
    *make__util__wrapper_arg_3 = ((MR_Box) (make__util__conv0_HeadVar__1_1));
#line 2222 "make.util.c"
  }
#line 2224 "make.util.c"
}

#line 2227 "make.util.c"
static MR_bool MR_CALL 
make__util____Unify____foldl2_pred_with_status_3_0_10001(
#line 2230 "make.util.c"
  MR_Box make__util__wrapper_arg_1,
#line 2232 "make.util.c"
  MR_Box make__util__wrapper_arg_2,
#line 2234 "make.util.c"
  MR_Box make__util__wrapper_arg_3,
#line 2236 "make.util.c"
  MR_Box make__util__wrapper_arg_4,
#line 2238 "make.util.c"
  MR_Box make__util__wrapper_arg_5)
#line 2240 "make.util.c"
{
#line 2242 "make.util.c"
  {
#line 2244 "make.util.c"
    MR_bool make__util__succeeded;

#line 2247 "make.util.c"
    {
#line 2249 "make.util.c"
      make__util__succeeded = make__util____Unify____foldl2_pred_with_status_3_0(((MR_Word) make__util__wrapper_arg_1), ((MR_Word) make__util__wrapper_arg_2), ((MR_Word) make__util__wrapper_arg_3), ((MR_Word) make__util__wrapper_arg_4), ((MR_Word) make__util__wrapper_arg_5));
    }
#line 2252 "make.util.c"
    return make__util__succeeded;
#line 2254 "make.util.c"
  }
#line 2256 "make.util.c"
}

#line 2259 "make.util.c"
static void MR_CALL 
make__util____Compare____foldl2_pred_with_status_3_0_10001(
#line 2262 "make.util.c"
  MR_Box make__util__wrapper_arg_1,
#line 2264 "make.util.c"
  MR_Box make__util__wrapper_arg_2,
#line 2266 "make.util.c"
  MR_Box make__util__wrapper_arg_3,
#line 2268 "make.util.c"
  MR_Box * make__util__wrapper_arg_4,
#line 2270 "make.util.c"
  MR_Box make__util__wrapper_arg_5,
#line 2272 "make.util.c"
  MR_Box make__util__wrapper_arg_6)
#line 2274 "make.util.c"
{
#line 2276 "make.util.c"
  {
#line 2278 "make.util.c"
    MR_Word make__util__conv0_HeadVar__1_1;

#line 2281 "make.util.c"
    {
#line 2283 "make.util.c"
      make__util____Compare____foldl2_pred_with_status_3_0(((MR_Word) make__util__wrapper_arg_1), ((MR_Word) make__util__wrapper_arg_2), ((MR_Word) make__util__wrapper_arg_3), &make__util__conv0_HeadVar__1_1, ((MR_Word) make__util__wrapper_arg_5), ((MR_Word) make__util__wrapper_arg_6));
    }
#line 2286 "make.util.c"
    *make__util__wrapper_arg_4 = ((MR_Box) (make__util__conv0_HeadVar__1_1));
#line 2288 "make.util.c"
  }
#line 2290 "make.util.c"
}

#line 2293 "make.util.c"
static MR_bool MR_CALL 
make__util____Unify____foldl3_pred_with_status_4_0_10001(
#line 2296 "make.util.c"
  MR_Box make__util__wrapper_arg_1,
#line 2298 "make.util.c"
  MR_Box make__util__wrapper_arg_2,
#line 2300 "make.util.c"
  MR_Box make__util__wrapper_arg_3,
#line 2302 "make.util.c"
  MR_Box make__util__wrapper_arg_4,
#line 2304 "make.util.c"
  MR_Box make__util__wrapper_arg_5,
#line 2306 "make.util.c"
  MR_Box make__util__wrapper_arg_6)
#line 2308 "make.util.c"
{
#line 2310 "make.util.c"
  {
#line 2312 "make.util.c"
    MR_bool make__util__succeeded;

#line 2315 "make.util.c"
    {
#line 2317 "make.util.c"
      make__util__succeeded = make__util____Unify____foldl3_pred_with_status_4_0(((MR_Word) make__util__wrapper_arg_1), ((MR_Word) make__util__wrapper_arg_2), ((MR_Word) make__util__wrapper_arg_3), ((MR_Word) make__util__wrapper_arg_4), ((MR_Word) make__util__wrapper_arg_5), ((MR_Word) make__util__wrapper_arg_6));
    }
#line 2320 "make.util.c"
    return make__util__succeeded;
#line 2322 "make.util.c"
  }
#line 2324 "make.util.c"
}

#line 2327 "make.util.c"
static void MR_CALL 
make__util____Compare____foldl3_pred_with_status_4_0_10001(
#line 2330 "make.util.c"
  MR_Box make__util__wrapper_arg_1,
#line 2332 "make.util.c"
  MR_Box make__util__wrapper_arg_2,
#line 2334 "make.util.c"
  MR_Box make__util__wrapper_arg_3,
#line 2336 "make.util.c"
  MR_Box make__util__wrapper_arg_4,
#line 2338 "make.util.c"
  MR_Box * make__util__wrapper_arg_5,
#line 2340 "make.util.c"
  MR_Box make__util__wrapper_arg_6,
#line 2342 "make.util.c"
  MR_Box make__util__wrapper_arg_7)
#line 2344 "make.util.c"
{
#line 2346 "make.util.c"
  {
#line 2348 "make.util.c"
    MR_Word make__util__conv0_HeadVar__1_1;

#line 2351 "make.util.c"
    {
#line 2353 "make.util.c"
      make__util____Compare____foldl3_pred_with_status_4_0(((MR_Word) make__util__wrapper_arg_1), ((MR_Word) make__util__wrapper_arg_2), ((MR_Word) make__util__wrapper_arg_3), ((MR_Word) make__util__wrapper_arg_4), &make__util__conv0_HeadVar__1_1, ((MR_Word) make__util__wrapper_arg_6), ((MR_Word) make__util__wrapper_arg_7));
    }
#line 2356 "make.util.c"
    *make__util__wrapper_arg_5 = ((MR_Box) (make__util__conv0_HeadVar__1_1));
#line 2358 "make.util.c"
  }
#line 2360 "make.util.c"
}

#line 2363 "make.util.c"
static MR_bool MR_CALL 
make__util____Unify____job_ctl_0_0_10001(
#line 2366 "make.util.c"
  MR_Box make__util__wrapper_arg_1,
#line 2368 "make.util.c"
  MR_Box make__util__wrapper_arg_2)
#line 2370 "make.util.c"
{
#line 2372 "make.util.c"
  {
#line 2374 "make.util.c"
    MR_bool make__util__succeeded;

#line 2377 "make.util.c"
    {
#line 2379 "make.util.c"
      make__util__succeeded = make__util____Unify____job_ctl_0_0(((MR_Box) make__util__wrapper_arg_1), ((MR_Box) make__util__wrapper_arg_2));
    }
#line 2382 "make.util.c"
    return make__util__succeeded;
#line 2384 "make.util.c"
  }
#line 2386 "make.util.c"
}

#line 2389 "make.util.c"
static void MR_CALL 
make__util____Compare____job_ctl_0_0_10001(
#line 2392 "make.util.c"
  MR_Box * make__util__wrapper_arg_1,
#line 2394 "make.util.c"
  MR_Box make__util__wrapper_arg_2,
#line 2396 "make.util.c"
  MR_Box make__util__wrapper_arg_3)
#line 2398 "make.util.c"
{
#line 2400 "make.util.c"
  {
#line 2402 "make.util.c"
    MR_Word make__util__conv0_HeadVar__1_1;

#line 2405 "make.util.c"
    {
#line 2407 "make.util.c"
      make__util____Compare____job_ctl_0_0(&make__util__conv0_HeadVar__1_1, ((MR_Box) make__util__wrapper_arg_2), ((MR_Box) make__util__wrapper_arg_3));
    }
#line 2410 "make.util.c"
    *make__util__wrapper_arg_1 = ((MR_Box) (make__util__conv0_HeadVar__1_1));
#line 2412 "make.util.c"
  }
#line 2414 "make.util.c"
}

#line 2417 "make.util.c"
static MR_bool MR_CALL 
make__util____Unify____stdout_lock_0_0_10001(
#line 2420 "make.util.c"
  MR_Box make__util__wrapper_arg_1,
#line 2422 "make.util.c"
  MR_Box make__util__wrapper_arg_2)
#line 2424 "make.util.c"
{
#line 2426 "make.util.c"
  {
#line 2428 "make.util.c"
    MR_bool make__util__succeeded;

#line 2431 "make.util.c"
    {
#line 2433 "make.util.c"
      make__util__succeeded = make__util____Unify____stdout_lock_0_0(((MR_Box) make__util__wrapper_arg_1), ((MR_Box) make__util__wrapper_arg_2));
    }
#line 2436 "make.util.c"
    return make__util__succeeded;
#line 2438 "make.util.c"
  }
#line 2440 "make.util.c"
}

#line 2443 "make.util.c"
static void MR_CALL 
make__util____Compare____stdout_lock_0_0_10001(
#line 2446 "make.util.c"
  MR_Box * make__util__wrapper_arg_1,
#line 2448 "make.util.c"
  MR_Box make__util__wrapper_arg_2,
#line 2450 "make.util.c"
  MR_Box make__util__wrapper_arg_3)
#line 2452 "make.util.c"
{
#line 2454 "make.util.c"
  {
#line 2456 "make.util.c"
    MR_Word make__util__conv0_HeadVar__1_1;

#line 2459 "make.util.c"
    {
#line 2461 "make.util.c"
      make__util____Compare____stdout_lock_0_0(&make__util__conv0_HeadVar__1_1, ((MR_Box) make__util__wrapper_arg_2), ((MR_Box) make__util__wrapper_arg_3));
    }
#line 2464 "make.util.c"
    *make__util__wrapper_arg_1 = ((MR_Box) (make__util__conv0_HeadVar__1_1));
#line 2466 "make.util.c"
  }
#line 2468 "make.util.c"
}

#line 1020 "make.util.m"
static void MR_CALL 
make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_97_114_103_115_95_105_110_118_111_107_101_100_95_95_104_111_49_52_95_95_91_49_48_93_95_48_13_p_0(
#line 1020 "make.util.m"
  MR_Word make__util__V_56_56,
#line 1020 "make.util.m"
  MR_Word make__util__V_57_57,
#line 1020 "make.util.m"
  MR_Word make__util__Globals_14,
#line 1020 "make.util.m"
  MR_Word make__util__InvokedByMmcMake_15,
#line 1020 "make.util.m"
  MR_Word make__util__ModuleName_16,
#line 1020 "make.util.m"
  MR_Word make__util__DetectedGradeFlags_17,
#line 1020 "make.util.m"
  MR_Word make__util__OptionVariables_18,
#line 1020 "make.util.m"
  MR_Word make__util__OptionArgs_19,
#line 1020 "make.util.m"
  MR_Word make__util__ExtraOptions_20,
#line 1020 "make.util.m"
  MR_Word * make__util__Succeeded_22,
#line 1020 "make.util.m"
  MR_Word make__util__Info0_23,
#line 1020 "make.util.m"
  MR_Word * make__util__MaybeInfo_24)
#line 1020 "make.util.m"
{
#line 1028 "make.util.m"
  {
#line 1028 "make.util.m"
    MR_bool make__util__succeeded;
#line 1028 "make.util.m"
    MR_Word make__util__OptionsResult_26;

#line 1029 "make.util.m"
    {
#line 1029 "make.util.m"
      make__options_file__lookup_mmc_module_options_6_p_0(make__util__Globals_14, make__util__OptionVariables_18, make__util__ModuleName_16, &make__util__OptionsResult_26);
    }
#line 1035 "make.util.m"
    if ((make__util__OptionsResult_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1032 "make.util.m"
      {
#line 1033 "make.util.m"
        *make__util__MaybeInfo_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1034 "make.util.m"
        *make__util__Succeeded_22 = (MR_Integer) 0;
#line 1032 "make.util.m"
      }
#line 1035 "make.util.m"
    else
#line 1036 "make.util.m"
      {
#line 1036 "make.util.m"
        MR_Word make__util__TypeCtorInfo_55_55;
#line 1036 "make.util.m"
        MR_Word make__util__ModuleOptionArgs_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__util__OptionsResult_26, (MR_Integer) 0)));
#line 1036 "make.util.m"
        MR_Word make__util__UseSubdirs_28;
#line 1036 "make.util.m"
        MR_Word make__util__InvokedByMake_29;
#line 1036 "make.util.m"
        MR_Word make__util__AllOptionArgs_30;
#line 1036 "make.util.m"
        MR_Word make__util__OptionsErrors_34;
#line 1036 "make.util.m"
        MR_Word make__util__BuildGlobals_35;
#line 1036 "make.util.m"
        MR_Word make__util__V_46_46;
#line 1036 "make.util.m"
        MR_Word make__util__V_47_47;
#line 1036 "make.util.m"
        MR_Word make__util__V_48_48;
#line 1036 "make.util.m"
        MR_Word make__util__V_49_49;
#line 1055 "make.util.m"
        MR_Word make__util__V_31_31;
#line 1055 "make.util.m"
        MR_Word make__util__V_32_32;
#line 1055 "make.util.m"
        MR_Word make__util__V_33_33;

#line 1047 "make.util.m"
#line 1047 "make.util.m"
        switch (make__util__InvokedByMmcMake_15) {
#line 1047 "make.util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1047 "make.util.m"
          case (MR_Integer) 0:
#line 1048 "make.util.m"
            {
#line 1049 "make.util.m"
              make__util__UseSubdirs_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1050 "make.util.m"
              make__util__InvokedByMake_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1048 "make.util.m"
            }
#line 1047 "make.util.m"
            break;
#line 1047 "make.util.m"
          case (MR_Integer) 1:
#line 1044 "make.util.m"
            {
#line 1045 "make.util.m"
              make__util__UseSubdirs_28 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_2[2]);
#line 1046 "make.util.m"
              make__util__InvokedByMake_29 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_2[3]);
#line 1044 "make.util.m"
            }
#line 1047 "make.util.m"
            break;
#line 1047 "make.util.m"
        }
#line 2586 "make.util.c"
        make__util__TypeCtorInfo_55_55 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1054 "make.util.m"
        {
#line 1054 "make.util.m"
          make__util__V_49_49 = mercury__list__f_43_43_2_f_0(make__util__TypeCtorInfo_55_55, make__util__ExtraOptions_20, make__util__UseSubdirs_28);
        }
#line 1054 "make.util.m"
        {
#line 1054 "make.util.m"
          make__util__V_48_48 = mercury__list__f_43_43_2_f_0(make__util__TypeCtorInfo_55_55, make__util__OptionArgs_19, make__util__V_49_49);
        }
#line 1054 "make.util.m"
        {
#line 1054 "make.util.m"
          make__util__V_47_47 = mercury__list__f_43_43_2_f_0(make__util__TypeCtorInfo_55_55, make__util__ModuleOptionArgs_27, make__util__V_48_48);
        }
#line 1053 "make.util.m"
        {
#line 1053 "make.util.m"
          make__util__V_46_46 = mercury__list__f_43_43_2_f_0(make__util__TypeCtorInfo_55_55, make__util__DetectedGradeFlags_17, make__util__V_47_47);
        }
#line 1053 "make.util.m"
        {
#line 1053 "make.util.m"
          make__util__AllOptionArgs_30 = mercury__list__f_43_43_2_f_0(make__util__TypeCtorInfo_55_55, make__util__InvokedByMake_29, make__util__V_46_46);
        }
#line 1055 "make.util.m"
        {
#line 1055 "make.util.m"
          libs__handle_options__handle_given_options_8_p_0(make__util__AllOptionArgs_30, &make__util__V_31_31, &make__util__V_32_32, &make__util__V_33_33, &make__util__OptionsErrors_34, &make__util__BuildGlobals_35);
        }
#line 1062 "make.util.m"
        if ((make__util__OptionsErrors_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1063 "make.util.m"
          {
#line 1063 "make.util.m"
            MR_Word make__util__Info_38;

#line 1064 "make.util.m"
            {
#line 1064 "make.util.m"
              make__util__build_with_module_options_and_output_redirect_2_9_p_0(make__util__V_56_56, make__util__V_57_57, make__util__BuildGlobals_35, make__util__AllOptionArgs_30, make__util__Succeeded_22, make__util__Info0_23, &make__util__Info_38);
            }
#line 1065 "make.util.m"
            {
#line 1065 "make.util.m"
              MR_Word base;
#line 1065 "make.util.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1065 "make.util.m"
              *make__util__MaybeInfo_24 = base;
#line 1065 "make.util.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__util__Info_38));
#line 1065 "make.util.m"
            }
#line 1063 "make.util.m"
          }
#line 1062 "make.util.m"
        else
#line 1058 "make.util.m"
          {
#line 1059 "make.util.m"
            *make__util__Succeeded_22 = (MR_Integer) 0;
#line 1060 "make.util.m"
            *make__util__MaybeInfo_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1061 "make.util.m"
            {
#line 1061 "make.util.m"
              libs__handle_options__usage_errors_3_p_0(make__util__OptionsErrors_34);
#line 1061 "make.util.m"
              return;
            }
#line 1058 "make.util.m"
          }
#line 1036 "make.util.m"
      }
#line 1028 "make.util.m"
  }
#line 1020 "make.util.m"
}

#line 945 "make.util.m"
static void MR_CALL 
make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_105_116_104_95_108_111_99_107_101_100_95_115_116_100_111_117_116_95_95_104_111_49_50_95_95_91_52_93_95_48_4_p_0(
#line 945 "make.util.m"
  MR_String make__util__V_35_35,
#line 945 "make.util.m"
  MR_Word make__util__V_36_36,
#line 945 "make.util.m"
  MR_Word make__util__Info_5)
#line 945 "make.util.m"
{
#line 948 "make.util.m"
  {
#line 948 "make.util.m"
    MR_bool make__util__succeeded;
#line 948 "make.util.m"
    MR_Word make__util__MaybeLock_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 19)));
#line 949 "make.util.m"
    MR_Word make__util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 0)));
#line 949 "make.util.m"
    MR_Word make__util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 1)));
#line 949 "make.util.m"
    MR_Word make__util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 2)));
#line 949 "make.util.m"
    MR_Word make__util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 3)));
#line 949 "make.util.m"
    MR_Word make__util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 4)));
#line 949 "make.util.m"
    MR_Word make__util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 5)));
#line 949 "make.util.m"
    MR_Word make__util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 6)));
#line 949 "make.util.m"
    MR_Word make__util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 7)));
#line 949 "make.util.m"
    MR_Word make__util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 8)));
#line 949 "make.util.m"
    MR_Word make__util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 9)));
#line 949 "make.util.m"
    MR_Word make__util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 10)));
#line 949 "make.util.m"
    MR_Word make__util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 11)));
#line 949 "make.util.m"
    MR_Word make__util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 12)));
#line 949 "make.util.m"
    MR_Word make__util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 13)));
#line 949 "make.util.m"
    MR_Word make__util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 14)));
#line 949 "make.util.m"
    MR_Word make__util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 15)));
#line 949 "make.util.m"
    MR_Word make__util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 16)));
#line 949 "make.util.m"
    MR_Word make__util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 17)));
#line 949 "make.util.m"
    MR_Integer make__util__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 18)));

#line 955 "make.util.m"
    if ((make__util__MaybeLock_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 957 "make.util.m"
      {
#line 957 "make.util.m"
        make__util__write_error_opening_file_4_p_0(make__util__V_35_35, make__util__V_36_36);
#line 957 "make.util.m"
        return;
      }
#line 955 "make.util.m"
    else
#line 951 "make.util.m"
      {
#line 951 "make.util.m"
        MR_Box make__util__Lock_9 = ((MR_Box) (MR_hl_field(MR_mktag(1), make__util__MaybeLock_8, (MR_Integer) 0)));

#line 952 "make.util.m"
        {
#line 952 "make.util.m"
          make__util__lock_stdout_3_p_0(make__util__Lock_9);
        }
#line 953 "make.util.m"
        {
#line 953 "make.util.m"
          make__util__write_error_opening_file_4_p_0(make__util__V_35_35, make__util__V_36_36);
        }
#line 954 "make.util.m"
        {
#line 954 "make.util.m"
          make__util__unlock_stdout_3_p_0(make__util__Lock_9);
#line 954 "make.util.m"
          return;
        }
#line 951 "make.util.m"
      }
#line 948 "make.util.m"
  }
#line 945 "make.util.m"
}

#line 945 "make.util.m"
static void MR_CALL 
make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_105_116_104_95_108_111_99_107_101_100_95_115_116_100_111_117_116_95_95_104_111_49_49_95_95_91_55_93_95_48_4_p_0(
#line 945 "make.util.m"
  MR_String make__util__V_35_35,
#line 945 "make.util.m"
  MR_Word make__util__V_36_36,
#line 945 "make.util.m"
  MR_Word make__util__V_37_37,
#line 945 "make.util.m"
  MR_Word make__util__V_38_38,
#line 945 "make.util.m"
  MR_Integer make__util__V_39_39,
#line 945 "make.util.m"
  MR_Word make__util__Info_5)
#line 945 "make.util.m"
{
#line 948 "make.util.m"
  {
#line 948 "make.util.m"
    MR_bool make__util__succeeded;
#line 948 "make.util.m"
    MR_Word make__util__MaybeLock_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 19)));
#line 949 "make.util.m"
    MR_Word make__util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 0)));
#line 949 "make.util.m"
    MR_Word make__util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 1)));
#line 949 "make.util.m"
    MR_Word make__util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 2)));
#line 949 "make.util.m"
    MR_Word make__util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 3)));
#line 949 "make.util.m"
    MR_Word make__util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 4)));
#line 949 "make.util.m"
    MR_Word make__util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 5)));
#line 949 "make.util.m"
    MR_Word make__util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 6)));
#line 949 "make.util.m"
    MR_Word make__util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 7)));
#line 949 "make.util.m"
    MR_Word make__util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 8)));
#line 949 "make.util.m"
    MR_Word make__util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 9)));
#line 949 "make.util.m"
    MR_Word make__util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 10)));
#line 949 "make.util.m"
    MR_Word make__util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 11)));
#line 949 "make.util.m"
    MR_Word make__util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 12)));
#line 949 "make.util.m"
    MR_Word make__util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 13)));
#line 949 "make.util.m"
    MR_Word make__util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 14)));
#line 949 "make.util.m"
    MR_Word make__util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 15)));
#line 949 "make.util.m"
    MR_Word make__util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 16)));
#line 949 "make.util.m"
    MR_Word make__util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 17)));
#line 949 "make.util.m"
    MR_Integer make__util__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 18)));

#line 955 "make.util.m"
    if ((make__util__MaybeLock_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 957 "make.util.m"
      {
#line 957 "make.util.m"
        make__util__make_write_error_streams_7_p_0(make__util__V_35_35, make__util__V_36_36, make__util__V_37_37, make__util__V_38_38, make__util__V_39_39);
#line 957 "make.util.m"
        return;
      }
#line 955 "make.util.m"
    else
#line 951 "make.util.m"
      {
#line 951 "make.util.m"
        MR_Box make__util__Lock_9 = ((MR_Box) (MR_hl_field(MR_mktag(1), make__util__MaybeLock_8, (MR_Integer) 0)));

#line 952 "make.util.m"
        {
#line 952 "make.util.m"
          make__util__lock_stdout_3_p_0(make__util__Lock_9);
        }
#line 953 "make.util.m"
        {
#line 953 "make.util.m"
          make__util__make_write_error_streams_7_p_0(make__util__V_35_35, make__util__V_36_36, make__util__V_37_37, make__util__V_38_38, make__util__V_39_39);
        }
#line 954 "make.util.m"
        {
#line 954 "make.util.m"
          make__util__unlock_stdout_3_p_0(make__util__Lock_9);
#line 954 "make.util.m"
          return;
        }
#line 951 "make.util.m"
      }
#line 948 "make.util.m"
  }
#line 945 "make.util.m"
}

#line 88 "make.util.m"
static void MR_CALL 
make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_95_104_111_49_48_95_95_91_54_93_95_48_9_p_0(
#line 88 "make.util.m"
  MR_Word make__util__V_86_86,
#line 88 "make.util.m"
  MR_Word make__util__V_87_87,
#line 88 "make.util.m"
  MR_Word make__util__Globals_10,
#line 88 "make.util.m"
  MR_Word make__util__ModuleName_11,
#line 88 "make.util.m"
  MR_Word make__util__ExtraOptions_12,
#line 88 "make.util.m"
  MR_Word * make__util__Succeeded_14,
#line 88 "make.util.m"
  MR_Word make__util__STATE_VARIABLE_Info_0_18,
#line 88 "make.util.m"
  MR_Word * make__util__STATE_VARIABLE_Info_19)
#line 88 "make.util.m"
{
#line 1002 "make.util.m"
  {
#line 1002 "make.util.m"
    MR_bool make__util__succeeded;
#line 1002 "make.util.m"
    MR_Word make__util__MaybeInfo_17;
#line 1002 "make.util.m"
    MR_Word make__util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 3)));
#line 1002 "make.util.m"
    MR_Word make__util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 4)));
#line 1002 "make.util.m"
    MR_Word make__util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 5)));
#line 1003 "make.util.m"
    MR_Word make__util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 0)));
#line 1003 "make.util.m"
    MR_Word make__util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 1)));
#line 1003 "make.util.m"
    MR_Word make__util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 2)));
#line 1003 "make.util.m"
    MR_Word make__util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 6)));
#line 1003 "make.util.m"
    MR_Word make__util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 7)));
#line 1003 "make.util.m"
    MR_Word make__util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 8)));
#line 1003 "make.util.m"
    MR_Word make__util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 9)));
#line 1003 "make.util.m"
    MR_Word make__util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 10)));
#line 1003 "make.util.m"
    MR_Word make__util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 11)));
#line 1003 "make.util.m"
    MR_Word make__util__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 12)));
#line 1003 "make.util.m"
    MR_Word make__util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 13)));
#line 1003 "make.util.m"
    MR_Word make__util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 14)));
#line 1003 "make.util.m"
    MR_Word make__util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 15)));
#line 1003 "make.util.m"
    MR_Word make__util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 16)));
#line 1003 "make.util.m"
    MR_Word make__util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 17)));
#line 1003 "make.util.m"
    MR_Integer make__util__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 18)));
#line 1003 "make.util.m"
    MR_Word make__util__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 19)));

#line 1003 "make.util.m"
    {
#line 1003 "make.util.m"
      make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_97_114_103_115_95_105_110_118_111_107_101_100_95_95_104_111_49_52_95_95_91_49_48_93_95_48_13_p_0(make__util__V_86_86, make__util__V_87_87, make__util__Globals_10, (MR_Integer) 1, make__util__ModuleName_11, make__util__V_23_23, make__util__V_32_32, make__util__V_31_31, make__util__ExtraOptions_12, make__util__Succeeded_14, make__util__STATE_VARIABLE_Info_0_18, &make__util__MaybeInfo_17);
    }
#line 1009 "make.util.m"
    if ((make__util__MaybeInfo_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1010 "make.util.m"
      *make__util__STATE_VARIABLE_Info_19 = make__util__STATE_VARIABLE_Info_0_18;
#line 1009 "make.util.m"
    else
#line 1008 "make.util.m"
      *make__util__STATE_VARIABLE_Info_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__util__MaybeInfo_17, (MR_Integer) 0)));
#line 1002 "make.util.m"
  }
#line 88 "make.util.m"
}

#line 462 "make.util.m"
static void MR_CALL 
make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_112_97_114_97_108_108_101_108_95_112_114_111_99_101_115_115_101_115_95_95_52_54_50_95_95_49_95_95_91_56_93_95_48_12_p_0(
#line 462 "make.util.m"
  MR_Word make__util__TypeInfo_for_T_88,
#line 462 "make.util.m"
  MR_Word make__util__KeepGoing_11,
#line 462 "make.util.m"
  MR_Word make__util__MakeTarget_13,
#line 462 "make.util.m"
  MR_Word make__util__Globals_14,
#line 462 "make.util.m"
  MR_Word make__util__Targets_15,
#line 462 "make.util.m"
  MR_Box make__util__JobCtl_21,
#line 462 "make.util.m"
  MR_Word make__util__STATE_VARIABLE_Info_30_30,
#line 462 "make.util.m"
  MR_Word make__util__HeadVar__9_90,
#line 462 "make.util.m"
  MR_Word * make__util__HeadVar__10_91)
#line 462 "make.util.m"
{
#line 462 "make.util.m"
  {
#line 462 "make.util.m"
    MR_bool make__util__succeeded;

#line 462 "make.util.m"
    {
#line 462 "make.util.m"
      make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_95_119_111_114_107_101_114_95_112_114_111_99_101_115_115_95_95_91_57_93_95_48_11_p_0(make__util__TypeInfo_for_T_88, (MR_Word) &make__make__type_ctor_info_make_info_0, make__util__Globals_14, make__util__KeepGoing_11, make__util__MakeTarget_13, make__util__Targets_15, make__util__JobCtl_21, ((MR_Box) (make__util__STATE_VARIABLE_Info_30_30)), make__util__HeadVar__9_90, make__util__HeadVar__10_91);
#line 462 "make.util.m"
      return;
    }
#line 462 "make.util.m"
  }
#line 462 "make.util.m"
}

#line 1020 "make.util.m"
static void MR_CALL 
make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_97_114_103_115_95_105_110_118_111_107_101_100_95_95_91_49_44_32_50_93_95_48_13_p_0(
#line 1020 "make.util.m"
  MR_Word make__util__Globals_14,
#line 1020 "make.util.m"
  MR_Word make__util__InvokedByMmcMake_15,
#line 1020 "make.util.m"
  MR_Word make__util__ModuleName_16,
#line 1020 "make.util.m"
  MR_Word make__util__DetectedGradeFlags_17,
#line 1020 "make.util.m"
  MR_Word make__util__OptionVariables_18,
#line 1020 "make.util.m"
  MR_Word make__util__OptionArgs_19,
#line 1020 "make.util.m"
  MR_Word make__util__ExtraOptions_20,
#line 1020 "make.util.m"
  MR_Word make__util__Build_21,
#line 1020 "make.util.m"
  MR_Word * make__util__Succeeded_22,
#line 1020 "make.util.m"
  MR_Box make__util__Info0_23,
#line 1020 "make.util.m"
  MR_Word * make__util__MaybeInfo_24)
#line 1020 "make.util.m"
{
#line 1028 "make.util.m"
  {
#line 1028 "make.util.m"
    MR_bool make__util__succeeded;
#line 1028 "make.util.m"
    MR_Word make__util__OptionsResult_26;

#line 1029 "make.util.m"
    {
#line 1029 "make.util.m"
      make__options_file__lookup_mmc_module_options_6_p_0(make__util__Globals_14, make__util__OptionVariables_18, make__util__ModuleName_16, &make__util__OptionsResult_26);
    }
#line 1035 "make.util.m"
    if ((make__util__OptionsResult_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1032 "make.util.m"
      {
#line 1033 "make.util.m"
        *make__util__MaybeInfo_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1034 "make.util.m"
        *make__util__Succeeded_22 = (MR_Integer) 0;
#line 1032 "make.util.m"
      }
#line 1035 "make.util.m"
    else
#line 1036 "make.util.m"
      {
#line 1036 "make.util.m"
        MR_Word make__util__TypeCtorInfo_55_55;
#line 1036 "make.util.m"
        MR_Word make__util__ModuleOptionArgs_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__util__OptionsResult_26, (MR_Integer) 0)));
#line 1036 "make.util.m"
        MR_Word make__util__UseSubdirs_28;
#line 1036 "make.util.m"
        MR_Word make__util__InvokedByMake_29;
#line 1036 "make.util.m"
        MR_Word make__util__AllOptionArgs_30;
#line 1036 "make.util.m"
        MR_Word make__util__OptionsErrors_34;
#line 1036 "make.util.m"
        MR_Word make__util__BuildGlobals_35;
#line 1036 "make.util.m"
        MR_Word make__util__V_46_46;
#line 1036 "make.util.m"
        MR_Word make__util__V_47_47;
#line 1036 "make.util.m"
        MR_Word make__util__V_48_48;
#line 1036 "make.util.m"
        MR_Word make__util__V_49_49;
#line 1055 "make.util.m"
        MR_Word make__util__V_31_31;
#line 1055 "make.util.m"
        MR_Word make__util__V_32_32;
#line 1055 "make.util.m"
        MR_Word make__util__V_33_33;

#line 1047 "make.util.m"
#line 1047 "make.util.m"
        switch (make__util__InvokedByMmcMake_15) {
#line 1047 "make.util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1047 "make.util.m"
          case (MR_Integer) 0:
#line 1048 "make.util.m"
            {
#line 1049 "make.util.m"
              make__util__UseSubdirs_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1050 "make.util.m"
              make__util__InvokedByMake_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1048 "make.util.m"
            }
#line 1047 "make.util.m"
            break;
#line 1047 "make.util.m"
          case (MR_Integer) 1:
#line 1044 "make.util.m"
            {
#line 1045 "make.util.m"
              make__util__UseSubdirs_28 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_2[2]);
#line 1046 "make.util.m"
              make__util__InvokedByMake_29 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_2[3]);
#line 1044 "make.util.m"
            }
#line 1047 "make.util.m"
            break;
#line 1047 "make.util.m"
        }
#line 3105 "make.util.c"
        make__util__TypeCtorInfo_55_55 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1054 "make.util.m"
        {
#line 1054 "make.util.m"
          make__util__V_49_49 = mercury__list__f_43_43_2_f_0(make__util__TypeCtorInfo_55_55, make__util__ExtraOptions_20, make__util__UseSubdirs_28);
        }
#line 1054 "make.util.m"
        {
#line 1054 "make.util.m"
          make__util__V_48_48 = mercury__list__f_43_43_2_f_0(make__util__TypeCtorInfo_55_55, make__util__OptionArgs_19, make__util__V_49_49);
        }
#line 1054 "make.util.m"
        {
#line 1054 "make.util.m"
          make__util__V_47_47 = mercury__list__f_43_43_2_f_0(make__util__TypeCtorInfo_55_55, make__util__ModuleOptionArgs_27, make__util__V_48_48);
        }
#line 1053 "make.util.m"
        {
#line 1053 "make.util.m"
          make__util__V_46_46 = mercury__list__f_43_43_2_f_0(make__util__TypeCtorInfo_55_55, make__util__DetectedGradeFlags_17, make__util__V_47_47);
        }
#line 1053 "make.util.m"
        {
#line 1053 "make.util.m"
          make__util__AllOptionArgs_30 = mercury__list__f_43_43_2_f_0(make__util__TypeCtorInfo_55_55, make__util__InvokedByMake_29, make__util__V_46_46);
        }
#line 1055 "make.util.m"
        {
#line 1055 "make.util.m"
          libs__handle_options__handle_given_options_8_p_0(make__util__AllOptionArgs_30, &make__util__V_31_31, &make__util__V_32_32, &make__util__V_33_33, &make__util__OptionsErrors_34, &make__util__BuildGlobals_35);
        }
#line 1062 "make.util.m"
        if ((make__util__OptionsErrors_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1063 "make.util.m"
          {
#line 1063 "make.util.m"
            MR_Box make__util__Info_38;
#line 1064 "make.util.m"
            void MR_CALL (* make__util__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), make__util__Build_21, (MR_Integer) 1)));
#line 1064 "make.util.m"
            MR_Box make__util__conv2_Succeeded_22;
#line 1064 "make.util.m"
            MR_Box make__util__conv1_STATE_VARIABLE_IO_40;

#line 1064 "make.util.m"
            {
#line 1064 "make.util.m"
              make__util__func_0(((MR_Box) make__util__Build_21), ((MR_Box) (make__util__BuildGlobals_35)), ((MR_Box) (make__util__AllOptionArgs_30)), &make__util__conv2_Succeeded_22, make__util__Info0_23, &make__util__Info_38, ((MR_Box) ((MR_Integer) 0)), &make__util__conv1_STATE_VARIABLE_IO_40);
            }
#line 1064 "make.util.m"
            *make__util__Succeeded_22 = ((MR_Word) make__util__conv2_Succeeded_22);
#line 1065 "make.util.m"
            {
#line 1065 "make.util.m"
              MR_Word base;
#line 1065 "make.util.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1065 "make.util.m"
              *make__util__MaybeInfo_24 = base;
#line 1065 "make.util.m"
              MR_hl_field(MR_mktag(1), base, 0) = make__util__Info_38;
#line 1065 "make.util.m"
            }
#line 1063 "make.util.m"
          }
#line 1062 "make.util.m"
        else
#line 1058 "make.util.m"
          {
#line 1059 "make.util.m"
            *make__util__Succeeded_22 = (MR_Integer) 0;
#line 1060 "make.util.m"
            *make__util__MaybeInfo_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1061 "make.util.m"
            {
#line 1061 "make.util.m"
              libs__handle_options__usage_errors_3_p_0(make__util__OptionsErrors_34);
#line 1061 "make.util.m"
              return;
            }
#line 1058 "make.util.m"
          }
#line 1036 "make.util.m"
      }
#line 1028 "make.util.m"
  }
#line 1020 "make.util.m"
}

#line 485 "make.util.m"
static void MR_CALL 
make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_95_119_111_114_107_101_114_95_112_114_111_99_101_115_115_95_95_91_57_93_95_48_11_p_0_1(
#line 485 "make.util.m"
  MR_Box make__util__closure_arg,
#line 485 "make.util.m"
  MR_Box * make__util__wrapper_arg_1,
#line 485 "make.util.m"
  MR_Box make__util__wrapper_arg_2,
#line 485 "make.util.m"
  MR_Box * make__util__wrapper_arg_3)
#line 485 "make.util.m"
{
#line 485 "make.util.m"
  {
#line 485 "make.util.m"
    MR_Box make__util__closure = make__util__closure_arg;
#line 485 "make.util.m"
    MR_Word make__util__conv0_Success_16;

#line 485 "make.util.m"
    {
#line 485 "make.util.m"
      make__util__child_worker_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 8))), ((MR_Box) (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 9))), (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 10)), &make__util__conv0_Success_16);
    }
#line 485 "make.util.m"
    *make__util__wrapper_arg_1 = ((MR_Box) (make__util__conv0_Success_16));
#line 485 "make.util.m"
  }
#line 485 "make.util.m"
}

#line 477 "make.util.m"
static void MR_CALL 
make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_95_119_111_114_107_101_114_95_112_114_111_99_101_115_115_95_95_91_57_93_95_48_11_p_0(
#line 477 "make.util.m"
  MR_Word make__util__TypeInfo_for_T_30,
#line 477 "make.util.m"
  MR_Word make__util__TypeInfo_for_Info_31,
#line 477 "make.util.m"
  MR_Word make__util__Globals_12,
#line 477 "make.util.m"
  MR_Word make__util__KeepGoing_13,
#line 477 "make.util.m"
  MR_Word make__util__MakeTarget_14,
#line 477 "make.util.m"
  MR_Word make__util__Targets_15,
#line 477 "make.util.m"
  MR_Box make__util__JobCtl_16,
#line 477 "make.util.m"
  MR_Box make__util__Info_17,
#line 477 "make.util.m"
  MR_Word make__util__STATE_VARIABLE_Pids_0_23,
#line 477 "make.util.m"
  MR_Word * make__util__STATE_VARIABLE_Pids_24)
#line 477 "make.util.m"
{
#line 483 "make.util.m"
  {
#line 483 "make.util.m"
    MR_bool make__util__succeeded;
#line 483 "make.util.m"
    MR_Word make__util__MaybePid_21;
#line 483 "make.util.m"
    MR_Word make__util__V_27_27;

#line 485 "make.util.m"
    {
#line 485 "make.util.m"
      make__util__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 485 "make.util.m"
      MR_hl_field(MR_mktag(0), make__util__V_27_27, 0) = ((MR_Box) (&make__util_scalar_common_13[0]));
#line 485 "make.util.m"
      MR_hl_field(MR_mktag(0), make__util__V_27_27, 1) = ((MR_Box) (make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_95_119_111_114_107_101_114_95_112_114_111_99_101_115_115_95_95_91_57_93_95_48_11_p_0_1));
#line 485 "make.util.m"
      MR_hl_field(MR_mktag(0), make__util__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 485 "make.util.m"
      MR_hl_field(MR_mktag(0), make__util__V_27_27, 3) = ((MR_Box) (make__util__TypeInfo_for_T_30));
#line 485 "make.util.m"
      MR_hl_field(MR_mktag(0), make__util__V_27_27, 4) = ((MR_Box) (make__util__TypeInfo_for_Info_31));
#line 485 "make.util.m"
      MR_hl_field(MR_mktag(0), make__util__V_27_27, 5) = ((MR_Box) (make__util__Globals_12));
#line 485 "make.util.m"
      MR_hl_field(MR_mktag(0), make__util__V_27_27, 6) = ((MR_Box) (make__util__KeepGoing_13));
#line 485 "make.util.m"
      MR_hl_field(MR_mktag(0), make__util__V_27_27, 7) = ((MR_Box) (make__util__MakeTarget_14));
#line 485 "make.util.m"
      MR_hl_field(MR_mktag(0), make__util__V_27_27, 8) = ((MR_Box) (make__util__Targets_15));
#line 485 "make.util.m"
      MR_hl_field(MR_mktag(0), make__util__V_27_27, 9) = ((MR_Box) (make__util__JobCtl_16));
#line 485 "make.util.m"
      MR_hl_field(MR_mktag(0), make__util__V_27_27, 10) = make__util__Info_17;
#line 485 "make.util.m"
    }
#line 484 "make.util.m"
    {
#line 484 "make.util.m"
      libs__process_util__start_in_forked_process_4_p_0(make__util__V_27_27, &make__util__MaybePid_21);
    }
#line 490 "make.util.m"
    if ((make__util__MaybePid_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 491 "make.util.m"
      *make__util__STATE_VARIABLE_Pids_24 = make__util__STATE_VARIABLE_Pids_0_23;
#line 490 "make.util.m"
    else
#line 488 "make.util.m"
      {
#line 488 "make.util.m"
        MR_Integer make__util__Pid_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), make__util__MaybePid_21, (MR_Integer) 0)));

#line 489 "make.util.m"
        {
#line 489 "make.util.m"
          MR_Word base;
#line 489 "make.util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 489 "make.util.m"
          *make__util__STATE_VARIABLE_Pids_24 = base;
#line 489 "make.util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__util__Pid_22));
#line 489 "make.util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (make__util__STATE_VARIABLE_Pids_0_23));
#line 489 "make.util.m"
        }
#line 488 "make.util.m"
      }
#line 483 "make.util.m"
  }
#line 477 "make.util.m"
}

#line 394 "make.util.m"
static void MR_CALL 
make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_50_95_95_91_49_44_32_50_44_32_51_44_32_52_93_95_48_12_p_0(
#line 394 "make.util.m"
  MR_Word make__util__HeadVar__1_1,
#line 394 "make.util.m"
  MR_Word make__util__HeadVar__2_2,
#line 394 "make.util.m"
  MR_Word make__util__HeadVar__3_3,
#line 394 "make.util.m"
  MR_Word make__util__HeadVar__4_4,
#line 394 "make.util.m"
  MR_Word make__util__STATE_VARIABLE_Success_0_5,
#line 394 "make.util.m"
  MR_Word * make__util__STATE_VARIABLE_Success_6,
#line 394 "make.util.m"
  MR_Box make__util__STATE_VARIABLE_Acc_0_7,
#line 394 "make.util.m"
  MR_Box * make__util__STATE_VARIABLE_Acc_8,
#line 394 "make.util.m"
  MR_Box make__util__STATE_VARIABLE_Info_0_9,
#line 394 "make.util.m"
  MR_Box * make__util__STATE_VARIABLE_Info_10,
#line 394 "make.util.m"
  MR_Box make__util__STATE_VARIABLE_IO_0_11,
#line 394 "make.util.m"
  MR_Box * make__util__STATE_VARIABLE_IO_12)
#line 394 "make.util.m"
{
#line 399 "make.util.m"
  while (MR_TRUE)
#line 399 "make.util.m"
    {
#line 399 "make.util.m"
      /* tailcall optimized into a loop */
#line 399 "make.util.m"
      {
#line 399 "make.util.m"
        MR_bool make__util__succeeded;

#line 399 "make.util.m"
        if ((make__util__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 399 "make.util.m"
          {
#line 400 "make.util.m"
            *make__util__STATE_VARIABLE_IO_12 = make__util__STATE_VARIABLE_IO_0_11;
#line 400 "make.util.m"
            *make__util__STATE_VARIABLE_Info_10 = make__util__STATE_VARIABLE_Info_0_9;
#line 400 "make.util.m"
            *make__util__STATE_VARIABLE_Acc_8 = make__util__STATE_VARIABLE_Acc_0_7;
#line 400 "make.util.m"
            *make__util__STATE_VARIABLE_Success_6 = make__util__STATE_VARIABLE_Success_0_5;
#line 399 "make.util.m"
          }
#line 399 "make.util.m"
        else
#line 402 "make.util.m"
          {
#line 402 "make.util.m"
            MR_Box make__util__T_31 = (MR_hl_field(MR_mktag(1), make__util__HeadVar__4_4, (MR_Integer) 0));
#line 402 "make.util.m"
            MR_Word make__util__Ts_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__util__HeadVar__4_4, (MR_Integer) 1)));
#line 402 "make.util.m"
            MR_Word make__util__NewSuccess_37;
#line 402 "make.util.m"
            MR_Box make__util__STATE_VARIABLE_Acc_46_46;
#line 402 "make.util.m"
            MR_Box make__util__STATE_VARIABLE_Info_47_47;
#line 402 "make.util.m"
            MR_Box make__util__STATE_VARIABLE_IO_48_48;
#line 403 "make.util.m"
            void MR_CALL (* make__util__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), make__util__HeadVar__2_2, (MR_Integer) 1)));
#line 403 "make.util.m"
            MR_Box make__util__conv1_NewSuccess_37;

#line 403 "make.util.m"
            {
#line 403 "make.util.m"
              make__util__func_0(((MR_Box) make__util__HeadVar__2_2), ((MR_Box) (make__util__HeadVar__3_3)), make__util__T_31, &make__util__conv1_NewSuccess_37, make__util__STATE_VARIABLE_Acc_0_7, &make__util__STATE_VARIABLE_Acc_46_46, make__util__STATE_VARIABLE_Info_0_9, &make__util__STATE_VARIABLE_Info_47_47, make__util__STATE_VARIABLE_IO_0_11, &make__util__STATE_VARIABLE_IO_48_48);
            }
#line 403 "make.util.m"
            make__util__NewSuccess_37 = ((MR_Word) make__util__conv1_NewSuccess_37);
#line 405 "make.util.m"
            make__util__succeeded = (make__util__NewSuccess_37 == (MR_Integer) 1);
#line 406 "make.util.m"
            if (!(make__util__succeeded))
#line 406 "make.util.m"
              make__util__succeeded = (make__util__HeadVar__1_1 == (MR_Integer) 1);
#line 412 "make.util.m"
            if (make__util__succeeded)
#line 409 "make.util.m"
              {
#line 409 "make.util.m"
                MR_Word make__util__STATE_VARIABLE_Success_49_49;

#line 409 "make.util.m"
                {
#line 409 "make.util.m"
                  make__util__STATE_VARIABLE_Success_49_49 = mercury__bool__and_2_f_0(make__util__STATE_VARIABLE_Success_0_5, make__util__NewSuccess_37);
                }
#line 410 "make.util.m"
                /* direct tailcall eliminated */
#line 410 "make.util.m"
                {
#line 410 "make.util.m"
                  MR_Word make__util__HeadVar__4__tmp_copy_4 = make__util__Ts_32;
#line 410 "make.util.m"
                  MR_Word make__util__STATE_VARIABLE_Success_0__tmp_copy_5 = make__util__STATE_VARIABLE_Success_49_49;
#line 410 "make.util.m"
                  MR_Box make__util__STATE_VARIABLE_Acc_0__tmp_copy_7 = make__util__STATE_VARIABLE_Acc_46_46;
#line 410 "make.util.m"
                  MR_Box make__util__STATE_VARIABLE_Info_0__tmp_copy_9 = make__util__STATE_VARIABLE_Info_47_47;
#line 410 "make.util.m"
                  MR_Box make__util__STATE_VARIABLE_IO_0__tmp_copy_11 = make__util__STATE_VARIABLE_IO_48_48;

#line 410 "make.util.m"
                  make__util__STATE_VARIABLE_IO_0_11 = make__util__STATE_VARIABLE_IO_0__tmp_copy_11;
#line 410 "make.util.m"
                  make__util__STATE_VARIABLE_Info_0_9 = make__util__STATE_VARIABLE_Info_0__tmp_copy_9;
#line 410 "make.util.m"
                  make__util__STATE_VARIABLE_Acc_0_7 = make__util__STATE_VARIABLE_Acc_0__tmp_copy_7;
#line 410 "make.util.m"
                  make__util__STATE_VARIABLE_Success_0_5 = make__util__STATE_VARIABLE_Success_0__tmp_copy_5;
#line 410 "make.util.m"
                  make__util__HeadVar__4_4 = make__util__HeadVar__4__tmp_copy_4;
#line 410 "make.util.m"
                }
#line 410 "make.util.m"
                continue;
#line 409 "make.util.m"
              }
#line 412 "make.util.m"
            else
#line 413 "make.util.m"
              {
#line 413 "make.util.m"
                *make__util__STATE_VARIABLE_Success_6 = (MR_Integer) 0;
#line 413 "make.util.m"
                *make__util__STATE_VARIABLE_IO_12 = make__util__STATE_VARIABLE_IO_48_48;
#line 413 "make.util.m"
                *make__util__STATE_VARIABLE_Info_10 = make__util__STATE_VARIABLE_Info_47_47;
#line 413 "make.util.m"
                *make__util__STATE_VARIABLE_Acc_8 = make__util__STATE_VARIABLE_Acc_46_46;
#line 413 "make.util.m"
              }
#line 402 "make.util.m"
          }
#line 399 "make.util.m"
      }
#line 399 "make.util.m"
      break;
#line 399 "make.util.m"
    }
#line 394 "make.util.m"
}

#line 367 "make.util.m"
static void MR_CALL 
make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_50_95_95_91_49_44_32_50_44_32_51_93_95_48_10_p_0(
#line 367 "make.util.m"
  MR_Word make__util__HeadVar__1_1,
#line 367 "make.util.m"
  MR_Word make__util__HeadVar__2_2,
#line 367 "make.util.m"
  MR_Word make__util__HeadVar__3_3,
#line 367 "make.util.m"
  MR_Word make__util__HeadVar__4_4,
#line 367 "make.util.m"
  MR_Word make__util__STATE_VARIABLE_Success_0_5,
#line 367 "make.util.m"
  MR_Word * make__util__STATE_VARIABLE_Success_6,
#line 367 "make.util.m"
  MR_Box make__util__STATE_VARIABLE_Info_0_7,
#line 367 "make.util.m"
  MR_Box * make__util__STATE_VARIABLE_Info_8,
#line 367 "make.util.m"
  MR_Box make__util__STATE_VARIABLE_IO_0_9,
#line 367 "make.util.m"
  MR_Box * make__util__STATE_VARIABLE_IO_10)
#line 367 "make.util.m"
{
#line 372 "make.util.m"
  while (MR_TRUE)
#line 372 "make.util.m"
    {
#line 372 "make.util.m"
      /* tailcall optimized into a loop */
#line 372 "make.util.m"
      {
#line 372 "make.util.m"
        MR_bool make__util__succeeded;

#line 372 "make.util.m"
        if ((make__util__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 372 "make.util.m"
          {
#line 373 "make.util.m"
            *make__util__STATE_VARIABLE_IO_10 = make__util__STATE_VARIABLE_IO_0_9;
#line 373 "make.util.m"
            *make__util__STATE_VARIABLE_Info_8 = make__util__STATE_VARIABLE_Info_0_7;
#line 372 "make.util.m"
            *make__util__STATE_VARIABLE_Success_6 = make__util__STATE_VARIABLE_Success_0_5;
#line 372 "make.util.m"
          }
#line 372 "make.util.m"
        else
#line 375 "make.util.m"
          {
#line 375 "make.util.m"
            MR_Box make__util__T_26 = (MR_hl_field(MR_mktag(1), make__util__HeadVar__4_4, (MR_Integer) 0));
#line 375 "make.util.m"
            MR_Word make__util__Ts_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__util__HeadVar__4_4, (MR_Integer) 1)));
#line 375 "make.util.m"
            MR_Word make__util__NewSuccess_31;
#line 375 "make.util.m"
            MR_Box make__util__STATE_VARIABLE_Info_38_38;
#line 375 "make.util.m"
            MR_Box make__util__STATE_VARIABLE_IO_39_39;
#line 376 "make.util.m"
            void MR_CALL (* make__util__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), make__util__HeadVar__2_2, (MR_Integer) 1)));
#line 376 "make.util.m"
            MR_Box make__util__conv1_NewSuccess_31;

#line 376 "make.util.m"
            {
#line 376 "make.util.m"
              make__util__func_0(((MR_Box) make__util__HeadVar__2_2), ((MR_Box) (make__util__HeadVar__3_3)), make__util__T_26, &make__util__conv1_NewSuccess_31, make__util__STATE_VARIABLE_Info_0_7, &make__util__STATE_VARIABLE_Info_38_38, make__util__STATE_VARIABLE_IO_0_9, &make__util__STATE_VARIABLE_IO_39_39);
            }
#line 376 "make.util.m"
            make__util__NewSuccess_31 = ((MR_Word) make__util__conv1_NewSuccess_31);
#line 378 "make.util.m"
            make__util__succeeded = (make__util__NewSuccess_31 == (MR_Integer) 1);
#line 379 "make.util.m"
            if (!(make__util__succeeded))
#line 379 "make.util.m"
              make__util__succeeded = (make__util__HeadVar__1_1 == (MR_Integer) 1);
#line 385 "make.util.m"
            if (make__util__succeeded)
#line 382 "make.util.m"
              {
#line 382 "make.util.m"
                MR_Word make__util__STATE_VARIABLE_Success_40_40;

#line 382 "make.util.m"
                {
#line 382 "make.util.m"
                  make__util__STATE_VARIABLE_Success_40_40 = mercury__bool__and_2_f_0(make__util__STATE_VARIABLE_Success_0_5, make__util__NewSuccess_31);
                }
#line 383 "make.util.m"
                /* direct tailcall eliminated */
#line 383 "make.util.m"
                {
#line 383 "make.util.m"
                  MR_Word make__util__HeadVar__4__tmp_copy_4 = make__util__Ts_27;
#line 383 "make.util.m"
                  MR_Word make__util__STATE_VARIABLE_Success_0__tmp_copy_5 = make__util__STATE_VARIABLE_Success_40_40;
#line 383 "make.util.m"
                  MR_Box make__util__STATE_VARIABLE_Info_0__tmp_copy_7 = make__util__STATE_VARIABLE_Info_38_38;
#line 383 "make.util.m"
                  MR_Box make__util__STATE_VARIABLE_IO_0__tmp_copy_9 = make__util__STATE_VARIABLE_IO_39_39;

#line 383 "make.util.m"
                  make__util__STATE_VARIABLE_IO_0_9 = make__util__STATE_VARIABLE_IO_0__tmp_copy_9;
#line 383 "make.util.m"
                  make__util__STATE_VARIABLE_Info_0_7 = make__util__STATE_VARIABLE_Info_0__tmp_copy_7;
#line 383 "make.util.m"
                  make__util__STATE_VARIABLE_Success_0_5 = make__util__STATE_VARIABLE_Success_0__tmp_copy_5;
#line 383 "make.util.m"
                  make__util__HeadVar__4_4 = make__util__HeadVar__4__tmp_copy_4;
#line 383 "make.util.m"
                }
#line 383 "make.util.m"
                continue;
#line 382 "make.util.m"
              }
#line 385 "make.util.m"
            else
#line 386 "make.util.m"
              {
#line 386 "make.util.m"
                *make__util__STATE_VARIABLE_Success_6 = (MR_Integer) 0;
#line 386 "make.util.m"
                *make__util__STATE_VARIABLE_IO_10 = make__util__STATE_VARIABLE_IO_39_39;
#line 386 "make.util.m"
                *make__util__STATE_VARIABLE_Info_8 = make__util__STATE_VARIABLE_Info_38_38;
#line 386 "make.util.m"
              }
#line 375 "make.util.m"
          }
#line 372 "make.util.m"
      }
#line 372 "make.util.m"
      break;
#line 372 "make.util.m"
    }
#line 367 "make.util.m"
}

#line 234 "make.util.m"
MR_bool MR_CALL 
make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_105_109_101_115_116_97_109_112_95_101_120_116_101_110_115_105_111_110_95_95_91_49_93_95_48_2_f_0(
#line 234 "make.util.m"
  MR_Word make__util__HeadVar__2_2,
#line 234 "make.util.m"
  MR_String * make__util__HeadVar__3_3)
#line 234 "make.util.m"
{
#line 1642 "make.util.m"
  while (MR_TRUE)
#line 1642 "make.util.m"
    {
#line 1642 "make.util.m"
      /* tailcall optimized into a loop */
#line 1642 "make.util.m"
      {
#line 1642 "make.util.m"
        MR_bool make__util__succeeded;

#line 1642 "make.util.m"
#line 1642 "make.util.m"
        switch (MR_tag((MR_Word) make__util__HeadVar__2_2)) {
#line 1642 "make.util.m"
          default:
#line 1642 "make.util.m"
            make__util__succeeded = MR_FALSE;
#line 1642 "make.util.m"
            break;
#line 1642 "make.util.m"
          case (MR_Integer) 0:
#line 1642 "make.util.m"
#line 1642 "make.util.m"
            switch (MR_unmkbody(make__util__HeadVar__2_2)) {
#line 1642 "make.util.m"
              default:
#line 1642 "make.util.m"
                make__util__succeeded = MR_FALSE;
#line 1642 "make.util.m"
                break;
#line 1642 "make.util.m"
              case (MR_Integer) 1:
#line 1642 "make.util.m"
                {
#line 1642 "make.util.m"
                  *make__util__HeadVar__3_3 = (MR_String) ".err_date";
#line 1642 "make.util.m"
                  make__util__succeeded = MR_TRUE;
#line 1642 "make.util.m"
                }
#line 1642 "make.util.m"
                break;
#line 1642 "make.util.m"
              case (MR_Integer) 2:
#line 1643 "make.util.m"
                {
#line 1643 "make.util.m"
                  *make__util__HeadVar__3_3 = (MR_String) ".date0";
#line 1643 "make.util.m"
                  make__util__succeeded = MR_TRUE;
#line 1643 "make.util.m"
                }
#line 1642 "make.util.m"
                break;
#line 1642 "make.util.m"
              case (MR_Integer) 3:
#line 1644 "make.util.m"
                {
#line 1644 "make.util.m"
                  *make__util__HeadVar__3_3 = (MR_String) ".date";
#line 1644 "make.util.m"
                  make__util__succeeded = MR_TRUE;
#line 1644 "make.util.m"
                }
#line 1642 "make.util.m"
                break;
#line 1642 "make.util.m"
              case (MR_Integer) 4:
#line 1645 "make.util.m"
                {
#line 1645 "make.util.m"
                  *make__util__HeadVar__3_3 = (MR_String) ".date";
#line 1645 "make.util.m"
                  make__util__succeeded = MR_TRUE;
#line 1645 "make.util.m"
                }
#line 1642 "make.util.m"
                break;
#line 1642 "make.util.m"
              case (MR_Integer) 5:
#line 1646 "make.util.m"
                {
#line 1646 "make.util.m"
                  *make__util__HeadVar__3_3 = (MR_String) ".date3";
#line 1646 "make.util.m"
                  make__util__succeeded = MR_TRUE;
#line 1646 "make.util.m"
                }
#line 1642 "make.util.m"
                break;
#line 1642 "make.util.m"
              case (MR_Integer) 6:
#line 1647 "make.util.m"
                {
#line 1647 "make.util.m"
                  *make__util__HeadVar__3_3 = (MR_String) ".optdate";
#line 1647 "make.util.m"
                  make__util__succeeded = MR_TRUE;
#line 1647 "make.util.m"
                }
#line 1642 "make.util.m"
                break;
#line 1642 "make.util.m"
              case (MR_Integer) 7:
#line 1648 "make.util.m"
                {
#line 1648 "make.util.m"
                  *make__util__HeadVar__3_3 = (MR_String) ".analysis_date";
#line 1648 "make.util.m"
                  make__util__succeeded = MR_TRUE;
#line 1648 "make.util.m"
                }
#line 1642 "make.util.m"
                break;
#line 1642 "make.util.m"
              case (MR_Integer) 9:
#line 1649 "make.util.m"
                {
#line 1649 "make.util.m"
                  *make__util__HeadVar__3_3 = (MR_String) ".c_date";
#line 1649 "make.util.m"
                  make__util__succeeded = MR_TRUE;
#line 1649 "make.util.m"
                }
#line 1642 "make.util.m"
                break;
#line 1642 "make.util.m"
              case (MR_Integer) 10:
#line 1652 "make.util.m"
                {
#line 1652 "make.util.m"
                  *make__util__HeadVar__3_3 = (MR_String) ".il_date";
#line 1652 "make.util.m"
                  make__util__succeeded = MR_TRUE;
#line 1652 "make.util.m"
                }
#line 1642 "make.util.m"
                break;
#line 1642 "make.util.m"
              case (MR_Integer) 12:
#line 1653 "make.util.m"
                {
#line 1653 "make.util.m"
                  *make__util__HeadVar__3_3 = (MR_String) ".cs_date";
#line 1653 "make.util.m"
                  make__util__succeeded = MR_TRUE;
#line 1653 "make.util.m"
                }
#line 1642 "make.util.m"
                break;
#line 1642 "make.util.m"
              case (MR_Integer) 13:
#line 1654 "make.util.m"
                {
#line 1654 "make.util.m"
                  *make__util__HeadVar__3_3 = (MR_String) ".java_date";
#line 1654 "make.util.m"
                  make__util__succeeded = MR_TRUE;
#line 1654 "make.util.m"
                }
#line 1642 "make.util.m"
                break;
#line 1642 "make.util.m"
              case (MR_Integer) 15:
#line 1656 "make.util.m"
                {
#line 1657 "make.util.m"
                  /* direct tailcall eliminated */
#line 1657 "make.util.m"
                  {
#line 1657 "make.util.m"
                    make__util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16));
#line 1657 "make.util.m"
                  }
#line 1657 "make.util.m"
                  continue;
#line 1656 "make.util.m"
                }
#line 1642 "make.util.m"
                break;
#line 1642 "make.util.m"
              case (MR_Integer) 16:
#line 1655 "make.util.m"
                {
#line 1655 "make.util.m"
                  *make__util__HeadVar__3_3 = (MR_String) ".erl_date";
#line 1655 "make.util.m"
                  make__util__succeeded = MR_TRUE;
#line 1655 "make.util.m"
                }
#line 1642 "make.util.m"
                break;
#line 1642 "make.util.m"
            }
#line 1642 "make.util.m"
            break;
#line 1642 "make.util.m"
          case (MR_Integer) 1:
#line 1650 "make.util.m"
            {
#line 1651 "make.util.m"
              /* direct tailcall eliminated */
#line 1651 "make.util.m"
              {
#line 1651 "make.util.m"
                make__util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
#line 1651 "make.util.m"
              }
#line 1651 "make.util.m"
              continue;
#line 1650 "make.util.m"
            }
#line 1642 "make.util.m"
            break;
#line 1642 "make.util.m"
        }
#line 1642 "make.util.m"
        return make__util__succeeded;
#line 1642 "make.util.m"
      }
#line 1642 "make.util.m"
      break;
#line 1642 "make.util.m"
    }
#line 234 "make.util.m"
}

#line 116 "make.util.m"
void MR_CALL 
make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_100_105_114_101_99_116_95_111_117_116_112_117_116_95_95_91_49_93_95_48_6_p_0(
#line 116 "make.util.m"
  MR_Word * make__util__MaybeErrorStream_8,
#line 116 "make.util.m"
  MR_Word make__util__STATE_VARIABLE_Info_0_15,
#line 116 "make.util.m"
  MR_Word * make__util__STATE_VARIABLE_Info_16)
#line 116 "make.util.m"
{
#line 1069 "make.util.m"
  {
#line 1069 "make.util.m"
    MR_bool make__util__succeeded;
#line 1069 "make.util.m"
    MR_String make__util__ErrorFileName_11;
#line 1069 "make.util.m"
    MR_Word make__util__ErrorFileRes_12;

#line 1074 "make.util.m"
    {
#line 1074 "make.util.m"
      mercury__io__make_temp_3_p_0(&make__util__ErrorFileName_11);
    }
#line 1075 "make.util.m"
    {
#line 1075 "make.util.m"
      mercury__io__open_output_4_p_0(make__util__ErrorFileName_11, &make__util__ErrorFileRes_12);
    }
#line 1079 "make.util.m"
    if (((MR_tag((MR_Word) make__util__ErrorFileRes_12)) == (MR_mktag((MR_Integer) 1))))
#line 1080 "make.util.m"
      {
#line 1080 "make.util.m"
        MR_Word make__util__IOError_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__util__ErrorFileRes_12, (MR_Integer) 0)));
#line 1080 "make.util.m"
        MR_Word make__util__MaybeLock_30;
#line 949 "make.util.m"
        MR_Word make__util__V_36_36;
#line 949 "make.util.m"
        MR_Word make__util__V_37_37;
#line 949 "make.util.m"
        MR_Word make__util__V_38_38;
#line 949 "make.util.m"
        MR_Word make__util__V_39_39;
#line 949 "make.util.m"
        MR_Word make__util__V_40_40;
#line 949 "make.util.m"
        MR_Word make__util__V_41_41;
#line 949 "make.util.m"
        MR_Word make__util__V_42_42;
#line 949 "make.util.m"
        MR_Word make__util__V_43_43;
#line 949 "make.util.m"
        MR_Word make__util__V_44_44;
#line 949 "make.util.m"
        MR_Word make__util__V_45_45;
#line 949 "make.util.m"
        MR_Word make__util__V_46_46;
#line 949 "make.util.m"
        MR_Word make__util__V_47_47;
#line 949 "make.util.m"
        MR_Word make__util__V_48_48;
#line 949 "make.util.m"
        MR_Word make__util__V_49_49;
#line 949 "make.util.m"
        MR_Word make__util__V_50_50;
#line 949 "make.util.m"
        MR_Word make__util__V_51_51;
#line 949 "make.util.m"
        MR_Word make__util__V_52_52;
#line 949 "make.util.m"
        MR_Word make__util__V_53_53;
#line 949 "make.util.m"
        MR_Integer make__util__V_54_54;

#line 1081 "make.util.m"
        *make__util__MaybeErrorStream_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 949 "make.util.m"
        make__util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_15, (MR_Integer) 0)));
#line 949 "make.util.m"
        make__util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_15, (MR_Integer) 1)));
#line 949 "make.util.m"
        make__util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_15, (MR_Integer) 2)));
#line 949 "make.util.m"
        make__util__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)));
#line 949 "make.util.m"
        make__util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_15, (MR_Integer) 4)));
#line 949 "make.util.m"
        make__util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_15, (MR_Integer) 5)));
#line 949 "make.util.m"
        make__util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_15, (MR_Integer) 6)));
#line 949 "make.util.m"
        make__util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_15, (MR_Integer) 7)));
#line 949 "make.util.m"
        make__util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_15, (MR_Integer) 8)));
#line 949 "make.util.m"
        make__util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_15, (MR_Integer) 9)));
#line 949 "make.util.m"
        make__util__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_15, (MR_Integer) 10)));
#line 949 "make.util.m"
        make__util__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_15, (MR_Integer) 11)));
#line 949 "make.util.m"
        make__util__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_15, (MR_Integer) 12)));
#line 949 "make.util.m"
        make__util__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_15, (MR_Integer) 13)));
#line 949 "make.util.m"
        make__util__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_15, (MR_Integer) 14)));
#line 949 "make.util.m"
        make__util__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_15, (MR_Integer) 15)));
#line 949 "make.util.m"
        make__util__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_15, (MR_Integer) 16)));
#line 949 "make.util.m"
        make__util__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_15, (MR_Integer) 17)));
#line 949 "make.util.m"
        make__util__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_15, (MR_Integer) 18)));
#line 949 "make.util.m"
        make__util__MaybeLock_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_15, (MR_Integer) 19)));
#line 955 "make.util.m"
        if ((make__util__MaybeLock_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 957 "make.util.m"
          {
#line 957 "make.util.m"
            make__util__write_error_opening_output_4_p_0(make__util__ErrorFileName_11, make__util__IOError_14);
          }
#line 955 "make.util.m"
        else
#line 951 "make.util.m"
          {
#line 951 "make.util.m"
            MR_Box make__util__Lock_31 = ((MR_Box) (MR_hl_field(MR_mktag(1), make__util__MaybeLock_30, (MR_Integer) 0)));

#line 952 "make.util.m"
            {
#line 952 "make.util.m"
              make__util__lock_stdout_3_p_0(make__util__Lock_31);
            }
#line 953 "make.util.m"
            {
#line 953 "make.util.m"
              make__util__write_error_opening_output_4_p_0(make__util__ErrorFileName_11, make__util__IOError_14);
            }
#line 954 "make.util.m"
            {
#line 954 "make.util.m"
              make__util__unlock_stdout_3_p_0(make__util__Lock_31);
            }
#line 951 "make.util.m"
          }
#line 1080 "make.util.m"
      }
#line 1079 "make.util.m"
    else
#line 1077 "make.util.m"
      {
#line 1077 "make.util.m"
        MR_Word make__util__ErrorOutputStream_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__ErrorFileRes_12, (MR_Integer) 0)));

#line 1078 "make.util.m"
        {
#line 1078 "make.util.m"
          MR_Word base;
#line 1078 "make.util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1078 "make.util.m"
          *make__util__MaybeErrorStream_8 = base;
#line 1078 "make.util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__util__ErrorOutputStream_13));
#line 1078 "make.util.m"
        }
#line 1077 "make.util.m"
      }
#line 1069 "make.util.m"
    *make__util__STATE_VARIABLE_Info_16 = make__util__STATE_VARIABLE_Info_0_15;
#line 1069 "make.util.m"
  }
#line 116 "make.util.m"
}

#line 468 "make.util.m"
static void MR_CALL 
make__util__IntroducedFrom__pred__foldl2_maybe_stop_at_error_parallel_processes__468__1_6_p_0(
#line 468 "make.util.m"
  MR_Box make__util__JobCtl_21,
#line 468 "make.util.m"
  MR_Word make__util__Pids_22,
#line 468 "make.util.m"
  MR_Word make__util__HeadVar__3_104,
#line 468 "make.util.m"
  MR_Word * make__util__HeadVar__4_105)
#line 468 "make.util.m"
{
#line 468 "make.util.m"
  {
#line 468 "make.util.m"
    MR_bool make__util__succeeded;
#line 468 "make.util.m"
    MR_Box make__util__conv0_HeadVar__4_105;

#line 468 "make.util.m"
    {
#line 468 "make.util.m"
      make__util__worker_loop_signal_cleanup_6_p_0((MR_Word) &make__make__type_ctor_info_make_info_0, make__util__JobCtl_21, make__util__Pids_22, ((MR_Box) (make__util__HeadVar__3_104)), &make__util__conv0_HeadVar__4_105);
    }
#line 468 "make.util.m"
    *make__util__HeadVar__4_105 = ((MR_Word) make__util__conv0_HeadVar__4_105);
#line 468 "make.util.m"
  }
#line 468 "make.util.m"
}

#line 467 "make.util.m"
static void MR_CALL 
make__util__IntroducedFrom__pred__foldl2_maybe_stop_at_error_parallel_processes__467__1_12_p_0(
#line 467 "make.util.m"
  MR_Word make__util__TypeInfo_for_T_88,
#line 467 "make.util.m"
  MR_Word make__util__KeepGoing_11,
#line 467 "make.util.m"
  MR_Word make__util__MakeTarget_13,
#line 467 "make.util.m"
  MR_Word make__util__Globals_14,
#line 467 "make.util.m"
  MR_Word make__util__Targets_15,
#line 467 "make.util.m"
  MR_Box make__util__JobCtl_21,
#line 467 "make.util.m"
  MR_Word make__util__HeadVar__7_42,
#line 467 "make.util.m"
  MR_Word * make__util__HeadVar__8_98,
#line 467 "make.util.m"
  MR_Word make__util__HeadVar__9_99,
#line 467 "make.util.m"
  MR_Word * make__util__HeadVar__10_100)
#line 467 "make.util.m"
{
#line 467 "make.util.m"
  {
#line 467 "make.util.m"
    MR_bool make__util__succeeded;
#line 467 "make.util.m"
    MR_Box make__util__conv0_HeadVar__10_100;

#line 467 "make.util.m"
    {
#line 467 "make.util.m"
      make__util__worker_loop_11_p_0(make__util__TypeInfo_for_T_88, (MR_Word) &make__make__type_ctor_info_make_info_0, make__util__Globals_14, make__util__KeepGoing_11, make__util__MakeTarget_13, make__util__Targets_15, make__util__JobCtl_21, make__util__HeadVar__7_42, make__util__HeadVar__8_98, ((MR_Box) (make__util__HeadVar__9_99)), &make__util__conv0_HeadVar__10_100);
    }
#line 467 "make.util.m"
    *make__util__HeadVar__10_100 = ((MR_Word) make__util__conv0_HeadVar__10_100);
#line 467 "make.util.m"
  }
#line 467 "make.util.m"
}

#line 462 "make.util.m"
static void MR_CALL 
make__util__IntroducedFrom__pred__foldl2_maybe_stop_at_error_parallel_processes__462__1_12_p_0(
#line 462 "make.util.m"
  MR_Word make__util__TypeInfo_for_T_88,
#line 462 "make.util.m"
  MR_Word make__util__KeepGoing_11,
#line 462 "make.util.m"
  MR_Word make__util__MakeTarget_13,
#line 462 "make.util.m"
  MR_Word make__util__Globals_14,
#line 462 "make.util.m"
  MR_Word make__util__Targets_15,
#line 462 "make.util.m"
  MR_Box make__util__JobCtl_21,
#line 462 "make.util.m"
  MR_Word make__util__STATE_VARIABLE_Info_30_30,
#line 462 "make.util.m"
  MR_Integer make__util__HeadVar__8_89,
#line 462 "make.util.m"
  MR_Word make__util__HeadVar__9_90,
#line 462 "make.util.m"
  MR_Word * make__util__HeadVar__10_91)
#line 462 "make.util.m"
{
#line 462 "make.util.m"
  {
#line 462 "make.util.m"
    MR_bool make__util__succeeded;

#line 462 "make.util.m"
    {
#line 462 "make.util.m"
      make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_112_97_114_97_108_108_101_108_95_112_114_111_99_101_115_115_101_115_95_95_52_54_50_95_95_49_95_95_91_56_93_95_48_12_p_0(make__util__TypeInfo_for_T_88, make__util__KeepGoing_11, make__util__MakeTarget_13, make__util__Globals_14, make__util__Targets_15, make__util__JobCtl_21, make__util__STATE_VARIABLE_Info_30_30, make__util__HeadVar__9_90, make__util__HeadVar__10_91);
#line 462 "make.util.m"
      return;
    }
#line 462 "make.util.m"
  }
#line 462 "make.util.m"
}

#line 1845 "make.util.m"
static void MR_CALL 
make__util__IntroducedFrom__pred__maybe_symlink_or_copy_linked_target_message__1845__1_4_p_0(
#line 1845 "make.util.m"
  MR_Word make__util__Globals_5,
#line 1845 "make.util.m"
  MR_Word make__util__Target_6)
#line 1845 "make.util.m"
{
#line 1845 "make.util.m"
  {
#line 1845 "make.util.m"
    MR_bool make__util__succeeded;
#line 1845 "make.util.m"
    MR_Word make__util__ModuleName_26;
#line 1845 "make.util.m"
    MR_Word make__util__FileType_27;

#line 1847 "make.util.m"
    {
#line 1847 "make.util.m"
      mercury__io__write_string_3_p_0((MR_String) "Made symlink/copy of ");
    }
#line 1855 "make.util.m"
    make__util__ModuleName_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Target_6, (MR_Integer) 0)));
#line 1855 "make.util.m"
    make__util__FileType_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Target_6, (MR_Integer) 1)));
#line 1860 "make.util.m"
#line 1860 "make.util.m"
    switch (MR_tag((MR_Word) make__util__FileType_27)) {
#line 1860 "make.util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1860 "make.util.m"
      case (MR_Integer) 0:
#line 1857 "make.util.m"
        {
#line 1857 "make.util.m"
          MR_Word make__util__ModuleTargetType_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__FileType_27, (MR_Integer) 0)));
#line 1857 "make.util.m"
          MR_Word make__util__TargetFile_30;

#line 1858 "make.util.m"
          {
#line 1858 "make.util.m"
            make__util__TargetFile_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1858 "make.util.m"
            MR_hl_field(MR_mktag(0), make__util__TargetFile_30, 0) = ((MR_Box) (make__util__ModuleName_26));
#line 1858 "make.util.m"
            MR_hl_field(MR_mktag(0), make__util__TargetFile_30, 1) = ((MR_Box) (make__util__ModuleTargetType_29));
#line 1858 "make.util.m"
          }
#line 1771 "make.util.m"
          {
#line 1771 "make.util.m"
            make__util__make_write_target_file_wrapped_6_p_0(make__util__Globals_5, (MR_String) "", make__util__TargetFile_30, (MR_String) "");
          }
#line 1857 "make.util.m"
        }
#line 1860 "make.util.m"
        break;
#line 1860 "make.util.m"
      case (MR_Integer) 1:
#line 1861 "make.util.m"
        {
#line 1861 "make.util.m"
          MR_Word make__util__LinkedTargetType_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__util__FileType_27, (MR_Integer) 0)));
#line 1861 "make.util.m"
          MR_String make__util__FileName_32;

#line 1862 "make.util.m"
          {
#line 1862 "make.util.m"
            make__util__linked_target_file_name_6_p_0(make__util__Globals_5, make__util__ModuleName_26, make__util__LinkedTargetType_31, &make__util__FileName_32);
          }
#line 1864 "make.util.m"
          {
#line 1864 "make.util.m"
            mercury__io__write_string_3_p_0(make__util__FileName_32);
          }
#line 1861 "make.util.m"
        }
#line 1860 "make.util.m"
        break;
#line 1860 "make.util.m"
      case (MR_Integer) 2:
#line 1866 "make.util.m"
        {
#line 1867 "make.util.m"
          {
#line 1867 "make.util.m"
            mercury__require__unexpected_3_p_0((MR_String) "make.util", (MR_String) "predicate \140make.util.make_write_module_or_linked_target\'/4", (MR_String) "misc_target");
#line 1867 "make.util.m"
            return;
          }
#line 1866 "make.util.m"
        }
#line 1860 "make.util.m"
        break;
#line 1860 "make.util.m"
    }
#line 1849 "make.util.m"
    {
#line 1849 "make.util.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
#line 1849 "make.util.m"
      return;
    }
#line 1845 "make.util.m"
  }
#line 1845 "make.util.m"
}

#line 1456 "make.util.m"
static MR_Word MR_CALL 
make__util__IntroducedFrom__func__make_dependency_list__1456__1_2_f_0(
#line 1456 "make.util.m"
  MR_Word make__util__FileType_5,
#line 1456 "make.util.m"
  MR_Word make__util__HeadVar__2_8)
#line 1456 "make.util.m"
{
#line 1456 "make.util.m"
  {
#line 1456 "make.util.m"
    MR_bool make__util__succeeded;
#line 1456 "make.util.m"
    MR_Word make__util__HeadVar__3_9;
#line 1456 "make.util.m"
    MR_Word make__util__V_10_10;

#line 1456 "make.util.m"
    {
#line 1456 "make.util.m"
      make__util__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1456 "make.util.m"
      MR_hl_field(MR_mktag(0), make__util__V_10_10, 0) = ((MR_Box) (make__util__HeadVar__2_8));
#line 1456 "make.util.m"
      MR_hl_field(MR_mktag(0), make__util__V_10_10, 1) = ((MR_Box) (make__util__FileType_5));
#line 1456 "make.util.m"
    }
#line 1456 "make.util.m"
    {
#line 1456 "make.util.m"
      make__util__HeadVar__3_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1456 "make.util.m"
      MR_hl_field(MR_mktag(0), make__util__HeadVar__3_9, 0) = ((MR_Box) (make__util__V_10_10));
#line 1456 "make.util.m"
    }
#line 1456 "make.util.m"
    return make__util__HeadVar__3_9;
#line 1456 "make.util.m"
  }
#line 1456 "make.util.m"
}

#line 1452 "make.util.m"
static MR_Word MR_CALL 
make__util__IntroducedFrom__func__make_target_file_list__1452__1_2_f_0(
#line 1452 "make.util.m"
  MR_Word make__util__FileType_5,
#line 1452 "make.util.m"
  MR_Word make__util__HeadVar__2_8)
#line 1452 "make.util.m"
{
#line 1452 "make.util.m"
  {
#line 1452 "make.util.m"
    MR_bool make__util__succeeded;
#line 1452 "make.util.m"
    MR_Word make__util__HeadVar__3_9;

#line 1452 "make.util.m"
    {
#line 1452 "make.util.m"
      make__util__HeadVar__3_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1452 "make.util.m"
      MR_hl_field(MR_mktag(0), make__util__HeadVar__3_9, 0) = ((MR_Box) (make__util__HeadVar__2_8));
#line 1452 "make.util.m"
      MR_hl_field(MR_mktag(0), make__util__HeadVar__3_9, 1) = ((MR_Box) (make__util__FileType_5));
#line 1452 "make.util.m"
    }
#line 1452 "make.util.m"
    return make__util__HeadVar__3_9;
#line 1452 "make.util.m"
  }
#line 1452 "make.util.m"
}

#line 915 "make.util.m"
void MR_CALL 
make__util____Compare____stdout_lock_0_0(
#line 915 "make.util.m"
  MR_Word * make__util__HeadVar__1_1,
#line 915 "make.util.m"
  MR_Box make__util__HeadVar__2_2,
#line 915 "make.util.m"
  MR_Box make__util__HeadVar__3_3)
#line 915 "make.util.m"
{
#line 915 "make.util.m"
  {
#line 915 "make.util.m"
    MR_bool make__util__succeeded;
#line 915 "make.util.m"
    MR_Box make__util__Cast_HeadVar1_4 = make__util__HeadVar__2_2;
#line 915 "make.util.m"
    MR_Box make__util__Cast_HeadVar2_5 = make__util__HeadVar__3_3;
#line 915 "make.util.m"
    MR_Word make__util__Cast_HeadVar1_7 = (MR_Word) make__util__Cast_HeadVar1_4;
#line 915 "make.util.m"
    MR_Word make__util__Cast_HeadVar2_8 = (MR_Word) make__util__Cast_HeadVar2_5;

#line 745 "make.util.m"
    {
#line 745 "make.util.m"
      mercury__builtin____Compare____c_pointer_0_0(make__util__HeadVar__1_1, make__util__Cast_HeadVar1_7, make__util__Cast_HeadVar2_8);
#line 745 "make.util.m"
      return;
    }
#line 915 "make.util.m"
  }
#line 915 "make.util.m"
}

#line 915 "make.util.m"
MR_bool MR_CALL 
make__util____Unify____stdout_lock_0_0(
#line 915 "make.util.m"
  MR_Box make__util__HeadVar__1_1,
#line 915 "make.util.m"
  MR_Box make__util__HeadVar__2_2)
#line 915 "make.util.m"
{
#line 915 "make.util.m"
  {
#line 915 "make.util.m"
    MR_bool make__util__succeeded;
#line 915 "make.util.m"
    MR_Box make__util__Cast_HeadVar1_3 = make__util__HeadVar__1_1;
#line 915 "make.util.m"
    MR_Box make__util__Cast_HeadVar2_4 = make__util__HeadVar__2_2;
#line 915 "make.util.m"
    MR_Word make__util__Cast_HeadVar1_5 = (MR_Word) make__util__Cast_HeadVar1_3;
#line 915 "make.util.m"
    MR_Word make__util__Cast_HeadVar2_6 = (MR_Word) make__util__Cast_HeadVar2_4;

#line 745 "make.util.m"
    {
#line 745 "make.util.m"
      return make__util__succeeded = mercury__builtin____Unify____c_pointer_0_0(make__util__Cast_HeadVar1_5, make__util__Cast_HeadVar2_6);
    }
#line 915 "make.util.m"
    return make__util__succeeded;
#line 915 "make.util.m"
  }
#line 915 "make.util.m"
}

#line 745 "make.util.m"
void MR_CALL 
make__util____Compare____job_ctl_0_0(
#line 745 "make.util.m"
  MR_Word * make__util__HeadVar__1_1,
#line 745 "make.util.m"
  MR_Box make__util__HeadVar__2_2,
#line 745 "make.util.m"
  MR_Box make__util__HeadVar__3_3)
#line 745 "make.util.m"
{
#line 745 "make.util.m"
  {
#line 745 "make.util.m"
    MR_bool make__util__succeeded;
#line 745 "make.util.m"
    MR_Word make__util__Cast_HeadVar1_4 = (MR_Word) make__util__HeadVar__2_2;
#line 745 "make.util.m"
    MR_Word make__util__Cast_HeadVar2_5 = (MR_Word) make__util__HeadVar__3_3;

#line 745 "make.util.m"
    {
#line 745 "make.util.m"
      mercury__builtin____Compare____c_pointer_0_0(make__util__HeadVar__1_1, make__util__Cast_HeadVar1_4, make__util__Cast_HeadVar2_5);
#line 745 "make.util.m"
      return;
    }
#line 745 "make.util.m"
  }
#line 745 "make.util.m"
}

#line 745 "make.util.m"
MR_bool MR_CALL 
make__util____Unify____job_ctl_0_0(
#line 745 "make.util.m"
  MR_Box make__util__HeadVar__1_1,
#line 745 "make.util.m"
  MR_Box make__util__HeadVar__2_2)
#line 745 "make.util.m"
{
#line 745 "make.util.m"
  {
#line 745 "make.util.m"
    MR_bool make__util__succeeded;
#line 745 "make.util.m"
    MR_Word make__util__Cast_HeadVar1_3 = (MR_Word) make__util__HeadVar__1_1;
#line 745 "make.util.m"
    MR_Word make__util__Cast_HeadVar2_4 = (MR_Word) make__util__HeadVar__2_2;

#line 745 "make.util.m"
    {
#line 745 "make.util.m"
      return make__util__succeeded = mercury__builtin____Unify____c_pointer_0_0(make__util__Cast_HeadVar1_3, make__util__Cast_HeadVar2_4);
    }
#line 745 "make.util.m"
    return make__util__succeeded;
#line 745 "make.util.m"
  }
#line 745 "make.util.m"
}

#line 43 "make.util.m"
void MR_CALL 
make__util____Compare____foldl3_pred_with_status_4_0(
#line 43 "make.util.m"
  MR_Word make__util__TypeInfo_for_T_6,
#line 43 "make.util.m"
  MR_Word make__util__TypeInfo_for_Acc_7,
#line 43 "make.util.m"
  MR_Word make__util__TypeInfo_for_Info_8,
#line 43 "make.util.m"
  MR_Word make__util__TypeInfo_for_IO_9,
#line 43 "make.util.m"
  MR_Word * make__util__HeadVar__1_1,
#line 43 "make.util.m"
  MR_Word make__util__HeadVar__2_2,
#line 43 "make.util.m"
  MR_Word make__util__HeadVar__3_3)
#line 43 "make.util.m"
{
#line 43 "make.util.m"
  {
#line 43 "make.util.m"
    MR_bool make__util__succeeded;
#line 43 "make.util.m"
    MR_Word make__util__Cast_HeadVar1_4 = make__util__HeadVar__2_2;
#line 43 "make.util.m"
    MR_Word make__util__Cast_HeadVar2_5 = make__util__HeadVar__3_3;

#line 43 "make.util.m"
    {
#line 43 "make.util.m"
      mercury__private_builtin__builtin_compare_pred_3_p_0(make__util__HeadVar__1_1, (MR_Word) make__util__Cast_HeadVar1_4, (MR_Word) make__util__Cast_HeadVar2_5);
#line 43 "make.util.m"
      return;
    }
#line 43 "make.util.m"
  }
#line 43 "make.util.m"
}

#line 43 "make.util.m"
MR_bool MR_CALL 
make__util____Unify____foldl3_pred_with_status_4_0(
#line 43 "make.util.m"
  MR_Word make__util__TypeInfo_for_T_5,
#line 43 "make.util.m"
  MR_Word make__util__TypeInfo_for_Acc_6,
#line 43 "make.util.m"
  MR_Word make__util__TypeInfo_for_Info_7,
#line 43 "make.util.m"
  MR_Word make__util__TypeInfo_for_IO_8,
#line 43 "make.util.m"
  MR_Word make__util__HeadVar__1_1,
#line 43 "make.util.m"
  MR_Word make__util__HeadVar__2_2)
#line 43 "make.util.m"
{
#line 43 "make.util.m"
  {
#line 43 "make.util.m"
    MR_bool make__util__succeeded;
#line 43 "make.util.m"
    MR_Word make__util__Cast_HeadVar1_3 = make__util__HeadVar__1_1;
#line 43 "make.util.m"
    MR_Word make__util__Cast_HeadVar2_4 = make__util__HeadVar__2_2;

#line 43 "make.util.m"
    {
#line 43 "make.util.m"
      return make__util__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) make__util__Cast_HeadVar1_3, (MR_Word) make__util__Cast_HeadVar2_4);
    }
#line 43 "make.util.m"
    return make__util__succeeded;
#line 43 "make.util.m"
  }
#line 43 "make.util.m"
}

#line 29 "make.util.m"
void MR_CALL 
make__util____Compare____foldl2_pred_with_status_3_0(
#line 29 "make.util.m"
  MR_Word make__util__TypeInfo_for_T_6,
#line 29 "make.util.m"
  MR_Word make__util__TypeInfo_for_Info_7,
#line 29 "make.util.m"
  MR_Word make__util__TypeInfo_for_IO_8,
#line 29 "make.util.m"
  MR_Word * make__util__HeadVar__1_1,
#line 29 "make.util.m"
  MR_Word make__util__HeadVar__2_2,
#line 29 "make.util.m"
  MR_Word make__util__HeadVar__3_3)
#line 29 "make.util.m"
{
#line 29 "make.util.m"
  {
#line 29 "make.util.m"
    MR_bool make__util__succeeded;
#line 29 "make.util.m"
    MR_Word make__util__Cast_HeadVar1_4 = make__util__HeadVar__2_2;
#line 29 "make.util.m"
    MR_Word make__util__Cast_HeadVar2_5 = make__util__HeadVar__3_3;

#line 29 "make.util.m"
    {
#line 29 "make.util.m"
      mercury__private_builtin__builtin_compare_pred_3_p_0(make__util__HeadVar__1_1, (MR_Word) make__util__Cast_HeadVar1_4, (MR_Word) make__util__Cast_HeadVar2_5);
#line 29 "make.util.m"
      return;
    }
#line 29 "make.util.m"
  }
#line 29 "make.util.m"
}

#line 29 "make.util.m"
MR_bool MR_CALL 
make__util____Unify____foldl2_pred_with_status_3_0(
#line 29 "make.util.m"
  MR_Word make__util__TypeInfo_for_T_5,
#line 29 "make.util.m"
  MR_Word make__util__TypeInfo_for_Info_6,
#line 29 "make.util.m"
  MR_Word make__util__TypeInfo_for_IO_7,
#line 29 "make.util.m"
  MR_Word make__util__HeadVar__1_1,
#line 29 "make.util.m"
  MR_Word make__util__HeadVar__2_2)
#line 29 "make.util.m"
{
#line 29 "make.util.m"
  {
#line 29 "make.util.m"
    MR_bool make__util__succeeded;
#line 29 "make.util.m"
    MR_Word make__util__Cast_HeadVar1_3 = make__util__HeadVar__1_1;
#line 29 "make.util.m"
    MR_Word make__util__Cast_HeadVar2_4 = make__util__HeadVar__2_2;

#line 29 "make.util.m"
    {
#line 29 "make.util.m"
      return make__util__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) make__util__Cast_HeadVar1_3, (MR_Word) make__util__Cast_HeadVar2_4);
    }
#line 29 "make.util.m"
    return make__util__succeeded;
#line 29 "make.util.m"
  }
#line 29 "make.util.m"
}

#line 126 "make.util.m"
void MR_CALL 
make__util____Compare____build2_2_0(
#line 126 "make.util.m"
  MR_Word make__util__TypeInfo_for_T_6,
#line 126 "make.util.m"
  MR_Word make__util__TypeInfo_for_U_7,
#line 126 "make.util.m"
  MR_Word * make__util__HeadVar__1_1,
#line 126 "make.util.m"
  MR_Word make__util__HeadVar__2_2,
#line 126 "make.util.m"
  MR_Word make__util__HeadVar__3_3)
#line 126 "make.util.m"
{
#line 126 "make.util.m"
  {
#line 126 "make.util.m"
    MR_bool make__util__succeeded;
#line 126 "make.util.m"
    MR_Word make__util__Cast_HeadVar1_4 = make__util__HeadVar__2_2;
#line 126 "make.util.m"
    MR_Word make__util__Cast_HeadVar2_5 = make__util__HeadVar__3_3;

#line 126 "make.util.m"
    {
#line 126 "make.util.m"
      mercury__private_builtin__builtin_compare_pred_3_p_0(make__util__HeadVar__1_1, (MR_Word) make__util__Cast_HeadVar1_4, (MR_Word) make__util__Cast_HeadVar2_5);
#line 126 "make.util.m"
      return;
    }
#line 126 "make.util.m"
  }
#line 126 "make.util.m"
}

#line 126 "make.util.m"
MR_bool MR_CALL 
make__util____Unify____build2_2_0(
#line 126 "make.util.m"
  MR_Word make__util__TypeInfo_for_T_5,
#line 126 "make.util.m"
  MR_Word make__util__TypeInfo_for_U_6,
#line 126 "make.util.m"
  MR_Word make__util__HeadVar__1_1,
#line 126 "make.util.m"
  MR_Word make__util__HeadVar__2_2)
#line 126 "make.util.m"
{
#line 126 "make.util.m"
  {
#line 126 "make.util.m"
    MR_bool make__util__succeeded;
#line 126 "make.util.m"
    MR_Word make__util__Cast_HeadVar1_3 = make__util__HeadVar__1_1;
#line 126 "make.util.m"
    MR_Word make__util__Cast_HeadVar2_4 = make__util__HeadVar__2_2;

#line 126 "make.util.m"
    {
#line 126 "make.util.m"
      return make__util__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) make__util__Cast_HeadVar1_3, (MR_Word) make__util__Cast_HeadVar2_4);
    }
#line 126 "make.util.m"
    return make__util__succeeded;
#line 126 "make.util.m"
  }
#line 126 "make.util.m"
}

#line 75 "make.util.m"
void MR_CALL 
make__util____Compare____build_3_0(
#line 75 "make.util.m"
  MR_Word make__util__TypeInfo_for_T_6,
#line 75 "make.util.m"
  MR_Word make__util__TypeInfo_for_Info1_7,
#line 75 "make.util.m"
  MR_Word make__util__TypeInfo_for_Info2_8,
#line 75 "make.util.m"
  MR_Word * make__util__HeadVar__1_1,
#line 75 "make.util.m"
  MR_Word make__util__HeadVar__2_2,
#line 75 "make.util.m"
  MR_Word make__util__HeadVar__3_3)
#line 75 "make.util.m"
{
#line 75 "make.util.m"
  {
#line 75 "make.util.m"
    MR_bool make__util__succeeded;
#line 75 "make.util.m"
    MR_Word make__util__Cast_HeadVar1_4 = make__util__HeadVar__2_2;
#line 75 "make.util.m"
    MR_Word make__util__Cast_HeadVar2_5 = make__util__HeadVar__3_3;

#line 75 "make.util.m"
    {
#line 75 "make.util.m"
      mercury__private_builtin__builtin_compare_pred_3_p_0(make__util__HeadVar__1_1, (MR_Word) make__util__Cast_HeadVar1_4, (MR_Word) make__util__Cast_HeadVar2_5);
#line 75 "make.util.m"
      return;
    }
#line 75 "make.util.m"
  }
#line 75 "make.util.m"
}

#line 75 "make.util.m"
MR_bool MR_CALL 
make__util____Unify____build_3_0(
#line 75 "make.util.m"
  MR_Word make__util__TypeInfo_for_T_5,
#line 75 "make.util.m"
  MR_Word make__util__TypeInfo_for_Info1_6,
#line 75 "make.util.m"
  MR_Word make__util__TypeInfo_for_Info2_7,
#line 75 "make.util.m"
  MR_Word make__util__HeadVar__1_1,
#line 75 "make.util.m"
  MR_Word make__util__HeadVar__2_2)
#line 75 "make.util.m"
{
#line 75 "make.util.m"
  {
#line 75 "make.util.m"
    MR_bool make__util__succeeded;
#line 75 "make.util.m"
    MR_Word make__util__Cast_HeadVar1_3 = make__util__HeadVar__1_1;
#line 75 "make.util.m"
    MR_Word make__util__Cast_HeadVar2_4 = make__util__HeadVar__2_2;

#line 75 "make.util.m"
    {
#line 75 "make.util.m"
      return make__util__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) make__util__Cast_HeadVar1_3, (MR_Word) make__util__Cast_HeadVar2_4);
    }
#line 75 "make.util.m"
    return make__util__succeeded;
#line 75 "make.util.m"
  }
#line 75 "make.util.m"
}

#line 76 "make.util.m"
void MR_CALL 
make__util____Compare____build_2_0(
#line 76 "make.util.m"
  MR_Word make__util__TypeInfo_for_T_6,
#line 76 "make.util.m"
  MR_Word make__util__TypeInfo_for_Info_7,
#line 76 "make.util.m"
  MR_Word * make__util__HeadVar__1_1,
#line 76 "make.util.m"
  MR_Word make__util__HeadVar__2_2,
#line 76 "make.util.m"
  MR_Word make__util__HeadVar__3_3)
#line 76 "make.util.m"
{
#line 76 "make.util.m"
  {
#line 76 "make.util.m"
    MR_bool make__util__succeeded;
#line 76 "make.util.m"
    MR_Word make__util__Cast_HeadVar1_4 = make__util__HeadVar__2_2;
#line 76 "make.util.m"
    MR_Word make__util__Cast_HeadVar2_5 = make__util__HeadVar__3_3;

#line 76 "make.util.m"
    {
#line 76 "make.util.m"
      mercury__private_builtin__builtin_compare_pred_3_p_0(make__util__HeadVar__1_1, (MR_Word) make__util__Cast_HeadVar1_4, (MR_Word) make__util__Cast_HeadVar2_5);
#line 76 "make.util.m"
      return;
    }
#line 76 "make.util.m"
  }
#line 76 "make.util.m"
}

#line 76 "make.util.m"
MR_bool MR_CALL 
make__util____Unify____build_2_0(
#line 76 "make.util.m"
  MR_Word make__util__TypeInfo_for_T_5,
#line 76 "make.util.m"
  MR_Word make__util__TypeInfo_for_Info_6,
#line 76 "make.util.m"
  MR_Word make__util__HeadVar__1_1,
#line 76 "make.util.m"
  MR_Word make__util__HeadVar__2_2)
#line 76 "make.util.m"
{
#line 76 "make.util.m"
  {
#line 76 "make.util.m"
    MR_bool make__util__succeeded;
#line 76 "make.util.m"
    MR_Word make__util__Cast_HeadVar1_3 = make__util__HeadVar__1_1;
#line 76 "make.util.m"
    MR_Word make__util__Cast_HeadVar2_4 = make__util__HeadVar__2_2;

#line 76 "make.util.m"
    {
#line 76 "make.util.m"
      return make__util__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) make__util__Cast_HeadVar1_3, (MR_Word) make__util__Cast_HeadVar2_4);
    }
#line 76 "make.util.m"
    return make__util__succeeded;
#line 76 "make.util.m"
  }
#line 76 "make.util.m"
}

#line 77 "make.util.m"
void MR_CALL 
make__util____Compare____build_1_0(
#line 77 "make.util.m"
  MR_Word make__util__TypeInfo_for_T_6,
#line 77 "make.util.m"
  MR_Word * make__util__HeadVar__1_1,
#line 77 "make.util.m"
  MR_Word make__util__HeadVar__2_2,
#line 77 "make.util.m"
  MR_Word make__util__HeadVar__3_3)
#line 77 "make.util.m"
{
#line 77 "make.util.m"
  {
#line 77 "make.util.m"
    MR_bool make__util__succeeded;
#line 77 "make.util.m"
    MR_Word make__util__Cast_HeadVar1_4 = make__util__HeadVar__2_2;
#line 77 "make.util.m"
    MR_Word make__util__Cast_HeadVar2_5 = make__util__HeadVar__3_3;

#line 77 "make.util.m"
    {
#line 77 "make.util.m"
      mercury__private_builtin__builtin_compare_pred_3_p_0(make__util__HeadVar__1_1, (MR_Word) make__util__Cast_HeadVar1_4, (MR_Word) make__util__Cast_HeadVar2_5);
#line 77 "make.util.m"
      return;
    }
#line 77 "make.util.m"
  }
#line 77 "make.util.m"
}

#line 77 "make.util.m"
MR_bool MR_CALL 
make__util____Unify____build_1_0(
#line 77 "make.util.m"
  MR_Word make__util__TypeInfo_for_T_5,
#line 77 "make.util.m"
  MR_Word make__util__HeadVar__1_1,
#line 77 "make.util.m"
  MR_Word make__util__HeadVar__2_2)
#line 77 "make.util.m"
{
#line 77 "make.util.m"
  {
#line 77 "make.util.m"
    MR_bool make__util__succeeded;
#line 77 "make.util.m"
    MR_Word make__util__Cast_HeadVar1_3 = make__util__HeadVar__1_1;
#line 77 "make.util.m"
    MR_Word make__util__Cast_HeadVar2_4 = make__util__HeadVar__2_2;

#line 77 "make.util.m"
    {
#line 77 "make.util.m"
      return make__util__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) make__util__Cast_HeadVar1_3, (MR_Word) make__util__Cast_HeadVar2_4);
    }
#line 77 "make.util.m"
    return make__util__succeeded;
#line 77 "make.util.m"
  }
#line 77 "make.util.m"
}

#line 1852 "make.util.m"
static void MR_CALL 
make__util__make_write_module_or_linked_target_4_p_0(
#line 1852 "make.util.m"
  MR_Word make__util__Globals_5,
#line 1852 "make.util.m"
  MR_Word make__util__HeadVar__2_2)
#line 1852 "make.util.m"
{
#line 1855 "make.util.m"
  {
#line 1855 "make.util.m"
    MR_bool make__util__succeeded;
#line 1855 "make.util.m"
    MR_Word make__util__ModuleName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__HeadVar__2_2, (MR_Integer) 0)));
#line 1855 "make.util.m"
    MR_Word make__util__FileType_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__HeadVar__2_2, (MR_Integer) 1)));

#line 1860 "make.util.m"
#line 1860 "make.util.m"
    switch (MR_tag((MR_Word) make__util__FileType_7)) {
#line 1860 "make.util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1860 "make.util.m"
      case (MR_Integer) 0:
#line 1857 "make.util.m"
        {
#line 1857 "make.util.m"
          MR_Word make__util__ModuleTargetType_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__FileType_7, (MR_Integer) 0)));
#line 1857 "make.util.m"
          MR_Word make__util__TargetFile_10;

#line 1858 "make.util.m"
          {
#line 1858 "make.util.m"
            make__util__TargetFile_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1858 "make.util.m"
            MR_hl_field(MR_mktag(0), make__util__TargetFile_10, 0) = ((MR_Box) (make__util__ModuleName_6));
#line 1858 "make.util.m"
            MR_hl_field(MR_mktag(0), make__util__TargetFile_10, 1) = ((MR_Box) (make__util__ModuleTargetType_9));
#line 1858 "make.util.m"
          }
#line 1771 "make.util.m"
          {
#line 1771 "make.util.m"
            make__util__make_write_target_file_wrapped_6_p_0(make__util__Globals_5, (MR_String) "", make__util__TargetFile_10, (MR_String) "");
#line 1771 "make.util.m"
            return;
          }
#line 1857 "make.util.m"
        }
#line 1860 "make.util.m"
        break;
#line 1860 "make.util.m"
      case (MR_Integer) 1:
#line 1861 "make.util.m"
        {
#line 1861 "make.util.m"
          MR_Word make__util__LinkedTargetType_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__util__FileType_7, (MR_Integer) 0)));
#line 1861 "make.util.m"
          MR_String make__util__FileName_12;

#line 1862 "make.util.m"
          {
#line 1862 "make.util.m"
            make__util__linked_target_file_name_6_p_0(make__util__Globals_5, make__util__ModuleName_6, make__util__LinkedTargetType_11, &make__util__FileName_12);
          }
#line 1864 "make.util.m"
          {
#line 1864 "make.util.m"
            mercury__io__write_string_3_p_0(make__util__FileName_12);
#line 1864 "make.util.m"
            return;
          }
#line 1861 "make.util.m"
        }
#line 1860 "make.util.m"
        break;
#line 1860 "make.util.m"
      case (MR_Integer) 2:
#line 1866 "make.util.m"
        {
#line 1867 "make.util.m"
          {
#line 1867 "make.util.m"
            mercury__require__unexpected_3_p_0((MR_String) "make.util", (MR_String) "predicate \140make.util.make_write_module_or_linked_target\'/4", (MR_String) "misc_target");
#line 1867 "make.util.m"
            return;
          }
#line 1866 "make.util.m"
        }
#line 1860 "make.util.m"
        break;
#line 1860 "make.util.m"
    }
#line 1855 "make.util.m"
  }
#line 1852 "make.util.m"
}

#line 1554 "make.util.m"
static void MR_CALL 
make__util__module_target_to_file_name_maybe_search_8_p_0(
#line 1554 "make.util.m"
  MR_Word make__util__Globals_9,
#line 1554 "make.util.m"
  MR_Word make__util__ModuleName_10,
#line 1554 "make.util.m"
  MR_Word make__util__TargetType_11,
#line 1554 "make.util.m"
  MR_Word make__util__MkDir_12,
#line 1554 "make.util.m"
  MR_Word make__util__Search_13,
#line 1554 "make.util.m"
  MR_String * make__util__FileName_14)
#line 1554 "make.util.m"
{
#line 1559 "make.util.m"
  while (MR_TRUE)
#line 1559 "make.util.m"
    {
#line 1559 "make.util.m"
      /* tailcall optimized into a loop */
#line 1559 "make.util.m"
      {
#line 1559 "make.util.m"
        MR_bool make__util__succeeded;
#line 1559 "make.util.m"
        MR_Word make__util__MaybeExt_16;

#line 1560 "make.util.m"
        {
#line 1560 "make.util.m"
          make__util__MaybeExt_16 = make__util__target_extension_2_f_0(make__util__Globals_9, make__util__TargetType_11);
        }
#line 1572 "make.util.m"
        if ((make__util__MaybeExt_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1586 "make.util.m"
#line 1586 "make.util.m"
          switch (MR_tag((MR_Word) make__util__TargetType_11)) {
#line 1586 "make.util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1586 "make.util.m"
            case (MR_Integer) 0:
#line 1625 "make.util.m"
              {
#line 1626 "make.util.m"
                {
#line 1626 "make.util.m"
                  mercury__require__unexpected_3_p_0((MR_String) "make.util", (MR_String) "predicate \140make.util.module_target_to_file_name_maybe_search\'/8", (MR_String) "unexpected TargetType");
#line 1626 "make.util.m"
                  return;
                }
#line 1625 "make.util.m"
              }
#line 1586 "make.util.m"
              break;
#line 1586 "make.util.m"
            case (MR_Integer) 1:
#line 1586 "make.util.m"
            case (MR_Integer) 2:
#line 1625 "make.util.m"
              {
#line 1626 "make.util.m"
                {
#line 1626 "make.util.m"
                  mercury__require__unexpected_3_p_0((MR_String) "make.util", (MR_String) "predicate \140make.util.module_target_to_file_name_maybe_search\'/8", (MR_String) "unexpected TargetType");
#line 1626 "make.util.m"
                  return;
                }
#line 1625 "make.util.m"
              }
#line 1586 "make.util.m"
              break;
#line 1586 "make.util.m"
            case (MR_Integer) 3:
#line 1586 "make.util.m"
#line 1586 "make.util.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__util__TargetType_11, (MR_Integer) 0)))) {
#line 1586 "make.util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1586 "make.util.m"
                case (MR_Integer) 0:
#line 1587 "make.util.m"
                  {
#line 1587 "make.util.m"
                    MR_Word make__util__Lang_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__util__TargetType_11, (MR_Integer) 1)));
#line 1595 "make.util.m"
                    MR_Word make__util__ForeignModuleName_42;

#line 1589 "make.util.m"
                    {
#line 1589 "make.util.m"
                      make__util__succeeded = parse_tree__prog_foreign__foreign_language_module_name_2_f_0(make__util__ModuleName_10, make__util__Lang_43, &make__util__ForeignModuleName_42);
                    }
#line 1595 "make.util.m"
                    if (make__util__succeeded)
#line 1592 "make.util.m"
                      {
#line 1592 "make.util.m"
                        /* direct tailcall eliminated */
#line 1592 "make.util.m"
                        {
#line 1592 "make.util.m"
                          MR_Word make__util__ModuleName__tmp_copy_10 = make__util__ForeignModuleName_42;

#line 1592 "make.util.m"
                          make__util__TargetType_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 1592 "make.util.m"
                          make__util__ModuleName_10 = make__util__ModuleName__tmp_copy_10;
#line 1592 "make.util.m"
                        }
#line 1592 "make.util.m"
                        continue;
#line 1592 "make.util.m"
                      }
#line 1595 "make.util.m"
                    else
#line 1596 "make.util.m"
                      {
#line 1596 "make.util.m"
                        {
#line 1596 "make.util.m"
                          mercury__require__unexpected_3_p_0((MR_String) "make.util", (MR_String) "predicate \140make.util.module_target_to_file_name_maybe_search\'/8", (MR_String) "ilasm test failed");
#line 1596 "make.util.m"
                          return;
                        }
#line 1596 "make.util.m"
                      }
#line 1587 "make.util.m"
                  }
#line 1586 "make.util.m"
                  break;
#line 1586 "make.util.m"
                case (MR_Integer) 1:
#line 1575 "make.util.m"
                  {
#line 1575 "make.util.m"
                    MR_Word make__util__PIC_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__util__TargetType_11, (MR_Integer) 1)));
#line 1575 "make.util.m"
                    MR_Word make__util__Lang_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__util__TargetType_11, (MR_Integer) 2)));
#line 1583 "make.util.m"
                    MR_Word make__util__ForeignModuleName_20;

#line 1577 "make.util.m"
                    {
#line 1577 "make.util.m"
                      make__util__succeeded = parse_tree__prog_foreign__foreign_language_module_name_2_f_0(make__util__ModuleName_10, make__util__Lang_19, &make__util__ForeignModuleName_20);
                    }
#line 1583 "make.util.m"
                    if (make__util__succeeded)
#line 1580 "make.util.m"
                      {
#line 1580 "make.util.m"
                        MR_Word make__util__V_35_35;

#line 1581 "make.util.m"
                        {
#line 1581 "make.util.m"
                          make__util__V_35_35 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1581 "make.util.m"
                          MR_hl_field(MR_mktag(2), make__util__V_35_35, 0) = ((MR_Box) (make__util__PIC_18));
#line 1581 "make.util.m"
                        }
#line 1580 "make.util.m"
                        /* direct tailcall eliminated */
#line 1580 "make.util.m"
                        {
#line 1580 "make.util.m"
                          MR_Word make__util__ModuleName__tmp_copy_10 = make__util__ForeignModuleName_20;
#line 1580 "make.util.m"
                          MR_Word make__util__TargetType__tmp_copy_11 = make__util__V_35_35;

#line 1580 "make.util.m"
                          make__util__TargetType_11 = make__util__TargetType__tmp_copy_11;
#line 1580 "make.util.m"
                          make__util__ModuleName_10 = make__util__ModuleName__tmp_copy_10;
#line 1580 "make.util.m"
                        }
#line 1580 "make.util.m"
                        continue;
#line 1580 "make.util.m"
                      }
#line 1583 "make.util.m"
                    else
#line 1584 "make.util.m"
                      {
#line 1584 "make.util.m"
                        {
#line 1584 "make.util.m"
                          mercury__require__unexpected_3_p_0((MR_String) "make.util", (MR_String) "predicate \140make.util.module_target_to_file_name_maybe_search\'/8", (MR_String) "object test failed");
#line 1584 "make.util.m"
                          return;
                        }
#line 1584 "make.util.m"
                      }
#line 1575 "make.util.m"
                  }
#line 1586 "make.util.m"
                  break;
#line 1586 "make.util.m"
                case (MR_Integer) 2:
#line 1599 "make.util.m"
                  {
#line 1599 "make.util.m"
                    MR_String make__util__FactFile_21 = ((MR_String) (MR_hl_field(MR_mktag(3), make__util__TargetType_11, (MR_Integer) 2)));
#line 1599 "make.util.m"
                    MR_String make__util__Ext_45;
#line 1599 "make.util.m"
                    MR_Word make__util__PIC_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__util__TargetType_11, (MR_Integer) 1)));

#line 1600 "make.util.m"
                    {
#line 1600 "make.util.m"
                      backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(make__util__Globals_9, make__util__PIC_46, &make__util__Ext_45);
                    }
#line 1601 "make.util.m"
                    {
#line 1601 "make.util.m"
                      parse_tree__file_names__fact_table_file_name_8_p_0(make__util__Globals_9, make__util__ModuleName_10, make__util__FactFile_21, make__util__Ext_45, make__util__MkDir_12, make__util__FileName_14);
#line 1601 "make.util.m"
                      return;
                    }
#line 1599 "make.util.m"
                  }
#line 1586 "make.util.m"
                  break;
#line 1586 "make.util.m"
              }
#line 1586 "make.util.m"
              break;
#line 1586 "make.util.m"
          }
#line 1572 "make.util.m"
        else
#line 1562 "make.util.m"
          {
#line 1562 "make.util.m"
            MR_String make__util__Ext_17 = ((MR_String) (MR_hl_field(MR_mktag(1), make__util__MaybeExt_16, (MR_Integer) 0)));

#line 1567 "make.util.m"
#line 1567 "make.util.m"
            switch (make__util__Search_13) {
#line 1567 "make.util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1567 "make.util.m"
              case (MR_Integer) 1:
#line 1569 "make.util.m"
                {
#line 1569 "make.util.m"
                  parse_tree__file_names__module_name_to_file_name_7_p_0(make__util__Globals_9, make__util__ModuleName_10, make__util__Ext_17, make__util__MkDir_12, make__util__FileName_14);
#line 1569 "make.util.m"
                  return;
                }
#line 1567 "make.util.m"
                break;
#line 1567 "make.util.m"
              case (MR_Integer) 0:
#line 1565 "make.util.m"
                {
#line 1565 "make.util.m"
                  parse_tree__file_names__module_name_to_search_file_name_6_p_0(make__util__Globals_9, make__util__ModuleName_10, make__util__Ext_17, make__util__FileName_14);
#line 1565 "make.util.m"
                  return;
                }
#line 1567 "make.util.m"
                break;
#line 1567 "make.util.m"
            }
#line 1562 "make.util.m"
          }
#line 1559 "make.util.m"
      }
#line 1559 "make.util.m"
      break;
#line 1559 "make.util.m"
    }
#line 1554 "make.util.m"
}

#line 1382 "make.util.m"
static void MR_CALL 
make__util__get_search_directories_3_p_0(
#line 1382 "make.util.m"
  MR_Word make__util__Globals_4,
#line 1382 "make.util.m"
  MR_Word make__util__FileType_5,
#line 1382 "make.util.m"
  MR_Word * make__util__SearchDirs_6)
#line 1382 "make.util.m"
{
#line 5302 "make.util.c"
  {
#line 5304 "make.util.c"
    MR_bool make__util__succeeded;

#line 5307 "make.util.c"
#line 5308 "make.util.c"
    switch (MR_tag((MR_Word) make__util__FileType_5)) {
#line 5310 "make.util.c"
      default: /*NOTREACHED*/ MR_assert(0);
#line 5312 "make.util.c"
      case (MR_Integer) 0:
#line 5314 "make.util.c"
#line 5315 "make.util.c"
        switch (MR_unmkbody(make__util__FileType_5)) {
#line 5317 "make.util.c"
          default: /*NOTREACHED*/ MR_assert(0);
#line 5319 "make.util.c"
          case (MR_Integer) 0:
#line 5321 "make.util.c"
            {
#line 5323 "make.util.c"
              MR_String make__util__V_160_160;

#line 1399 "make.util.m"
              {
#line 1399 "make.util.m"
                make__util__V_160_160 = mercury__dir__this_directory_0_f_0();
              }
#line 1399 "make.util.m"
              {
#line 1399 "make.util.m"
                MR_Word base;
#line 1399 "make.util.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1399 "make.util.m"
                *make__util__SearchDirs_6 = base;
#line 1399 "make.util.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__util__V_160_160));
#line 1399 "make.util.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1399 "make.util.m"
              }
#line 5345 "make.util.c"
            }
#line 5347 "make.util.c"
            break;
#line 5349 "make.util.c"
          case (MR_Integer) 1:
#line 5351 "make.util.c"
            {
#line 5353 "make.util.c"
              MR_String make__util__V_72_72;

#line 1399 "make.util.m"
              {
#line 1399 "make.util.m"
                make__util__V_72_72 = mercury__dir__this_directory_0_f_0();
              }
#line 1399 "make.util.m"
              {
#line 1399 "make.util.m"
                MR_Word base;
#line 1399 "make.util.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1399 "make.util.m"
                *make__util__SearchDirs_6 = base;
#line 1399 "make.util.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__util__V_72_72));
#line 1399 "make.util.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1399 "make.util.m"
              }
#line 5375 "make.util.c"
            }
#line 5377 "make.util.c"
            break;
#line 5379 "make.util.c"
          case (MR_Integer) 2:
#line 5381 "make.util.c"
            {
#line 5383 "make.util.c"
              MR_Word make__util__SearchDirs0_141;
#line 1392 "make.util.m"
              MR_String make__util__V_133_133;

#line 1389 "make.util.m"
              {
#line 1389 "make.util.m"
                libs__globals__lookup_accumulating_option_3_p_0(make__util__Globals_4, (MR_Integer) 649, &make__util__SearchDirs0_141);
              }
#line 1392 "make.util.m"
              {
#line 1392 "make.util.m"
                make__util__V_133_133 = mercury__dir__this_directory_0_f_0();
              }
#line 1392 "make.util.m"
              {
#line 1392 "make.util.m"
                make__util__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (make__util__V_133_133)), make__util__SearchDirs0_141);
              }
#line 1394 "make.util.m"
              if (make__util__succeeded)
#line 1393 "make.util.m"
                *make__util__SearchDirs_6 = make__util__SearchDirs0_141;
#line 1394 "make.util.m"
              else
#line 1395 "make.util.m"
                {
#line 1395 "make.util.m"
                  MR_String make__util__V_135_135;

#line 1395 "make.util.m"
                  {
#line 1395 "make.util.m"
                    make__util__V_135_135 = mercury__dir__this_directory_0_f_0();
                  }
#line 1395 "make.util.m"
                  {
#line 1395 "make.util.m"
                    MR_Word base;
#line 1395 "make.util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1395 "make.util.m"
                    *make__util__SearchDirs_6 = base;
#line 1395 "make.util.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__util__V_135_135));
#line 1395 "make.util.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (make__util__SearchDirs0_141));
#line 1395 "make.util.m"
                  }
#line 1395 "make.util.m"
                }
#line 5435 "make.util.c"
            }
#line 5437 "make.util.c"
            break;
#line 5439 "make.util.c"
          case (MR_Integer) 3:
#line 5441 "make.util.c"
            {
#line 5443 "make.util.c"
              MR_Word make__util__SearchDirs0_124;
#line 1392 "make.util.m"
              MR_String make__util__V_116_116;

#line 1389 "make.util.m"
              {
#line 1389 "make.util.m"
                libs__globals__lookup_accumulating_option_3_p_0(make__util__Globals_4, (MR_Integer) 649, &make__util__SearchDirs0_124);
              }
#line 1392 "make.util.m"
              {
#line 1392 "make.util.m"
                make__util__V_116_116 = mercury__dir__this_directory_0_f_0();
              }
#line 1392 "make.util.m"
              {
#line 1392 "make.util.m"
                make__util__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (make__util__V_116_116)), make__util__SearchDirs0_124);
              }
#line 1394 "make.util.m"
              if (make__util__succeeded)
#line 1393 "make.util.m"
                *make__util__SearchDirs_6 = make__util__SearchDirs0_124;
#line 1394 "make.util.m"
              else
#line 1395 "make.util.m"
                {
#line 1395 "make.util.m"
                  MR_String make__util__V_118_118;

#line 1395 "make.util.m"
                  {
#line 1395 "make.util.m"
                    make__util__V_118_118 = mercury__dir__this_directory_0_f_0();
                  }
#line 1395 "make.util.m"
                  {
#line 1395 "make.util.m"
                    MR_Word base;
#line 1395 "make.util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1395 "make.util.m"
                    *make__util__SearchDirs_6 = base;
#line 1395 "make.util.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__util__V_118_118));
#line 1395 "make.util.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (make__util__SearchDirs0_124));
#line 1395 "make.util.m"
                  }
#line 1395 "make.util.m"
                }
#line 5495 "make.util.c"
            }
#line 5497 "make.util.c"
            break;
#line 5499 "make.util.c"
          case (MR_Integer) 4:
#line 5501 "make.util.c"
            {
#line 5503 "make.util.c"
              MR_Word make__util__SearchDirs0_154;
#line 1392 "make.util.m"
              MR_String make__util__V_146_146;

#line 1389 "make.util.m"
              {
#line 1389 "make.util.m"
                libs__globals__lookup_accumulating_option_3_p_0(make__util__Globals_4, (MR_Integer) 649, &make__util__SearchDirs0_154);
              }
#line 1392 "make.util.m"
              {
#line 1392 "make.util.m"
                make__util__V_146_146 = mercury__dir__this_directory_0_f_0();
              }
#line 1392 "make.util.m"
              {
#line 1392 "make.util.m"
                make__util__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (make__util__V_146_146)), make__util__SearchDirs0_154);
              }
#line 1394 "make.util.m"
              if (make__util__succeeded)
#line 1393 "make.util.m"
                *make__util__SearchDirs_6 = make__util__SearchDirs0_154;
#line 1394 "make.util.m"
              else
#line 1395 "make.util.m"
                {
#line 1395 "make.util.m"
                  MR_String make__util__V_148_148;

#line 1395 "make.util.m"
                  {
#line 1395 "make.util.m"
                    make__util__V_148_148 = mercury__dir__this_directory_0_f_0();
                  }
#line 1395 "make.util.m"
                  {
#line 1395 "make.util.m"
                    MR_Word base;
#line 1395 "make.util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1395 "make.util.m"
                    *make__util__SearchDirs_6 = base;
#line 1395 "make.util.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__util__V_148_148));
#line 1395 "make.util.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (make__util__SearchDirs0_154));
#line 1395 "make.util.m"
                  }
#line 1395 "make.util.m"
                }
#line 5555 "make.util.c"
            }
#line 5557 "make.util.c"
            break;
#line 5559 "make.util.c"
          case (MR_Integer) 5:
#line 5561 "make.util.c"
            {
#line 5563 "make.util.c"
              MR_Word make__util__SearchDirs0_175;
#line 1392 "make.util.m"
              MR_String make__util__V_167_167;

#line 1389 "make.util.m"
              {
#line 1389 "make.util.m"
                libs__globals__lookup_accumulating_option_3_p_0(make__util__Globals_4, (MR_Integer) 649, &make__util__SearchDirs0_175);
              }
#line 1392 "make.util.m"
              {
#line 1392 "make.util.m"
                make__util__V_167_167 = mercury__dir__this_directory_0_f_0();
              }
#line 1392 "make.util.m"
              {
#line 1392 "make.util.m"
                make__util__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (make__util__V_167_167)), make__util__SearchDirs0_175);
              }
#line 1394 "make.util.m"
              if (make__util__succeeded)
#line 1393 "make.util.m"
                *make__util__SearchDirs_6 = make__util__SearchDirs0_175;
#line 1394 "make.util.m"
              else
#line 1395 "make.util.m"
                {
#line 1395 "make.util.m"
                  MR_String make__util__V_169_169;

#line 1395 "make.util.m"
                  {
#line 1395 "make.util.m"
                    make__util__V_169_169 = mercury__dir__this_directory_0_f_0();
                  }
#line 1395 "make.util.m"
                  {
#line 1395 "make.util.m"
                    MR_Word base;
#line 1395 "make.util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1395 "make.util.m"
                    *make__util__SearchDirs_6 = base;
#line 1395 "make.util.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__util__V_169_169));
#line 1395 "make.util.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (make__util__SearchDirs0_175));
#line 1395 "make.util.m"
                  }
#line 1395 "make.util.m"
                }
#line 5615 "make.util.c"
            }
#line 5617 "make.util.c"
            break;
#line 5619 "make.util.c"
          case (MR_Integer) 6:
#line 5621 "make.util.c"
            {
#line 5623 "make.util.c"
              MR_Word make__util__SearchDirs0_103;
#line 1392 "make.util.m"
              MR_String make__util__V_95_95;

#line 1389 "make.util.m"
              {
#line 1389 "make.util.m"
                libs__globals__lookup_accumulating_option_3_p_0(make__util__Globals_4, (MR_Integer) 650, &make__util__SearchDirs0_103);
              }
#line 1392 "make.util.m"
              {
#line 1392 "make.util.m"
                make__util__V_95_95 = mercury__dir__this_directory_0_f_0();
              }
#line 1392 "make.util.m"
              {
#line 1392 "make.util.m"
                make__util__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (make__util__V_95_95)), make__util__SearchDirs0_103);
              }
#line 1394 "make.util.m"
              if (make__util__succeeded)
#line 1393 "make.util.m"
                *make__util__SearchDirs_6 = make__util__SearchDirs0_103;
#line 1394 "make.util.m"
              else
#line 1395 "make.util.m"
                {
#line 1395 "make.util.m"
                  MR_String make__util__V_97_97;

#line 1395 "make.util.m"
                  {
#line 1395 "make.util.m"
                    make__util__V_97_97 = mercury__dir__this_directory_0_f_0();
                  }
#line 1395 "make.util.m"
                  {
#line 1395 "make.util.m"
                    MR_Word base;
#line 1395 "make.util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1395 "make.util.m"
                    *make__util__SearchDirs_6 = base;
#line 1395 "make.util.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__util__V_97_97));
#line 1395 "make.util.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (make__util__SearchDirs0_103));
#line 1395 "make.util.m"
                  }
#line 1395 "make.util.m"
                }
#line 5675 "make.util.c"
            }
#line 5677 "make.util.c"
            break;
#line 5679 "make.util.c"
          case (MR_Integer) 7:
#line 5681 "make.util.c"
            {
#line 5683 "make.util.c"
              MR_Word make__util__SearchDirs0_9;
#line 1392 "make.util.m"
              MR_String make__util__V_12_12;

#line 1389 "make.util.m"
              {
#line 1389 "make.util.m"
                libs__globals__lookup_accumulating_option_3_p_0(make__util__Globals_4, (MR_Integer) 650, &make__util__SearchDirs0_9);
              }
#line 1392 "make.util.m"
              {
#line 1392 "make.util.m"
                make__util__V_12_12 = mercury__dir__this_directory_0_f_0();
              }
#line 1392 "make.util.m"
              {
#line 1392 "make.util.m"
                make__util__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (make__util__V_12_12)), make__util__SearchDirs0_9);
              }
#line 1394 "make.util.m"
              if (make__util__succeeded)
#line 1393 "make.util.m"
                *make__util__SearchDirs_6 = make__util__SearchDirs0_9;
#line 1394 "make.util.m"
              else
#line 1395 "make.util.m"
                {
#line 1395 "make.util.m"
                  MR_String make__util__V_13_13;

#line 1395 "make.util.m"
                  {
#line 1395 "make.util.m"
                    make__util__V_13_13 = mercury__dir__this_directory_0_f_0();
                  }
#line 1395 "make.util.m"
                  {
#line 1395 "make.util.m"
                    MR_Word base;
#line 1395 "make.util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1395 "make.util.m"
                    *make__util__SearchDirs_6 = base;
#line 1395 "make.util.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__util__V_13_13));
#line 1395 "make.util.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (make__util__SearchDirs0_9));
#line 1395 "make.util.m"
                  }
#line 1395 "make.util.m"
                }
#line 5735 "make.util.c"
            }
#line 5737 "make.util.c"
            break;
#line 5739 "make.util.c"
          case (MR_Integer) 8:
#line 5741 "make.util.c"
            {
#line 5743 "make.util.c"
              MR_String make__util__V_164_164;

#line 1399 "make.util.m"
              {
#line 1399 "make.util.m"
                make__util__V_164_164 = mercury__dir__this_directory_0_f_0();
              }
#line 1399 "make.util.m"
              {
#line 1399 "make.util.m"
                MR_Word base;
#line 1399 "make.util.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1399 "make.util.m"
                *make__util__SearchDirs_6 = base;
#line 1399 "make.util.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__util__V_164_164));
#line 1399 "make.util.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1399 "make.util.m"
              }
#line 5765 "make.util.c"
            }
#line 5767 "make.util.c"
            break;
#line 5769 "make.util.c"
          case (MR_Integer) 9:
#line 5771 "make.util.c"
            {
#line 5773 "make.util.c"
              MR_String make__util__V_10_10;

#line 1399 "make.util.m"
              {
#line 1399 "make.util.m"
                make__util__V_10_10 = mercury__dir__this_directory_0_f_0();
              }
#line 1399 "make.util.m"
              {
#line 1399 "make.util.m"
                MR_Word base;
#line 1399 "make.util.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1399 "make.util.m"
                *make__util__SearchDirs_6 = base;
#line 1399 "make.util.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__util__V_10_10));
#line 1399 "make.util.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1399 "make.util.m"
              }
#line 5795 "make.util.c"
            }
#line 5797 "make.util.c"
            break;
#line 5799 "make.util.c"
          case (MR_Integer) 10:
#line 5801 "make.util.c"
            {
#line 5803 "make.util.c"
              MR_String make__util__V_92_92;

#line 1399 "make.util.m"
              {
#line 1399 "make.util.m"
                make__util__V_92_92 = mercury__dir__this_directory_0_f_0();
              }
#line 1399 "make.util.m"
              {
#line 1399 "make.util.m"
                MR_Word base;
#line 1399 "make.util.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1399 "make.util.m"
                *make__util__SearchDirs_6 = base;
#line 1399 "make.util.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__util__V_92_92));
#line 1399 "make.util.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1399 "make.util.m"
              }
#line 5825 "make.util.c"
            }
#line 5827 "make.util.c"
            break;
#line 5829 "make.util.c"
          case (MR_Integer) 11:
#line 5831 "make.util.c"
            {
#line 5833 "make.util.c"
              MR_String make__util__V_88_88;

#line 1399 "make.util.m"
              {
#line 1399 "make.util.m"
                make__util__V_88_88 = mercury__dir__this_directory_0_f_0();
              }
#line 1399 "make.util.m"
              {
#line 1399 "make.util.m"
                MR_Word base;
#line 1399 "make.util.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1399 "make.util.m"
                *make__util__SearchDirs_6 = base;
#line 1399 "make.util.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__util__V_88_88));
#line 1399 "make.util.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1399 "make.util.m"
              }
#line 5855 "make.util.c"
            }
#line 5857 "make.util.c"
            break;
#line 5859 "make.util.c"
          case (MR_Integer) 12:
#line 5861 "make.util.c"
            {
#line 5863 "make.util.c"
              MR_String make__util__V_47_47;

#line 1399 "make.util.m"
              {
#line 1399 "make.util.m"
                make__util__V_47_47 = mercury__dir__this_directory_0_f_0();
              }
#line 1399 "make.util.m"
              {
#line 1399 "make.util.m"
                MR_Word base;
#line 1399 "make.util.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1399 "make.util.m"
                *make__util__SearchDirs_6 = base;
#line 1399 "make.util.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__util__V_47_47));
#line 1399 "make.util.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1399 "make.util.m"
              }
#line 5885 "make.util.c"
            }
#line 5887 "make.util.c"
            break;
#line 5889 "make.util.c"
          case (MR_Integer) 13:
#line 5891 "make.util.c"
            {
#line 5893 "make.util.c"
              MR_String make__util__V_113_113;

#line 1399 "make.util.m"
              {
#line 1399 "make.util.m"
                make__util__V_113_113 = mercury__dir__this_directory_0_f_0();
              }
#line 1399 "make.util.m"
              {
#line 1399 "make.util.m"
                MR_Word base;
#line 1399 "make.util.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1399 "make.util.m"
                *make__util__SearchDirs_6 = base;
#line 1399 "make.util.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__util__V_113_113));
#line 1399 "make.util.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1399 "make.util.m"
              }
#line 5915 "make.util.c"
            }
#line 5917 "make.util.c"
            break;
#line 5919 "make.util.c"
          case (MR_Integer) 14:
#line 5921 "make.util.c"
            {
#line 5923 "make.util.c"
              MR_String make__util__V_109_109;

#line 1399 "make.util.m"
              {
#line 1399 "make.util.m"
                make__util__V_109_109 = mercury__dir__this_directory_0_f_0();
              }
#line 1399 "make.util.m"
              {
#line 1399 "make.util.m"
                MR_Word base;
#line 1399 "make.util.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1399 "make.util.m"
                *make__util__SearchDirs_6 = base;
#line 1399 "make.util.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__util__V_109_109));
#line 1399 "make.util.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1399 "make.util.m"
              }
#line 5945 "make.util.c"
            }
#line 5947 "make.util.c"
            break;
#line 5949 "make.util.c"
          case (MR_Integer) 15:
#line 5951 "make.util.c"
            {
#line 5953 "make.util.c"
              MR_Word make__util__SearchDirs0_66;
#line 1392 "make.util.m"
              MR_String make__util__V_58_58;

#line 1389 "make.util.m"
              {
#line 1389 "make.util.m"
                libs__globals__lookup_accumulating_option_3_p_0(make__util__Globals_4, (MR_Integer) 536, &make__util__SearchDirs0_66);
              }
#line 1392 "make.util.m"
              {
#line 1392 "make.util.m"
                make__util__V_58_58 = mercury__dir__this_directory_0_f_0();
              }
#line 1392 "make.util.m"
              {
#line 1392 "make.util.m"
                make__util__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (make__util__V_58_58)), make__util__SearchDirs0_66);
              }
#line 1394 "make.util.m"
              if (make__util__succeeded)
#line 1393 "make.util.m"
                *make__util__SearchDirs_6 = make__util__SearchDirs0_66;
#line 1394 "make.util.m"
              else
#line 1395 "make.util.m"
                {
#line 1395 "make.util.m"
                  MR_String make__util__V_60_60;

#line 1395 "make.util.m"
                  {
#line 1395 "make.util.m"
                    make__util__V_60_60 = mercury__dir__this_directory_0_f_0();
                  }
#line 1395 "make.util.m"
                  {
#line 1395 "make.util.m"
                    MR_Word base;
#line 1395 "make.util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1395 "make.util.m"
                    *make__util__SearchDirs_6 = base;
#line 1395 "make.util.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__util__V_60_60));
#line 1395 "make.util.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (make__util__SearchDirs0_66));
#line 1395 "make.util.m"
                  }
#line 1395 "make.util.m"
                }
#line 6005 "make.util.c"
            }
#line 6007 "make.util.c"
            break;
#line 6009 "make.util.c"
          case (MR_Integer) 16:
#line 6011 "make.util.c"
            {
#line 6013 "make.util.c"
              MR_String make__util__V_55_55;

#line 1399 "make.util.m"
              {
#line 1399 "make.util.m"
                make__util__V_55_55 = mercury__dir__this_directory_0_f_0();
              }
#line 1399 "make.util.m"
              {
#line 1399 "make.util.m"
                MR_Word base;
#line 1399 "make.util.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1399 "make.util.m"
                *make__util__SearchDirs_6 = base;
#line 1399 "make.util.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__util__V_55_55));
#line 1399 "make.util.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1399 "make.util.m"
              }
#line 6035 "make.util.c"
            }
#line 6037 "make.util.c"
            break;
#line 6039 "make.util.c"
          case (MR_Integer) 17:
#line 6041 "make.util.c"
            {
#line 6043 "make.util.c"
              MR_String make__util__V_51_51;

#line 1399 "make.util.m"
              {
#line 1399 "make.util.m"
                make__util__V_51_51 = mercury__dir__this_directory_0_f_0();
              }
#line 1399 "make.util.m"
              {
#line 1399 "make.util.m"
                MR_Word base;
#line 1399 "make.util.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1399 "make.util.m"
                *make__util__SearchDirs_6 = base;
#line 1399 "make.util.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__util__V_51_51));
#line 1399 "make.util.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1399 "make.util.m"
              }
#line 6065 "make.util.c"
            }
#line 6067 "make.util.c"
            break;
#line 6069 "make.util.c"
          case (MR_Integer) 18:
#line 6071 "make.util.c"
            {
#line 6073 "make.util.c"
              MR_String make__util__V_181_181;

#line 1399 "make.util.m"
              {
#line 1399 "make.util.m"
                make__util__V_181_181 = mercury__dir__this_directory_0_f_0();
              }
#line 1399 "make.util.m"
              {
#line 1399 "make.util.m"
                MR_Word base;
#line 1399 "make.util.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1399 "make.util.m"
                *make__util__SearchDirs_6 = base;
#line 1399 "make.util.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__util__V_181_181));
#line 1399 "make.util.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1399 "make.util.m"
              }
#line 6095 "make.util.c"
            }
#line 6097 "make.util.c"
            break;
#line 6099 "make.util.c"
        }
#line 6101 "make.util.c"
        break;
#line 6103 "make.util.c"
      case (MR_Integer) 1:
#line 6105 "make.util.c"
        {
#line 6107 "make.util.c"
          MR_Word make__util__SearchDirs0_41;
#line 1392 "make.util.m"
          MR_String make__util__V_33_33;

#line 1389 "make.util.m"
          {
#line 1389 "make.util.m"
            libs__globals__lookup_accumulating_option_3_p_0(make__util__Globals_4, (MR_Integer) 492, &make__util__SearchDirs0_41);
          }
#line 1392 "make.util.m"
          {
#line 1392 "make.util.m"
            make__util__V_33_33 = mercury__dir__this_directory_0_f_0();
          }
#line 1392 "make.util.m"
          {
#line 1392 "make.util.m"
            make__util__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (make__util__V_33_33)), make__util__SearchDirs0_41);
          }
#line 1394 "make.util.m"
          if (make__util__succeeded)
#line 1393 "make.util.m"
            *make__util__SearchDirs_6 = make__util__SearchDirs0_41;
#line 1394 "make.util.m"
          else
#line 1395 "make.util.m"
            {
#line 1395 "make.util.m"
              MR_String make__util__V_35_35;

#line 1395 "make.util.m"
              {
#line 1395 "make.util.m"
                make__util__V_35_35 = mercury__dir__this_directory_0_f_0();
              }
#line 1395 "make.util.m"
              {
#line 1395 "make.util.m"
                MR_Word base;
#line 1395 "make.util.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1395 "make.util.m"
                *make__util__SearchDirs_6 = base;
#line 1395 "make.util.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__util__V_35_35));
#line 1395 "make.util.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (make__util__SearchDirs0_41));
#line 1395 "make.util.m"
              }
#line 1395 "make.util.m"
            }
#line 6159 "make.util.c"
        }
#line 6161 "make.util.c"
        break;
#line 6163 "make.util.c"
      case (MR_Integer) 2:
#line 6165 "make.util.c"
        {
#line 6167 "make.util.c"
          MR_String make__util__V_130_130;

#line 1399 "make.util.m"
          {
#line 1399 "make.util.m"
            make__util__V_130_130 = mercury__dir__this_directory_0_f_0();
          }
#line 1399 "make.util.m"
          {
#line 1399 "make.util.m"
            MR_Word base;
#line 1399 "make.util.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1399 "make.util.m"
            *make__util__SearchDirs_6 = base;
#line 1399 "make.util.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__util__V_130_130));
#line 1399 "make.util.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1399 "make.util.m"
          }
#line 6189 "make.util.c"
        }
#line 6191 "make.util.c"
        break;
#line 6193 "make.util.c"
      case (MR_Integer) 3:
#line 6195 "make.util.c"
#line 6196 "make.util.c"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__util__FileType_5, (MR_Integer) 0)))) {
#line 6198 "make.util.c"
          default: /*NOTREACHED*/ MR_assert(0);
#line 6200 "make.util.c"
          case (MR_Integer) 0:
#line 6202 "make.util.c"
            {
#line 6204 "make.util.c"
              MR_String make__util__V_80_80;

#line 1399 "make.util.m"
              {
#line 1399 "make.util.m"
                make__util__V_80_80 = mercury__dir__this_directory_0_f_0();
              }
#line 1399 "make.util.m"
              {
#line 1399 "make.util.m"
                MR_Word base;
#line 1399 "make.util.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1399 "make.util.m"
                *make__util__SearchDirs_6 = base;
#line 1399 "make.util.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__util__V_80_80));
#line 1399 "make.util.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1399 "make.util.m"
              }
#line 6226 "make.util.c"
            }
#line 6228 "make.util.c"
            break;
#line 6230 "make.util.c"
          case (MR_Integer) 1:
#line 6232 "make.util.c"
            {
#line 6234 "make.util.c"
              MR_String make__util__V_84_84;

#line 1399 "make.util.m"
              {
#line 1399 "make.util.m"
                make__util__V_84_84 = mercury__dir__this_directory_0_f_0();
              }
#line 1399 "make.util.m"
              {
#line 1399 "make.util.m"
                MR_Word base;
#line 1399 "make.util.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1399 "make.util.m"
                *make__util__SearchDirs_6 = base;
#line 1399 "make.util.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__util__V_84_84));
#line 1399 "make.util.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1399 "make.util.m"
              }
#line 6256 "make.util.c"
            }
#line 6258 "make.util.c"
            break;
#line 6260 "make.util.c"
          case (MR_Integer) 2:
#line 6262 "make.util.c"
            {
#line 6264 "make.util.c"
              MR_String make__util__V_76_76;

#line 1399 "make.util.m"
              {
#line 1399 "make.util.m"
                make__util__V_76_76 = mercury__dir__this_directory_0_f_0();
              }
#line 1399 "make.util.m"
              {
#line 1399 "make.util.m"
                MR_Word base;
#line 1399 "make.util.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1399 "make.util.m"
                *make__util__SearchDirs_6 = base;
#line 1399 "make.util.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__util__V_76_76));
#line 1399 "make.util.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1399 "make.util.m"
              }
#line 6286 "make.util.c"
            }
#line 6288 "make.util.c"
            break;
#line 6290 "make.util.c"
        }
#line 6292 "make.util.c"
        break;
#line 6294 "make.util.c"
    }
#line 6296 "make.util.c"
  }
#line 1382 "make.util.m"
}

#line 1351 "make.util.m"
static void MR_CALL 
make__util__module_name_to_search_file_name_cache_8_p_0(
#line 1351 "make.util.m"
  MR_Word make__util__Globals_9,
#line 1351 "make.util.m"
  MR_Word make__util__ModuleName_10,
#line 1351 "make.util.m"
  MR_String make__util__Ext_11,
#line 1351 "make.util.m"
  MR_String * make__util__FileName_12,
#line 1351 "make.util.m"
  MR_Word make__util__STATE_VARIABLE_Info_0_17,
#line 1351 "make.util.m"
  MR_Word * make__util__STATE_VARIABLE_Info_18)
#line 1351 "make.util.m"
{
#line 1356 "make.util.m"
  {
#line 1356 "make.util.m"
    MR_bool make__util__succeeded;
#line 1356 "make.util.m"
    MR_Word make__util__Key_15;
#line 1360 "make.util.m"
    MR_String make__util__FileName0_16;
#line 1358 "make.util.m"
    MR_Word make__util__V_21_21;
#line 1358 "make.util.m"
    MR_Word make__util__V_26_26;
#line 1358 "make.util.m"
    MR_Word make__util__V_27_27;
#line 1358 "make.util.m"
    MR_Word make__util__V_28_28;
#line 1358 "make.util.m"
    MR_Word make__util__V_29_29;
#line 1358 "make.util.m"
    MR_Word make__util__V_30_30;
#line 1358 "make.util.m"
    MR_Word make__util__V_31_31;
#line 1358 "make.util.m"
    MR_Word make__util__V_32_32;
#line 1358 "make.util.m"
    MR_Word make__util__V_33_33;
#line 1358 "make.util.m"
    MR_Word make__util__V_34_34;
#line 1358 "make.util.m"
    MR_Word make__util__V_35_35;
#line 1358 "make.util.m"
    MR_Word make__util__V_36_36;
#line 1358 "make.util.m"
    MR_Word make__util__V_37_37;
#line 1358 "make.util.m"
    MR_Word make__util__V_38_38;
#line 1358 "make.util.m"
    MR_Word make__util__V_39_39;
#line 1358 "make.util.m"
    MR_Word make__util__V_40_40;
#line 1358 "make.util.m"
    MR_Word make__util__V_41_41;
#line 1358 "make.util.m"
    MR_Word make__util__V_42_42;
#line 1358 "make.util.m"
    MR_Integer make__util__V_43_43;
#line 1358 "make.util.m"
    MR_Word make__util__V_44_44;
#line 1358 "make.util.m"
    MR_Box make__util__conv0_FileName0_16;

#line 1357 "make.util.m"
    {
#line 1357 "make.util.m"
      make__util__Key_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1357 "make.util.m"
      MR_hl_field(MR_mktag(0), make__util__Key_15, 0) = ((MR_Box) (make__util__ModuleName_10));
#line 1357 "make.util.m"
      MR_hl_field(MR_mktag(0), make__util__Key_15, 1) = ((MR_Box) (make__util__Ext_11));
#line 1357 "make.util.m"
    }
#line 1358 "make.util.m"
    make__util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
#line 1358 "make.util.m"
    make__util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 1)));
#line 1358 "make.util.m"
    make__util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
#line 1358 "make.util.m"
    make__util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
#line 1358 "make.util.m"
    make__util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 4)));
#line 1358 "make.util.m"
    make__util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 5)));
#line 1358 "make.util.m"
    make__util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 6)));
#line 1358 "make.util.m"
    make__util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 7)));
#line 1358 "make.util.m"
    make__util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 8)));
#line 1358 "make.util.m"
    make__util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 9)));
#line 1358 "make.util.m"
    make__util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 10)));
#line 1358 "make.util.m"
    make__util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 11)));
#line 1358 "make.util.m"
    make__util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 12)));
#line 1358 "make.util.m"
    make__util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 13)));
#line 1358 "make.util.m"
    make__util__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 14)));
#line 1358 "make.util.m"
    make__util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 15)));
#line 1358 "make.util.m"
    make__util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 16)));
#line 1358 "make.util.m"
    make__util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 17)));
#line 1358 "make.util.m"
    make__util__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 18)));
#line 1358 "make.util.m"
    make__util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 19)));
#line 1358 "make.util.m"
    {
#line 1358 "make.util.m"
      make__util__succeeded = mercury__map__search_3_p_0((MR_Word) &make__util_scalar_common_1[2], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, make__util__V_21_21, ((MR_Box) (make__util__Key_15)), &make__util__conv0_FileName0_16);
    }
#line 1358 "make.util.m"
    if (make__util__succeeded)
#line 1358 "make.util.m"
      {
#line 1358 "make.util.m"
        make__util__FileName0_16 = ((MR_String) make__util__conv0_FileName0_16);
#line 1358 "make.util.m"
        make__util__succeeded = MR_TRUE;
#line 1358 "make.util.m"
      }
#line 1360 "make.util.m"
    if (make__util__succeeded)
#line 1359 "make.util.m"
      {
#line 1359 "make.util.m"
        *make__util__FileName_12 = make__util__FileName0_16;
#line 1359 "make.util.m"
        *make__util__STATE_VARIABLE_Info_18 = make__util__STATE_VARIABLE_Info_0_17;
#line 1359 "make.util.m"
      }
#line 1360 "make.util.m"
    else
#line 1362 "make.util.m"
      {
#line 1362 "make.util.m"
        MR_Word make__util__V_24_24;
#line 1362 "make.util.m"
        MR_Word make__util__V_25_25;
#line 1363 "make.util.m"
        MR_Word make__util__V_45_45;
#line 1363 "make.util.m"
        MR_Word make__util__V_46_46;
#line 1363 "make.util.m"
        MR_Word make__util__V_47_47;
#line 1363 "make.util.m"
        MR_Word make__util__V_48_48;
#line 1363 "make.util.m"
        MR_Word make__util__V_49_49;
#line 1363 "make.util.m"
        MR_Word make__util__V_50_50;
#line 1363 "make.util.m"
        MR_Word make__util__V_51_51;
#line 1363 "make.util.m"
        MR_Word make__util__V_52_52;
#line 1363 "make.util.m"
        MR_Word make__util__V_53_53;
#line 1363 "make.util.m"
        MR_Word make__util__V_54_54;
#line 1363 "make.util.m"
        MR_Word make__util__V_55_55;
#line 1363 "make.util.m"
        MR_Word make__util__V_56_56;
#line 1363 "make.util.m"
        MR_Word make__util__V_57_57;
#line 1363 "make.util.m"
        MR_Word make__util__V_58_58;
#line 1363 "make.util.m"
        MR_Word make__util__V_59_59;
#line 1363 "make.util.m"
        MR_Word make__util__V_60_60;
#line 1363 "make.util.m"
        MR_Word make__util__V_61_61;
#line 1363 "make.util.m"
        MR_Integer make__util__V_62_62;
#line 1363 "make.util.m"
        MR_Word make__util__V_63_63;
#line 1363 "make.util.m"
        MR_Word make__util__V_64_64;
#line 1363 "make.util.m"
        MR_Word make__util__V_65_65;
#line 1363 "make.util.m"
        MR_Word make__util__V_67_67;
#line 1363 "make.util.m"
        MR_Word make__util__V_68_68;
#line 1363 "make.util.m"
        MR_Word make__util__V_69_69;
#line 1363 "make.util.m"
        MR_Word make__util__V_70_70;
#line 1363 "make.util.m"
        MR_Word make__util__V_71_71;
#line 1363 "make.util.m"
        MR_Word make__util__V_72_72;
#line 1363 "make.util.m"
        MR_Word make__util__V_73_73;
#line 1363 "make.util.m"
        MR_Word make__util__V_74_74;
#line 1363 "make.util.m"
        MR_Word make__util__V_75_75;
#line 1363 "make.util.m"
        MR_Word make__util__V_76_76;
#line 1363 "make.util.m"
        MR_Word make__util__V_77_77;
#line 1363 "make.util.m"
        MR_Word make__util__V_78_78;
#line 1363 "make.util.m"
        MR_Word make__util__V_79_79;
#line 1363 "make.util.m"
        MR_Word make__util__V_80_80;
#line 1363 "make.util.m"
        MR_Word make__util__V_81_81;
#line 1363 "make.util.m"
        MR_Integer make__util__V_82_82;
#line 1363 "make.util.m"
        MR_Word make__util__V_83_83;
#line 1363 "make.util.m"
        MR_Word make__util__V_66_66;

#line 1361 "make.util.m"
        {
#line 1361 "make.util.m"
          parse_tree__file_names__module_name_to_search_file_name_6_p_0(make__util__Globals_9, make__util__ModuleName_10, make__util__Ext_11, make__util__FileName_12);
        }
#line 1363 "make.util.m"
        make__util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
#line 1363 "make.util.m"
        make__util__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 1)));
#line 1363 "make.util.m"
        make__util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
#line 1363 "make.util.m"
        make__util__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
#line 1363 "make.util.m"
        make__util__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 4)));
#line 1363 "make.util.m"
        make__util__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 5)));
#line 1363 "make.util.m"
        make__util__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 6)));
#line 1363 "make.util.m"
        make__util__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 7)));
#line 1363 "make.util.m"
        make__util__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 8)));
#line 1363 "make.util.m"
        make__util__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 9)));
#line 1363 "make.util.m"
        make__util__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 10)));
#line 1363 "make.util.m"
        make__util__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 11)));
#line 1363 "make.util.m"
        make__util__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 12)));
#line 1363 "make.util.m"
        make__util__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 13)));
#line 1363 "make.util.m"
        make__util__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 14)));
#line 1363 "make.util.m"
        make__util__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 15)));
#line 1363 "make.util.m"
        make__util__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 16)));
#line 1363 "make.util.m"
        make__util__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 17)));
#line 1363 "make.util.m"
        make__util__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 18)));
#line 1363 "make.util.m"
        make__util__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 19)));
#line 1363 "make.util.m"
        {
#line 1363 "make.util.m"
          make__util__V_25_25 = mercury__map__f_101_108_101_109_32_58_61_3_f_0((MR_Word) &make__util_scalar_common_1[2], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (make__util__Key_15)), make__util__V_24_24, ((MR_Box) (*make__util__FileName_12)));
        }
#line 1363 "make.util.m"
        make__util__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
#line 1363 "make.util.m"
        make__util__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 1)));
#line 1363 "make.util.m"
        make__util__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
#line 1363 "make.util.m"
        make__util__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
#line 1363 "make.util.m"
        make__util__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 4)));
#line 1363 "make.util.m"
        make__util__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 5)));
#line 1363 "make.util.m"
        make__util__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 6)));
#line 1363 "make.util.m"
        make__util__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 7)));
#line 1363 "make.util.m"
        make__util__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 8)));
#line 1363 "make.util.m"
        make__util__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 9)));
#line 1363 "make.util.m"
        make__util__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 10)));
#line 1363 "make.util.m"
        make__util__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 11)));
#line 1363 "make.util.m"
        make__util__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 12)));
#line 1363 "make.util.m"
        make__util__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 13)));
#line 1363 "make.util.m"
        make__util__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 14)));
#line 1363 "make.util.m"
        make__util__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 15)));
#line 1363 "make.util.m"
        make__util__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 16)));
#line 1363 "make.util.m"
        make__util__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 17)));
#line 1363 "make.util.m"
        make__util__V_82_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 18)));
#line 1363 "make.util.m"
        make__util__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_17, (MR_Integer) 19)));
#line 1363 "make.util.m"
        {
#line 1363 "make.util.m"
          MR_Word base;
#line 1363 "make.util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
#line 1363 "make.util.m"
          *make__util__STATE_VARIABLE_Info_18 = base;
#line 1363 "make.util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__util__V_64_64));
#line 1363 "make.util.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__util__V_65_65));
#line 1363 "make.util.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__util__V_25_25));
#line 1363 "make.util.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (make__util__V_67_67));
#line 1363 "make.util.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (make__util__V_68_68));
#line 1363 "make.util.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (make__util__V_69_69));
#line 1363 "make.util.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (make__util__V_70_70));
#line 1363 "make.util.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (make__util__V_71_71));
#line 1363 "make.util.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (make__util__V_72_72));
#line 1363 "make.util.m"
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (make__util__V_73_73));
#line 1363 "make.util.m"
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (make__util__V_74_74));
#line 1363 "make.util.m"
          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (make__util__V_75_75));
#line 1363 "make.util.m"
          MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (make__util__V_76_76));
#line 1363 "make.util.m"
          MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (make__util__V_77_77));
#line 1363 "make.util.m"
          MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (make__util__V_78_78));
#line 1363 "make.util.m"
          MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (make__util__V_79_79));
#line 1363 "make.util.m"
          MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (make__util__V_80_80));
#line 1363 "make.util.m"
          MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (make__util__V_81_81));
#line 1363 "make.util.m"
          MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (make__util__V_82_82));
#line 1363 "make.util.m"
          MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (make__util__V_83_83));
#line 1363 "make.util.m"
        }
#line 1362 "make.util.m"
      }
#line 1356 "make.util.m"
  }
#line 1351 "make.util.m"
}

#line 1271 "make.util.m"
static void MR_CALL 
make__util__get_target_timestamp_2_9_p_0(
#line 1271 "make.util.m"
  MR_Word make__util__Globals_10,
#line 1271 "make.util.m"
  MR_Word make__util__Search_11,
#line 1271 "make.util.m"
  MR_Word make__util__TargetFile_12,
#line 1271 "make.util.m"
  MR_String make__util__FileName_13,
#line 1271 "make.util.m"
  MR_Word * make__util__MaybeTimestamp_14,
#line 1271 "make.util.m"
  MR_Word make__util__STATE_VARIABLE_Info_0_24,
#line 1271 "make.util.m"
  MR_Word * make__util__STATE_VARIABLE_Info_25)
#line 1271 "make.util.m"
{
#line 1276 "make.util.m"
  {
#line 1276 "make.util.m"
    MR_bool make__util__succeeded;
#line 1276 "make.util.m"
    MR_Word make__util__ModuleName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__TargetFile_12, (MR_Integer) 0)));
#line 1276 "make.util.m"
    MR_Word make__util__FileType_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__TargetFile_12, (MR_Integer) 1)));
#line 1276 "make.util.m"
    MR_Word make__util__SearchDirs_19;
#line 1276 "make.util.m"
    MR_Word make__util__MaybeTimestamp0_20;
#line 1276 "make.util.m"
    MR_Word make__util__STATE_VARIABLE_Info_30_30;
#line 1287 "make.util.m"
    MR_String make__util__V_21_21;

#line 1281 "make.util.m"
#line 1281 "make.util.m"
    switch (make__util__Search_11) {
#line 1281 "make.util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1281 "make.util.m"
      case (MR_Integer) 1:
#line 1282 "make.util.m"
        {
#line 1282 "make.util.m"
          MR_String make__util__V_28_28;

#line 1283 "make.util.m"
          {
#line 1283 "make.util.m"
            make__util__V_28_28 = mercury__dir__this_directory_0_f_0();
          }
#line 1283 "make.util.m"
          {
#line 1283 "make.util.m"
            make__util__SearchDirs_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1283 "make.util.m"
            MR_hl_field(MR_mktag(1), make__util__SearchDirs_19, 0) = ((MR_Box) (make__util__V_28_28));
#line 1283 "make.util.m"
            MR_hl_field(MR_mktag(1), make__util__SearchDirs_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1283 "make.util.m"
          }
#line 1282 "make.util.m"
        }
#line 1281 "make.util.m"
        break;
#line 1281 "make.util.m"
      case (MR_Integer) 0:
#line 1280 "make.util.m"
        {
#line 1280 "make.util.m"
          make__util__get_search_directories_3_p_0(make__util__Globals_10, make__util__FileType_18, &make__util__SearchDirs_19);
        }
#line 1281 "make.util.m"
        break;
#line 1281 "make.util.m"
    }
#line 1285 "make.util.m"
    {
#line 1285 "make.util.m"
      make__util__get_file_timestamp_7_p_0(make__util__SearchDirs_19, make__util__FileName_13, &make__util__MaybeTimestamp0_20, make__util__STATE_VARIABLE_Info_0_24, &make__util__STATE_VARIABLE_Info_30_30);
    }
#line 1287 "make.util.m"
    make__util__succeeded = ((MR_tag((MR_Word) make__util__MaybeTimestamp0_20)) == (MR_mktag((MR_Integer) 1)));
#line 1287 "make.util.m"
    if (make__util__succeeded)
#line 1287 "make.util.m"
      {
#line 1287 "make.util.m"
        make__util__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(1), make__util__MaybeTimestamp0_20, (MR_Integer) 0)));
#line 1289 "make.util.m"
        if ((make__util__FileType_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 1289 "make.util.m"
          make__util__succeeded = MR_TRUE;
#line 1289 "make.util.m"
        else
#line 1289 "make.util.m"
        if ((make__util__FileType_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 1288 "make.util.m"
          make__util__succeeded = MR_TRUE;
#line 1289 "make.util.m"
        else
#line 1289 "make.util.m"
          make__util__succeeded = MR_FALSE;
#line 1287 "make.util.m"
      }
#line 1308 "make.util.m"
    if (make__util__succeeded)
#line 1297 "make.util.m"
      {
#line 1297 "make.util.m"
        MR_Word make__util__MaybeImports_22;
#line 1297 "make.util.m"
        MR_Word make__util__STATE_VARIABLE_Info_32_32;
#line 1299 "make.util.m"
        MR_Word make__util__Imports_23;
#line 1300 "make.util.m"
        MR_String make__util__V_34_34;
#line 1300 "make.util.m"
        MR_String make__util__V_106_106;
#line 1300 "make.util.m"
        MR_String make__util__V_39_39;
#line 1300 "make.util.m"
        MR_Word make__util__V_40_40;
#line 1300 "make.util.m"
        MR_Word make__util__V_41_41;
#line 1300 "make.util.m"
        MR_Word make__util__V_42_42;
#line 1300 "make.util.m"
        MR_Word make__util__V_43_43;
#line 1300 "make.util.m"
        MR_Word make__util__V_44_44;
#line 1300 "make.util.m"
        MR_Word make__util__V_45_45;
#line 1300 "make.util.m"
        MR_Word make__util__V_46_46;
#line 1300 "make.util.m"
        MR_Word make__util__V_47_47;
#line 1300 "make.util.m"
        MR_Word make__util__V_48_48;
#line 1300 "make.util.m"
        MR_Word make__util__V_49_49;
#line 1300 "make.util.m"
        MR_Word make__util__V_50_50;
#line 1300 "make.util.m"
        MR_Word make__util__V_51_51;
#line 1300 "make.util.m"
        MR_Word make__util__V_52_52;
#line 1300 "make.util.m"
        MR_Word make__util__V_53_53;
#line 1300 "make.util.m"
        MR_Word make__util__V_54_54;
#line 1300 "make.util.m"
        MR_Word make__util__V_55_55;
#line 1300 "make.util.m"
        MR_Word make__util__V_56_56;
#line 1300 "make.util.m"
        MR_Word make__util__V_57_57;
#line 1300 "make.util.m"
        MR_Word make__util__V_58_58;
#line 1300 "make.util.m"
        MR_Word make__util__V_59_59;
#line 1300 "make.util.m"
        MR_Word make__util__V_60_60;
#line 1300 "make.util.m"
        MR_Word make__util__V_61_61;
#line 1300 "make.util.m"
        MR_Word make__util__V_62_62;
#line 1300 "make.util.m"
        MR_Word make__util__V_63_63;
#line 1300 "make.util.m"
        MR_Word make__util__V_64_64;

#line 1297 "make.util.m"
        {
#line 1297 "make.util.m"
          make__module_dep_file__get_module_dependencies_7_p_0(make__util__Globals_10, make__util__ModuleName_17, &make__util__MaybeImports_22, make__util__STATE_VARIABLE_Info_30_30, &make__util__STATE_VARIABLE_Info_32_32);
        }
#line 1299 "make.util.m"
        make__util__succeeded = ((MR_tag((MR_Word) make__util__MaybeImports_22)) == (MR_mktag((MR_Integer) 1)));
#line 1299 "make.util.m"
        if (make__util__succeeded)
#line 1299 "make.util.m"
          {
#line 1299 "make.util.m"
            make__util__Imports_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__util__MaybeImports_22, (MR_Integer) 0)));
#line 1300 "make.util.m"
            make__util__V_39_39 = ((MR_String) (MR_hl_field(MR_mktag(0), make__util__Imports_23, (MR_Integer) 0)));
#line 1300 "make.util.m"
            make__util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_23, (MR_Integer) 1)));
#line 1300 "make.util.m"
            make__util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_23, (MR_Integer) 2)));
#line 1300 "make.util.m"
            make__util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_23, (MR_Integer) 3)));
#line 1300 "make.util.m"
            make__util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_23, (MR_Integer) 4)));
#line 1300 "make.util.m"
            make__util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_23, (MR_Integer) 5)));
#line 1300 "make.util.m"
            make__util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_23, (MR_Integer) 6)));
#line 1300 "make.util.m"
            make__util__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_23, (MR_Integer) 7)));
#line 1300 "make.util.m"
            make__util__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_23, (MR_Integer) 8)));
#line 1300 "make.util.m"
            make__util__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_23, (MR_Integer) 9)));
#line 1300 "make.util.m"
            make__util__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_23, (MR_Integer) 10)));
#line 1300 "make.util.m"
            make__util__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_23, (MR_Integer) 11)));
#line 1300 "make.util.m"
            make__util__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_23, (MR_Integer) 12)));
#line 1300 "make.util.m"
            make__util__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_23, (MR_Integer) 13)));
#line 1300 "make.util.m"
            make__util__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_23, (MR_Integer) 14)));
#line 1300 "make.util.m"
            make__util__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_23, (MR_Integer) 15)));
#line 1300 "make.util.m"
            make__util__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_23, (MR_Integer) 16)));
#line 1300 "make.util.m"
            make__util__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_23, (MR_Integer) 17)));
#line 1300 "make.util.m"
            make__util__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_23, (MR_Integer) 18)));
#line 1300 "make.util.m"
            make__util__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_23, (MR_Integer) 19)));
#line 1300 "make.util.m"
            make__util__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_23, (MR_Integer) 20)));
#line 1300 "make.util.m"
            make__util__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_23, (MR_Integer) 21)));
#line 1300 "make.util.m"
            make__util__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_23, (MR_Integer) 22)));
#line 1300 "make.util.m"
            make__util__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_23, (MR_Integer) 23)));
#line 1300 "make.util.m"
            make__util__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_23, (MR_Integer) 24)));
#line 1300 "make.util.m"
            make__util__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_23, (MR_Integer) 25)));
#line 1300 "make.util.m"
            make__util__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(0), make__util__Imports_23, (MR_Integer) 26)));
#line 1300 "make.util.m"
            {
#line 1300 "make.util.m"
              make__util__V_106_106 = mercury__dir__this_directory_0_f_0();
            }
#line 1300 "make.util.m"
            make__util__succeeded = (strcmp(make__util__V_34_34, make__util__V_106_106) == 0);
#line 1300 "make.util.m"
            make__util__succeeded = !(make__util__succeeded);
#line 1299 "make.util.m"
          }
#line 1305 "make.util.m"
        if (make__util__succeeded)
#line 1302 "make.util.m"
          {
#line 1302 "make.util.m"
            MR_Word make__util__V_35_35;
#line 1302 "make.util.m"
            MR_Word make__util__V_37_37;
#line 1302 "make.util.m"
            MR_Word make__util__V_38_38;
#line 1303 "make.util.m"
            MR_Word make__util__V_65_65;
#line 1303 "make.util.m"
            MR_Word make__util__V_66_66;
#line 1303 "make.util.m"
            MR_Word make__util__V_67_67;
#line 1303 "make.util.m"
            MR_Word make__util__V_68_68;
#line 1303 "make.util.m"
            MR_Word make__util__V_69_69;
#line 1303 "make.util.m"
            MR_Word make__util__V_70_70;
#line 1303 "make.util.m"
            MR_Word make__util__V_71_71;
#line 1303 "make.util.m"
            MR_Word make__util__V_72_72;
#line 1303 "make.util.m"
            MR_Word make__util__V_73_73;
#line 1303 "make.util.m"
            MR_Word make__util__V_74_74;
#line 1303 "make.util.m"
            MR_Word make__util__V_75_75;
#line 1303 "make.util.m"
            MR_Word make__util__V_76_76;
#line 1303 "make.util.m"
            MR_Word make__util__V_77_77;
#line 1303 "make.util.m"
            MR_Word make__util__V_78_78;
#line 1303 "make.util.m"
            MR_Word make__util__V_79_79;
#line 1303 "make.util.m"
            MR_Word make__util__V_80_80;
#line 1303 "make.util.m"
            MR_Word make__util__V_81_81;
#line 1303 "make.util.m"
            MR_Integer make__util__V_82_82;
#line 1303 "make.util.m"
            MR_Word make__util__V_83_83;
#line 1303 "make.util.m"
            MR_Word make__util__V_84_84;
#line 1303 "make.util.m"
            MR_Word make__util__V_86_86;
#line 1303 "make.util.m"
            MR_Word make__util__V_87_87;
#line 1303 "make.util.m"
            MR_Word make__util__V_88_88;
#line 1303 "make.util.m"
            MR_Word make__util__V_89_89;
#line 1303 "make.util.m"
            MR_Word make__util__V_90_90;
#line 1303 "make.util.m"
            MR_Word make__util__V_91_91;
#line 1303 "make.util.m"
            MR_Word make__util__V_92_92;
#line 1303 "make.util.m"
            MR_Word make__util__V_93_93;
#line 1303 "make.util.m"
            MR_Word make__util__V_94_94;
#line 1303 "make.util.m"
            MR_Word make__util__V_95_95;
#line 1303 "make.util.m"
            MR_Word make__util__V_96_96;
#line 1303 "make.util.m"
            MR_Word make__util__V_97_97;
#line 1303 "make.util.m"
            MR_Word make__util__V_98_98;
#line 1303 "make.util.m"
            MR_Word make__util__V_99_99;
#line 1303 "make.util.m"
            MR_Word make__util__V_100_100;
#line 1303 "make.util.m"
            MR_Word make__util__V_101_101;
#line 1303 "make.util.m"
            MR_Integer make__util__V_102_102;
#line 1303 "make.util.m"
            MR_Word make__util__V_103_103;
#line 1303 "make.util.m"
            MR_Word make__util__V_85_85;

#line 1302 "make.util.m"
            {
#line 1302 "make.util.m"
              make__util__V_35_35 = libs__timestamp__oldest_timestamp_0_f_0();
            }
#line 1302 "make.util.m"
            {
#line 1302 "make.util.m"
              MR_Word base;
#line 1302 "make.util.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1302 "make.util.m"
              *make__util__MaybeTimestamp_14 = base;
#line 1302 "make.util.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__util__V_35_35));
#line 1302 "make.util.m"
            }
#line 1303 "make.util.m"
            make__util__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 0)));
#line 1303 "make.util.m"
            make__util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 1)));
#line 1303 "make.util.m"
            make__util__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 2)));
#line 1303 "make.util.m"
            make__util__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 3)));
#line 1303 "make.util.m"
            make__util__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 4)));
#line 1303 "make.util.m"
            make__util__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 5)));
#line 1303 "make.util.m"
            make__util__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 6)));
#line 1303 "make.util.m"
            make__util__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 7)));
#line 1303 "make.util.m"
            make__util__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 8)));
#line 1303 "make.util.m"
            make__util__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 9)));
#line 1303 "make.util.m"
            make__util__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 10)));
#line 1303 "make.util.m"
            make__util__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 11)));
#line 1303 "make.util.m"
            make__util__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 12)));
#line 1303 "make.util.m"
            make__util__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 13)));
#line 1303 "make.util.m"
            make__util__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 14)));
#line 1303 "make.util.m"
            make__util__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 15)));
#line 1303 "make.util.m"
            make__util__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 16)));
#line 1303 "make.util.m"
            make__util__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 17)));
#line 1303 "make.util.m"
            make__util__V_82_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 18)));
#line 1303 "make.util.m"
            make__util__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 19)));
#line 1303 "make.util.m"
            {
#line 1303 "make.util.m"
              make__util__V_38_38 = mercury__map__f_101_108_101_109_32_58_61_3_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &make__util_scalar_common_1[0], ((MR_Box) (make__util__FileName_13)), make__util__V_37_37, ((MR_Box) (*make__util__MaybeTimestamp_14)));
            }
#line 1303 "make.util.m"
            make__util__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 0)));
#line 1303 "make.util.m"
            make__util__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 1)));
#line 1303 "make.util.m"
            make__util__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 2)));
#line 1303 "make.util.m"
            make__util__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 3)));
#line 1303 "make.util.m"
            make__util__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 4)));
#line 1303 "make.util.m"
            make__util__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 5)));
#line 1303 "make.util.m"
            make__util__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 6)));
#line 1303 "make.util.m"
            make__util__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 7)));
#line 1303 "make.util.m"
            make__util__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 8)));
#line 1303 "make.util.m"
            make__util__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 9)));
#line 1303 "make.util.m"
            make__util__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 10)));
#line 1303 "make.util.m"
            make__util__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 11)));
#line 1303 "make.util.m"
            make__util__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 12)));
#line 1303 "make.util.m"
            make__util__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 13)));
#line 1303 "make.util.m"
            make__util__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 14)));
#line 1303 "make.util.m"
            make__util__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 15)));
#line 1303 "make.util.m"
            make__util__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 16)));
#line 1303 "make.util.m"
            make__util__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 17)));
#line 1303 "make.util.m"
            make__util__V_102_102 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 18)));
#line 1303 "make.util.m"
            make__util__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_32_32, (MR_Integer) 19)));
#line 1303 "make.util.m"
            {
#line 1303 "make.util.m"
              MR_Word base;
#line 1303 "make.util.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
#line 1303 "make.util.m"
              *make__util__STATE_VARIABLE_Info_25 = base;
#line 1303 "make.util.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__util__V_84_84));
#line 1303 "make.util.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__util__V_38_38));
#line 1303 "make.util.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__util__V_86_86));
#line 1303 "make.util.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (make__util__V_87_87));
#line 1303 "make.util.m"
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (make__util__V_88_88));
#line 1303 "make.util.m"
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (make__util__V_89_89));
#line 1303 "make.util.m"
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (make__util__V_90_90));
#line 1303 "make.util.m"
              MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (make__util__V_91_91));
#line 1303 "make.util.m"
              MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (make__util__V_92_92));
#line 1303 "make.util.m"
              MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (make__util__V_93_93));
#line 1303 "make.util.m"
              MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (make__util__V_94_94));
#line 1303 "make.util.m"
              MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (make__util__V_95_95));
#line 1303 "make.util.m"
              MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (make__util__V_96_96));
#line 1303 "make.util.m"
              MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (make__util__V_97_97));
#line 1303 "make.util.m"
              MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (make__util__V_98_98));
#line 1303 "make.util.m"
              MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (make__util__V_99_99));
#line 1303 "make.util.m"
              MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (make__util__V_100_100));
#line 1303 "make.util.m"
              MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (make__util__V_101_101));
#line 1303 "make.util.m"
              MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (make__util__V_102_102));
#line 1303 "make.util.m"
              MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (make__util__V_103_103));
#line 1303 "make.util.m"
            }
#line 1302 "make.util.m"
          }
#line 1305 "make.util.m"
        else
#line 1306 "make.util.m"
          {
#line 1306 "make.util.m"
            *make__util__MaybeTimestamp_14 = make__util__MaybeTimestamp0_20;
#line 1306 "make.util.m"
            *make__util__STATE_VARIABLE_Info_25 = make__util__STATE_VARIABLE_Info_32_32;
#line 1306 "make.util.m"
          }
#line 1297 "make.util.m"
      }
#line 1308 "make.util.m"
    else
#line 1309 "make.util.m"
      {
#line 1309 "make.util.m"
        *make__util__MaybeTimestamp_14 = make__util__MaybeTimestamp0_20;
#line 1309 "make.util.m"
        *make__util__STATE_VARIABLE_Info_25 = make__util__STATE_VARIABLE_Info_30_30;
#line 1309 "make.util.m"
      }
#line 1276 "make.util.m"
  }
#line 1271 "make.util.m"
}

#line 1247 "make.util.m"
static void MR_CALL 
make__util__get_target_timestamp_analysis_registry_9_p_0(
#line 1247 "make.util.m"
  MR_Word make__util__Globals_10,
#line 1247 "make.util.m"
  MR_Word make__util__Search_11,
#line 1247 "make.util.m"
  MR_Word make__util__TargetFile_12,
#line 1247 "make.util.m"
  MR_String make__util__FileName_13,
#line 1247 "make.util.m"
  MR_Word * make__util__MaybeTimestamp_14,
#line 1247 "make.util.m"
  MR_Word make__util__STATE_VARIABLE_Info_0_21,
#line 1247 "make.util.m"
  MR_Word * make__util__STATE_VARIABLE_Info_22)
#line 1247 "make.util.m"
{
#line 1252 "make.util.m"
  {
#line 1252 "make.util.m"
    MR_bool make__util__succeeded;
#line 1252 "make.util.m"
    MR_Word make__util__ModuleName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__TargetFile_12, (MR_Integer) 0)));
#line 1253 "make.util.m"
    MR_Word make__util___FileType_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__TargetFile_12, (MR_Integer) 1)));
#line 1256 "make.util.m"
    MR_Word make__util__MaybeTimestamp0_19;
#line 1254 "make.util.m"
    MR_Word make__util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 1)));
#line 1254 "make.util.m"
    MR_Word make__util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 0)));
#line 1254 "make.util.m"
    MR_Word make__util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 2)));
#line 1254 "make.util.m"
    MR_Word make__util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 3)));
#line 1254 "make.util.m"
    MR_Word make__util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 4)));
#line 1254 "make.util.m"
    MR_Word make__util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 5)));
#line 1254 "make.util.m"
    MR_Word make__util__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 6)));
#line 1254 "make.util.m"
    MR_Word make__util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 7)));
#line 1254 "make.util.m"
    MR_Word make__util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 8)));
#line 1254 "make.util.m"
    MR_Word make__util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 9)));
#line 1254 "make.util.m"
    MR_Word make__util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 10)));
#line 1254 "make.util.m"
    MR_Word make__util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 11)));
#line 1254 "make.util.m"
    MR_Word make__util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 12)));
#line 1254 "make.util.m"
    MR_Word make__util__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 13)));
#line 1254 "make.util.m"
    MR_Word make__util__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 14)));
#line 1254 "make.util.m"
    MR_Word make__util__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 15)));
#line 1254 "make.util.m"
    MR_Word make__util__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 16)));
#line 1254 "make.util.m"
    MR_Word make__util__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 17)));
#line 1254 "make.util.m"
    MR_Integer make__util__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 18)));
#line 1254 "make.util.m"
    MR_Word make__util__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 19)));
#line 1254 "make.util.m"
    MR_Box make__util__conv0_MaybeTimestamp0_19;

#line 1254 "make.util.m"
    {
#line 1254 "make.util.m"
      make__util__succeeded = mercury__map__elem_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &make__util_scalar_common_1[0], ((MR_Box) (make__util__FileName_13)), make__util__V_25_25, &make__util__conv0_MaybeTimestamp0_19);
    }
#line 1254 "make.util.m"
    if (make__util__succeeded)
#line 1254 "make.util.m"
      {
#line 1254 "make.util.m"
        make__util__MaybeTimestamp0_19 = ((MR_Word) make__util__conv0_MaybeTimestamp0_19);
#line 1254 "make.util.m"
        make__util__succeeded = MR_TRUE;
#line 1254 "make.util.m"
      }
#line 1256 "make.util.m"
    if (make__util__succeeded)
#line 1255 "make.util.m"
      {
#line 1255 "make.util.m"
        *make__util__MaybeTimestamp_14 = make__util__MaybeTimestamp0_19;
#line 1255 "make.util.m"
        *make__util__STATE_VARIABLE_Info_22 = make__util__STATE_VARIABLE_Info_0_21;
#line 1255 "make.util.m"
      }
#line 1256 "make.util.m"
    else
#line 1257 "make.util.m"
      {
#line 1257 "make.util.m"
        MR_Word make__util__Status_20;

#line 1257 "make.util.m"
        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 1257 "make.util.m"
        {
#line 1257 "make.util.m"
          analysis__do_read_module_overall_status_6_p_0((MR_Word) &make__util_scalar_common_2[1], ((MR_Box) ((MR_Integer) 0)), make__util__Globals_10, make__util__ModuleName_17, &make__util__Status_20);
        }
#line 1264 "make.util.m"
#line 1264 "make.util.m"
        switch (make__util__Status_20) {
#line 1264 "make.util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1264 "make.util.m"
          case (MR_Integer) 0:
#line 1265 "make.util.m"
            {
#line 1265 "make.util.m"
              MR_Word make__util__V_30_30;
#line 1265 "make.util.m"
              MR_Word make__util__V_31_31;
#line 1267 "make.util.m"
              MR_Word make__util__V_53_53;
#line 1267 "make.util.m"
              MR_Word make__util__V_54_54;
#line 1267 "make.util.m"
              MR_Word make__util__V_55_55;
#line 1267 "make.util.m"
              MR_Word make__util__V_56_56;
#line 1267 "make.util.m"
              MR_Word make__util__V_57_57;
#line 1267 "make.util.m"
              MR_Word make__util__V_58_58;
#line 1267 "make.util.m"
              MR_Word make__util__V_59_59;
#line 1267 "make.util.m"
              MR_Word make__util__V_60_60;
#line 1267 "make.util.m"
              MR_Word make__util__V_61_61;
#line 1267 "make.util.m"
              MR_Word make__util__V_62_62;
#line 1267 "make.util.m"
              MR_Word make__util__V_63_63;
#line 1267 "make.util.m"
              MR_Word make__util__V_64_64;
#line 1267 "make.util.m"
              MR_Word make__util__V_65_65;
#line 1267 "make.util.m"
              MR_Word make__util__V_66_66;
#line 1267 "make.util.m"
              MR_Word make__util__V_67_67;
#line 1267 "make.util.m"
              MR_Word make__util__V_68_68;
#line 1267 "make.util.m"
              MR_Word make__util__V_69_69;
#line 1267 "make.util.m"
              MR_Integer make__util__V_70_70;
#line 1267 "make.util.m"
              MR_Word make__util__V_71_71;
#line 1267 "make.util.m"
              MR_Word make__util__V_72_72;
#line 1267 "make.util.m"
              MR_Word make__util__V_74_74;
#line 1267 "make.util.m"
              MR_Word make__util__V_75_75;
#line 1267 "make.util.m"
              MR_Word make__util__V_76_76;
#line 1267 "make.util.m"
              MR_Word make__util__V_77_77;
#line 1267 "make.util.m"
              MR_Word make__util__V_78_78;
#line 1267 "make.util.m"
              MR_Word make__util__V_79_79;
#line 1267 "make.util.m"
              MR_Word make__util__V_80_80;
#line 1267 "make.util.m"
              MR_Word make__util__V_81_81;
#line 1267 "make.util.m"
              MR_Word make__util__V_82_82;
#line 1267 "make.util.m"
              MR_Word make__util__V_83_83;
#line 1267 "make.util.m"
              MR_Word make__util__V_84_84;
#line 1267 "make.util.m"
              MR_Word make__util__V_85_85;
#line 1267 "make.util.m"
              MR_Word make__util__V_86_86;
#line 1267 "make.util.m"
              MR_Word make__util__V_87_87;
#line 1267 "make.util.m"
              MR_Word make__util__V_88_88;
#line 1267 "make.util.m"
              MR_Word make__util__V_89_89;
#line 1267 "make.util.m"
              MR_Integer make__util__V_90_90;
#line 1267 "make.util.m"
              MR_Word make__util__V_91_91;
#line 1267 "make.util.m"
              MR_Word make__util__V_73_73;

#line 1266 "make.util.m"
              *make__util__MaybeTimestamp_14 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_3[25]);
#line 1267 "make.util.m"
              make__util__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 0)));
#line 1267 "make.util.m"
              make__util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 1)));
#line 1267 "make.util.m"
              make__util__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 2)));
#line 1267 "make.util.m"
              make__util__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 3)));
#line 1267 "make.util.m"
              make__util__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 4)));
#line 1267 "make.util.m"
              make__util__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 5)));
#line 1267 "make.util.m"
              make__util__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 6)));
#line 1267 "make.util.m"
              make__util__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 7)));
#line 1267 "make.util.m"
              make__util__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 8)));
#line 1267 "make.util.m"
              make__util__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 9)));
#line 1267 "make.util.m"
              make__util__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 10)));
#line 1267 "make.util.m"
              make__util__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 11)));
#line 1267 "make.util.m"
              make__util__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 12)));
#line 1267 "make.util.m"
              make__util__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 13)));
#line 1267 "make.util.m"
              make__util__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 14)));
#line 1267 "make.util.m"
              make__util__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 15)));
#line 1267 "make.util.m"
              make__util__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 16)));
#line 1267 "make.util.m"
              make__util__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 17)));
#line 1267 "make.util.m"
              make__util__V_70_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 18)));
#line 1267 "make.util.m"
              make__util__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 19)));
#line 1267 "make.util.m"
              {
#line 1267 "make.util.m"
                make__util__V_31_31 = mercury__map__f_101_108_101_109_32_58_61_3_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &make__util_scalar_common_1[0], ((MR_Box) (make__util__FileName_13)), make__util__V_30_30, ((MR_Box) (*make__util__MaybeTimestamp_14)));
              }
#line 1267 "make.util.m"
              make__util__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 0)));
#line 1267 "make.util.m"
              make__util__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 1)));
#line 1267 "make.util.m"
              make__util__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 2)));
#line 1267 "make.util.m"
              make__util__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 3)));
#line 1267 "make.util.m"
              make__util__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 4)));
#line 1267 "make.util.m"
              make__util__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 5)));
#line 1267 "make.util.m"
              make__util__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 6)));
#line 1267 "make.util.m"
              make__util__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 7)));
#line 1267 "make.util.m"
              make__util__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 8)));
#line 1267 "make.util.m"
              make__util__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 9)));
#line 1267 "make.util.m"
              make__util__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 10)));
#line 1267 "make.util.m"
              make__util__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 11)));
#line 1267 "make.util.m"
              make__util__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 12)));
#line 1267 "make.util.m"
              make__util__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 13)));
#line 1267 "make.util.m"
              make__util__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 14)));
#line 1267 "make.util.m"
              make__util__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 15)));
#line 1267 "make.util.m"
              make__util__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 16)));
#line 1267 "make.util.m"
              make__util__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 17)));
#line 1267 "make.util.m"
              make__util__V_90_90 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 18)));
#line 1267 "make.util.m"
              make__util__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_21, (MR_Integer) 19)));
#line 1267 "make.util.m"
              {
#line 1267 "make.util.m"
                MR_Word base;
#line 1267 "make.util.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
#line 1267 "make.util.m"
                *make__util__STATE_VARIABLE_Info_22 = base;
#line 1267 "make.util.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__util__V_72_72));
#line 1267 "make.util.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__util__V_31_31));
#line 1267 "make.util.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__util__V_74_74));
#line 1267 "make.util.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (make__util__V_75_75));
#line 1267 "make.util.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (make__util__V_76_76));
#line 1267 "make.util.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (make__util__V_77_77));
#line 1267 "make.util.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (make__util__V_78_78));
#line 1267 "make.util.m"
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (make__util__V_79_79));
#line 1267 "make.util.m"
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (make__util__V_80_80));
#line 1267 "make.util.m"
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (make__util__V_81_81));
#line 1267 "make.util.m"
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (make__util__V_82_82));
#line 1267 "make.util.m"
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (make__util__V_83_83));
#line 1267 "make.util.m"
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (make__util__V_84_84));
#line 1267 "make.util.m"
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (make__util__V_85_85));
#line 1267 "make.util.m"
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (make__util__V_86_86));
#line 1267 "make.util.m"
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (make__util__V_87_87));
#line 1267 "make.util.m"
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (make__util__V_88_88));
#line 1267 "make.util.m"
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (make__util__V_89_89));
#line 1267 "make.util.m"
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (make__util__V_90_90));
#line 1267 "make.util.m"
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (make__util__V_91_91));
#line 1267 "make.util.m"
              }
#line 1265 "make.util.m"
            }
#line 1264 "make.util.m"
            break;
#line 1264 "make.util.m"
          case (MR_Integer) 2:
#line 1264 "make.util.m"
          case (MR_Integer) 1:
#line 1262 "make.util.m"
            {
#line 1262 "make.util.m"
              make__util__get_target_timestamp_2_9_p_0(make__util__Globals_10, make__util__Search_11, make__util__TargetFile_12, make__util__FileName_13, make__util__MaybeTimestamp_14, make__util__STATE_VARIABLE_Info_0_21, make__util__STATE_VARIABLE_Info_22);
#line 1262 "make.util.m"
              return;
            }
#line 1264 "make.util.m"
            break;
#line 1264 "make.util.m"
        }
#line 1257 "make.util.m"
      }
#line 1252 "make.util.m"
  }
#line 1247 "make.util.m"
}

#line 1175 "make.util.m"
static void MR_CALL 
make__util__write_error_opening_file_4_p_0(
#line 1175 "make.util.m"
  MR_String make__util__FileName_5,
#line 1175 "make.util.m"
  MR_Word make__util__Error_6)
#line 1175 "make.util.m"
{
#line 1178 "make.util.m"
  {
#line 1178 "make.util.m"
    MR_bool make__util__succeeded;
#line 1178 "make.util.m"
    MR_String make__util__V_16_16;
#line 1178 "make.util.m"
    MR_String make__util__V_21_21;
#line 1178 "make.util.m"
    MR_Word make__util__V_27_27;
#line 1178 "make.util.m"
    MR_String make__util__V_31_31;

#line 1180 "make.util.m"
    {
#line 1180 "make.util.m"
      make__util__V_16_16 = mercury__io__error_message_1_f_0(make__util__Error_6);
    }
#line 1179 "make.util.m"
    {
#line 1179 "make.util.m"
      mercury__io__write_string_3_p_0((MR_String) "Error opening \140");
    }
#line 7598 "make.util.c"
    make__util__V_27_27 = (MR_Word) &make__util_scalar_common_3[24];
#line 1180 "make.util.m"
    {
#line 1180 "make.util.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(make__util__V_27_27, make__util__FileName_5, &make__util__V_21_21);
    }
#line 1180 "make.util.m"
    {
#line 1180 "make.util.m"
      mercury__io__write_string_3_p_0(make__util__V_21_21);
    }
#line 1179 "make.util.m"
    {
#line 1179 "make.util.m"
      mercury__io__write_string_3_p_0((MR_String) "\': ");
    }
#line 1180 "make.util.m"
    {
#line 1180 "make.util.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(make__util__V_27_27, make__util__V_16_16, &make__util__V_31_31);
    }
#line 1180 "make.util.m"
    {
#line 1180 "make.util.m"
      mercury__io__write_string_3_p_0(make__util__V_31_31);
    }
#line 1179 "make.util.m"
    {
#line 1179 "make.util.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
#line 1179 "make.util.m"
      return;
    }
#line 1178 "make.util.m"
  }
#line 1175 "make.util.m"
}

#line 1168 "make.util.m"
static void MR_CALL 
make__util__write_error_opening_output_4_p_0(
#line 1168 "make.util.m"
  MR_String make__util__FileName_5,
#line 1168 "make.util.m"
  MR_Word make__util__Error_6)
#line 1168 "make.util.m"
{
#line 1171 "make.util.m"
  {
#line 1171 "make.util.m"
    MR_bool make__util__succeeded;
#line 1171 "make.util.m"
    MR_String make__util__V_16_16;
#line 1171 "make.util.m"
    MR_String make__util__V_21_21;
#line 1171 "make.util.m"
    MR_Word make__util__V_27_27;
#line 1171 "make.util.m"
    MR_String make__util__V_31_31;

#line 1173 "make.util.m"
    {
#line 1173 "make.util.m"
      make__util__V_16_16 = mercury__io__error_message_1_f_0(make__util__Error_6);
    }
#line 1172 "make.util.m"
    {
#line 1172 "make.util.m"
      mercury__io__write_string_3_p_0((MR_String) "** Error opening \140");
    }
#line 7669 "make.util.c"
    make__util__V_27_27 = (MR_Word) &make__util_scalar_common_3[24];
#line 1173 "make.util.m"
    {
#line 1173 "make.util.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(make__util__V_27_27, make__util__FileName_5, &make__util__V_21_21);
    }
#line 1173 "make.util.m"
    {
#line 1173 "make.util.m"
      mercury__io__write_string_3_p_0(make__util__V_21_21);
    }
#line 1172 "make.util.m"
    {
#line 1172 "make.util.m"
      mercury__io__write_string_3_p_0((MR_String) "\' for output: ");
    }
#line 1173 "make.util.m"
    {
#line 1173 "make.util.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(make__util__V_27_27, make__util__V_16_16, &make__util__V_31_31);
    }
#line 1173 "make.util.m"
    {
#line 1173 "make.util.m"
      mercury__io__write_string_3_p_0(make__util__V_31_31);
    }
#line 1172 "make.util.m"
    {
#line 1172 "make.util.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
#line 1172 "make.util.m"
      return;
    }
#line 1171 "make.util.m"
  }
#line 1168 "make.util.m"
}

#line 1143 "make.util.m"
static void MR_CALL 
make__util__make_write_error_char_7_p_0(
#line 1143 "make.util.m"
  MR_Word make__util__FullOutputStream_8,
#line 1143 "make.util.m"
  MR_Word make__util__PartialOutputStream_9,
#line 1143 "make.util.m"
  MR_Char make__util__Char_10,
#line 1143 "make.util.m"
  MR_Integer make__util__STATE_VARIABLE_LinesRemaining_0_14,
#line 1143 "make.util.m"
  MR_Integer * make__util__STATE_VARIABLE_LinesRemaining_15)
#line 1143 "make.util.m"
{
#line 1147 "make.util.m"
  {
#line 1147 "make.util.m"
    MR_bool make__util__succeeded;

#line 1148 "make.util.m"
    {
#line 1148 "make.util.m"
      mercury__io__write_char_4_p_0(make__util__FullOutputStream_8, make__util__Char_10);
    }
#line 1149 "make.util.m"
    make__util__succeeded = (make__util__STATE_VARIABLE_LinesRemaining_0_14 > (MR_Integer) 0);
#line 1156 "make.util.m"
    if (make__util__succeeded)
#line 1150 "make.util.m"
      {
#line 1150 "make.util.m"
        {
#line 1150 "make.util.m"
          mercury__io__write_char_4_p_0(make__util__PartialOutputStream_9, make__util__Char_10);
        }
#line 1151 "make.util.m"
        make__util__succeeded = (make__util__Char_10 == (MR_Char) 10);
#line 1153 "make.util.m"
        if (make__util__succeeded)
#line 1152 "make.util.m"
          {
#line 1152 "make.util.m"
            *make__util__STATE_VARIABLE_LinesRemaining_15 = (make__util__STATE_VARIABLE_LinesRemaining_0_14 - (MR_Integer) 1);
#line 1152 "make.util.m"
          }
#line 1153 "make.util.m"
        else
#line 1153 "make.util.m"
          *make__util__STATE_VARIABLE_LinesRemaining_15 = make__util__STATE_VARIABLE_LinesRemaining_0_14;
#line 1150 "make.util.m"
      }
#line 1156 "make.util.m"
    else
#line 1164 "make.util.m"
      {
#line 1156 "make.util.m"
        make__util__succeeded = (make__util__STATE_VARIABLE_LinesRemaining_0_14 == (MR_Integer) 0);
#line 1164 "make.util.m"
        if (make__util__succeeded)
#line 1157 "make.util.m"
          {
#line 1157 "make.util.m"
            MR_String make__util__FullOutputFileName_13;

#line 1157 "make.util.m"
            {
#line 1157 "make.util.m"
              mercury__io__output_stream_name_4_p_0(make__util__FullOutputStream_8, &make__util__FullOutputFileName_13);
            }
#line 1158 "make.util.m"
            {
#line 1158 "make.util.m"
              mercury__io__write_string_4_p_0(make__util__PartialOutputStream_9, (MR_String) "... error log truncated, see \140");
            }
#line 1160 "make.util.m"
            {
#line 1160 "make.util.m"
              mercury__io__write_string_4_p_0(make__util__PartialOutputStream_9, make__util__FullOutputFileName_13);
            }
#line 1161 "make.util.m"
            {
#line 1161 "make.util.m"
              mercury__io__write_string_4_p_0(make__util__PartialOutputStream_9, (MR_String) "\' for the complete log.\n");
            }
#line 1163 "make.util.m"
            *make__util__STATE_VARIABLE_LinesRemaining_15 = (MR_Integer) -1;
#line 1157 "make.util.m"
          }
#line 1164 "make.util.m"
        else
#line 1165 "make.util.m"
          *make__util__STATE_VARIABLE_LinesRemaining_15 = make__util__STATE_VARIABLE_LinesRemaining_0_14;
#line 1164 "make.util.m"
      }
#line 1147 "make.util.m"
  }
#line 1143 "make.util.m"
}

#line 1133 "make.util.m"
static void MR_CALL 
make__util__make_write_error_streams_7_p_0_1(
#line 1133 "make.util.m"
  MR_Box make__util__closure_arg,
#line 1133 "make.util.m"
  MR_Box make__util__wrapper_arg_1,
#line 1133 "make.util.m"
  MR_Box make__util__wrapper_arg_2,
#line 1133 "make.util.m"
  MR_Box * make__util__wrapper_arg_3,
#line 1133 "make.util.m"
  MR_Box make__util__wrapper_arg_4,
#line 1133 "make.util.m"
  MR_Box * make__util__wrapper_arg_5)
#line 1133 "make.util.m"
{
#line 1133 "make.util.m"
  {
#line 1133 "make.util.m"
    MR_Box make__util__closure = make__util__closure_arg;
#line 1133 "make.util.m"
    MR_Integer make__util__conv0_STATE_VARIABLE_LinesRemaining_15;

#line 1133 "make.util.m"
    {
#line 1133 "make.util.m"
      make__util__make_write_error_char_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 4))), ((MR_Char) (MR_Word) make__util__wrapper_arg_1), ((MR_Integer) make__util__wrapper_arg_2), &make__util__conv0_STATE_VARIABLE_LinesRemaining_15);
    }
#line 1133 "make.util.m"
    *make__util__wrapper_arg_3 = ((MR_Box) (make__util__conv0_STATE_VARIABLE_LinesRemaining_15));
#line 1133 "make.util.m"
  }
#line 1133 "make.util.m"
}

#line 1126 "make.util.m"
static void MR_CALL 
make__util__make_write_error_streams_7_p_0(
#line 1126 "make.util.m"
  MR_String make__util__FileName_8,
#line 1126 "make.util.m"
  MR_Word make__util__InputStream_9,
#line 1126 "make.util.m"
  MR_Word make__util__FullOutputStream_10,
#line 1126 "make.util.m"
  MR_Word make__util__PartialOutputStream_11,
#line 1126 "make.util.m"
  MR_Integer make__util__LinesToWrite_12)
#line 1126 "make.util.m"
{
#line 1131 "make.util.m"
  {
#line 1131 "make.util.m"
    MR_bool make__util__succeeded;
#line 1131 "make.util.m"
    MR_Word make__util__Res_14;
#line 1131 "make.util.m"
    MR_Word make__util__V_20_20;

#line 1133 "make.util.m"
    {
#line 1133 "make.util.m"
      make__util__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1133 "make.util.m"
      MR_hl_field(MR_mktag(0), make__util__V_20_20, 0) = ((MR_Box) (&make__util_scalar_common_11[1]));
#line 1133 "make.util.m"
      MR_hl_field(MR_mktag(0), make__util__V_20_20, 1) = ((MR_Box) (make__util__make_write_error_streams_7_p_0_1));
#line 1133 "make.util.m"
      MR_hl_field(MR_mktag(0), make__util__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1133 "make.util.m"
      MR_hl_field(MR_mktag(0), make__util__V_20_20, 3) = ((MR_Box) (make__util__FullOutputStream_10));
#line 1133 "make.util.m"
      MR_hl_field(MR_mktag(0), make__util__V_20_20, 4) = ((MR_Box) (make__util__PartialOutputStream_11));
#line 1133 "make.util.m"
    }
#line 1132 "make.util.m"
    {
#line 1132 "make.util.m"
      mercury__io__input_stream_foldl2_io_6_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, make__util__InputStream_9, make__util__V_20_20, ((MR_Box) (make__util__LinesToWrite_12)), &make__util__Res_14);
    }
#line 1137 "make.util.m"
    if (((MR_tag((MR_Word) make__util__Res_14)) == (MR_mktag((MR_Integer) 1))))
#line 1138 "make.util.m"
      {
#line 1138 "make.util.m"
        MR_Word make__util__Error_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__util__Res_14, (MR_Integer) 1)));
#line 1138 "make.util.m"
        MR_String make__util__V_28_28;
#line 1138 "make.util.m"
        MR_String make__util__V_39_39;
#line 1138 "make.util.m"
        MR_Word make__util__V_45_45;
#line 1138 "make.util.m"
        MR_String make__util__V_49_49;
#line 1138 "make.util.m"
        MR_Integer make__util__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), make__util__Res_14, (MR_Integer) 0)));

#line 1140 "make.util.m"
        {
#line 1140 "make.util.m"
          make__util__V_28_28 = mercury__io__error_message_1_f_0(make__util__Error_17);
        }
#line 1139 "make.util.m"
        {
#line 1139 "make.util.m"
          mercury__io__write_string_3_p_0((MR_String) "Error reading \140");
        }
#line 7916 "make.util.c"
        make__util__V_45_45 = (MR_Word) &make__util_scalar_common_3[24];
#line 1140 "make.util.m"
        {
#line 1140 "make.util.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(make__util__V_45_45, make__util__FileName_8, &make__util__V_39_39);
        }
#line 1140 "make.util.m"
        {
#line 1140 "make.util.m"
          mercury__io__write_string_3_p_0(make__util__V_39_39);
        }
#line 1139 "make.util.m"
        {
#line 1139 "make.util.m"
          mercury__io__write_string_3_p_0((MR_String) "\': ");
        }
#line 1140 "make.util.m"
        {
#line 1140 "make.util.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(make__util__V_45_45, make__util__V_28_28, &make__util__V_49_49);
        }
#line 1140 "make.util.m"
        {
#line 1140 "make.util.m"
          mercury__io__write_string_3_p_0(make__util__V_49_49);
        }
#line 1139 "make.util.m"
        {
#line 1139 "make.util.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
#line 1139 "make.util.m"
          return;
        }
#line 1138 "make.util.m"
      }
#line 1137 "make.util.m"
    else
#line 1136 "make.util.m"
      {
#line 1136 "make.util.m"
      }
#line 1131 "make.util.m"
  }
#line 1126 "make.util.m"
}

#line 969 "make.util.m"
static void MR_CALL 
make__util__build_with_module_options_and_output_redirect_2_9_p_0(
#line 969 "make.util.m"
  MR_Word make__util__ModuleName_10,
#line 969 "make.util.m"
  MR_Word make__util__Build_11,
#line 969 "make.util.m"
  MR_Word make__util__Globals_12,
#line 969 "make.util.m"
  MR_Word make__util__AllOptions_13,
#line 969 "make.util.m"
  MR_Word * make__util__Succeeded_14,
#line 969 "make.util.m"
  MR_Word make__util__STATE_VARIABLE_Info_0_17,
#line 969 "make.util.m"
  MR_Word * make__util__STATE_VARIABLE_Info_18)
#line 969 "make.util.m"
{
#line 975 "make.util.m"
  {
#line 975 "make.util.m"
    MR_bool make__util__succeeded;
#line 975 "make.util.m"
    MR_Word make__util__RedirectResult_41;
#line 975 "make.util.m"
    MR_Word make__util__STATE_VARIABLE_Info_21_43;

#line 991 "make.util.m"
    {
#line 991 "make.util.m"
      make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_100_105_114_101_99_116_95_111_117_116_112_117_116_95_95_91_49_93_95_48_6_p_0(&make__util__RedirectResult_41, make__util__STATE_VARIABLE_Info_0_17, &make__util__STATE_VARIABLE_Info_21_43);
    }
#line 995 "make.util.m"
    if ((make__util__RedirectResult_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 993 "make.util.m"
      {
#line 994 "make.util.m"
        *make__util__Succeeded_14 = (MR_Integer) 0;
#line 993 "make.util.m"
        *make__util__STATE_VARIABLE_Info_18 = make__util__STATE_VARIABLE_Info_21_43;
#line 993 "make.util.m"
      }
#line 995 "make.util.m"
    else
#line 996 "make.util.m"
      {
#line 996 "make.util.m"
        MR_Word make__util__ErrorStream_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__util__RedirectResult_41, (MR_Integer) 0)));
#line 996 "make.util.m"
        MR_Word make__util__STATE_VARIABLE_Info_23_45;
#line 987 "make.util.m"
        void MR_CALL (* make__util__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), make__util__Build_11, (MR_Integer) 1)));
#line 987 "make.util.m"
        MR_Box make__util__conv3_Succeeded_14;
#line 987 "make.util.m"
        MR_Box make__util__conv2_STATE_VARIABLE_Info_23_45;
#line 987 "make.util.m"
        MR_Box make__util__conv1_STATE_VARIABLE_IO_24_46;

#line 987 "make.util.m"
        {
#line 987 "make.util.m"
          make__util__func_0(((MR_Box) make__util__Build_11), ((MR_Box) (make__util__Globals_12)), ((MR_Box) (make__util__AllOptions_13)), ((MR_Box) (make__util__ErrorStream_42)), &make__util__conv3_Succeeded_14, ((MR_Box) (make__util__STATE_VARIABLE_Info_21_43)), &make__util__conv2_STATE_VARIABLE_Info_23_45, ((MR_Box) ((MR_Integer) 0)), &make__util__conv1_STATE_VARIABLE_IO_24_46);
        }
#line 987 "make.util.m"
        *make__util__Succeeded_14 = ((MR_Word) make__util__conv3_Succeeded_14);
#line 987 "make.util.m"
        make__util__STATE_VARIABLE_Info_23_45 = ((MR_Word) make__util__conv2_STATE_VARIABLE_Info_23_45);
#line 998 "make.util.m"
        {
#line 998 "make.util.m"
          make__util__unredirect_output_7_p_0(make__util__Globals_12, make__util__ModuleName_10, make__util__ErrorStream_42, make__util__STATE_VARIABLE_Info_23_45, make__util__STATE_VARIABLE_Info_18);
#line 998 "make.util.m"
          return;
        }
#line 996 "make.util.m"
      }
#line 975 "make.util.m"
  }
#line 969 "make.util.m"
}

#line 931 "make.util.m"
static void MR_CALL 
make__util__unlock_stdout_3_p_0(
#line 931 "make.util.m"
  MR_Box make__util__JobCtl_1)
#line 931 "make.util.m"
{
#line 933 "make.util.m"
  {
#line 933 "make.util.m"
    MR_bool make__util__succeeded;

#line 937 "make.util.m"
{
#define MR_PROC_LABEL make__util__unlock_stdout_3_p_0

	MC_JobCtl * JobCtl;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MC_JobCtl *, make__util__JobCtl_1 , JobCtl);
		{
#line 937 "make.util.m"

#ifdef MC_HAVE_JOBCTL_IPC
    MC_unlock_job_ctl(JobCtl);
#endif

#line 8072 "make.util.c"

		;}
#undef MR_PROC_LABEL
#line 937 "make.util.m"
}
#line 933 "make.util.m"
  }
#line 931 "make.util.m"
}

#line 917 "make.util.m"
static void MR_CALL 
make__util__lock_stdout_3_p_0(
#line 917 "make.util.m"
  MR_Box make__util__JobCtl_1)
#line 917 "make.util.m"
{
#line 919 "make.util.m"
  {
#line 919 "make.util.m"
    MR_bool make__util__succeeded;

#line 923 "make.util.m"
{
#define MR_PROC_LABEL make__util__lock_stdout_3_p_0

	MC_JobCtl * JobCtl;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MC_JobCtl *, make__util__JobCtl_1 , JobCtl);
		{
#line 923 "make.util.m"

#ifdef MC_HAVE_JOBCTL_IPC
    MC_lock_job_ctl(JobCtl);
#endif

#line 8109 "make.util.c"

		;}
#undef MR_PROC_LABEL
#line 923 "make.util.m"
}
#line 919 "make.util.m"
  }
#line 917 "make.util.m"
}

#line 902 "make.util.m"
static MR_Word MR_CALL 
make__util__make_no_job_ctl_0_f_0(void)
#line 902 "make.util.m"
{
#line 906 "make.util.m"
  {
#line 906 "make.util.m"
    MR_bool make__util__succeeded;

#line 906 "make.util.m"
    return (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 906 "make.util.m"
  }
#line 902 "make.util.m"
}

#line 896 "make.util.m"
static MR_Word MR_CALL 
make__util__make_yes_job_ctl_1_f_0(
#line 896 "make.util.m"
  MR_Box make__util__JobCtl_3)
#line 896 "make.util.m"
{
#line 900 "make.util.m"
  {
#line 900 "make.util.m"
    MR_bool make__util__succeeded;
#line 900 "make.util.m"
    MR_Word make__util__HeadVar__2_2;

#line 900 "make.util.m"
    {
#line 900 "make.util.m"
      make__util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 900 "make.util.m"
      MR_hl_field(MR_mktag(1), make__util__HeadVar__2_2, 0) = ((MR_Box) (make__util__JobCtl_3));
#line 900 "make.util.m"
    }
#line 900 "make.util.m"
    return make__util__HeadVar__2_2;
#line 900 "make.util.m"
  }
#line 896 "make.util.m"
}

#line 879 "make.util.m"
static void MR_CALL 
make__util__mark_abort_3_p_0(
#line 879 "make.util.m"
  MR_Box make__util__JobCtl_1)
#line 879 "make.util.m"
{
#line 881 "make.util.m"
  {
#line 881 "make.util.m"
    MR_bool make__util__succeeded;

#line 885 "make.util.m"
{
#define MR_PROC_LABEL make__util__mark_abort_3_p_0

	MC_JobCtl * JobCtl;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MC_JobCtl *, make__util__JobCtl_1 , JobCtl);
		{
#line 885 "make.util.m"

#ifdef MC_HAVE_JOBCTL_IPC
    MC_lock_job_ctl(JobCtl);
    JobCtl->jc_abort = MR_TRUE;
    MC_unlock_job_ctl(JobCtl);
#endif

#line 8194 "make.util.c"

		;}
#undef MR_PROC_LABEL
#line 885 "make.util.m"
}
#line 881 "make.util.m"
  }
#line 879 "make.util.m"
}

#line 856 "make.util.m"
static void MR_CALL 
make__util__mark_task_error_5_p_0(
#line 856 "make.util.m"
  MR_Box make__util__JobCtl_1,
#line 856 "make.util.m"
  MR_Integer make__util__TaskNumber_2,
#line 856 "make.util.m"
  MR_Word make__util__KeepGoing_3)
#line 856 "make.util.m"
{
#line 858 "make.util.m"
  {
#line 858 "make.util.m"
    MR_bool make__util__succeeded;

#line 863 "make.util.m"
{
#define MR_PROC_LABEL make__util__mark_task_error_5_p_0

	MC_JobCtl * JobCtl;
	MR_Integer TaskNumber;
	MR_Word KeepGoing;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MC_JobCtl *, make__util__JobCtl_1 , JobCtl);
	TaskNumber =  make__util__TaskNumber_2 ;
	KeepGoing =  make__util__KeepGoing_3 ;
		{
#line 863 "make.util.m"

#ifdef MC_HAVE_JOBCTL_IPC
    MC_lock_job_ctl(JobCtl);

    JobCtl->jc_tasks[TaskNumber] = TASK_ERROR;
    if (!KeepGoing) {
        JobCtl->jc_abort = MR_TRUE;
    }

    MC_unlock_job_ctl(JobCtl);
#endif

#line 8246 "make.util.c"

		;}
#undef MR_PROC_LABEL
#line 863 "make.util.m"
}
#line 858 "make.util.m"
  }
#line 856 "make.util.m"
}

#line 839 "make.util.m"
static void MR_CALL 
make__util__mark_task_done_4_p_0(
#line 839 "make.util.m"
  MR_Box make__util__JobCtl_1,
#line 839 "make.util.m"
  MR_Integer make__util__TaskNumber_2)
#line 839 "make.util.m"
{
#line 841 "make.util.m"
  {
#line 841 "make.util.m"
    MR_bool make__util__succeeded;

#line 845 "make.util.m"
{
#define MR_PROC_LABEL make__util__mark_task_done_4_p_0

	MC_JobCtl * JobCtl;
	MR_Integer TaskNumber;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MC_JobCtl *, make__util__JobCtl_1 , JobCtl);
	TaskNumber =  make__util__TaskNumber_2 ;
		{
#line 845 "make.util.m"

#ifdef MC_HAVE_JOBCTL_IPC
    MC_lock_job_ctl(JobCtl);
    JobCtl->jc_tasks[TaskNumber] = TASK_DONE;
    MC_unlock_job_ctl(JobCtl);
#endif

#line 8289 "make.util.c"

		;}
#undef MR_PROC_LABEL
#line 845 "make.util.m"
}
#line 841 "make.util.m"
  }
#line 839 "make.util.m"
}

#line 808 "make.util.m"
static void MR_CALL 
make__util__accept_task_4_p_0(
#line 808 "make.util.m"
  MR_Box make__util__JobCtl_1,
#line 808 "make.util.m"
  MR_Integer * make__util__TaskNumber_2)
#line 808 "make.util.m"
{
#line 810 "make.util.m"
  {
#line 810 "make.util.m"
    MR_bool make__util__succeeded;

#line 814 "make.util.m"
{
#define MR_PROC_LABEL make__util__accept_task_4_p_0

	MC_JobCtl * JobCtl;
	MR_Integer TaskNumber;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MC_JobCtl *, make__util__JobCtl_1 , JobCtl);
		{
#line 814 "make.util.m"

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

#line 8345 "make.util.c"

		;}
#undef MR_PROC_LABEL
	 *make__util__TaskNumber_2  = TaskNumber;
#line 814 "make.util.m"
}
#line 810 "make.util.m"
  }
#line 808 "make.util.m"
}

#line 787 "make.util.m"
static void MR_CALL 
make__util__destroy_job_ctl_3_p_0(
#line 787 "make.util.m"
  MR_Box make__util__JobCtl_1)
#line 787 "make.util.m"
{
#line 789 "make.util.m"
  {
#line 789 "make.util.m"
    MR_bool make__util__succeeded;

#line 793 "make.util.m"
{
#define MR_PROC_LABEL make__util__destroy_job_ctl_3_p_0

	MC_JobCtl * JobCtl;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MC_JobCtl *, make__util__JobCtl_1 , JobCtl);
		{
#line 793 "make.util.m"

#ifdef MC_HAVE_JOBCTL_IPC
  #ifdef MC_USE_SYSV_SEMAPHORE
    semctl(JobCtl->jc_semid, 0, IPC_RMID);
  #else
    pthread_mutex_destroy(&JobCtl->jc_mutex);
  #endif

    munmap(JobCtl, MC_JOB_CTL_SIZE(JobCtl->jc_total_tasks));
#endif

#line 8389 "make.util.c"

		;}
#undef MR_PROC_LABEL
#line 793 "make.util.m"
}
#line 789 "make.util.m"
  }
#line 787 "make.util.m"
}

#line 763 "make.util.m"
static void MR_CALL 
make__util__create_job_ctl_4_p_0(
#line 763 "make.util.m"
  MR_Integer make__util__TotalJobs_1,
#line 763 "make.util.m"
  MR_Word * make__util__MaybeJobCtl_2)
#line 763 "make.util.m"
{
#line 765 "make.util.m"
  {
#line 765 "make.util.m"
    MR_bool make__util__succeeded;

#line 769 "make.util.m"
{
#define MR_PROC_LABEL make__util__create_job_ctl_4_p_0

	MR_Integer TotalJobs;
	MR_Word MaybeJobCtl;

	TotalJobs =  make__util__TotalJobs_1 ;
		{
#line 769 "make.util.m"

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

#line 8438 "make.util.c"

		;}
#undef MR_PROC_LABEL
	 *make__util__MaybeJobCtl_2  = MaybeJobCtl;
#line 769 "make.util.m"
}
#line 765 "make.util.m"
  }
#line 763 "make.util.m"
}

#line 747 "make.util.m"
static MR_bool MR_CALL 
make__util__have_job_ctl_ipc_0_p_0(void)
#line 747 "make.util.m"
{
#line 752 "make.util.m"
  {
#line 752 "make.util.m"
    MR_bool make__util__succeeded;

#line 755 "make.util.m"
{
#define MR_PROC_LABEL make__util__have_job_ctl_ipc_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 755 "make.util.m"

#ifdef MC_HAVE_JOBCTL_IPC
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif

#line 8475 "make.util.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 755 "make.util.m"
	}
make__util__succeeded  = SUCCESS_INDICATOR;
}
#line 752 "make.util.m"
    return make__util__succeeded;
#line 752 "make.util.m"
  }
#line 747 "make.util.m"
}

#line 538 "make.util.m"
static void MR_CALL 
make__util__reap_worker_process_5_p_0(
#line 538 "make.util.m"
  MR_Integer make__util__Pid_6,
#line 538 "make.util.m"
  MR_Word make__util__STATE_VARIABLE_Success_0_10,
#line 538 "make.util.m"
  MR_Word * make__util__STATE_VARIABLE_Success_11)
#line 538 "make.util.m"
{
#line 541 "make.util.m"
  {
#line 541 "make.util.m"
    MR_bool make__util__succeeded;
#line 541 "make.util.m"
    MR_Word make__util__Status_9;
#line 544 "make.util.m"
    MR_Word make__util__V_15_15;
#line 544 "make.util.m"
    MR_Integer make__util__V_16_16;

#line 542 "make.util.m"
    {
#line 542 "make.util.m"
      libs__process_util__wait_pid_4_p_0(make__util__Pid_6, &make__util__Status_9);
    }
#line 544 "make.util.m"
    make__util__succeeded = (make__util__STATE_VARIABLE_Success_0_10 == (MR_Integer) 1);
#line 544 "make.util.m"
    if (make__util__succeeded)
#line 544 "make.util.m"
      {
#line 545 "make.util.m"
        make__util__succeeded = ((MR_tag((MR_Word) make__util__Status_9)) == (MR_mktag((MR_Integer) 0)));
#line 545 "make.util.m"
        if (make__util__succeeded)
#line 545 "make.util.m"
          {
#line 545 "make.util.m"
            make__util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Status_9, (MR_Integer) 0)));
#line 545 "make.util.m"
            make__util__succeeded = ((MR_tag((MR_Word) make__util__V_15_15)) == (MR_mktag((MR_Integer) 0)));
#line 545 "make.util.m"
            if (make__util__succeeded)
#line 545 "make.util.m"
              {
#line 545 "make.util.m"
                make__util__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__util__V_15_15, (MR_Integer) 0)));
#line 545 "make.util.m"
                make__util__succeeded = (make__util__V_16_16 == (MR_Integer) 0);
#line 545 "make.util.m"
              }
#line 545 "make.util.m"
          }
#line 544 "make.util.m"
      }
#line 548 "make.util.m"
    if (make__util__succeeded)
#line 548 "make.util.m"
      *make__util__STATE_VARIABLE_Success_11 = make__util__STATE_VARIABLE_Success_0_10;
#line 548 "make.util.m"
    else
#line 549 "make.util.m"
      *make__util__STATE_VARIABLE_Success_11 = (MR_Integer) 0;
#line 541 "make.util.m"
  }
#line 538 "make.util.m"
}

#line 536 "make.util.m"
static void MR_CALL 
make__util__worker_loop_signal_cleanup_6_p_0_1(
#line 536 "make.util.m"
  MR_Box make__util__closure_arg,
#line 536 "make.util.m"
  MR_Box make__util__wrapper_arg_1,
#line 536 "make.util.m"
  MR_Box make__util__wrapper_arg_2,
#line 536 "make.util.m"
  MR_Box * make__util__wrapper_arg_3)
#line 536 "make.util.m"
{
#line 536 "make.util.m"
  {
#line 536 "make.util.m"
    MR_Box make__util__closure = make__util__closure_arg;

#line 536 "make.util.m"
    {
#line 536 "make.util.m"
      libs__process_util__send_signal_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 3))), ((MR_Integer) make__util__wrapper_arg_1));
#line 536 "make.util.m"
      return;
    }
#line 536 "make.util.m"
  }
#line 536 "make.util.m"
}

#line 531 "make.util.m"
static void MR_CALL 
make__util__worker_loop_signal_cleanup_6_p_0(
#line 531 "make.util.m"
  MR_Word make__util__TypeInfo_for_Info_19,
#line 531 "make.util.m"
  MR_Box make__util__JobCtl_7,
#line 531 "make.util.m"
  MR_Word make__util__Pids_8,
#line 531 "make.util.m"
  MR_Box make__util__STATE_VARIABLE_Info_0_11,
#line 531 "make.util.m"
  MR_Box * make__util__STATE_VARIABLE_Info_12)
#line 531 "make.util.m"
{
#line 534 "make.util.m"
  {
#line 534 "make.util.m"
    MR_bool make__util__succeeded;
#line 534 "make.util.m"
    MR_Word make__util__V_16_16;
#line 534 "make.util.m"
    MR_Integer make__util__V_18_18;
#line 536 "make.util.m"
    MR_Box make__util__conv0_STATE_VARIABLE_IO_14;

#line 535 "make.util.m"
    {
#line 535 "make.util.m"
      make__util__mark_abort_3_p_0(make__util__JobCtl_7);
    }
#line 536 "make.util.m"
    {
#line 536 "make.util.m"
      make__util__V_18_18 = libs__process_util__sigint_0_f_0();
    }
#line 536 "make.util.m"
    {
#line 536 "make.util.m"
      make__util__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 536 "make.util.m"
      MR_hl_field(MR_mktag(0), make__util__V_16_16, 0) = ((MR_Box) (&make__util_scalar_common_12[0]));
#line 536 "make.util.m"
      MR_hl_field(MR_mktag(0), make__util__V_16_16, 1) = ((MR_Box) (make__util__worker_loop_signal_cleanup_6_p_0_1));
#line 536 "make.util.m"
      MR_hl_field(MR_mktag(0), make__util__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 536 "make.util.m"
      MR_hl_field(MR_mktag(0), make__util__V_16_16, 3) = ((MR_Box) (make__util__V_18_18));
#line 536 "make.util.m"
    }
#line 536 "make.util.m"
    {
#line 536 "make.util.m"
      mercury__list__foldl_4_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__util__V_16_16, make__util__Pids_8, ((MR_Box) ((MR_Integer) 0)), &make__util__conv0_STATE_VARIABLE_IO_14);
    }
#line 534 "make.util.m"
    *make__util__STATE_VARIABLE_Info_12 = make__util__STATE_VARIABLE_Info_0_11;
#line 534 "make.util.m"
  }
#line 531 "make.util.m"
}

#line 505 "make.util.m"
static void MR_CALL 
make__util__worker_loop_11_p_0(
#line 505 "make.util.m"
  MR_Word make__util__TypeInfo_for_T_39,
#line 505 "make.util.m"
  MR_Word make__util__TypeInfo_for_Info_40,
#line 505 "make.util.m"
  MR_Word make__util__Globals_12,
#line 505 "make.util.m"
  MR_Word make__util__KeepGoing_13,
#line 505 "make.util.m"
  MR_Word make__util__MakeTarget_14,
#line 505 "make.util.m"
  MR_Word make__util__Targets_15,
#line 505 "make.util.m"
  MR_Box make__util__JobCtl_16,
#line 505 "make.util.m"
  MR_Word make__util__STATE_VARIABLE_Success_0_23,
#line 505 "make.util.m"
  MR_Word * make__util__STATE_VARIABLE_Success_24,
#line 505 "make.util.m"
  MR_Box make__util__STATE_VARIABLE_Info_0_25,
#line 505 "make.util.m"
  MR_Box * make__util__STATE_VARIABLE_Info_26)
#line 505 "make.util.m"
{
#line 511 "make.util.m"
  while (MR_TRUE)
#line 511 "make.util.m"
    {
#line 511 "make.util.m"
      /* tailcall optimized into a loop */
#line 511 "make.util.m"
      {
#line 511 "make.util.m"
        MR_bool make__util__succeeded;
#line 511 "make.util.m"
        MR_Integer make__util__TaskNumber_20;

#line 512 "make.util.m"
        {
#line 512 "make.util.m"
          make__util__accept_task_4_p_0(make__util__JobCtl_16, &make__util__TaskNumber_20);
        }
#line 513 "make.util.m"
        make__util__succeeded = (make__util__TaskNumber_20 >= (MR_Integer) 0);
#line 526 "make.util.m"
        if (make__util__succeeded)
#line 514 "make.util.m"
          {
#line 514 "make.util.m"
            MR_Box make__util__Target_21;
#line 514 "make.util.m"
            MR_Word make__util__TargetSuccess_22;
#line 514 "make.util.m"
            MR_Box make__util__STATE_VARIABLE_Info_31_31;
#line 514 "make.util.m"
            MR_Word make__util__STATE_VARIABLE_Success_34_34;
#line 515 "make.util.m"
            void MR_CALL (* make__util__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
#line 515 "make.util.m"
            MR_Box make__util__conv2_TargetSuccess_22;
#line 515 "make.util.m"
            MR_Box make__util__conv1_STATE_VARIABLE_IO_32_32;

#line 514 "make.util.m"
            {
#line 514 "make.util.m"
              make__util__Target_21 = mercury__list__det_index0_2_f_0(make__util__TypeInfo_for_T_39, make__util__Targets_15, make__util__TaskNumber_20);
            }
#line 515 "make.util.m"
            make__util__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), make__util__MakeTarget_14, (MR_Integer) 1)));
#line 515 "make.util.m"
            {
#line 515 "make.util.m"
              make__util__func_0(((MR_Box) make__util__MakeTarget_14), ((MR_Box) (make__util__Globals_12)), make__util__Target_21, &make__util__conv2_TargetSuccess_22, make__util__STATE_VARIABLE_Info_0_25, &make__util__STATE_VARIABLE_Info_31_31, ((MR_Box) ((MR_Integer) 0)), &make__util__conv1_STATE_VARIABLE_IO_32_32);
            }
#line 515 "make.util.m"
            make__util__TargetSuccess_22 = ((MR_Word) make__util__conv2_TargetSuccess_22);
#line 519 "make.util.m"
#line 519 "make.util.m"
            switch (make__util__TargetSuccess_22) {
#line 519 "make.util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 519 "make.util.m"
              case (MR_Integer) 0:
#line 520 "make.util.m"
                {
#line 521 "make.util.m"
                  {
#line 521 "make.util.m"
                    make__util__mark_task_error_5_p_0(make__util__JobCtl_16, make__util__TaskNumber_20, make__util__KeepGoing_13);
                  }
#line 522 "make.util.m"
                  make__util__STATE_VARIABLE_Success_34_34 = (MR_Integer) 0;
#line 520 "make.util.m"
                }
#line 519 "make.util.m"
                break;
#line 519 "make.util.m"
              case (MR_Integer) 1:
#line 517 "make.util.m"
                {
#line 518 "make.util.m"
                  {
#line 518 "make.util.m"
                    make__util__mark_task_done_4_p_0(make__util__JobCtl_16, make__util__TaskNumber_20);
                  }
#line 517 "make.util.m"
                  make__util__STATE_VARIABLE_Success_34_34 = make__util__STATE_VARIABLE_Success_0_23;
#line 517 "make.util.m"
                }
#line 519 "make.util.m"
                break;
#line 519 "make.util.m"
            }
#line 524 "make.util.m"
            /* direct tailcall eliminated */
#line 524 "make.util.m"
            {
#line 524 "make.util.m"
              MR_Word make__util__STATE_VARIABLE_Success_0__tmp_copy_23 = make__util__STATE_VARIABLE_Success_34_34;
#line 524 "make.util.m"
              MR_Box make__util__STATE_VARIABLE_Info_0__tmp_copy_25 = make__util__STATE_VARIABLE_Info_31_31;

#line 524 "make.util.m"
              make__util__STATE_VARIABLE_Info_0_25 = make__util__STATE_VARIABLE_Info_0__tmp_copy_25;
#line 524 "make.util.m"
              make__util__STATE_VARIABLE_Success_0_23 = make__util__STATE_VARIABLE_Success_0__tmp_copy_23;
#line 524 "make.util.m"
            }
#line 524 "make.util.m"
            continue;
#line 514 "make.util.m"
          }
#line 526 "make.util.m"
        else
#line 528 "make.util.m"
          {
#line 528 "make.util.m"
            *make__util__STATE_VARIABLE_Info_26 = make__util__STATE_VARIABLE_Info_0_25;
#line 528 "make.util.m"
            *make__util__STATE_VARIABLE_Success_24 = make__util__STATE_VARIABLE_Success_0_23;
#line 528 "make.util.m"
          }
#line 511 "make.util.m"
      }
#line 511 "make.util.m"
      break;
#line 511 "make.util.m"
    }
#line 505 "make.util.m"
}

#line 503 "make.util.m"
static void MR_CALL 
make__util__child_worker_9_p_0_2(
#line 503 "make.util.m"
  MR_Box make__util__closure_arg,
#line 503 "make.util.m"
  MR_Box make__util__wrapper_arg_1,
#line 503 "make.util.m"
  MR_Box * make__util__wrapper_arg_2,
#line 503 "make.util.m"
  MR_Box make__util__wrapper_arg_3,
#line 503 "make.util.m"
  MR_Box * make__util__wrapper_arg_4)
#line 503 "make.util.m"
{
#line 503 "make.util.m"
  {
#line 503 "make.util.m"
    MR_Box make__util__closure = make__util__closure_arg;

#line 503 "make.util.m"
    {
#line 503 "make.util.m"
      make__util__worker_loop_signal_cleanup_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 3))), ((MR_Box) (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 5))), make__util__wrapper_arg_1, make__util__wrapper_arg_2);
#line 503 "make.util.m"
      return;
    }
#line 503 "make.util.m"
  }
#line 503 "make.util.m"
}

#line 502 "make.util.m"
static void MR_CALL 
make__util__child_worker_9_p_0_1(
#line 502 "make.util.m"
  MR_Box make__util__closure_arg,
#line 502 "make.util.m"
  MR_Box * make__util__wrapper_arg_1,
#line 502 "make.util.m"
  MR_Box make__util__wrapper_arg_2,
#line 502 "make.util.m"
  MR_Box * make__util__wrapper_arg_3,
#line 502 "make.util.m"
  MR_Box make__util__wrapper_arg_4,
#line 502 "make.util.m"
  MR_Box * make__util__wrapper_arg_5)
#line 502 "make.util.m"
{
#line 502 "make.util.m"
  {
#line 502 "make.util.m"
    MR_Box make__util__closure = make__util__closure_arg;
#line 502 "make.util.m"
    MR_Word make__util__conv0_STATE_VARIABLE_Success_24;

#line 502 "make.util.m"
    {
#line 502 "make.util.m"
      make__util__worker_loop_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 8))), ((MR_Box) (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 9))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 10))), &make__util__conv0_STATE_VARIABLE_Success_24, make__util__wrapper_arg_2, make__util__wrapper_arg_3);
    }
#line 502 "make.util.m"
    *make__util__wrapper_arg_1 = ((MR_Box) (make__util__conv0_STATE_VARIABLE_Success_24));
#line 502 "make.util.m"
  }
#line 502 "make.util.m"
}

#line 494 "make.util.m"
static void MR_CALL 
make__util__child_worker_9_p_0(
#line 494 "make.util.m"
  MR_Word make__util__TypeInfo_for_T_28,
#line 494 "make.util.m"
  MR_Word make__util__TypeInfo_for_Info_29,
#line 494 "make.util.m"
  MR_Word make__util__Globals_10,
#line 494 "make.util.m"
  MR_Word make__util__KeepGoing_11,
#line 494 "make.util.m"
  MR_Word make__util__MakeTarget_12,
#line 494 "make.util.m"
  MR_Word make__util__Targets_13,
#line 494 "make.util.m"
  MR_Box make__util__JobCtl_14,
#line 494 "make.util.m"
  MR_Box make__util__Info0_15,
#line 494 "make.util.m"
  MR_Word * make__util__Success_16)
#line 494 "make.util.m"
{
#line 499 "make.util.m"
  {
#line 499 "make.util.m"
    MR_bool make__util__succeeded;
#line 499 "make.util.m"
    MR_Word make__util__VeryVerbose_18;
#line 499 "make.util.m"
    MR_Word make__util__V_23_23;
#line 499 "make.util.m"
    MR_Word make__util__V_24_24;
#line 501 "make.util.m"
    MR_Box make__util___Info_19;

#line 500 "make.util.m"
    {
#line 500 "make.util.m"
      libs__globals__lookup_bool_option_3_p_0(make__util__Globals_10, (MR_Integer) 46, &make__util__VeryVerbose_18);
    }
#line 502 "make.util.m"
    {
#line 502 "make.util.m"
      make__util__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 502 "make.util.m"
      MR_hl_field(MR_mktag(0), make__util__V_23_23, 0) = ((MR_Box) (&make__util_scalar_common_10[0]));
#line 502 "make.util.m"
      MR_hl_field(MR_mktag(0), make__util__V_23_23, 1) = ((MR_Box) (make__util__child_worker_9_p_0_1));
#line 502 "make.util.m"
      MR_hl_field(MR_mktag(0), make__util__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 502 "make.util.m"
      MR_hl_field(MR_mktag(0), make__util__V_23_23, 3) = ((MR_Box) (make__util__TypeInfo_for_T_28));
#line 502 "make.util.m"
      MR_hl_field(MR_mktag(0), make__util__V_23_23, 4) = ((MR_Box) (make__util__TypeInfo_for_Info_29));
#line 502 "make.util.m"
      MR_hl_field(MR_mktag(0), make__util__V_23_23, 5) = ((MR_Box) (make__util__Globals_10));
#line 502 "make.util.m"
      MR_hl_field(MR_mktag(0), make__util__V_23_23, 6) = ((MR_Box) (make__util__KeepGoing_11));
#line 502 "make.util.m"
      MR_hl_field(MR_mktag(0), make__util__V_23_23, 7) = ((MR_Box) (make__util__MakeTarget_12));
#line 502 "make.util.m"
      MR_hl_field(MR_mktag(0), make__util__V_23_23, 8) = ((MR_Box) (make__util__Targets_13));
#line 502 "make.util.m"
      MR_hl_field(MR_mktag(0), make__util__V_23_23, 9) = ((MR_Box) (make__util__JobCtl_14));
#line 502 "make.util.m"
      MR_hl_field(MR_mktag(0), make__util__V_23_23, 10) = ((MR_Box) ((MR_Integer) 1));
#line 502 "make.util.m"
    }
#line 503 "make.util.m"
    {
#line 503 "make.util.m"
      make__util__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 503 "make.util.m"
      MR_hl_field(MR_mktag(0), make__util__V_24_24, 0) = ((MR_Box) (&make__util_scalar_common_11[0]));
#line 503 "make.util.m"
      MR_hl_field(MR_mktag(0), make__util__V_24_24, 1) = ((MR_Box) (make__util__child_worker_9_p_0_2));
#line 503 "make.util.m"
      MR_hl_field(MR_mktag(0), make__util__V_24_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 503 "make.util.m"
      MR_hl_field(MR_mktag(0), make__util__V_24_24, 3) = ((MR_Box) (make__util__TypeInfo_for_Info_29));
#line 503 "make.util.m"
      MR_hl_field(MR_mktag(0), make__util__V_24_24, 4) = ((MR_Box) (make__util__JobCtl_14));
#line 503 "make.util.m"
      MR_hl_field(MR_mktag(0), make__util__V_24_24, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 503 "make.util.m"
    }
#line 501 "make.util.m"
    {
#line 501 "make.util.m"
      libs__process_util__build_with_check_for_interrupt_8_p_0(make__util__TypeInfo_for_Info_29, make__util__VeryVerbose_18, make__util__V_23_23, make__util__V_24_24, make__util__Success_16, make__util__Info0_15, &make__util___Info_19);
    }
#line 499 "make.util.m"
  }
#line 494 "make.util.m"
}

#line 469 "make.util.m"
static void MR_CALL 
make__util__foldl2_maybe_stop_at_error_parallel_processes_10_p_0_4(
#line 469 "make.util.m"
  MR_Box make__util__closure_arg,
#line 469 "make.util.m"
  MR_Box make__util__wrapper_arg_1,
#line 469 "make.util.m"
  MR_Box make__util__wrapper_arg_2,
#line 469 "make.util.m"
  MR_Box * make__util__wrapper_arg_3,
#line 469 "make.util.m"
  MR_Box make__util__wrapper_arg_4,
#line 469 "make.util.m"
  MR_Box * make__util__wrapper_arg_5)
#line 469 "make.util.m"
{
#line 469 "make.util.m"
  {
#line 469 "make.util.m"
    MR_Box make__util__closure = make__util__closure_arg;
#line 469 "make.util.m"
    MR_Word make__util__conv7_STATE_VARIABLE_Success_11;

#line 469 "make.util.m"
    {
#line 469 "make.util.m"
      make__util__reap_worker_process_5_p_0(((MR_Integer) make__util__wrapper_arg_1), ((MR_Word) make__util__wrapper_arg_2), &make__util__conv7_STATE_VARIABLE_Success_11);
    }
#line 469 "make.util.m"
    *make__util__wrapper_arg_3 = ((MR_Box) (make__util__conv7_STATE_VARIABLE_Success_11));
#line 469 "make.util.m"
  }
#line 469 "make.util.m"
}

#line 468 "make.util.m"
static void MR_CALL 
make__util__foldl2_maybe_stop_at_error_parallel_processes_10_p_0_3(
#line 468 "make.util.m"
  MR_Box make__util__closure_arg,
#line 468 "make.util.m"
  MR_Box make__util__wrapper_arg_1,
#line 468 "make.util.m"
  MR_Box * make__util__wrapper_arg_2,
#line 468 "make.util.m"
  MR_Box make__util__wrapper_arg_3,
#line 468 "make.util.m"
  MR_Box * make__util__wrapper_arg_4)
#line 468 "make.util.m"
{
#line 468 "make.util.m"
  {
#line 468 "make.util.m"
    MR_Box make__util__closure = make__util__closure_arg;
#line 468 "make.util.m"
    MR_Word make__util__conv5_HeadVar__4_105;

#line 468 "make.util.m"
    {
#line 468 "make.util.m"
      make__util__IntroducedFrom__pred__foldl2_maybe_stop_at_error_parallel_processes__468__1_6_p_0(((MR_Box) (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 4))), ((MR_Word) make__util__wrapper_arg_1), &make__util__conv5_HeadVar__4_105);
    }
#line 468 "make.util.m"
    *make__util__wrapper_arg_2 = ((MR_Box) (make__util__conv5_HeadVar__4_105));
#line 468 "make.util.m"
  }
#line 468 "make.util.m"
}

#line 467 "make.util.m"
static void MR_CALL 
make__util__foldl2_maybe_stop_at_error_parallel_processes_10_p_0_2(
#line 467 "make.util.m"
  MR_Box make__util__closure_arg,
#line 467 "make.util.m"
  MR_Box * make__util__wrapper_arg_1,
#line 467 "make.util.m"
  MR_Box make__util__wrapper_arg_2,
#line 467 "make.util.m"
  MR_Box * make__util__wrapper_arg_3,
#line 467 "make.util.m"
  MR_Box make__util__wrapper_arg_4,
#line 467 "make.util.m"
  MR_Box * make__util__wrapper_arg_5)
#line 467 "make.util.m"
{
#line 467 "make.util.m"
  {
#line 467 "make.util.m"
    MR_Box make__util__closure = make__util__closure_arg;
#line 467 "make.util.m"
    MR_Word make__util__conv4_HeadVar__8_98;
#line 467 "make.util.m"
    MR_Word make__util__conv3_HeadVar__10_100;

#line 467 "make.util.m"
    {
#line 467 "make.util.m"
      make__util__IntroducedFrom__pred__foldl2_maybe_stop_at_error_parallel_processes__467__1_12_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 7))), ((MR_Box) (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 9))), &make__util__conv4_HeadVar__8_98, ((MR_Word) make__util__wrapper_arg_2), &make__util__conv3_HeadVar__10_100);
    }
#line 467 "make.util.m"
    *make__util__wrapper_arg_1 = ((MR_Box) (make__util__conv4_HeadVar__8_98));
#line 467 "make.util.m"
    *make__util__wrapper_arg_3 = ((MR_Box) (make__util__conv3_HeadVar__10_100));
#line 467 "make.util.m"
  }
#line 467 "make.util.m"
}

#line 462 "make.util.m"
static void MR_CALL 
make__util__foldl2_maybe_stop_at_error_parallel_processes_10_p_0_1(
#line 462 "make.util.m"
  MR_Box make__util__closure_arg,
#line 462 "make.util.m"
  MR_Box make__util__wrapper_arg_1,
#line 462 "make.util.m"
  MR_Box make__util__wrapper_arg_2,
#line 462 "make.util.m"
  MR_Box * make__util__wrapper_arg_3,
#line 462 "make.util.m"
  MR_Box make__util__wrapper_arg_4,
#line 462 "make.util.m"
  MR_Box * make__util__wrapper_arg_5)
#line 462 "make.util.m"
{
#line 462 "make.util.m"
  {
#line 462 "make.util.m"
    MR_Box make__util__closure = make__util__closure_arg;
#line 462 "make.util.m"
    MR_Word make__util__conv0_HeadVar__10_91;

#line 462 "make.util.m"
    {
#line 462 "make.util.m"
      make__util__IntroducedFrom__pred__foldl2_maybe_stop_at_error_parallel_processes__462__1_12_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 7))), ((MR_Box) (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 9))), ((MR_Integer) make__util__wrapper_arg_1), ((MR_Word) make__util__wrapper_arg_2), &make__util__conv0_HeadVar__10_91);
    }
#line 462 "make.util.m"
    *make__util__wrapper_arg_3 = ((MR_Box) (make__util__conv0_HeadVar__10_91));
#line 462 "make.util.m"
  }
#line 462 "make.util.m"
}

#line 449 "make.util.m"
static void MR_CALL 
make__util__foldl2_maybe_stop_at_error_parallel_processes_10_p_0(
#line 449 "make.util.m"
  MR_Word make__util__TypeInfo_for_T_88,
#line 449 "make.util.m"
  MR_Word make__util__KeepGoing_11,
#line 449 "make.util.m"
  MR_Integer make__util__Jobs_12,
#line 449 "make.util.m"
  MR_Word make__util__MakeTarget_13,
#line 449 "make.util.m"
  MR_Word make__util__Globals_14,
#line 449 "make.util.m"
  MR_Word make__util__Targets_15,
#line 449 "make.util.m"
  MR_Word * make__util__Success_16,
#line 449 "make.util.m"
  MR_Word make__util__STATE_VARIABLE_Info_0_25,
#line 449 "make.util.m"
  MR_Word * make__util__STATE_VARIABLE_Info_26)
#line 449 "make.util.m"
{
#line 455 "make.util.m"
  {
#line 455 "make.util.m"
    MR_bool make__util__succeeded;
#line 455 "make.util.m"
    MR_Integer make__util__TotalTasks_19;
#line 455 "make.util.m"
    MR_Word make__util__MaybeJobCtl_20;

#line 456 "make.util.m"
    {
#line 456 "make.util.m"
      make__util__TotalTasks_19 = mercury__list__length_1_f_0(make__util__TypeInfo_for_T_88, make__util__Targets_15);
    }
#line 457 "make.util.m"
    {
#line 457 "make.util.m"
      make__util__create_job_ctl_4_p_0(make__util__TotalTasks_19, &make__util__MaybeJobCtl_20);
    }
#line 472 "make.util.m"
    if ((make__util__MaybeJobCtl_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 473 "make.util.m"
      {
#line 474 "make.util.m"
        *make__util__Success_16 = (MR_Integer) 0;
#line 473 "make.util.m"
        *make__util__STATE_VARIABLE_Info_26 = make__util__STATE_VARIABLE_Info_0_25;
#line 473 "make.util.m"
      }
#line 472 "make.util.m"
    else
#line 459 "make.util.m"
      {
#line 459 "make.util.m"
        MR_Word make__util__TypeCtorInfo_95_95;
#line 459 "make.util.m"
        MR_Word make__util__TypeCtorInfo_97_97;
#line 459 "make.util.m"
        MR_Box make__util__JobCtl_21 = ((MR_Box) (MR_hl_field(MR_mktag(1), make__util__MaybeJobCtl_20, (MR_Integer) 0)));
#line 459 "make.util.m"
        MR_Word make__util__Pids_22;
#line 459 "make.util.m"
        MR_Word make__util__VeryVerbose_23;
#line 459 "make.util.m"
        MR_Word make__util__Success0_24;
#line 459 "make.util.m"
        MR_Word make__util__STATE_VARIABLE_Info_30_30;
#line 459 "make.util.m"
        MR_Word make__util__V_32_32;
#line 459 "make.util.m"
        MR_Word make__util__V_33_33;
#line 459 "make.util.m"
        MR_Word make__util__V_38_38;
#line 459 "make.util.m"
        MR_Word make__util__V_39_39;
#line 459 "make.util.m"
        MR_Word make__util__STATE_VARIABLE_Info_40_40;
#line 460 "make.util.m"
        MR_Word make__util__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_25, (MR_Integer) 0)));
#line 460 "make.util.m"
        MR_Word make__util__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_25, (MR_Integer) 1)));
#line 460 "make.util.m"
        MR_Word make__util__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_25, (MR_Integer) 2)));
#line 460 "make.util.m"
        MR_Word make__util__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_25, (MR_Integer) 3)));
#line 460 "make.util.m"
        MR_Word make__util__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_25, (MR_Integer) 4)));
#line 460 "make.util.m"
        MR_Word make__util__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_25, (MR_Integer) 5)));
#line 460 "make.util.m"
        MR_Word make__util__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_25, (MR_Integer) 6)));
#line 460 "make.util.m"
        MR_Word make__util__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_25, (MR_Integer) 7)));
#line 460 "make.util.m"
        MR_Word make__util__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_25, (MR_Integer) 8)));
#line 460 "make.util.m"
        MR_Word make__util__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_25, (MR_Integer) 9)));
#line 460 "make.util.m"
        MR_Word make__util__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_25, (MR_Integer) 10)));
#line 460 "make.util.m"
        MR_Word make__util__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_25, (MR_Integer) 11)));
#line 460 "make.util.m"
        MR_Word make__util__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_25, (MR_Integer) 12)));
#line 460 "make.util.m"
        MR_Word make__util__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_25, (MR_Integer) 13)));
#line 460 "make.util.m"
        MR_Word make__util__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_25, (MR_Integer) 14)));
#line 460 "make.util.m"
        MR_Word make__util__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_25, (MR_Integer) 15)));
#line 460 "make.util.m"
        MR_Word make__util__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_25, (MR_Integer) 16)));
#line 460 "make.util.m"
        MR_Word make__util__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_25, (MR_Integer) 17)));
#line 460 "make.util.m"
        MR_Integer make__util__V_66_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_25, (MR_Integer) 18)));
#line 460 "make.util.m"
        MR_Word make__util__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_25, (MR_Integer) 19)));
#line 461 "make.util.m"
        MR_Box make__util__conv2_Pids_22;
#line 461 "make.util.m"
        MR_Box make__util__conv1_STATE_VARIABLE_IO_35_35;
#line 466 "make.util.m"
        MR_Box make__util__conv6_STATE_VARIABLE_Info_40_40;
#line 469 "make.util.m"
        MR_Box make__util__conv9_Success_16;
#line 469 "make.util.m"
        MR_Box make__util__conv8_STATE_VARIABLE_IO_44_44;
#line 470 "make.util.m"
        MR_Word make__util__V_68_68;
#line 470 "make.util.m"
        MR_Word make__util__V_69_69;
#line 470 "make.util.m"
        MR_Word make__util__V_70_70;
#line 470 "make.util.m"
        MR_Word make__util__V_71_71;
#line 470 "make.util.m"
        MR_Word make__util__V_72_72;
#line 470 "make.util.m"
        MR_Word make__util__V_73_73;
#line 470 "make.util.m"
        MR_Word make__util__V_74_74;
#line 470 "make.util.m"
        MR_Word make__util__V_75_75;
#line 470 "make.util.m"
        MR_Word make__util__V_76_76;
#line 470 "make.util.m"
        MR_Word make__util__V_77_77;
#line 470 "make.util.m"
        MR_Word make__util__V_78_78;
#line 470 "make.util.m"
        MR_Word make__util__V_79_79;
#line 470 "make.util.m"
        MR_Word make__util__V_80_80;
#line 470 "make.util.m"
        MR_Word make__util__V_81_81;
#line 470 "make.util.m"
        MR_Word make__util__V_82_82;
#line 470 "make.util.m"
        MR_Word make__util__V_83_83;
#line 470 "make.util.m"
        MR_Word make__util__V_84_84;
#line 470 "make.util.m"
        MR_Word make__util__V_85_85;
#line 470 "make.util.m"
        MR_Integer make__util__V_86_86;
#line 470 "make.util.m"
        MR_Word make__util__V_87_87;

#line 460 "make.util.m"
        {
#line 460 "make.util.m"
          make__util__STATE_VARIABLE_Info_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
#line 460 "make.util.m"
          MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_30_30, 0) = ((MR_Box) (make__util__V_48_48));
#line 460 "make.util.m"
          MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_30_30, 1) = ((MR_Box) (make__util__V_49_49));
#line 460 "make.util.m"
          MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_30_30, 2) = ((MR_Box) (make__util__V_50_50));
#line 460 "make.util.m"
          MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_30_30, 3) = ((MR_Box) (make__util__V_51_51));
#line 460 "make.util.m"
          MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_30_30, 4) = ((MR_Box) (make__util__V_52_52));
#line 460 "make.util.m"
          MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_30_30, 5) = ((MR_Box) (make__util__V_53_53));
#line 460 "make.util.m"
          MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_30_30, 6) = ((MR_Box) (make__util__V_54_54));
#line 460 "make.util.m"
          MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_30_30, 7) = ((MR_Box) (make__util__V_55_55));
#line 460 "make.util.m"
          MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_30_30, 8) = ((MR_Box) (make__util__V_56_56));
#line 460 "make.util.m"
          MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_30_30, 9) = ((MR_Box) (make__util__V_57_57));
#line 460 "make.util.m"
          MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_30_30, 10) = ((MR_Box) (make__util__V_58_58));
#line 460 "make.util.m"
          MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_30_30, 11) = ((MR_Box) (make__util__V_59_59));
#line 460 "make.util.m"
          MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_30_30, 12) = ((MR_Box) (make__util__V_60_60));
#line 460 "make.util.m"
          MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_30_30, 13) = ((MR_Box) (make__util__V_61_61));
#line 460 "make.util.m"
          MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_30_30, 14) = ((MR_Box) (make__util__V_62_62));
#line 460 "make.util.m"
          MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_30_30, 15) = ((MR_Box) (make__util__V_63_63));
#line 460 "make.util.m"
          MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_30_30, 16) = ((MR_Box) (make__util__V_64_64));
#line 460 "make.util.m"
          MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_30_30, 17) = ((MR_Box) (make__util__V_65_65));
#line 460 "make.util.m"
          MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_30_30, 18) = ((MR_Box) (make__util__V_66_66));
#line 460 "make.util.m"
          MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_30_30, 19) = ((MR_Box) (make__util__MaybeJobCtl_20));
#line 460 "make.util.m"
        }
#line 462 "make.util.m"
        {
#line 462 "make.util.m"
          make__util__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 462 "make.util.m"
          MR_hl_field(MR_mktag(0), make__util__V_32_32, 0) = ((MR_Box) (&make__util_scalar_common_6[0]));
#line 462 "make.util.m"
          MR_hl_field(MR_mktag(0), make__util__V_32_32, 1) = ((MR_Box) (make__util__foldl2_maybe_stop_at_error_parallel_processes_10_p_0_1));
#line 462 "make.util.m"
          MR_hl_field(MR_mktag(0), make__util__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 462 "make.util.m"
          MR_hl_field(MR_mktag(0), make__util__V_32_32, 3) = ((MR_Box) (make__util__TypeInfo_for_T_88));
#line 462 "make.util.m"
          MR_hl_field(MR_mktag(0), make__util__V_32_32, 4) = ((MR_Box) (make__util__KeepGoing_11));
#line 462 "make.util.m"
          MR_hl_field(MR_mktag(0), make__util__V_32_32, 5) = ((MR_Box) (make__util__MakeTarget_13));
#line 462 "make.util.m"
          MR_hl_field(MR_mktag(0), make__util__V_32_32, 6) = ((MR_Box) (make__util__Globals_14));
#line 462 "make.util.m"
          MR_hl_field(MR_mktag(0), make__util__V_32_32, 7) = ((MR_Box) (make__util__Targets_15));
#line 462 "make.util.m"
          MR_hl_field(MR_mktag(0), make__util__V_32_32, 8) = ((MR_Box) (make__util__JobCtl_21));
#line 462 "make.util.m"
          MR_hl_field(MR_mktag(0), make__util__V_32_32, 9) = ((MR_Box) (make__util__STATE_VARIABLE_Info_30_30));
#line 462 "make.util.m"
        }
#line 464 "make.util.m"
        {
#line 464 "make.util.m"
          make__util__V_33_33 = mercury__list__f_46_46_2_f_0((MR_Integer) 2, make__util__Jobs_12);
        }
#line 9367 "make.util.c"
        make__util__TypeCtorInfo_95_95 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 9369 "make.util.c"
        make__util__TypeCtorInfo_97_97 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 461 "make.util.m"
        {
#line 461 "make.util.m"
          mercury__list__foldl2_6_p_2(make__util__TypeCtorInfo_95_95, (MR_Word) &make__util_scalar_common_2[0], make__util__TypeCtorInfo_97_97, make__util__V_32_32, make__util__V_33_33, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &make__util__conv2_Pids_22, ((MR_Box) ((MR_Integer) 0)), &make__util__conv1_STATE_VARIABLE_IO_35_35);
        }
#line 461 "make.util.m"
        make__util__Pids_22 = ((MR_Word) make__util__conv2_Pids_22);
#line 465 "make.util.m"
        {
#line 465 "make.util.m"
          libs__globals__lookup_bool_option_3_p_0(make__util__Globals_14, (MR_Integer) 46, &make__util__VeryVerbose_23);
        }
#line 467 "make.util.m"
        {
#line 467 "make.util.m"
          make__util__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 467 "make.util.m"
          MR_hl_field(MR_mktag(0), make__util__V_38_38, 0) = ((MR_Box) (&make__util_scalar_common_6[1]));
#line 467 "make.util.m"
          MR_hl_field(MR_mktag(0), make__util__V_38_38, 1) = ((MR_Box) (make__util__foldl2_maybe_stop_at_error_parallel_processes_10_p_0_2));
#line 467 "make.util.m"
          MR_hl_field(MR_mktag(0), make__util__V_38_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 467 "make.util.m"
          MR_hl_field(MR_mktag(0), make__util__V_38_38, 3) = ((MR_Box) (make__util__TypeInfo_for_T_88));
#line 467 "make.util.m"
          MR_hl_field(MR_mktag(0), make__util__V_38_38, 4) = ((MR_Box) (make__util__KeepGoing_11));
#line 467 "make.util.m"
          MR_hl_field(MR_mktag(0), make__util__V_38_38, 5) = ((MR_Box) (make__util__MakeTarget_13));
#line 467 "make.util.m"
          MR_hl_field(MR_mktag(0), make__util__V_38_38, 6) = ((MR_Box) (make__util__Globals_14));
#line 467 "make.util.m"
          MR_hl_field(MR_mktag(0), make__util__V_38_38, 7) = ((MR_Box) (make__util__Targets_15));
#line 467 "make.util.m"
          MR_hl_field(MR_mktag(0), make__util__V_38_38, 8) = ((MR_Box) (make__util__JobCtl_21));
#line 467 "make.util.m"
          MR_hl_field(MR_mktag(0), make__util__V_38_38, 9) = ((MR_Box) ((MR_Integer) 1));
#line 467 "make.util.m"
        }
#line 468 "make.util.m"
        {
#line 468 "make.util.m"
          make__util__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 468 "make.util.m"
          MR_hl_field(MR_mktag(0), make__util__V_39_39, 0) = ((MR_Box) (&make__util_scalar_common_7[0]));
#line 468 "make.util.m"
          MR_hl_field(MR_mktag(0), make__util__V_39_39, 1) = ((MR_Box) (make__util__foldl2_maybe_stop_at_error_parallel_processes_10_p_0_3));
#line 468 "make.util.m"
          MR_hl_field(MR_mktag(0), make__util__V_39_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 468 "make.util.m"
          MR_hl_field(MR_mktag(0), make__util__V_39_39, 3) = ((MR_Box) (make__util__JobCtl_21));
#line 468 "make.util.m"
          MR_hl_field(MR_mktag(0), make__util__V_39_39, 4) = ((MR_Box) (make__util__Pids_22));
#line 468 "make.util.m"
        }
#line 466 "make.util.m"
        {
#line 466 "make.util.m"
          libs__process_util__build_with_check_for_interrupt_8_p_0((MR_Word) &make__make__type_ctor_info_make_info_0, make__util__VeryVerbose_23, make__util__V_38_38, make__util__V_39_39, &make__util__Success0_24, ((MR_Box) (make__util__STATE_VARIABLE_Info_30_30)), &make__util__conv6_STATE_VARIABLE_Info_40_40);
        }
#line 466 "make.util.m"
        make__util__STATE_VARIABLE_Info_40_40 = ((MR_Word) make__util__conv6_STATE_VARIABLE_Info_40_40);
#line 469 "make.util.m"
        {
#line 469 "make.util.m"
          mercury__list__foldl2_6_p_2(make__util__TypeCtorInfo_95_95, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, make__util__TypeCtorInfo_97_97, (MR_Word) &make__util_scalar_common_1[3], make__util__Pids_22, ((MR_Box) (make__util__Success0_24)), &make__util__conv9_Success_16, ((MR_Box) ((MR_Integer) 0)), &make__util__conv8_STATE_VARIABLE_IO_44_44);
        }
#line 469 "make.util.m"
        *make__util__Success_16 = ((MR_Word) make__util__conv9_Success_16);
#line 470 "make.util.m"
        make__util__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_40_40, (MR_Integer) 0)));
#line 470 "make.util.m"
        make__util__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_40_40, (MR_Integer) 1)));
#line 470 "make.util.m"
        make__util__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_40_40, (MR_Integer) 2)));
#line 470 "make.util.m"
        make__util__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_40_40, (MR_Integer) 3)));
#line 470 "make.util.m"
        make__util__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_40_40, (MR_Integer) 4)));
#line 470 "make.util.m"
        make__util__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_40_40, (MR_Integer) 5)));
#line 470 "make.util.m"
        make__util__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_40_40, (MR_Integer) 6)));
#line 470 "make.util.m"
        make__util__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_40_40, (MR_Integer) 7)));
#line 470 "make.util.m"
        make__util__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_40_40, (MR_Integer) 8)));
#line 470 "make.util.m"
        make__util__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_40_40, (MR_Integer) 9)));
#line 470 "make.util.m"
        make__util__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_40_40, (MR_Integer) 10)));
#line 470 "make.util.m"
        make__util__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_40_40, (MR_Integer) 11)));
#line 470 "make.util.m"
        make__util__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_40_40, (MR_Integer) 12)));
#line 470 "make.util.m"
        make__util__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_40_40, (MR_Integer) 13)));
#line 470 "make.util.m"
        make__util__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_40_40, (MR_Integer) 14)));
#line 470 "make.util.m"
        make__util__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_40_40, (MR_Integer) 15)));
#line 470 "make.util.m"
        make__util__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_40_40, (MR_Integer) 16)));
#line 470 "make.util.m"
        make__util__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_40_40, (MR_Integer) 17)));
#line 470 "make.util.m"
        make__util__V_86_86 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_40_40, (MR_Integer) 18)));
#line 470 "make.util.m"
        make__util__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_40_40, (MR_Integer) 19)));
#line 470 "make.util.m"
        {
#line 470 "make.util.m"
          MR_Word base;
#line 470 "make.util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
#line 470 "make.util.m"
          *make__util__STATE_VARIABLE_Info_26 = base;
#line 470 "make.util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__util__V_68_68));
#line 470 "make.util.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__util__V_69_69));
#line 470 "make.util.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__util__V_70_70));
#line 470 "make.util.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (make__util__V_71_71));
#line 470 "make.util.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (make__util__V_72_72));
#line 470 "make.util.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (make__util__V_73_73));
#line 470 "make.util.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (make__util__V_74_74));
#line 470 "make.util.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (make__util__V_75_75));
#line 470 "make.util.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (make__util__V_76_76));
#line 470 "make.util.m"
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (make__util__V_77_77));
#line 470 "make.util.m"
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (make__util__V_78_78));
#line 470 "make.util.m"
          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (make__util__V_79_79));
#line 470 "make.util.m"
          MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (make__util__V_80_80));
#line 470 "make.util.m"
          MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (make__util__V_81_81));
#line 470 "make.util.m"
          MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (make__util__V_82_82));
#line 470 "make.util.m"
          MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (make__util__V_83_83));
#line 470 "make.util.m"
          MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (make__util__V_84_84));
#line 470 "make.util.m"
          MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (make__util__V_85_85));
#line 470 "make.util.m"
          MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (make__util__V_86_86));
#line 470 "make.util.m"
          MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 470 "make.util.m"
        }
#line 471 "make.util.m"
        {
#line 471 "make.util.m"
          make__util__destroy_job_ctl_3_p_0(make__util__JobCtl_21);
#line 471 "make.util.m"
          return;
        }
#line 459 "make.util.m"
      }
#line 455 "make.util.m"
  }
#line 449 "make.util.m"
}

#line 337 "make.util.m"
void MR_CALL 
make__util__dependency_file_hash_2_p_0(
#line 337 "make.util.m"
  MR_Word make__util__DepFile_3,
#line 337 "make.util.m"
  MR_Integer * make__util__Hash_4)
#line 337 "make.util.m"
{
#line 1917 "make.util.m"
  {
#line 1917 "make.util.m"
    MR_bool make__util__succeeded;

#line 1917 "make.util.m"
    if (((MR_tag((MR_Word) make__util__DepFile_3)) == (MR_mktag((MR_Integer) 1))))
#line 1920 "make.util.m"
      {
#line 1920 "make.util.m"
        MR_String make__util__FileName_6 = ((MR_String) (MR_hl_field(MR_mktag(1), make__util__DepFile_3, (MR_Integer) 0)));
#line 1920 "make.util.m"
        MR_Word make__util___MaybeOption_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__util__DepFile_3, (MR_Integer) 1)));

#line 1921 "make.util.m"
        {
#line 1921 "make.util.m"
          *make__util__Hash_4 = mercury__string__hash_1_f_0(make__util__FileName_6);
        }
#line 1920 "make.util.m"
      }
#line 1917 "make.util.m"
    else
#line 1917 "make.util.m"
      {
#line 1917 "make.util.m"
        MR_Word make__util__TargetFile_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__DepFile_3, (MR_Integer) 0)));
#line 1917 "make.util.m"
        MR_Word make__util__ModuleName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__TargetFile_5, (MR_Integer) 0)));
#line 1917 "make.util.m"
        MR_Word make__util__Type_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__TargetFile_5, (MR_Integer) 1)));
#line 1917 "make.util.m"
        MR_Integer make__util__Hash0_12;
#line 1917 "make.util.m"
        MR_Integer make__util__Hash1_13;
#line 1917 "make.util.m"
        MR_Integer make__util__H1_43;
#line 1917 "make.util.m"
        MR_Integer make__util__V_44_44;

#line 1907 "make.util.m"
        if (((MR_tag((MR_Word) make__util__ModuleName_10)) == (MR_mktag((MR_Integer) 1))))
#line 1910 "make.util.m"
          {
#line 1910 "make.util.m"
            MR_String make__util__String_18 = ((MR_String) (MR_hl_field(MR_mktag(1), make__util__ModuleName_10, (MR_Integer) 1)));
#line 1910 "make.util.m"
            MR_Word make__util___Qual_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__util__ModuleName_10, (MR_Integer) 0)));

#line 1912 "make.util.m"
            {
#line 1912 "make.util.m"
              make__util__Hash0_12 = mercury__string__hash_1_f_0(make__util__String_18);
            }
#line 1910 "make.util.m"
          }
#line 1907 "make.util.m"
        else
#line 1907 "make.util.m"
          {
#line 1907 "make.util.m"
            MR_String make__util__String_16 = ((MR_String) (MR_hl_field(MR_mktag(0), make__util__ModuleName_10, (MR_Integer) 0)));

#line 1908 "make.util.m"
            {
#line 1908 "make.util.m"
              make__util__Hash0_12 = mercury__string__hash_1_f_0(make__util__String_16);
            }
#line 1907 "make.util.m"
          }
#line 1936 "make.util.m"
#line 1936 "make.util.m"
        switch (MR_tag((MR_Word) make__util__Type_11)) {
#line 1936 "make.util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1936 "make.util.m"
          case (MR_Integer) 0:
#line 1936 "make.util.m"
#line 1936 "make.util.m"
            switch (MR_unmkbody(make__util__Type_11)) {
#line 1936 "make.util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1936 "make.util.m"
              case (MR_Integer) 0:
#line 1936 "make.util.m"
                make__util__Hash1_13 = (MR_Integer) 1;
#line 1936 "make.util.m"
                break;
#line 1936 "make.util.m"
              case (MR_Integer) 1:
#line 1939 "make.util.m"
                make__util__Hash1_13 = (MR_Integer) 2;
#line 1936 "make.util.m"
                break;
#line 1936 "make.util.m"
              case (MR_Integer) 2:
#line 1942 "make.util.m"
                make__util__Hash1_13 = (MR_Integer) 3;
#line 1936 "make.util.m"
                break;
#line 1936 "make.util.m"
              case (MR_Integer) 3:
#line 1945 "make.util.m"
                make__util__Hash1_13 = (MR_Integer) 4;
#line 1936 "make.util.m"
                break;
#line 1936 "make.util.m"
              case (MR_Integer) 4:
#line 1948 "make.util.m"
                make__util__Hash1_13 = (MR_Integer) 5;
#line 1936 "make.util.m"
                break;
#line 1936 "make.util.m"
              case (MR_Integer) 5:
#line 1951 "make.util.m"
                make__util__Hash1_13 = (MR_Integer) 6;
#line 1936 "make.util.m"
                break;
#line 1936 "make.util.m"
              case (MR_Integer) 6:
#line 1954 "make.util.m"
                make__util__Hash1_13 = (MR_Integer) 7;
#line 1936 "make.util.m"
                break;
#line 1936 "make.util.m"
              case (MR_Integer) 7:
#line 1957 "make.util.m"
                make__util__Hash1_13 = (MR_Integer) 8;
#line 1936 "make.util.m"
                break;
#line 1936 "make.util.m"
              case (MR_Integer) 8:
#line 2002 "make.util.m"
                make__util__Hash1_13 = (MR_Integer) 23;
#line 1936 "make.util.m"
                break;
#line 1936 "make.util.m"
              case (MR_Integer) 9:
#line 1966 "make.util.m"
                make__util__Hash1_13 = (MR_Integer) 11;
#line 1936 "make.util.m"
                break;
#line 1936 "make.util.m"
              case (MR_Integer) 10:
#line 1969 "make.util.m"
                make__util__Hash1_13 = (MR_Integer) 12;
#line 1936 "make.util.m"
                break;
#line 1936 "make.util.m"
              case (MR_Integer) 11:
#line 1972 "make.util.m"
                make__util__Hash1_13 = (MR_Integer) 13;
#line 1936 "make.util.m"
                break;
#line 1936 "make.util.m"
              case (MR_Integer) 12:
#line 2008 "make.util.m"
                make__util__Hash1_13 = (MR_Integer) 25;
#line 1936 "make.util.m"
                break;
#line 1936 "make.util.m"
              case (MR_Integer) 13:
#line 1975 "make.util.m"
                make__util__Hash1_13 = (MR_Integer) 14;
#line 1936 "make.util.m"
                break;
#line 1936 "make.util.m"
              case (MR_Integer) 14:
#line 2005 "make.util.m"
                make__util__Hash1_13 = (MR_Integer) 24;
#line 1936 "make.util.m"
                break;
#line 1936 "make.util.m"
              case (MR_Integer) 15:
#line 1978 "make.util.m"
                make__util__Hash1_13 = (MR_Integer) 15;
#line 1936 "make.util.m"
                break;
#line 1936 "make.util.m"
              case (MR_Integer) 16:
#line 1981 "make.util.m"
                make__util__Hash1_13 = (MR_Integer) 16;
#line 1936 "make.util.m"
                break;
#line 1936 "make.util.m"
              case (MR_Integer) 17:
#line 1984 "make.util.m"
                make__util__Hash1_13 = (MR_Integer) 17;
#line 1936 "make.util.m"
                break;
#line 1936 "make.util.m"
              case (MR_Integer) 18:
#line 1999 "make.util.m"
                make__util__Hash1_13 = (MR_Integer) 22;
#line 1936 "make.util.m"
                break;
#line 1936 "make.util.m"
            }
#line 1936 "make.util.m"
            break;
#line 1936 "make.util.m"
          case (MR_Integer) 1:
#line 1936 "make.util.m"
            {
#line 1936 "make.util.m"
              MR_Word make__util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__util__Type_11, (MR_Integer) 0)));

#line 1936 "make.util.m"
#line 1936 "make.util.m"
              switch (make__util__V_33_33) {
#line 1936 "make.util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1936 "make.util.m"
                case (MR_Integer) 0:
#line 1961 "make.util.m"
                  make__util__Hash1_13 = (MR_Integer) 9;
#line 1936 "make.util.m"
                  break;
#line 1936 "make.util.m"
                case (MR_Integer) 1:
#line 1964 "make.util.m"
                  make__util__Hash1_13 = (MR_Integer) 10;
#line 1936 "make.util.m"
                  break;
#line 1936 "make.util.m"
              }
#line 1936 "make.util.m"
            }
#line 1936 "make.util.m"
            break;
#line 1936 "make.util.m"
          case (MR_Integer) 2:
#line 1987 "make.util.m"
            {
#line 1987 "make.util.m"
              MR_Word make__util__PIC_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__util__Type_11, (MR_Integer) 0)));
#line 1987 "make.util.m"
              MR_Integer make__util__V_26_26;
#line 1987 "make.util.m"
              MR_Integer make__util__H1_37;

#line 2014 "make.util.m"
#line 2014 "make.util.m"
              switch (make__util__PIC_21) {
#line 2014 "make.util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 2014 "make.util.m"
                case (MR_Integer) 1:
#line 2015 "make.util.m"
                  make__util__V_26_26 = (MR_Integer) 2;
#line 2014 "make.util.m"
                  break;
#line 2014 "make.util.m"
                case (MR_Integer) 2:
#line 2016 "make.util.m"
                  make__util__V_26_26 = (MR_Integer) 3;
#line 2014 "make.util.m"
                  break;
#line 2014 "make.util.m"
                case (MR_Integer) 0:
#line 2014 "make.util.m"
                  make__util__V_26_26 = (MR_Integer) 1;
#line 2014 "make.util.m"
                  break;
#line 2014 "make.util.m"
              }
#line 2021 "make.util.m"
              make__util__H1_37 = ((MR_Integer) 18 ^ (((MR_Integer) 18 << (MR_Integer) 5)));
#line 2022 "make.util.m"
              make__util__Hash1_13 = (make__util__H1_37 ^ make__util__V_26_26);
#line 1987 "make.util.m"
            }
#line 1936 "make.util.m"
            break;
#line 1936 "make.util.m"
          case (MR_Integer) 3:
#line 1936 "make.util.m"
#line 1936 "make.util.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__util__Type_11, (MR_Integer) 0)))) {
#line 1936 "make.util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1936 "make.util.m"
              case (MR_Integer) 0:
#line 1991 "make.util.m"
                make__util__Hash1_13 = (MR_Integer) 19;
#line 1936 "make.util.m"
                break;
#line 1936 "make.util.m"
              case (MR_Integer) 1:
#line 1994 "make.util.m"
                make__util__Hash1_13 = (MR_Integer) 20;
#line 1936 "make.util.m"
                break;
#line 1936 "make.util.m"
              case (MR_Integer) 2:
#line 1997 "make.util.m"
                make__util__Hash1_13 = (MR_Integer) 21;
#line 1936 "make.util.m"
                break;
#line 1936 "make.util.m"
            }
#line 1936 "make.util.m"
            break;
#line 1936 "make.util.m"
        }
#line 2021 "make.util.m"
        make__util__V_44_44 = (make__util__Hash0_12 << (MR_Integer) 5);
#line 2021 "make.util.m"
        make__util__H1_43 = (make__util__Hash0_12 ^ make__util__V_44_44);
#line 2022 "make.util.m"
        *make__util__Hash_4 = (make__util__H1_43 ^ make__util__Hash1_13);
#line 1917 "make.util.m"
      }
#line 1917 "make.util.m"
  }
#line 337 "make.util.m"
}

#line 335 "make.util.m"
void MR_CALL 
make__util__module_name_hash_2_p_0(
#line 335 "make.util.m"
  MR_Word make__util__SymName_3,
#line 335 "make.util.m"
  MR_Integer * make__util__Hash_4)
#line 335 "make.util.m"
{
#line 1907 "make.util.m"
  {
#line 1907 "make.util.m"
    MR_bool make__util__succeeded;

#line 1907 "make.util.m"
    if (((MR_tag((MR_Word) make__util__SymName_3)) == (MR_mktag((MR_Integer) 1))))
#line 1910 "make.util.m"
      {
#line 1910 "make.util.m"
        MR_String make__util__String_7 = ((MR_String) (MR_hl_field(MR_mktag(1), make__util__SymName_3, (MR_Integer) 1)));
#line 1910 "make.util.m"
        MR_Word make__util___Qual_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__util__SymName_3, (MR_Integer) 0)));

#line 1912 "make.util.m"
        {
#line 1912 "make.util.m"
          *make__util__Hash_4 = mercury__string__hash_1_f_0(make__util__String_7);
        }
#line 1910 "make.util.m"
      }
#line 1907 "make.util.m"
    else
#line 1907 "make.util.m"
      {
#line 1907 "make.util.m"
        MR_String make__util__String_5 = ((MR_String) (MR_hl_field(MR_mktag(0), make__util__SymName_3, (MR_Integer) 0)));

#line 1908 "make.util.m"
        {
#line 1908 "make.util.m"
          *make__util__Hash_4 = mercury__string__hash_1_f_0(make__util__String_5);
        }
#line 1907 "make.util.m"
      }
#line 1907 "make.util.m"
  }
#line 335 "make.util.m"
}

#line 328 "make.util.m"
void MR_CALL 
make__util__get_real_milliseconds_3_p_0(
#line 328 "make.util.m"
  MR_Integer * make__util__Time_1)
#line 328 "make.util.m"
{
#line 1875 "make.util.m"
  {
#line 1875 "make.util.m"
    MR_bool make__util__succeeded;

#line 1878 "make.util.m"
{
#define MR_PROC_LABEL make__util__get_real_milliseconds_3_p_0

	MR_Integer Time;

		{
#line 1878 "make.util.m"

    Time = MR_get_real_milliseconds();

#line 9942 "make.util.c"

		;}
#undef MR_PROC_LABEL
	 *make__util__Time_1  = Time;
#line 1878 "make.util.m"
}
#line 1875 "make.util.m"
  }
#line 328 "make.util.m"
}

#line 320 "make.util.m"
void MR_CALL 
make__util__maybe_symlink_or_copy_linked_target_message_4_p_0(
#line 320 "make.util.m"
  MR_Word make__util__Globals_5,
#line 320 "make.util.m"
  MR_Word make__util__Target_6)
#line 320 "make.util.m"
{
#line 1844 "make.util.m"
  {
#line 1844 "make.util.m"
    MR_bool make__util__succeeded;
#line 1844 "make.util.m"
    MR_Word make__util__OptionValue_36;

#line 1740 "make.util.m"
    {
#line 1740 "make.util.m"
      libs__globals__lookup_bool_option_3_p_0(make__util__Globals_5, (MR_Integer) 50, &make__util__OptionValue_36);
    }
#line 1745 "make.util.m"
#line 1745 "make.util.m"
    switch (make__util__OptionValue_36) {
#line 1745 "make.util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1745 "make.util.m"
      case (MR_Integer) 0:
#line 1746 "make.util.m"
        {
#line 1746 "make.util.m"
        }
#line 1745 "make.util.m"
        break;
#line 1745 "make.util.m"
      case (MR_Integer) 1:
#line 1742 "make.util.m"
        {
#line 1743 "make.util.m"
          {
#line 1743 "make.util.m"
            make__util__IntroducedFrom__pred__maybe_symlink_or_copy_linked_target_message__1845__1_4_p_0(make__util__Globals_5, make__util__Target_6);
          }
#line 1744 "make.util.m"
          {
#line 1744 "make.util.m"
            mercury__io__flush_output_2_p_0();
#line 1744 "make.util.m"
            return;
          }
#line 1742 "make.util.m"
        }
#line 1745 "make.util.m"
        break;
#line 1745 "make.util.m"
    }
#line 1844 "make.util.m"
  }
#line 320 "make.util.m"
}

#line 313 "make.util.m"
void MR_CALL 
make__util__maybe_warn_up_to_date_target_6_p_0(
#line 313 "make.util.m"
  MR_Word make__util__Globals_7,
#line 313 "make.util.m"
  MR_Word make__util__Target_8,
#line 313 "make.util.m"
  MR_Word make__util__STATE_VARIABLE_Info_0_12,
#line 313 "make.util.m"
  MR_Word * make__util__STATE_VARIABLE_Info_13)
#line 313 "make.util.m"
{
#line 1827 "make.util.m"
  {
#line 1827 "make.util.m"
    MR_bool make__util__succeeded;
#line 1827 "make.util.m"
    MR_Word make__util__Warn_11;
#line 1827 "make.util.m"
    MR_Word make__util__V_24_24;
#line 1827 "make.util.m"
    MR_Word make__util__V_25_25;
#line 1842 "make.util.m"
    MR_Word make__util__V_45_45;
#line 1842 "make.util.m"
    MR_Word make__util__V_46_46;
#line 1842 "make.util.m"
    MR_Word make__util__V_47_47;
#line 1842 "make.util.m"
    MR_Word make__util__V_48_48;
#line 1842 "make.util.m"
    MR_Word make__util__V_49_49;
#line 1842 "make.util.m"
    MR_Word make__util__V_50_50;
#line 1842 "make.util.m"
    MR_Word make__util__V_51_51;
#line 1842 "make.util.m"
    MR_Word make__util__V_52_52;
#line 1842 "make.util.m"
    MR_Word make__util__V_53_53;
#line 1842 "make.util.m"
    MR_Word make__util__V_54_54;
#line 1842 "make.util.m"
    MR_Word make__util__V_55_55;
#line 1842 "make.util.m"
    MR_Word make__util__V_56_56;
#line 1842 "make.util.m"
    MR_Word make__util__V_57_57;
#line 1842 "make.util.m"
    MR_Word make__util__V_58_58;
#line 1842 "make.util.m"
    MR_Word make__util__V_59_59;
#line 1842 "make.util.m"
    MR_Word make__util__V_60_60;
#line 1842 "make.util.m"
    MR_Word make__util__V_61_61;
#line 1842 "make.util.m"
    MR_Integer make__util__V_62_62;
#line 1842 "make.util.m"
    MR_Word make__util__V_63_63;
#line 1841 "make.util.m"
    MR_Word make__util__V_64_64;
#line 1841 "make.util.m"
    MR_Word make__util__V_65_65;
#line 1841 "make.util.m"
    MR_Word make__util__V_66_66;
#line 1841 "make.util.m"
    MR_Word make__util__V_67_67;
#line 1841 "make.util.m"
    MR_Word make__util__V_68_68;
#line 1841 "make.util.m"
    MR_Word make__util__V_69_69;
#line 1841 "make.util.m"
    MR_Word make__util__V_70_70;
#line 1841 "make.util.m"
    MR_Word make__util__V_71_71;
#line 1841 "make.util.m"
    MR_Word make__util__V_72_72;
#line 1841 "make.util.m"
    MR_Word make__util__V_73_73;
#line 1841 "make.util.m"
    MR_Word make__util__V_74_74;
#line 1841 "make.util.m"
    MR_Word make__util__V_75_75;
#line 1841 "make.util.m"
    MR_Word make__util__V_76_76;
#line 1841 "make.util.m"
    MR_Word make__util__V_77_77;
#line 1841 "make.util.m"
    MR_Word make__util__V_78_78;
#line 1841 "make.util.m"
    MR_Word make__util__V_79_79;
#line 1841 "make.util.m"
    MR_Word make__util__V_80_80;
#line 1841 "make.util.m"
    MR_Integer make__util__V_82_82;
#line 1841 "make.util.m"
    MR_Word make__util__V_83_83;
#line 1841 "make.util.m"
    MR_Word make__util__V_81_81;

#line 1828 "make.util.m"
    {
#line 1828 "make.util.m"
      libs__globals__lookup_bool_option_3_p_0(make__util__Globals_7, (MR_Integer) 27, &make__util__Warn_11);
    }
#line 1838 "make.util.m"
#line 1838 "make.util.m"
    switch (make__util__Warn_11) {
#line 1838 "make.util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1838 "make.util.m"
      case (MR_Integer) 0:
#line 1839 "make.util.m"
        {
#line 1839 "make.util.m"
        }
#line 1838 "make.util.m"
        break;
#line 1838 "make.util.m"
      case (MR_Integer) 1:
#line 1835 "make.util.m"
        {
#line 1831 "make.util.m"
          MR_Word make__util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_12, (MR_Integer) 17)));
#line 1831 "make.util.m"
          MR_Word make__util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_12, (MR_Integer) 0)));
#line 1831 "make.util.m"
          MR_Word make__util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_12, (MR_Integer) 1)));
#line 1831 "make.util.m"
          MR_Word make__util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_12, (MR_Integer) 2)));
#line 1831 "make.util.m"
          MR_Word make__util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_12, (MR_Integer) 3)));
#line 1831 "make.util.m"
          MR_Word make__util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_12, (MR_Integer) 4)));
#line 1831 "make.util.m"
          MR_Word make__util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_12, (MR_Integer) 5)));
#line 1831 "make.util.m"
          MR_Word make__util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_12, (MR_Integer) 6)));
#line 1831 "make.util.m"
          MR_Word make__util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_12, (MR_Integer) 7)));
#line 1831 "make.util.m"
          MR_Word make__util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_12, (MR_Integer) 8)));
#line 1831 "make.util.m"
          MR_Word make__util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_12, (MR_Integer) 9)));
#line 1831 "make.util.m"
          MR_Word make__util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_12, (MR_Integer) 10)));
#line 1831 "make.util.m"
          MR_Word make__util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_12, (MR_Integer) 11)));
#line 1831 "make.util.m"
          MR_Word make__util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_12, (MR_Integer) 12)));
#line 1831 "make.util.m"
          MR_Word make__util__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_12, (MR_Integer) 13)));
#line 1831 "make.util.m"
          MR_Word make__util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_12, (MR_Integer) 14)));
#line 1831 "make.util.m"
          MR_Word make__util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_12, (MR_Integer) 15)));
#line 1831 "make.util.m"
          MR_Word make__util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_12, (MR_Integer) 16)));
#line 1831 "make.util.m"
          MR_Integer make__util__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_12, (MR_Integer) 18)));
#line 1831 "make.util.m"
          MR_Word make__util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_12, (MR_Integer) 19)));

#line 1831 "make.util.m"
          {
#line 1831 "make.util.m"
            make__util__succeeded = mercury__set__member_2_p_0((MR_Word) &make__util_scalar_common_1[1], ((MR_Box) (make__util__Target_8)), make__util__V_17_17);
          }
#line 1835 "make.util.m"
          if (make__util__succeeded)
#line 1832 "make.util.m"
            {
#line 1832 "make.util.m"
              {
#line 1832 "make.util.m"
                mercury__io__write_string_3_p_0((MR_String) "** Nothing to be done for \140");
              }
#line 1833 "make.util.m"
              {
#line 1833 "make.util.m"
                make__util__make_write_module_or_linked_target_4_p_0(make__util__Globals_7, make__util__Target_8);
              }
#line 1834 "make.util.m"
              {
#line 1834 "make.util.m"
                mercury__io__write_string_3_p_0((MR_String) "\'.\n");
              }
#line 1832 "make.util.m"
            }
#line 1835 "make.util.m"
          else
#line 1835 "make.util.m"
            {
#line 1835 "make.util.m"
            }
#line 1835 "make.util.m"
        }
#line 1838 "make.util.m"
        break;
#line 1838 "make.util.m"
    }
#line 1842 "make.util.m"
    make__util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_12, (MR_Integer) 0)));
#line 1842 "make.util.m"
    make__util__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_12, (MR_Integer) 1)));
#line 1842 "make.util.m"
    make__util__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_12, (MR_Integer) 2)));
#line 1842 "make.util.m"
    make__util__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_12, (MR_Integer) 3)));
#line 1842 "make.util.m"
    make__util__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_12, (MR_Integer) 4)));
#line 1842 "make.util.m"
    make__util__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_12, (MR_Integer) 5)));
#line 1842 "make.util.m"
    make__util__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_12, (MR_Integer) 6)));
#line 1842 "make.util.m"
    make__util__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_12, (MR_Integer) 7)));
#line 1842 "make.util.m"
    make__util__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_12, (MR_Integer) 8)));
#line 1842 "make.util.m"
    make__util__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_12, (MR_Integer) 9)));
#line 1842 "make.util.m"
    make__util__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_12, (MR_Integer) 10)));
#line 1842 "make.util.m"
    make__util__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_12, (MR_Integer) 11)));
#line 1842 "make.util.m"
    make__util__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_12, (MR_Integer) 12)));
#line 1842 "make.util.m"
    make__util__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_12, (MR_Integer) 13)));
#line 1842 "make.util.m"
    make__util__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_12, (MR_Integer) 14)));
#line 1842 "make.util.m"
    make__util__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_12, (MR_Integer) 15)));
#line 1842 "make.util.m"
    make__util__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_12, (MR_Integer) 16)));
#line 1842 "make.util.m"
    make__util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_12, (MR_Integer) 17)));
#line 1842 "make.util.m"
    make__util__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_12, (MR_Integer) 18)));
#line 1842 "make.util.m"
    make__util__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_12, (MR_Integer) 19)));
#line 1842 "make.util.m"
    {
#line 1842 "make.util.m"
      make__util__V_24_24 = mercury__set__delete_2_f_0((MR_Word) &make__util_scalar_common_1[1], make__util__V_25_25, ((MR_Box) (make__util__Target_8)));
    }
#line 1841 "make.util.m"
    make__util__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_12, (MR_Integer) 0)));
#line 1841 "make.util.m"
    make__util__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_12, (MR_Integer) 1)));
#line 1841 "make.util.m"
    make__util__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_12, (MR_Integer) 2)));
#line 1841 "make.util.m"
    make__util__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_12, (MR_Integer) 3)));
#line 1841 "make.util.m"
    make__util__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_12, (MR_Integer) 4)));
#line 1841 "make.util.m"
    make__util__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_12, (MR_Integer) 5)));
#line 1841 "make.util.m"
    make__util__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_12, (MR_Integer) 6)));
#line 1841 "make.util.m"
    make__util__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_12, (MR_Integer) 7)));
#line 1841 "make.util.m"
    make__util__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_12, (MR_Integer) 8)));
#line 1841 "make.util.m"
    make__util__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_12, (MR_Integer) 9)));
#line 1841 "make.util.m"
    make__util__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_12, (MR_Integer) 10)));
#line 1841 "make.util.m"
    make__util__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_12, (MR_Integer) 11)));
#line 1841 "make.util.m"
    make__util__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_12, (MR_Integer) 12)));
#line 1841 "make.util.m"
    make__util__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_12, (MR_Integer) 13)));
#line 1841 "make.util.m"
    make__util__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_12, (MR_Integer) 14)));
#line 1841 "make.util.m"
    make__util__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_12, (MR_Integer) 15)));
#line 1841 "make.util.m"
    make__util__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_12, (MR_Integer) 16)));
#line 1841 "make.util.m"
    make__util__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_12, (MR_Integer) 17)));
#line 1841 "make.util.m"
    make__util__V_82_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_12, (MR_Integer) 18)));
#line 1841 "make.util.m"
    make__util__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_12, (MR_Integer) 19)));
#line 1841 "make.util.m"
    {
#line 1841 "make.util.m"
      MR_Word base;
#line 1841 "make.util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
#line 1841 "make.util.m"
      *make__util__STATE_VARIABLE_Info_13 = base;
#line 1841 "make.util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__util__V_64_64));
#line 1841 "make.util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__util__V_65_65));
#line 1841 "make.util.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__util__V_66_66));
#line 1841 "make.util.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (make__util__V_67_67));
#line 1841 "make.util.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (make__util__V_68_68));
#line 1841 "make.util.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (make__util__V_69_69));
#line 1841 "make.util.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (make__util__V_70_70));
#line 1841 "make.util.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (make__util__V_71_71));
#line 1841 "make.util.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (make__util__V_72_72));
#line 1841 "make.util.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (make__util__V_73_73));
#line 1841 "make.util.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (make__util__V_74_74));
#line 1841 "make.util.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (make__util__V_75_75));
#line 1841 "make.util.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (make__util__V_76_76));
#line 1841 "make.util.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (make__util__V_77_77));
#line 1841 "make.util.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (make__util__V_78_78));
#line 1841 "make.util.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (make__util__V_79_79));
#line 1841 "make.util.m"
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (make__util__V_80_80));
#line 1841 "make.util.m"
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (make__util__V_24_24));
#line 1841 "make.util.m"
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (make__util__V_82_82));
#line 1841 "make.util.m"
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (make__util__V_83_83));
#line 1841 "make.util.m"
    }
#line 1827 "make.util.m"
  }
#line 313 "make.util.m"
}

#line 308 "make.util.m"
void MR_CALL 
make__util__file_error_4_p_0(
#line 308 "make.util.m"
  MR_Word make__util__Info_5,
#line 308 "make.util.m"
  MR_String make__util__TargetFile_6)
#line 308 "make.util.m"
{
#line 1823 "make.util.m"
  {
#line 1823 "make.util.m"
    MR_bool make__util__succeeded;
#line 1823 "make.util.m"
    MR_String make__util__V_12_12;
#line 1823 "make.util.m"
    MR_String make__util__V_14_14;
#line 1823 "make.util.m"
    MR_Word make__util__MaybeLock_23;
#line 949 "make.util.m"
    MR_Word make__util__V_29_29;
#line 949 "make.util.m"
    MR_Word make__util__V_30_30;
#line 949 "make.util.m"
    MR_Word make__util__V_31_31;
#line 949 "make.util.m"
    MR_Word make__util__V_32_32;
#line 949 "make.util.m"
    MR_Word make__util__V_33_33;
#line 949 "make.util.m"
    MR_Word make__util__V_34_34;
#line 949 "make.util.m"
    MR_Word make__util__V_35_35;
#line 949 "make.util.m"
    MR_Word make__util__V_36_36;
#line 949 "make.util.m"
    MR_Word make__util__V_37_37;
#line 949 "make.util.m"
    MR_Word make__util__V_38_38;
#line 949 "make.util.m"
    MR_Word make__util__V_39_39;
#line 949 "make.util.m"
    MR_Word make__util__V_40_40;
#line 949 "make.util.m"
    MR_Word make__util__V_41_41;
#line 949 "make.util.m"
    MR_Word make__util__V_42_42;
#line 949 "make.util.m"
    MR_Word make__util__V_43_43;
#line 949 "make.util.m"
    MR_Word make__util__V_44_44;
#line 949 "make.util.m"
    MR_Word make__util__V_45_45;
#line 949 "make.util.m"
    MR_Word make__util__V_46_46;
#line 949 "make.util.m"
    MR_Integer make__util__V_47_47;

#line 1825 "make.util.m"
    {
#line 1825 "make.util.m"
      make__util__V_14_14 = mercury__string__f_43_43_2_f_0(make__util__TargetFile_6, (MR_String) "\'.\n");
    }
#line 1825 "make.util.m"
    {
#line 1825 "make.util.m"
      make__util__V_12_12 = mercury__string__f_43_43_2_f_0((MR_String) "** Error making \140", make__util__V_14_14);
    }
#line 949 "make.util.m"
    make__util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 0)));
#line 949 "make.util.m"
    make__util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 1)));
#line 949 "make.util.m"
    make__util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 2)));
#line 949 "make.util.m"
    make__util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 3)));
#line 949 "make.util.m"
    make__util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 4)));
#line 949 "make.util.m"
    make__util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 5)));
#line 949 "make.util.m"
    make__util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 6)));
#line 949 "make.util.m"
    make__util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 7)));
#line 949 "make.util.m"
    make__util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 8)));
#line 949 "make.util.m"
    make__util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 9)));
#line 949 "make.util.m"
    make__util__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 10)));
#line 949 "make.util.m"
    make__util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 11)));
#line 949 "make.util.m"
    make__util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 12)));
#line 949 "make.util.m"
    make__util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 13)));
#line 949 "make.util.m"
    make__util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 14)));
#line 949 "make.util.m"
    make__util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 15)));
#line 949 "make.util.m"
    make__util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 16)));
#line 949 "make.util.m"
    make__util__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 17)));
#line 949 "make.util.m"
    make__util__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 18)));
#line 949 "make.util.m"
    make__util__MaybeLock_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_5, (MR_Integer) 19)));
#line 955 "make.util.m"
    if ((make__util__MaybeLock_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 957 "make.util.m"
      {
#line 957 "make.util.m"
        mercury__io__write_string_3_p_0(make__util__V_12_12);
#line 957 "make.util.m"
        return;
      }
#line 955 "make.util.m"
    else
#line 951 "make.util.m"
      {
#line 951 "make.util.m"
        MR_Box make__util__Lock_24 = ((MR_Box) (MR_hl_field(MR_mktag(1), make__util__MaybeLock_23, (MR_Integer) 0)));

#line 952 "make.util.m"
        {
#line 952 "make.util.m"
          make__util__lock_stdout_3_p_0(make__util__Lock_24);
        }
#line 953 "make.util.m"
        {
#line 953 "make.util.m"
          mercury__io__write_string_3_p_0(make__util__V_12_12);
        }
#line 954 "make.util.m"
        {
#line 954 "make.util.m"
          make__util__unlock_stdout_3_p_0(make__util__Lock_24);
#line 954 "make.util.m"
          return;
        }
#line 951 "make.util.m"
      }
#line 1823 "make.util.m"
  }
#line 308 "make.util.m"
}

#line 303 "make.util.m"
void MR_CALL 
make__util__target_file_error_5_p_0(
#line 303 "make.util.m"
  MR_Word make__util__Info_6,
#line 303 "make.util.m"
  MR_Word make__util__Globals_7,
#line 303 "make.util.m"
  MR_Word make__util__TargetFile_8)
#line 303 "make.util.m"
{
#line 1818 "make.util.m"
  {
#line 1818 "make.util.m"
    MR_bool make__util__succeeded;
#line 1818 "make.util.m"
    MR_Word make__util__MaybeLock_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_6, (MR_Integer) 19)));
#line 949 "make.util.m"
    MR_Word make__util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_6, (MR_Integer) 0)));
#line 949 "make.util.m"
    MR_Word make__util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_6, (MR_Integer) 1)));
#line 949 "make.util.m"
    MR_Word make__util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_6, (MR_Integer) 2)));
#line 949 "make.util.m"
    MR_Word make__util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_6, (MR_Integer) 3)));
#line 949 "make.util.m"
    MR_Word make__util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_6, (MR_Integer) 4)));
#line 949 "make.util.m"
    MR_Word make__util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_6, (MR_Integer) 5)));
#line 949 "make.util.m"
    MR_Word make__util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_6, (MR_Integer) 6)));
#line 949 "make.util.m"
    MR_Word make__util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_6, (MR_Integer) 7)));
#line 949 "make.util.m"
    MR_Word make__util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_6, (MR_Integer) 8)));
#line 949 "make.util.m"
    MR_Word make__util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_6, (MR_Integer) 9)));
#line 949 "make.util.m"
    MR_Word make__util__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_6, (MR_Integer) 10)));
#line 949 "make.util.m"
    MR_Word make__util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_6, (MR_Integer) 11)));
#line 949 "make.util.m"
    MR_Word make__util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_6, (MR_Integer) 12)));
#line 949 "make.util.m"
    MR_Word make__util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_6, (MR_Integer) 13)));
#line 949 "make.util.m"
    MR_Word make__util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_6, (MR_Integer) 14)));
#line 949 "make.util.m"
    MR_Word make__util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_6, (MR_Integer) 15)));
#line 949 "make.util.m"
    MR_Word make__util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_6, (MR_Integer) 16)));
#line 949 "make.util.m"
    MR_Word make__util__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Info_6, (MR_Integer) 17)));
#line 949 "make.util.m"
    MR_Integer make__util__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__util__Info_6, (MR_Integer) 18)));

#line 955 "make.util.m"
    if ((make__util__MaybeLock_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 957 "make.util.m"
      {
#line 957 "make.util.m"
        make__util__make_write_target_file_wrapped_6_p_0(make__util__Globals_7, (MR_String) "** Error making \140", make__util__TargetFile_8, (MR_String) "\'.\n");
#line 957 "make.util.m"
        return;
      }
#line 955 "make.util.m"
    else
#line 951 "make.util.m"
      {
#line 951 "make.util.m"
        MR_Box make__util__Lock_24 = ((MR_Box) (MR_hl_field(MR_mktag(1), make__util__MaybeLock_23, (MR_Integer) 0)));

#line 952 "make.util.m"
        {
#line 952 "make.util.m"
          make__util__lock_stdout_3_p_0(make__util__Lock_24);
        }
#line 953 "make.util.m"
        {
#line 953 "make.util.m"
          make__util__make_write_target_file_wrapped_6_p_0(make__util__Globals_7, (MR_String) "** Error making \140", make__util__TargetFile_8, (MR_String) "\'.\n");
        }
#line 954 "make.util.m"
        {
#line 954 "make.util.m"
          make__util__unlock_stdout_3_p_0(make__util__Lock_24);
#line 954 "make.util.m"
          return;
        }
#line 951 "make.util.m"
      }
#line 1818 "make.util.m"
  }
#line 303 "make.util.m"
}

#line 299 "make.util.m"
void MR_CALL 
make__util__maybe_reanalyse_modules_message_3_p_0(
#line 299 "make.util.m"
  MR_Word make__util__Globals_4)
#line 299 "make.util.m"
{
#line 1810 "make.util.m"
  {
#line 1810 "make.util.m"
    MR_bool make__util__succeeded;
#line 1810 "make.util.m"
    MR_Word make__util__OptionValue_35;

#line 1740 "make.util.m"
    {
#line 1740 "make.util.m"
      libs__globals__lookup_bool_option_3_p_0(make__util__Globals_4, (MR_Integer) 50, &make__util__OptionValue_35);
    }
#line 1745 "make.util.m"
#line 1745 "make.util.m"
    switch (make__util__OptionValue_35) {
#line 1745 "make.util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1745 "make.util.m"
      case (MR_Integer) 0:
#line 1746 "make.util.m"
        {
#line 1746 "make.util.m"
        }
#line 1745 "make.util.m"
        break;
#line 1745 "make.util.m"
      case (MR_Integer) 1:
#line 1742 "make.util.m"
        {
#line 1742 "make.util.m"
          MR_Word make__util__OutputStream_43;

#line 1813 "make.util.m"
          {
#line 1813 "make.util.m"
            mercury__io__output_stream_3_p_0(&make__util__OutputStream_43);
          }
#line 1814 "make.util.m"
          {
#line 1814 "make.util.m"
            mercury__io__write_string_4_p_0(make__util__OutputStream_43, (MR_String) "Reanalysing invalid/suboptimal modules\n");
          }
#line 1744 "make.util.m"
          {
#line 1744 "make.util.m"
            mercury__io__flush_output_2_p_0();
#line 1744 "make.util.m"
            return;
          }
#line 1742 "make.util.m"
        }
#line 1745 "make.util.m"
        break;
#line 1745 "make.util.m"
    }
#line 1810 "make.util.m"
  }
#line 299 "make.util.m"
}

#line 293 "make.util.m"
void MR_CALL 
make__util__maybe_make_target_message_to_stream_5_p_0(
#line 293 "make.util.m"
  MR_Word make__util__Globals_6,
#line 293 "make.util.m"
  MR_Word make__util__OutputStream_7,
#line 293 "make.util.m"
  MR_Word make__util__TargetFile_8)
#line 293 "make.util.m"
{
#line 1801 "make.util.m"
  {
#line 1801 "make.util.m"
    MR_bool make__util__succeeded;
#line 1801 "make.util.m"
    MR_Word make__util__OptionValue_40;

#line 1740 "make.util.m"
    {
#line 1740 "make.util.m"
      libs__globals__lookup_bool_option_3_p_0(make__util__Globals_6, (MR_Integer) 50, &make__util__OptionValue_40);
    }
#line 1745 "make.util.m"
#line 1745 "make.util.m"
    switch (make__util__OptionValue_40) {
#line 1745 "make.util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1745 "make.util.m"
      case (MR_Integer) 0:
#line 1746 "make.util.m"
        {
#line 1746 "make.util.m"
        }
#line 1745 "make.util.m"
        break;
#line 1745 "make.util.m"
      case (MR_Integer) 1:
#line 1742 "make.util.m"
        {
#line 1742 "make.util.m"
          MR_Word make__util__OldOutputStream_49;
#line 1807 "make.util.m"
          MR_Word make__util__V_50_50;

#line 1804 "make.util.m"
          {
#line 1804 "make.util.m"
            mercury__io__set_output_stream_4_p_0(make__util__OutputStream_7, &make__util__OldOutputStream_49);
          }
#line 1805 "make.util.m"
          {
#line 1805 "make.util.m"
            make__util__make_write_target_file_wrapped_6_p_0(make__util__Globals_6, (MR_String) "Making ", make__util__TargetFile_8, (MR_String) "\n");
          }
#line 1807 "make.util.m"
          {
#line 1807 "make.util.m"
            mercury__io__set_output_stream_4_p_0(make__util__OldOutputStream_49, &make__util__V_50_50);
          }
#line 1744 "make.util.m"
          {
#line 1744 "make.util.m"
            mercury__io__flush_output_2_p_0();
#line 1744 "make.util.m"
            return;
          }
#line 1742 "make.util.m"
        }
#line 1745 "make.util.m"
        break;
#line 1745 "make.util.m"
    }
#line 1801 "make.util.m"
  }
#line 293 "make.util.m"
}

#line 290 "make.util.m"
void MR_CALL 
make__util__maybe_make_target_message_4_p_0(
#line 290 "make.util.m"
  MR_Word make__util__Globals_5,
#line 290 "make.util.m"
  MR_Word make__util__TargetFile_6)
#line 290 "make.util.m"
{
#line 1796 "make.util.m"
  {
#line 1796 "make.util.m"
    MR_bool make__util__succeeded;
#line 1796 "make.util.m"
    MR_Word make__util__OutputStream_8;

#line 1797 "make.util.m"
    {
#line 1797 "make.util.m"
      mercury__io__output_stream_3_p_0(&make__util__OutputStream_8);
    }
#line 1798 "make.util.m"
    {
#line 1798 "make.util.m"
      make__util__maybe_make_target_message_to_stream_5_p_0(make__util__Globals_5, make__util__OutputStream_8, make__util__TargetFile_6);
#line 1798 "make.util.m"
      return;
    }
#line 1796 "make.util.m"
  }
#line 290 "make.util.m"
}

#line 285 "make.util.m"
void MR_CALL 
make__util__maybe_make_linked_target_message_4_p_0(
#line 285 "make.util.m"
  MR_Word make__util__Globals_5,
#line 285 "make.util.m"
  MR_String make__util__TargetFile_6)
#line 285 "make.util.m"
{
#line 1788 "make.util.m"
  {
#line 1788 "make.util.m"
    MR_bool make__util__succeeded;
#line 1788 "make.util.m"
    MR_Word make__util__OptionValue_36;

#line 1740 "make.util.m"
    {
#line 1740 "make.util.m"
      libs__globals__lookup_bool_option_3_p_0(make__util__Globals_5, (MR_Integer) 50, &make__util__OptionValue_36);
    }
#line 1745 "make.util.m"
#line 1745 "make.util.m"
    switch (make__util__OptionValue_36) {
#line 1745 "make.util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1745 "make.util.m"
      case (MR_Integer) 0:
#line 1746 "make.util.m"
        {
#line 1746 "make.util.m"
        }
#line 1745 "make.util.m"
        break;
#line 1745 "make.util.m"
      case (MR_Integer) 1:
#line 1742 "make.util.m"
        {
#line 1742 "make.util.m"
          MR_String make__util__V_51_51;
#line 1742 "make.util.m"
          MR_String make__util__V_54_54;

#line 1793 "make.util.m"
          {
#line 1793 "make.util.m"
            make__util__V_54_54 = mercury__string__f_43_43_2_f_0(make__util__TargetFile_6, (MR_String) "\n");
          }
#line 1793 "make.util.m"
          {
#line 1793 "make.util.m"
            make__util__V_51_51 = mercury__string__f_43_43_2_f_0((MR_String) "Making ", make__util__V_54_54);
          }
#line 1793 "make.util.m"
          {
#line 1793 "make.util.m"
            mercury__io__write_string_3_p_0(make__util__V_51_51);
          }
#line 1744 "make.util.m"
          {
#line 1744 "make.util.m"
            mercury__io__flush_output_2_p_0();
#line 1744 "make.util.m"
            return;
          }
#line 1742 "make.util.m"
        }
#line 1745 "make.util.m"
        break;
#line 1745 "make.util.m"
    }
#line 1788 "make.util.m"
  }
#line 285 "make.util.m"
}

#line 280 "make.util.m"
void MR_CALL 
make__util__make_write_target_file_wrapped_6_p_0(
#line 280 "make.util.m"
  MR_Word make__util__Globals_7,
#line 280 "make.util.m"
  MR_String make__util__Prefix_8,
#line 280 "make.util.m"
  MR_Word make__util__TargetFile_9,
#line 280 "make.util.m"
  MR_String make__util__Suffix_10)
#line 280 "make.util.m"
{
#line 1773 "make.util.m"
  {
#line 1773 "make.util.m"
    MR_bool make__util__succeeded;
#line 1773 "make.util.m"
    MR_Word make__util__ModuleName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__TargetFile_9, (MR_Integer) 0)));
#line 1773 "make.util.m"
    MR_Word make__util__FileType_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__TargetFile_9, (MR_Integer) 1)));
#line 1773 "make.util.m"
    MR_String make__util__FileName_14;

#line 1543 "make.util.m"
    {
#line 1543 "make.util.m"
      make__util__module_target_to_file_name_maybe_search_8_p_0(make__util__Globals_7, make__util__ModuleName_12, make__util__FileType_13, (MR_Integer) 1, (MR_Integer) 1, &make__util__FileName_14);
    }
#line 1778 "make.util.m"
    make__util__succeeded = (strcmp(make__util__Prefix_8, (MR_String) "") == 0);
#line 1778 "make.util.m"
    if (make__util__succeeded)
#line 1779 "make.util.m"
      make__util__succeeded = (strcmp(make__util__Suffix_10, (MR_String) "") == 0);
#line 1782 "make.util.m"
    if (make__util__succeeded)
#line 1781 "make.util.m"
      {
#line 1781 "make.util.m"
        mercury__io__write_string_3_p_0(make__util__FileName_14);
#line 1781 "make.util.m"
        return;
      }
#line 1782 "make.util.m"
    else
#line 1785 "make.util.m"
      {
#line 1785 "make.util.m"
        MR_String make__util__V_20_20;
#line 1785 "make.util.m"
        MR_String make__util__V_22_22;

#line 1785 "make.util.m"
        {
#line 1785 "make.util.m"
          make__util__V_22_22 = mercury__string__f_43_43_2_f_0(make__util__FileName_14, make__util__Suffix_10);
        }
#line 1785 "make.util.m"
        {
#line 1785 "make.util.m"
          make__util__V_20_20 = mercury__string__f_43_43_2_f_0(make__util__Prefix_8, make__util__V_22_22);
        }
#line 1785 "make.util.m"
        {
#line 1785 "make.util.m"
          mercury__io__write_string_3_p_0(make__util__V_20_20);
#line 1785 "make.util.m"
          return;
        }
#line 1785 "make.util.m"
      }
#line 1773 "make.util.m"
  }
#line 280 "make.util.m"
}

#line 277 "make.util.m"
void MR_CALL 
make__util__make_write_target_file_4_p_0(
#line 277 "make.util.m"
  MR_Word make__util__Globals_5,
#line 277 "make.util.m"
  MR_Word make__util__TargetFile_6)
#line 277 "make.util.m"
{
#line 1770 "make.util.m"
  {
#line 1770 "make.util.m"
    MR_bool make__util__succeeded;

#line 1771 "make.util.m"
    {
#line 1771 "make.util.m"
      make__util__make_write_target_file_wrapped_6_p_0(make__util__Globals_5, (MR_String) "", make__util__TargetFile_6, (MR_String) "");
#line 1771 "make.util.m"
      return;
    }
#line 1770 "make.util.m"
  }
#line 277 "make.util.m"
}

#line 274 "make.util.m"
void MR_CALL 
make__util__make_write_dependency_file_list_4_p_0(
#line 274 "make.util.m"
  MR_Word make__util__Globals_1,
#line 274 "make.util.m"
  MR_Word make__util__HeadVar__2_2)
#line 274 "make.util.m"
{
#line 1763 "make.util.m"
  while (MR_TRUE)
#line 1763 "make.util.m"
    {
#line 1763 "make.util.m"
      /* tailcall optimized into a loop */
#line 1763 "make.util.m"
      {
#line 1763 "make.util.m"
        MR_bool make__util__succeeded;

#line 1763 "make.util.m"
        if ((make__util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1763 "make.util.m"
          {
#line 1763 "make.util.m"
          }
#line 1763 "make.util.m"
        else
#line 1764 "make.util.m"
          {
#line 1764 "make.util.m"
            MR_Word make__util__DepFile_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__util__HeadVar__2_2, (MR_Integer) 0)));
#line 1764 "make.util.m"
            MR_Word make__util__DepFiles_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__util__HeadVar__2_2, (MR_Integer) 1)));

#line 1765 "make.util.m"
            {
#line 1765 "make.util.m"
              mercury__io__write_string_3_p_0((MR_String) "\t");
            }
#line 1758 "make.util.m"
            if (((MR_tag((MR_Word) make__util__DepFile_10)) == (MR_mktag((MR_Integer) 1))))
#line 1760 "make.util.m"
              {
#line 1760 "make.util.m"
                MR_String make__util__FileName_27 = ((MR_String) (MR_hl_field(MR_mktag(1), make__util__DepFile_10, (MR_Integer) 0)));
#line 1760 "make.util.m"
                MR_Word make__util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__util__DepFile_10, (MR_Integer) 1)));

#line 1761 "make.util.m"
                {
#line 1761 "make.util.m"
                  mercury__io__write_string_3_p_0(make__util__FileName_27);
                }
#line 1760 "make.util.m"
              }
#line 1758 "make.util.m"
            else
#line 1758 "make.util.m"
              {
#line 1758 "make.util.m"
                MR_Word make__util__TargetFile_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__DepFile_10, (MR_Integer) 0)));

#line 1771 "make.util.m"
                {
#line 1771 "make.util.m"
                  make__util__make_write_target_file_wrapped_6_p_0(make__util__Globals_1, (MR_String) "", make__util__TargetFile_21, (MR_String) "");
                }
#line 1758 "make.util.m"
              }
#line 1767 "make.util.m"
            {
#line 1767 "make.util.m"
              mercury__io__nl_2_p_0();
            }
#line 1768 "make.util.m"
            /* direct tailcall eliminated */
#line 1768 "make.util.m"
            {
#line 1768 "make.util.m"
              MR_Word make__util__HeadVar__2__tmp_copy_2 = make__util__DepFiles_11;

#line 1768 "make.util.m"
              make__util__HeadVar__2_2 = make__util__HeadVar__2__tmp_copy_2;
#line 1768 "make.util.m"
            }
#line 1768 "make.util.m"
            continue;
#line 1764 "make.util.m"
          }
#line 1763 "make.util.m"
      }
#line 1763 "make.util.m"
      break;
#line 1763 "make.util.m"
    }
#line 274 "make.util.m"
}

#line 271 "make.util.m"
void MR_CALL 
make__util__make_write_dependency_file_4_p_0(
#line 271 "make.util.m"
  MR_Word make__util__HeadVar__1_1,
#line 271 "make.util.m"
  MR_Word make__util__HeadVar__2_2)
#line 271 "make.util.m"
{
#line 1758 "make.util.m"
  {
#line 1758 "make.util.m"
    MR_bool make__util__succeeded;

#line 1758 "make.util.m"
    if (((MR_tag((MR_Word) make__util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 1760 "make.util.m"
      {
#line 1760 "make.util.m"
        MR_String make__util__FileName_12 = ((MR_String) (MR_hl_field(MR_mktag(1), make__util__HeadVar__2_2, (MR_Integer) 0)));
#line 1760 "make.util.m"
        MR_Word make__util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__util__HeadVar__2_2, (MR_Integer) 1)));

#line 1761 "make.util.m"
        {
#line 1761 "make.util.m"
          mercury__io__write_string_3_p_0(make__util__FileName_12);
#line 1761 "make.util.m"
          return;
        }
#line 1760 "make.util.m"
      }
#line 1758 "make.util.m"
    else
#line 1758 "make.util.m"
      {
#line 1758 "make.util.m"
        MR_Word make__util__TargetFile_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__HeadVar__2_2, (MR_Integer) 0)));

#line 1771 "make.util.m"
        {
#line 1771 "make.util.m"
          make__util__make_write_target_file_wrapped_6_p_0(make__util__HeadVar__1_1, (MR_String) "", make__util__TargetFile_6, (MR_String) "");
#line 1771 "make.util.m"
          return;
        }
#line 1758 "make.util.m"
      }
#line 1758 "make.util.m"
  }
#line 271 "make.util.m"
}

#line 268 "make.util.m"
void MR_CALL 
make__util__debug_file_msg_5_p_0(
#line 268 "make.util.m"
  MR_Word make__util__Globals_6,
#line 268 "make.util.m"
  MR_Word make__util__TargetFile_7,
#line 268 "make.util.m"
  MR_String make__util__Msg_8)
#line 268 "make.util.m"
{
#line 1749 "make.util.m"
  {
#line 1749 "make.util.m"
    MR_bool make__util__succeeded;
#line 1749 "make.util.m"
    MR_Word make__util__OptionValue_38;

#line 1740 "make.util.m"
    {
#line 1740 "make.util.m"
      libs__globals__lookup_bool_option_3_p_0(make__util__Globals_6, (MR_Integer) 76, &make__util__OptionValue_38);
    }
#line 1745 "make.util.m"
#line 1745 "make.util.m"
    switch (make__util__OptionValue_38) {
#line 1745 "make.util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1745 "make.util.m"
      case (MR_Integer) 0:
#line 1746 "make.util.m"
        {
#line 1746 "make.util.m"
        }
#line 1745 "make.util.m"
        break;
#line 1745 "make.util.m"
      case (MR_Integer) 1:
#line 1742 "make.util.m"
        {
#line 1771 "make.util.m"
          {
#line 1771 "make.util.m"
            make__util__make_write_target_file_wrapped_6_p_0(make__util__Globals_6, (MR_String) "", make__util__TargetFile_7, (MR_String) "");
          }
#line 1753 "make.util.m"
          {
#line 1753 "make.util.m"
            mercury__io__write_string_3_p_0((MR_String) ": ");
          }
#line 1754 "make.util.m"
          {
#line 1754 "make.util.m"
            mercury__io__write_string_3_p_0(make__util__Msg_8);
          }
#line 1755 "make.util.m"
          {
#line 1755 "make.util.m"
            mercury__io__nl_2_p_0();
          }
#line 1744 "make.util.m"
          {
#line 1744 "make.util.m"
            mercury__io__flush_output_2_p_0();
#line 1744 "make.util.m"
            return;
          }
#line 1742 "make.util.m"
        }
#line 1745 "make.util.m"
        break;
#line 1745 "make.util.m"
    }
#line 1749 "make.util.m"
  }
#line 268 "make.util.m"
}

#line 263 "make.util.m"
void MR_CALL 
make__util__verbose_msg_option_5_p_0(
#line 263 "make.util.m"
  MR_Word make__util__Globals_6,
#line 263 "make.util.m"
  MR_Word make__util__Option_7,
#line 263 "make.util.m"
  MR_Word make__util__P_8)
#line 263 "make.util.m"
{
#line 1739 "make.util.m"
  {
#line 1739 "make.util.m"
    MR_bool make__util__succeeded;
#line 1739 "make.util.m"
    MR_Word make__util__OptionValue_10;

#line 1740 "make.util.m"
    {
#line 1740 "make.util.m"
      libs__globals__lookup_bool_option_3_p_0(make__util__Globals_6, make__util__Option_7, &make__util__OptionValue_10);
    }
#line 1745 "make.util.m"
#line 1745 "make.util.m"
    switch (make__util__OptionValue_10) {
#line 1745 "make.util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1745 "make.util.m"
      case (MR_Integer) 0:
#line 1746 "make.util.m"
        {
#line 1746 "make.util.m"
        }
#line 1745 "make.util.m"
        break;
#line 1745 "make.util.m"
      case (MR_Integer) 1:
#line 1742 "make.util.m"
        {
#line 1743 "make.util.m"
          void MR_CALL (* make__util__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), make__util__P_8, (MR_Integer) 1)));
#line 1743 "make.util.m"
          MR_Box make__util__conv1_STATE_VARIABLE_IO_13_13;

#line 1743 "make.util.m"
          {
#line 1743 "make.util.m"
            make__util__func_0(((MR_Box) make__util__P_8), ((MR_Box) ((MR_Integer) 0)), &make__util__conv1_STATE_VARIABLE_IO_13_13);
          }
#line 1744 "make.util.m"
          {
#line 1744 "make.util.m"
            mercury__io__flush_output_2_p_0();
#line 1744 "make.util.m"
            return;
          }
#line 1742 "make.util.m"
        }
#line 1745 "make.util.m"
        break;
#line 1745 "make.util.m"
    }
#line 1739 "make.util.m"
  }
#line 263 "make.util.m"
}

#line 257 "make.util.m"
void MR_CALL 
make__util__verbose_msg_4_p_0(
#line 257 "make.util.m"
  MR_Word make__util__Globals_5,
#line 257 "make.util.m"
  MR_Word make__util__P_6)
#line 257 "make.util.m"
{
#line 1736 "make.util.m"
  {
#line 1736 "make.util.m"
    MR_bool make__util__succeeded;
#line 1736 "make.util.m"
    MR_Word make__util__OptionValue_18;

#line 1740 "make.util.m"
    {
#line 1740 "make.util.m"
      libs__globals__lookup_bool_option_3_p_0(make__util__Globals_5, (MR_Integer) 50, &make__util__OptionValue_18);
    }
#line 1745 "make.util.m"
#line 1745 "make.util.m"
    switch (make__util__OptionValue_18) {
#line 1745 "make.util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1745 "make.util.m"
      case (MR_Integer) 0:
#line 1746 "make.util.m"
        {
#line 1746 "make.util.m"
        }
#line 1745 "make.util.m"
        break;
#line 1745 "make.util.m"
      case (MR_Integer) 1:
#line 1742 "make.util.m"
        {
#line 1743 "make.util.m"
          void MR_CALL (* make__util__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), make__util__P_6, (MR_Integer) 1)));
#line 1743 "make.util.m"
          MR_Box make__util__conv1_STATE_VARIABLE_IO_13_19;

#line 1743 "make.util.m"
          {
#line 1743 "make.util.m"
            make__util__func_0(((MR_Box) make__util__P_6), ((MR_Box) ((MR_Integer) 0)), &make__util__conv1_STATE_VARIABLE_IO_13_19);
          }
#line 1744 "make.util.m"
          {
#line 1744 "make.util.m"
            mercury__io__flush_output_2_p_0();
#line 1744 "make.util.m"
            return;
          }
#line 1742 "make.util.m"
        }
#line 1745 "make.util.m"
        break;
#line 1745 "make.util.m"
    }
#line 1736 "make.util.m"
  }
#line 257 "make.util.m"
}

#line 251 "make.util.m"
void MR_CALL 
make__util__debug_msg_4_p_0(
#line 251 "make.util.m"
  MR_Word make__util__Globals_5,
#line 251 "make.util.m"
  MR_Word make__util__P_6)
#line 251 "make.util.m"
{
#line 1733 "make.util.m"
  {
#line 1733 "make.util.m"
    MR_bool make__util__succeeded;
#line 1733 "make.util.m"
    MR_Word make__util__OptionValue_18;

#line 1740 "make.util.m"
    {
#line 1740 "make.util.m"
      libs__globals__lookup_bool_option_3_p_0(make__util__Globals_5, (MR_Integer) 76, &make__util__OptionValue_18);
    }
#line 1745 "make.util.m"
#line 1745 "make.util.m"
    switch (make__util__OptionValue_18) {
#line 1745 "make.util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1745 "make.util.m"
      case (MR_Integer) 0:
#line 1746 "make.util.m"
        {
#line 1746 "make.util.m"
        }
#line 1745 "make.util.m"
        break;
#line 1745 "make.util.m"
      case (MR_Integer) 1:
#line 1742 "make.util.m"
        {
#line 1743 "make.util.m"
          void MR_CALL (* make__util__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), make__util__P_6, (MR_Integer) 1)));
#line 1743 "make.util.m"
          MR_Box make__util__conv1_STATE_VARIABLE_IO_13_19;

#line 1743 "make.util.m"
          {
#line 1743 "make.util.m"
            make__util__func_0(((MR_Box) make__util__P_6), ((MR_Box) ((MR_Integer) 0)), &make__util__conv1_STATE_VARIABLE_IO_13_19);
          }
#line 1744 "make.util.m"
          {
#line 1744 "make.util.m"
            mercury__io__flush_output_2_p_0();
#line 1744 "make.util.m"
            return;
          }
#line 1742 "make.util.m"
        }
#line 1745 "make.util.m"
        break;
#line 1745 "make.util.m"
    }
#line 1733 "make.util.m"
  }
#line 251 "make.util.m"
}

#line 236 "make.util.m"
MR_bool MR_CALL 
make__util__target_is_grade_or_arch_dependent_1_p_0(
#line 236 "make.util.m"
  MR_Word make__util__Target_2)
#line 236 "make.util.m"
{
#line 1707 "make.util.m"
  {
#line 1707 "make.util.m"
    MR_bool make__util__succeeded;

#line 1707 "make.util.m"
#line 1707 "make.util.m"
    switch (MR_tag((MR_Word) make__util__Target_2)) {
#line 1707 "make.util.m"
      default:
#line 1707 "make.util.m"
        make__util__succeeded = MR_FALSE;
#line 1707 "make.util.m"
        break;
#line 1707 "make.util.m"
      case (MR_Integer) 0:
#line 1707 "make.util.m"
#line 1707 "make.util.m"
        switch (MR_unmkbody(make__util__Target_2)) {
#line 1707 "make.util.m"
          default:
#line 1707 "make.util.m"
            make__util__succeeded = MR_FALSE;
#line 1707 "make.util.m"
            break;
#line 1707 "make.util.m"
          case (MR_Integer) 6:
#line 1727 "make.util.m"
            make__util__succeeded = MR_TRUE;
#line 1707 "make.util.m"
            break;
#line 1707 "make.util.m"
          case (MR_Integer) 7:
#line 1727 "make.util.m"
            make__util__succeeded = MR_TRUE;
#line 1707 "make.util.m"
            break;
#line 1707 "make.util.m"
          case (MR_Integer) 8:
#line 1727 "make.util.m"
            make__util__succeeded = MR_TRUE;
#line 1707 "make.util.m"
            break;
#line 1707 "make.util.m"
          case (MR_Integer) 9:
#line 1727 "make.util.m"
            make__util__succeeded = MR_TRUE;
#line 1707 "make.util.m"
            break;
#line 1707 "make.util.m"
          case (MR_Integer) 10:
#line 1727 "make.util.m"
            make__util__succeeded = MR_TRUE;
#line 1707 "make.util.m"
            break;
#line 1707 "make.util.m"
          case (MR_Integer) 11:
#line 1727 "make.util.m"
            make__util__succeeded = MR_TRUE;
#line 1707 "make.util.m"
            break;
#line 1707 "make.util.m"
          case (MR_Integer) 12:
#line 1727 "make.util.m"
            make__util__succeeded = MR_TRUE;
#line 1707 "make.util.m"
            break;
#line 1707 "make.util.m"
          case (MR_Integer) 13:
#line 1727 "make.util.m"
            make__util__succeeded = MR_TRUE;
#line 1707 "make.util.m"
            break;
#line 1707 "make.util.m"
          case (MR_Integer) 14:
#line 1727 "make.util.m"
            make__util__succeeded = MR_TRUE;
#line 1707 "make.util.m"
            break;
#line 1707 "make.util.m"
          case (MR_Integer) 15:
#line 1727 "make.util.m"
            make__util__succeeded = MR_TRUE;
#line 1707 "make.util.m"
            break;
#line 1707 "make.util.m"
          case (MR_Integer) 16:
#line 1727 "make.util.m"
            make__util__succeeded = MR_TRUE;
#line 1707 "make.util.m"
            break;
#line 1707 "make.util.m"
          case (MR_Integer) 17:
#line 1727 "make.util.m"
            make__util__succeeded = MR_TRUE;
#line 1707 "make.util.m"
            break;
#line 1707 "make.util.m"
        }
#line 1707 "make.util.m"
        break;
#line 1707 "make.util.m"
      case (MR_Integer) 1:
#line 1707 "make.util.m"
        {
#line 1707 "make.util.m"
          MR_Word make__util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__util__Target_2, (MR_Integer) 0)));

#line 11504 "make.util.c"
          make__util__succeeded = (make__util__V_14_14 == (MR_Integer) 1);
#line 1707 "make.util.m"
        }
#line 1707 "make.util.m"
        break;
#line 1707 "make.util.m"
      case (MR_Integer) 2:
#line 1728 "make.util.m"
        make__util__succeeded = MR_TRUE;
#line 1707 "make.util.m"
        break;
#line 1707 "make.util.m"
      case (MR_Integer) 3:
#line 1707 "make.util.m"
#line 1707 "make.util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__util__Target_2, (MR_Integer) 0)))) {
#line 1707 "make.util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1707 "make.util.m"
          case (MR_Integer) 0:
#line 1728 "make.util.m"
            make__util__succeeded = MR_TRUE;
#line 1707 "make.util.m"
            break;
#line 1707 "make.util.m"
          case (MR_Integer) 1:
#line 1728 "make.util.m"
            make__util__succeeded = MR_TRUE;
#line 1707 "make.util.m"
            break;
#line 1707 "make.util.m"
          case (MR_Integer) 2:
#line 1728 "make.util.m"
            make__util__succeeded = MR_TRUE;
#line 1707 "make.util.m"
            break;
#line 1707 "make.util.m"
        }
#line 1707 "make.util.m"
        break;
#line 1707 "make.util.m"
    }
#line 1707 "make.util.m"
    return make__util__succeeded;
#line 1707 "make.util.m"
  }
#line 236 "make.util.m"
}

#line 234 "make.util.m"
MR_bool MR_CALL 
make__util__timestamp_extension_2_f_0(
#line 234 "make.util.m"
  MR_Word make__util__Globals_1,
#line 234 "make.util.m"
  MR_Word make__util__HeadVar__2_2,
#line 234 "make.util.m"
  MR_String * make__util__HeadVar__3_3)
#line 234 "make.util.m"
{
#line 1642 "make.util.m"
  {
#line 1642 "make.util.m"
    MR_bool make__util__succeeded;

#line 1642 "make.util.m"
    {
#line 1642 "make.util.m"
      return make__util__succeeded = make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_105_109_101_115_116_97_109_112_95_101_120_116_101_110_115_105_111_110_95_95_91_49_93_95_48_2_f_0(make__util__HeadVar__2_2, make__util__HeadVar__3_3);
    }
#line 1642 "make.util.m"
    return make__util__succeeded;
#line 1642 "make.util.m"
  }
#line 234 "make.util.m"
}

#line 228 "make.util.m"
void MR_CALL 
make__util__linked_target_file_name_6_p_0(
#line 228 "make.util.m"
  MR_Word make__util__Globals_7,
#line 228 "make.util.m"
  MR_Word make__util__ModuleName_8,
#line 228 "make.util.m"
  MR_Word make__util__TargetType_9,
#line 228 "make.util.m"
  MR_String * make__util__FileName_10)
#line 228 "make.util.m"
{
#line 1496 "make.util.m"
  {
#line 1496 "make.util.m"
    MR_bool make__util__succeeded;

#line 1496 "make.util.m"
#line 1496 "make.util.m"
    switch (make__util__TargetType_9) {
#line 1496 "make.util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1496 "make.util.m"
      case (MR_Integer) 3:
#line 1511 "make.util.m"
        {
#line 1512 "make.util.m"
          {
#line 1512 "make.util.m"
            parse_tree__file_names__module_name_to_file_name_7_p_0(make__util__Globals_7, make__util__ModuleName_8, (MR_String) ".exe", (MR_Integer) 1, make__util__FileName_10);
#line 1512 "make.util.m"
            return;
          }
#line 1511 "make.util.m"
        }
#line 1496 "make.util.m"
        break;
#line 1496 "make.util.m"
      case (MR_Integer) 4:
#line 1515 "make.util.m"
        {
#line 1516 "make.util.m"
          {
#line 1516 "make.util.m"
            parse_tree__file_names__module_name_to_file_name_7_p_0(make__util__Globals_7, make__util__ModuleName_8, (MR_String) ".dll", (MR_Integer) 1, make__util__FileName_10);
#line 1516 "make.util.m"
            return;
          }
#line 1515 "make.util.m"
        }
#line 1496 "make.util.m"
        break;
#line 1496 "make.util.m"
      case (MR_Integer) 8:
#line 1532 "make.util.m"
        {
#line 1533 "make.util.m"
          {
#line 1533 "make.util.m"
            parse_tree__file_names__module_name_to_lib_file_name_8_p_0(make__util__Globals_7, (MR_String) "lib", make__util__ModuleName_8, (MR_String) ".beams", (MR_Integer) 1, make__util__FileName_10);
#line 1533 "make.util.m"
            return;
          }
#line 1532 "make.util.m"
        }
#line 1496 "make.util.m"
        break;
#line 1496 "make.util.m"
      case (MR_Integer) 7:
#line 1519 "make.util.m"
        {
#line 1523 "make.util.m"
          {
#line 1523 "make.util.m"
            parse_tree__file_names__module_name_to_file_name_7_p_0(make__util__Globals_7, make__util__ModuleName_8, (MR_String) "", (MR_Integer) 1, make__util__FileName_10);
#line 1523 "make.util.m"
            return;
          }
#line 1519 "make.util.m"
        }
#line 1496 "make.util.m"
        break;
#line 1496 "make.util.m"
      case (MR_Integer) 0:
#line 1496 "make.util.m"
        {
#line 1496 "make.util.m"
          MR_String make__util__Ext_12;

#line 1497 "make.util.m"
          {
#line 1497 "make.util.m"
            libs__globals__lookup_string_option_3_p_0(make__util__Globals_7, (MR_Integer) 577, &make__util__Ext_12);
          }
#line 1498 "make.util.m"
          {
#line 1498 "make.util.m"
            parse_tree__file_names__module_name_to_file_name_7_p_0(make__util__Globals_7, make__util__ModuleName_8, make__util__Ext_12, (MR_Integer) 1, make__util__FileName_10);
#line 1498 "make.util.m"
            return;
          }
#line 1496 "make.util.m"
        }
#line 1496 "make.util.m"
        break;
#line 1496 "make.util.m"
      case (MR_Integer) 6:
#line 1496 "make.util.m"
      case (MR_Integer) 5:
#line 1528 "make.util.m"
        {
#line 1529 "make.util.m"
          {
#line 1529 "make.util.m"
            parse_tree__file_names__module_name_to_file_name_7_p_0(make__util__Globals_7, make__util__ModuleName_8, (MR_String) ".jar", (MR_Integer) 1, make__util__FileName_10);
#line 1529 "make.util.m"
            return;
          }
#line 1528 "make.util.m"
        }
#line 1496 "make.util.m"
        break;
#line 1496 "make.util.m"
      case (MR_Integer) 2:
#line 1506 "make.util.m"
        {
#line 1506 "make.util.m"
          MR_String make__util__Ext_43;

#line 1507 "make.util.m"
          {
#line 1507 "make.util.m"
            libs__globals__lookup_string_option_3_p_0(make__util__Globals_7, (MR_Integer) 575, &make__util__Ext_43);
          }
#line 1508 "make.util.m"
          {
#line 1508 "make.util.m"
            parse_tree__file_names__module_name_to_lib_file_name_8_p_0(make__util__Globals_7, (MR_String) "lib", make__util__ModuleName_8, make__util__Ext_43, (MR_Integer) 1, make__util__FileName_10);
#line 1508 "make.util.m"
            return;
          }
#line 1506 "make.util.m"
        }
#line 1496 "make.util.m"
        break;
#line 1496 "make.util.m"
      case (MR_Integer) 1:
#line 1501 "make.util.m"
        {
#line 1501 "make.util.m"
          MR_String make__util__Ext_42;

#line 1502 "make.util.m"
          {
#line 1502 "make.util.m"
            libs__globals__lookup_string_option_3_p_0(make__util__Globals_7, (MR_Integer) 576, &make__util__Ext_42);
          }
#line 1503 "make.util.m"
          {
#line 1503 "make.util.m"
            parse_tree__file_names__module_name_to_lib_file_name_8_p_0(make__util__Globals_7, (MR_String) "lib", make__util__ModuleName_8, make__util__Ext_42, (MR_Integer) 1, make__util__FileName_10);
#line 1503 "make.util.m"
            return;
          }
#line 1501 "make.util.m"
        }
#line 1496 "make.util.m"
        break;
#line 1496 "make.util.m"
    }
#line 1496 "make.util.m"
  }
#line 228 "make.util.m"
}

#line 225 "make.util.m"
MR_bool MR_CALL 
make__util__target_extension_synonym_2_p_0(
#line 225 "make.util.m"
  MR_String make__util__HeadVar__1_1,
#line 225 "make.util.m"
  MR_Word * make__util__HeadVar__2_2)
#line 225 "make.util.m"
{
#line 1492 "make.util.m"
  {
#line 1492 "make.util.m"
    MR_bool make__util__succeeded = (strcmp(make__util__HeadVar__1_1, (MR_String) ".csharp") == 0);

#line 1492 "make.util.m"
    if (make__util__succeeded)
#line 1492 "make.util.m"
      {
#line 1492 "make.util.m"
        *make__util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12));
#line 1492 "make.util.m"
        make__util__succeeded = MR_TRUE;
#line 1492 "make.util.m"
      }
#line 1492 "make.util.m"
    return make__util__succeeded;
#line 1492 "make.util.m"
  }
#line 225 "make.util.m"
}

#line 223 "make.util.m"
void MR_CALL 
make__util__target_extension_2_f_1(
#line 223 "make.util.m"
  MR_Word make__util__Globals_1,
#line 223 "make.util.m"
  MR_Word * make__util__HeadVar__2_2,
#line 223 "make.util.m"
  MR_Word make__util__HeadVar__3_3,
#line 223 "make.util.m"
  MR_Cont make__util__cont,
#line 223 "make.util.m"
  void * make__util__cont_env_ptr)
#line 223 "make.util.m"
{
#line 1459 "make.util.m"
  {
#line 1459 "make.util.m"
    MR_bool make__util__succeeded;

#line 1459 "make.util.m"
    {
#line 1459 "make.util.m"
      MR_String make__util__V_5_5;

#line 1459 "make.util.m"
      *make__util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1459 "make.util.m"
      make__util__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), make__util__HeadVar__3_3, (MR_Integer) 0)));
#line 1459 "make.util.m"
      make__util__succeeded = (strcmp(make__util__V_5_5, (MR_String) ".m") == 0);
#line 1459 "make.util.m"
      if (make__util__succeeded)
#line 1459 "make.util.m"
        {
#line 1459 "make.util.m"
          make__util__cont(make__util__cont_env_ptr);
        }
#line 1459 "make.util.m"
    }
#line 1460 "make.util.m"
    {
#line 1460 "make.util.m"
      MR_String make__util__V_7_7;

#line 1460 "make.util.m"
      *make__util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1460 "make.util.m"
      make__util__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(1), make__util__HeadVar__3_3, (MR_Integer) 0)));
#line 1460 "make.util.m"
      make__util__succeeded = (strcmp(make__util__V_7_7, (MR_String) ".err") == 0);
#line 1460 "make.util.m"
      if (make__util__succeeded)
#line 1460 "make.util.m"
        {
#line 1460 "make.util.m"
          make__util__cont(make__util__cont_env_ptr);
        }
#line 1460 "make.util.m"
    }
#line 1461 "make.util.m"
    {
#line 1461 "make.util.m"
      MR_String make__util__V_9_9;

#line 1461 "make.util.m"
      *make__util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 1461 "make.util.m"
      make__util__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(1), make__util__HeadVar__3_3, (MR_Integer) 0)));
#line 1461 "make.util.m"
      make__util__succeeded = (strcmp(make__util__V_9_9, (MR_String) ".int0") == 0);
#line 1461 "make.util.m"
      if (make__util__succeeded)
#line 1461 "make.util.m"
        {
#line 1461 "make.util.m"
          make__util__cont(make__util__cont_env_ptr);
        }
#line 1461 "make.util.m"
    }
#line 1462 "make.util.m"
    {
#line 1462 "make.util.m"
      MR_String make__util__V_11_11;

#line 1462 "make.util.m"
      *make__util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 1462 "make.util.m"
      make__util__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(1), make__util__HeadVar__3_3, (MR_Integer) 0)));
#line 1462 "make.util.m"
      make__util__succeeded = (strcmp(make__util__V_11_11, (MR_String) ".int") == 0);
#line 1462 "make.util.m"
      if (make__util__succeeded)
#line 1462 "make.util.m"
        {
#line 1462 "make.util.m"
          make__util__cont(make__util__cont_env_ptr);
        }
#line 1462 "make.util.m"
    }
#line 1463 "make.util.m"
    {
#line 1463 "make.util.m"
      MR_String make__util__V_13_13;

#line 1463 "make.util.m"
      *make__util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4));
#line 1463 "make.util.m"
      make__util__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(1), make__util__HeadVar__3_3, (MR_Integer) 0)));
#line 1463 "make.util.m"
      make__util__succeeded = (strcmp(make__util__V_13_13, (MR_String) ".int2") == 0);
#line 1463 "make.util.m"
      if (make__util__succeeded)
#line 1463 "make.util.m"
        {
#line 1463 "make.util.m"
          make__util__cont(make__util__cont_env_ptr);
        }
#line 1463 "make.util.m"
    }
#line 1464 "make.util.m"
    {
#line 1464 "make.util.m"
      MR_String make__util__V_15_15;

#line 1464 "make.util.m"
      *make__util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 1464 "make.util.m"
      make__util__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(1), make__util__HeadVar__3_3, (MR_Integer) 0)));
#line 1464 "make.util.m"
      make__util__succeeded = (strcmp(make__util__V_15_15, (MR_String) ".int3") == 0);
#line 1464 "make.util.m"
      if (make__util__succeeded)
#line 1464 "make.util.m"
        {
#line 1464 "make.util.m"
          make__util__cont(make__util__cont_env_ptr);
        }
#line 1464 "make.util.m"
    }
#line 1465 "make.util.m"
    {
#line 1465 "make.util.m"
      MR_String make__util__V_17_17;

#line 1465 "make.util.m"
      *make__util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
#line 1465 "make.util.m"
      make__util__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(1), make__util__HeadVar__3_3, (MR_Integer) 0)));
#line 1465 "make.util.m"
      make__util__succeeded = (strcmp(make__util__V_17_17, (MR_String) ".opt") == 0);
#line 1465 "make.util.m"
      if (make__util__succeeded)
#line 1465 "make.util.m"
        {
#line 1465 "make.util.m"
          make__util__cont(make__util__cont_env_ptr);
        }
#line 1465 "make.util.m"
    }
#line 1466 "make.util.m"
    {
#line 1466 "make.util.m"
      MR_String make__util__V_19_19;

#line 1466 "make.util.m"
      *make__util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
#line 1466 "make.util.m"
      make__util__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(1), make__util__HeadVar__3_3, (MR_Integer) 0)));
#line 1466 "make.util.m"
      make__util__succeeded = (strcmp(make__util__V_19_19, (MR_String) ".analysis") == 0);
#line 1466 "make.util.m"
      if (make__util__succeeded)
#line 1466 "make.util.m"
        {
#line 1466 "make.util.m"
          make__util__cont(make__util__cont_env_ptr);
        }
#line 1466 "make.util.m"
    }
#line 1467 "make.util.m"
    {
#line 1467 "make.util.m"
      MR_String make__util__V_21_21;

#line 1467 "make.util.m"
      *make__util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 1467 "make.util.m"
      make__util__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(1), make__util__HeadVar__3_3, (MR_Integer) 0)));
#line 1467 "make.util.m"
      make__util__succeeded = (strcmp(make__util__V_21_21, (MR_String) ".track_flags") == 0);
#line 1467 "make.util.m"
      if (make__util__succeeded)
#line 1467 "make.util.m"
        {
#line 1467 "make.util.m"
          make__util__cont(make__util__cont_env_ptr);
        }
#line 1467 "make.util.m"
    }
#line 1468 "make.util.m"
    {
#line 1468 "make.util.m"
      MR_String make__util__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(1), make__util__HeadVar__3_3, (MR_Integer) 0)));

#line 1468 "make.util.m"
      make__util__succeeded = (strcmp(make__util__V_24_24, (MR_String) ".mih") == 0);
#line 1468 "make.util.m"
      if (make__util__succeeded)
#line 1468 "make.util.m"
        {
#line 1468 "make.util.m"
          *make__util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_3[22]);
#line 1468 "make.util.m"
          make__util__succeeded = MR_TRUE;
#line 1468 "make.util.m"
        }
#line 1468 "make.util.m"
      if (make__util__succeeded)
#line 1468 "make.util.m"
        {
#line 1468 "make.util.m"
          make__util__cont(make__util__cont_env_ptr);
        }
#line 1468 "make.util.m"
    }
#line 1469 "make.util.m"
    {
#line 1469 "make.util.m"
      MR_String make__util__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(1), make__util__HeadVar__3_3, (MR_Integer) 0)));

#line 1469 "make.util.m"
      make__util__succeeded = (strcmp(make__util__V_27_27, (MR_String) ".mh") == 0);
#line 1469 "make.util.m"
      if (make__util__succeeded)
#line 1469 "make.util.m"
        {
#line 1469 "make.util.m"
          *make__util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_3[23]);
#line 1469 "make.util.m"
          make__util__succeeded = MR_TRUE;
#line 1469 "make.util.m"
        }
#line 1469 "make.util.m"
      if (make__util__succeeded)
#line 1469 "make.util.m"
        {
#line 1469 "make.util.m"
          make__util__cont(make__util__cont_env_ptr);
        }
#line 1469 "make.util.m"
    }
#line 1470 "make.util.m"
    {
#line 1470 "make.util.m"
      MR_String make__util__V_29_29;

#line 1470 "make.util.m"
      *make__util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
#line 1470 "make.util.m"
      make__util__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(1), make__util__HeadVar__3_3, (MR_Integer) 0)));
#line 1470 "make.util.m"
      make__util__succeeded = (strcmp(make__util__V_29_29, (MR_String) ".c") == 0);
#line 1470 "make.util.m"
      if (make__util__succeeded)
#line 1470 "make.util.m"
        {
#line 1470 "make.util.m"
          make__util__cont(make__util__cont_env_ptr);
        }
#line 1470 "make.util.m"
    }
#line 1471 "make.util.m"
    {
#line 1471 "make.util.m"
      MR_String make__util__V_31_31;

#line 1471 "make.util.m"
      *make__util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10));
#line 1471 "make.util.m"
      make__util__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(1), make__util__HeadVar__3_3, (MR_Integer) 0)));
#line 1471 "make.util.m"
      make__util__succeeded = (strcmp(make__util__V_31_31, (MR_String) ".il") == 0);
#line 1471 "make.util.m"
      if (make__util__succeeded)
#line 1471 "make.util.m"
        {
#line 1471 "make.util.m"
          make__util__cont(make__util__cont_env_ptr);
        }
#line 1471 "make.util.m"
    }
#line 1474 "make.util.m"
    {
#line 1474 "make.util.m"
      MR_String make__util__V_33_33;

#line 1474 "make.util.m"
      *make__util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 1474 "make.util.m"
      make__util__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(1), make__util__HeadVar__3_3, (MR_Integer) 0)));
#line 1474 "make.util.m"
      make__util__succeeded = (strcmp(make__util__V_33_33, (MR_String) ".dll") == 0);
#line 1474 "make.util.m"
      if (make__util__succeeded)
#line 1474 "make.util.m"
        {
#line 1474 "make.util.m"
          make__util__cont(make__util__cont_env_ptr);
        }
#line 1474 "make.util.m"
    }
#line 1475 "make.util.m"
    {
#line 1475 "make.util.m"
      MR_String make__util__V_35_35;

#line 1475 "make.util.m"
      *make__util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12));
#line 1475 "make.util.m"
      make__util__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(1), make__util__HeadVar__3_3, (MR_Integer) 0)));
#line 1475 "make.util.m"
      make__util__succeeded = (strcmp(make__util__V_35_35, (MR_String) ".cs") == 0);
#line 1475 "make.util.m"
      if (make__util__succeeded)
#line 1475 "make.util.m"
        {
#line 1475 "make.util.m"
          make__util__cont(make__util__cont_env_ptr);
        }
#line 1475 "make.util.m"
    }
#line 1476 "make.util.m"
    {
#line 1476 "make.util.m"
      MR_String make__util__V_37_37;

#line 1476 "make.util.m"
      *make__util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13));
#line 1476 "make.util.m"
      make__util__V_37_37 = ((MR_String) (MR_hl_field(MR_mktag(1), make__util__HeadVar__3_3, (MR_Integer) 0)));
#line 1476 "make.util.m"
      make__util__succeeded = (strcmp(make__util__V_37_37, (MR_String) ".java") == 0);
#line 1476 "make.util.m"
      if (make__util__succeeded)
#line 1476 "make.util.m"
        {
#line 1476 "make.util.m"
          make__util__cont(make__util__cont_env_ptr);
        }
#line 1476 "make.util.m"
    }
#line 1477 "make.util.m"
    {
#line 1477 "make.util.m"
      MR_String make__util__V_39_39;

#line 1477 "make.util.m"
      *make__util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14));
#line 1477 "make.util.m"
      make__util__V_39_39 = ((MR_String) (MR_hl_field(MR_mktag(1), make__util__HeadVar__3_3, (MR_Integer) 0)));
#line 1477 "make.util.m"
      make__util__succeeded = (strcmp(make__util__V_39_39, (MR_String) ".class") == 0);
#line 1477 "make.util.m"
      if (make__util__succeeded)
#line 1477 "make.util.m"
        {
#line 1477 "make.util.m"
          make__util__cont(make__util__cont_env_ptr);
        }
#line 1477 "make.util.m"
    }
#line 1478 "make.util.m"
    {
#line 1478 "make.util.m"
      MR_String make__util__V_41_41;

#line 1478 "make.util.m"
      *make__util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 15));
#line 1478 "make.util.m"
      make__util__V_41_41 = ((MR_String) (MR_hl_field(MR_mktag(1), make__util__HeadVar__3_3, (MR_Integer) 0)));
#line 1478 "make.util.m"
      make__util__succeeded = (strcmp(make__util__V_41_41, (MR_String) ".hrl") == 0);
#line 1478 "make.util.m"
      if (make__util__succeeded)
#line 1478 "make.util.m"
        {
#line 1478 "make.util.m"
          make__util__cont(make__util__cont_env_ptr);
        }
#line 1478 "make.util.m"
    }
#line 1479 "make.util.m"
    {
#line 1479 "make.util.m"
      MR_String make__util__V_43_43;

#line 1479 "make.util.m"
      *make__util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16));
#line 1479 "make.util.m"
      make__util__V_43_43 = ((MR_String) (MR_hl_field(MR_mktag(1), make__util__HeadVar__3_3, (MR_Integer) 0)));
#line 1479 "make.util.m"
      make__util__succeeded = (strcmp(make__util__V_43_43, (MR_String) ".erl") == 0);
#line 1479 "make.util.m"
      if (make__util__succeeded)
#line 1479 "make.util.m"
        {
#line 1479 "make.util.m"
          make__util__cont(make__util__cont_env_ptr);
        }
#line 1479 "make.util.m"
    }
#line 1480 "make.util.m"
    {
#line 1480 "make.util.m"
      MR_String make__util__V_45_45;

#line 1480 "make.util.m"
      *make__util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17));
#line 1480 "make.util.m"
      make__util__V_45_45 = ((MR_String) (MR_hl_field(MR_mktag(1), make__util__HeadVar__3_3, (MR_Integer) 0)));
#line 1480 "make.util.m"
      make__util__succeeded = (strcmp(make__util__V_45_45, (MR_String) ".beam") == 0);
#line 1480 "make.util.m"
      if (make__util__succeeded)
#line 1480 "make.util.m"
        {
#line 1480 "make.util.m"
          make__util__cont(make__util__cont_env_ptr);
        }
#line 1480 "make.util.m"
    }
#line 1481 "make.util.m"
    {
#line 1481 "make.util.m"
      MR_Word make__util__PIC_47;
#line 1481 "make.util.m"
      MR_String make__util__Ext_48 = ((MR_String) (MR_hl_field(MR_mktag(1), make__util__HeadVar__3_3, (MR_Integer) 0)));

#line 1482 "make.util.m"
      {
#line 1482 "make.util.m"
        make__util__succeeded = backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_1(make__util__Globals_1, &make__util__PIC_47, make__util__Ext_48);
      }
#line 1481 "make.util.m"
      if (make__util__succeeded)
#line 1481 "make.util.m"
        {
#line 1481 "make.util.m"
          {
#line 1481 "make.util.m"
            MR_Word base;
#line 1481 "make.util.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1481 "make.util.m"
            *make__util__HeadVar__2_2 = base;
#line 1481 "make.util.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (make__util__PIC_47));
#line 1481 "make.util.m"
          }
#line 1481 "make.util.m"
          make__util__succeeded = MR_TRUE;
#line 1481 "make.util.m"
        }
#line 1481 "make.util.m"
      if (make__util__succeeded)
#line 1481 "make.util.m"
        {
#line 1481 "make.util.m"
          make__util__cont(make__util__cont_env_ptr);
        }
#line 1481 "make.util.m"
    }
#line 1483 "make.util.m"
    {
#line 1483 "make.util.m"
      MR_String make__util__V_50_50;

#line 1483 "make.util.m"
      *make__util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 18));
#line 1483 "make.util.m"
      make__util__V_50_50 = ((MR_String) (MR_hl_field(MR_mktag(1), make__util__HeadVar__3_3, (MR_Integer) 0)));
#line 1483 "make.util.m"
      make__util__succeeded = (strcmp(make__util__V_50_50, (MR_String) ".xml") == 0);
#line 1483 "make.util.m"
      if (make__util__succeeded)
#line 1483 "make.util.m"
        {
#line 1483 "make.util.m"
          make__util__cont(make__util__cont_env_ptr);
#line 1483 "make.util.m"
          return;
        }
#line 1483 "make.util.m"
    }
#line 1459 "make.util.m"
  }
#line 223 "make.util.m"
}

#line 222 "make.util.m"
MR_Word MR_CALL 
make__util__target_extension_2_f_0(
#line 222 "make.util.m"
  MR_Word make__util__Globals_1,
#line 222 "make.util.m"
  MR_Word make__util__HeadVar__2_2)
#line 222 "make.util.m"
{
#line 1459 "make.util.m"
  {
#line 1459 "make.util.m"
    MR_bool make__util__succeeded;
#line 1459 "make.util.m"
    MR_Word make__util__HeadVar__3_3;

#line 1459 "make.util.m"
#line 1459 "make.util.m"
    switch (MR_tag((MR_Word) make__util__HeadVar__2_2)) {
#line 1459 "make.util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1459 "make.util.m"
      case (MR_Integer) 0:
#line 1459 "make.util.m"
#line 1459 "make.util.m"
        switch (MR_unmkbody(make__util__HeadVar__2_2)) {
#line 1459 "make.util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1459 "make.util.m"
          case (MR_Integer) 0:
#line 1459 "make.util.m"
            {
#line 1459 "make.util.m"
              make__util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_3[18]);
#line 1459 "make.util.m"
            }
#line 1459 "make.util.m"
            break;
#line 1459 "make.util.m"
          case (MR_Integer) 1:
#line 1460 "make.util.m"
            {
#line 1460 "make.util.m"
              make__util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_3[9]);
#line 1460 "make.util.m"
            }
#line 1459 "make.util.m"
            break;
#line 1459 "make.util.m"
          case (MR_Integer) 2:
#line 1461 "make.util.m"
            {
#line 1461 "make.util.m"
              make__util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_3[16]);
#line 1461 "make.util.m"
            }
#line 1459 "make.util.m"
            break;
#line 1459 "make.util.m"
          case (MR_Integer) 3:
#line 1462 "make.util.m"
            {
#line 1462 "make.util.m"
              make__util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_3[15]);
#line 1462 "make.util.m"
            }
#line 1459 "make.util.m"
            break;
#line 1459 "make.util.m"
          case (MR_Integer) 4:
#line 1463 "make.util.m"
            {
#line 1463 "make.util.m"
              make__util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_3[17]);
#line 1463 "make.util.m"
            }
#line 1459 "make.util.m"
            break;
#line 1459 "make.util.m"
          case (MR_Integer) 5:
#line 1464 "make.util.m"
            {
#line 1464 "make.util.m"
              make__util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_3[20]);
#line 1464 "make.util.m"
            }
#line 1459 "make.util.m"
            break;
#line 1459 "make.util.m"
          case (MR_Integer) 6:
#line 1465 "make.util.m"
            {
#line 1465 "make.util.m"
              make__util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_3[12]);
#line 1465 "make.util.m"
            }
#line 1459 "make.util.m"
            break;
#line 1459 "make.util.m"
          case (MR_Integer) 7:
#line 1466 "make.util.m"
            {
#line 1466 "make.util.m"
              make__util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_3[1]);
#line 1466 "make.util.m"
            }
#line 1459 "make.util.m"
            break;
#line 1459 "make.util.m"
          case (MR_Integer) 8:
#line 1467 "make.util.m"
            {
#line 1467 "make.util.m"
              make__util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_3[19]);
#line 1467 "make.util.m"
            }
#line 1459 "make.util.m"
            break;
#line 1459 "make.util.m"
          case (MR_Integer) 9:
#line 1470 "make.util.m"
            {
#line 1470 "make.util.m"
              make__util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_3[2]);
#line 1470 "make.util.m"
            }
#line 1459 "make.util.m"
            break;
#line 1459 "make.util.m"
          case (MR_Integer) 10:
#line 1471 "make.util.m"
            {
#line 1471 "make.util.m"
              make__util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_3[11]);
#line 1471 "make.util.m"
            }
#line 1459 "make.util.m"
            break;
#line 1459 "make.util.m"
          case (MR_Integer) 11:
#line 1474 "make.util.m"
            {
#line 1474 "make.util.m"
              make__util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_3[10]);
#line 1474 "make.util.m"
            }
#line 1459 "make.util.m"
            break;
#line 1459 "make.util.m"
          case (MR_Integer) 12:
#line 1475 "make.util.m"
            {
#line 1475 "make.util.m"
              make__util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_3[5]);
#line 1475 "make.util.m"
            }
#line 1459 "make.util.m"
            break;
#line 1459 "make.util.m"
          case (MR_Integer) 13:
#line 1476 "make.util.m"
            {
#line 1476 "make.util.m"
              make__util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_3[14]);
#line 1476 "make.util.m"
            }
#line 1459 "make.util.m"
            break;
#line 1459 "make.util.m"
          case (MR_Integer) 14:
#line 1477 "make.util.m"
            {
#line 1477 "make.util.m"
              make__util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_3[13]);
#line 1477 "make.util.m"
            }
#line 1459 "make.util.m"
            break;
#line 1459 "make.util.m"
          case (MR_Integer) 15:
#line 1478 "make.util.m"
            {
#line 1478 "make.util.m"
              make__util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_3[8]);
#line 1478 "make.util.m"
            }
#line 1459 "make.util.m"
            break;
#line 1459 "make.util.m"
          case (MR_Integer) 16:
#line 1479 "make.util.m"
            {
#line 1479 "make.util.m"
              make__util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_3[7]);
#line 1479 "make.util.m"
            }
#line 1459 "make.util.m"
            break;
#line 1459 "make.util.m"
          case (MR_Integer) 17:
#line 1480 "make.util.m"
            {
#line 1480 "make.util.m"
              make__util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_3[6]);
#line 1480 "make.util.m"
            }
#line 1459 "make.util.m"
            break;
#line 1459 "make.util.m"
          case (MR_Integer) 18:
#line 1483 "make.util.m"
            {
#line 1483 "make.util.m"
              make__util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_3[21]);
#line 1483 "make.util.m"
            }
#line 1459 "make.util.m"
            break;
#line 1459 "make.util.m"
        }
#line 1459 "make.util.m"
        break;
#line 1459 "make.util.m"
      case (MR_Integer) 1:
#line 1459 "make.util.m"
        {
#line 1459 "make.util.m"
          MR_Word make__util__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__util__HeadVar__2_2, (MR_Integer) 0)));

#line 1459 "make.util.m"
#line 1459 "make.util.m"
          switch (make__util__V_59_59) {
#line 1459 "make.util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1459 "make.util.m"
            case (MR_Integer) 0:
#line 1469 "make.util.m"
              {
#line 1469 "make.util.m"
                make__util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_3[3]);
#line 1469 "make.util.m"
              }
#line 1459 "make.util.m"
              break;
#line 1459 "make.util.m"
            case (MR_Integer) 1:
#line 1468 "make.util.m"
              {
#line 1468 "make.util.m"
                make__util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_3[4]);
#line 1468 "make.util.m"
              }
#line 1459 "make.util.m"
              break;
#line 1459 "make.util.m"
          }
#line 1459 "make.util.m"
        }
#line 1459 "make.util.m"
        break;
#line 1459 "make.util.m"
      case (MR_Integer) 2:
#line 1481 "make.util.m"
        {
#line 1481 "make.util.m"
          MR_Word make__util__PIC_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__util__HeadVar__2_2, (MR_Integer) 0)));
#line 1481 "make.util.m"
          MR_String make__util__Ext_48;

#line 1482 "make.util.m"
          {
#line 1482 "make.util.m"
            backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(make__util__Globals_1, make__util__PIC_47, &make__util__Ext_48);
          }
#line 1481 "make.util.m"
          {
#line 1481 "make.util.m"
            make__util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1481 "make.util.m"
            MR_hl_field(MR_mktag(1), make__util__HeadVar__3_3, 0) = ((MR_Box) (make__util__Ext_48));
#line 1481 "make.util.m"
          }
#line 1481 "make.util.m"
        }
#line 1459 "make.util.m"
        break;
#line 1459 "make.util.m"
      case (MR_Integer) 3:
#line 1459 "make.util.m"
#line 1459 "make.util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__util__HeadVar__2_2, (MR_Integer) 0)))) {
#line 1459 "make.util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1459 "make.util.m"
          case (MR_Integer) 0:
#line 1487 "make.util.m"
            make__util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1459 "make.util.m"
            break;
#line 1459 "make.util.m"
          case (MR_Integer) 1:
#line 1486 "make.util.m"
            make__util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1459 "make.util.m"
            break;
#line 1459 "make.util.m"
          case (MR_Integer) 2:
#line 1488 "make.util.m"
            make__util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1459 "make.util.m"
            break;
#line 1459 "make.util.m"
        }
#line 1459 "make.util.m"
        break;
#line 1459 "make.util.m"
    }
#line 1459 "make.util.m"
    return make__util__HeadVar__3_3;
#line 1459 "make.util.m"
  }
#line 222 "make.util.m"
}

#line 1456 "make.util.m"
static MR_Box MR_CALL 
make__util__make_dependency_list_2_f_0_1(
#line 1456 "make.util.m"
  MR_Box make__util__closure_arg,
#line 1456 "make.util.m"
  MR_Box make__util__wrapper_arg_1)
#line 1456 "make.util.m"
{
#line 1456 "make.util.m"
  {
#line 1456 "make.util.m"
    MR_Box make__util__wrapper_arg_2;
#line 1456 "make.util.m"
    MR_Box make__util__closure = make__util__closure_arg;
#line 1456 "make.util.m"
    MR_Word make__util__conv0_HeadVar__3_9;

#line 1456 "make.util.m"
    {
#line 1456 "make.util.m"
      make__util__conv0_HeadVar__3_9 = make__util__IntroducedFrom__func__make_dependency_list__1456__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 3))), ((MR_Word) make__util__wrapper_arg_1));
    }
#line 1456 "make.util.m"
    make__util__wrapper_arg_2 = ((MR_Box) (make__util__conv0_HeadVar__3_9));
#line 1456 "make.util.m"
    return make__util__wrapper_arg_2;
#line 1456 "make.util.m"
  }
#line 1456 "make.util.m"
}

#line 218 "make.util.m"
MR_Word MR_CALL 
make__util__make_dependency_list_2_f_0(
#line 218 "make.util.m"
  MR_Word make__util__ModuleNames_4,
#line 218 "make.util.m"
  MR_Word make__util__FileType_5)
#line 218 "make.util.m"
{
#line 1455 "make.util.m"
  {
#line 1455 "make.util.m"
    MR_bool make__util__succeeded;
#line 1455 "make.util.m"
    MR_Word make__util__HeadVar__3_3;
#line 1455 "make.util.m"
    MR_Word make__util__V_7_7;

#line 1456 "make.util.m"
    {
#line 1456 "make.util.m"
      make__util__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1456 "make.util.m"
      MR_hl_field(MR_mktag(0), make__util__V_7_7, 0) = ((MR_Box) (&make__util_scalar_common_4[1]));
#line 1456 "make.util.m"
      MR_hl_field(MR_mktag(0), make__util__V_7_7, 1) = ((MR_Box) (make__util__make_dependency_list_2_f_0_1));
#line 1456 "make.util.m"
      MR_hl_field(MR_mktag(0), make__util__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1456 "make.util.m"
      MR_hl_field(MR_mktag(0), make__util__V_7_7, 3) = ((MR_Box) (make__util__FileType_5));
#line 1456 "make.util.m"
    }
#line 1456 "make.util.m"
    {
#line 1456 "make.util.m"
      make__util__HeadVar__3_3 = mercury__list__map_2_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0, make__util__V_7_7, make__util__ModuleNames_4);
    }
#line 1455 "make.util.m"
    return make__util__HeadVar__3_3;
#line 1455 "make.util.m"
  }
#line 218 "make.util.m"
}

#line 1452 "make.util.m"
static MR_Box MR_CALL 
make__util__make_target_file_list_2_f_0_1(
#line 1452 "make.util.m"
  MR_Box make__util__closure_arg,
#line 1452 "make.util.m"
  MR_Box make__util__wrapper_arg_1)
#line 1452 "make.util.m"
{
#line 1452 "make.util.m"
  {
#line 1452 "make.util.m"
    MR_Box make__util__wrapper_arg_2;
#line 1452 "make.util.m"
    MR_Box make__util__closure = make__util__closure_arg;
#line 1452 "make.util.m"
    MR_Word make__util__conv0_HeadVar__3_9;

#line 1452 "make.util.m"
    {
#line 1452 "make.util.m"
      make__util__conv0_HeadVar__3_9 = make__util__IntroducedFrom__func__make_target_file_list__1452__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__util__closure, (MR_Integer) 3))), ((MR_Word) make__util__wrapper_arg_1));
    }
#line 1452 "make.util.m"
    make__util__wrapper_arg_2 = ((MR_Box) (make__util__conv0_HeadVar__3_9));
#line 1452 "make.util.m"
    return make__util__wrapper_arg_2;
#line 1452 "make.util.m"
  }
#line 1452 "make.util.m"
}

#line 215 "make.util.m"
MR_Word MR_CALL 
make__util__make_target_file_list_2_f_0(
#line 215 "make.util.m"
  MR_Word make__util__ModuleNames_4,
#line 215 "make.util.m"
  MR_Word make__util__FileType_5)
#line 215 "make.util.m"
{
#line 1451 "make.util.m"
  {
#line 1451 "make.util.m"
    MR_bool make__util__succeeded;
#line 1451 "make.util.m"
    MR_Word make__util__HeadVar__3_3;
#line 1451 "make.util.m"
    MR_Word make__util__V_7_7;

#line 1452 "make.util.m"
    {
#line 1452 "make.util.m"
      make__util__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1452 "make.util.m"
      MR_hl_field(MR_mktag(0), make__util__V_7_7, 0) = ((MR_Box) (&make__util_scalar_common_4[0]));
#line 1452 "make.util.m"
      MR_hl_field(MR_mktag(0), make__util__V_7_7, 1) = ((MR_Box) (make__util__make_target_file_list_2_f_0_1));
#line 1452 "make.util.m"
      MR_hl_field(MR_mktag(0), make__util__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1452 "make.util.m"
      MR_hl_field(MR_mktag(0), make__util__V_7_7, 3) = ((MR_Box) (make__util__FileType_5));
#line 1452 "make.util.m"
    }
#line 1452 "make.util.m"
    {
#line 1452 "make.util.m"
      make__util__HeadVar__3_3 = mercury__list__map_2_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &make__make__type_ctor_info_target_file_0, make__util__V_7_7, make__util__ModuleNames_4);
    }
#line 1451 "make.util.m"
    return make__util__HeadVar__3_3;
#line 1451 "make.util.m"
  }
#line 215 "make.util.m"
}

#line 210 "make.util.m"
void MR_CALL 
make__util__make_remove_file_7_p_0(
#line 210 "make.util.m"
  MR_Word make__util__Globals_8,
#line 210 "make.util.m"
  MR_Word make__util__VerboseOption_9,
#line 210 "make.util.m"
  MR_String make__util__FileName_10,
#line 210 "make.util.m"
  MR_Word make__util__STATE_VARIABLE_Info_0_14,
#line 210 "make.util.m"
  MR_Word * make__util__STATE_VARIABLE_Info_15)
#line 210 "make.util.m"
{
#line 1435 "make.util.m"
  {
#line 1435 "make.util.m"
    MR_bool make__util__succeeded;
#line 1435 "make.util.m"
    MR_Word make__util__V_22_22;
#line 1435 "make.util.m"
    MR_Word make__util__V_23_23;
#line 1435 "make.util.m"
    MR_Word make__util__OptionValue_73;
#line 1438 "make.util.m"
    MR_Word make__util__V_13_13;
#line 1440 "make.util.m"
    MR_Word make__util__V_24_24;
#line 1440 "make.util.m"
    MR_Word make__util__V_25_25;
#line 1440 "make.util.m"
    MR_Word make__util__V_26_26;
#line 1440 "make.util.m"
    MR_Word make__util__V_27_27;
#line 1440 "make.util.m"
    MR_Word make__util__V_28_28;
#line 1440 "make.util.m"
    MR_Word make__util__V_29_29;
#line 1440 "make.util.m"
    MR_Word make__util__V_30_30;
#line 1440 "make.util.m"
    MR_Word make__util__V_31_31;
#line 1440 "make.util.m"
    MR_Word make__util__V_32_32;
#line 1440 "make.util.m"
    MR_Word make__util__V_33_33;
#line 1440 "make.util.m"
    MR_Word make__util__V_34_34;
#line 1440 "make.util.m"
    MR_Word make__util__V_35_35;
#line 1440 "make.util.m"
    MR_Word make__util__V_36_36;
#line 1440 "make.util.m"
    MR_Word make__util__V_37_37;
#line 1440 "make.util.m"
    MR_Word make__util__V_38_38;
#line 1440 "make.util.m"
    MR_Word make__util__V_39_39;
#line 1440 "make.util.m"
    MR_Word make__util__V_40_40;
#line 1440 "make.util.m"
    MR_Integer make__util__V_41_41;
#line 1440 "make.util.m"
    MR_Word make__util__V_42_42;
#line 1439 "make.util.m"
    MR_Word make__util__V_43_43;
#line 1439 "make.util.m"
    MR_Word make__util__V_45_45;
#line 1439 "make.util.m"
    MR_Word make__util__V_46_46;
#line 1439 "make.util.m"
    MR_Word make__util__V_47_47;
#line 1439 "make.util.m"
    MR_Word make__util__V_48_48;
#line 1439 "make.util.m"
    MR_Word make__util__V_49_49;
#line 1439 "make.util.m"
    MR_Word make__util__V_50_50;
#line 1439 "make.util.m"
    MR_Word make__util__V_51_51;
#line 1439 "make.util.m"
    MR_Word make__util__V_52_52;
#line 1439 "make.util.m"
    MR_Word make__util__V_53_53;
#line 1439 "make.util.m"
    MR_Word make__util__V_54_54;
#line 1439 "make.util.m"
    MR_Word make__util__V_55_55;
#line 1439 "make.util.m"
    MR_Word make__util__V_56_56;
#line 1439 "make.util.m"
    MR_Word make__util__V_57_57;
#line 1439 "make.util.m"
    MR_Word make__util__V_58_58;
#line 1439 "make.util.m"
    MR_Word make__util__V_59_59;
#line 1439 "make.util.m"
    MR_Word make__util__V_60_60;
#line 1439 "make.util.m"
    MR_Integer make__util__V_61_61;
#line 1439 "make.util.m"
    MR_Word make__util__V_62_62;
#line 1439 "make.util.m"
    MR_Word make__util__V_44_44;

#line 1740 "make.util.m"
    {
#line 1740 "make.util.m"
      libs__globals__lookup_bool_option_3_p_0(make__util__Globals_8, make__util__VerboseOption_9, &make__util__OptionValue_73);
    }
#line 1745 "make.util.m"
#line 1745 "make.util.m"
    switch (make__util__OptionValue_73) {
#line 1745 "make.util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1745 "make.util.m"
      case (MR_Integer) 0:
#line 1746 "make.util.m"
        {
#line 1746 "make.util.m"
        }
#line 1745 "make.util.m"
        break;
#line 1745 "make.util.m"
      case (MR_Integer) 1:
#line 1742 "make.util.m"
        {
#line 1445 "make.util.m"
          {
#line 1445 "make.util.m"
            mercury__io__write_string_3_p_0((MR_String) "Removing ");
          }
#line 1446 "make.util.m"
          {
#line 1446 "make.util.m"
            mercury__io__write_string_3_p_0(make__util__FileName_10);
          }
#line 1447 "make.util.m"
          {
#line 1447 "make.util.m"
            mercury__io__nl_2_p_0();
          }
#line 1744 "make.util.m"
          {
#line 1744 "make.util.m"
            mercury__io__flush_output_2_p_0();
          }
#line 1742 "make.util.m"
        }
#line 1745 "make.util.m"
        break;
#line 1745 "make.util.m"
    }
#line 1438 "make.util.m"
    {
#line 1438 "make.util.m"
      mercury__io__remove_file_recursively_4_p_0(make__util__FileName_10, &make__util__V_13_13);
    }
#line 1440 "make.util.m"
    make__util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 0)));
#line 1440 "make.util.m"
    make__util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 1)));
#line 1440 "make.util.m"
    make__util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 2)));
#line 1440 "make.util.m"
    make__util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 3)));
#line 1440 "make.util.m"
    make__util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 4)));
#line 1440 "make.util.m"
    make__util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 5)));
#line 1440 "make.util.m"
    make__util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 6)));
#line 1440 "make.util.m"
    make__util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 7)));
#line 1440 "make.util.m"
    make__util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 8)));
#line 1440 "make.util.m"
    make__util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 9)));
#line 1440 "make.util.m"
    make__util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 10)));
#line 1440 "make.util.m"
    make__util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 11)));
#line 1440 "make.util.m"
    make__util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 12)));
#line 1440 "make.util.m"
    make__util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 13)));
#line 1440 "make.util.m"
    make__util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 14)));
#line 1440 "make.util.m"
    make__util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 15)));
#line 1440 "make.util.m"
    make__util__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 16)));
#line 1440 "make.util.m"
    make__util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 17)));
#line 1440 "make.util.m"
    make__util__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 18)));
#line 1440 "make.util.m"
    make__util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 19)));
#line 1440 "make.util.m"
    {
#line 1440 "make.util.m"
      make__util__V_22_22 = mercury__map__delete_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &make__util_scalar_common_1[0], make__util__V_23_23, ((MR_Box) (make__util__FileName_10)));
    }
#line 1439 "make.util.m"
    make__util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 0)));
#line 1439 "make.util.m"
    make__util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 1)));
#line 1439 "make.util.m"
    make__util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 2)));
#line 1439 "make.util.m"
    make__util__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 3)));
#line 1439 "make.util.m"
    make__util__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 4)));
#line 1439 "make.util.m"
    make__util__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 5)));
#line 1439 "make.util.m"
    make__util__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 6)));
#line 1439 "make.util.m"
    make__util__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 7)));
#line 1439 "make.util.m"
    make__util__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 8)));
#line 1439 "make.util.m"
    make__util__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 9)));
#line 1439 "make.util.m"
    make__util__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 10)));
#line 1439 "make.util.m"
    make__util__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 11)));
#line 1439 "make.util.m"
    make__util__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 12)));
#line 1439 "make.util.m"
    make__util__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 13)));
#line 1439 "make.util.m"
    make__util__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 14)));
#line 1439 "make.util.m"
    make__util__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 15)));
#line 1439 "make.util.m"
    make__util__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 16)));
#line 1439 "make.util.m"
    make__util__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 17)));
#line 1439 "make.util.m"
    make__util__V_61_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 18)));
#line 1439 "make.util.m"
    make__util__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_14, (MR_Integer) 19)));
#line 1439 "make.util.m"
    {
#line 1439 "make.util.m"
      MR_Word base;
#line 1439 "make.util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
#line 1439 "make.util.m"
      *make__util__STATE_VARIABLE_Info_15 = base;
#line 1439 "make.util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__util__V_43_43));
#line 1439 "make.util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__util__V_22_22));
#line 1439 "make.util.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__util__V_45_45));
#line 1439 "make.util.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (make__util__V_46_46));
#line 1439 "make.util.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (make__util__V_47_47));
#line 1439 "make.util.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (make__util__V_48_48));
#line 1439 "make.util.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (make__util__V_49_49));
#line 1439 "make.util.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (make__util__V_50_50));
#line 1439 "make.util.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (make__util__V_51_51));
#line 1439 "make.util.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (make__util__V_52_52));
#line 1439 "make.util.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (make__util__V_53_53));
#line 1439 "make.util.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (make__util__V_54_54));
#line 1439 "make.util.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (make__util__V_55_55));
#line 1439 "make.util.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (make__util__V_56_56));
#line 1439 "make.util.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (make__util__V_57_57));
#line 1439 "make.util.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (make__util__V_58_58));
#line 1439 "make.util.m"
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (make__util__V_59_59));
#line 1439 "make.util.m"
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (make__util__V_60_60));
#line 1439 "make.util.m"
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (make__util__V_61_61));
#line 1439 "make.util.m"
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (make__util__V_62_62));
#line 1439 "make.util.m"
    }
#line 1435 "make.util.m"
  }
#line 210 "make.util.m"
}

#line 207 "make.util.m"
void MR_CALL 
make__util__make_remove_module_file_8_p_0(
#line 207 "make.util.m"
  MR_Word make__util__Globals_9,
#line 207 "make.util.m"
  MR_Word make__util__VerboseOption_10,
#line 207 "make.util.m"
  MR_Word make__util__ModuleName_11,
#line 207 "make.util.m"
  MR_String make__util__Ext_12,
#line 207 "make.util.m"
  MR_Word make__util__STATE_VARIABLE_Info_0_16,
#line 207 "make.util.m"
  MR_Word * make__util__STATE_VARIABLE_Info_17)
#line 207 "make.util.m"
{
#line 1430 "make.util.m"
  {
#line 1430 "make.util.m"
    MR_bool make__util__succeeded;
#line 1430 "make.util.m"
    MR_String make__util__FileName_15;

#line 1431 "make.util.m"
    {
#line 1431 "make.util.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(make__util__Globals_9, make__util__ModuleName_11, make__util__Ext_12, (MR_Integer) 1, &make__util__FileName_15);
    }
#line 1433 "make.util.m"
    {
#line 1433 "make.util.m"
      make__util__make_remove_file_7_p_0(make__util__Globals_9, make__util__VerboseOption_10, make__util__FileName_15, make__util__STATE_VARIABLE_Info_0_16, make__util__STATE_VARIABLE_Info_17);
#line 1433 "make.util.m"
      return;
    }
#line 1430 "make.util.m"
  }
#line 207 "make.util.m"
}

#line 200 "make.util.m"
void MR_CALL 
make__util__make_remove_target_file_by_name_8_p_0(
#line 200 "make.util.m"
  MR_Word make__util__Globals_9,
#line 200 "make.util.m"
  MR_Word make__util__VerboseOption_10,
#line 200 "make.util.m"
  MR_Word make__util__ModuleName_11,
#line 200 "make.util.m"
  MR_Word make__util__FileType_12,
#line 200 "make.util.m"
  MR_Word make__util__STATE_VARIABLE_Info_0_17,
#line 200 "make.util.m"
  MR_Word * make__util__STATE_VARIABLE_Info_18)
#line 200 "make.util.m"
{
#line 1419 "make.util.m"
  {
#line 1419 "make.util.m"
    MR_bool make__util__succeeded;
#line 1419 "make.util.m"
    MR_String make__util__FileName_15;
#line 1419 "make.util.m"
    MR_Word make__util__STATE_VARIABLE_Info_23_23;
#line 1426 "make.util.m"
    MR_String make__util__TimestampExt_16;

#line 1543 "make.util.m"
    {
#line 1543 "make.util.m"
      make__util__module_target_to_file_name_maybe_search_8_p_0(make__util__Globals_9, make__util__ModuleName_11, make__util__FileType_12, (MR_Integer) 1, (MR_Integer) 1, &make__util__FileName_15);
    }
#line 1422 "make.util.m"
    {
#line 1422 "make.util.m"
      make__util__make_remove_file_7_p_0(make__util__Globals_9, make__util__VerboseOption_10, make__util__FileName_15, make__util__STATE_VARIABLE_Info_0_17, &make__util__STATE_VARIABLE_Info_23_23);
    }
#line 1423 "make.util.m"
    {
#line 1423 "make.util.m"
      make__util__succeeded = make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_105_109_101_115_116_97_109_112_95_101_120_116_101_110_115_105_111_110_95_95_91_49_93_95_48_2_f_0(make__util__FileType_12, &make__util__TimestampExt_16);
    }
#line 1426 "make.util.m"
    if (make__util__succeeded)
#line 1430 "make.util.m"
      {
#line 1430 "make.util.m"
        MR_String make__util__FileName_47;

#line 1431 "make.util.m"
        {
#line 1431 "make.util.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(make__util__Globals_9, make__util__ModuleName_11, make__util__TimestampExt_16, (MR_Integer) 1, &make__util__FileName_47);
        }
#line 1433 "make.util.m"
        {
#line 1433 "make.util.m"
          make__util__make_remove_file_7_p_0(make__util__Globals_9, make__util__VerboseOption_10, make__util__FileName_47, make__util__STATE_VARIABLE_Info_23_23, make__util__STATE_VARIABLE_Info_18);
#line 1433 "make.util.m"
          return;
        }
#line 1430 "make.util.m"
      }
#line 1426 "make.util.m"
    else
#line 1427 "make.util.m"
      *make__util__STATE_VARIABLE_Info_18 = make__util__STATE_VARIABLE_Info_23_23;
#line 1419 "make.util.m"
  }
#line 200 "make.util.m"
}

#line 195 "make.util.m"
void MR_CALL 
make__util__make_remove_target_file_7_p_0(
#line 195 "make.util.m"
  MR_Word make__util__Globals_8,
#line 195 "make.util.m"
  MR_Word make__util__VerboseOption_9,
#line 195 "make.util.m"
  MR_Word make__util__Target_10,
#line 195 "make.util.m"
  MR_Word make__util__STATE_VARIABLE_Info_0_15,
#line 195 "make.util.m"
  MR_Word * make__util__STATE_VARIABLE_Info_16)
#line 195 "make.util.m"
{
#line 1413 "make.util.m"
  {
#line 1413 "make.util.m"
    MR_bool make__util__succeeded;
#line 1413 "make.util.m"
    MR_Word make__util__ModuleName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Target_10, (MR_Integer) 0)));
#line 1413 "make.util.m"
    MR_Word make__util__FileType_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Target_10, (MR_Integer) 1)));

#line 1415 "make.util.m"
    {
#line 1415 "make.util.m"
      make__util__make_remove_target_file_by_name_8_p_0(make__util__Globals_8, make__util__VerboseOption_9, make__util__ModuleName_13, make__util__FileType_14, make__util__STATE_VARIABLE_Info_0_15, make__util__STATE_VARIABLE_Info_16);
#line 1415 "make.util.m"
      return;
    }
#line 1413 "make.util.m"
  }
#line 195 "make.util.m"
}

#line 181 "make.util.m"
MR_Word MR_CALL 
make__util__find_oldest_timestamp_2_f_0(
#line 181 "make.util.m"
  MR_Word make__util__HeadVar__1_1,
#line 181 "make.util.m"
  MR_Word make__util__HeadVar__2_2)
#line 181 "make.util.m"
{
#line 1402 "make.util.m"
  {
#line 1402 "make.util.m"
    MR_bool make__util__succeeded;
#line 1402 "make.util.m"
    MR_Word make__util__HeadVar__3_3;

#line 1402 "make.util.m"
    if (((MR_tag((MR_Word) make__util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 1402 "make.util.m"
      make__util__HeadVar__3_3 = make__util__HeadVar__1_1;
#line 1402 "make.util.m"
    else
#line 1402 "make.util.m"
      {
#line 1402 "make.util.m"
        MR_Word make__util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__HeadVar__1_1, (MR_Integer) 0)));

#line 1402 "make.util.m"
        if (((MR_tag((MR_Word) make__util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 1403 "make.util.m"
          make__util__HeadVar__3_3 = make__util__HeadVar__2_2;
#line 1402 "make.util.m"
        else
#line 1404 "make.util.m"
          {
#line 1404 "make.util.m"
            MR_Word make__util__Timestamp2_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__HeadVar__2_2, (MR_Integer) 0)));
#line 1404 "make.util.m"
            MR_Word make__util__Timestamp_12;
#line 1405 "make.util.m"
            MR_Word make__util__V_15_15;

#line 1405 "make.util.m"
            {
#line 1405 "make.util.m"
              libs__timestamp____Compare____timestamp_0_0(&make__util__V_15_15, make__util__V_16_16, make__util__Timestamp2_11);
            }
#line 1405 "make.util.m"
            make__util__succeeded = ((MR_Integer) 1 == make__util__V_15_15);
#line 1407 "make.util.m"
            if (make__util__succeeded)
#line 1406 "make.util.m"
              make__util__Timestamp_12 = make__util__V_16_16;
#line 1407 "make.util.m"
            else
#line 1408 "make.util.m"
              make__util__Timestamp_12 = make__util__Timestamp2_11;
#line 1404 "make.util.m"
            {
#line 1404 "make.util.m"
              make__util__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1404 "make.util.m"
              MR_hl_field(MR_mktag(0), make__util__HeadVar__3_3, 0) = ((MR_Box) (make__util__Timestamp_12));
#line 1404 "make.util.m"
            }
#line 1404 "make.util.m"
          }
#line 1402 "make.util.m"
      }
#line 1402 "make.util.m"
    return make__util__HeadVar__3_3;
#line 1402 "make.util.m"
  }
#line 181 "make.util.m"
}

#line 174 "make.util.m"
void MR_CALL 
make__util__get_file_timestamp_7_p_0(
#line 174 "make.util.m"
  MR_Word make__util__SearchDirs_8,
#line 174 "make.util.m"
  MR_String make__util__FileName_9,
#line 174 "make.util.m"
  MR_Word * make__util__MaybeTimestamp_10,
#line 174 "make.util.m"
  MR_Word make__util__STATE_VARIABLE_Info_0_18,
#line 174 "make.util.m"
  MR_Word * make__util__STATE_VARIABLE_Info_19)
#line 174 "make.util.m"
{
#line 1369 "make.util.m"
  {
#line 1369 "make.util.m"
    MR_bool make__util__succeeded;
#line 1369 "make.util.m"
    MR_Word make__util__MaybeTimestamp0_13;
#line 1367 "make.util.m"
    MR_Word make__util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 1)));
#line 1367 "make.util.m"
    MR_Word make__util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 0)));
#line 1367 "make.util.m"
    MR_Word make__util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 2)));
#line 1367 "make.util.m"
    MR_Word make__util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 3)));
#line 1367 "make.util.m"
    MR_Word make__util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 4)));
#line 1367 "make.util.m"
    MR_Word make__util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 5)));
#line 1367 "make.util.m"
    MR_Word make__util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 6)));
#line 1367 "make.util.m"
    MR_Word make__util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 7)));
#line 1367 "make.util.m"
    MR_Word make__util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 8)));
#line 1367 "make.util.m"
    MR_Word make__util__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 9)));
#line 1367 "make.util.m"
    MR_Word make__util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 10)));
#line 1367 "make.util.m"
    MR_Word make__util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 11)));
#line 1367 "make.util.m"
    MR_Word make__util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 12)));
#line 1367 "make.util.m"
    MR_Word make__util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 13)));
#line 1367 "make.util.m"
    MR_Word make__util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 14)));
#line 1367 "make.util.m"
    MR_Word make__util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 15)));
#line 1367 "make.util.m"
    MR_Word make__util__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 16)));
#line 1367 "make.util.m"
    MR_Word make__util__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 17)));
#line 1367 "make.util.m"
    MR_Integer make__util__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 18)));
#line 1367 "make.util.m"
    MR_Word make__util__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 19)));
#line 1367 "make.util.m"
    MR_Box make__util__conv0_MaybeTimestamp0_13;

#line 1367 "make.util.m"
    {
#line 1367 "make.util.m"
      make__util__succeeded = mercury__map__elem_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &make__util_scalar_common_1[0], ((MR_Box) (make__util__FileName_9)), make__util__V_22_22, &make__util__conv0_MaybeTimestamp0_13);
    }
#line 1367 "make.util.m"
    if (make__util__succeeded)
#line 1367 "make.util.m"
      {
#line 1367 "make.util.m"
        make__util__MaybeTimestamp0_13 = ((MR_Word) make__util__conv0_MaybeTimestamp0_13);
#line 1367 "make.util.m"
        make__util__succeeded = MR_TRUE;
#line 1367 "make.util.m"
      }
#line 1369 "make.util.m"
    if (make__util__succeeded)
#line 1368 "make.util.m"
      {
#line 1368 "make.util.m"
        *make__util__MaybeTimestamp_10 = make__util__MaybeTimestamp0_13;
#line 1368 "make.util.m"
        *make__util__STATE_VARIABLE_Info_19 = make__util__STATE_VARIABLE_Info_0_18;
#line 1368 "make.util.m"
      }
#line 1369 "make.util.m"
    else
#line 1370 "make.util.m"
      {
#line 1370 "make.util.m"
        MR_Word make__util__SearchResult_14;

#line 1370 "make.util.m"
        {
#line 1370 "make.util.m"
          libs__file_util__search_for_file_mod_time_5_p_0(make__util__SearchDirs_8, make__util__FileName_9, &make__util__SearchResult_14);
        }
#line 1376 "make.util.m"
        if (((MR_tag((MR_Word) make__util__SearchResult_14)) == (MR_mktag((MR_Integer) 1))))
#line 1377 "make.util.m"
          {
#line 1377 "make.util.m"
            MR_String make__util__V_24_24;
#line 1377 "make.util.m"
            MR_String make__util__V_26_26;

#line 1378 "make.util.m"
            {
#line 1378 "make.util.m"
              make__util__V_26_26 = mercury__string__f_43_43_2_f_0(make__util__FileName_9, (MR_String) "\' not found");
            }
#line 1378 "make.util.m"
            {
#line 1378 "make.util.m"
              make__util__V_24_24 = mercury__string__f_43_43_2_f_0((MR_String) "file \140", make__util__V_26_26);
            }
#line 1378 "make.util.m"
            {
#line 1378 "make.util.m"
              MR_Word base;
#line 1378 "make.util.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1378 "make.util.m"
              *make__util__MaybeTimestamp_10 = base;
#line 1378 "make.util.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__util__V_24_24));
#line 1378 "make.util.m"
            }
#line 1377 "make.util.m"
            *make__util__STATE_VARIABLE_Info_19 = make__util__STATE_VARIABLE_Info_0_18;
#line 1377 "make.util.m"
          }
#line 1376 "make.util.m"
        else
#line 1372 "make.util.m"
          {
#line 1372 "make.util.m"
            MR_Word make__util__TimeT_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__SearchResult_14, (MR_Integer) 0)));
#line 1372 "make.util.m"
            MR_Word make__util__Timestamp_16;
#line 1372 "make.util.m"
            MR_Word make__util__V_29_29;
#line 1372 "make.util.m"
            MR_Word make__util__V_30_30;
#line 1375 "make.util.m"
            MR_Word make__util__V_50_50;
#line 1375 "make.util.m"
            MR_Word make__util__V_51_51;
#line 1375 "make.util.m"
            MR_Word make__util__V_52_52;
#line 1375 "make.util.m"
            MR_Word make__util__V_53_53;
#line 1375 "make.util.m"
            MR_Word make__util__V_54_54;
#line 1375 "make.util.m"
            MR_Word make__util__V_55_55;
#line 1375 "make.util.m"
            MR_Word make__util__V_56_56;
#line 1375 "make.util.m"
            MR_Word make__util__V_57_57;
#line 1375 "make.util.m"
            MR_Word make__util__V_58_58;
#line 1375 "make.util.m"
            MR_Word make__util__V_59_59;
#line 1375 "make.util.m"
            MR_Word make__util__V_60_60;
#line 1375 "make.util.m"
            MR_Word make__util__V_61_61;
#line 1375 "make.util.m"
            MR_Word make__util__V_62_62;
#line 1375 "make.util.m"
            MR_Word make__util__V_63_63;
#line 1375 "make.util.m"
            MR_Word make__util__V_64_64;
#line 1375 "make.util.m"
            MR_Word make__util__V_65_65;
#line 1375 "make.util.m"
            MR_Word make__util__V_66_66;
#line 1375 "make.util.m"
            MR_Integer make__util__V_67_67;
#line 1375 "make.util.m"
            MR_Word make__util__V_68_68;
#line 1375 "make.util.m"
            MR_Word make__util__V_69_69;
#line 1375 "make.util.m"
            MR_Word make__util__V_71_71;
#line 1375 "make.util.m"
            MR_Word make__util__V_72_72;
#line 1375 "make.util.m"
            MR_Word make__util__V_73_73;
#line 1375 "make.util.m"
            MR_Word make__util__V_74_74;
#line 1375 "make.util.m"
            MR_Word make__util__V_75_75;
#line 1375 "make.util.m"
            MR_Word make__util__V_76_76;
#line 1375 "make.util.m"
            MR_Word make__util__V_77_77;
#line 1375 "make.util.m"
            MR_Word make__util__V_78_78;
#line 1375 "make.util.m"
            MR_Word make__util__V_79_79;
#line 1375 "make.util.m"
            MR_Word make__util__V_80_80;
#line 1375 "make.util.m"
            MR_Word make__util__V_81_81;
#line 1375 "make.util.m"
            MR_Word make__util__V_82_82;
#line 1375 "make.util.m"
            MR_Word make__util__V_83_83;
#line 1375 "make.util.m"
            MR_Word make__util__V_84_84;
#line 1375 "make.util.m"
            MR_Word make__util__V_85_85;
#line 1375 "make.util.m"
            MR_Word make__util__V_86_86;
#line 1375 "make.util.m"
            MR_Integer make__util__V_87_87;
#line 1375 "make.util.m"
            MR_Word make__util__V_88_88;
#line 1375 "make.util.m"
            MR_Word make__util__V_70_70;

#line 1373 "make.util.m"
            {
#line 1373 "make.util.m"
              make__util__Timestamp_16 = libs__timestamp__time_t_to_timestamp_1_f_0(make__util__TimeT_15);
            }
#line 1374 "make.util.m"
            {
#line 1374 "make.util.m"
              MR_Word base;
#line 1374 "make.util.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1374 "make.util.m"
              *make__util__MaybeTimestamp_10 = base;
#line 1374 "make.util.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__util__Timestamp_16));
#line 1374 "make.util.m"
            }
#line 1375 "make.util.m"
            make__util__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 0)));
#line 1375 "make.util.m"
            make__util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 1)));
#line 1375 "make.util.m"
            make__util__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 2)));
#line 1375 "make.util.m"
            make__util__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 3)));
#line 1375 "make.util.m"
            make__util__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 4)));
#line 1375 "make.util.m"
            make__util__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 5)));
#line 1375 "make.util.m"
            make__util__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 6)));
#line 1375 "make.util.m"
            make__util__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 7)));
#line 1375 "make.util.m"
            make__util__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 8)));
#line 1375 "make.util.m"
            make__util__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 9)));
#line 1375 "make.util.m"
            make__util__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 10)));
#line 1375 "make.util.m"
            make__util__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 11)));
#line 1375 "make.util.m"
            make__util__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 12)));
#line 1375 "make.util.m"
            make__util__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 13)));
#line 1375 "make.util.m"
            make__util__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 14)));
#line 1375 "make.util.m"
            make__util__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 15)));
#line 1375 "make.util.m"
            make__util__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 16)));
#line 1375 "make.util.m"
            make__util__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 17)));
#line 1375 "make.util.m"
            make__util__V_67_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 18)));
#line 1375 "make.util.m"
            make__util__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 19)));
#line 1375 "make.util.m"
            {
#line 1375 "make.util.m"
              make__util__V_30_30 = mercury__map__f_101_108_101_109_32_58_61_3_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &make__util_scalar_common_1[0], ((MR_Box) (make__util__FileName_9)), make__util__V_29_29, ((MR_Box) (*make__util__MaybeTimestamp_10)));
            }
#line 1375 "make.util.m"
            make__util__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 0)));
#line 1375 "make.util.m"
            make__util__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 1)));
#line 1375 "make.util.m"
            make__util__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 2)));
#line 1375 "make.util.m"
            make__util__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 3)));
#line 1375 "make.util.m"
            make__util__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 4)));
#line 1375 "make.util.m"
            make__util__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 5)));
#line 1375 "make.util.m"
            make__util__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 6)));
#line 1375 "make.util.m"
            make__util__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 7)));
#line 1375 "make.util.m"
            make__util__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 8)));
#line 1375 "make.util.m"
            make__util__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 9)));
#line 1375 "make.util.m"
            make__util__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 10)));
#line 1375 "make.util.m"
            make__util__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 11)));
#line 1375 "make.util.m"
            make__util__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 12)));
#line 1375 "make.util.m"
            make__util__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 13)));
#line 1375 "make.util.m"
            make__util__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 14)));
#line 1375 "make.util.m"
            make__util__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 15)));
#line 1375 "make.util.m"
            make__util__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 16)));
#line 1375 "make.util.m"
            make__util__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 17)));
#line 1375 "make.util.m"
            make__util__V_87_87 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 18)));
#line 1375 "make.util.m"
            make__util__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 19)));
#line 1375 "make.util.m"
            {
#line 1375 "make.util.m"
              MR_Word base;
#line 1375 "make.util.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
#line 1375 "make.util.m"
              *make__util__STATE_VARIABLE_Info_19 = base;
#line 1375 "make.util.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__util__V_69_69));
#line 1375 "make.util.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__util__V_30_30));
#line 1375 "make.util.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__util__V_71_71));
#line 1375 "make.util.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (make__util__V_72_72));
#line 1375 "make.util.m"
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (make__util__V_73_73));
#line 1375 "make.util.m"
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (make__util__V_74_74));
#line 1375 "make.util.m"
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (make__util__V_75_75));
#line 1375 "make.util.m"
              MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (make__util__V_76_76));
#line 1375 "make.util.m"
              MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (make__util__V_77_77));
#line 1375 "make.util.m"
              MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (make__util__V_78_78));
#line 1375 "make.util.m"
              MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (make__util__V_79_79));
#line 1375 "make.util.m"
              MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (make__util__V_80_80));
#line 1375 "make.util.m"
              MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (make__util__V_81_81));
#line 1375 "make.util.m"
              MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (make__util__V_82_82));
#line 1375 "make.util.m"
              MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (make__util__V_83_83));
#line 1375 "make.util.m"
              MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (make__util__V_84_84));
#line 1375 "make.util.m"
              MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (make__util__V_85_85));
#line 1375 "make.util.m"
              MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (make__util__V_86_86));
#line 1375 "make.util.m"
              MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (make__util__V_87_87));
#line 1375 "make.util.m"
              MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (make__util__V_88_88));
#line 1375 "make.util.m"
            }
#line 1372 "make.util.m"
          }
#line 1370 "make.util.m"
      }
#line 1369 "make.util.m"
  }
#line 174 "make.util.m"
}

#line 168 "make.util.m"
void MR_CALL 
make__util__get_file_name_8_p_0(
#line 168 "make.util.m"
  MR_Word make__util__Globals_9,
#line 168 "make.util.m"
  MR_Word make__util__Search_10,
#line 168 "make.util.m"
  MR_Word make__util__TargetFile_11,
#line 168 "make.util.m"
  MR_String * make__util__FileName_12,
#line 168 "make.util.m"
  MR_Word make__util__STATE_VARIABLE_Info_0_21,
#line 168 "make.util.m"
  MR_Word * make__util__STATE_VARIABLE_Info_22)
#line 168 "make.util.m"
{
#line 1312 "make.util.m"
  {
#line 1312 "make.util.m"
    MR_bool make__util__succeeded;
#line 1312 "make.util.m"
    MR_Word make__util__ModuleName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__TargetFile_11, (MR_Integer) 0)));
#line 1312 "make.util.m"
    MR_Word make__util__FileType_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__TargetFile_11, (MR_Integer) 1)));

#line 1314 "make.util.m"
    make__util__succeeded = (make__util__FileType_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1330 "make.util.m"
    if (make__util__succeeded)
#line 1318 "make.util.m"
      {
#line 1318 "make.util.m"
        MR_Word make__util__MaybeImports_17;

#line 1318 "make.util.m"
        {
#line 1318 "make.util.m"
          make__module_dep_file__get_module_dependencies_7_p_0(make__util__Globals_9, make__util__ModuleName_15, &make__util__MaybeImports_17, make__util__STATE_VARIABLE_Info_0_21, make__util__STATE_VARIABLE_Info_22);
        }
#line 1322 "make.util.m"
        if ((make__util__MaybeImports_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1323 "make.util.m"
          {
#line 1327 "make.util.m"
            {
#line 1327 "make.util.m"
              parse_tree__file_names__module_name_to_file_name_7_p_0(make__util__Globals_9, make__util__ModuleName_15, (MR_String) ".m", (MR_Integer) 1, make__util__FileName_12);
#line 1327 "make.util.m"
              return;
            }
#line 1323 "make.util.m"
          }
#line 1322 "make.util.m"
        else
#line 1320 "make.util.m"
          {
#line 1320 "make.util.m"
            MR_Word make__util__Imports_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__util__MaybeImports_17, (MR_Integer) 0)));
#line 1321 "make.util.m"
            MR_Word make__util__V_36_36;
#line 1321 "make.util.m"
            MR_Word make__util__V_37_37;
#line 1321 "make.util.m"
            MR_Word make__util__V_38_38;
#line 1321 "make.util.m"
            MR_Word make__util__V_39_39;
#line 1321 "make.util.m"
            MR_Word make__util__V_40_40;
#line 1321 "make.util.m"
            MR_Word make__util__V_41_41;
#line 1321 "make.util.m"
            MR_Word make__util__V_42_42;
#line 1321 "make.util.m"
            MR_Word make__util__V_43_43;
#line 1321 "make.util.m"
            MR_Word make__util__V_44_44;
#line 1321 "make.util.m"
            MR_Word make__util__V_45_45;
#line 1321 "make.util.m"
            MR_Word make__util__V_46_46;
#line 1321 "make.util.m"
            MR_Word make__util__V_47_47;
#line 1321 "make.util.m"
            MR_Word make__util__V_48_48;
#line 1321 "make.util.m"
            MR_Word make__util__V_49_49;
#line 1321 "make.util.m"
            MR_Word make__util__V_50_50;
#line 1321 "make.util.m"
            MR_Word make__util__V_51_51;
#line 1321 "make.util.m"
            MR_Word make__util__V_52_52;
#line 1321 "make.util.m"
            MR_Word make__util__V_53_53;
#line 1321 "make.util.m"
            MR_Word make__util__V_54_54;
#line 1321 "make.util.m"
            MR_Word make__util__V_55_55;
#line 1321 "make.util.m"
            MR_Word make__util__V_56_56;
#line 1321 "make.util.m"
            MR_Word make__util__V_57_57;
#line 1321 "make.util.m"
            MR_Word make__util__V_58_58;
#line 1321 "make.util.m"
            MR_Word make__util__V_59_59;
#line 1321 "make.util.m"
            MR_Word make__util__V_60_60;
#line 1321 "make.util.m"
            MR_String make__util__V_61_61;

#line 1321 "make.util.m"
            *make__util__FileName_12 = ((MR_String) (MR_hl_field(MR_mktag(0), make__util__Imports_18, (MR_Integer) 0)));
#line 1321 "make.util.m"
            make__util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_18, (MR_Integer) 1)));
#line 1321 "make.util.m"
            make__util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_18, (MR_Integer) 2)));
#line 1321 "make.util.m"
            make__util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_18, (MR_Integer) 3)));
#line 1321 "make.util.m"
            make__util__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_18, (MR_Integer) 4)));
#line 1321 "make.util.m"
            make__util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_18, (MR_Integer) 5)));
#line 1321 "make.util.m"
            make__util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_18, (MR_Integer) 6)));
#line 1321 "make.util.m"
            make__util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_18, (MR_Integer) 7)));
#line 1321 "make.util.m"
            make__util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_18, (MR_Integer) 8)));
#line 1321 "make.util.m"
            make__util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_18, (MR_Integer) 9)));
#line 1321 "make.util.m"
            make__util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_18, (MR_Integer) 10)));
#line 1321 "make.util.m"
            make__util__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_18, (MR_Integer) 11)));
#line 1321 "make.util.m"
            make__util__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_18, (MR_Integer) 12)));
#line 1321 "make.util.m"
            make__util__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_18, (MR_Integer) 13)));
#line 1321 "make.util.m"
            make__util__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_18, (MR_Integer) 14)));
#line 1321 "make.util.m"
            make__util__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_18, (MR_Integer) 15)));
#line 1321 "make.util.m"
            make__util__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_18, (MR_Integer) 16)));
#line 1321 "make.util.m"
            make__util__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_18, (MR_Integer) 17)));
#line 1321 "make.util.m"
            make__util__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_18, (MR_Integer) 18)));
#line 1321 "make.util.m"
            make__util__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_18, (MR_Integer) 19)));
#line 1321 "make.util.m"
            make__util__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_18, (MR_Integer) 20)));
#line 1321 "make.util.m"
            make__util__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_18, (MR_Integer) 21)));
#line 1321 "make.util.m"
            make__util__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_18, (MR_Integer) 22)));
#line 1321 "make.util.m"
            make__util__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_18, (MR_Integer) 23)));
#line 1321 "make.util.m"
            make__util__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_18, (MR_Integer) 24)));
#line 1321 "make.util.m"
            make__util__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Imports_18, (MR_Integer) 25)));
#line 1321 "make.util.m"
            make__util__V_61_61 = ((MR_String) (MR_hl_field(MR_mktag(0), make__util__Imports_18, (MR_Integer) 26)));
#line 1320 "make.util.m"
          }
#line 1318 "make.util.m"
      }
#line 1330 "make.util.m"
    else
#line 1331 "make.util.m"
      {
#line 1331 "make.util.m"
        MR_Word make__util__MaybeExt_19;

#line 1331 "make.util.m"
        {
#line 1331 "make.util.m"
          make__util__MaybeExt_19 = make__util__target_extension_2_f_0(make__util__Globals_9, make__util__FileType_16);
        }
#line 1344 "make.util.m"
        if ((make__util__MaybeExt_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1345 "make.util.m"
          {
#line 1346 "make.util.m"
            {
#line 1346 "make.util.m"
              make__util__module_target_to_file_name_maybe_search_8_p_0(make__util__Globals_9, make__util__ModuleName_15, make__util__FileType_16, (MR_Integer) 1, make__util__Search_10, make__util__FileName_12);
            }
#line 1345 "make.util.m"
            *make__util__STATE_VARIABLE_Info_22 = make__util__STATE_VARIABLE_Info_0_21;
#line 1345 "make.util.m"
          }
#line 1344 "make.util.m"
        else
#line 1333 "make.util.m"
          {
#line 1333 "make.util.m"
            MR_String make__util__Ext_20 = ((MR_String) (MR_hl_field(MR_mktag(1), make__util__MaybeExt_19, (MR_Integer) 0)));

#line 1338 "make.util.m"
#line 1338 "make.util.m"
            switch (make__util__Search_10) {
#line 1338 "make.util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1338 "make.util.m"
              case (MR_Integer) 1:
#line 1339 "make.util.m"
                {
#line 1341 "make.util.m"
                  {
#line 1341 "make.util.m"
                    parse_tree__file_names__module_name_to_file_name_7_p_0(make__util__Globals_9, make__util__ModuleName_15, make__util__Ext_20, (MR_Integer) 1, make__util__FileName_12);
                  }
#line 1339 "make.util.m"
                  *make__util__STATE_VARIABLE_Info_22 = make__util__STATE_VARIABLE_Info_0_21;
#line 1339 "make.util.m"
                }
#line 1338 "make.util.m"
                break;
#line 1338 "make.util.m"
              case (MR_Integer) 0:
#line 1336 "make.util.m"
                {
#line 1336 "make.util.m"
                  make__util__module_name_to_search_file_name_cache_8_p_0(make__util__Globals_9, make__util__ModuleName_15, make__util__Ext_20, make__util__FileName_12, make__util__STATE_VARIABLE_Info_0_21, make__util__STATE_VARIABLE_Info_22);
#line 1336 "make.util.m"
                  return;
                }
#line 1338 "make.util.m"
                break;
#line 1338 "make.util.m"
            }
#line 1333 "make.util.m"
          }
#line 1331 "make.util.m"
      }
#line 1312 "make.util.m"
  }
#line 168 "make.util.m"
}

#line 158 "make.util.m"
void MR_CALL 
make__util__get_target_timestamp_8_p_0(
#line 158 "make.util.m"
  MR_Word make__util__Globals_9,
#line 158 "make.util.m"
  MR_Word make__util__Search_10,
#line 158 "make.util.m"
  MR_Word make__util__TargetFile_11,
#line 158 "make.util.m"
  MR_Word * make__util__MaybeTimestamp_12,
#line 158 "make.util.m"
  MR_Word make__util__STATE_VARIABLE_Info_0_18,
#line 158 "make.util.m"
  MR_Word * make__util__STATE_VARIABLE_Info_19)
#line 158 "make.util.m"
{
#line 1232 "make.util.m"
  {
#line 1232 "make.util.m"
    MR_bool make__util__succeeded;
#line 1232 "make.util.m"
    MR_Word make__util__FileType_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__TargetFile_11, (MR_Integer) 1)));
#line 1232 "make.util.m"
    MR_String make__util__FileName_17;
#line 1232 "make.util.m"
    MR_Word make__util__STATE_VARIABLE_Info_22_22;
#line 1233 "make.util.m"
    MR_Word make__util___ModuleName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__TargetFile_11, (MR_Integer) 0)));

#line 1234 "make.util.m"
    {
#line 1234 "make.util.m"
      make__util__get_file_name_8_p_0(make__util__Globals_9, make__util__Search_10, make__util__TargetFile_11, &make__util__FileName_17, make__util__STATE_VARIABLE_Info_0_18, &make__util__STATE_VARIABLE_Info_22_22);
    }
#line 1235 "make.util.m"
    make__util__succeeded = (make__util__FileType_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 1238 "make.util.m"
    if (make__util__succeeded)
#line 1236 "make.util.m"
      {
#line 1236 "make.util.m"
        make__util__get_target_timestamp_analysis_registry_9_p_0(make__util__Globals_9, make__util__Search_10, make__util__TargetFile_11, make__util__FileName_17, make__util__MaybeTimestamp_12, make__util__STATE_VARIABLE_Info_22_22, make__util__STATE_VARIABLE_Info_19);
#line 1236 "make.util.m"
        return;
      }
#line 1238 "make.util.m"
    else
#line 1239 "make.util.m"
      {
#line 1239 "make.util.m"
        make__util__get_target_timestamp_2_9_p_0(make__util__Globals_9, make__util__Search_10, make__util__TargetFile_11, make__util__FileName_17, make__util__MaybeTimestamp_12, make__util__STATE_VARIABLE_Info_22_22, make__util__STATE_VARIABLE_Info_19);
#line 1239 "make.util.m"
        return;
      }
#line 1232 "make.util.m"
  }
#line 158 "make.util.m"
}

#line 148 "make.util.m"
void MR_CALL 
make__util__get_dependency_timestamp_7_p_0(
#line 148 "make.util.m"
  MR_Word make__util__Globals_8,
#line 148 "make.util.m"
  MR_Word make__util__DependencyFile_9,
#line 148 "make.util.m"
  MR_Word * make__util__MaybeTimestamp_10,
#line 148 "make.util.m"
  MR_Word make__util__STATE_VARIABLE_Info_0_21,
#line 148 "make.util.m"
  MR_Word * make__util__STATE_VARIABLE_Info_22)
#line 148 "make.util.m"
{
#line 1203 "make.util.m"
  {
#line 1203 "make.util.m"
    MR_bool make__util__succeeded;

#line 1203 "make.util.m"
    if (((MR_tag((MR_Word) make__util__DependencyFile_9)) == (MR_mktag((MR_Integer) 1))))
#line 1203 "make.util.m"
      {
#line 1203 "make.util.m"
        MR_String make__util__FileName_13 = ((MR_String) (MR_hl_field(MR_mktag(1), make__util__DependencyFile_9, (MR_Integer) 0)));
#line 1203 "make.util.m"
        MR_Word make__util__MaybeOption_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__util__DependencyFile_9, (MR_Integer) 1)));
#line 1203 "make.util.m"
        MR_Word make__util__SearchDirs_16;

#line 1207 "make.util.m"
        if ((make__util__MaybeOption_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1208 "make.util.m"
          {
#line 1208 "make.util.m"
            MR_String make__util__V_31_31;

#line 1209 "make.util.m"
            {
#line 1209 "make.util.m"
              make__util__V_31_31 = mercury__dir__this_directory_0_f_0();
            }
#line 1209 "make.util.m"
            {
#line 1209 "make.util.m"
              make__util__SearchDirs_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1209 "make.util.m"
              MR_hl_field(MR_mktag(1), make__util__SearchDirs_16, 0) = ((MR_Box) (make__util__V_31_31));
#line 1209 "make.util.m"
              MR_hl_field(MR_mktag(1), make__util__SearchDirs_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1209 "make.util.m"
            }
#line 1208 "make.util.m"
          }
#line 1207 "make.util.m"
        else
#line 1205 "make.util.m"
          {
#line 1205 "make.util.m"
            MR_Word make__util__Option_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__util__MaybeOption_14, (MR_Integer) 0)));

#line 1206 "make.util.m"
            {
#line 1206 "make.util.m"
              libs__globals__lookup_accumulating_option_3_p_0(make__util__Globals_8, make__util__Option_15, &make__util__SearchDirs_16);
            }
#line 1205 "make.util.m"
          }
#line 1211 "make.util.m"
        {
#line 1211 "make.util.m"
          make__util__get_file_timestamp_7_p_0(make__util__SearchDirs_16, make__util__FileName_13, make__util__MaybeTimestamp_10, make__util__STATE_VARIABLE_Info_0_21, make__util__STATE_VARIABLE_Info_22);
#line 1211 "make.util.m"
          return;
        }
#line 1203 "make.util.m"
      }
#line 1203 "make.util.m"
    else
#line 1213 "make.util.m"
      {
#line 1213 "make.util.m"
        MR_Word make__util__Target_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__DependencyFile_9, (MR_Integer) 0)));
#line 1213 "make.util.m"
        MR_Word make__util__MaybeTimestamp0_18;
#line 1213 "make.util.m"
        MR_Word make__util__FileType_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Target_17, (MR_Integer) 1)));
#line 1213 "make.util.m"
        MR_String make__util__FileName_47;
#line 1213 "make.util.m"
        MR_Word make__util__STATE_VARIABLE_Info_22_48;
#line 1233 "make.util.m"
        MR_Word make__util___ModuleName_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Target_17, (MR_Integer) 0)));
#line 1217 "make.util.m"
        MR_Word make__util__V_28_28;
#line 1217 "make.util.m"
        MR_Word make__util__V_29_29;
#line 1218 "make.util.m"
        MR_Word make__util__V_20_20;
#line 1217 "make.util.m"
        MR_Word make__util__V_19_19;

#line 1234 "make.util.m"
        {
#line 1234 "make.util.m"
          make__util__get_file_name_8_p_0(make__util__Globals_8, (MR_Integer) 0, make__util__Target_17, &make__util__FileName_47, make__util__STATE_VARIABLE_Info_0_21, &make__util__STATE_VARIABLE_Info_22_48);
        }
#line 1235 "make.util.m"
        make__util__succeeded = (make__util__FileType_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 1238 "make.util.m"
        if (make__util__succeeded)
#line 1236 "make.util.m"
          {
#line 1236 "make.util.m"
            make__util__get_target_timestamp_analysis_registry_9_p_0(make__util__Globals_8, (MR_Integer) 0, make__util__Target_17, make__util__FileName_47, &make__util__MaybeTimestamp0_18, make__util__STATE_VARIABLE_Info_22_48, make__util__STATE_VARIABLE_Info_22);
          }
#line 1238 "make.util.m"
        else
#line 1239 "make.util.m"
          {
#line 1239 "make.util.m"
            make__util__get_target_timestamp_2_9_p_0(make__util__Globals_8, (MR_Integer) 0, make__util__Target_17, make__util__FileName_47, &make__util__MaybeTimestamp0_18, make__util__STATE_VARIABLE_Info_22_48, make__util__STATE_VARIABLE_Info_22);
          }
#line 1218 "make.util.m"
        make__util__succeeded = ((MR_tag((MR_Word) make__util__MaybeTimestamp0_18)) == (MR_mktag((MR_Integer) 0)));
#line 1218 "make.util.m"
        if (make__util__succeeded)
#line 1218 "make.util.m"
          {
#line 1218 "make.util.m"
            make__util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__MaybeTimestamp0_18, (MR_Integer) 0)));
#line 1217 "make.util.m"
            make__util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Target_17, (MR_Integer) 0)));
#line 1217 "make.util.m"
            make__util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__Target_17, (MR_Integer) 1)));
#line 1217 "make.util.m"
            make__util__succeeded = ((MR_tag((MR_Word) make__util__V_28_28)) == (MR_mktag((MR_Integer) 1)));
#line 1217 "make.util.m"
            if (make__util__succeeded)
#line 1217 "make.util.m"
              {
#line 1217 "make.util.m"
                make__util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__util__V_28_28, (MR_Integer) 0)));
#line 1217 "make.util.m"
                make__util__succeeded = (make__util__V_29_29 == (MR_Integer) 1);
#line 1217 "make.util.m"
              }
#line 1218 "make.util.m"
          }
#line 1226 "make.util.m"
        if (make__util__succeeded)
#line 1225 "make.util.m"
          {
#line 1225 "make.util.m"
            MR_Word make__util__V_30_30;

#line 1225 "make.util.m"
            {
#line 1225 "make.util.m"
              make__util__V_30_30 = libs__timestamp__oldest_timestamp_0_f_0();
            }
#line 1225 "make.util.m"
            {
#line 1225 "make.util.m"
              MR_Word base;
#line 1225 "make.util.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1225 "make.util.m"
              *make__util__MaybeTimestamp_10 = base;
#line 1225 "make.util.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__util__V_30_30));
#line 1225 "make.util.m"
            }
#line 1225 "make.util.m"
          }
#line 1226 "make.util.m"
        else
#line 1227 "make.util.m"
          *make__util__MaybeTimestamp_10 = make__util__MaybeTimestamp0_18;
#line 1213 "make.util.m"
      }
#line 1203 "make.util.m"
  }
#line 148 "make.util.m"
}

#line 142 "make.util.m"
void MR_CALL 
make__util__get_timestamp_file_timestamp_7_p_0(
#line 142 "make.util.m"
  MR_Word make__util__Globals_8,
#line 142 "make.util.m"
  MR_Word make__util__HeadVar__2_2,
#line 142 "make.util.m"
  MR_Word * make__util__MaybeTimestamp_11,
#line 142 "make.util.m"
  MR_Word make__util__STATE_VARIABLE_Info_0_17,
#line 142 "make.util.m"
  MR_Word * make__util__STATE_VARIABLE_Info_18)
#line 142 "make.util.m"
{
#line 1185 "make.util.m"
  {
#line 1185 "make.util.m"
    MR_bool make__util__succeeded;
#line 1185 "make.util.m"
    MR_Word make__util__ModuleName_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__HeadVar__2_2, (MR_Integer) 0)));
#line 1185 "make.util.m"
    MR_Word make__util__FileType_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__HeadVar__2_2, (MR_Integer) 1)));
#line 1185 "make.util.m"
    MR_String make__util__FileName_15;
#line 1185 "make.util.m"
    MR_Word make__util__SearchDirs_16;
#line 1185 "make.util.m"
    MR_String make__util__V_25_25;
#line 1189 "make.util.m"
    MR_String make__util__TimestampExt_14;

#line 1186 "make.util.m"
    {
#line 1186 "make.util.m"
      make__util__succeeded = make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_105_109_101_115_116_97_109_112_95_101_120_116_101_110_115_105_111_110_95_95_91_49_93_95_48_2_f_0(make__util__FileType_10, &make__util__TimestampExt_14);
    }
#line 1189 "make.util.m"
    if (make__util__succeeded)
#line 1187 "make.util.m"
      {
#line 1187 "make.util.m"
        {
#line 1187 "make.util.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(make__util__Globals_8, make__util__ModuleName_9, make__util__TimestampExt_14, (MR_Integer) 1, &make__util__FileName_15);
        }
#line 1187 "make.util.m"
      }
#line 1189 "make.util.m"
    else
#line 1190 "make.util.m"
      {
#line 1543 "make.util.m"
        {
#line 1543 "make.util.m"
          make__util__module_target_to_file_name_maybe_search_8_p_0(make__util__Globals_8, make__util__ModuleName_9, make__util__FileType_10, (MR_Integer) 1, (MR_Integer) 1, &make__util__FileName_15);
        }
#line 1190 "make.util.m"
      }
#line 1197 "make.util.m"
    {
#line 1197 "make.util.m"
      make__util__V_25_25 = mercury__dir__this_directory_0_f_0();
    }
#line 1197 "make.util.m"
    {
#line 1197 "make.util.m"
      make__util__SearchDirs_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1197 "make.util.m"
      MR_hl_field(MR_mktag(1), make__util__SearchDirs_16, 0) = ((MR_Box) (make__util__V_25_25));
#line 1197 "make.util.m"
      MR_hl_field(MR_mktag(1), make__util__SearchDirs_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1197 "make.util.m"
    }
#line 1198 "make.util.m"
    {
#line 1198 "make.util.m"
      make__util__get_file_timestamp_7_p_0(make__util__SearchDirs_16, make__util__FileName_15, make__util__MaybeTimestamp_11, make__util__STATE_VARIABLE_Info_0_17, make__util__STATE_VARIABLE_Info_18);
#line 1198 "make.util.m"
      return;
    }
#line 1185 "make.util.m"
  }
#line 142 "make.util.m"
}

#line 130 "make.util.m"
void MR_CALL 
make__util__build_with_module_options_and_output_redirect_9_p_0(
#line 130 "make.util.m"
  MR_Word make__util__Globals_10,
#line 130 "make.util.m"
  MR_Word make__util__ModuleName_11,
#line 130 "make.util.m"
  MR_Word make__util__ExtraOptions_12,
#line 130 "make.util.m"
  MR_Word make__util__Build_13,
#line 130 "make.util.m"
  MR_Word * make__util__Succeeded_14,
#line 130 "make.util.m"
  MR_Word make__util__STATE_VARIABLE_Info_0_17,
#line 130 "make.util.m"
  MR_Word * make__util__STATE_VARIABLE_Info_18)
#line 130 "make.util.m"
{
#line 965 "make.util.m"
  {
#line 965 "make.util.m"
    MR_bool make__util__succeeded;

#line 965 "make.util.m"
    {
#line 965 "make.util.m"
      make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_95_104_111_49_48_95_95_91_54_93_95_48_9_p_0(make__util__ModuleName_11, make__util__Build_13, make__util__Globals_10, make__util__ModuleName_11, make__util__ExtraOptions_12, make__util__Succeeded_14, make__util__STATE_VARIABLE_Info_0_17, make__util__STATE_VARIABLE_Info_18);
#line 965 "make.util.m"
      return;
    }
#line 965 "make.util.m"
  }
#line 130 "make.util.m"
}

#line 121 "make.util.m"
void MR_CALL 
make__util__unredirect_output_7_p_0(
#line 121 "make.util.m"
  MR_Word make__util__Globals_8,
#line 121 "make.util.m"
  MR_Word make__util__ModuleName_9,
#line 121 "make.util.m"
  MR_Word make__util__ErrorOutputStream_10,
#line 121 "make.util.m"
  MR_Word make__util__STATE_VARIABLE_Info_0_23,
#line 121 "make.util.m"
  MR_Word * make__util__STATE_VARIABLE_Info_24)
#line 121 "make.util.m"
{
#line 1086 "make.util.m"
  {
#line 1086 "make.util.m"
    MR_bool make__util__succeeded;
#line 1086 "make.util.m"
    MR_String make__util__TmpErrorFileName_13;
#line 1086 "make.util.m"
    MR_Word make__util__TmpErrorInputRes_14;
#line 1124 "make.util.m"
    MR_Word make__util__V_22_22;

#line 1087 "make.util.m"
    {
#line 1087 "make.util.m"
      mercury__io__output_stream_name_4_p_0(make__util__ErrorOutputStream_10, &make__util__TmpErrorFileName_13);
    }
#line 1088 "make.util.m"
    {
#line 1088 "make.util.m"
      mercury__io__close_output_3_p_0(make__util__ErrorOutputStream_10);
    }
#line 1090 "make.util.m"
    {
#line 1090 "make.util.m"
      mercury__io__open_input_4_p_0(make__util__TmpErrorFileName_13, &make__util__TmpErrorInputRes_14);
    }
#line 1119 "make.util.m"
    if (((MR_tag((MR_Word) make__util__TmpErrorInputRes_14)) == (MR_mktag((MR_Integer) 1))))
#line 1120 "make.util.m"
      {
#line 1120 "make.util.m"
        MR_Word make__util__Error_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__util__TmpErrorInputRes_14, (MR_Integer) 0)));

#line 1121 "make.util.m"
        {
#line 1121 "make.util.m"
          make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_105_116_104_95_108_111_99_107_101_100_95_115_116_100_111_117_116_95_95_104_111_49_50_95_95_91_52_93_95_48_4_p_0(make__util__TmpErrorFileName_13, make__util__Error_50, make__util__STATE_VARIABLE_Info_0_23);
        }
#line 1120 "make.util.m"
        *make__util__STATE_VARIABLE_Info_24 = make__util__STATE_VARIABLE_Info_0_23;
#line 1120 "make.util.m"
      }
#line 1119 "make.util.m"
    else
#line 1092 "make.util.m"
      {
#line 1092 "make.util.m"
        MR_Word make__util__TmpErrorInputStream_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__TmpErrorInputRes_14, (MR_Integer) 0)));
#line 1092 "make.util.m"
        MR_String make__util__ErrorFileName_16;
#line 1092 "make.util.m"
        MR_Word make__util__ErrorFileRes_17;
#line 1095 "make.util.m"
        MR_Word make__util__V_35_35;
#line 1095 "make.util.m"
        MR_Word make__util__V_51_51;
#line 1095 "make.util.m"
        MR_Word make__util__V_52_52;
#line 1095 "make.util.m"
        MR_Word make__util__V_53_53;
#line 1095 "make.util.m"
        MR_Word make__util__V_54_54;
#line 1095 "make.util.m"
        MR_Word make__util__V_55_55;
#line 1095 "make.util.m"
        MR_Word make__util__V_56_56;
#line 1095 "make.util.m"
        MR_Word make__util__V_57_57;
#line 1095 "make.util.m"
        MR_Word make__util__V_58_58;
#line 1095 "make.util.m"
        MR_Word make__util__V_59_59;
#line 1095 "make.util.m"
        MR_Word make__util__V_60_60;
#line 1095 "make.util.m"
        MR_Word make__util__V_61_61;
#line 1095 "make.util.m"
        MR_Word make__util__V_62_62;
#line 1095 "make.util.m"
        MR_Word make__util__V_63_63;
#line 1095 "make.util.m"
        MR_Word make__util__V_64_64;
#line 1095 "make.util.m"
        MR_Word make__util__V_65_65;
#line 1095 "make.util.m"
        MR_Word make__util__V_66_66;
#line 1095 "make.util.m"
        MR_Word make__util__V_67_67;
#line 1095 "make.util.m"
        MR_Integer make__util__V_68_68;
#line 1095 "make.util.m"
        MR_Word make__util__V_69_69;

#line 1093 "make.util.m"
        {
#line 1093 "make.util.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(make__util__Globals_8, make__util__ModuleName_9, (MR_String) ".err", (MR_Integer) 0, &make__util__ErrorFileName_16);
        }
#line 1095 "make.util.m"
        make__util__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 0)));
#line 1095 "make.util.m"
        make__util__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 1)));
#line 1095 "make.util.m"
        make__util__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 2)));
#line 1095 "make.util.m"
        make__util__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)));
#line 1095 "make.util.m"
        make__util__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 4)));
#line 1095 "make.util.m"
        make__util__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 5)));
#line 1095 "make.util.m"
        make__util__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 6)));
#line 1095 "make.util.m"
        make__util__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 7)));
#line 1095 "make.util.m"
        make__util__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 8)));
#line 1095 "make.util.m"
        make__util__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 9)));
#line 1095 "make.util.m"
        make__util__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 10)));
#line 1095 "make.util.m"
        make__util__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 11)));
#line 1095 "make.util.m"
        make__util__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 12)));
#line 1095 "make.util.m"
        make__util__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 13)));
#line 1095 "make.util.m"
        make__util__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 14)));
#line 1095 "make.util.m"
        make__util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 15)));
#line 1095 "make.util.m"
        make__util__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 16)));
#line 1095 "make.util.m"
        make__util__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 17)));
#line 1095 "make.util.m"
        make__util__V_68_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 18)));
#line 1095 "make.util.m"
        make__util__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 19)));
#line 1095 "make.util.m"
        {
#line 1095 "make.util.m"
          make__util__succeeded = mercury__set__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (make__util__ModuleName_9)), make__util__V_35_35);
        }
#line 1097 "make.util.m"
        if (make__util__succeeded)
#line 1096 "make.util.m"
          {
#line 1096 "make.util.m"
            mercury__io__open_append_4_p_0(make__util__ErrorFileName_16, &make__util__ErrorFileRes_17);
          }
#line 1097 "make.util.m"
        else
#line 1098 "make.util.m"
          {
#line 1098 "make.util.m"
            mercury__io__open_output_4_p_0(make__util__ErrorFileName_16, &make__util__ErrorFileRes_17);
          }
#line 1113 "make.util.m"
        if (((MR_tag((MR_Word) make__util__ErrorFileRes_17)) == (MR_mktag((MR_Integer) 1))))
#line 1114 "make.util.m"
          {
#line 1114 "make.util.m"
            MR_Word make__util__Error_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__util__ErrorFileRes_17, (MR_Integer) 0)));

#line 1115 "make.util.m"
            {
#line 1115 "make.util.m"
              make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_105_116_104_95_108_111_99_107_101_100_95_115_116_100_111_117_116_95_95_104_111_49_50_95_95_91_52_93_95_48_4_p_0(make__util__TmpErrorFileName_13, make__util__Error_21, make__util__STATE_VARIABLE_Info_0_23);
            }
#line 1114 "make.util.m"
            *make__util__STATE_VARIABLE_Info_24 = make__util__STATE_VARIABLE_Info_0_23;
#line 1114 "make.util.m"
          }
#line 1113 "make.util.m"
        else
#line 1101 "make.util.m"
          {
#line 1101 "make.util.m"
            MR_Word make__util__ErrorFileOutputStream_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__ErrorFileRes_17, (MR_Integer) 0)));
#line 1101 "make.util.m"
            MR_Integer make__util__LinesToWrite_19;
#line 1101 "make.util.m"
            MR_Word make__util__CurrentOutputStream_20;
#line 1101 "make.util.m"
            MR_Word make__util__V_46_46;
#line 1101 "make.util.m"
            MR_Word make__util__V_47_47;
#line 1112 "make.util.m"
            MR_Word make__util__V_70_70;
#line 1112 "make.util.m"
            MR_Word make__util__V_71_71;
#line 1112 "make.util.m"
            MR_Word make__util__V_72_72;
#line 1112 "make.util.m"
            MR_Word make__util__V_73_73;
#line 1112 "make.util.m"
            MR_Word make__util__V_74_74;
#line 1112 "make.util.m"
            MR_Word make__util__V_75_75;
#line 1112 "make.util.m"
            MR_Word make__util__V_76_76;
#line 1112 "make.util.m"
            MR_Word make__util__V_77_77;
#line 1112 "make.util.m"
            MR_Word make__util__V_78_78;
#line 1112 "make.util.m"
            MR_Word make__util__V_79_79;
#line 1112 "make.util.m"
            MR_Word make__util__V_80_80;
#line 1112 "make.util.m"
            MR_Word make__util__V_81_81;
#line 1112 "make.util.m"
            MR_Word make__util__V_82_82;
#line 1112 "make.util.m"
            MR_Word make__util__V_83_83;
#line 1112 "make.util.m"
            MR_Word make__util__V_84_84;
#line 1112 "make.util.m"
            MR_Word make__util__V_85_85;
#line 1112 "make.util.m"
            MR_Word make__util__V_86_86;
#line 1112 "make.util.m"
            MR_Integer make__util__V_87_87;
#line 1112 "make.util.m"
            MR_Word make__util__V_88_88;
#line 1111 "make.util.m"
            MR_Word make__util__V_89_89;
#line 1111 "make.util.m"
            MR_Word make__util__V_90_90;
#line 1111 "make.util.m"
            MR_Word make__util__V_91_91;
#line 1111 "make.util.m"
            MR_Word make__util__V_92_92;
#line 1111 "make.util.m"
            MR_Word make__util__V_93_93;
#line 1111 "make.util.m"
            MR_Word make__util__V_94_94;
#line 1111 "make.util.m"
            MR_Word make__util__V_95_95;
#line 1111 "make.util.m"
            MR_Word make__util__V_96_96;
#line 1111 "make.util.m"
            MR_Word make__util__V_97_97;
#line 1111 "make.util.m"
            MR_Word make__util__V_98_98;
#line 1111 "make.util.m"
            MR_Word make__util__V_99_99;
#line 1111 "make.util.m"
            MR_Word make__util__V_100_100;
#line 1111 "make.util.m"
            MR_Word make__util__V_101_101;
#line 1111 "make.util.m"
            MR_Word make__util__V_102_102;
#line 1111 "make.util.m"
            MR_Word make__util__V_103_103;
#line 1111 "make.util.m"
            MR_Word make__util__V_105_105;
#line 1111 "make.util.m"
            MR_Word make__util__V_106_106;
#line 1111 "make.util.m"
            MR_Integer make__util__V_107_107;
#line 1111 "make.util.m"
            MR_Word make__util__V_108_108;
#line 1111 "make.util.m"
            MR_Word make__util__V_104_104;

#line 1102 "make.util.m"
            {
#line 1102 "make.util.m"
              libs__globals__lookup_int_option_3_p_0(make__util__Globals_8, (MR_Integer) 52, &make__util__LinesToWrite_19);
            }
#line 1104 "make.util.m"
            {
#line 1104 "make.util.m"
              mercury__io__output_stream_3_p_0(&make__util__CurrentOutputStream_20);
            }
#line 1105 "make.util.m"
            {
#line 1105 "make.util.m"
              make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_105_116_104_95_108_111_99_107_101_100_95_115_116_100_111_117_116_95_95_104_111_49_49_95_95_91_55_93_95_48_4_p_0(make__util__TmpErrorFileName_13, make__util__TmpErrorInputStream_15, make__util__ErrorFileOutputStream_18, make__util__CurrentOutputStream_20, make__util__LinesToWrite_19, make__util__STATE_VARIABLE_Info_0_23);
            }
#line 1109 "make.util.m"
            {
#line 1109 "make.util.m"
              mercury__io__close_output_3_p_0(make__util__ErrorFileOutputStream_18);
            }
#line 1112 "make.util.m"
            make__util__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 0)));
#line 1112 "make.util.m"
            make__util__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 1)));
#line 1112 "make.util.m"
            make__util__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 2)));
#line 1112 "make.util.m"
            make__util__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)));
#line 1112 "make.util.m"
            make__util__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 4)));
#line 1112 "make.util.m"
            make__util__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 5)));
#line 1112 "make.util.m"
            make__util__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 6)));
#line 1112 "make.util.m"
            make__util__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 7)));
#line 1112 "make.util.m"
            make__util__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 8)));
#line 1112 "make.util.m"
            make__util__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 9)));
#line 1112 "make.util.m"
            make__util__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 10)));
#line 1112 "make.util.m"
            make__util__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 11)));
#line 1112 "make.util.m"
            make__util__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 12)));
#line 1112 "make.util.m"
            make__util__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 13)));
#line 1112 "make.util.m"
            make__util__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 14)));
#line 1112 "make.util.m"
            make__util__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 15)));
#line 1112 "make.util.m"
            make__util__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 16)));
#line 1112 "make.util.m"
            make__util__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 17)));
#line 1112 "make.util.m"
            make__util__V_87_87 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 18)));
#line 1112 "make.util.m"
            make__util__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 19)));
#line 1112 "make.util.m"
            {
#line 1112 "make.util.m"
              make__util__V_46_46 = mercury__set__insert_2_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, make__util__V_47_47, ((MR_Box) (make__util__ModuleName_9)));
            }
#line 1111 "make.util.m"
            make__util__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 0)));
#line 1111 "make.util.m"
            make__util__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 1)));
#line 1111 "make.util.m"
            make__util__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 2)));
#line 1111 "make.util.m"
            make__util__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)));
#line 1111 "make.util.m"
            make__util__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 4)));
#line 1111 "make.util.m"
            make__util__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 5)));
#line 1111 "make.util.m"
            make__util__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 6)));
#line 1111 "make.util.m"
            make__util__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 7)));
#line 1111 "make.util.m"
            make__util__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 8)));
#line 1111 "make.util.m"
            make__util__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 9)));
#line 1111 "make.util.m"
            make__util__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 10)));
#line 1111 "make.util.m"
            make__util__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 11)));
#line 1111 "make.util.m"
            make__util__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 12)));
#line 1111 "make.util.m"
            make__util__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 13)));
#line 1111 "make.util.m"
            make__util__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 14)));
#line 1111 "make.util.m"
            make__util__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 15)));
#line 1111 "make.util.m"
            make__util__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 16)));
#line 1111 "make.util.m"
            make__util__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 17)));
#line 1111 "make.util.m"
            make__util__V_107_107 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 18)));
#line 1111 "make.util.m"
            make__util__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_23, (MR_Integer) 19)));
#line 1111 "make.util.m"
            {
#line 1111 "make.util.m"
              MR_Word base;
#line 1111 "make.util.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
#line 1111 "make.util.m"
              *make__util__STATE_VARIABLE_Info_24 = base;
#line 1111 "make.util.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__util__V_89_89));
#line 1111 "make.util.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__util__V_90_90));
#line 1111 "make.util.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__util__V_91_91));
#line 1111 "make.util.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (make__util__V_92_92));
#line 1111 "make.util.m"
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (make__util__V_93_93));
#line 1111 "make.util.m"
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (make__util__V_94_94));
#line 1111 "make.util.m"
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (make__util__V_95_95));
#line 1111 "make.util.m"
              MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (make__util__V_96_96));
#line 1111 "make.util.m"
              MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (make__util__V_97_97));
#line 1111 "make.util.m"
              MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (make__util__V_98_98));
#line 1111 "make.util.m"
              MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (make__util__V_99_99));
#line 1111 "make.util.m"
              MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (make__util__V_100_100));
#line 1111 "make.util.m"
              MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (make__util__V_101_101));
#line 1111 "make.util.m"
              MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (make__util__V_102_102));
#line 1111 "make.util.m"
              MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (make__util__V_103_103));
#line 1111 "make.util.m"
              MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (make__util__V_46_46));
#line 1111 "make.util.m"
              MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (make__util__V_105_105));
#line 1111 "make.util.m"
              MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (make__util__V_106_106));
#line 1111 "make.util.m"
              MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (make__util__V_107_107));
#line 1111 "make.util.m"
              MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (make__util__V_108_108));
#line 1111 "make.util.m"
            }
#line 1101 "make.util.m"
          }
#line 1118 "make.util.m"
        {
#line 1118 "make.util.m"
          mercury__io__close_input_3_p_0(make__util__TmpErrorInputStream_15);
        }
#line 1092 "make.util.m"
      }
#line 1124 "make.util.m"
    {
#line 1124 "make.util.m"
      mercury__io__remove_file_4_p_0(make__util__TmpErrorFileName_13, &make__util__V_22_22);
    }
#line 1086 "make.util.m"
  }
#line 121 "make.util.m"
}

#line 116 "make.util.m"
void MR_CALL 
make__util__redirect_output_6_p_0(
#line 116 "make.util.m"
  MR_Word make__util___ModuleName_7,
#line 116 "make.util.m"
  MR_Word * make__util__MaybeErrorStream_8,
#line 116 "make.util.m"
  MR_Word make__util__STATE_VARIABLE_Info_0_15,
#line 116 "make.util.m"
  MR_Word * make__util__STATE_VARIABLE_Info_16)
#line 116 "make.util.m"
{
#line 1069 "make.util.m"
  {
#line 1069 "make.util.m"
    MR_bool make__util__succeeded;

#line 1069 "make.util.m"
    {
#line 1069 "make.util.m"
      make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_100_105_114_101_99_116_95_111_117_116_112_117_116_95_95_91_49_93_95_48_6_p_0(make__util__MaybeErrorStream_8, make__util__STATE_VARIABLE_Info_0_15, make__util__STATE_VARIABLE_Info_16);
#line 1069 "make.util.m"
      return;
    }
#line 1069 "make.util.m"
  }
#line 116 "make.util.m"
}

#line 109 "make.util.m"
void MR_CALL 
make__util__build_with_output_redirect_8_p_0(
#line 109 "make.util.m"
  MR_Word make__util__Globals_9,
#line 109 "make.util.m"
  MR_Word make__util__ModuleName_10,
#line 109 "make.util.m"
  MR_Word make__util__Build_11,
#line 109 "make.util.m"
  MR_Word * make__util__Succeeded_12,
#line 109 "make.util.m"
  MR_Word make__util__STATE_VARIABLE_Info_0_17,
#line 109 "make.util.m"
  MR_Word * make__util__STATE_VARIABLE_Info_18)
#line 109 "make.util.m"
{
#line 990 "make.util.m"
  {
#line 990 "make.util.m"
    MR_bool make__util__succeeded;
#line 990 "make.util.m"
    MR_Word make__util__RedirectResult_15;
#line 990 "make.util.m"
    MR_Word make__util__STATE_VARIABLE_Info_21_21;

#line 991 "make.util.m"
    {
#line 991 "make.util.m"
      make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_100_105_114_101_99_116_95_111_117_116_112_117_116_95_95_91_49_93_95_48_6_p_0(&make__util__RedirectResult_15, make__util__STATE_VARIABLE_Info_0_17, &make__util__STATE_VARIABLE_Info_21_21);
    }
#line 995 "make.util.m"
    if ((make__util__RedirectResult_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 993 "make.util.m"
      {
#line 994 "make.util.m"
        *make__util__Succeeded_12 = (MR_Integer) 0;
#line 993 "make.util.m"
        *make__util__STATE_VARIABLE_Info_18 = make__util__STATE_VARIABLE_Info_21_21;
#line 993 "make.util.m"
      }
#line 995 "make.util.m"
    else
#line 996 "make.util.m"
      {
#line 996 "make.util.m"
        MR_Word make__util__ErrorStream_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__util__RedirectResult_15, (MR_Integer) 0)));
#line 996 "make.util.m"
        MR_Word make__util__STATE_VARIABLE_Info_23_23;
#line 997 "make.util.m"
        void MR_CALL (* make__util__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), make__util__Build_11, (MR_Integer) 1)));
#line 997 "make.util.m"
        MR_Box make__util__conv3_Succeeded_12;
#line 997 "make.util.m"
        MR_Box make__util__conv2_STATE_VARIABLE_Info_23_23;
#line 997 "make.util.m"
        MR_Box make__util__conv1_STATE_VARIABLE_IO_24_24;

#line 997 "make.util.m"
        {
#line 997 "make.util.m"
          make__util__func_0(((MR_Box) make__util__Build_11), ((MR_Box) (make__util__Globals_9)), ((MR_Box) (make__util__ErrorStream_16)), &make__util__conv3_Succeeded_12, ((MR_Box) (make__util__STATE_VARIABLE_Info_21_21)), &make__util__conv2_STATE_VARIABLE_Info_23_23, ((MR_Box) ((MR_Integer) 0)), &make__util__conv1_STATE_VARIABLE_IO_24_24);
        }
#line 997 "make.util.m"
        *make__util__Succeeded_12 = ((MR_Word) make__util__conv3_Succeeded_12);
#line 997 "make.util.m"
        make__util__STATE_VARIABLE_Info_23_23 = ((MR_Word) make__util__conv2_STATE_VARIABLE_Info_23_23);
#line 998 "make.util.m"
        {
#line 998 "make.util.m"
          make__util__unredirect_output_7_p_0(make__util__Globals_9, make__util__ModuleName_10, make__util__ErrorStream_16, make__util__STATE_VARIABLE_Info_23_23, make__util__STATE_VARIABLE_Info_18);
#line 998 "make.util.m"
          return;
        }
#line 996 "make.util.m"
      }
#line 990 "make.util.m"
  }
#line 109 "make.util.m"
}

#line 101 "make.util.m"
void MR_CALL 
make__util__build_with_module_options_args_12_p_0(
#line 101 "make.util.m"
  MR_Word make__util__TypeInfo_for_Info1_30,
#line 101 "make.util.m"
  MR_Word make__util__TypeInfo_for_Info2_31,
#line 101 "make.util.m"
  MR_Word make__util__Globals_13,
#line 101 "make.util.m"
  MR_Word make__util__ModuleName_14,
#line 101 "make.util.m"
  MR_Word make__util__DetectedGradeFlags_15,
#line 101 "make.util.m"
  MR_Word make__util__OptionVariables_16,
#line 101 "make.util.m"
  MR_Word make__util__OptionArgs_17,
#line 101 "make.util.m"
  MR_Word make__util__ExtraOptions_18,
#line 101 "make.util.m"
  MR_Word make__util__Build_19,
#line 101 "make.util.m"
  MR_Word * make__util__Succeeded_20,
#line 101 "make.util.m"
  MR_Box make__util__STATE_VARIABLE_Info_0_23,
#line 101 "make.util.m"
  MR_Word * make__util__STATE_VARIABLE_Info_24)
#line 101 "make.util.m"
{
#line 1015 "make.util.m"
  {
#line 1015 "make.util.m"
    MR_bool make__util__succeeded;
#line 1015 "make.util.m"
    MR_Word make__util__OptionsResult_46;

#line 1029 "make.util.m"
    {
#line 1029 "make.util.m"
      make__options_file__lookup_mmc_module_options_6_p_0(make__util__Globals_13, make__util__OptionVariables_16, make__util__ModuleName_14, &make__util__OptionsResult_46);
    }
#line 1035 "make.util.m"
    if ((make__util__OptionsResult_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1032 "make.util.m"
      {
#line 1033 "make.util.m"
        *make__util__STATE_VARIABLE_Info_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1034 "make.util.m"
        *make__util__Succeeded_20 = (MR_Integer) 0;
#line 1032 "make.util.m"
      }
#line 1035 "make.util.m"
    else
#line 1036 "make.util.m"
      {
#line 1036 "make.util.m"
        MR_Word make__util__TypeCtorInfo_55_71 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1036 "make.util.m"
        MR_Word make__util__ModuleOptionArgs_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__util__OptionsResult_46, (MR_Integer) 0)));
#line 1036 "make.util.m"
        MR_Word make__util__AllOptionArgs_50;
#line 1036 "make.util.m"
        MR_Word make__util__OptionsErrors_54;
#line 1036 "make.util.m"
        MR_Word make__util__BuildGlobals_55;
#line 1036 "make.util.m"
        MR_Word make__util__V_64_64;
#line 1036 "make.util.m"
        MR_Word make__util__V_65_65;
#line 1036 "make.util.m"
        MR_Word make__util__V_66_66;
#line 1036 "make.util.m"
        MR_Word make__util__V_67_67;
#line 1055 "make.util.m"
        MR_Word make__util__V_51_51;
#line 1055 "make.util.m"
        MR_Word make__util__V_52_52;
#line 1055 "make.util.m"
        MR_Word make__util__V_53_53;

#line 1054 "make.util.m"
        {
#line 1054 "make.util.m"
          make__util__V_67_67 = mercury__list__f_43_43_2_f_0(make__util__TypeCtorInfo_55_71, make__util__ExtraOptions_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        }
#line 1054 "make.util.m"
        {
#line 1054 "make.util.m"
          make__util__V_66_66 = mercury__list__f_43_43_2_f_0(make__util__TypeCtorInfo_55_71, make__util__OptionArgs_17, make__util__V_67_67);
        }
#line 1054 "make.util.m"
        {
#line 1054 "make.util.m"
          make__util__V_65_65 = mercury__list__f_43_43_2_f_0(make__util__TypeCtorInfo_55_71, make__util__ModuleOptionArgs_47, make__util__V_66_66);
        }
#line 1053 "make.util.m"
        {
#line 1053 "make.util.m"
          make__util__V_64_64 = mercury__list__f_43_43_2_f_0(make__util__TypeCtorInfo_55_71, make__util__DetectedGradeFlags_15, make__util__V_65_65);
        }
#line 1053 "make.util.m"
        {
#line 1053 "make.util.m"
          make__util__AllOptionArgs_50 = mercury__list__f_43_43_2_f_0(make__util__TypeCtorInfo_55_71, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), make__util__V_64_64);
        }
#line 1055 "make.util.m"
        {
#line 1055 "make.util.m"
          libs__handle_options__handle_given_options_8_p_0(make__util__AllOptionArgs_50, &make__util__V_51_51, &make__util__V_52_52, &make__util__V_53_53, &make__util__OptionsErrors_54, &make__util__BuildGlobals_55);
        }
#line 1062 "make.util.m"
        if ((make__util__OptionsErrors_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1063 "make.util.m"
          {
#line 1063 "make.util.m"
            MR_Box make__util__Info_58;
#line 1064 "make.util.m"
            void MR_CALL (* make__util__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), make__util__Build_19, (MR_Integer) 1)));
#line 1064 "make.util.m"
            MR_Box make__util__conv2_Succeeded_20;
#line 1064 "make.util.m"
            MR_Box make__util__conv1_STATE_VARIABLE_IO_26;

#line 1064 "make.util.m"
            {
#line 1064 "make.util.m"
              make__util__func_0(((MR_Box) make__util__Build_19), ((MR_Box) (make__util__BuildGlobals_55)), ((MR_Box) (make__util__AllOptionArgs_50)), &make__util__conv2_Succeeded_20, make__util__STATE_VARIABLE_Info_0_23, &make__util__Info_58, ((MR_Box) ((MR_Integer) 0)), &make__util__conv1_STATE_VARIABLE_IO_26);
            }
#line 1064 "make.util.m"
            *make__util__Succeeded_20 = ((MR_Word) make__util__conv2_Succeeded_20);
#line 1065 "make.util.m"
            {
#line 1065 "make.util.m"
              MR_Word base;
#line 1065 "make.util.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1065 "make.util.m"
              *make__util__STATE_VARIABLE_Info_24 = base;
#line 1065 "make.util.m"
              MR_hl_field(MR_mktag(1), base, 0) = make__util__Info_58;
#line 1065 "make.util.m"
            }
#line 1063 "make.util.m"
          }
#line 1062 "make.util.m"
        else
#line 1058 "make.util.m"
          {
#line 1059 "make.util.m"
            *make__util__Succeeded_20 = (MR_Integer) 0;
#line 1060 "make.util.m"
            *make__util__STATE_VARIABLE_Info_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1061 "make.util.m"
            {
#line 1061 "make.util.m"
              libs__handle_options__usage_errors_3_p_0(make__util__OptionsErrors_54);
#line 1061 "make.util.m"
              return;
            }
#line 1058 "make.util.m"
          }
#line 1036 "make.util.m"
      }
#line 1015 "make.util.m"
  }
#line 101 "make.util.m"
}

#line 88 "make.util.m"
void MR_CALL 
make__util__build_with_module_options_9_p_0(
#line 88 "make.util.m"
  MR_Word make__util__Globals_10,
#line 88 "make.util.m"
  MR_Word make__util__ModuleName_11,
#line 88 "make.util.m"
  MR_Word make__util__ExtraOptions_12,
#line 88 "make.util.m"
  MR_Word make__util__Build_13,
#line 88 "make.util.m"
  MR_Word * make__util__Succeeded_14,
#line 88 "make.util.m"
  MR_Word make__util__STATE_VARIABLE_Info_0_18,
#line 88 "make.util.m"
  MR_Word * make__util__STATE_VARIABLE_Info_19)
#line 88 "make.util.m"
{
#line 1002 "make.util.m"
  {
#line 1002 "make.util.m"
    MR_bool make__util__succeeded;
#line 1002 "make.util.m"
    MR_Word make__util__MaybeInfo_17;
#line 1002 "make.util.m"
    MR_Word make__util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 3)));
#line 1002 "make.util.m"
    MR_Word make__util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 4)));
#line 1002 "make.util.m"
    MR_Word make__util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 5)));
#line 1003 "make.util.m"
    MR_Word make__util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 0)));
#line 1003 "make.util.m"
    MR_Word make__util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 1)));
#line 1003 "make.util.m"
    MR_Word make__util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 2)));
#line 1003 "make.util.m"
    MR_Word make__util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 6)));
#line 1003 "make.util.m"
    MR_Word make__util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 7)));
#line 1003 "make.util.m"
    MR_Word make__util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 8)));
#line 1003 "make.util.m"
    MR_Word make__util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 9)));
#line 1003 "make.util.m"
    MR_Word make__util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 10)));
#line 1003 "make.util.m"
    MR_Word make__util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 11)));
#line 1003 "make.util.m"
    MR_Word make__util__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 12)));
#line 1003 "make.util.m"
    MR_Word make__util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 13)));
#line 1003 "make.util.m"
    MR_Word make__util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 14)));
#line 1003 "make.util.m"
    MR_Word make__util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 15)));
#line 1003 "make.util.m"
    MR_Word make__util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 16)));
#line 1003 "make.util.m"
    MR_Word make__util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 17)));
#line 1003 "make.util.m"
    MR_Integer make__util__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 18)));
#line 1003 "make.util.m"
    MR_Word make__util__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__util__STATE_VARIABLE_Info_0_18, (MR_Integer) 19)));

#line 1003 "make.util.m"
    {
#line 1003 "make.util.m"
      make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_97_114_103_115_95_105_110_118_111_107_101_100_95_95_91_49_44_32_50_93_95_48_13_p_0(make__util__Globals_10, (MR_Integer) 1, make__util__ModuleName_11, make__util__V_23_23, make__util__V_32_32, make__util__V_31_31, make__util__ExtraOptions_12, make__util__Build_13, make__util__Succeeded_14, ((MR_Box) (make__util__STATE_VARIABLE_Info_0_18)), &make__util__MaybeInfo_17);
    }
#line 1009 "make.util.m"
    if ((make__util__MaybeInfo_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1010 "make.util.m"
      *make__util__STATE_VARIABLE_Info_19 = make__util__STATE_VARIABLE_Info_0_18;
#line 1009 "make.util.m"
    else
#line 1008 "make.util.m"
      *make__util__STATE_VARIABLE_Info_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__util__MaybeInfo_17, (MR_Integer) 0)));
#line 1002 "make.util.m"
  }
#line 88 "make.util.m"
}

#line 68 "make.util.m"
void MR_CALL 
make__util__foldl2_maybe_stop_at_error_maybe_parallel_9_p_0(
#line 68 "make.util.m"
  MR_Word make__util__TypeInfo_for_T_35,
#line 68 "make.util.m"
  MR_Word make__util__KeepGoing_10,
#line 68 "make.util.m"
  MR_Word make__util__MakeTarget_11,
#line 68 "make.util.m"
  MR_Word make__util__Globals_12,
#line 68 "make.util.m"
  MR_Word make__util__Targets_13,
#line 68 "make.util.m"
  MR_Word * make__util__Success_14,
#line 68 "make.util.m"
  MR_Word make__util__STATE_VARIABLE_Info_0_20,
#line 68 "make.util.m"
  MR_Word * make__util__STATE_VARIABLE_Info_21)
#line 68 "make.util.m"
{
#line 422 "make.util.m"
  {
#line 422 "make.util.m"
    MR_bool make__util__succeeded;
#line 422 "make.util.m"
    MR_Integer make__util__Jobs_17;

#line 423 "make.util.m"
    {
#line 423 "make.util.m"
      libs__globals__lookup_int_option_3_p_0(make__util__Globals_12, (MR_Integer) 627, &make__util__Jobs_17);
    }
#line 425 "make.util.m"
    make__util__succeeded = (make__util__Jobs_17 > (MR_Integer) 1);
#line 425 "make.util.m"
    if (make__util__succeeded)
#line 425 "make.util.m"
      {
#line 426 "make.util.m"
        {
#line 426 "make.util.m"
          make__util__succeeded = libs__process_util__can_fork_0_p_0();
        }
#line 425 "make.util.m"
        if (make__util__succeeded)
#line 427 "make.util.m"
          {
#line 427 "make.util.m"
            make__util__succeeded = make__util__have_job_ctl_ipc_0_p_0();
          }
#line 425 "make.util.m"
      }
#line 444 "make.util.m"
    if (make__util__succeeded)
#line 431 "make.util.m"
      {
#line 431 "make.util.m"
        MR_Word make__util__Success0_18;
#line 431 "make.util.m"
        MR_Word make__util__STATE_VARIABLE_Info_26_26;

#line 430 "make.util.m"
        {
#line 430 "make.util.m"
          make__util__foldl2_maybe_stop_at_error_parallel_processes_10_p_0(make__util__TypeInfo_for_T_35, make__util__KeepGoing_10, make__util__Jobs_17, make__util__MakeTarget_11, make__util__Globals_12, make__util__Targets_13, &make__util__Success0_18, make__util__STATE_VARIABLE_Info_0_20, &make__util__STATE_VARIABLE_Info_26_26);
        }
#line 440 "make.util.m"
#line 440 "make.util.m"
        switch (make__util__Success0_18) {
#line 440 "make.util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 440 "make.util.m"
          case (MR_Integer) 0:
#line 441 "make.util.m"
            {
#line 442 "make.util.m"
              *make__util__Success_14 = (MR_Integer) 0;
#line 441 "make.util.m"
              *make__util__STATE_VARIABLE_Info_21 = make__util__STATE_VARIABLE_Info_26_26;
#line 441 "make.util.m"
            }
#line 440 "make.util.m"
            break;
#line 440 "make.util.m"
          case (MR_Integer) 1:
#line 434 "make.util.m"
            {
#line 434 "make.util.m"
              MR_Word make__util__NoRebuildGlobals_19;
#line 364 "make.util.m"
              MR_Box make__util__conv1_STATE_VARIABLE_Info_21;
#line 364 "make.util.m"
              MR_Box make__util__conv0_STATE_VARIABLE_IO_23;

#line 437 "make.util.m"
              {
#line 437 "make.util.m"
                libs__globals__set_option_4_p_0((MR_Integer) 626, (MR_Word) MR_mkword(MR_mktag(1), &make__util_scalar_common_3[0]), make__util__Globals_12, &make__util__NoRebuildGlobals_19);
              }
#line 364 "make.util.m"
              {
#line 364 "make.util.m"
                make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_50_95_95_91_49_44_32_50_44_32_51_93_95_48_10_p_0(make__util__KeepGoing_10, make__util__MakeTarget_11, make__util__NoRebuildGlobals_19, make__util__Targets_13, (MR_Integer) 1, make__util__Success_14, ((MR_Box) (make__util__STATE_VARIABLE_Info_26_26)), &make__util__conv1_STATE_VARIABLE_Info_21, ((MR_Box) ((MR_Integer) 0)), &make__util__conv0_STATE_VARIABLE_IO_23);
              }
#line 364 "make.util.m"
              *make__util__STATE_VARIABLE_Info_21 = ((MR_Word) make__util__conv1_STATE_VARIABLE_Info_21);
#line 434 "make.util.m"
            }
#line 440 "make.util.m"
            break;
#line 440 "make.util.m"
        }
#line 431 "make.util.m"
      }
#line 444 "make.util.m"
    else
#line 445 "make.util.m"
      {
#line 364 "make.util.m"
        MR_Box make__util__conv3_STATE_VARIABLE_Info_21;
#line 364 "make.util.m"
        MR_Box make__util__conv2_STATE_VARIABLE_IO_23;

#line 364 "make.util.m"
        {
#line 364 "make.util.m"
          make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_50_95_95_91_49_44_32_50_44_32_51_93_95_48_10_p_0(make__util__KeepGoing_10, make__util__MakeTarget_11, make__util__Globals_12, make__util__Targets_13, (MR_Integer) 1, make__util__Success_14, ((MR_Box) (make__util__STATE_VARIABLE_Info_0_20)), &make__util__conv3_STATE_VARIABLE_Info_21, ((MR_Box) ((MR_Integer) 0)), &make__util__conv2_STATE_VARIABLE_IO_23);
        }
#line 364 "make.util.m"
        *make__util__STATE_VARIABLE_Info_21 = ((MR_Word) make__util__conv3_STATE_VARIABLE_Info_21);
#line 445 "make.util.m"
      }
#line 422 "make.util.m"
  }
#line 68 "make.util.m"
}

#line 51 "make.util.m"
void MR_CALL 
make__util__foldl3_maybe_stop_at_error_11_p_0(
#line 51 "make.util.m"
  MR_Word make__util__TypeInfo_for_T_30,
#line 51 "make.util.m"
  MR_Word make__util__TypeInfo_for_Acc_31,
#line 51 "make.util.m"
  MR_Word make__util__TypeInfo_for_Info_32,
#line 51 "make.util.m"
  MR_Word make__util__TypeInfo_for_IO_33,
#line 51 "make.util.m"
  MR_Word make__util__KeepGoing_12,
#line 51 "make.util.m"
  MR_Word make__util__P_13,
#line 51 "make.util.m"
  MR_Word make__util__Globals_14,
#line 51 "make.util.m"
  MR_Word make__util__Ts_15,
#line 51 "make.util.m"
  MR_Word * make__util__Success_16,
#line 51 "make.util.m"
  MR_Box make__util__STATE_VARIABLE_Acc_0_20,
#line 51 "make.util.m"
  MR_Box * make__util__STATE_VARIABLE_Acc_21,
#line 51 "make.util.m"
  MR_Box make__util__STATE_VARIABLE_Info_0_22,
#line 51 "make.util.m"
  MR_Box * make__util__STATE_VARIABLE_Info_23,
#line 51 "make.util.m"
  MR_Box make__util__STATE_VARIABLE_IO_0_24,
#line 51 "make.util.m"
  MR_Box * make__util__STATE_VARIABLE_IO_25)
#line 51 "make.util.m"
{
#line 390 "make.util.m"
  {
#line 390 "make.util.m"
    MR_bool make__util__succeeded;

#line 391 "make.util.m"
    {
#line 391 "make.util.m"
      make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_50_95_95_91_49_44_32_50_44_32_51_44_32_52_93_95_48_12_p_0(make__util__KeepGoing_12, make__util__P_13, make__util__Globals_14, make__util__Ts_15, (MR_Integer) 1, make__util__Success_16, make__util__STATE_VARIABLE_Acc_0_20, make__util__STATE_VARIABLE_Acc_21, make__util__STATE_VARIABLE_Info_0_22, make__util__STATE_VARIABLE_Info_23, make__util__STATE_VARIABLE_IO_0_24, make__util__STATE_VARIABLE_IO_25);
#line 391 "make.util.m"
      return;
    }
#line 390 "make.util.m"
  }
#line 51 "make.util.m"
}

#line 36 "make.util.m"
void MR_CALL 
make__util__foldl2_maybe_stop_at_error_9_p_0(
#line 36 "make.util.m"
  MR_Word make__util__TypeInfo_for_T_24,
#line 36 "make.util.m"
  MR_Word make__util__TypeInfo_for_Info_25,
#line 36 "make.util.m"
  MR_Word make__util__TypeInfo_for_IO_26,
#line 36 "make.util.m"
  MR_Word make__util__KeepGoing_10,
#line 36 "make.util.m"
  MR_Word make__util__MakeTarget_11,
#line 36 "make.util.m"
  MR_Word make__util__Globals_12,
#line 36 "make.util.m"
  MR_Word make__util__Targets_13,
#line 36 "make.util.m"
  MR_Word * make__util__Success_14,
#line 36 "make.util.m"
  MR_Box make__util__STATE_VARIABLE_Info_0_17,
#line 36 "make.util.m"
  MR_Box * make__util__STATE_VARIABLE_Info_18,
#line 36 "make.util.m"
  MR_Box make__util__STATE_VARIABLE_IO_0_19,
#line 36 "make.util.m"
  MR_Box * make__util__STATE_VARIABLE_IO_20)
#line 36 "make.util.m"
{
#line 363 "make.util.m"
  {
#line 363 "make.util.m"
    MR_bool make__util__succeeded;

#line 364 "make.util.m"
    {
#line 364 "make.util.m"
      make__util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_50_95_95_91_49_44_32_50_44_32_51_93_95_48_10_p_0(make__util__KeepGoing_10, make__util__MakeTarget_11, make__util__Globals_12, make__util__Targets_13, (MR_Integer) 1, make__util__Success_14, make__util__STATE_VARIABLE_Info_0_17, make__util__STATE_VARIABLE_Info_18, make__util__STATE_VARIABLE_IO_0_19, make__util__STATE_VARIABLE_IO_20);
#line 364 "make.util.m"
      return;
    }
#line 363 "make.util.m"
  }
#line 36 "make.util.m"
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
