/*
** Automatically generated from `thread.m'
** by the Mercury compiler,
** version rotd-2014-11-20
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
#include "string.to_string.mih"




#line 616 "thread.m"

#if defined(MR_THREAD_SAFE) || !defined(MR_HIGHLEVEL_CODE)
  static void ML_incr_thread_barrier_count(void);
  static void ML_decr_thread_barrier_count(void);
#endif



#line 99 "thread.c"
static const MR_VA_PseudoTypeInfo_Struct2 mercury__thread____vpti_pred_2__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

#line 102 "thread.c"
static const MR_Integer mercury__thread__thread__functor_number_map_thread_0[1];

#line 105 "thread.c"
static const MR_NotagFunctorDesc mercury__thread__thread__notag_functor_desc_thread_0;

#line 108 "thread.c"
static MR_bool MR_CALL 
mercury__thread____Unify____thread_0_0_10001(
#line 111 "thread.c"
  MR_Box mercury__thread__wrapper_arg_1,
#line 113 "thread.c"
  MR_Box mercury__thread__wrapper_arg_2);

#line 116 "thread.c"
static void MR_CALL 
mercury__thread____Compare____thread_0_0_10001(
#line 119 "thread.c"
  MR_Box * mercury__thread__wrapper_arg_1,
#line 121 "thread.c"
  MR_Box mercury__thread__wrapper_arg_2,
#line 123 "thread.c"
  MR_Box mercury__thread__wrapper_arg_3);

#line 126 "thread.c"
static MR_bool MR_CALL 
mercury__thread____Unify____thread_id_0_0_10001(
#line 129 "thread.c"
  MR_Box mercury__thread__wrapper_arg_1,
#line 131 "thread.c"
  MR_Box mercury__thread__wrapper_arg_2);

#line 134 "thread.c"
static void MR_CALL 
mercury__thread____Compare____thread_id_0_0_10001(
#line 137 "thread.c"
  MR_Box * mercury__thread__wrapper_arg_1,
#line 139 "thread.c"
  MR_Box mercury__thread__wrapper_arg_2,
#line 141 "thread.c"
  MR_Box mercury__thread__wrapper_arg_3);

#line 198 "thread.m"
static void MR_CALL 
mercury__thread__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_112_97_119_110_95_95_49_57_56_95_95_49_95_95_91_50_93_95_48_4_p_0(
#line 198 "thread.m"
  MR_Word mercury__thread__Goal0_4);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__thread__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 198 "thread.m"
static void MR_CALL 
mercury__thread__IntroducedFrom__pred__spawn__198__1_4_p_0(
#line 198 "thread.m"
  MR_Word mercury__thread__Goal0_4,
#line 198 "thread.m"
  MR_Word mercury__thread__HeadVar__2_14);

#line 198 "thread.m"
static void MR_CALL 
mercury__thread__spawn_3_p_0_1(
#line 198 "thread.m"
  MR_Box mercury__thread__closure_arg,
#line 198 "thread.m"
  MR_Box mercury__thread__wrapper_arg_1,
#line 198 "thread.m"
  MR_Box mercury__thread__wrapper_arg_2,
#line 198 "thread.m"
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

#line 516 "thread.m"

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

#line 624 "thread.m"

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

#line 601 "thread.m"
void 
ML_call_back_to_mercury_cc_multi(
#line 601 "thread.m"
  MR_Word mercury__thread__Goal_5,
#line 601 "thread.m"
  MR_String mercury__thread__ThreadId_6)
#line 601 "thread.m"
{
#line 601 "thread.m"
	mercury__thread__call_back_to_mercury_4_p_0((MR_Word) mercury__thread__Goal_5, (MR_String) mercury__thread__ThreadId_6);
}


#line 756 "thread.c"
static const MR_VA_PseudoTypeInfo_Struct2 mercury__thread____vpti_pred_2__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

#line 766 "thread.c"
static const MR_Integer mercury__thread__thread__functor_number_map_thread_0[1] = {
  (MR_Integer) 0
};

#line 771 "thread.c"
static const MR_NotagFunctorDesc mercury__thread__thread__notag_functor_desc_thread_0 = {
  (MR_String) "thread",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  NULL
};

#line 778 "thread.c"
const MR_TypeCtorInfo_Struct mercury__thread__thread__type_ctor_info_thread_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__thread____Unify____thread_0_0_10001)),
  ((MR_Box) (mercury__thread____Compare____thread_0_0_10001)),
  (MR_String) "thread",
  (MR_String) "thread",
  {
    &mercury__thread__thread__notag_functor_desc_thread_0
  },
  {
    &mercury__thread__thread__notag_functor_desc_thread_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__thread__thread__functor_number_map_thread_0
};

#line 799 "thread.c"
const MR_TypeCtorInfo_Struct mercury__thread__thread__type_ctor_info_thread_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__thread____Unify____thread_id_0_0_10001)),
  ((MR_Box) (mercury__thread____Compare____thread_id_0_0_10001)),
  (MR_String) "thread",
  (MR_String) "thread_id",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 820 "thread.c"
static MR_bool MR_CALL 
mercury__thread____Unify____thread_0_0_10001(
#line 823 "thread.c"
  MR_Box mercury__thread__wrapper_arg_1,
#line 825 "thread.c"
  MR_Box mercury__thread__wrapper_arg_2)
#line 827 "thread.c"
{
#line 829 "thread.c"
  {
#line 831 "thread.c"
    MR_bool mercury__thread__succeeded;

#line 834 "thread.c"
    {
#line 836 "thread.c"
      mercury__thread__succeeded = mercury__thread____Unify____thread_0_0(((MR_Word) mercury__thread__wrapper_arg_1), ((MR_Word) mercury__thread__wrapper_arg_2));
    }
#line 839 "thread.c"
    return mercury__thread__succeeded;
#line 841 "thread.c"
  }
#line 843 "thread.c"
}

#line 846 "thread.c"
static void MR_CALL 
mercury__thread____Compare____thread_0_0_10001(
#line 849 "thread.c"
  MR_Box * mercury__thread__wrapper_arg_1,
#line 851 "thread.c"
  MR_Box mercury__thread__wrapper_arg_2,
#line 853 "thread.c"
  MR_Box mercury__thread__wrapper_arg_3)
#line 855 "thread.c"
{
#line 857 "thread.c"
  {
#line 859 "thread.c"
    MR_Word mercury__thread__conv0_HeadVar__1_1;

#line 862 "thread.c"
    {
#line 864 "thread.c"
      mercury__thread____Compare____thread_0_0(&mercury__thread__conv0_HeadVar__1_1, ((MR_Word) mercury__thread__wrapper_arg_2), ((MR_Word) mercury__thread__wrapper_arg_3));
    }
#line 867 "thread.c"
    *mercury__thread__wrapper_arg_1 = ((MR_Box) (mercury__thread__conv0_HeadVar__1_1));
#line 869 "thread.c"
  }
#line 871 "thread.c"
}

#line 874 "thread.c"
static MR_bool MR_CALL 
mercury__thread____Unify____thread_id_0_0_10001(
#line 877 "thread.c"
  MR_Box mercury__thread__wrapper_arg_1,
#line 879 "thread.c"
  MR_Box mercury__thread__wrapper_arg_2)
#line 881 "thread.c"
{
#line 883 "thread.c"
  {
#line 885 "thread.c"
    MR_bool mercury__thread__succeeded;

#line 888 "thread.c"
    {
#line 890 "thread.c"
      mercury__thread__succeeded = mercury__thread____Unify____thread_id_0_0(((MR_String) mercury__thread__wrapper_arg_1), ((MR_String) mercury__thread__wrapper_arg_2));
    }
#line 893 "thread.c"
    return mercury__thread__succeeded;
#line 895 "thread.c"
  }
#line 897 "thread.c"
}

#line 900 "thread.c"
static void MR_CALL 
mercury__thread____Compare____thread_id_0_0_10001(
#line 903 "thread.c"
  MR_Box * mercury__thread__wrapper_arg_1,
#line 905 "thread.c"
  MR_Box mercury__thread__wrapper_arg_2,
#line 907 "thread.c"
  MR_Box mercury__thread__wrapper_arg_3)
#line 909 "thread.c"
{
#line 911 "thread.c"
  {
#line 913 "thread.c"
    MR_Word mercury__thread__conv0_HeadVar__1_1;

#line 916 "thread.c"
    {
#line 918 "thread.c"
      mercury__thread____Compare____thread_id_0_0(&mercury__thread__conv0_HeadVar__1_1, ((MR_String) mercury__thread__wrapper_arg_2), ((MR_String) mercury__thread__wrapper_arg_3));
    }
#line 921 "thread.c"
    *mercury__thread__wrapper_arg_1 = ((MR_Box) (mercury__thread__conv0_HeadVar__1_1));
#line 923 "thread.c"
  }
#line 925 "thread.c"
}

#line 198 "thread.m"
static void MR_CALL 
mercury__thread__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_112_97_119_110_95_95_49_57_56_95_95_49_95_95_91_50_93_95_48_4_p_0(
#line 198 "thread.m"
  MR_Word mercury__thread__Goal0_4)
#line 198 "thread.m"
{
#line 198 "thread.m"
  {
#line 198 "thread.m"
    MR_bool mercury__thread__succeeded;
#line 198 "thread.m"
    void MR_CALL (* mercury__thread__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__thread__Goal0_4, (MR_Integer) 1)));
#line 198 "thread.m"
    MR_Box mercury__thread__conv1_HeadVar__4_16;

#line 198 "thread.m"
    {
#line 198 "thread.m"
      mercury__thread__func_0(((MR_Box) mercury__thread__Goal0_4), ((MR_Box) ((MR_Integer) 0)), &mercury__thread__conv1_HeadVar__4_16);
    }
#line 198 "thread.m"
  }
#line 198 "thread.m"
}

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__thread__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__thread__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
}

#line 198 "thread.m"
static void MR_CALL 
mercury__thread__IntroducedFrom__pred__spawn__198__1_4_p_0(
#line 198 "thread.m"
  MR_Word mercury__thread__Goal0_4,
#line 198 "thread.m"
  MR_Word mercury__thread__HeadVar__2_14)
#line 198 "thread.m"
{
#line 198 "thread.m"
  {
#line 198 "thread.m"
    MR_bool mercury__thread__succeeded;

#line 198 "thread.m"
    {
#line 198 "thread.m"
      mercury__thread__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_112_97_119_110_95_95_49_57_56_95_95_49_95_95_91_50_93_95_48_4_p_0(mercury__thread__Goal0_4);
#line 198 "thread.m"
      return;
    }
#line 198 "thread.m"
  }
#line 198 "thread.m"
}

#line 138 "thread.m"
void MR_CALL 
mercury__thread____Compare____thread_id_0_0(
#line 138 "thread.m"
  MR_Word * mercury__thread__HeadVar__1_1,
#line 138 "thread.m"
  MR_String mercury__thread__HeadVar__2_2,
#line 138 "thread.m"
  MR_String mercury__thread__HeadVar__3_3)
#line 138 "thread.m"
{
#line 138 "thread.m"
  {
#line 138 "thread.m"
    MR_bool mercury__thread__succeeded;
#line 138 "thread.m"
    MR_String mercury__thread__Cast_HeadVar1_4 = mercury__thread__HeadVar__2_2;
#line 138 "thread.m"
    MR_String mercury__thread__Cast_HeadVar2_5 = mercury__thread__HeadVar__3_3;
#line 138 "thread.m"
    MR_Integer mercury__thread__Res_7_10;

#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__thread____Compare____thread_id_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__thread__Cast_HeadVar1_4 ;
	S2 =  mercury__thread__Cast_HeadVar2_5 ;
		{
#line 134 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 1034 "thread.c"

		;}
#undef MR_PROC_LABEL
	 mercury__thread__Res_7_10  = Res;
#line 134 "private_builtin.opt"
}
#line 102 "private_builtin.opt"
    mercury__thread__succeeded = (mercury__thread__Res_7_10 < (MR_Integer) 0);
#line 105 "private_builtin.opt"
    if (mercury__thread__succeeded)
#line 104 "private_builtin.opt"
      *mercury__thread__HeadVar__1_1 = (MR_Integer) 1;
#line 105 "private_builtin.opt"
    else
#line 110 "private_builtin.opt"
      {
#line 107 "private_builtin.opt"
        mercury__thread__succeeded = (mercury__thread__Res_7_10 == (MR_Integer) 0);
#line 110 "private_builtin.opt"
        if (mercury__thread__succeeded)
#line 109 "private_builtin.opt"
          *mercury__thread__HeadVar__1_1 = (MR_Integer) 0;
#line 110 "private_builtin.opt"
        else
#line 111 "private_builtin.opt"
          *mercury__thread__HeadVar__1_1 = (MR_Integer) 2;
#line 110 "private_builtin.opt"
      }
#line 138 "thread.m"
  }
#line 138 "thread.m"
}

#line 138 "thread.m"
MR_bool MR_CALL 
mercury__thread____Unify____thread_id_0_0(
#line 138 "thread.m"
  MR_String mercury__thread__HeadVar__1_1,
#line 138 "thread.m"
  MR_String mercury__thread__HeadVar__2_2)
#line 138 "thread.m"
{
#line 138 "thread.m"
  {
#line 138 "thread.m"
    MR_bool mercury__thread__succeeded;
#line 138 "thread.m"
    MR_String mercury__thread__Cast_HeadVar1_3 = mercury__thread__HeadVar__1_1;
#line 138 "thread.m"
    MR_String mercury__thread__Cast_HeadVar2_4 = mercury__thread__HeadVar__2_2;

#line 138 "thread.m"
    mercury__thread__succeeded = (strcmp(mercury__thread__Cast_HeadVar1_3, mercury__thread__Cast_HeadVar2_4) == 0);
#line 138 "thread.m"
    return mercury__thread__succeeded;
#line 138 "thread.m"
  }
#line 138 "thread.m"
}

#line 135 "thread.m"
void MR_CALL 
mercury__thread____Compare____thread_0_0(
#line 135 "thread.m"
  MR_Word * mercury__thread__HeadVar__1_1,
#line 135 "thread.m"
  MR_Word mercury__thread__HeadVar__2_2,
#line 135 "thread.m"
  MR_Word mercury__thread__HeadVar__3_3)
#line 135 "thread.m"
{
#line 135 "thread.m"
  {
#line 135 "thread.m"
    MR_bool mercury__thread__succeeded;
#line 135 "thread.m"
    MR_Integer mercury__thread__CastX_6 = (MR_Integer) mercury__thread__HeadVar__2_2;
#line 135 "thread.m"
    MR_Integer mercury__thread__CastY_7 = (MR_Integer) mercury__thread__HeadVar__3_3;

#line 135 "thread.m"
    mercury__thread__succeeded = (mercury__thread__CastX_6 == mercury__thread__CastY_7);
#line 135 "thread.m"
    if (mercury__thread__succeeded)
#line 1119 "thread.c"
      *mercury__thread__HeadVar__1_1 = (MR_Integer) 0;
#line 135 "thread.m"
    else
#line 135 "thread.m"
      {
#line 135 "thread.m"
        MR_String mercury__thread__V_4_4 = (MR_String) mercury__thread__HeadVar__2_2;
#line 135 "thread.m"
        MR_String mercury__thread__V_5_5 = (MR_String) mercury__thread__HeadVar__3_3;
#line 135 "thread.m"
        MR_Integer mercury__thread__Res_7_12;

#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__thread____Compare____thread_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__thread__V_4_4 ;
	S2 =  mercury__thread__V_5_5 ;
		{
#line 134 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 1147 "thread.c"

		;}
#undef MR_PROC_LABEL
	 mercury__thread__Res_7_12  = Res;
#line 134 "private_builtin.opt"
}
#line 102 "private_builtin.opt"
        mercury__thread__succeeded = (mercury__thread__Res_7_12 < (MR_Integer) 0);
#line 105 "private_builtin.opt"
        if (mercury__thread__succeeded)
#line 104 "private_builtin.opt"
          *mercury__thread__HeadVar__1_1 = (MR_Integer) 1;
#line 105 "private_builtin.opt"
        else
#line 110 "private_builtin.opt"
          {
#line 107 "private_builtin.opt"
            mercury__thread__succeeded = (mercury__thread__Res_7_12 == (MR_Integer) 0);
#line 110 "private_builtin.opt"
            if (mercury__thread__succeeded)
#line 109 "private_builtin.opt"
              *mercury__thread__HeadVar__1_1 = (MR_Integer) 0;
#line 110 "private_builtin.opt"
            else
#line 111 "private_builtin.opt"
              *mercury__thread__HeadVar__1_1 = (MR_Integer) 2;
#line 110 "private_builtin.opt"
          }
#line 135 "thread.m"
      }
#line 135 "thread.m"
  }
#line 135 "thread.m"
}

#line 135 "thread.m"
MR_bool MR_CALL 
mercury__thread____Unify____thread_0_0(
#line 135 "thread.m"
  MR_Word mercury__thread__HeadVar__1_1,
#line 135 "thread.m"
  MR_Word mercury__thread__HeadVar__2_2)
#line 135 "thread.m"
{
#line 135 "thread.m"
  {
#line 135 "thread.m"
    MR_bool mercury__thread__succeeded;
#line 135 "thread.m"
    MR_Integer mercury__thread__CastX_5 = (MR_Integer) mercury__thread__HeadVar__1_1;
#line 135 "thread.m"
    MR_Integer mercury__thread__CastY_6 = (MR_Integer) mercury__thread__HeadVar__2_2;

#line 135 "thread.m"
    mercury__thread__succeeded = (mercury__thread__CastX_5 == mercury__thread__CastY_6);
#line 135 "thread.m"
    if (mercury__thread__succeeded)
#line 135 "thread.m"
      mercury__thread__succeeded = MR_TRUE;
#line 135 "thread.m"
    else
#line 135 "thread.m"
      {
#line 135 "thread.m"
        MR_String mercury__thread__V_3_3 = (MR_String) mercury__thread__HeadVar__1_1;
#line 135 "thread.m"
        MR_String mercury__thread__V_4_4 = (MR_String) mercury__thread__HeadVar__2_2;

#line 1216 "thread.c"
        mercury__thread__succeeded = (strcmp(mercury__thread__V_3_3, mercury__thread__V_4_4) == 0);
#line 135 "thread.m"
      }
#line 135 "thread.m"
    return mercury__thread__succeeded;
#line 135 "thread.m"
  }
#line 135 "thread.m"
}

#line 599 "thread.m"
void MR_CALL 
mercury__thread__call_back_to_mercury_4_p_0(
#line 599 "thread.m"
  MR_Word mercury__thread__Goal_5,
#line 599 "thread.m"
  MR_String mercury__thread__ThreadId_6)
#line 599 "thread.m"
{
#line 611 "thread.m"
  {
#line 611 "thread.m"
    MR_bool mercury__thread__succeeded;
#line 611 "thread.m"
    MR_Word mercury__thread__V_10_10 = (MR_Word) mercury__thread__ThreadId_6;
#line 612 "thread.m"
    void MR_CALL (* mercury__thread__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__thread__Goal_5, (MR_Integer) 1)));
#line 612 "thread.m"
    MR_Box mercury__thread__conv1_STATE_VARIABLE_IO_9;

#line 612 "thread.m"
    {
#line 612 "thread.m"
      mercury__thread__func_0(((MR_Box) mercury__thread__Goal_5), ((MR_Box) (mercury__thread__V_10_10)), ((MR_Box) ((MR_Integer) 0)), &mercury__thread__conv1_STATE_VARIABLE_IO_9);
    }
#line 611 "thread.m"
  }
#line 599 "thread.m"
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

#line 1292 "thread.c"

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

#line 230 "thread.m"
void MR_CALL 
mercury__thread__spawn_context_2_5_p_0(
#line 230 "thread.m"
  MR_Word mercury__thread__Goal_1,
#line 230 "thread.m"
  MR_Word * mercury__thread__Success_2,
#line 230 "thread.m"
  MR_String * mercury__thread__ThreadId_3)
#line 230 "thread.m"
{
#line 238 "thread.m"
  {
#line 238 "thread.m"
    MR_bool mercury__thread__succeeded;

#line 243 "thread.m"
{
#define MR_PROC_LABEL mercury__thread__spawn_context_2_5_p_0

	MR_Word Goal;
	MR_Word Success;
	MR_String ThreadId;

	Goal =  mercury__thread__Goal_1 ;
		{
#line 243 "thread.m"

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
    ctxt->MR_ctxt_sp[0] = Goal;
    ctxt->MR_ctxt_sp[-1] = (MR_Word) ThreadId;

    MR_schedule_context(ctxt);

    Success = MR_TRUE;
}
#else /* MR_HIGHLEVEL_CODE */
{
    Success = MR_FALSE;
    ThreadId = MR_make_string_const("");
}
#endif /* MR_HIGHLEVEL_CODE */

