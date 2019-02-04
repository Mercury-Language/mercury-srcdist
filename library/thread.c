/*
** Automatically generated from `thread.m'
** by the Mercury compiler,
** version rotd-2007-08-01, configured for i686-pc-linux-gnu.
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
INIT mercury__thread__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 530 "io.int"
#include "io.mh"

#line 27 "thread.c"
#line 538 "io.int"
#include "string.mh"

#line 31 "thread.c"
#line 29 "bitmap.int2"
#include "bitmap.mh"

#line 35 "thread.c"
#line 28 "time.int2"
#include "time.mh"

#line 39 "thread.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 43 "thread.c"
#line 37 "builtin.opt"
#include "array.mh"

#line 47 "thread.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 51 "thread.c"
#line 4 "char.opt"
#include "char.mh"

#line 55 "thread.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 59 "thread.c"
#line 23 "store.opt"
#include "store.mh"

#line 63 "thread.c"
#line 3 "list.opt"
#include "list.mh"

#line 67 "thread.c"
#line 3 "float.opt"
#include "float.mh"

#line 71 "thread.c"
#line 3 "math.opt"
#include "math.mh"

#line 75 "thread.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 79 "thread.c"
#line 4 "int.opt"
#include "int.mh"

#line 83 "thread.c"
#line 103 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 87 "thread.c"
#line 148 "io.opt"
#include "dir.mh"

#line 91 "thread.c"
#line 156 "io.opt"
#include "table_builtin.mh"

#line 95 "thread.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 99 "thread.c"
#line 100 "thread.c"
#include "thread.mh"

#line 103 "thread.c"
#line 104 "thread.c"
#ifndef THREAD_DECL_GUARD
#define THREAD_DECL_GUARD

#line 108 "thread.c"
#line 149 "thread.m"

/*
INIT mercury_sys_init_thread_modules
*/

#ifndef MR_HIGHLEVEL_CODE
    MR_define_extern_entry(mercury__thread__spawn_begin_thread);
    MR_declare_label(mercury__thread__spawn_end_thread);
    MR_define_extern_entry(mercury__thread__yield_resume);
#endif

#line 121 "thread.c"
#line 243 "thread.m"

#if defined(MR_HIGHLEVEL_CODE) && defined(MR_THREAD_SAFE)
  #include  <pthread.h>

  int ML_create_thread(MR_Word goal);
  void *ML_thread_wrapper(void *arg);

  typedef struct ML_ThreadWrapperArgs ML_ThreadWrapperArgs;
  struct ML_ThreadWrapperArgs {
        MR_Word             goal;
        MR_ThreadLocalMuts  *thread_local_mutables;
  };
#endif /* MR_HIGHLEVEL_CODE && MR_THREAD_SAFE */

#line 137 "thread.c"
#line 138 "thread.c"

#endif
#line 141 "thread.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif
MR_decl_label1(thread__can_spawn_0_0, 1)
MR_def_extern_entry(thread__can_spawn_0_0)
MR_def_extern_entry(thread__spawn_3_0)
MR_def_extern_entry(thread__yield_2_0)
MR_def_extern_entry(thread__call_back_to_mercury_3_0)
MR_decl_static(fn__f_116_104_114_101_97_100_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)


MR_BEGIN_MODULE(thread_module0)
	MR_init_entry1(thread__can_spawn_0_0);
	MR_init_label1(thread__can_spawn_0_0,1)
MR_BEGIN_CODE

