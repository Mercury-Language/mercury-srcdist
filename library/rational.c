/*
** Automatically generated from `rational.m'
** by the Mercury compiler,
** version rotd-2012-03-21, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__rational__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "io.int2"
#include "io.mh"

#line 28 "rational.c"
#line 150 "io.int2"
#include "time.mh"

#line 32 "rational.c"
#line 151 "io.int2"
#include "string.mh"

#line 36 "rational.c"
#line 31 "bitmap.int2"
#include "bitmap.mh"

#line 40 "rational.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 44 "rational.c"
#line 46 "builtin.opt"
#include "array.mh"

#line 48 "rational.c"
#line 56 "array.opt"
#include "stm_builtin.mh"

#line 52 "rational.c"
#line 58 "array.opt"
#include "store.mh"

#line 56 "rational.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 60 "rational.c"
#line 157 "io.opt"
#include "dir.mh"

#line 64 "rational.c"
#line 171 "io.opt"
#include "table_builtin.mh"

#line 68 "rational.c"
#line 6 "benchmarking.opt"
#include "benchmarking.mh"

#line 72 "rational.c"
#line 3 "float.opt"
#include "float.mh"

#line 76 "rational.c"
#line 3 "math.opt"
#include "math.mh"

#line 80 "rational.c"
#line 14 "version_array.opt"
#include "version_array.mh"

#line 84 "rational.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 88 "rational.c"
#line 4 "char.opt"
#include "char.mh"

#line 92 "rational.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 96 "rational.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 100 "rational.c"
#line 4 "int.opt"
#include "int.mh"

#line 104 "rational.c"
#line 130 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 108 "rational.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 112 "rational.c"
#line 113 "rational.c"
#include "rational.mh"

#line 116 "rational.c"
#line 117 "rational.c"
#ifndef RATIONAL_DECL_GUARD
#define RATIONAL_DECL_GUARD

#line 121 "rational.c"
#line 122 "rational.c"

#endif
#line 125 "rational.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_0 {
	MR_Integer f1;
	MR_Word * f2;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_1 {
	MR_Word * f1[2];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_rational__type_ctor_info_rational_0;
MR_decl_label1(f_114_97_116_105_111_110_97_108_95_95_60_2_0, 2)
MR_decl_label3(f_114_97_116_105_111_110_97_108_95_95_61_60_2_0, 2,3,1)
MR_decl_label1(f_114_97_116_105_111_110_97_108_95_95_62_2_0, 2)
MR_decl_label2(f_114_97_116_105_111_110_97_108_95_95_62_61_2_0, 2,3)
MR_decl_label10(fn__f_114_97_116_105_111_110_97_108_95_95_42_2_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label2(fn__f_114_97_116_105_111_110_97_108_95_95_42_2_0, 12,13)
MR_decl_label10(fn__f_114_97_116_105_111_110_97_108_95_95_43_2_0, 4,2,8,6,10,11,12,13,14,15)
MR_decl_label6(fn__f_114_97_116_105_111_110_97_108_95_95_43_2_0, 17,18,19,20,21,22)
MR_decl_label1(fn__f_114_97_116_105_111_110_97_108_95_95_45_1_0, 2)
MR_decl_label1(fn__f_114_97_116_105_111_110_97_108_95_95_45_2_0, 2)
MR_decl_label1(fn__f_114_97_116_105_111_110_97_108_95_95_47_2_0, 2)
MR_decl_label1(fn__rational__abs_1_0, 2)
MR_decl_label6(fn__rational__cmp_2_0, 2,5,8,6,12,10)
MR_decl_label4(fn__rational__gcd_2_2_0, 16,4,2,6)
MR_decl_label1(fn__rational__rational_1_0, 2)
MR_decl_label2(fn__rational__rational_2_0, 2,3)
MR_decl_label10(fn__rational__rational_norm_2_0, 4,2,9,7,14,15,16,19,17,23)
MR_decl_label6(fn__rational__rational_norm_2_0, 26,21,32,33,34,35)
MR_decl_label9(fn__rational__reciprocal_1_0, 4,2,9,7,13,16,11,22,23)
MR_decl_label3(__Unify___rational__rational_0_0, 4,8,1)
MR_decl_label4(__Compare___rational__rational_0_0, 3,2,5,21)
MR_def_extern_entry(fn__f_114_97_116_105_111_110_97_108_95_95_45_1_0)
MR_decl_static(fn__rational__gcd_2_2_0)
MR_def_extern_entry(fn__rational__rational_norm_2_0)
MR_def_extern_entry(fn__f_114_97_116_105_111_110_97_108_95_95_43_2_0)
MR_def_extern_entry(fn__f_114_97_116_105_111_110_97_108_95_95_45_2_0)
MR_def_extern_entry(fn__rational__cmp_2_0)
MR_def_extern_entry(f_114_97_116_105_111_110_97_108_95_95_60_2_0)
MR_def_extern_entry(f_114_97_116_105_111_110_97_108_95_95_62_2_0)
MR_def_extern_entry(f_114_97_116_105_111_110_97_108_95_95_61_60_2_0)
MR_def_extern_entry(f_114_97_116_105_111_110_97_108_95_95_62_61_2_0)
MR_def_extern_entry(fn__rational__rational_1_0)
MR_def_extern_entry(fn__rational__rational_2_0)
MR_def_extern_entry(fn__rational__from_integer_1_0)
MR_def_extern_entry(fn__rational__from_integers_2_0)
MR_def_extern_entry(fn__f_114_97_116_105_111_110_97_108_95_95_43_1_0)
MR_def_extern_entry(fn__f_114_97_116_105_111_110_97_108_95_95_42_2_0)
MR_def_extern_entry(fn__rational__reciprocal_1_0)
MR_def_extern_entry(fn__f_114_97_116_105_111_110_97_108_95_95_47_2_0)
MR_def_extern_entry(fn__rational__numer_1_0)
MR_def_extern_entry(fn__rational__denom_1_0)
MR_def_extern_entry(fn__rational__abs_1_0)
MR_def_extern_entry(fn__rational__one_0_0)
MR_def_extern_entry(fn__rational__zero_0_0)
MR_def_extern_entry(__Unify___rational__rational_0_0)
MR_def_extern_entry(__Compare___rational__rational_0_0)
MR_decl_static(fn__f_114_97_116_105_111_110_97_108_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)

static const struct mercury_type_0 mercury_common_0[3] =
{
{
0,
MR_tbmkword(0, 0)
},
{
1,
MR_tbmkword(0, 0)
},
{
1,
MR_TAG_COMMON(1,0,1)
},
};

static const struct mercury_type_1 mercury_common_1[2] =
{
{
{
MR_TAG_COMMON(0,0,0),
MR_TAG_COMMON(0,0,2)
}
},
{
{
MR_TAG_COMMON(0,0,2),
MR_TAG_COMMON(0,0,2)
}
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_integer__type_ctor_info_integer_0;
extern const MR_TypeCtorInfo_Struct mercury_data_integer__type_ctor_info_integer_0;

const MR_PseudoTypeInfo mercury_data_rational__field_types_rational_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_integer__type_ctor_info_integer_0,
	(MR_PseudoTypeInfo) &mercury_data_integer__type_ctor_info_integer_0
};

static const MR_DuFunctorDesc mercury_data_rational__du_functor_desc_rational_0_0 = {
	"r",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_rational__field_types_rational_0_0,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_rational__du_stag_ordered_rational_0_0[] = {
	&mercury_data_rational__du_functor_desc_rational_0_0

};

const MR_DuPtagLayout mercury_data_rational__du_ptag_ordered_rational_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_rational__du_stag_ordered_rational_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_rational__du_name_ordered_rational_0[] = {
	&mercury_data_rational__du_functor_desc_rational_0_0
};

const MR_Integer mercury_data_rational__functor_number_map_rational_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_rational__type_ctor_info_rational_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___rational__rational_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___rational__rational_0_0)),
	"rational",
	"rational",
	{ (void *)mercury_data_rational__du_name_ordered_rational_0 },
	{ (void *)mercury_data_rational__du_ptag_ordered_rational_0 },
	1,
	4,
	mercury_data_rational__functor_number_map_rational_0
};



MR_decl_entry(integer__neg_list_2_0);

MR_BEGIN_MODULE(rational_module0)
	MR_init_entry1(fn__f_114_97_116_105_111_110_97_108_95_95_45_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_114_97_116_105_111_110_97_108_95_95_45_1_0);
	MR_init_label1(fn__f_114_97_116_105_111_110_97_108_95_95_45_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '-'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_114_97_116_105_111_110_97_108_95_95_45_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_r2 = MR_tfield(0, MR_r1, 0);
	MR_sv(2) = ((MR_Integer) 0 - (MR_Integer) MR_tfield(0, MR_r2, 0));
	MR_r1 = MR_tfield(0, MR_r2, 1);
	MR_np_call_localret_ent(integer__neg_list_2_0,
		fn__f_114_97_116_105_111_110_97_108_95_95_45_1_0_i2);
MR_def_label(fn__f_114_97_116_105_111_110_97_108_95_95_45_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___integer__integer_0_0);
MR_decl_entry(integer__big_quot_rem_4_0);

MR_BEGIN_MODULE(rational_module1)
	MR_init_entry1(fn__rational__gcd_2_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__rational__gcd_2_2_0);
	MR_init_label4(fn__rational__gcd_2_2_0,16,4,2,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'gcd_2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__rational__gcd_2_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(fn__rational__gcd_2_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(__Unify___integer__integer_0_0,
		fn__rational__gcd_2_2_0_i4);
MR_def_label(fn__rational__gcd_2_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__rational__gcd_2_2_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(3);
MR_def_label(fn__rational__gcd_2_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(integer__big_quot_rem_4_0,
		fn__rational__gcd_2_2_0_i6);
MR_def_label(fn__rational__gcd_2_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(fn__rational__gcd_2_2_0_i16);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__error_1_0);
MR_decl_entry(fn__integer__big_abs_1_0);
MR_decl_entry(fn__integer__big_mul_2_0);
MR_decl_entry(__Compare___integer__integer_0_0);

MR_BEGIN_MODULE(rational_module2)
	MR_init_entry1(fn__rational__rational_norm_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__rational__rational_norm_2_0);
	MR_init_label10(fn__rational__rational_norm_2_0,4,2,9,7,14,15,16,19,17,23)
	MR_init_label6(fn__rational__rational_norm_2_0,26,21,32,33,34,35)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rational_norm'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__rational__rational_norm_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(__Unify___integer__integer_0_0,
		fn__rational__rational_norm_2_0_i4);
MR_def_label(fn__rational__rational_norm_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__rational__rational_norm_2_0_i2);
	}
	MR_r1 = (MR_Word) MR_string_const("rational.rational_norm: division by zero", 40);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(fn__rational__rational_norm_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___integer__integer_0_0,
		fn__rational__rational_norm_2_0_i9);
MR_def_label(fn__rational__rational_norm_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__rational__rational_norm_2_0_i7);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_decr_sp_and_return(5);
MR_def_label(fn__rational__rational_norm_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__integer__big_abs_1_0,
		fn__rational__rational_norm_2_0_i14);
MR_def_label(fn__rational__rational_norm_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__integer__big_abs_1_0,
		fn__rational__rational_norm_2_0_i15);
MR_def_label(fn__rational__rational_norm_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__rational__gcd_2_2_0,
		fn__rational__rational_norm_2_0_i16);
MR_def_label(fn__rational__rational_norm_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___integer__integer_0_0,
		fn__rational__rational_norm_2_0_i19);
MR_def_label(fn__rational__rational_norm_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__rational__rational_norm_2_0_i17);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__integer__big_mul_2_0,
		fn__rational__rational_norm_2_0_i32);
MR_def_label(fn__rational__rational_norm_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(__Compare___integer__integer_0_0,
		fn__rational__rational_norm_2_0_i23);
MR_def_label(fn__rational__rational_norm_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__rational__rational_norm_2_0_i21);
	}
	MR_sv(4) = (MR_Integer) -1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,0,1);
	MR_np_call_localret_ent(integer__neg_list_2_0,
		fn__rational__rational_norm_2_0_i26);
MR_def_label(fn__rational__rational_norm_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(4);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__integer__big_mul_2_0,
		fn__rational__rational_norm_2_0_i32);
MR_def_label(fn__rational__rational_norm_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_np_call_localret_ent(fn__integer__big_mul_2_0,
		fn__rational__rational_norm_2_0_i32);
MR_def_label(fn__rational__rational_norm_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__integer__big_abs_1_0,
		fn__rational__rational_norm_2_0_i33);
MR_def_label(fn__rational__rational_norm_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(integer__big_quot_rem_4_0,
		fn__rational__rational_norm_2_0_i34);
MR_def_label(fn__rational__rational_norm_2_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(integer__big_quot_rem_4_0,
		fn__rational__rational_norm_2_0_i35);
MR_def_label(fn__rational__rational_norm_2_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__integer__big_plus_2_0);

MR_BEGIN_MODULE(rational_module3)
	MR_init_entry1(fn__f_114_97_116_105_111_110_97_108_95_95_43_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_114_97_116_105_111_110_97_108_95_95_43_2_0);
	MR_init_label10(fn__f_114_97_116_105_111_110_97_108_95_95_43_2_0,4,2,8,6,10,11,12,13,14,15)
	MR_init_label6(fn__f_114_97_116_105_111_110_97_108_95_95_43_2_0,17,18,19,20,21,22)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '+'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_114_97_116_105_111_110_97_108_95_95_43_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(3) = MR_tfield(0, MR_r2, 1);
	MR_sv(1) = MR_tfield(0, MR_r2, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 1);
	MR_sv(4) = MR_tfield(0, MR_r1, 0);
	MR_sv(2) = MR_tempr1;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(__Unify___integer__integer_0_0,
		fn__f_114_97_116_105_111_110_97_108_95_95_43_2_0_i4);
MR_def_label(fn__f_114_97_116_105_111_110_97_108_95_95_43_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__f_114_97_116_105_111_110_97_108_95_95_43_2_0_i2);
	}
	MR_r2 = MR_sv(2);
	MR_r1 = MR_sv(5);
	MR_GOTO_LAB(fn__f_114_97_116_105_111_110_97_108_95_95_43_2_0_i17);
MR_def_label(fn__f_114_97_116_105_111_110_97_108_95_95_43_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___integer__integer_0_0,
		fn__f_114_97_116_105_111_110_97_108_95_95_43_2_0_i8);
MR_def_label(fn__f_114_97_116_105_111_110_97_108_95_95_43_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__f_114_97_116_105_111_110_97_108_95_95_43_2_0_i6);
	}
	MR_r2 = MR_sv(2);
	MR_r1 = MR_sv(5);
	MR_GOTO_LAB(fn__f_114_97_116_105_111_110_97_108_95_95_43_2_0_i17);
MR_def_label(fn__f_114_97_116_105_111_110_97_108_95_95_43_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__integer__big_abs_1_0,
		fn__f_114_97_116_105_111_110_97_108_95_95_43_2_0_i10);
MR_def_label(fn__f_114_97_116_105_111_110_97_108_95_95_43_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__integer__big_abs_1_0,
		fn__f_114_97_116_105_111_110_97_108_95_95_43_2_0_i11);
MR_def_label(fn__f_114_97_116_105_111_110_97_108_95_95_43_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__rational__gcd_2_2_0,
		fn__f_114_97_116_105_111_110_97_108_95_95_43_2_0_i12);
MR_def_label(fn__f_114_97_116_105_111_110_97_108_95_95_43_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(integer__big_quot_rem_4_0,
		fn__f_114_97_116_105_111_110_97_108_95_95_43_2_0_i13);
MR_def_label(fn__f_114_97_116_105_111_110_97_108_95_95_43_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__integer__big_mul_2_0,
		fn__f_114_97_116_105_111_110_97_108_95_95_43_2_0_i14);
MR_def_label(fn__f_114_97_116_105_111_110_97_108_95_95_43_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__integer__big_abs_1_0,
		fn__f_114_97_116_105_111_110_97_108_95_95_43_2_0_i15);
MR_def_label(fn__f_114_97_116_105_111_110_97_108_95_95_43_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
MR_def_label(fn__f_114_97_116_105_111_110_97_108_95_95_43_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(integer__big_quot_rem_4_0,
		fn__f_114_97_116_105_111_110_97_108_95_95_43_2_0_i18);
MR_def_label(fn__f_114_97_116_105_111_110_97_108_95_95_43_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(integer__big_quot_rem_4_0,
		fn__f_114_97_116_105_111_110_97_108_95_95_43_2_0_i19);
MR_def_label(fn__f_114_97_116_105_111_110_97_108_95_95_43_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__integer__big_mul_2_0,
		fn__f_114_97_116_105_111_110_97_108_95_95_43_2_0_i20);
MR_def_label(fn__f_114_97_116_105_111_110_97_108_95_95_43_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__integer__big_mul_2_0,
		fn__f_114_97_116_105_111_110_97_108_95_95_43_2_0_i21);
MR_def_label(fn__f_114_97_116_105_111_110_97_108_95_95_43_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__integer__big_plus_2_0,
		fn__f_114_97_116_105_111_110_97_108_95_95_43_2_0_i22);
MR_def_label(fn__f_114_97_116_105_111_110_97_108_95_95_43_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__rational__rational_norm_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rational_module4)
	MR_init_entry1(fn__f_114_97_116_105_111_110_97_108_95_95_45_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_114_97_116_105_111_110_97_108_95_95_45_2_0);
	MR_init_label1(fn__f_114_97_116_105_111_110_97_108_95_95_45_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '-'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_114_97_116_105_111_110_97_108_95_95_45_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	MR_sv(3) = ((MR_Integer) 0 - (MR_Integer) MR_tfield(0, MR_tempr1, 0));
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(integer__neg_list_2_0,
		fn__f_114_97_116_105_111_110_97_108_95_95_45_2_0_i2);
MR_def_label(fn__f_114_97_116_105_111_110_97_108_95_95_45_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tfield(0, MR_r2, 1) = MR_sv(2);
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__f_114_97_116_105_111_110_97_108_95_95_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rational_module5)
	MR_init_entry1(fn__rational__cmp_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__rational__cmp_2_0);
	MR_init_label6(fn__rational__cmp_2_0,2,5,8,6,12,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cmp'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__rational__cmp_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	MR_sv(3) = ((MR_Integer) 0 - (MR_Integer) MR_tfield(0, MR_tempr1, 0));
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(integer__neg_list_2_0,
		fn__rational__cmp_2_0_i2);
MR_def_label(fn__rational__cmp_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tfield(0, MR_r2, 1) = MR_sv(2);
	MR_r1 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__f_114_97_116_105_111_110_97_108_95_95_43_2_0,
		fn__rational__cmp_2_0_i5);
MR_def_label(fn__rational__cmp_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(__Unify___integer__integer_0_0,
		fn__rational__cmp_2_0_i8);
MR_def_label(fn__rational__cmp_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__rational__cmp_2_0_i6);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(fn__rational__cmp_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(__Compare___integer__integer_0_0,
		fn__rational__cmp_2_0_i12);
MR_def_label(fn__rational__cmp_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__rational__cmp_2_0_i10);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(fn__rational__cmp_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rational_module6)
	MR_init_entry1(f_114_97_116_105_111_110_97_108_95_95_60_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_114_97_116_105_111_110_97_108_95_95_60_2_0);
	MR_init_label1(f_114_97_116_105_111_110_97_108_95_95_60_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '<'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_114_97_116_105_111_110_97_108_95_95_60_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__rational__cmp_2_0,
		f_114_97_116_105_111_110_97_108_95_95_60_2_0_i2);
MR_def_label(f_114_97_116_105_111_110_97_108_95_95_60_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 == (MR_Integer) 1);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rational_module7)
	MR_init_entry1(f_114_97_116_105_111_110_97_108_95_95_62_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_114_97_116_105_111_110_97_108_95_95_62_2_0);
	MR_init_label1(f_114_97_116_105_111_110_97_108_95_95_62_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '>'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_114_97_116_105_111_110_97_108_95_95_62_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__rational__cmp_2_0,
		f_114_97_116_105_111_110_97_108_95_95_62_2_0_i2);
MR_def_label(f_114_97_116_105_111_110_97_108_95_95_62_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 == (MR_Integer) 2);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rational_module8)
	MR_init_entry1(f_114_97_116_105_111_110_97_108_95_95_61_60_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_114_97_116_105_111_110_97_108_95_95_61_60_2_0);
	MR_init_label3(f_114_97_116_105_111_110_97_108_95_95_61_60_2_0,2,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '=<'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_114_97_116_105_111_110_97_108_95_95_61_60_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__rational__cmp_2_0,
		f_114_97_116_105_111_110_97_108_95_95_61_60_2_0_i2);
MR_def_label(f_114_97_116_105_111_110_97_108_95_95_61_60_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,1)) {
		MR_GOTO_LAB(f_114_97_116_105_111_110_97_108_95_95_61_60_2_0_i3);
	}
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(f_114_97_116_105_111_110_97_108_95_95_61_60_2_0_i1);
	}
MR_def_label(f_114_97_116_105_111_110_97_108_95_95_61_60_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(f_114_97_116_105_111_110_97_108_95_95_61_60_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rational_module9)
	MR_init_entry1(f_114_97_116_105_111_110_97_108_95_95_62_61_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_114_97_116_105_111_110_97_108_95_95_62_61_2_0);
	MR_init_label2(f_114_97_116_105_111_110_97_108_95_95_62_61_2_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '>='/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_114_97_116_105_111_110_97_108_95_95_62_61_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__rational__cmp_2_0,
		f_114_97_116_105_111_110_97_108_95_95_62_61_2_0_i2);
MR_def_label(f_114_97_116_105_111_110_97_108_95_95_62_61_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(f_114_97_116_105_111_110_97_108_95_95_62_61_2_0_i3);
	}
	MR_r1 = ((MR_Integer) MR_r1 == (MR_Integer) 2);
	MR_decr_sp_and_return(1);
MR_def_label(f_114_97_116_105_111_110_97_108_95_95_62_61_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__integer__int_to_integer_1_0);

MR_BEGIN_MODULE(rational_module10)
	MR_init_entry1(fn__rational__rational_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__rational__rational_1_0);
	MR_init_label1(fn__rational__rational_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rational'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__rational__rational_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__integer__int_to_integer_1_0,
		fn__rational__rational_1_0_i2);
MR_def_label(fn__rational__rational_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__rational__rational_norm_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rational_module11)
	MR_init_entry1(fn__rational__rational_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__rational__rational_2_0);
	MR_init_label2(fn__rational__rational_2_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rational'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__rational__rational_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__integer__int_to_integer_1_0,
		fn__rational__rational_2_0_i2);
MR_def_label(fn__rational__rational_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__integer__int_to_integer_1_0,
		fn__rational__rational_2_0_i3);
MR_def_label(fn__rational__rational_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__rational__rational_norm_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rational_module12)
	MR_init_entry1(fn__rational__from_integer_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__rational__from_integer_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'from_integer'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__rational__from_integer_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_np_tailcall_ent(fn__rational__rational_norm_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rational_module13)
	MR_init_entry1(fn__rational__from_integers_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__rational__from_integers_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'from_integers'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__rational__from_integers_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__rational__rational_norm_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rational_module14)
	MR_init_entry1(fn__f_114_97_116_105_111_110_97_108_95_95_43_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_114_97_116_105_111_110_97_108_95_95_43_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '+'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_114_97_116_105_111_110_97_108_95_95_43_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rational_module15)
	MR_init_entry1(fn__f_114_97_116_105_111_110_97_108_95_95_42_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_114_97_116_105_111_110_97_108_95_95_42_2_0);
	MR_init_label10(fn__f_114_97_116_105_111_110_97_108_95_95_42_2_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label2(fn__f_114_97_116_105_111_110_97_108_95_95_42_2_0,12,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '*'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_114_97_116_105_111_110_97_108_95_95_42_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(2) = MR_tfield(0, MR_r1, 0);
	MR_sv(4) = MR_tfield(0, MR_r1, 1);
	MR_sv(3) = MR_tfield(0, MR_r2, 0);
	MR_sv(1) = MR_tfield(0, MR_r2, 1);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__integer__big_abs_1_0,
		fn__f_114_97_116_105_111_110_97_108_95_95_42_2_0_i2);
MR_def_label(fn__f_114_97_116_105_111_110_97_108_95_95_42_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__integer__big_abs_1_0,
		fn__f_114_97_116_105_111_110_97_108_95_95_42_2_0_i3);
MR_def_label(fn__f_114_97_116_105_111_110_97_108_95_95_42_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__rational__gcd_2_2_0,
		fn__f_114_97_116_105_111_110_97_108_95_95_42_2_0_i4);
MR_def_label(fn__f_114_97_116_105_111_110_97_108_95_95_42_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__integer__big_abs_1_0,
		fn__f_114_97_116_105_111_110_97_108_95_95_42_2_0_i5);
MR_def_label(fn__f_114_97_116_105_111_110_97_108_95_95_42_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__integer__big_abs_1_0,
		fn__f_114_97_116_105_111_110_97_108_95_95_42_2_0_i6);
MR_def_label(fn__f_114_97_116_105_111_110_97_108_95_95_42_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__rational__gcd_2_2_0,
		fn__f_114_97_116_105_111_110_97_108_95_95_42_2_0_i7);
MR_def_label(fn__f_114_97_116_105_111_110_97_108_95_95_42_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(integer__big_quot_rem_4_0,
		fn__f_114_97_116_105_111_110_97_108_95_95_42_2_0_i8);
MR_def_label(fn__f_114_97_116_105_111_110_97_108_95_95_42_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(integer__big_quot_rem_4_0,
		fn__f_114_97_116_105_111_110_97_108_95_95_42_2_0_i9);
MR_def_label(fn__f_114_97_116_105_111_110_97_108_95_95_42_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__integer__big_mul_2_0,
		fn__f_114_97_116_105_111_110_97_108_95_95_42_2_0_i10);
MR_def_label(fn__f_114_97_116_105_111_110_97_108_95_95_42_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(integer__big_quot_rem_4_0,
		fn__f_114_97_116_105_111_110_97_108_95_95_42_2_0_i11);
MR_def_label(fn__f_114_97_116_105_111_110_97_108_95_95_42_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(integer__big_quot_rem_4_0,
		fn__f_114_97_116_105_111_110_97_108_95_95_42_2_0_i12);
MR_def_label(fn__f_114_97_116_105_111_110_97_108_95_95_42_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__integer__big_mul_2_0,
		fn__f_114_97_116_105_111_110_97_108_95_95_42_2_0_i13);
MR_def_label(fn__f_114_97_116_105_111_110_97_108_95_95_42_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__rational__rational_norm_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__require__func_error_1_0);

MR_BEGIN_MODULE(rational_module16)
	MR_init_entry1(fn__rational__reciprocal_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__rational__reciprocal_1_0);
	MR_init_label9(fn__rational__reciprocal_1_0,4,2,9,7,13,16,11,22,23)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'reciprocal'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__rational__reciprocal_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	}
	MR_np_call_localret_ent(__Unify___integer__integer_0_0,
		fn__rational__reciprocal_1_0_i4);
MR_def_label(fn__rational__reciprocal_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__rational__reciprocal_1_0_i2);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(rational, rational);
	MR_r2 = (MR_Word) MR_string_const("rational.reciprocal: division by zero", 37);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__require__func_error_1_0);
MR_def_label(fn__rational__reciprocal_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___integer__integer_0_0,
		fn__rational__reciprocal_1_0_i9);
MR_def_label(fn__rational__reciprocal_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__rational__reciprocal_1_0_i7);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__integer__big_mul_2_0,
		fn__rational__reciprocal_1_0_i22);
MR_def_label(fn__rational__reciprocal_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(__Compare___integer__integer_0_0,
		fn__rational__reciprocal_1_0_i13);
MR_def_label(fn__rational__reciprocal_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__rational__reciprocal_1_0_i11);
	}
	MR_sv(3) = (MR_Integer) -1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,0,1);
	MR_np_call_localret_ent(integer__neg_list_2_0,
		fn__rational__reciprocal_1_0_i16);
MR_def_label(fn__rational__reciprocal_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r2 = MR_sv(1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__integer__big_mul_2_0,
		fn__rational__reciprocal_1_0_i22);
MR_def_label(fn__rational__reciprocal_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_np_call_localret_ent(fn__integer__big_mul_2_0,
		fn__rational__reciprocal_1_0_i22);
MR_def_label(fn__rational__reciprocal_1_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__integer__big_abs_1_0,
		fn__rational__reciprocal_1_0_i23);
MR_def_label(fn__rational__reciprocal_1_0,23)
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


MR_BEGIN_MODULE(rational_module17)
	MR_init_entry1(fn__f_114_97_116_105_111_110_97_108_95_95_47_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_114_97_116_105_111_110_97_108_95_95_47_2_0);
	MR_init_label1(fn__f_114_97_116_105_111_110_97_108_95_95_47_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '/'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_114_97_116_105_111_110_97_108_95_95_47_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__rational__reciprocal_1_0,
		fn__f_114_97_116_105_111_110_97_108_95_95_47_2_0_i2);
MR_def_label(fn__f_114_97_116_105_111_110_97_108_95_95_47_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_114_97_116_105_111_110_97_108_95_95_42_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rational_module18)
	MR_init_entry1(fn__rational__numer_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__rational__numer_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'numer'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__rational__numer_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rational_module19)
	MR_init_entry1(fn__rational__denom_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__rational__denom_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'denom'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__rational__denom_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rational_module20)
	MR_init_entry1(fn__rational__abs_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__rational__abs_1_0);
	MR_init_label1(fn__rational__abs_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'abs'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__rational__abs_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(fn__integer__big_abs_1_0,
		fn__rational__abs_1_0_i2);
MR_def_label(fn__rational__abs_1_0,2)
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


MR_BEGIN_MODULE(rational_module21)
	MR_init_entry1(fn__rational__one_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__rational__one_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'one'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__rational__one_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rational_module22)
	MR_init_entry1(fn__rational__zero_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__rational__zero_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'zero'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__rational__zero_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rational_module23)
	MR_init_entry1(__Unify___rational__rational_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___rational__rational_0_0);
	MR_init_label3(__Unify___rational__rational_0_0,4,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___rational__rational_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___rational__rational_0_0_i8);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___integer__integer_0_0,
		__Unify___rational__rational_0_0_i4);
MR_def_label(__Unify___rational__rational_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___rational__rational_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___integer__integer_0_0);
MR_def_label(__Unify___rational__rational_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___rational__rational_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rational_module24)
	MR_init_entry1(__Compare___rational__rational_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___rational__rational_0_0);
	MR_init_label4(__Compare___rational__rational_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___rational__rational_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___rational__rational_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___rational__rational_0_0_i2);
MR_def_label(__Compare___rational__rational_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___rational__rational_0_0,2)
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
	MR_np_call_localret_ent(__Compare___integer__integer_0_0,
		__Compare___rational__rational_0_0_i5);
MR_def_label(__Compare___rational__rational_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___rational__rational_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___integer__integer_0_0);
MR_def_label(__Compare___rational__rational_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rational_module25)
	MR_init_entry1(fn__f_114_97_116_105_111_110_97_108_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_114_97_116_105_111_110_97_108_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_114_97_116_105_111_110_97_108_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__rational_maybe_bunch_0(void)
{
	rational_module0();
	rational_module1();
	rational_module2();
	rational_module3();
	rational_module4();
	rational_module5();
	rational_module6();
	rational_module7();
	rational_module8();
	rational_module9();
	rational_module10();
	rational_module11();
	rational_module12();
	rational_module13();
	rational_module14();
	rational_module15();
	rational_module16();
	rational_module17();
	rational_module18();
	rational_module19();
	rational_module20();
	rational_module21();
	rational_module22();
	rational_module23();
	rational_module24();
	rational_module25();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__rational__init(void);
void mercury__rational__init_type_tables(void);
void mercury__rational__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__rational__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__rational__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__rational__init_threadscope_string_table(void);
#endif

void mercury__rational__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__rational_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_rational__type_ctor_info_rational_0,
		rational__rational_0_0);
	mercury__rational__init_debugger();
}

void mercury__rational__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_rational__type_ctor_info_rational_0);
	}
}


void mercury__rational__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__rational__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__rational);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__rational__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__rational__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
