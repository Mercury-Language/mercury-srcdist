/*
** Automatically generated from `thread.semaphore.m'
** by the Mercury compiler,
** version 2018-04-30
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


// :- module thread.semaphore.
// :- implementation.

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
#include "thread.mih"
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
mercury__thread__semaphore__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static void MR_CALL 
mercury__thread__semaphore__impure_try_wait_2_2_p_0(
  MR_Box Semaphore_1,
  MR_Integer * Res_2);

static MR_bool MR_CALL 
mercury__thread__semaphore____Unify____semaphore_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__thread__semaphore____Compare____semaphore_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


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
#include "pretty_printer.mh"
#include "private_builtin.mh"
#include "rtti_implementation.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "string.mh"
#include "table_builtin.mh"
#include "thread.mh"
#include "time.mh"
#include "type_desc.mh"
#include "uint.mh"
#include "uint16.mh"
#include "uint32.mh"
#include "uint64.mh"
#include "uint8.mh"
#include "version_array.mh"
#include "thread.semaphore.mh"
#line 220 "thread.semaphore.m"


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

#line 502 "thread.semaphore.m"

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



const MR_TypeCtorInfo_Struct mercury__thread__semaphore__thread__semaphore__type_ctor_info_semaphore_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_FOREIGN,
  ((MR_Box) (mercury__thread__semaphore____Unify____semaphore_0_0_10001)),
  ((MR_Box) (mercury__thread__semaphore____Compare____semaphore_0_0_10001)),
  (MR_String) "thread.semaphore",
  (MR_String) "semaphore",
  {     NULL },
  {     NULL },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_Integer MR_CALL 
mercury__thread__semaphore__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    return (MR_Integer) 1200;
  }
}

void MR_CALL 
mercury__thread__semaphore____Compare____semaphore_0_0(
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
mercury__thread__semaphore____Unify____semaphore_0_0(
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

static void MR_CALL 
mercury__thread__semaphore__impure_try_wait_2_2_p_0(
  MR_Box Semaphore_1,
  MR_Integer * Res_2)
{
  {
{
#define MR_PROC_LABEL mercury__thread__semaphore__impure_try_wait_2_2_p_0

	struct ML_SEMAPHORE_STRUCT * Semaphore;
	MR_Integer Res;

	Semaphore = (struct ML_SEMAPHORE_STRUCT *) Semaphore_1 ;
		{

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


		;}
#undef MR_PROC_LABEL
	 *Res_2  = Res;
}
  }
}

void MR_CALL 
mercury__thread__semaphore__impure_try_wait_2_p_0(
  MR_Box Sem_3,
  MR_Word * Res_4)
{
  {
    MR_bool succeeded;
    MR_Integer Res0_5;

{
#define MR_PROC_LABEL mercury__thread__semaphore__impure_try_wait_2_p_0

	struct ML_SEMAPHORE_STRUCT * Semaphore;
	MR_Integer Res;

	Semaphore = (struct ML_SEMAPHORE_STRUCT *) Sem_3 ;
		{

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


		;}
#undef MR_PROC_LABEL
	 Res0_5  = Res;
}
    succeeded = (Res0_5 == (MR_Integer) 0);
    if (succeeded)
      *Res_4 = (MR_Integer) 1;
    else
      *Res_4 = (MR_Integer) 0;
  }
}

void MR_CALL 
mercury__thread__semaphore__impure_init_1_p_0(
  MR_Box * Semaphore_2)
{
  {
{
#define MR_PROC_LABEL mercury__thread__semaphore__impure_init_1_p_0

	MR_Integer Count;
	struct ML_SEMAPHORE_STRUCT * Semaphore;

	Count =  (MR_Integer) 0 ;
		{

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


		;}
#undef MR_PROC_LABEL
	 *Semaphore_2  = (MR_Box) Semaphore;
}
  }
}

void MR_CALL 
mercury__thread__semaphore__impure_init_2_p_0(
  MR_Integer Count_1,
  MR_Box * Semaphore_2)
{
  {
{
#define MR_PROC_LABEL mercury__thread__semaphore__impure_init_2_p_0

	MR_Integer Count;
	struct ML_SEMAPHORE_STRUCT * Semaphore;

	Count =  Count_1 ;
		{

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


		;}
#undef MR_PROC_LABEL
	 *Semaphore_2  = (MR_Box) Semaphore;
}
  }
}

void MR_CALL 
mercury__thread__semaphore__try_wait_4_p_0(
  MR_Box Sem_5,
  MR_Word * Res_6)
{
  {
    MR_bool succeeded;
    MR_Integer Res0_12;

{
#define MR_PROC_LABEL mercury__thread__semaphore__try_wait_4_p_0

	struct ML_SEMAPHORE_STRUCT * Semaphore;
	MR_Integer Res;

	Semaphore = (struct ML_SEMAPHORE_STRUCT *) Sem_5 ;
		{

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


		;}
#undef MR_PROC_LABEL
	 Res0_12  = Res;
}
    succeeded = (Res0_12 == (MR_Integer) 0);
    if (succeeded)
      *Res_6 = (MR_Integer) 1;
    else
      *Res_6 = (MR_Integer) 0;
  }
}

void MR_CALL 
mercury__thread__semaphore__wait_3_p_0(
  MR_Box Semaphore_4)
{
  mercury__thread__semaphore__impure_wait_1_p_0(Semaphore_4);
}

void MR_CALL 
mercury__thread__semaphore__impure_wait_1_p_0(
  MR_Box Semaphore_1)
{
  {
{
#define MR_PROC_LABEL mercury__thread__semaphore__impure_wait_1_p_0

	struct ML_SEMAPHORE_STRUCT * Semaphore;

	Semaphore = (struct ML_SEMAPHORE_STRUCT *) Semaphore_1 ;
		{

    ML_Semaphore    *sem;
#ifndef MR_HIGHLEVEL_CODE
    MR_Context  *ctxt;
#endif

    sem = (ML_Semaphore *) Semaphore;

    MR_LOCK(&(sem->lock), "semaphore.wait");

#ifndef MR_HIGHLEVEL_CODE
    if (sem->count > 0) {
        sem->count--;
        MR_UNLOCK(&(sem->lock), "semaphore.wait");
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
        MR_UNLOCK(&(sem->lock), "semaphore.wait");

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
        while (MR_COND_WAIT(&(sem->cond), &(sem->lock), "semaphore.wait")
            != 0)
        {
            /* do nothing */
        }
    }

    sem->count--;

    MR_UNLOCK(&(sem->lock), "semaphore.wait");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__thread__semaphore__signal_3_p_0(
  MR_Box Semaphore_4)
{
  mercury__thread__semaphore__impure_signal_1_p_0(Semaphore_4);
}

