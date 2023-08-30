/*
** Automatically generated from `benchmarking.m'
** by the Mercury compiler,
** version rotd-2023-08-30
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


// :- module benchmarking.
// :- implementation.

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
#include "calendar.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "dir.mih"
#include "enum.mih"
#include "exception.mih"
#include "float.mih"
#include "int.mih"
#include "int16.mih"
#include "int32.mih"
#include "int64.mih"
#include "int8.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mercury_term_lexer.mih"
#include "mercury_term_parser.mih"
#include "mutvar.mih"
#include "one_or_more.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "solutions.mih"
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "table_builtin.mih"
#include "term.mih"
#include "term_context.mih"
#include "term_conversion.mih"
#include "term_int.mih"
#include "term_io.mih"
#include "term_subst.mih"
#include "term_unify.mih"
#include "term_vars.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "uint.mih"
#include "uint16.mih"
#include "uint32.mih"
#include "uint64.mih"
#include "uint8.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "io.call_system.mih"
#include "io.environment.mih"
#include "io.error_util.mih"
#include "io.file.mih"
#include "io.primitives_read.mih"
#include "io.primitives_write.mih"
#include "io.stream_db.mih"
#include "io.stream_ops.mih"
#include "io.text_read.mih"
#include "stream.string_writer.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"

#line 799 "benchmarking.m"

#include "mercury_prof.h"
#include "mercury_heap_profile.h"



struct mercury__benchmarking__benchmark_nondet_5_p_0_env_0_s {
  MR_Word mercury__benchmarking__benchmark_nondet_5_p_0_env_0__Pred_6;
  MR_Box mercury__benchmarking__benchmark_nondet_5_p_0_env_0__In_7;
  MR_Integer * mercury__benchmarking__benchmark_nondet_5_p_0_env_0__Count_8;
  MR_Integer mercury__benchmarking__benchmark_nondet_5_p_0_env_0__Repeats_9;
  MR_bool mercury__benchmarking__benchmark_nondet_5_p_0_env_0__succeeded;
  MR_Word mercury__benchmarking__benchmark_nondet_5_p_0_env_0__SolutionCounter_17;
  jmp_buf mercury__benchmarking__benchmark_nondet_5_p_0_env_0__commit_0;
  MR_Box mercury__benchmarking__benchmark_nondet_5_p_0_env_0__Out0_18;
  MR_Integer mercury__benchmarking__benchmark_nondet_5_p_0_env_0__Var_20;
  MR_Integer mercury__benchmarking__benchmark_nondet_5_p_0_env_0__Var_21;
  MR_Integer mercury__benchmarking__benchmark_nondet_5_p_0_env_0__Var_22;
};


static void MR_CALL 
mercury__benchmarking__dump_trace_counts_to_4_p_0(
  MR_String FileName_1,
  MR_Integer * Result_2);

static void MR_CALL 
mercury__benchmarking__do_nothing_1_p_0(
  MR_Word TypeInfo_for_T_2,
  MR_Box HeadVar__1_1);

static void MR_CALL 
mercury__benchmarking__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_110_111_116_104_105_110_103_95_95_91_49_93_95_48_1_p_0(
  MR_Box HeadVar__1_1);

static void MR_CALL 
mercury__benchmarking__get_user_cpu_milliseconds_1_p_0(
  MR_Integer * Time_1);

static void MR_CALL 
mercury__benchmarking__benchmark_nondet_5_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__benchmarking__benchmark_nondet_5_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
mercury__benchmarking__benchmark_nondet_5_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
mercury__benchmarking__benchmark_nondet_5_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
mercury__benchmarking__repeat_1_p_0(
  MR_Integer N_2,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
mercury__benchmarking__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_100_101_116_95_108_111_111_112_95_105_111_95_95_91_49_44_32_50_44_32_51_93_95_48_6_p_0(
  MR_Word Pred_7,
  MR_Box InA_8,
  MR_Box * OutA_9,
  MR_Box InB_10,
  MR_Box * OutB_11,
  MR_Integer Repeats_12);

static void MR_CALL 
mercury__benchmarking__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_102_117_110_99_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_p_0(
  MR_Word Func_5,
  MR_Box In_6,
  MR_Box * Out_7,
  MR_Integer Repeats_8);

static void MR_CALL 
mercury__benchmarking__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_100_101_116_95_108_111_111_112_95_95_91_49_44_32_50_93_95_49_4_p_1(
  MR_Word Pred_5,
  MR_Box In_6,
  MR_Box * Out_7,
  MR_Integer Repeats_8);

static void MR_CALL 
mercury__benchmarking__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_100_101_116_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_p_0(
  MR_Word Pred_5,
  MR_Box In_6,
  MR_Box * Out_7,
  MR_Integer Repeats_8);


static /* final */ const MR_Box mercury__benchmarking_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__benchmarking_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__benchmarking_scalar_common_3[1][5];




