/*
** Automatically generated from `thread.semaphore.m'
** by the Mercury compiler,
** version rotd-2011-10-23, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__thread__semaphore__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 25 "thread.semaphore.c"
#include "thread.semaphore.mh"

#line 28 "thread.semaphore.c"
#line 3 "thread.int0"
#include "thread.mh"

#line 32 "thread.semaphore.c"
#line 526 "io.int"
#include "io.mh"

#line 36 "thread.semaphore.c"
#line 536 "io.int"
#include "time.mh"

#line 40 "thread.semaphore.c"
#line 537 "io.int"
#include "string.mh"

#line 44 "thread.semaphore.c"
#line 31 "bitmap.int2"
#include "bitmap.mh"

#line 48 "thread.semaphore.c"
#line 4 "int.opt"
#include "int.mh"

#line 52 "thread.semaphore.c"
#line 8 "int.opt"
#include "array.mh"

#line 56 "thread.semaphore.c"
#line 54 "int.opt"
#include "stm_builtin.mh"

#line 60 "thread.semaphore.c"
#line 56 "int.opt"
#include "store.mh"

#line 64 "thread.semaphore.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 68 "thread.semaphore.c"
#line 4 "char.opt"
#include "char.mh"

#line 72 "thread.semaphore.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 76 "thread.semaphore.c"
#line 3 "float.opt"
#include "float.mh"

#line 80 "thread.semaphore.c"
#line 14 "version_array.opt"
#include "version_array.mh"

#line 84 "thread.semaphore.c"
#line 130 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 88 "thread.semaphore.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 92 "thread.semaphore.c"
#line 3 "math.opt"
#include "math.mh"

#line 96 "thread.semaphore.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 100 "thread.semaphore.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 104 "thread.semaphore.c"
#line 157 "io.opt"
#include "dir.mh"

#line 108 "thread.semaphore.c"
#line 171 "io.opt"
#include "table_builtin.mh"

#line 112 "thread.semaphore.c"
#line 6 "benchmarking.opt"
#include "benchmarking.mh"

#line 116 "thread.semaphore.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 120 "thread.semaphore.c"
#line 121 "thread.semaphore.c"
#ifndef THREAD__SEMAPHORE_DECL_GUARD
#define THREAD__SEMAPHORE_DECL_GUARD

#line 125 "thread.semaphore.c"
#line 76 "thread.semaphore.m"

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

#line 147 "thread.semaphore.c"
#line 111 "thread.semaphore.m"

extern void
ML_finalize_semaphore(void *obj, void *cd);

#line 153 "thread.semaphore.c"
#line 433 "thread.semaphore.m"

/*
INIT mercury_sys_init_semaphore_modules
*/

#ifndef MR_HIGHLEVEL_CODE
    MR_define_extern_entry(mercury__thread__semaphore__nop);
#endif

#line 164 "thread.semaphore.c"
#line 165 "thread.semaphore.c"

#endif
#line 168 "thread.semaphore.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

extern const MR_TypeCtorInfo_Struct
	mercury_data_thread__semaphore__type_ctor_info_semaphore_0;
MR_decl_label1(thread__semaphore__try_wait_4_0, 2)
MR_def_extern_entry(fn__thread__semaphore__init_1_0)
MR_def_extern_entry(thread__semaphore__init_3_0)
MR_def_extern_entry(thread__semaphore__new_3_0)
MR_def_extern_entry(fn__thread__semaphore__new_1_0)
MR_def_extern_entry(thread__semaphore__wait_3_0)
MR_def_extern_entry(thread__semaphore__try_wait_2_4_0)
MR_def_extern_entry(thread__semaphore__try_wait_4_0)
MR_def_extern_entry(thread__semaphore__signal_3_0)
MR_def_extern_entry(__Unify___thread__semaphore__semaphore_0_0)
MR_def_extern_entry(__Compare___thread__semaphore__semaphore_0_0)
MR_decl_static(fn__f_116_104_114_101_97_100_95_95_115_101_109_97_112_104_111_114_101_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)

