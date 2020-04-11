/*
** Automatically generated from `par_builtin.m'
** by the Mercury compiler,
** version rotd-2020-04-11
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


// :- module par_builtin.
// :- implementation.

/*
INIT mercury__par_builtin__init
ENDINIT
*/

#include "par_builtin.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "benchmarking.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "calendar.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "dir.mih"
#include "enum.mih"
#include "erlang_rtti_implementation.mih"
#include "exception.mih"
#include "float.mih"
#include "int.mih"
#include "int16.mih"
#include "int32.mih"
#include "int64.mih"
#include "int8.mih"
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
#include "term_conversion.mih"
#include "term_io.mih"
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
#include "stream.string_writer.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




static MR_Integer MR_CALL 
mercury__par_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static MR_bool MR_CALL 
mercury__par_builtin____Unify____future_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__par_builtin____Compare____future_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__par_builtin____Unify____loop_control_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__par_builtin____Compare____loop_control_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mercury__par_builtin_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__par_builtin_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__par_builtin_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__par_builtin_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__par_builtin_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__par_builtin_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__par_builtin_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__par_builtin_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__par_builtin_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
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
#include "math.mh"
#include "par_builtin.mh"
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
#line 210 "par_builtin.m"

#if !defined(MR_HIGHLEVEL_CODE) && defined(MR_THREAD_SAFE)

    MR_BEGIN_MODULE(hand_written_par_builtin_module)
        MR_init_entry_ai(mercury__par_builtin__wait_resume);
    MR_BEGIN_CODE

    MR_define_entry(mercury__par_builtin__wait_resume);
    {
        MR_Future *Future;

        // Restore the address of the future after resuming.
        Future = (MR_Future *) MR_sv(1);
        MR_decr_sp(1);

        assert(Future->MR_fut_signalled);

        // Return to the caller of par_builtin.wait.
        MR_r1 = Future->MR_fut_value;
        MR_proceed();
    }
    MR_END_MODULE

#endif

    // Forward decls to suppress gcc warnings.
    void mercury_sys_init_par_builtin_modules_init(void);
    void mercury_sys_init_par_builtin_modules_init_type_tables(void);
    #ifdef  MR_DEEP_PROFILING
    void mercury_sys_init_par_builtin_modules_write_out_proc_statics(
        FILE *deep_fp, FILE *procrep_fp);
    #endif

    void mercury_sys_init_par_builtin_modules_init(void)
    {
    #if (!defined MR_HIGHLEVEL_CODE) && (defined MR_THREAD_SAFE)
        hand_written_par_builtin_module();
    #endif
    }

    void mercury_sys_init_par_builtin_modules_init_type_tables(void)
    {
        // No types to register.
    }

    #ifdef  MR_DEEP_PROFILING
    void mercury_sys_init_par_builtin_modules_write_out_proc_statics(
        FILE *deep_fp, FILE *procrep_fp)
    {
        // No proc_statics to write out.
    }
    #endif

#line 295 "par_builtin.m"


void mercury_sys_init_lc_init(void);
void mercury_sys_init_lc_init_type_tables(void);
#ifdef  MR_DEEP_PROFILING
void mercury_sys_init_lc_write_out_proc_statics(FILE *deep_fp,
    FILE *procrep_fp);
#endif


#ifdef MR_HIGHLEVEL_CODE

void MR_CALL
mercury__par_builtin__lc_finish_1_p_0(MR_Box lc)
{
    MR_fatal_error("lc_finish is unavailable with --highlevel-code");
}

void MR_CALL
mercury__par_builtin__lc_wait_free_slot_2_p_0(MR_Box lc, MR_Integer *slot)
{
    MR_fatal_error("lc_wait_free_slot is unavailable with --highlevel-code");
}

#else // ! MR_HIGHLEVEL_CODE

MR_def_extern_entry(par_builtin__lc_finish_1_0)
MR_def_extern_entry(par_builtin__lc_wait_free_slot_2_0)

MR_decl_label1(par_builtin__lc_finish_1_0, 1)

