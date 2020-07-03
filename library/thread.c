/*
** Automatically generated from `thread.m'
** by the Mercury compiler,
** version rotd-2020-07-03
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


// :- module thread.
// :- implementation.

/*
INIT mercury__thread__init
ENDINIT
*/

#include "thread.mih"
#include "thread.mh"


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

#line 525 "thread.m"

#if defined(MR_THREAD_SAFE)
  #include  <pthread.h>

  static MR_bool ML_create_exclusive_thread(MR_Word goal,
                    MR_String *thread_id, MR_String *error_msg,
                    MR_AllocSiteInfoPtr alloc_id);
  static void   *ML_exclusive_thread_wrapper(void *arg);

  typedef struct ML_ThreadWrapperArgs ML_ThreadWrapperArgs;
  struct ML_ThreadWrapperArgs {
        MercuryLock         mutex;
        MercuryCond         cond;
        MR_Word             goal;
        MR_ThreadLocalMuts  *thread_local_mutables;
        MR_Integer          thread_state;
        MR_String           thread_id;
  };

  enum {
        ML_THREAD_NOT_READY,
        ML_THREAD_READY,
        ML_THREAD_START_ERROR
  };

#endif // MR_THREAD_SAFE

#line 690 "thread.m"

#if defined(MR_THREAD_SAFE) || !defined(MR_HIGHLEVEL_CODE)
  static void ML_incr_thread_barrier_count(void);
  static void ML_decr_thread_barrier_count(void);
#endif




static const MR_VA_PseudoTypeInfo_Struct2 mercury__thread____vpti_pred_2__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_Integer mercury__thread__thread__functor_number_map_thread_0[1];

static const MR_NotagFunctorDesc mercury__thread__thread__notag_functor_desc_thread_0;

static MR_Integer MR_CALL 
mercury__thread__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static void MR_CALL 
mercury__thread__IntroducedFrom__pred__spawn__207__1_4_p_0(
  MR_Word Goal0_4,
  MR_Word LambdaHeadVar__1_14);

static void MR_CALL 
mercury__thread__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_112_97_119_110_95_95_50_48_55_95_95_49_95_95_91_50_93_95_48_4_p_0(
  MR_Word Goal0_4);

static void MR_CALL 
mercury__thread__spawn_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
mercury__thread____Unify____thread_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__thread____Compare____thread_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__thread____Unify____thread_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__thread____Compare____thread_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mercury__thread_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__thread_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__thread_scalar_common_3[2][5];

static /* final */ const MR_Box mercury__thread_scalar_common_4[1][7];

static /* final */ const MR_Box mercury__thread_scalar_common_5[1][1];




static /* final */ const MR_Box mercury__thread_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__thread_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__thread_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__thread_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__thread_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__thread_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__thread_scalar_common_4[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__thread____vpti_pred_2__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__thread__thread__type_ctor_info_thread_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__thread_scalar_common_5[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "Unable to spawn threads in this grade."))
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
#line 452 "thread.m"

#ifndef MR_HIGHLEVEL_CODE

    MR_declare_entry(mercury__do_call_closure_1);

    MR_BEGIN_MODULE(hand_written_thread_module)
        MR_init_entry_ai(mercury__thread__spawn_begin_thread);
        MR_init_label(mercury__thread__spawn_end_thread);
        MR_init_entry_ai(mercury__thread__yield_resume);
    MR_BEGIN_CODE

    MR_define_entry(mercury__thread__spawn_begin_thread);
    {
        // Call the closure placed the top of the stack.
        MR_r1 = MR_stackvar(1); // Goal
        MR_r2 = MR_stackvar(2); // ThreadId
        MR_decr_sp(2);
        MR_noprof_call(MR_ENTRY(mercury__do_call_closure_1),
            MR_LABEL(mercury__thread__spawn_end_thread));
    }
    MR_define_label(mercury__thread__spawn_end_thread);
    {
        ML_decr_thread_barrier_count();

        MR_save_context(MR_ENGINE(MR_eng_this_context));
        MR_release_context(MR_ENGINE(MR_eng_this_context));
        MR_ENGINE(MR_eng_this_context) = NULL;
        MR_idle();
    }

    MR_define_entry(mercury__thread__yield_resume);
    {
        MR_proceed();
    }
    MR_END_MODULE

