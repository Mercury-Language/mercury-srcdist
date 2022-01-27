/*
** Automatically generated from `thread.semaphore.m'
** by the Mercury compiler,
** version rotd-2013-03-26, configured for x86_64-apple-darwin12.2.1.
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


/* :- module thread.semaphore. */
/* :- implementation. */

/*
INIT mercury__thread__semaphore__init
ENDINIT
*/

#include "thread.semaphore.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "benchmarking.mih"
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
#include "thread.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "stream.string_writer.mih"






#line 89 "thread.semaphore.c"
static MR_bool MR_CALL 
mercury__thread__semaphore____Unify____semaphore_0_0_10001(
#line 92 "thread.semaphore.c"
  MR_Box mercury__thread__semaphore__wrapper_arg_1,
#line 94 "thread.semaphore.c"
  MR_Box mercury__thread__semaphore__wrapper_arg_2);

#line 97 "thread.semaphore.c"
static void MR_CALL 
mercury__thread__semaphore____Compare____semaphore_0_0_10001(
#line 100 "thread.semaphore.c"
  MR_Box * mercury__thread__semaphore__wrapper_arg_1,
#line 102 "thread.semaphore.c"
  MR_Box mercury__thread__semaphore__wrapper_arg_2,
#line 104 "thread.semaphore.c"
  MR_Box mercury__thread__semaphore__wrapper_arg_3);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__thread__semaphore__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);


static /* final */ const MR_Box mercury__thread__semaphore_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__thread__semaphore_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__thread__semaphore_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__thread__semaphore_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__thread__semaphore_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__thread__semaphore_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__thread__semaphore_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__thread__semaphore_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__thread__semaphore_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "thread.semaphore.mh"
#include "thread.mh"
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
#include "type_desc.mh"
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
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
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
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
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
#include "builtin.mh"
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
#line 175 "thread.semaphore.m"


void
ML_finalize_semaphore(void *obj, void *cd)
{
    ML_Semaphore    *sem;

    sem = (ML_Semaphore *) obj;

    #if defined(MR_THREAD_SAFE)
        #if defined(MR_HIGHLEVEL_CODE)
            pthread_cond_destroy(&(sem->cond));
        #endif
        pthread_mutex_destroy(&(sem->lock));
    #endif
}

#line 448 "thread.semaphore.m"

#ifndef MR_HIGHLEVEL_CODE

    MR_BEGIN_MODULE(hand_written_semaphores_module)
        MR_init_entry_ai(mercury__thread__semaphore__nop);
    MR_BEGIN_CODE

    MR_define_entry(mercury__thread__semaphore__nop);
    {
        MR_proceed();
    }
    MR_END_MODULE

#endif

    /* forward decls to suppress gcc warnings */
    void mercury_sys_init_semaphore_modules_init(void);
    void mercury_sys_init_semaphore_modules_init_type_tables(void);
    #ifdef  MR_DEEP_PROFILING
    void mercury_sys_init_semaphore_modules_write_out_proc_statics(
        FILE *deep_fp, FILE *procrep_fp);
    #endif

    void mercury_sys_init_semaphore_modules_init(void)
    {
    #ifndef MR_HIGHLEVEL_CODE
        hand_written_semaphores_module();
    #endif
    }

    void mercury_sys_init_semaphore_modules_init_type_tables(void)
    {
        /* no types to register */
    }

    #ifdef  MR_DEEP_PROFILING
    void mercury_sys_init_semaphore_modules_write_out_proc_statics(
        FILE *deep_fp, FILE *procrep_fp)
    {
        /* no proc_statics to write out */
    }
    #endif