#line 1370 "thread.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__thread__Success_2  = Success;
	 *mercury__thread__ThreadId_3  = ThreadId;
#line 243 "thread.m"
}
#line 238 "thread.m"
  }
#line 230 "thread.m"
}

#line 217 "thread.m"
void MR_CALL 
mercury__thread__spawn_context_4_p_0(
#line 217 "thread.m"
  MR_Word mercury__thread__Goal_5,
#line 217 "thread.m"
  MR_Word * mercury__thread__Res_6)
#line 217 "thread.m"
{
#line 219 "thread.m"
  {
#line 219 "thread.m"
    MR_bool mercury__thread__succeeded;
#line 219 "thread.m"
    MR_Word mercury__thread__Success_8;
#line 219 "thread.m"
    MR_String mercury__thread__ThreadId_9;

#line 220 "thread.m"
    {
#line 220 "thread.m"
      mercury__thread__spawn_context_2_5_p_0(mercury__thread__Goal_5, &mercury__thread__Success_8, &mercury__thread__ThreadId_9);
    }
#line 224 "thread.m"
    if ((mercury__thread__Success_8 == (MR_Integer) 0))
#line 225 "thread.m"
      {
#line 226 "thread.m"
        *mercury__thread__Res_6 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__thread_scalar_common_5[0]);
#line 225 "thread.m"
      }
#line 224 "thread.m"
    else
#line 222 "thread.m"
      {
#line 222 "thread.m"
        MR_Word mercury__thread__V_14_14 = (MR_Word) mercury__thread__ThreadId_9;

#line 223 "thread.m"
        {
#line 223 "thread.m"
          MR_Word base;
#line 223 "thread.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 223 "thread.m"
          *mercury__thread__Res_6 = base;
#line 223 "thread.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__thread__V_14_14));
#line 223 "thread.m"
        }
#line 222 "thread.m"
      }
#line 219 "thread.m"
  }