#endif

    // Forward decls to suppress gcc warnings.
    void mercury_sys_init_thread_modules_init(void);
    void mercury_sys_init_thread_modules_init_type_tables(void);
    #ifdef  MR_DEEP_PROFILING
    void mercury_sys_init_thread_modules_write_out_proc_statics(
        FILE *deep_fp, FILE *procrep_fp);
    #endif

    void mercury_sys_init_thread_modules_init(void)
    {
    #ifndef MR_HIGHLEVEL_CODE
        hand_written_thread_module();
    #endif
    }

    void mercury_sys_init_thread_modules_init_type_tables(void)
    {
        // No types to register.
    }

    #ifdef  MR_DEEP_PROFILING
    void mercury_sys_init_thread_modules_write_out_proc_statics(FILE *deep_fp,
        FILE *procrep_fp)
    {
        // No proc_statics to write out.
    }
    #endif

#line 553 "thread.m"

#if defined(MR_THREAD_SAFE)
  static MR_bool
  ML_create_exclusive_thread(MR_Word goal, MR_String *thread_id,
        MR_String *error_msg, MR_AllocSiteInfoPtr alloc_id)
  {
    ML_ThreadWrapperArgs    args;
    pthread_t               thread;
    pthread_attr_t          attrs;
    int                     thread_err;
    int                     thread_errno;
    char                    errbuf[MR_STRERROR_BUF_SIZE];

    *thread_id = MR_make_string_const("");
    *error_msg = MR_make_string_const("");

    ML_incr_thread_barrier_count();

    // The obvious synchronisation object to use here is a semaphore,
    // but glibc < 2.21 had a bug which could result in sem_post reading
    // from a semaphore after (in another thread) sem_wait returns and
    // destroys the semaphore.
    // <https://sourceware.org/bugzilla/show_bug.cgi?id=12674>

    pthread_mutex_init(&args.mutex, MR_MUTEX_ATTR);
    pthread_cond_init(&args.cond, MR_COND_ATTR);
    args.goal = goal;
    args.thread_local_mutables =
        MR_clone_thread_local_mutables(MR_THREAD_LOCAL_MUTABLES);
    args.thread_state = ML_THREAD_NOT_READY;
    args.thread_id = NULL;

    pthread_attr_init(&attrs);
    pthread_attr_setdetachstate(&attrs, PTHREAD_CREATE_DETACHED);
    thread_err = pthread_create(&thread, &attrs, ML_exclusive_thread_wrapper,
        &args);
    thread_errno = errno;
    pthread_attr_destroy(&attrs);

    if (thread_err != 0) {
        *error_msg = MR_make_string(alloc_id, "pthread_create failed: %s",
          MR_strerror(thread_errno, errbuf, sizeof(errbuf)));
    } else {
        MR_LOCK(&args.mutex, "ML_create_exclusive_thread");
        while (args.thread_state == ML_THREAD_NOT_READY) {
            int cond_err = MR_COND_WAIT(&args.cond, &args.mutex,
                "ML_create_exclusive_thread");
            // EINTR should not be possible, but it has happened before.
            if (cond_err != 0 && errno != EINTR) {
                MR_fatal_error(
                    "ML_create_exclusive_thread: MR_COND_WAIT error: %s",
                    MR_strerror(errno, errbuf, sizeof(errbuf)));
            }
        }
        MR_UNLOCK(&args.mutex, "ML_create_exclusive_thread");

        if (args.thread_state == ML_THREAD_START_ERROR) {
            *error_msg =
                MR_make_string_const("Error setting up engine for thread.");
        }
    }

    pthread_cond_destroy(&args.cond);
    pthread_mutex_destroy(&args.mutex);

    if (args.thread_state == ML_THREAD_READY) {
        *thread_id = args.thread_id;
        return MR_TRUE;
    }

    ML_decr_thread_barrier_count();
    return MR_FALSE;
  }

  static void *ML_exclusive_thread_wrapper(void *arg)
  {
    ML_ThreadWrapperArgs    *args = arg;
    MR_Word                 goal;
    MR_String               thread_id;

    if (MR_init_thread(MR_use_now) == MR_FALSE) {
        MR_LOCK(&args->mutex, "ML_exclusive_thread_wrapper");
        args->thread_state = ML_THREAD_START_ERROR;
        MR_COND_SIGNAL(&args->cond, "ML_exclusive_thread_wrapper");
        MR_UNLOCK(&args->mutex, "ML_exclusive_thread_wrapper");
        return NULL;
    }

    // Set the context to have the current engine as its exclusive engine.
    MR_assert(MR_ENGINE(MR_eng_this_context) != NULL);
    MR_ENGINE(MR_eng_this_context)->MR_ctxt_exclusive_engine =
        MR_ENGINE(MR_eng_id);

    MR_assert(MR_THREAD_LOCAL_MUTABLES == NULL);
    MR_SET_THREAD_LOCAL_MUTABLES(args->thread_local_mutables);

    thread_id = MR_make_string(MR_ALLOC_SITE_RUNTIME,
        "%" MR_INTEGER_LENGTH_MODIFIER "x", MR_SELF_THREAD_ID);

    // Take a copy of the goal before telling the parent we are ready.
    goal = args->goal;

    MR_LOCK(&args->mutex, "ML_exclusive_thread_wrapper");
    args->thread_state = ML_THREAD_READY;
    args->thread_id = thread_id;
    MR_COND_SIGNAL(&args->cond, "ML_exclusive_thread_wrapper");
    MR_UNLOCK(&args->mutex, "ML_exclusive_thread_wrapper");

    ML_call_back_to_mercury_cc_multi(goal, thread_id);

    MR_finalize_thread_engine();

    ML_decr_thread_barrier_count();

    return NULL;
  }
