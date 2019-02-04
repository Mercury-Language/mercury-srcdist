/*
** Automatically generated from `thread.m'
** by the Mercury compiler,
** version rotd-2011-09-23, configured for x86_64-unknown-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** HIGHLEVEL_CODE=no
**
** END_OF_C_GRADE_INFO
*/

/*
INIT mercury__thread__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 526 "io.int"
#include "io.mh"

#line 28 "thread.c"
#line 536 "io.int"
#include "string.mh"

#line 32 "thread.c"
#line 31 "bitmap.int2"
#include "bitmap.mh"

#line 36 "thread.c"
#line 30 "time.int2"
#include "time.mh"

#line 40 "thread.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 44 "thread.c"
#line 45 "builtin.opt"
#include "array.mh"

#line 48 "thread.c"
#line 55 "array.opt"
#include "stm_builtin.mh"

#line 52 "thread.c"
#line 57 "array.opt"
#include "store.mh"

#line 56 "thread.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 60 "thread.c"
#line 14 "version_array.opt"
#include "version_array.mh"

#line 64 "thread.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 68 "thread.c"
#line 3 "float.opt"
#include "float.mh"

#line 72 "thread.c"
#line 3 "math.opt"
#include "math.mh"

#line 76 "thread.c"
#line 4 "char.opt"
#include "char.mh"

#line 80 "thread.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 84 "thread.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 88 "thread.c"
#line 4 "int.opt"
#include "int.mh"

#line 92 "thread.c"
#line 130 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 96 "thread.c"
#line 156 "io.opt"
#include "dir.mh"

#line 100 "thread.c"
#line 170 "io.opt"
#include "table_builtin.mh"

#line 104 "thread.c"
#line 6 "benchmarking.opt"
#include "benchmarking.mh"

#line 108 "thread.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 112 "thread.c"
#line 113 "thread.c"
#include "thread.mh"

#line 116 "thread.c"
#line 117 "thread.c"
#ifndef THREAD_DECL_GUARD
#define THREAD_DECL_GUARD

#line 121 "thread.c"
#line 59 "thread.m"

#ifndef MR_HIGHLEVEL_CODE
  #if (!defined(MR_EXEC_TRACE) && !defined(MR_DEEP_PROFILING)) || !defined(MR_USE_GCC_NONLOCAL_GOTOS)
    /*
    ** In calling thread.yield, semaphore.wait or semaphore.signal, the
    ** calling context may need to suspend and yield to another context.
    ** This is implemented by setting the resume address of the context to an
    ** auxiliary function outside of the foreign_proc.  This breaks when
    ** execution tracing or deep profiling are enabled as code inserted at the
    ** end of the foreign_proc won't be executed.  In those cases we rely on
    ** the gcc extension that allows us to take the address of labels within
    ** the foreign_proc, so the context will resume back inside the
    ** foreign_proc.
    **
    ** XXX implement those procedures as :- external procedures so that the
    ** transforms won't be applied
    */
    #define ML_THREAD_AVOID_LABEL_ADDRS
  #endif
#endif

#line 144 "thread.c"
#line 227 "thread.m"

/*
INIT mercury_sys_init_thread_modules
*/

#ifndef MR_HIGHLEVEL_CODE
    MR_define_extern_entry(mercury__thread__spawn_begin_thread);
    MR_declare_label(mercury__thread__spawn_end_thread);
    MR_define_extern_entry(mercury__thread__yield_resume);
#endif

#line 157 "thread.c"
#line 323 "thread.m"

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

#line 173 "thread.c"
#line 174 "thread.c"

#endif
#line 177 "thread.c"

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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__thread__can_spawn_0_0);
	MR_init_label1(thread__can_spawn_0_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'can_spawn'/0 mode 0 */
MR_define_entry(mercury__thread__can_spawn_0_0);
	{
#define	MR_PROC_LABEL	mercury__thread__can_spawn_0_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_OBTAIN_GLOBAL_LOCK("can_spawn");
{
#line 86 "thread.m"

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
#line 222 "thread.c"
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__thread__spawn_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'spawn'/3 mode 0 */
MR_define_entry(mercury__thread__spawn_3_0);
	{
	MR_Word	Goal;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__thread__spawn_3_0
	Goal = MR_r1;
{
#line 118 "thread.m"

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
#line 285 "thread.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
MR_END_MODULE


MR_BEGIN_MODULE(thread_module2)
	MR_init_entry1(thread__yield_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__thread__yield_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'yield'/2 mode 0 */
MR_define_entry(mercury__thread__yield_2_0);
	{
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__thread__yield_2_0
{
#line 181 "thread.m"

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
    IO = IO0;
;}
#line 326 "thread.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_1);

MR_BEGIN_MODULE(thread_module3)
	MR_init_entry1(thread__call_back_to_mercury_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__thread__call_back_to_mercury_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'call_back_to_mercury'/3 mode 0 */
MR_define_entry(mercury__thread__call_back_to_mercury_3_0);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(thread__call_back_to_mercury_3_0));
	MR_np_tailcall_ent(do_call_closure_1);
MR_END_MODULE


MR_BEGIN_MODULE(thread_module4)
	MR_init_entry1(fn__f_116_104_114_101_97_100_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_116_104_114_101_97_100_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1__[1]_0'/2 mode 0 */
MR_def_static(fn__f_116_104_114_101_97_100_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
MR_END_MODULE
#line 338 "thread.m"

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
    if (pthread_create(&thread, &attrs, ML_thread_wrapper, args)) {
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
        MR_SIGNAL(&MR_thread_barrier_cond, "ML_thread_wrapper");
    }
    MR_UNLOCK(&MR_thread_barrier_lock, "ML_thread_wrapper");

    return NULL;
  }
#endif /* MR_HIGHLEVEL_CODE && MR_THREAD_SAFE */

#line 419 "thread.c"
#line 240 "thread.m"

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

#line 497 "thread.c"

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
void mercury__thread__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__thread__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__thread__init_threadscope_string_table(void);
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

void mercury__thread__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__thread);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__thread__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__thread__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
