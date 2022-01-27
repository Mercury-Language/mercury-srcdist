/*
** Automatically generated from `thread.m'
** by the Mercury compiler,
** version 2015-10-27
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


/* :- module thread. */
/* :- implementation. */

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
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "stream.string_writer.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




#line 617 "thread.m"

#if defined(MR_THREAD_SAFE) || !defined(MR_HIGHLEVEL_CODE)
  static void ML_incr_thread_barrier_count(void);
  static void ML_decr_thread_barrier_count(void);
#endif



#line 104 "thread.c"
static const MR_VA_PseudoTypeInfo_Struct2 mercury__thread____vpti_pred_2__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

#line 107 "thread.c"
static const MR_Integer mercury__thread__thread__functor_number_map_thread_0[1];

#line 110 "thread.c"
static const MR_NotagFunctorDesc mercury__thread__thread__notag_functor_desc_thread_0;

#line 113 "thread.c"
static MR_bool MR_CALL 
mercury__thread____Unify____thread_0_0_10001(
#line 116 "thread.c"
  MR_Box mercury__thread__wrapper_arg_1,
#line 118 "thread.c"
  MR_Box mercury__thread__wrapper_arg_2);

#line 121 "thread.c"
static void MR_CALL 
mercury__thread____Compare____thread_0_0_10001(
#line 124 "thread.c"
  MR_Box * mercury__thread__wrapper_arg_1,
#line 126 "thread.c"
  MR_Box mercury__thread__wrapper_arg_2,
#line 128 "thread.c"
  MR_Box mercury__thread__wrapper_arg_3);

#line 131 "thread.c"
static MR_bool MR_CALL 
mercury__thread____Unify____thread_id_0_0_10001(
#line 134 "thread.c"
  MR_Box mercury__thread__wrapper_arg_1,
#line 136 "thread.c"
  MR_Box mercury__thread__wrapper_arg_2);

#line 139 "thread.c"
static void MR_CALL 
mercury__thread____Compare____thread_id_0_0_10001(
#line 142 "thread.c"
  MR_Box * mercury__thread__wrapper_arg_1,
#line 144 "thread.c"
  MR_Box mercury__thread__wrapper_arg_2,
#line 146 "thread.c"
  MR_Box mercury__thread__wrapper_arg_3);

#line 197 "thread.m"
static void MR_CALL 
mercury__thread__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_112_97_119_110_95_95_49_57_55_95_95_49_95_95_91_50_93_95_48_4_p_0(
#line 197 "thread.m"
  MR_Word mercury__thread__Goal0_4);

#line 18 "ops.opt"
static MR_Integer MR_CALL 
mercury__thread__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 197 "thread.m"
static void MR_CALL 
mercury__thread__IntroducedFrom__pred__spawn__197__1_4_p_0(
#line 197 "thread.m"
  MR_Word mercury__thread__Goal0_4,
#line 197 "thread.m"
  MR_Word mercury__thread__LambdaHeadVar__1_14);

#line 197 "thread.m"
static void MR_CALL 
mercury__thread__spawn_3_p_0_1(
#line 197 "thread.m"
  MR_Box mercury__thread__closure_arg,
#line 197 "thread.m"
  MR_Box mercury__thread__wrapper_arg_1,
#line 197 "thread.m"
  MR_Box mercury__thread__wrapper_arg_2,
#line 197 "thread.m"
  MR_Box * mercury__thread__wrapper_arg_3);


static /* final */ const MR_Box mercury__thread_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__thread_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__thread_scalar_common_3[2][5];

static /* final */ const MR_Box mercury__thread_scalar_common_4[1][7];

static /* final */ const MR_Box mercury__thread_scalar_common_5[2][1];




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
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__thread____vpti_pred_2__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__thread__thread__type_ctor_info_thread_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__thread_scalar_common_5[2][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "Unable to spawn threads in this grade."))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "Unable to create native thread."))
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
#include "version_array.mh"
#line 426 "thread.m"

#ifndef MR_HIGHLEVEL_CODE

    MR_declare_entry(mercury__do_call_closure_1);

    MR_BEGIN_MODULE(hand_written_thread_module)
        MR_init_entry_ai(mercury__thread__spawn_begin_thread);
        MR_init_label(mercury__thread__spawn_end_thread);
        MR_init_entry_ai(mercury__thread__yield_resume);
    MR_BEGIN_CODE

    MR_define_entry(mercury__thread__spawn_begin_thread);
    {
        /* Call the closure placed the top of the stack. */
        MR_r1 = MR_stackvar(1); /* Goal */
        MR_r2 = MR_stackvar(2); /* ThreadId */
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

    /* forward decls to suppress gcc warnings */
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
        /* no types to register */
    }

    #ifdef  MR_DEEP_PROFILING
    void mercury_sys_init_thread_modules_write_out_proc_statics(FILE *deep_fp,
        FILE *procrep_fp)
    {
        /* no proc_statics to write out */
    }
    #endif

#line 517 "thread.m"

