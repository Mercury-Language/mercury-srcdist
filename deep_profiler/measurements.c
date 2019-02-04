/*
** Automatically generated from `measurements.m'
** by the Mercury compiler,
** version rotd-2010-03-01, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__measurements__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 136 "../library/io.int2"
#include "io.mh"

#line 28 "measurements.c"
#line 144 "../library/io.int2"
#include "string.mh"

#line 32 "measurements.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 36 "measurements.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 40 "measurements.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 44 "measurements.c"
#line 45 "measurements.c"
#include "measurements.mh"

#line 48 "measurements.c"
#line 49 "measurements.c"
#ifndef MEASUREMENTS_DECL_GUARD
#define MEASUREMENTS_DECL_GUARD

#line 53 "measurements.c"
#line 54 "measurements.c"

#endif
#line 57 "measurements.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Integer f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Integer f1[4];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_measurements__type_ctor_info_cost_0,
	mercury_data_measurements__type_ctor_info_cs_cost_csq_0,
	mercury_data_measurements__type_ctor_info_inherit_prof_info_0,
	mercury_data_measurements__type_ctor_info_is_active_0,
	mercury_data_measurements__type_ctor_info_own_prof_info_0,
	mercury_data_measurements__type_ctor_info_parallelism_amount_0,
	mercury_data_measurements__type_ctor_info_proc_cost_csq_0;
MR_decl_label3(measurements__cs_cost_to_proc_cost_3_0, 2,3,5)
MR_decl_label4(measurements__decompress_profile_10_0, 3,4,5,6)
MR_decl_label1(measurements__is_zero_inherit_prof_info_1_0, 1)
MR_decl_label5(measurements__is_zero_own_prof_info_1_0, 3,12,18,23,1)
MR_decl_label1(measurements__sub_computation_parallelism_3_0, 2)
MR_decl_label1(measurements__sub_computation_parallelism_4_0, 2)
MR_decl_label10(fn__measurements__add_inherit_to_own_2_0, 3,4,5,6,7,8,2,13,14,15)
MR_decl_label4(fn__measurements__add_own_to_inherit_2_0, 3,5,7,9)
MR_decl_label10(fn__measurements__add_own_to_own_2_0, 5,6,12,13,14,15,16,17,11,22)
MR_decl_label10(fn__measurements__add_own_to_own_2_0, 23,24,25,26,27,28,29,30,31,32)
MR_decl_label4(fn__measurements__allocs_1_0, 3,4,5,6)
MR_decl_label1(fn__measurements__build_cs_cost_csq_2_0, 2)
MR_decl_label1(fn__measurements__build_proc_cost_csq_3_0, 2)
MR_decl_label3(fn__measurements__calls_1_0, 3,5,6)
MR_decl_label3(fn__measurements__callseqs_1_0, 3,5,6)
MR_decl_label7(fn__measurements__compress_profile_1_0, 3,4,15,22,23,32,2)
MR_decl_label3(fn__measurements__compress_profile_8_0, 2,13,9)
MR_decl_label6(fn__measurements__compute_is_active_1_0, 4,9,11,13,3,2)
MR_decl_label1(fn__measurements__cs_cost_get_percall_1_0, 3)
MR_decl_label1(fn__measurements__cs_cost_get_total_1_0, 3)
MR_decl_label7(fn__measurements__cs_cost_per_proc_call_2_0, 2,3,6,7,5,10,11)
MR_decl_label1(fn__measurements__excps_1_0, 6)
MR_decl_label2(fn__measurements__fails_1_0, 5,6)
MR_decl_label10(fn__measurements__own_to_string_1_0, 3,4,5,6,7,8,9,10,11,12)
MR_decl_label10(fn__measurements__own_to_string_1_0, 13,14,15,16,17,18,19,20,21,22)
MR_decl_label10(fn__measurements__own_to_string_1_0, 23,24,25,26,28,29,30,31,32,33)
MR_decl_label10(fn__measurements__own_to_string_1_0, 34,35,36,37,38,39,40,41,42,44)
MR_decl_label10(fn__measurements__own_to_string_1_0, 45,46,47,48,49,50,51,52,53,54)
MR_decl_label9(fn__measurements__own_to_string_1_0, 57,58,59,60,61,62,63,64,65)
MR_decl_label2(fn__measurements__proc_cost_get_total_1_0, 2,4)
MR_decl_label3(fn__measurements__quanta_1_0, 3,4,6)
MR_decl_label1(fn__measurements__redos_1_0, 6)
MR_decl_label1(fn__measurements__some_parallelism_1_0, 13)
MR_decl_label4(fn__measurements__subtract_own_from_inherit_2_0, 3,5,7,9)
MR_decl_label4(fn__measurements__words_1_0, 3,4,5,6)
MR_decl_label3(__Unify___measurements__cost_0_0, 12,5,1)
MR_decl_label2(__Unify___measurements__cs_cost_csq_0_0, 6,1)
MR_decl_label2(__Unify___measurements__inherit_prof_info_0_0, 4,1)
MR_decl_label6(__Unify___measurements__own_prof_info_0_0, 5,7,9,11,17,1)
MR_decl_label1(__Unify___measurements__parallelism_amount_0_0, 4)
MR_decl_label2(__Unify___measurements__proc_cost_csq_0_0, 6,1)
MR_decl_label5(__Compare___measurements__cost_0_0, 3,2,19,7,5)
MR_decl_label4(__Compare___measurements__cs_cost_csq_0_0, 3,2,5,21)
MR_decl_label6(__Compare___measurements__inherit_prof_info_0_0, 3,2,5,9,13,37)
MR_decl_label10(__Compare___measurements__own_prof_info_0_0, 3,5,9,13,17,21,25,29,33,51)
MR_decl_label10(__Compare___measurements__own_prof_info_0_0, 54,56,60,64,68,82,86,88,92,96)
MR_decl_label7(__Compare___measurements__own_prof_info_0_0, 103,108,112,113,115,119,250)
MR_decl_label2(__Compare___measurements__parallelism_amount_0_0, 3,2)
MR_decl_label5(__Compare___measurements__proc_cost_csq_0_0, 3,2,5,9,29)
MR_def_extern_entry(fn__measurements__calls_1_0)
MR_def_extern_entry(fn__measurements__exits_1_0)
MR_def_extern_entry(fn__measurements__fails_1_0)
MR_def_extern_entry(fn__measurements__redos_1_0)
MR_def_extern_entry(fn__measurements__excps_1_0)
MR_def_extern_entry(fn__measurements__quanta_1_0)
MR_def_extern_entry(fn__measurements__callseqs_1_0)
MR_def_extern_entry(fn__measurements__allocs_1_0)
MR_def_extern_entry(fn__measurements__words_1_0)
MR_def_extern_entry(fn__measurements__zero_own_prof_info_0_0)
MR_def_extern_entry(measurements__is_zero_own_prof_info_1_0)
MR_def_extern_entry(fn__measurements__inherit_quanta_1_0)
MR_def_extern_entry(fn__measurements__inherit_callseqs_1_0)
MR_def_extern_entry(fn__measurements__inherit_allocs_1_0)
MR_def_extern_entry(fn__measurements__inherit_words_1_0)
MR_def_extern_entry(fn__measurements__zero_inherit_prof_info_0_0)
MR_def_extern_entry(measurements__is_zero_inherit_prof_info_1_0)
MR_def_extern_entry(fn__measurements__add_inherit_to_inherit_2_0)
MR_def_extern_entry(fn__measurements__add_own_to_inherit_2_0)
MR_def_extern_entry(fn__measurements__subtract_own_from_inherit_2_0)
MR_def_extern_entry(fn__measurements__subtract_inherit_from_inherit_2_0)
MR_def_extern_entry(fn__measurements__compress_profile_8_0)
MR_def_extern_entry(fn__measurements__add_inherit_to_own_2_0)
MR_def_extern_entry(fn__measurements__add_own_to_own_2_0)
MR_def_extern_entry(fn__measurements__sum_own_infos_1_0)
MR_def_extern_entry(fn__measurements__sum_inherit_infos_1_0)
MR_def_extern_entry(fn__measurements__compress_profile_1_0)
MR_def_extern_entry(measurements__decompress_profile_10_0)
MR_def_extern_entry(fn__measurements__own_to_string_1_0)
MR_def_extern_entry(fn__measurements__compute_is_active_1_0)
MR_def_extern_entry(fn__measurements__build_proc_cost_csq_3_0)
MR_def_extern_entry(fn__measurements__build_cs_cost_csq_2_0)
MR_def_extern_entry(fn__measurements__build_cs_cost_csq_percall_2_0)
MR_def_extern_entry(fn__measurements__zero_cs_cost_0_0)
MR_def_extern_entry(fn__measurements__proc_cost_get_total_1_0)
MR_def_extern_entry(fn__measurements__proc_cost_get_calls_total_1_0)
MR_def_extern_entry(fn__measurements__proc_cost_get_calls_nonrec_1_0)
MR_def_extern_entry(fn__measurements__proc_cost_get_calls_rec_1_0)
MR_def_extern_entry(fn__measurements__cs_cost_get_total_1_0)
MR_def_extern_entry(fn__measurements__cs_cost_get_percall_1_0)
MR_def_extern_entry(fn__measurements__cs_cost_get_calls_1_0)
MR_def_extern_entry(measurements__cs_cost_to_proc_cost_3_0)
MR_def_extern_entry(fn__measurements__cs_cost_per_proc_call_2_0)
MR_def_extern_entry(fn__measurements__no_parallelism_0_0)
MR_def_extern_entry(fn__measurements__some_parallelism_1_0)
MR_def_extern_entry(measurements__sub_computation_parallelism_4_0)
MR_def_extern_entry(measurements__sub_computation_parallelism_3_0)
MR_def_extern_entry(measurements__exceeded_desired_parallelism_2_0)
MR_decl_static(__Unify___measurements__cost_0_0)
MR_decl_static(__Compare___measurements__cost_0_0)
MR_def_extern_entry(__Unify___measurements__cs_cost_csq_0_0)
MR_def_extern_entry(__Compare___measurements__cs_cost_csq_0_0)
MR_def_extern_entry(__Unify___measurements__inherit_prof_info_0_0)
MR_def_extern_entry(__Compare___measurements__inherit_prof_info_0_0)
MR_def_extern_entry(__Unify___measurements__is_active_0_0)
MR_def_extern_entry(__Compare___measurements__is_active_0_0)
MR_def_extern_entry(__Unify___measurements__own_prof_info_0_0)
MR_def_extern_entry(__Compare___measurements__own_prof_info_0_0)
MR_def_extern_entry(__Unify___measurements__parallelism_amount_0_0)
MR_def_extern_entry(__Compare___measurements__parallelism_amount_0_0)
MR_def_extern_entry(__Unify___measurements__proc_cost_csq_0_0)
MR_def_extern_entry(__Compare___measurements__proc_cost_csq_0_0)

static const struct mercury_type_0 mercury_common_0[1] =
{
{
{
0,
0,
0
}
},
};

static const struct mercury_type_1 mercury_common_1[1] =
{
{
{
0,
0,
0,
0
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__measurements__sum_own_infos_1_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_measurements__type_ctor_info_own_prof_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__measurements__sum_inherit_infos_1_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_measurements__type_ctor_info_inherit_prof_info_0;
static const struct mercury_type_2 mercury_common_2[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__fn__measurements__sum_own_infos_1_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(measurements, own_prof_info),
MR_CTOR0_ADDR(measurements, own_prof_info),
MR_CTOR0_ADDR(measurements, own_prof_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__measurements__sum_inherit_infos_1_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(measurements, inherit_prof_info),
MR_CTOR0_ADDR(measurements, inherit_prof_info),
MR_CTOR0_ADDR(measurements, inherit_prof_info)
}
},
};

static const struct mercury_type_3 mercury_common_3[2] =
{
{
MR_COMMON(2,0),
MR_ENTRY_AP(fn__measurements__add_own_to_own_2_0),
0
},
{
MR_COMMON(2,1),
MR_ENTRY_AP(fn__measurements__add_inherit_to_inherit_2_0),
0
},
};

static const MR_Float mercury_float_const_0pt0000000000000000 = 0.0000000000000000;
static const struct mercury_type_4 mercury_common_4[1] =
{
{
(MR_Word *) &mercury_float_const_0pt0000000000000000
},
};

static const struct mercury_type_5 mercury_common_5[1] =
{
{
{
(MR_Word *) &mercury_float_const_0pt0000000000000000,
MR_TAG_COMMON(0,4,0)
}
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;

const MR_PseudoTypeInfo mercury_data_measurements__field_types_cost_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0
};

static const MR_DuFunctorDesc mercury_data_measurements__du_functor_desc_cost_0_0 = {
	"cost_per_call",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_measurements__field_types_cost_0_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_measurements__field_types_cost_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0
};

static const MR_DuFunctorDesc mercury_data_measurements__du_functor_desc_cost_0_1 = {
	"cost_total",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_measurements__field_types_cost_0_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_measurements__du_stag_ordered_cost_0_0[] = {
	&mercury_data_measurements__du_functor_desc_cost_0_0

};

const MR_DuFunctorDescPtr mercury_data_measurements__du_stag_ordered_cost_0_1[] = {
	&mercury_data_measurements__du_functor_desc_cost_0_1

};

const MR_DuPtagLayout mercury_data_measurements__du_ptag_ordered_cost_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_measurements__du_stag_ordered_cost_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_measurements__du_stag_ordered_cost_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_measurements__du_name_ordered_cost_0[] = {
	&mercury_data_measurements__du_functor_desc_cost_0_0,
	&mercury_data_measurements__du_functor_desc_cost_0_1
};

const MR_Integer mercury_data_measurements__functor_number_map_cost_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_measurements__type_ctor_info_cost_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___measurements__cost_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___measurements__cost_0_0)),
	"measurements",
	"cost",
	{ (void *)mercury_data_measurements__du_name_ordered_cost_0 },
	{ (void *)mercury_data_measurements__du_ptag_ordered_cost_0 },
	2,
	4,
	mercury_data_measurements__functor_number_map_cost_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_measurements__type_ctor_info_cost_0;

const MR_PseudoTypeInfo mercury_data_measurements__field_types_cs_cost_csq_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0,
	(MR_PseudoTypeInfo) &mercury_data_measurements__type_ctor_info_cost_0
};

const MR_ConstString mercury_data_measurements__field_names_cs_cost_csq_0_0[] = {
	"cscc_calls",
	"cscc_csq_cost"
};

static const MR_DuFunctorDesc mercury_data_measurements__du_functor_desc_cs_cost_csq_0_0 = {
	"cs_cost_csq",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_measurements__field_types_cs_cost_csq_0_0,
	mercury_data_measurements__field_names_cs_cost_csq_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_measurements__du_stag_ordered_cs_cost_csq_0_0[] = {
	&mercury_data_measurements__du_functor_desc_cs_cost_csq_0_0

};

const MR_DuPtagLayout mercury_data_measurements__du_ptag_ordered_cs_cost_csq_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_measurements__du_stag_ordered_cs_cost_csq_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_measurements__du_name_ordered_cs_cost_csq_0[] = {
	&mercury_data_measurements__du_functor_desc_cs_cost_csq_0_0
};

const MR_Integer mercury_data_measurements__functor_number_map_cs_cost_csq_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_measurements__type_ctor_info_cs_cost_csq_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___measurements__cs_cost_csq_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___measurements__cs_cost_csq_0_0)),
	"measurements",
	"cs_cost_csq",
	{ (void *)mercury_data_measurements__du_name_ordered_cs_cost_csq_0 },
	{ (void *)mercury_data_measurements__du_ptag_ordered_cs_cost_csq_0 },
	1,
	4,
	mercury_data_measurements__functor_number_map_cs_cost_csq_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_PseudoTypeInfo mercury_data_measurements__field_types_inherit_prof_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_measurements__field_names_inherit_prof_info_0_0[] = {
	"ipo_quanta",
	"ipo_callseqs",
	"ipo_allocs",
	"ipo_words"
};

static const MR_DuFunctorDesc mercury_data_measurements__du_functor_desc_inherit_prof_info_0_0 = {
	"inherit_prof_info",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_measurements__field_types_inherit_prof_info_0_0,
	mercury_data_measurements__field_names_inherit_prof_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_measurements__du_stag_ordered_inherit_prof_info_0_0[] = {
	&mercury_data_measurements__du_functor_desc_inherit_prof_info_0_0

};

const MR_DuPtagLayout mercury_data_measurements__du_ptag_ordered_inherit_prof_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_measurements__du_stag_ordered_inherit_prof_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_measurements__du_name_ordered_inherit_prof_info_0[] = {
	&mercury_data_measurements__du_functor_desc_inherit_prof_info_0_0
};

const MR_Integer mercury_data_measurements__functor_number_map_inherit_prof_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_measurements__type_ctor_info_inherit_prof_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___measurements__inherit_prof_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___measurements__inherit_prof_info_0_0)),
	"measurements",
	"inherit_prof_info",
	{ (void *)mercury_data_measurements__du_name_ordered_inherit_prof_info_0 },
	{ (void *)mercury_data_measurements__du_ptag_ordered_inherit_prof_info_0 },
	1,
	4,
	mercury_data_measurements__functor_number_map_inherit_prof_info_0
};

static const MR_EnumFunctorDesc mercury_data_measurements__enum_functor_desc_is_active_0_0 = {
	"is_active",
	0
};

static const MR_EnumFunctorDesc mercury_data_measurements__enum_functor_desc_is_active_0_1 = {
	"is_not_active",
	1
};

const MR_EnumFunctorDescPtr mercury_data_measurements__enum_value_ordered_is_active_0[] = {
	&mercury_data_measurements__enum_functor_desc_is_active_0_0,
	&mercury_data_measurements__enum_functor_desc_is_active_0_1
};

const MR_EnumFunctorDescPtr mercury_data_measurements__enum_name_ordered_is_active_0[] = {
	&mercury_data_measurements__enum_functor_desc_is_active_0_0,
	&mercury_data_measurements__enum_functor_desc_is_active_0_1
};

const MR_Integer mercury_data_measurements__functor_number_map_is_active_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_measurements__type_ctor_info_is_active_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___measurements__is_active_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___measurements__is_active_0_0)),
	"measurements",
	"is_active",
	{ (void *)mercury_data_measurements__enum_name_ordered_is_active_0 },
	{ (void *)mercury_data_measurements__enum_value_ordered_is_active_0 },
	2,
	4,
	mercury_data_measurements__functor_number_map_is_active_0
};

const MR_PseudoTypeInfo mercury_data_measurements__field_types_own_prof_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_measurements__field_names_own_prof_info_0_0[] = {
	"opa_exits",
	"opa_fails",
	"opa_redos",
	"opa_excps",
	"opa_quanta",
	"opa_callseqs",
	"opa_allocs",
	"opa_words"
};

static const MR_DuFunctorDesc mercury_data_measurements__du_functor_desc_own_prof_info_0_0 = {
	"own_prof_all",
	8,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_measurements__field_types_own_prof_info_0_0,
	mercury_data_measurements__field_names_own_prof_info_0_0,
	NULL
};

const MR_PseudoTypeInfo mercury_data_measurements__field_types_own_prof_info_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_measurements__field_names_own_prof_info_0_1[] = {
	"opd_exits",
	"opd_quanta",
	"opd_callseqs",
	"opd_allocs",
	"opd_words"
};

static const MR_DuFunctorDesc mercury_data_measurements__du_functor_desc_own_prof_info_0_1 = {
	"own_prof_det",
	5,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_measurements__field_types_own_prof_info_0_1,
	mercury_data_measurements__field_names_own_prof_info_0_1,
	NULL
};

const MR_PseudoTypeInfo mercury_data_measurements__field_types_own_prof_info_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_measurements__field_names_own_prof_info_0_2[] = {
	"opfd_exits",
	"opfd_callseqs",
	"opfd_allocs",
	"opfd_words"
};

static const MR_DuFunctorDesc mercury_data_measurements__du_functor_desc_own_prof_info_0_2 = {
	"own_prof_fast_det",
	4,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_measurements__field_types_own_prof_info_0_2,
	mercury_data_measurements__field_names_own_prof_info_0_2,
	NULL
};

const MR_PseudoTypeInfo mercury_data_measurements__field_types_own_prof_info_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_measurements__field_names_own_prof_info_0_3[] = {
	"opfns_exits",
	"opfns_fails",
	"opfns_callseqs"
};

static const MR_DuFunctorDesc mercury_data_measurements__du_functor_desc_own_prof_info_0_3 = {
	"own_prof_fast_nomem_semi",
	3,
	0,
	MR_SECTAG_NONE,
	3,
	-1,
	3,
	(MR_PseudoTypeInfo *) mercury_data_measurements__field_types_own_prof_info_0_3,
	mercury_data_measurements__field_names_own_prof_info_0_3,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_measurements__du_stag_ordered_own_prof_info_0_0[] = {
	&mercury_data_measurements__du_functor_desc_own_prof_info_0_0

};

const MR_DuFunctorDescPtr mercury_data_measurements__du_stag_ordered_own_prof_info_0_1[] = {
	&mercury_data_measurements__du_functor_desc_own_prof_info_0_1

};

const MR_DuFunctorDescPtr mercury_data_measurements__du_stag_ordered_own_prof_info_0_2[] = {
	&mercury_data_measurements__du_functor_desc_own_prof_info_0_2

};

const MR_DuFunctorDescPtr mercury_data_measurements__du_stag_ordered_own_prof_info_0_3[] = {
	&mercury_data_measurements__du_functor_desc_own_prof_info_0_3

};

const MR_DuPtagLayout mercury_data_measurements__du_ptag_ordered_own_prof_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_measurements__du_stag_ordered_own_prof_info_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_measurements__du_stag_ordered_own_prof_info_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_measurements__du_stag_ordered_own_prof_info_0_2 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_measurements__du_stag_ordered_own_prof_info_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_measurements__du_name_ordered_own_prof_info_0[] = {
	&mercury_data_measurements__du_functor_desc_own_prof_info_0_0,
	&mercury_data_measurements__du_functor_desc_own_prof_info_0_1,
	&mercury_data_measurements__du_functor_desc_own_prof_info_0_2,
	&mercury_data_measurements__du_functor_desc_own_prof_info_0_3
};

const MR_Integer mercury_data_measurements__functor_number_map_own_prof_info_0[] = {
	0,
	1,
	2,
	3 };
	
const MR_TypeCtorInfo_Struct mercury_data_measurements__type_ctor_info_own_prof_info_0 = {
	0,
	13,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___measurements__own_prof_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___measurements__own_prof_info_0_0)),
	"measurements",
	"own_prof_info",
	{ (void *)mercury_data_measurements__du_name_ordered_own_prof_info_0 },
	{ (void *)mercury_data_measurements__du_ptag_ordered_own_prof_info_0 },
	4,
	4,
	mercury_data_measurements__functor_number_map_own_prof_info_0
};

static const MR_NotagFunctorDesc mercury_data_measurements__notag_functor_desc_parallelism_amount_0 = {
	"parallelism_amount",
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0,
	"pa_likely"
};

const MR_Integer mercury_data_measurements__functor_number_map_parallelism_amount_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_measurements__type_ctor_info_parallelism_amount_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___measurements__parallelism_amount_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___measurements__parallelism_amount_0_0)),
	"measurements",
	"parallelism_amount",
	{ (void *)&mercury_data_measurements__notag_functor_desc_parallelism_amount_0 },
	{ (void *)&mercury_data_measurements__notag_functor_desc_parallelism_amount_0 },
	1,
	4,
	mercury_data_measurements__functor_number_map_parallelism_amount_0
};

const MR_PseudoTypeInfo mercury_data_measurements__field_types_proc_cost_csq_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_measurements__type_ctor_info_cost_0
};

const MR_ConstString mercury_data_measurements__field_names_proc_cost_csq_0_0[] = {
	"pcc_nr_calls",
	"pcc_r_calls",
	"pcc_csq"
};

static const MR_DuFunctorDesc mercury_data_measurements__du_functor_desc_proc_cost_csq_0_0 = {
	"proc_cost_csq",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_measurements__field_types_proc_cost_csq_0_0,
	mercury_data_measurements__field_names_proc_cost_csq_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_measurements__du_stag_ordered_proc_cost_csq_0_0[] = {
	&mercury_data_measurements__du_functor_desc_proc_cost_csq_0_0

};

const MR_DuPtagLayout mercury_data_measurements__du_ptag_ordered_proc_cost_csq_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_measurements__du_stag_ordered_proc_cost_csq_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_measurements__du_name_ordered_proc_cost_csq_0[] = {
	&mercury_data_measurements__du_functor_desc_proc_cost_csq_0_0
};

const MR_Integer mercury_data_measurements__functor_number_map_proc_cost_csq_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_measurements__type_ctor_info_proc_cost_csq_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___measurements__proc_cost_csq_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___measurements__proc_cost_csq_0_0)),
	"measurements",
	"proc_cost_csq",
	{ (void *)mercury_data_measurements__du_name_ordered_proc_cost_csq_0 },
	{ (void *)mercury_data_measurements__du_ptag_ordered_proc_cost_csq_0 },
	1,
	4,
	mercury_data_measurements__functor_number_map_proc_cost_csq_0
};


static const MR_UserClosureId
mercury_data__closure_layout__fn__measurements__sum_inherit_infos_1_0_1 = {
{
MR_FUNCTION,
"measurements",
"measurements",
"add_inherit_to_inherit",
3,
0
},
"measurements",
"measurements.m",
359,
"d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__measurements__sum_own_infos_1_0_1 = {
{
MR_FUNCTION,
"measurements",
"measurements",
"add_own_to_own",
3,
0
},
"measurements",
"measurements.m",
356,
"d1;c3;"
};



MR_BEGIN_MODULE(measurements_module0)
	MR_init_entry1(fn__measurements__calls_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__measurements__calls_1_0);
	MR_init_label3(fn__measurements__calls_1_0,3,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'calls'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__measurements__calls_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__measurements__calls_1_0_i3) MR_AND
		MR_LABEL_AP(fn__measurements__calls_1_0_i5) MR_AND
		MR_LABEL_AP(fn__measurements__calls_1_0_i5) MR_AND
		MR_LABEL_AP(fn__measurements__calls_1_0_i6));
MR_def_label(fn__measurements__calls_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((((MR_Integer) MR_tfield(0, MR_r1, 0) + (MR_Integer) MR_tfield(0, MR_r1, 1)) + (MR_Integer) MR_tfield(0, MR_r1, 3)) - (MR_Integer) MR_tfield(0, MR_r1, 2));
	MR_proceed();
MR_def_label(fn__measurements__calls_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_mask_field(MR_r1, 0);
	MR_proceed();
MR_def_label(fn__measurements__calls_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_tfield(3, MR_r1, 0) + (MR_Integer) MR_tfield(3, MR_r1, 1));
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module1)
	MR_init_entry1(fn__measurements__exits_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__measurements__exits_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'exits'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__measurements__exits_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_mask_field(MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module2)
	MR_init_entry1(fn__measurements__fails_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__measurements__fails_1_0);
	MR_init_label2(fn__measurements__fails_1_0,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fails'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__measurements__fails_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__measurements__fails_1_0_i6) MR_AND
		MR_LABEL_AP(fn__measurements__fails_1_0_i5) MR_AND
		MR_LABEL_AP(fn__measurements__fails_1_0_i5) MR_AND
		MR_LABEL_AP(fn__measurements__fails_1_0_i6));
MR_def_label(fn__measurements__fails_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__measurements__fails_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_mask_field(MR_r1, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module3)
	MR_init_entry1(fn__measurements__redos_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__measurements__redos_1_0);
	MR_init_label1(fn__measurements__redos_1_0,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'redos'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__measurements__redos_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_r1),0)) {
		MR_GOTO_LAB(fn__measurements__redos_1_0_i6);
	}
	MR_r1 = MR_tfield(0, MR_r1, 2);
	MR_proceed();
MR_def_label(fn__measurements__redos_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module4)
	MR_init_entry1(fn__measurements__excps_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__measurements__excps_1_0);
	MR_init_label1(fn__measurements__excps_1_0,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'excps'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__measurements__excps_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_r1),0)) {
		MR_GOTO_LAB(fn__measurements__excps_1_0_i6);
	}
	MR_r1 = MR_tfield(0, MR_r1, 3);
	MR_proceed();
MR_def_label(fn__measurements__excps_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module5)
	MR_init_entry1(fn__measurements__quanta_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__measurements__quanta_1_0);
	MR_init_label3(fn__measurements__quanta_1_0,3,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'quanta'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__measurements__quanta_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__measurements__quanta_1_0_i3) MR_AND
		MR_LABEL_AP(fn__measurements__quanta_1_0_i4) MR_AND
		MR_LABEL_AP(fn__measurements__quanta_1_0_i6) MR_AND
		MR_LABEL_AP(fn__measurements__quanta_1_0_i6));
MR_def_label(fn__measurements__quanta_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 4);
	MR_proceed();
MR_def_label(fn__measurements__quanta_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_proceed();
MR_def_label(fn__measurements__quanta_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module6)
	MR_init_entry1(fn__measurements__callseqs_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__measurements__callseqs_1_0);
	MR_init_label3(fn__measurements__callseqs_1_0,3,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'callseqs'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__measurements__callseqs_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__measurements__callseqs_1_0_i3) MR_AND
		MR_LABEL_AP(fn__measurements__callseqs_1_0_i6) MR_AND
		MR_LABEL_AP(fn__measurements__callseqs_1_0_i5) MR_AND
		MR_LABEL_AP(fn__measurements__callseqs_1_0_i6));
MR_def_label(fn__measurements__callseqs_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 5);
	MR_proceed();
MR_def_label(fn__measurements__callseqs_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(2, MR_r1, 1);
	MR_proceed();
MR_def_label(fn__measurements__callseqs_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_mask_field(MR_r1, 2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module7)
	MR_init_entry1(fn__measurements__allocs_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__measurements__allocs_1_0);
	MR_init_label4(fn__measurements__allocs_1_0,3,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'allocs'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__measurements__allocs_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__measurements__allocs_1_0_i3) MR_AND
		MR_LABEL_AP(fn__measurements__allocs_1_0_i4) MR_AND
		MR_LABEL_AP(fn__measurements__allocs_1_0_i5) MR_AND
		MR_LABEL_AP(fn__measurements__allocs_1_0_i6));
MR_def_label(fn__measurements__allocs_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 6);
	MR_proceed();
MR_def_label(fn__measurements__allocs_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 3);
	MR_proceed();
MR_def_label(fn__measurements__allocs_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(2, MR_r1, 2);
	MR_proceed();
MR_def_label(fn__measurements__allocs_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module8)
	MR_init_entry1(fn__measurements__words_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__measurements__words_1_0);
	MR_init_label4(fn__measurements__words_1_0,3,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'words'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__measurements__words_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__measurements__words_1_0_i3) MR_AND
		MR_LABEL_AP(fn__measurements__words_1_0_i4) MR_AND
		MR_LABEL_AP(fn__measurements__words_1_0_i5) MR_AND
		MR_LABEL_AP(fn__measurements__words_1_0_i6));
MR_def_label(fn__measurements__words_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 7);
	MR_proceed();
MR_def_label(fn__measurements__words_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 4);
	MR_proceed();
MR_def_label(fn__measurements__words_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(2, MR_r1, 3);
	MR_proceed();
MR_def_label(fn__measurements__words_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module9)
	MR_init_entry1(fn__measurements__zero_own_prof_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__measurements__zero_own_prof_info_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'zero_own_prof_info'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__measurements__zero_own_prof_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module10)
	MR_init_entry1(measurements__is_zero_own_prof_info_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__measurements__is_zero_own_prof_info_1_0);
	MR_init_label5(measurements__is_zero_own_prof_info_1_0,3,12,18,23,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_zero_own_prof_info'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__measurements__is_zero_own_prof_info_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(measurements__is_zero_own_prof_info_1_0_i3) MR_AND
		MR_LABEL_AP(measurements__is_zero_own_prof_info_1_0_i12) MR_AND
		MR_LABEL_AP(measurements__is_zero_own_prof_info_1_0_i18) MR_AND
		MR_LABEL_AP(measurements__is_zero_own_prof_info_1_0_i23));
MR_def_label(measurements__is_zero_own_prof_info_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 0);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(measurements__is_zero_own_prof_info_1_0_i1);
	}
	MR_r2 = MR_tfield(0, MR_r1, 1);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(measurements__is_zero_own_prof_info_1_0_i1);
	}
	MR_r2 = MR_tfield(0, MR_r1, 2);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(measurements__is_zero_own_prof_info_1_0_i1);
	}
	MR_r2 = MR_tfield(0, MR_r1, 3);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(measurements__is_zero_own_prof_info_1_0_i1);
	}
	MR_r2 = MR_tfield(0, MR_r1, 4);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(measurements__is_zero_own_prof_info_1_0_i1);
	}
	MR_r2 = MR_tfield(0, MR_r1, 5);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(measurements__is_zero_own_prof_info_1_0_i1);
	}
	MR_r2 = MR_tfield(0, MR_r1, 6);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(measurements__is_zero_own_prof_info_1_0_i1);
	}
	MR_r2 = MR_tfield(0, MR_r1, 7);
	MR_r1 = ((MR_Integer) MR_r2 == (MR_Integer) 0);
	MR_proceed();
MR_def_label(measurements__is_zero_own_prof_info_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(measurements__is_zero_own_prof_info_1_0_i1);
	}
	MR_r2 = MR_tfield(1, MR_r1, 1);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(measurements__is_zero_own_prof_info_1_0_i1);
	}
	MR_r2 = MR_tfield(1, MR_r1, 2);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(measurements__is_zero_own_prof_info_1_0_i1);
	}
	MR_r2 = MR_tfield(1, MR_r1, 3);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(measurements__is_zero_own_prof_info_1_0_i1);
	}
	MR_r2 = MR_tfield(1, MR_r1, 4);
	MR_r1 = ((MR_Integer) MR_r2 == (MR_Integer) 0);
	MR_proceed();
MR_def_label(measurements__is_zero_own_prof_info_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(2, MR_r1, 0);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(measurements__is_zero_own_prof_info_1_0_i1);
	}
	MR_r2 = MR_tfield(2, MR_r1, 1);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(measurements__is_zero_own_prof_info_1_0_i1);
	}
	MR_r2 = MR_tfield(2, MR_r1, 2);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(measurements__is_zero_own_prof_info_1_0_i1);
	}
	MR_r2 = MR_tfield(2, MR_r1, 3);
	MR_r1 = ((MR_Integer) MR_r2 == (MR_Integer) 0);
	MR_proceed();
MR_def_label(measurements__is_zero_own_prof_info_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(3, MR_r1, 0);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(measurements__is_zero_own_prof_info_1_0_i1);
	}
	MR_r2 = MR_tfield(3, MR_r1, 1);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(measurements__is_zero_own_prof_info_1_0_i1);
	}
	MR_r2 = MR_tfield(3, MR_r1, 2);
	MR_r1 = ((MR_Integer) MR_r2 == (MR_Integer) 0);
	MR_proceed();
MR_def_label(measurements__is_zero_own_prof_info_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module11)
	MR_init_entry1(fn__measurements__inherit_quanta_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__measurements__inherit_quanta_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'inherit_quanta'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__measurements__inherit_quanta_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module12)
	MR_init_entry1(fn__measurements__inherit_callseqs_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__measurements__inherit_callseqs_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'inherit_callseqs'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__measurements__inherit_callseqs_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module13)
	MR_init_entry1(fn__measurements__inherit_allocs_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__measurements__inherit_allocs_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'inherit_allocs'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__measurements__inherit_allocs_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module14)
	MR_init_entry1(fn__measurements__inherit_words_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__measurements__inherit_words_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'inherit_words'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__measurements__inherit_words_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 3);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module15)
	MR_init_entry1(fn__measurements__zero_inherit_prof_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__measurements__zero_inherit_prof_info_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'zero_inherit_prof_info'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__measurements__zero_inherit_prof_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module16)
	MR_init_entry1(measurements__is_zero_inherit_prof_info_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__measurements__is_zero_inherit_prof_info_1_0);
	MR_init_label1(measurements__is_zero_inherit_prof_info_1_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_zero_inherit_prof_info'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__measurements__is_zero_inherit_prof_info_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 0);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(measurements__is_zero_inherit_prof_info_1_0_i1);
	}
	MR_r2 = MR_tfield(0, MR_r1, 1);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(measurements__is_zero_inherit_prof_info_1_0_i1);
	}
	MR_r2 = MR_tfield(0, MR_r1, 2);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(measurements__is_zero_inherit_prof_info_1_0_i1);
	}
	MR_r2 = MR_tfield(0, MR_r1, 3);
	MR_r1 = ((MR_Integer) MR_r2 == (MR_Integer) 0);
	MR_proceed();
MR_def_label(measurements__is_zero_inherit_prof_info_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module17)
	MR_init_entry1(fn__measurements__add_inherit_to_inherit_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__measurements__add_inherit_to_inherit_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_inherit_to_inherit'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__measurements__add_inherit_to_inherit_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = ((MR_Integer) MR_tfield(0, MR_r1, 0) + (MR_Integer) MR_tfield(0, MR_r2, 0));
	MR_tfield(0, MR_tempr1, 1) = ((MR_Integer) MR_tfield(0, MR_r1, 1) + (MR_Integer) MR_tfield(0, MR_r2, 1));
	MR_tfield(0, MR_tempr1, 2) = ((MR_Integer) MR_tfield(0, MR_r1, 2) + (MR_Integer) MR_tfield(0, MR_r2, 2));
	MR_tfield(0, MR_tempr1, 3) = ((MR_Integer) MR_tfield(0, MR_r1, 3) + (MR_Integer) MR_tfield(0, MR_r2, 3));
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module18)
	MR_init_entry1(fn__measurements__add_own_to_inherit_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__measurements__add_own_to_inherit_2_0);
	MR_init_label4(fn__measurements__add_own_to_inherit_2_0,3,5,7,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_own_to_inherit'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__measurements__add_own_to_inherit_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__measurements__add_own_to_inherit_2_0_i3) MR_AND
		MR_LABEL_AP(fn__measurements__add_own_to_inherit_2_0_i5) MR_AND
		MR_LABEL_AP(fn__measurements__add_own_to_inherit_2_0_i7) MR_AND
		MR_LABEL_AP(fn__measurements__add_own_to_inherit_2_0_i9));
MR_def_label(fn__measurements__add_own_to_inherit_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = ((MR_Integer) MR_tfield(0, MR_r1, 4) + (MR_Integer) MR_tfield(0, MR_r2, 0));
	MR_tfield(0, MR_tempr1, 1) = ((MR_Integer) MR_tfield(0, MR_r1, 5) + (MR_Integer) MR_tfield(0, MR_r2, 1));
	MR_tfield(0, MR_tempr1, 2) = ((MR_Integer) MR_tfield(0, MR_r1, 6) + (MR_Integer) MR_tfield(0, MR_r2, 2));
	MR_tfield(0, MR_tempr1, 3) = ((MR_Integer) MR_tfield(0, MR_r1, 7) + (MR_Integer) MR_tfield(0, MR_r2, 3));
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(fn__measurements__add_own_to_inherit_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = ((MR_Integer) MR_tfield(1, MR_r1, 1) + (MR_Integer) MR_tfield(0, MR_r2, 0));
	MR_tfield(0, MR_tempr1, 1) = ((MR_Integer) MR_tfield(1, MR_r1, 2) + (MR_Integer) MR_tfield(0, MR_r2, 1));
	MR_tfield(0, MR_tempr1, 2) = ((MR_Integer) MR_tfield(1, MR_r1, 3) + (MR_Integer) MR_tfield(0, MR_r2, 2));
	MR_tfield(0, MR_tempr1, 3) = ((MR_Integer) MR_tfield(1, MR_r1, 4) + (MR_Integer) MR_tfield(0, MR_r2, 3));
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(fn__measurements__add_own_to_inherit_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = ((MR_Integer) 0 + (MR_Integer) MR_tfield(0, MR_r2, 0));
	MR_tfield(0, MR_tempr1, 1) = ((MR_Integer) MR_tfield(2, MR_r1, 1) + (MR_Integer) MR_tfield(0, MR_r2, 1));
	MR_tfield(0, MR_tempr1, 2) = ((MR_Integer) MR_tfield(2, MR_r1, 2) + (MR_Integer) MR_tfield(0, MR_r2, 2));
	MR_tfield(0, MR_tempr1, 3) = ((MR_Integer) MR_tfield(2, MR_r1, 3) + (MR_Integer) MR_tfield(0, MR_r2, 3));
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(fn__measurements__add_own_to_inherit_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = ((MR_Integer) 0 + (MR_Integer) MR_tfield(0, MR_r2, 0));
	MR_tfield(0, MR_tempr1, 1) = ((MR_Integer) MR_tfield(3, MR_r1, 2) + (MR_Integer) MR_tfield(0, MR_r2, 1));
	MR_tfield(0, MR_tempr1, 2) = ((MR_Integer) 0 + (MR_Integer) MR_tfield(0, MR_r2, 2));
	MR_tfield(0, MR_tempr1, 3) = ((MR_Integer) 0 + (MR_Integer) MR_tfield(0, MR_r2, 3));
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module19)
	MR_init_entry1(fn__measurements__subtract_own_from_inherit_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__measurements__subtract_own_from_inherit_2_0);
	MR_init_label4(fn__measurements__subtract_own_from_inherit_2_0,3,5,7,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'subtract_own_from_inherit'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__measurements__subtract_own_from_inherit_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__measurements__subtract_own_from_inherit_2_0_i3) MR_AND
		MR_LABEL_AP(fn__measurements__subtract_own_from_inherit_2_0_i5) MR_AND
		MR_LABEL_AP(fn__measurements__subtract_own_from_inherit_2_0_i7) MR_AND
		MR_LABEL_AP(fn__measurements__subtract_own_from_inherit_2_0_i9));
MR_def_label(fn__measurements__subtract_own_from_inherit_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = ((MR_Integer) MR_tfield(0, MR_r2, 0) - (MR_Integer) MR_tfield(0, MR_r1, 4));
	MR_tfield(0, MR_tempr1, 1) = ((MR_Integer) MR_tfield(0, MR_r2, 1) - (MR_Integer) MR_tfield(0, MR_r1, 5));
	MR_tfield(0, MR_tempr1, 2) = ((MR_Integer) MR_tfield(0, MR_r2, 2) - (MR_Integer) MR_tfield(0, MR_r1, 6));
	MR_tfield(0, MR_tempr1, 3) = ((MR_Integer) MR_tfield(0, MR_r2, 3) - (MR_Integer) MR_tfield(0, MR_r1, 7));
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(fn__measurements__subtract_own_from_inherit_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = ((MR_Integer) MR_tfield(0, MR_r2, 0) - (MR_Integer) MR_tfield(1, MR_r1, 1));
	MR_tfield(0, MR_tempr1, 1) = ((MR_Integer) MR_tfield(0, MR_r2, 1) - (MR_Integer) MR_tfield(1, MR_r1, 2));
	MR_tfield(0, MR_tempr1, 2) = ((MR_Integer) MR_tfield(0, MR_r2, 2) - (MR_Integer) MR_tfield(1, MR_r1, 3));
	MR_tfield(0, MR_tempr1, 3) = ((MR_Integer) MR_tfield(0, MR_r2, 3) - (MR_Integer) MR_tfield(1, MR_r1, 4));
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(fn__measurements__subtract_own_from_inherit_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = ((MR_Integer) MR_tfield(0, MR_r2, 0) - (MR_Integer) 0);
	MR_tfield(0, MR_tempr1, 1) = ((MR_Integer) MR_tfield(0, MR_r2, 1) - (MR_Integer) MR_tfield(2, MR_r1, 1));
	MR_tfield(0, MR_tempr1, 2) = ((MR_Integer) MR_tfield(0, MR_r2, 2) - (MR_Integer) MR_tfield(2, MR_r1, 2));
	MR_tfield(0, MR_tempr1, 3) = ((MR_Integer) MR_tfield(0, MR_r2, 3) - (MR_Integer) MR_tfield(2, MR_r1, 3));
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(fn__measurements__subtract_own_from_inherit_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = ((MR_Integer) MR_tfield(0, MR_r2, 0) - (MR_Integer) 0);
	MR_tfield(0, MR_tempr1, 1) = ((MR_Integer) MR_tfield(0, MR_r2, 1) - (MR_Integer) MR_tfield(3, MR_r1, 2));
	MR_tfield(0, MR_tempr1, 2) = ((MR_Integer) MR_tfield(0, MR_r2, 2) - (MR_Integer) 0);
	MR_tfield(0, MR_tempr1, 3) = ((MR_Integer) MR_tfield(0, MR_r2, 3) - (MR_Integer) 0);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module20)
	MR_init_entry1(fn__measurements__subtract_inherit_from_inherit_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__measurements__subtract_inherit_from_inherit_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'subtract_inherit_from_inherit'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__measurements__subtract_inherit_from_inherit_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = ((MR_Integer) MR_tfield(0, MR_r2, 0) - (MR_Integer) MR_tfield(0, MR_r1, 0));
	MR_tfield(0, MR_tempr1, 1) = ((MR_Integer) MR_tfield(0, MR_r2, 1) - (MR_Integer) MR_tfield(0, MR_r1, 1));
	MR_tfield(0, MR_tempr1, 2) = ((MR_Integer) MR_tfield(0, MR_r2, 2) - (MR_Integer) MR_tfield(0, MR_r1, 2));
	MR_tfield(0, MR_tempr1, 3) = ((MR_Integer) MR_tfield(0, MR_r2, 3) - (MR_Integer) MR_tfield(0, MR_r1, 3));
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module21)
	MR_init_entry1(fn__measurements__compress_profile_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__measurements__compress_profile_8_0);
	MR_init_label3(fn__measurements__compress_profile_8_0,2,13,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'compress_profile'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__measurements__compress_profile_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(fn__measurements__compress_profile_8_0_i2);
	}
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(fn__measurements__compress_profile_8_0_i2);
	}
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(fn__measurements__compress_profile_8_0_i2);
	}
	if (MR_INT_NE(MR_r7,0)) {
		MR_GOTO_LAB(fn__measurements__compress_profile_8_0_i2);
	}
	if (MR_INT_NE(MR_r8,0)) {
		MR_GOTO_LAB(fn__measurements__compress_profile_8_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = MR_r1;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tfield(3, MR_tempr1, 2) = MR_r6;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(fn__measurements__compress_profile_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__measurements__compress_profile_8_0_i9);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(fn__measurements__compress_profile_8_0_i9);
	}
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(fn__measurements__compress_profile_8_0_i9);
	}
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(fn__measurements__compress_profile_8_0_i13);
	}
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 4);
	MR_tfield(2, MR_r2, 0) = MR_r1;
	MR_tfield(2, MR_r2, 1) = MR_r6;
	MR_tfield(2, MR_r2, 2) = MR_r7;
	MR_tfield(2, MR_r2, 3) = MR_r8;
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(fn__measurements__compress_profile_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 5);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_r5;
	MR_tfield(1, MR_r2, 2) = MR_r6;
	MR_tfield(1, MR_r2, 3) = MR_r7;
	MR_tfield(1, MR_r2, 4) = MR_r8;
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(fn__measurements__compress_profile_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tfield(0, MR_tempr1, 2) = MR_r3;
	MR_tfield(0, MR_tempr1, 3) = MR_r4;
	MR_tfield(0, MR_tempr1, 4) = MR_r5;
	MR_tfield(0, MR_tempr1, 5) = MR_r6;
	MR_tfield(0, MR_tempr1, 6) = MR_r7;
	MR_tfield(0, MR_tempr1, 7) = MR_r8;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module22)
	MR_init_entry1(fn__measurements__add_inherit_to_own_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__measurements__add_inherit_to_own_2_0);
	MR_init_label10(fn__measurements__add_inherit_to_own_2_0,3,4,5,6,7,8,2,13,14,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_inherit_to_own'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__measurements__add_inherit_to_own_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(fn__measurements__add_inherit_to_own_2_0_i3) MR_AND
		MR_LABEL_AP(fn__measurements__add_inherit_to_own_2_0_i4) MR_AND
		MR_LABEL_AP(fn__measurements__add_inherit_to_own_2_0_i5) MR_AND
		MR_LABEL_AP(fn__measurements__add_inherit_to_own_2_0_i7));
MR_def_label(fn__measurements__add_inherit_to_own_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_r2;
	MR_sv(3) = MR_tfield(0, MR_r1, 0);
	MR_sv(4) = MR_tfield(0, MR_r1, 1);
	MR_sv(5) = MR_tfield(0, MR_r1, 2);
	MR_sv(6) = MR_tfield(0, MR_r1, 3);
	MR_sv(7) = ((MR_Integer) MR_tfield(0, MR_tempr1, 0) + (MR_Integer) MR_tfield(0, MR_r1, 4));
	MR_sv(8) = MR_tfield(0, MR_tempr1, 1);
	MR_GOTO_LAB(fn__measurements__add_inherit_to_own_2_0_i2);
	}
MR_def_label(fn__measurements__add_inherit_to_own_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_r2;
	MR_sv(3) = MR_tfield(1, MR_r1, 0);
	MR_sv(4) = (MR_Integer) 0;
	MR_sv(5) = (MR_Integer) 0;
	MR_sv(6) = (MR_Integer) 0;
	MR_sv(7) = ((MR_Integer) MR_tfield(0, MR_tempr1, 0) + (MR_Integer) MR_tfield(1, MR_r1, 1));
	MR_sv(8) = MR_tfield(0, MR_tempr1, 1);
	MR_GOTO_LAB(fn__measurements__add_inherit_to_own_2_0_i2);
	}
MR_def_label(fn__measurements__add_inherit_to_own_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tfield(2, MR_r2, 0);
	MR_sv(5) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__measurements__quanta_1_0,
		fn__measurements__add_inherit_to_own_2_0_i6);
MR_def_label(fn__measurements__add_inherit_to_own_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(4) = (MR_Integer) 0;
	MR_r3 = MR_sv(5);
	MR_sv(5) = (MR_Integer) 0;
	MR_sv(6) = (MR_Integer) 0;
	MR_sv(7) = ((MR_Integer) MR_r3 + (MR_Integer) MR_r2);
	MR_sv(8) = MR_tfield(0, MR_sv(1), 1);
	MR_GOTO_LAB(fn__measurements__add_inherit_to_own_2_0_i2);
MR_def_label(fn__measurements__add_inherit_to_own_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tfield(3, MR_r2, 0);
	MR_sv(4) = MR_tfield(3, MR_r2, 1);
	MR_sv(5) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__measurements__quanta_1_0,
		fn__measurements__add_inherit_to_own_2_0_i8);
MR_def_label(fn__measurements__add_inherit_to_own_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = (MR_Integer) 0;
	MR_sv(6) = (MR_Integer) 0;
	MR_sv(7) = ((MR_Integer) MR_tempr1 + (MR_Integer) MR_r2);
	MR_sv(8) = MR_tfield(0, MR_sv(1), 1);
	}
MR_def_label(fn__measurements__add_inherit_to_own_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__measurements__callseqs_1_0,
		fn__measurements__add_inherit_to_own_2_0_i13);
MR_def_label(fn__measurements__add_inherit_to_own_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = ((MR_Integer) MR_sv(8) + (MR_Integer) MR_r1);
	MR_sv(9) = MR_tfield(0, MR_sv(1), 2);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__measurements__allocs_1_0,
		fn__measurements__add_inherit_to_own_2_0_i14);
MR_def_label(fn__measurements__add_inherit_to_own_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = ((MR_Integer) MR_sv(9) + (MR_Integer) MR_r1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_r2, 3);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__words_1_0,
		fn__measurements__add_inherit_to_own_2_0_i15);
MR_def_label(fn__measurements__add_inherit_to_own_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(1);
	MR_r8 = ((MR_Integer) MR_sv(2) + (MR_Integer) MR_tempr1);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(fn__measurements__compress_profile_8_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module23)
	MR_init_entry1(fn__measurements__add_own_to_own_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__measurements__add_own_to_own_2_0);
	MR_init_label10(fn__measurements__add_own_to_own_2_0,5,6,12,13,14,15,16,17,11,22)
	MR_init_label10(fn__measurements__add_own_to_own_2_0,23,24,25,26,27,28,29,30,31,32)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_own_to_own'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__measurements__add_own_to_own_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(fn__measurements__add_own_to_own_2_0_i6) MR_AND
		MR_LABEL_AP(fn__measurements__add_own_to_own_2_0_i5) MR_AND
		MR_LABEL_AP(fn__measurements__add_own_to_own_2_0_i5) MR_AND
		MR_LABEL_AP(fn__measurements__add_own_to_own_2_0_i6));
MR_def_label(fn__measurements__add_own_to_own_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_sv(3) = MR_mask_field(MR_r1, 0);
	MR_sv(4) = (MR_Integer) 0;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(fn__measurements__add_own_to_own_2_0_i12) MR_AND
		MR_LABEL_AP(fn__measurements__add_own_to_own_2_0_i13) MR_AND
		MR_LABEL_AP(fn__measurements__add_own_to_own_2_0_i14) MR_AND
		MR_LABEL_AP(fn__measurements__add_own_to_own_2_0_i16));
MR_def_label(fn__measurements__add_own_to_own_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_sv(3) = MR_mask_field(MR_r1, 0);
	MR_sv(4) = MR_mask_field(MR_r1, 1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(fn__measurements__add_own_to_own_2_0_i12) MR_AND
		MR_LABEL_AP(fn__measurements__add_own_to_own_2_0_i13) MR_AND
		MR_LABEL_AP(fn__measurements__add_own_to_own_2_0_i14) MR_AND
		MR_LABEL_AP(fn__measurements__add_own_to_own_2_0_i16));
MR_def_label(fn__measurements__add_own_to_own_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(3) = ((MR_Integer) MR_tfield(0, MR_tempr1, 0) + (MR_Integer) MR_sv(3));
	MR_sv(4) = ((MR_Integer) MR_tfield(0, MR_tempr1, 1) + (MR_Integer) MR_sv(4));
	MR_sv(5) = MR_tfield(0, MR_tempr1, 2);
	MR_GOTO_LAB(fn__measurements__add_own_to_own_2_0_i11);
	}
MR_def_label(fn__measurements__add_own_to_own_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = ((MR_Integer) MR_tfield(1, MR_sv(1), 0) + (MR_Integer) MR_sv(3));
	MR_sv(4) = ((MR_Integer) 0 + (MR_Integer) MR_sv(4));
	MR_sv(5) = (MR_Integer) 0;
	MR_GOTO_LAB(fn__measurements__add_own_to_own_2_0_i11);
MR_def_label(fn__measurements__add_own_to_own_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(5) = MR_tfield(2, MR_tempr1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__redos_1_0,
		fn__measurements__add_own_to_own_2_0_i15);
MR_def_label(fn__measurements__add_own_to_own_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(3) = ((MR_Integer) MR_sv(5) + (MR_Integer) MR_sv(3));
	MR_sv(4) = ((MR_Integer) 0 + (MR_Integer) MR_sv(4));
	MR_sv(5) = MR_r2;
	MR_GOTO_LAB(fn__measurements__add_own_to_own_2_0_i11);
MR_def_label(fn__measurements__add_own_to_own_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(5) = MR_tfield(3, MR_tempr1, 0);
	MR_sv(6) = MR_tfield(3, MR_tempr1, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__redos_1_0,
		fn__measurements__add_own_to_own_2_0_i17);
MR_def_label(fn__measurements__add_own_to_own_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(3) = ((MR_Integer) MR_sv(5) + (MR_Integer) MR_sv(3));
	MR_sv(4) = ((MR_Integer) MR_sv(6) + (MR_Integer) MR_sv(4));
	MR_sv(5) = MR_r2;
MR_def_label(fn__measurements__add_own_to_own_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__measurements__redos_1_0,
		fn__measurements__add_own_to_own_2_0_i22);
MR_def_label(fn__measurements__add_own_to_own_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = ((MR_Integer) MR_sv(5) + (MR_Integer) MR_r1);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__measurements__excps_1_0,
		fn__measurements__add_own_to_own_2_0_i23);
MR_def_label(fn__measurements__add_own_to_own_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__measurements__excps_1_0,
		fn__measurements__add_own_to_own_2_0_i24);
MR_def_label(fn__measurements__add_own_to_own_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = ((MR_Integer) MR_sv(6) + (MR_Integer) MR_r1);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__measurements__quanta_1_0,
		fn__measurements__add_own_to_own_2_0_i25);
MR_def_label(fn__measurements__add_own_to_own_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__measurements__quanta_1_0,
		fn__measurements__add_own_to_own_2_0_i26);
MR_def_label(fn__measurements__add_own_to_own_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = ((MR_Integer) MR_sv(7) + (MR_Integer) MR_r1);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__measurements__callseqs_1_0,
		fn__measurements__add_own_to_own_2_0_i27);
MR_def_label(fn__measurements__add_own_to_own_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__measurements__callseqs_1_0,
		fn__measurements__add_own_to_own_2_0_i28);
MR_def_label(fn__measurements__add_own_to_own_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = ((MR_Integer) MR_sv(8) + (MR_Integer) MR_r1);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__measurements__allocs_1_0,
		fn__measurements__add_own_to_own_2_0_i29);
MR_def_label(fn__measurements__add_own_to_own_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__measurements__allocs_1_0,
		fn__measurements__add_own_to_own_2_0_i30);
MR_def_label(fn__measurements__add_own_to_own_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = ((MR_Integer) MR_sv(9) + (MR_Integer) MR_r1);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__measurements__words_1_0,
		fn__measurements__add_own_to_own_2_0_i31);
MR_def_label(fn__measurements__add_own_to_own_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__measurements__words_1_0,
		fn__measurements__add_own_to_own_2_0_i32);
MR_def_label(fn__measurements__add_own_to_own_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(1);
	MR_r8 = ((MR_Integer) MR_sv(2) + (MR_Integer) MR_tempr1);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(fn__measurements__compress_profile_8_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__foldl_3_0);

MR_BEGIN_MODULE(measurements_module24)
	MR_init_entry1(fn__measurements__sum_own_infos_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__measurements__sum_own_infos_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'sum_own_infos'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__measurements__sum_own_infos_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r4 = MR_tempr1;
	MR_r5 = (MR_Word) MR_TAG_COMMON(3,0,0);
	MR_np_tailcall_ent(fn__list__foldl_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module25)
	MR_init_entry1(fn__measurements__sum_inherit_infos_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__measurements__sum_inherit_infos_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'sum_inherit_infos'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__measurements__sum_inherit_infos_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r4 = MR_tempr1;
	MR_r5 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_np_tailcall_ent(fn__list__foldl_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module26)
	MR_init_entry1(fn__measurements__compress_profile_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__measurements__compress_profile_1_0);
	MR_init_label7(fn__measurements__compress_profile_1_0,3,4,15,22,23,32,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'compress_profile'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__measurements__compress_profile_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__measurements__compress_profile_1_0_i3) MR_AND
		MR_LABEL_AP(fn__measurements__compress_profile_1_0_i22) MR_AND
		MR_LABEL_AP(fn__measurements__compress_profile_1_0_i32) MR_AND
		MR_LABEL_AP(fn__measurements__compress_profile_1_0_i2));
MR_def_label(fn__measurements__compress_profile_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 7);
	MR_r3 = MR_tfield(0, MR_r1, 6);
	MR_r4 = MR_tfield(0, MR_r1, 5);
	MR_r5 = MR_tfield(0, MR_r1, 4);
	MR_r6 = MR_tfield(0, MR_r1, 3);
	MR_r7 = MR_tfield(0, MR_r1, 2);
	MR_r8 = MR_tfield(0, MR_r1, 1);
	MR_r9 = MR_tfield(0, MR_r1, 0);
	if (MR_INT_NE(MR_r7,0)) {
		MR_GOTO_LAB(fn__measurements__compress_profile_1_0_i4);
	}
	if (MR_INT_NE(MR_r6,0)) {
		MR_GOTO_LAB(fn__measurements__compress_profile_1_0_i4);
	}
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(fn__measurements__compress_profile_1_0_i4);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(fn__measurements__compress_profile_1_0_i4);
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__measurements__compress_profile_1_0_i4);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r1, 0) = MR_r9;
	MR_tfield(3, MR_r1, 1) = MR_r8;
	MR_tfield(3, MR_r1, 2) = MR_r4;
	MR_proceed();
MR_def_label(fn__measurements__compress_profile_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r8,0)) {
		MR_GOTO_LAB(fn__measurements__compress_profile_1_0_i2);
	}
	if (MR_INT_NE(MR_r7,0)) {
		MR_GOTO_LAB(fn__measurements__compress_profile_1_0_i2);
	}
	if (MR_INT_NE(MR_r6,0)) {
		MR_GOTO_LAB(fn__measurements__compress_profile_1_0_i2);
	}
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(fn__measurements__compress_profile_1_0_i15);
	}
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 4);
	MR_tfield(2, MR_r1, 0) = MR_r9;
	MR_tfield(2, MR_r1, 1) = MR_r4;
	MR_tfield(2, MR_r1, 2) = MR_r3;
	MR_tfield(2, MR_r1, 3) = MR_r2;
	MR_proceed();
MR_def_label(fn__measurements__compress_profile_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 5);
	MR_tfield(1, MR_r1, 0) = MR_r9;
	MR_tfield(1, MR_r1, 1) = MR_r5;
	MR_tfield(1, MR_r1, 2) = MR_r4;
	MR_tfield(1, MR_r1, 3) = MR_r3;
	MR_tfield(1, MR_r1, 4) = MR_r2;
	MR_proceed();
MR_def_label(fn__measurements__compress_profile_1_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(1, MR_r1, 4);
	MR_r3 = MR_tfield(1, MR_r1, 3);
	MR_r4 = MR_tfield(1, MR_r1, 2);
	MR_r5 = MR_tfield(1, MR_r1, 1);
	MR_r6 = MR_tfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(fn__measurements__compress_profile_1_0_i23);
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__measurements__compress_profile_1_0_i23);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r1, 0) = MR_r6;
	MR_tfield(3, MR_r1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 2) = MR_r4;
	MR_proceed();
MR_def_label(fn__measurements__compress_profile_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(fn__measurements__compress_profile_1_0_i2);
	}
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 4);
	MR_tfield(2, MR_r1, 0) = MR_r6;
	MR_tfield(2, MR_r1, 1) = MR_r4;
	MR_tfield(2, MR_r1, 2) = MR_r3;
	MR_tfield(2, MR_r1, 3) = MR_r2;
	MR_proceed();
MR_def_label(fn__measurements__compress_profile_1_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(2, MR_r1, 2);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__measurements__compress_profile_1_0_i2);
	}
	MR_r2 = MR_tfield(2, MR_r1, 3);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__measurements__compress_profile_1_0_i2);
	}
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = MR_tfield(2, MR_r1, 0);
	MR_tfield(3, MR_r2, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 2) = MR_tfield(2, MR_r1, 1);
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(fn__measurements__compress_profile_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module27)
	MR_init_entry1(measurements__decompress_profile_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__measurements__decompress_profile_10_0);
	MR_init_label4(measurements__decompress_profile_10_0,3,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'decompress_profile'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__measurements__decompress_profile_10_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(measurements__decompress_profile_10_0_i3) MR_AND
		MR_LABEL_AP(measurements__decompress_profile_10_0_i4) MR_AND
		MR_LABEL_AP(measurements__decompress_profile_10_0_i5) MR_AND
		MR_LABEL_AP(measurements__decompress_profile_10_0_i6));
MR_def_label(measurements__decompress_profile_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (((MR_Integer) MR_tfield(0, MR_r1, 0) + (MR_Integer) MR_tfield(0, MR_r1, 1)) - (MR_Integer) MR_tfield(0, MR_r1, 2));
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	MR_r4 = MR_tfield(0, MR_tempr1, 2);
	MR_r5 = MR_tfield(0, MR_tempr1, 3);
	MR_r6 = MR_tfield(0, MR_tempr1, 4);
	MR_r7 = MR_tfield(0, MR_tempr1, 5);
	MR_r8 = MR_tfield(0, MR_tempr1, 6);
	MR_r9 = MR_tfield(0, MR_tempr1, 7);
	MR_proceed();
	}
MR_def_label(measurements__decompress_profile_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 0;
	MR_r5 = (MR_Integer) 0;
	MR_r6 = MR_tfield(1, MR_tempr1, 1);
	MR_r7 = MR_tfield(1, MR_tempr1, 2);
	MR_r8 = MR_tfield(1, MR_tempr1, 3);
	MR_r9 = MR_tfield(1, MR_tempr1, 4);
	MR_proceed();
	}
MR_def_label(measurements__decompress_profile_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(2, MR_r1, 0);
	MR_r2 = MR_tfield(2, MR_tempr1, 0);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 0;
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Integer) 0;
	MR_r7 = MR_tfield(2, MR_tempr1, 1);
	MR_r8 = MR_tfield(2, MR_tempr1, 2);
	MR_r9 = MR_tfield(2, MR_tempr1, 3);
	MR_proceed();
	}
MR_def_label(measurements__decompress_profile_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = ((MR_Integer) MR_tfield(3, MR_r1, 0) + (MR_Integer) MR_tfield(3, MR_r1, 1));
	MR_r2 = MR_tfield(3, MR_tempr1, 0);
	MR_r3 = MR_tfield(3, MR_tempr1, 1);
	MR_r4 = (MR_Integer) 0;
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Integer) 0;
	MR_r7 = MR_tfield(3, MR_tempr1, 2);
	MR_r8 = (MR_Integer) 0;
	MR_r9 = (MR_Integer) 0;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__int_to_string_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(measurements_module28)
	MR_init_entry1(fn__measurements__own_to_string_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__measurements__own_to_string_1_0);
	MR_init_label10(fn__measurements__own_to_string_1_0,3,4,5,6,7,8,9,10,11,12)
	MR_init_label10(fn__measurements__own_to_string_1_0,13,14,15,16,17,18,19,20,21,22)
	MR_init_label10(fn__measurements__own_to_string_1_0,23,24,25,26,28,29,30,31,32,33)
	MR_init_label10(fn__measurements__own_to_string_1_0,34,35,36,37,38,39,40,41,42,44)
	MR_init_label10(fn__measurements__own_to_string_1_0,45,46,47,48,49,50,51,52,53,54)
	MR_init_label9(fn__measurements__own_to_string_1_0,57,58,59,60,61,62,63,64,65)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'own_to_string'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__measurements__own_to_string_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__measurements__own_to_string_1_0_i3) MR_AND
		MR_LABEL_AP(fn__measurements__own_to_string_1_0_i28) MR_AND
		MR_LABEL_AP(fn__measurements__own_to_string_1_0_i44) MR_AND
		MR_LABEL_AP(fn__measurements__own_to_string_1_0_i57));
MR_def_label(fn__measurements__own_to_string_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_sv(2) = MR_tfield(0, MR_r1, 2);
	MR_sv(3) = MR_tfield(0, MR_r1, 3);
	MR_sv(4) = MR_tfield(0, MR_r1, 4);
	MR_sv(5) = MR_tfield(0, MR_r1, 5);
	MR_sv(6) = MR_tfield(0, MR_r1, 6);
	MR_sv(7) = MR_tfield(0, MR_r1, 7);
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__measurements__own_to_string_1_0_i4);
MR_def_label(fn__measurements__own_to_string_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__measurements__own_to_string_1_0_i5);
MR_def_label(fn__measurements__own_to_string_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__measurements__own_to_string_1_0_i6);
MR_def_label(fn__measurements__own_to_string_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__measurements__own_to_string_1_0_i7);
MR_def_label(fn__measurements__own_to_string_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__measurements__own_to_string_1_0_i8);
MR_def_label(fn__measurements__own_to_string_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__measurements__own_to_string_1_0_i9);
MR_def_label(fn__measurements__own_to_string_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__measurements__own_to_string_1_0_i10);
MR_def_label(fn__measurements__own_to_string_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__measurements__own_to_string_1_0_i11);
MR_def_label(fn__measurements__own_to_string_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__measurements__own_to_string_1_0_i12);
MR_def_label(fn__measurements__own_to_string_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__measurements__own_to_string_1_0_i13);
MR_def_label(fn__measurements__own_to_string_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__measurements__own_to_string_1_0_i14);
MR_def_label(fn__measurements__own_to_string_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__measurements__own_to_string_1_0_i15);
MR_def_label(fn__measurements__own_to_string_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__measurements__own_to_string_1_0_i16);
MR_def_label(fn__measurements__own_to_string_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__measurements__own_to_string_1_0_i17);
MR_def_label(fn__measurements__own_to_string_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__measurements__own_to_string_1_0_i18);
MR_def_label(fn__measurements__own_to_string_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__measurements__own_to_string_1_0_i19);
MR_def_label(fn__measurements__own_to_string_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__measurements__own_to_string_1_0_i20);
MR_def_label(fn__measurements__own_to_string_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__measurements__own_to_string_1_0_i21);
MR_def_label(fn__measurements__own_to_string_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__measurements__own_to_string_1_0_i22);
MR_def_label(fn__measurements__own_to_string_1_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__measurements__own_to_string_1_0_i23);
MR_def_label(fn__measurements__own_to_string_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__measurements__own_to_string_1_0_i24);
MR_def_label(fn__measurements__own_to_string_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__measurements__own_to_string_1_0_i25);
MR_def_label(fn__measurements__own_to_string_1_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__measurements__own_to_string_1_0_i26);
MR_def_label(fn__measurements__own_to_string_1_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("all(", 4);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__measurements__own_to_string_1_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_sv(2) = MR_tfield(1, MR_r1, 2);
	MR_sv(3) = MR_tfield(1, MR_r1, 3);
	MR_sv(4) = MR_tfield(1, MR_r1, 4);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__measurements__own_to_string_1_0_i29);
MR_def_label(fn__measurements__own_to_string_1_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__measurements__own_to_string_1_0_i30);
MR_def_label(fn__measurements__own_to_string_1_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__measurements__own_to_string_1_0_i31);
MR_def_label(fn__measurements__own_to_string_1_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__measurements__own_to_string_1_0_i32);
MR_def_label(fn__measurements__own_to_string_1_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__measurements__own_to_string_1_0_i33);
MR_def_label(fn__measurements__own_to_string_1_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__measurements__own_to_string_1_0_i34);
MR_def_label(fn__measurements__own_to_string_1_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__measurements__own_to_string_1_0_i35);
MR_def_label(fn__measurements__own_to_string_1_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__measurements__own_to_string_1_0_i36);
MR_def_label(fn__measurements__own_to_string_1_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__measurements__own_to_string_1_0_i37);
MR_def_label(fn__measurements__own_to_string_1_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__measurements__own_to_string_1_0_i38);
MR_def_label(fn__measurements__own_to_string_1_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__measurements__own_to_string_1_0_i39);
MR_def_label(fn__measurements__own_to_string_1_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__measurements__own_to_string_1_0_i40);
MR_def_label(fn__measurements__own_to_string_1_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__measurements__own_to_string_1_0_i41);
MR_def_label(fn__measurements__own_to_string_1_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__measurements__own_to_string_1_0_i42);
MR_def_label(fn__measurements__own_to_string_1_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("det(", 4);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__measurements__own_to_string_1_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(2, MR_r1, 1);
	MR_sv(2) = MR_tfield(2, MR_r1, 2);
	MR_sv(3) = MR_tfield(2, MR_r1, 3);
	MR_r1 = MR_tfield(2, MR_r1, 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__measurements__own_to_string_1_0_i45);
MR_def_label(fn__measurements__own_to_string_1_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__measurements__own_to_string_1_0_i46);
MR_def_label(fn__measurements__own_to_string_1_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__measurements__own_to_string_1_0_i47);
MR_def_label(fn__measurements__own_to_string_1_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__measurements__own_to_string_1_0_i48);
MR_def_label(fn__measurements__own_to_string_1_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__measurements__own_to_string_1_0_i49);
MR_def_label(fn__measurements__own_to_string_1_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__measurements__own_to_string_1_0_i50);
MR_def_label(fn__measurements__own_to_string_1_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__measurements__own_to_string_1_0_i51);
MR_def_label(fn__measurements__own_to_string_1_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__measurements__own_to_string_1_0_i52);
MR_def_label(fn__measurements__own_to_string_1_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__measurements__own_to_string_1_0_i53);
MR_def_label(fn__measurements__own_to_string_1_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__measurements__own_to_string_1_0_i54);
MR_def_label(fn__measurements__own_to_string_1_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__measurements__own_to_string_1_0_i65);
MR_def_label(fn__measurements__own_to_string_1_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(3, MR_r1, 1);
	MR_sv(2) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tfield(3, MR_r1, 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__measurements__own_to_string_1_0_i58);
MR_def_label(fn__measurements__own_to_string_1_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__measurements__own_to_string_1_0_i59);
MR_def_label(fn__measurements__own_to_string_1_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__measurements__own_to_string_1_0_i60);
MR_def_label(fn__measurements__own_to_string_1_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__measurements__own_to_string_1_0_i61);
MR_def_label(fn__measurements__own_to_string_1_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__measurements__own_to_string_1_0_i62);
MR_def_label(fn__measurements__own_to_string_1_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__measurements__own_to_string_1_0_i63);
MR_def_label(fn__measurements__own_to_string_1_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__measurements__own_to_string_1_0_i64);
MR_def_label(fn__measurements__own_to_string_1_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__measurements__own_to_string_1_0_i65);
MR_def_label(fn__measurements__own_to_string_1_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("fast_det(", 9);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module29)
	MR_init_entry1(fn__measurements__compute_is_active_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__measurements__compute_is_active_1_0);
	MR_init_label6(fn__measurements__compute_is_active_1_0,4,9,11,13,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'compute_is_active'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__measurements__compute_is_active_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__measurements__compute_is_active_1_0_i4) MR_AND
		MR_LABEL_AP(fn__measurements__compute_is_active_1_0_i9) MR_AND
		MR_LABEL_AP(fn__measurements__compute_is_active_1_0_i11) MR_AND
		MR_LABEL_AP(fn__measurements__compute_is_active_1_0_i13));
MR_def_label(fn__measurements__compute_is_active_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 0);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__measurements__compute_is_active_1_0_i2);
	}
	MR_r2 = MR_tfield(0, MR_r1, 1);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__measurements__compute_is_active_1_0_i2);
	}
	MR_r2 = MR_tfield(0, MR_r1, 2);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__measurements__compute_is_active_1_0_i2);
	}
	MR_r2 = MR_tfield(0, MR_r1, 3);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__measurements__compute_is_active_1_0_i2);
	}
	MR_GOTO_LAB(fn__measurements__compute_is_active_1_0_i3);
MR_def_label(fn__measurements__compute_is_active_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__measurements__compute_is_active_1_0_i2);
	}
	MR_GOTO_LAB(fn__measurements__compute_is_active_1_0_i3);
MR_def_label(fn__measurements__compute_is_active_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(2, MR_r1, 0);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__measurements__compute_is_active_1_0_i2);
	}
	MR_GOTO_LAB(fn__measurements__compute_is_active_1_0_i3);
MR_def_label(fn__measurements__compute_is_active_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(3, MR_r1, 0);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__measurements__compute_is_active_1_0_i2);
	}
	MR_r2 = MR_tfield(3, MR_r1, 1);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__measurements__compute_is_active_1_0_i2);
	}
MR_def_label(fn__measurements__compute_is_active_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__measurements__compute_is_active_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__float__float_1_0);

MR_BEGIN_MODULE(measurements_module30)
	MR_init_entry1(fn__measurements__build_proc_cost_csq_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__measurements__build_proc_cost_csq_3_0);
	MR_init_label1(fn__measurements__build_proc_cost_csq_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_proc_cost_csq'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__measurements__build_proc_cost_csq_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__measurements__build_proc_cost_csq_3_0_i2);
MR_def_label(fn__measurements__build_proc_cost_csq_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = MR_sv(1);
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_tfield(0, MR_r1, 2) = MR_r2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module31)
	MR_init_entry1(fn__measurements__build_cs_cost_csq_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__measurements__build_cs_cost_csq_2_0);
	MR_init_label1(fn__measurements__build_cs_cost_csq_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_cs_cost_csq'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__measurements__build_cs_cost_csq_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__measurements__build_cs_cost_csq_2_0_i2);
MR_def_label(fn__measurements__build_cs_cost_csq_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module32)
	MR_init_entry1(fn__measurements__build_cs_cost_csq_percall_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__measurements__build_cs_cost_csq_percall_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_cs_cost_csq_percall'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__measurements__build_cs_cost_csq_percall_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_r1 = MR_r2;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module33)
	MR_init_entry1(fn__measurements__zero_cs_cost_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__measurements__zero_cs_cost_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'zero_cs_cost'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__measurements__zero_cs_cost_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module34)
	MR_init_entry1(fn__measurements__proc_cost_get_total_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__measurements__proc_cost_get_total_1_0);
	MR_init_label2(fn__measurements__proc_cost_get_total_1_0,2,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'proc_cost_get_total'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__measurements__proc_cost_get_total_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 2);
	MR_r1 = ((MR_Integer) MR_tfield(0, MR_r1, 0) + (MR_Integer) MR_tfield(0, MR_r1, 1));
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__measurements__proc_cost_get_total_1_0_i2);
MR_def_label(fn__measurements__proc_cost_get_total_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(fn__measurements__proc_cost_get_total_1_0_i4);
	}
	MR_r1 = MR_float_to_word((MR_word_to_float(MR_r1) * MR_word_to_float(MR_tfield(0, MR_sv(1), 0))));
	MR_decr_sp_and_return(2);
MR_def_label(fn__measurements__proc_cost_get_total_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module35)
	MR_init_entry1(fn__measurements__proc_cost_get_calls_total_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__measurements__proc_cost_get_calls_total_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'proc_cost_get_calls_total'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__measurements__proc_cost_get_calls_total_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_tfield(0, MR_r1, 0) + (MR_Integer) MR_tfield(0, MR_r1, 1));
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module36)
	MR_init_entry1(fn__measurements__proc_cost_get_calls_nonrec_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__measurements__proc_cost_get_calls_nonrec_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'proc_cost_get_calls_nonrec'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__measurements__proc_cost_get_calls_nonrec_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module37)
	MR_init_entry1(fn__measurements__proc_cost_get_calls_rec_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__measurements__proc_cost_get_calls_rec_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'proc_cost_get_calls_rec'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__measurements__proc_cost_get_calls_rec_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module38)
	MR_init_entry1(fn__measurements__cs_cost_get_total_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__measurements__cs_cost_get_total_1_0);
	MR_init_label1(fn__measurements__cs_cost_get_total_1_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cs_cost_get_total'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__measurements__cs_cost_get_total_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 1);
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(fn__measurements__cs_cost_get_total_1_0_i3);
	}
	MR_r1 = MR_float_to_word((MR_word_to_float(MR_tfield(0, MR_r1, 0)) * MR_word_to_float(MR_tfield(0, MR_r2, 0))));
	MR_proceed();
MR_def_label(fn__measurements__cs_cost_get_total_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_102_108_111_97_116_95_95_47_2_0);

MR_BEGIN_MODULE(measurements_module39)
	MR_init_entry1(fn__measurements__cs_cost_get_percall_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__measurements__cs_cost_get_percall_1_0);
	MR_init_label1(fn__measurements__cs_cost_get_percall_1_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cs_cost_get_percall'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__measurements__cs_cost_get_percall_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 1);
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(fn__measurements__cs_cost_get_percall_1_0_i3);
	}
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_proceed();
MR_def_label(fn__measurements__cs_cost_get_percall_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_np_tailcall_ent(fn__f_102_108_111_97_116_95_95_47_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module40)
	MR_init_entry1(fn__measurements__cs_cost_get_calls_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__measurements__cs_cost_get_calls_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cs_cost_get_calls'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__measurements__cs_cost_get_calls_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__float__round_to_int_1_0);
static const MR_Float mercury_float_const_1pt0000000000000000 = 1.0000000000000000;

MR_BEGIN_MODULE(measurements_module41)
	MR_init_entry1(measurements__cs_cost_to_proc_cost_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__measurements__cs_cost_to_proc_cost_3_0);
	MR_init_label3(measurements__cs_cost_to_proc_cost_3_0,2,3,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cs_cost_to_proc_cost'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__measurements__cs_cost_to_proc_cost_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__float__round_to_int_1_0,
		measurements__cs_cost_to_proc_cost_3_0_i2);
MR_def_label(measurements__cs_cost_to_proc_cost_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__float__round_to_int_1_0,
		measurements__cs_cost_to_proc_cost_3_0_i3);
MR_def_label(measurements__cs_cost_to_proc_cost_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(measurements__cs_cost_to_proc_cost_3_0_i5);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(1);
	MR_tfield(1, MR_r2, 0) = MR_float_to_word(((MR_word_to_float(MR_tempr2) * MR_word_to_float(MR_tfield(0, MR_sv(2), 0))) - ((MR_Float) 1.0000000000000000 * MR_word_to_float(MR_tempr2))));
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = ((MR_Integer) MR_sv(3) - (MR_Integer) MR_r1);
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(measurements__cs_cost_to_proc_cost_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_float_to_word((MR_word_to_float(MR_tfield(1, MR_sv(2), 0)) - ((MR_Float) 1.0000000000000000 * MR_word_to_float(MR_sv(1)))));
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = ((MR_Integer) MR_sv(3) - (MR_Integer) MR_r1);
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module42)
	MR_init_entry1(fn__measurements__cs_cost_per_proc_call_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__measurements__cs_cost_per_proc_call_2_0);
	MR_init_label7(fn__measurements__cs_cost_per_proc_call_2_0,2,3,6,7,5,10,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cs_cost_per_proc_call'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__measurements__cs_cost_per_proc_call_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_sv(3) = MR_tfield(0, MR_r2, 0);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__measurements__cs_cost_per_proc_call_2_0_i2);
MR_def_label(fn__measurements__cs_cost_per_proc_call_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_102_108_111_97_116_95_95_47_2_0,
		fn__measurements__cs_cost_per_proc_call_2_0_i3);
MR_def_label(fn__measurements__cs_cost_per_proc_call_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(fn__measurements__cs_cost_per_proc_call_2_0_i5);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_sv(2), 0);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__measurements__cs_cost_per_proc_call_2_0_i6);
MR_def_label(fn__measurements__cs_cost_per_proc_call_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_102_108_111_97_116_95_95_47_2_0,
		fn__measurements__cs_cost_per_proc_call_2_0_i7);
MR_def_label(fn__measurements__cs_cost_per_proc_call_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_sv(1);
	MR_tfield(0, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(fn__measurements__cs_cost_per_proc_call_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__measurements__cs_cost_per_proc_call_2_0_i10);
MR_def_label(fn__measurements__cs_cost_per_proc_call_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_102_108_111_97_116_95_95_47_2_0,
		fn__measurements__cs_cost_per_proc_call_2_0_i11);
MR_def_label(fn__measurements__cs_cost_per_proc_call_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_sv(1);
	MR_tfield(0, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module43)
	MR_init_entry1(fn__measurements__no_parallelism_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__measurements__no_parallelism_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'no_parallelism'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__measurements__no_parallelism_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) &mercury_float_const_1pt0000000000000000;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__error_1_0);

MR_BEGIN_MODULE(measurements_module44)
	MR_init_entry1(fn__measurements__some_parallelism_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__measurements__some_parallelism_1_0);
	MR_init_label1(fn__measurements__some_parallelism_1_0,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'some_parallelism'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__measurements__some_parallelism_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r1) >= (MR_Float) 1.0000000000000000)) {
		MR_GOTO_LAB(fn__measurements__some_parallelism_1_0_i13);
	}
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("measurements.msome_parallelism/1+1: Parallelism amount cannot ever be less than 1.0", 83);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(fn__measurements__some_parallelism_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__measurement_units__probability_to_float_1_0);

MR_BEGIN_MODULE(measurements_module45)
	MR_init_entry1(measurements__sub_computation_parallelism_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__measurements__sub_computation_parallelism_4_0);
	MR_init_label1(measurements__sub_computation_parallelism_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'sub_computation_parallelism'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__measurements__sub_computation_parallelism_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__measurement_units__probability_to_float_1_0,
		measurements__sub_computation_parallelism_4_0_i2);
MR_def_label(measurements__sub_computation_parallelism_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_float_to_word((MR_word_to_float(MR_sv(1)) + (MR_word_to_float(MR_r1) * MR_word_to_float(MR_sv(2)))));
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module46)
	MR_init_entry1(measurements__sub_computation_parallelism_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__measurements__sub_computation_parallelism_3_0);
	MR_init_label1(measurements__sub_computation_parallelism_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'sub_computation_parallelism'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__measurements__sub_computation_parallelism_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) &mercury_float_const_1pt0000000000000000;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__measurement_units__probability_to_float_1_0,
		measurements__sub_computation_parallelism_3_0_i2);
MR_def_label(measurements__sub_computation_parallelism_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_float_to_word((MR_word_to_float(MR_sv(1)) + (MR_word_to_float(MR_r1) * MR_word_to_float(MR_sv(2)))));
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module47)
	MR_init_entry1(measurements__exceeded_desired_parallelism_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__measurements__exceeded_desired_parallelism_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'exceeded_desired_parallelism'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__measurements__exceeded_desired_parallelism_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_word_to_float(MR_r1) < MR_word_to_float(MR_r2));
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module48)
	MR_init_entry1(__Unify___measurements__cost_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___measurements__cost_0_0);
	MR_init_label3(__Unify___measurements__cost_0_0,12,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___measurements__cost_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___measurements__cost_0_0_i12);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___measurements__cost_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Unify___measurements__cost_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	MR_r1 = (MR_word_to_float(MR_r1) == MR_word_to_float(MR_r2));
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___measurements__cost_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___measurements__cost_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___measurements__cost_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (MR_word_to_float(MR_r1) == MR_word_to_float(MR_r2));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___measurements__cost_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_float_3_0);

MR_BEGIN_MODULE(measurements_module49)
	MR_init_entry1(__Compare___measurements__cost_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___measurements__cost_0_0);
	MR_init_label5(__Compare___measurements__cost_0_0,3,2,19,7,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___measurements__cost_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___measurements__cost_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___measurements__cost_0_0_i2);
MR_def_label(__Compare___measurements__cost_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___measurements__cost_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___measurements__cost_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___measurements__cost_0_0_i7);
	}
MR_def_label(__Compare___measurements__cost_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_mask_field(MR_sv(1), 0);
	MR_r2 = MR_mask_field(MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_float_3_0);
MR_def_label(__Compare___measurements__cost_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___measurements__cost_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___measurements__cost_0_0_i19);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module50)
	MR_init_entry1(__Unify___measurements__cs_cost_csq_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___measurements__cs_cost_csq_0_0);
	MR_init_label2(__Unify___measurements__cs_cost_csq_0_0,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___measurements__cs_cost_csq_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___measurements__cs_cost_csq_0_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_word_to_float(MR_tempr3) != MR_word_to_float(MR_tempr4))) {
		MR_GOTO_LAB(__Unify___measurements__cs_cost_csq_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___measurements__cost_0_0);
	}
MR_def_label(__Unify___measurements__cs_cost_csq_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___measurements__cs_cost_csq_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module51)
	MR_init_entry1(__Compare___measurements__cs_cost_csq_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___measurements__cs_cost_csq_0_0);
	MR_init_label4(__Compare___measurements__cs_cost_csq_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___measurements__cs_cost_csq_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___measurements__cs_cost_csq_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___measurements__cs_cost_csq_0_0_i2);
MR_def_label(__Compare___measurements__cs_cost_csq_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___measurements__cs_cost_csq_0_0,2)
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
		__Compare___measurements__cs_cost_csq_0_0_i5);
MR_def_label(__Compare___measurements__cs_cost_csq_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___measurements__cs_cost_csq_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___measurements__cost_0_0);
MR_def_label(__Compare___measurements__cs_cost_csq_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module52)
	MR_init_entry1(__Unify___measurements__inherit_prof_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___measurements__inherit_prof_info_0_0);
	MR_init_label2(__Unify___measurements__inherit_prof_info_0_0,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___measurements__inherit_prof_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___measurements__inherit_prof_info_0_0_i4);
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
		MR_GOTO_LAB(__Unify___measurements__inherit_prof_info_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___measurements__inherit_prof_info_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	MR_r2 = MR_tfield(0, MR_tempr2, 2);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___measurements__inherit_prof_info_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 3);
	MR_r2 = MR_tfield(0, MR_tempr2, 3);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___measurements__inherit_prof_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___measurements__inherit_prof_info_0_0,1)
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

MR_BEGIN_MODULE(measurements_module53)
	MR_init_entry1(__Compare___measurements__inherit_prof_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___measurements__inherit_prof_info_0_0);
	MR_init_label6(__Compare___measurements__inherit_prof_info_0_0,3,2,5,9,13,37)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___measurements__inherit_prof_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___measurements__inherit_prof_info_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___measurements__inherit_prof_info_0_0_i2);
MR_def_label(__Compare___measurements__inherit_prof_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___measurements__inherit_prof_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(6) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(5) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(3) = MR_tfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_tfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___measurements__inherit_prof_info_0_0_i5);
MR_def_label(__Compare___measurements__inherit_prof_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___measurements__inherit_prof_info_0_0_i37);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___measurements__inherit_prof_info_0_0_i9);
MR_def_label(__Compare___measurements__inherit_prof_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___measurements__inherit_prof_info_0_0_i37);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___measurements__inherit_prof_info_0_0_i13);
MR_def_label(__Compare___measurements__inherit_prof_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___measurements__inherit_prof_info_0_0_i37);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___measurements__inherit_prof_info_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module54)
	MR_init_entry1(__Unify___measurements__is_active_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___measurements__is_active_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___measurements__is_active_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module55)
	MR_init_entry1(__Compare___measurements__is_active_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___measurements__is_active_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___measurements__is_active_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module56)
	MR_init_entry1(__Unify___measurements__own_prof_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___measurements__own_prof_info_0_0);
	MR_init_label6(__Unify___measurements__own_prof_info_0_0,5,7,9,11,17,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___measurements__own_prof_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___measurements__own_prof_info_0_0_i17);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Unify___measurements__own_prof_info_0_0_i5) MR_AND
		MR_LABEL_AP(__Unify___measurements__own_prof_info_0_0_i7) MR_AND
		MR_LABEL_AP(__Unify___measurements__own_prof_info_0_0_i9) MR_AND
		MR_LABEL_AP(__Unify___measurements__own_prof_info_0_0_i11));
MR_def_label(__Unify___measurements__own_prof_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___measurements__own_prof_info_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr2 = MR_sv(2);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___measurements__own_prof_info_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___measurements__own_prof_info_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	MR_r2 = MR_tfield(0, MR_tempr2, 2);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___measurements__own_prof_info_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 3);
	MR_r2 = MR_tfield(0, MR_tempr2, 3);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___measurements__own_prof_info_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 4);
	MR_r2 = MR_tfield(0, MR_tempr2, 4);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___measurements__own_prof_info_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 5);
	MR_r2 = MR_tfield(0, MR_tempr2, 5);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___measurements__own_prof_info_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 6);
	MR_r2 = MR_tfield(0, MR_tempr2, 6);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___measurements__own_prof_info_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 7);
	MR_r2 = MR_tfield(0, MR_tempr2, 7);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___measurements__own_prof_info_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___measurements__own_prof_info_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_tempr2 = MR_sv(2);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___measurements__own_prof_info_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_tempr1, 1);
	MR_r2 = MR_tfield(1, MR_tempr2, 1);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___measurements__own_prof_info_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_tempr1, 2);
	MR_r2 = MR_tfield(1, MR_tempr2, 2);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___measurements__own_prof_info_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_tempr1, 3);
	MR_r2 = MR_tfield(1, MR_tempr2, 3);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___measurements__own_prof_info_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_tempr1, 4);
	MR_r2 = MR_tfield(1, MR_tempr2, 4);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___measurements__own_prof_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___measurements__own_prof_info_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_r1 = MR_tfield(2, MR_tempr1, 0);
	MR_tempr2 = MR_sv(2);
	MR_r2 = MR_tfield(2, MR_tempr2, 0);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___measurements__own_prof_info_0_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_tempr1, 1);
	MR_r2 = MR_tfield(2, MR_tempr2, 1);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___measurements__own_prof_info_0_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_tempr1, 2);
	MR_r2 = MR_tfield(2, MR_tempr2, 2);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___measurements__own_prof_info_0_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_tempr1, 3);
	MR_r2 = MR_tfield(2, MR_tempr2, 3);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___measurements__own_prof_info_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Unify___measurements__own_prof_info_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_r1 = MR_tfield(3, MR_tempr1, 0);
	MR_tempr2 = MR_sv(2);
	MR_r2 = MR_tfield(3, MR_tempr2, 0);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___measurements__own_prof_info_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___measurements__own_prof_info_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_tempr1, 2);
	MR_r2 = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___measurements__own_prof_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___measurements__own_prof_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module57)
	MR_init_entry1(__Compare___measurements__own_prof_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___measurements__own_prof_info_0_0);
	MR_init_label10(__Compare___measurements__own_prof_info_0_0,3,5,9,13,17,21,25,29,33,51)
	MR_init_label10(__Compare___measurements__own_prof_info_0_0,54,56,60,64,68,82,86,88,92,96)
	MR_init_label7(__Compare___measurements__own_prof_info_0_0,103,108,112,113,115,119,250)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___measurements__own_prof_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___measurements__own_prof_info_0_0_i3);
	}
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Compare___measurements__own_prof_info_0_0_i5) MR_AND
		MR_LABEL_AP(__Compare___measurements__own_prof_info_0_0_i51) MR_AND
		MR_LABEL_AP(__Compare___measurements__own_prof_info_0_0_i82) MR_AND
		MR_LABEL_AP(__Compare___measurements__own_prof_info_0_0_i108));
MR_def_label(__Compare___measurements__own_prof_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___measurements__own_prof_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_sv(2)),0)) {
		MR_GOTO_LAB(__Compare___measurements__own_prof_info_0_0_i103);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(14) = MR_tfield(0, MR_tempr5, 1);
	MR_sv(13) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(12) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(11) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(10) = MR_tfield(0, MR_tempr5, 5);
	MR_sv(9) = MR_tfield(0, MR_tempr5, 6);
	MR_sv(8) = MR_tfield(0, MR_tempr5, 7);
	MR_tempr6 = MR_sv(2);
	MR_sv(7) = MR_tfield(0, MR_tempr6, 7);
	MR_sv(6) = MR_tfield(0, MR_tempr6, 6);
	MR_sv(5) = MR_tfield(0, MR_tempr6, 5);
	MR_sv(4) = MR_tfield(0, MR_tempr6, 4);
	MR_sv(3) = MR_tfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_tfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___measurements__own_prof_info_0_0_i9);
MR_def_label(__Compare___measurements__own_prof_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___measurements__own_prof_info_0_0_i250);
	}
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___measurements__own_prof_info_0_0_i13);
MR_def_label(__Compare___measurements__own_prof_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___measurements__own_prof_info_0_0_i250);
	}
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___measurements__own_prof_info_0_0_i17);
MR_def_label(__Compare___measurements__own_prof_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___measurements__own_prof_info_0_0_i250);
	}
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___measurements__own_prof_info_0_0_i21);
MR_def_label(__Compare___measurements__own_prof_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___measurements__own_prof_info_0_0_i250);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___measurements__own_prof_info_0_0_i25);
MR_def_label(__Compare___measurements__own_prof_info_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___measurements__own_prof_info_0_0_i250);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___measurements__own_prof_info_0_0_i29);
MR_def_label(__Compare___measurements__own_prof_info_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___measurements__own_prof_info_0_0_i250);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___measurements__own_prof_info_0_0_i33);
MR_def_label(__Compare___measurements__own_prof_info_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___measurements__own_prof_info_0_0_i250);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(7);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___measurements__own_prof_info_0_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___measurements__own_prof_info_0_0_i112) MR_AND
		MR_LABEL_AP(__Compare___measurements__own_prof_info_0_0_i54) MR_AND
		MR_LABEL_AP(__Compare___measurements__own_prof_info_0_0_i103) MR_AND
		MR_LABEL_AP(__Compare___measurements__own_prof_info_0_0_i103));
MR_def_label(__Compare___measurements__own_prof_info_0_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(8) = MR_tfield(1, MR_tempr5, 1);
	MR_sv(7) = MR_tfield(1, MR_tempr5, 2);
	MR_sv(6) = MR_tfield(1, MR_tempr5, 3);
	MR_sv(5) = MR_tfield(1, MR_tempr5, 4);
	MR_tempr6 = MR_sv(2);
	MR_sv(4) = MR_tfield(1, MR_tempr6, 4);
	MR_sv(3) = MR_tfield(1, MR_tempr6, 3);
	MR_tempr1 = MR_tfield(1, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(1, MR_tempr3, 0);
	MR_r2 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___measurements__own_prof_info_0_0_i56);
MR_def_label(__Compare___measurements__own_prof_info_0_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___measurements__own_prof_info_0_0_i250);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___measurements__own_prof_info_0_0_i60);
MR_def_label(__Compare___measurements__own_prof_info_0_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___measurements__own_prof_info_0_0_i250);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___measurements__own_prof_info_0_0_i64);
MR_def_label(__Compare___measurements__own_prof_info_0_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___measurements__own_prof_info_0_0_i250);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___measurements__own_prof_info_0_0_i68);
MR_def_label(__Compare___measurements__own_prof_info_0_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___measurements__own_prof_info_0_0_i250);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___measurements__own_prof_info_0_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___measurements__own_prof_info_0_0_i112) MR_AND
		MR_LABEL_AP(__Compare___measurements__own_prof_info_0_0_i112) MR_AND
		MR_LABEL_AP(__Compare___measurements__own_prof_info_0_0_i86) MR_AND
		MR_LABEL_AP(__Compare___measurements__own_prof_info_0_0_i103));
MR_def_label(__Compare___measurements__own_prof_info_0_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(6) = MR_tfield(2, MR_tempr5, 1);
	MR_sv(5) = MR_tfield(2, MR_tempr5, 2);
	MR_sv(4) = MR_tfield(2, MR_tempr5, 3);
	MR_tempr6 = MR_sv(2);
	MR_sv(3) = MR_tfield(2, MR_tempr6, 3);
	MR_tempr1 = MR_tfield(2, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(2, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(2, MR_tempr3, 0);
	MR_r2 = MR_tfield(2, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___measurements__own_prof_info_0_0_i88);
MR_def_label(__Compare___measurements__own_prof_info_0_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___measurements__own_prof_info_0_0_i250);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___measurements__own_prof_info_0_0_i92);
MR_def_label(__Compare___measurements__own_prof_info_0_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___measurements__own_prof_info_0_0_i250);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___measurements__own_prof_info_0_0_i96);
MR_def_label(__Compare___measurements__own_prof_info_0_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___measurements__own_prof_info_0_0_i250);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___measurements__own_prof_info_0_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(15);
MR_def_label(__Compare___measurements__own_prof_info_0_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_tag(MR_sv(2)),3)) {
		MR_GOTO_LAB(__Compare___measurements__own_prof_info_0_0_i113);
	}
MR_def_label(__Compare___measurements__own_prof_info_0_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(15);
MR_def_label(__Compare___measurements__own_prof_info_0_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(4) = MR_tfield(3, MR_tempr5, 1);
	MR_sv(3) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 0);
	MR_r2 = MR_tfield(3, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___measurements__own_prof_info_0_0_i115);
MR_def_label(__Compare___measurements__own_prof_info_0_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___measurements__own_prof_info_0_0_i250);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___measurements__own_prof_info_0_0_i119);
MR_def_label(__Compare___measurements__own_prof_info_0_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___measurements__own_prof_info_0_0_i250);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___measurements__own_prof_info_0_0,250)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module58)
	MR_init_entry1(__Unify___measurements__parallelism_amount_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___measurements__parallelism_amount_0_0);
	MR_init_label1(__Unify___measurements__parallelism_amount_0_0,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___measurements__parallelism_amount_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___measurements__parallelism_amount_0_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_word_to_float(MR_sv(1)) == MR_word_to_float(MR_sv(2)));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___measurements__parallelism_amount_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module59)
	MR_init_entry1(__Compare___measurements__parallelism_amount_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___measurements__parallelism_amount_0_0);
	MR_init_label2(__Compare___measurements__parallelism_amount_0_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___measurements__parallelism_amount_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___measurements__parallelism_amount_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___measurements__parallelism_amount_0_0_i2);
MR_def_label(__Compare___measurements__parallelism_amount_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___measurements__parallelism_amount_0_0,2)
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


MR_BEGIN_MODULE(measurements_module60)
	MR_init_entry1(__Unify___measurements__proc_cost_csq_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___measurements__proc_cost_csq_0_0);
	MR_init_label2(__Unify___measurements__proc_cost_csq_0_0,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___measurements__proc_cost_csq_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___measurements__proc_cost_csq_0_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___measurements__proc_cost_csq_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 1);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 1);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___measurements__proc_cost_csq_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	MR_r2 = MR_tfield(0, MR_tempr2, 2);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___measurements__cost_0_0);
	}
MR_def_label(__Unify___measurements__proc_cost_csq_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___measurements__proc_cost_csq_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module61)
	MR_init_entry1(__Compare___measurements__proc_cost_csq_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___measurements__proc_cost_csq_0_0);
	MR_init_label5(__Compare___measurements__proc_cost_csq_0_0,3,2,5,9,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___measurements__proc_cost_csq_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___measurements__proc_cost_csq_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___measurements__proc_cost_csq_0_0_i2);
MR_def_label(__Compare___measurements__proc_cost_csq_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___measurements__proc_cost_csq_0_0,2)
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___measurements__proc_cost_csq_0_0_i5);
MR_def_label(__Compare___measurements__proc_cost_csq_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___measurements__proc_cost_csq_0_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___measurements__proc_cost_csq_0_0_i9);
MR_def_label(__Compare___measurements__proc_cost_csq_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___measurements__proc_cost_csq_0_0_i29);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___measurements__cost_0_0);
MR_def_label(__Compare___measurements__proc_cost_csq_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__measurements_maybe_bunch_0(void)
{
	measurements_module0();
	measurements_module1();
	measurements_module2();
	measurements_module3();
	measurements_module4();
	measurements_module5();
	measurements_module6();
	measurements_module7();
	measurements_module8();
	measurements_module9();
	measurements_module10();
	measurements_module11();
	measurements_module12();
	measurements_module13();
	measurements_module14();
	measurements_module15();
	measurements_module16();
	measurements_module17();
	measurements_module18();
	measurements_module19();
	measurements_module20();
	measurements_module21();
	measurements_module22();
	measurements_module23();
	measurements_module24();
	measurements_module25();
	measurements_module26();
	measurements_module27();
	measurements_module28();
	measurements_module29();
	measurements_module30();
	measurements_module31();
	measurements_module32();
	measurements_module33();
	measurements_module34();
	measurements_module35();
	measurements_module36();
	measurements_module37();
	measurements_module38();
	measurements_module39();
}

static void mercury__measurements_maybe_bunch_1(void)
{
	measurements_module40();
	measurements_module41();
	measurements_module42();
	measurements_module43();
	measurements_module44();
	measurements_module45();
	measurements_module46();
	measurements_module47();
	measurements_module48();
	measurements_module49();
	measurements_module50();
	measurements_module51();
	measurements_module52();
	measurements_module53();
	measurements_module54();
	measurements_module55();
	measurements_module56();
	measurements_module57();
	measurements_module58();
	measurements_module59();
	measurements_module60();
	measurements_module61();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__measurements__init(void);
void mercury__measurements__init_type_tables(void);
void mercury__measurements__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__measurements__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__measurements__init_complexity_procs(void);
#endif

void mercury__measurements__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__measurements_maybe_bunch_0();
	mercury__measurements_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_measurements__type_ctor_info_cost_0,
		measurements__cost_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_measurements__type_ctor_info_cs_cost_csq_0,
		measurements__cs_cost_csq_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_measurements__type_ctor_info_inherit_prof_info_0,
		measurements__inherit_prof_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_measurements__type_ctor_info_is_active_0,
		measurements__is_active_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_measurements__type_ctor_info_own_prof_info_0,
		measurements__own_prof_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_measurements__type_ctor_info_parallelism_amount_0,
		measurements__parallelism_amount_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_measurements__type_ctor_info_proc_cost_csq_0,
		measurements__proc_cost_csq_0_0);
	mercury__measurements__init_debugger();
}

void mercury__measurements__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_measurements__type_ctor_info_cost_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_measurements__type_ctor_info_cs_cost_csq_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_measurements__type_ctor_info_inherit_prof_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_measurements__type_ctor_info_is_active_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_measurements__type_ctor_info_own_prof_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_measurements__type_ctor_info_parallelism_amount_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_measurements__type_ctor_info_proc_cost_csq_0);
	}
}


void mercury__measurements__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__measurements__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__measurements);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__measurements__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
