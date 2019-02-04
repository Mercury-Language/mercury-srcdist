/*
** Automatically generated from `make.util.m'
** by the Mercury compiler,
** version rotd-2009-09-15, configured for i686-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
**
** END_OF_C_GRADE_INFO
*/

/*
INIT mercury__make__util__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 24 "make.util.c"
#include "make.util.mh"

#line 27 "make.util.c"
#line 56 "../library/dir.int"
#include "dir.mh"

#line 31 "make.util.c"
#line 534 "../library/io.int"
#include "io.mh"

#line 35 "make.util.c"
#line 542 "../library/io.int"
#include "string.mh"

#line 39 "make.util.c"
#line 39 "../library/version_array.int"
#include "version_array.mh"

#line 43 "make.util.c"
#line 35 "libs.process_util.int"
#include "libs.process_util.mh"

#line 47 "make.util.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 51 "make.util.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 55 "make.util.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 59 "make.util.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 63 "make.util.c"
#line 21 "../library/stm_builtin.int2"
#include "stm_builtin.mh"

#line 67 "make.util.c"
#line 534 "make.util.m"

#ifdef MR_HAVE_SYS_MMAN_H
  #include <sys/mman.h>

  /* Just in case. */
  #if !defined(MAP_ANONYMOUS) && defined(MAP_ANON)
    #define MAP_ANONYMOUS MAP_ANON
  #endif
#endif

#ifdef MAP_ANONYMOUS
  /*
  ** Darwin 5.x doesn't implement unnamed POSIX semaphores nor process-shared
  ** POSIX mutexes; the functions fail when you try to create them.
  ** System V semaphores do work however.
  */
  #if !defined(__APPLE__) && defined(MR_HAVE_PTHREAD_H)
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

#line 131 "make.util.c"
#line 132 "make.util.c"
#ifndef MAKE__UTIL_DECL_GUARD
#define MAKE__UTIL_DECL_GUARD

#line 136 "make.util.c"
#line 530 "make.util.m"

typedef struct MC_JobCtl MC_JobCtl;

#line 141 "make.util.c"
#line 142 "make.util.c"

#endif
#line 145 "make.util.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1;
	MR_Integer f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Integer f5;
	MR_Integer f6;
	MR_Word * f7;
	MR_Word * f8;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1;
	MR_Integer f2;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Unsigned f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[6];
	MR_Integer f4;
	MR_Word * f5[5];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[8];
	MR_Integer f4[2];
	MR_Word * f5[2];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Unsigned f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
	MR_Integer f4[2];
	MR_Word * f5[2];
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

struct mercury_type_10 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_10 mercury_common_10[];

struct mercury_type_11 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[7];
};
MR_STATIC_LINKAGE const struct mercury_type_11 mercury_common_11[];

struct mercury_type_13 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_13 mercury_common_13[];

struct mercury_type_14 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_14 mercury_common_14[];

struct mercury_type_15 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_15 mercury_common_15[];

struct mercury_type_16 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_16 mercury_common_16[];

struct mercury_type_17 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[6];
	MR_Integer f4;
	MR_Word * f5[3];
};
MR_STATIC_LINKAGE const struct mercury_type_17 mercury_common_17[];

struct mercury_type_18 {
	MR_String f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_18 mercury_common_18[];

struct mercury_type_12 {
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_12 mercury_vector_common_12_0[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_make__util__type_ctor_info_build_3,
	mercury_data_make__util__type_ctor_info_build_2,
	mercury_data_make__util__type_ctor_info_build_1,
	mercury_data_make__util__type_ctor_info_build2_2,
	mercury_data_make__util__type_ctor_info_foldl2_pred_with_status_3,
	mercury_data_make__util__type_ctor_info_foldl3_pred_with_status_4,
	mercury_data_make__util__type_ctor_info_job_ctl_0;
MR_decl_label7(make__util__IntroducedFrom__pred__maybe_symlink_or_copy_linked_target_message__1710__1_3_0, 2,9,11,4,5,6,3)
MR_decl_label8(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_97_114_103_115_95_105_110_118_111_107_101_100_95_95_91_49_44_32_50_93_95_48_11_0, 2,28,4,5,7,20,21,24)
MR_decl_label2(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_97_114_103_115_95_105_110_118_111_107_101_100_95_95_91_49_44_32_50_93_95_48_11_0, 26,23)
MR_decl_label8(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_97_114_103_115_95_105_110_118_111_107_101_100_95_95_104_111_57_95_95_91_56_93_95_48_11_0, 2,28,4,5,7,20,21,24)
MR_decl_label2(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_97_114_103_115_95_105_110_118_111_107_101_100_95_95_104_111_57_95_95_91_56_93_95_48_11_0, 26,23)
MR_decl_label6(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_50_95_95_91_49_44_32_50_44_32_51_93_95_48_9_0, 27,3,4,8,11,6)
MR_decl_label6(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_50_95_95_91_49_44_32_50_44_32_51_44_32_52_93_95_48_11_0, 27,3,4,8,11,6)
MR_decl_label8(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_100_105_114_101_99_116_95_111_117_116_112_117_116_95_95_91_49_93_95_48_6_0, 2,3,6,7,8,9,10,11)
MR_decl_label1(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_100_105_114_101_99_116_95_111_117_116_112_117_116_95_95_91_49_93_95_48_6_0, 5)
MR_decl_label2(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_95_119_111_114_107_101_114_95_112_114_111_99_101_115_115_95_95_91_56_93_95_48_10_0, 3,5)
MR_decl_label2(make__util__build_with_module_options_8_0, 2,4)
MR_decl_label2(make__util__build_with_module_options_and_output_redirect_8_0, 2,4)
MR_decl_label4(make__util__build_with_module_options_and_output_redirect_2_8_0, 2,4,5,6)
MR_decl_label8(make__util__build_with_module_options_args_10_0, 2,19,4,5,11,12,15,17)
MR_decl_label1(make__util__build_with_module_options_args_10_0, 14)
MR_decl_label4(make__util__build_with_output_redirect_7_0, 2,4,5,6)
MR_decl_label6(make__util__debug_file_msg_4_0, 2,5,6,7,8,3)
MR_decl_label3(make__util__debug_msg_3_0, 2,5,3)
MR_decl_label8(make__util__dependency_file_hash_2_0, 105,6,5,39,13,15,11,42)
MR_decl_label8(make__util__dependency_file_hash_2_0, 10,12,16,17,18,19,21,22)
MR_decl_label8(make__util__dependency_file_hash_2_0, 23,24,25,26,27,28,29,31)
MR_decl_label7(make__util__dependency_file_hash_2_0, 32,33,34,35,36,37,38)
MR_decl_label2(make__util__file_error_3_0, 2,3)
MR_decl_label8(make__util__foldl2_maybe_stop_at_error_maybe_parallel_8_0, 2,5,7,9,11,12,14,15)
MR_decl_label2(make__util__foldl2_maybe_stop_at_error_maybe_parallel_8_0, 17,4)
MR_decl_label8(make__util__foldl2_maybe_stop_at_error_parallel_processes_9_0, 2,3,5,7,9,12,14,15)
MR_decl_label8(make__util__get_dependency_timestamp_6_0, 6,5,8,3,10,11,15,20)
MR_decl_label1(make__util__get_dependency_timestamp_6_0, 2)
MR_decl_label8(make__util__get_file_name_7_0, 4,7,6,2,8,9,11,15)
MR_decl_label1(make__util__get_file_name_7_0, 14)
MR_decl_label8(make__util__get_file_timestamp_7_0, 4,2,6,9,10,8,12,15)
MR_decl_label8(make__util__get_search_directories_4_0, 123,18,19,21,22,126,141,3)
MR_decl_label8(make__util__get_search_directories_4_0, 4,6,7,5,33,34,36,37)
MR_decl_label8(make__util__get_search_directories_4_0, 60,61,63,64,75,76,78,79)
MR_decl_label8(make__util__get_search_directories_4_0, 87,88,90,91,96,97,99,100)
MR_decl_label8(make__util__get_search_directories_4_0, 98,102,109,111,112,114,115,113)
MR_decl_label3(make__util__get_search_directories_4_0, 117,120,121)
MR_decl_label2(make__util__get_target_timestamp_7_0, 2,3)
MR_decl_label8(make__util__get_target_timestamp_2_8_0, 4,3,6,2,7,11,13,18)
MR_decl_label5(make__util__get_target_timestamp_2_8_0, 19,22,14,15,25)
MR_decl_label5(make__util__get_target_timestamp_analysis_registry_8_0, 4,2,7,12,9)
MR_decl_label5(make__util__get_timestamp_file_timestamp_6_0, 2,5,4,8,10)
MR_decl_label1(make__util__have_job_ctl_ipc_0_0, 1)
MR_decl_label7(make__util__linked_target_file_name_5_0, 3,22,6,8,24,23,14)
MR_decl_label8(make__util__make_remove_file_6_0, 2,13,4,5,6,7,3,9)
MR_decl_label1(make__util__make_remove_file_6_0, 11)
MR_decl_label1(make__util__make_remove_file_7_0, 2)
MR_decl_label6(make__util__make_remove_target_file_7_0, 2,3,4,7,9,5)
MR_decl_label1(make__util__make_write_dependency_file_3_0, 3)
MR_decl_label6(make__util__make_write_dependency_file_list_3_0, 18,4,6,5,9,20)
MR_decl_label8(make__util__make_write_error_char_7_0, 2,4,3,10,11,12,13,8)
MR_decl_label3(make__util__make_write_module_or_linked_target_3_0, 8,26,25)
MR_decl_label4(make__util__make_write_target_file_wrapped_5_0, 2,14,3,7)
MR_decl_label5(make__util__maybe_make_linked_target_message_3_0, 2,5,6,7,3)
MR_decl_label1(make__util__maybe_make_target_message_3_0, 2)
MR_decl_label5(make__util__maybe_make_target_message_to_stream_4_0, 2,5,6,7,3)
MR_decl_label4(make__util__maybe_reanalyse_modules_message_2_0, 2,5,6,3)
MR_decl_label3(make__util__maybe_symlink_or_copy_linked_target_message_3_0, 2,5,3)
MR_decl_label8(make__util__maybe_warn_up_to_date_target_5_0, 2,17,4,8,10,11,12,15)
MR_decl_label1(make__util__module_name_hash_2_0, 3)
MR_decl_label4(make__util__module_name_to_search_file_name_cache_7_0, 5,3,7,9)
MR_decl_label8(make__util__module_target_to_file_name_maybe_search_7_0, 75,2,3,10,12,14,19,21)
MR_decl_label3(make__util__module_target_to_file_name_maybe_search_7_0, 20,5,32)
MR_decl_label2(make__util__reap_worker_process_5_0, 2,3)
MR_decl_label5(make__util__target_is_grade_or_arch_dependent_1_0, 22,6,25,29,1)
MR_decl_label8(make__util__unredirect_output_6_0, 2,3,4,7,8,9,10,11)
MR_decl_label8(make__util__unredirect_output_6_0, 12,6,13,15,14,19,22,23)
MR_decl_label8(make__util__unredirect_output_6_0, 24,25,26,27,21,28,29,31)
MR_decl_label8(make__util__unredirect_output_6_0, 34,35,36,37,38,33,40,41)
MR_decl_label2(make__util__unredirect_output_6_0, 43,44)
MR_decl_label3(make__util__verbose_msg_3_0, 2,5,3)
MR_decl_label3(make__util__verbose_msg_4_0, 2,5,3)
MR_decl_label8(make__util__worker_loop_10_0, 21,2,4,5,8,7,9,3)
MR_decl_label3(make__util__worker_loop_signal_cleanup_6_0, 2,3,5)
MR_decl_label4(fn__make__util__find_oldest_timestamp_2_0, 24,7,6,23)
MR_decl_label8(fn__make__util__target_extension_2_0, 57,14,16,5,7,9,60,3)
MR_decl_label8(fn__make__util__target_extension_2_0, 12,19,21,23,25,30,32,34)
MR_decl_label8(fn__make__util__target_extension_2_0, 36,38,40,111,43,45,47,49)
MR_decl_label3(fn__make__util__target_extension_2_0, 51,53,55)
MR_decl_label8(fn__make__util__target_extension_2_1, 2,3,5,6,8,9,11,12)
MR_decl_label8(fn__make__util__target_extension_2_1, 14,15,17,18,20,21,23,24)
MR_decl_label8(fn__make__util__target_extension_2_1, 26,27,29,30,33,34,37,38)
MR_decl_label8(fn__make__util__target_extension_2_1, 40,41,43,44,46,47,49,50)
MR_decl_label8(fn__make__util__target_extension_2_1, 52,53,55,56,58,59,61,62)
MR_decl_label6(fn__make__util__target_extension_2_1, 65,66,69,70,74,73)
MR_decl_label8(fn__make__util__timestamp_extension_2_0, 54,10,4,6,28,3,8,15)
MR_decl_label8(fn__make__util__timestamp_extension_2_0, 16,19,20,21,22,24,25,26)
MR_decl_label1(fn__make__util__timestamp_extension_2_0, 1)
MR_def_extern_entry(make__util__foldl2_maybe_stop_at_error_8_0)
MR_def_extern_entry(make__util__foldl3_maybe_stop_at_error_10_0)
MR_decl_static(make__util__create_job_ctl_4_0)
MR_decl_static(make__util__destroy_job_ctl_3_0)
MR_decl_static(make__util__foldl2_maybe_stop_at_error_parallel_processes_9_0)
MR_decl_static(make__util__have_job_ctl_ipc_0_0)
MR_def_extern_entry(make__util__foldl2_maybe_stop_at_error_maybe_parallel_8_0)
MR_def_extern_entry(make__util__build_with_module_options_8_0)
MR_def_extern_entry(make__util__build_with_module_options_args_10_0)
MR_def_extern_entry(make__util__redirect_output_6_0)
MR_def_extern_entry(make__util__unredirect_output_6_0)
MR_def_extern_entry(make__util__build_with_output_redirect_7_0)
MR_def_extern_entry(make__util__build_with_module_options_and_output_redirect_8_0)
MR_def_extern_entry(make__util__get_file_timestamp_7_0)
MR_def_extern_entry(fn__make__util__timestamp_extension_2_0)
MR_def_extern_entry(fn__make__util__target_extension_2_0)
MR_def_extern_entry(fn__make__util__target_extension_2_1)
MR_decl_static(make__util__module_target_to_file_name_maybe_search_7_0)
MR_def_extern_entry(make__util__get_timestamp_file_timestamp_6_0)
MR_decl_static(make__util__module_name_to_search_file_name_cache_7_0)
MR_def_extern_entry(make__util__get_file_name_7_0)
MR_decl_static(make__util__get_search_directories_4_0)
MR_decl_static(make__util__get_target_timestamp_2_8_0)
MR_decl_static(make__util__get_target_timestamp_analysis_registry_8_0)
MR_def_extern_entry(make__util__get_target_timestamp_7_0)
MR_def_extern_entry(make__util__get_dependency_timestamp_6_0)
MR_def_extern_entry(fn__make__util__find_oldest_timestamp_2_0)
MR_def_extern_entry(make__util__verbose_msg_4_0)
MR_def_extern_entry(make__util__make_remove_file_6_0)
MR_def_extern_entry(make__util__make_remove_file_7_0)
MR_def_extern_entry(make__util__make_remove_target_file_7_0)
MR_def_extern_entry(make__util__make_remove_target_file_6_0)
MR_def_extern_entry(fn__make__util__make_target_file_list_2_0)
MR_def_extern_entry(fn__make__util__make_dependency_list_2_0)
MR_def_extern_entry(make__util__linked_target_file_name_5_0)
MR_def_extern_entry(make__util__target_is_grade_or_arch_dependent_1_0)
MR_def_extern_entry(make__util__debug_msg_3_0)
MR_def_extern_entry(make__util__verbose_msg_3_0)
MR_def_extern_entry(make__util__debug_file_msg_4_0)
MR_def_extern_entry(make__util__make_write_target_file_wrapped_5_0)
MR_def_extern_entry(make__util__make_write_target_file_3_0)
MR_def_extern_entry(make__util__make_write_dependency_file_3_0)
MR_def_extern_entry(make__util__make_write_dependency_file_list_3_0)
MR_def_extern_entry(make__util__maybe_make_linked_target_message_3_0)
MR_def_extern_entry(make__util__maybe_make_target_message_to_stream_4_0)
MR_def_extern_entry(make__util__maybe_make_target_message_3_0)
MR_def_extern_entry(make__util__maybe_reanalyse_modules_message_2_0)
MR_def_extern_entry(make__util__target_file_error_3_0)
MR_def_extern_entry(make__util__file_error_3_0)
MR_decl_static(make__util__make_write_module_or_linked_target_3_0)
MR_def_extern_entry(make__util__maybe_warn_up_to_date_target_5_0)
MR_def_extern_entry(make__util__maybe_symlink_or_copy_linked_target_message_3_0)
MR_def_extern_entry(make__util__get_real_milliseconds_3_0)
MR_def_extern_entry(make__util__module_name_hash_2_0)
MR_def_extern_entry(make__util__dependency_file_hash_2_0)
MR_decl_static(make__util__start_worker_process_10_0)
MR_decl_static(make__util__child_worker_8_0)
MR_decl_static(make__util__accept_task_4_0)
MR_decl_static(make__util__mark_task_done_4_0)
MR_decl_static(make__util__mark_task_error_5_0)
MR_decl_static(make__util__worker_loop_10_0)
MR_decl_static(make__util__mark_abort_3_0)
MR_decl_static(make__util__worker_loop_signal_cleanup_6_0)
MR_decl_static(make__util__reap_worker_process_5_0)
MR_decl_static(fn__make__util__make_yes_job_ctl_1_0)
MR_decl_static(fn__make__util__make_no_job_ctl_0_0)
MR_decl_static(make__util__build_with_module_options_and_output_redirect_2_8_0)
MR_decl_static(make__util__make_write_error_char_7_0)
MR_def_extern_entry(__Unify___make__util__build_1_0)
MR_def_extern_entry(__Compare___make__util__build_1_0)
MR_def_extern_entry(__Unify___make__util__build_2_0)
MR_def_extern_entry(__Compare___make__util__build_2_0)
MR_def_extern_entry(__Unify___make__util__build_3_0)
MR_def_extern_entry(__Compare___make__util__build_3_0)
MR_def_extern_entry(__Unify___make__util__build2_2_0)
MR_def_extern_entry(__Compare___make__util__build2_2_0)
MR_def_extern_entry(__Unify___make__util__foldl2_pred_with_status_3_0)
MR_def_extern_entry(__Compare___make__util__foldl2_pred_with_status_3_0)
MR_def_extern_entry(__Unify___make__util__foldl3_pred_with_status_4_0)
MR_def_extern_entry(__Compare___make__util__foldl3_pred_with_status_4_0)
MR_decl_static(__Unify___make__util__job_ctl_0_0)
MR_decl_static(__Compare___make__util__job_ctl_0_0)
MR_decl_static(fn__make__util__IntroducedFrom__func__make_target_file_list__1335__1_2_0)
MR_decl_static(fn__make__util__IntroducedFrom__func__make_dependency_list__1339__1_2_0)
MR_decl_static(make__util__IntroducedFrom__pred__maybe_symlink_or_copy_linked_target_message__1710__1_3_0)
MR_def_extern_entry(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_100_105_114_101_99_116_95_111_117_116_112_117_116_95_95_91_49_93_95_48_6_0)
MR_decl_static(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_50_95_95_91_49_44_32_50_44_32_51_93_95_48_9_0)
MR_decl_static(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_50_95_95_91_49_44_32_50_44_32_51_44_32_52_93_95_48_11_0)
MR_decl_static(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_95_119_111_114_107_101_114_95_112_114_111_99_101_115_115_95_95_91_56_93_95_48_10_0)
MR_decl_static(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_97_114_103_115_95_105_110_118_111_107_101_100_95_95_91_49_44_32_50_93_95_48_11_0)
MR_decl_static(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_97_114_103_115_95_105_110_118_111_107_101_100_95_95_104_111_57_95_95_91_56_93_95_48_11_0)

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_pred_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const struct mercury_type_0 mercury_common_0[1] =
{
{
MR_CTOR0_ADDR(builtin, pred),
6,
1,
MR_BOOL_CTOR_ADDR,
2,
2,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
static const struct mercury_type_1 mercury_common_1[1] =
{
{
MR_LIST_CTOR_ADDR,
1
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_error_1;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__timestamp__type_ctor_info_timestamp_0;
extern const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_analysis__compiler__arity1__transform_hlds__mmc_analysis__mmc__arity0__[];
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__mmc_analysis__type_ctor_info_mmc_0;
static const struct mercury_type_2 mercury_common_2[6] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
{
{
MR_tbmkword(0, 0),
MR_tbmkword(0, 0)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe_error),
MR_CTOR0_ADDR(libs__timestamp, timestamp)
}
},
{
{
(MR_Word *) &mercury_data_base_typeclass_info_analysis__compiler__arity1__transform_hlds__mmc_analysis__mmc__arity0__,
MR_CTOR0_ADDR(transform_hlds__mmc_analysis, mmc)
}
},
{
{
MR_TAG_COMMON(1,18,0),
MR_tbmkword(0, 0)
}
},
};

static const struct mercury_type_3 mercury_common_3[1] =
{
{
{
2,
17,
33
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__make__util__foldl2_maybe_stop_at_error_parallel_processes_9_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_private_builtin__type_ctor_info_type_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_make__util__type_ctor_info_job_ctl_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const struct mercury_type_4 mercury_common_4[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__make__util__foldl2_maybe_stop_at_error_parallel_processes_9_0_1,
MR_COMMON(3,0)
},
12,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_CTOR0_ADDR(private_builtin, type_info),
MR_BOOL_CTOR_ADDR,
MR_COMMON(0,0),
MR_COMMON(1,0),
MR_CTOR0_ADDR(make__util, job_ctl)
},
2,
{
MR_INT_CTOR_ADDR,
MR_COMMON(2,0),
MR_COMMON(2,0),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__make__util__foldl2_maybe_stop_at_error_parallel_processes_9_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__make__util__child_worker_8_0_1;
static const struct mercury_type_5 mercury_common_5[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__make__util__foldl2_maybe_stop_at_error_parallel_processes_9_0_2,
MR_COMMON(3,0)
},
12,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_CTOR0_ADDR(private_builtin, type_info),
MR_BOOL_CTOR_ADDR,
MR_COMMON(0,0),
MR_COMMON(1,0),
MR_CTOR0_ADDR(make__util, job_ctl),
MR_BOOL_CTOR_ADDR,
MR_BOOL_CTOR_ADDR
},
{
2,
2
},
{
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__make__util__child_worker_8_0_1,
MR_COMMON(3,0)
},
12,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_CTOR0_ADDR(private_builtin, type_info),
MR_BOOL_CTOR_ADDR,
MR_COMMON(0,0),
MR_COMMON(1,0),
MR_CTOR0_ADDR(make__util, job_ctl),
MR_BOOL_CTOR_ADDR,
MR_BOOL_CTOR_ADDR
},
{
2,
2
},
{
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const struct mercury_type_6 mercury_common_6[1] =
{
{
{
1,
17
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__make__util__foldl2_maybe_stop_at_error_parallel_processes_9_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__make__util__child_worker_8_0_2;
static const struct mercury_type_7 mercury_common_7[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__make__util__foldl2_maybe_stop_at_error_parallel_processes_9_0_3,
MR_COMMON(6,0)
},
7,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_CTOR0_ADDR(make__util, job_ctl),
MR_COMMON(2,0)
},
{
1,
1
},
{
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__make__util__child_worker_8_0_2,
MR_COMMON(6,0)
},
7,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_CTOR0_ADDR(make__util, job_ctl),
MR_COMMON(2,0)
},
{
1,
1
},
{
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__make__util__foldl2_maybe_stop_at_error_parallel_processes_9_0_4;
static const struct mercury_type_8 mercury_common_8[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__make__util__foldl2_maybe_stop_at_error_parallel_processes_9_0_4,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_INT_CTOR_ADDR,
MR_BOOL_CTOR_ADDR,
MR_BOOL_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const struct mercury_type_9 mercury_common_9[1] =
{
{
MR_COMMON(8,0),
MR_ENTRY_AP(make__util__reap_worker_process_5_0),
0
},
};

static const struct mercury_type_10 mercury_common_10[3] =
{
{
0
},
{
2
},
{
1
},
};

static const MR_UserClosureId
mercury_data__closure_layout__make__util__unredirect_output_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_output_stream_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
static const struct mercury_type_11 mercury_common_11[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__make__util__unredirect_output_6_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(io, output_stream),
MR_CTOR0_ADDR(io, output_stream),
MR_CHAR_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const struct mercury_type_13 mercury_common_13[23] =
{
{
MR_string_const(".analysis", 9)
},
{
MR_string_const(".s", 2)
},
{
MR_string_const(".pic_s", 6)
},
{
MR_string_const(".c", 2)
},
{
MR_string_const(".mh", 3)
},
{
MR_string_const(".mih", 4)
},
{
MR_string_const(".beam", 5)
},
{
MR_string_const(".erl", 4)
},
{
MR_string_const(".hrl", 4)
},
{
MR_string_const(".err", 4)
},
{
MR_string_const(".dll", 4)
},
{
MR_string_const(".il", 3)
},
{
MR_string_const(".opt", 4)
},
{
MR_string_const(".class", 6)
},
{
MR_string_const(".java", 5)
},
{
MR_string_const(".int", 4)
},
{
MR_string_const(".int0", 5)
},
{
MR_string_const(".int2", 5)
},
{
MR_string_const(".m", 2)
},
{
MR_string_const(".track_flags", 12)
},
{
MR_string_const(".int3", 5)
},
{
MR_string_const(".xml", 4)
},
{
MR_string_const("invalid module", 14)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_make__type_ctor_info_target_type_0;
static const struct mercury_type_14 mercury_common_14[2] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_STRING_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_CTOR0_ADDR(make, target_type)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__make__util__make_target_file_list_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_make__type_ctor_info_module_target_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_make__type_ctor_info_target_file_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__make__util__make_dependency_list_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_make__dependencies__type_ctor_info_dependency_file_0;
static const struct mercury_type_15 mercury_common_15[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__fn__make__util__make_target_file_list_2_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(make, module_target_type),
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_CTOR0_ADDR(make, target_file)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__make__util__make_dependency_list_2_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(make, module_target_type),
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_CTOR0_ADDR(make__dependencies, dependency_file)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__make__util__worker_loop_signal_cleanup_6_0_1;
static const struct mercury_type_16 mercury_common_16[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__make__util__worker_loop_signal_cleanup_6_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_95_119_111_114_107_101_114_95_112_114_111_99_101_115_115_95_95_91_56_93_95_48_10_0_1;
static const struct mercury_type_17 mercury_common_17[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_95_119_111_114_107_101_114_95_112_114_111_99_101_115_115_95_95_91_56_93_95_48_10_0_1,
MR_COMMON(3,0)
},
10,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_CTOR0_ADDR(private_builtin, type_info),
MR_BOOL_CTOR_ADDR,
MR_COMMON(0,0),
MR_COMMON(1,0),
MR_CTOR0_ADDR(make__util, job_ctl)
},
2,
{
MR_BOOL_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const struct mercury_type_18 mercury_common_18[2] =
{
{
MR_string_const("--use-subdirs", 13),
MR_tbmkword(0, 0)
},
{
MR_string_const("--invoked-by-mmc-make", 21),
MR_tbmkword(0, 0)
},
};

static const struct mercury_type_12 mercury_vector_common_12_0[6] =
{
{
MR_tbmkword(0, 9)
},
{
MR_tbmkword(0, 9)
},
{
MR_tbmkword(0, 9)
},
{
MR_TAG_COMMON(2,10,1)
},
{
MR_tbmkword(0, 9)
},
{
MR_tbmkword(0, 9)
},
};

static const MR_VA_PseudoTypeInfo_Struct6 mercury_data___vpti_pred_6__pseudo_1__plain_bool__type_ctor_info_bool_0__pseudo_2__pseudo_3__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
	&mercury_data_builtin__type_ctor_info_pred_0,
	6,
{	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) 2,
	(MR_PseudoTypeInfo) 3,
	(MR_PseudoTypeInfo) &mercury_data_io__type_ctor_info_state_0,
	(MR_PseudoTypeInfo) &mercury_data_io__type_ctor_info_state_0
}};

const MR_TypeCtorInfo_Struct mercury_data_make__util__type_ctor_info_build_3 = {
	3,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___make__util__build_3_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___make__util__build_3_0)),
	"make.util",
	"build",
	{ 0 },
	{ (void *)&mercury_data___vpti_pred_6__pseudo_1__plain_bool__type_ctor_info_bool_0__pseudo_2__pseudo_3__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 },
	-1,
	0,
	NULL
};

static const MR_VA_PseudoTypeInfo_Struct6 mercury_data___vpti_pred_6__pseudo_1__plain_bool__type_ctor_info_bool_0__pseudo_2__pseudo_2__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
	&mercury_data_builtin__type_ctor_info_pred_0,
	6,
{	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) 2,
	(MR_PseudoTypeInfo) 2,
	(MR_PseudoTypeInfo) &mercury_data_io__type_ctor_info_state_0,
	(MR_PseudoTypeInfo) &mercury_data_io__type_ctor_info_state_0
}};

const MR_TypeCtorInfo_Struct mercury_data_make__util__type_ctor_info_build_2 = {
	2,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___make__util__build_2_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___make__util__build_2_0)),
	"make.util",
	"build",
	{ 0 },
	{ (void *)&mercury_data___vpti_pred_6__pseudo_1__plain_bool__type_ctor_info_bool_0__pseudo_2__pseudo_2__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_make__type_ctor_info_make_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_make__type_ctor_info_make_info_0;

static const MR_VA_PseudoTypeInfo_Struct6 mercury_data___vpti_pred_6__pseudo_1__plain_bool__type_ctor_info_bool_0__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
	&mercury_data_builtin__type_ctor_info_pred_0,
	6,
{	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_make__type_ctor_info_make_info_0,
	(MR_PseudoTypeInfo) &mercury_data_make__type_ctor_info_make_info_0,
	(MR_PseudoTypeInfo) &mercury_data_io__type_ctor_info_state_0,
	(MR_PseudoTypeInfo) &mercury_data_io__type_ctor_info_state_0
}};

const MR_TypeCtorInfo_Struct mercury_data_make__util__type_ctor_info_build_1 = {
	1,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___make__util__build_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___make__util__build_1_0)),
	"make.util",
	"build",
	{ 0 },
	{ (void *)&mercury_data___vpti_pred_6__pseudo_1__plain_bool__type_ctor_info_bool_0__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 },
	-1,
	0,
	NULL
};

static const MR_VA_PseudoTypeInfo_Struct7 mercury_data___vpti_pred_7__pseudo_1__pseudo_2__plain_bool__type_ctor_info_bool_0__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
	&mercury_data_builtin__type_ctor_info_pred_0,
	7,
{	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 2,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_make__type_ctor_info_make_info_0,
	(MR_PseudoTypeInfo) &mercury_data_make__type_ctor_info_make_info_0,
	(MR_PseudoTypeInfo) &mercury_data_io__type_ctor_info_state_0,
	(MR_PseudoTypeInfo) &mercury_data_io__type_ctor_info_state_0
}};

const MR_TypeCtorInfo_Struct mercury_data_make__util__type_ctor_info_build2_2 = {
	2,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___make__util__build2_2_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___make__util__build2_2_0)),
	"make.util",
	"build2",
	{ 0 },
	{ (void *)&mercury_data___vpti_pred_7__pseudo_1__pseudo_2__plain_bool__type_ctor_info_bool_0__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 },
	-1,
	0,
	NULL
};

static const MR_VA_PseudoTypeInfo_Struct6 mercury_data___vpti_pred_6__pseudo_1__plain_bool__type_ctor_info_bool_0__pseudo_2__pseudo_2__pseudo_3__pseudo_3 = {
	&mercury_data_builtin__type_ctor_info_pred_0,
	6,
{	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) 2,
	(MR_PseudoTypeInfo) 2,
	(MR_PseudoTypeInfo) 3,
	(MR_PseudoTypeInfo) 3
}};

const MR_TypeCtorInfo_Struct mercury_data_make__util__type_ctor_info_foldl2_pred_with_status_3 = {
	3,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___make__util__foldl2_pred_with_status_3_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___make__util__foldl2_pred_with_status_3_0)),
	"make.util",
	"foldl2_pred_with_status",
	{ 0 },
	{ (void *)&mercury_data___vpti_pred_6__pseudo_1__plain_bool__type_ctor_info_bool_0__pseudo_2__pseudo_2__pseudo_3__pseudo_3 },
	-1,
	0,
	NULL
};

