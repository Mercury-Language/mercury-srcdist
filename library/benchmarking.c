/*
** Automatically generated from `benchmarking.m'
** by the Mercury compiler,
** version rotd-2014-12-18
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


/* :- module benchmarking. */
/* :- implementation. */

/*
INIT mercury__benchmarking__init
ENDINIT
*/

#include "benchmarking.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "dir.mih"
#include "enum.mih"
#include "erlang_rtti_implementation.mih"
#include "exception.mih"
#include "float.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "lexer.mih"
#include "list.mih"
#include "map.mih"
#include "math.mih"
#include "maybe.mih"
#include "mutvar.mih"
#include "ops.mih"
#include "pair.mih"
#include "parser.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "solutions.mih"
#include "std_util.mih"
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "table_builtin.mih"
#include "term.mih"
#include "term_io.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "stream.string_writer.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"



#line 1132 "benchmarking.m"

#include "mercury_prof.h"
#include "mercury_heap_profile.h"


#line 88 "benchmarking.m"
struct mercury__benchmarking__benchmark_nondet_5_p_0_env_0_s {
#line 88 "benchmarking.m"
  MR_Word mercury__benchmarking__benchmark_nondet_5_p_0_env_0__Pred_6;
#line 88 "benchmarking.m"
  MR_Box mercury__benchmarking__benchmark_nondet_5_p_0_env_0__In_7;
#line 88 "benchmarking.m"
  MR_Integer * mercury__benchmarking__benchmark_nondet_5_p_0_env_0__Count_8;
#line 88 "benchmarking.m"
  MR_Integer mercury__benchmarking__benchmark_nondet_5_p_0_env_0__Repeats_9;
#line 949 "benchmarking.m"
  MR_bool mercury__benchmarking__benchmark_nondet_5_p_0_env_0__succeeded;
#line 949 "benchmarking.m"
  MR_Word mercury__benchmarking__benchmark_nondet_5_p_0_env_0__TypeCtorInfo_17_27;
#line 949 "benchmarking.m"
  MR_Word mercury__benchmarking__benchmark_nondet_5_p_0_env_0__SolutionCounter_21;
#line 962 "benchmarking.m"
  jmp_buf mercury__benchmarking__benchmark_nondet_5_p_0_env_0__commit_0;
#line 962 "benchmarking.m"
  MR_Box mercury__benchmarking__benchmark_nondet_5_p_0_env_0__Out0_22;
#line 962 "benchmarking.m"
  MR_Integer mercury__benchmarking__benchmark_nondet_5_p_0_env_0__V_24_24;
#line 962 "benchmarking.m"
  MR_Integer mercury__benchmarking__benchmark_nondet_5_p_0_env_0__V_25_25;
#line 962 "benchmarking.m"
  MR_Integer mercury__benchmarking__benchmark_nondet_5_p_0_env_0__V_26_26;
#line 88 "benchmarking.m"
};


#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__benchmarking__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 1042 "benchmarking.m"
static void MR_CALL 
mercury__benchmarking__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_110_111_116_104_105_110_103_95_95_91_49_93_95_48_1_p_0(
#line 1042 "benchmarking.m"
  MR_Box mercury__benchmarking__HeadVar__1_1);

#line 932 "benchmarking.m"
static void MR_CALL 
mercury__benchmarking__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_100_101_116_95_108_111_111_112_95_105_111_95_95_91_49_44_32_50_44_32_51_93_95_48_6_p_0(
#line 932 "benchmarking.m"
  MR_Word mercury__benchmarking__Pred_7,
#line 932 "benchmarking.m"
  MR_Box mercury__benchmarking__InA_8,
#line 932 "benchmarking.m"
  MR_Box * mercury__benchmarking__OutA_9,
#line 932 "benchmarking.m"
  MR_Box mercury__benchmarking__InB_10,
#line 932 "benchmarking.m"
  MR_Box * mercury__benchmarking__OutB_11,
#line 932 "benchmarking.m"
  MR_Integer mercury__benchmarking__Repeats_12);

#line 908 "benchmarking.m"
static void MR_CALL 
mercury__benchmarking__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_102_117_110_99_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_p_0(
#line 908 "benchmarking.m"
  MR_Word mercury__benchmarking__Func_5,
#line 908 "benchmarking.m"
  MR_Box mercury__benchmarking__In_6,
#line 908 "benchmarking.m"
  MR_Box * mercury__benchmarking__Out_7,
#line 908 "benchmarking.m"
  MR_Integer mercury__benchmarking__Repeats_8);

#line 885 "benchmarking.m"
static void MR_CALL 
mercury__benchmarking__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_100_101_116_95_108_111_111_112_95_95_91_49_44_32_50_93_95_49_4_p_1(
#line 885 "benchmarking.m"
  MR_Word mercury__benchmarking__Pred_5,
#line 885 "benchmarking.m"
  MR_Box mercury__benchmarking__In_6,
#line 885 "benchmarking.m"
  MR_Box * mercury__benchmarking__Out_7,
#line 885 "benchmarking.m"
  MR_Integer mercury__benchmarking__Repeats_8);

#line 884 "benchmarking.m"
static void MR_CALL 
mercury__benchmarking__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_100_101_116_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_p_0(
#line 884 "benchmarking.m"
  MR_Word mercury__benchmarking__Pred_5,
#line 884 "benchmarking.m"
  MR_Box mercury__benchmarking__In_6,
#line 884 "benchmarking.m"
  MR_Box * mercury__benchmarking__Out_7,
#line 884 "benchmarking.m"
  MR_Integer mercury__benchmarking__Repeats_8);

#line 1195 "benchmarking.m"
static void MR_CALL 
mercury__benchmarking__dump_trace_counts_to_4_p_0(
#line 1195 "benchmarking.m"
  MR_String mercury__benchmarking__FileName_1,
#line 1195 "benchmarking.m"
  MR_Integer * mercury__benchmarking__Result_2);

#line 1042 "benchmarking.m"
static void MR_CALL 
mercury__benchmarking__do_nothing_1_p_0(
#line 1042 "benchmarking.m"
  MR_Word mercury__benchmarking__TypeInfo_for_T_2,
#line 1042 "benchmarking.m"
  MR_Box mercury__benchmarking__HeadVar__1_1);

#line 980 "benchmarking.m"
static void MR_CALL 
mercury__benchmarking__get_user_cpu_milliseconds_1_p_0(
#line 980 "benchmarking.m"
  MR_Integer * mercury__benchmarking__Time_1);

#line 974 "benchmarking.m"
static void MR_CALL 
mercury__benchmarking__repeat_1_p_0(
#line 974 "benchmarking.m"
  MR_Integer mercury__benchmarking__N_2,
#line 974 "benchmarking.m"
  MR_Cont mercury__benchmarking__cont,
#line 974 "benchmarking.m"
  void * mercury__benchmarking__cont_env_ptr);

#line 962 "benchmarking.m"
static void MR_CALL 
mercury__benchmarking__benchmark_nondet_5_p_0_1(
#line 962 "benchmarking.m"
  void * mercury__benchmarking__env_ptr_arg);

#line 962 "benchmarking.m"
static void MR_CALL 
mercury__benchmarking__benchmark_nondet_5_p_0_3(
#line 962 "benchmarking.m"
  void * mercury__benchmarking__env_ptr_arg);

#line 962 "benchmarking.m"
static void MR_CALL 
mercury__benchmarking__benchmark_nondet_5_p_0_2(
#line 962 "benchmarking.m"
  void * mercury__benchmarking__env_ptr_arg);

#line 962 "benchmarking.m"
static void MR_CALL 
mercury__benchmarking__benchmark_nondet_5_p_0_4(
#line 962 "benchmarking.m"
  void * mercury__benchmarking__env_ptr_arg);


static /* final */ const MR_Box mercury__benchmarking_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__benchmarking_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__benchmarking_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__benchmarking_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__benchmarking_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__benchmarking_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__benchmarking_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__benchmarking_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__benchmarking_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "benchmarking.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "builtin.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "int.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "bitmap.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "char.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "float.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "rtti_implementation.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "construct.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "version_array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "type_desc.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "exception.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "store.mh"
#include "store.mh"
#include "store.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "math.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "pretty_printer.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "version_array.mh"
#include "version_array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "dir.mh"
#include "dir.mh"
#include "table_builtin.mh"
#include "table_builtin.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "dir.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "table_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "time.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "private_builtin.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "version_array.mh"
#include "version_array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "dir.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "table_builtin.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "time.mh"
#include "version_array.mh"
#include "version_array.mh"
#line 245 "benchmarking.m"


#include <stdio.h>
#include <stdlib.h>
#include "mercury_prof_mem.h"
#include "mercury_heap_profile.h"
#include "mercury_wrapper.h"      /* for MR_user_time_at_last_stat */

#ifdef MR_MPROF_PROFILE_MEMORY

  #define MEMORY_PROFILE_SIZE   10  /* Profile the top 10 entries */

  #define MAX_REPORT_LINES  10  /* Display the top 10 entries */

  /* local types */

  typedef struct ML_memprof_float_counter
  {
    double      cells_at_period_end;
    double      words_at_period_end;
    double      cells_since_period_start;
    double      words_since_period_start;
  } ML_memprof_float_counter;

  typedef struct    ML_memprof_report_entry
  {
    const char                  *name;
    ML_memprof_float_counter    counter;
  } ML_memprof_report_entry;

  /* static variables */

  static ML_memprof_float_counter   ML_overall_counter;

  /* local function declarations */

  static    void    ML_update_counter(MR_memprof_counter *counter,
                        ML_memprof_float_counter *float_counter);

  static    int     ML_insert_into_table(const ML_memprof_report_entry
                        *new_entry, ML_memprof_report_entry *table,
                        int table_size, int next_slot);

  static    int     ML_memory_profile_top_table(MR_memprof_record *node,
                        ML_memprof_report_entry *table,
                        int size, int next_slot);

  static    int     ML_memory_profile_fill_table(MR_memprof_record *node,
                        ML_memprof_report_entry *table, int next_slot);

  static    void    ML_memory_profile_report(const ML_memprof_report_entry *,
                        int num_entries, MR_bool complete);

  static    int     ML_memory_profile_compare_final(const void *i1,
                        const void *i2);

#endif /* MR_MPROF_PROFILE_MEMORY */

void
ML_report_stats(void)
{
    int                 user_time_at_prev_stat;
    int                 real_time_at_prev_stat;
#if !defined(MR_HIGHLEVEL_CODE) || !defined(MR_CONSERVATIVE_GC)
    MercuryEngine       *eng;
#endif
#ifdef MR_MPROF_PROFILE_MEMORY
    int                 num_table_entries;
    ML_memprof_report_entry table[MEMORY_PROFILE_SIZE];
#endif

    /*
    ** Print timing and stack usage information
    */

    user_time_at_prev_stat = MR_user_time_at_last_stat;
    MR_user_time_at_last_stat = MR_get_user_cpu_milliseconds();

    real_time_at_prev_stat = MR_real_time_at_last_stat;
    MR_real_time_at_last_stat = MR_get_real_milliseconds();

#if !defined(MR_HIGHLEVEL_CODE) || !defined(MR_CONSERVATIVE_GC)
    eng = MR_get_engine();
#endif

    fprintf(stderr, "[User time: +%.3fs, %.3fs,",
        (MR_user_time_at_last_stat - user_time_at_prev_stat) / 1000.0,
        (MR_user_time_at_last_stat - MR_user_time_at_start) / 1000.0
    );

    fprintf(stderr, " Real time: +%.3fs, %.3fs,",
        (MR_real_time_at_last_stat - real_time_at_prev_stat) / 1000.0,
        (MR_real_time_at_last_stat - MR_real_time_at_start) / 1000.0
    );

#ifndef MR_HIGHLEVEL_CODE
    fprintf(stderr, " D Stack: %.3fk, ND Stack: %.3fk,",
        ((char *) MR_sp - (char *)
            eng->MR_eng_context.MR_ctxt_detstack_zone->MR_zone_min) / 1024.0,
        ((char *) MR_maxfr - (char *)
            eng->MR_eng_context.MR_ctxt_nondetstack_zone->MR_zone_min) / 1024.0
    );
#endif

#ifdef MR_BOEHM_GC
    {
        char local_var;

        fprintf(stderr, " C Stack: %.3fk,",
            labs(&local_var - (char *) GC_stackbottom) / 1024.0);
    }
#endif

#ifdef MR_USE_TRAIL
    #ifdef MR_THREAD_SAFE
        fprintf(stderr, ", Trail: %.3fk,",
            ((char *) MR_trail_ptr - 
            (char *) MR_CONTEXT(MR_ctxt_trail_zone)->MR_zone_min) / 1024.0
        );
    #else
        fprintf(stderr, " Trail: %.3fk,",
            ((char *) MR_trail_ptr - 
            (char *) MR_trail_zone->MR_zone_min) / 1024.0
        );
   #endif /* !MR_THREAD_SAFE */     
#endif /* !MR_USE_TRAIL */

    /*
    ** Print heap usage information.
    */

#ifdef MR_CONSERVATIVE_GC
  #ifdef MR_BOEHM_GC
    fprintf(stderr, "\n#GCs: %lu, ",
        (unsigned long) GC_gc_no);
    if (GC_mercury_calc_gc_time) {
        /* convert from unsigned long milliseconds to float seconds */
        fprintf(stderr, "total GC time: %.2fs, ",
            (float) GC_total_gc_time / (float) 1000);
    }
    fprintf(stderr, "Heap used since last GC: %.3fk, Total used: %.3fk",
        GC_get_bytes_since_gc() / 1024.0,
        GC_get_heap_size() / 1024.0
    );
  #endif
#else /* !MR_CONSERVATIVE_GC */
    fprintf(stderr, "\nHeap: %.3fk",
        ((char *) MR_hp - (char *) eng->MR_eng_heap_zone->MR_zone_min) / 1024.0
    );
#endif /* !MR_CONSERVATIVE_GC */

#ifdef  MR_MPROF_PROFILE_MEMORY

    /*
    ** Update the overall counter (this needs to be done first,
    ** so that the percentages come out right).
    */
    ML_update_counter(&MR_memprof_overall, &ML_overall_counter);

    /*
    ** Print out the per-procedure memory profile (top N entries)
    */
    num_table_entries = ML_memory_profile_top_table(MR_memprof_procs.root,
        table, MEMORY_PROFILE_SIZE, 0);
    fprintf(stderr, "\nMemory profile by procedure\n");
    ML_memory_profile_report(table, num_table_entries, MR_FALSE);

    /*
    ** Print out the per-type memory profile (top N entries)
    */
    num_table_entries = ML_memory_profile_top_table(MR_memprof_types.root,
        table, MEMORY_PROFILE_SIZE, 0);
    fprintf(stderr, "\nMemory profile by type\n");
    ML_memory_profile_report(table, num_table_entries, MR_FALSE);

    /*
    ** Print out the overall memory usage.
    */
    fprintf(stderr, "Overall memory usage:"
        "+%8.8g %8.8g cells, +%8.8g %8.8g words\n",
        ML_overall_counter.cells_since_period_start,
        ML_overall_counter.cells_at_period_end,
        ML_overall_counter.words_since_period_start,
        ML_overall_counter.words_at_period_end
    );

#endif /* MR_MPROF_PROFILE_MEMORY */

    fprintf(stderr, "]\n");
}

