/*
** Automatically generated from `par_builtin.m'
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
INIT mercury__par_builtin__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 24 "par_builtin.c"
#include "par_builtin.mh"

#line 27 "par_builtin.c"
#line 134 "io.int2"
#include "io.mh"

#line 31 "par_builtin.c"
#line 142 "io.int2"
#include "string.mh"

#line 35 "par_builtin.c"
#line 29 "bitmap.int2"
#include "bitmap.mh"

#line 39 "par_builtin.c"
#line 28 "time.int2"
#include "time.mh"

#line 43 "par_builtin.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 47 "par_builtin.c"
#line 37 "builtin.opt"
#include "array.mh"

#line 51 "par_builtin.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 55 "par_builtin.c"
#line 148 "io.opt"
#include "dir.mh"

#line 59 "par_builtin.c"
#line 156 "io.opt"
#include "table_builtin.mh"

#line 63 "par_builtin.c"
#line 4 "char.opt"
#include "char.mh"

#line 67 "par_builtin.c"
#line 3 "float.opt"
#include "float.mh"

#line 71 "par_builtin.c"
#line 3 "math.opt"
#include "math.mh"

#line 75 "par_builtin.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 79 "par_builtin.c"
#line 23 "store.opt"
#include "store.mh"

#line 83 "par_builtin.c"
#line 3 "list.opt"
#include "list.mh"

#line 87 "par_builtin.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 91 "par_builtin.c"
#line 4 "int.opt"
#include "int.mh"

#line 95 "par_builtin.c"
#line 103 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 99 "par_builtin.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 103 "par_builtin.c"
#line 104 "par_builtin.c"
#ifndef PAR_BUILTIN_DECL_GUARD
#define PAR_BUILTIN_DECL_GUARD

#line 108 "par_builtin.c"
#line 66 "par_builtin.m"

    #include "mercury_context.h"
    #include "mercury_thread.h"

    typedef struct MR_Future MR_Future;

#ifdef MR_THREAD_SAFE
    struct MR_Future {
        MercuryLock lock;
            /* lock preventing concurrent accesses */
        int signalled;
            /* whether this future has been signalled yet */
        MR_Context *suspended;
            /* linked list of all the contexts blocked on this future */
        MR_Word value;
    };
#else /* !MR_THREAD_SAFE */
    struct MR_Future {
        char dummy; /* ANSI C doesn't allow empty structs */
    };
#endif /* !MR_THREAD_SAFE */

#line 132 "par_builtin.c"
#line 132 "par_builtin.m"

#ifdef MR_CONSERVATIVE_GC
    void MR_finalize_future(void *obj, void *cd);
#endif

#line 139 "par_builtin.c"
#line 201 "par_builtin.m"

/*
INIT mercury_sys_init_par_builtin_modules
*/

#if (!defined MR_HIGHLEVEL_CODE) && (defined MR_THREAD_SAFE)
    MR_define_extern_entry(mercury__par_builtin__wait_resume);
#endif

#line 150 "par_builtin.c"
#line 151 "par_builtin.c"

#endif
#line 154 "par_builtin.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

extern const MR_TypeCtorInfo_Struct
	mercury_data_par_builtin__type_ctor_info_future_1;
MR_decl_label1(par_builtin__evaluate_parallelism_condition_0_0, 1)
MR_def_extern_entry(par_builtin__new_future_1_0)
MR_def_extern_entry(par_builtin__wait_2_0)
MR_def_extern_entry(par_builtin__get_2_0)
MR_def_extern_entry(par_builtin__signal_2_0)
MR_def_extern_entry(par_builtin__evaluate_parallelism_condition_0_0)
MR_def_extern_entry(__Unify___par_builtin__future_1_0)
MR_def_extern_entry(__Compare___par_builtin__future_1_0)
MR_decl_static(fn__f_112_97_114_95_98_117_105_108_116_105_110_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)

const MR_TypeCtorInfo_Struct mercury_data_par_builtin__type_ctor_info_future_1 = {
	1,
	13,
	-1,
	MR_TYPECTOR_REP_FOREIGN,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___par_builtin__future_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___par_builtin__future_1_0)),
	"par_builtin",
	"future",
	{ 0 },
	{ 0 },
	-1,
	0,
	NULL
};