MR_BEGIN_MODULE(par_builtin_module_lc_finish)
    MR_init_entry1(par_builtin__lc_finish_1_0);
    MR_INIT_PROC_LAYOUT_ADDR(mercury__par_builtin__lc_finish_1_0);
    MR_init_label1(par_builtin__lc_finish_1_0,1);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
    #undef MR_maybe_local_thread_engine_base
    #define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif

MR_define_entry(mercury__par_builtin__lc_finish_1_0)
    MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE

    MR_incr_sp(1);
    MR_sv(1) = MR_r1; // LC

#if defined(MR_THREAD_SAFE) && defined(MR_LL_PARALLEL_CONJ)
    {
        MR_LoopControl  *LC;

        LC = (MR_LoopControl *) MR_r1;
        MR_lc_finish_part1(LC, MR_LABEL_AP(par_builtin__lc_finish_1_0_i1));
    }
#else
    MR_fatal_error("lc_finish is unavailable in this grade");
#endif

MR_def_label(par_builtin__lc_finish_1_0,1)
    MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE

#if defined(MR_THREAD_SAFE) && defined(MR_LL_PARALLEL_CONJ)
    {
        MR_LoopControl  *LC;

        LC = (MR_LoopControl *) MR_sv(1);
        MR_lc_finish_part2(LC);
    }
#endif

    MR_decr_sp(1);
    MR_proceed();

#ifdef MR_maybe_local_thread_engine_base
    #undef MR_maybe_local_thread_engine_base
    #define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_label1(par_builtin__lc_wait_free_slot_2_0, 1)

MR_BEGIN_MODULE(par_builtin_module_lc_wait_free_slot)
    MR_init_entry1(par_builtin__lc_wait_free_slot_2_0);
    MR_INIT_PROC_LAYOUT_ADDR(mercury__par_builtin__lc_wait_free_slot_2_0);
    MR_init_label1(par_builtin__lc_wait_free_slot_2_0,1);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
    #undef MR_maybe_local_thread_engine_base
    #define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif

MR_define_entry(mercury__par_builtin__lc_wait_free_slot_2_0)
    MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE

    MR_incr_sp(1);
    MR_sv(1) = MR_r1; // LC
    // LC must be saved to the stack so that we can resume from the label below
    // and retrieve it.

MR_def_label(par_builtin__lc_wait_free_slot_2_0,1)
    MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE

#if defined(MR_LL_PARALLEL_CONJ)
    {
        MR_LoopControl  *lc;
        MR_Unsigned     lcs_idx;

        lc = (MR_LoopControl *) MR_sv(1);
        MR_lc_wait_free_slot(lc, lcs_idx,
            MR_LABEL_AP(par_builtin__lc_wait_free_slot_2_0_i1));
        MR_r1 = (MR_Word)lcs_idx;
    }
#else
    MR_fatal_error("lc_wait_free_slot is unavailable in this grade");
#endif

    MR_decr_sp(1);
    MR_proceed();

#ifdef MR_maybe_local_thread_engine_base
    #undef MR_maybe_local_thread_engine_base
    #define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

#endif // ! MR_HIGHLEVEL_CODE

// Module initialization.
/*
INIT mercury_sys_init_lc
*/

void
mercury_sys_init_lc_init(void)
{
#ifndef MR_HIGHLEVEL_CODE
    par_builtin_module_lc_finish();
    par_builtin_module_lc_wait_free_slot();
#endif
}

void
mercury_sys_init_lc_init_type_tables(void)
{
    // No types to register.
}

#ifdef  MR_DEEP_PROFILING
void
mercury_sys_init_lc_write_out_proc_statics(FILE *deep_fp,
    FILE *procrep_fp)
{
    // The deep profiler shouldn't notice loop control predicates.
}
#endif





const MR_TypeCtorInfo_Struct mercury__par_builtin__par_builtin__type_ctor_info_future_1 = {
  (MR_Integer) 1,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_FOREIGN,
  ((MR_Box) (mercury__par_builtin____Unify____future_1_0_10001)),
  ((MR_Box) (mercury__par_builtin____Compare____future_1_0_10001)),
  (MR_String) "par_builtin",
  (MR_String) "future",
  {     NULL },
  {     NULL },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

const MR_TypeCtorInfo_Struct mercury__par_builtin__par_builtin__type_ctor_info_loop_control_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_FOREIGN,
  ((MR_Box) (mercury__par_builtin____Unify____loop_control_0_0_10001)),
  ((MR_Box) (mercury__par_builtin____Compare____loop_control_0_0_10001)),
  (MR_String) "par_builtin",
  (MR_String) "loop_control",
  {     NULL },
  {     NULL },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static MR_Integer MR_CALL 
mercury__par_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  return (MR_Integer) 1200;
}