#line 217 "thread.m"
}

#line 147 "thread.m"
MR_bool MR_CALL 
mercury__thread__can_spawn_context_0_p_0(void)
#line 147 "thread.m"
{
#line 152 "thread.m"
  {
#line 152 "thread.m"
    MR_bool mercury__thread__succeeded;

#line 155 "thread.m"
{
#define MR_PROC_LABEL mercury__thread__can_spawn_context_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 155 "thread.m"

#if !defined(MR_HIGHLEVEL_CODE)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif

#line 1465 "thread.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 155 "thread.m"
	}
mercury__thread__succeeded  = SUCCESS_INDICATOR;
}
#line 152 "thread.m"
    return mercury__thread__succeeded;
#line 152 "thread.m"
  }
#line 147 "thread.m"
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

#line 1517 "thread.c"

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
    if ((mercury__thread__Success_8 == (MR_Integer) 0))
#line 304 "thread.m"
      {
#line 305 "thread.m"
        *mercury__thread__Res_6 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__thread_scalar_common_5[1]);
#line 304 "thread.m"
      }
#line 303 "thread.m"
    else
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
#line 210 "thread.m"
  {
#line 210 "thread.m"
    MR_bool mercury__thread__succeeded;

#line 208 "thread.m"
    {
#line 208 "thread.m"
      mercury__thread__succeeded = mercury__thread__can_spawn_context_0_p_0();
    }
#line 210 "thread.m"
    if (mercury__thread__succeeded)
#line 219 "thread.m"
      {
#line 219 "thread.m"
        MR_Word mercury__thread__Success_17;
#line 219 "thread.m"
        MR_String mercury__thread__ThreadId_18;

#line 220 "thread.m"
        {
#line 220 "thread.m"
          mercury__thread__spawn_context_2_5_p_0(mercury__thread__Goal_5, &mercury__thread__Success_17, &mercury__thread__ThreadId_18);
        }
#line 224 "thread.m"
        if ((mercury__thread__Success_17 == (MR_Integer) 0))
#line 225 "thread.m"
          {
#line 226 "thread.m"
            *mercury__thread__Res_6 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__thread_scalar_common_5[0]);
#line 225 "thread.m"
          }
#line 224 "thread.m"
        else
#line 222 "thread.m"
          {
#line 222 "thread.m"
            MR_Word mercury__thread__V_21_21 = (MR_Word) mercury__thread__ThreadId_18;

#line 223 "thread.m"
            {
#line 223 "thread.m"
              MR_Word base;
#line 223 "thread.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 223 "thread.m"
              *mercury__thread__Res_6 = base;
#line 223 "thread.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__thread__V_21_21));
#line 223 "thread.m"
            }
#line 222 "thread.m"
          }
#line 219 "thread.m"
      }