#line 530 "thread.semaphore.c"
const MR_TypeCtorInfo_Struct mercury__thread__semaphore__thread__semaphore__type_ctor_info_semaphore_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_FOREIGN,
  ((MR_Box) (mercury__thread__semaphore____Unify____semaphore_0_0_10001)),
  ((MR_Box) (mercury__thread__semaphore____Compare____semaphore_0_0_10001)),
  (MR_String) "thread.semaphore",
  (MR_String) "semaphore",
  {
    NULL
  },
  {
    NULL
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 551 "thread.semaphore.c"
static MR_bool MR_CALL 
mercury__thread__semaphore____Unify____semaphore_0_0_10001(
#line 554 "thread.semaphore.c"
  MR_Box mercury__thread__semaphore__wrapper_arg_1,
#line 556 "thread.semaphore.c"
  MR_Box mercury__thread__semaphore__wrapper_arg_2)
#line 558 "thread.semaphore.c"
{
#line 560 "thread.semaphore.c"
  {
#line 562 "thread.semaphore.c"
    MR_bool mercury__thread__semaphore__succeeded;

#line 565 "thread.semaphore.c"
    {
#line 567 "thread.semaphore.c"
      mercury__thread__semaphore__succeeded = mercury__thread__semaphore____Unify____semaphore_0_0(((MR_Box) mercury__thread__semaphore__wrapper_arg_1), ((MR_Box) mercury__thread__semaphore__wrapper_arg_2));
    }
#line 570 "thread.semaphore.c"
    return mercury__thread__semaphore__succeeded;
#line 572 "thread.semaphore.c"
  }
#line 574 "thread.semaphore.c"
}

#line 577 "thread.semaphore.c"
static void MR_CALL 
mercury__thread__semaphore____Compare____semaphore_0_0_10001(
#line 580 "thread.semaphore.c"
  MR_Box * mercury__thread__semaphore__wrapper_arg_1,
#line 582 "thread.semaphore.c"
  MR_Box mercury__thread__semaphore__wrapper_arg_2,
#line 584 "thread.semaphore.c"
  MR_Box mercury__thread__semaphore__wrapper_arg_3)
#line 586 "thread.semaphore.c"
{
#line 588 "thread.semaphore.c"
  {
#line 590 "thread.semaphore.c"
    MR_Word mercury__thread__semaphore__conv0_HeadVar__1_1;

#line 593 "thread.semaphore.c"
    {
#line 595 "thread.semaphore.c"
      mercury__thread__semaphore____Compare____semaphore_0_0(&mercury__thread__semaphore__conv0_HeadVar__1_1, ((MR_Box) mercury__thread__semaphore__wrapper_arg_2), ((MR_Box) mercury__thread__semaphore__wrapper_arg_3));
    }
#line 598 "thread.semaphore.c"
    *mercury__thread__semaphore__wrapper_arg_1 = ((MR_Box) (mercury__thread__semaphore__conv0_HeadVar__1_1));
#line 600 "thread.semaphore.c"
  }
#line 602 "thread.semaphore.c"
}

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__thread__semaphore__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__thread__semaphore__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
}

#line 110 "thread.semaphore.m"
void MR_CALL 
mercury__thread__semaphore____Compare____semaphore_0_0(
#line 110 "thread.semaphore.m"
  MR_Word * mercury__thread__semaphore__HeadVar__1_1,
#line 110 "thread.semaphore.m"
  MR_Box mercury__thread__semaphore__HeadVar__2_2,
#line 110 "thread.semaphore.m"
  MR_Box mercury__thread__semaphore__HeadVar__3_3)
#line 110 "thread.semaphore.m"
{
#line 110 "thread.semaphore.m"
  {
#line 110 "thread.semaphore.m"
    MR_bool mercury__thread__semaphore__succeeded;
#line 110 "thread.semaphore.m"
    MR_Word mercury__thread__semaphore__Cast_HeadVar1_4 = (MR_Word) mercury__thread__semaphore__HeadVar__2_2;
#line 110 "thread.semaphore.m"
    MR_Word mercury__thread__semaphore__Cast_HeadVar2_5 = (MR_Word) mercury__thread__semaphore__HeadVar__3_3;

#line 110 "thread.semaphore.m"
    {
#line 110 "thread.semaphore.m"
      mercury__builtin____Compare____c_pointer_0_0(mercury__thread__semaphore__HeadVar__1_1, mercury__thread__semaphore__Cast_HeadVar1_4, mercury__thread__semaphore__Cast_HeadVar2_5);
#line 110 "thread.semaphore.m"
      return;
    }
#line 110 "thread.semaphore.m"
  }
#line 110 "thread.semaphore.m"
}