static const MR_VA_PseudoTypeInfo_Struct8 mercury_data___vpti_pred_8__pseudo_1__plain_bool__type_ctor_info_bool_0__pseudo_2__pseudo_2__pseudo_3__pseudo_3__pseudo_4__pseudo_4 = {
	&mercury_data_builtin__type_ctor_info_pred_0,
	8,
{	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) 2,
	(MR_PseudoTypeInfo) 2,
	(MR_PseudoTypeInfo) 3,
	(MR_PseudoTypeInfo) 3,
	(MR_PseudoTypeInfo) 4,
	(MR_PseudoTypeInfo) 4
}};

const MR_TypeCtorInfo_Struct mercury_data_make__util__type_ctor_info_foldl3_pred_with_status_4 = {
	4,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___make__util__foldl3_pred_with_status_4_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___make__util__foldl3_pred_with_status_4_0)),
	"make.util",
	"foldl3_pred_with_status",
	{ 0 },
	{ (void *)&mercury_data___vpti_pred_8__pseudo_1__plain_bool__type_ctor_info_bool_0__pseudo_2__pseudo_2__pseudo_3__pseudo_3__pseudo_4__pseudo_4 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_make__util__type_ctor_info_job_ctl_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_FOREIGN,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___make__util__job_ctl_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___make__util__job_ctl_0_0)),
	"make.util",
	"job_ctl",
	{ 0 },
	{ 0 },
	-1,
	0,
	NULL
};

static const MR_UserClosureId
mercury_data__closure_layout__make__util__foldl2_maybe_stop_at_error_parallel_processes_9_0_1 = {
{
MR_PREDICATE,
"make.util",
"make.util",
"start_worker_process",
10,
0
},
"make.util",
"make.util.m",
439,
"d1;c12;d1;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__make__util__foldl2_maybe_stop_at_error_parallel_processes_9_0_2 = {
{
MR_PREDICATE,
"make.util",
"make.util",
"worker_loop",
10,
0
},
"make.util",
"make.util.m",
443,
"d1;c12;d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__make__util__foldl2_maybe_stop_at_error_parallel_processes_9_0_3 = {
{
MR_PREDICATE,
"make.util",
"make.util",
"worker_loop_signal_cleanup",
6,
0
},
"make.util",
"make.util.m",
443,
"d1;c12;d1;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__make__util__foldl2_maybe_stop_at_error_parallel_processes_9_0_4 = {
{
MR_PREDICATE,
"make.util",
"make.util",
"reap_worker_process",
5,
0
},
"make.util",
"make.util.m",
446,
"d1;c12;d1;c11;"
};