#endif // MR_THREAD_SAFE

#line 698 "thread.m"

#if defined(MR_THREAD_SAFE) || !defined(MR_HIGHLEVEL_CODE)

  static void ML_incr_thread_barrier_count(void)
  {
    MR_LOCK(&MR_thread_barrier_lock, "ML_incr_thread_barrier_count");
    MR_thread_barrier_count++;
    MR_UNLOCK(&MR_thread_barrier_lock, "ML_incr_thread_barrier_count");
  }

  static void ML_decr_thread_barrier_count(void)
  {
    MR_LOCK(&MR_thread_barrier_lock, "ML_decr_thread_barrier_count");
    MR_thread_barrier_count--;
  #ifdef MR_HIGHLEVEL_CODE
    if (MR_thread_barrier_count == 0) {
        MR_COND_SIGNAL(&MR_thread_barrier_cond,
            "ML_decr_thread_barrier_count");
    }
  #else
    if (MR_thread_barrier_count == 0) {
        // If this is the last spawned context to terminate and the
        // main context was just waiting on us in order to terminate,
        // then reschedule the main context.

        if (MR_thread_barrier_context) {
            MR_schedule_context(MR_thread_barrier_context);
            MR_thread_barrier_context = NULL;
        }
    }
  #endif
    MR_UNLOCK(&MR_thread_barrier_lock, "ML_decr_thread_barrier_count");
  }

#endif // MR_THREAD_SAFE || !MR_HIGHLEVEL_CODE


#line 675 "thread.m"
void 
ML_call_back_to_mercury_cc_multi(
  MR_Word Goal_5,
  MR_String ThreadId_6)