#if defined(MR_THREAD_SAFE)
  MR_bool ML_create_exclusive_thread(MR_Word goal, MR_String *thread_id)
  {
    ML_ThreadWrapperArgs    args;
    pthread_t               thread;
    pthread_attr_t          attrs;
    int err;

    ML_incr_thread_barrier_count();

    sem_init(&args.sem, 0, 0);
    args.goal = goal;
    args.thread_local_mutables =
        MR_clone_thread_local_mutables(MR_THREAD_LOCAL_MUTABLES);
    args.thread_started = MR_FALSE;
    args.thread_id = NULL;

    pthread_attr_init(&attrs);
    pthread_attr_setdetachstate(&attrs, PTHREAD_CREATE_DETACHED);
    err = pthread_create(&thread, &attrs, ML_exclusive_thread_wrapper, &args);
    pthread_attr_destroy(&attrs);

    if (err == 0) {
        MR_SEM_WAIT(&args.sem, "ML_create_exclusive_thread");
    }

    sem_destroy(&args.sem);

    if (args.thread_started) {
        *thread_id = args.thread_id;
        return MR_TRUE;
    }

    ML_decr_thread_barrier_count();
    return MR_FALSE;
  }

  void *ML_exclusive_thread_wrapper(void *arg)
  {
    ML_ThreadWrapperArgs    *args = arg;
    MR_Word                 goal;
    MR_String               thread_id;

    if (MR_init_thread(MR_use_now) == MR_FALSE) {
        args->thread_started = MR_FALSE;
        MR_SEM_POST(&args->sem, "ML_exclusive_thread_wrapper");
        return NULL;
    }

    /*
    ** Set the context to have the current engine as its exclusive engine.
    */
    MR_assert(MR_ENGINE(MR_eng_this_context) != NULL);
    MR_ENGINE(MR_eng_this_context)->MR_ctxt_exclusive_engine =
        MR_ENGINE(MR_eng_id);

    MR_assert(MR_THREAD_LOCAL_MUTABLES == NULL);
    MR_SET_THREAD_LOCAL_MUTABLES(args->thread_local_mutables);

    thread_id = MR_make_string(MR_ALLOC_SITE_RUNTIME,
        "%" MR_INTEGER_LENGTH_MODIFIER "x", MR_SELF_THREAD_ID);

    /*
    ** Take a copy of the goal before telling the parent we are ready.
    */
    goal = args->goal;
    args->thread_started = MR_TRUE;
    args->thread_id = thread_id;
    MR_SEM_POST(&args->sem, "ML_exclusive_thread_wrapper");

    ML_call_back_to_mercury_cc_multi(goal, thread_id);

    MR_finalize_thread_engine();

    ML_decr_thread_barrier_count();

    return NULL;
  }
#endif /* MR_THREAD_SAFE */

#line 625 "thread.m"

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
        MR_SIGNAL(&MR_thread_barrier_cond, "ML_decr_thread_barrier_count");
    }
  #else
    if (MR_thread_barrier_count == 0) {
        /*
        ** If this is the last spawned context to terminate and the
        ** main context was just waiting on us in order to terminate
        ** then reschedule the main context.
        */
        if (MR_thread_barrier_context) {
            MR_schedule_context(MR_thread_barrier_context);
            MR_thread_barrier_context = NULL;
        }
    }
  #endif
    MR_UNLOCK(&MR_thread_barrier_lock, "ML_decr_thread_barrier_count");
  }

#endif /* MR_THREAD_SAFE || !MR_HIGHLEVEL_CODE */

#line 602 "thread.m"
void 
ML_call_back_to_mercury_cc_multi(
#line 602 "thread.m"
  MR_Word mercury__thread__Goal_5,
#line 602 "thread.m"
  MR_String mercury__thread__ThreadId_6)
#line 602 "thread.m"
{
#line 602 "thread.m"
	mercury__thread__call_back_to_mercury_4_p_0((MR_Word) mercury__thread__Goal_5, (MR_String) mercury__thread__ThreadId_6);
}


#line 480 "thread.c"
static const MR_VA_PseudoTypeInfo_Struct2 mercury__thread____vpti_pred_2__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

#line 490 "thread.c"
static const MR_Integer mercury__thread__thread__functor_number_map_thread_0[1] = {
  (MR_Integer) 0
};

#line 495 "thread.c"
static const MR_NotagFunctorDesc mercury__thread__thread__notag_functor_desc_thread_0 = {
  (MR_String) "thread",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  NULL
};

#line 502 "thread.c"
const MR_TypeCtorInfo_Struct mercury__thread__thread__type_ctor_info_thread_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__thread____Unify____thread_0_0_10001)),
  ((MR_Box) (mercury__thread____Compare____thread_0_0_10001)),
  (MR_String) "thread",
  (MR_String) "thread",
  {     &mercury__thread__thread__notag_functor_desc_thread_0 },
  {     &mercury__thread__thread__notag_functor_desc_thread_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__thread__thread__functor_number_map_thread_0
};

#line 519 "thread.c"
const MR_TypeCtorInfo_Struct mercury__thread__thread__type_ctor_info_thread_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__thread____Unify____thread_id_0_0_10001)),
  ((MR_Box) (mercury__thread____Compare____thread_id_0_0_10001)),
  (MR_String) "thread",
  (MR_String) "thread_id",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 536 "thread.c"
static MR_bool MR_CALL 
mercury__thread____Unify____thread_0_0_10001(
#line 539 "thread.c"
  MR_Box mercury__thread__wrapper_arg_1,
#line 541 "thread.c"
  MR_Box mercury__thread__wrapper_arg_2)
#line 543 "thread.c"
{
#line 545 "thread.c"
  {
#line 547 "thread.c"
    MR_bool mercury__thread__succeeded;

#line 550 "thread.c"
    {
#line 552 "thread.c"
      mercury__thread__succeeded = mercury__thread____Unify____thread_0_0(((MR_Word) mercury__thread__wrapper_arg_1), ((MR_Word) mercury__thread__wrapper_arg_2));
    }
#line 555 "thread.c"
    return mercury__thread__succeeded;
#line 557 "thread.c"
  }
#line 559 "thread.c"
}

#line 562 "thread.c"
static void MR_CALL 
mercury__thread____Compare____thread_0_0_10001(
#line 565 "thread.c"
  MR_Box * mercury__thread__wrapper_arg_1,
#line 567 "thread.c"
  MR_Box mercury__thread__wrapper_arg_2,
#line 569 "thread.c"
  MR_Box mercury__thread__wrapper_arg_3)