#line 210 "thread.m"
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
        if ((mercury__thread__Success_27 == (MR_Integer) 0))
#line 304 "thread.m"
          {
#line 305 "thread.m"
            *mercury__thread__Res_6 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__thread_scalar_common_5[1]);
#line 304 "thread.m"
          }
#line 303 "thread.m"
        else
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
#line 298 "thread.m"
      }
#line 210 "thread.m"
  }
#line 68 "thread.m"
}

#line 198 "thread.m"
static void MR_CALL 
mercury__thread__spawn_3_p_0_1(
#line 198 "thread.m"
  MR_Box mercury__thread__closure_arg,
#line 198 "thread.m"
  MR_Box mercury__thread__wrapper_arg_1,
#line 198 "thread.m"
  MR_Box mercury__thread__wrapper_arg_2,
#line 198 "thread.m"
  MR_Box * mercury__thread__wrapper_arg_3)
#line 198 "thread.m"
{
#line 198 "thread.m"
  {
#line 198 "thread.m"
    MR_Box mercury__thread__closure = mercury__thread__closure_arg;

#line 198 "thread.m"
    {
#line 198 "thread.m"
      mercury__thread__IntroducedFrom__pred__spawn__198__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__closure, (MR_Integer) 3))), ((MR_Word) mercury__thread__wrapper_arg_1));