static const MR_UserClosureId
mercury_data__closure_layout__make__util__unredirect_output_6_0_1 = {
{
MR_PREDICATE,
"make.util",
"make.util",
"make_write_error_char",
7,
0
},
"make.util",
"make.util.m",
1008,
"d1;c10;d1;c6;d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__make__util__make_target_file_list_2_0_1 = {
{
MR_FUNCTION,
"make.util",
"make.util",
"lambda_make_util_m_1335",
3,
0
},
"make.util",
"make.util.m",
1335,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__make__util__make_dependency_list_2_0_1 = {
{
MR_FUNCTION,
"make.util",
"make.util",
"lambda_make_util_m_1339",
3,
0
},
"make.util",
"make.util.m",
1339,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__make__util__child_worker_8_0_1 = {
{
MR_PREDICATE,
"make.util",
"make.util",
"worker_loop",
10,
0
},
"make.util",
"make.util.m",
475,
"d1;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__make__util__child_worker_8_0_2 = {
{
MR_PREDICATE,
"make.util",
"make.util",
"worker_loop_signal_cleanup",
6,
0
},
"make.util",
"make.util.m",
475,
"d1;c11;"
};

static const MR_UserClosureId
mercury_data__closure_layout__make__util__worker_loop_signal_cleanup_6_0_1 = {
{
MR_PREDICATE,
"libs.process_util",
"libs.process_util",
"send_signal",
4,
0
},
"make.util",
"make.util.m",
509,
"d1;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_95_119_111_114_107_101_114_95_112_114_111_99_101_115_115_95_95_91_56_93_95_48_10_0_1 = {
{
MR_PREDICATE,
"make.util",
"make.util",
"child_worker",
8,
0
},
"make.util",
"make.util.m",
460,
"d1;c11;"
};


MR_BEGIN_MODULE(make__util_module0)
	MR_init_entry1(make__util__foldl2_maybe_stop_at_error_8_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'foldl2_maybe_stop_at_error'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__make__util__foldl2_maybe_stop_at_error_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_r3 = MR_r6;
	MR_r4 = (MR_Integer) 1;
	MR_r5 = MR_r7;
	MR_r6 = MR_r8;
	MR_np_tailcall_ent(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_50_95_95_91_49_44_32_50_44_32_51_93_95_48_9_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make__util_module1)
	MR_init_entry1(make__util__foldl3_maybe_stop_at_error_10_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'foldl3_maybe_stop_at_error'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__make__util__foldl3_maybe_stop_at_error_10_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_r2 = MR_r6;
	MR_r3 = MR_r7;
	MR_r4 = (MR_Integer) 1;
	MR_r5 = MR_r8;
	MR_r6 = MR_r9;
	MR_r7 = MR_r10;
	MR_np_tailcall_ent(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_50_95_95_91_49_44_32_50_44_32_51_44_32_52_93_95_48_11_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make__util_module2)
	MR_init_entry1(make__util__create_job_ctl_4_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'create_job_ctl'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(make__util__create_job_ctl_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Integer	TotalJobs;
	MR_Word	MaybeJobCtl;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__make__util__create_job_ctl_4_0
	TotalJobs = MR_r1;
	MR_save_registers();
{
#line 736 "make.util.m"

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
    IO = IO0;
;}
#line 1436 "make.util.c"
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
	MR_r1 = MaybeJobCtl;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make__util_module3)
	MR_init_entry1(make__util__destroy_job_ctl_3_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'destroy_job_ctl'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(make__util__destroy_job_ctl_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MC_JobCtl *	JobCtl;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__make__util__destroy_job_ctl_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MC_JobCtl *, MR_r1, JobCtl);
{
#line 758 "make.util.m"

#ifdef MC_HAVE_JOBCTL_IPC
  #ifdef MC_USE_SYSV_SEMAPHORE
    semctl(JobCtl->jc_semid, 0, IPC_RMID);
  #else
    pthread_mutex_destroy(&JobCtl->jc_mutex);
  #endif

    munmap(JobCtl, MC_JOB_CTL_SIZE(JobCtl->jc_total_tasks));
#endif
    IO = IO0;
;}
#line 1484 "make.util.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__length_1_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_46_46_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
MR_decl_entry(list__foldl2_6_2);
MR_decl_entry(libs__process_util__build_with_check_for_interrupt_7_0);
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;

MR_BEGIN_MODULE(make__util_module4)
	MR_init_entry1(make__util__foldl2_maybe_stop_at_error_parallel_processes_9_0);
	MR_init_label8(make__util__foldl2_maybe_stop_at_error_parallel_processes_9_0,2,3,5,7,9,12,14,15)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'foldl2_maybe_stop_at_error_parallel_processes'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(make__util__foldl2_maybe_stop_at_error_parallel_processes_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r7;
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__length_1_0,
		make__util__foldl2_maybe_stop_at_error_parallel_processes_9_0_i2);
MR_def_label(make__util__foldl2_maybe_stop_at_error_parallel_processes_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(make__util__create_job_ctl_4_0,
		make__util__foldl2_maybe_stop_at_error_parallel_processes_9_0_i3);
MR_def_label(make__util__foldl2_maybe_stop_at_error_parallel_processes_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(make__util__foldl2_maybe_stop_at_error_parallel_processes_9_0_i5);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(10);
MR_def_label(make__util__foldl2_maybe_stop_at_error_parallel_processes_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 10);
	MR_sv(6) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(make__util__start_worker_process_10_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 7;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(1, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 9) = MR_sv(5);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 8);
	MR_r1 = (MR_Integer) 2;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_46_46_2_0,
		make__util__foldl2_maybe_stop_at_error_parallel_processes_9_0_i7);
MR_def_label(make__util__foldl2_maybe_stop_at_error_parallel_processes_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_sv(9) = (MR_Word) MR_IO_CTOR_ADDR;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(list__foldl2_6_2,
		make__util__foldl2_maybe_stop_at_error_parallel_processes_9_0_i9);
MR_def_label(make__util__foldl2_maybe_stop_at_error_parallel_processes_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 10);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(make__util__worker_loop_10_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 7;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(7);
	MR_tempr3 = MR_sv(8);
	MR_tfield(0, MR_tempr1, 4) = MR_tempr3;
	MR_tfield(0, MR_tempr1, 5) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(4);
	MR_tempr4 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 8) = MR_tempr4;
	MR_tfield(0, MR_tempr1, 9) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(7,0);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(make__util__worker_loop_signal_cleanup_6_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr2, 3) = MR_tempr3;
	MR_tfield(0, MR_tempr2, 4) = MR_tempr4;
	MR_tempr5 = MR_r1;
	MR_tfield(0, MR_tempr2, 5) = MR_tempr5;
	MR_sv(1) = MR_tempr5;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr1;
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(libs__process_util__build_with_check_for_interrupt_7_0,
		make__util__foldl2_maybe_stop_at_error_parallel_processes_9_0_i12);
MR_def_label(make__util__foldl2_maybe_stop_at_error_parallel_processes_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r3 = MR_sv(9);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,9,0);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl2_6_2,
		make__util__foldl2_maybe_stop_at_error_parallel_processes_9_0_i14);
MR_def_label(make__util__foldl2_maybe_stop_at_error_parallel_processes_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(make__util__destroy_job_ctl_3_0,
		make__util__foldl2_maybe_stop_at_error_parallel_processes_9_0_i15);
MR_def_label(make__util__foldl2_maybe_stop_at_error_parallel_processes_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make__util_module5)
	MR_init_entry1(make__util__have_job_ctl_ipc_0_0);
	MR_init_label1(make__util__have_job_ctl_ipc_0_0,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'have_job_ctl_ipc'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(make__util__have_job_ctl_ipc_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__make__util__have_job_ctl_ipc_0_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 722 "make.util.m"

#ifdef MC_HAVE_JOBCTL_IPC
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 1677 "make.util.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(make__util__have_job_ctl_ipc_0_0_i1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(make__util__have_job_ctl_ipc_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__io_lookup_int_option_4_0);
MR_decl_entry(libs__process_util__can_fork_0_0);
MR_decl_entry(libs__globals__io_lookup_bool_option_4_0);
MR_decl_entry(libs__globals__io_set_option_4_0);

MR_BEGIN_MODULE(make__util_module6)
	MR_init_entry1(make__util__foldl2_maybe_stop_at_error_maybe_parallel_8_0);
	MR_init_label8(make__util__foldl2_maybe_stop_at_error_maybe_parallel_8_0,2,5,7,9,11,12,14,15)
	MR_init_label2(make__util__foldl2_maybe_stop_at_error_maybe_parallel_8_0,17,4)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'foldl2_maybe_stop_at_error_maybe_parallel'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__make__util__foldl2_maybe_stop_at_error_maybe_parallel_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Integer) 570;
	MR_np_call_localret_ent(libs__globals__io_lookup_int_option_4_0,
		make__util__foldl2_maybe_stop_at_error_maybe_parallel_8_0_i2);
MR_def_label(make__util__foldl2_maybe_stop_at_error_maybe_parallel_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r1,1)) {
		MR_GOTO_LAB(make__util__foldl2_maybe_stop_at_error_maybe_parallel_8_0_i4);
	}
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(libs__process_util__can_fork_0_0,
		make__util__foldl2_maybe_stop_at_error_maybe_parallel_8_0_i5);
MR_def_label(make__util__foldl2_maybe_stop_at_error_maybe_parallel_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(make__util__foldl2_maybe_stop_at_error_maybe_parallel_8_0_i4);
	}
	MR_np_call_localret_ent(make__util__have_job_ctl_ipc_0_0,
		make__util__foldl2_maybe_stop_at_error_maybe_parallel_8_0_i7);
MR_def_label(make__util__foldl2_maybe_stop_at_error_maybe_parallel_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(make__util__foldl2_maybe_stop_at_error_maybe_parallel_8_0_i4);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(make, make_info);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(5);
	MR_np_call_localret_ent(make__util__foldl2_maybe_stop_at_error_parallel_processes_9_0,
		make__util__foldl2_maybe_stop_at_error_maybe_parallel_8_0_i9);
MR_def_label(make__util__foldl2_maybe_stop_at_error_maybe_parallel_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(make__util__foldl2_maybe_stop_at_error_maybe_parallel_8_0_i11);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(7);
MR_def_label(make__util__foldl2_maybe_stop_at_error_maybe_parallel_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_r1 = (MR_Integer) 569;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		make__util__foldl2_maybe_stop_at_error_maybe_parallel_8_0_i12);
MR_def_label(make__util__foldl2_maybe_stop_at_error_maybe_parallel_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Integer) 569;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,10,0);
	MR_np_call_localret_ent(libs__globals__io_set_option_4_0,
		make__util__foldl2_maybe_stop_at_error_maybe_parallel_8_0_i14);
MR_def_label(make__util__foldl2_maybe_stop_at_error_maybe_parallel_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = (MR_Integer) 1;
	MR_r5 = MR_sv(5);
	MR_np_call_localret_ent(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_50_95_95_91_49_44_32_50_44_32_51_93_95_48_9_0,
		make__util__foldl2_maybe_stop_at_error_maybe_parallel_8_0_i15);
MR_def_label(make__util__foldl2_maybe_stop_at_error_maybe_parallel_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 569;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__io_set_option_4_0,
		make__util__foldl2_maybe_stop_at_error_maybe_parallel_8_0_i17);
MR_def_label(make__util__foldl2_maybe_stop_at_error_maybe_parallel_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(7);
MR_def_label(make__util__foldl2_maybe_stop_at_error_maybe_parallel_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = (MR_Integer) 1;
	MR_r5 = MR_sv(5);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_50_95_95_91_49_44_32_50_44_32_51_93_95_48_9_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make__util_module7)
	MR_init_entry1(make__util__build_with_module_options_8_0);
	MR_init_label2(make__util__build_with_module_options_8_0,2,4)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'build_with_module_options'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__make__util__build_with_module_options_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r4;
	MR_sv(1) = MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_ctfield(0, MR_tempr4, 4);
	MR_r4 = MR_ctfield(0, MR_r4, 3);
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr3;
	MR_r7 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_97_114_103_115_95_105_110_118_111_107_101_100_95_95_91_49_44_32_50_93_95_48_11_0,
		make__util__build_with_module_options_8_0_i2);
MR_def_label(make__util__build_with_module_options_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(make__util__build_with_module_options_8_0_i4);
	}
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(2);
MR_def_label(make__util__build_with_module_options_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(make__options_file__lookup_mmc_module_options_5_0);
MR_decl_entry(libs__globals__io_get_globals_3_0);
MR_decl_entry(fn__list__condense_1_0);
MR_decl_entry(libs__handle_options__handle_options_7_0);
MR_declare_entry(mercury__do_call_closure_3);
MR_decl_entry(libs__globals__io_set_globals_3_0);
MR_decl_entry(libs__handle_options__usage_errors_3_0);

MR_BEGIN_MODULE(make__util_module8)
	MR_init_entry1(make__util__build_with_module_options_args_10_0);
	MR_init_label8(make__util__build_with_module_options_args_10_0,2,19,4,5,11,12,15,17)
	MR_init_label1(make__util__build_with_module_options_args_10_0,14)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'build_with_module_options_args'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__make__util__build_with_module_options_args_10_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_r8;
	MR_r1 = MR_r4;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(make__options_file__lookup_mmc_module_options_5_0,
		make__util__build_with_module_options_args_10_0_i2);
MR_def_label(make__util__build_with_module_options_args_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(make__util__build_with_module_options_args_10_0_i4);
	}
MR_def_label(make__util__build_with_module_options_args_10_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(6);
MR_def_label(make__util__build_with_module_options_args_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(libs__globals__io_get_globals_3_0,
		make__util__build_with_module_options_args_10_0_i5);
MR_def_label(make__util__build_with_module_options_args_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,2,2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__condense_1_0,
		make__util__build_with_module_options_args_10_0_i11);
MR_def_label(make__util__build_with_module_options_args_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(libs__handle_options__handle_options_7_0,
		make__util__build_with_module_options_args_10_0_i12);
MR_def_label(make__util__build_with_module_options_args_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(make__util__build_with_module_options_args_10_0_i14);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(make__util__build_with_module_options_args_10_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__make__util__build_with_module_options_args_10_0_i15);
MR_def_label(make__util__build_with_module_options_args_10_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(2), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(2), 0) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__io_set_globals_3_0,
		make__util__build_with_module_options_args_10_0_i17);
MR_def_label(make__util__build_with_module_options_args_10_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(6);
MR_def_label(make__util__build_with_module_options_args_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__handle_options__usage_errors_3_0,
		make__util__build_with_module_options_args_10_0_i19);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make__util_module9)
	MR_init_entry1(make__util__redirect_output_6_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'redirect_output'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__make__util__redirect_output_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_tailcall_ent(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_100_105_114_101_99_116_95_111_117_116_112_117_116_95_95_91_49_93_95_48_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__output_stream_name_4_0);
MR_decl_entry(io__close_output_3_0);
MR_decl_entry(io__open_input_4_0);
MR_decl_entry(io__write_string_3_0);
MR_decl_entry(fn__io__error_message_1_0);
MR_decl_entry(io__nl_2_0);
MR_decl_entry(io__remove_file_4_0);
MR_decl_entry(parse_tree__file_names__module_name_to_file_name_6_0);
MR_decl_entry(set__member_2_0);
MR_decl_entry(io__open_append_4_0);
MR_decl_entry(io__open_output_4_0);
MR_decl_entry(io__close_input_3_0);
MR_decl_entry(io__output_stream_3_0);
MR_decl_entry(io__input_stream_foldl2_io_6_0);
MR_decl_entry(fn__set__insert_2_0);

MR_BEGIN_MODULE(make__util_module10)
	MR_init_entry1(make__util__unredirect_output_6_0);
	MR_init_label8(make__util__unredirect_output_6_0,2,3,4,7,8,9,10,11)
	MR_init_label8(make__util__unredirect_output_6_0,12,6,13,15,14,19,22,23)
	MR_init_label8(make__util__unredirect_output_6_0,24,25,26,27,21,28,29,31)
	MR_init_label8(make__util__unredirect_output_6_0,34,35,36,37,38,33,40,41)
	MR_init_label2(make__util__unredirect_output_6_0,43,44)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'unredirect_output'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__make__util__unredirect_output_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(6) = MR_r3;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__output_stream_name_4_0,
		make__util__unredirect_output_6_0_i2);
MR_def_label(make__util__unredirect_output_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__close_output_3_0,
		make__util__unredirect_output_6_0_i3);
MR_def_label(make__util__unredirect_output_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__open_input_4_0,
		make__util__unredirect_output_6_0_i4);
MR_def_label(make__util__unredirect_output_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(make__util__unredirect_output_6_0_i6);
	}
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = (MR_Word) MR_string_const("Error opening \140", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		make__util__unredirect_output_6_0_i7);
MR_def_label(make__util__unredirect_output_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_string_3_0,
		make__util__unredirect_output_6_0_i8);
MR_def_label(make__util__unredirect_output_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\': ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		make__util__unredirect_output_6_0_i9);
MR_def_label(make__util__unredirect_output_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__io__error_message_1_0,
		make__util__unredirect_output_6_0_i10);
MR_def_label(make__util__unredirect_output_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		make__util__unredirect_output_6_0_i11);
MR_def_label(make__util__unredirect_output_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		make__util__unredirect_output_6_0_i12);
MR_def_label(make__util__unredirect_output_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_sv(1) = MR_sv(6);
	MR_np_call_localret_ent(io__remove_file_4_0,
		make__util__unredirect_output_6_0_i44);
MR_def_label(make__util__unredirect_output_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const(".err", 4);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(parse_tree__file_names__module_name_to_file_name_6_0,
		make__util__unredirect_output_6_0_i13);
MR_def_label(make__util__unredirect_output_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_ctfield(0, MR_sv(6), 14);
	MR_np_call_localret_ent(set__member_2_0,
		make__util__unredirect_output_6_0_i15);
MR_def_label(make__util__unredirect_output_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(make__util__unredirect_output_6_0_i14);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(io__open_append_4_0,
		make__util__unredirect_output_6_0_i19);
MR_def_label(make__util__unredirect_output_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(io__open_output_4_0,
		make__util__unredirect_output_6_0_i19);
MR_def_label(make__util__unredirect_output_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(make__util__unredirect_output_6_0_i21);
	}
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = (MR_Word) MR_string_const("Error opening \140", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		make__util__unredirect_output_6_0_i22);
MR_def_label(make__util__unredirect_output_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_string_3_0,
		make__util__unredirect_output_6_0_i23);
MR_def_label(make__util__unredirect_output_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\': ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		make__util__unredirect_output_6_0_i24);
MR_def_label(make__util__unredirect_output_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__io__error_message_1_0,
		make__util__unredirect_output_6_0_i25);
MR_def_label(make__util__unredirect_output_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		make__util__unredirect_output_6_0_i26);
MR_def_label(make__util__unredirect_output_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		make__util__unredirect_output_6_0_i27);
MR_def_label(make__util__unredirect_output_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_sv(1) = MR_sv(6);
	MR_np_call_localret_ent(io__close_input_3_0,
		make__util__unredirect_output_6_0_i43);
MR_def_label(make__util__unredirect_output_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = (MR_Integer) 46;
	MR_np_call_localret_ent(libs__globals__io_lookup_int_option_4_0,
		make__util__unredirect_output_6_0_i28);
MR_def_label(make__util__unredirect_output_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(io__output_stream_3_0,
		make__util__unredirect_output_6_0_i29);
MR_def_label(make__util__unredirect_output_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(11,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(make__util__make_write_error_char_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(io__input_stream_foldl2_io_6_0,
		make__util__unredirect_output_6_0_i31);
MR_def_label(make__util__unredirect_output_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(make__util__unredirect_output_6_0_i33);
	}
	MR_sv(5) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("Error reading \140", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		make__util__unredirect_output_6_0_i34);
MR_def_label(make__util__unredirect_output_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_string_3_0,
		make__util__unredirect_output_6_0_i35);
MR_def_label(make__util__unredirect_output_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\': ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		make__util__unredirect_output_6_0_i36);
MR_def_label(make__util__unredirect_output_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__io__error_message_1_0,
		make__util__unredirect_output_6_0_i37);
MR_def_label(make__util__unredirect_output_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		make__util__unredirect_output_6_0_i38);
MR_def_label(make__util__unredirect_output_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		make__util__unredirect_output_6_0_i33);
MR_def_label(make__util__unredirect_output_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(io__close_output_3_0,
		make__util__unredirect_output_6_0_i40);
MR_def_label(make__util__unredirect_output_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = MR_ctfield(0, MR_sv(6), 14);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(fn__set__insert_2_0,
		make__util__unredirect_output_6_0_i41);
MR_def_label(make__util__unredirect_output_6_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 18);
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_sv(6);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_ctfield(0, MR_tempr2, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_ctfield(0, MR_tempr2, 12);
	MR_tfield(0, MR_tempr1, 13) = MR_ctfield(0, MR_tempr2, 13);
	MR_tfield(0, MR_tempr1, 14) = MR_r1;
	MR_tfield(0, MR_tempr1, 15) = MR_ctfield(0, MR_tempr2, 15);
	MR_tfield(0, MR_tempr1, 16) = MR_ctfield(0, MR_tempr2, 16);
	MR_tfield(0, MR_tempr1, 17) = MR_ctfield(0, MR_tempr2, 17);
	MR_r1 = MR_sv(3);
	}
	MR_np_call_localret_ent(io__close_input_3_0,
		make__util__unredirect_output_6_0_i43);
MR_def_label(make__util__unredirect_output_6_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__remove_file_4_0,
		make__util__unredirect_output_6_0_i44);
MR_def_label(make__util__unredirect_output_6_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make__util_module11)
	MR_init_entry1(make__util__build_with_output_redirect_7_0);
	MR_init_label4(make__util__build_with_output_redirect_7_0,2,4,5,6)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'build_with_output_redirect'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__make__util__build_with_output_redirect_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_100_105_114_101_99_116_95_111_117_116_112_117_116_95_95_91_49_93_95_48_6_0,
		make__util__build_with_output_redirect_7_0_i2);
MR_def_label(make__util__build_with_output_redirect_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(make__util__build_with_output_redirect_7_0_i4);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(make__util__build_with_output_redirect_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr2;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(make__util__build_with_output_redirect_7_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__make__util__build_with_output_redirect_7_0_i5);
MR_def_label(make__util__build_with_output_redirect_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(make__util__unredirect_output_6_0,
		make__util__build_with_output_redirect_7_0_i6);
MR_def_label(make__util__build_with_output_redirect_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make__util_module12)
	MR_init_entry1(make__util__build_with_module_options_and_output_redirect_8_0);
	MR_init_label2(make__util__build_with_module_options_and_output_redirect_8_0,2,4)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'build_with_module_options_and_output_redirect'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__make__util__build_with_module_options_and_output_redirect_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_r1;
	MR_r5 = MR_ctfield(0, MR_tempr1, 4);
	MR_r6 = MR_ctfield(0, MR_tempr1, 3);
	MR_r7 = MR_tempr2;
	MR_r8 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_97_114_103_115_95_105_110_118_111_107_101_100_95_95_104_111_57_95_95_91_56_93_95_48_11_0,
		make__util__build_with_module_options_and_output_redirect_8_0_i2);
MR_def_label(make__util__build_with_module_options_and_output_redirect_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(make__util__build_with_module_options_and_output_redirect_8_0_i4);
	}
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(2);
MR_def_label(make__util__build_with_module_options_and_output_redirect_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__elem_2_0);
MR_decl_entry(libs__file_util__search_for_file_mod_time_5_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(fn__libs__timestamp__time_t_to_timestamp_1_0);
MR_decl_entry(fn__f_109_97_112_95_95_101_108_101_109_32_58_61_3_0);

MR_BEGIN_MODULE(make__util_module13)
	MR_init_entry1(make__util__get_file_timestamp_7_0);
	MR_init_label8(make__util__get_file_timestamp_7_0,4,2,6,9,10,8,12,15)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'get_file_timestamp'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__make__util__get_file_timestamp_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_ctfield(0, MR_sv(3), 1);
	MR_np_call_localret_ent(fn__map__elem_2_0,
		make__util__get_file_timestamp_7_0_i4);
MR_def_label(make__util__get_file_timestamp_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(make__util__get_file_timestamp_7_0_i2);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(4);
MR_def_label(make__util__get_file_timestamp_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(libs__file_util__search_for_file_mod_time_5_0,
		make__util__get_file_timestamp_7_0_i6);
MR_def_label(make__util__get_file_timestamp_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(make__util__get_file_timestamp_7_0_i8);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("\' not found", 11);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		make__util__get_file_timestamp_7_0_i9);
MR_def_label(make__util__get_file_timestamp_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("file \140", 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		make__util__get_file_timestamp_7_0_i10);
MR_def_label(make__util__get_file_timestamp_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(4);
	}
MR_def_label(make__util__get_file_timestamp_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_np_call_localret_ent(fn__libs__timestamp__time_t_to_timestamp_1_0,
		make__util__get_file_timestamp_7_0_i12);
MR_def_label(make__util__get_file_timestamp_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_ctfield(0, MR_sv(3), 1);
	}
	MR_np_call_localret_ent(fn__f_109_97_112_95_95_101_108_101_109_32_58_61_3_0,
		make__util__get_file_timestamp_7_0_i15);
MR_def_label(make__util__get_file_timestamp_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 18);
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_ctfield(0, MR_tempr2, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_ctfield(0, MR_tempr2, 12);
	MR_tfield(0, MR_tempr1, 13) = MR_ctfield(0, MR_tempr2, 13);
	MR_tfield(0, MR_tempr1, 14) = MR_ctfield(0, MR_tempr2, 14);
	MR_tfield(0, MR_tempr1, 15) = MR_ctfield(0, MR_tempr2, 15);
	MR_tfield(0, MR_tempr1, 16) = MR_ctfield(0, MR_tempr2, 16);
	MR_tfield(0, MR_tempr1, 17) = MR_ctfield(0, MR_tempr2, 17);
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__get_target_2_0);

MR_BEGIN_MODULE(make__util_module14)
	MR_init_entry1(fn__make__util__timestamp_extension_2_0);
	MR_init_label8(fn__make__util__timestamp_extension_2_0,54,10,4,6,28,3,8,15)
	MR_init_label8(fn__make__util__timestamp_extension_2_0,16,19,20,21,22,24,25,26)
	MR_init_label1(fn__make__util__timestamp_extension_2_0,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'timestamp_extension'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__make__util__timestamp_extension_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(fn__make__util__timestamp_extension_2_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r2);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(fn__make__util__timestamp_extension_2_0_i28);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(fn__make__util__timestamp_extension_2_0_i4);
	}
	if ((MR_tempr1 != MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(fn__make__util__timestamp_extension_2_0_i1);
	}
	MR_sv(1) = MR_r1;
	}
	MR_np_call_localret_ent(libs__globals__get_target_2_0,
		fn__make__util__timestamp_extension_2_0_i10);
MR_def_label(fn__make__util__timestamp_extension_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_12_0, (MR_Integer) MR_tempr3);
	MR_tempr2 = MR_tempr3;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(fn__make__util__timestamp_extension_2_0_i54);
	}
MR_def_label(fn__make__util__timestamp_extension_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(2, MR_r2, 0);
	if (MR_INT_NE(MR_r3,2)) {
		MR_GOTO_LAB(fn__make__util__timestamp_extension_2_0_i6);
	}
	MR_r2 = (MR_Word) MR_string_const(".s_date", 7);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
MR_def_label(fn__make__util__timestamp_extension_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(fn__make__util__timestamp_extension_2_0_i1);
	}
	MR_r2 = (MR_Word) MR_string_const(".pic_s_date", 11);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
MR_def_label(fn__make__util__timestamp_extension_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r2),
		MR_LABEL_AP(fn__make__util__timestamp_extension_2_0_i1) MR_AND
		MR_LABEL_AP(fn__make__util__timestamp_extension_2_0_i19) MR_AND
		MR_LABEL_AP(fn__make__util__timestamp_extension_2_0_i24) MR_AND
		MR_LABEL_AP(fn__make__util__timestamp_extension_2_0_i25) MR_AND
		MR_LABEL_AP(fn__make__util__timestamp_extension_2_0_i25) MR_AND
		MR_LABEL_AP(fn__make__util__timestamp_extension_2_0_i26) MR_AND
		MR_LABEL_AP(fn__make__util__timestamp_extension_2_0_i21) MR_AND
		MR_LABEL_AP(fn__make__util__timestamp_extension_2_0_i3) MR_AND
		MR_LABEL_AP(fn__make__util__timestamp_extension_2_0_i1) MR_AND
		MR_LABEL_AP(fn__make__util__timestamp_extension_2_0_i8) MR_AND
		MR_LABEL_AP(fn__make__util__timestamp_extension_2_0_i20) MR_AND
		MR_LABEL_AP(fn__make__util__timestamp_extension_2_0_i1) MR_AND
		MR_LABEL_AP(fn__make__util__timestamp_extension_2_0_i22) MR_AND
		MR_LABEL_AP(fn__make__util__timestamp_extension_2_0_i1) MR_AND
		MR_LABEL_AP(fn__make__util__timestamp_extension_2_0_i16) MR_AND
		MR_LABEL_AP(fn__make__util__timestamp_extension_2_0_i15) MR_AND
		MR_LABEL_AP(fn__make__util__timestamp_extension_2_0_i1) MR_AND
		MR_LABEL_AP(fn__make__util__timestamp_extension_2_0_i1));
MR_def_label(fn__make__util__timestamp_extension_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(".analysis_date", 14);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
MR_def_label(fn__make__util__timestamp_extension_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(".c_date", 7);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
MR_def_label(fn__make__util__timestamp_extension_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(".erl_date", 9);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
MR_def_label(fn__make__util__timestamp_extension_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 15);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(fn__make__util__timestamp_extension_2_0_i54);
MR_def_label(fn__make__util__timestamp_extension_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(".err_date", 9);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
MR_def_label(fn__make__util__timestamp_extension_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(".il_date", 8);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
MR_def_label(fn__make__util__timestamp_extension_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(".optdate", 8);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
MR_def_label(fn__make__util__timestamp_extension_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(".java_date", 10);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
MR_def_label(fn__make__util__timestamp_extension_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(".date0", 6);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
MR_def_label(fn__make__util__timestamp_extension_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(".date", 5);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
MR_def_label(fn__make__util__timestamp_extension_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(".date3", 6);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
MR_def_label(fn__make__util__timestamp_extension_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(backend_libs__compile_target_code__maybe_pic_object_file_extension_3_0);

MR_BEGIN_MODULE(make__util_module15)
	MR_init_entry1(fn__make__util__target_extension_2_0);
	MR_init_label8(fn__make__util__target_extension_2_0,57,14,16,5,7,9,60,3)
	MR_init_label8(fn__make__util__target_extension_2_0,12,19,21,23,25,30,32,34)
	MR_init_label8(fn__make__util__target_extension_2_0,36,38,40,111,43,45,47,49)
	MR_init_label3(fn__make__util__target_extension_2_0,51,53,55)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'target_extension'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__make__util__target_extension_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(fn__make__util__target_extension_2_0_i57) MR_AND
		MR_LABEL_AP(fn__make__util__target_extension_2_0_i14) MR_AND
		MR_LABEL_AP(fn__make__util__target_extension_2_0_i5) MR_AND
		MR_LABEL_AP(fn__make__util__target_extension_2_0_i60));
MR_def_label(fn__make__util__target_extension_2_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r2),
		MR_LABEL_AP(fn__make__util__target_extension_2_0_i49) MR_AND
		MR_LABEL_AP(fn__make__util__target_extension_2_0_i25) MR_AND
		MR_LABEL_AP(fn__make__util__target_extension_2_0_i45) MR_AND
		MR_LABEL_AP(fn__make__util__target_extension_2_0_i40) MR_AND
		MR_LABEL_AP(fn__make__util__target_extension_2_0_i47) MR_AND
		MR_LABEL_AP(fn__make__util__target_extension_2_0_i53) MR_AND
		MR_LABEL_AP(fn__make__util__target_extension_2_0_i34) MR_AND
		MR_LABEL_AP(fn__make__util__target_extension_2_0_i3) MR_AND
		MR_LABEL_AP(fn__make__util__target_extension_2_0_i51) MR_AND
		MR_LABEL_AP(fn__make__util__target_extension_2_0_i12) MR_AND
		MR_LABEL_AP(fn__make__util__target_extension_2_0_i32) MR_AND
		MR_LABEL_AP(fn__make__util__target_extension_2_0_i30) MR_AND
		MR_LABEL_AP(fn__make__util__target_extension_2_0_i38) MR_AND
		MR_LABEL_AP(fn__make__util__target_extension_2_0_i36) MR_AND
		MR_LABEL_AP(fn__make__util__target_extension_2_0_i23) MR_AND
		MR_LABEL_AP(fn__make__util__target_extension_2_0_i21) MR_AND
		MR_LABEL_AP(fn__make__util__target_extension_2_0_i19) MR_AND
		MR_LABEL_AP(fn__make__util__target_extension_2_0_i55));
MR_def_label(fn__make__util__target_extension_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r2, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__make__util__target_extension_2_0_i16);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,13,4);
	MR_proceed();
	}
MR_def_label(fn__make__util__target_extension_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,13,5);
	MR_proceed();
MR_def_label(fn__make__util__target_extension_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(2, MR_r2, 0);
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(fn__make__util__target_extension_2_0_i7);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,13,1);
	MR_proceed();
MR_def_label(fn__make__util__target_extension_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,2)) {
		MR_GOTO_LAB(fn__make__util__target_extension_2_0_i9);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,13,1);
	MR_proceed();
MR_def_label(fn__make__util__target_extension_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,13,2);
	MR_proceed();
MR_def_label(fn__make__util__target_extension_2_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r2, 0);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__make__util__target_extension_2_0_i111);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
MR_def_label(fn__make__util__target_extension_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,13,0);
	MR_proceed();
MR_def_label(fn__make__util__target_extension_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,13,3);
	MR_proceed();
MR_def_label(fn__make__util__target_extension_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,13,6);
	MR_proceed();
MR_def_label(fn__make__util__target_extension_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,13,7);
	MR_proceed();
MR_def_label(fn__make__util__target_extension_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,13,8);
	MR_proceed();
MR_def_label(fn__make__util__target_extension_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,13,9);
	MR_proceed();
MR_def_label(fn__make__util__target_extension_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,13,10);
	MR_proceed();
MR_def_label(fn__make__util__target_extension_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,13,11);
	MR_proceed();
MR_def_label(fn__make__util__target_extension_2_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,13,12);
	MR_proceed();
MR_def_label(fn__make__util__target_extension_2_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,13,13);
	MR_proceed();
MR_def_label(fn__make__util__target_extension_2_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,13,14);
	MR_proceed();
MR_def_label(fn__make__util__target_extension_2_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,13,15);
	MR_proceed();
MR_def_label(fn__make__util__target_extension_2_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_np_call_localret_ent(backend_libs__compile_target_code__maybe_pic_object_file_extension_3_0,
		fn__make__util__target_extension_2_0_i43);
MR_def_label(fn__make__util__target_extension_2_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
MR_def_label(fn__make__util__target_extension_2_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,13,16);
	MR_proceed();
MR_def_label(fn__make__util__target_extension_2_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,13,17);
	MR_proceed();
MR_def_label(fn__make__util__target_extension_2_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,13,18);
	MR_proceed();
MR_def_label(fn__make__util__target_extension_2_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,13,19);
	MR_proceed();
MR_def_label(fn__make__util__target_extension_2_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,13,20);
	MR_proceed();
MR_def_label(fn__make__util__target_extension_2_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,13,21);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(backend_libs__compile_target_code__maybe_pic_object_file_extension_3_1);
MR_declare_entry(MR_do_fail);

MR_BEGIN_MODULE(make__util_module16)
	MR_init_entry1(fn__make__util__target_extension_2_1);
	MR_init_label8(fn__make__util__target_extension_2_1,2,3,5,6,8,9,11,12)
	MR_init_label8(fn__make__util__target_extension_2_1,14,15,17,18,20,21,23,24)
	MR_init_label8(fn__make__util__target_extension_2_1,26,27,29,30,33,34,37,38)
	MR_init_label8(fn__make__util__target_extension_2_1,40,41,43,44,46,47,49,50)
	MR_init_label8(fn__make__util__target_extension_2_1,52,53,55,56,58,59,61,62)
	MR_init_label6(fn__make__util__target_extension_2_1,65,66,69,70,74,73)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'target_extension'/3 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__make__util__target_extension_2_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("func make.util.target_extension/3-1", 2,
		MR_LABEL_AP(fn__make__util__target_extension_2_1_i2));
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const(".m", 2)) != 0)) {
		MR_GOTO_LAB(fn__make__util__target_extension_2_1_i3);
	}
	MR_fv(1) = MR_r1;
	MR_fv(2) = MR_tempr2;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_succeed();
	}
MR_def_label(fn__make__util__target_extension_2_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_fv(1);
	MR_r2 = MR_fv(2);
MR_def_label(fn__make__util__target_extension_2_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(fn__make__util__target_extension_2_1_i5);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const(".err", 4)) != 0)) {
		MR_GOTO_LAB(fn__make__util__target_extension_2_1_i6);
	}
	MR_fv(1) = MR_r1;
	MR_fv(2) = MR_tempr2;
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_succeed();
	}
MR_def_label(fn__make__util__target_extension_2_1,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_fv(1);
	MR_r2 = MR_fv(2);
MR_def_label(fn__make__util__target_extension_2_1,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(fn__make__util__target_extension_2_1_i8);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const(".int0", 5)) != 0)) {
		MR_GOTO_LAB(fn__make__util__target_extension_2_1_i9);
	}
	MR_fv(1) = MR_r1;
	MR_fv(2) = MR_tempr2;
	MR_r1 = (MR_Word) MR_tbmkword(0, 2);
	MR_succeed();
	}
MR_def_label(fn__make__util__target_extension_2_1,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_fv(1);
	MR_r2 = MR_fv(2);
MR_def_label(fn__make__util__target_extension_2_1,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(fn__make__util__target_extension_2_1_i11);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const(".int", 4)) != 0)) {
		MR_GOTO_LAB(fn__make__util__target_extension_2_1_i12);
	}
	MR_fv(1) = MR_r1;
	MR_fv(2) = MR_tempr2;
	MR_r1 = (MR_Word) MR_tbmkword(0, 3);
	MR_succeed();
	}
MR_def_label(fn__make__util__target_extension_2_1,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_fv(1);
	MR_r2 = MR_fv(2);
MR_def_label(fn__make__util__target_extension_2_1,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(fn__make__util__target_extension_2_1_i14);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const(".int2", 5)) != 0)) {
		MR_GOTO_LAB(fn__make__util__target_extension_2_1_i15);
	}
	MR_fv(1) = MR_r1;
	MR_fv(2) = MR_tempr2;
	MR_r1 = (MR_Word) MR_tbmkword(0, 4);
	MR_succeed();
	}
MR_def_label(fn__make__util__target_extension_2_1,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_fv(1);
	MR_r2 = MR_fv(2);
MR_def_label(fn__make__util__target_extension_2_1,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(fn__make__util__target_extension_2_1_i17);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const(".int3", 5)) != 0)) {
		MR_GOTO_LAB(fn__make__util__target_extension_2_1_i18);
	}
	MR_fv(1) = MR_r1;
	MR_fv(2) = MR_tempr2;
	MR_r1 = (MR_Word) MR_tbmkword(0, 5);
	MR_succeed();
	}
MR_def_label(fn__make__util__target_extension_2_1,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_fv(1);
	MR_r2 = MR_fv(2);
MR_def_label(fn__make__util__target_extension_2_1,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(fn__make__util__target_extension_2_1_i20);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const(".opt", 4)) != 0)) {
		MR_GOTO_LAB(fn__make__util__target_extension_2_1_i21);
	}
	MR_fv(1) = MR_r1;
	MR_fv(2) = MR_tempr2;
	MR_r1 = (MR_Word) MR_tbmkword(0, 6);
	MR_succeed();
	}
MR_def_label(fn__make__util__target_extension_2_1,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_fv(1);
	MR_r2 = MR_fv(2);
MR_def_label(fn__make__util__target_extension_2_1,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(fn__make__util__target_extension_2_1_i23);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const(".analysis", 9)) != 0)) {
		MR_GOTO_LAB(fn__make__util__target_extension_2_1_i24);
	}
	MR_fv(1) = MR_r1;
	MR_fv(2) = MR_tempr2;
	MR_r1 = (MR_Word) MR_tbmkword(0, 7);
	MR_succeed();
	}
MR_def_label(fn__make__util__target_extension_2_1,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_fv(1);
	MR_r2 = MR_fv(2);
MR_def_label(fn__make__util__target_extension_2_1,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(fn__make__util__target_extension_2_1_i26);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const(".track_flags", 12)) != 0)) {
		MR_GOTO_LAB(fn__make__util__target_extension_2_1_i27);
	}
	MR_fv(1) = MR_r1;
	MR_fv(2) = MR_tempr2;
	MR_r1 = (MR_Word) MR_tbmkword(0, 8);
	MR_succeed();
	}
MR_def_label(fn__make__util__target_extension_2_1,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_fv(1);
	MR_r2 = MR_fv(2);
MR_def_label(fn__make__util__target_extension_2_1,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(fn__make__util__target_extension_2_1_i29);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const(".mih", 4)) != 0)) {
		MR_GOTO_LAB(fn__make__util__target_extension_2_1_i30);
	}
	MR_fv(1) = MR_r1;
	MR_fv(2) = MR_tempr2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,10,2);
	MR_succeed();
	}
MR_def_label(fn__make__util__target_extension_2_1,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_fv(1);
	MR_r2 = MR_fv(2);
MR_def_label(fn__make__util__target_extension_2_1,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(fn__make__util__target_extension_2_1_i33);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const(".mh", 3)) != 0)) {
		MR_GOTO_LAB(fn__make__util__target_extension_2_1_i34);
	}
	MR_fv(1) = MR_r1;
	MR_fv(2) = MR_tempr2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,10,0);
	MR_succeed();
	}
MR_def_label(fn__make__util__target_extension_2_1,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_fv(1);
	MR_r2 = MR_fv(2);
MR_def_label(fn__make__util__target_extension_2_1,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(fn__make__util__target_extension_2_1_i37);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const(".c", 2)) != 0)) {
		MR_GOTO_LAB(fn__make__util__target_extension_2_1_i38);
	}
	MR_fv(1) = MR_r1;
	MR_fv(2) = MR_tempr2;
	MR_r1 = (MR_Word) MR_tbmkword(0, 9);
	MR_succeed();
	}
MR_def_label(fn__make__util__target_extension_2_1,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_fv(1);
	MR_r2 = MR_fv(2);
MR_def_label(fn__make__util__target_extension_2_1,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(fn__make__util__target_extension_2_1_i40);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const(".il", 3)) != 0)) {
		MR_GOTO_LAB(fn__make__util__target_extension_2_1_i41);
	}
	MR_fv(1) = MR_r1;
	MR_fv(2) = MR_tempr2;
	MR_r1 = (MR_Word) MR_tbmkword(0, 10);
	MR_succeed();
	}
MR_def_label(fn__make__util__target_extension_2_1,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_fv(1);
	MR_r2 = MR_fv(2);
MR_def_label(fn__make__util__target_extension_2_1,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(fn__make__util__target_extension_2_1_i43);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const(".dll", 4)) != 0)) {
		MR_GOTO_LAB(fn__make__util__target_extension_2_1_i44);
	}
	MR_fv(1) = MR_r1;
	MR_fv(2) = MR_tempr2;
	MR_r1 = (MR_Word) MR_tbmkword(0, 11);
	MR_succeed();
	}
MR_def_label(fn__make__util__target_extension_2_1,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_fv(1);
	MR_r2 = MR_fv(2);
MR_def_label(fn__make__util__target_extension_2_1,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(fn__make__util__target_extension_2_1_i46);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const(".java", 5)) != 0)) {
		MR_GOTO_LAB(fn__make__util__target_extension_2_1_i47);
	}
	MR_fv(1) = MR_r1;
	MR_fv(2) = MR_tempr2;
	MR_r1 = (MR_Word) MR_tbmkword(0, 12);
	MR_succeed();
	}
MR_def_label(fn__make__util__target_extension_2_1,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_fv(1);
	MR_r2 = MR_fv(2);
MR_def_label(fn__make__util__target_extension_2_1,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(fn__make__util__target_extension_2_1_i49);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const(".class", 6)) != 0)) {
		MR_GOTO_LAB(fn__make__util__target_extension_2_1_i50);
	}
	MR_fv(1) = MR_r1;
	MR_fv(2) = MR_tempr2;
	MR_r1 = (MR_Word) MR_tbmkword(0, 13);
	MR_succeed();
	}
MR_def_label(fn__make__util__target_extension_2_1,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_fv(1);
	MR_r2 = MR_fv(2);
MR_def_label(fn__make__util__target_extension_2_1,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(fn__make__util__target_extension_2_1_i52);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const(".hrl", 4)) != 0)) {
		MR_GOTO_LAB(fn__make__util__target_extension_2_1_i53);
	}
	MR_fv(1) = MR_r1;
	MR_fv(2) = MR_tempr2;
	MR_r1 = (MR_Word) MR_tbmkword(0, 14);
	MR_succeed();
	}
MR_def_label(fn__make__util__target_extension_2_1,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_fv(1);
	MR_r2 = MR_fv(2);
MR_def_label(fn__make__util__target_extension_2_1,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(fn__make__util__target_extension_2_1_i55);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const(".erl", 4)) != 0)) {
		MR_GOTO_LAB(fn__make__util__target_extension_2_1_i56);
	}
	MR_fv(1) = MR_r1;
	MR_fv(2) = MR_tempr2;
	MR_r1 = (MR_Word) MR_tbmkword(0, 15);
	MR_succeed();
	}
MR_def_label(fn__make__util__target_extension_2_1,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_fv(1);
	MR_r2 = MR_fv(2);
MR_def_label(fn__make__util__target_extension_2_1,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(fn__make__util__target_extension_2_1_i58);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const(".beam", 5)) != 0)) {
		MR_GOTO_LAB(fn__make__util__target_extension_2_1_i59);
	}
	MR_fv(1) = MR_r1;
	MR_fv(2) = MR_tempr2;
	MR_r1 = (MR_Word) MR_tbmkword(0, 16);
	MR_succeed();
	}