#ifdef MR_MPROF_PROFILE_MEMORY

void
ML_report_full_memory_stats(void)
{
    int                     num_table_entries;
    int                     table_size;
    ML_memprof_report_entry *table;

    /*
    ** Update the overall counter (this needs to be done first,
    ** so that the percentages come out right).
    */
    ML_update_counter(&MR_memprof_overall, &ML_overall_counter);

    /*
    ** Allocate space for the table
    */
    if (MR_memprof_procs.num_entries > MR_memprof_types.num_entries) {
        table_size = MR_memprof_procs.num_entries;
    } else {
        table_size = MR_memprof_types.num_entries;
    }
    table = MR_GC_NEW_ARRAY(ML_memprof_report_entry, table_size);

    /*
    ** Print the by-procedure memory profile
    */
    num_table_entries = ML_memory_profile_fill_table(MR_memprof_procs.root,
        table, 0);
    qsort(table, MR_memprof_procs.num_entries, sizeof(ML_memprof_report_entry),
        ML_memory_profile_compare_final);
    fprintf(stderr, "\nMemory profile by procedure\n");
    fprintf(stderr, "%14s %14s  %s\n",
        "Cells", "Words", "Procedure label");
    ML_memory_profile_report(table, num_table_entries, MR_TRUE);

    /*
    ** Print the by-type memory profile
    */
    num_table_entries = ML_memory_profile_fill_table(MR_memprof_types.root,
        table, 0);
    qsort(table, MR_memprof_types.num_entries, sizeof(ML_memprof_report_entry),
        ML_memory_profile_compare_final);
    fprintf(stderr, "\nMemory profile by type\n");
    fprintf(stderr, "%14s %14s  %s\n",
        "Cells", "Words", "Procedure label");
    ML_memory_profile_report(table, num_table_entries, MR_TRUE);

    /*
    ** Deallocate space for the table
    */
    MR_GC_free(table);

    /*
    ** Print the overall memory usage
    */
    fprintf(stderr, "\nOverall memory usage: %8.8g cells, %8.8g words\n",
        ML_overall_counter.cells_at_period_end,
        ML_overall_counter.words_at_period_end
    );
}

/*
** ML_update_counter(counter, float_counter):
**
** Copy the data for a period from `counter' into
** `float_counter' (changing the format slightly as we go),
** and update `counter' to reflect the start of a new period.
*/

static void
ML_update_counter(MR_memprof_counter *counter,
    ML_memprof_float_counter *float_counter)
{
    MR_add_two_dwords(counter->cells_at_period_start,
        counter->cells_since_period_start);
    MR_add_two_dwords(counter->words_at_period_start,
        counter->words_since_period_start);

    MR_convert_dword_to_double(counter->cells_since_period_start,
        float_counter->cells_since_period_start);
    MR_convert_dword_to_double(counter->words_since_period_start,
        float_counter->words_since_period_start);

    /* since the 'at start' numbers have already been incremented, */
    /* they now refer to the start of the *next* period */
    MR_convert_dword_to_double(counter->cells_at_period_start,
        float_counter->cells_at_period_end);
    MR_convert_dword_to_double(counter->words_at_period_start,
        float_counter->words_at_period_end);

    MR_zero_dword(counter->cells_since_period_start);
    MR_zero_dword(counter->words_since_period_start);
}

/*
** Insert an entry into the table of the top `table_size' entries.
** Entries are ranked according to their words_since_period_start.
** (This is an arbitrary choice; we might equally well choose
** to order them by cells_since_period_start. I prefer words (zs).)
** Entries that are not in the top `table_size' are discarded.
*/
static int
ML_insert_into_table(const ML_memprof_report_entry *new_entry,
    ML_memprof_report_entry *table, int table_size, int next_slot)
{
    int slot;

    /* ignore entries whose counts are zero (allowing for rounding) */
    if (new_entry->counter.words_since_period_start < 1.0) {
        return next_slot;
    }

    /*
    ** Find the slot where this entry should be inserted.
    ** Start at the end and work backwards until we find
    ** the start of the table or until we find a table
    ** entry which ranks higher that the new entry.
    */
    slot = next_slot;
    while (slot > 0 && table[slot - 1].counter.words_since_period_start
        < new_entry->counter.words_since_period_start)
    {
        slot--;
    }

    /*
    ** If this entry fits in the table, then shuffle the displaced entries
    ** to the right, insert the new entry in the table, and increment next_slot
    ** (unless it is already at the end of the table).
    */
    if (slot < table_size) {
#if 0
/*
** The following code is disabled because it causes gcc (2.7.2) internal
** errors (``fixed or forbidden register spilled'') on x86 machines when
** using gcc global register variables.
*/
        int i;
        for (i = table_size - 1; i > slot; i--) {
            table[i] = table[i - 1];
        }
        table[slot] = *new_entry;
#else
        memmove(&table[slot + 1], &table[slot],
            (table_size - slot - 1) * sizeof(*table));
        MR_memcpy(&table[slot], new_entry, sizeof(*table));
#endif

        if (next_slot < table_size) {
            next_slot++;
        }
    }

    return next_slot;
}

/*
** ML_memory_profile_top_table(node, table, table_size, next_slot):
**
** Insert the entries for `node' and its children into `table', which is
** big enough to hold the top `table_size' entries. `next_slot' specifies
** the number of entries currently in the table. Returns the new value
** of `next_slot'.
*/
static int
ML_memory_profile_top_table(MR_memprof_record *node,
    ML_memprof_report_entry *table, int table_size, int next_slot)
{
    ML_memprof_report_entry new_entry;

    if (node != NULL) {
        next_slot = ML_memory_profile_top_table(node->left,
            table, table_size, next_slot);

        if (node->type_name != NULL) {
            new_entry.name = node->type_name;
        } else {
            new_entry.name = MR_lookup_entry_or_internal(node->proc);
        }
        ML_update_counter(&node->counter, &new_entry.counter);
        next_slot = ML_insert_into_table(&new_entry,
            table, table_size, next_slot);

        next_slot = ML_memory_profile_top_table(node->right,
            table, table_size, next_slot);
    }

    return next_slot;
}

/*
** ML_memory_profile_fill_table(node, table, next_slot):
** Insert the entries for `node' and its children into `table', which the
** caller guarantees is big enough to hold them all. `next_slot' specifies
** the number of entries currently in the table. Returns the new value
** of `next_slot'.
*/

static int
ML_memory_profile_fill_table(MR_memprof_record *node,
    ML_memprof_report_entry *table, int next_slot)
{
    if (node != NULL) {
        next_slot = ML_memory_profile_fill_table(node->left,
            table, next_slot);

        if (node->type_name != NULL) {
            table[next_slot].name = node->type_name;
        } else {
            table[next_slot].name = MR_lookup_entry_or_internal(node->proc);
        }
        ML_update_counter(&node->counter, &table[next_slot].counter);
        next_slot++;

        next_slot = ML_memory_profile_fill_table(node->right,
            table, next_slot);
    }
    return next_slot;
}

/*
** ML_memory_profile_report(table, num_entries, complete):
**
** Print out a profiling report for the specified table.
*/

static void
ML_memory_profile_report(const ML_memprof_report_entry *table, int num_entries,
    MR_bool complete)
{
    int     i;
    const char  *name;

    if (complete) {
        if (ML_overall_counter.cells_at_period_end < 1.0
        ||  ML_overall_counter.words_at_period_end < 1.0)
        {
            fprintf(stderr, "no allocations to report\n");
            return;
        }
    } else {
        if (ML_overall_counter.cells_since_period_start < 1.0
        ||  ML_overall_counter.words_since_period_start < 1.0)
        {
            fprintf(stderr, "no allocations to report\n");
            return;
        }
    }

    if (num_entries > MAX_REPORT_LINES && !complete) {
        num_entries = MAX_REPORT_LINES;
    }

    for (i = 0; i < num_entries; i++) {
        if (complete) {
            fprintf(stderr, "%8.8g/%4.1f%% %8.8g/%4.1f%%  %s\n",
                table[i].counter.cells_at_period_end,
                100 * table[i].counter.cells_at_period_end /
                    ML_overall_counter.cells_at_period_end,
                table[i].counter.words_at_period_end,
                100 * table[i].counter.words_at_period_end /
                    ML_overall_counter.words_at_period_end,
                table[i].name
            );
        } else {
            fprintf(stderr, "%8.8g/%4.1f%% %8.8g/%4.1f%%  %s\n",
                table[i].counter.cells_since_period_start,
                100 * table[i].counter.cells_since_period_start /
                   ML_overall_counter.cells_since_period_start,
                table[i].counter.words_since_period_start,
                100 * table[i].counter.words_since_period_start /
                   ML_overall_counter.words_since_period_start,
                table[i].name
            );
        }
    }
}

/*
** Comparison routine used for qsort().
** Compares two ML_memprof_report_entry structures.
*/

static int
ML_memory_profile_compare_final(const void *i1, const void *i2)
{
    const ML_memprof_report_entry *e1 = (const ML_memprof_report_entry *) i1;
    const ML_memprof_report_entry *e2 = (const ML_memprof_report_entry *) i2;

    if (e1->counter.words_at_period_end < e2->counter.words_at_period_end)
    {
        return 1;
    } else if
      (e1->counter.words_at_period_end > e2->counter.words_at_period_end)
    {
        return -1;
    } else {
        return strcmp(e1->name, e2->name);
    }
}

#endif /* MR_MPROF_PROFILE_MEMORY */

#line 1038 "benchmarking.m"

    volatile        MR_Word ML_benchmarking_dummy_word;



#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__benchmarking__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__benchmarking__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
}

#line 1042 "benchmarking.m"
static void MR_CALL 
mercury__benchmarking__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_110_111_116_104_105_110_103_95_95_91_49_93_95_48_1_p_0(
#line 1042 "benchmarking.m"
  MR_Box mercury__benchmarking__HeadVar__1_1)
#line 1042 "benchmarking.m"
{
#line 1044 "benchmarking.m"
  {
#line 1044 "benchmarking.m"
    MR_bool mercury__benchmarking__succeeded;
#line 1044 "benchmarking.m"
    MR_Word mercury__benchmarking__TypeInfo_for_T_3;

#line 1047 "benchmarking.m"
{
#define MR_PROC_LABEL mercury__benchmarking__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_110_111_116_104_105_110_103_95_95_91_49_93_95_48_1_p_0

	MR_Word X;

	X = (MR_Word) mercury__benchmarking__HeadVar__1_1 ;
		{
#line 1047 "benchmarking.m"

    ML_benchmarking_dummy_word = (MR_Word) X;

#line 1136 "benchmarking.c"

		;}
#undef MR_PROC_LABEL
#line 1047 "benchmarking.m"
}
#line 1044 "benchmarking.m"
  }
#line 1042 "benchmarking.m"
}