#line 571 "thread.c"
{
#line 573 "thread.c"
  {
#line 575 "thread.c"
    MR_Word mercury__thread__conv0_HeadVar__1_1;

#line 578 "thread.c"
    {
#line 580 "thread.c"
      mercury__thread____Compare____thread_0_0(&mercury__thread__conv0_HeadVar__1_1, ((MR_Word) mercury__thread__wrapper_arg_2), ((MR_Word) mercury__thread__wrapper_arg_3));
    }
#line 583 "thread.c"
    *mercury__thread__wrapper_arg_1 = ((MR_Box) (mercury__thread__conv0_HeadVar__1_1));
#line 585 "thread.c"
  }
#line 587 "thread.c"
}

#line 590 "thread.c"
static MR_bool MR_CALL 
mercury__thread____Unify____thread_id_0_0_10001(
#line 593 "thread.c"
  MR_Box mercury__thread__wrapper_arg_1,
#line 595 "thread.c"
  MR_Box mercury__thread__wrapper_arg_2)
#line 597 "thread.c"
{
#line 599 "thread.c"
  {
#line 601 "thread.c"
    MR_bool mercury__thread__succeeded;

#line 604 "thread.c"
    {
#line 606 "thread.c"
      mercury__thread__succeeded = mercury__thread____Unify____thread_id_0_0(((MR_String) mercury__thread__wrapper_arg_1), ((MR_String) mercury__thread__wrapper_arg_2));
    }
#line 609 "thread.c"
    return mercury__thread__succeeded;
#line 611 "thread.c"
  }
#line 613 "thread.c"
}

#line 616 "thread.c"
static void MR_CALL 
mercury__thread____Compare____thread_id_0_0_10001(
#line 619 "thread.c"
  MR_Box * mercury__thread__wrapper_arg_1,
#line 621 "thread.c"
  MR_Box mercury__thread__wrapper_arg_2,
#line 623 "thread.c"
  MR_Box mercury__thread__wrapper_arg_3)
#line 625 "thread.c"
{
#line 627 "thread.c"
  {
#line 629 "thread.c"
    MR_Word mercury__thread__conv0_HeadVar__1_1;

#line 632 "thread.c"
    {
#line 634 "thread.c"
      mercury__thread____Compare____thread_id_0_0(&mercury__thread__conv0_HeadVar__1_1, ((MR_String) mercury__thread__wrapper_arg_2), ((MR_String) mercury__thread__wrapper_arg_3));
    }
#line 637 "thread.c"
    *mercury__thread__wrapper_arg_1 = ((MR_Box) (mercury__thread__conv0_HeadVar__1_1));
#line 639 "thread.c"
  }
#line 641 "thread.c"
}

#line 197 "thread.m"
static void MR_CALL 
mercury__thread__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_112_97_119_110_95_95_49_57_55_95_95_49_95_95_91_50_93_95_48_4_p_0(
#line 197 "thread.m"
  MR_Word mercury__thread__Goal0_4)
#line 197 "thread.m"
{
#line 197 "thread.m"
  {
#line 197 "thread.m"
    MR_bool mercury__thread__succeeded;
#line 197 "thread.m"
    void MR_CALL (* mercury__thread__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__thread__Goal0_4, (MR_Integer) 1)));
#line 197 "thread.m"
    MR_Box mercury__thread__conv1_LambdaHeadVar__3_16;

#line 197 "thread.m"
    {
#line 197 "thread.m"
      mercury__thread__func_0(((MR_Box) mercury__thread__Goal0_4), ((MR_Box) ((MR_Integer) 0)), &mercury__thread__conv1_LambdaHeadVar__3_16);
    }
#line 197 "thread.m"
  }
#line 197 "thread.m"
}

#line 18 "ops.opt"
static MR_Integer MR_CALL 
mercury__thread__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 18 "ops.opt"
{
#line 47 "ops.opt"
  {
#line 47 "ops.opt"
    MR_bool mercury__thread__succeeded;

#line 47 "ops.opt"
    return (MR_Integer) 1200;
#line 47 "ops.opt"
  }
#line 18 "ops.opt"
}

#line 197 "thread.m"
static void MR_CALL 
mercury__thread__IntroducedFrom__pred__spawn__197__1_4_p_0(
#line 197 "thread.m"
  MR_Word mercury__thread__Goal0_4,
#line 197 "thread.m"
  MR_Word mercury__thread__LambdaHeadVar__1_14)
#line 197 "thread.m"
{
#line 197 "thread.m"
  {
#line 197 "thread.m"
    MR_bool mercury__thread__succeeded;

#line 197 "thread.m"
    {
#line 197 "thread.m"
      mercury__thread__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_112_97_119_110_95_95_49_57_55_95_95_49_95_95_91_50_93_95_48_4_p_0(mercury__thread__Goal0_4);
#line 197 "thread.m"
      return;
    }
#line 197 "thread.m"
  }
#line 197 "thread.m"
}

#line 137 "thread.m"
void MR_CALL 
mercury__thread____Compare____thread_id_0_0(
#line 137 "thread.m"
  MR_Word * mercury__thread__HeadVar__1_1,
#line 137 "thread.m"
  MR_String mercury__thread__HeadVar__2_2,
#line 137 "thread.m"
  MR_String mercury__thread__HeadVar__3_3)