void MR_CALL 
mercury__thread__semaphore__impure_signal_1_p_0(
  MR_Box Semaphore_1)
{
  {
{
#define MR_PROC_LABEL mercury__thread__semaphore__impure_signal_1_p_0

	struct ML_SEMAPHORE_STRUCT * Semaphore;

	Semaphore = (struct ML_SEMAPHORE_STRUCT *) Semaphore_1 ;
		{

    ML_Semaphore    *sem;
#ifndef MR_HIGHLEVEL_CODE
    MR_Context  *ctxt;
#endif

    sem = (ML_Semaphore *) Semaphore;

    MR_LOCK(&(sem->lock), "semaphore.signal");

#ifndef MR_HIGHLEVEL_CODE
    if (sem->count >= 0 && sem->suspended_head != NULL) {
        /* Reschedule the context at the start of the queue. */
        ctxt = sem->suspended_head;
        sem->suspended_head = ctxt->MR_ctxt_next;
        if (sem->suspended_tail == ctxt) {
            sem->suspended_tail = ctxt->MR_ctxt_next;
            assert(sem->suspended_tail == NULL);
        }
        MR_UNLOCK(&(sem->lock), "semaphore.signal");
        MR_schedule_context(ctxt);

        /* yield() */
        /* This context switch can be done more directly and faster */
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
        MR_UNLOCK(&(sem->lock), "semaphore.signal");

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
    MR_COND_SIGNAL(&(sem->cond), "semaphore.signal");
    MR_UNLOCK(&(sem->lock), "semaphore.signal");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

MR_Box MR_CALL 
mercury__thread__semaphore__init_1_f_0(
  MR_Integer Count_3)
{
  {
    MR_Box Semaphore_4;

{
#define MR_PROC_LABEL mercury__thread__semaphore__init_1_f_0

	MR_Integer Count;
	struct ML_SEMAPHORE_STRUCT * Semaphore;

	Count =  Count_3 ;
		{

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


		;}
#undef MR_PROC_LABEL
	 Semaphore_4  = (MR_Box) Semaphore;
}
    return Semaphore_4;
  }
}

MR_Box MR_CALL 
mercury__thread__semaphore__impure_init_1_f_0(
  MR_Integer Count_3)
{
  {
    MR_Box Semaphore_4;

{
#define MR_PROC_LABEL mercury__thread__semaphore__impure_init_1_f_0

	MR_Integer Count;
	struct ML_SEMAPHORE_STRUCT * Semaphore;

	Count =  Count_3 ;
		{

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


		;}
#undef MR_PROC_LABEL
	 Semaphore_4  = (MR_Box) Semaphore;
}
    return Semaphore_4;
  }
}

void MR_CALL 
mercury__thread__semaphore__init_3_p_0(
  MR_Box * Semaphore_4)
{
  {
{
#define MR_PROC_LABEL mercury__thread__semaphore__init_3_p_0

	MR_Integer Count;
	struct ML_SEMAPHORE_STRUCT * Semaphore;

	Count =  (MR_Integer) 0 ;
		{

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


		;}
#undef MR_PROC_LABEL
	 *Semaphore_4  = (MR_Box) Semaphore;
}
  }
}

void MR_CALL 
mercury__thread__semaphore__init_4_p_0(
  MR_Integer Count_5,
  MR_Box * Semaphore_6)
{
  {
{
#define MR_PROC_LABEL mercury__thread__semaphore__init_4_p_0

	MR_Integer Count;
	struct ML_SEMAPHORE_STRUCT * Semaphore;

	Count =  Count_5 ;
		{

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


		;}
#undef MR_PROC_LABEL
	 *Semaphore_6  = (MR_Box) Semaphore;
}
  }
}

static MR_bool MR_CALL 
mercury__thread__semaphore____Unify____semaphore_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__thread__semaphore____Unify____semaphore_0_0(((MR_Box) wrapper_arg_1), ((MR_Box) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mercury__thread__semaphore____Compare____semaphore_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__thread__semaphore____Compare____semaphore_0_0(&conv0_HeadVar__1_1, ((MR_Box) wrapper_arg_2), ((MR_Box) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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

// Ensure everything is compiled with the same grade.
const char *mercury__thread__semaphore__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module thread.semaphore.
