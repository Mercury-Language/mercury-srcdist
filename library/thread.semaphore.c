/*
** Automatically generated from `thread.semaphore.m'
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
INIT mercury__thread__semaphore__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 24 "thread.semaphore.c"
#include "thread.semaphore.mh"

#line 27 "thread.semaphore.c"
#line 3 "thread.int0"
#include "thread.mh"

#line 31 "thread.semaphore.c"
#line 530 "io.int"
#include "io.mh"

#line 35 "thread.semaphore.c"
#line 538 "io.int"
#include "string.mh"

#line 39 "thread.semaphore.c"
#line 29 "bitmap.int2"
#include "bitmap.mh"

#line 43 "thread.semaphore.c"
#line 28 "time.int2"
#include "time.mh"

#line 47 "thread.semaphore.c"
#line 3 "list.opt"
#include "list.mh"

#line 51 "thread.semaphore.c"
#line 31 "list.opt"
#include "array.mh"

#line 55 "thread.semaphore.c"
#line 4 "int.opt"
#include "int.mh"

#line 59 "thread.semaphore.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 63 "thread.semaphore.c"
#line 23 "store.opt"
#include "store.mh"

#line 67 "thread.semaphore.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 71 "thread.semaphore.c"
#line 103 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 75 "thread.semaphore.c"
#line 4 "char.opt"
#include "char.mh"

#line 79 "thread.semaphore.c"
#line 3 "float.opt"
#include "float.mh"

#line 83 "thread.semaphore.c"
#line 3 "math.opt"
#include "math.mh"

#line 87 "thread.semaphore.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 91 "thread.semaphore.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 95 "thread.semaphore.c"
#line 148 "io.opt"
#include "dir.mh"

#line 99 "thread.semaphore.c"
#line 156 "io.opt"
#include "table_builtin.mh"

#line 103 "thread.semaphore.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 107 "thread.semaphore.c"
#line 108 "thread.semaphore.c"
#ifndef THREAD__SEMAPHORE_DECL_GUARD
#define THREAD__SEMAPHORE_DECL_GUARD

#line 112 "thread.semaphore.c"
#line 62 "thread.semaphore.m"

    #include <stdio.h>
    #include "mercury_context.h"
    #include "mercury_thread.h"

    typedef struct ML_SEMAPHORE_STRUCT {
        int     count;
#ifndef MR_HIGHLEVEL_CODE
        MR_Context  *suspended_head;
        MR_Context  *suspended_tail;
#else
  #ifdef MR_THREAD_SAFE
        MercuryCond cond;
  #endif 
#endif
#ifdef MR_THREAD_SAFE
        MercuryLock lock;
#endif
    } ML_Semaphore;

#line 134 "thread.semaphore.c"
#line 94 "thread.semaphore.m"

#ifdef MR_CONSERVATIVE_GC
  void ML_finalize_semaphore(void *obj, void *cd);
#endif

#line 141 "thread.semaphore.c"
#line 361 "thread.semaphore.m"

/*
INIT mercury_sys_init_semaphore_modules
*/

#ifndef MR_HIGHLEVEL_CODE
    MR_define_extern_entry(mercury__thread__semaphore__nop);
#endif

#line 152 "thread.semaphore.c"
#line 153 "thread.semaphore.c"

#endif
#line 156 "thread.semaphore.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

extern const MR_TypeCtorInfo_Struct
	mercury_data_thread__semaphore__type_ctor_info_semaphore_0;
MR_decl_label1(thread__semaphore__try_wait_4_0, 2)
MR_def_extern_entry(thread__semaphore__new_3_0)
MR_def_extern_entry(thread__semaphore__wait_3_0)
MR_def_extern_entry(thread__semaphore__try_wait_2_4_0)
MR_def_extern_entry(thread__semaphore__try_wait_4_0)
MR_def_extern_entry(thread__semaphore__signal_3_0)
MR_def_extern_entry(__Unify___thread__semaphore__semaphore_0_0)
MR_def_extern_entry(__Compare___thread__semaphore__semaphore_0_0)
MR_decl_static(fn__f_116_104_114_101_97_100_95_95_115_101_109_97_112_104_111_114_101_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)