static /* final */ const MR_Box mercury__benchmarking_scalar_common_1[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__benchmarking_scalar_common_2[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__benchmarking_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__benchmarking_scalar_common_3[1][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__benchmarking_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "array.mh"
#include "benchmarking.mh"
#include "bitmap.mh"
#include "builtin.mh"
#include "char.mh"
#include "construct.mh"
#include "dir.mh"
#include "exception.mh"
#include "float.mh"
#include "int.mh"
#include "int16.mh"
#include "int32.mh"
#include "int64.mh"
#include "int8.mh"
#include "io.mh"
#include "pretty_printer.mh"
#include "private_builtin.mh"
#include "rtti_implementation.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "string.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "type_desc.mh"
#include "uint.mh"
#include "uint16.mh"
#include "uint32.mh"
#include "uint64.mh"
#include "uint8.mh"
#include "version_array.mh"
#include "io.environment.mh"
#include "io.error_util.mh"
#include "io.file.mh"
#include "io.primitives_read.mh"
#include "io.primitives_write.mh"
#include "io.stream_db.mh"
#include "io.stream_ops.mh"
#include "io.text_read.mh"
#line 713 "benchmarking.m"

    volatile        MR_Word ML_benchmarking_dummy_word;



static void MR_CALL 
mercury__benchmarking__dump_trace_counts_to_4_p_0(
  MR_String FileName_1,
  MR_Integer * Result_2)
{
{
#define MR_PROC_LABEL mercury__benchmarking__dump_trace_counts_to_4_p_0

	MR_String FileName;
	MR_Integer Result;

	FileName = FileName_1 ;
		{

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


		;}
#undef MR_PROC_LABEL
	*Result_2  = Result;
}
}

static void MR_CALL 
mercury__benchmarking__do_nothing_1_p_0(
  MR_Word TypeInfo_for_T_2,
  MR_Box HeadVar__1_1)
{
  mercury__benchmarking__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_110_111_116_104_105_110_103_95_95_91_49_93_95_48_1_p_0(HeadVar__1_1);
}

static void MR_CALL 
mercury__benchmarking__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_110_111_116_104_105_110_103_95_95_91_49_93_95_48_1_p_0(
  MR_Box HeadVar__1_1)
{
{
#define MR_PROC_LABEL mercury__benchmarking__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_110_111_116_104_105_110_103_95_95_91_49_93_95_48_1_p_0

	MR_Word X;

	X = (MR_Word) HeadVar__1_1 ;
		{

    ML_benchmarking_dummy_word = (MR_Word) X;


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
mercury__benchmarking__get_user_cpu_milliseconds_1_p_0(
  MR_Integer * Time_1)
{
{
#define MR_PROC_LABEL mercury__benchmarking__get_user_cpu_milliseconds_1_p_0

	MR_Integer Time;

		{

    Time = MR_get_user_cpu_milliseconds();


		;}
#undef MR_PROC_LABEL
	*Time_1  = Time;
}
}

void MR_CALL 
mercury__benchmarking__report_tabling_statistics_2_3_p_0(
  MR_Box Stream_1)
{
{
#define MR_PROC_LABEL mercury__benchmarking__report_tabling_statistics_2_3_p_0

	MercuryFilePtr Stream;

	Stream = (MercuryFilePtr)Stream_1 ;
		{

    MR_table_report_statistics(MR_file(*Stream));


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__benchmarking__report_full_memory_stats_2_4_p_0(
  MR_Box Stream_1,
  MR_Box * Error_2)
{
{
#define MR_PROC_LABEL mercury__benchmarking__report_full_memory_stats_2_4_p_0

	MercuryFilePtr Stream;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_1 ;
		{

    Error = MR_report_full_memory_stats(MR_file(*Stream),
        &MR_line_number(*Stream));


		;}
#undef MR_PROC_LABEL
	*Error_2  = (MR_Box) Error;
}
}

void MR_CALL 
mercury__benchmarking__report_standard_stats_2_4_p_0(
  MR_Box Stream_1,
  MR_Box * Error_2)
{
{
#define MR_PROC_LABEL mercury__benchmarking__report_standard_stats_2_4_p_0

	MercuryFilePtr Stream;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_1 ;
		{

    Error = MR_report_standard_stats(MR_file(*Stream),
        &MR_line_number(*Stream));


		;}
#undef MR_PROC_LABEL
	*Error_2  = (MR_Box) Error;
}
}

void MR_CALL 
mercury__benchmarking__log_threadscope_message_3_p_0(
  MR_String Message_1)
{
{
#define MR_PROC_LABEL mercury__benchmarking__log_threadscope_message_3_p_0

	MR_String Message;

	Message = Message_1 ;
		{

#if MR_THREADSCOPE
    MR_threadscope_post_log_msg(Message);
#endif


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__benchmarking__write_out_trace_counts_4_p_0(
  MR_String DumpFileName_5,
  MR_Word * MaybeErrorMsg_6)
{
  MR_bool succeeded;
  MR_Integer Result_8;

{
#define MR_PROC_LABEL mercury__benchmarking__write_out_trace_counts_4_p_0

	MR_String FileName;
	MR_Integer Result;

	FileName = DumpFileName_5 ;
		{

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


		;}
#undef MR_PROC_LABEL
	Result_8  = Result;
}
  succeeded = (Result_8 == (MR_Integer) 0);
  if (succeeded)
    *MaybeErrorMsg_6 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    succeeded = (Result_8 == (MR_Integer) 1);
    if (succeeded)
    {
      MR_String Var_12;
      MR_String Var_14;

      mercury__string__append_3_p_2(DumpFileName_5, (MR_String) "\': no compiled with debugging", &Var_14);
      mercury__string__append_3_p_2((MR_String) "Couldn\'t dump trace counts to \140", Var_14, &Var_12);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeErrorMsg_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_12));
      }
    }
    else
    {
      succeeded = (Result_8 == (MR_Integer) 2);
      if (succeeded)
      {
        MR_String Var_16;
        MR_String Var_18;

        mercury__string__append_3_p_2(DumpFileName_5, (MR_String) "\': trace counting not turned on", &Var_18);
        mercury__string__append_3_p_2((MR_String) "Couldn\'t dump trace counts to \140", Var_18, &Var_16);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeErrorMsg_6 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_16));
        }
      }
      else
      {
        succeeded = (Result_8 == (MR_Integer) 3);
        if (succeeded)
        {
          MR_String Var_20;
          MR_String Var_22;

          mercury__string__append_3_p_2(DumpFileName_5, (MR_String) "\': couldn\'t open file", &Var_22);
          mercury__string__append_3_p_2((MR_String) "Couldn\'t dump trace counts to \140", Var_22, &Var_20);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeErrorMsg_6 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_20));
          }
        }
        else
        {
          MR_String Var_24;
          MR_String Var_26;

          mercury__string__append_3_p_2(DumpFileName_5, (MR_String) "\'", &Var_26);
          mercury__string__append_3_p_2((MR_String) "Couldn\'t dump trace counts to \140", Var_26, &Var_24);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeErrorMsg_6 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_24));
          }
        }
      }
    }
  }
}