#line 110 "thread.semaphore.m"
MR_bool MR_CALL 
mercury__thread__semaphore____Unify____semaphore_0_0(
#line 110 "thread.semaphore.m"
  MR_Box mercury__thread__semaphore__HeadVar__1_1,
#line 110 "thread.semaphore.m"
  MR_Box mercury__thread__semaphore__HeadVar__2_2)
#line 110 "thread.semaphore.m"
{
#line 110 "thread.semaphore.m"
  {
#line 110 "thread.semaphore.m"
    MR_bool mercury__thread__semaphore__succeeded;
#line 110 "thread.semaphore.m"
    MR_Word mercury__thread__semaphore__Cast_HeadVar1_3 = (MR_Word) mercury__thread__semaphore__HeadVar__1_1;
#line 110 "thread.semaphore.m"
    MR_Word mercury__thread__semaphore__Cast_HeadVar2_4 = (MR_Word) mercury__thread__semaphore__HeadVar__2_2;

#line 110 "thread.semaphore.m"
    {
#line 110 "thread.semaphore.m"
      return mercury__thread__semaphore__succeeded = mercury__builtin____Unify____c_pointer_0_0(mercury__thread__semaphore__Cast_HeadVar1_3, mercury__thread__semaphore__Cast_HeadVar2_4);
    }
#line 110 "thread.semaphore.m"
    return mercury__thread__semaphore__succeeded;
#line 110 "thread.semaphore.m"
  }
#line 110 "thread.semaphore.m"
}

#line 389 "thread.semaphore.m"
void MR_CALL 
mercury__thread__semaphore__try_wait_2_4_p_0(
#line 389 "thread.semaphore.m"
  MR_Box mercury__thread__semaphore__Semaphore_1,
#line 389 "thread.semaphore.m"
  MR_Integer * mercury__thread__semaphore__Res_2)
