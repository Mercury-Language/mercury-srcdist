/*
** Automatically generated from `thread.mvar.m'
** by the Mercury compiler,
** version rotd-2011-08-03, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__thread__mvar__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 3 "thread.int0"
#include "thread.mh"

#line 28 "thread.mvar.c"
#line 526 "io.int"
#include "io.mh"

#line 32 "thread.mvar.c"
#line 536 "io.int"
#include "string.mh"

#line 36 "thread.mvar.c"
#line 28 "thread.semaphore.int"
#include "thread.semaphore.mh"

#line 40 "thread.mvar.c"
#line 31 "bitmap.int2"
#include "bitmap.mh"

#line 44 "thread.mvar.c"
#line 30 "time.int2"
#include "time.mh"

#line 48 "thread.mvar.c"
#line 4 "int.opt"
#include "int.mh"

#line 52 "thread.mvar.c"
#line 8 "int.opt"
#include "array.mh"

#line 56 "thread.mvar.c"
#line 53 "int.opt"
#include "stm_builtin.mh"

#line 60 "thread.mvar.c"
#line 55 "int.opt"
#include "store.mh"

#line 64 "thread.mvar.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 68 "thread.mvar.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 72 "thread.mvar.c"
#line 4 "char.opt"
#include "char.mh"

#line 76 "thread.mvar.c"
#line 3 "float.opt"
#include "float.mh"

#line 80 "thread.mvar.c"
#line 14 "version_array.opt"
#include "version_array.mh"

#line 84 "thread.mvar.c"
#line 130 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 88 "thread.mvar.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 92 "thread.mvar.c"
#line 3 "math.opt"
#include "math.mh"

#line 96 "thread.mvar.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 100 "thread.mvar.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 104 "thread.mvar.c"
#line 156 "io.opt"
#include "dir.mh"

#line 108 "thread.mvar.c"
#line 170 "io.opt"
#include "table_builtin.mh"

#line 112 "thread.mvar.c"
#line 6 "benchmarking.opt"
#include "benchmarking.mh"

#line 116 "thread.mvar.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 120 "thread.mvar.c"
#line 121 "thread.mvar.c"
#include "thread.mvar.mh"

#line 124 "thread.mvar.c"
#line 125 "thread.mvar.c"
#ifndef THREAD__MVAR_DECL_GUARD
#define THREAD__MVAR_DECL_GUARD

#line 129 "thread.mvar.c"
#line 130 "thread.mvar.c"

#endif
#line 133 "thread.mvar.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

extern const MR_TypeCtorInfo_Struct
	mercury_data_thread__mvar__type_ctor_info_mvar_1;
MR_decl_label2(thread__mvar__init_3_0, 2,4)
MR_decl_label2(thread__mvar__put_4_0, 2,3)
MR_decl_label3(thread__mvar__take_4_0, 2,3,4)
MR_decl_label4(thread__mvar__try_take_4_0, 2,4,5,6)
MR_decl_label4(__Unify___thread__mvar__mvar_1_0, 4,6,10,1)
MR_decl_label5(__Compare___thread__mvar__mvar_1_0, 3,2,5,9,29)
MR_def_extern_entry(thread__mvar__init_3_0)
MR_def_extern_entry(thread__mvar__take_4_0)
MR_def_extern_entry(thread__mvar__try_take_4_0)
MR_def_extern_entry(thread__mvar__put_4_0)
MR_def_extern_entry(__Unify___thread__mvar__mvar_1_0)
MR_def_extern_entry(__Compare___thread__mvar__mvar_1_0)
MR_decl_static(fn__f_116_104_114_101_97_100_95_95_109_118_97_114_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
extern const MR_TypeCtorInfo_Struct mercury_data_thread__semaphore__type_ctor_info_semaphore_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mutvar__type_ctor_info_mutvar_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_mutvar__pti_mutvar_1__pseudo_1 = {
	&mercury_data_mutvar__type_ctor_info_mutvar_1,
{	(MR_PseudoTypeInfo) 1
}};
extern const MR_TypeCtorInfo_Struct mercury_data_thread__semaphore__type_ctor_info_semaphore_0;

const MR_PseudoTypeInfo mercury_data_thread__mvar__field_types_mvar_1_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_thread__semaphore__type_ctor_info_semaphore_0,
	(MR_PseudoTypeInfo) &mercury_data_thread__semaphore__type_ctor_info_semaphore_0,
	(MR_PseudoTypeInfo) &mercury_data_mutvar__pti_mutvar_1__pseudo_1
};

static const MR_DuFunctorDesc mercury_data_thread__mvar__du_functor_desc_mvar_1_0 = {
	"mvar",
	3,
	4,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_thread__mvar__field_types_mvar_1_0,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_thread__mvar__du_stag_ordered_mvar_1_0[] = {
	&mercury_data_thread__mvar__du_functor_desc_mvar_1_0

};

const MR_DuPtagLayout mercury_data_thread__mvar__du_ptag_ordered_mvar_1[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_thread__mvar__du_stag_ordered_mvar_1_0 }

};

const MR_DuFunctorDescPtr mercury_data_thread__mvar__du_name_ordered_mvar_1[] = {
	&mercury_data_thread__mvar__du_functor_desc_mvar_1_0
};

const MR_Integer mercury_data_thread__mvar__functor_number_map_mvar_1[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_thread__mvar__type_ctor_info_mvar_1 = {
	1,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___thread__mvar__mvar_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___thread__mvar__mvar_1_0)),
	"thread.mvar",
	"mvar",
	{ (void *)mercury_data_thread__mvar__du_name_ordered_mvar_1 },
	{ (void *)mercury_data_thread__mvar__du_ptag_ordered_mvar_1 },
	1,
	4,
	mercury_data_thread__mvar__functor_number_map_mvar_1
};



MR_decl_entry(mutvar__new_mutvar0_1_0);
MR_decl_entry(thread__semaphore__signal_3_0);

MR_BEGIN_MODULE(thread__mvar_module0)
	MR_init_entry1(thread__mvar__init_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__thread__mvar__init_3_0);
	MR_init_label2(thread__mvar__init_3_0,2,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__thread__mvar__init_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Integer	Count;
	ML_Semaphore *	Semaphore;
#define	MR_PROC_LABEL	mercury__thread__mvar__init_3_0
	Count = (MR_Integer) 0;
{
#line 59 "thread.semaphore.opt"

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
#line 275 "thread.mvar.c"
	MR_tempr1 = (MR_Word) Semaphore;
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Count;
	ML_Semaphore *	Semaphore;
#define	MR_PROC_LABEL	mercury__thread__mvar__init_3_0
	Count = (MR_Integer) 0;
{
#line 59 "thread.semaphore.opt"

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
#line 312 "thread.mvar.c"
	MR_tempr2 = (MR_Word) Semaphore;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_tempr2;
	}
	MR_np_call_localret_ent(mutvar__new_mutvar0_1_0,
		thread__mvar__init_3_0_i2);
MR_def_label(thread__mvar__init_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tempr2 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(thread__semaphore__signal_3_0,
		thread__mvar__init_3_0_i4);
MR_def_label(thread__mvar__init_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(thread__semaphore__wait_3_0);
MR_decl_entry(mutvar__get_mutvar_2_0);

MR_BEGIN_MODULE(thread__mvar_module1)
	MR_init_entry1(thread__mvar__take_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__thread__mvar__take_4_0);
	MR_init_label3(thread__mvar__take_4_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'take'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__thread__mvar__take_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	MR_sv(1) = MR_tfield(0, MR_r2, 2);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(thread__semaphore__wait_3_0,
		thread__mvar__take_4_0_i2);
MR_def_label(thread__mvar__take_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		thread__mvar__take_4_0_i3);
MR_def_label(thread__mvar__take_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(thread__semaphore__signal_3_0,
		thread__mvar__take_4_0_i4);
MR_def_label(thread__mvar__take_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(thread__semaphore__try_wait_4_0);

MR_BEGIN_MODULE(thread__mvar_module2)
	MR_init_entry1(thread__mvar__try_take_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__thread__mvar__try_take_4_0);
	MR_init_label4(thread__mvar__try_take_4_0,2,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'try_take'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__thread__mvar__try_take_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	MR_sv(1) = MR_tfield(0, MR_r2, 2);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(thread__semaphore__try_wait_4_0,
		thread__mvar__try_take_4_0_i2);
MR_def_label(thread__mvar__try_take_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(thread__mvar__try_take_4_0_i4);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(4);
MR_def_label(thread__mvar__try_take_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		thread__mvar__try_take_4_0_i5);
MR_def_label(thread__mvar__try_take_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(thread__semaphore__signal_3_0,
		thread__mvar__try_take_4_0_i6);
MR_def_label(thread__mvar__try_take_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(mutvar__set_mutvar_2_0);

MR_BEGIN_MODULE(thread__mvar_module3)
	MR_init_entry1(thread__mvar__put_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__thread__mvar__put_4_0);
	MR_init_label2(thread__mvar__put_4_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'put'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__thread__mvar__put_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r2, 0);
	MR_sv(2) = MR_tfield(0, MR_r2, 2);
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tfield(0, MR_r2, 1);
	MR_np_call_localret_ent(thread__semaphore__wait_3_0,
		thread__mvar__put_4_0_i2);
MR_def_label(thread__mvar__put_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(mutvar__set_mutvar_2_0,
		thread__mvar__put_4_0_i3);
MR_def_label(thread__mvar__put_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(thread__semaphore__signal_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___thread__semaphore__semaphore_0_0);
MR_decl_entry(__Unify___mutvar__mutvar_1_0);

MR_BEGIN_MODULE(thread__mvar_module4)
	MR_init_entry1(__Unify___thread__mvar__mvar_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___thread__mvar__mvar_1_0);
	MR_init_label4(__Unify___thread__mvar__mvar_1_0,4,6,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___thread__mvar__mvar_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___thread__mvar__mvar_1_0_i10);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(5) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 2);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___thread__semaphore__semaphore_0_0,
		__Unify___thread__mvar__mvar_1_0_i4);
MR_def_label(__Unify___thread__mvar__mvar_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___thread__mvar__mvar_1_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___thread__semaphore__semaphore_0_0,
		__Unify___thread__mvar__mvar_1_0_i6);
MR_def_label(__Unify___thread__mvar__mvar_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___thread__mvar__mvar_1_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(__Unify___mutvar__mutvar_1_0);
MR_def_label(__Unify___thread__mvar__mvar_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___thread__mvar__mvar_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___thread__semaphore__semaphore_0_0);
MR_decl_entry(__Compare___mutvar__mutvar_1_0);

MR_BEGIN_MODULE(thread__mvar_module5)
	MR_init_entry1(__Compare___thread__mvar__mvar_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___thread__mvar__mvar_1_0);
	MR_init_label5(__Compare___thread__mvar__mvar_1_0,3,2,5,9,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___thread__mvar__mvar_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___thread__mvar__mvar_1_0_i3);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(5) = MR_r1;
	MR_GOTO_LAB(__Compare___thread__mvar__mvar_1_0_i2);
MR_def_label(__Compare___thread__mvar__mvar_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___thread__mvar__mvar_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(4) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr1 = MR_tfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___thread__semaphore__semaphore_0_0,
		__Compare___thread__mvar__mvar_1_0_i5);
MR_def_label(__Compare___thread__mvar__mvar_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___thread__mvar__mvar_1_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___thread__semaphore__semaphore_0_0,
		__Compare___thread__mvar__mvar_1_0_i9);
MR_def_label(__Compare___thread__mvar__mvar_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___thread__mvar__mvar_1_0_i29);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(__Compare___mutvar__mutvar_1_0);
MR_def_label(__Compare___thread__mvar__mvar_1_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(thread__mvar_module6)
	MR_init_entry1(fn__f_116_104_114_101_97_100_95_95_109_118_97_114_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_116_104_114_101_97_100_95_95_109_118_97_114_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_116_104_114_101_97_100_95_95_109_118_97_114_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__thread__mvar_maybe_bunch_0(void)
{
	thread__mvar_module0();
	thread__mvar_module1();
	thread__mvar_module2();
	thread__mvar_module3();
	thread__mvar_module4();
	thread__mvar_module5();
	thread__mvar_module6();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__thread__mvar__init(void);
void mercury__thread__mvar__init_type_tables(void);
void mercury__thread__mvar__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__thread__mvar__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__thread__mvar__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__thread__mvar__init_threadscope_string_table(void);
#endif

void mercury__thread__mvar__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__thread__mvar_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_thread__mvar__type_ctor_info_mvar_1,
		thread__mvar__mvar_1_0);
	mercury__thread__mvar__init_debugger();
}

void mercury__thread__mvar__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_thread__mvar__type_ctor_info_mvar_1);
	}
}


void mercury__thread__mvar__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__thread__mvar__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__thread__mvar);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__thread__mvar__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__thread__mvar__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