#line 932 "benchmarking.m"
static void MR_CALL 
mercury__benchmarking__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_100_101_116_95_108_111_111_112_95_105_111_95_95_91_49_44_32_50_44_32_51_93_95_48_6_p_0(
#line 932 "benchmarking.m"
  MR_Word mercury__benchmarking__Pred_7,
#line 932 "benchmarking.m"
  MR_Box mercury__benchmarking__InA_8,
#line 932 "benchmarking.m"
  MR_Box * mercury__benchmarking__OutA_9,
#line 932 "benchmarking.m"
  MR_Box mercury__benchmarking__InB_10,
#line 932 "benchmarking.m"
  MR_Box * mercury__benchmarking__OutB_11,
#line 932 "benchmarking.m"
  MR_Integer mercury__benchmarking__Repeats_12)
#line 932 "benchmarking.m"
{
#line 935 "benchmarking.m"
  while (MR_TRUE)
#line 935 "benchmarking.m"
    {
#line 935 "benchmarking.m"
      /* tailcall optimized into a loop */
#line 935 "benchmarking.m"
      {
#line 935 "benchmarking.m"
        MR_bool mercury__benchmarking__succeeded;
#line 935 "benchmarking.m"
        MR_Box mercury__benchmarking__OutA0_13;
#line 935 "benchmarking.m"
        MR_Box mercury__benchmarking__OutB0_14;
#line 938 "benchmarking.m"
        void MR_CALL (* mercury__benchmarking__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__benchmarking__Pred_7, (MR_Integer) 1)));
#line 1044 "benchmarking.m"
        MR_Word mercury__benchmarking__TypeInfo_for_T2_21;

#line 938 "benchmarking.m"
        {
#line 938 "benchmarking.m"
          mercury__benchmarking__func_0(((MR_Box) mercury__benchmarking__Pred_7), mercury__benchmarking__InA_8, &mercury__benchmarking__OutA0_13, mercury__benchmarking__InB_10, &mercury__benchmarking__OutB0_14);
        }
#line 1047 "benchmarking.m"
{
#define MR_PROC_LABEL mercury__benchmarking__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_100_101_116_95_108_111_111_112_95_105_111_95_95_91_49_44_32_50_44_32_51_93_95_48_6_p_0

	MR_Word X;

	X = (MR_Word) mercury__benchmarking__OutA0_13 ;
		{
#line 1047 "benchmarking.m"

    ML_benchmarking_dummy_word = (MR_Word) X;

#line 1200 "benchmarking.c"

		;}
#undef MR_PROC_LABEL
#line 1047 "benchmarking.m"
}
#line 940 "benchmarking.m"
        mercury__benchmarking__succeeded = (mercury__benchmarking__Repeats_12 > (MR_Integer) 1);
#line 942 "benchmarking.m"
        if (mercury__benchmarking__succeeded)
#line 941 "benchmarking.m"
          {
#line 941 "benchmarking.m"
            MR_Integer mercury__benchmarking__V_16_16 = (mercury__benchmarking__Repeats_12 - (MR_Integer) 1);

#line 941 "benchmarking.m"
            /* direct tailcall eliminated */
#line 941 "benchmarking.m"
            {
#line 941 "benchmarking.m"
              MR_Box mercury__benchmarking__InB__tmp_copy_10 = mercury__benchmarking__OutB0_14;
#line 941 "benchmarking.m"
              MR_Integer mercury__benchmarking__Repeats__tmp_copy_12 = mercury__benchmarking__V_16_16;

#line 941 "benchmarking.m"
              mercury__benchmarking__Repeats_12 = mercury__benchmarking__Repeats__tmp_copy_12;
#line 941 "benchmarking.m"
              mercury__benchmarking__InB_10 = mercury__benchmarking__InB__tmp_copy_10;
#line 941 "benchmarking.m"
            }
#line 941 "benchmarking.m"
            continue;
#line 941 "benchmarking.m"
          }
#line 942 "benchmarking.m"
        else
#line 943 "benchmarking.m"
          {
#line 943 "benchmarking.m"
            *mercury__benchmarking__OutA_9 = mercury__benchmarking__OutA0_13;
#line 944 "benchmarking.m"
            *mercury__benchmarking__OutB_11 = mercury__benchmarking__OutB0_14;
#line 943 "benchmarking.m"
          }
#line 935 "benchmarking.m"
      }
#line 935 "benchmarking.m"
      break;
#line 935 "benchmarking.m"
    }
#line 932 "benchmarking.m"
}

#line 908 "benchmarking.m"
static void MR_CALL 
mercury__benchmarking__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_102_117_110_99_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_p_0(
#line 908 "benchmarking.m"
  MR_Word mercury__benchmarking__Func_5,
#line 908 "benchmarking.m"
  MR_Box mercury__benchmarking__In_6,
#line 908 "benchmarking.m"
  MR_Box * mercury__benchmarking__Out_7,
#line 908 "benchmarking.m"
  MR_Integer mercury__benchmarking__Repeats_8)
#line 908 "benchmarking.m"
{
#line 910 "benchmarking.m"
  while (MR_TRUE)
#line 910 "benchmarking.m"
    {
#line 910 "benchmarking.m"
      /* tailcall optimized into a loop */
#line 910 "benchmarking.m"
      {
#line 910 "benchmarking.m"
        MR_bool mercury__benchmarking__succeeded;
#line 910 "benchmarking.m"
        MR_Box mercury__benchmarking__Out0_9;
#line 913 "benchmarking.m"
        MR_Box MR_CALL (* mercury__benchmarking__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__benchmarking__Func_5, (MR_Integer) 1)));
#line 1044 "benchmarking.m"
        MR_Word mercury__benchmarking__TypeInfo_for_T2_15;

#line 913 "benchmarking.m"
        {
#line 913 "benchmarking.m"
          mercury__benchmarking__Out0_9 = mercury__benchmarking__func_0(((MR_Box) mercury__benchmarking__Func_5), mercury__benchmarking__In_6);
        }
#line 1047 "benchmarking.m"
{
#define MR_PROC_LABEL mercury__benchmarking__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_102_117_110_99_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_p_0

	MR_Word X;

	X = (MR_Word) mercury__benchmarking__Out0_9 ;
		{
#line 1047 "benchmarking.m"

    ML_benchmarking_dummy_word = (MR_Word) X;

#line 1300 "benchmarking.c"

		;}
#undef MR_PROC_LABEL
#line 1047 "benchmarking.m"
}
#line 915 "benchmarking.m"
        mercury__benchmarking__succeeded = (mercury__benchmarking__Repeats_8 > (MR_Integer) 1);
#line 917 "benchmarking.m"
        if (mercury__benchmarking__succeeded)
#line 916 "benchmarking.m"
          {
#line 916 "benchmarking.m"
            MR_Integer mercury__benchmarking__V_11_11 = (mercury__benchmarking__Repeats_8 - (MR_Integer) 1);

#line 916 "benchmarking.m"
            /* direct tailcall eliminated */
#line 916 "benchmarking.m"
            {
#line 916 "benchmarking.m"
              MR_Integer mercury__benchmarking__Repeats__tmp_copy_8 = mercury__benchmarking__V_11_11;

#line 916 "benchmarking.m"
              mercury__benchmarking__Repeats_8 = mercury__benchmarking__Repeats__tmp_copy_8;
#line 916 "benchmarking.m"
            }
#line 916 "benchmarking.m"
            continue;
#line 916 "benchmarking.m"
          }
#line 917 "benchmarking.m"
        else
#line 918 "benchmarking.m"
          *mercury__benchmarking__Out_7 = mercury__benchmarking__Out0_9;
#line 910 "benchmarking.m"
      }
#line 910 "benchmarking.m"
      break;
#line 910 "benchmarking.m"
    }
#line 908 "benchmarking.m"
}

#line 885 "benchmarking.m"
static void MR_CALL 
mercury__benchmarking__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_100_101_116_95_108_111_111_112_95_95_91_49_44_32_50_93_95_49_4_p_1(
#line 885 "benchmarking.m"
  MR_Word mercury__benchmarking__Pred_5,
#line 885 "benchmarking.m"
  MR_Box mercury__benchmarking__In_6,
#line 885 "benchmarking.m"
  MR_Box * mercury__benchmarking__Out_7,
#line 885 "benchmarking.m"
  MR_Integer mercury__benchmarking__Repeats_8)
#line 885 "benchmarking.m"
{
#line 887 "benchmarking.m"
  while (MR_TRUE)
#line 887 "benchmarking.m"
    {
#line 887 "benchmarking.m"
      /* tailcall optimized into a loop */
#line 887 "benchmarking.m"
      {
#line 887 "benchmarking.m"
        MR_bool mercury__benchmarking__succeeded;
#line 887 "benchmarking.m"
        MR_Box mercury__benchmarking__Out0_9;
#line 890 "benchmarking.m"
        void MR_CALL (* mercury__benchmarking__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__benchmarking__Pred_5, (MR_Integer) 1)));
#line 1044 "benchmarking.m"
        MR_Word mercury__benchmarking__TypeInfo_for_T2_15;

#line 890 "benchmarking.m"
        {
#line 890 "benchmarking.m"
          mercury__benchmarking__func_0(((MR_Box) mercury__benchmarking__Pred_5), mercury__benchmarking__In_6, &mercury__benchmarking__Out0_9);
        }
#line 1047 "benchmarking.m"
{
#define MR_PROC_LABEL mercury__benchmarking__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_100_101_116_95_108_111_111_112_95_95_91_49_44_32_50_93_95_49_4_p_1

	MR_Word X;

	X = (MR_Word) mercury__benchmarking__Out0_9 ;
		{
#line 1047 "benchmarking.m"

    ML_benchmarking_dummy_word = (MR_Word) X;

#line 1390 "benchmarking.c"

		;}
#undef MR_PROC_LABEL
#line 1047 "benchmarking.m"
}
#line 892 "benchmarking.m"
        mercury__benchmarking__succeeded = (mercury__benchmarking__Repeats_8 > (MR_Integer) 1);
#line 894 "benchmarking.m"
        if (mercury__benchmarking__succeeded)
#line 893 "benchmarking.m"
          {
#line 893 "benchmarking.m"
            MR_Integer mercury__benchmarking__V_11_11 = (mercury__benchmarking__Repeats_8 - (MR_Integer) 1);

#line 893 "benchmarking.m"
            /* direct tailcall eliminated */
#line 893 "benchmarking.m"
            {
#line 893 "benchmarking.m"
              MR_Integer mercury__benchmarking__Repeats__tmp_copy_8 = mercury__benchmarking__V_11_11;

#line 893 "benchmarking.m"
              mercury__benchmarking__Repeats_8 = mercury__benchmarking__Repeats__tmp_copy_8;
#line 893 "benchmarking.m"
            }
#line 893 "benchmarking.m"
            continue;
#line 893 "benchmarking.m"
          }
#line 894 "benchmarking.m"
        else
#line 895 "benchmarking.m"
          *mercury__benchmarking__Out_7 = mercury__benchmarking__Out0_9;
#line 887 "benchmarking.m"
      }
#line 887 "benchmarking.m"
      break;
#line 887 "benchmarking.m"
    }
#line 885 "benchmarking.m"
}

#line 884 "benchmarking.m"
static void MR_CALL 
mercury__benchmarking__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_100_101_116_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_p_0(
#line 884 "benchmarking.m"
  MR_Word mercury__benchmarking__Pred_5,
#line 884 "benchmarking.m"
  MR_Box mercury__benchmarking__In_6,
#line 884 "benchmarking.m"
  MR_Box * mercury__benchmarking__Out_7,
#line 884 "benchmarking.m"
  MR_Integer mercury__benchmarking__Repeats_8)