void MR_CALL 
mercury__par_builtin____Compare____loop_control_0_0(
  MR_Word * HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = (MR_Word) (HeadVar__2_2);
    MR_Word Cast_HeadVar2_5 = (MR_Word) (HeadVar__3_3);

    mercury__builtin____Compare____c_pointer_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
mercury__par_builtin____Unify____loop_control_0_0(
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = (MR_Word) (HeadVar__1_1);
    MR_Word Cast_HeadVar2_4 = (MR_Word) (HeadVar__2_2);

    succeeded = mercury__builtin____Unify____c_pointer_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
mercury__par_builtin____Compare____future_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = (MR_Word) (HeadVar__2_2);
    MR_Word Cast_HeadVar2_5 = (MR_Word) (HeadVar__3_3);

    mercury__builtin____Compare____c_pointer_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
mercury__par_builtin____Unify____future_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = (MR_Word) (HeadVar__1_1);
    MR_Word Cast_HeadVar2_4 = (MR_Word) (HeadVar__2_2);

    succeeded = mercury__builtin____Unify____c_pointer_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
mercury__par_builtin__par_cond_close_stats_file_2_p_0(void)
{
  {
{
#define MR_PROC_LABEL mercury__par_builtin__par_cond_close_stats_file_2_p_0


		{

#if defined(MR_LL_PARALLEL_CONJ) &&         defined(MR_DEBUG_RUNTIME_GRANULARITY_CONTROL)
    MR_write_out_conditional_parallelism_log();
#else
    MR_fatal_error("par_cond_close_stats_file is unavailable in this grade");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

MR_bool MR_CALL 
mercury__par_builtin__evaluate_parallelism_condition_0_p_0(void)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__par_builtin__evaluate_parallelism_condition_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    // All uses of this predicate should override the body.
    MR_fatal_error("evaluate_parallelism_condition called");


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

void MR_CALL 
mercury__par_builtin__lc_default_num_contexts_1_p_0(
  MR_Integer * NumContexts_1)
{
  {
{
#define MR_PROC_LABEL mercury__par_builtin__lc_default_num_contexts_1_p_0

	MR_Integer NumContexts;

		{

    NumContexts = MR_num_contexts_per_loop_control;


		;}
#undef MR_PROC_LABEL
	 *NumContexts_1  = NumContexts;
}
  }
}

void MR_CALL 
mercury__par_builtin__lc_join_and_terminate_2_p_0(
  MR_Box LC_1,
  MR_Integer LCS_2)
{
  {
{
#define MR_PROC_LABEL mercury__par_builtin__lc_join_and_terminate_2_p_0

	MR_LoopControl * LC;
	MR_Integer LCS;

	LC = (MR_LoopControl *) LC_1 ;
	LCS =  LCS_2 ;
		{

#if defined(MR_THREAD_SAFE) && defined(MR_LL_PARALLEL_CONJ)
    MR_lc_join_and_terminate(LC, LCS);
#else
    MR_fatal_error("lc_join_and_terminate is unavailable in this grade");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__par_builtin__lc_wait_free_slot_2_p_0(
  MR_Box HeadVar__1_1,
  MR_Integer * HeadVar__2_2);

MR_bool MR_CALL 
mercury__par_builtin__lc_free_slot_2_p_0(
  MR_Box LC_1,
  MR_Integer * LCS_2)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__par_builtin__lc_free_slot_2_p_0

	MR_LoopControl * LC;
	MR_Integer LCS;
	MR_bool SUCCESS_INDICATOR;

	LC = (MR_LoopControl *) LC_1 ;
		{

#if defined(MR_THREAD_SAFE) && defined(MR_LL_PARALLEL_CONJ)
    {
        MR_Unsigned LCS_0;
        SUCCESS_INDICATOR = MR_lc_try_get_free_slot(LC, &LCS_0);
        LCS = (MR_Integer)LCS_0;
    }
#else
    MR_fatal_error("lc_free_slot is unavailable in this grade");
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *LCS_2  = LCS;
	}
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

void MR_CALL 
mercury__par_builtin__lc_finish_1_p_0(
  MR_Box HeadVar__1_1);

void MR_CALL 
mercury__par_builtin__lc_create_2_p_0(
  MR_Integer NumWorkers_1,
  MR_Box * LC_2)
{
  {
{
#define MR_PROC_LABEL mercury__par_builtin__lc_create_2_p_0

	MR_Integer NumWorkers;
	MR_LoopControl * LC;

	NumWorkers =  NumWorkers_1 ;
		{

#if defined(MR_THREAD_SAFE) && defined(MR_LL_PARALLEL_CONJ)
    LC = MR_lc_create(NumWorkers);
#else
    MR_fatal_error("lc_create is unavailable in this grade");
#endif


		;}
#undef MR_PROC_LABEL
	 *LC_2  = (MR_Box) LC;
}
  }
}

void MR_CALL 
mercury__par_builtin__signal_future_2_p_0(
  MR_Box Future_1,
  MR_Box Value_2)
{
  {
{
#define MR_PROC_LABEL mercury__par_builtin__signal_future_2_p_0

	MR_Future * Future;
	MR_Word Value;

	Future = (MR_Future *) Future_1 ;
	Value = (MR_Word) Value_2 ;
		{

    MR_par_builtin_signal_future(Future, Value);


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__par_builtin__get_future_2_p_0(
  MR_Box Future_1,
  MR_Box * Var_2)
{
  {
{
#define MR_PROC_LABEL mercury__par_builtin__get_future_2_p_0

	MR_Future * Future;
	MR_Word Var;

	Future = (MR_Future *) Future_1 ;
		{

    MR_par_builtin_get_future(Future, Var);


		;}
#undef MR_PROC_LABEL
	 *Var_2  = (MR_Box) Var;
}
  }
}

void MR_CALL 
mercury__par_builtin__wait_future_2_p_0(
  MR_Box Future_1,
  MR_Box * Var_2)
{
  {
{
#define MR_PROC_LABEL mercury__par_builtin__wait_future_2_p_0

	MR_Future * Future;
	MR_Word Var;

	Future = (MR_Future *) Future_1 ;
		{

    MR_par_builtin_wait_future(Future, Var);


		;}
#undef MR_PROC_LABEL
	 *Var_2  = (MR_Box) Var;
}
  }
}

void MR_CALL 
mercury__par_builtin__new_future_2_p_0(
  MR_Integer Name_1,
  MR_Box * Future_2)
{
  {
{
#define MR_PROC_LABEL mercury__par_builtin__new_future_2_p_0

	MR_Integer Name;
	MR_Future * Future;

	Name =  Name_1 ;
		{

    #ifdef MR_THREADSCOPE
        MR_par_builtin_new_future(Future, Name);
    #else
        MR_par_builtin_new_future(Future);
    #endif


		;}
#undef MR_PROC_LABEL
	 *Future_2  = (MR_Box) Future;
}
  }
}

static MR_bool MR_CALL 
mercury__par_builtin____Unify____future_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__par_builtin____Unify____future_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Box) (wrapper_arg_2)), ((MR_Box) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__par_builtin____Compare____future_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__par_builtin____Compare____future_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Box) (wrapper_arg_3)), ((MR_Box) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__par_builtin____Unify____loop_control_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__par_builtin____Unify____loop_control_0_0(((MR_Box) (wrapper_arg_1)), ((MR_Box) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__par_builtin____Compare____loop_control_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__par_builtin____Compare____loop_control_0_0(&conv0_HeadVar__1_1, ((MR_Box) (wrapper_arg_2)), ((MR_Box) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__par_builtin__init(void)
{
}

void mercury__par_builtin__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__par_builtin__par_builtin__type_ctor_info_future_1);
	MR_register_type_ctor_info(&mercury__par_builtin__par_builtin__type_ctor_info_loop_control_0);
}

void mercury__par_builtin__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__par_builtin__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module par_builtin.
