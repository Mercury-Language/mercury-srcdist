/*
** Automatically generated from `pqueue.m'
** by the Mercury compiler,
** version rotd-2008-08-03, configured for i686-pc-linux-gnu.
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
INIT mercury__pqueue__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 136 "io.int2"
#include "io.mh"

#line 27 "pqueue.c"
#line 144 "io.int2"
#include "string.mh"

#line 31 "pqueue.c"
#line 29 "bitmap.int2"
#include "bitmap.mh"

#line 35 "pqueue.c"
#line 28 "time.int2"
#include "time.mh"

#line 39 "pqueue.c"
#line 31 "array.int2"
#include "array.mh"

#line 43 "pqueue.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 47 "pqueue.c"
#line 32 "exception.opt"
#include "stm_builtin.mh"

#line 51 "pqueue.c"
#line 150 "io.opt"
#include "dir.mh"

#line 55 "pqueue.c"
#line 160 "io.opt"
#include "table_builtin.mh"

#line 59 "pqueue.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 63 "pqueue.c"
#line 3 "float.opt"
#include "float.mh"

#line 67 "pqueue.c"
#line 3 "math.opt"
#include "math.mh"

#line 71 "pqueue.c"
#line 4 "char.opt"
#include "char.mh"

#line 75 "pqueue.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 79 "pqueue.c"
#line 109 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 83 "pqueue.c"
#line 20 "store.opt"
#include "store.mh"

#line 87 "pqueue.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 91 "pqueue.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 95 "pqueue.c"
#line 4 "int.opt"
#include "int.mh"

#line 99 "pqueue.c"
#line 3 "list.opt"
#include "list.mh"

#line 103 "pqueue.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 107 "pqueue.c"
#line 108 "pqueue.c"
#include "pqueue.mh"

#line 111 "pqueue.c"
#line 112 "pqueue.c"
#ifndef PQUEUE_DECL_GUARD
#define PQUEUE_DECL_GUARD

#line 116 "pqueue.c"
#line 117 "pqueue.c"

#endif
#line 120 "pqueue.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

extern const MR_TypeCtorInfo_Struct
	mercury_data_pqueue__type_ctor_info_pqueue_2;
MR_decl_label2(pqueue__assoc_list_to_pqueue_2_0, 13,4)
MR_decl_label5(pqueue__insert_4_0, 24,5,8,6,10)
MR_decl_label6(pqueue__insert_2_6_0, 5,3,40,12,11,13)
MR_decl_label2(pqueue__remove_4_0, 3,1)
MR_decl_label8(pqueue__remove_2_3_0, 5,3,53,8,11,13,9,15)
MR_decl_label1(pqueue__remove_2_3_0, 17)
MR_decl_label3(pqueue__to_assoc_list_2_0, 4,5,2)
MR_decl_label7(__Unify___pqueue__pqueue_2_0, 46,18,5,7,9,11,1)
MR_decl_label8(__Compare___pqueue__pqueue_2_0, 84,48,7,5,9,12,13,15)
MR_decl_label4(__Compare___pqueue__pqueue_2_0, 19,23,27,89)
MR_def_extern_entry(pqueue__init_1_0)
MR_def_extern_entry(fn__pqueue__init_0_0)
MR_def_extern_entry(pqueue__insert_4_0)
MR_decl_static(pqueue__insert_2_6_0)
MR_def_extern_entry(fn__pqueue__insert_3_0)
MR_def_extern_entry(pqueue__remove_2_3_0)
MR_def_extern_entry(pqueue__remove_4_0)
MR_def_extern_entry(pqueue__to_assoc_list_2_0)
MR_def_extern_entry(fn__pqueue__to_assoc_list_1_0)
MR_def_extern_entry(pqueue__assoc_list_to_pqueue_2_0)
MR_def_extern_entry(fn__pqueue__assoc_list_to_pqueue_1_0)
MR_def_extern_entry(fn__pqueue__from_assoc_list_1_0)
MR_def_extern_entry(__Unify___pqueue__pqueue_2_0)
MR_def_extern_entry(__Compare___pqueue__pqueue_2_0)
MR_decl_static(fn__f_112_113_117_101_117_101_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)

static const MR_DuFunctorDesc mercury_data_pqueue__du_functor_desc_pqueue_2_0 = {
	"empty",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	0,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct2 mercury_data_pqueue__pti_pqueue_2__pseudo_1__pseudo_2 = {
	&mercury_data_pqueue__type_ctor_info_pqueue_2,
{	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 2
}};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_PseudoTypeInfo mercury_data_pqueue__field_types_pqueue_2_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 2,
	(MR_PseudoTypeInfo) &mercury_data_pqueue__pti_pqueue_2__pseudo_1__pseudo_2,
	(MR_PseudoTypeInfo) &mercury_data_pqueue__pti_pqueue_2__pseudo_1__pseudo_2
};

static const MR_DuFunctorDesc mercury_data_pqueue__du_functor_desc_pqueue_2_1 = {
	"pqueue",
	5,
	30,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_pqueue__field_types_pqueue_2_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_pqueue__du_stag_ordered_pqueue_2_0[] = {
	&mercury_data_pqueue__du_functor_desc_pqueue_2_0

};

const MR_DuFunctorDescPtr mercury_data_pqueue__du_stag_ordered_pqueue_2_1[] = {
	&mercury_data_pqueue__du_functor_desc_pqueue_2_1

};

const MR_DuPtagLayout mercury_data_pqueue__du_ptag_ordered_pqueue_2[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_pqueue__du_stag_ordered_pqueue_2_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_pqueue__du_stag_ordered_pqueue_2_1 }

};

const MR_DuFunctorDescPtr mercury_data_pqueue__du_name_ordered_pqueue_2[] = {
	&mercury_data_pqueue__du_functor_desc_pqueue_2_0,
	&mercury_data_pqueue__du_functor_desc_pqueue_2_1
};

const MR_Integer mercury_data_pqueue__functor_number_map_pqueue_2[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_pqueue__type_ctor_info_pqueue_2 = {
	2,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___pqueue__pqueue_2_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___pqueue__pqueue_2_0)),
	"pqueue",
	"pqueue",
	{ (void *)mercury_data_pqueue__du_name_ordered_pqueue_2 },
	{ (void *)mercury_data_pqueue__du_ptag_ordered_pqueue_2 },
	2,
	4,
	mercury_data_pqueue__functor_number_map_pqueue_2
};


MR_BEGIN_MODULE(pqueue_module0)
	MR_init_entry1(pqueue__init_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__pqueue__init_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pqueue_module1)
	MR_init_entry1(fn__pqueue__init_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__pqueue__init_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__compare_3_0);

MR_BEGIN_MODULE(pqueue_module2)
	MR_init_entry1(pqueue__insert_4_0);
	MR_init_label5(pqueue__insert_4_0,24,5,8,6,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__pqueue__insert_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(pqueue__insert_4_0_i24);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 5);
	MR_r1 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr1, 1) = MR_r4;
	MR_tfield(1, MR_tempr1, 2) = MR_r5;
	MR_tfield(1, MR_tempr1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
MR_def_label(pqueue__insert_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r5;
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(4) = MR_ctfield(1, MR_tempr2, 2);
	MR_sv(5) = MR_ctfield(1, MR_tempr2, 3);
	MR_sv(6) = MR_ctfield(1, MR_tempr2, 4);
	MR_sv(7) = ((MR_Integer) MR_ctfield(1, MR_tempr2, 0) + (MR_Integer) 1);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		pqueue__insert_4_0_i5);
MR_def_label(pqueue__insert_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(pqueue__insert_4_0_i6);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_np_call_localret_ent(pqueue__insert_2_6_0,
		pqueue__insert_4_0_i8);
MR_def_label(pqueue__insert_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 5);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 3) = MR_r1;
	MR_tfield(1, MR_tempr1, 4) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(pqueue__insert_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_np_call_localret_ent(pqueue__insert_2_6_0,
		pqueue__insert_4_0_i10);
MR_def_label(pqueue__insert_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 5);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 3) = MR_r1;
	MR_tfield(1, MR_tempr1, 4) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pqueue_module3)
	MR_init_entry1(pqueue__insert_2_6_0);
	MR_init_label6(pqueue__insert_2_6_0,5,3,40,12,11,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(pqueue__insert_2_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(pqueue__insert_2_6_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(pqueue__insert_2_6_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 5);
	MR_r1 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_tfield(1, MR_tempr1, 2) = MR_r4;
	MR_tfield(1, MR_tempr1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
MR_def_label(pqueue__insert_2_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 5);
	MR_r1 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_tfield(1, MR_tempr1, 2) = MR_r4;
	MR_tfield(1, MR_tempr1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r6;
	MR_proceed();
	}
MR_def_label(pqueue__insert_2_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(pqueue__insert_2_6_0_i40);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 5);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_tfield(1, MR_tempr1, 2) = MR_r4;
	MR_tfield(1, MR_tempr1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r5;
	MR_proceed();
	}
MR_def_label(pqueue__insert_2_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r5;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	MR_tempr4 = MR_r6;
	MR_tempr2 = MR_ctfield(1, MR_tempr4, 0);
	if (((MR_Integer) MR_tempr1 <= (MR_Integer) MR_tempr2)) {
		MR_GOTO_LAB(pqueue__insert_2_6_0_i11);
	}
	MR_sv(1) = MR_tempr3;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_tempr4;
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(pqueue__insert_4_0,
		pqueue__insert_2_6_0_i12);
MR_def_label(pqueue__insert_2_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(pqueue__insert_2_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r6;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r5;
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(pqueue__insert_4_0,
		pqueue__insert_2_6_0_i13);
MR_def_label(pqueue__insert_2_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pqueue_module4)
	MR_init_entry1(fn__pqueue__insert_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__pqueue__insert_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(pqueue__insert_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pqueue_module5)
	MR_init_entry1(pqueue__remove_2_3_0);
	MR_init_label8(pqueue__remove_2_3_0,5,3,53,8,11,13,9,15)
	MR_init_label1(pqueue__remove_2_3_0,17)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__pqueue__remove_2_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(pqueue__remove_2_3_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(pqueue__remove_2_3_0_i5);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(pqueue__remove_2_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_proceed();
MR_def_label(pqueue__remove_2_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(pqueue__remove_2_3_0_i53);
	}
	MR_r1 = MR_r3;
	MR_proceed();
MR_def_label(pqueue__remove_2_3_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(4) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(5) = MR_ctfield(1, MR_tempr2, 2);
	MR_sv(6) = MR_ctfield(1, MR_tempr2, 3);
	MR_sv(7) = MR_ctfield(1, MR_tempr2, 4);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_ctfield(1, MR_tempr1, 4);
	MR_sv(11) = MR_ctfield(1, MR_tempr1, 3);
	MR_sv(12) = MR_ctfield(1, MR_tempr1, 2);
	MR_sv(13) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(14) = MR_ctfield(1, MR_tempr1, 0);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		pqueue__remove_2_3_0_i8);
MR_def_label(pqueue__remove_2_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(pqueue__remove_2_3_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = ((MR_Integer) MR_sv(14) - (MR_Integer) 1);
	if (((MR_Integer) MR_tempr1 <= (MR_Integer) MR_sv(3))) {
		MR_GOTO_LAB(pqueue__remove_2_3_0_i11);
	}
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r4 = MR_sv(10);
	MR_r3 = MR_sv(11);
	}
	MR_np_localcall_lab(pqueue__remove_2_3_0,
		pqueue__remove_2_3_0_i13);
MR_def_label(pqueue__remove_2_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_sv(3);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r4 = MR_sv(10);
	MR_r3 = MR_sv(11);
	MR_np_localcall_lab(pqueue__remove_2_3_0,
		pqueue__remove_2_3_0_i13);
MR_def_label(pqueue__remove_2_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 5);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(13);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(12);
	MR_tfield(1, MR_tempr1, 3) = MR_r1;
	MR_tfield(1, MR_tempr1, 4) = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(15);
	}
MR_def_label(pqueue__remove_2_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = ((MR_Integer) MR_sv(14) - (MR_Integer) 1);
	if (((MR_Integer) MR_tempr1 <= (MR_Integer) MR_sv(3))) {
		MR_GOTO_LAB(pqueue__remove_2_3_0_i15);
	}
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	}
	MR_np_localcall_lab(pqueue__remove_2_3_0,
		pqueue__remove_2_3_0_i17);
MR_def_label(pqueue__remove_2_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_sv(2) = MR_sv(3);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_np_localcall_lab(pqueue__remove_2_3_0,
		pqueue__remove_2_3_0_i17);
MR_def_label(pqueue__remove_2_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 5);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 3) = MR_r1;
	MR_tfield(1, MR_tempr1, 4) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(15);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pqueue_module6)
	MR_init_entry1(pqueue__remove_4_0);
	MR_init_label2(pqueue__remove_4_0,3,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__pqueue__remove_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(pqueue__remove_4_0_i1);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 2);
	MR_tempr1 = MR_tempr2;
	MR_r3 = MR_ctfield(1, MR_r3, 3);
	MR_r4 = MR_ctfield(1, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(pqueue__remove_2_3_0,
		pqueue__remove_4_0_i3);
MR_def_label(pqueue__remove_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_r1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
MR_def_label(pqueue__remove_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pqueue_module7)
	MR_init_entry1(pqueue__to_assoc_list_2_0);
	MR_init_label3(pqueue__to_assoc_list_2_0,4,5,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__pqueue__to_assoc_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(pqueue__to_assoc_list_2_0_i2);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 2);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_tempr1 = MR_tempr2;
	MR_r3 = MR_ctfield(1, MR_r3, 3);
	MR_r4 = MR_ctfield(1, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(pqueue__remove_2_3_0,
		pqueue__to_assoc_list_2_0_i4);
MR_def_label(pqueue__to_assoc_list_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_localcall_lab(pqueue__to_assoc_list_2_0,
		pqueue__to_assoc_list_2_0_i5);
MR_def_label(pqueue__to_assoc_list_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_decr_sp_and_return(5);
	}
MR_def_label(pqueue__to_assoc_list_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pqueue_module8)
	MR_init_entry1(fn__pqueue__to_assoc_list_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__pqueue__to_assoc_list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(pqueue__to_assoc_list_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pqueue_module9)
	MR_init_entry1(pqueue__assoc_list_to_pqueue_2_0);
	MR_init_label2(pqueue__assoc_list_to_pqueue_2_0,13,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__pqueue__assoc_list_to_pqueue_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(pqueue__assoc_list_to_pqueue_2_0_i13);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(pqueue__assoc_list_to_pqueue_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r3, 0);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r3 = MR_ctfield(1, MR_r3, 1);
	}
	MR_np_localcall_lab(pqueue__assoc_list_to_pqueue_2_0,
		pqueue__assoc_list_to_pqueue_2_0_i4);
MR_def_label(pqueue__assoc_list_to_pqueue_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(pqueue__insert_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pqueue_module10)
	MR_init_entry1(fn__pqueue__assoc_list_to_pqueue_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__pqueue__assoc_list_to_pqueue_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(pqueue__assoc_list_to_pqueue_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pqueue_module11)
	MR_init_entry1(fn__pqueue__from_assoc_list_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__pqueue__from_assoc_list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(pqueue__assoc_list_to_pqueue_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__unify_2_0);

MR_BEGIN_MODULE(pqueue_module12)
	MR_init_entry1(__Unify___pqueue__pqueue_2_0);
	MR_init_label7(__Unify___pqueue__pqueue_2_0,46,18,5,7,9,11,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___pqueue__pqueue_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(__Unify___pqueue__pqueue_2_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 == MR_r4)) {
		MR_GOTO_LAB(__Unify___pqueue__pqueue_2_0_i18);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___pqueue__pqueue_2_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp_and_return(9);
	}
MR_def_label(__Unify___pqueue__pqueue_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
MR_def_label(__Unify___pqueue__pqueue_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___pqueue__pqueue_2_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_ctfield(1, MR_tempr4, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___pqueue__pqueue_2_0_i1);
	}
	MR_tempr1 = MR_tempr3;
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 2);
	MR_tempr2 = MR_tempr4;
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 3);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 4);
	MR_sv(4) = MR_ctfield(1, MR_tempr2, 2);
	MR_sv(5) = MR_ctfield(1, MR_tempr2, 3);
	MR_sv(6) = MR_ctfield(1, MR_tempr2, 4);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_ctfield(1, MR_tempr1, 1);
	MR_r3 = MR_ctfield(1, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___pqueue__pqueue_2_0_i7);
MR_def_label(__Unify___pqueue__pqueue_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___pqueue__pqueue_2_0_i1);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___pqueue__pqueue_2_0_i9);
MR_def_label(__Unify___pqueue__pqueue_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___pqueue__pqueue_2_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_np_localcall_lab(__Unify___pqueue__pqueue_2_0,
		__Unify___pqueue__pqueue_2_0_i11);
MR_def_label(__Unify___pqueue__pqueue_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___pqueue__pqueue_2_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(__Unify___pqueue__pqueue_2_0_i46);
MR_def_label(__Unify___pqueue__pqueue_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pqueue_module13)
	MR_init_entry1(__Compare___pqueue__pqueue_2_0);
	MR_init_label8(__Compare___pqueue__pqueue_2_0,84,48,7,5,9,12,13,15)
	MR_init_label4(__Compare___pqueue__pqueue_2_0,19,23,27,89)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___pqueue__pqueue_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(__Compare___pqueue__pqueue_2_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 == MR_r4)) {
		MR_GOTO_LAB(__Compare___pqueue__pqueue_2_0_i48);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___pqueue__pqueue_2_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___pqueue__pqueue_2_0_i7);
	}
MR_def_label(__Compare___pqueue__pqueue_2_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___pqueue__pqueue_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___pqueue__pqueue_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___pqueue__pqueue_2_0_i9);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___pqueue__pqueue_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(10) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(9) = MR_ctfield(1, MR_tempr1, 2);
	MR_sv(8) = MR_ctfield(1, MR_tempr1, 3);
	MR_sv(7) = MR_ctfield(1, MR_tempr1, 4);
	MR_tempr2 = MR_sv(2);
	MR_sv(4) = MR_ctfield(1, MR_tempr2, 4);
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 3);
	MR_r2 = MR_ctfield(1, MR_tempr2, 2);
	MR_r3 = MR_ctfield(1, MR_tempr2, 1);
	MR_r4 = MR_ctfield(1, MR_tempr1, 0);
	MR_r5 = MR_ctfield(1, MR_tempr2, 0);
	if (((MR_Integer) MR_r4 >= (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(__Compare___pqueue__pqueue_2_0_i12);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___pqueue__pqueue_2_0_i15);
	}
MR_def_label(__Compare___pqueue__pqueue_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r4 != MR_r5)) {
		MR_GOTO_LAB(__Compare___pqueue__pqueue_2_0_i13);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___pqueue__pqueue_2_0_i15);
MR_def_label(__Compare___pqueue__pqueue_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___pqueue__pqueue_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___pqueue__pqueue_2_0_i89);
	}
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___pqueue__pqueue_2_0_i19);
MR_def_label(__Compare___pqueue__pqueue_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___pqueue__pqueue_2_0_i89);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___pqueue__pqueue_2_0_i23);
MR_def_label(__Compare___pqueue__pqueue_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___pqueue__pqueue_2_0_i89);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(3);
	MR_np_localcall_lab(__Compare___pqueue__pqueue_2_0,
		__Compare___pqueue__pqueue_2_0_i27);
MR_def_label(__Compare___pqueue__pqueue_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___pqueue__pqueue_2_0_i89);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(__Compare___pqueue__pqueue_2_0_i84);
MR_def_label(__Compare___pqueue__pqueue_2_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pqueue_module14)
	MR_init_entry1(fn__f_112_113_117_101_117_101_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_112_113_117_101_117_101_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__pqueue_maybe_bunch_0(void)
{
	pqueue_module0();
	pqueue_module1();
	pqueue_module2();
	pqueue_module3();
	pqueue_module4();
	pqueue_module5();
	pqueue_module6();
	pqueue_module7();
	pqueue_module8();
	pqueue_module9();
	pqueue_module10();
	pqueue_module11();
	pqueue_module12();
	pqueue_module13();
	pqueue_module14();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__pqueue__init(void);
void mercury__pqueue__init_type_tables(void);
void mercury__pqueue__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__pqueue__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__pqueue__init_complexity_procs(void);
#endif

void mercury__pqueue__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__pqueue_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_pqueue__type_ctor_info_pqueue_2,
		pqueue__pqueue_2_0);
	mercury__pqueue__init_debugger();
}

void mercury__pqueue__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_pqueue__type_ctor_info_pqueue_2);
	}
}


void mercury__pqueue__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__pqueue__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__pqueue);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__pqueue__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