MR_define_entry(mercury__thread__can_spawn_0_0);
	{
#define	MR_PROC_LABEL	mercury__thread__can_spawn_0_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_OBTAIN_GLOBAL_LOCK("can_spawn");
{
#line 64 "thread.m"

#if !defined(MR_HIGHLEVEL_CODE)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    #if defined(MR_THREAD_SAFE)
        SUCCESS_INDICATOR = MR_TRUE;
    #else
        SUCCESS_INDICATOR = MR_FALSE;
    #endif
#endif
;}
#line 181 "thread.c"
	MR_RELEASE_GLOBAL_LOCK("can_spawn");
if (!MercurySuccessIndicator) MR_GOTO_LAB(thread__can_spawn_0_0_i1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(thread__can_spawn_0_0,1)
	MR_r1 = MR_FALSE;
	MR_proceed();
MR_END_MODULE


MR_BEGIN_MODULE(thread_module1)
	MR_init_entry1(thread__spawn_3_0);
MR_BEGIN_CODE

MR_define_entry(mercury__thread__spawn_3_0);
	{
	MR_Word	Goal;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__thread__spawn_3_0
	Goal = MR_r1;
{
#line 81 "thread.m"

#if !defined(MR_HIGHLEVEL_CODE)
    MR_Context  *ctxt;

    MR_LOCK(&MR_thread_barrier_lock, "thread.spawn");
    MR_thread_barrier_count++;
    MR_UNLOCK(&MR_thread_barrier_lock, "thread.spawn");

    ctxt = MR_create_context("spawn", MR_CONTEXT_SIZE_REGULAR, NULL);
    ctxt->MR_ctxt_resume = MR_ENTRY(mercury__thread__spawn_begin_thread);
    
    /*
    ** Store the closure on the top of the new context's stack.
    */
    
    *(ctxt->MR_ctxt_sp) = Goal;
    ctxt->MR_ctxt_next = NULL;
    ctxt->MR_ctxt_thread_local_mutables =
        MR_clone_thread_local_mutables(MR_THREAD_LOCAL_MUTABLES);
    MR_schedule_context(ctxt);

#else /* MR_HIGHLEVEL_CODE */

#if defined(MR_THREAD_SAFE)
    ML_create_thread(Goal);
#else
    MR_fatal_error("spawn/3 requires a .par grade in high-level C grades.");
#endif

#endif /* MR_HIGHLEVEL_CODE */
    IO = IO0;
;}
#line 241 "thread.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
MR_END_MODULE


MR_BEGIN_MODULE(thread_module2)
	MR_init_entry1(thread__yield_2_0);
MR_BEGIN_CODE

MR_define_entry(mercury__thread__yield_2_0);
	{
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__thread__yield_2_0
{
#line 130 "thread.m"

#ifndef MR_HIGHLEVEL_CODE
    MR_save_context(MR_ENGINE(MR_eng_this_context));
    MR_ENGINE(MR_eng_this_context)->MR_ctxt_resume =
        MR_ENTRY(mercury__thread__yield_resume);
    MR_schedule_context(MR_ENGINE(MR_eng_this_context));
    MR_ENGINE(MR_eng_this_context) = NULL;
    MR_runnext();
#endif
    IO = IO0;
;}
#line 270 "thread.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_1);

MR_BEGIN_MODULE(thread_module3)
	MR_init_entry1(thread__call_back_to_mercury_3_0);
MR_BEGIN_CODE

MR_define_entry(mercury__thread__call_back_to_mercury_3_0);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(thread__call_back_to_mercury_3_0));
	MR_np_tailcall_ent(do_call_closure_1);
MR_END_MODULE


MR_BEGIN_MODULE(thread_module4)
	MR_init_entry1(fn__f_116_104_114_101_97_100_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

MR_def_static(fn__f_116_104_114_101_97_100_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
MR_END_MODULE
#line 258 "thread.m"

#if defined(MR_HIGHLEVEL_CODE) && defined(MR_THREAD_SAFE)
  int ML_create_thread(MR_Word goal)
  {
    ML_ThreadWrapperArgs    *args;
    pthread_t               thread;
    pthread_attr_t          attrs;

    /*
    ** We can't allocate `args' on the stack because this function may return
    ** before the child thread has got all the information it needs out of the
    ** structure.
    */
    args = MR_GC_NEW_UNCOLLECTABLE(ML_ThreadWrapperArgs);
    args->goal = goal;
    args->thread_local_mutables =
        MR_clone_thread_local_mutables(MR_THREAD_LOCAL_MUTABLES);

    MR_LOCK(&MR_thread_barrier_lock, "thread.spawn");
    MR_thread_barrier_count++;
    MR_UNLOCK(&MR_thread_barrier_lock, "thread.spawn");

    pthread_attr_init(&attrs);
    pthread_attr_setdetachstate(&attrs, PTHREAD_CREATE_DETACHED);
    if (pthread_create(&thread, MR_THREAD_ATTR, ML_thread_wrapper, args)) {
        MR_fatal_error("Unable to create thread.");
    }
    pthread_attr_destroy(&attrs);

    return MR_TRUE;
  }

  void *ML_thread_wrapper(void *arg)
  {
    ML_ThreadWrapperArgs    *args = arg;
    MR_Word                 goal;

    if (MR_init_thread(MR_use_now) == MR_FALSE) {
        MR_fatal_error("Unable to init thread.");
    }

    MR_assert(MR_THREAD_LOCAL_MUTABLES == NULL);
    MR_SET_THREAD_LOCAL_MUTABLES(args->thread_local_mutables);

    goal = args->goal;
    MR_GC_free(args);

    ML_call_back_to_mercury_cc_multi(goal);

    MR_LOCK(&MR_thread_barrier_lock, "ML_thread_wrapper");
    MR_thread_barrier_count--;
    if (MR_thread_barrier_count == 0) {
        MR_SIGNAL(&MR_thread_barrier_cond);
    }
    MR_UNLOCK(&MR_thread_barrier_lock, "ML_thread_wrapper");

    return NULL;
  }
#endif /* MR_HIGHLEVEL_CODE && MR_THREAD_SAFE */

#line 357 "thread.c"
#line 162 "thread.m"

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
        MR_r1 = *MR_sp;
        MR_noprof_call(MR_ENTRY(mercury__do_call_closure_1),
            MR_LABEL(mercury__thread__spawn_end_thread));
    }
    MR_define_label(mercury__thread__spawn_end_thread);
    {
        MR_LOCK(&MR_thread_barrier_lock, "thread__spawn_end_thread");
        MR_thread_barrier_count--;
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
        MR_UNLOCK(&MR_thread_barrier_lock, "thread__spawn_end_thread");

        MR_destroy_context(MR_ENGINE(MR_eng_this_context));
        MR_ENGINE(MR_eng_this_context) = NULL;
        MR_runnext();
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
    void mercury_sys_init_thread_modules_write_out_proc_statics(FILE *fp);
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
    void mercury_sys_init_thread_modules_write_out_proc_statics(FILE *fp)
    {
        /* no proc_statics to write out */
    }
    #endif

#line 433 "thread.c"

MR_declare_entry(mercury__thread__call_back_to_mercury_3_0);

void
ML_call_back_to_mercury_cc_multi(MR_Word Mercury__argument1);

void
ML_call_back_to_mercury_cc_multi(MR_Word Mercury__argument1)
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

	MR_save_regs_to_mem(c_regs);
#if MR_THREAD_SAFE
	must_finalize_engine = MR_init_thread(MR_use_now);
#endif
#if MR_DEEP_PROFILING
	saved_cur_callback = MR_current_callback_site;
	saved_cur_csd = MR_current_call_site_dynamic;
	MR_setup_callback(MR_ENTRY(mercury__thread__call_back_to_mercury_3_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__thread__call_back_to_mercury_3_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


static void mercury__thread_maybe_bunch_0(void)
{
	thread_module0();
	thread_module1();
	thread_module2();
	thread_module3();
	thread_module4();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__thread__init(void);
void mercury__thread__init_type_tables(void);
void mercury__thread__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__thread__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__thread__init_complexity_procs(void);
#endif

void mercury__thread__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__thread_maybe_bunch_0();
	mercury__thread__init_debugger();
}

void mercury__thread__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__thread__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__thread__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__thread__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