#line 137 "thread.m"
{
#line 137 "thread.m"
  {
#line 137 "thread.m"
    MR_bool mercury__thread__succeeded;
#line 137 "thread.m"
    MR_String mercury__thread__Cast_HeadVar1_4 = mercury__thread__HeadVar__2_2;
#line 137 "thread.m"
    MR_String mercury__thread__Cast_HeadVar2_5 = mercury__thread__HeadVar__3_3;
#line 137 "thread.m"
    MR_Integer mercury__thread__V_7_10;

#line 100 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__thread____Compare____thread_id_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__thread__Cast_HeadVar1_4 ;
	S2 =  mercury__thread__Cast_HeadVar2_5 ;
		{
#line 100 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 750 "thread.c"

		;}
#undef MR_PROC_LABEL
	 mercury__thread__V_7_10  = Res;
#line 100 "private_builtin.opt"
}
#line 87 "private_builtin.opt"
    mercury__thread__succeeded = (mercury__thread__V_7_10 < (MR_Integer) 0);
#line 90 "private_builtin.opt"
    if (mercury__thread__succeeded)
#line 89 "private_builtin.opt"
      *mercury__thread__HeadVar__1_1 = (MR_Integer) 1;
#line 90 "private_builtin.opt"
    else
#line 95 "private_builtin.opt"
      {
#line 92 "private_builtin.opt"
        mercury__thread__succeeded = (mercury__thread__V_7_10 == (MR_Integer) 0);
#line 95 "private_builtin.opt"
        if (mercury__thread__succeeded)
#line 94 "private_builtin.opt"
          *mercury__thread__HeadVar__1_1 = (MR_Integer) 0;
#line 95 "private_builtin.opt"
        else
#line 96 "private_builtin.opt"
          *mercury__thread__HeadVar__1_1 = (MR_Integer) 2;
#line 95 "private_builtin.opt"
      }
#line 137 "thread.m"
  }
#line 137 "thread.m"
}

#line 137 "thread.m"
MR_bool MR_CALL 
mercury__thread____Unify____thread_id_0_0(
#line 137 "thread.m"
  MR_String mercury__thread__HeadVar__1_1,
#line 137 "thread.m"
  MR_String mercury__thread__HeadVar__2_2)
#line 137 "thread.m"
{
#line 137 "thread.m"
  {
#line 137 "thread.m"
    MR_bool mercury__thread__succeeded;
#line 137 "thread.m"
    MR_String mercury__thread__Cast_HeadVar1_3 = mercury__thread__HeadVar__1_1;
#line 137 "thread.m"
    MR_String mercury__thread__Cast_HeadVar2_4 = mercury__thread__HeadVar__2_2;

#line 137 "thread.m"
    mercury__thread__succeeded = (strcmp(mercury__thread__Cast_HeadVar1_3, mercury__thread__Cast_HeadVar2_4) == 0);
#line 137 "thread.m"
    return mercury__thread__succeeded;
#line 137 "thread.m"
  }
#line 137 "thread.m"
}

#line 134 "thread.m"
void MR_CALL 
mercury__thread____Compare____thread_0_0(
#line 134 "thread.m"
  MR_Word * mercury__thread__HeadVar__1_1,
#line 134 "thread.m"
  MR_Word mercury__thread__HeadVar__2_2,
#line 134 "thread.m"
  MR_Word mercury__thread__HeadVar__3_3)
#line 134 "thread.m"
{
#line 134 "thread.m"
  {
#line 134 "thread.m"
    MR_bool mercury__thread__succeeded;
#line 134 "thread.m"
    MR_Integer mercury__thread__CastX_6 = (MR_Integer) mercury__thread__HeadVar__2_2;
#line 134 "thread.m"
    MR_Integer mercury__thread__CastY_7 = (MR_Integer) mercury__thread__HeadVar__3_3;

#line 134 "thread.m"
    mercury__thread__succeeded = (mercury__thread__CastX_6 == mercury__thread__CastY_7);
#line 134 "thread.m"
    if (mercury__thread__succeeded)
#line 835 "thread.c"
      *mercury__thread__HeadVar__1_1 = (MR_Integer) 0;
#line 134 "thread.m"
    else
#line 134 "thread.m"
      {
#line 134 "thread.m"
        MR_String mercury__thread__V_4_4 = (MR_String) mercury__thread__HeadVar__2_2;
#line 134 "thread.m"
        MR_String mercury__thread__V_5_5 = (MR_String) mercury__thread__HeadVar__3_3;
#line 134 "thread.m"
        MR_Integer mercury__thread__V_7_12;

#line 100 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__thread____Compare____thread_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__thread__V_4_4 ;
	S2 =  mercury__thread__V_5_5 ;
		{
#line 100 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 863 "thread.c"

		;}
#undef MR_PROC_LABEL
	 mercury__thread__V_7_12  = Res;
#line 100 "private_builtin.opt"
}
#line 87 "private_builtin.opt"
        mercury__thread__succeeded = (mercury__thread__V_7_12 < (MR_Integer) 0);
#line 90 "private_builtin.opt"
        if (mercury__thread__succeeded)
#line 89 "private_builtin.opt"
          *mercury__thread__HeadVar__1_1 = (MR_Integer) 1;
#line 90 "private_builtin.opt"
        else
#line 95 "private_builtin.opt"
          {
#line 92 "private_builtin.opt"
            mercury__thread__succeeded = (mercury__thread__V_7_12 == (MR_Integer) 0);
#line 95 "private_builtin.opt"
            if (mercury__thread__succeeded)
#line 94 "private_builtin.opt"
              *mercury__thread__HeadVar__1_1 = (MR_Integer) 0;
#line 95 "private_builtin.opt"
            else
#line 96 "private_builtin.opt"
              *mercury__thread__HeadVar__1_1 = (MR_Integer) 2;
#line 95 "private_builtin.opt"
          }
#line 134 "thread.m"
      }
#line 134 "thread.m"
  }
#line 134 "thread.m"
}

#line 134 "thread.m"
MR_bool MR_CALL 
mercury__thread____Unify____thread_0_0(
#line 134 "thread.m"
  MR_Word mercury__thread__HeadVar__1_1,
#line 134 "thread.m"
  MR_Word mercury__thread__HeadVar__2_2)