#line 884 "benchmarking.m"
{
#line 887 "benchmarking.m"
  while (MR_TRUE)
#line 887 "benchmarking.m"
    {
#line 887 "benchmarking.m"
      /* tailcall optimized into a loop */
#line 887 "benchmarking.m"
      {
#line 887 "benchmarking.m"
        MR_bool mercury__benchmarking__succeeded;
#line 887 "benchmarking.m"
        MR_Box mercury__benchmarking__Out0_9;
#line 890 "benchmarking.m"
        void MR_CALL (* mercury__benchmarking__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__benchmarking__Pred_5, (MR_Integer) 1)));
#line 1044 "benchmarking.m"
        MR_Word mercury__benchmarking__TypeInfo_for_T2_15;

#line 890 "benchmarking.m"
        {
#line 890 "benchmarking.m"
          mercury__benchmarking__func_0(((MR_Box) mercury__benchmarking__Pred_5), mercury__benchmarking__In_6, &mercury__benchmarking__Out0_9);
        }
#line 1047 "benchmarking.m"
{
#define MR_PROC_LABEL mercury__benchmarking__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_100_101_116_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_p_0

	MR_Word X;

	X = (MR_Word) mercury__benchmarking__Out0_9 ;
		{
#line 1047 "benchmarking.m"

    ML_benchmarking_dummy_word = (MR_Word) X;

#line 1480 "benchmarking.c"

		;}
#undef MR_PROC_LABEL
#line 1047 "benchmarking.m"
}
#line 892 "benchmarking.m"
        mercury__benchmarking__succeeded = (mercury__benchmarking__Repeats_8 > (MR_Integer) 1);
#line 894 "benchmarking.m"
        if (mercury__benchmarking__succeeded)
#line 893 "benchmarking.m"
          {
#line 893 "benchmarking.m"
            MR_Integer mercury__benchmarking__V_11_11 = (mercury__benchmarking__Repeats_8 - (MR_Integer) 1);

#line 893 "benchmarking.m"
            /* direct tailcall eliminated */
#line 893 "benchmarking.m"
            {
#line 893 "benchmarking.m"
              MR_Integer mercury__benchmarking__Repeats__tmp_copy_8 = mercury__benchmarking__V_11_11;

#line 893 "benchmarking.m"
              mercury__benchmarking__Repeats_8 = mercury__benchmarking__Repeats__tmp_copy_8;
#line 893 "benchmarking.m"
            }
#line 893 "benchmarking.m"
            continue;
#line 893 "benchmarking.m"
          }
#line 894 "benchmarking.m"
        else
#line 895 "benchmarking.m"
          *mercury__benchmarking__Out_7 = mercury__benchmarking__Out0_9;
#line 887 "benchmarking.m"
      }
#line 887 "benchmarking.m"
      break;
#line 887 "benchmarking.m"
    }
#line 884 "benchmarking.m"
}

#line 1195 "benchmarking.m"
static void MR_CALL 
mercury__benchmarking__dump_trace_counts_to_4_p_0(
#line 1195 "benchmarking.m"
  MR_String mercury__benchmarking__FileName_1,
#line 1195 "benchmarking.m"
  MR_Integer * mercury__benchmarking__Result_2)