const MR_TypeCtorInfo_Struct mercury_data_thread__semaphore__type_ctor_info_semaphore_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_FOREIGN,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___thread__semaphore__semaphore_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___thread__semaphore__semaphore_0_0)),
	"thread.semaphore",
	"semaphore",
	{ 0 },
	{ 0 },
	-1,
	0,
	NULL
};


MR_BEGIN_MODULE(thread__semaphore_module0)
	MR_init_entry1(thread__semaphore__new_3_0);
MR_BEGIN_CODE

MR_define_entry(mercury__thread__semaphore__new_3_0);
	{
	ML_Semaphore *	Semaphore;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__thread__semaphore__new_3_0
{
#line 105 "thread.semaphore.m"

    MR_Word sem_mem;
    ML_Semaphore    *sem;

    MR_incr_hp(sem_mem,
        MR_round_up(sizeof(ML_Semaphore), sizeof(MR_Word)));
    sem = (ML_Semaphore *) sem_mem;
    sem->count = 0;
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
#ifdef MR_CONSERVATIVE_GC
    GC_REGISTER_FINALIZER(sem, ML_finalize_semaphore, NULL, NULL, NULL);
#endif

    Semaphore = sem;
    IO = IO0;
;}
#line 236 "thread.semaphore.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(ML_Semaphore *, Semaphore, MR_r1);
#undef	MR_PROC_LABEL
	}
	MR_proceed();
MR_END_MODULE


MR_BEGIN_MODULE(thread__semaphore_module1)
	MR_init_entry1(thread__semaphore__wait_3_0);
MR_BEGIN_CODE

MR_define_entry(mercury__thread__semaphore__wait_3_0);
	{
	ML_Semaphore *	Semaphore;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__thread__semaphore__wait_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(ML_Semaphore *, MR_r1, Semaphore);
{
#line 248 "thread.semaphore.m"

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
        ctxt->MR_ctxt_resume = MR_ENTRY(mercury__thread__semaphore__nop);
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
        MR_runnext();
    }
#else
    while (sem->count <= 0) {
        /*
        ** Although it goes against the spec, pthread_cond_wait() can
        ** return prematurely with the error code EINTR in glibc 2.3.2
        ** if the thread is sent a signal.
        */
        while (MR_WAIT(&(sem->cond), &(sem->lock)) != 0) {
        }
    }

    sem->count--;

    MR_UNLOCK(&(sem->lock), "semaphore__wait");
#endif
    IO = IO0;
;}
#line 308 "thread.semaphore.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
MR_END_MODULE


MR_BEGIN_MODULE(thread__semaphore_module2)
	MR_init_entry1(thread__semaphore__try_wait_2_4_0);
MR_BEGIN_CODE