#line 389 "thread.semaphore.m"
{
#line 391 "thread.semaphore.m"
  {
#line 391 "thread.semaphore.m"
    MR_bool mercury__thread__semaphore__succeeded;

#line 394 "thread.semaphore.m"
{
#define MR_PROC_LABEL mercury__thread__semaphore__try_wait_2_4_p_0

	struct ML_SEMAPHORE_STRUCT * Semaphore;
	MR_Integer Res;

	Semaphore = (struct ML_SEMAPHORE_STRUCT *) mercury__thread__semaphore__Semaphore_1 ;
		{
#line 394 "thread.semaphore.m"

    ML_Semaphore    *sem;

    sem = (ML_Semaphore *) Semaphore;

    MR_LOCK(&(sem->lock), "semaphore.try_wait");
    if (sem->count > 0) {
        sem->count--;
        MR_UNLOCK(&(sem->lock), "semaphore.try_wait");
        Res = 0;
    } else {
        MR_UNLOCK(&(sem->lock), "semaphore.try_wait");
        Res = 1;
    }

#line 723 "thread.semaphore.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__thread__semaphore__Res_2  = Res;
#line 394 "thread.semaphore.m"
}
#line 391 "thread.semaphore.m"
  }
#line 389 "thread.semaphore.m"
}

#line 67 "thread.semaphore.m"
void MR_CALL 
mercury__thread__semaphore__signal_3_p_0(
#line 67 "thread.semaphore.m"
  MR_Box mercury__thread__semaphore__Semaphore_1)
#line 67 "thread.semaphore.m"
{
#line 200 "thread.semaphore.m"
  {
#line 200 "thread.semaphore.m"
    MR_bool mercury__thread__semaphore__succeeded;

#line 203 "thread.semaphore.m"
{
#define MR_PROC_LABEL mercury__thread__semaphore__signal_3_p_0

	struct ML_SEMAPHORE_STRUCT * Semaphore;

	Semaphore = (struct ML_SEMAPHORE_STRUCT *) mercury__thread__semaphore__Semaphore_1 ;
		{
#line 203 "thread.semaphore.m"

    ML_Semaphore    *sem;
#ifndef MR_HIGHLEVEL_CODE
    MR_Context  *ctxt;
#endif

    sem = (ML_Semaphore *) Semaphore;

    MR_LOCK(&(sem->lock), "semaphore__signal");

#ifndef MR_HIGHLEVEL_CODE
    if (sem->count >= 0 && sem->suspended_head != NULL) {
        /* Reschedule the context at the start of the queue. */
        ctxt = sem->suspended_head;
        sem->suspended_head = ctxt->MR_ctxt_next;
        if (sem->suspended_tail == ctxt) {
            sem->suspended_tail = ctxt->MR_ctxt_next;
            assert(sem->suspended_tail == NULL);
        }
        MR_UNLOCK(&(sem->lock), "semaphore__signal");
        MR_schedule_context(ctxt);

        /* yield() */
        MR_save_context(MR_ENGINE(MR_eng_this_context));
      #ifdef ML_THREAD_AVOID_LABEL_ADDRS
        MR_ENGINE(MR_eng_this_context)->MR_ctxt_resume =
            MR_ENTRY(mercury__thread__semaphore__nop);
      #else
        MR_ENGINE(MR_eng_this_context)->MR_ctxt_resume =
            &&signal_skip_to_the_end_1;
      #endif
        MR_schedule_context(MR_ENGINE(MR_eng_this_context));

        MR_ENGINE(MR_eng_this_context) = NULL;
        MR_idle();

      #ifndef ML_THREAD_AVOID_LABEL_ADDRS
        signal_skip_to_the_end_1: ;
      #endif
    } else {
        sem->count++;
        MR_UNLOCK(&(sem->lock), "semaphore__signal");

        /* yield() */
        MR_save_context(MR_ENGINE(MR_eng_this_context));
      #ifdef ML_THREAD_AVOID_LABEL_ADDRS
        MR_ENGINE(MR_eng_this_context)->MR_ctxt_resume =
            MR_ENTRY(mercury__thread__semaphore__nop);
      #else
        MR_ENGINE(MR_eng_this_context)->MR_ctxt_resume =
            &&signal_skip_to_the_end_2;
      #endif
        MR_schedule_context(MR_ENGINE(MR_eng_this_context));

        MR_ENGINE(MR_eng_this_context) = NULL;
        MR_idle();

      #ifndef ML_THREAD_AVOID_LABEL_ADDRS
        signal_skip_to_the_end_2: ;
      #endif
    }
#else
    sem->count++;
    MR_SIGNAL(&(sem->cond), "semaphore.signal");
    MR_UNLOCK(&(sem->lock), "semaphore__signal");
#endif

#line 823 "thread.semaphore.c"

		;}
#undef MR_PROC_LABEL
#line 203 "thread.semaphore.m"
}
#line 200 "thread.semaphore.m"
  }
#line 67 "thread.semaphore.m"
}

#line 60 "thread.semaphore.m"
void MR_CALL 
mercury__thread__semaphore__try_wait_4_p_0(
#line 60 "thread.semaphore.m"
  MR_Box mercury__thread__semaphore__Sem_5,
#line 60 "thread.semaphore.m"
  MR_Word * mercury__thread__semaphore__Res_6)
#line 60 "thread.semaphore.m"
{
#line 385 "thread.semaphore.m"
  {
#line 385 "thread.semaphore.m"
    MR_bool mercury__thread__semaphore__succeeded;
#line 385 "thread.semaphore.m"
    MR_Integer mercury__thread__semaphore__Res0_8;

#line 394 "thread.semaphore.m"
{
#define MR_PROC_LABEL mercury__thread__semaphore__try_wait_4_p_0

	struct ML_SEMAPHORE_STRUCT * Semaphore;
	MR_Integer Res;

	Semaphore = (struct ML_SEMAPHORE_STRUCT *) mercury__thread__semaphore__Sem_5 ;
		{
#line 394 "thread.semaphore.m"

    ML_Semaphore    *sem;

    sem = (ML_Semaphore *) Semaphore;

    MR_LOCK(&(sem->lock), "semaphore.try_wait");
    if (sem->count > 0) {
        sem->count--;
        MR_UNLOCK(&(sem->lock), "semaphore.try_wait");
        Res = 0;
    } else {
        MR_UNLOCK(&(sem->lock), "semaphore.try_wait");
        Res = 1;
    }

#line 875 "thread.semaphore.c"

		;}
#undef MR_PROC_LABEL
	 mercury__thread__semaphore__Res0_8  = Res;
#line 394 "thread.semaphore.m"
}
#line 387 "thread.semaphore.m"
    mercury__thread__semaphore__succeeded = (mercury__thread__semaphore__Res0_8 == (MR_Integer) 0);
#line 387 "thread.semaphore.m"
    if (mercury__thread__semaphore__succeeded)
#line 387 "thread.semaphore.m"
      *mercury__thread__semaphore__Res_6 = (MR_Integer) 1;
#line 387 "thread.semaphore.m"
    else
#line 387 "thread.semaphore.m"
      *mercury__thread__semaphore__Res_6 = (MR_Integer) 0;
#line 385 "thread.semaphore.m"
  }
#line 60 "thread.semaphore.m"
}

#line 54 "thread.semaphore.m"
void MR_CALL 
mercury__thread__semaphore__wait_3_p_0(
#line 54 "thread.semaphore.m"
  MR_Box mercury__thread__semaphore__Semaphore_1)
#line 54 "thread.semaphore.m"
{
#line 296 "thread.semaphore.m"
  {
#line 296 "thread.semaphore.m"
    MR_bool mercury__thread__semaphore__succeeded;

#line 299 "thread.semaphore.m"
{
#define MR_PROC_LABEL mercury__thread__semaphore__wait_3_p_0

	struct ML_SEMAPHORE_STRUCT * Semaphore;

	Semaphore = (struct ML_SEMAPHORE_STRUCT *) mercury__thread__semaphore__Semaphore_1 ;
		{
#line 299 "thread.semaphore.m"

    ML_Semaphore    *sem;
#ifndef MR_HIGHLEVEL_CODE
    MR_Context  *ctxt;
#endif

    sem = (ML_Semaphore *) Semaphore;

    MR_LOCK(&(sem->lock), "semaphore__wait");

#ifndef MR_HIGHLEVEL_CODE
    if (sem->count > 0) {
        sem->count--;
        MR_UNLOCK(&(sem->lock), "semaphore__wait");
    } else {
        MR_save_context(MR_ENGINE(MR_eng_this_context));

        /* Put the current context at the end of the queue. */
        ctxt = MR_ENGINE(MR_eng_this_context);
      #ifdef ML_THREAD_AVOID_LABEL_ADDRS
        ctxt->MR_ctxt_resume = MR_ENTRY(mercury__thread__semaphore__nop);
      #else
        ctxt->MR_ctxt_resume = &&wait_skip_to_the_end;
      #endif
        ctxt->MR_ctxt_next = NULL;
        if (sem->suspended_tail) {
            sem->suspended_tail->MR_ctxt_next = ctxt;
            sem->suspended_tail = ctxt;
        } else {
            sem->suspended_head = ctxt;
            sem->suspended_tail = ctxt;
        }
        MR_UNLOCK(&(sem->lock), "semaphore__wait");

        /* Make the current engine do something else. */
        MR_ENGINE(MR_eng_this_context) = NULL;
        MR_idle();

      #ifndef ML_THREAD_AVOID_LABEL_ADDRS
        wait_skip_to_the_end: ;
      #endif
    }
#else
    while (sem->count <= 0) {
        /*
        ** Although it goes against the spec, pthread_cond_wait() can
        ** return prematurely with the error code EINTR in glibc 2.3.2
        ** if the thread is sent a signal.
        */
        while (MR_WAIT(&(sem->cond), &(sem->lock), "semaphore.wait") != 0) {
            /* do nothing */
        }
    }

    sem->count--;

    MR_UNLOCK(&(sem->lock), "semaphore__wait");
#endif

#line 977 "thread.semaphore.c"

		;}
#undef MR_PROC_LABEL
#line 299 "thread.semaphore.m"
}
#line 296 "thread.semaphore.m"
  }
#line 54 "thread.semaphore.m"
}

#line 48 "thread.semaphore.m"
MR_Box MR_CALL 
mercury__thread__semaphore__new_1_f_0(
#line 48 "thread.semaphore.m"
  MR_Integer mercury__thread__semaphore__Count_3)
#line 48 "thread.semaphore.m"
{
#line 130 "thread.semaphore.m"
  {
#line 130 "thread.semaphore.m"
    MR_bool mercury__thread__semaphore__succeeded;
#line 130 "thread.semaphore.m"
    MR_Box mercury__thread__semaphore__Semaphore_4;

#line 133 "thread.semaphore.m"
{
#define MR_PROC_LABEL mercury__thread__semaphore__new_1_f_0

	MR_Integer Count;
	struct ML_SEMAPHORE_STRUCT * Semaphore;

	Count =  mercury__thread__semaphore__Count_3 ;
		{
#line 133 "thread.semaphore.m"

    ML_Semaphore    *sem;

    MR_incr_hp_type_msg(sem, ML_Semaphore,
        MR_ALLOC_ID, "thread.semaphore.semaphore/0");
    sem->count = Count;
#ifndef MR_HIGHLEVEL_CODE
    sem->suspended_head = NULL;
    sem->suspended_tail = NULL;
#else
  #ifdef MR_THREAD_SAFE
    pthread_cond_init(&(sem->cond), MR_COND_ATTR);
  #endif
#endif
#ifdef MR_THREAD_SAFE
    pthread_mutex_init(&(sem->lock), MR_MUTEX_ATTR);
#endif

    /*
    ** The condvar and the mutex will need to be destroyed
    ** when the semaphore is garbage collected.
    */
    MR_GC_register_finalizer(sem, ML_finalize_semaphore, NULL);

    Semaphore = sem;

#line 1038 "thread.semaphore.c"

		;}
#undef MR_PROC_LABEL
	 mercury__thread__semaphore__Semaphore_4  = (MR_Box) Semaphore;
#line 133 "thread.semaphore.m"
}
#line 130 "thread.semaphore.m"
    return mercury__thread__semaphore__Semaphore_4;
#line 130 "thread.semaphore.m"
  }
#line 48 "thread.semaphore.m"
}

#line 43 "thread.semaphore.m"
MR_Box MR_CALL 
mercury__thread__semaphore__init_1_f_0(
#line 43 "thread.semaphore.m"
  MR_Integer mercury__thread__semaphore__Count_1)
#line 43 "thread.semaphore.m"
{
#line 130 "thread.semaphore.m"
  {
#line 130 "thread.semaphore.m"
    MR_bool mercury__thread__semaphore__succeeded;
#line 130 "thread.semaphore.m"
    MR_Box mercury__thread__semaphore__Semaphore_2;

#line 133 "thread.semaphore.m"
{
#define MR_PROC_LABEL mercury__thread__semaphore__init_1_f_0

	MR_Integer Count;
	struct ML_SEMAPHORE_STRUCT * Semaphore;

	Count =  mercury__thread__semaphore__Count_1 ;
		{
#line 133 "thread.semaphore.m"

    ML_Semaphore    *sem;

    MR_incr_hp_type_msg(sem, ML_Semaphore,
        MR_ALLOC_ID, "thread.semaphore.semaphore/0");
    sem->count = Count;
#ifndef MR_HIGHLEVEL_CODE
    sem->suspended_head = NULL;
    sem->suspended_tail = NULL;
#else
  #ifdef MR_THREAD_SAFE
    pthread_cond_init(&(sem->cond), MR_COND_ATTR);
  #endif
#endif
#ifdef MR_THREAD_SAFE
    pthread_mutex_init(&(sem->lock), MR_MUTEX_ATTR);
#endif

    /*
    ** The condvar and the mutex will need to be destroyed
    ** when the semaphore is garbage collected.
    */
    MR_GC_register_finalizer(sem, ML_finalize_semaphore, NULL);

    Semaphore = sem;

#line 1102 "thread.semaphore.c"

		;}
#undef MR_PROC_LABEL
	 mercury__thread__semaphore__Semaphore_2  = (MR_Box) Semaphore;
#line 133 "thread.semaphore.m"
}
#line 130 "thread.semaphore.m"
    return mercury__thread__semaphore__Semaphore_2;
#line 130 "thread.semaphore.m"
  }
#line 43 "thread.semaphore.m"
}

#line 39 "thread.semaphore.m"
void MR_CALL 
mercury__thread__semaphore__new_3_p_0(
#line 39 "thread.semaphore.m"
  MR_Box * mercury__thread__semaphore__Semaphore_4)
#line 39 "thread.semaphore.m"
{
#line 125 "thread.semaphore.m"
  {
#line 125 "thread.semaphore.m"
    MR_bool mercury__thread__semaphore__succeeded;

#line 133 "thread.semaphore.m"
{
#define MR_PROC_LABEL mercury__thread__semaphore__new_3_p_0

	MR_Integer Count;
	struct ML_SEMAPHORE_STRUCT * Semaphore;

	Count =  (MR_Integer) 0 ;
		{
#line 133 "thread.semaphore.m"

    ML_Semaphore    *sem;

    MR_incr_hp_type_msg(sem, ML_Semaphore,
        MR_ALLOC_ID, "thread.semaphore.semaphore/0");
    sem->count = Count;
#ifndef MR_HIGHLEVEL_CODE
    sem->suspended_head = NULL;
    sem->suspended_tail = NULL;
#else
  #ifdef MR_THREAD_SAFE
    pthread_cond_init(&(sem->cond), MR_COND_ATTR);
  #endif
#endif
#ifdef MR_THREAD_SAFE
    pthread_mutex_init(&(sem->lock), MR_MUTEX_ATTR);
#endif

    /*
    ** The condvar and the mutex will need to be destroyed
    ** when the semaphore is garbage collected.
    */
    MR_GC_register_finalizer(sem, ML_finalize_semaphore, NULL);

    Semaphore = sem;

#line 1164 "thread.semaphore.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__thread__semaphore__Semaphore_4  = (MR_Box) Semaphore;
#line 133 "thread.semaphore.m"
}
#line 125 "thread.semaphore.m"
  }
#line 39 "thread.semaphore.m"
}

#line 34 "thread.semaphore.m"
void MR_CALL 
mercury__thread__semaphore__init_3_p_0(
#line 34 "thread.semaphore.m"
  MR_Box * mercury__thread__semaphore__Semaphore_4)
#line 34 "thread.semaphore.m"
{
#line 125 "thread.semaphore.m"
  {
#line 125 "thread.semaphore.m"
    MR_bool mercury__thread__semaphore__succeeded;

#line 133 "thread.semaphore.m"
{
#define MR_PROC_LABEL mercury__thread__semaphore__init_3_p_0

	MR_Integer Count;
	struct ML_SEMAPHORE_STRUCT * Semaphore;

	Count =  (MR_Integer) 0 ;
		{
#line 133 "thread.semaphore.m"

    ML_Semaphore    *sem;

    MR_incr_hp_type_msg(sem, ML_Semaphore,
        MR_ALLOC_ID, "thread.semaphore.semaphore/0");
    sem->count = Count;
#ifndef MR_HIGHLEVEL_CODE
    sem->suspended_head = NULL;
    sem->suspended_tail = NULL;
#else
  #ifdef MR_THREAD_SAFE
    pthread_cond_init(&(sem->cond), MR_COND_ATTR);
  #endif
#endif
#ifdef MR_THREAD_SAFE
    pthread_mutex_init(&(sem->lock), MR_MUTEX_ATTR);
#endif

    /*
    ** The condvar and the mutex will need to be destroyed
    ** when the semaphore is garbage collected.
    */
    MR_GC_register_finalizer(sem, ML_finalize_semaphore, NULL);

    Semaphore = sem;

#line 1224 "thread.semaphore.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__thread__semaphore__Semaphore_4  = (MR_Box) Semaphore;
#line 133 "thread.semaphore.m"
}
#line 125 "thread.semaphore.m"
  }
#line 34 "thread.semaphore.m"
}

void mercury__thread__semaphore__init(void)
{
}

void mercury__thread__semaphore__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__thread__semaphore__thread__semaphore__type_ctor_info_semaphore_0);
}

void mercury__thread__semaphore__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module thread.semaphore. */
