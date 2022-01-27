/*
** Automatically generated from `rat.m'
** by the Mercury compiler,
** version DEV, configured for x86_64-apple-darwin12.2.1.
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
INIT mercury__libs__rat__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 526 "../library/io.int"
#include "io.mh"

#line 28 "libs.rat.c"
#line 536 "../library/io.int"
#include "time.mh"

#line 32 "libs.rat.c"
#line 537 "../library/io.int"
#include "string.mh"

#line 36 "libs.rat.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 40 "libs.rat.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 44 "libs.rat.c"
#line 45 "libs.rat.c"
#include "libs.rat.mh"

#line 48 "libs.rat.c"
#line 49 "libs.rat.c"
#ifndef LIBS__RAT_DECL_GUARD
#define LIBS__RAT_DECL_GUARD

#line 53 "libs.rat.c"
#line 54 "libs.rat.c"

#endif
#line 57 "libs.rat.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_0 {
	MR_Integer f1[2];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_libs__rat__type_ctor_info_rat_0;
MR_decl_label2(f_108_105_98_115_95_95_114_97_116_95_95_60_2_0, 3,4)
MR_decl_label2(f_108_105_98_115_95_95_114_97_116_95_95_61_60_2_0, 4,5)
MR_decl_label2(f_108_105_98_115_95_95_114_97_116_95_95_62_2_0, 3,4)
MR_decl_label2(f_108_105_98_115_95_95_114_97_116_95_95_62_61_2_0, 4,5)
MR_decl_label4(libs__rat__write_rat_3_0, 2,3,4,5)
MR_decl_label10(fn__f_108_105_98_115_95_95_114_97_116_95_95_42_2_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label10(fn__f_108_105_98_115_95_95_114_97_116_95_95_42_2_0, 12,15,18,19,20,21,23,26,27,28)
MR_decl_label10(fn__f_108_105_98_115_95_95_114_97_116_95_95_43_2_0, 2,4,6,7,8,9,10,12,13,14)
MR_decl_label10(fn__f_108_105_98_115_95_95_114_97_116_95_95_43_2_0, 15,18,21,22,23,24,26,29,30,31)
MR_decl_label5(fn__f_108_105_98_115_95_95_114_97_116_95_95_47_2_0, 2,5,7,10,12)
MR_decl_label1(fn__libs__rat__abs_1_0, 2)
MR_decl_label3(fn__libs__rat__gcd_2_2_0, 11,4,13)
MR_decl_label10(fn__libs__rat__rat_2_0, 2,52,8,9,10,11,13,16,17,18)
MR_decl_label7(fn__libs__rat__to_string_1_0, 2,4,5,7,8,10,11)
MR_decl_label2(__Unify___libs__rat__rat_0_0, 4,1)
MR_decl_label4(__Compare___libs__rat__rat_0_0, 3,2,5,21)
MR_def_extern_entry(fn__f_108_105_98_115_95_95_114_97_116_95_95_45_1_0)
MR_decl_static(fn__libs__rat__gcd_2_2_0)
MR_def_extern_entry(fn__f_108_105_98_115_95_95_114_97_116_95_95_43_2_0)
MR_def_extern_entry(fn__f_108_105_98_115_95_95_114_97_116_95_95_45_2_0)
MR_def_extern_entry(f_108_105_98_115_95_95_114_97_116_95_95_60_2_0)
MR_def_extern_entry(f_108_105_98_115_95_95_114_97_116_95_95_62_2_0)
MR_def_extern_entry(f_108_105_98_115_95_95_114_97_116_95_95_61_60_2_0)
MR_def_extern_entry(f_108_105_98_115_95_95_114_97_116_95_95_62_61_2_0)
MR_def_extern_entry(fn__libs__rat__rat_1_0)
MR_def_extern_entry(fn__libs__rat__rat_2_0)
MR_def_extern_entry(fn__f_108_105_98_115_95_95_114_97_116_95_95_43_1_0)
MR_def_extern_entry(fn__f_108_105_98_115_95_95_114_97_116_95_95_42_2_0)
MR_def_extern_entry(fn__f_108_105_98_115_95_95_114_97_116_95_95_47_2_0)
MR_def_extern_entry(fn__libs__rat__numer_1_0)
MR_def_extern_entry(fn__libs__rat__denom_1_0)
MR_def_extern_entry(fn__libs__rat__abs_1_0)
MR_def_extern_entry(fn__libs__rat__one_0_0)
MR_def_extern_entry(fn__libs__rat__zero_0_0)
MR_def_extern_entry(fn__libs__rat__to_string_1_0)
MR_def_extern_entry(libs__rat__write_rat_3_0)
MR_def_extern_entry(__Unify___libs__rat__rat_0_0)
MR_def_extern_entry(__Compare___libs__rat__rat_0_0)

static const struct mercury_type_0 mercury_common_0[2] =
{
{
{
0,
1
}
},
{
{
1,
1
}
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_PseudoTypeInfo mercury_data_libs__rat__field_types_rat_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_libs__rat__du_functor_desc_rat_0_0 = {
	"r",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_libs__rat__field_types_rat_0_0,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_libs__rat__du_stag_ordered_rat_0_0[] = {
	&mercury_data_libs__rat__du_functor_desc_rat_0_0

};

const MR_DuPtagLayout mercury_data_libs__rat__du_ptag_ordered_rat_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_libs__rat__du_stag_ordered_rat_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_libs__rat__du_name_ordered_rat_0[] = {
	&mercury_data_libs__rat__du_functor_desc_rat_0_0
};

const MR_Integer mercury_data_libs__rat__functor_number_map_rat_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_libs__rat__type_ctor_info_rat_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___libs__rat__rat_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___libs__rat__rat_0_0)),
	"libs.rat",
	"rat",
	{ (void *)mercury_data_libs__rat__du_name_ordered_rat_0 },
	{ (void *)mercury_data_libs__rat__du_ptag_ordered_rat_0 },
	1,
	4,
	mercury_data_libs__rat__functor_number_map_rat_0
};




MR_BEGIN_MODULE(libs__rat_module0)
	MR_init_entry1(fn__f_108_105_98_115_95_95_114_97_116_95_95_45_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_108_105_98_115_95_95_114_97_116_95_95_45_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '-'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_108_105_98_115_95_95_114_97_116_95_95_45_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = ((MR_Integer) 0 - (MR_Integer) MR_tfield(0, MR_r1, 0));
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__int__rem_2_0);

MR_BEGIN_MODULE(libs__rat_module1)
	MR_init_entry1(fn__libs__rat__gcd_2_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__libs__rat__gcd_2_2_0);
	MR_init_label3(fn__libs__rat__gcd_2_2_0,11,4,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'gcd_2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__libs__rat__gcd_2_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(fn__libs__rat__gcd_2_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r2,0)) {
		MR_GOTO_LAB(fn__libs__rat__gcd_2_2_0_i13);
	}
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__int__rem_2_0,
		fn__libs__rat__gcd_2_2_0_i4);
MR_def_label(fn__libs__rat__gcd_2_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(fn__libs__rat__gcd_2_2_0_i11);
	}
MR_def_label(fn__libs__rat__gcd_2_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__int__abs_1_0);
MR_decl_entry(fn__f_105_110_116_95_95_47_47_2_0);
MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(libs__rat_module2)
	MR_init_entry1(fn__f_108_105_98_115_95_95_114_97_116_95_95_43_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_108_105_98_115_95_95_114_97_116_95_95_43_2_0);
	MR_init_label10(fn__f_108_105_98_115_95_95_114_97_116_95_95_43_2_0,2,4,6,7,8,9,10,12,13,14)
	MR_init_label10(fn__f_108_105_98_115_95_95_114_97_116_95_95_43_2_0,15,18,21,22,23,24,26,29,30,31)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '+'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_108_105_98_115_95_95_114_97_116_95_95_43_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r2, 1);
	MR_sv(5) = MR_tfield(0, MR_r2, 0);
	MR_r2 = MR_tfield(0, MR_r1, 1);
	MR_sv(4) = MR_tfield(0, MR_r1, 0);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__f_108_105_98_115_95_95_114_97_116_95_95_43_2_0_i2);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(fn__f_108_105_98_115_95_95_114_97_116_95_95_43_2_0_i12);
MR_def_label(fn__f_108_105_98_115_95_95_114_97_116_95_95_43_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(fn__f_108_105_98_115_95_95_114_97_116_95_95_43_2_0_i4);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(fn__f_108_105_98_115_95_95_114_97_116_95_95_43_2_0_i12);
MR_def_label(fn__f_108_105_98_115_95_95_114_97_116_95_95_43_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__int__abs_1_0,
		fn__f_108_105_98_115_95_95_114_97_116_95_95_43_2_0_i6);
MR_def_label(fn__f_108_105_98_115_95_95_114_97_116_95_95_43_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__int__abs_1_0,
		fn__f_108_105_98_115_95_95_114_97_116_95_95_43_2_0_i7);
MR_def_label(fn__f_108_105_98_115_95_95_114_97_116_95_95_43_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__libs__rat__gcd_2_2_0,
		fn__f_108_105_98_115_95_95_114_97_116_95_95_43_2_0_i8);
MR_def_label(fn__f_108_105_98_115_95_95_114_97_116_95_95_43_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_47_47_2_0,
		fn__f_108_105_98_115_95_95_114_97_116_95_95_43_2_0_i9);
MR_def_label(fn__f_108_105_98_115_95_95_114_97_116_95_95_43_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 * (MR_Integer) MR_sv(1));
	MR_np_call_localret_ent(fn__int__abs_1_0,
		fn__f_108_105_98_115_95_95_114_97_116_95_95_43_2_0_i10);
MR_def_label(fn__f_108_105_98_115_95_95_114_97_116_95_95_43_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
MR_def_label(fn__f_108_105_98_115_95_95_114_97_116_95_95_43_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_47_47_2_0,
		fn__f_108_105_98_115_95_95_114_97_116_95_95_43_2_0_i13);
MR_def_label(fn__f_108_105_98_115_95_95_114_97_116_95_95_43_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_47_47_2_0,
		fn__f_108_105_98_115_95_95_114_97_116_95_95_43_2_0_i14);
MR_def_label(fn__f_108_105_98_115_95_95_114_97_116_95_95_43_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = (((MR_Integer) MR_sv(4) * (MR_Integer) MR_sv(1)) + ((MR_Integer) MR_sv(5) * (MR_Integer) MR_r1));
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(fn__f_108_105_98_115_95_95_114_97_116_95_95_43_2_0_i15);
	}
	MR_r1 = (MR_Word) MR_string_const("libs.rat", 8);
	MR_r2 = (MR_Word) MR_string_const("function \140libs.rat.rat_norm\'/2", 30);
	MR_r3 = (MR_Word) MR_string_const("division by zero", 16);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(fn__f_108_105_98_115_95_95_114_97_116_95_95_43_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(fn__f_108_105_98_115_95_95_114_97_116_95_95_43_2_0_i18);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_decr_sp_and_return(6);
MR_def_label(fn__f_108_105_98_115_95_95_114_97_116_95_95_43_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__int__abs_1_0,
		fn__f_108_105_98_115_95_95_114_97_116_95_95_43_2_0_i21);
MR_def_label(fn__f_108_105_98_115_95_95_114_97_116_95_95_43_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__int__abs_1_0,
		fn__f_108_105_98_115_95_95_114_97_116_95_95_43_2_0_i22);
MR_def_label(fn__f_108_105_98_115_95_95_114_97_116_95_95_43_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__libs__rat__gcd_2_2_0,
		fn__f_108_105_98_115_95_95_114_97_116_95_95_43_2_0_i23);
MR_def_label(fn__f_108_105_98_115_95_95_114_97_116_95_95_43_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(fn__f_108_105_98_115_95_95_114_97_116_95_95_43_2_0_i24);
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_sv(3) = ((MR_Integer) MR_tempr1 * (MR_Integer) 0);
	}
	MR_np_call_localret_ent(fn__int__abs_1_0,
		fn__f_108_105_98_115_95_95_114_97_116_95_95_43_2_0_i29);
MR_def_label(fn__f_108_105_98_115_95_95_114_97_116_95_95_43_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GE(MR_sv(3),0)) {
		MR_GOTO_LAB(fn__f_108_105_98_115_95_95_114_97_116_95_95_43_2_0_i26);
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_sv(3) = ((MR_Integer) MR_tempr1 * (MR_Integer) -1);
	}
	MR_np_call_localret_ent(fn__int__abs_1_0,
		fn__f_108_105_98_115_95_95_114_97_116_95_95_43_2_0_i29);
MR_def_label(fn__f_108_105_98_115_95_95_114_97_116_95_95_43_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_sv(3) = ((MR_Integer) MR_tempr1 * (MR_Integer) 1);
	}
	MR_np_call_localret_ent(fn__int__abs_1_0,
		fn__f_108_105_98_115_95_95_114_97_116_95_95_43_2_0_i29);
MR_def_label(fn__f_108_105_98_115_95_95_114_97_116_95_95_43_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_47_47_2_0,
		fn__f_108_105_98_115_95_95_114_97_116_95_95_43_2_0_i30);
MR_def_label(fn__f_108_105_98_115_95_95_114_97_116_95_95_43_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_47_47_2_0,
		fn__f_108_105_98_115_95_95_114_97_116_95_95_43_2_0_i31);
MR_def_label(fn__f_108_105_98_115_95_95_114_97_116_95_95_43_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(4);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__rat_module3)
	MR_init_entry1(fn__f_108_105_98_115_95_95_114_97_116_95_95_45_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_108_105_98_115_95_95_114_97_116_95_95_45_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '-'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_108_105_98_115_95_95_114_97_116_95_95_45_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = ((MR_Integer) 0 - (MR_Integer) MR_tfield(0, MR_r2, 0));
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r2, 1);
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(fn__f_108_105_98_115_95_95_114_97_116_95_95_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__rat_module4)
	MR_init_entry1(f_108_105_98_115_95_95_114_97_116_95_95_60_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_108_105_98_115_95_95_114_97_116_95_95_60_2_0);
	MR_init_label2(f_108_105_98_115_95_95_114_97_116_95_95_60_2_0,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '<'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_108_105_98_115_95_95_114_97_116_95_95_60_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = ((MR_Integer) 0 - (MR_Integer) MR_tfield(0, MR_r2, 0));
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r2, 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_98_115_95_95_114_97_116_95_95_43_2_0,
		f_108_105_98_115_95_95_114_97_116_95_95_60_2_0_i3);
MR_def_label(f_108_105_98_115_95_95_114_97_116_95_95_60_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 0);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(f_108_105_98_115_95_95_114_97_116_95_95_60_2_0_i4);
	}
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_FALSE;
	MR_proceed();
MR_def_label(f_108_105_98_115_95_95_114_97_116_95_95_60_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 0);
	MR_r1 = ((MR_Integer) MR_r2 < (MR_Integer) 0);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__rat_module5)
	MR_init_entry1(f_108_105_98_115_95_95_114_97_116_95_95_62_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_108_105_98_115_95_95_114_97_116_95_95_62_2_0);
	MR_init_label2(f_108_105_98_115_95_95_114_97_116_95_95_62_2_0,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '>'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_108_105_98_115_95_95_114_97_116_95_95_62_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = ((MR_Integer) 0 - (MR_Integer) MR_tfield(0, MR_r2, 0));
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r2, 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_98_115_95_95_114_97_116_95_95_43_2_0,
		f_108_105_98_115_95_95_114_97_116_95_95_62_2_0_i3);
MR_def_label(f_108_105_98_115_95_95_114_97_116_95_95_62_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 0);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(f_108_105_98_115_95_95_114_97_116_95_95_62_2_0_i4);
	}
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_FALSE;
	MR_proceed();
MR_def_label(f_108_105_98_115_95_95_114_97_116_95_95_62_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 0);
	MR_r1 = ((MR_Integer) MR_r2 >= (MR_Integer) 0);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__rat_module6)
	MR_init_entry1(f_108_105_98_115_95_95_114_97_116_95_95_61_60_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_108_105_98_115_95_95_114_97_116_95_95_61_60_2_0);
	MR_init_label2(f_108_105_98_115_95_95_114_97_116_95_95_61_60_2_0,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '=<'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_108_105_98_115_95_95_114_97_116_95_95_61_60_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = ((MR_Integer) 0 - (MR_Integer) MR_tfield(0, MR_r2, 0));
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r2, 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_98_115_95_95_114_97_116_95_95_43_2_0,
		f_108_105_98_115_95_95_114_97_116_95_95_61_60_2_0_i4);
MR_def_label(f_108_105_98_115_95_95_114_97_116_95_95_61_60_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 0);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(f_108_105_98_115_95_95_114_97_116_95_95_61_60_2_0_i5);
	}
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(f_108_105_98_115_95_95_114_97_116_95_95_61_60_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 0);
	MR_r1 = ((MR_Integer) MR_r2 < (MR_Integer) 0);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__rat_module7)
	MR_init_entry1(f_108_105_98_115_95_95_114_97_116_95_95_62_61_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_108_105_98_115_95_95_114_97_116_95_95_62_61_2_0);
	MR_init_label2(f_108_105_98_115_95_95_114_97_116_95_95_62_61_2_0,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '>='/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_108_105_98_115_95_95_114_97_116_95_95_62_61_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = ((MR_Integer) 0 - (MR_Integer) MR_tfield(0, MR_r2, 0));
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r2, 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_98_115_95_95_114_97_116_95_95_43_2_0,
		f_108_105_98_115_95_95_114_97_116_95_95_62_61_2_0_i4);
MR_def_label(f_108_105_98_115_95_95_114_97_116_95_95_62_61_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 0);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(f_108_105_98_115_95_95_114_97_116_95_95_62_61_2_0_i5);
	}
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(f_108_105_98_115_95_95_114_97_116_95_95_62_61_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 0);
	MR_r1 = ((MR_Integer) MR_r2 >= (MR_Integer) 0);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__rat_module8)
	MR_init_entry1(fn__libs__rat__rat_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__libs__rat__rat_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rat'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__libs__rat__rat_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = (MR_Integer) 1;
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__rat_module9)
	MR_init_entry1(fn__libs__rat__rat_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__libs__rat__rat_2_0);
	MR_init_label10(fn__libs__rat__rat_2_0,2,52,8,9,10,11,13,16,17,18)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rat'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__libs__rat__rat_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__libs__rat__rat_2_0_i2);
	}
	MR_r1 = (MR_Word) MR_string_const("libs.rat", 8);
	MR_r2 = (MR_Word) MR_string_const("function \140libs.rat.rat_norm\'/2", 30);
	MR_r3 = (MR_Word) MR_string_const("division by zero", 16);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(fn__libs__rat__rat_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__libs__rat__rat_2_0_i52);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_proceed();
MR_def_label(fn__libs__rat__rat_2_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__int__abs_1_0,
		fn__libs__rat__rat_2_0_i8);
MR_def_label(fn__libs__rat__rat_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__int__abs_1_0,
		fn__libs__rat__rat_2_0_i9);
MR_def_label(fn__libs__rat__rat_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__libs__rat__gcd_2_2_0,
		fn__libs__rat__rat_2_0_i10);
MR_def_label(fn__libs__rat__rat_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(fn__libs__rat__rat_2_0_i11);
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_sv(1) = ((MR_Integer) MR_tempr1 * (MR_Integer) 0);
	}
	MR_np_call_localret_ent(fn__int__abs_1_0,
		fn__libs__rat__rat_2_0_i16);
MR_def_label(fn__libs__rat__rat_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GE(MR_sv(1),0)) {
		MR_GOTO_LAB(fn__libs__rat__rat_2_0_i13);
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_sv(1) = ((MR_Integer) MR_tempr1 * (MR_Integer) -1);
	}
	MR_np_call_localret_ent(fn__int__abs_1_0,
		fn__libs__rat__rat_2_0_i16);
MR_def_label(fn__libs__rat__rat_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_sv(1) = ((MR_Integer) MR_tempr1 * (MR_Integer) 1);
	}
	MR_np_call_localret_ent(fn__int__abs_1_0,
		fn__libs__rat__rat_2_0_i16);
MR_def_label(fn__libs__rat__rat_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_47_47_2_0,
		fn__libs__rat__rat_2_0_i17);
MR_def_label(fn__libs__rat__rat_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_47_47_2_0,
		fn__libs__rat__rat_2_0_i18);
MR_def_label(fn__libs__rat__rat_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__rat_module10)
	MR_init_entry1(fn__f_108_105_98_115_95_95_114_97_116_95_95_43_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_108_105_98_115_95_95_114_97_116_95_95_43_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '+'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_108_105_98_115_95_95_114_97_116_95_95_43_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__rat_module11)
	MR_init_entry1(fn__f_108_105_98_115_95_95_114_97_116_95_95_42_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_108_105_98_115_95_95_114_97_116_95_95_42_2_0);
	MR_init_label10(fn__f_108_105_98_115_95_95_114_97_116_95_95_42_2_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label10(fn__f_108_105_98_115_95_95_114_97_116_95_95_42_2_0,12,15,18,19,20,21,23,26,27,28)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '*'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_108_105_98_115_95_95_114_97_116_95_95_42_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(5) = MR_tfield(0, MR_r1, 0);
	MR_sv(4) = MR_tfield(0, MR_r1, 1);
	MR_sv(6) = MR_tfield(0, MR_r2, 0);
	MR_sv(1) = MR_tfield(0, MR_r2, 1);
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__int__abs_1_0,
		fn__f_108_105_98_115_95_95_114_97_116_95_95_42_2_0_i2);
MR_def_label(fn__f_108_105_98_115_95_95_114_97_116_95_95_42_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__int__abs_1_0,
		fn__f_108_105_98_115_95_95_114_97_116_95_95_42_2_0_i3);
MR_def_label(fn__f_108_105_98_115_95_95_114_97_116_95_95_42_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__libs__rat__gcd_2_2_0,
		fn__f_108_105_98_115_95_95_114_97_116_95_95_42_2_0_i4);
MR_def_label(fn__f_108_105_98_115_95_95_114_97_116_95_95_42_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__int__abs_1_0,
		fn__f_108_105_98_115_95_95_114_97_116_95_95_42_2_0_i5);
MR_def_label(fn__f_108_105_98_115_95_95_114_97_116_95_95_42_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__int__abs_1_0,
		fn__f_108_105_98_115_95_95_114_97_116_95_95_42_2_0_i6);
MR_def_label(fn__f_108_105_98_115_95_95_114_97_116_95_95_42_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__libs__rat__gcd_2_2_0,
		fn__f_108_105_98_115_95_95_114_97_116_95_95_42_2_0_i7);
MR_def_label(fn__f_108_105_98_115_95_95_114_97_116_95_95_42_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_47_47_2_0,
		fn__f_108_105_98_115_95_95_114_97_116_95_95_42_2_0_i8);
MR_def_label(fn__f_108_105_98_115_95_95_114_97_116_95_95_42_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_47_47_2_0,
		fn__f_108_105_98_115_95_95_114_97_116_95_95_42_2_0_i9);
MR_def_label(fn__f_108_105_98_115_95_95_114_97_116_95_95_42_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = ((MR_Integer) MR_sv(6) * (MR_Integer) MR_r1);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_47_47_2_0,
		fn__f_108_105_98_115_95_95_114_97_116_95_95_42_2_0_i10);
MR_def_label(fn__f_108_105_98_115_95_95_114_97_116_95_95_42_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_47_47_2_0,
		fn__f_108_105_98_115_95_95_114_97_116_95_95_42_2_0_i11);
MR_def_label(fn__f_108_105_98_115_95_95_114_97_116_95_95_42_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = ((MR_Integer) MR_sv(4) * (MR_Integer) MR_r1);
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(fn__f_108_105_98_115_95_95_114_97_116_95_95_42_2_0_i12);
	}
	MR_r1 = (MR_Word) MR_string_const("libs.rat", 8);
	MR_r2 = (MR_Word) MR_string_const("function \140libs.rat.rat_norm\'/2", 30);
	MR_r3 = (MR_Word) MR_string_const("division by zero", 16);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(fn__f_108_105_98_115_95_95_114_97_116_95_95_42_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),0)) {
		MR_GOTO_LAB(fn__f_108_105_98_115_95_95_114_97_116_95_95_42_2_0_i15);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_decr_sp_and_return(7);
MR_def_label(fn__f_108_105_98_115_95_95_114_97_116_95_95_42_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r4;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__int__abs_1_0,
		fn__f_108_105_98_115_95_95_114_97_116_95_95_42_2_0_i18);
MR_def_label(fn__f_108_105_98_115_95_95_114_97_116_95_95_42_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__int__abs_1_0,
		fn__f_108_105_98_115_95_95_114_97_116_95_95_42_2_0_i19);
MR_def_label(fn__f_108_105_98_115_95_95_114_97_116_95_95_42_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__libs__rat__gcd_2_2_0,
		fn__f_108_105_98_115_95_95_114_97_116_95_95_42_2_0_i20);
MR_def_label(fn__f_108_105_98_115_95_95_114_97_116_95_95_42_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(fn__f_108_105_98_115_95_95_114_97_116_95_95_42_2_0_i21);
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r2;
	MR_sv(4) = ((MR_Integer) MR_tempr1 * (MR_Integer) 0);
	}
	MR_np_call_localret_ent(fn__int__abs_1_0,
		fn__f_108_105_98_115_95_95_114_97_116_95_95_42_2_0_i26);
MR_def_label(fn__f_108_105_98_115_95_95_114_97_116_95_95_42_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GE(MR_sv(4),0)) {
		MR_GOTO_LAB(fn__f_108_105_98_115_95_95_114_97_116_95_95_42_2_0_i23);
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r2;
	MR_sv(4) = ((MR_Integer) MR_tempr1 * (MR_Integer) -1);
	}
	MR_np_call_localret_ent(fn__int__abs_1_0,
		fn__f_108_105_98_115_95_95_114_97_116_95_95_42_2_0_i26);
MR_def_label(fn__f_108_105_98_115_95_95_114_97_116_95_95_42_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r2;
	MR_sv(4) = ((MR_Integer) MR_tempr1 * (MR_Integer) 1);
	}
	MR_np_call_localret_ent(fn__int__abs_1_0,
		fn__f_108_105_98_115_95_95_114_97_116_95_95_42_2_0_i26);
MR_def_label(fn__f_108_105_98_115_95_95_114_97_116_95_95_42_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_47_47_2_0,
		fn__f_108_105_98_115_95_95_114_97_116_95_95_42_2_0_i27);
MR_def_label(fn__f_108_105_98_115_95_95_114_97_116_95_95_42_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_47_47_2_0,
		fn__f_108_105_98_115_95_95_114_97_116_95_95_42_2_0_i28);
MR_def_label(fn__f_108_105_98_115_95_95_114_97_116_95_95_42_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(5);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__require__unexpected_3_0);

MR_BEGIN_MODULE(libs__rat_module12)
	MR_init_entry1(fn__f_108_105_98_115_95_95_114_97_116_95_95_47_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_108_105_98_115_95_95_114_97_116_95_95_47_2_0);
	MR_init_label5(fn__f_108_105_98_115_95_95_114_97_116_95_95_47_2_0,2,5,7,10,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '/'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_108_105_98_115_95_95_114_97_116_95_95_47_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r5 = MR_tfield(0, MR_r2, 1);
	MR_r6 = MR_tfield(0, MR_r2, 0);
	if (MR_INT_NE(MR_r6,0)) {
		MR_GOTO_LAB(fn__f_108_105_98_115_95_95_114_97_116_95_95_47_2_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__rat, rat);
	MR_r2 = (MR_Word) MR_string_const("libs.rat", 8);
	MR_r3 = (MR_Word) MR_string_const("function \140libs.rat.reciprocal\'/1", 32);
	MR_r4 = (MR_Word) MR_string_const("division by zero", 16);
	MR_np_call_localret_ent(fn__require__unexpected_3_0,
		fn__f_108_105_98_115_95_95_114_97_116_95_95_47_2_0_i12);
MR_def_label(fn__f_108_105_98_115_95_95_114_97_116_95_95_47_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r6,0)) {
		MR_GOTO_LAB(fn__f_108_105_98_115_95_95_114_97_116_95_95_47_2_0_i5);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r6;
	MR_sv(2) = ((MR_Integer) 0 * (MR_Integer) MR_r5);
	MR_np_call_localret_ent(fn__int__abs_1_0,
		fn__f_108_105_98_115_95_95_114_97_116_95_95_47_2_0_i10);
MR_def_label(fn__f_108_105_98_115_95_95_114_97_116_95_95_47_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GE(MR_r6,0)) {
		MR_GOTO_LAB(fn__f_108_105_98_115_95_95_114_97_116_95_95_47_2_0_i7);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r6;
	MR_sv(2) = ((MR_Integer) -1 * (MR_Integer) MR_r5);
	MR_np_call_localret_ent(fn__int__abs_1_0,
		fn__f_108_105_98_115_95_95_114_97_116_95_95_47_2_0_i10);
MR_def_label(fn__f_108_105_98_115_95_95_114_97_116_95_95_47_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r6;
	MR_sv(2) = ((MR_Integer) 1 * (MR_Integer) MR_r5);
	MR_np_call_localret_ent(fn__int__abs_1_0,
		fn__f_108_105_98_115_95_95_114_97_116_95_95_47_2_0_i10);
MR_def_label(fn__f_108_105_98_115_95_95_114_97_116_95_95_47_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_sv(1);
MR_def_label(fn__f_108_105_98_115_95_95_114_97_116_95_95_47_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_108_105_98_115_95_95_114_97_116_95_95_42_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__rat_module13)
	MR_init_entry1(fn__libs__rat__numer_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__libs__rat__numer_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'numer'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__libs__rat__numer_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__rat_module14)
	MR_init_entry1(fn__libs__rat__denom_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__libs__rat__denom_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'denom'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__libs__rat__denom_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__rat_module15)
	MR_init_entry1(fn__libs__rat__abs_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__libs__rat__abs_1_0);
	MR_init_label1(fn__libs__rat__abs_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'abs'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__libs__rat__abs_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(fn__int__abs_1_0,
		fn__libs__rat__abs_1_0_i2);
MR_def_label(fn__libs__rat__abs_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = MR_sv(1);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__rat_module16)
	MR_init_entry1(fn__libs__rat__one_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__libs__rat__one_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'one'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__libs__rat__one_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__rat_module17)
	MR_init_entry1(fn__libs__rat__zero_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__libs__rat__zero_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'zero'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__libs__rat__zero_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__int_to_string_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(libs__rat_module18)
	MR_init_entry1(fn__libs__rat__to_string_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__libs__rat__to_string_1_0);
	MR_init_label7(fn__libs__rat__to_string_1_0,2,4,5,7,8,10,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'to_string'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__libs__rat__to_string_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_r2 = MR_tfield(0, MR_r1, 0);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__libs__rat__to_string_1_0_i2);
	}
	MR_r1 = (MR_Word) MR_string_const("0", 1);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(fn__libs__rat__to_string_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__libs__rat__to_string_1_0_i4);
MR_def_label(fn__libs__rat__to_string_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(fn__libs__rat__to_string_1_0_i5);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__libs__rat__to_string_1_0_i10);
MR_def_label(fn__libs__rat__to_string_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__libs__rat__to_string_1_0_i7);
MR_def_label(fn__libs__rat__to_string_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__libs__rat__to_string_1_0_i8);
MR_def_label(fn__libs__rat__to_string_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__libs__rat__to_string_1_0_i10);
MR_def_label(fn__libs__rat__to_string_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__libs__rat__to_string_1_0_i11);
MR_def_label(fn__libs__rat__to_string_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_string_3_0);
MR_decl_entry(io__write_int_3_0);
MR_decl_entry(io__write_char_3_0);

MR_BEGIN_MODULE(libs__rat_module19)
	MR_init_entry1(libs__rat__write_rat_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__rat__write_rat_3_0);
	MR_init_label4(libs__rat__write_rat_3_0,2,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_rat'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__rat__write_rat_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("r(", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__rat__write_rat_3_0_i2);
MR_def_label(libs__rat__write_rat_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_int_3_0,
		libs__rat__write_rat_3_0_i3);
MR_def_label(libs__rat__write_rat_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__rat__write_rat_3_0_i4);
MR_def_label(libs__rat__write_rat_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_int_3_0,
		libs__rat__write_rat_3_0_i5);
MR_def_label(libs__rat__write_rat_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 41;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_char_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__rat_module20)
	MR_init_entry1(__Unify___libs__rat__rat_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___libs__rat__rat_0_0);
	MR_init_label2(__Unify___libs__rat__rat_0_0,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___libs__rat__rat_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___libs__rat__rat_0_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___libs__rat__rat_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___libs__rat__rat_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___libs__rat__rat_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(libs__rat_module21)
	MR_init_entry1(__Compare___libs__rat__rat_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___libs__rat__rat_0_0);
	MR_init_label4(__Compare___libs__rat__rat_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___libs__rat__rat_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___libs__rat__rat_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___libs__rat__rat_0_0_i2);
MR_def_label(__Compare___libs__rat__rat_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___libs__rat__rat_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___libs__rat__rat_0_0_i5);
MR_def_label(__Compare___libs__rat__rat_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___libs__rat__rat_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___libs__rat__rat_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__libs__rat_maybe_bunch_0(void)
{
	libs__rat_module0();
	libs__rat_module1();
	libs__rat_module2();
	libs__rat_module3();
	libs__rat_module4();
	libs__rat_module5();
	libs__rat_module6();
	libs__rat_module7();
	libs__rat_module8();
	libs__rat_module9();
	libs__rat_module10();
	libs__rat_module11();
	libs__rat_module12();
	libs__rat_module13();
	libs__rat_module14();
	libs__rat_module15();
	libs__rat_module16();
	libs__rat_module17();
	libs__rat_module18();
	libs__rat_module19();
	libs__rat_module20();
	libs__rat_module21();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__libs__rat__init(void);
void mercury__libs__rat__init_type_tables(void);
void mercury__libs__rat__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__libs__rat__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__libs__rat__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__libs__rat__init_threadscope_string_table(void);
#endif

void mercury__libs__rat__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__libs__rat_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_libs__rat__type_ctor_info_rat_0,
		libs__rat__rat_0_0);
	mercury__libs__rat__init_debugger();
}

void mercury__libs__rat__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_libs__rat__type_ctor_info_rat_0);
	}
}


void mercury__libs__rat__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__libs__rat__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_layout__libs__rat);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__libs__rat__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__libs__rat__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