void MR_CALL 
mercury__benchmarking__turn_on_heap_profiling_0_p_0(void)
{
{
#define MR_PROC_LABEL mercury__benchmarking__turn_on_heap_profiling_0_p_0


		{

    MR_prof_turn_on_heap_profiling();


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__benchmarking__turn_off_heap_profiling_0_p_0(void)
{
{
#define MR_PROC_LABEL mercury__benchmarking__turn_off_heap_profiling_0_p_0


		{

    MR_prof_turn_off_heap_profiling();


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__benchmarking__turn_on_heap_profiling_2_p_0(void)
{
}

void MR_CALL 
mercury__benchmarking__turn_off_heap_profiling_2_p_0(void)
{
}

void MR_CALL 
mercury__benchmarking__turn_on_time_profiling_0_p_0(void)
{
{
#define MR_PROC_LABEL mercury__benchmarking__turn_on_time_profiling_0_p_0


		{

#ifdef MR_MPROF_PROFILE_TIME
    MR_prof_turn_on_time_profiling();
#endif


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__benchmarking__turn_off_time_profiling_0_p_0(void)
{
{
#define MR_PROC_LABEL mercury__benchmarking__turn_off_time_profiling_0_p_0


		{

#ifdef MR_MPROF_PROFILE_TIME
    MR_prof_turn_off_time_profiling();
#endif


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__benchmarking__turn_on_time_profiling_2_p_0(void)
{
}

void MR_CALL 
mercury__benchmarking__turn_off_time_profiling_2_p_0(void)
{
}

void MR_CALL 
mercury__benchmarking__turn_on_call_profiling_0_p_0(void)
{
{
#define MR_PROC_LABEL mercury__benchmarking__turn_on_call_profiling_0_p_0


		{

#ifdef MR_MPROF_PROFILE_CALLS
    MR_prof_turn_on_call_profiling();
#endif


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__benchmarking__turn_off_call_profiling_0_p_0(void)
{
{
#define MR_PROC_LABEL mercury__benchmarking__turn_off_call_profiling_0_p_0


		{

#ifdef MR_MPROF_PROFILE_CALLS
    MR_prof_turn_off_call_profiling();
#endif


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__benchmarking__turn_on_call_profiling_2_p_0(void)
{
}

void MR_CALL 
mercury__benchmarking__turn_off_call_profiling_2_p_0(void)
{
}

void MR_CALL 
mercury__benchmarking__turn_on_profiling_0_p_0(void)
{
{
#define MR_PROC_LABEL mercury__benchmarking__turn_on_profiling_0_p_0


		{

#ifdef MR_MPROF_PROFILE_CALLS
    MR_prof_turn_on_call_profiling();
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__benchmarking__turn_on_profiling_0_p_0


		{

#ifdef MR_MPROF_PROFILE_TIME
    MR_prof_turn_on_time_profiling();
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__benchmarking__turn_on_profiling_0_p_0


		{

    MR_prof_turn_on_heap_profiling();


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__benchmarking__turn_off_profiling_0_p_0(void)
{
{
#define MR_PROC_LABEL mercury__benchmarking__turn_off_profiling_0_p_0


		{

#ifdef MR_MPROF_PROFILE_CALLS
    MR_prof_turn_off_call_profiling();
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__benchmarking__turn_off_profiling_0_p_0


		{

#ifdef MR_MPROF_PROFILE_TIME
    MR_prof_turn_off_time_profiling();
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__benchmarking__turn_off_profiling_0_p_0


		{

    MR_prof_turn_off_heap_profiling();


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__benchmarking__turn_on_profiling_2_p_0(void)
{
}

void MR_CALL 
mercury__benchmarking__turn_off_profiling_2_p_0(void)
{
}

static void MR_CALL 
mercury__benchmarking__benchmark_nondet_5_p_0_1(
  void * env_ptr_arg)
{
  struct mercury__benchmarking__benchmark_nondet_5_p_0_env_0_s * env_ptr = (struct mercury__benchmarking__benchmark_nondet_5_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->mercury__benchmarking__benchmark_nondet_5_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
mercury__benchmarking__benchmark_nondet_5_p_0_3(
  void * env_ptr_arg)
{
  struct mercury__benchmarking__benchmark_nondet_5_p_0_env_0_s * env_ptr = (struct mercury__benchmarking__benchmark_nondet_5_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word TypeInfo_for_T2_24;
    MR_Box conv1_Count_8;

{
#define MR_PROC_LABEL mercury__benchmarking__benchmark_nondet_5_p_0

	MR_Word X;

	X = (MR_Word) (env_ptr)->mercury__benchmarking__benchmark_nondet_5_p_0_env_0__Out0_18 ;
		{

    ML_benchmarking_dummy_word = (MR_Word) X;


		;}
#undef MR_PROC_LABEL
}
    mercury__mutvar__get_mutvar_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (env_ptr)->mercury__benchmarking__benchmark_nondet_5_p_0_env_0__SolutionCounter_17, &conv1_Count_8);
    *((env_ptr)->mercury__benchmarking__benchmark_nondet_5_p_0_env_0__Count_8) = ((MR_Integer) (conv1_Count_8));
    (env_ptr)->mercury__benchmarking__benchmark_nondet_5_p_0_env_0__Var_22 = (MR_Integer) 1;
    (env_ptr)->mercury__benchmarking__benchmark_nondet_5_p_0_env_0__Var_21 = (MR_Integer) ((MR_Unsigned) *((env_ptr)->mercury__benchmarking__benchmark_nondet_5_p_0_env_0__Count_8) + (MR_Unsigned) (env_ptr)->mercury__benchmarking__benchmark_nondet_5_p_0_env_0__Var_22);
    mercury__mutvar__set_mutvar_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (env_ptr)->mercury__benchmarking__benchmark_nondet_5_p_0_env_0__SolutionCounter_17, ((MR_Box) ((env_ptr)->mercury__benchmarking__benchmark_nondet_5_p_0_env_0__Var_21)));
    (env_ptr)->mercury__benchmarking__benchmark_nondet_5_p_0_env_0__succeeded = MR_FALSE;
    if ((env_ptr)->mercury__benchmarking__benchmark_nondet_5_p_0_env_0__succeeded)
      mercury__benchmarking__benchmark_nondet_5_p_0_1(env_ptr);
  }
}

static void MR_CALL 
mercury__benchmarking__benchmark_nondet_5_p_0_2(
  void * env_ptr_arg)
{
  struct mercury__benchmarking__benchmark_nondet_5_p_0_env_0_s * env_ptr = (struct mercury__benchmarking__benchmark_nondet_5_p_0_env_0_s *) (env_ptr_arg);

  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Cont, void *);

    (env_ptr)->mercury__benchmarking__benchmark_nondet_5_p_0_env_0__Var_20 = (MR_Integer) 0;
    mercury__mutvar__set_mutvar_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (env_ptr)->mercury__benchmarking__benchmark_nondet_5_p_0_env_0__SolutionCounter_17, ((MR_Box) ((env_ptr)->mercury__benchmarking__benchmark_nondet_5_p_0_env_0__Var_20)));
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(0, (env_ptr)->mercury__benchmarking__benchmark_nondet_5_p_0_env_0__Pred_6, (MR_Integer) 1))));
    func_0(((MR_Box) ((env_ptr)->mercury__benchmarking__benchmark_nondet_5_p_0_env_0__Pred_6)), (env_ptr)->mercury__benchmarking__benchmark_nondet_5_p_0_env_0__In_7, &(env_ptr)->mercury__benchmarking__benchmark_nondet_5_p_0_env_0__Out0_18, mercury__benchmarking__benchmark_nondet_5_p_0_3, env_ptr);
  }
}

static void MR_CALL 
mercury__benchmarking__benchmark_nondet_5_p_0_4(
  void * env_ptr_arg)
{
  struct mercury__benchmarking__benchmark_nondet_5_p_0_env_0_s * env_ptr = (struct mercury__benchmarking__benchmark_nondet_5_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->mercury__benchmarking__benchmark_nondet_5_p_0_env_0__commit_0) == 0)
    {
      mercury__benchmarking__repeat_1_p_0((env_ptr)->mercury__benchmarking__benchmark_nondet_5_p_0_env_0__Repeats_9, mercury__benchmarking__benchmark_nondet_5_p_0_2, env_ptr);
      (env_ptr)->mercury__benchmarking__benchmark_nondet_5_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->mercury__benchmarking__benchmark_nondet_5_p_0_env_0__succeeded = MR_TRUE;
}

void MR_CALL 
mercury__benchmarking__benchmark_nondet_5_p_0(
  MR_Word TypeInfo_for_T1_14,
  MR_Word TypeInfo_for_T2_15,
  MR_Word Pred_6,
  MR_Box In_7,
  MR_Integer * Count_8,
  MR_Integer Repeats_9,
  MR_Integer * Time_10)
{
  struct mercury__benchmarking__benchmark_nondet_5_p_0_env_0_s env;

  (env).mercury__benchmarking__benchmark_nondet_5_p_0_env_0__Pred_6 = Pred_6;
  (env).mercury__benchmarking__benchmark_nondet_5_p_0_env_0__In_7 = In_7;
  (env).mercury__benchmarking__benchmark_nondet_5_p_0_env_0__Count_8 = Count_8;
  (env).mercury__benchmarking__benchmark_nondet_5_p_0_env_0__Repeats_9 = Repeats_9;
  {
    MR_Integer StartTime_11;
    MR_Integer EndTime_12;
    MR_Integer Time0_13;
    MR_Box conv2_Count_8;
    MR_Word TypeCtorInfo_16_25;
    MR_Box conv3_Y;

{
#define MR_PROC_LABEL mercury__benchmarking__benchmark_nondet_5_p_0

	MR_Integer Time;

		{

    Time = MR_get_user_cpu_milliseconds();


		;}
#undef MR_PROC_LABEL
	StartTime_11  = Time;
}
    mercury__mutvar__new_mutvar_2_p_1((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) ((MR_Integer) 0)), &(env).mercury__benchmarking__benchmark_nondet_5_p_0_env_0__SolutionCounter_17);
    mercury__benchmarking__benchmark_nondet_5_p_0_4(&env);
    if (!((env).mercury__benchmarking__benchmark_nondet_5_p_0_env_0__succeeded))
    {
    }
    mercury__mutvar__get_mutvar_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (env).mercury__benchmarking__benchmark_nondet_5_p_0_env_0__SolutionCounter_17, &conv2_Count_8);
    *((env).mercury__benchmarking__benchmark_nondet_5_p_0_env_0__Count_8) = ((MR_Integer) (conv2_Count_8));
{
#define MR_PROC_LABEL mercury__benchmarking__benchmark_nondet_5_p_0

	MR_Integer Time;

		{

    Time = MR_get_user_cpu_milliseconds();


		;}
#undef MR_PROC_LABEL
	EndTime_12  = Time;
}
    Time0_13 = (MR_Integer) ((MR_Unsigned) EndTime_12 - (MR_Unsigned) StartTime_11);
{
#define MR_PROC_LABEL mercury__benchmarking__benchmark_nondet_5_p_0

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) ((MR_Box) (Time0_13)) ;
		{

    Y = X;


		;}
#undef MR_PROC_LABEL
	conv3_Y  = (MR_Box) Y;
    *Time_10 = ((MR_Integer) (conv3_Y));
}
  }
}

static void MR_CALL 
mercury__benchmarking__repeat_1_p_0(
  MR_Integer N_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (N_2 > (MR_Integer) 0);

    // setup for model_non tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      cont(cont_env_ptr);
      {
        MR_Integer Var_4 = (MR_Integer) ((MR_Unsigned) N_2 - (MR_Unsigned) 1);
        MR_Integer next_value_of_N_2 = Var_4;

        // direct tailcall eliminated
        ;
        N_2 = next_value_of_N_2;
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__benchmarking__benchmark_det_io_7_p_0(
  MR_Word TypeInfo_for_T1_17,
  MR_Word TypeInfo_for_T2_18,
  MR_Word TypeInfo_for_State_19,
  MR_Word Pred_8,
  MR_Box InA_9,
  MR_Box * OutA_10,
  MR_Box InB_11,
  MR_Box * OutB_12,
  MR_Integer Repeats_13,
  MR_Integer * Time_14)
{
  MR_Integer StartTime_15;
  MR_Integer EndTime_16;

{
#define MR_PROC_LABEL mercury__benchmarking__benchmark_det_io_7_p_0

	MR_Integer Time;

		{

    Time = MR_get_user_cpu_milliseconds();


		;}
#undef MR_PROC_LABEL
	StartTime_15  = Time;
}
  mercury__benchmarking__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_100_101_116_95_108_111_111_112_95_105_111_95_95_91_49_44_32_50_44_32_51_93_95_48_6_p_0(Pred_8, InA_9, OutA_10, InB_11, OutB_12, Repeats_13);
{
#define MR_PROC_LABEL mercury__benchmarking__benchmark_det_io_7_p_0

	MR_Integer Time;

		{

    Time = MR_get_user_cpu_milliseconds();


		;}
#undef MR_PROC_LABEL
	EndTime_16  = Time;
}
  *Time_14 = (MR_Integer) ((MR_Unsigned) EndTime_16 - (MR_Unsigned) StartTime_15);
}

static void MR_CALL 
mercury__benchmarking__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_100_101_116_95_108_111_111_112_95_105_111_95_95_91_49_44_32_50_44_32_51_93_95_48_6_p_0(
  MR_Word Pred_7,
  MR_Box InA_8,
  MR_Box * OutA_9,
  MR_Box InB_10,
  MR_Box * OutB_11,
  MR_Integer Repeats_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Box OutA0_13;
    MR_Box OutB0_14;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_7, (MR_Integer) 1))));

    // setup for model_det tailcalls optimized into a loop
    ;
    func_0(((MR_Box) (Pred_7)), InA_8, &OutA0_13, InB_10, &OutB0_14);
{
#define MR_PROC_LABEL mercury__benchmarking__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_100_101_116_95_108_111_111_112_95_105_111_95_95_91_49_44_32_50_44_32_51_93_95_48_6_p_0

	MR_Word X;

	X = (MR_Word) OutA0_13 ;
		{

    ML_benchmarking_dummy_word = (MR_Word) X;


		;}
#undef MR_PROC_LABEL
}
    succeeded = (Repeats_12 > (MR_Integer) 1);
    if (succeeded)
    {
      MR_Integer Var_16 = (MR_Integer) ((MR_Unsigned) Repeats_12 - (MR_Unsigned) 1);
      MR_Box next_value_of_InB_10 = OutB0_14;
      MR_Integer next_value_of_Repeats_12 = Var_16;

      // direct tailcall eliminated
      ;
      InB_10 = next_value_of_InB_10;
      Repeats_12 = next_value_of_Repeats_12;
      continue;
    }
    else
    {
      *OutA_9 = OutA0_13;
      *OutB_11 = OutB0_14;
    }
    break;
  }
}

void MR_CALL 
mercury__benchmarking__benchmark_func_5_p_0(
  MR_Word TypeInfo_for_T1_14,
  MR_Word TypeInfo_for_T2_15,
  MR_Word Func_6,
  MR_Box In_7,
  MR_Box * Out_8,
  MR_Integer Repeats_9,
  MR_Integer * Time_10)
{
  MR_Integer StartTime_11;
  MR_Integer EndTime_12;
  MR_Integer Time0_13;
  MR_Box conv0_Y;

{
#define MR_PROC_LABEL mercury__benchmarking__benchmark_func_5_p_0

	MR_Integer Time;

		{

    Time = MR_get_user_cpu_milliseconds();


		;}
#undef MR_PROC_LABEL
	StartTime_11  = Time;
}
  mercury__benchmarking__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_102_117_110_99_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_p_0(Func_6, In_7, Out_8, Repeats_9);
{
#define MR_PROC_LABEL mercury__benchmarking__benchmark_func_5_p_0

	MR_Integer Time;

		{

    Time = MR_get_user_cpu_milliseconds();


		;}
#undef MR_PROC_LABEL
	EndTime_12  = Time;
}
  Time0_13 = (MR_Integer) ((MR_Unsigned) EndTime_12 - (MR_Unsigned) StartTime_11);
{
#define MR_PROC_LABEL mercury__benchmarking__benchmark_func_5_p_0

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) ((MR_Box) (Time0_13)) ;
		{

    Y = X;


		;}
#undef MR_PROC_LABEL
	conv0_Y  = (MR_Box) Y;
  *Time_10 = ((MR_Integer) (conv0_Y));
}
}

static void MR_CALL 
mercury__benchmarking__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_102_117_110_99_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_p_0(
  MR_Word Func_5,
  MR_Box In_6,
  MR_Box * Out_7,
  MR_Integer Repeats_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Box Out0_9;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, Func_5, (MR_Integer) 1))));

    // setup for model_det tailcalls optimized into a loop
    ;
    Out0_9 = func_0(((MR_Box) (Func_5)), In_6);
{
#define MR_PROC_LABEL mercury__benchmarking__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_102_117_110_99_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_p_0

	MR_Word X;

	X = (MR_Word) Out0_9 ;
		{

    ML_benchmarking_dummy_word = (MR_Word) X;


		;}
#undef MR_PROC_LABEL
}
    succeeded = (Repeats_8 > (MR_Integer) 1);
    if (succeeded)
    {
      MR_Integer Var_11 = (MR_Integer) ((MR_Unsigned) Repeats_8 - (MR_Unsigned) 1);
      MR_Integer next_value_of_Repeats_8 = Var_11;

      // direct tailcall eliminated
      ;
      Repeats_8 = next_value_of_Repeats_8;
      continue;
    }
    else
      *Out_7 = Out0_9;
    break;
  }
}

void MR_CALL 
mercury__benchmarking__benchmark_det_5_p_1(
  MR_Word TypeInfo_for_T1_14,
  MR_Word TypeInfo_for_T2_15,
  MR_Word Pred_6,
  MR_Box In_7,
  MR_Box * Out_8,
  MR_Integer Repeats_9,
  MR_Integer * Time_10)
{
  MR_Integer StartTime_11;
  MR_Integer EndTime_12;
  MR_Integer Time0_13;
  MR_Box conv0_Y;

{
#define MR_PROC_LABEL mercury__benchmarking__benchmark_det_5_p_1

	MR_Integer Time;

		{

    Time = MR_get_user_cpu_milliseconds();


		;}
#undef MR_PROC_LABEL
	StartTime_11  = Time;
}
  mercury__benchmarking__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_100_101_116_95_108_111_111_112_95_95_91_49_44_32_50_93_95_49_4_p_1(Pred_6, In_7, Out_8, Repeats_9);
{
#define MR_PROC_LABEL mercury__benchmarking__benchmark_det_5_p_1

	MR_Integer Time;

		{

    Time = MR_get_user_cpu_milliseconds();


		;}
#undef MR_PROC_LABEL
	EndTime_12  = Time;
}
  Time0_13 = (MR_Integer) ((MR_Unsigned) EndTime_12 - (MR_Unsigned) StartTime_11);
{
#define MR_PROC_LABEL mercury__benchmarking__benchmark_det_5_p_1

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) ((MR_Box) (Time0_13)) ;
		{

    Y = X;


		;}
#undef MR_PROC_LABEL
	conv0_Y  = (MR_Box) Y;
  *Time_10 = ((MR_Integer) (conv0_Y));
}
}

static void MR_CALL 
mercury__benchmarking__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_100_101_116_95_108_111_111_112_95_95_91_49_44_32_50_93_95_49_4_p_1(
  MR_Word Pred_5,
  MR_Box In_6,
  MR_Box * Out_7,
  MR_Integer Repeats_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Box Out0_9;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_5, (MR_Integer) 1))));

    // setup for model_det tailcalls optimized into a loop
    ;
    func_0(((MR_Box) (Pred_5)), In_6, &Out0_9);
{
#define MR_PROC_LABEL mercury__benchmarking__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_100_101_116_95_108_111_111_112_95_95_91_49_44_32_50_93_95_49_4_p_1

	MR_Word X;

	X = (MR_Word) Out0_9 ;
		{

    ML_benchmarking_dummy_word = (MR_Word) X;


		;}
#undef MR_PROC_LABEL
}
    succeeded = (Repeats_8 > (MR_Integer) 1);
    if (succeeded)
    {
      MR_Integer Var_11 = (MR_Integer) ((MR_Unsigned) Repeats_8 - (MR_Unsigned) 1);
      MR_Integer next_value_of_Repeats_8 = Var_11;

      // direct tailcall eliminated
      ;
      Repeats_8 = next_value_of_Repeats_8;
      continue;
    }
    else
      *Out_7 = Out0_9;
    break;
  }
}

void MR_CALL 
mercury__benchmarking__benchmark_det_5_p_0(
  MR_Word TypeInfo_for_T1_14,
  MR_Word TypeInfo_for_T2_15,
  MR_Word Pred_6,
  MR_Box In_7,
  MR_Box * Out_8,
  MR_Integer Repeats_9,
  MR_Integer * Time_10)
{
  MR_Integer StartTime_11;
  MR_Integer EndTime_12;
  MR_Integer Time0_13;
  MR_Box conv0_Y;

{
#define MR_PROC_LABEL mercury__benchmarking__benchmark_det_5_p_0

	MR_Integer Time;

		{

    Time = MR_get_user_cpu_milliseconds();


		;}
#undef MR_PROC_LABEL
	StartTime_11  = Time;
}
  mercury__benchmarking__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_100_101_116_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_p_0(Pred_6, In_7, Out_8, Repeats_9);
{
#define MR_PROC_LABEL mercury__benchmarking__benchmark_det_5_p_0

	MR_Integer Time;

		{

    Time = MR_get_user_cpu_milliseconds();


		;}
#undef MR_PROC_LABEL
	EndTime_12  = Time;
}
  Time0_13 = (MR_Integer) ((MR_Unsigned) EndTime_12 - (MR_Unsigned) StartTime_11);
{
#define MR_PROC_LABEL mercury__benchmarking__benchmark_det_5_p_0

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) ((MR_Box) (Time0_13)) ;
		{

    Y = X;


		;}
#undef MR_PROC_LABEL
	conv0_Y  = (MR_Box) Y;
  *Time_10 = ((MR_Integer) (conv0_Y));
}
}

static void MR_CALL 
mercury__benchmarking__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_100_101_116_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_p_0(
  MR_Word Pred_5,
  MR_Box In_6,
  MR_Box * Out_7,
  MR_Integer Repeats_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Box Out0_9;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_5, (MR_Integer) 1))));

    // setup for model_det tailcalls optimized into a loop
    ;
    func_0(((MR_Box) (Pred_5)), In_6, &Out0_9);
{
#define MR_PROC_LABEL mercury__benchmarking__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_100_101_116_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_p_0

	MR_Word X;

	X = (MR_Word) Out0_9 ;
		{

    ML_benchmarking_dummy_word = (MR_Word) X;


		;}
#undef MR_PROC_LABEL
}
    succeeded = (Repeats_8 > (MR_Integer) 1);
    if (succeeded)
    {
      MR_Integer Var_11 = (MR_Integer) ((MR_Unsigned) Repeats_8 - (MR_Unsigned) 1);
      MR_Integer next_value_of_Repeats_8 = Var_11;

      // direct tailcall eliminated
      ;
      Repeats_8 = next_value_of_Repeats_8;
      continue;
    }
    else
      *Out_7 = Out0_9;
    break;
  }
}