#line 675 "thread.m"
{
#line 675 "thread.m"
	mercury__thread__call_back_to_mercury_4_p_0((MR_Word) Goal_5, (MR_String) ThreadId_6);
}


static const MR_VA_PseudoTypeInfo_Struct2 mercury__thread____vpti_pred_2__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0)
  }
};

static const MR_Integer mercury__thread__thread__functor_number_map_thread_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc mercury__thread__thread__notag_functor_desc_thread_0 = {
  (MR_String) "thread",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__thread__thread__type_ctor_info_thread_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__thread____Unify____thread_0_0_10001)),
  ((MR_Box) (mercury__thread____Compare____thread_0_0_10001)),
  (MR_String) "thread",
  (MR_String) "thread",
  {     &mercury__thread__thread__notag_functor_desc_thread_0 },
  {     &mercury__thread__thread__notag_functor_desc_thread_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__thread__thread__functor_number_map_thread_0
};

const MR_TypeCtorInfo_Struct mercury__thread__thread__type_ctor_info_thread_id_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__thread____Unify____thread_id_0_0_10001)),
  ((MR_Box) (mercury__thread____Compare____thread_id_0_0_10001)),
  (MR_String) "thread",
  (MR_String) "thread_id",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static MR_Integer MR_CALL 
mercury__thread__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  return (MR_Integer) 1200;
}

static void MR_CALL 
mercury__thread__IntroducedFrom__pred__spawn__207__1_4_p_0(
  MR_Word Goal0_4,
  MR_Word LambdaHeadVar__1_14)
{
  mercury__thread__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_112_97_119_110_95_95_50_48_55_95_95_49_95_95_91_50_93_95_48_4_p_0(Goal0_4);
}

static void MR_CALL 
mercury__thread__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_112_97_119_110_95_95_50_48_55_95_95_49_95_95_91_50_93_95_48_4_p_0(
  MR_Word Goal0_4)
{
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Goal0_4, (MR_Integer) 1))));
    MR_Box conv1_LambdaHeadVar__3_16;

    func_0(((MR_Box) (Goal0_4)), ((MR_Box) ((MR_Integer) 0)), &conv1_LambdaHeadVar__3_16);
  }
}

void MR_CALL 
mercury__thread____Compare____thread_id_0_0(
  MR_Word * HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_String HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_String Cast_HeadVar1_4 = HeadVar__2_2;
    MR_String Cast_HeadVar2_5 = HeadVar__3_3;
    MR_Integer V_7_10;

{
#define MR_PROC_LABEL mercury__thread____Compare____thread_id_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Cast_HeadVar1_4 ;
	S2 = Cast_HeadVar2_5 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 V_7_10  = Res;
}
    succeeded = (V_7_10 < (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (V_7_10 == (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
  }
}

MR_bool MR_CALL 
mercury__thread____Unify____thread_id_0_0(
  MR_String HeadVar__1_1,
  MR_String HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_String Cast_HeadVar1_3 = HeadVar__1_1;
    MR_String Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = (strcmp(Cast_HeadVar1_3, Cast_HeadVar2_4) == 0);
    return succeeded;
  }
}

void MR_CALL 
mercury__thread____Compare____thread_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
      MR_Integer V_7_12;

{
#define MR_PROC_LABEL mercury__thread____Compare____thread_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = ArgX1_4 ;
	S2 = ArgY1_5 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 V_7_12  = Res;
}
      succeeded = (V_7_12 < (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (V_7_12 == (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 0;
        else
          *HeadVar__1_1 = (MR_Integer) 2;
      }
    }
  }
}

MR_bool MR_CALL 
mercury__thread____Unify____thread_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
}

void MR_CALL 
mercury__thread__num_processors_4_p_0(
  MR_Integer * Procs_1,
  MR_Word * Success_2)
{
  {
{
#define MR_PROC_LABEL mercury__thread__num_processors_4_p_0

	MR_Integer Procs;
	MR_Word Success;

		{

#ifdef MR_THREAD_SAFE
    // MR_get_num_processors() takes the global lock.
    Procs = MR_get_num_processors();
#else
    Procs = 0;
#endif
    Success = (Procs > 0) ? MR_YES : MR_NO;


		;}
#undef MR_PROC_LABEL
	 *Procs_1  = Procs;
	 *Success_2  = Success;
}
  }
}

void MR_CALL 
mercury__thread__call_back_to_mercury_4_p_0(
  MR_Word Goal_5,
  MR_String ThreadId_6)
{
  {
    MR_Word Var_10 = (MR_Word) (ThreadId_6);
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Goal_5, (MR_Integer) 1))));
    MR_Box conv1_STATE_VARIABLE_IO_9;

    func_0(((MR_Box) (Goal_5)), ((MR_Box) (Var_10)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_9);
  }
}