MR_define_entry(mercury__thread__semaphore__try_wait_2_4_0);
	{
	ML_Semaphore *	Semaphore;
	MR_Integer	Res;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__thread__semaphore__try_wait_2_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(ML_Semaphore *, MR_r1, Semaphore);
{
#line 324 "thread.semaphore.m"

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
    IO = IO0;
;}
#line 345 "thread.semaphore.c"
	MR_r1 = Res;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
MR_END_MODULE


MR_BEGIN_MODULE(thread__semaphore_module3)
	MR_init_entry1(thread__semaphore__try_wait_4_0);
	MR_init_label1(thread__semaphore__try_wait_4_0,2)
MR_BEGIN_CODE

MR_define_entry(mercury__thread__semaphore__try_wait_4_0);
	{
	ML_Semaphore *	Semaphore;
	MR_Integer	Res;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__thread__semaphore__try_wait_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(ML_Semaphore *, MR_r1, Semaphore);
{
#line 324 "thread.semaphore.m"

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
    IO = IO0;
;}
#line 384 "thread.semaphore.c"
	MR_r3 = Res;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(thread__semaphore__try_wait_4_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(thread__semaphore__try_wait_4_0,2)
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_END_MODULE


MR_BEGIN_MODULE(thread__semaphore_module4)
	MR_init_entry1(thread__semaphore__signal_3_0);
MR_BEGIN_CODE

MR_define_entry(mercury__thread__semaphore__signal_3_0);
	{
	ML_Semaphore *	Semaphore;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__thread__semaphore__signal_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(ML_Semaphore *, MR_r1, Semaphore);
{
#line 176 "thread.semaphore.m"

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
        MR_ENGINE(MR_eng_this_context)->MR_ctxt_resume =
            MR_ENTRY(mercury__thread__semaphore__nop);
        MR_schedule_context(MR_ENGINE(MR_eng_this_context));

        MR_ENGINE(MR_eng_this_context) = NULL;
        MR_runnext();
    } else {
        sem->count++;
        MR_UNLOCK(&(sem->lock), "semaphore__signal");

        /* yield() */
        MR_save_context(MR_ENGINE(MR_eng_this_context));
        MR_ENGINE(MR_eng_this_context)->MR_ctxt_resume =
            MR_ENTRY(mercury__thread__semaphore__nop);
        MR_schedule_context(MR_ENGINE(MR_eng_this_context));

        MR_ENGINE(MR_eng_this_context) = NULL;
        MR_runnext();
    }
#else
    sem->count++;
    MR_SIGNAL(&(sem->cond));
    MR_UNLOCK(&(sem->lock), "semaphore__signal");
#endif
    IO = IO0;
;}
#line 462 "thread.semaphore.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
MR_END_MODULE

MR_decl_entry(__Unify___builtin__c_pointer_0_0);

MR_BEGIN_MODULE(thread__semaphore_module5)
	MR_init_entry1(__Unify___thread__semaphore__semaphore_0_0);
MR_BEGIN_CODE

MR_define_entry(mercury____Unify___thread__semaphore__semaphore_0_0);
	MR_np_tailcall_ent(__Unify___builtin__c_pointer_0_0);
MR_END_MODULE

MR_decl_entry(__Compare___builtin__c_pointer_0_0);

MR_BEGIN_MODULE(thread__semaphore_module6)
	MR_init_entry1(__Compare___thread__semaphore__semaphore_0_0);
MR_BEGIN_CODE

MR_define_entry(mercury____Compare___thread__semaphore__semaphore_0_0);
	MR_np_tailcall_ent(__Compare___builtin__c_pointer_0_0);
MR_END_MODULE


MR_BEGIN_MODULE(thread__semaphore_module7)
	MR_init_entry1(fn__f_116_104_114_101_97_100_95_95_115_101_109_97_112_104_111_114_101_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

MR_def_static(fn__f_116_104_114_101_97_100_95_95_115_101_109_97_112_104_111_114_101_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
MR_END_MODULE
#line 372 "thread.semaphore.m"

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
    void mercury_sys_init_semaphore_modules_write_out_proc_statics(FILE *fp);
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
    void mercury_sys_init_semaphore_modules_write_out_proc_statics(FILE *fp)
    {
        /* no proc_statics to write out */
    }
    #endif

#line 539 "thread.semaphore.c"
#line 145 "thread.semaphore.m"

#ifdef MR_CONSERVATIVE_GC
  void
  ML_finalize_semaphore(void *obj, void *cd)
  {
    ML_Semaphore    *sem;

    sem = (ML_Semaphore *) obj;

  #ifdef MR_THREAD_SAFE
    #ifdef MR_HIGHLEVEL_CODE
    pthread_cond_destroy(&(sem->cond));
    #endif
    pthread_mutex_destroy(&(sem->lock));
  #endif

    return;
  }
#endif

#line 561 "thread.semaphore.c"

static void mercury__thread__semaphore_maybe_bunch_0(void)
{
	thread__semaphore_module0();
	thread__semaphore_module1();
	thread__semaphore_module2();
	thread__semaphore_module3();
	thread__semaphore_module4();
	thread__semaphore_module5();
	thread__semaphore_module6();
	thread__semaphore_module7();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__thread__semaphore__init(void);
void mercury__thread__semaphore__init_type_tables(void);
void mercury__thread__semaphore__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__thread__semaphore__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__thread__semaphore__init_complexity_procs(void);
#endif

void mercury__thread__semaphore__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__thread__semaphore_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_thread__semaphore__type_ctor_info_semaphore_0,
		thread__semaphore__semaphore_0_0);
	mercury__thread__semaphore__init_debugger();
}

void mercury__thread__semaphore__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_thread__semaphore__type_ctor_info_semaphore_0);
	}
}


void mercury__thread__semaphore__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__thread__semaphore__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__thread__semaphore__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