void MR_CALL 
mercury__benchmarking__report_full_memory_stats_0_p_0(void)
{
  MR_Word StdErr_4;
  MR_Box Var_6;

{
#define MR_PROC_LABEL mercury__benchmarking__report_full_memory_stats_0_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stderr;


		;}
#undef MR_PROC_LABEL
	Var_6  = (MR_Box) Stream;
}
  StdErr_4 = (MR_Word) (Var_6);
  mercury__benchmarking__report_full_memory_stats_3_p_0(StdErr_4);
  mercury__builtin__impure_true_0_p_0();
}

void MR_CALL 
mercury__benchmarking__report_stats_0_p_0(void)
{
  MR_Word StdErr_4;
  MR_Box Var_6;

{
#define MR_PROC_LABEL mercury__benchmarking__report_stats_0_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stderr;


		;}
#undef MR_PROC_LABEL
	Var_6  = (MR_Box) Stream;
}
  StdErr_4 = (MR_Word) (Var_6);
  mercury__benchmarking__report_standard_stats_3_p_0(StdErr_4);
  mercury__builtin__impure_true_0_p_0();
}

void MR_CALL 
mercury__benchmarking__report_memory_attribution_1_p_0(
  MR_String Label_2)
{
{
#define MR_PROC_LABEL mercury__benchmarking__report_memory_attribution_1_p_0

	MR_String Label;
	MR_Word Collect;

	Label = Label_2 ;
	Collect = (MR_Integer) 1 ;
		{

    MR_bool run_collect = (Collect) ? MR_TRUE : MR_FALSE;

#ifdef  MR_MPROF_PROFILE_MEMORY_ATTRIBUTION
    MR_report_memory_attribution(Label, run_collect);
#else
    (void) Label;
#endif


		;}
#undef MR_PROC_LABEL
}
  mercury__builtin__impure_true_0_p_0();
}