#line 198 "thread.m"
      return;
    }
#line 198 "thread.m"
  }
#line 198 "thread.m"
}

#line 61 "thread.m"
void MR_CALL 
mercury__thread__spawn_3_p_0(
#line 61 "thread.m"
  MR_Word mercury__thread__Goal0_4)
#line 61 "thread.m"
{
#line 197 "thread.m"
  {
#line 197 "thread.m"
    MR_bool mercury__thread__succeeded;
#line 197 "thread.m"
    MR_Word mercury__thread__Goal_6;
#line 197 "thread.m"
    MR_Word mercury__thread__Res_9;

#line 198 "thread.m"
    {
#line 198 "thread.m"
      mercury__thread__Goal_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 198 "thread.m"
      MR_hl_field(MR_mktag(0), mercury__thread__Goal_6, 0) = ((MR_Box) (&mercury__thread_scalar_common_4[0]));
#line 198 "thread.m"
      MR_hl_field(MR_mktag(0), mercury__thread__Goal_6, 1) = ((MR_Box) (mercury__thread__spawn_3_p_0_1));
#line 198 "thread.m"
      MR_hl_field(MR_mktag(0), mercury__thread__Goal_6, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 198 "thread.m"
      MR_hl_field(MR_mktag(0), mercury__thread__Goal_6, 3) = ((MR_Box) (mercury__thread__Goal0_4));
#line 198 "thread.m"
    }
#line 208 "thread.m"
    {
#line 208 "thread.m"
      mercury__thread__succeeded = mercury__thread__can_spawn_context_0_p_0();
    }
#line 210 "thread.m"
    if (mercury__thread__succeeded)
#line 209 "thread.m"
      {
#line 209 "thread.m"
        MR_Word mercury__thread__Success_36;
#line 209 "thread.m"
        MR_String mercury__thread__ThreadId_37;

#line 220 "thread.m"
        {
#line 220 "thread.m"
          mercury__thread__spawn_context_2_5_p_0(mercury__thread__Goal_6, &mercury__thread__Success_36, &mercury__thread__ThreadId_37);
        }
#line 224 "thread.m"
        if ((mercury__thread__Success_36 == (MR_Integer) 0))
#line 225 "thread.m"
          {
#line 226 "thread.m"
            mercury__thread__Res_9 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__thread_scalar_common_5[0]);
#line 225 "thread.m"
          }
#line 224 "thread.m"
        else
#line 222 "thread.m"
          {
#line 222 "thread.m"
            MR_Word mercury__thread__V_40_40 = (MR_Word) mercury__thread__ThreadId_37;

#line 223 "thread.m"
            {
#line 223 "thread.m"
              mercury__thread__Res_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 223 "thread.m"
              MR_hl_field(MR_mktag(0), mercury__thread__Res_9, 0) = ((MR_Box) (mercury__thread__V_40_40));
#line 223 "thread.m"
            }
#line 222 "thread.m"
          }
#line 209 "thread.m"
      }
#line 210 "thread.m"
    else
#line 211 "thread.m"
      {
#line 211 "thread.m"
        MR_Word mercury__thread__Success_46;
#line 211 "thread.m"
        MR_String mercury__thread__ThreadId_47;

#line 299 "thread.m"
        {
#line 299 "thread.m"
          mercury__thread__spawn_native_2_5_p_0(mercury__thread__Goal_6, &mercury__thread__Success_46, &mercury__thread__ThreadId_47);
        }
#line 303 "thread.m"
        if ((mercury__thread__Success_46 == (MR_Integer) 0))
#line 304 "thread.m"
          {
#line 305 "thread.m"
            mercury__thread__Res_9 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__thread_scalar_common_5[1]);
#line 304 "thread.m"
          }
#line 303 "thread.m"
        else
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
#line 211 "thread.m"
      }
#line 202 "thread.m"
    if (((MR_tag((MR_Word) mercury__thread__Res_9)) == (MR_mktag((MR_Integer) 1))))
#line 203 "thread.m"
      {
#line 203 "thread.m"
        MR_String mercury__thread__Error_11 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__thread__Res_9, (MR_Integer) 0)));

