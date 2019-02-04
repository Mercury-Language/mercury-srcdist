/*
** Automatically generated from `dense_bitset.m'
** by the Mercury compiler,
** version rotd-2011-08-13, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__dense_bitset__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 202 "../library/array.int"
#include "array.mh"

#line 28 "dense_bitset.c"
#line 140 "../library/io.int2"
#include "io.mh"

#line 32 "dense_bitset.c"
#line 150 "../library/io.int2"
#include "string.mh"

#line 36 "dense_bitset.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 40 "dense_bitset.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 44 "dense_bitset.c"
#line 45 "dense_bitset.c"
#include "dense_bitset.mh"

#line 48 "dense_bitset.c"
#line 49 "dense_bitset.c"
#ifndef DENSE_BITSET_DECL_GUARD
#define DENSE_BITSET_DECL_GUARD

#line 53 "dense_bitset.c"
#line 54 "dense_bitset.c"

#endif
#line 57 "dense_bitset.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Integer f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_dense_bitset__type_ctor_info_dense_bitset_0;
MR_decl_label3(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_49_95_95_91_49_93_95_48_6_0, 11,3,2)
MR_decl_label3(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_49_95_95_91_49_93_95_49_6_1, 11,3,2)
MR_decl_label3(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_49_95_95_91_49_93_95_50_6_2, 11,3,2)
MR_decl_label6(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_48_6_0, 22,3,7,9,5,2)
MR_decl_label6(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_49_6_1, 22,3,7,9,5,2)
MR_decl_label6(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_50_6_2, 22,3,7,9,5,2)
MR_decl_label1(dense_bitset__foldl_4_0, 2)
MR_decl_label1(dense_bitset__foldl_4_1, 2)
MR_decl_label1(dense_bitset__foldl_4_2, 2)
MR_decl_label3(dense_bitset__foldl1__ho2_6_0, 11,3,2)
MR_decl_label6(dense_bitset__foldl2__ho3_6_0, 22,3,7,9,5,2)
MR_decl_label7(dense_bitset__member_2_0, 2,3,4,5,6,8,1)
MR_decl_label7(fn__dense_bitset__delete_2_0, 2,3,5,6,7,8,4)
MR_decl_label10(fn__dense_bitset__insert_2_0, 25,2,4,5,3,8,9,10,11,7)
MR_decl_label1(fn__dense_bitset__union_2_0, 2)
MR_def_extern_entry(fn__dense_bitset__init_0_0)
MR_def_extern_entry(dense_bitset__member_2_0)
MR_def_extern_entry(fn__dense_bitset__insert_2_0)
MR_def_extern_entry(fn__dense_bitset__delete_2_0)
MR_def_extern_entry(dense_bitset__foldl_4_0)
MR_def_extern_entry(dense_bitset__foldl_4_1)
MR_def_extern_entry(dense_bitset__foldl_4_2)
MR_def_extern_entry(fn__dense_bitset__union_2_0)
MR_def_extern_entry(__Unify___dense_bitset__dense_bitset_0_0)
MR_def_extern_entry(__Compare___dense_bitset__dense_bitset_0_0)
MR_decl_static(dense_bitset__foldl1__ho2_6_0)
MR_decl_static(dense_bitset__foldl2__ho3_6_0)
MR_decl_static(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_49_95_95_91_49_93_95_48_6_0)
MR_decl_static(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_49_95_95_91_49_93_95_49_6_1)
MR_decl_static(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_49_95_95_91_49_93_95_50_6_2)
MR_decl_static(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_48_6_0)
MR_decl_static(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_49_6_1)
MR_decl_static(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_50_6_2)

static const struct mercury_type_0 mercury_common_0[1] =
{
{
0,
MR_tbmkword(0, 0)
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_array__type_ctor_info_array_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_array__ti_array_1builtin__type_ctor_info_int_0 = {
	&mercury_data_array__type_ctor_info_array_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};

const MR_TypeCtorInfo_Struct mercury_data_dense_bitset__type_ctor_info_dense_bitset_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___dense_bitset__dense_bitset_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___dense_bitset__dense_bitset_0_0)),
	"dense_bitset",
	"dense_bitset",
	{ 0 },
	{ (void *)&mercury_data_array__ti_array_1builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};



extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(fn__array__array_1_0);

MR_BEGIN_MODULE(dense_bitset_module0)
	MR_init_entry1(fn__dense_bitset__init_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__dense_bitset__init_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__dense_bitset__init_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,0,0);
	MR_np_tailcall_ent(fn__array__array_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(array__max_2_0);
MR_decl_entry(fn__f_105_110_116_95_95_47_47_2_0);
MR_decl_entry(array__lookup_3_0);
MR_decl_entry(fn__f_105_110_116_95_95_60_60_2_0);

MR_BEGIN_MODULE(dense_bitset_module1)
	MR_init_entry1(dense_bitset__member_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__dense_bitset__member_2_0);
	MR_init_label7(dense_bitset__member_2_0,2,3,4,5,6,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'member'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__dense_bitset__member_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(4) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(array__max_2_0,
		dense_bitset__member_2_0_i2);
MR_def_label(dense_bitset__member_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 32;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_47_47_2_0,
		dense_bitset__member_2_0_i3);
MR_def_label(dense_bitset__member_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_r1,0)) {
		MR_GOTO_LAB(dense_bitset__member_2_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 32;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_47_47_2_0,
		dense_bitset__member_2_0_i4);
MR_def_label(dense_bitset__member_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r1 > (MR_Integer) MR_sv(2))) {
		MR_GOTO_LAB(dense_bitset__member_2_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 32;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_47_47_2_0,
		dense_bitset__member_2_0_i5);
MR_def_label(dense_bitset__member_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		dense_bitset__member_2_0_i6);
MR_def_label(dense_bitset__member_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = ((MR_Integer) MR_tempr1 & (MR_Integer) 31);
	}
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_60_60_2_0,
		dense_bitset__member_2_0_i8);
MR_def_label(dense_bitset__member_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = ((MR_Integer) MR_r1 & (MR_Integer) MR_sv(3));
	MR_r1 = ((MR_Integer) MR_r2 != (MR_Integer) 0);
	MR_decr_sp_and_return(5);
MR_def_label(dense_bitset__member_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(array__resize_4_0);
MR_decl_entry(array__set_4_0);
MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(dense_bitset_module2)
	MR_init_entry1(fn__dense_bitset__insert_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__dense_bitset__insert_2_0);
	MR_init_label10(fn__dense_bitset__insert_2_0,25,2,4,5,3,8,9,10,11,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'insert'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__dense_bitset__insert_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(fn__dense_bitset__insert_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(4) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(array__max_2_0,
		fn__dense_bitset__insert_2_0_i2);
MR_def_label(fn__dense_bitset__insert_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 32;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_47_47_2_0,
		fn__dense_bitset__insert_2_0_i4);
MR_def_label(fn__dense_bitset__insert_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r1 <= (MR_Integer) MR_sv(2))) {
		MR_GOTO_LAB(fn__dense_bitset__insert_2_0_i3);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = (((MR_Integer) MR_sv(2) + (MR_Integer) 1) * (MR_Integer) 2);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(array__resize_4_0,
		fn__dense_bitset__insert_2_0_i5);
MR_def_label(fn__dense_bitset__insert_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(fn__dense_bitset__insert_2_0_i25);
MR_def_label(fn__dense_bitset__insert_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_sv(3),0)) {
		MR_GOTO_LAB(fn__dense_bitset__insert_2_0_i7);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 32;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_47_47_2_0,
		fn__dense_bitset__insert_2_0_i8);
MR_def_label(fn__dense_bitset__insert_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__dense_bitset__insert_2_0_i9);
MR_def_label(fn__dense_bitset__insert_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = ((MR_Integer) MR_sv(3) & (MR_Integer) 31);
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_60_60_2_0,
		fn__dense_bitset__insert_2_0_i10);
MR_def_label(fn__dense_bitset__insert_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = ((MR_Integer) MR_sv(2) | (MR_Integer) MR_r1);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 32;
	}
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_47_47_2_0,
		fn__dense_bitset__insert_2_0_i11);
MR_def_label(fn__dense_bitset__insert_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(array__set_4_0);
	}
MR_def_label(fn__dense_bitset__insert_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("dense_bitset", 12);
	MR_r2 = (MR_Word) MR_string_const("function \140dense_bitset.insert\'/2", 32);
	MR_r3 = (MR_Word) MR_string_const("cannot use indexes < 0", 22);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dense_bitset_module3)
	MR_init_entry1(fn__dense_bitset__delete_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__dense_bitset__delete_2_0);
	MR_init_label7(fn__dense_bitset__delete_2_0,2,3,5,6,7,8,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delete'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__dense_bitset__delete_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(4) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(array__max_2_0,
		fn__dense_bitset__delete_2_0_i2);
MR_def_label(fn__dense_bitset__delete_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(3) <= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(fn__dense_bitset__delete_2_0_i3);
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(5);
MR_def_label(fn__dense_bitset__delete_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_sv(3),0)) {
		MR_GOTO_LAB(fn__dense_bitset__delete_2_0_i4);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 32;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_47_47_2_0,
		fn__dense_bitset__delete_2_0_i5);
MR_def_label(fn__dense_bitset__delete_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__dense_bitset__delete_2_0_i6);
MR_def_label(fn__dense_bitset__delete_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = ((MR_Integer) MR_sv(3) & (MR_Integer) 31);
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_60_60_2_0,
		fn__dense_bitset__delete_2_0_i7);
MR_def_label(fn__dense_bitset__delete_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = ((MR_Integer) MR_sv(2) & ~((MR_Integer) MR_r1));
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 32;
	}
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_47_47_2_0,
		fn__dense_bitset__delete_2_0_i8);
MR_def_label(fn__dense_bitset__delete_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(array__set_4_0);
	}
MR_def_label(fn__dense_bitset__delete_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("dense_bitset", 12);
	MR_r2 = (MR_Word) MR_string_const("function \140dense_bitset.delete\'/2", 32);
	MR_r3 = (MR_Word) MR_string_const("cannot use indexes < 0", 22);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dense_bitset_module4)
	MR_init_entry1(dense_bitset__foldl_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__dense_bitset__foldl_4_0);
	MR_init_label1(dense_bitset__foldl_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__dense_bitset__foldl_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r4;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__max_2_0,
		dense_bitset__foldl_4_0_i2);
MR_def_label(dense_bitset__foldl_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_49_95_95_91_49_93_95_48_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dense_bitset_module5)
	MR_init_entry1(dense_bitset__foldl_4_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__dense_bitset__foldl_4_1);
	MR_init_label1(dense_bitset__foldl_4_1,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl'/4 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__dense_bitset__foldl_4_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r4;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__max_2_0,
		dense_bitset__foldl_4_1_i2);
MR_def_label(dense_bitset__foldl_4_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_49_95_95_91_49_93_95_49_6_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dense_bitset_module6)
	MR_init_entry1(dense_bitset__foldl_4_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__dense_bitset__foldl_4_2);
	MR_init_label1(dense_bitset__foldl_4_2,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl'/4 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__dense_bitset__foldl_4_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r4;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__max_2_0,
		dense_bitset__foldl_4_2_i2);
MR_def_label(dense_bitset__foldl_4_2,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_49_95_95_91_49_93_95_50_6_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dense_bitset_module7)
	MR_init_entry1(fn__dense_bitset__union_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__dense_bitset__union_2_0);
	MR_init_label1(fn__dense_bitset__union_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'union'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__dense_bitset__union_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(array__max_2_0,
		fn__dense_bitset__union_2_0_i2);
MR_def_label(fn__dense_bitset__union_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(dense_bitset__foldl1__ho2_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___array__array_1_0);

MR_BEGIN_MODULE(dense_bitset_module8)
	MR_init_entry1(__Unify___dense_bitset__dense_bitset_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___dense_bitset__dense_bitset_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___dense_bitset__dense_bitset_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___array__array_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___array__array_1_0);

MR_BEGIN_MODULE(dense_bitset_module9)
	MR_init_entry1(__Compare___dense_bitset__dense_bitset_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___dense_bitset__dense_bitset_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___dense_bitset__dense_bitset_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___array__array_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dense_bitset_module10)
	MR_init_entry1(dense_bitset__foldl1__ho2_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__dense_bitset__foldl1__ho2_6_0);
	MR_init_label3(dense_bitset__foldl1__ho2_6_0,11,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl1__ho2'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dense_bitset__foldl1__ho2_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(dense_bitset__foldl1__ho2_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r1 > (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(dense_bitset__foldl1__ho2_6_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(dense_bitset__foldl2__ho3_6_0,
		dense_bitset__foldl1__ho2_6_0_i3);
MR_def_label(dense_bitset__foldl1__ho2_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(dense_bitset__foldl1__ho2_6_0_i11);
	}
MR_def_label(dense_bitset__foldl1__ho2_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dense_bitset_module11)
	MR_init_entry1(dense_bitset__foldl2__ho3_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__dense_bitset__foldl2__ho3_6_0);
	MR_init_label6(dense_bitset__foldl2__ho3_6_0,22,3,7,9,5,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl2__ho3'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(dense_bitset__foldl2__ho3_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(dense_bitset__foldl2__ho3_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GT(MR_r1,31)) {
		MR_GOTO_LAB(dense_bitset__foldl2__ho3_6_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(5) = MR_r4;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		dense_bitset__foldl2__ho3_6_0_i3);
MR_def_label(dense_bitset__foldl2__ho3_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_60_60_2_0,
		dense_bitset__foldl2__ho3_6_0_i7);
MR_def_label(dense_bitset__foldl2__ho3_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = ((MR_Integer) MR_r1 & (MR_Integer) MR_sv(4));
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(dense_bitset__foldl2__ho3_6_0_i5);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = ((MR_Integer) MR_sv(1) + ((MR_Integer) MR_sv(2) * (MR_Integer) 32));
	}
	MR_np_call_localret_ent(fn__dense_bitset__insert_2_0,
		dense_bitset__foldl2__ho3_6_0_i9);
MR_def_label(dense_bitset__foldl2__ho3_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_r1;
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(dense_bitset__foldl2__ho3_6_0_i22);
MR_def_label(dense_bitset__foldl2__ho3_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(dense_bitset__foldl2__ho3_6_0_i22);
MR_def_label(dense_bitset__foldl2__ho3_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dense_bitset_module12)
	MR_init_entry1(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_49_95_95_91_49_93_95_48_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_49_95_95_91_49_93_95_48_6_0);
	MR_init_label3(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_49_95_95_91_49_93_95_48_6_0,11,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__foldl1__[1]_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_49_95_95_91_49_93_95_48_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_49_95_95_91_49_93_95_48_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r1 > (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_49_95_95_91_49_93_95_48_6_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_48_6_0,
		f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_49_95_95_91_49_93_95_48_6_0_i3);
MR_def_label(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_49_95_95_91_49_93_95_48_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_49_95_95_91_49_93_95_48_6_0_i11);
	}
MR_def_label(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_49_95_95_91_49_93_95_48_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dense_bitset_module13)
	MR_init_entry1(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_49_95_95_91_49_93_95_49_6_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_49_95_95_91_49_93_95_49_6_1);
	MR_init_label3(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_49_95_95_91_49_93_95_49_6_1,11,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__foldl1__[1]_1'/6 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_49_95_95_91_49_93_95_49_6_1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_49_95_95_91_49_93_95_49_6_1,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r1 > (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_49_95_95_91_49_93_95_49_6_1_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_49_6_1,
		f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_49_95_95_91_49_93_95_49_6_1_i3);
MR_def_label(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_49_95_95_91_49_93_95_49_6_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_49_95_95_91_49_93_95_49_6_1_i11);
	}
MR_def_label(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_49_95_95_91_49_93_95_49_6_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dense_bitset_module14)
	MR_init_entry1(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_49_95_95_91_49_93_95_50_6_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_49_95_95_91_49_93_95_50_6_2);
	MR_init_label3(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_49_95_95_91_49_93_95_50_6_2,11,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__foldl1__[1]_2'/6 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_49_95_95_91_49_93_95_50_6_2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_49_95_95_91_49_93_95_50_6_2,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r1 > (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_49_95_95_91_49_93_95_50_6_2_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_50_6_2,
		f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_49_95_95_91_49_93_95_50_6_2_i3);
MR_def_label(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_49_95_95_91_49_93_95_50_6_2,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_49_95_95_91_49_93_95_50_6_2_i11);
	}
MR_def_label(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_49_95_95_91_49_93_95_50_6_2,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_2);

MR_BEGIN_MODULE(dense_bitset_module15)
	MR_init_entry1(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_48_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_48_6_0);
	MR_init_label6(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_48_6_0,22,3,7,9,5,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__foldl2__[1]_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_48_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_48_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GT(MR_r1,31)) {
		MR_GOTO_LAB(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_48_6_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(6) = MR_r5;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_48_6_0_i3);
MR_def_label(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_48_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_60_60_2_0,
		f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_48_6_0_i7);
MR_def_label(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_48_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = ((MR_Integer) MR_r1 & (MR_Integer) MR_sv(5));
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_48_6_0_i5);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = ((MR_Integer) MR_sv(1) + ((MR_Integer) MR_sv(2) * (MR_Integer) 32));
	MR_r3 = MR_sv(6);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_48_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_48_6_0_i9);
MR_def_label(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_48_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_r1;
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_48_6_0_i22);
MR_def_label(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_48_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(6);
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_48_6_0_i22);
MR_def_label(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_48_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dense_bitset_module16)
	MR_init_entry1(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_49_6_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_49_6_1);
	MR_init_label6(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_49_6_1,22,3,7,9,5,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__foldl2__[1]_1'/6 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_49_6_1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_49_6_1,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GT(MR_r1,31)) {
		MR_GOTO_LAB(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_49_6_1_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(6) = MR_r5;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_49_6_1_i3);
MR_def_label(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_49_6_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_60_60_2_0,
		f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_49_6_1_i7);
MR_def_label(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_49_6_1,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = ((MR_Integer) MR_r1 & (MR_Integer) MR_sv(5));
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_49_6_1_i5);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = ((MR_Integer) MR_sv(1) + ((MR_Integer) MR_sv(2) * (MR_Integer) 32));
	MR_r3 = MR_sv(6);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_49_6_1));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_49_6_1_i9);
MR_def_label(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_49_6_1,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_r1;
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_49_6_1_i22);
MR_def_label(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_49_6_1,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(6);
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_49_6_1_i22);
MR_def_label(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_49_6_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(dense_bitset_module17)
	MR_init_entry1(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_50_6_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_50_6_2);
	MR_init_label6(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_50_6_2,22,3,7,9,5,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__foldl2__[1]_2'/6 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_50_6_2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_50_6_2,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GT(MR_r1,31)) {
		MR_GOTO_LAB(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_50_6_2_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(6) = MR_r5;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_50_6_2_i3);
MR_def_label(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_50_6_2,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_60_60_2_0,
		f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_50_6_2_i7);
MR_def_label(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_50_6_2,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = ((MR_Integer) MR_r1 & (MR_Integer) MR_sv(5));
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_50_6_2_i5);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = ((MR_Integer) MR_sv(1) + ((MR_Integer) MR_sv(2) * (MR_Integer) 32));
	MR_r3 = MR_sv(6);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_50_6_2));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_50_6_2_i9);
MR_def_label(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_50_6_2,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_r1;
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_50_6_2_i22);
MR_def_label(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_50_6_2,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(6);
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_50_6_2_i22);
MR_def_label(f_100_101_110_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_91_49_93_95_50_6_2,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__dense_bitset_maybe_bunch_0(void)
{
	dense_bitset_module0();
	dense_bitset_module1();
	dense_bitset_module2();
	dense_bitset_module3();
	dense_bitset_module4();
	dense_bitset_module5();
	dense_bitset_module6();
	dense_bitset_module7();
	dense_bitset_module8();
	dense_bitset_module9();
	dense_bitset_module10();
	dense_bitset_module11();
	dense_bitset_module12();
	dense_bitset_module13();
	dense_bitset_module14();
	dense_bitset_module15();
	dense_bitset_module16();
	dense_bitset_module17();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__dense_bitset__init(void);
void mercury__dense_bitset__init_type_tables(void);
void mercury__dense_bitset__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__dense_bitset__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__dense_bitset__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__dense_bitset__init_threadscope_string_table(void);
#endif

void mercury__dense_bitset__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__dense_bitset_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_dense_bitset__type_ctor_info_dense_bitset_0,
		dense_bitset__dense_bitset_0_0);
	mercury__dense_bitset__init_debugger();
}

void mercury__dense_bitset__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_dense_bitset__type_ctor_info_dense_bitset_0);
	}
}


void mercury__dense_bitset__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__dense_bitset__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__dense_bitset);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__dense_bitset__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__dense_bitset__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