void MR_CALL 
mercury__thread__spawn_context_4_p_0(
  MR_Word Goal_5,
  MR_Word * Res_6)
{
  {
    MR_Word Success_8;
    MR_String ThreadId_9;

    mercury__thread__spawn_context_2_5_p_0(Goal_5, &Success_8, &ThreadId_9);
    switch (Success_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Res_6 = (MR_Word) (MR_mkword(MR_mktag(1), &mercury__thread_scalar_common_5[0]));
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_14 = (MR_Word) (ThreadId_9);

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *Res_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_14));
          }
        }
        break;
    }
  }
}

void MR_CALL 
mercury__thread__num_processors_3_p_0(
  MR_Word * MaybeProcs_4)
{
  {
    MR_Integer Procs_6;
    MR_Word Success_7;

{
#define MR_PROC_LABEL mercury__thread__num_processors_3_p_0

	MR_Integer Procs;
	MR_Word Success;

		{

#ifdef MR_THREAD_SAFE
    // MR_get_num_processors() takes the global lock.
    Procs = MR_get_num_processors();
#else
    Procs = 0;
#endif
    Success = (Procs > 0) ? MR_YES : MR_NO;


		;}
#undef MR_PROC_LABEL
	 Procs_6  = Procs;
	 Success_7  = Success;
}
    switch (Success_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *MaybeProcs_4 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeProcs_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Procs_6));
        }
        break;
    }
  }
}

void MR_CALL 
mercury__thread__yield_2_p_0(void)
{
  {
{
#define MR_PROC_LABEL mercury__thread__yield_2_p_0


		{

#ifndef MR_HIGHLEVEL_CODE
    MR_save_context(MR_ENGINE(MR_eng_this_context));
  #ifdef ML_THREAD_AVOID_LABEL_ADDRS
    MR_ENGINE(MR_eng_this_context)->MR_ctxt_resume =
        MR_ENTRY(mercury__thread__yield_resume);
  #else
    MR_ENGINE(MR_eng_this_context)->MR_ctxt_resume =
        &&yield_skip_to_the_end;
  #endif
    MR_schedule_context(MR_ENGINE(MR_eng_this_context));
    MR_ENGINE(MR_eng_this_context) = NULL;
    MR_idle();

  #ifndef ML_THREAD_AVOID_LABEL_ADDRS
    yield_skip_to_the_end:
  #endif
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__thread__spawn_native_4_p_0(
  MR_Word Goal_5,
  MR_Word * Res_6)
{
  {
    MR_Word Success_8;
    MR_String ThreadId_9;
    MR_String ErrorMsg_10;

    mercury__thread__spawn_native_2_6_p_0(Goal_5, &Success_8, &ThreadId_9, &ErrorMsg_10);
    switch (Success_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Res_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ErrorMsg_10));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_14 = (MR_Word) (ThreadId_9);

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *Res_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_14));
          }
        }
        break;
    }
  }
}