MR_BEGIN_MODULE(par_builtin_module0)
	MR_init_entry1(par_builtin__new_future_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__par_builtin__new_future_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Future *	Future;
#define	MR_PROC_LABEL	mercury__par_builtin__new_future_1_0
{
#line 101 "par_builtin.m"

#if (!defined MR_HIGHLEVEL_CODE) && (defined MR_THREAD_SAFE)

    MR_Word fut_addr;

    MR_incr_hp(fut_addr, MR_round_up(sizeof(MR_Future), sizeof(MR_Word)));
    Future = (MR_Future *) fut_addr;

    pthread_mutex_init(&(Future->lock), MR_MUTEX_ATTR);

    /*
    ** The mutex needs to be destroyed when the future is garbage collected.
    ** For efficiency we might want to ignore this altogether, e.g. on Linux
    ** pthread_mutex_destroy() only checks that the mutex is unlocked.
    */
  #ifdef MR_CONSERVATIVE_GC
    GC_REGISTER_FINALIZER(Future, MR_finalize_future, NULL, NULL, NULL);
  #endif

    Future->signalled = MR_FALSE;
    Future->suspended = NULL;
    Future->value = 0;

#else

    MR_fatal_error("internal error: par_builtin should only be used by "
        "lowlevel parallel grades");

#endif
;}
#line 236 "par_builtin.c"
	MR_r1 = (MR_Word) Future;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(par_builtin_module1)
	MR_init_entry1(par_builtin__wait_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__par_builtin__wait_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Future *	Future;
	MR_Word	Value;
#define	MR_PROC_LABEL	mercury__par_builtin__wait_2_0
	Future = (MR_Future *) MR_r1;
{
#line 155 "par_builtin.m"

#if (!defined MR_HIGHLEVEL_CODE) && (defined MR_THREAD_SAFE)

    MR_LOCK(&(Future->lock), "future.wait");

    if (Future->signalled) {
        Value = Future->value;
        MR_UNLOCK(&(Future->lock), "future.wait");
    } else {
        MR_Context *ctxt;

        /*
        ** The address of the future can be lost when we resume so save it on
        ** top of the stack.
        */
        MR_incr_sp(1);
        MR_sv(1) = (MR_Word) Future;

        /*
        ** Save this context and put it on the list of suspended contexts for
        ** this future.
        */
        ctxt = MR_ENGINE(MR_eng_this_context);
        MR_save_context(ctxt);

        ctxt->MR_ctxt_resume = MR_ENTRY(mercury__par_builtin__wait_resume);
        ctxt->MR_ctxt_next = Future->suspended;
        Future->suspended = ctxt;

        MR_UNLOCK(&(Future->lock), "future.wait");

        MR_ENGINE(MR_eng_this_context) = NULL;
        MR_runnext();
    }

#else

    MR_fatal_error("internal error: par_builtin.wait");
    Value = -1;

#endif
;}
#line 307 "par_builtin.c"
	MR_r1 = Value;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(par_builtin_module2)
	MR_init_entry1(par_builtin__get_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__par_builtin__get_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Future *	Future;
	MR_Word	Value;
#define	MR_PROC_LABEL	mercury__par_builtin__get_2_0
	Future = (MR_Future *) MR_r1;
{
#line 268 "par_builtin.m"

#if (!defined MR_HIGHLEVEL_CODE) && (defined MR_THREAD_SAFE)

    assert(Future->signalled);
    Value = Future->value;

#else

    MR_fatal_error("internal error: par_builtin.get");
    Value = -1;

#endif
;}
#line 349 "par_builtin.c"
	MR_r1 = Value;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(par_builtin_module3)
	MR_init_entry1(par_builtin__signal_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__par_builtin__signal_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Future *	Future;
	MR_Word	Value;
#define	MR_PROC_LABEL	mercury__par_builtin__signal_2_0
	Future = (MR_Future *) MR_r1;
	Value = MR_r2;
{
#line 285 "par_builtin.m"

#if (!defined MR_HIGHLEVEL_CODE) && (defined MR_THREAD_SAFE)

    MR_Context *ctxt;
    MR_Context *next;

    MR_LOCK(&(Future->lock), "future.signal");

    /*
    ** If the same future is passed twice to a procedure then it
    ** could be signalled twice, but the value must be the same.
    */
    if (Future->signalled) {
        assert(Future->value == Value);
    } else {
        Future->signalled = MR_TRUE;
        Future->value = Value;
    }

    /* Schedule all the contexts which are blocking on this future. */
    ctxt = Future->suspended;
    while (ctxt != NULL) {
        next = ctxt->MR_ctxt_next;
        MR_schedule_context(ctxt);  /* clobbers MR_ctxt_next */
        ctxt = next;
    }
    Future->suspended = NULL;

    MR_UNLOCK(&(Future->lock), "future.signal");

#else

    MR_fatal_error("internal error: par_builtin.signal");

#endif
;}
#line 415 "par_builtin.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(par_builtin_module4)
	MR_init_entry1(par_builtin__evaluate_parallelism_condition_0_0);
	MR_init_label1(par_builtin__evaluate_parallelism_condition_0_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__par_builtin__evaluate_parallelism_condition_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__par_builtin__evaluate_parallelism_condition_0_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 325 "par_builtin.m"

    /* All uses of this predicate should override the body. */
    MR_fatal_error("evaluate_parallelism_condition called");
;}
#line 448 "par_builtin.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(par_builtin__evaluate_parallelism_condition_0_0_i1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(par_builtin__evaluate_parallelism_condition_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___builtin__c_pointer_0_0);

MR_BEGIN_MODULE(par_builtin_module5)
	MR_init_entry1(__Unify___par_builtin__future_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___par_builtin__future_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(__Unify___builtin__c_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___builtin__c_pointer_0_0);

MR_BEGIN_MODULE(par_builtin_module6)
	MR_init_entry1(__Compare___par_builtin__future_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___par_builtin__future_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(__Compare___builtin__c_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(par_builtin_module7)
	MR_init_entry1(fn__f_112_97_114_95_98_117_105_108_116_105_110_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_112_97_114_95_98_117_105_108_116_105_110_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE
#line 212 "par_builtin.m"

#if (!defined MR_HIGHLEVEL_CODE) && (defined MR_THREAD_SAFE)

    MR_BEGIN_MODULE(hand_written_par_builtin_module)
        MR_init_entry_ai(mercury__par_builtin__wait_resume);
    MR_BEGIN_CODE

    MR_define_entry(mercury__par_builtin__wait_resume);
    {
        MR_Future *Future;

        /* Restore the address of the future after resuming. */
        Future = (MR_Future *) MR_sv(1);
        MR_decr_sp(1);

        assert(Future->signalled);

        /* Return to the caller of par_builtin.wait. */
        MR_r1 = Future->value;
        MR_proceed();
    }
    MR_END_MODULE

#endif

    /* forward decls to suppress gcc warnings */
    void mercury_sys_init_par_builtin_modules_init(void);
    void mercury_sys_init_par_builtin_modules_init_type_tables(void);
    #ifdef  MR_DEEP_PROFILING
    void mercury_sys_init_par_builtin_modules_write_out_proc_statics(FILE *fp);
    #endif

    void mercury_sys_init_par_builtin_modules_init(void)
    {
    #if (!defined MR_HIGHLEVEL_CODE) && (defined MR_THREAD_SAFE)
        hand_written_par_builtin_module();
    #endif
    }

    void mercury_sys_init_par_builtin_modules_init_type_tables(void)
    {
        /* no types to register */
    }

    #ifdef  MR_DEEP_PROFILING
    void mercury_sys_init_par_builtin_modules_write_out_proc_statics(FILE *fp)
    {
        /* no proc_statics to write out */
    }
    #endif

#line 578 "par_builtin.c"
#line 138 "par_builtin.m"

#ifdef MR_CONSERVATIVE_GC
    void
    MR_finalize_future(void *obj, void *cd)
    {
        MR_Future *fut = (MR_Future *) obj;

      #ifdef MR_THREAD_SAFE
        pthread_mutex_destroy(&(fut->lock));
      #endif
    }
#endif

#line 593 "par_builtin.c"

static void mercury__par_builtin_maybe_bunch_0(void)
{
	par_builtin_module0();
	par_builtin_module1();
	par_builtin_module2();
	par_builtin_module3();
	par_builtin_module4();
	par_builtin_module5();
	par_builtin_module6();
	par_builtin_module7();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__par_builtin__init(void);
void mercury__par_builtin__init_type_tables(void);
void mercury__par_builtin__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__par_builtin__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__par_builtin__init_complexity_procs(void);
#endif

void mercury__par_builtin__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__par_builtin_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_par_builtin__type_ctor_info_future_1,
		par_builtin__future_1_0);
	mercury__par_builtin__init_debugger();
}

void mercury__par_builtin__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_par_builtin__type_ctor_info_future_1);
	}
}


void mercury__par_builtin__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__par_builtin__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__par_builtin__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