#line 1195 "benchmarking.m"
{
#line 1197 "benchmarking.m"
  {
#line 1197 "benchmarking.m"
    MR_bool mercury__benchmarking__succeeded;

#line 1200 "benchmarking.m"
{
#define MR_PROC_LABEL mercury__benchmarking__dump_trace_counts_to_4_p_0

	MR_String FileName;
	MR_Integer Result;

	FileName =  mercury__benchmarking__FileName_1 ;
		{
#line 1200 "benchmarking.m"

#ifdef  MR_EXEC_TRACE
    FILE    *fp;

    if (MR_trace_count_enabled && MR_trace_func_enabled) {
        fp = fopen(FileName, "w");
        if (fp != NULL) {
            MR_trace_write_label_exec_counts(fp, MR_progname, MR_FALSE);
            Result = 0;
            (void) fclose(fp);
        } else {
            Result = 3;
        }
    } else {
        Result = 2;
    }
#else
    Result = 1;
#endif

#line 1567 "benchmarking.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__benchmarking__Result_2  = Result;
#line 1200 "benchmarking.m"
}
#line 1197 "benchmarking.m"
  }
#line 1195 "benchmarking.m"
}

#line 1042 "benchmarking.m"
static void MR_CALL 
mercury__benchmarking__do_nothing_1_p_0(
#line 1042 "benchmarking.m"
  MR_Word mercury__benchmarking__TypeInfo_for_T_2,
#line 1042 "benchmarking.m"
  MR_Box mercury__benchmarking__HeadVar__1_1)
#line 1042 "benchmarking.m"
{
#line 1044 "benchmarking.m"
  {
#line 1044 "benchmarking.m"
    MR_bool mercury__benchmarking__succeeded;

#line 1044 "benchmarking.m"
    {
#line 1044 "benchmarking.m"
      mercury__benchmarking__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_110_111_116_104_105_110_103_95_95_91_49_93_95_48_1_p_0(mercury__benchmarking__HeadVar__1_1);
#line 1044 "benchmarking.m"
      return;
    }
#line 1044 "benchmarking.m"
  }
#line 1042 "benchmarking.m"
}

#line 980 "benchmarking.m"
static void MR_CALL 
mercury__benchmarking__get_user_cpu_milliseconds_1_p_0(
#line 980 "benchmarking.m"
  MR_Integer * mercury__benchmarking__Time_1)
#line 980 "benchmarking.m"
{
#line 987 "benchmarking.m"
  {
#line 987 "benchmarking.m"
    MR_bool mercury__benchmarking__succeeded;

#line 990 "benchmarking.m"
{
#define MR_PROC_LABEL mercury__benchmarking__get_user_cpu_milliseconds_1_p_0

	MR_Integer Time;

		{
#line 990 "benchmarking.m"

    Time = MR_get_user_cpu_milliseconds();

#line 1628 "benchmarking.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__benchmarking__Time_1  = Time;
#line 990 "benchmarking.m"
}
#line 987 "benchmarking.m"
  }
#line 980 "benchmarking.m"
}

#line 974 "benchmarking.m"
static void MR_CALL 
mercury__benchmarking__repeat_1_p_0(
#line 974 "benchmarking.m"
  MR_Integer mercury__benchmarking__N_2,
#line 974 "benchmarking.m"
  MR_Cont mercury__benchmarking__cont,
#line 974 "benchmarking.m"
  void * mercury__benchmarking__cont_env_ptr)
#line 974 "benchmarking.m"
{
#line 976 "benchmarking.m"
  while (MR_TRUE)
#line 976 "benchmarking.m"
    {
#line 976 "benchmarking.m"
      /* tailcall optimized into a loop */
#line 976 "benchmarking.m"
      {
#line 976 "benchmarking.m"
        MR_bool mercury__benchmarking__succeeded = (mercury__benchmarking__N_2 > (MR_Integer) 0);

#line 976 "benchmarking.m"
        if (mercury__benchmarking__succeeded)
#line 976 "benchmarking.m"
          {
#line 978 "benchmarking.m"
            {
#line 978 "benchmarking.m"
              mercury__benchmarking__cont(mercury__benchmarking__cont_env_ptr);
            }
#line 978 "benchmarking.m"
            {
#line 978 "benchmarking.m"
              MR_Integer mercury__benchmarking__V_4_4 = (mercury__benchmarking__N_2 - (MR_Integer) 1);

#line 978 "benchmarking.m"
              /* direct tailcall eliminated */
#line 978 "benchmarking.m"
              {
#line 978 "benchmarking.m"
                MR_Integer mercury__benchmarking__N__tmp_copy_2 = mercury__benchmarking__V_4_4;

#line 978 "benchmarking.m"
                mercury__benchmarking__N_2 = mercury__benchmarking__N__tmp_copy_2;
#line 978 "benchmarking.m"
              }
#line 978 "benchmarking.m"
              continue;
#line 978 "benchmarking.m"
            }
#line 976 "benchmarking.m"
          }
#line 976 "benchmarking.m"
      }
#line 976 "benchmarking.m"
      break;
#line 976 "benchmarking.m"
    }
#line 974 "benchmarking.m"
}

#line 149 "benchmarking.m"
void MR_CALL 
mercury__benchmarking__log_threadscope_message_3_p_0(
#line 149 "benchmarking.m"
  MR_String mercury__benchmarking__Message_1)
#line 149 "benchmarking.m"
{
#line 1226 "benchmarking.m"
  {
#line 1226 "benchmarking.m"
    MR_bool mercury__benchmarking__succeeded;

#line 1230 "benchmarking.m"
{
#define MR_PROC_LABEL mercury__benchmarking__log_threadscope_message_3_p_0

	MR_String Message;

	Message =  mercury__benchmarking__Message_1 ;
		{
#line 1230 "benchmarking.m"

#if MR_THREADSCOPE
    MR_threadscope_post_log_msg(Message);
#endif

#line 1728 "benchmarking.c"

		;}
#undef MR_PROC_LABEL
#line 1230 "benchmarking.m"
}
#line 1226 "benchmarking.m"
  }
#line 149 "benchmarking.m"
}

#line 139 "benchmarking.m"
void MR_CALL 
mercury__benchmarking__write_out_trace_counts_4_p_0(
#line 139 "benchmarking.m"
  MR_String mercury__benchmarking__DumpFileName_5,
#line 139 "benchmarking.m"
  MR_Word * mercury__benchmarking__MaybeErrorMsg_6)
#line 139 "benchmarking.m"
{
#line 1177 "benchmarking.m"
  {
#line 1177 "benchmarking.m"
    MR_bool mercury__benchmarking__succeeded;
#line 1177 "benchmarking.m"
    MR_Integer mercury__benchmarking__Result_8;

#line 1200 "benchmarking.m"
{
#define MR_PROC_LABEL mercury__benchmarking__write_out_trace_counts_4_p_0

	MR_String FileName;
	MR_Integer Result;

	FileName =  mercury__benchmarking__DumpFileName_5 ;
		{
#line 1200 "benchmarking.m"

#ifdef  MR_EXEC_TRACE
    FILE    *fp;

    if (MR_trace_count_enabled && MR_trace_func_enabled) {
        fp = fopen(FileName, "w");
        if (fp != NULL) {
            MR_trace_write_label_exec_counts(fp, MR_progname, MR_FALSE);
            Result = 0;
            (void) fclose(fp);
        } else {
            Result = 3;
        }
    } else {
        Result = 2;
    }
#else
    Result = 1;
#endif

#line 1785 "benchmarking.c"

		;}
#undef MR_PROC_LABEL
	 mercury__benchmarking__Result_8  = Result;
#line 1200 "benchmarking.m"
}
#line 1179 "benchmarking.m"
    mercury__benchmarking__succeeded = (mercury__benchmarking__Result_8 == (MR_Integer) 0);
#line 1181 "benchmarking.m"
    if (mercury__benchmarking__succeeded)
#line 1180 "benchmarking.m"
      *mercury__benchmarking__MaybeErrorMsg_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1181 "benchmarking.m"
    else
#line 1184 "benchmarking.m"
      {
#line 1181 "benchmarking.m"
        mercury__benchmarking__succeeded = (mercury__benchmarking__Result_8 == (MR_Integer) 1);
#line 1184 "benchmarking.m"
        if (mercury__benchmarking__succeeded)
#line 1182 "benchmarking.m"
          {
#line 1182 "benchmarking.m"
            MR_String mercury__benchmarking__V_12_12;
#line 1182 "benchmarking.m"
            MR_String mercury__benchmarking__V_14_14;

#line 406 "string.opt"
            {
#line 406 "string.opt"
              mercury__string__append_3_p_2(mercury__benchmarking__DumpFileName_5, (MR_String) "\': no compiled with debugging", &mercury__benchmarking__V_14_14);
            }
#line 406 "string.opt"
            {
#line 406 "string.opt"
              mercury__string__append_3_p_2((MR_String) "Couldn\'t dump trace counts to \140", mercury__benchmarking__V_14_14, &mercury__benchmarking__V_12_12);
            }
#line 1182 "benchmarking.m"
            {
#line 1182 "benchmarking.m"
              MR_Word base;
#line 1182 "benchmarking.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1182 "benchmarking.m"
              *mercury__benchmarking__MaybeErrorMsg_6 = base;
#line 1182 "benchmarking.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__benchmarking__V_12_12));
#line 1182 "benchmarking.m"
            }
#line 1182 "benchmarking.m"
          }
#line 1184 "benchmarking.m"
        else
#line 1187 "benchmarking.m"
          {
#line 1184 "benchmarking.m"
            mercury__benchmarking__succeeded = (mercury__benchmarking__Result_8 == (MR_Integer) 2);
#line 1187 "benchmarking.m"
            if (mercury__benchmarking__succeeded)
#line 1185 "benchmarking.m"
              {
#line 1185 "benchmarking.m"
                MR_String mercury__benchmarking__V_16_16;
#line 1185 "benchmarking.m"
                MR_String mercury__benchmarking__V_18_18;

#line 406 "string.opt"
                {
#line 406 "string.opt"
                  mercury__string__append_3_p_2(mercury__benchmarking__DumpFileName_5, (MR_String) "\': trace counting not turned on", &mercury__benchmarking__V_18_18);
                }
#line 406 "string.opt"
                {
#line 406 "string.opt"
                  mercury__string__append_3_p_2((MR_String) "Couldn\'t dump trace counts to \140", mercury__benchmarking__V_18_18, &mercury__benchmarking__V_16_16);
                }
#line 1185 "benchmarking.m"
                {
#line 1185 "benchmarking.m"
                  MR_Word base;
#line 1185 "benchmarking.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1185 "benchmarking.m"
                  *mercury__benchmarking__MaybeErrorMsg_6 = base;
#line 1185 "benchmarking.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__benchmarking__V_16_16));
#line 1185 "benchmarking.m"
                }
#line 1185 "benchmarking.m"
              }
#line 1187 "benchmarking.m"
            else
#line 1190 "benchmarking.m"
              {
#line 1187 "benchmarking.m"
                mercury__benchmarking__succeeded = (mercury__benchmarking__Result_8 == (MR_Integer) 3);
#line 1190 "benchmarking.m"
                if (mercury__benchmarking__succeeded)
#line 1188 "benchmarking.m"
                  {
#line 1188 "benchmarking.m"
                    MR_String mercury__benchmarking__V_20_20;
#line 1188 "benchmarking.m"
                    MR_String mercury__benchmarking__V_22_22;

#line 406 "string.opt"
                    {
#line 406 "string.opt"
                      mercury__string__append_3_p_2(mercury__benchmarking__DumpFileName_5, (MR_String) "\': couldn\'t open file", &mercury__benchmarking__V_22_22);
                    }
#line 406 "string.opt"
                    {
#line 406 "string.opt"
                      mercury__string__append_3_p_2((MR_String) "Couldn\'t dump trace counts to \140", mercury__benchmarking__V_22_22, &mercury__benchmarking__V_20_20);
                    }
#line 1188 "benchmarking.m"
                    {
#line 1188 "benchmarking.m"
                      MR_Word base;
#line 1188 "benchmarking.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1188 "benchmarking.m"
                      *mercury__benchmarking__MaybeErrorMsg_6 = base;
#line 1188 "benchmarking.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__benchmarking__V_20_20));
#line 1188 "benchmarking.m"
                    }
#line 1188 "benchmarking.m"
                  }
#line 1190 "benchmarking.m"
                else
#line 1191 "benchmarking.m"
                  {
#line 1191 "benchmarking.m"
                    MR_String mercury__benchmarking__V_24_24;
#line 1191 "benchmarking.m"
                    MR_String mercury__benchmarking__V_26_26;

#line 406 "string.opt"
                    {
#line 406 "string.opt"
                      mercury__string__append_3_p_2(mercury__benchmarking__DumpFileName_5, (MR_String) "\'", &mercury__benchmarking__V_26_26);
                    }
#line 406 "string.opt"
                    {
#line 406 "string.opt"
                      mercury__string__append_3_p_2((MR_String) "Couldn\'t dump trace counts to \140", mercury__benchmarking__V_26_26, &mercury__benchmarking__V_24_24);
                    }
#line 1191 "benchmarking.m"
                    {
#line 1191 "benchmarking.m"
                      MR_Word base;
#line 1191 "benchmarking.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1191 "benchmarking.m"
                      *mercury__benchmarking__MaybeErrorMsg_6 = base;
#line 1191 "benchmarking.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__benchmarking__V_24_24));
#line 1191 "benchmarking.m"
                    }
#line 1191 "benchmarking.m"
                  }
#line 1190 "benchmarking.m"
              }
#line 1187 "benchmarking.m"
          }
#line 1184 "benchmarking.m"
      }
#line 1177 "benchmarking.m"
  }
#line 139 "benchmarking.m"
}

#line 126 "benchmarking.m"
void MR_CALL 
mercury__benchmarking__turn_on_heap_profiling_0_p_0(void)
#line 126 "benchmarking.m"
{
#line 1170 "benchmarking.m"
  {
#line 1170 "benchmarking.m"
    MR_bool mercury__benchmarking__succeeded;

#line 1171 "benchmarking.m"
{
#define MR_PROC_LABEL mercury__benchmarking__turn_on_heap_profiling_0_p_0


		{
#line 1171 "benchmarking.m"

    MR_prof_turn_on_heap_profiling();

#line 1979 "benchmarking.c"

		;}
#undef MR_PROC_LABEL
#line 1171 "benchmarking.m"
}
#line 1170 "benchmarking.m"
  }
#line 126 "benchmarking.m"
}

#line 125 "benchmarking.m"
void MR_CALL 
mercury__benchmarking__turn_off_heap_profiling_0_p_0(void)
#line 125 "benchmarking.m"
{
#line 1165 "benchmarking.m"
  {
#line 1165 "benchmarking.m"
    MR_bool mercury__benchmarking__succeeded;

#line 1166 "benchmarking.m"
{
#define MR_PROC_LABEL mercury__benchmarking__turn_off_heap_profiling_0_p_0


		{
#line 1166 "benchmarking.m"

    MR_prof_turn_off_heap_profiling();

#line 2010 "benchmarking.c"

		;}
#undef MR_PROC_LABEL
#line 1166 "benchmarking.m"
}
#line 1165 "benchmarking.m"
  }
#line 125 "benchmarking.m"
}

#line 123 "benchmarking.m"
void MR_CALL 
mercury__benchmarking__turn_on_heap_profiling_2_p_0(void)
#line 123 "benchmarking.m"
{
#line 1127 "benchmarking.m"
  {
#line 1127 "benchmarking.m"
    MR_bool mercury__benchmarking__succeeded;

#line 1171 "benchmarking.m"
{
#define MR_PROC_LABEL mercury__benchmarking__turn_on_heap_profiling_2_p_0


		{
#line 1171 "benchmarking.m"

    MR_prof_turn_on_heap_profiling();

#line 2041 "benchmarking.c"

		;}
#undef MR_PROC_LABEL
#line 1171 "benchmarking.m"
}
#line 1127 "benchmarking.m"
  }
#line 123 "benchmarking.m"
}

#line 122 "benchmarking.m"
void MR_CALL 
mercury__benchmarking__turn_off_heap_profiling_2_p_0(void)
#line 122 "benchmarking.m"
{
#line 1122 "benchmarking.m"
  {
#line 1122 "benchmarking.m"
    MR_bool mercury__benchmarking__succeeded;

#line 1166 "benchmarking.m"
{
#define MR_PROC_LABEL mercury__benchmarking__turn_off_heap_profiling_2_p_0


		{
#line 1166 "benchmarking.m"

    MR_prof_turn_off_heap_profiling();

#line 2072 "benchmarking.c"

		;}
#undef MR_PROC_LABEL
#line 1166 "benchmarking.m"
}
#line 1122 "benchmarking.m"
  }
#line 122 "benchmarking.m"
}

#line 117 "benchmarking.m"
void MR_CALL 
mercury__benchmarking__turn_on_time_profiling_0_p_0(void)
#line 117 "benchmarking.m"
{
#line 1158 "benchmarking.m"
  {
#line 1158 "benchmarking.m"
    MR_bool mercury__benchmarking__succeeded;

#line 1159 "benchmarking.m"
{
#define MR_PROC_LABEL mercury__benchmarking__turn_on_time_profiling_0_p_0


		{
#line 1159 "benchmarking.m"

#ifdef MR_MPROF_PROFILE_TIME
    MR_prof_turn_on_time_profiling();
#endif

#line 2105 "benchmarking.c"

		;}
#undef MR_PROC_LABEL
#line 1159 "benchmarking.m"
}
#line 1158 "benchmarking.m"
  }
#line 117 "benchmarking.m"
}

#line 116 "benchmarking.m"
void MR_CALL 
mercury__benchmarking__turn_off_time_profiling_0_p_0(void)
#line 116 "benchmarking.m"
{
#line 1151 "benchmarking.m"
  {
#line 1151 "benchmarking.m"
    MR_bool mercury__benchmarking__succeeded;

#line 1152 "benchmarking.m"
{
#define MR_PROC_LABEL mercury__benchmarking__turn_off_time_profiling_0_p_0


		{
#line 1152 "benchmarking.m"

#ifdef MR_MPROF_PROFILE_TIME
    MR_prof_turn_off_time_profiling();
#endif

#line 2138 "benchmarking.c"

		;}
#undef MR_PROC_LABEL
#line 1152 "benchmarking.m"
}
#line 1151 "benchmarking.m"
  }
#line 116 "benchmarking.m"
}

#line 114 "benchmarking.m"
void MR_CALL 
mercury__benchmarking__turn_on_time_profiling_2_p_0(void)
#line 114 "benchmarking.m"
{
#line 1117 "benchmarking.m"
  {
#line 1117 "benchmarking.m"
    MR_bool mercury__benchmarking__succeeded;

#line 1159 "benchmarking.m"
{
#define MR_PROC_LABEL mercury__benchmarking__turn_on_time_profiling_2_p_0


		{
#line 1159 "benchmarking.m"

#ifdef MR_MPROF_PROFILE_TIME
    MR_prof_turn_on_time_profiling();
#endif

#line 2171 "benchmarking.c"

		;}
#undef MR_PROC_LABEL
#line 1159 "benchmarking.m"
}
#line 1117 "benchmarking.m"
  }
#line 114 "benchmarking.m"
}

#line 113 "benchmarking.m"
void MR_CALL 
mercury__benchmarking__turn_off_time_profiling_2_p_0(void)
#line 113 "benchmarking.m"
{
#line 1112 "benchmarking.m"
  {
#line 1112 "benchmarking.m"
    MR_bool mercury__benchmarking__succeeded;

#line 1152 "benchmarking.m"
{
#define MR_PROC_LABEL mercury__benchmarking__turn_off_time_profiling_2_p_0


		{
#line 1152 "benchmarking.m"

#ifdef MR_MPROF_PROFILE_TIME
    MR_prof_turn_off_time_profiling();
#endif

#line 2204 "benchmarking.c"

		;}
#undef MR_PROC_LABEL
#line 1152 "benchmarking.m"
}
#line 1112 "benchmarking.m"
  }
#line 113 "benchmarking.m"
}

#line 108 "benchmarking.m"
void MR_CALL 
mercury__benchmarking__turn_on_call_profiling_0_p_0(void)
#line 108 "benchmarking.m"
{
#line 1144 "benchmarking.m"
  {
#line 1144 "benchmarking.m"
    MR_bool mercury__benchmarking__succeeded;

#line 1145 "benchmarking.m"
{
#define MR_PROC_LABEL mercury__benchmarking__turn_on_call_profiling_0_p_0


		{
#line 1145 "benchmarking.m"

#ifdef MR_MPROF_PROFILE_CALLS
    MR_prof_turn_on_call_profiling();
#endif

#line 2237 "benchmarking.c"

		;}
#undef MR_PROC_LABEL
#line 1145 "benchmarking.m"
}
#line 1144 "benchmarking.m"
  }
#line 108 "benchmarking.m"
}

#line 107 "benchmarking.m"
void MR_CALL 
mercury__benchmarking__turn_off_call_profiling_0_p_0(void)
#line 107 "benchmarking.m"
{
#line 1137 "benchmarking.m"
  {
#line 1137 "benchmarking.m"
    MR_bool mercury__benchmarking__succeeded;

#line 1138 "benchmarking.m"
{
#define MR_PROC_LABEL mercury__benchmarking__turn_off_call_profiling_0_p_0


		{
#line 1138 "benchmarking.m"

#ifdef MR_MPROF_PROFILE_CALLS
    MR_prof_turn_off_call_profiling();
#endif

#line 2270 "benchmarking.c"

		;}
#undef MR_PROC_LABEL
#line 1138 "benchmarking.m"
}
#line 1137 "benchmarking.m"
  }
#line 107 "benchmarking.m"
}

#line 105 "benchmarking.m"
void MR_CALL 
mercury__benchmarking__turn_on_call_profiling_2_p_0(void)
#line 105 "benchmarking.m"
{
#line 1107 "benchmarking.m"
  {
#line 1107 "benchmarking.m"
    MR_bool mercury__benchmarking__succeeded;

#line 1145 "benchmarking.m"
{
#define MR_PROC_LABEL mercury__benchmarking__turn_on_call_profiling_2_p_0


		{
#line 1145 "benchmarking.m"

#ifdef MR_MPROF_PROFILE_CALLS
    MR_prof_turn_on_call_profiling();
#endif

#line 2303 "benchmarking.c"

		;}
#undef MR_PROC_LABEL
#line 1145 "benchmarking.m"
}
#line 1107 "benchmarking.m"
  }
#line 105 "benchmarking.m"
}

#line 104 "benchmarking.m"
void MR_CALL 
mercury__benchmarking__turn_off_call_profiling_2_p_0(void)
#line 104 "benchmarking.m"
{
#line 1102 "benchmarking.m"
  {
#line 1102 "benchmarking.m"
    MR_bool mercury__benchmarking__succeeded;

#line 1138 "benchmarking.m"
{
#define MR_PROC_LABEL mercury__benchmarking__turn_off_call_profiling_2_p_0


		{
#line 1138 "benchmarking.m"

#ifdef MR_MPROF_PROFILE_CALLS
    MR_prof_turn_off_call_profiling();
#endif

#line 2336 "benchmarking.c"

		;}
#undef MR_PROC_LABEL
#line 1138 "benchmarking.m"
}
#line 1102 "benchmarking.m"
  }
#line 104 "benchmarking.m"
}

#line 100 "benchmarking.m"
void MR_CALL 
mercury__benchmarking__turn_on_profiling_0_p_0(void)
#line 100 "benchmarking.m"
{
#line 1093 "benchmarking.m"
  {
#line 1093 "benchmarking.m"
    MR_bool mercury__benchmarking__succeeded;

#line 1145 "benchmarking.m"
{
#define MR_PROC_LABEL mercury__benchmarking__turn_on_profiling_0_p_0


		{
#line 1145 "benchmarking.m"

#ifdef MR_MPROF_PROFILE_CALLS
    MR_prof_turn_on_call_profiling();
#endif

#line 2369 "benchmarking.c"

		;}
#undef MR_PROC_LABEL
#line 1145 "benchmarking.m"
}
#line 1159 "benchmarking.m"
{
#define MR_PROC_LABEL mercury__benchmarking__turn_on_profiling_0_p_0


		{
#line 1159 "benchmarking.m"

#ifdef MR_MPROF_PROFILE_TIME
    MR_prof_turn_on_time_profiling();
#endif

#line 2387 "benchmarking.c"

		;}
#undef MR_PROC_LABEL
#line 1159 "benchmarking.m"
}
#line 1171 "benchmarking.m"
{
#define MR_PROC_LABEL mercury__benchmarking__turn_on_profiling_0_p_0


		{
#line 1171 "benchmarking.m"

    MR_prof_turn_on_heap_profiling();

#line 2403 "benchmarking.c"

		;}
#undef MR_PROC_LABEL
#line 1171 "benchmarking.m"
}
#line 1093 "benchmarking.m"
  }
#line 100 "benchmarking.m"
}

#line 99 "benchmarking.m"
void MR_CALL 
mercury__benchmarking__turn_off_profiling_0_p_0(void)
#line 99 "benchmarking.m"
{
#line 1088 "benchmarking.m"
  {
#line 1088 "benchmarking.m"
    MR_bool mercury__benchmarking__succeeded;

#line 1138 "benchmarking.m"
{
#define MR_PROC_LABEL mercury__benchmarking__turn_off_profiling_0_p_0


		{
#line 1138 "benchmarking.m"

#ifdef MR_MPROF_PROFILE_CALLS
    MR_prof_turn_off_call_profiling();
#endif

#line 2436 "benchmarking.c"

		;}
#undef MR_PROC_LABEL
#line 1138 "benchmarking.m"
}
#line 1152 "benchmarking.m"
{
#define MR_PROC_LABEL mercury__benchmarking__turn_off_profiling_0_p_0


		{
#line 1152 "benchmarking.m"

#ifdef MR_MPROF_PROFILE_TIME
    MR_prof_turn_off_time_profiling();
#endif

#line 2454 "benchmarking.c"

		;}
#undef MR_PROC_LABEL
#line 1152 "benchmarking.m"
}
#line 1166 "benchmarking.m"
{
#define MR_PROC_LABEL mercury__benchmarking__turn_off_profiling_0_p_0


		{
#line 1166 "benchmarking.m"

    MR_prof_turn_off_heap_profiling();

#line 2470 "benchmarking.c"

		;}
#undef MR_PROC_LABEL
#line 1166 "benchmarking.m"
}
#line 1088 "benchmarking.m"
  }
#line 99 "benchmarking.m"
}

#line 97 "benchmarking.m"
void MR_CALL 
mercury__benchmarking__turn_on_profiling_2_p_0(void)
#line 97 "benchmarking.m"
{
#line 1085 "benchmarking.m"
  {
#line 1085 "benchmarking.m"
    MR_bool mercury__benchmarking__succeeded;

#line 1145 "benchmarking.m"
{
#define MR_PROC_LABEL mercury__benchmarking__turn_on_profiling_2_p_0


		{
#line 1145 "benchmarking.m"

#ifdef MR_MPROF_PROFILE_CALLS
    MR_prof_turn_on_call_profiling();
#endif

#line 2503 "benchmarking.c"

		;}
#undef MR_PROC_LABEL
#line 1145 "benchmarking.m"
}
#line 1159 "benchmarking.m"
{
#define MR_PROC_LABEL mercury__benchmarking__turn_on_profiling_2_p_0


		{
#line 1159 "benchmarking.m"

#ifdef MR_MPROF_PROFILE_TIME
    MR_prof_turn_on_time_profiling();
#endif

#line 2521 "benchmarking.c"

		;}
#undef MR_PROC_LABEL
#line 1159 "benchmarking.m"
}
#line 1171 "benchmarking.m"
{
#define MR_PROC_LABEL mercury__benchmarking__turn_on_profiling_2_p_0


		{
#line 1171 "benchmarking.m"

    MR_prof_turn_on_heap_profiling();

#line 2537 "benchmarking.c"

		;}
#undef MR_PROC_LABEL
#line 1171 "benchmarking.m"
}
#line 1085 "benchmarking.m"
  }
#line 97 "benchmarking.m"
}

#line 96 "benchmarking.m"
void MR_CALL 
mercury__benchmarking__turn_off_profiling_2_p_0(void)
#line 96 "benchmarking.m"
{
#line 1080 "benchmarking.m"
  {
#line 1080 "benchmarking.m"
    MR_bool mercury__benchmarking__succeeded;

#line 1138 "benchmarking.m"
{
#define MR_PROC_LABEL mercury__benchmarking__turn_off_profiling_2_p_0


		{
#line 1138 "benchmarking.m"

#ifdef MR_MPROF_PROFILE_CALLS
    MR_prof_turn_off_call_profiling();
#endif

#line 2570 "benchmarking.c"

		;}
#undef MR_PROC_LABEL
#line 1138 "benchmarking.m"
}
#line 1152 "benchmarking.m"
{
#define MR_PROC_LABEL mercury__benchmarking__turn_off_profiling_2_p_0


		{
#line 1152 "benchmarking.m"

#ifdef MR_MPROF_PROFILE_TIME
    MR_prof_turn_off_time_profiling();
#endif

#line 2588 "benchmarking.c"

		;}
#undef MR_PROC_LABEL
#line 1152 "benchmarking.m"
}
#line 1166 "benchmarking.m"
{
#define MR_PROC_LABEL mercury__benchmarking__turn_off_profiling_2_p_0


		{
#line 1166 "benchmarking.m"

    MR_prof_turn_off_heap_profiling();

#line 2604 "benchmarking.c"

		;}
#undef MR_PROC_LABEL
#line 1166 "benchmarking.m"
}
#line 1080 "benchmarking.m"
  }
#line 96 "benchmarking.m"
}

#line 962 "benchmarking.m"
static void MR_CALL 
mercury__benchmarking__benchmark_nondet_5_p_0_1(
#line 962 "benchmarking.m"
  void * mercury__benchmarking__env_ptr_arg)
#line 962 "benchmarking.m"
{
#line 962 "benchmarking.m"
  {
#line 962 "benchmarking.m"
    struct mercury__benchmarking__benchmark_nondet_5_p_0_env_0_s * mercury__benchmarking__env_ptr = (struct mercury__benchmarking__benchmark_nondet_5_p_0_env_0_s *) mercury__benchmarking__env_ptr_arg;

#line 962 "benchmarking.m"
    MR_builtin_longjmp((mercury__benchmarking__env_ptr)->mercury__benchmarking__benchmark_nondet_5_p_0_env_0__commit_0, 1);
#line 962 "benchmarking.m"
  }
#line 962 "benchmarking.m"
}

#line 962 "benchmarking.m"
static void MR_CALL 
mercury__benchmarking__benchmark_nondet_5_p_0_3(
#line 962 "benchmarking.m"
  void * mercury__benchmarking__env_ptr_arg)
#line 962 "benchmarking.m"
{
#line 962 "benchmarking.m"
  {
#line 962 "benchmarking.m"
    struct mercury__benchmarking__benchmark_nondet_5_p_0_env_0_s * mercury__benchmarking__env_ptr = (struct mercury__benchmarking__benchmark_nondet_5_p_0_env_0_s *) mercury__benchmarking__env_ptr_arg;

#line 962 "benchmarking.m"
    {
#line 1044 "benchmarking.m"
      MR_Word mercury__benchmarking__TypeInfo_for_T2_28;
#line 966 "benchmarking.m"
      MR_Box mercury__benchmarking__conv1_Count_8;

#line 1047 "benchmarking.m"
{
#define MR_PROC_LABEL mercury__benchmarking__benchmark_nondet_5_p_0

	MR_Word X;

	X = (MR_Word) (mercury__benchmarking__env_ptr)->mercury__benchmarking__benchmark_nondet_5_p_0_env_0__Out0_22 ;
		{
#line 1047 "benchmarking.m"

    ML_benchmarking_dummy_word = (MR_Word) X;

#line 2665 "benchmarking.c"

		;}
#undef MR_PROC_LABEL
#line 1047 "benchmarking.m"
}
#line 966 "benchmarking.m"
      {
#line 966 "benchmarking.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__benchmarking__env_ptr)->mercury__benchmarking__benchmark_nondet_5_p_0_env_0__TypeCtorInfo_17_27, (mercury__benchmarking__env_ptr)->mercury__benchmarking__benchmark_nondet_5_p_0_env_0__SolutionCounter_21, &mercury__benchmarking__conv1_Count_8);
      }
#line 966 "benchmarking.m"
      *((mercury__benchmarking__env_ptr)->mercury__benchmarking__benchmark_nondet_5_p_0_env_0__Count_8) = ((MR_Integer) mercury__benchmarking__conv1_Count_8);
#line 967 "benchmarking.m"
      (mercury__benchmarking__env_ptr)->mercury__benchmarking__benchmark_nondet_5_p_0_env_0__V_26_26 = (MR_Integer) 1;
#line 967 "benchmarking.m"
      (mercury__benchmarking__env_ptr)->mercury__benchmarking__benchmark_nondet_5_p_0_env_0__V_25_25 = (*((mercury__benchmarking__env_ptr)->mercury__benchmarking__benchmark_nondet_5_p_0_env_0__Count_8) + (mercury__benchmarking__env_ptr)->mercury__benchmarking__benchmark_nondet_5_p_0_env_0__V_26_26);
#line 967 "benchmarking.m"
      {
#line 967 "benchmarking.m"
        mercury__mutvar__set_mutvar_2_p_0((mercury__benchmarking__env_ptr)->mercury__benchmarking__benchmark_nondet_5_p_0_env_0__TypeCtorInfo_17_27, (mercury__benchmarking__env_ptr)->mercury__benchmarking__benchmark_nondet_5_p_0_env_0__SolutionCounter_21, ((MR_Box) ((mercury__benchmarking__env_ptr)->mercury__benchmarking__benchmark_nondet_5_p_0_env_0__V_25_25)));
      }
#line 968 "benchmarking.m"
      (mercury__benchmarking__env_ptr)->mercury__benchmarking__benchmark_nondet_5_p_0_env_0__succeeded = MR_FALSE;
#line 968 "benchmarking.m"
      if ((mercury__benchmarking__env_ptr)->mercury__benchmarking__benchmark_nondet_5_p_0_env_0__succeeded)
#line 968 "benchmarking.m"
        {
#line 968 "benchmarking.m"
          mercury__benchmarking__benchmark_nondet_5_p_0_1(mercury__benchmarking__env_ptr);
#line 968 "benchmarking.m"
          return;
        }
#line 962 "benchmarking.m"
    }
#line 962 "benchmarking.m"
  }
#line 962 "benchmarking.m"
}

#line 962 "benchmarking.m"
static void MR_CALL 
mercury__benchmarking__benchmark_nondet_5_p_0_2(
#line 962 "benchmarking.m"
  void * mercury__benchmarking__env_ptr_arg)
#line 962 "benchmarking.m"
{
#line 962 "benchmarking.m"
  {
#line 962 "benchmarking.m"
    struct mercury__benchmarking__benchmark_nondet_5_p_0_env_0_s * mercury__benchmarking__env_ptr = (struct mercury__benchmarking__benchmark_nondet_5_p_0_env_0_s *) mercury__benchmarking__env_ptr_arg;

#line 962 "benchmarking.m"
    {
#line 964 "benchmarking.m"
      void MR_CALL (* mercury__benchmarking__func_0)(MR_Box, MR_Box, MR_Box *, MR_Cont, void *);

#line 963 "benchmarking.m"
      (mercury__benchmarking__env_ptr)->mercury__benchmarking__benchmark_nondet_5_p_0_env_0__V_24_24 = (MR_Integer) 0;
#line 963 "benchmarking.m"
      {
#line 963 "benchmarking.m"
        mercury__mutvar__set_mutvar_2_p_0((mercury__benchmarking__env_ptr)->mercury__benchmarking__benchmark_nondet_5_p_0_env_0__TypeCtorInfo_17_27, (mercury__benchmarking__env_ptr)->mercury__benchmarking__benchmark_nondet_5_p_0_env_0__SolutionCounter_21, ((MR_Box) ((mercury__benchmarking__env_ptr)->mercury__benchmarking__benchmark_nondet_5_p_0_env_0__V_24_24)));
      }
#line 964 "benchmarking.m"
      mercury__benchmarking__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__benchmarking__env_ptr)->mercury__benchmarking__benchmark_nondet_5_p_0_env_0__Pred_6, (MR_Integer) 1)));
#line 964 "benchmarking.m"
      {
#line 964 "benchmarking.m"
        mercury__benchmarking__func_0(((MR_Box) (mercury__benchmarking__env_ptr)->mercury__benchmarking__benchmark_nondet_5_p_0_env_0__Pred_6), (mercury__benchmarking__env_ptr)->mercury__benchmarking__benchmark_nondet_5_p_0_env_0__In_7, &(mercury__benchmarking__env_ptr)->mercury__benchmarking__benchmark_nondet_5_p_0_env_0__Out0_22, mercury__benchmarking__benchmark_nondet_5_p_0_3, mercury__benchmarking__env_ptr);
      }
#line 962 "benchmarking.m"
    }