MR_def_label(fn__make__util__target_extension_2_1,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_fv(1);
	MR_r2 = MR_fv(2);
MR_def_label(fn__make__util__target_extension_2_1,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(fn__make__util__target_extension_2_1_i61);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const(".s", 2)) != 0)) {
		MR_GOTO_LAB(fn__make__util__target_extension_2_1_i62);
	}
	MR_fv(1) = MR_r1;
	MR_fv(2) = MR_tempr2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(2,10,1);
	MR_succeed();
	}
MR_def_label(fn__make__util__target_extension_2_1,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_fv(1);
	MR_r2 = MR_fv(2);
MR_def_label(fn__make__util__target_extension_2_1,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(fn__make__util__target_extension_2_1_i65);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const(".s", 2)) != 0)) {
		MR_GOTO_LAB(fn__make__util__target_extension_2_1_i66);
	}
	MR_fv(1) = MR_r1;
	MR_fv(2) = MR_tempr2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(2,10,2);
	MR_succeed();
	}
MR_def_label(fn__make__util__target_extension_2_1,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_fv(1);
	MR_r2 = MR_fv(2);
MR_def_label(fn__make__util__target_extension_2_1,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(fn__make__util__target_extension_2_1_i69);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const(".pic_s", 6)) != 0)) {
		MR_GOTO_LAB(fn__make__util__target_extension_2_1_i70);
	}
	MR_fv(1) = MR_r1;
	MR_fv(2) = MR_tempr2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(2,10,0);
	MR_succeed();
	}
MR_def_label(fn__make__util__target_extension_2_1,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_fv(1);
	MR_r2 = MR_fv(2);
MR_def_label(fn__make__util__target_extension_2_1,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(fn__make__util__target_extension_2_1_i73);
	MR_fv(2) = MR_r2;
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_np_call_localret_ent(backend_libs__compile_target_code__maybe_pic_object_file_extension_3_1,
		fn__make__util__target_extension_2_1_i74);
MR_def_label(fn__make__util__target_extension_2_1,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__make__util__target_extension_2_1_i73);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_succeed();
	}
MR_def_label(fn__make__util__target_extension_2_1,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	MR_r2 = MR_ctfield(1, MR_fv(2), 0);
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const(".xml", 4)) != 0)) {
		MR_GOTO(MR_ENTRY(MR_do_fail));
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 17);
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(backend_libs__compile_target_code__maybe_pic_object_file_extension_4_0);
MR_decl_entry(parse_tree__file_names__fact_table_file_name_7_0);
MR_decl_entry(fn__parse_tree__prog_foreign__foreign_language_module_name_2_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);
MR_decl_entry(parse_tree__file_names__module_name_to_search_file_name_5_0);