const MR_TypeCtorInfo_Struct mercury_data_thread__semaphore__type_ctor_info_semaphore_0 = {
	0,
	15,
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
	MR_init_entry1(fn__thread__semaphore__init_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__thread__semaphore__init_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init'/2 mode 0 */
MR_define_entry(mercury__fn__thread__semaphore__init_1_0);
	{
	MR_Integer	Count;
	ML_Semaphore *	Semaphore;
#define	MR_PROC_LABEL	mercury__fn__thread__semaphore__init_1_0
	Count = MR_r1;
{
#line 129 "thread.semaphore.m"

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
#line 251 "thread.semaphore.c"
	MR_r1 = (MR_Word) Semaphore;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
MR_END_MODULE


MR_BEGIN_MODULE(thread__semaphore_module1)
	MR_init_entry1(thread__semaphore__init_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__thread__semaphore__init_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init'/3 mode 0 */
MR_define_entry(mercury__thread__semaphore__init_3_0);
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Count;
	ML_Semaphore *	Semaphore;
#define	MR_PROC_LABEL	mercury__thread__semaphore__init_3_0
	Count = (MR_Integer) 0;
{
#line 129 "thread.semaphore.m"

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
#line 302 "thread.semaphore.c"
	MR_tempr1 = (MR_Word) Semaphore;
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_END_MODULE


MR_BEGIN_MODULE(thread__semaphore_module2)
	MR_init_entry1(thread__semaphore__new_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__thread__semaphore__new_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'new'/3 mode 0 */
MR_define_entry(mercury__thread__semaphore__new_3_0);
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Count;
	ML_Semaphore *	Semaphore;
#define	MR_PROC_LABEL	mercury__thread__semaphore__new_3_0
	Count = (MR_Integer) 0;
{
#line 129 "thread.semaphore.m"

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
#line 355 "thread.semaphore.c"
	MR_tempr1 = (MR_Word) Semaphore;
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_END_MODULE


MR_BEGIN_MODULE(thread__semaphore_module3)
	MR_init_entry1(fn__thread__semaphore__new_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__thread__semaphore__new_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'new'/2 mode 0 */
MR_define_entry(mercury__fn__thread__semaphore__new_1_0);
	{
	MR_Integer	Count;
	ML_Semaphore *	Semaphore;
#define	MR_PROC_LABEL	mercury__fn__thread__semaphore__new_1_0
	Count = MR_r1;
{
#line 129 "thread.semaphore.m"

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
#line 406 "thread.semaphore.c"
	MR_r1 = (MR_Word) Semaphore;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
MR_END_MODULE


MR_BEGIN_MODULE(thread__semaphore_module4)
	MR_init_entry1(thread__semaphore__wait_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__thread__semaphore__wait_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'wait'/3 mode 0 */
MR_define_entry(mercury__thread__semaphore__wait_3_0);
	{
	ML_Semaphore *	Semaphore;
#define	MR_PROC_LABEL	mercury__thread__semaphore__wait_3_0
	Semaphore = (ML_Semaphore *) MR_r1;
{
#line 295 "thread.semaphore.m"

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
;}
#line 487 "thread.semaphore.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
MR_END_MODULE


MR_BEGIN_MODULE(thread__semaphore_module5)
	MR_init_entry1(thread__semaphore__try_wait_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__thread__semaphore__try_wait_2_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'try_wait_2'/4 mode 0 */
MR_define_entry(mercury__thread__semaphore__try_wait_2_4_0);
	{
	ML_Semaphore *	Semaphore;
	MR_Integer	Res;
#define	MR_PROC_LABEL	mercury__thread__semaphore__try_wait_2_4_0
	Semaphore = (ML_Semaphore *) MR_r1;
{
#line 390 "thread.semaphore.m"

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
#line 524 "thread.semaphore.c"
	MR_r1 = Res;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
MR_END_MODULE


MR_BEGIN_MODULE(thread__semaphore_module6)
	MR_init_entry1(thread__semaphore__try_wait_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__thread__semaphore__try_wait_4_0);
	MR_init_label1(thread__semaphore__try_wait_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'try_wait'/4 mode 0 */
MR_define_entry(mercury__thread__semaphore__try_wait_4_0);
	{
	ML_Semaphore *	Semaphore;
	MR_Integer	Res;
#define	MR_PROC_LABEL	mercury__thread__semaphore__try_wait_4_0
	Semaphore = (ML_Semaphore *) MR_r1;
{
#line 390 "thread.semaphore.m"

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
#line 563 "thread.semaphore.c"
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


MR_BEGIN_MODULE(thread__semaphore_module7)
	MR_init_entry1(thread__semaphore__signal_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__thread__semaphore__signal_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'signal'/3 mode 0 */
MR_define_entry(mercury__thread__semaphore__signal_3_0);
	{
	ML_Semaphore *	Semaphore;
#define	MR_PROC_LABEL	mercury__thread__semaphore__signal_3_0
	Semaphore = (ML_Semaphore *) MR_r1;
{
#line 199 "thread.semaphore.m"

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
;}
#line 659 "thread.semaphore.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
MR_END_MODULE

MR_decl_entry(__Unify___builtin__c_pointer_0_0);

MR_BEGIN_MODULE(thread__semaphore_module8)
	MR_init_entry1(__Unify___thread__semaphore__semaphore_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___thread__semaphore__semaphore_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
MR_define_entry(mercury____Unify___thread__semaphore__semaphore_0_0);
	MR_np_tailcall_ent(__Unify___builtin__c_pointer_0_0);
MR_END_MODULE

MR_decl_entry(__Compare___builtin__c_pointer_0_0);

MR_BEGIN_MODULE(thread__semaphore_module9)
	MR_init_entry1(__Compare___thread__semaphore__semaphore_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___thread__semaphore__semaphore_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
MR_define_entry(mercury____Compare___thread__semaphore__semaphore_0_0);
	MR_np_tailcall_ent(__Compare___builtin__c_pointer_0_0);
MR_END_MODULE


MR_BEGIN_MODULE(thread__semaphore_module10)
	MR_init_entry1(fn__f_116_104_114_101_97_100_95_95_115_101_109_97_112_104_111_114_101_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_116_104_114_101_97_100_95_95_115_101_109_97_112_104_111_114_101_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1__[1]_0'/2 mode 0 */
MR_def_static(fn__f_116_104_114_101_97_100_95_95_115_101_109_97_112_104_111_114_101_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
MR_END_MODULE
#line 444 "thread.semaphore.m"

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

#line 747 "thread.semaphore.c"
#line 171 "thread.semaphore.m"


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

#line 766 "thread.semaphore.c"

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
	thread__semaphore_module8();
	thread__semaphore_module9();
	thread__semaphore_module10();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__thread__semaphore__init(void);
void mercury__thread__semaphore__init_type_tables(void);
void mercury__thread__semaphore__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__thread__semaphore__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__thread__semaphore__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__thread__semaphore__init_threadscope_string_table(void);
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

void mercury__thread__semaphore__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__thread__semaphore);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__thread__semaphore__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__thread__semaphore__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