void MR_CALL 
mercury__benchmarking__report_memory_attribution_3_p_0(
  MR_String Label_4)
{
{
#define MR_PROC_LABEL mercury__benchmarking__report_memory_attribution_3_p_0

	MR_String Label;
	MR_Word Collect;

	Label = Label_4 ;
	Collect = (MR_Integer) 1 ;
		{

    MR_bool run_collect = (Collect) ? MR_TRUE : MR_FALSE;

#ifdef  MR_MPROF_PROFILE_MEMORY_ATTRIBUTION
    MR_report_memory_attribution(Label, run_collect);
#else
    (void) Label;
#endif


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__benchmarking__report_memory_attribution_2_p_0(
  MR_String Label_3,
  MR_Word Collect_4)
{
{
#define MR_PROC_LABEL mercury__benchmarking__report_memory_attribution_2_p_0

	MR_String Label;
	MR_Word Collect;

	Label = Label_3 ;
	Collect = Collect_4 ;
		{

    MR_bool run_collect = (Collect) ? MR_TRUE : MR_FALSE;

#ifdef  MR_MPROF_PROFILE_MEMORY_ATTRIBUTION
    MR_report_memory_attribution(Label, run_collect);
#else
    (void) Label;
#endif


		;}
#undef MR_PROC_LABEL
}
  mercury__builtin__impure_true_0_p_0();
}

void MR_CALL 
mercury__benchmarking__report_memory_attribution_4_p_0(
  MR_String Label_1,
  MR_Word Collect_2)
{
{
#define MR_PROC_LABEL mercury__benchmarking__report_memory_attribution_4_p_0

	MR_String Label;
	MR_Word Collect;

	Label = Label_1 ;
	Collect = Collect_2 ;
		{

    MR_bool run_collect = (Collect) ? MR_TRUE : MR_FALSE;

#ifdef  MR_MPROF_PROFILE_MEMORY_ATTRIBUTION
    MR_report_memory_attribution(Label, run_collect);
#else
    (void) Label;
#endif


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__benchmarking__report_tabling_statistics_2_p_0(void)
{
  MR_Box Stream_9;

{
#define MR_PROC_LABEL mercury__benchmarking__report_tabling_statistics_2_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stderr;


		;}
#undef MR_PROC_LABEL
	Stream_9  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__benchmarking__report_tabling_statistics_2_p_0

	MercuryFilePtr Stream;

	Stream = (MercuryFilePtr)Stream_9 ;
		{

    MR_table_report_statistics(MR_file(*Stream));


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__benchmarking__report_tabling_statistics_3_p_0(
  MR_Word OutputStream_4)
{
  MR_Box Stream_6 = (MR_Box) (OutputStream_4);

{
#define MR_PROC_LABEL mercury__benchmarking__report_tabling_statistics_3_p_0

	MercuryFilePtr Stream;

	Stream = (MercuryFilePtr)Stream_6 ;
		{

    MR_table_report_statistics(MR_file(*Stream));


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__benchmarking__report_full_memory_stats_2_p_0(void)
{
  MR_Word StdErr_4;
  MR_Box Var_8;

{
#define MR_PROC_LABEL mercury__benchmarking__report_full_memory_stats_2_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stderr;


		;}
#undef MR_PROC_LABEL
	Var_8  = (MR_Box) Stream;
}
  StdErr_4 = (MR_Word) (Var_8);
  mercury__benchmarking__report_full_memory_stats_3_p_0(StdErr_4);
}

void MR_CALL 
mercury__benchmarking__report_standard_stats_2_p_0(void)
{
  MR_Word StdErr_4;
  MR_Box Var_8;

{
#define MR_PROC_LABEL mercury__benchmarking__report_standard_stats_2_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stderr;


		;}
#undef MR_PROC_LABEL
	Var_8  = (MR_Box) Stream;
}
  StdErr_4 = (MR_Word) (Var_8);
  mercury__benchmarking__report_standard_stats_3_p_0(StdErr_4);
}

void MR_CALL 
mercury__benchmarking__report_stats_3_p_0(
  MR_String Selector_4)
{
  MR_Word StdErr_6;
  MR_Box Var_10;

{
#define MR_PROC_LABEL mercury__benchmarking__report_stats_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stderr;


		;}
#undef MR_PROC_LABEL
	Var_10  = (MR_Box) Stream;
}
  StdErr_6 = (MR_Word) (Var_10);
  mercury__benchmarking__report_stats_4_p_0(StdErr_6, Selector_4);
}

void MR_CALL 
mercury__benchmarking__report_stats_4_p_0(
  MR_Word Stream_5,
  MR_String Selector_6)
{
  MR_bool succeeded = (strcmp(Selector_6, (MR_String) "standard") == 0);

  if (succeeded)
    mercury__benchmarking__report_standard_stats_3_p_0(Stream_5);
  else
  {
    succeeded = (strcmp(Selector_6, (MR_String) "full_memory_stats") == 0);
    if (succeeded)
      mercury__benchmarking__report_full_memory_stats_3_p_0(Stream_5);
    else
    {
      succeeded = (strcmp(Selector_6, (MR_String) "tabling") == 0);
      if (succeeded)
      {
        MR_Box Stream_22 = (MR_Box) (Stream_5);

{
#define MR_PROC_LABEL mercury__benchmarking__report_stats_4_p_0

	MercuryFilePtr Stream;

	Stream = (MercuryFilePtr)Stream_22 ;
		{

    MR_table_report_statistics(MR_file(*Stream));


		;}
#undef MR_PROC_LABEL
}
      }
      else
      {
        MR_String Message_8;
        MR_String Var_20;

        mercury__string__append_3_p_2(Selector_6, (MR_String) "\'", &Var_20);
        mercury__string__append_3_p_2((MR_String) "unknown selector \140", Var_20, &Message_8);
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140benchmarking.report_stats\'/4", Message_8);
          return;
        }
      }
    }
  }
}

void MR_CALL 
mercury__benchmarking__report_full_memory_stats_3_p_0(
  MR_Word OutputStream_4)
{
  MR_bool succeeded;
  MR_Box Stream_6 = (MR_Box) (OutputStream_4);
  MR_Box Error_7;

{
#define MR_PROC_LABEL mercury__benchmarking__report_full_memory_stats_3_p_0

	MercuryFilePtr Stream;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_6 ;
		{

    Error = MR_report_full_memory_stats(MR_file(*Stream),
        &MR_line_number(*Stream));


		;}
#undef MR_PROC_LABEL
	Error_7  = (MR_Box) Error;
}
{
#define MR_PROC_LABEL mercury__benchmarking__report_full_memory_stats_3_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	Error = (MR_Integer)Error_7 ;
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (!(succeeded))
  {
    MR_Word Var_12;

    mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_7, (MR_String) "error writing to output file: ", &Var_12);
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (Var_12)));
      return;
    }
  }
}

void MR_CALL 
mercury__benchmarking__report_standard_stats_3_p_0(
  MR_Word OutputStream_4)
{
  MR_bool succeeded;
  MR_Box Stream_6 = (MR_Box) (OutputStream_4);
  MR_Box Error_7;

{
#define MR_PROC_LABEL mercury__benchmarking__report_standard_stats_3_p_0

	MercuryFilePtr Stream;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_6 ;
		{

    Error = MR_report_standard_stats(MR_file(*Stream),
        &MR_line_number(*Stream));


		;}
#undef MR_PROC_LABEL
	Error_7  = (MR_Box) Error;
}
{
#define MR_PROC_LABEL mercury__benchmarking__report_standard_stats_3_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	Error = (MR_Integer)Error_7 ;
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (!(succeeded))
  {
    MR_Word Var_12;

    mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_7, (MR_String) "error writing to output file: ", &Var_12);
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (Var_12)));
      return;
    }
  }
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

// Ensure everything is compiled with the same grade.
const char *mercury__benchmarking__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module benchmarking.