#line 962 "benchmarking.m"
  }
#line 962 "benchmarking.m"
}

#line 962 "benchmarking.m"
static void MR_CALL 
mercury__benchmarking__benchmark_nondet_5_p_0_4(
#line 962 "benchmarking.m"
  void * mercury__benchmarking__env_ptr_arg)
#line 962 "benchmarking.m"
{
#line 962 "benchmarking.m"
  {
#line 962 "benchmarking.m"
    struct mercury__benchmarking__benchmark_nondet_5_p_0_env_0_s * mercury__benchmarking__env_ptr = (struct mercury__benchmarking__benchmark_nondet_5_p_0_env_0_s *) mercury__benchmarking__env_ptr_arg;

#line 962 "benchmarking.m"
    if (MR_builtin_setjmp((mercury__benchmarking__env_ptr)->mercury__benchmarking__benchmark_nondet_5_p_0_env_0__commit_0) == 0)
#line 962 "benchmarking.m"
      {
#line 962 "benchmarking.m"
        {
#line 962 "benchmarking.m"
          mercury__benchmarking__repeat_1_p_0((mercury__benchmarking__env_ptr)->mercury__benchmarking__benchmark_nondet_5_p_0_env_0__Repeats_9, mercury__benchmarking__benchmark_nondet_5_p_0_2, mercury__benchmarking__env_ptr);
        }
#line 962 "benchmarking.m"
        (mercury__benchmarking__env_ptr)->mercury__benchmarking__benchmark_nondet_5_p_0_env_0__succeeded = MR_FALSE;
#line 962 "benchmarking.m"
      }
#line 962 "benchmarking.m"
    else
#line 962 "benchmarking.m"
      (mercury__benchmarking__env_ptr)->mercury__benchmarking__benchmark_nondet_5_p_0_env_0__succeeded = MR_TRUE;
#line 962 "benchmarking.m"
  }
#line 962 "benchmarking.m"
}