#line 134 "thread.m"
{
#line 134 "thread.m"
  {
#line 134 "thread.m"
    MR_bool mercury__thread__succeeded;
#line 134 "thread.m"
    MR_Integer mercury__thread__CastX_5 = (MR_Integer) mercury__thread__HeadVar__1_1;
#line 134 "thread.m"
    MR_Integer mercury__thread__CastY_6 = (MR_Integer) mercury__thread__HeadVar__2_2;

#line 134 "thread.m"
    mercury__thread__succeeded = (mercury__thread__CastX_5 == mercury__thread__CastY_6);
#line 134 "thread.m"
    if (mercury__thread__succeeded)
#line 134 "thread.m"
      mercury__thread__succeeded = MR_TRUE;
#line 134 "thread.m"
    else
#line 134 "thread.m"
      {
#line 134 "thread.m"
        MR_String mercury__thread__V_3_3 = (MR_String) mercury__thread__HeadVar__1_1;
#line 134 "thread.m"
        MR_String mercury__thread__V_4_4 = (MR_String) mercury__thread__HeadVar__2_2;

#line 932 "thread.c"
        mercury__thread__succeeded = (strcmp(mercury__thread__V_3_3, mercury__thread__V_4_4) == 0);
#line 134 "thread.m"
      }
#line 134 "thread.m"
    return mercury__thread__succeeded;
#line 134 "thread.m"
  }
#line 134 "thread.m"
}

#line 600 "thread.m"
void MR_CALL 
mercury__thread__call_back_to_mercury_4_p_0(
#line 600 "thread.m"
  MR_Word mercury__thread__Goal_5,
#line 600 "thread.m"
  MR_String mercury__thread__ThreadId_6)
#line 600 "thread.m"
{
#line 612 "thread.m"
  {
#line 612 "thread.m"
    MR_bool mercury__thread__succeeded;
#line 612 "thread.m"
    MR_Word mercury__thread__V_10_10 = (MR_Word) mercury__thread__ThreadId_6;
#line 613 "thread.m"
    void MR_CALL (* mercury__thread__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__thread__Goal_5, (MR_Integer) 1)));
#line 613 "thread.m"
    MR_Box mercury__thread__conv1_STATE_VARIABLE_IO_9;

#line 613 "thread.m"
    {
#line 613 "thread.m"
      mercury__thread__func_0(((MR_Box) mercury__thread__Goal_5), ((MR_Box) (mercury__thread__V_10_10)), ((MR_Box) ((MR_Integer) 0)), &mercury__thread__conv1_STATE_VARIABLE_IO_9);
    }
#line 612 "thread.m"
  }
#line 600 "thread.m"
}

#line 309 "thread.m"
void MR_CALL 
mercury__thread__spawn_native_2_5_p_0(
#line 309 "thread.m"
  MR_Word mercury__thread__Goal_1,
#line 309 "thread.m"
  MR_Word * mercury__thread__Success_2,
#line 309 "thread.m"
  MR_String * mercury__thread__ThreadId_3)
#line 309 "thread.m"
{
#line 312 "thread.m"
  {
#line 312 "thread.m"
    MR_bool mercury__thread__succeeded;

#line 317 "thread.m"
{
#define MR_PROC_LABEL mercury__thread__spawn_native_2_5_p_0

	MR_Word Goal;
	MR_Word Success;
	MR_String ThreadId;

	Goal =  mercury__thread__Goal_1 ;
		{
#line 317 "thread.m"

    ThreadId = MR_make_string_const("");
#ifdef MR_THREAD_SAFE
    Success = ML_create_exclusive_thread(Goal, &ThreadId);
#else
    Success = MR_FALSE;
#endif

#line 1008 "thread.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__thread__Success_2  = Success;
	 *mercury__thread__ThreadId_3  = ThreadId;
#line 317 "thread.m"
}
#line 312 "thread.m"
  }
#line 309 "thread.m"
}

#line 229 "thread.m"
void MR_CALL 
mercury__thread__spawn_context_2_5_p_0(
#line 229 "thread.m"
  MR_Word mercury__thread__Goal_1,
#line 229 "thread.m"
  MR_Word * mercury__thread__Success_2,
#line 229 "thread.m"
  MR_String * mercury__thread__ThreadId_3)
#line 229 "thread.m"
{
#line 237 "thread.m"
  {
#line 237 "thread.m"
    MR_bool mercury__thread__succeeded;

#line 242 "thread.m"
{
#define MR_PROC_LABEL mercury__thread__spawn_context_2_5_p_0

	MR_Word Goal;
	MR_Word Success;
	MR_String ThreadId;

	Goal =  mercury__thread__Goal_1 ;
		{
#line 242 "thread.m"

#if !defined(MR_HIGHLEVEL_CODE)
{
    MR_Context          *ctxt;
    MR_ThreadLocalMuts  *tlm;

    ML_incr_thread_barrier_count();

    ctxt = MR_create_context("spawn", MR_CONTEXT_SIZE_REGULAR, NULL);
    ctxt->MR_ctxt_resume = MR_ENTRY(mercury__thread__spawn_begin_thread);

    tlm = MR_clone_thread_local_mutables(MR_THREAD_LOCAL_MUTABLES);
    ctxt->MR_ctxt_thread_local_mutables = tlm;

    /*
    ** Derive a thread id from the address of the thread-local mutable vector
    ** for the Mercury thread. It should actually be more unique than a
    ** context address as contexts are kept around and reused.
    */
    ThreadId = MR_make_string(MR_ALLOC_ID, "%p", tlm);

    /*
    ** Store Goal and ThreadId on the top of the new context's stack.
    */
    ctxt->MR_ctxt_sp += 2;
    ctxt->MR_ctxt_sp[0] = Goal;                 /* MR_stackvar(1) */
    ctxt->MR_ctxt_sp[-1] = (MR_Word) ThreadId;  /* MR_stackvar(2) */

    MR_schedule_context(ctxt);

    Success = MR_TRUE;
}
#else /* MR_HIGHLEVEL_CODE */
{
    Success = MR_FALSE;
    ThreadId = MR_make_string_const("");
}
#endif /* MR_HIGHLEVEL_CODE */

#line 1087 "thread.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__thread__Success_2  = Success;
	 *mercury__thread__ThreadId_3  = ThreadId;
#line 242 "thread.m"
}
#line 237 "thread.m"
  }
#line 229 "thread.m"
}

#line 216 "thread.m"
void MR_CALL 
mercury__thread__spawn_context_4_p_0(
#line 216 "thread.m"
  MR_Word mercury__thread__Goal_5,
#line 216 "thread.m"
  MR_Word * mercury__thread__Res_6)
#line 216 "thread.m"
{
#line 218 "thread.m"
  {
#line 218 "thread.m"
    MR_bool mercury__thread__succeeded;
#line 218 "thread.m"
    MR_Word mercury__thread__Success_8;
#line 218 "thread.m"
    MR_String mercury__thread__ThreadId_9;

#line 219 "thread.m"
    {
#line 219 "thread.m"
      mercury__thread__spawn_context_2_5_p_0(mercury__thread__Goal_5, &mercury__thread__Success_8, &mercury__thread__ThreadId_9);
    }
#line 223 "thread.m"
#line 223 "thread.m"
    switch (mercury__thread__Success_8) {
#line 223 "thread.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 223 "thread.m"
      case (MR_Integer) 0:
#line 224 "thread.m"
        {
#line 225 "thread.m"
          *mercury__thread__Res_6 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__thread_scalar_common_5[0]);
#line 224 "thread.m"
        }
#line 223 "thread.m"
        break;
#line 223 "thread.m"
      case (MR_Integer) 1:
#line 221 "thread.m"
        {
#line 221 "thread.m"
          MR_Word mercury__thread__V_14_14 = (MR_Word) mercury__thread__ThreadId_9;

#line 222 "thread.m"
          {
#line 222 "thread.m"
            MR_Word base;
#line 222 "thread.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 222 "thread.m"
            *mercury__thread__Res_6 = base;
#line 222 "thread.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__thread__V_14_14));
#line 222 "thread.m"
          }
#line 221 "thread.m"
        }
#line 223 "thread.m"
        break;
#line 223 "thread.m"
    }
#line 218 "thread.m"
  }
#line 216 "thread.m"
}

#line 146 "thread.m"
MR_bool MR_CALL 
mercury__thread__can_spawn_context_0_p_0(void)
#line 146 "thread.m"
{
#line 151 "thread.m"
  {
#line 151 "thread.m"
    MR_bool mercury__thread__succeeded;

#line 154 "thread.m"
{
#define MR_PROC_LABEL mercury__thread__can_spawn_context_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 154 "thread.m"

#if !defined(MR_HIGHLEVEL_CODE)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif

#line 1193 "thread.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 154 "thread.m"
	}
mercury__thread__succeeded  = SUCCESS_INDICATOR;
}
#line 151 "thread.m"
    return mercury__thread__succeeded;
#line 151 "thread.m"
  }
#line 146 "thread.m"
}