void MR_CALL 
mercury__thread__spawn_4_p_0(
  MR_Word Goal_5,
  MR_Word * Res_6)
{
  {
    MR_bool succeeded;

    succeeded = mercury__thread__can_spawn_context_0_p_0();
    if (succeeded)
    {
      MR_Word Success_17;
      MR_String ThreadId_18;

      mercury__thread__spawn_context_2_5_p_0(Goal_5, &Success_17, &ThreadId_18);
      switch (Success_17) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *Res_6 = (MR_Word) (MR_mkword(MR_mktag(1), &mercury__thread_scalar_common_5[0]));
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_21 = (MR_Word) (ThreadId_18);

            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *Res_6 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_21));
            }
          }
          break;
      }
    }
    else
    {
      MR_Word Success_27;
      MR_String ThreadId_28;
      MR_String ErrorMsg_29;

      mercury__thread__spawn_native_2_6_p_0(Goal_5, &Success_27, &ThreadId_28, &ErrorMsg_29);
      switch (Success_27) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Res_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ErrorMsg_29));
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_31 = (MR_Word) (ThreadId_28);

            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *Res_6 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_31));
            }
          }
          break;
      }
    }
  }
}

static void MR_CALL 
mercury__thread__spawn_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    mercury__thread__IntroducedFrom__pred__spawn__207__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

void MR_CALL 
mercury__thread__spawn_3_p_0(
  MR_Word Goal0_4)
{
  {
    MR_bool succeeded;
    MR_Word Goal_6;
    MR_Word Res_9;

    {
      Goal_6 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Goal_6, 0) = ((MR_Box) (&mercury__thread_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Goal_6, 1) = ((MR_Box) (mercury__thread__spawn_3_p_0_1));
      MR_hl_field(MR_mktag(0), Goal_6, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Goal_6, 3) = ((MR_Box) (Goal0_4));
    }
    succeeded = mercury__thread__can_spawn_context_0_p_0();
    if (succeeded)
    {
      MR_Word Success_35;
      MR_String ThreadId_36;

      mercury__thread__spawn_context_2_5_p_0(Goal_6, &Success_35, &ThreadId_36);
      switch (Success_35) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Res_9 = (MR_Word) (MR_mkword(MR_mktag(1), &mercury__thread_scalar_common_5[0]));
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_39 = (MR_Word) (ThreadId_36);

            {
              Res_9 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Res_9, 0) = ((MR_Box) (Var_39));
            }
          }
          break;
      }
    }
    else
    {
      MR_Word Success_45;
      MR_String ThreadId_46;
      MR_String ErrorMsg_47;

      mercury__thread__spawn_native_2_6_p_0(Goal_6, &Success_45, &ThreadId_46, &ErrorMsg_47);
      switch (Success_45) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            Res_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Res_9, 0) = ((MR_Box) (ErrorMsg_47));
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_49 = (MR_Word) (ThreadId_46);

            {
              Res_9 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Res_9, 0) = ((MR_Box) (Var_49));
            }
          }
          break;
      }
    }
    if (((MR_tag((MR_Word) Res_9)) == (MR_Integer) 1))
    {
      MR_String Error_11 = ((MR_String) ((MR_hl_field(MR_mktag(1), Res_9, (MR_Integer) 0))));

      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140thread.spawn\'/3", Error_11);
        return;
      }
    }
  }
}

void MR_CALL 
mercury__thread__spawn_native_2_6_p_0(
  MR_Word Goal_1,
  MR_Word * Success_2,
  MR_String * ThreadId_3,
  MR_String * ErrorMsg_4)
{
  {
{
#define MR_PROC_LABEL mercury__thread__spawn_native_2_6_p_0

	MR_Word Goal;
	MR_Word Success;
	MR_String ThreadId;
	MR_String ErrorMsg;

	Goal = Goal_1 ;
		{

#ifdef MR_THREAD_SAFE
    Success = ML_create_exclusive_thread(Goal, &ThreadId, &ErrorMsg,
        MR_ALLOC_ID);
#else
    Success = MR_FALSE;
    ThreadId = MR_make_string_const("");
    ErrorMsg = MR_make_string_const(
        "Cannot create native thread in this grade.");
#endif


		;}
#undef MR_PROC_LABEL
	 *Success_2  = Success;
	 *ThreadId_3  = ThreadId;
	 *ErrorMsg_4  = ErrorMsg;
}
  }
}

