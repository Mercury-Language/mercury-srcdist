/*
** Automatically generated from `measurement_units.m'
** by the Mercury compiler,
** version rotd-2009-11-10, configured for i686-pc-linux-gnu.
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
INIT mercury__measurement_units__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 31 "../library/array.int2"
#include "array.mh"

#line 27 "measurement_units.c"
#line 136 "../library/io.int2"
#include "io.mh"

#line 31 "measurement_units.c"
#line 144 "../library/io.int2"
#include "string.mh"

#line 35 "measurement_units.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 39 "measurement_units.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 43 "measurement_units.c"
#line 21 "../library/stm_builtin.int2"
#include "stm_builtin.mh"

#line 47 "measurement_units.c"
#line 48 "measurement_units.c"
#include "measurement_units.mh"

#line 51 "measurement_units.c"
#line 52 "measurement_units.c"
#ifndef MEASUREMENT_UNITS_DECL_GUARD
#define MEASUREMENT_UNITS_DECL_GUARD

#line 56 "measurement_units.c"
#line 57 "measurement_units.c"

#endif
#line 60 "measurement_units.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_measurement_units__type_ctor_info_memory_0,
	mercury_data_measurement_units__type_ctor_info_memory_units_0,
	mercury_data_measurement_units__type_ctor_info_percent_0,
	mercury_data_measurement_units__type_ctor_info_time_0;
MR_decl_label1(measurement_units__compare_memory_3_0, 3)
MR_decl_label2(measurement_units__percent_at_or_above_threshold_2_0, 2,3)
MR_decl_label3(fn__f_109_101_97_115_117_114_101_109_101_110_116_95_117_110_105_116_115_95_95_47_2_0, 2,5,6)
MR_decl_label5(fn__measurement_units__add_commas_1_0, 3,5,8,43,16)
MR_decl_label5(fn__measurement_units__commas_1_0, 2,3,4,5,6)
MR_decl_label10(fn__measurement_units__decimal_fraction_2_0, 4,5,10,11,12,13,14,15,6,20)
MR_decl_label4(fn__measurement_units__decimal_fraction_2_0, 21,22,23,17)
MR_decl_label8(fn__measurement_units__format_memory_3_0, 4,5,6,7,3,9,10,11)
MR_decl_label8(fn__measurement_units__format_time_1_0, 3,2,8,7,13,12,18,17)
MR_decl_label1(fn__measurement_units__memory_words_2_0, 2)
MR_decl_label2(fn__measurement_units__percent_1_0, 2,12)
MR_decl_label3(fn__measurement_units__ticks_to_time_2_0, 2,3,4)
MR_decl_label2(fn__measurement_units__time_percall_2_0, 14,4)
MR_decl_label2(__Unify___measurement_units__memory_0_0, 4,1)
MR_decl_label1(__Unify___measurement_units__percent_0_0, 4)
MR_decl_label1(__Unify___measurement_units__time_0_0, 4)
MR_decl_label4(__Compare___measurement_units__memory_0_0, 3,2,5,21)
MR_decl_label2(__Compare___measurement_units__percent_0_0, 3,2)
MR_decl_label2(__Compare___measurement_units__time_0_0, 3,2)
MR_def_extern_entry(fn__measurement_units__memory_words_2_0)
MR_def_extern_entry(fn__f_109_101_97_115_117_114_101_109_101_110_116_95_117_110_105_116_115_95_95_47_2_0)
MR_decl_static(fn__measurement_units__add_commas_1_0)
MR_def_extern_entry(fn__measurement_units__decimal_fraction_2_0)
MR_def_extern_entry(fn__measurement_units__format_memory_3_0)
MR_def_extern_entry(measurement_units__compare_memory_3_0)
MR_def_extern_entry(fn__measurement_units__percent_1_0)
MR_def_extern_entry(fn__measurement_units__format_percent_1_0)
MR_def_extern_entry(measurement_units__percent_at_or_above_threshold_2_0)
MR_def_extern_entry(fn__measurement_units__ticks_to_time_2_0)
MR_def_extern_entry(fn__measurement_units__time_percall_2_0)
MR_def_extern_entry(fn__measurement_units__format_time_1_0)
MR_def_extern_entry(fn__measurement_units__commas_1_0)
MR_def_extern_entry(fn__measurement_units__one_decimal_fraction_1_0)
MR_def_extern_entry(fn__measurement_units__two_decimal_fraction_1_0)
MR_def_extern_entry(fn__measurement_units__four_decimal_fraction_1_0)
MR_def_extern_entry(__Unify___measurement_units__memory_0_0)
MR_def_extern_entry(__Compare___measurement_units__memory_0_0)
MR_def_extern_entry(__Unify___measurement_units__memory_units_0_0)
MR_def_extern_entry(__Compare___measurement_units__memory_units_0_0)
MR_def_extern_entry(__Unify___measurement_units__percent_0_0)
MR_def_extern_entry(__Compare___measurement_units__percent_0_0)
MR_def_extern_entry(__Unify___measurement_units__time_0_0)
MR_def_extern_entry(__Compare___measurement_units__time_0_0)
MR_decl_static(measurement_units__IntroducedFrom__pred__compare_memory__171__1_2_0)

static const MR_UserClosureId
mercury_data__closure_layout__measurement_units__compare_memory_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_0 mercury_common_0[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__measurement_units__compare_memory_3_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_PseudoTypeInfo mercury_data_measurement_units__field_types_memory_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_measurement_units__field_names_memory_0_0[] = {
	"words",
	"word_size"
};

static const MR_DuFunctorDesc mercury_data_measurement_units__du_functor_desc_memory_0_0 = {
	"memory",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_measurement_units__field_types_memory_0_0,
	mercury_data_measurement_units__field_names_memory_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_measurement_units__du_stag_ordered_memory_0_0[] = {
	&mercury_data_measurement_units__du_functor_desc_memory_0_0

};

const MR_DuPtagLayout mercury_data_measurement_units__du_ptag_ordered_memory_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_measurement_units__du_stag_ordered_memory_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_measurement_units__du_name_ordered_memory_0[] = {
	&mercury_data_measurement_units__du_functor_desc_memory_0_0
};

const MR_Integer mercury_data_measurement_units__functor_number_map_memory_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_measurement_units__type_ctor_info_memory_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___measurement_units__memory_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___measurement_units__memory_0_0)),
	"measurement_units",
	"memory",
	{ (void *)mercury_data_measurement_units__du_name_ordered_memory_0 },
	{ (void *)mercury_data_measurement_units__du_ptag_ordered_memory_0 },
	1,
	4,
	mercury_data_measurement_units__functor_number_map_memory_0
};

static const MR_EnumFunctorDesc mercury_data_measurement_units__enum_functor_desc_memory_units_0_0 = {
	"units_words",
	0
};

static const MR_EnumFunctorDesc mercury_data_measurement_units__enum_functor_desc_memory_units_0_1 = {
	"units_bytes",
	1
};

const MR_EnumFunctorDescPtr mercury_data_measurement_units__enum_value_ordered_memory_units_0[] = {
	&mercury_data_measurement_units__enum_functor_desc_memory_units_0_0,
	&mercury_data_measurement_units__enum_functor_desc_memory_units_0_1
};

const MR_EnumFunctorDescPtr mercury_data_measurement_units__enum_name_ordered_memory_units_0[] = {
	&mercury_data_measurement_units__enum_functor_desc_memory_units_0_1,
	&mercury_data_measurement_units__enum_functor_desc_memory_units_0_0
};

const MR_Integer mercury_data_measurement_units__functor_number_map_memory_units_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_measurement_units__type_ctor_info_memory_units_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___measurement_units__memory_units_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___measurement_units__memory_units_0_0)),
	"measurement_units",
	"memory_units",
	{ (void *)mercury_data_measurement_units__enum_name_ordered_memory_units_0 },
	{ (void *)mercury_data_measurement_units__enum_value_ordered_memory_units_0 },
	2,
	4,
	mercury_data_measurement_units__functor_number_map_memory_units_0
};

static const MR_NotagFunctorDesc mercury_data_measurement_units__notag_functor_desc_percent_0 = {
	"percent_float",
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0,
	NULL
};

const MR_Integer mercury_data_measurement_units__functor_number_map_percent_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_measurement_units__type_ctor_info_percent_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___measurement_units__percent_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___measurement_units__percent_0_0)),
	"measurement_units",
	"percent",
	{ (void *)&mercury_data_measurement_units__notag_functor_desc_percent_0 },
	{ (void *)&mercury_data_measurement_units__notag_functor_desc_percent_0 },
	1,
	4,
	mercury_data_measurement_units__functor_number_map_percent_0
};

static const MR_NotagFunctorDesc mercury_data_measurement_units__notag_functor_desc_time_0 = {
	"time_sec",
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0,
	NULL
};

const MR_Integer mercury_data_measurement_units__functor_number_map_time_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_measurement_units__type_ctor_info_time_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___measurement_units__time_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___measurement_units__time_0_0)),
	"measurement_units",
	"time",
	{ (void *)&mercury_data_measurement_units__notag_functor_desc_time_0 },
	{ (void *)&mercury_data_measurement_units__notag_functor_desc_time_0 },
	1,
	4,
	mercury_data_measurement_units__functor_number_map_time_0
};


static const MR_UserClosureId
mercury_data__closure_layout__measurement_units__compare_memory_3_0_1 = {
{
MR_PREDICATE,
"measurement_units",
"measurement_units",
"lambda_measurement_units_m_171",
2,
0
},
"measurement_units",
"measurement_units.m",
171,
"d1;c6;"
};


MR_decl_entry(fn__float__float_1_0);

MR_BEGIN_MODULE(measurement_units_module0)
	MR_init_entry1(fn__measurement_units__memory_words_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__measurement_units__memory_words_2_0);
	MR_init_label1(fn__measurement_units__memory_words_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'memory_words'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__measurement_units__memory_words_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__measurement_units__memory_words_2_0_i2);
MR_def_label(fn__measurement_units__memory_words_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static const MR_Float mercury_float_const_0pt0000000000000000 = 0.0000000000000000;
MR_decl_entry(fn__f_102_108_111_97_116_95_95_47_2_0);

MR_BEGIN_MODULE(measurement_units_module1)
	MR_init_entry1(fn__f_109_101_97_115_117_114_101_109_101_110_116_95_117_110_105_116_115_95_95_47_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_109_101_97_115_117_114_101_109_101_110_116_95_117_110_105_116_115_95_95_47_2_0);
	MR_init_label3(fn__f_109_101_97_115_117_114_101_109_101_110_116_95_117_110_105_116_115_95_95_47_2_0,2,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '/'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_109_101_97_115_117_114_101_109_101_110_116_95_117_110_105_116_115_95_95_47_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(1) = MR_tfield(0, MR_tempr2, 0);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__f_109_101_97_115_117_114_101_109_101_110_116_95_117_110_105_116_115_95_95_47_2_0_i2);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(fn__f_109_101_97_115_117_114_101_109_101_110_116_95_117_110_105_116_115_95_95_47_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__f_109_101_97_115_117_114_101_109_101_110_116_95_117_110_105_116_115_95_95_47_2_0_i5);
MR_def_label(fn__f_109_101_97_115_117_114_101_109_101_110_116_95_117_110_105_116_115_95_95_47_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_102_108_111_97_116_95_95_47_2_0,
		fn__f_109_101_97_115_117_114_101_109_101_110_116_95_117_110_105_116_115_95_95_47_2_0_i6);
MR_def_label(fn__f_109_101_97_115_117_114_101_109_101_110_116_95_117_110_105_116_115_95_95_47_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurement_units_module2)
	MR_init_entry1(fn__measurement_units__add_commas_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__measurement_units__add_commas_1_0);
	MR_init_label5(fn__measurement_units__add_commas_1_0,3,5,8,43,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_commas'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__measurement_units__add_commas_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__measurement_units__add_commas_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__measurement_units__add_commas_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_r2 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__measurement_units__add_commas_1_0_i5);
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_tempr2, 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(fn__measurement_units__add_commas_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_r3 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(fn__measurement_units__add_commas_1_0_i8);
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_tempr3, 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_proceed();
	}
MR_def_label(fn__measurement_units__add_commas_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r3;
	MR_r4 = MR_tfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(fn__measurement_units__add_commas_1_0_i43);
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_tempr4, 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tfield(1, MR_r2, 0);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = MR_tempr3;
	MR_proceed();
	}
MR_def_label(fn__measurement_units__add_commas_1_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = MR_tfield(1, MR_r2, 0);
	MR_sv(3) = MR_tfield(1, MR_r3, 0);
	MR_r1 = MR_r4;
	MR_np_localcall_lab(fn__measurement_units__add_commas_1_0,
		fn__measurement_units__add_commas_1_0_i16);
MR_def_label(fn__measurement_units__add_commas_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 44;
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__format_3_0);
MR_decl_entry(fn__string__split_at_char_2_0);
MR_decl_entry(string__to_char_list_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
MR_decl_entry(list__reverse_2_0);
MR_decl_entry(fn__list__reverse_1_0);
MR_decl_entry(string__from_char_list_2_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(require__error_1_0);

MR_BEGIN_MODULE(measurement_units_module3)
	MR_init_entry1(fn__measurement_units__decimal_fraction_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__measurement_units__decimal_fraction_2_0);
	MR_init_label10(fn__measurement_units__decimal_fraction_2_0,4,5,10,11,12,13,14,15,6,20)
	MR_init_label4(fn__measurement_units__decimal_fraction_2_0,21,22,23,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'decimal_fraction'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__measurement_units__decimal_fraction_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(string__format_3_0,
		fn__measurement_units__decimal_fraction_2_0_i4);
MR_def_label(fn__measurement_units__decimal_fraction_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 46;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__split_at_char_2_0,
		fn__measurement_units__decimal_fraction_2_0_i5);
MR_def_label(fn__measurement_units__decimal_fraction_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__measurement_units__decimal_fraction_2_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__measurement_units__decimal_fraction_2_0_i6);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(fn__measurement_units__decimal_fraction_2_0_i6);
	}
	MR_sv(1) = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	}
	MR_np_call_localret_ent(string__to_char_list_2_0,
		fn__measurement_units__decimal_fraction_2_0_i10);
MR_def_label(fn__measurement_units__decimal_fraction_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_CHAR_CTOR_ADDR;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		fn__measurement_units__decimal_fraction_2_0_i11);
MR_def_label(fn__measurement_units__decimal_fraction_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__measurement_units__add_commas_1_0,
		fn__measurement_units__decimal_fraction_2_0_i12);
MR_def_label(fn__measurement_units__decimal_fraction_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		fn__measurement_units__decimal_fraction_2_0_i13);
MR_def_label(fn__measurement_units__decimal_fraction_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__from_char_list_2_0,
		fn__measurement_units__decimal_fraction_2_0_i14);
MR_def_label(fn__measurement_units__decimal_fraction_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__measurement_units__decimal_fraction_2_0_i15);
MR_def_label(fn__measurement_units__decimal_fraction_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__measurement_units__decimal_fraction_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__measurement_units__decimal_fraction_2_0_i17);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__measurement_units__decimal_fraction_2_0_i17);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	}
	MR_np_call_localret_ent(string__to_char_list_2_0,
		fn__measurement_units__decimal_fraction_2_0_i20);
MR_def_label(fn__measurement_units__decimal_fraction_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_CHAR_CTOR_ADDR;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		fn__measurement_units__decimal_fraction_2_0_i21);
MR_def_label(fn__measurement_units__decimal_fraction_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__measurement_units__add_commas_1_0,
		fn__measurement_units__decimal_fraction_2_0_i22);
MR_def_label(fn__measurement_units__decimal_fraction_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		fn__measurement_units__decimal_fraction_2_0_i23);
MR_def_label(fn__measurement_units__decimal_fraction_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(string__from_char_list_2_0);
MR_def_label(fn__measurement_units__decimal_fraction_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("decimal_fraction: Didn\'t split on decimal point properly", 56);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(fn__string__string_1_0);

MR_BEGIN_MODULE(measurement_units_module4)
	MR_init_entry1(fn__measurement_units__format_memory_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__measurement_units__format_memory_3_0);
	MR_init_label8(fn__measurement_units__format_memory_3_0,4,5,6,7,3,9,10,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'format_memory'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__measurement_units__format_memory_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(fn__measurement_units__format_memory_3_0_i3);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__measurement_units__format_memory_3_0_i4);
MR_def_label(fn__measurement_units__format_memory_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_float_to_word((MR_word_to_float(MR_sv(2)) * MR_word_to_float(MR_r1)));
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__string_1_0,
		fn__measurement_units__format_memory_3_0_i5);
MR_def_label(fn__measurement_units__format_memory_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("f", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__measurement_units__format_memory_3_0_i6);
MR_def_label(fn__measurement_units__format_memory_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("%.", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__measurement_units__format_memory_3_0_i7);
MR_def_label(fn__measurement_units__format_memory_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__measurement_units__decimal_fraction_2_0);
MR_def_label(fn__measurement_units__format_memory_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(0, MR_r1, 0);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(fn__string__string_1_0,
		fn__measurement_units__format_memory_3_0_i9);
MR_def_label(fn__measurement_units__format_memory_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("f", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__measurement_units__format_memory_3_0_i10);
MR_def_label(fn__measurement_units__format_memory_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("%.", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__measurement_units__format_memory_3_0_i11);
MR_def_label(fn__measurement_units__format_memory_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__measurement_units__decimal_fraction_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__require_2_0);
MR_decl_entry(private_builtin__builtin_compare_float_3_0);

MR_BEGIN_MODULE(measurement_units_module5)
	MR_init_entry1(measurement_units__compare_memory_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__measurement_units__compare_memory_3_0);
	MR_init_label1(measurement_units__compare_memory_3_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'compare_memory'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__measurement_units__compare_memory_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(measurement_units__IntroducedFrom__pred__compare_memory__171__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tempr2 = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 1);
	MR_tempr3 = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr3, 1);
	MR_sv(1) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr3, 0);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("compare_memory: word size mismatch", 34);
	}
	MR_np_call_localret_ent(require__require_2_0,
		measurement_units__compare_memory_3_0_i3);
MR_def_label(measurement_units__compare_memory_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_float_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static const MR_Float mercury_float_const_1pt0000000000000000 = 1.0000000000000000;

MR_BEGIN_MODULE(measurement_units_module6)
	MR_init_entry1(fn__measurement_units__percent_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__measurement_units__percent_1_0);
	MR_init_label2(fn__measurement_units__percent_1_0,2,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'percent'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__measurement_units__percent_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Float) 0.0000000000000000 > MR_word_to_float(MR_r1))) {
		MR_GOTO_LAB(fn__measurement_units__percent_1_0_i2);
	}
	if ((MR_word_to_float(MR_r1) <= (MR_Float) 1.0000000000000000)) {
		MR_GOTO_LAB(fn__measurement_units__percent_1_0_i12);
	}
MR_def_label(fn__measurement_units__percent_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Percentage value out of range 0.0 to 1.0 (inclusive)", 52);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(fn__measurement_units__percent_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static const MR_Float mercury_float_const_100pt00000000000000 = 100.00000000000000;

MR_BEGIN_MODULE(measurement_units_module7)
	MR_init_entry1(fn__measurement_units__format_percent_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__measurement_units__format_percent_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'format_percent'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__measurement_units__format_percent_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_float_to_word((MR_word_to_float(MR_r1) * (MR_Float) 100.00000000000000));
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("%.2f", 4);
	MR_np_tailcall_ent(string__format_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurement_units_module8)
	MR_init_entry1(measurement_units__percent_at_or_above_threshold_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__measurement_units__percent_at_or_above_threshold_2_0);
	MR_init_label2(measurement_units__percent_at_or_above_threshold_2_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'percent_at_or_above_threshold'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__measurement_units__percent_at_or_above_threshold_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 100;
	MR_np_call_localret_ent(fn__float__float_1_0,
		measurement_units__percent_at_or_above_threshold_2_0_i2);
MR_def_label(measurement_units__percent_at_or_above_threshold_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_float_to_word((MR_word_to_float(MR_sv(2)) * MR_word_to_float(MR_r1)));
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__float__float_1_0,
		measurement_units__percent_at_or_above_threshold_2_0_i3);
MR_def_label(measurement_units__percent_at_or_above_threshold_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_word_to_float(MR_sv(1)) >= MR_word_to_float(MR_r1));
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurement_units_module9)
	MR_init_entry1(fn__measurement_units__ticks_to_time_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__measurement_units__ticks_to_time_2_0);
	MR_init_label3(fn__measurement_units__ticks_to_time_2_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ticks_to_time'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__measurement_units__ticks_to_time_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__measurement_units__ticks_to_time_2_0_i2);
MR_def_label(fn__measurement_units__ticks_to_time_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) &mercury_float_const_1pt0000000000000000;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_102_108_111_97_116_95_95_47_2_0,
		fn__measurement_units__ticks_to_time_2_0_i3);
MR_def_label(fn__measurement_units__ticks_to_time_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__measurement_units__ticks_to_time_2_0_i4);
MR_def_label(fn__measurement_units__ticks_to_time_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_float_to_word((MR_word_to_float(MR_r1) * MR_word_to_float(MR_sv(1))));
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurement_units_module10)
	MR_init_entry1(fn__measurement_units__time_percall_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__measurement_units__time_percall_2_0);
	MR_init_label2(fn__measurement_units__time_percall_2_0,14,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'time_percall'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__measurement_units__time_percall_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__measurement_units__time_percall_2_0_i14);
	}
	MR_r1 = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_proceed();
MR_def_label(fn__measurement_units__time_percall_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__measurement_units__time_percall_2_0_i4);
MR_def_label(fn__measurement_units__time_percall_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_102_108_111_97_116_95_95_47_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static const MR_Float mercury_float_const_1pt0000000000000001eneg09 = 1.0000000000000001e-09;
static const MR_Float mercury_float_const_9pt9999999999999998eneg13 = 9.9999999999999998e-13;
static const MR_Float mercury_float_const_9pt9999999999999995eneg07 = 9.9999999999999995e-07;
static const MR_Float mercury_float_const_0pt0010000000000000000 = 0.0010000000000000000;

MR_BEGIN_MODULE(measurement_units_module11)
	MR_init_entry1(fn__measurement_units__format_time_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__measurement_units__format_time_1_0);
	MR_init_label8(fn__measurement_units__format_time_1_0,3,2,8,7,13,12,18,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'format_time'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__measurement_units__format_time_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r1) >= (MR_Float) 1.0000000000000001e-09)) {
		MR_GOTO_LAB(fn__measurement_units__format_time_1_0_i2);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = (MR_Word) &mercury_float_const_9pt9999999999999998eneg13;
	MR_np_call_localret_ent(fn__f_102_108_111_97_116_95_95_47_2_0,
		fn__measurement_units__format_time_1_0_i3);
MR_def_label(fn__measurement_units__format_time_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("%.1fps", 6);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(string__format_3_0);
	}
MR_def_label(fn__measurement_units__format_time_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r1) >= (MR_Float) 9.9999999999999995e-07)) {
		MR_GOTO_LAB(fn__measurement_units__format_time_1_0_i7);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = (MR_Word) &mercury_float_const_1pt0000000000000001eneg09;
	MR_np_call_localret_ent(fn__f_102_108_111_97_116_95_95_47_2_0,
		fn__measurement_units__format_time_1_0_i8);
MR_def_label(fn__measurement_units__format_time_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("%.1fns", 6);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(string__format_3_0);
	}
MR_def_label(fn__measurement_units__format_time_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r1) >= (MR_Float) 0.0010000000000000000)) {
		MR_GOTO_LAB(fn__measurement_units__format_time_1_0_i12);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = (MR_Word) &mercury_float_const_9pt9999999999999995eneg07;
	MR_np_call_localret_ent(fn__f_102_108_111_97_116_95_95_47_2_0,
		fn__measurement_units__format_time_1_0_i13);
MR_def_label(fn__measurement_units__format_time_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("%.1fus", 6);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(string__format_3_0);
	}
MR_def_label(fn__measurement_units__format_time_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r1) >= (MR_Float) 1.0000000000000000)) {
		MR_GOTO_LAB(fn__measurement_units__format_time_1_0_i17);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = (MR_Word) &mercury_float_const_0pt0010000000000000000;
	MR_np_call_localret_ent(fn__f_102_108_111_97_116_95_95_47_2_0,
		fn__measurement_units__format_time_1_0_i18);
MR_def_label(fn__measurement_units__format_time_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("%.1fms", 6);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(string__format_3_0);
	}
MR_def_label(fn__measurement_units__format_time_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("%.1fs", 5);
	MR_np_tailcall_ent(string__format_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__int_to_string_2_0);

MR_BEGIN_MODULE(measurement_units_module12)
	MR_init_entry1(fn__measurement_units__commas_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__measurement_units__commas_1_0);
	MR_init_label5(fn__measurement_units__commas_1_0,2,3,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'commas'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__measurement_units__commas_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(string__int_to_string_2_0,
		fn__measurement_units__commas_1_0_i2);
MR_def_label(fn__measurement_units__commas_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__to_char_list_2_0,
		fn__measurement_units__commas_1_0_i3);
MR_def_label(fn__measurement_units__commas_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_CHAR_CTOR_ADDR;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		fn__measurement_units__commas_1_0_i4);
MR_def_label(fn__measurement_units__commas_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__measurement_units__add_commas_1_0,
		fn__measurement_units__commas_1_0_i5);
MR_def_label(fn__measurement_units__commas_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		fn__measurement_units__commas_1_0_i6);
MR_def_label(fn__measurement_units__commas_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(string__from_char_list_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurement_units_module13)
	MR_init_entry1(fn__measurement_units__one_decimal_fraction_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__measurement_units__one_decimal_fraction_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'one_decimal_fraction'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__measurement_units__one_decimal_fraction_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("%.1f", 4);
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(fn__measurement_units__decimal_fraction_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurement_units_module14)
	MR_init_entry1(fn__measurement_units__two_decimal_fraction_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__measurement_units__two_decimal_fraction_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'two_decimal_fraction'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__measurement_units__two_decimal_fraction_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("%.2f", 4);
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(fn__measurement_units__decimal_fraction_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurement_units_module15)
	MR_init_entry1(fn__measurement_units__four_decimal_fraction_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__measurement_units__four_decimal_fraction_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'four_decimal_fraction'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__measurement_units__four_decimal_fraction_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("%.4f", 4);
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(fn__measurement_units__decimal_fraction_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurement_units_module16)
	MR_init_entry1(__Unify___measurement_units__memory_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___measurement_units__memory_0_0);
	MR_init_label2(__Unify___measurement_units__memory_0_0,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___measurement_units__memory_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___measurement_units__memory_0_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr3 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_word_to_float(MR_r1) != MR_word_to_float(MR_tempr3))) {
		MR_GOTO_LAB(__Unify___measurement_units__memory_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_tempr3 = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = (MR_r1 == MR_tempr3);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___measurement_units__memory_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___measurement_units__memory_0_0,1)
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

MR_BEGIN_MODULE(measurement_units_module17)
	MR_init_entry1(__Compare___measurement_units__memory_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___measurement_units__memory_0_0);
	MR_init_label4(__Compare___measurement_units__memory_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___measurement_units__memory_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___measurement_units__memory_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___measurement_units__memory_0_0_i2);
MR_def_label(__Compare___measurement_units__memory_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___measurement_units__memory_0_0,2)
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_float_3_0,
		__Compare___measurement_units__memory_0_0_i5);
MR_def_label(__Compare___measurement_units__memory_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___measurement_units__memory_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___measurement_units__memory_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurement_units_module18)
	MR_init_entry1(__Unify___measurement_units__memory_units_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___measurement_units__memory_units_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___measurement_units__memory_units_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurement_units_module19)
	MR_init_entry1(__Compare___measurement_units__memory_units_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___measurement_units__memory_units_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___measurement_units__memory_units_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurement_units_module20)
	MR_init_entry1(__Unify___measurement_units__percent_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___measurement_units__percent_0_0);
	MR_init_label1(__Unify___measurement_units__percent_0_0,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___measurement_units__percent_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___measurement_units__percent_0_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_word_to_float(MR_sv(1)) == MR_word_to_float(MR_sv(2)));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___measurement_units__percent_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurement_units_module21)
	MR_init_entry1(__Compare___measurement_units__percent_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___measurement_units__percent_0_0);
	MR_init_label2(__Compare___measurement_units__percent_0_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___measurement_units__percent_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___measurement_units__percent_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___measurement_units__percent_0_0_i2);
MR_def_label(__Compare___measurement_units__percent_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___measurement_units__percent_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_float_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurement_units_module22)
	MR_init_entry1(__Unify___measurement_units__time_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___measurement_units__time_0_0);
	MR_init_label1(__Unify___measurement_units__time_0_0,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___measurement_units__time_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___measurement_units__time_0_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_word_to_float(MR_sv(1)) == MR_word_to_float(MR_sv(2)));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___measurement_units__time_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurement_units_module23)
	MR_init_entry1(__Compare___measurement_units__time_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___measurement_units__time_0_0);
	MR_init_label2(__Compare___measurement_units__time_0_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___measurement_units__time_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___measurement_units__time_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___measurement_units__time_0_0_i2);
MR_def_label(__Compare___measurement_units__time_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___measurement_units__time_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_float_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurement_units_module24)
	MR_init_entry1(measurement_units__IntroducedFrom__pred__compare_memory__171__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__measurement_units__IntroducedFrom__pred__compare_memory__171__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__compare_memory__171__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(measurement_units__IntroducedFrom__pred__compare_memory__171__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__measurement_units_maybe_bunch_0(void)
{
	measurement_units_module0();
	measurement_units_module1();
	measurement_units_module2();
	measurement_units_module3();
	measurement_units_module4();
	measurement_units_module5();
	measurement_units_module6();
	measurement_units_module7();
	measurement_units_module8();
	measurement_units_module9();
	measurement_units_module10();
	measurement_units_module11();
	measurement_units_module12();
	measurement_units_module13();
	measurement_units_module14();
	measurement_units_module15();
	measurement_units_module16();
	measurement_units_module17();
	measurement_units_module18();
	measurement_units_module19();
	measurement_units_module20();
	measurement_units_module21();
	measurement_units_module22();
	measurement_units_module23();
	measurement_units_module24();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__measurement_units__init(void);
void mercury__measurement_units__init_type_tables(void);
void mercury__measurement_units__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__measurement_units__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__measurement_units__init_complexity_procs(void);
#endif

void mercury__measurement_units__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__measurement_units_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_measurement_units__type_ctor_info_memory_0,
		measurement_units__memory_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_measurement_units__type_ctor_info_memory_units_0,
		measurement_units__memory_units_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_measurement_units__type_ctor_info_percent_0,
		measurement_units__percent_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_measurement_units__type_ctor_info_time_0,
		measurement_units__time_0_0);
	mercury__measurement_units__init_debugger();
}

void mercury__measurement_units__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_measurement_units__type_ctor_info_memory_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_measurement_units__type_ctor_info_memory_units_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_measurement_units__type_ctor_info_percent_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_measurement_units__type_ctor_info_time_0);
	}
}


void mercury__measurement_units__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__measurement_units__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__measurement_units);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__measurement_units__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