#line 94 "thread.m"
void MR_CALL 
mercury__thread__yield_2_p_0(void)
#line 94 "thread.m"
{
#line 364 "thread.m"
  {
#line 364 "thread.m"
    MR_bool mercury__thread__succeeded;

#line 368 "thread.m"
{
#define MR_PROC_LABEL mercury__thread__yield_2_p_0


		{
#line 368 "thread.m"

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

#line 1245 "thread.c"

		;}
#undef MR_PROC_LABEL
#line 368 "thread.m"
}
#line 364 "thread.m"
  }
#line 94 "thread.m"
}

#line 85 "thread.m"
void MR_CALL 
mercury__thread__spawn_native_4_p_0(
#line 85 "thread.m"
  MR_Word mercury__thread__Goal_5,
#line 85 "thread.m"
  MR_Word * mercury__thread__Res_6)
#line 85 "thread.m"
{
#line 298 "thread.m"
  {
#line 298 "thread.m"
    MR_bool mercury__thread__succeeded;
#line 298 "thread.m"
    MR_Word mercury__thread__Success_8;
#line 298 "thread.m"
    MR_String mercury__thread__ThreadId_9;

#line 299 "thread.m"
    {
#line 299 "thread.m"
      mercury__thread__spawn_native_2_5_p_0(mercury__thread__Goal_5, &mercury__thread__Success_8, &mercury__thread__ThreadId_9);
    }
#line 303 "thread.m"
#line 303 "thread.m"
    switch (mercury__thread__Success_8) {
#line 303 "thread.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 303 "thread.m"
      case (MR_Integer) 0:
#line 304 "thread.m"
        {
#line 305 "thread.m"
          *mercury__thread__Res_6 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__thread_scalar_common_5[1]);
#line 304 "thread.m"
        }
#line 303 "thread.m"
        break;
#line 303 "thread.m"
      case (MR_Integer) 1:
#line 301 "thread.m"
        {
#line 301 "thread.m"
          MR_Word mercury__thread__V_14_14 = (MR_Word) mercury__thread__ThreadId_9;

#line 302 "thread.m"
          {
#line 302 "thread.m"
            MR_Word base;
#line 302 "thread.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 302 "thread.m"
            *mercury__thread__Res_6 = base;
#line 302 "thread.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__thread__V_14_14));
#line 302 "thread.m"
          }
#line 301 "thread.m"
        }
#line 303 "thread.m"
        break;
#line 303 "thread.m"
    }
#line 298 "thread.m"
  }
#line 85 "thread.m"
}

#line 68 "thread.m"
void MR_CALL 
mercury__thread__spawn_4_p_0(
#line 68 "thread.m"
  MR_Word mercury__thread__Goal_5,
#line 68 "thread.m"
  MR_Word * mercury__thread__Res_6)