void MR_CALL 
mercury__thread__spawn_context_2_5_p_0(
  MR_Word Goal_1,
  MR_Word * Success_2,
  MR_String * ThreadId_3)
{
  {
{
#define MR_PROC_LABEL mercury__thread__spawn_context_2_5_p_0

	MR_Word Goal;
	MR_Word Success;
	MR_String ThreadId;

	Goal = Goal_1 ;
		{

#if !defined(MR_HIGHLEVEL_CODE)
{
    MR_Context          *ctxt;
    MR_ThreadLocalMuts  *tlm;

    ML_incr_thread_barrier_count();

    ctxt = MR_create_context("spawn", MR_CONTEXT_SIZE_REGULAR, NULL);
    ctxt->MR_ctxt_resume = MR_ENTRY(mercury__thread__spawn_begin_thread);

    tlm = MR_clone_thread_local_mutables(MR_THREAD_LOCAL_MUTABLES);
    ctxt->MR_ctxt_thread_local_mutables = tlm;

    // Derive a thread id from the address of the thread-local mutable vector
    // for the Mercury thread. It should actually be more unique than a
    // context address as contexts are kept around and reused.
    ThreadId = MR_make_string(MR_ALLOC_ID, "%p", tlm);

    // Store Goal and ThreadId on the top of the new context's stack.
    ctxt->MR_ctxt_sp += 2;
    ctxt->MR_ctxt_sp[0] = Goal;                 // MR_stackvar(1)
    ctxt->MR_ctxt_sp[-1] = (MR_Word) ThreadId;  // MR_stackvar(2)

    MR_schedule_context(ctxt);

    Success = MR_TRUE;
}
#else // MR_HIGHLEVEL_CODE
{
    Success = MR_FALSE;
    ThreadId = MR_make_string_const("");
}
#endif // MR_HIGHLEVEL_CODE


		;}
#undef MR_PROC_LABEL
	 *Success_2  = Success;
	 *ThreadId_3  = ThreadId;
}
  }
}

MR_bool MR_CALL 
mercury__thread__can_spawn_native_0_p_0(void)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__thread__can_spawn_native_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#if defined(MR_THREAD_SAFE)
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
}

MR_bool MR_CALL 
mercury__thread__can_spawn_0_p_0(void)
{
  {
    MR_bool succeeded;

    succeeded = mercury__thread__can_spawn_context_0_p_0();
    if (!(succeeded))
    {
{
#define MR_PROC_LABEL mercury__thread__can_spawn_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#if defined(MR_THREAD_SAFE)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__thread__can_spawn_context_0_p_0(void)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__thread__can_spawn_context_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#if !defined(MR_HIGHLEVEL_CODE)
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
}

static MR_bool MR_CALL 
mercury__thread____Unify____thread_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__thread____Unify____thread_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__thread____Compare____thread_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__thread____Compare____thread_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__thread____Unify____thread_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__thread____Unify____thread_id_0_0(((MR_String) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__thread____Compare____thread_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__thread____Compare____thread_id_0_0(&conv0_HeadVar__1_1, ((MR_String) (wrapper_arg_2)), ((MR_String) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__thread__init(void)
{
}

void mercury__thread__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__thread__thread__type_ctor_info_thread_0);
	MR_register_type_ctor_info(&mercury__thread__thread__type_ctor_info_thread_id_0);
}

void mercury__thread__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__thread__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module thread.