#line 204 "thread.m"
        {
#line 204 "thread.m"
          mercury__require__unexpected_3_p_0((MR_String) "thread", (MR_String) "predicate \140thread.spawn\'/3", mercury__thread__Error_11);
#line 204 "thread.m"
          return;
        }
#line 203 "thread.m"
      }
#line 202 "thread.m"
    else
#line 201 "thread.m"
      {
#line 201 "thread.m"
      }
#line 197 "thread.m"
  }
#line 61 "thread.m"
}

#line 49 "thread.m"
MR_bool MR_CALL 
mercury__thread__can_spawn_native_0_p_0(void)
#line 49 "thread.m"
{
#line 163 "thread.m"
  {
#line 163 "thread.m"
    MR_bool mercury__thread__succeeded;

#line 166 "thread.m"
{
#define MR_PROC_LABEL mercury__thread__can_spawn_native_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 166 "thread.m"

#if defined(MR_THREAD_SAFE)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif

#line 1898 "thread.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 166 "thread.m"
	}
mercury__thread__succeeded  = SUCCESS_INDICATOR;
}
#line 163 "thread.m"
    return mercury__thread__succeeded;
#line 163 "thread.m"
  }
#line 49 "thread.m"
}

#line 44 "thread.m"
MR_bool MR_CALL 
mercury__thread__can_spawn_0_p_0(void)
#line 44 "thread.m"
{
#line 143 "thread.m"
  {
#line 143 "thread.m"
    MR_bool mercury__thread__succeeded;

#line 143 "thread.m"
    {
#line 143 "thread.m"
      mercury__thread__succeeded = mercury__thread__can_spawn_context_0_p_0();
    }
#line 143 "thread.m"
    if (!(mercury__thread__succeeded))
#line 163 "thread.m"
      {
#line 166 "thread.m"
{
#define MR_PROC_LABEL mercury__thread__can_spawn_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 166 "thread.m"

#if defined(MR_THREAD_SAFE)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif

#line 1948 "thread.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 166 "thread.m"
	}
mercury__thread__succeeded  = SUCCESS_INDICATOR;
}
#line 163 "thread.m"
      }
#line 143 "thread.m"
    return mercury__thread__succeeded;
#line 143 "thread.m"
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