#line 68 "thread.m"
{
#line 209 "thread.m"
  {
#line 209 "thread.m"
    MR_bool mercury__thread__succeeded;

#line 207 "thread.m"
    {
#line 207 "thread.m"
      mercury__thread__succeeded = mercury__thread__can_spawn_context_0_p_0();
    }
#line 209 "thread.m"
    if (mercury__thread__succeeded)
#line 218 "thread.m"
      {
#line 218 "thread.m"
        MR_Word mercury__thread__Success_17;
#line 218 "thread.m"
        MR_String mercury__thread__ThreadId_18;

#line 219 "thread.m"
        {
#line 219 "thread.m"
          mercury__thread__spawn_context_2_5_p_0(mercury__thread__Goal_5, &mercury__thread__Success_17, &mercury__thread__ThreadId_18);
        }
#line 223 "thread.m"
#line 223 "thread.m"
        switch (mercury__thread__Success_17) {
#line 223 "thread.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 223 "thread.m"
          case (MR_Integer) 0:
#line 224 "thread.m"
            {
#line 225 "thread.m"
              *mercury__thread__Res_6 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__thread_scalar_common_5[0]);
#line 224 "thread.m"
            }
#line 223 "thread.m"
            break;
#line 223 "thread.m"
          case (MR_Integer) 1:
#line 221 "thread.m"
            {
#line 221 "thread.m"
              MR_Word mercury__thread__V_21_21 = (MR_Word) mercury__thread__ThreadId_18;

#line 222 "thread.m"
              {
#line 222 "thread.m"
                MR_Word base;
#line 222 "thread.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 222 "thread.m"
                *mercury__thread__Res_6 = base;
#line 222 "thread.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__thread__V_21_21));
#line 222 "thread.m"
              }
#line 221 "thread.m"
            }
#line 223 "thread.m"
            break;
#line 223 "thread.m"
        }
#line 218 "thread.m"
      }
#line 209 "thread.m"
    else
#line 298 "thread.m"
      {
#line 298 "thread.m"
        MR_Word mercury__thread__Success_27;
#line 298 "thread.m"
        MR_String mercury__thread__ThreadId_28;

#line 299 "thread.m"
        {
#line 299 "thread.m"
          mercury__thread__spawn_native_2_5_p_0(mercury__thread__Goal_5, &mercury__thread__Success_27, &mercury__thread__ThreadId_28);
        }
#line 303 "thread.m"
#line 303 "thread.m"
        switch (mercury__thread__Success_27) {
#line 303 "thread.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 303 "thread.m"
          case (MR_Integer) 0:
#line 304 "thread.m"
            {
#line 305 "thread.m"
              *mercury__thread__Res_6 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__thread_scalar_common_5[1]);
#line 304 "thread.m"
            }
#line 303 "thread.m"
            break;
#line 303 "thread.m"
          case (MR_Integer) 1:
#line 301 "thread.m"
            {
#line 301 "thread.m"
              MR_Word mercury__thread__V_31_31 = (MR_Word) mercury__thread__ThreadId_28;

#line 302 "thread.m"
              {
#line 302 "thread.m"
                MR_Word base;
#line 302 "thread.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 302 "thread.m"
                *mercury__thread__Res_6 = base;
#line 302 "thread.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__thread__V_31_31));
#line 302 "thread.m"
              }
#line 301 "thread.m"
            }
#line 303 "thread.m"
            break;
#line 303 "thread.m"
        }
#line 298 "thread.m"
      }
#line 209 "thread.m"
  }
#line 68 "thread.m"
}

#line 197 "thread.m"
static void MR_CALL 
mercury__thread__spawn_3_p_0_1(
#line 197 "thread.m"
  MR_Box mercury__thread__closure_arg,
#line 197 "thread.m"
  MR_Box mercury__thread__wrapper_arg_1,
#line 197 "thread.m"
  MR_Box mercury__thread__wrapper_arg_2,
#line 197 "thread.m"
  MR_Box * mercury__thread__wrapper_arg_3)
#line 197 "thread.m"
{
#line 197 "thread.m"
  {
#line 197 "thread.m"
    MR_Box mercury__thread__closure = mercury__thread__closure_arg;

#line 197 "thread.m"
    {
#line 197 "thread.m"
      mercury__thread__IntroducedFrom__pred__spawn__197__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__closure, (MR_Integer) 3))), ((MR_Word) mercury__thread__wrapper_arg_1));
#line 197 "thread.m"
      return;
    }
#line 197 "thread.m"
  }
#line 197 "thread.m"
}

#line 61 "thread.m"
void MR_CALL 
mercury__thread__spawn_3_p_0(
#line 61 "thread.m"
  MR_Word mercury__thread__Goal0_4)