MR_BEGIN_MODULE(make__util_module17)
	MR_init_entry1(make__util__module_target_to_file_name_maybe_search_7_0);
	MR_init_label8(make__util__module_target_to_file_name_maybe_search_7_0,75,2,3,10,12,14,19,21)
	MR_init_label3(make__util__module_target_to_file_name_maybe_search_7_0,20,5,32)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'module_target_to_file_name_maybe_search'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(make__util__module_target_to_file_name_maybe_search_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(make__util__module_target_to_file_name_maybe_search_7_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_np_call_localret_ent(libs__globals__io_get_globals_3_0,
		make__util__module_target_to_file_name_maybe_search_7_0_i2);
MR_def_label(make__util__module_target_to_file_name_maybe_search_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__make__util__target_extension_2_0,
		make__util__module_target_to_file_name_maybe_search_7_0_i3);
MR_def_label(make__util__module_target_to_file_name_maybe_search_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(make__util__module_target_to_file_name_maybe_search_7_0_i5);
	}
	if (MR_INT_NE(MR_tag(MR_sv(2)),3)) {
		MR_GOTO_LAB(make__util__module_target_to_file_name_maybe_search_7_0_i20);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(2);
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 0);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(make__util__module_target_to_file_name_maybe_search_7_0_i20);
	}
	if (MR_INT_EQ(MR_tempr1,1)) {
		MR_GOTO_LAB(make__util__module_target_to_file_name_maybe_search_7_0_i12);
	}
	if (MR_INT_EQ(MR_tempr1,2)) {
		MR_GOTO_LAB(make__util__module_target_to_file_name_maybe_search_7_0_i19);
	}
	MR_tempr2 = MR_tempr3;
	MR_sv(2) = MR_ctfield(3, MR_tempr2, 2);
	MR_r1 = MR_ctfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(backend_libs__compile_target_code__maybe_pic_object_file_extension_4_0,
		make__util__module_target_to_file_name_maybe_search_7_0_i10);
MR_def_label(make__util__module_target_to_file_name_maybe_search_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(parse_tree__file_names__fact_table_file_name_7_0);
	}
MR_def_label(make__util__module_target_to_file_name_maybe_search_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__foreign_language_module_name_2_0,
		make__util__module_target_to_file_name_maybe_search_7_0_i14);
MR_def_label(make__util__module_target_to_file_name_maybe_search_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(make__util__module_target_to_file_name_maybe_search_7_0_i20);
	}
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 11);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(make__util__module_target_to_file_name_maybe_search_7_0_i75);
MR_def_label(make__util__module_target_to_file_name_maybe_search_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_tempr2 = MR_sv(2);
	MR_sv(1) = MR_ctfield(3, MR_tempr2, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_ctfield(3, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__foreign_language_module_name_2_0,
		make__util__module_target_to_file_name_maybe_search_7_0_i21);
MR_def_label(make__util__module_target_to_file_name_maybe_search_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(make__util__module_target_to_file_name_maybe_search_7_0_i20);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(make__util__module_target_to_file_name_maybe_search_7_0_i75);
	}
MR_def_label(make__util__module_target_to_file_name_maybe_search_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("make.util.m", 11);
	MR_r2 = (MR_Word) MR_string_const("module_target_to_file_name_2", 28);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(make__util__module_target_to_file_name_maybe_search_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),1)) {
		MR_GOTO_LAB(make__util__module_target_to_file_name_maybe_search_7_0_i32);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(parse_tree__file_names__module_name_to_file_name_6_0);
	}
MR_def_label(make__util__module_target_to_file_name_maybe_search_7_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(parse_tree__file_names__module_name_to_search_file_name_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__dir__this_directory_0_0);

MR_BEGIN_MODULE(make__util_module18)
	MR_init_entry1(make__util__get_timestamp_file_timestamp_6_0);
	MR_init_label5(make__util__get_timestamp_file_timestamp_6_0,2,5,4,8,10)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'get_timestamp_file_timestamp'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__make__util__get_timestamp_file_timestamp_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_r2;
	}
	MR_np_call_localret_ent(libs__globals__io_get_globals_3_0,
		make__util__get_timestamp_file_timestamp_6_0_i2);
MR_def_label(make__util__get_timestamp_file_timestamp_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__make__util__timestamp_extension_2_0,
		make__util__get_timestamp_file_timestamp_6_0_i5);
MR_def_label(make__util__get_timestamp_file_timestamp_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(make__util__get_timestamp_file_timestamp_6_0_i4);
	}
	MR_r1 = MR_sv(1);
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(parse_tree__file_names__module_name_to_file_name_6_0,
		make__util__get_timestamp_file_timestamp_6_0_i8);
MR_def_label(make__util__get_timestamp_file_timestamp_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = (MR_Integer) 1;
	MR_np_call_localret_ent(make__util__module_target_to_file_name_maybe_search_7_0,
		make__util__get_timestamp_file_timestamp_6_0_i8);
MR_def_label(make__util__get_timestamp_file_timestamp_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__dir__this_directory_0_0,
		make__util__get_timestamp_file_timestamp_6_0_i10);
MR_def_label(make__util__get_timestamp_file_timestamp_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(make__util__get_file_timestamp_7_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__search_3_0);

MR_BEGIN_MODULE(make__util_module19)
	MR_init_entry1(make__util__module_name_to_search_file_name_cache_7_0);
	MR_init_label4(make__util__module_name_to_search_file_name_cache_7_0,5,3,7,9)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'module_name_to_search_file_name_cache'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(make__util__module_name_to_search_file_name_cache_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr2 = MR_r1;
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tempr3 = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr3;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tempr3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,14,0);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = MR_ctfield(0, MR_r3, 2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__search_3_0,
		make__util__module_name_to_search_file_name_cache_7_0_i5);
MR_def_label(make__util__module_name_to_search_file_name_cache_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(make__util__module_name_to_search_file_name_cache_7_0_i3);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(5);
MR_def_label(make__util__module_name_to_search_file_name_cache_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__file_names__module_name_to_search_file_name_5_0,
		make__util__module_name_to_search_file_name_cache_7_0_i7);
MR_def_label(make__util__module_name_to_search_file_name_cache_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,14,0);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_ctfield(0, MR_sv(4), 2);
	MR_r5 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_109_97_112_95_95_101_108_101_109_32_58_61_3_0,
		make__util__module_name_to_search_file_name_cache_7_0_i9);
MR_def_label(make__util__module_name_to_search_file_name_cache_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 18);
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_sv(4);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_ctfield(0, MR_tempr2, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_ctfield(0, MR_tempr2, 12);
	MR_tfield(0, MR_tempr1, 13) = MR_ctfield(0, MR_tempr2, 13);
	MR_tfield(0, MR_tempr1, 14) = MR_ctfield(0, MR_tempr2, 14);
	MR_tfield(0, MR_tempr1, 15) = MR_ctfield(0, MR_tempr2, 15);
	MR_tfield(0, MR_tempr1, 16) = MR_ctfield(0, MR_tempr2, 16);
	MR_tfield(0, MR_tempr1, 17) = MR_ctfield(0, MR_tempr2, 17);
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(make__module_dep_file__get_module_dependencies_6_0);

MR_BEGIN_MODULE(make__util_module20)
	MR_init_entry1(make__util__get_file_name_7_0);
	MR_init_label8(make__util__get_file_name_7_0,4,7,6,2,8,9,11,15)
	MR_init_label1(make__util__get_file_name_7_0,14)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'get_file_name'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__make__util__get_file_name_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 0);
	MR_r5 = MR_tempr1;
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(make__util__get_file_name_7_0_i2);
	}
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(make__module_dep_file__get_module_dependencies_6_0,
		make__util__get_file_name_7_0_i4);
MR_def_label(make__util__get_file_name_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(make__util__get_file_name_7_0_i6);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const(".m", 2);
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(parse_tree__file_names__module_name_to_file_name_6_0,
		make__util__get_file_name_7_0_i7);
MR_def_label(make__util__get_file_name_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(5);
MR_def_label(make__util__get_file_name_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
	MR_decr_sp_and_return(5);
MR_def_label(make__util__get_file_name_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r5;
	MR_sv(4) = MR_r3;
	MR_np_call_localret_ent(libs__globals__io_get_globals_3_0,
		make__util__get_file_name_7_0_i8);
MR_def_label(make__util__get_file_name_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__make__util__target_extension_2_0,
		make__util__get_file_name_7_0_i9);
MR_def_label(make__util__get_file_name_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(make__util__get_file_name_7_0_i11);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(make__util__module_target_to_file_name_maybe_search_7_0,
		make__util__get_file_name_7_0_i15);
MR_def_label(make__util__get_file_name_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(make__util__get_file_name_7_0_i14);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	MR_r3 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(parse_tree__file_names__module_name_to_file_name_6_0,
		make__util__get_file_name_7_0_i15);
MR_def_label(make__util__get_file_name_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(5);
MR_def_label(make__util__get_file_name_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(make__util__module_name_to_search_file_name_cache_7_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__io_lookup_accumulating_option_4_0);
MR_decl_entry(list__member_2_0);

MR_BEGIN_MODULE(make__util_module21)
	MR_init_entry1(make__util__get_search_directories_4_0);
	MR_init_label8(make__util__get_search_directories_4_0,123,18,19,21,22,126,141,3)
	MR_init_label8(make__util__get_search_directories_4_0,4,6,7,5,33,34,36,37)
	MR_init_label8(make__util__get_search_directories_4_0,60,61,63,64,75,76,78,79)
	MR_init_label8(make__util__get_search_directories_4_0,87,88,90,91,96,97,99,100)
	MR_init_label8(make__util__get_search_directories_4_0,98,102,109,111,112,114,115,113)
	MR_init_label3(make__util__get_search_directories_4_0,117,120,121)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'get_search_directories'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(make__util__get_search_directories_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(make__util__get_search_directories_4_0_i123) MR_AND
		MR_LABEL_AP(make__util__get_search_directories_4_0_i18) MR_AND
		MR_LABEL_AP(make__util__get_search_directories_4_0_i120) MR_AND
		MR_LABEL_AP(make__util__get_search_directories_4_0_i126));
MR_def_label(make__util__get_search_directories_4_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r1),
		MR_LABEL_AP(make__util__get_search_directories_4_0_i120) MR_AND
		MR_LABEL_AP(make__util__get_search_directories_4_0_i120) MR_AND
		MR_LABEL_AP(make__util__get_search_directories_4_0_i87) MR_AND
		MR_LABEL_AP(make__util__get_search_directories_4_0_i75) MR_AND
		MR_LABEL_AP(make__util__get_search_directories_4_0_i96) MR_AND
		MR_LABEL_AP(make__util__get_search_directories_4_0_i111) MR_AND
		MR_LABEL_AP(make__util__get_search_directories_4_0_i60) MR_AND
		MR_LABEL_AP(make__util__get_search_directories_4_0_i3) MR_AND
		MR_LABEL_AP(make__util__get_search_directories_4_0_i141) MR_AND
		MR_LABEL_AP(make__util__get_search_directories_4_0_i141) MR_AND
		MR_LABEL_AP(make__util__get_search_directories_4_0_i141) MR_AND
		MR_LABEL_AP(make__util__get_search_directories_4_0_i141) MR_AND
		MR_LABEL_AP(make__util__get_search_directories_4_0_i141) MR_AND
		MR_LABEL_AP(make__util__get_search_directories_4_0_i120) MR_AND
		MR_LABEL_AP(make__util__get_search_directories_4_0_i33) MR_AND
		MR_LABEL_AP(make__util__get_search_directories_4_0_i141) MR_AND
		MR_LABEL_AP(make__util__get_search_directories_4_0_i120) MR_AND
		MR_LABEL_AP(make__util__get_search_directories_4_0_i120));
MR_def_label(make__util__get_search_directories_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 454;
	MR_np_call_localret_ent(libs__globals__io_lookup_accumulating_option_4_0,
		make__util__get_search_directories_4_0_i19);
MR_def_label(make__util__get_search_directories_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__dir__this_directory_0_0,
		make__util__get_search_directories_4_0_i21);
MR_def_label(make__util__get_search_directories_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__member_2_0,
		make__util__get_search_directories_4_0_i22);
MR_def_label(make__util__get_search_directories_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(make__util__get_search_directories_4_0_i113);
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
MR_def_label(make__util__get_search_directories_4_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 0);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(make__util__get_search_directories_4_0_i120);
	}
	}
MR_def_label(make__util__get_search_directories_4_0,141)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__dir__this_directory_0_0,
		make__util__get_search_directories_4_0_i109);
MR_def_label(make__util__get_search_directories_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 592;
	MR_np_call_localret_ent(libs__globals__io_lookup_accumulating_option_4_0,
		make__util__get_search_directories_4_0_i4);
MR_def_label(make__util__get_search_directories_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__dir__this_directory_0_0,
		make__util__get_search_directories_4_0_i6);
MR_def_label(make__util__get_search_directories_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__member_2_0,
		make__util__get_search_directories_4_0_i7);
MR_def_label(make__util__get_search_directories_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(make__util__get_search_directories_4_0_i5);
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
MR_def_label(make__util__get_search_directories_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__dir__this_directory_0_0,
		make__util__get_search_directories_4_0_i102);
MR_def_label(make__util__get_search_directories_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 490;
	MR_np_call_localret_ent(libs__globals__io_lookup_accumulating_option_4_0,
		make__util__get_search_directories_4_0_i34);
MR_def_label(make__util__get_search_directories_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__dir__this_directory_0_0,
		make__util__get_search_directories_4_0_i36);
MR_def_label(make__util__get_search_directories_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__member_2_0,
		make__util__get_search_directories_4_0_i37);
MR_def_label(make__util__get_search_directories_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(make__util__get_search_directories_4_0_i113);
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
MR_def_label(make__util__get_search_directories_4_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 592;
	MR_np_call_localret_ent(libs__globals__io_lookup_accumulating_option_4_0,
		make__util__get_search_directories_4_0_i61);
MR_def_label(make__util__get_search_directories_4_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__dir__this_directory_0_0,
		make__util__get_search_directories_4_0_i63);
MR_def_label(make__util__get_search_directories_4_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__member_2_0,
		make__util__get_search_directories_4_0_i64);
MR_def_label(make__util__get_search_directories_4_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(make__util__get_search_directories_4_0_i113);
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
MR_def_label(make__util__get_search_directories_4_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 591;
	MR_np_call_localret_ent(libs__globals__io_lookup_accumulating_option_4_0,
		make__util__get_search_directories_4_0_i76);
MR_def_label(make__util__get_search_directories_4_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__dir__this_directory_0_0,
		make__util__get_search_directories_4_0_i78);
MR_def_label(make__util__get_search_directories_4_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__member_2_0,
		make__util__get_search_directories_4_0_i79);
MR_def_label(make__util__get_search_directories_4_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(make__util__get_search_directories_4_0_i113);
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
MR_def_label(make__util__get_search_directories_4_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 591;
	MR_np_call_localret_ent(libs__globals__io_lookup_accumulating_option_4_0,
		make__util__get_search_directories_4_0_i88);
MR_def_label(make__util__get_search_directories_4_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__dir__this_directory_0_0,
		make__util__get_search_directories_4_0_i90);
MR_def_label(make__util__get_search_directories_4_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__member_2_0,
		make__util__get_search_directories_4_0_i91);
MR_def_label(make__util__get_search_directories_4_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(make__util__get_search_directories_4_0_i113);
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
MR_def_label(make__util__get_search_directories_4_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 591;
	MR_np_call_localret_ent(libs__globals__io_lookup_accumulating_option_4_0,
		make__util__get_search_directories_4_0_i97);
MR_def_label(make__util__get_search_directories_4_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__dir__this_directory_0_0,
		make__util__get_search_directories_4_0_i99);
MR_def_label(make__util__get_search_directories_4_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__member_2_0,
		make__util__get_search_directories_4_0_i100);
MR_def_label(make__util__get_search_directories_4_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(make__util__get_search_directories_4_0_i98);
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
MR_def_label(make__util__get_search_directories_4_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__dir__this_directory_0_0,
		make__util__get_search_directories_4_0_i102);
MR_def_label(make__util__get_search_directories_4_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(make__util__get_search_directories_4_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(make__util__get_search_directories_4_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 591;
	MR_np_call_localret_ent(libs__globals__io_lookup_accumulating_option_4_0,
		make__util__get_search_directories_4_0_i112);
MR_def_label(make__util__get_search_directories_4_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__dir__this_directory_0_0,
		make__util__get_search_directories_4_0_i114);
MR_def_label(make__util__get_search_directories_4_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__member_2_0,
		make__util__get_search_directories_4_0_i115);
MR_def_label(make__util__get_search_directories_4_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(make__util__get_search_directories_4_0_i113);
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
MR_def_label(make__util__get_search_directories_4_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__dir__this_directory_0_0,
		make__util__get_search_directories_4_0_i117);
MR_def_label(make__util__get_search_directories_4_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(make__util__get_search_directories_4_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__dir__this_directory_0_0,
		make__util__get_search_directories_4_0_i121);
MR_def_label(make__util__get_search_directories_4_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__libs__timestamp__oldest_timestamp_0_0);

MR_BEGIN_MODULE(make__util_module22)
	MR_init_entry1(make__util__get_target_timestamp_2_8_0);
	MR_init_label8(make__util__get_target_timestamp_2_8_0,4,3,6,2,7,11,13,18)
	MR_init_label5(make__util__get_target_timestamp_2_8_0,19,22,14,15,25)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'get_target_timestamp_2'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(make__util__get_target_timestamp_2_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(make__util__get_target_timestamp_2_8_0_i3);
	}
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_r4;
	}
	MR_np_call_localret_ent(fn__dir__this_directory_0_0,
		make__util__get_target_timestamp_2_8_0_i4);
MR_def_label(make__util__get_target_timestamp_2_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_GOTO_LAB(make__util__get_target_timestamp_2_8_0_i2);
	}
MR_def_label(make__util__get_target_timestamp_2_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_r4;
	MR_r1 = MR_sv(3);
	}
	MR_np_call_localret_ent(make__util__get_search_directories_4_0,
		make__util__get_target_timestamp_2_8_0_i6);
MR_def_label(make__util__get_target_timestamp_2_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
MR_def_label(make__util__get_target_timestamp_2_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(make__util__get_file_timestamp_7_0,
		make__util__get_target_timestamp_2_8_0_i7);
MR_def_label(make__util__get_target_timestamp_2_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(make__util__get_target_timestamp_2_8_0_i25);
	}
	if (MR_LTAGS_TESTR(MR_sv(3),0,7)) {
		MR_GOTO_LAB(make__util__get_target_timestamp_2_8_0_i11);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(make__module_dep_file__get_module_dependencies_6_0,
		make__util__get_target_timestamp_2_8_0_i13);
MR_def_label(make__util__get_target_timestamp_2_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,6)) {
		MR_GOTO_LAB(make__util__get_target_timestamp_2_8_0_i25);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(make__module_dep_file__get_module_dependencies_6_0,
		make__util__get_target_timestamp_2_8_0_i13);
MR_def_label(make__util__get_target_timestamp_2_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(make__util__get_target_timestamp_2_8_0_i15);
	}
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 19);
	MR_np_call_localret_ent(fn__dir__this_directory_0_0,
		make__util__get_target_timestamp_2_8_0_i18);
MR_def_label(make__util__get_target_timestamp_2_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(4), (char *) (MR_Word *) MR_r1) == 0)) {
		MR_GOTO_LAB(make__util__get_target_timestamp_2_8_0_i14);
	}
	MR_np_call_localret_ent(fn__libs__timestamp__oldest_timestamp_0_0,
		make__util__get_target_timestamp_2_8_0_i19);
MR_def_label(make__util__get_target_timestamp_2_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_ctfield(0, MR_sv(3), 1);
	}
	MR_np_call_localret_ent(fn__f_109_97_112_95_95_101_108_101_109_32_58_61_3_0,
		make__util__get_target_timestamp_2_8_0_i22);
MR_def_label(make__util__get_target_timestamp_2_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 18);
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_ctfield(0, MR_tempr2, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_ctfield(0, MR_tempr2, 12);
	MR_tfield(0, MR_tempr1, 13) = MR_ctfield(0, MR_tempr2, 13);
	MR_tfield(0, MR_tempr1, 14) = MR_ctfield(0, MR_tempr2, 14);
	MR_tfield(0, MR_tempr1, 15) = MR_ctfield(0, MR_tempr2, 15);
	MR_tfield(0, MR_tempr1, 16) = MR_ctfield(0, MR_tempr2, 16);
	MR_tfield(0, MR_tempr1, 17) = MR_ctfield(0, MR_tempr2, 17);
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(5);
	}
MR_def_label(make__util__get_target_timestamp_2_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
MR_def_label(make__util__get_target_timestamp_2_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
MR_def_label(make__util__get_target_timestamp_2_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(analysis__read_module_overall_status_5_0);

MR_BEGIN_MODULE(make__util_module23)
	MR_init_entry1(make__util__get_target_timestamp_analysis_registry_8_0);
	MR_init_label5(make__util__get_target_timestamp_analysis_registry_8_0,4,2,7,12,9)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'get_target_timestamp_analysis_registry'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(make__util__get_target_timestamp_analysis_registry_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r4 = MR_ctfield(0, MR_r4, 1);
	}
	MR_np_call_localret_ent(fn__map__elem_2_0,
		make__util__get_target_timestamp_analysis_registry_8_0_i4);
MR_def_label(make__util__get_target_timestamp_analysis_registry_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(make__util__get_target_timestamp_analysis_registry_8_0_i2);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(6);
MR_def_label(make__util__get_target_timestamp_analysis_registry_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,4);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(analysis__read_module_overall_status_5_0,
		make__util__get_target_timestamp_analysis_registry_8_0_i7);
MR_def_label(make__util__get_target_timestamp_analysis_registry_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(make__util__get_target_timestamp_analysis_registry_8_0_i9);
	}
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,13,22);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_ctfield(0, MR_sv(5), 1);
	MR_r5 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_109_97_112_95_95_101_108_101_109_32_58_61_3_0,
		make__util__get_target_timestamp_analysis_registry_8_0_i12);
MR_def_label(make__util__get_target_timestamp_analysis_registry_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 18);
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_sv(5);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_ctfield(0, MR_tempr2, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_ctfield(0, MR_tempr2, 12);
	MR_tfield(0, MR_tempr1, 13) = MR_ctfield(0, MR_tempr2, 13);
	MR_tfield(0, MR_tempr1, 14) = MR_ctfield(0, MR_tempr2, 14);
	MR_tfield(0, MR_tempr1, 15) = MR_ctfield(0, MR_tempr2, 15);
	MR_tfield(0, MR_tempr1, 16) = MR_ctfield(0, MR_tempr2, 16);
	MR_tfield(0, MR_tempr1, 17) = MR_ctfield(0, MR_tempr2, 17);
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(6);
	}
MR_def_label(make__util__get_target_timestamp_analysis_registry_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(make__util__get_target_timestamp_2_8_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make__util_module24)
	MR_init_entry1(make__util__get_target_timestamp_7_0);
	MR_init_label2(make__util__get_target_timestamp_7_0,2,3)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'get_target_timestamp'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__make__util__get_target_timestamp_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(make__util__get_file_name_7_0,
		make__util__get_target_timestamp_7_0_i2);
MR_def_label(make__util__get_target_timestamp_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,7)) {
		MR_GOTO_LAB(make__util__get_target_timestamp_7_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(make__util__get_target_timestamp_analysis_registry_8_0);
	}
MR_def_label(make__util__get_target_timestamp_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(make__util__get_target_timestamp_2_8_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make__util_module25)
	MR_init_entry1(make__util__get_dependency_timestamp_6_0);
	MR_init_label8(make__util__get_dependency_timestamp_6_0,6,5,8,3,10,11,15,20)
	MR_init_label1(make__util__get_dependency_timestamp_6_0,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'get_dependency_timestamp'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__make__util__get_dependency_timestamp_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(make__util__get_dependency_timestamp_6_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r4 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(make__util__get_dependency_timestamp_6_0_i5);
	}
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(2) = MR_r2;
	}
	MR_np_call_localret_ent(fn__dir__this_directory_0_0,
		make__util__get_dependency_timestamp_6_0_i6);
MR_def_label(make__util__get_dependency_timestamp_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(make__util__get_file_timestamp_7_0);
	}
MR_def_label(make__util__get_dependency_timestamp_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_ctfield(1, MR_r4, 0);
	MR_np_call_localret_ent(libs__globals__io_lookup_accumulating_option_4_0,
		make__util__get_dependency_timestamp_6_0_i8);
MR_def_label(make__util__get_dependency_timestamp_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(make__util__get_file_timestamp_7_0);
MR_def_label(make__util__get_dependency_timestamp_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Integer) 0;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(make__util__get_file_name_7_0,
		make__util__get_dependency_timestamp_6_0_i10);
MR_def_label(make__util__get_dependency_timestamp_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,7)) {
		MR_GOTO_LAB(make__util__get_dependency_timestamp_6_0_i11);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(make__util__get_target_timestamp_analysis_registry_8_0,
		make__util__get_dependency_timestamp_6_0_i15);
MR_def_label(make__util__get_dependency_timestamp_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(make__util__get_target_timestamp_2_8_0,
		make__util__get_dependency_timestamp_6_0_i15);
MR_def_label(make__util__get_dependency_timestamp_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(make__util__get_dependency_timestamp_6_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_sv(1), 1);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(make__util__get_dependency_timestamp_6_0_i2);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 0);
	if (MR_INT_NE(MR_tempr2,1)) {
		MR_GOTO_LAB(make__util__get_dependency_timestamp_6_0_i2);
	}
	MR_sv(1) = MR_r2;
	}
	MR_np_call_localret_ent(fn__libs__timestamp__oldest_timestamp_0_0,
		make__util__get_dependency_timestamp_6_0_i20);
MR_def_label(make__util__get_dependency_timestamp_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
MR_def_label(make__util__get_dependency_timestamp_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___libs__timestamp__timestamp_0_0);

MR_BEGIN_MODULE(make__util_module26)
	MR_init_entry1(fn__make__util__find_oldest_timestamp_2_0);
	MR_init_label4(fn__make__util__find_oldest_timestamp_2_0,24,7,6,23)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'find_oldest_timestamp'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__make__util__find_oldest_timestamp_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(fn__make__util__find_oldest_timestamp_2_0_i23);
	}
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(fn__make__util__find_oldest_timestamp_2_0_i24);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(fn__make__util__find_oldest_timestamp_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	MR_np_call_localret_ent(__Compare___libs__timestamp__timestamp_0_0,
		fn__make__util__find_oldest_timestamp_2_0_i7);
MR_def_label(fn__make__util__find_oldest_timestamp_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(fn__make__util__find_oldest_timestamp_2_0_i6);
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(3);
MR_def_label(fn__make__util__find_oldest_timestamp_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(fn__make__util__find_oldest_timestamp_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_1);
MR_decl_entry(io__flush_output_2_0);

MR_BEGIN_MODULE(make__util_module27)
	MR_init_entry1(make__util__verbose_msg_4_0);
	MR_init_label3(make__util__verbose_msg_4_0,2,5,3)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'verbose_msg'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__make__util__verbose_msg_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		make__util__verbose_msg_4_0_i2);
MR_def_label(make__util__verbose_msg_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(make__util__verbose_msg_4_0_i3);
	}
	MR_r1 = MR_sv(1);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(make__util__verbose_msg_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__make__util__verbose_msg_4_0_i5);
MR_def_label(make__util__verbose_msg_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__flush_output_2_0);
MR_def_label(make__util__verbose_msg_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__remove_file_recursively_4_0);
MR_decl_entry(fn__map__delete_2_0);

MR_BEGIN_MODULE(make__util_module28)
	MR_init_entry1(make__util__make_remove_file_6_0);
	MR_init_label8(make__util__make_remove_file_6_0,2,13,4,5,6,7,3,9)
	MR_init_label1(make__util__make_remove_file_6_0,11)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'make_remove_file'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__make__util__make_remove_file_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		make__util__make_remove_file_6_0_i2);
MR_def_label(make__util__make_remove_file_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(make__util__make_remove_file_6_0_i4);
	}
MR_def_label(make__util__make_remove_file_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(make__util__make_remove_file_6_0_i3);
MR_def_label(make__util__make_remove_file_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Removing ", 9);
	MR_np_call_localret_ent(io__write_string_3_0,
		make__util__make_remove_file_6_0_i5);
MR_def_label(make__util__make_remove_file_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		make__util__make_remove_file_6_0_i6);
MR_def_label(make__util__make_remove_file_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		make__util__make_remove_file_6_0_i7);
MR_def_label(make__util__make_remove_file_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__flush_output_2_0,
		make__util__make_remove_file_6_0_i13);
MR_def_label(make__util__make_remove_file_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(io__remove_file_recursively_4_0,
		make__util__make_remove_file_6_0_i9);
MR_def_label(make__util__make_remove_file_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r3 = MR_ctfield(0, MR_sv(2), 1);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(fn__map__delete_2_0,
		make__util__make_remove_file_6_0_i11);
MR_def_label(make__util__make_remove_file_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 18);
	MR_tempr2 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_ctfield(0, MR_tempr2, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_ctfield(0, MR_tempr2, 12);
	MR_tfield(0, MR_tempr1, 13) = MR_ctfield(0, MR_tempr2, 13);
	MR_tfield(0, MR_tempr1, 14) = MR_ctfield(0, MR_tempr2, 14);
	MR_tfield(0, MR_tempr1, 15) = MR_ctfield(0, MR_tempr2, 15);
	MR_tfield(0, MR_tempr1, 16) = MR_ctfield(0, MR_tempr2, 16);
	MR_tfield(0, MR_tempr1, 17) = MR_ctfield(0, MR_tempr2, 17);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make__util_module29)
	MR_init_entry1(make__util__make_remove_file_7_0);
	MR_init_label1(make__util__make_remove_file_7_0,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'make_remove_file'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__make__util__make_remove_file_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r4;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(parse_tree__file_names__module_name_to_file_name_6_0,
		make__util__make_remove_file_7_0_i2);
MR_def_label(make__util__make_remove_file_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(make__util__make_remove_file_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make__util_module30)
	MR_init_entry1(make__util__make_remove_target_file_7_0);
	MR_init_label6(make__util__make_remove_target_file_7_0,2,3,4,7,9,5)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'make_remove_target_file'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__make__util__make_remove_target_file_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_np_call_localret_ent(libs__globals__io_get_globals_3_0,
		make__util__make_remove_target_file_7_0_i2);
MR_def_label(make__util__make_remove_target_file_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = (MR_Integer) 1;
	MR_np_call_localret_ent(make__util__module_target_to_file_name_maybe_search_7_0,
		make__util__make_remove_target_file_7_0_i3);
MR_def_label(make__util__make_remove_target_file_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(make__util__make_remove_file_6_0,
		make__util__make_remove_target_file_7_0_i4);
MR_def_label(make__util__make_remove_target_file_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__make__util__timestamp_extension_2_0,
		make__util__make_remove_target_file_7_0_i7);
MR_def_label(make__util__make_remove_target_file_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(make__util__make_remove_target_file_7_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(parse_tree__file_names__module_name_to_file_name_6_0,
		make__util__make_remove_target_file_7_0_i9);
MR_def_label(make__util__make_remove_target_file_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(make__util__make_remove_file_6_0);
	}
MR_def_label(make__util__make_remove_target_file_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make__util_module31)
	MR_init_entry1(make__util__make_remove_target_file_6_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'make_remove_target_file'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__make__util__make_remove_target_file_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(make__util__make_remove_target_file_7_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_make__type_ctor_info_target_file_0;
MR_decl_entry(fn__list__map_2_0);

MR_BEGIN_MODULE(make__util_module32)
	MR_init_entry1(fn__make__util__make_target_file_list_2_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'make_target_file_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__make__util__make_target_file_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(15,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__make__util__IntroducedFrom__func__make_target_file_list__1335__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(make, target_file);
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(fn__list__map_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_make__dependencies__type_ctor_info_dependency_file_0;

MR_BEGIN_MODULE(make__util_module33)
	MR_init_entry1(fn__make__util__make_dependency_list_2_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'make_dependency_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__make__util__make_dependency_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(15,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__make__util__IntroducedFrom__func__make_dependency_list__1339__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(make__dependencies, dependency_file);
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(fn__list__map_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__file_names__module_name_to_lib_file_name_7_0);
MR_decl_entry(libs__globals__io_lookup_string_option_4_0);

MR_BEGIN_MODULE(make__util_module34)
	MR_init_entry1(make__util__linked_target_file_name_5_0);
	MR_init_label7(make__util__linked_target_file_name_5_0,3,22,6,8,24,23,14)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'linked_target_file_name'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__make__util__linked_target_file_name_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r2,
		MR_LABEL_AP(make__util__linked_target_file_name_5_0_i22) MR_AND
		MR_LABEL_AP(make__util__linked_target_file_name_5_0_i23) MR_AND
		MR_LABEL_AP(make__util__linked_target_file_name_5_0_i24) MR_AND
		MR_LABEL_AP(make__util__linked_target_file_name_5_0_i8) MR_AND
		MR_LABEL_AP(make__util__linked_target_file_name_5_0_i3));
MR_def_label(make__util__linked_target_file_name_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("lib", 3);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_string_const(".beams", 6);
	MR_r4 = (MR_Integer) 1;
	MR_np_tailcall_ent(parse_tree__file_names__module_name_to_lib_file_name_7_0);
	}
MR_def_label(make__util__linked_target_file_name_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 527;
	MR_np_call_localret_ent(libs__globals__io_lookup_string_option_4_0,
		make__util__linked_target_file_name_5_0_i6);
MR_def_label(make__util__linked_target_file_name_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(parse_tree__file_names__module_name_to_file_name_6_0);
	}
MR_def_label(make__util__linked_target_file_name_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(".jar", 4);
	MR_r3 = (MR_Integer) 1;
	MR_np_tailcall_ent(parse_tree__file_names__module_name_to_file_name_6_0);
MR_def_label(make__util__linked_target_file_name_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 525;
	MR_np_call_localret_ent(libs__globals__io_lookup_string_option_4_0,
		make__util__linked_target_file_name_5_0_i14);
MR_def_label(make__util__linked_target_file_name_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 526;
	MR_np_call_localret_ent(libs__globals__io_lookup_string_option_4_0,
		make__util__linked_target_file_name_5_0_i14);
MR_def_label(make__util__linked_target_file_name_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("lib", 3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(parse_tree__file_names__module_name_to_lib_file_name_7_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make__util_module35)
	MR_init_entry1(make__util__target_is_grade_or_arch_dependent_1_0);
	MR_init_label5(make__util__target_is_grade_or_arch_dependent_1_0,22,6,25,29,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'target_is_grade_or_arch_dependent'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__make__util__target_is_grade_or_arch_dependent_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(make__util__target_is_grade_or_arch_dependent_1_0_i22) MR_AND
		MR_LABEL_AP(make__util__target_is_grade_or_arch_dependent_1_0_i6) MR_AND
		MR_LABEL_AP(make__util__target_is_grade_or_arch_dependent_1_0_i29) MR_AND
		MR_LABEL_AP(make__util__target_is_grade_or_arch_dependent_1_0_i25));
MR_def_label(make__util__target_is_grade_or_arch_dependent_1_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r1),
		MR_LABEL_AP(make__util__target_is_grade_or_arch_dependent_1_0_i1) MR_AND
		MR_LABEL_AP(make__util__target_is_grade_or_arch_dependent_1_0_i1) MR_AND
		MR_LABEL_AP(make__util__target_is_grade_or_arch_dependent_1_0_i1) MR_AND
		MR_LABEL_AP(make__util__target_is_grade_or_arch_dependent_1_0_i1) MR_AND
		MR_LABEL_AP(make__util__target_is_grade_or_arch_dependent_1_0_i1) MR_AND
		MR_LABEL_AP(make__util__target_is_grade_or_arch_dependent_1_0_i1) MR_AND
		MR_LABEL_AP(make__util__target_is_grade_or_arch_dependent_1_0_i29) MR_AND
		MR_LABEL_AP(make__util__target_is_grade_or_arch_dependent_1_0_i29) MR_AND
		MR_LABEL_AP(make__util__target_is_grade_or_arch_dependent_1_0_i29) MR_AND
		MR_LABEL_AP(make__util__target_is_grade_or_arch_dependent_1_0_i29) MR_AND
		MR_LABEL_AP(make__util__target_is_grade_or_arch_dependent_1_0_i29) MR_AND
		MR_LABEL_AP(make__util__target_is_grade_or_arch_dependent_1_0_i29) MR_AND
		MR_LABEL_AP(make__util__target_is_grade_or_arch_dependent_1_0_i29) MR_AND
		MR_LABEL_AP(make__util__target_is_grade_or_arch_dependent_1_0_i29) MR_AND
		MR_LABEL_AP(make__util__target_is_grade_or_arch_dependent_1_0_i29) MR_AND
		MR_LABEL_AP(make__util__target_is_grade_or_arch_dependent_1_0_i29) MR_AND
		MR_LABEL_AP(make__util__target_is_grade_or_arch_dependent_1_0_i29) MR_AND
		MR_LABEL_AP(make__util__target_is_grade_or_arch_dependent_1_0_i1));
MR_def_label(make__util__target_is_grade_or_arch_dependent_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_r1 = ((MR_Integer) MR_tempr1 == (MR_Integer) 1);
	MR_proceed();
	}
MR_def_label(make__util__target_is_grade_or_arch_dependent_1_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 0);
	}
MR_def_label(make__util__target_is_grade_or_arch_dependent_1_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(make__util__target_is_grade_or_arch_dependent_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make__util_module36)
	MR_init_entry1(make__util__debug_msg_3_0);
	MR_init_label3(make__util__debug_msg_3_0,2,5,3)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'debug_msg'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__make__util__debug_msg_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 65;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		make__util__debug_msg_3_0_i2);
MR_def_label(make__util__debug_msg_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(make__util__debug_msg_3_0_i3);
	}
	MR_r1 = MR_sv(1);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(make__util__debug_msg_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__make__util__debug_msg_3_0_i5);
MR_def_label(make__util__debug_msg_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__flush_output_2_0);
MR_def_label(make__util__debug_msg_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make__util_module37)
	MR_init_entry1(make__util__verbose_msg_3_0);
	MR_init_label3(make__util__verbose_msg_3_0,2,5,3)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'verbose_msg'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__make__util__verbose_msg_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 44;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		make__util__verbose_msg_3_0_i2);
MR_def_label(make__util__verbose_msg_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(make__util__verbose_msg_3_0_i3);
	}
	MR_r1 = MR_sv(1);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(make__util__verbose_msg_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__make__util__verbose_msg_3_0_i5);
MR_def_label(make__util__verbose_msg_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__flush_output_2_0);
MR_def_label(make__util__verbose_msg_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make__util_module38)
	MR_init_entry1(make__util__debug_file_msg_4_0);
	MR_init_label6(make__util__debug_file_msg_4_0,2,5,6,7,8,3)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'debug_file_msg'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__make__util__debug_file_msg_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 65;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		make__util__debug_file_msg_4_0_i2);
MR_def_label(make__util__debug_file_msg_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(make__util__debug_file_msg_4_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const("", 0);
	MR_np_call_localret_ent(make__util__make_write_target_file_wrapped_5_0,
		make__util__debug_file_msg_4_0_i5);
MR_def_label(make__util__debug_file_msg_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(": ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		make__util__debug_file_msg_4_0_i6);
MR_def_label(make__util__debug_file_msg_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_string_3_0,
		make__util__debug_file_msg_4_0_i7);
MR_def_label(make__util__debug_file_msg_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		make__util__debug_file_msg_4_0_i8);
MR_def_label(make__util__debug_file_msg_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__flush_output_2_0);
MR_def_label(make__util__debug_file_msg_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make__util_module39)
	MR_init_entry1(make__util__make_write_target_file_wrapped_5_0);
	MR_init_label4(make__util__make_write_target_file_wrapped_5_0,2,14,3,7)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'make_write_target_file_wrapped'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__make__util__make_write_target_file_wrapped_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_ctfield(0, MR_r2, 0);
	MR_r2 = MR_ctfield(0, MR_r2, 1);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = (MR_Integer) 1;
	MR_np_call_localret_ent(make__util__module_target_to_file_name_maybe_search_7_0,
		make__util__make_write_target_file_wrapped_5_0_i2);
MR_def_label(make__util__make_write_target_file_wrapped_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(1), MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(make__util__make_write_target_file_wrapped_5_0_i3);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(2), MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(make__util__make_write_target_file_wrapped_5_0_i3);
	}
MR_def_label(make__util__make_write_target_file_wrapped_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(make__util__make_write_target_file_wrapped_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		make__util__make_write_target_file_wrapped_5_0_i7);
MR_def_label(make__util__make_write_target_file_wrapped_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		make__util__make_write_target_file_wrapped_5_0_i14);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make__util_module40)
	MR_init_entry1(make__util__make_write_target_file_3_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'make_write_target_file'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__make__util__make_write_target_file_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_string_const("", 0);
	MR_np_tailcall_ent(make__util__make_write_target_file_wrapped_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make__util_module41)
	MR_init_entry1(make__util__make_write_dependency_file_3_0);
	MR_init_label1(make__util__make_write_dependency_file_3_0,3)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'make_write_dependency_file'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__make__util__make_write_dependency_file_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(make__util__make_write_dependency_file_3_0_i3);
	}
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(make__util__make_write_dependency_file_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = (MR_Word) MR_string_const("", 0);
	MR_np_tailcall_ent(make__util__make_write_target_file_wrapped_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make__util_module42)
	MR_init_entry1(make__util__make_write_dependency_file_list_3_0);
	MR_init_label6(make__util__make_write_dependency_file_list_3_0,18,4,6,5,9,20)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'make_write_dependency_file_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__make__util__make_write_dependency_file_list_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(make__util__make_write_dependency_file_list_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(make__util__make_write_dependency_file_list_3_0_i20);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		make__util__make_write_dependency_file_list_3_0_i4);
MR_def_label(make__util__make_write_dependency_file_list_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(make__util__make_write_dependency_file_list_3_0_i6);
	}
	MR_r1 = MR_ctfield(1, MR_sv(1), 0);
	MR_np_call_localret_ent(io__write_string_3_0,
		make__util__make_write_dependency_file_list_3_0_i5);
MR_def_label(make__util__make_write_dependency_file_list_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_r2 = MR_ctfield(0, MR_sv(1), 0);
	MR_r3 = (MR_Word) MR_string_const("", 0);
	MR_np_call_localret_ent(make__util__make_write_target_file_wrapped_5_0,
		make__util__make_write_dependency_file_list_3_0_i5);
MR_def_label(make__util__make_write_dependency_file_list_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		make__util__make_write_dependency_file_list_3_0_i9);
MR_def_label(make__util__make_write_dependency_file_list_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(make__util__make_write_dependency_file_list_3_0_i18);
MR_def_label(make__util__make_write_dependency_file_list_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make__util_module43)
	MR_init_entry1(make__util__maybe_make_linked_target_message_3_0);
	MR_init_label5(make__util__maybe_make_linked_target_message_3_0,2,5,6,7,3)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'maybe_make_linked_target_message'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__make__util__maybe_make_linked_target_message_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 44;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		make__util__maybe_make_linked_target_message_3_0_i2);
MR_def_label(make__util__maybe_make_linked_target_message_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(make__util__maybe_make_linked_target_message_3_0_i3);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		make__util__maybe_make_linked_target_message_3_0_i5);
MR_def_label(make__util__maybe_make_linked_target_message_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Making ", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		make__util__maybe_make_linked_target_message_3_0_i6);
MR_def_label(make__util__maybe_make_linked_target_message_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		make__util__maybe_make_linked_target_message_3_0_i7);
MR_def_label(make__util__maybe_make_linked_target_message_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__flush_output_2_0);
MR_def_label(make__util__maybe_make_linked_target_message_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__set_output_stream_4_0);

MR_BEGIN_MODULE(make__util_module44)
	MR_init_entry1(make__util__maybe_make_target_message_to_stream_4_0);
	MR_init_label5(make__util__maybe_make_target_message_to_stream_4_0,2,5,6,7,3)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'maybe_make_target_message_to_stream'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__make__util__maybe_make_target_message_to_stream_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 44;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		make__util__maybe_make_target_message_to_stream_4_0_i2);
MR_def_label(make__util__maybe_make_target_message_to_stream_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(make__util__maybe_make_target_message_to_stream_4_0_i3);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__set_output_stream_4_0,
		make__util__maybe_make_target_message_to_stream_4_0_i5);
MR_def_label(make__util__maybe_make_target_message_to_stream_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Making ", 7);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(make__util__make_write_target_file_wrapped_5_0,
		make__util__maybe_make_target_message_to_stream_4_0_i6);
MR_def_label(make__util__maybe_make_target_message_to_stream_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__set_output_stream_4_0,
		make__util__maybe_make_target_message_to_stream_4_0_i7);
MR_def_label(make__util__maybe_make_target_message_to_stream_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__flush_output_2_0);
MR_def_label(make__util__maybe_make_target_message_to_stream_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make__util_module45)
	MR_init_entry1(make__util__maybe_make_target_message_3_0);
	MR_init_label1(make__util__maybe_make_target_message_3_0,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'maybe_make_target_message'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__make__util__maybe_make_target_message_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(io__output_stream_3_0,
		make__util__maybe_make_target_message_3_0_i2);
MR_def_label(make__util__maybe_make_target_message_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(make__util__maybe_make_target_message_to_stream_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_string_4_0);

MR_BEGIN_MODULE(make__util_module46)
	MR_init_entry1(make__util__maybe_reanalyse_modules_message_2_0);
	MR_init_label4(make__util__maybe_reanalyse_modules_message_2_0,2,5,6,3)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'maybe_reanalyse_modules_message'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__make__util__maybe_reanalyse_modules_message_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Integer) 44;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		make__util__maybe_reanalyse_modules_message_2_0_i2);
MR_def_label(make__util__maybe_reanalyse_modules_message_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(make__util__maybe_reanalyse_modules_message_2_0_i3);
	}
	MR_np_call_localret_ent(io__output_stream_3_0,
		make__util__maybe_reanalyse_modules_message_2_0_i5);
MR_def_label(make__util__maybe_reanalyse_modules_message_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("Reanalysing invalid/suboptimal modules\n", 39);
	MR_np_call_localret_ent(io__write_string_4_0,
		make__util__maybe_reanalyse_modules_message_2_0_i6);
MR_def_label(make__util__maybe_reanalyse_modules_message_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__flush_output_2_0);
MR_def_label(make__util__maybe_reanalyse_modules_message_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make__util_module47)
	MR_init_entry1(make__util__target_file_error_3_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'target_file_error'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__make__util__target_file_error_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("** Error making \140", 17);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_string_const("\'.\n", 3);
	MR_np_tailcall_ent(make__util__make_write_target_file_wrapped_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make__util_module48)
	MR_init_entry1(make__util__file_error_3_0);
	MR_init_label2(make__util__file_error_3_0,2,3)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'file_error'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__make__util__file_error_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = (MR_Word) MR_string_const("\'.\n", 3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		make__util__file_error_3_0_i2);
MR_def_label(make__util__file_error_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("** Error making \140", 17);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		make__util__file_error_3_0_i3);
MR_def_label(make__util__file_error_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make__util_module49)
	MR_init_entry1(make__util__make_write_module_or_linked_target_3_0);
	MR_init_label3(make__util__make_write_module_or_linked_target_3_0,8,26,25)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'make_write_module_or_linked_target'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(make__util__make_write_module_or_linked_target_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_ctfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r4);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(make__util__make_write_module_or_linked_target_3_0_i26);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(make__util__make_write_module_or_linked_target_3_0_i8);
	}
	MR_r1 = (MR_Word) MR_string_const("make.util.m", 11);
	MR_r2 = (MR_Word) MR_string_const("maybe_warn_up_to_date_target: misc_target", 41);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
	}
MR_def_label(make__util__make_write_module_or_linked_target_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_r4, 0);
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_string_const("", 0);
	MR_np_tailcall_ent(make__util__make_write_target_file_wrapped_5_0);
	}
MR_def_label(make__util__make_write_module_or_linked_target_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_ctfield(1, MR_r4, 0);
	MR_np_call_localret_ent(make__util__linked_target_file_name_5_0,
		make__util__make_write_module_or_linked_target_3_0_i25);
MR_def_label(make__util__make_write_module_or_linked_target_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__set__delete_2_0);

MR_BEGIN_MODULE(make__util_module50)
	MR_init_entry1(make__util__maybe_warn_up_to_date_target_5_0);
	MR_init_label8(make__util__maybe_warn_up_to_date_target_5_0,2,17,4,8,10,11,12,15)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'maybe_warn_up_to_date_target'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__make__util__maybe_warn_up_to_date_target_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 26;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		make__util__maybe_warn_up_to_date_target_5_0_i2);
MR_def_label(make__util__maybe_warn_up_to_date_target_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(make__util__maybe_warn_up_to_date_target_5_0_i4);
	}
MR_def_label(make__util__maybe_warn_up_to_date_target_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r2 = MR_ctfield(0, MR_sv(2), 16);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,14,1);
	MR_np_call_localret_ent(fn__set__delete_2_0,
		make__util__maybe_warn_up_to_date_target_5_0_i15);
MR_def_label(make__util__maybe_warn_up_to_date_target_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,14,1);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_ctfield(0, MR_sv(2), 16);
	MR_np_call_localret_ent(set__member_2_0,
		make__util__maybe_warn_up_to_date_target_5_0_i8);
MR_def_label(make__util__maybe_warn_up_to_date_target_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(make__util__maybe_warn_up_to_date_target_5_0_i17);
	}
	MR_r1 = (MR_Word) MR_string_const("** Nothing to be done for \140", 27);
	MR_np_call_localret_ent(io__write_string_3_0,
		make__util__maybe_warn_up_to_date_target_5_0_i10);
MR_def_label(make__util__maybe_warn_up_to_date_target_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(make__util__make_write_module_or_linked_target_3_0,
		make__util__maybe_warn_up_to_date_target_5_0_i11);
MR_def_label(make__util__maybe_warn_up_to_date_target_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\'.\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		make__util__maybe_warn_up_to_date_target_5_0_i12);
MR_def_label(make__util__maybe_warn_up_to_date_target_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r2 = MR_ctfield(0, MR_sv(2), 16);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__set__delete_2_0,
		make__util__maybe_warn_up_to_date_target_5_0_i15);
MR_def_label(make__util__maybe_warn_up_to_date_target_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 18);
	MR_tempr2 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_ctfield(0, MR_tempr2, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_ctfield(0, MR_tempr2, 12);
	MR_tfield(0, MR_tempr1, 13) = MR_ctfield(0, MR_tempr2, 13);
	MR_tfield(0, MR_tempr1, 14) = MR_ctfield(0, MR_tempr2, 14);
	MR_tfield(0, MR_tempr1, 15) = MR_ctfield(0, MR_tempr2, 15);
	MR_tfield(0, MR_tempr1, 16) = MR_r1;
	MR_tfield(0, MR_tempr1, 17) = MR_ctfield(0, MR_tempr2, 17);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make__util_module51)
	MR_init_entry1(make__util__maybe_symlink_or_copy_linked_target_message_3_0);
	MR_init_label3(make__util__maybe_symlink_or_copy_linked_target_message_3_0,2,5,3)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'maybe_symlink_or_copy_linked_target_message'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__make__util__maybe_symlink_or_copy_linked_target_message_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 44;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		make__util__maybe_symlink_or_copy_linked_target_message_3_0_i2);
MR_def_label(make__util__maybe_symlink_or_copy_linked_target_message_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(make__util__maybe_symlink_or_copy_linked_target_message_3_0_i3);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(make__util__IntroducedFrom__pred__maybe_symlink_or_copy_linked_target_message__1710__1_3_0,
		make__util__maybe_symlink_or_copy_linked_target_message_3_0_i5);
MR_def_label(make__util__maybe_symlink_or_copy_linked_target_message_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__flush_output_2_0);
MR_def_label(make__util__maybe_symlink_or_copy_linked_target_message_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make__util_module52)
	MR_init_entry1(make__util__get_real_milliseconds_3_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'get_real_milliseconds'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__make__util__get_real_milliseconds_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Time;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__make__util__get_real_milliseconds_3_0
{
#line 1743 "make.util.m"

    Time = MR_get_real_milliseconds();
    IO = IO0;
;}
#line 6029 "make.util.c"
	MR_r1 = Time;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__hash_1_0);

MR_BEGIN_MODULE(make__util_module53)
	MR_init_entry1(make__util__module_name_hash_2_0);
	MR_init_label1(make__util__module_name_hash_2_0,3)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'module_name_hash'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__make__util__module_name_hash_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(make__util__module_name_hash_2_0_i3);
	}
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_np_tailcall_ent(fn__string__hash_1_0);
MR_def_label(make__util__module_name_hash_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_np_tailcall_ent(fn__string__hash_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make__util_module54)
	MR_init_entry1(make__util__dependency_file_hash_2_0);
	MR_init_label8(make__util__dependency_file_hash_2_0,105,6,5,39,13,15,11,42)
	MR_init_label8(make__util__dependency_file_hash_2_0,10,12,16,17,18,19,21,22)
	MR_init_label8(make__util__dependency_file_hash_2_0,23,24,25,26,27,28,29,31)
	MR_init_label7(make__util__dependency_file_hash_2_0,32,33,34,35,36,37,38)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'dependency_file_hash'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__make__util__dependency_file_hash_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(make__util__dependency_file_hash_2_0_i105);
	}
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_tailcall_ent(fn__string__hash_1_0);
MR_def_label(make__util__dependency_file_hash_2_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(make__util__dependency_file_hash_2_0_i6);
	}
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_ctfield(1, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(fn__string__hash_1_0,
		make__util__dependency_file_hash_2_0_i5);
MR_def_label(make__util__dependency_file_hash_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(0, MR_r3, 1);
	MR_r1 = MR_ctfield(0, MR_r2, 0);
	MR_np_call_localret_ent(fn__string__hash_1_0,
		make__util__dependency_file_hash_2_0_i5);
MR_def_label(make__util__dependency_file_hash_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(make__util__dependency_file_hash_2_0_i39) MR_AND
		MR_LABEL_AP(make__util__dependency_file_hash_2_0_i13) MR_AND
		MR_LABEL_AP(make__util__dependency_file_hash_2_0_i11) MR_AND
		MR_LABEL_AP(make__util__dependency_file_hash_2_0_i42));
MR_def_label(make__util__dependency_file_hash_2_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_sv(1)),
		MR_LABEL_AP(make__util__dependency_file_hash_2_0_i35) MR_AND
		MR_LABEL_AP(make__util__dependency_file_hash_2_0_i19) MR_AND
		MR_LABEL_AP(make__util__dependency_file_hash_2_0_i33) MR_AND
		MR_LABEL_AP(make__util__dependency_file_hash_2_0_i28) MR_AND
		MR_LABEL_AP(make__util__dependency_file_hash_2_0_i34) MR_AND
		MR_LABEL_AP(make__util__dependency_file_hash_2_0_i37) MR_AND
		MR_LABEL_AP(make__util__dependency_file_hash_2_0_i25) MR_AND
		MR_LABEL_AP(make__util__dependency_file_hash_2_0_i10) MR_AND
		MR_LABEL_AP(make__util__dependency_file_hash_2_0_i36) MR_AND
		MR_LABEL_AP(make__util__dependency_file_hash_2_0_i12) MR_AND
		MR_LABEL_AP(make__util__dependency_file_hash_2_0_i24) MR_AND
		MR_LABEL_AP(make__util__dependency_file_hash_2_0_i23) MR_AND
		MR_LABEL_AP(make__util__dependency_file_hash_2_0_i27) MR_AND
		MR_LABEL_AP(make__util__dependency_file_hash_2_0_i26) MR_AND
		MR_LABEL_AP(make__util__dependency_file_hash_2_0_i18) MR_AND
		MR_LABEL_AP(make__util__dependency_file_hash_2_0_i17) MR_AND
		MR_LABEL_AP(make__util__dependency_file_hash_2_0_i16) MR_AND
		MR_LABEL_AP(make__util__dependency_file_hash_2_0_i38));
MR_def_label(make__util__dependency_file_hash_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_sv(1), 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(make__util__dependency_file_hash_2_0_i15);
	}
	MR_r1 = (((MR_Integer) MR_r1 ^ ((MR_Integer) MR_r1 << (MR_Integer) 5)) ^ (MR_Integer) 9);
	MR_decr_sp_and_return(2);
	}
MR_def_label(make__util__dependency_file_hash_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (((MR_Integer) MR_r1 ^ ((MR_Integer) MR_r1 << (MR_Integer) 5)) ^ (MR_Integer) 10);
	MR_decr_sp_and_return(2);
MR_def_label(make__util__dependency_file_hash_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (((MR_Integer) MR_r1 ^ ((MR_Integer) MR_r1 << (MR_Integer) 5)) ^ (MR_Integer) 18);
	MR_decr_sp_and_return(2);
MR_def_label(make__util__dependency_file_hash_2_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_sv(1), 0);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(make__util__dependency_file_hash_2_0_i29);
	}
	if (MR_INT_EQ(MR_tempr1,1)) {
		MR_GOTO_LAB(make__util__dependency_file_hash_2_0_i21);
	}
	if (MR_INT_EQ(MR_tempr1,2)) {
		MR_GOTO_LAB(make__util__dependency_file_hash_2_0_i22);
	}
	MR_r1 = (((MR_Integer) MR_r1 ^ ((MR_Integer) MR_r1 << (MR_Integer) 5)) ^ (MR_Integer) 22);
	MR_decr_sp_and_return(2);
	}
MR_def_label(make__util__dependency_file_hash_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (((MR_Integer) MR_r1 ^ ((MR_Integer) MR_r1 << (MR_Integer) 5)) ^ (MR_Integer) 8);
	MR_decr_sp_and_return(2);
MR_def_label(make__util__dependency_file_hash_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (((MR_Integer) MR_r1 ^ ((MR_Integer) MR_r1 << (MR_Integer) 5)) ^ (MR_Integer) 11);
	MR_decr_sp_and_return(2);
MR_def_label(make__util__dependency_file_hash_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (((MR_Integer) MR_r1 ^ ((MR_Integer) MR_r1 << (MR_Integer) 5)) ^ (MR_Integer) 17);
	MR_decr_sp_and_return(2);
MR_def_label(make__util__dependency_file_hash_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (((MR_Integer) MR_r1 ^ ((MR_Integer) MR_r1 << (MR_Integer) 5)) ^ (MR_Integer) 16);
	MR_decr_sp_and_return(2);
MR_def_label(make__util__dependency_file_hash_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (((MR_Integer) MR_r1 ^ ((MR_Integer) MR_r1 << (MR_Integer) 5)) ^ (MR_Integer) 15);
	MR_decr_sp_and_return(2);
MR_def_label(make__util__dependency_file_hash_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (((MR_Integer) MR_r1 ^ ((MR_Integer) MR_r1 << (MR_Integer) 5)) ^ (MR_Integer) 2);
	MR_decr_sp_and_return(2);
MR_def_label(make__util__dependency_file_hash_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (((MR_Integer) MR_r1 ^ ((MR_Integer) MR_r1 << (MR_Integer) 5)) ^ (MR_Integer) 20);
	MR_decr_sp_and_return(2);
MR_def_label(make__util__dependency_file_hash_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (((MR_Integer) MR_r1 ^ ((MR_Integer) MR_r1 << (MR_Integer) 5)) ^ (MR_Integer) 21);
	MR_decr_sp_and_return(2);
MR_def_label(make__util__dependency_file_hash_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (((MR_Integer) MR_r1 ^ ((MR_Integer) MR_r1 << (MR_Integer) 5)) ^ (MR_Integer) 13);
	MR_decr_sp_and_return(2);
MR_def_label(make__util__dependency_file_hash_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (((MR_Integer) MR_r1 ^ ((MR_Integer) MR_r1 << (MR_Integer) 5)) ^ (MR_Integer) 12);
	MR_decr_sp_and_return(2);
MR_def_label(make__util__dependency_file_hash_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (((MR_Integer) MR_r1 ^ ((MR_Integer) MR_r1 << (MR_Integer) 5)) ^ (MR_Integer) 7);
	MR_decr_sp_and_return(2);
MR_def_label(make__util__dependency_file_hash_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (((MR_Integer) MR_r1 ^ ((MR_Integer) MR_r1 << (MR_Integer) 5)) ^ (MR_Integer) 25);
	MR_decr_sp_and_return(2);
MR_def_label(make__util__dependency_file_hash_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (((MR_Integer) MR_r1 ^ ((MR_Integer) MR_r1 << (MR_Integer) 5)) ^ (MR_Integer) 14);
	MR_decr_sp_and_return(2);
MR_def_label(make__util__dependency_file_hash_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (((MR_Integer) MR_r1 ^ ((MR_Integer) MR_r1 << (MR_Integer) 5)) ^ (MR_Integer) 4);
	MR_decr_sp_and_return(2);
MR_def_label(make__util__dependency_file_hash_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(3, MR_sv(1), 1);
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(make__util__dependency_file_hash_2_0_i31);
	}
	MR_r1 = (((MR_Integer) MR_r1 ^ ((MR_Integer) MR_r1 << (MR_Integer) 5)) ^ (MR_Integer) 625);
	MR_decr_sp_and_return(2);
MR_def_label(make__util__dependency_file_hash_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,2)) {
		MR_GOTO_LAB(make__util__dependency_file_hash_2_0_i32);
	}
	MR_r1 = (((MR_Integer) MR_r1 ^ ((MR_Integer) MR_r1 << (MR_Integer) 5)) ^ (MR_Integer) 624);
	MR_decr_sp_and_return(2);
MR_def_label(make__util__dependency_file_hash_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (((MR_Integer) MR_r1 ^ ((MR_Integer) MR_r1 << (MR_Integer) 5)) ^ (MR_Integer) 626);
	MR_decr_sp_and_return(2);
MR_def_label(make__util__dependency_file_hash_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (((MR_Integer) MR_r1 ^ ((MR_Integer) MR_r1 << (MR_Integer) 5)) ^ (MR_Integer) 3);
	MR_decr_sp_and_return(2);
MR_def_label(make__util__dependency_file_hash_2_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (((MR_Integer) MR_r1 ^ ((MR_Integer) MR_r1 << (MR_Integer) 5)) ^ (MR_Integer) 5);
	MR_decr_sp_and_return(2);
MR_def_label(make__util__dependency_file_hash_2_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (((MR_Integer) MR_r1 ^ ((MR_Integer) MR_r1 << (MR_Integer) 5)) ^ (MR_Integer) 1);
	MR_decr_sp_and_return(2);
MR_def_label(make__util__dependency_file_hash_2_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (((MR_Integer) MR_r1 ^ ((MR_Integer) MR_r1 << (MR_Integer) 5)) ^ (MR_Integer) 24);
	MR_decr_sp_and_return(2);
MR_def_label(make__util__dependency_file_hash_2_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (((MR_Integer) MR_r1 ^ ((MR_Integer) MR_r1 << (MR_Integer) 5)) ^ (MR_Integer) 6);
	MR_decr_sp_and_return(2);
MR_def_label(make__util__dependency_file_hash_2_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (((MR_Integer) MR_r1 ^ ((MR_Integer) MR_r1 << (MR_Integer) 5)) ^ (MR_Integer) 23);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make__util_module55)
	MR_init_entry1(make__util__start_worker_process_10_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'start_worker_process'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(make__util__start_worker_process_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r8 = MR_r9;
	MR_np_tailcall_ent(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_95_119_111_114_107_101_114_95_112_114_111_99_101_115_115_95_95_91_56_93_95_48_10_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make__util_module56)
	MR_init_entry1(make__util__child_worker_8_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'child_worker'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(make__util__child_worker_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 10);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(make__util__worker_loop_10_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 7;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tempr3 = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = MR_tempr3;
	MR_tfield(0, MR_tempr1, 5) = MR_r3;
	MR_tfield(0, MR_tempr1, 6) = MR_r4;
	MR_tfield(0, MR_tempr1, 7) = MR_r5;
	MR_tempr4 = MR_r6;
	MR_tfield(0, MR_tempr1, 8) = MR_tempr4;
	MR_tfield(0, MR_tempr1, 9) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(7,1);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(make__util__worker_loop_signal_cleanup_6_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr2, 3) = MR_tempr3;
	MR_tfield(0, MR_tempr2, 4) = MR_tempr4;
	MR_tfield(0, MR_tempr2, 5) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr1;
	MR_r4 = MR_r7;
	MR_np_tailcall_ent(libs__process_util__build_with_check_for_interrupt_7_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make__util_module57)
	MR_init_entry1(make__util__accept_task_4_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'accept_task'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(make__util__accept_task_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MC_JobCtl *	JobCtl;
	MR_Integer	TaskNumber;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__make__util__accept_task_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MC_JobCtl *, MR_r1, JobCtl);
{
#line 777 "make.util.m"

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

    IO = IO0;
;}
#line 6403 "make.util.c"
	MR_r1 = TaskNumber;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make__util_module58)
	MR_init_entry1(make__util__mark_task_done_4_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'mark_task_done'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(make__util__mark_task_done_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MC_JobCtl *	JobCtl;
	MR_Integer	TaskNumber;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__make__util__mark_task_done_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MC_JobCtl *, MR_r1, JobCtl);
	TaskNumber = MR_r2;
{
#line 807 "make.util.m"

#ifdef MC_HAVE_JOBCTL_IPC
    MC_lock_job_ctl(JobCtl);
    JobCtl->jc_tasks[TaskNumber] = TASK_DONE;
    MC_unlock_job_ctl(JobCtl);
#endif
    IO = IO0;
;}
#line 6446 "make.util.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make__util_module59)
	MR_init_entry1(make__util__mark_task_error_5_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'mark_task_error'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(make__util__mark_task_error_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MC_JobCtl *	JobCtl;
	MR_Integer	TaskNumber;
	MR_Word	KeepGoing;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__make__util__mark_task_error_5_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MC_JobCtl *, MR_r1, JobCtl);
	TaskNumber = MR_r2;
	KeepGoing = MR_r3;
{
#line 823 "make.util.m"

#ifdef MC_HAVE_JOBCTL_IPC
    MC_lock_job_ctl(JobCtl);

    JobCtl->jc_tasks[TaskNumber] = TASK_ERROR;
    if (!KeepGoing) {
        JobCtl->jc_abort = MR_TRUE;
    }

    MC_unlock_job_ctl(JobCtl);
#endif
    IO = IO0;
;}
#line 6495 "make.util.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__det_index0_2_0);

MR_BEGIN_MODULE(make__util_module60)
	MR_init_entry1(make__util__worker_loop_10_0);
	MR_init_label8(make__util__worker_loop_10_0,21,2,4,5,8,7,9,3)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'worker_loop'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(make__util__worker_loop_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(make__util__worker_loop_10_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(4) = MR_tempr1;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(make__util__accept_task_4_0,
		make__util__worker_loop_10_0_i2);
MR_def_label(make__util__worker_loop_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_r1,0)) {
		MR_GOTO_LAB(make__util__worker_loop_10_0_i3);
	}
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(fn__list__det_index0_2_0,
		make__util__worker_loop_10_0_i4);
MR_def_label(make__util__worker_loop_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(make__util__worker_loop_10_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__make__util__worker_loop_10_0_i5);
MR_def_label(make__util__worker_loop_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(make__util__worker_loop_10_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(make__util__mark_task_error_5_0,
		make__util__worker_loop_10_0_i8);
MR_def_label(make__util__worker_loop_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = (MR_Integer) 0;
	MR_r8 = MR_sv(5);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(make__util__worker_loop_10_0_i21);
MR_def_label(make__util__worker_loop_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(make__util__mark_task_done_4_0,
		make__util__worker_loop_10_0_i9);
MR_def_label(make__util__worker_loop_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(5);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(make__util__worker_loop_10_0_i21);
MR_def_label(make__util__worker_loop_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make__util_module61)
	MR_init_entry1(make__util__mark_abort_3_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'mark_abort'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(make__util__mark_abort_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MC_JobCtl *	JobCtl;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__make__util__mark_abort_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MC_JobCtl *, MR_r1, JobCtl);
{
#line 843 "make.util.m"

#ifdef MC_HAVE_JOBCTL_IPC
    MC_lock_job_ctl(JobCtl);
    JobCtl->jc_abort = MR_TRUE;
    MC_unlock_job_ctl(JobCtl);
#endif
    IO = IO0;
;}
#line 6654 "make.util.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__libs__process_util__sigint_0_0);
MR_decl_entry(libs__process_util__send_signal_4_0);
MR_decl_entry(list__foldl_4_2);

MR_BEGIN_MODULE(make__util_module62)
	MR_init_entry1(make__util__worker_loop_signal_cleanup_6_0);
	MR_init_label3(make__util__worker_loop_signal_cleanup_6_0,2,3,5)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'worker_loop_signal_cleanup'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(make__util__worker_loop_signal_cleanup_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(make__util__mark_abort_3_0,
		make__util__worker_loop_signal_cleanup_6_0_i2);
MR_def_label(make__util__worker_loop_signal_cleanup_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__libs__process_util__sigint_0_0,
		make__util__worker_loop_signal_cleanup_6_0_i3);
MR_def_label(make__util__worker_loop_signal_cleanup_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(16,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(libs__process_util__send_signal_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__foldl_4_2,
		make__util__worker_loop_signal_cleanup_6_0_i5);
MR_def_label(make__util__worker_loop_signal_cleanup_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__process_util__wait_pid_4_0);

MR_BEGIN_MODULE(make__util_module63)
	MR_init_entry1(make__util__reap_worker_process_5_0);
	MR_init_label2(make__util__reap_worker_process_5_0,2,3)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'reap_worker_process'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(make__util__reap_worker_process_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(libs__process_util__wait_pid_4_0,
		make__util__reap_worker_process_5_0_i2);
MR_def_label(make__util__reap_worker_process_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(make__util__reap_worker_process_5_0_i3);
	}
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(make__util__reap_worker_process_5_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(make__util__reap_worker_process_5_0_i3);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(make__util__reap_worker_process_5_0_i3);
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
	}
MR_def_label(make__util__reap_worker_process_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make__util_module64)
	MR_init_entry1(fn__make__util__make_yes_job_ctl_1_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'make_yes_job_ctl'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__make__util__make_yes_job_ctl_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make__util_module65)
	MR_init_entry1(fn__make__util__make_no_job_ctl_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'make_no_job_ctl'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__make__util__make_no_job_ctl_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_4);

MR_BEGIN_MODULE(make__util_module66)
	MR_init_entry1(make__util__build_with_module_options_and_output_redirect_2_8_0);
	MR_init_label4(make__util__build_with_module_options_and_output_redirect_2_8_0,2,4,5,6)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'build_with_module_options_and_output_redirect_2'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(make__util__build_with_module_options_and_output_redirect_2_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r4;
	MR_np_call_localret_ent(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_100_105_114_101_99_116_95_111_117_116_112_117_116_95_95_91_49_93_95_48_6_0,
		make__util__build_with_module_options_and_output_redirect_2_8_0_i2);
MR_def_label(make__util__build_with_module_options_and_output_redirect_2_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(make__util__build_with_module_options_and_output_redirect_2_8_0_i4);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(make__util__build_with_module_options_and_output_redirect_2_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr2;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(make__util__build_with_module_options_and_output_redirect_2_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_4),
		mercury__make__util__build_with_module_options_and_output_redirect_2_8_0_i5);
MR_def_label(make__util__build_with_module_options_and_output_redirect_2_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(make__util__unredirect_output_6_0,
		make__util__build_with_module_options_and_output_redirect_2_8_0_i6);
MR_def_label(make__util__build_with_module_options_and_output_redirect_2_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_char_4_0);

MR_BEGIN_MODULE(make__util_module67)
	MR_init_entry1(make__util__make_write_error_char_7_0);
	MR_init_label8(make__util__make_write_error_char_7_0,2,4,3,10,11,12,13,8)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'make_write_error_char'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(make__util__make_write_error_char_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_char_4_0,
		make__util__make_write_error_char_7_0_i2);
MR_def_label(make__util__make_write_error_char_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_sv(4),0)) {
		MR_GOTO_LAB(make__util__make_write_error_char_7_0_i3);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(io__write_char_4_0,
		make__util__make_write_error_char_7_0_i4);
MR_def_label(make__util__make_write_error_char_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),10)) {
		MR_GOTO_LAB(make__util__make_write_error_char_7_0_i8);
	}
	MR_r1 = ((MR_Integer) MR_sv(4) - (MR_Integer) 1);
	MR_decr_sp_and_return(5);
MR_def_label(make__util__make_write_error_char_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(make__util__make_write_error_char_7_0_i8);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__output_stream_name_4_0,
		make__util__make_write_error_char_7_0_i10);
MR_def_label(make__util__make_write_error_char_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("... error log truncated, see \140", 30);
	MR_np_call_localret_ent(io__write_string_4_0,
		make__util__make_write_error_char_7_0_i11);
MR_def_label(make__util__make_write_error_char_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_4_0,
		make__util__make_write_error_char_7_0_i12);
MR_def_label(make__util__make_write_error_char_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("\' for the complete log.\n", 24);
	MR_np_call_localret_ent(io__write_string_4_0,
		make__util__make_write_error_char_7_0_i13);
MR_def_label(make__util__make_write_error_char_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) -1;
	MR_decr_sp_and_return(5);
MR_def_label(make__util__make_write_error_char_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_unify_pred_2_0);

MR_BEGIN_MODULE(make__util_module68)
	MR_init_entry1(__Unify___make__util__build_1_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___make__util__build_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(private_builtin__builtin_unify_pred_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_pred_3_0);

MR_BEGIN_MODULE(make__util_module69)
	MR_init_entry1(__Compare___make__util__build_1_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___make__util__build_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(private_builtin__builtin_compare_pred_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make__util_module70)
	MR_init_entry1(__Unify___make__util__build_2_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___make__util__build_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_np_tailcall_ent(private_builtin__builtin_unify_pred_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make__util_module71)
	MR_init_entry1(__Compare___make__util__build_2_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___make__util__build_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_np_tailcall_ent(private_builtin__builtin_compare_pred_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make__util_module72)
	MR_init_entry1(__Unify___make__util__build_3_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___make__util__build_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_np_tailcall_ent(private_builtin__builtin_unify_pred_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make__util_module73)
	MR_init_entry1(__Compare___make__util__build_3_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___make__util__build_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_np_tailcall_ent(private_builtin__builtin_compare_pred_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make__util_module74)
	MR_init_entry1(__Unify___make__util__build2_2_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___make__util__build2_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_np_tailcall_ent(private_builtin__builtin_unify_pred_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make__util_module75)
	MR_init_entry1(__Compare___make__util__build2_2_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___make__util__build2_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_np_tailcall_ent(private_builtin__builtin_compare_pred_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make__util_module76)
	MR_init_entry1(__Unify___make__util__foldl2_pred_with_status_3_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___make__util__foldl2_pred_with_status_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_np_tailcall_ent(private_builtin__builtin_unify_pred_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make__util_module77)
	MR_init_entry1(__Compare___make__util__foldl2_pred_with_status_3_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___make__util__foldl2_pred_with_status_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_np_tailcall_ent(private_builtin__builtin_compare_pred_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make__util_module78)
	MR_init_entry1(__Unify___make__util__foldl3_pred_with_status_4_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___make__util__foldl3_pred_with_status_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_r2 = MR_r6;
	MR_np_tailcall_ent(private_builtin__builtin_unify_pred_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make__util_module79)
	MR_init_entry1(__Compare___make__util__foldl3_pred_with_status_4_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___make__util__foldl3_pred_with_status_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_r2 = MR_r6;
	MR_np_tailcall_ent(private_builtin__builtin_compare_pred_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___builtin__c_pointer_0_0);

MR_BEGIN_MODULE(make__util_module80)
	MR_init_entry1(__Unify___make__util__job_ctl_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___make__util__job_ctl_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___builtin__c_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___builtin__c_pointer_0_0);

MR_BEGIN_MODULE(make__util_module81)
	MR_init_entry1(__Compare___make__util__job_ctl_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___make__util__job_ctl_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Compare___builtin__c_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make__util_module82)
	MR_init_entry1(fn__make__util__IntroducedFrom__func__make_target_file_list__1335__1_2_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__make_target_file_list__1335__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__make__util__IntroducedFrom__func__make_target_file_list__1335__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make__util_module83)
	MR_init_entry1(fn__make__util__IntroducedFrom__func__make_dependency_list__1339__1_2_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__make_dependency_list__1339__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__make__util__IntroducedFrom__func__make_dependency_list__1339__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make__util_module84)
	MR_init_entry1(make__util__IntroducedFrom__pred__maybe_symlink_or_copy_linked_target_message__1710__1_3_0);
	MR_init_label7(make__util__IntroducedFrom__pred__maybe_symlink_or_copy_linked_target_message__1710__1_3_0,2,9,11,4,5,6,3)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__maybe_symlink_or_copy_linked_target_message__1710__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(make__util__IntroducedFrom__pred__maybe_symlink_or_copy_linked_target_message__1710__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Made symlink/copy of ", 21);
	MR_np_call_localret_ent(io__write_string_3_0,
		make__util__IntroducedFrom__pred__maybe_symlink_or_copy_linked_target_message__1710__1_3_0_i2);
MR_def_label(make__util__IntroducedFrom__pred__maybe_symlink_or_copy_linked_target_message__1710__1_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_ctfield(0, MR_sv(1), 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r4);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(make__util__IntroducedFrom__pred__maybe_symlink_or_copy_linked_target_message__1710__1_3_0_i4);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(make__util__IntroducedFrom__pred__maybe_symlink_or_copy_linked_target_message__1710__1_3_0_i9);
	}
	MR_r1 = (MR_Word) MR_string_const("make.util.m", 11);
	MR_r2 = (MR_Word) MR_string_const("maybe_warn_up_to_date_target: misc_target", 41);
	}
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		make__util__IntroducedFrom__pred__maybe_symlink_or_copy_linked_target_message__1710__1_3_0_i3);
MR_def_label(make__util__IntroducedFrom__pred__maybe_symlink_or_copy_linked_target_message__1710__1_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_sv(1), 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_r4, 0);
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_r3 = (MR_Word) MR_string_const("", 0);
	}
	MR_np_call_localret_ent(make__util__make_write_target_file_wrapped_5_0,
		make__util__IntroducedFrom__pred__maybe_symlink_or_copy_linked_target_message__1710__1_3_0_i11);
MR_def_label(make__util__IntroducedFrom__pred__maybe_symlink_or_copy_linked_target_message__1710__1_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(make__util__IntroducedFrom__pred__maybe_symlink_or_copy_linked_target_message__1710__1_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_sv(1), 0);
	MR_r2 = MR_ctfield(1, MR_r4, 0);
	MR_np_call_localret_ent(make__util__linked_target_file_name_5_0,
		make__util__IntroducedFrom__pred__maybe_symlink_or_copy_linked_target_message__1710__1_3_0_i5);
MR_def_label(make__util__IntroducedFrom__pred__maybe_symlink_or_copy_linked_target_message__1710__1_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		make__util__IntroducedFrom__pred__maybe_symlink_or_copy_linked_target_message__1710__1_3_0_i6);
MR_def_label(make__util__IntroducedFrom__pred__maybe_symlink_or_copy_linked_target_message__1710__1_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
MR_def_label(make__util__IntroducedFrom__pred__maybe_symlink_or_copy_linked_target_message__1710__1_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__make_temp_3_0);
MR_decl_entry(io__error_message_2_0);

MR_BEGIN_MODULE(make__util_module85)
	MR_init_entry1(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_100_105_114_101_99_116_95_111_117_116_112_117_116_95_95_91_49_93_95_48_6_0);
	MR_init_label8(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_100_105_114_101_99_116_95_111_117_116_112_117_116_95_95_91_49_93_95_48_6_0,2,3,6,7,8,9,10,11)
	MR_init_label1(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_100_105_114_101_99_116_95_111_117_116_112_117_116_95_95_91_49_93_95_48_6_0,5)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__redirect_output__[1]_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_100_105_114_101_99_116_95_111_117_116_112_117_116_95_95_91_49_93_95_48_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(io__make_temp_3_0,
		f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_100_105_114_101_99_116_95_111_117_116_112_117_116_95_95_91_49_93_95_48_6_0_i2);
MR_def_label(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_100_105_114_101_99_116_95_111_117_116_112_117_116_95_95_91_49_93_95_48_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(io__open_output_4_0,
		f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_100_105_114_101_99_116_95_111_117_116_112_117_116_95_95_91_49_93_95_48_6_0_i3);
MR_def_label(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_100_105_114_101_99_116_95_111_117_116_112_117_116_95_95_91_49_93_95_48_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_100_105_114_101_99_116_95_111_117_116_112_117_116_95_95_91_49_93_95_48_6_0_i5);
	}
	MR_sv(2) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = (MR_Word) MR_string_const("** Error opening \140", 18);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_100_105_114_101_99_116_95_111_117_116_112_117_116_95_95_91_49_93_95_48_6_0_i6);
MR_def_label(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_100_105_114_101_99_116_95_111_117_116_112_117_116_95_95_91_49_93_95_48_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_100_105_114_101_99_116_95_111_117_116_112_117_116_95_95_91_49_93_95_48_6_0_i7);
MR_def_label(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_100_105_114_101_99_116_95_111_117_116_112_117_116_95_95_91_49_93_95_48_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\' for output: ", 14);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_100_105_114_101_99_116_95_111_117_116_112_117_116_95_95_91_49_93_95_48_6_0_i8);
MR_def_label(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_100_105_114_101_99_116_95_111_117_116_112_117_116_95_95_91_49_93_95_48_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__error_message_2_0,
		f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_100_105_114_101_99_116_95_111_117_116_112_117_116_95_95_91_49_93_95_48_6_0_i9);
MR_def_label(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_100_105_114_101_99_116_95_111_117_116_112_117_116_95_95_91_49_93_95_48_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_100_105_114_101_99_116_95_111_117_116_112_117_116_95_95_91_49_93_95_48_6_0_i10);
MR_def_label(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_100_105_114_101_99_116_95_111_117_116_112_117_116_95_95_91_49_93_95_48_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_100_105_114_101_99_116_95_111_117_116_112_117_116_95_95_91_49_93_95_48_6_0_i11);
MR_def_label(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_100_105_114_101_99_116_95_111_117_116_112_117_116_95_95_91_49_93_95_48_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(4);
MR_def_label(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_100_105_114_101_99_116_95_111_117_116_112_117_116_95_95_91_49_93_95_48_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__bool__and_2_0);

MR_BEGIN_MODULE(make__util_module86)
	MR_init_entry1(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_50_95_95_91_49_44_32_50_44_32_51_93_95_48_9_0);
	MR_init_label6(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_50_95_95_91_49_44_32_50_44_32_51_93_95_48_9_0,27,3,4,8,11,6)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__foldl2_maybe_stop_at_error_2__[1, 2, 3]_0'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_50_95_95_91_49_44_32_50_44_32_51_93_95_48_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_50_95_95_91_49_44_32_50_44_32_51_93_95_48_9_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_50_95_95_91_49_44_32_50_44_32_51_93_95_48_9_0_i3);
	}
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_r3 = MR_r6;
	MR_decr_sp_and_return(6);
MR_def_label(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_50_95_95_91_49_44_32_50_44_32_51_93_95_48_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r4;
	MR_tempr2 = MR_r3;
	MR_sv(4) = MR_ctfield(1, MR_tempr2, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_ctfield(1, MR_tempr2, 0);
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_50_95_95_91_49_44_32_50_44_32_51_93_95_48_9_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_50_95_95_91_49_44_32_50_44_32_51_93_95_48_9_0_i4);
MR_def_label(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_50_95_95_91_49_44_32_50_44_32_51_93_95_48_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_50_95_95_91_49_44_32_50_44_32_51_93_95_48_9_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_sv(3) = MR_tempr2;
	MR_sv(5) = MR_r3;
	}
	MR_np_call_localret_ent(fn__bool__and_2_0,
		f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_50_95_95_91_49_44_32_50_44_32_51_93_95_48_9_0_i11);
MR_def_label(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_50_95_95_91_49_44_32_50_44_32_51_93_95_48_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_50_95_95_91_49_44_32_50_44_32_51_93_95_48_9_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_sv(3) = MR_tempr2;
	MR_sv(5) = MR_r3;
	}
	MR_np_call_localret_ent(fn__bool__and_2_0,
		f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_50_95_95_91_49_44_32_50_44_32_51_93_95_48_9_0_i11);
MR_def_label(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_50_95_95_91_49_44_32_50_44_32_51_93_95_48_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_50_95_95_91_49_44_32_50_44_32_51_93_95_48_9_0_i27);
	}
MR_def_label(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_50_95_95_91_49_44_32_50_44_32_51_93_95_48_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make__util_module87)
	MR_init_entry1(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_50_95_95_91_49_44_32_50_44_32_51_44_32_52_93_95_48_11_0);
	MR_init_label6(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_50_95_95_91_49_44_32_50_44_32_51_44_32_52_93_95_48_11_0,27,3,4,8,11,6)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__foldl3_maybe_stop_at_error_2__[1, 2, 3, 4]_0'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_50_95_95_91_49_44_32_50_44_32_51_44_32_52_93_95_48_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_50_95_95_91_49_44_32_50_44_32_51_44_32_52_93_95_48_11_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_50_95_95_91_49_44_32_50_44_32_51_44_32_52_93_95_48_11_0_i3);
	}
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_r3 = MR_r6;
	MR_r4 = MR_r7;
	MR_decr_sp_and_return(7);
MR_def_label(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_50_95_95_91_49_44_32_50_44_32_51_44_32_52_93_95_48_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r4;
	MR_tempr2 = MR_r3;
	MR_sv(4) = MR_ctfield(1, MR_tempr2, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_ctfield(1, MR_tempr2, 0);
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_50_95_95_91_49_44_32_50_44_32_51_44_32_52_93_95_48_11_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_4),
		mercury__f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_50_95_95_91_49_44_32_50_44_32_51_44_32_52_93_95_48_11_0_i4);
MR_def_label(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_50_95_95_91_49_44_32_50_44_32_51_44_32_52_93_95_48_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_50_95_95_91_49_44_32_50_44_32_51_44_32_52_93_95_48_11_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_sv(3) = MR_tempr2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	}
	MR_np_call_localret_ent(fn__bool__and_2_0,
		f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_50_95_95_91_49_44_32_50_44_32_51_44_32_52_93_95_48_11_0_i11);
MR_def_label(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_50_95_95_91_49_44_32_50_44_32_51_44_32_52_93_95_48_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_50_95_95_91_49_44_32_50_44_32_51_44_32_52_93_95_48_11_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_sv(3) = MR_tempr2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	}
	MR_np_call_localret_ent(fn__bool__and_2_0,
		f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_50_95_95_91_49_44_32_50_44_32_51_44_32_52_93_95_48_11_0_i11);
MR_def_label(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_50_95_95_91_49_44_32_50_44_32_51_44_32_52_93_95_48_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_50_95_95_91_49_44_32_50_44_32_51_44_32_52_93_95_48_11_0_i27);
	}
MR_def_label(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_50_95_95_91_49_44_32_50_44_32_51_44_32_52_93_95_48_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__process_util__start_in_forked_process_4_0);

MR_BEGIN_MODULE(make__util_module88)
	MR_init_entry1(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_95_119_111_114_107_101_114_95_112_114_111_99_101_115_115_95_95_91_56_93_95_48_10_0);
	MR_init_label2(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_95_119_111_114_107_101_114_95_112_114_111_99_101_115_115_95_95_91_56_93_95_48_10_0,3,5)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__start_worker_process__[8]_0'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_95_119_111_114_107_101_114_95_112_114_111_99_101_115_115_95_95_91_56_93_95_48_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 10);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(17,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(make__util__child_worker_8_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 7;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_tfield(0, MR_tempr1, 5) = MR_r3;
	MR_tfield(0, MR_tempr1, 6) = MR_r4;
	MR_tfield(0, MR_tempr1, 7) = MR_r5;
	MR_tfield(0, MR_tempr1, 8) = MR_r6;
	MR_tfield(0, MR_tempr1, 9) = MR_r7;
	MR_sv(1) = MR_r8;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__process_util__start_in_forked_process_4_0,
		f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_95_119_111_114_107_101_114_95_112_114_111_99_101_115_115_95_95_91_56_93_95_48_10_0_i3);
MR_def_label(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_95_119_111_114_107_101_114_95_112_114_111_99_101_115_115_95_95_91_56_93_95_48_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_95_119_111_114_107_101_114_95_112_114_111_99_101_115_115_95_95_91_56_93_95_48_10_0_i5);
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
MR_def_label(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_95_119_111_114_107_101_114_95_112_114_111_99_101_115_115_95_95_91_56_93_95_48_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make__util_module89)
	MR_init_entry1(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_97_114_103_115_95_105_110_118_111_107_101_100_95_95_91_49_44_32_50_93_95_48_11_0);
	MR_init_label8(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_97_114_103_115_95_105_110_118_111_107_101_100_95_95_91_49_44_32_50_93_95_48_11_0,2,28,4,5,7,20,21,24)
	MR_init_label2(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_97_114_103_115_95_105_110_118_111_107_101_100_95_95_91_49_44_32_50_93_95_48_11_0,26,23)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__build_with_module_options_args_invoked__[1, 2]_0'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_97_114_103_115_95_105_110_118_111_107_101_100_95_95_91_49_44_32_50_93_95_48_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r7;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(make__options_file__lookup_mmc_module_options_5_0,
		f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_97_114_103_115_95_105_110_118_111_107_101_100_95_95_91_49_44_32_50_93_95_48_11_0_i2);
MR_def_label(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_97_114_103_115_95_105_110_118_111_107_101_100_95_95_91_49_44_32_50_93_95_48_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_97_114_103_115_95_105_110_118_111_107_101_100_95_95_91_49_44_32_50_93_95_48_11_0_i4);
	}
MR_def_label(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_97_114_103_115_95_105_110_118_111_107_101_100_95_95_91_49_44_32_50_93_95_48_11_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(7);
MR_def_label(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_97_114_103_115_95_105_110_118_111_107_101_100_95_95_91_49_44_32_50_93_95_48_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(libs__globals__io_get_globals_3_0,
		f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_97_114_103_115_95_105_110_118_111_107_101_100_95_95_91_49_44_32_50_93_95_48_11_0_i5);
MR_def_label(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_97_114_103_115_95_105_110_118_111_107_101_100_95_95_91_49_44_32_50_93_95_48_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_97_114_103_115_95_105_110_118_111_107_101_100_95_95_91_49_44_32_50_93_95_48_11_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,2,2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(1) = MR_r1;
	MR_r2 = MR_tempr2;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	}
	MR_np_call_localret_ent(fn__list__condense_1_0,
		f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_97_114_103_115_95_105_110_118_111_107_101_100_95_95_91_49_44_32_50_93_95_48_11_0_i20);
MR_def_label(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_97_114_103_115_95_105_110_118_111_107_101_100_95_95_91_49_44_32_50_93_95_48_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,2,5);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(1,18,1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(1) = MR_r1;
	MR_r2 = MR_tempr2;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	}
	MR_np_call_localret_ent(fn__list__condense_1_0,
		f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_97_114_103_115_95_105_110_118_111_107_101_100_95_95_91_49_44_32_50_93_95_48_11_0_i20);
MR_def_label(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_97_114_103_115_95_105_110_118_111_107_101_100_95_95_91_49_44_32_50_93_95_48_11_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(libs__handle_options__handle_options_7_0,
		f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_97_114_103_115_95_105_110_118_111_107_101_100_95_95_91_49_44_32_50_93_95_48_11_0_i21);
MR_def_label(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_97_114_103_115_95_105_110_118_111_107_101_100_95_95_91_49_44_32_50_93_95_48_11_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_97_114_103_115_95_105_110_118_111_107_101_100_95_95_91_49_44_32_50_93_95_48_11_0_i23);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_97_114_103_115_95_105_110_118_111_107_101_100_95_95_91_49_44_32_50_93_95_48_11_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_97_114_103_115_95_105_110_118_111_107_101_100_95_95_91_49_44_32_50_93_95_48_11_0_i24);
MR_def_label(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_97_114_103_115_95_105_110_118_111_107_101_100_95_95_91_49_44_32_50_93_95_48_11_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(2), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(2), 0) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__io_set_globals_3_0,
		f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_97_114_103_115_95_105_110_118_111_107_101_100_95_95_91_49_44_32_50_93_95_48_11_0_i26);
MR_def_label(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_97_114_103_115_95_105_110_118_111_107_101_100_95_95_91_49_44_32_50_93_95_48_11_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(7);
MR_def_label(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_97_114_103_115_95_105_110_118_111_107_101_100_95_95_91_49_44_32_50_93_95_48_11_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__handle_options__usage_errors_3_0,
		f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_97_114_103_115_95_105_110_118_111_107_101_100_95_95_91_49_44_32_50_93_95_48_11_0_i28);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(make__util_module90)
	MR_init_entry1(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_97_114_103_115_95_105_110_118_111_107_101_100_95_95_104_111_57_95_95_91_56_93_95_48_11_0);
	MR_init_label8(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_97_114_103_115_95_105_110_118_111_107_101_100_95_95_104_111_57_95_95_91_56_93_95_48_11_0,2,28,4,5,7,20,21,24)
	MR_init_label2(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_97_114_103_115_95_105_110_118_111_107_101_100_95_95_104_111_57_95_95_91_56_93_95_48_11_0,26,23)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__build_with_module_options_args_invoked__ho9__[8]_0'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_97_114_103_115_95_105_110_118_111_107_101_100_95_95_104_111_57_95_95_91_56_93_95_48_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_r8;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r1;
	MR_r1 = MR_r5;
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(make__options_file__lookup_mmc_module_options_5_0,
		f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_97_114_103_115_95_105_110_118_111_107_101_100_95_95_104_111_57_95_95_91_56_93_95_48_11_0_i2);
MR_def_label(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_97_114_103_115_95_105_110_118_111_107_101_100_95_95_104_111_57_95_95_91_56_93_95_48_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_97_114_103_115_95_105_110_118_111_107_101_100_95_95_104_111_57_95_95_91_56_93_95_48_11_0_i4);
	}
MR_def_label(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_97_114_103_115_95_105_110_118_111_107_101_100_95_95_104_111_57_95_95_91_56_93_95_48_11_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(8);
MR_def_label(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_97_114_103_115_95_105_110_118_111_107_101_100_95_95_104_111_57_95_95_91_56_93_95_48_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(libs__globals__io_get_globals_3_0,
		f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_97_114_103_115_95_105_110_118_111_107_101_100_95_95_104_111_57_95_95_91_56_93_95_48_11_0_i5);
MR_def_label(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_97_114_103_115_95_105_110_118_111_107_101_100_95_95_104_111_57_95_95_91_56_93_95_48_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_97_114_103_115_95_105_110_118_111_107_101_100_95_95_104_111_57_95_95_91_56_93_95_48_11_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,2,2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(1) = MR_r1;
	MR_r2 = MR_tempr2;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	}
	MR_np_call_localret_ent(fn__list__condense_1_0,
		f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_97_114_103_115_95_105_110_118_111_107_101_100_95_95_104_111_57_95_95_91_56_93_95_48_11_0_i20);
MR_def_label(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_97_114_103_115_95_105_110_118_111_107_101_100_95_95_104_111_57_95_95_91_56_93_95_48_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,2,5);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(1,18,1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(1) = MR_r1;
	MR_r2 = MR_tempr2;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	}
	MR_np_call_localret_ent(fn__list__condense_1_0,
		f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_97_114_103_115_95_105_110_118_111_107_101_100_95_95_104_111_57_95_95_91_56_93_95_48_11_0_i20);
MR_def_label(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_97_114_103_115_95_105_110_118_111_107_101_100_95_95_104_111_57_95_95_91_56_93_95_48_11_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(libs__handle_options__handle_options_7_0,
		f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_97_114_103_115_95_105_110_118_111_107_101_100_95_95_104_111_57_95_95_91_56_93_95_48_11_0_i21);
MR_def_label(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_97_114_103_115_95_105_110_118_111_107_101_100_95_95_104_111_57_95_95_91_56_93_95_48_11_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_97_114_103_115_95_105_110_118_111_107_101_100_95_95_104_111_57_95_95_91_56_93_95_48_11_0_i23);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(make__util__build_with_module_options_and_output_redirect_2_8_0,
		f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_97_114_103_115_95_105_110_118_111_107_101_100_95_95_104_111_57_95_95_91_56_93_95_48_11_0_i24);
MR_def_label(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_97_114_103_115_95_105_110_118_111_107_101_100_95_95_104_111_57_95_95_91_56_93_95_48_11_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(2), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(2), 0) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__io_set_globals_3_0,
		f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_97_114_103_115_95_105_110_118_111_107_101_100_95_95_104_111_57_95_95_91_56_93_95_48_11_0_i26);
MR_def_label(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_97_114_103_115_95_105_110_118_111_107_101_100_95_95_104_111_57_95_95_91_56_93_95_48_11_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(8);
MR_def_label(f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_97_114_103_115_95_105_110_118_111_107_101_100_95_95_104_111_57_95_95_91_56_93_95_48_11_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__handle_options__usage_errors_3_0,
		f_109_97_107_101_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_97_114_103_115_95_105_110_118_111_107_101_100_95_95_104_111_57_95_95_91_56_93_95_48_11_0_i28);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE
#line 598 "make.util.m"


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

#line 8163 "make.util.c"

MR_declare_static(mercury__fn__make__util__make_no_job_ctl_0_0);

MR_Word
MC_make_no_job_ctl(void);

MR_Word
MC_make_no_job_ctl(void)
{
#if MR_NUM_REAL_REGS > 0
	MR_Word c_regs[MR_NUM_REAL_REGS];
#endif
#if MR_THREAD_SAFE
	MR_bool must_finalize_engine;
#endif
#if MR_DEEP_PROFILING
	MR_CallSiteDynList **saved_cur_callback;
	MR_CallSiteDynamic *saved_cur_csd;
#endif
	MR_Word return_value;

	MR_save_regs_to_mem(c_regs);
#if MR_THREAD_SAFE
	must_finalize_engine = MR_init_thread(MR_use_now);
#endif
#if MR_DEEP_PROFILING
	saved_cur_callback = MR_current_callback_site;
	saved_cur_csd = MR_current_call_site_dynamic;
	MR_setup_callback(MR_ENTRY(mercury__fn__make__util__make_no_job_ctl_0_0));
#endif
	MR_restore_registers();
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__fn__make__util__make_no_job_ctl_0_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	return_value = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
	return return_value;
}


MR_declare_static(mercury__fn__make__util__make_yes_job_ctl_1_0);

MR_Word
MC_make_yes_job_ctl(MC_JobCtl * Mercury__argument1);

MR_Word
MC_make_yes_job_ctl(MC_JobCtl * Mercury__argument1)
{
#if MR_NUM_REAL_REGS > 0
	MR_Word c_regs[MR_NUM_REAL_REGS];
#endif
#if MR_THREAD_SAFE
	MR_bool must_finalize_engine;
#endif
#if MR_DEEP_PROFILING
	MR_CallSiteDynList **saved_cur_callback;
	MR_CallSiteDynamic *saved_cur_csd;
#endif
	MR_Word return_value;

	MR_save_regs_to_mem(c_regs);
#if MR_THREAD_SAFE
	must_finalize_engine = MR_init_thread(MR_use_now);
#endif
#if MR_DEEP_PROFILING
	saved_cur_callback = MR_current_callback_site;
	saved_cur_csd = MR_current_call_site_dynamic;
	MR_setup_callback(MR_ENTRY(mercury__fn__make__util__make_yes_job_ctl_1_0));
#endif
	MR_restore_registers();
	MR_MAYBE_BOX_FOREIGN_TYPE(MC_JobCtl *, Mercury__argument1, MR_r1);
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__fn__make__util__make_yes_job_ctl_1_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	return_value = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
	return return_value;
}


static void mercury__make__util_maybe_bunch_0(void)
{
	make__util_module0();
	make__util_module1();
	make__util_module2();
	make__util_module3();
	make__util_module4();
	make__util_module5();
	make__util_module6();
	make__util_module7();
	make__util_module8();
	make__util_module9();
	make__util_module10();
	make__util_module11();
	make__util_module12();
	make__util_module13();
	make__util_module14();
	make__util_module15();
	make__util_module16();
	make__util_module17();
	make__util_module18();
	make__util_module19();
	make__util_module20();
	make__util_module21();
	make__util_module22();
	make__util_module23();
	make__util_module24();
	make__util_module25();
	make__util_module26();
	make__util_module27();
	make__util_module28();
	make__util_module29();
	make__util_module30();
	make__util_module31();
	make__util_module32();
	make__util_module33();
	make__util_module34();
	make__util_module35();
	make__util_module36();
	make__util_module37();
	make__util_module38();
	make__util_module39();
}

static void mercury__make__util_maybe_bunch_1(void)
{
	make__util_module40();
	make__util_module41();
	make__util_module42();
	make__util_module43();
	make__util_module44();
	make__util_module45();
	make__util_module46();
	make__util_module47();
	make__util_module48();
	make__util_module49();
	make__util_module50();
	make__util_module51();
	make__util_module52();
	make__util_module53();
	make__util_module54();
	make__util_module55();
	make__util_module56();
	make__util_module57();
	make__util_module58();
	make__util_module59();
	make__util_module60();
	make__util_module61();
	make__util_module62();
	make__util_module63();
	make__util_module64();
	make__util_module65();
	make__util_module66();
	make__util_module67();
	make__util_module68();
	make__util_module69();
	make__util_module70();
	make__util_module71();
	make__util_module72();
	make__util_module73();
	make__util_module74();
	make__util_module75();
	make__util_module76();
	make__util_module77();
	make__util_module78();
	make__util_module79();
}

static void mercury__make__util_maybe_bunch_2(void)
{
	make__util_module80();
	make__util_module81();
	make__util_module82();
	make__util_module83();
	make__util_module84();
	make__util_module85();
	make__util_module86();
	make__util_module87();
	make__util_module88();
	make__util_module89();
	make__util_module90();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__make__util__init(void);
void mercury__make__util__init_type_tables(void);
void mercury__make__util__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__make__util__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__make__util__init_complexity_procs(void);
#endif

void mercury__make__util__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__make__util_maybe_bunch_0();
	mercury__make__util_maybe_bunch_1();
	mercury__make__util_maybe_bunch_2();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_make__util__type_ctor_info_build_3,
		make__util__build_3_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_make__util__type_ctor_info_build_2,
		make__util__build_2_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_make__util__type_ctor_info_build_1,
		make__util__build_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_make__util__type_ctor_info_build2_2,
		make__util__build2_2_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_make__util__type_ctor_info_foldl2_pred_with_status_3,
		make__util__foldl2_pred_with_status_3_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_make__util__type_ctor_info_foldl3_pred_with_status_4,
		make__util__foldl3_pred_with_status_4_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_make__util__type_ctor_info_job_ctl_0,
		make__util__job_ctl_0_0);
	mercury__make__util__init_debugger();
}

void mercury__make__util__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_make__util__type_ctor_info_build_3);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_make__util__type_ctor_info_build_2);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_make__util__type_ctor_info_build_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_make__util__type_ctor_info_build2_2);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_make__util__type_ctor_info_foldl2_pred_with_status_3);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_make__util__type_ctor_info_foldl3_pred_with_status_4);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_make__util__type_ctor_info_job_ctl_0);
	}
}


void mercury__make__util__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__make__util__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__make__util);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__make__util__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