#line 88 "benchmarking.m"
void MR_CALL 
mercury__benchmarking__benchmark_nondet_5_p_0(
#line 88 "benchmarking.m"
  MR_Word mercury__benchmarking__TypeInfo_for_T1_14,
#line 88 "benchmarking.m"
  MR_Word mercury__benchmarking__TypeInfo_for_T2_15,
#line 88 "benchmarking.m"
  MR_Word mercury__benchmarking__Pred_6,
#line 88 "benchmarking.m"
  MR_Box mercury__benchmarking__In_7,
#line 88 "benchmarking.m"
  MR_Integer * mercury__benchmarking__Count_8,
#line 88 "benchmarking.m"
  MR_Integer mercury__benchmarking__Repeats_9,
#line 88 "benchmarking.m"
  MR_Integer * mercury__benchmarking__Time_10)
#line 88 "benchmarking.m"
{
#line 88 "benchmarking.m"
  {
#line 88 "benchmarking.m"
    struct mercury__benchmarking__benchmark_nondet_5_p_0_env_0_s mercury__benchmarking__env;

#line 88 "benchmarking.m"
    (mercury__benchmarking__env).mercury__benchmarking__benchmark_nondet_5_p_0_env_0__Pred_6 = mercury__benchmarking__Pred_6;
#line 88 "benchmarking.m"
    (mercury__benchmarking__env).mercury__benchmarking__benchmark_nondet_5_p_0_env_0__In_7 = mercury__benchmarking__In_7;
#line 88 "benchmarking.m"
    (mercury__benchmarking__env).mercury__benchmarking__benchmark_nondet_5_p_0_env_0__Count_8 = mercury__benchmarking__Count_8;
#line 88 "benchmarking.m"
    (mercury__benchmarking__env).mercury__benchmarking__benchmark_nondet_5_p_0_env_0__Repeats_9 = mercury__benchmarking__Repeats_9;
#line 949 "benchmarking.m"
    {
#line 949 "benchmarking.m"
      MR_Integer mercury__benchmarking__StartTime_11;
#line 949 "benchmarking.m"
      MR_Integer mercury__benchmarking__EndTime_12;
#line 949 "benchmarking.m"
      MR_Integer mercury__benchmarking__Time0_13;
#line 972 "benchmarking.m"
      MR_Box mercury__benchmarking__conv2_Count_8;
#line 98 "builtin.opt"
      MR_Word mercury__benchmarking__TypeCtorInfo_16_29;
#line 98 "builtin.opt"
      MR_Box mercury__benchmarking__conv3_Y;

#line 990 "benchmarking.m"
{
#define MR_PROC_LABEL mercury__benchmarking__benchmark_nondet_5_p_0

	MR_Integer Time;

		{
#line 990 "benchmarking.m"

    Time = MR_get_user_cpu_milliseconds();

#line 2835 "benchmarking.c"

		;}
#undef MR_PROC_LABEL
	 mercury__benchmarking__StartTime_11  = Time;
#line 990 "benchmarking.m"
}
#line 2842 "benchmarking.c"
      (mercury__benchmarking__env).mercury__benchmarking__benchmark_nondet_5_p_0_env_0__TypeCtorInfo_17_27 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 960 "benchmarking.m"
      {
#line 960 "benchmarking.m"
        mercury__mutvar__new_mutvar_2_p_1((mercury__benchmarking__env).mercury__benchmarking__benchmark_nondet_5_p_0_env_0__TypeCtorInfo_17_27, ((MR_Box) ((MR_Integer) 0)), &(mercury__benchmarking__env).mercury__benchmarking__benchmark_nondet_5_p_0_env_0__SolutionCounter_21);
      }
#line 962 "benchmarking.m"
      {
#line 962 "benchmarking.m"
        mercury__benchmarking__benchmark_nondet_5_p_0_4(&mercury__benchmarking__env);
      }
#line 969 "benchmarking.m"
      if (!((mercury__benchmarking__env).mercury__benchmarking__benchmark_nondet_5_p_0_env_0__succeeded))
#line 970 "benchmarking.m"
        {
#line 970 "benchmarking.m"
        }
#line 972 "benchmarking.m"
      {
#line 972 "benchmarking.m"
        mercury__mutvar__get_mutvar_2_p_0((mercury__benchmarking__env).mercury__benchmarking__benchmark_nondet_5_p_0_env_0__TypeCtorInfo_17_27, (mercury__benchmarking__env).mercury__benchmarking__benchmark_nondet_5_p_0_env_0__SolutionCounter_21, &mercury__benchmarking__conv2_Count_8);
      }
#line 972 "benchmarking.m"
      *((mercury__benchmarking__env).mercury__benchmarking__benchmark_nondet_5_p_0_env_0__Count_8) = ((MR_Integer) mercury__benchmarking__conv2_Count_8);
#line 990 "benchmarking.m"
{
#define MR_PROC_LABEL mercury__benchmarking__benchmark_nondet_5_p_0

	MR_Integer Time;

		{
#line 990 "benchmarking.m"

    Time = MR_get_user_cpu_milliseconds();

#line 2878 "benchmarking.c"

		;}
#undef MR_PROC_LABEL
	 mercury__benchmarking__EndTime_12  = Time;
#line 990 "benchmarking.m"
}
#line 953 "benchmarking.m"
      mercury__benchmarking__Time0_13 = (mercury__benchmarking__EndTime_12 - mercury__benchmarking__StartTime_11);
#line 98 "builtin.opt"
{
#define MR_PROC_LABEL mercury__benchmarking__benchmark_nondet_5_p_0

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) ((MR_Box) (mercury__benchmarking__Time0_13)) ;
		{
#line 98 "builtin.opt"

    Y = X;

#line 2900 "benchmarking.c"

		;}
#undef MR_PROC_LABEL
	 mercury__benchmarking__conv3_Y  = (MR_Box) Y;
#line 98 "builtin.opt"
      *mercury__benchmarking__Time_10 = ((MR_Integer) mercury__benchmarking__conv3_Y);
#line 98 "builtin.opt"
}
#line 949 "benchmarking.m"
    }
#line 88 "benchmarking.m"
  }
#line 88 "benchmarking.m"
}

#line 78 "benchmarking.m"
void MR_CALL 
mercury__benchmarking__benchmark_det_io_7_p_0(
#line 78 "benchmarking.m"
  MR_Word mercury__benchmarking__TypeInfo_for_T1_17,
#line 78 "benchmarking.m"
  MR_Word mercury__benchmarking__TypeInfo_for_T2_18,
#line 78 "benchmarking.m"
  MR_Word mercury__benchmarking__TypeInfo_for_T3_19,
#line 78 "benchmarking.m"
  MR_Word mercury__benchmarking__Pred_8,
#line 78 "benchmarking.m"
  MR_Box mercury__benchmarking__InA_9,
#line 78 "benchmarking.m"
  MR_Box * mercury__benchmarking__OutA_10,
#line 78 "benchmarking.m"
  MR_Box mercury__benchmarking__InB_11,
#line 78 "benchmarking.m"
  MR_Box * mercury__benchmarking__OutB_12,
#line 78 "benchmarking.m"
  MR_Integer mercury__benchmarking__Repeats_13,
#line 78 "benchmarking.m"
  MR_Integer * mercury__benchmarking__Time_14)
#line 78 "benchmarking.m"
{
#line 923 "benchmarking.m"
  {
#line 923 "benchmarking.m"
    MR_bool mercury__benchmarking__succeeded;
#line 923 "benchmarking.m"
    MR_Integer mercury__benchmarking__StartTime_15;
#line 923 "benchmarking.m"
    MR_Integer mercury__benchmarking__EndTime_16;

#line 990 "benchmarking.m"
{
#define MR_PROC_LABEL mercury__benchmarking__benchmark_det_io_7_p_0

	MR_Integer Time;

		{
#line 990 "benchmarking.m"

    Time = MR_get_user_cpu_milliseconds();

#line 2961 "benchmarking.c"

		;}
#undef MR_PROC_LABEL
	 mercury__benchmarking__StartTime_15  = Time;
#line 990 "benchmarking.m"
}
#line 925 "benchmarking.m"
    {
#line 925 "benchmarking.m"
      mercury__benchmarking__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_100_101_116_95_108_111_111_112_95_105_111_95_95_91_49_44_32_50_44_32_51_93_95_48_6_p_0(mercury__benchmarking__Pred_8, mercury__benchmarking__InA_9, mercury__benchmarking__OutA_10, mercury__benchmarking__InB_11, mercury__benchmarking__OutB_12, mercury__benchmarking__Repeats_13);
    }
#line 990 "benchmarking.m"
{
#define MR_PROC_LABEL mercury__benchmarking__benchmark_det_io_7_p_0

	MR_Integer Time;

		{
#line 990 "benchmarking.m"

    Time = MR_get_user_cpu_milliseconds();

#line 2984 "benchmarking.c"

		;}
#undef MR_PROC_LABEL
	 mercury__benchmarking__EndTime_16  = Time;
#line 990 "benchmarking.m"
}
#line 927 "benchmarking.m"
    *mercury__benchmarking__Time_14 = (mercury__benchmarking__EndTime_16 - mercury__benchmarking__StartTime_15);
#line 923 "benchmarking.m"
  }
#line 78 "benchmarking.m"
}

#line 75 "benchmarking.m"
void MR_CALL 
mercury__benchmarking__benchmark_func_5_p_0(
#line 75 "benchmarking.m"
  MR_Word mercury__benchmarking__TypeInfo_for_T1_14,
#line 75 "benchmarking.m"
  MR_Word mercury__benchmarking__TypeInfo_for_T2_15,
#line 75 "benchmarking.m"
  MR_Word mercury__benchmarking__Func_6,
#line 75 "benchmarking.m"
  MR_Box mercury__benchmarking__In_7,
#line 75 "benchmarking.m"
  MR_Box * mercury__benchmarking__Out_8,
#line 75 "benchmarking.m"
  MR_Integer mercury__benchmarking__Repeats_9,
#line 75 "benchmarking.m"
  MR_Integer * mercury__benchmarking__Time_10)