#line 61 "thread.m"
{
#line 196 "thread.m"
  {
#line 196 "thread.m"
    MR_bool mercury__thread__succeeded;
#line 196 "thread.m"
    MR_Word mercury__thread__Goal_6;
#line 196 "thread.m"
    MR_Word mercury__thread__Res_9;

#line 197 "thread.m"
    {
#line 197 "thread.m"
      mercury__thread__Goal_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 197 "thread.m"
      MR_hl_field(MR_mktag(0), mercury__thread__Goal_6, 0) = ((MR_Box) (&mercury__thread_scalar_common_4[0]));
#line 197 "thread.m"
      MR_hl_field(MR_mktag(0), mercury__thread__Goal_6, 1) = ((MR_Box) (mercury__thread__spawn_3_p_0_1));
#line 197 "thread.m"
      MR_hl_field(MR_mktag(0), mercury__thread__Goal_6, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 197 "thread.m"
      MR_hl_field(MR_mktag(0), mercury__thread__Goal_6, 3) = ((MR_Box) (mercury__thread__Goal0_4));
#line 197 "thread.m"
    }
#line 207 "thread.m"
    {
#line 207 "thread.m"
      mercury__thread__succeeded = mercury__thread__can_spawn_context_0_p_0();
    }
#line 209 "thread.m"
    if (mercury__thread__succeeded)
#line 208 "thread.m"
      {
#line 208 "thread.m"
        MR_Word mercury__thread__Success_36;
#line 208 "thread.m"
        MR_String mercury__thread__ThreadId_37;

#line 219 "thread.m"
        {
#line 219 "thread.m"
          mercury__thread__spawn_context_2_5_p_0(mercury__thread__Goal_6, &mercury__thread__Success_36, &mercury__thread__ThreadId_37);
        }
#line 223 "thread.m"
#line 223 "thread.m"
        switch (mercury__thread__Success_36) {
#line 223 "thread.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 223 "thread.m"
          case (MR_Integer) 0:
#line 224 "thread.m"
            {
#line 225 "thread.m"
              mercury__thread__Res_9 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__thread_scalar_common_5[0]);
#line 224 "thread.m"
            }
#line 223 "thread.m"
            break;
#line 223 "thread.m"
          case (MR_Integer) 1:
#line 221 "thread.m"
            {
#line 221 "thread.m"
              MR_Word mercury__thread__V_40_40 = (MR_Word) mercury__thread__ThreadId_37;

#line 222 "thread.m"
              {
#line 222 "thread.m"
                mercury__thread__Res_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 222 "thread.m"
                MR_hl_field(MR_mktag(0), mercury__thread__Res_9, 0) = ((MR_Box) (mercury__thread__V_40_40));
#line 222 "thread.m"
              }
#line 221 "thread.m"
            }
#line 223 "thread.m"
            break;
#line 223 "thread.m"
        }
#line 208 "thread.m"
      }
#line 209 "thread.m"
    else
#line 210 "thread.m"
      {
#line 210 "thread.m"
        MR_Word mercury__thread__Success_46;
#line 210 "thread.m"
        MR_String mercury__thread__ThreadId_47;

#line 299 "thread.m"
        {
#line 299 "thread.m"
          mercury__thread__spawn_native_2_5_p_0(mercury__thread__Goal_6, &mercury__thread__Success_46, &mercury__thread__ThreadId_47);
        }
#line 303 "thread.m"
#line 303 "thread.m"
        switch (mercury__thread__Success_46) {
#line 303 "thread.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 303 "thread.m"
          case (MR_Integer) 0:
#line 304 "thread.m"
            {
#line 305 "thread.m"
              mercury__thread__Res_9 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__thread_scalar_common_5[1]);
#line 304 "thread.m"
            }
#line 303 "thread.m"
            break;
#line 303 "thread.m"
          case (MR_Integer) 1:
#line 301 "thread.m"
            {
#line 301 "thread.m"
              MR_Word mercury__thread__V_50_50 = (MR_Word) mercury__thread__ThreadId_47;

#line 302 "thread.m"
              {
#line 302 "thread.m"
                mercury__thread__Res_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 302 "thread.m"
                MR_hl_field(MR_mktag(0), mercury__thread__Res_9, 0) = ((MR_Box) (mercury__thread__V_50_50));
#line 302 "thread.m"
              }
#line 301 "thread.m"
            }
#line 303 "thread.m"
            break;
#line 303 "thread.m"
        }
#line 210 "thread.m"
      }
#line 201 "thread.m"
    if (((MR_tag((MR_Word) mercury__thread__Res_9)) == (MR_mktag((MR_Integer) 1))))
#line 202 "thread.m"
      {
#line 202 "thread.m"
        MR_String mercury__thread__Error_11 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__thread__Res_9, (MR_Integer) 0)));

#line 203 "thread.m"
        {
#line 203 "thread.m"
          mercury__require__unexpected_3_p_0((MR_String) "thread", (MR_String) "predicate \140thread.spawn\'/3", mercury__thread__Error_11);
#line 203 "thread.m"
          return;
        }
#line 202 "thread.m"
      }
#line 201 "thread.m"
    else
#line 200 "thread.m"
      {
#line 200 "thread.m"
      }
#line 196 "thread.m"
  }
#line 61 "thread.m"
}

#line 49 "thread.m"
MR_bool MR_CALL 
mercury__thread__can_spawn_native_0_p_0(void)
#line 49 "thread.m"
{
#line 162 "thread.m"
  {
#line 162 "thread.m"
    MR_bool mercury__thread__succeeded;

#line 165 "thread.m"
{
#define MR_PROC_LABEL mercury__thread__can_spawn_native_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 165 "thread.m"

#if defined(MR_THREAD_SAFE)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif

#line 1681 "thread.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 165 "thread.m"
	}
mercury__thread__succeeded  = SUCCESS_INDICATOR;
}
#line 162 "thread.m"
    return mercury__thread__succeeded;
#line 162 "thread.m"
  }
#line 49 "thread.m"
}

#line 44 "thread.m"
MR_bool MR_CALL 
mercury__thread__can_spawn_0_p_0(void)
#line 44 "thread.m"
{
#line 142 "thread.m"
  {
#line 142 "thread.m"
    MR_bool mercury__thread__succeeded;

#line 142 "thread.m"
    {
#line 142 "thread.m"
      mercury__thread__succeeded = mercury__thread__can_spawn_context_0_p_0();
    }
#line 142 "thread.m"
    if (!(mercury__thread__succeeded))
#line 162 "thread.m"
      {
#line 165 "thread.m"
{
#define MR_PROC_LABEL mercury__thread__can_spawn_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 165 "thread.m"

#if defined(MR_THREAD_SAFE)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif

#line 1731 "thread.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 165 "thread.m"
	}
mercury__thread__succeeded  = SUCCESS_INDICATOR;
}
#line 162 "thread.m"
      }
#line 142 "thread.m"
    return mercury__thread__succeeded;
#line 142 "thread.m"
  }
#line 44 "thread.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module thread. */