#line 75 "benchmarking.m"
{
#line 900 "benchmarking.m"
  {
#line 900 "benchmarking.m"
    MR_bool mercury__benchmarking__succeeded;
#line 900 "benchmarking.m"
    MR_Integer mercury__benchmarking__StartTime_11;
#line 900 "benchmarking.m"
    MR_Integer mercury__benchmarking__EndTime_12;
#line 900 "benchmarking.m"
    MR_Integer mercury__benchmarking__Time0_13;
#line 98 "builtin.opt"
    MR_Word mercury__benchmarking__TypeCtorInfo_16_17;
#line 98 "builtin.opt"
    MR_Box mercury__benchmarking__conv0_Y;

#line 990 "benchmarking.m"
{
#define MR_PROC_LABEL mercury__benchmarking__benchmark_func_5_p_0

	MR_Integer Time;

		{
#line 990 "benchmarking.m"

    Time = MR_get_user_cpu_milliseconds();

#line 3043 "benchmarking.c"

		;}
#undef MR_PROC_LABEL
	 mercury__benchmarking__StartTime_11  = Time;
#line 990 "benchmarking.m"
}
#line 902 "benchmarking.m"
    {
#line 902 "benchmarking.m"
      mercury__benchmarking__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_102_117_110_99_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_p_0(mercury__benchmarking__Func_6, mercury__benchmarking__In_7, mercury__benchmarking__Out_8, mercury__benchmarking__Repeats_9);
    }
#line 990 "benchmarking.m"
{
#define MR_PROC_LABEL mercury__benchmarking__benchmark_func_5_p_0

	MR_Integer Time;

		{
#line 990 "benchmarking.m"

    Time = MR_get_user_cpu_milliseconds();

#line 3066 "benchmarking.c"

		;}
#undef MR_PROC_LABEL
	 mercury__benchmarking__EndTime_12  = Time;
#line 990 "benchmarking.m"
}
#line 904 "benchmarking.m"
    mercury__benchmarking__Time0_13 = (mercury__benchmarking__EndTime_12 - mercury__benchmarking__StartTime_11);
#line 98 "builtin.opt"
{
#define MR_PROC_LABEL mercury__benchmarking__benchmark_func_5_p_0

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) ((MR_Box) (mercury__benchmarking__Time0_13)) ;
		{
#line 98 "builtin.opt"

    Y = X;

#line 3088 "benchmarking.c"

		;}
#undef MR_PROC_LABEL
	 mercury__benchmarking__conv0_Y  = (MR_Box) Y;
#line 98 "builtin.opt"
    *mercury__benchmarking__Time_10 = ((MR_Integer) mercury__benchmarking__conv0_Y);
#line 98 "builtin.opt"
}
#line 900 "benchmarking.m"
  }
#line 75 "benchmarking.m"
}

#line 72 "benchmarking.m"
void MR_CALL 
mercury__benchmarking__benchmark_det_5_p_1(
#line 72 "benchmarking.m"
  MR_Word mercury__benchmarking__TypeInfo_for_T1_14,
#line 72 "benchmarking.m"
  MR_Word mercury__benchmarking__TypeInfo_for_T2_15,
#line 72 "benchmarking.m"
  MR_Word mercury__benchmarking__Pred_6,
#line 72 "benchmarking.m"
  MR_Box mercury__benchmarking__In_7,
#line 72 "benchmarking.m"
  MR_Box * mercury__benchmarking__Out_8,
#line 72 "benchmarking.m"
  MR_Integer mercury__benchmarking__Repeats_9,
#line 72 "benchmarking.m"
  MR_Integer * mercury__benchmarking__Time_10)
#line 72 "benchmarking.m"
{
#line 876 "benchmarking.m"
  {
#line 876 "benchmarking.m"
    MR_bool mercury__benchmarking__succeeded;
#line 876 "benchmarking.m"
    MR_Integer mercury__benchmarking__StartTime_11;
#line 876 "benchmarking.m"
    MR_Integer mercury__benchmarking__EndTime_12;
#line 876 "benchmarking.m"
    MR_Integer mercury__benchmarking__Time0_13;
#line 98 "builtin.opt"
    MR_Word mercury__benchmarking__TypeCtorInfo_16_17;
#line 98 "builtin.opt"
    MR_Box mercury__benchmarking__conv0_Y;

#line 990 "benchmarking.m"
{
#define MR_PROC_LABEL mercury__benchmarking__benchmark_det_5_p_1

	MR_Integer Time;

		{
#line 990 "benchmarking.m"

    Time = MR_get_user_cpu_milliseconds();

#line 3147 "benchmarking.c"

		;}
#undef MR_PROC_LABEL
	 mercury__benchmarking__StartTime_11  = Time;
#line 990 "benchmarking.m"
}
#line 878 "benchmarking.m"
    {
#line 878 "benchmarking.m"
      mercury__benchmarking__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_100_101_116_95_108_111_111_112_95_95_91_49_44_32_50_93_95_49_4_p_1(mercury__benchmarking__Pred_6, mercury__benchmarking__In_7, mercury__benchmarking__Out_8, mercury__benchmarking__Repeats_9);
    }
#line 990 "benchmarking.m"
{
#define MR_PROC_LABEL mercury__benchmarking__benchmark_det_5_p_1

	MR_Integer Time;

		{
#line 990 "benchmarking.m"

    Time = MR_get_user_cpu_milliseconds();

#line 3170 "benchmarking.c"

		;}
#undef MR_PROC_LABEL
	 mercury__benchmarking__EndTime_12  = Time;
#line 990 "benchmarking.m"
}
#line 880 "benchmarking.m"
    mercury__benchmarking__Time0_13 = (mercury__benchmarking__EndTime_12 - mercury__benchmarking__StartTime_11);
#line 98 "builtin.opt"
{
#define MR_PROC_LABEL mercury__benchmarking__benchmark_det_5_p_1

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) ((MR_Box) (mercury__benchmarking__Time0_13)) ;
		{
#line 98 "builtin.opt"

    Y = X;

#line 3192 "benchmarking.c"

		;}
#undef MR_PROC_LABEL
	 mercury__benchmarking__conv0_Y  = (MR_Box) Y;
#line 98 "builtin.opt"
    *mercury__benchmarking__Time_10 = ((MR_Integer) mercury__benchmarking__conv0_Y);
#line 98 "builtin.opt"
}
#line 876 "benchmarking.m"
  }
#line 72 "benchmarking.m"
}

#line 71 "benchmarking.m"
void MR_CALL 
mercury__benchmarking__benchmark_det_5_p_0(
#line 71 "benchmarking.m"
  MR_Word mercury__benchmarking__TypeInfo_for_T1_14,
#line 71 "benchmarking.m"
  MR_Word mercury__benchmarking__TypeInfo_for_T2_15,
#line 71 "benchmarking.m"
  MR_Word mercury__benchmarking__Pred_6,
#line 71 "benchmarking.m"
  MR_Box mercury__benchmarking__In_7,
#line 71 "benchmarking.m"
  MR_Box * mercury__benchmarking__Out_8,
#line 71 "benchmarking.m"
  MR_Integer mercury__benchmarking__Repeats_9,
#line 71 "benchmarking.m"
  MR_Integer * mercury__benchmarking__Time_10)
#line 71 "benchmarking.m"
{
#line 876 "benchmarking.m"
  {
#line 876 "benchmarking.m"
    MR_bool mercury__benchmarking__succeeded;
#line 876 "benchmarking.m"
    MR_Integer mercury__benchmarking__StartTime_11;
#line 876 "benchmarking.m"
    MR_Integer mercury__benchmarking__EndTime_12;
#line 876 "benchmarking.m"
    MR_Integer mercury__benchmarking__Time0_13;
#line 98 "builtin.opt"
    MR_Word mercury__benchmarking__TypeCtorInfo_16_17;
#line 98 "builtin.opt"
    MR_Box mercury__benchmarking__conv0_Y;

#line 990 "benchmarking.m"
{
#define MR_PROC_LABEL mercury__benchmarking__benchmark_det_5_p_0

	MR_Integer Time;

		{
#line 990 "benchmarking.m"

    Time = MR_get_user_cpu_milliseconds();

#line 3251 "benchmarking.c"

		;}
#undef MR_PROC_LABEL
	 mercury__benchmarking__StartTime_11  = Time;
#line 990 "benchmarking.m"
}
#line 878 "benchmarking.m"
    {
#line 878 "benchmarking.m"
      mercury__benchmarking__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_100_101_116_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_p_0(mercury__benchmarking__Pred_6, mercury__benchmarking__In_7, mercury__benchmarking__Out_8, mercury__benchmarking__Repeats_9);
    }
#line 990 "benchmarking.m"
{
#define MR_PROC_LABEL mercury__benchmarking__benchmark_det_5_p_0

	MR_Integer Time;

		{
#line 990 "benchmarking.m"

    Time = MR_get_user_cpu_milliseconds();

#line 3274 "benchmarking.c"

		;}
#undef MR_PROC_LABEL
	 mercury__benchmarking__EndTime_12  = Time;
#line 990 "benchmarking.m"
}
#line 880 "benchmarking.m"
    mercury__benchmarking__Time0_13 = (mercury__benchmarking__EndTime_12 - mercury__benchmarking__StartTime_11);
#line 98 "builtin.opt"
{
#define MR_PROC_LABEL mercury__benchmarking__benchmark_det_5_p_0

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) ((MR_Box) (mercury__benchmarking__Time0_13)) ;
		{
#line 98 "builtin.opt"

    Y = X;

#line 3296 "benchmarking.c"

		;}
#undef MR_PROC_LABEL
	 mercury__benchmarking__conv0_Y  = (MR_Box) Y;
#line 98 "builtin.opt"
    *mercury__benchmarking__Time_10 = ((MR_Integer) mercury__benchmarking__conv0_Y);
#line 98 "builtin.opt"
}
#line 876 "benchmarking.m"
  }
#line 71 "benchmarking.m"
}

#line 56 "benchmarking.m"
void MR_CALL 
mercury__benchmarking__report_memory_attribution_1_p_0(
#line 56 "benchmarking.m"
  MR_String mercury__benchmarking__Label_1)
#line 56 "benchmarking.m"
{
#line 224 "benchmarking.m"
  {
#line 224 "benchmarking.m"
    MR_bool mercury__benchmarking__succeeded;

#line 227 "benchmarking.m"
{
#define MR_PROC_LABEL mercury__benchmarking__report_memory_attribution_1_p_0

	MR_String Label;

	Label =  mercury__benchmarking__Label_1 ;
		{
#line 227 "benchmarking.m"

#ifdef  MR_MPROF_PROFILE_MEMORY_ATTRIBUTION
    MR_report_memory_attribution(Label);
#else
    (void) Label;
#endif

#line 3338 "benchmarking.c"

		;}
#undef MR_PROC_LABEL
#line 227 "benchmarking.m"
}
#line 224 "benchmarking.m"
  }
#line 56 "benchmarking.m"
}

#line 54 "benchmarking.m"
void MR_CALL 
mercury__benchmarking__report_memory_attribution_3_p_0(
#line 54 "benchmarking.m"
  MR_String mercury__benchmarking__Label_4)
#line 54 "benchmarking.m"
{
#line 240 "benchmarking.m"
  {
#line 240 "benchmarking.m"
    MR_bool mercury__benchmarking__succeeded;

#line 227 "benchmarking.m"
{
#define MR_PROC_LABEL mercury__benchmarking__report_memory_attribution_3_p_0

	MR_String Label;

	Label =  mercury__benchmarking__Label_4 ;
		{
#line 227 "benchmarking.m"

#ifdef  MR_MPROF_PROFILE_MEMORY_ATTRIBUTION
    MR_report_memory_attribution(Label);
#else
    (void) Label;
#endif

#line 3377 "benchmarking.c"

		;}
#undef MR_PROC_LABEL
#line 227 "benchmarking.m"
}
#line 240 "benchmarking.m"
  }
#line 54 "benchmarking.m"
}

#line 43 "benchmarking.m"
void MR_CALL 
mercury__benchmarking__report_full_memory_stats_0_p_0(void)
#line 43 "benchmarking.m"
{
#line 180 "benchmarking.m"
  {
#line 180 "benchmarking.m"
    MR_bool mercury__benchmarking__succeeded;

#line 183 "benchmarking.m"
{
#define MR_PROC_LABEL mercury__benchmarking__report_full_memory_stats_0_p_0


		{
#line 183 "benchmarking.m"

#ifdef  MR_MPROF_PROFILE_MEMORY
    ML_report_full_memory_stats();
#endif

#line 3410 "benchmarking.c"

		;}
#undef MR_PROC_LABEL
#line 183 "benchmarking.m"
}
#line 180 "benchmarking.m"
  }
#line 43 "benchmarking.m"
}

#line 37 "benchmarking.m"
void MR_CALL 
mercury__benchmarking__report_stats_0_p_0(void)
#line 37 "benchmarking.m"
{
#line 173 "benchmarking.m"
  {
#line 173 "benchmarking.m"
    MR_bool mercury__benchmarking__succeeded;

#line 176 "benchmarking.m"
{
#define MR_PROC_LABEL mercury__benchmarking__report_stats_0_p_0


		{
#line 176 "benchmarking.m"

    ML_report_stats();

#line 3441 "benchmarking.c"

		;}
#undef MR_PROC_LABEL
#line 176 "benchmarking.m"
}
#line 173 "benchmarking.m"
  }
#line 37 "benchmarking.m"
}

void mercury__benchmarking__init(void)
{
}

void mercury__benchmarking__init_type_tables(void)
{
}

void mercury__benchmarking__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module benchmarking. */
