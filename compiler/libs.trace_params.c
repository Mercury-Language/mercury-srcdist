/*
** Automatically generated from `trace_params.m'
** by the Mercury compiler,
** version 10.04.2, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__libs__trace_params__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 141 "../library/io.int2"
#include "io.mh"

#line 28 "libs.trace_params.c"
#line 149 "../library/io.int2"
#include "string.mh"

#line 32 "libs.trace_params.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 36 "libs.trace_params.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 40 "libs.trace_params.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "libs.trace_params.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 48 "libs.trace_params.c"
#line 49 "libs.trace_params.c"
#include "libs.trace_params.mh"

#line 52 "libs.trace_params.c"
#line 53 "libs.trace_params.c"
#ifndef LIBS__TRACE_PARAMS_DECL_GUARD
#define LIBS__TRACE_PARAMS_DECL_GUARD

#line 57 "libs.trace_params.c"
#line 58 "libs.trace_params.c"

#endif
#line 61 "libs.trace_params.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Integer f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_libs__trace_params__type_ctor_info_port_category_0,
	mercury_data_libs__trace_params__type_ctor_info_trace_level_0,
	mercury_data_libs__trace_params__type_ctor_info_trace_suppress_item_0,
	mercury_data_libs__trace_params__type_ctor_info_trace_suppress_items_0;
MR_decl_label10(libs__trace_params__convert_item_name_2_0, 4,5,6,7,8,9,10,11,12,13)
MR_decl_label10(libs__trace_params__convert_item_name_2_0, 14,15,16,17,18,19,20,21,22,23)
MR_decl_label10(libs__trace_params__convert_item_name_2_0, 24,25,26,27,28,3,2,35,36,34)
MR_decl_label8(libs__trace_params__convert_item_name_2_0, 39,33,41,43,45,47,49,1)
MR_decl_label10(libs__trace_params__convert_trace_level_4_0, 3,32,5,34,7,11,19,42,29,1)
MR_decl_label5(libs__trace_params__convert_trace_suppress_2_0, 3,6,8,9,1)
MR_decl_label10(libs__trace_params__maybe_add_suppressed_event_3_0, 5,6,7,8,9,10,11,12,13,14)
MR_decl_label9(libs__trace_params__maybe_add_suppressed_event_3_0, 15,16,17,18,19,20,21,22,3)
MR_decl_label4(fn__libs__trace_params__at_least_at_deep_1_0, 3,14,4,5)
MR_decl_label5(fn__libs__trace_params__at_least_at_shallow_1_0, 3,4,5,11,6)
MR_decl_label10(fn__libs__trace_params__eff_trace_level_4_0, 43,2,4,61,8,9,47,6,14,18)
MR_decl_label10(fn__libs__trace_params__eff_trace_level_4_0, 20,21,24,11,28,32,34,35,38,40)
MR_decl_label1(fn__libs__trace_params__eff_trace_level_4_0, 37)
MR_decl_label6(fn__libs__trace_params__eff_trace_level_is_none_4_0, 2,4,5,6,12,7)
MR_decl_label6(fn__libs__trace_params__eff_trace_level_needs_fail_vars_4_0, 2,4,5,6,12,7)
MR_decl_label6(fn__libs__trace_params__eff_trace_level_needs_fixed_slots_4_0, 2,4,5,6,12,7)
MR_decl_label6(fn__libs__trace_params__eff_trace_level_needs_from_full_slot_4_0, 2,4,5,6,7,8)
MR_decl_label6(fn__libs__trace_params__eff_trace_level_needs_input_vars_4_0, 2,4,5,6,12,7)
MR_decl_label3(fn__libs__trace_params__eff_trace_needs_all_var_names_5_0, 2,6,3)
MR_decl_label10(fn__libs__trace_params__eff_trace_needs_port_6_0, 2,5,6,7,8,9,10,11,12,13)
MR_decl_label10(fn__libs__trace_params__eff_trace_needs_port_6_0, 14,15,16,17,18,19,20,21,4,23)
MR_decl_label10(fn__libs__trace_params__eff_trace_needs_port_6_0, 24,26,27,28,30,35,37,39,43,33)
MR_decl_label1(fn__libs__trace_params__eff_trace_needs_port_6_0, 3)
MR_decl_label3(fn__libs__trace_params__eff_trace_needs_proc_body_reps_5_0, 2,6,3)
MR_decl_label5(fn__libs__trace_params__given_trace_level_is_none_1_0, 3,4,5,11,6)
MR_decl_label4(fn__libs__trace_params__trace_level_allows_delay_death_1_0, 13,3,4,5)
MR_decl_label5(fn__libs__trace_params__trace_level_allows_tail_rec_1_0, 3,4,10,5,6)
MR_decl_label5(fn__libs__trace_params__trace_level_for_unify_compare_1_0, 3,4,5,11,6)
MR_decl_label4(fn__libs__trace_params__trace_level_needs_meaningful_var_names_1_0, 13,3,4,5)
MR_decl_label5(fn__libs__trace_params__trace_level_rep_1_0, 3,4,5,6,7)
MR_decl_label7(fn__libs__trace_params__trace_needs_return_info_2_0, 4,5,6,7,3,10,2)
MR_decl_label5(__Unify___libs__trace_params__trace_suppress_item_0_0, 5,6,16,7,1)
MR_decl_label10(__Compare___libs__trace_params__trace_suppress_item_0_0, 7,8,5,78,12,10,17,18,54,15)
MR_decl_label3(__Compare___libs__trace_params__trace_suppress_item_0_0, 21,22,23)
MR_def_extern_entry(libs__trace_params__convert_trace_level_4_0)
MR_def_extern_entry(libs__trace_params__convert_trace_suppress_2_0)
MR_def_extern_entry(fn__libs__trace_params__default_trace_suppress_0_0)
MR_def_extern_entry(fn__libs__trace_params__given_trace_level_is_none_1_0)
MR_def_extern_entry(fn__libs__trace_params__trace_level_allows_delay_death_1_0)
MR_def_extern_entry(fn__libs__trace_params__trace_needs_return_info_2_0)
MR_def_extern_entry(fn__libs__trace_params__trace_level_allows_tail_rec_1_0)
MR_def_extern_entry(fn__libs__trace_params__trace_level_needs_meaningful_var_names_1_0)
MR_def_extern_entry(fn__libs__trace_params__eff_trace_level_4_0)
MR_def_extern_entry(fn__libs__trace_params__eff_trace_level_is_none_4_0)
MR_def_extern_entry(fn__libs__trace_params__eff_trace_level_needs_input_vars_4_0)
MR_def_extern_entry(fn__libs__trace_params__eff_trace_level_needs_fail_vars_4_0)
MR_def_extern_entry(fn__libs__trace_params__eff_trace_level_needs_fixed_slots_4_0)
MR_def_extern_entry(fn__libs__trace_params__eff_trace_level_needs_from_full_slot_4_0)
MR_def_extern_entry(fn__libs__trace_params__eff_trace_needs_all_var_names_5_0)
MR_def_extern_entry(fn__libs__trace_params__eff_trace_needs_proc_body_reps_5_0)
MR_def_extern_entry(fn__libs__trace_params__eff_trace_needs_port_6_0)
MR_def_extern_entry(fn__libs__trace_params__trace_level_none_0_0)
MR_def_extern_entry(fn__libs__trace_params__at_least_at_shallow_1_0)
MR_def_extern_entry(fn__libs__trace_params__at_least_at_deep_1_0)
MR_def_extern_entry(fn__libs__trace_params__trace_level_for_unify_compare_1_0)
MR_def_extern_entry(fn__libs__trace_params__trace_level_rep_1_0)
MR_def_extern_entry(fn__libs__trace_params__encode_suppressed_events_1_0)
MR_decl_static(libs__trace_params__char_is_comma_1_0)
MR_decl_static(libs__trace_params__convert_item_name_2_0)
MR_decl_static(libs__trace_params__wrap_port_2_0)
MR_decl_static(libs__trace_params__maybe_add_suppressed_event_3_0)
MR_decl_static(__Unify___libs__trace_params__port_category_0_0)
MR_decl_static(__Compare___libs__trace_params__port_category_0_0)
MR_def_extern_entry(__Unify___libs__trace_params__trace_level_0_0)
MR_def_extern_entry(__Compare___libs__trace_params__trace_level_0_0)
MR_def_extern_entry(__Unify___libs__trace_params__trace_suppress_item_0_0)
MR_def_extern_entry(__Compare___libs__trace_params__trace_suppress_item_0_0)
MR_def_extern_entry(__Unify___libs__trace_params__trace_suppress_items_0_0)
MR_def_extern_entry(__Compare___libs__trace_params__trace_suppress_items_0_0)

static const struct mercury_type_0 mercury_common_0[4] =
{
{
5
},
{
4
},
{
0
},
{
3
},
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__trace_params__convert_trace_suppress_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
static const struct mercury_type_1 mercury_common_1[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__libs__trace_params__convert_trace_suppress_2_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_CHAR_CTOR_ADDR
},
};

static const struct mercury_type_2 mercury_common_2[4] =
{
{
MR_COMMON(1,0),
MR_ENTRY_AP(libs__trace_params__char_is_comma_1_0),
0
},
{
MR_COMMON(4,0),
MR_ENTRY_AP(libs__trace_params__convert_item_name_2_0),
0
},
{
MR_COMMON(6,0),
MR_ENTRY_AP(libs__trace_params__maybe_add_suppressed_event_3_0),
0
},
{
MR_COMMON(4,1),
MR_ENTRY_AP(libs__trace_params__wrap_port_2_0),
0
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__trace_params__type_ctor_info_trace_suppress_item_0;
static const struct mercury_type_3 mercury_common_3[5] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(libs__trace_params, trace_suppress_item)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(libs__trace_params, trace_suppress_item)
}
},
{
{
MR_tbmkword(0, 1),
MR_tbmkword(0, 0)
}
},
{
{
MR_tbmkword(0, 2),
MR_tbmkword(0, 0)
}
},
{
{
MR_tbmkword(0, 0),
MR_tbmkword(0, 0)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__trace_params__convert_trace_suppress_2_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const MR_UserClosureId
mercury_data__closure_layout__libs__trace_params__convert_item_name_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_trace_port_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__trace_params__type_ctor_info_trace_suppress_item_0;
static const struct mercury_type_4 mercury_common_4[2] =
{
{
(MR_Word *) &mercury_data__closure_layout__libs__trace_params__convert_trace_suppress_2_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_STRING_CTOR_ADDR,
MR_COMMON(3,1)
},
{
(MR_Word *) &mercury_data__closure_layout__libs__trace_params__convert_item_name_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(mdbcomp__prim_data, trace_port),
MR_CTOR0_ADDR(libs__trace_params, trace_suppress_item)
},
};

static const struct mercury_type_5 mercury_common_5[19] =
{
{
3,
MR_tbmkword(0, 0)
},
{
2,
MR_TAG_COMMON(1,5,0)
},
{
1,
MR_TAG_COMMON(1,5,1)
},
{
0,
MR_TAG_COMMON(1,5,2)
},
{
0,
MR_tbmkword(0, 0)
},
{
11,
MR_tbmkword(0, 0)
},
{
10,
MR_TAG_COMMON(1,5,5)
},
{
9,
MR_TAG_COMMON(1,5,6)
},
{
6,
MR_TAG_COMMON(1,5,7)
},
{
13,
MR_tbmkword(0, 0)
},
{
12,
MR_TAG_COMMON(1,5,9)
},
{
14,
MR_TAG_COMMON(1,5,10)
},
{
8,
MR_TAG_COMMON(1,5,11)
},
{
7,
MR_TAG_COMMON(1,5,12)
},
{
5,
MR_tbmkword(0, 0)
},
{
3,
MR_TAG_COMMON(1,5,14)
},
{
2,
MR_TAG_COMMON(1,5,15)
},
{
1,
MR_TAG_COMMON(1,5,16)
},
{
0,
MR_TAG_COMMON(1,5,17)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__libs__trace_params__encode_suppressed_events_1_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_6 mercury_common_6[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__fn__libs__trace_params__encode_suppressed_events_1_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(libs__trace_params, trace_suppress_item),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
};

static const MR_EnumFunctorDesc mercury_data_libs__trace_params__enum_functor_desc_port_category_0_0 = {
	"port_cat_interface",
	0
};

static const MR_EnumFunctorDesc mercury_data_libs__trace_params__enum_functor_desc_port_category_0_1 = {
	"port_cat_internal",
	1
};

static const MR_EnumFunctorDesc mercury_data_libs__trace_params__enum_functor_desc_port_category_0_2 = {
	"port_cat_context",
	2
};

static const MR_EnumFunctorDesc mercury_data_libs__trace_params__enum_functor_desc_port_category_0_3 = {
	"port_cat_user",
	3
};

const MR_EnumFunctorDescPtr mercury_data_libs__trace_params__enum_value_ordered_port_category_0[] = {
	&mercury_data_libs__trace_params__enum_functor_desc_port_category_0_0,
	&mercury_data_libs__trace_params__enum_functor_desc_port_category_0_1,
	&mercury_data_libs__trace_params__enum_functor_desc_port_category_0_2,
	&mercury_data_libs__trace_params__enum_functor_desc_port_category_0_3
};

const MR_EnumFunctorDescPtr mercury_data_libs__trace_params__enum_name_ordered_port_category_0[] = {
	&mercury_data_libs__trace_params__enum_functor_desc_port_category_0_2,
	&mercury_data_libs__trace_params__enum_functor_desc_port_category_0_0,
	&mercury_data_libs__trace_params__enum_functor_desc_port_category_0_1,
	&mercury_data_libs__trace_params__enum_functor_desc_port_category_0_3
};

const MR_Integer mercury_data_libs__trace_params__functor_number_map_port_category_0[] = {
	1,
	2,
	0,
	3 };
	
const MR_TypeCtorInfo_Struct mercury_data_libs__trace_params__type_ctor_info_port_category_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___libs__trace_params__port_category_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___libs__trace_params__port_category_0_0)),
	"libs.trace_params",
	"port_category",
	{ (void *)mercury_data_libs__trace_params__enum_name_ordered_port_category_0 },
	{ (void *)mercury_data_libs__trace_params__enum_value_ordered_port_category_0 },
	4,
	4,
	mercury_data_libs__trace_params__functor_number_map_port_category_0
};

static const MR_EnumFunctorDesc mercury_data_libs__trace_params__enum_functor_desc_trace_level_0_0 = {
	"none",
	0
};

static const MR_EnumFunctorDesc mercury_data_libs__trace_params__enum_functor_desc_trace_level_0_1 = {
	"basic",
	1
};

static const MR_EnumFunctorDesc mercury_data_libs__trace_params__enum_functor_desc_trace_level_0_2 = {
	"basic_user",
	2
};

static const MR_EnumFunctorDesc mercury_data_libs__trace_params__enum_functor_desc_trace_level_0_3 = {
	"shallow",
	3
};

static const MR_EnumFunctorDesc mercury_data_libs__trace_params__enum_functor_desc_trace_level_0_4 = {
	"deep",
	4
};

static const MR_EnumFunctorDesc mercury_data_libs__trace_params__enum_functor_desc_trace_level_0_5 = {
	"decl_rep",
	5
};

const MR_EnumFunctorDescPtr mercury_data_libs__trace_params__enum_value_ordered_trace_level_0[] = {
	&mercury_data_libs__trace_params__enum_functor_desc_trace_level_0_0,
	&mercury_data_libs__trace_params__enum_functor_desc_trace_level_0_1,
	&mercury_data_libs__trace_params__enum_functor_desc_trace_level_0_2,
	&mercury_data_libs__trace_params__enum_functor_desc_trace_level_0_3,
	&mercury_data_libs__trace_params__enum_functor_desc_trace_level_0_4,
	&mercury_data_libs__trace_params__enum_functor_desc_trace_level_0_5
};

const MR_EnumFunctorDescPtr mercury_data_libs__trace_params__enum_name_ordered_trace_level_0[] = {
	&mercury_data_libs__trace_params__enum_functor_desc_trace_level_0_1,
	&mercury_data_libs__trace_params__enum_functor_desc_trace_level_0_2,
	&mercury_data_libs__trace_params__enum_functor_desc_trace_level_0_5,
	&mercury_data_libs__trace_params__enum_functor_desc_trace_level_0_4,
	&mercury_data_libs__trace_params__enum_functor_desc_trace_level_0_0,
	&mercury_data_libs__trace_params__enum_functor_desc_trace_level_0_3
};

const MR_Integer mercury_data_libs__trace_params__functor_number_map_trace_level_0[] = {
	4,
	0,
	1,
	5,
	3,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_libs__trace_params__type_ctor_info_trace_level_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___libs__trace_params__trace_level_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___libs__trace_params__trace_level_0_0)),
	"libs.trace_params",
	"trace_level",
	{ (void *)mercury_data_libs__trace_params__enum_name_ordered_trace_level_0 },
	{ (void *)mercury_data_libs__trace_params__enum_value_ordered_trace_level_0 },
	6,
	4,
	mercury_data_libs__trace_params__functor_number_map_trace_level_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_trace_port_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_trace_port_0;

const MR_PseudoTypeInfo mercury_data_libs__trace_params__field_types_trace_suppress_item_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_trace_port_0
};

static const MR_DuFunctorDesc mercury_data_libs__trace_params__du_functor_desc_trace_suppress_item_0_0 = {
	"suppress_port",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_libs__trace_params__field_types_trace_suppress_item_0_0,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_libs__trace_params__du_functor_desc_trace_suppress_item_0_1 = {
	"suppress_return_info",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	1,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_libs__trace_params__du_functor_desc_trace_suppress_item_0_2 = {
	"suppress_all_var_names",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	1,
	2,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_libs__trace_params__du_functor_desc_trace_suppress_item_0_3 = {
	"suppress_proc_body_reps",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	2,
	3,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_libs__trace_params__du_stag_ordered_trace_suppress_item_0_0[] = {
	&mercury_data_libs__trace_params__du_functor_desc_trace_suppress_item_0_1,
	&mercury_data_libs__trace_params__du_functor_desc_trace_suppress_item_0_2,
	&mercury_data_libs__trace_params__du_functor_desc_trace_suppress_item_0_3

};

const MR_DuFunctorDescPtr mercury_data_libs__trace_params__du_stag_ordered_trace_suppress_item_0_1[] = {
	&mercury_data_libs__trace_params__du_functor_desc_trace_suppress_item_0_0

};

const MR_DuPtagLayout mercury_data_libs__trace_params__du_ptag_ordered_trace_suppress_item_0[] = {
	{ 3, MR_SECTAG_LOCAL,
	mercury_data_libs__trace_params__du_stag_ordered_trace_suppress_item_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_libs__trace_params__du_stag_ordered_trace_suppress_item_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_libs__trace_params__du_name_ordered_trace_suppress_item_0[] = {
	&mercury_data_libs__trace_params__du_functor_desc_trace_suppress_item_0_2,
	&mercury_data_libs__trace_params__du_functor_desc_trace_suppress_item_0_0,
	&mercury_data_libs__trace_params__du_functor_desc_trace_suppress_item_0_3,
	&mercury_data_libs__trace_params__du_functor_desc_trace_suppress_item_0_1
};

const MR_Integer mercury_data_libs__trace_params__functor_number_map_trace_suppress_item_0[] = {
	1,
	3,
	0,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_libs__trace_params__type_ctor_info_trace_suppress_item_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___libs__trace_params__trace_suppress_item_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___libs__trace_params__trace_suppress_item_0_0)),
	"libs.trace_params",
	"trace_suppress_item",
	{ (void *)mercury_data_libs__trace_params__du_name_ordered_trace_suppress_item_0 },
	{ (void *)mercury_data_libs__trace_params__du_ptag_ordered_trace_suppress_item_0 },
	4,
	4,
	mercury_data_libs__trace_params__functor_number_map_trace_suppress_item_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;

static const MR_FA_TypeInfo_Struct1 mercury_data_set_ordlist__ti_set_ordlist_1libs__trace_params__type_ctor_info_trace_suppress_item_0 = {
	&mercury_data_set_ordlist__type_ctor_info_set_ordlist_1,
{	(MR_TypeInfo) &mercury_data_libs__trace_params__type_ctor_info_trace_suppress_item_0
}};

const MR_TypeCtorInfo_Struct mercury_data_libs__trace_params__type_ctor_info_trace_suppress_items_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___libs__trace_params__trace_suppress_items_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___libs__trace_params__trace_suppress_items_0_0)),
	"libs.trace_params",
	"trace_suppress_items",
	{ 0 },
	{ (void *)&mercury_data_set_ordlist__ti_set_ordlist_1libs__trace_params__type_ctor_info_trace_suppress_item_0 },
	-1,
	0,
	NULL
};


static const MR_UserClosureId
mercury_data__closure_layout__libs__trace_params__convert_item_name_2_0_1 = {
{
MR_PREDICATE,
"libs.trace_params",
"libs.trace_params",
"wrap_port",
2,
0
},
"libs.trace_params",
"trace_params.m",
531,
"d1;c3;e;t;c1;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__libs__trace_params__encode_suppressed_events_1_0_1 = {
{
MR_PREDICATE,
"libs.trace_params",
"libs.trace_params",
"maybe_add_suppressed_event",
3,
0
},
"libs.trace_params",
"trace_params.m",
626,
"d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__trace_params__convert_trace_suppress_2_0_2 = {
{
MR_PREDICATE,
"libs.trace_params",
"libs.trace_params",
"convert_item_name",
2,
0
},
"libs.trace_params",
"trace_params.m",
456,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__trace_params__convert_trace_suppress_2_0_1 = {
{
MR_PREDICATE,
"libs.trace_params",
"libs.trace_params",
"char_is_comma",
1,
0
},
"libs.trace_params",
"trace_params.m",
455,
"d1;c4;"
};



MR_BEGIN_MODULE(libs__trace_params_module0)
	MR_init_entry1(libs__trace_params__convert_trace_level_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__trace_params__convert_trace_level_4_0);
	MR_init_label10(libs__trace_params__convert_trace_level_4_0,3,32,5,34,7,11,19,42,29,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'convert_trace_level'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__trace_params__convert_trace_level_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("rep", 3)) != 0)) {
		MR_GOTO_LAB(libs__trace_params__convert_trace_level_4_0_i3);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,0,0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__trace_params__convert_trace_level_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("decl", 4)) != 0)) {
		MR_GOTO_LAB(libs__trace_params__convert_trace_level_4_0_i5);
	}
MR_def_label(libs__trace_params__convert_trace_level_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,0,0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__trace_params__convert_trace_level_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("deep", 4)) != 0)) {
		MR_GOTO_LAB(libs__trace_params__convert_trace_level_4_0_i7);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(libs__trace_params__convert_trace_level_4_0_i29);
	}
MR_def_label(libs__trace_params__convert_trace_level_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,0,1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__trace_params__convert_trace_level_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("default", 7)) != 0)) {
		MR_GOTO_LAB(libs__trace_params__convert_trace_level_4_0_i11);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(libs__trace_params__convert_trace_level_4_0_i32);
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(libs__trace_params__convert_trace_level_4_0_i34);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,0,2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__trace_params__convert_trace_level_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("minimum", 7)) != 0)) {
		MR_GOTO_LAB(libs__trace_params__convert_trace_level_4_0_i19);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(libs__trace_params__convert_trace_level_4_0_i32);
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(libs__trace_params__convert_trace_level_4_0_i42);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,0,2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__trace_params__convert_trace_level_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("shallow", 7)) != 0)) {
		MR_GOTO_LAB(libs__trace_params__convert_trace_level_4_0_i1);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(libs__trace_params__convert_trace_level_4_0_i29);
	}
MR_def_label(libs__trace_params__convert_trace_level_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,0,3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__trace_params__convert_trace_level_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__trace_params__convert_trace_level_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__words_separator_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(list__map_3_2);
MR_decl_entry(list__condense_2_0);
MR_decl_entry(set__list_to_set_2_0);

MR_BEGIN_MODULE(libs__trace_params_module1)
	MR_init_entry1(libs__trace_params__convert_trace_suppress_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__trace_params__convert_trace_suppress_2_0);
	MR_init_label5(libs__trace_params__convert_trace_suppress_2_0,3,6,8,9,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'convert_trace_suppress'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__trace_params__convert_trace_suppress_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__words_separator_2_0,
		libs__trace_params__convert_trace_suppress_2_0_i3);
MR_def_label(libs__trace_params__convert_trace_suppress_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(libs__trace_params, trace_suppress_item);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map_3_2,
		libs__trace_params__convert_trace_suppress_2_0_i6);
MR_def_label(libs__trace_params__convert_trace_suppress_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__trace_params__convert_trace_suppress_2_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(list__condense_2_0,
		libs__trace_params__convert_trace_suppress_2_0_i8);
MR_def_label(libs__trace_params__convert_trace_suppress_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__list_to_set_2_0,
		libs__trace_params__convert_trace_suppress_2_0_i9);
MR_def_label(libs__trace_params__convert_trace_suppress_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__trace_params__convert_trace_suppress_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__set__init_0_0);

MR_BEGIN_MODULE(libs__trace_params_module2)
	MR_init_entry1(fn__libs__trace_params__default_trace_suppress_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__libs__trace_params__default_trace_suppress_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'default_trace_suppress'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__libs__trace_params__default_trace_suppress_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__trace_params, trace_suppress_item);
	MR_np_tailcall_ent(fn__set__init_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__trace_params_module3)
	MR_init_entry1(fn__libs__trace_params__given_trace_level_is_none_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__libs__trace_params__given_trace_level_is_none_1_0);
	MR_init_label5(fn__libs__trace_params__given_trace_level_is_none_1_0,3,4,5,11,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'given_trace_level_is_none'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__libs__trace_params__given_trace_level_is_none_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__libs__trace_params__given_trace_level_is_none_1_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__libs__trace_params__given_trace_level_is_none_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(fn__libs__trace_params__given_trace_level_is_none_1_0_i4);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__libs__trace_params__given_trace_level_is_none_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,5)) {
		MR_GOTO_LAB(fn__libs__trace_params__given_trace_level_is_none_1_0_i5);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__libs__trace_params__given_trace_level_is_none_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,4)) {
		MR_GOTO_LAB(fn__libs__trace_params__given_trace_level_is_none_1_0_i6);
	}
MR_def_label(fn__libs__trace_params__given_trace_level_is_none_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__libs__trace_params__given_trace_level_is_none_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__libs__trace_params__given_trace_level_is_none_1_0_i11);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__trace_params_module4)
	MR_init_entry1(fn__libs__trace_params__trace_level_allows_delay_death_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__libs__trace_params__trace_level_allows_delay_death_1_0);
	MR_init_label4(fn__libs__trace_params__trace_level_allows_delay_death_1_0,13,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'trace_level_allows_delay_death'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__libs__trace_params__trace_level_allows_delay_death_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__libs__trace_params__trace_level_allows_delay_death_1_0_i3);
	}
MR_def_label(fn__libs__trace_params__trace_level_allows_delay_death_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__libs__trace_params__trace_level_allows_delay_death_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(fn__libs__trace_params__trace_level_allows_delay_death_1_0_i4);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__libs__trace_params__trace_level_allows_delay_death_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,5)) {
		MR_GOTO_LAB(fn__libs__trace_params__trace_level_allows_delay_death_1_0_i5);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__libs__trace_params__trace_level_allows_delay_death_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,4)) {
		MR_GOTO_LAB(fn__libs__trace_params__trace_level_allows_delay_death_1_0_i13);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__member_2_0);

MR_BEGIN_MODULE(libs__trace_params_module5)
	MR_init_entry1(fn__libs__trace_params__trace_needs_return_info_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__libs__trace_params__trace_needs_return_info_2_0);
	MR_init_label7(fn__libs__trace_params__trace_needs_return_info_2_0,4,5,6,7,3,10,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'trace_needs_return_info'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__libs__trace_params__trace_needs_return_info_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__libs__trace_params__trace_needs_return_info_2_0_i4);
	}
	MR_r3 = MR_r2;
	MR_GOTO_LAB(fn__libs__trace_params__trace_needs_return_info_2_0_i3);
MR_def_label(fn__libs__trace_params__trace_needs_return_info_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(fn__libs__trace_params__trace_needs_return_info_2_0_i5);
	}
	MR_r3 = MR_r2;
	MR_GOTO_LAB(fn__libs__trace_params__trace_needs_return_info_2_0_i3);
MR_def_label(fn__libs__trace_params__trace_needs_return_info_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,5)) {
		MR_GOTO_LAB(fn__libs__trace_params__trace_needs_return_info_2_0_i6);
	}
	MR_r3 = MR_r2;
	MR_GOTO_LAB(fn__libs__trace_params__trace_needs_return_info_2_0_i3);
MR_def_label(fn__libs__trace_params__trace_needs_return_info_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,4)) {
		MR_GOTO_LAB(fn__libs__trace_params__trace_needs_return_info_2_0_i7);
	}
	MR_r3 = MR_r2;
	MR_GOTO_LAB(fn__libs__trace_params__trace_needs_return_info_2_0_i3);
MR_def_label(fn__libs__trace_params__trace_needs_return_info_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(fn__libs__trace_params__trace_needs_return_info_2_0_i2);
	}
	MR_r3 = MR_r2;
MR_def_label(fn__libs__trace_params__trace_needs_return_info_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__trace_params, trace_suppress_item);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(set__member_2_0,
		fn__libs__trace_params__trace_needs_return_info_2_0_i10);
MR_def_label(fn__libs__trace_params__trace_needs_return_info_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(fn__libs__trace_params__trace_needs_return_info_2_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(1);
MR_def_label(fn__libs__trace_params__trace_needs_return_info_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__trace_params_module6)
	MR_init_entry1(fn__libs__trace_params__trace_level_allows_tail_rec_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__libs__trace_params__trace_level_allows_tail_rec_1_0);
	MR_init_label5(fn__libs__trace_params__trace_level_allows_tail_rec_1_0,3,4,10,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'trace_level_allows_tail_rec'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__libs__trace_params__trace_level_allows_tail_rec_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__libs__trace_params__trace_level_allows_tail_rec_1_0_i3);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__libs__trace_params__trace_level_allows_tail_rec_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(fn__libs__trace_params__trace_level_allows_tail_rec_1_0_i4);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__libs__trace_params__trace_level_allows_tail_rec_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,5)) {
		MR_GOTO_LAB(fn__libs__trace_params__trace_level_allows_tail_rec_1_0_i5);
	}
MR_def_label(fn__libs__trace_params__trace_level_allows_tail_rec_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__libs__trace_params__trace_level_allows_tail_rec_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,4)) {
		MR_GOTO_LAB(fn__libs__trace_params__trace_level_allows_tail_rec_1_0_i6);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__libs__trace_params__trace_level_allows_tail_rec_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__libs__trace_params__trace_level_allows_tail_rec_1_0_i10);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__trace_params_module7)
	MR_init_entry1(fn__libs__trace_params__trace_level_needs_meaningful_var_names_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__libs__trace_params__trace_level_needs_meaningful_var_names_1_0);
	MR_init_label4(fn__libs__trace_params__trace_level_needs_meaningful_var_names_1_0,13,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'trace_level_needs_meaningful_var_names'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__libs__trace_params__trace_level_needs_meaningful_var_names_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__libs__trace_params__trace_level_needs_meaningful_var_names_1_0_i3);
	}
MR_def_label(fn__libs__trace_params__trace_level_needs_meaningful_var_names_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__libs__trace_params__trace_level_needs_meaningful_var_names_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(fn__libs__trace_params__trace_level_needs_meaningful_var_names_1_0_i4);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__libs__trace_params__trace_level_needs_meaningful_var_names_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,5)) {
		MR_GOTO_LAB(fn__libs__trace_params__trace_level_needs_meaningful_var_names_1_0_i5);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__libs__trace_params__trace_level_needs_meaningful_var_names_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,4)) {
		MR_GOTO_LAB(fn__libs__trace_params__trace_level_needs_meaningful_var_names_1_0_i13);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__pred_info_get_origin_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_import_status_2_0);
MR_decl_entry(fn__hlds__hlds_pred__status_is_exported_1_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_is_address_taken_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_has_user_event_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_contains_user_event_2_0);

MR_BEGIN_MODULE(libs__trace_params_module8)
	MR_init_entry1(fn__libs__trace_params__eff_trace_level_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__libs__trace_params__eff_trace_level_4_0);
	MR_init_label10(fn__libs__trace_params__eff_trace_level_4_0,43,2,4,61,8,9,47,6,14,18)
	MR_init_label10(fn__libs__trace_params__eff_trace_level_4_0,20,21,24,11,28,32,34,35,38,40)
	MR_init_label1(fn__libs__trace_params__eff_trace_level_4_0,37)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'eff_trace_level'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__libs__trace_params__eff_trace_level_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(fn__libs__trace_params__eff_trace_level_4_0_i2);
	}
MR_def_label(fn__libs__trace_params__eff_trace_level_4_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(5);
MR_def_label(fn__libs__trace_params__eff_trace_level_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_origin_2_0,
		fn__libs__trace_params__eff_trace_level_4_0_i4);
MR_def_label(fn__libs__trace_params__eff_trace_level_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(fn__libs__trace_params__eff_trace_level_4_0_i6);
	}
	MR_r2 = MR_tfield(0, MR_tfield(0, MR_r1, 0), 0);
	if (MR_INT_NE(MR_r2,2)) {
		MR_GOTO_LAB(fn__libs__trace_params__eff_trace_level_4_0_i8);
	}
MR_def_label(fn__libs__trace_params__eff_trace_level_4_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 3;
	MR_decr_sp_and_return(5);
MR_def_label(fn__libs__trace_params__eff_trace_level_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(fn__libs__trace_params__eff_trace_level_4_0_i9);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(5);
MR_def_label(fn__libs__trace_params__eff_trace_level_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,3)) {
		MR_GOTO_LAB(fn__libs__trace_params__eff_trace_level_4_0_i61);
	}
MR_def_label(fn__libs__trace_params__eff_trace_level_4_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(5);
MR_def_label(fn__libs__trace_params__eff_trace_level_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(fn__libs__trace_params__eff_trace_level_4_0_i11);
	}
	MR_r2 = MR_tfield(3, MR_r1, 1);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__libs__trace_params__eff_trace_level_4_0_i43);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_import_status_2_0,
		fn__libs__trace_params__eff_trace_level_4_0_i14);
MR_def_label(fn__libs__trace_params__eff_trace_level_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),3)) {
		MR_GOTO_LAB(fn__libs__trace_params__eff_trace_level_4_0_i47);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__status_is_exported_1_0,
		fn__libs__trace_params__eff_trace_level_4_0_i18);
MR_def_label(fn__libs__trace_params__eff_trace_level_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__libs__trace_params__eff_trace_level_4_0_i47);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_is_address_taken_2_0,
		fn__libs__trace_params__eff_trace_level_4_0_i20);
MR_def_label(fn__libs__trace_params__eff_trace_level_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(fn__libs__trace_params__eff_trace_level_4_0_i47);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_has_user_event_2_0,
		fn__libs__trace_params__eff_trace_level_4_0_i21);
MR_def_label(fn__libs__trace_params__eff_trace_level_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__libs__trace_params__eff_trace_level_4_0_i37);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_contains_user_event_2_0,
		fn__libs__trace_params__eff_trace_level_4_0_i24);
MR_def_label(fn__libs__trace_params__eff_trace_level_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__libs__trace_params__eff_trace_level_4_0_i40);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(5);
MR_def_label(fn__libs__trace_params__eff_trace_level_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_import_status_2_0,
		fn__libs__trace_params__eff_trace_level_4_0_i28);
MR_def_label(fn__libs__trace_params__eff_trace_level_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),3)) {
		MR_GOTO_LAB(fn__libs__trace_params__eff_trace_level_4_0_i47);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__status_is_exported_1_0,
		fn__libs__trace_params__eff_trace_level_4_0_i32);
MR_def_label(fn__libs__trace_params__eff_trace_level_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__libs__trace_params__eff_trace_level_4_0_i47);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_is_address_taken_2_0,
		fn__libs__trace_params__eff_trace_level_4_0_i34);
MR_def_label(fn__libs__trace_params__eff_trace_level_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(fn__libs__trace_params__eff_trace_level_4_0_i47);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_has_user_event_2_0,
		fn__libs__trace_params__eff_trace_level_4_0_i35);
MR_def_label(fn__libs__trace_params__eff_trace_level_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__libs__trace_params__eff_trace_level_4_0_i37);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_contains_user_event_2_0,
		fn__libs__trace_params__eff_trace_level_4_0_i38);
MR_def_label(fn__libs__trace_params__eff_trace_level_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__libs__trace_params__eff_trace_level_4_0_i40);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(5);
MR_def_label(fn__libs__trace_params__eff_trace_level_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(fn__libs__trace_params__eff_trace_level_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__trace_params_module9)
	MR_init_entry1(fn__libs__trace_params__eff_trace_level_is_none_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__libs__trace_params__eff_trace_level_is_none_4_0);
	MR_init_label6(fn__libs__trace_params__eff_trace_level_is_none_4_0,2,4,5,6,12,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'eff_trace_level_is_none'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__libs__trace_params__eff_trace_level_is_none_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__libs__trace_params__eff_trace_level_4_0,
		fn__libs__trace_params__eff_trace_level_is_none_4_0_i2);
MR_def_label(fn__libs__trace_params__eff_trace_level_is_none_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__libs__trace_params__eff_trace_level_is_none_4_0_i4);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(1);
MR_def_label(fn__libs__trace_params__eff_trace_level_is_none_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(fn__libs__trace_params__eff_trace_level_is_none_4_0_i5);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(1);
MR_def_label(fn__libs__trace_params__eff_trace_level_is_none_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,5)) {
		MR_GOTO_LAB(fn__libs__trace_params__eff_trace_level_is_none_4_0_i6);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(1);
MR_def_label(fn__libs__trace_params__eff_trace_level_is_none_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,4)) {
		MR_GOTO_LAB(fn__libs__trace_params__eff_trace_level_is_none_4_0_i7);
	}
MR_def_label(fn__libs__trace_params__eff_trace_level_is_none_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(1);
MR_def_label(fn__libs__trace_params__eff_trace_level_is_none_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__libs__trace_params__eff_trace_level_is_none_4_0_i12);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__trace_params_module10)
	MR_init_entry1(fn__libs__trace_params__eff_trace_level_needs_input_vars_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__libs__trace_params__eff_trace_level_needs_input_vars_4_0);
	MR_init_label6(fn__libs__trace_params__eff_trace_level_needs_input_vars_4_0,2,4,5,6,12,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'eff_trace_level_needs_input_vars'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__libs__trace_params__eff_trace_level_needs_input_vars_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__libs__trace_params__eff_trace_level_4_0,
		fn__libs__trace_params__eff_trace_level_needs_input_vars_4_0_i2);
MR_def_label(fn__libs__trace_params__eff_trace_level_needs_input_vars_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__libs__trace_params__eff_trace_level_needs_input_vars_4_0_i4);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(1);
MR_def_label(fn__libs__trace_params__eff_trace_level_needs_input_vars_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(fn__libs__trace_params__eff_trace_level_needs_input_vars_4_0_i5);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(1);
MR_def_label(fn__libs__trace_params__eff_trace_level_needs_input_vars_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,5)) {
		MR_GOTO_LAB(fn__libs__trace_params__eff_trace_level_needs_input_vars_4_0_i6);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(1);
MR_def_label(fn__libs__trace_params__eff_trace_level_needs_input_vars_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,4)) {
		MR_GOTO_LAB(fn__libs__trace_params__eff_trace_level_needs_input_vars_4_0_i7);
	}
MR_def_label(fn__libs__trace_params__eff_trace_level_needs_input_vars_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(1);
MR_def_label(fn__libs__trace_params__eff_trace_level_needs_input_vars_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__libs__trace_params__eff_trace_level_needs_input_vars_4_0_i12);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__trace_params_module11)
	MR_init_entry1(fn__libs__trace_params__eff_trace_level_needs_fail_vars_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__libs__trace_params__eff_trace_level_needs_fail_vars_4_0);
	MR_init_label6(fn__libs__trace_params__eff_trace_level_needs_fail_vars_4_0,2,4,5,6,12,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'eff_trace_level_needs_fail_vars'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__libs__trace_params__eff_trace_level_needs_fail_vars_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__libs__trace_params__eff_trace_level_4_0,
		fn__libs__trace_params__eff_trace_level_needs_fail_vars_4_0_i2);
MR_def_label(fn__libs__trace_params__eff_trace_level_needs_fail_vars_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__libs__trace_params__eff_trace_level_needs_fail_vars_4_0_i4);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(1);
MR_def_label(fn__libs__trace_params__eff_trace_level_needs_fail_vars_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(fn__libs__trace_params__eff_trace_level_needs_fail_vars_4_0_i5);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(1);
MR_def_label(fn__libs__trace_params__eff_trace_level_needs_fail_vars_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,5)) {
		MR_GOTO_LAB(fn__libs__trace_params__eff_trace_level_needs_fail_vars_4_0_i6);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(1);
MR_def_label(fn__libs__trace_params__eff_trace_level_needs_fail_vars_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,4)) {
		MR_GOTO_LAB(fn__libs__trace_params__eff_trace_level_needs_fail_vars_4_0_i7);
	}
MR_def_label(fn__libs__trace_params__eff_trace_level_needs_fail_vars_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(1);
MR_def_label(fn__libs__trace_params__eff_trace_level_needs_fail_vars_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__libs__trace_params__eff_trace_level_needs_fail_vars_4_0_i12);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__trace_params_module12)
	MR_init_entry1(fn__libs__trace_params__eff_trace_level_needs_fixed_slots_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__libs__trace_params__eff_trace_level_needs_fixed_slots_4_0);
	MR_init_label6(fn__libs__trace_params__eff_trace_level_needs_fixed_slots_4_0,2,4,5,6,12,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'eff_trace_level_needs_fixed_slots'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__libs__trace_params__eff_trace_level_needs_fixed_slots_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__libs__trace_params__eff_trace_level_4_0,
		fn__libs__trace_params__eff_trace_level_needs_fixed_slots_4_0_i2);
MR_def_label(fn__libs__trace_params__eff_trace_level_needs_fixed_slots_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__libs__trace_params__eff_trace_level_needs_fixed_slots_4_0_i4);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(1);
MR_def_label(fn__libs__trace_params__eff_trace_level_needs_fixed_slots_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(fn__libs__trace_params__eff_trace_level_needs_fixed_slots_4_0_i5);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(1);
MR_def_label(fn__libs__trace_params__eff_trace_level_needs_fixed_slots_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,5)) {
		MR_GOTO_LAB(fn__libs__trace_params__eff_trace_level_needs_fixed_slots_4_0_i6);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(1);
MR_def_label(fn__libs__trace_params__eff_trace_level_needs_fixed_slots_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,4)) {
		MR_GOTO_LAB(fn__libs__trace_params__eff_trace_level_needs_fixed_slots_4_0_i7);
	}
MR_def_label(fn__libs__trace_params__eff_trace_level_needs_fixed_slots_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(1);
MR_def_label(fn__libs__trace_params__eff_trace_level_needs_fixed_slots_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__libs__trace_params__eff_trace_level_needs_fixed_slots_4_0_i12);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__trace_params_module13)
	MR_init_entry1(fn__libs__trace_params__eff_trace_level_needs_from_full_slot_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__libs__trace_params__eff_trace_level_needs_from_full_slot_4_0);
	MR_init_label6(fn__libs__trace_params__eff_trace_level_needs_from_full_slot_4_0,2,4,5,6,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'eff_trace_level_needs_from_full_slot'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__libs__trace_params__eff_trace_level_needs_from_full_slot_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__libs__trace_params__eff_trace_level_4_0,
		fn__libs__trace_params__eff_trace_level_needs_from_full_slot_4_0_i2);
MR_def_label(fn__libs__trace_params__eff_trace_level_needs_from_full_slot_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__libs__trace_params__eff_trace_level_needs_from_full_slot_4_0_i4);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(1);
MR_def_label(fn__libs__trace_params__eff_trace_level_needs_from_full_slot_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(fn__libs__trace_params__eff_trace_level_needs_from_full_slot_4_0_i5);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(1);
MR_def_label(fn__libs__trace_params__eff_trace_level_needs_from_full_slot_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,5)) {
		MR_GOTO_LAB(fn__libs__trace_params__eff_trace_level_needs_from_full_slot_4_0_i6);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(1);
MR_def_label(fn__libs__trace_params__eff_trace_level_needs_from_full_slot_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,4)) {
		MR_GOTO_LAB(fn__libs__trace_params__eff_trace_level_needs_from_full_slot_4_0_i7);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(1);
MR_def_label(fn__libs__trace_params__eff_trace_level_needs_from_full_slot_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__libs__trace_params__eff_trace_level_needs_from_full_slot_4_0_i8);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(1);
MR_def_label(fn__libs__trace_params__eff_trace_level_needs_from_full_slot_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__trace_params_module14)
	MR_init_entry1(fn__libs__trace_params__eff_trace_needs_all_var_names_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__libs__trace_params__eff_trace_needs_all_var_names_5_0);
	MR_init_label3(fn__libs__trace_params__eff_trace_needs_all_var_names_5_0,2,6,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'eff_trace_needs_all_var_names'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__libs__trace_params__eff_trace_needs_all_var_names_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r5;
	MR_np_call_localret_ent(fn__libs__trace_params__eff_trace_level_4_0,
		fn__libs__trace_params__eff_trace_needs_all_var_names_5_0_i2);
MR_def_label(fn__libs__trace_params__eff_trace_needs_all_var_names_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,5)) {
		MR_GOTO_LAB(fn__libs__trace_params__eff_trace_needs_all_var_names_5_0_i3);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__trace_params, trace_suppress_item);
	MR_r2 = (MR_Word) MR_tbmkword(0, 1);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(set__member_2_0,
		fn__libs__trace_params__eff_trace_needs_all_var_names_5_0_i6);
MR_def_label(fn__libs__trace_params__eff_trace_needs_all_var_names_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(fn__libs__trace_params__eff_trace_needs_all_var_names_5_0_i3);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(2);
MR_def_label(fn__libs__trace_params__eff_trace_needs_all_var_names_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__trace_params_module15)
	MR_init_entry1(fn__libs__trace_params__eff_trace_needs_proc_body_reps_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__libs__trace_params__eff_trace_needs_proc_body_reps_5_0);
	MR_init_label3(fn__libs__trace_params__eff_trace_needs_proc_body_reps_5_0,2,6,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'eff_trace_needs_proc_body_reps'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__libs__trace_params__eff_trace_needs_proc_body_reps_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r5;
	MR_np_call_localret_ent(fn__libs__trace_params__eff_trace_level_4_0,
		fn__libs__trace_params__eff_trace_needs_proc_body_reps_5_0_i2);
MR_def_label(fn__libs__trace_params__eff_trace_needs_proc_body_reps_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,5)) {
		MR_GOTO_LAB(fn__libs__trace_params__eff_trace_needs_proc_body_reps_5_0_i3);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__trace_params, trace_suppress_item);
	MR_r2 = (MR_Word) MR_tbmkword(0, 2);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(set__member_2_0,
		fn__libs__trace_params__eff_trace_needs_proc_body_reps_5_0_i6);
MR_def_label(fn__libs__trace_params__eff_trace_needs_proc_body_reps_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(fn__libs__trace_params__eff_trace_needs_proc_body_reps_5_0_i3);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(2);
MR_def_label(fn__libs__trace_params__eff_trace_needs_proc_body_reps_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__member_2_0);

MR_BEGIN_MODULE(libs__trace_params_module16)
	MR_init_entry1(fn__libs__trace_params__eff_trace_needs_port_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__libs__trace_params__eff_trace_needs_port_6_0);
	MR_init_label10(fn__libs__trace_params__eff_trace_needs_port_6_0,2,5,6,7,8,9,10,11,12,13)
	MR_init_label10(fn__libs__trace_params__eff_trace_needs_port_6_0,14,15,16,17,18,19,20,21,4,23)
	MR_init_label10(fn__libs__trace_params__eff_trace_needs_port_6_0,24,26,27,28,30,35,37,39,43,33)
	MR_init_label1(fn__libs__trace_params__eff_trace_needs_port_6_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'eff_trace_needs_port'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__libs__trace_params__eff_trace_needs_port_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r6;
	MR_np_call_localret_ent(fn__libs__trace_params__eff_trace_level_4_0,
		fn__libs__trace_params__eff_trace_needs_port_6_0_i2);
MR_def_label(fn__libs__trace_params__eff_trace_needs_port_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(fn__libs__trace_params__eff_trace_needs_port_6_0_i5);
	}
	MR_sv(3) = MR_r1;
	MR_r2 = (MR_Integer) 0;
	MR_GOTO_LAB(fn__libs__trace_params__eff_trace_needs_port_6_0_i4);
MR_def_label(fn__libs__trace_params__eff_trace_needs_port_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),12)) {
		MR_GOTO_LAB(fn__libs__trace_params__eff_trace_needs_port_6_0_i6);
	}
	MR_sv(3) = MR_r1;
	MR_r2 = (MR_Integer) 1;
	MR_GOTO_LAB(fn__libs__trace_params__eff_trace_needs_port_6_0_i4);
MR_def_label(fn__libs__trace_params__eff_trace_needs_port_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),13)) {
		MR_GOTO_LAB(fn__libs__trace_params__eff_trace_needs_port_6_0_i7);
	}
	MR_sv(3) = MR_r1;
	MR_r2 = (MR_Integer) 1;
	MR_GOTO_LAB(fn__libs__trace_params__eff_trace_needs_port_6_0_i4);
MR_def_label(fn__libs__trace_params__eff_trace_needs_port_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),5)) {
		MR_GOTO_LAB(fn__libs__trace_params__eff_trace_needs_port_6_0_i8);
	}
	MR_sv(3) = MR_r1;
	MR_r2 = (MR_Integer) 0;
	MR_GOTO_LAB(fn__libs__trace_params__eff_trace_needs_port_6_0_i4);
MR_def_label(fn__libs__trace_params__eff_trace_needs_port_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(fn__libs__trace_params__eff_trace_needs_port_6_0_i9);
	}
	MR_sv(3) = MR_r1;
	MR_r2 = (MR_Integer) 0;
	MR_GOTO_LAB(fn__libs__trace_params__eff_trace_needs_port_6_0_i4);
MR_def_label(fn__libs__trace_params__eff_trace_needs_port_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),3)) {
		MR_GOTO_LAB(fn__libs__trace_params__eff_trace_needs_port_6_0_i10);
	}
	MR_sv(3) = MR_r1;
	MR_r2 = (MR_Integer) 0;
	MR_GOTO_LAB(fn__libs__trace_params__eff_trace_needs_port_6_0_i4);
MR_def_label(fn__libs__trace_params__eff_trace_needs_port_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),6)) {
		MR_GOTO_LAB(fn__libs__trace_params__eff_trace_needs_port_6_0_i11);
	}
	MR_sv(3) = MR_r1;
	MR_r2 = (MR_Integer) 2;
	MR_GOTO_LAB(fn__libs__trace_params__eff_trace_needs_port_6_0_i4);
MR_def_label(fn__libs__trace_params__eff_trace_needs_port_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),8)) {
		MR_GOTO_LAB(fn__libs__trace_params__eff_trace_needs_port_6_0_i12);
	}
	MR_sv(3) = MR_r1;
	MR_r2 = (MR_Integer) 1;
	MR_GOTO_LAB(fn__libs__trace_params__eff_trace_needs_port_6_0_i4);
MR_def_label(fn__libs__trace_params__eff_trace_needs_port_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),7)) {
		MR_GOTO_LAB(fn__libs__trace_params__eff_trace_needs_port_6_0_i13);
	}
	MR_sv(3) = MR_r1;
	MR_r2 = (MR_Integer) 1;
	MR_GOTO_LAB(fn__libs__trace_params__eff_trace_needs_port_6_0_i4);
MR_def_label(fn__libs__trace_params__eff_trace_needs_port_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),9)) {
		MR_GOTO_LAB(fn__libs__trace_params__eff_trace_needs_port_6_0_i14);
	}
	MR_sv(3) = MR_r1;
	MR_r2 = (MR_Integer) 2;
	MR_GOTO_LAB(fn__libs__trace_params__eff_trace_needs_port_6_0_i4);
MR_def_label(fn__libs__trace_params__eff_trace_needs_port_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),11)) {
		MR_GOTO_LAB(fn__libs__trace_params__eff_trace_needs_port_6_0_i15);
	}
	MR_sv(3) = MR_r1;
	MR_r2 = (MR_Integer) 2;
	MR_GOTO_LAB(fn__libs__trace_params__eff_trace_needs_port_6_0_i4);
MR_def_label(fn__libs__trace_params__eff_trace_needs_port_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),10)) {
		MR_GOTO_LAB(fn__libs__trace_params__eff_trace_needs_port_6_0_i16);
	}
	MR_sv(3) = MR_r1;
	MR_r2 = (MR_Integer) 2;
	MR_GOTO_LAB(fn__libs__trace_params__eff_trace_needs_port_6_0_i4);
MR_def_label(fn__libs__trace_params__eff_trace_needs_port_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),15)) {
		MR_GOTO_LAB(fn__libs__trace_params__eff_trace_needs_port_6_0_i17);
	}
	MR_sv(3) = MR_r1;
	MR_r2 = (MR_Integer) 1;
	MR_GOTO_LAB(fn__libs__trace_params__eff_trace_needs_port_6_0_i4);
MR_def_label(fn__libs__trace_params__eff_trace_needs_port_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),16)) {
		MR_GOTO_LAB(fn__libs__trace_params__eff_trace_needs_port_6_0_i18);
	}
	MR_sv(3) = MR_r1;
	MR_r2 = (MR_Integer) 1;
	MR_GOTO_LAB(fn__libs__trace_params__eff_trace_needs_port_6_0_i4);
MR_def_label(fn__libs__trace_params__eff_trace_needs_port_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),2)) {
		MR_GOTO_LAB(fn__libs__trace_params__eff_trace_needs_port_6_0_i19);
	}
	MR_sv(3) = MR_r1;
	MR_r2 = (MR_Integer) 0;
	MR_GOTO_LAB(fn__libs__trace_params__eff_trace_needs_port_6_0_i4);
MR_def_label(fn__libs__trace_params__eff_trace_needs_port_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),14)) {
		MR_GOTO_LAB(fn__libs__trace_params__eff_trace_needs_port_6_0_i20);
	}
	MR_sv(3) = MR_r1;
	MR_r2 = (MR_Integer) 1;
	MR_GOTO_LAB(fn__libs__trace_params__eff_trace_needs_port_6_0_i4);
MR_def_label(fn__libs__trace_params__eff_trace_needs_port_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),4)) {
		MR_GOTO_LAB(fn__libs__trace_params__eff_trace_needs_port_6_0_i21);
	}
	MR_sv(3) = MR_r1;
	MR_r2 = (MR_Integer) 0;
	MR_GOTO_LAB(fn__libs__trace_params__eff_trace_needs_port_6_0_i4);
MR_def_label(fn__libs__trace_params__eff_trace_needs_port_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r2 = (MR_Integer) 3;
MR_def_label(fn__libs__trace_params__eff_trace_needs_port_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),1)) {
		MR_GOTO_LAB(fn__libs__trace_params__eff_trace_needs_port_6_0_i23);
	}
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__trace_params, port_category);
	MR_np_call_localret_ent(list__member_2_0,
		fn__libs__trace_params__eff_trace_needs_port_6_0_i30);
MR_def_label(fn__libs__trace_params__eff_trace_needs_port_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),2)) {
		MR_GOTO_LAB(fn__libs__trace_params__eff_trace_needs_port_6_0_i24);
	}
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,5,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__trace_params, port_category);
	MR_np_call_localret_ent(list__member_2_0,
		fn__libs__trace_params__eff_trace_needs_port_6_0_i30);
MR_def_label(fn__libs__trace_params__eff_trace_needs_port_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),5)) {
		MR_GOTO_LAB(fn__libs__trace_params__eff_trace_needs_port_6_0_i26);
	}
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,5,3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__trace_params, port_category);
	MR_np_call_localret_ent(list__member_2_0,
		fn__libs__trace_params__eff_trace_needs_port_6_0_i30);
MR_def_label(fn__libs__trace_params__eff_trace_needs_port_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),4)) {
		MR_GOTO_LAB(fn__libs__trace_params__eff_trace_needs_port_6_0_i27);
	}
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,5,3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__trace_params, port_category);
	MR_np_call_localret_ent(list__member_2_0,
		fn__libs__trace_params__eff_trace_needs_port_6_0_i30);
MR_def_label(fn__libs__trace_params__eff_trace_needs_port_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(fn__libs__trace_params__eff_trace_needs_port_6_0_i28);
	}
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__trace_params, port_category);
	MR_np_call_localret_ent(list__member_2_0,
		fn__libs__trace_params__eff_trace_needs_port_6_0_i30);
MR_def_label(fn__libs__trace_params__eff_trace_needs_port_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,5,4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__trace_params, port_category);
	MR_np_call_localret_ent(list__member_2_0,
		fn__libs__trace_params__eff_trace_needs_port_6_0_i30);
MR_def_label(fn__libs__trace_params__eff_trace_needs_port_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__libs__trace_params__eff_trace_needs_port_6_0_i3);
	}
	if (MR_INT_NE(MR_sv(3),1)) {
		MR_GOTO_LAB(fn__libs__trace_params__eff_trace_needs_port_6_0_i35);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__trace_params, trace_suppress_item);
	MR_np_call_localret_ent(set__member_2_0,
		fn__libs__trace_params__eff_trace_needs_port_6_0_i43);
MR_def_label(fn__libs__trace_params__eff_trace_needs_port_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),2)) {
		MR_GOTO_LAB(fn__libs__trace_params__eff_trace_needs_port_6_0_i37);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__trace_params, trace_suppress_item);
	MR_np_call_localret_ent(set__member_2_0,
		fn__libs__trace_params__eff_trace_needs_port_6_0_i43);
MR_def_label(fn__libs__trace_params__eff_trace_needs_port_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),4)) {
		MR_GOTO_LAB(fn__libs__trace_params__eff_trace_needs_port_6_0_i39);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__trace_params, trace_suppress_item);
	MR_np_call_localret_ent(set__member_2_0,
		fn__libs__trace_params__eff_trace_needs_port_6_0_i43);
MR_def_label(fn__libs__trace_params__eff_trace_needs_port_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),3)) {
		MR_GOTO_LAB(fn__libs__trace_params__eff_trace_needs_port_6_0_i33);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__trace_params, trace_suppress_item);
	MR_np_call_localret_ent(set__member_2_0,
		fn__libs__trace_params__eff_trace_needs_port_6_0_i43);
MR_def_label(fn__libs__trace_params__eff_trace_needs_port_6_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(fn__libs__trace_params__eff_trace_needs_port_6_0_i3);
	}
MR_def_label(fn__libs__trace_params__eff_trace_needs_port_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(fn__libs__trace_params__eff_trace_needs_port_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__trace_params_module17)
	MR_init_entry1(fn__libs__trace_params__trace_level_none_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__libs__trace_params__trace_level_none_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'trace_level_none'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__libs__trace_params__trace_level_none_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__trace_params_module18)
	MR_init_entry1(fn__libs__trace_params__at_least_at_shallow_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__libs__trace_params__at_least_at_shallow_1_0);
	MR_init_label5(fn__libs__trace_params__at_least_at_shallow_1_0,3,4,5,11,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'at_least_at_shallow'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__libs__trace_params__at_least_at_shallow_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__libs__trace_params__at_least_at_shallow_1_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__libs__trace_params__at_least_at_shallow_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(fn__libs__trace_params__at_least_at_shallow_1_0_i4);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__libs__trace_params__at_least_at_shallow_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,5)) {
		MR_GOTO_LAB(fn__libs__trace_params__at_least_at_shallow_1_0_i5);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__libs__trace_params__at_least_at_shallow_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,4)) {
		MR_GOTO_LAB(fn__libs__trace_params__at_least_at_shallow_1_0_i6);
	}
MR_def_label(fn__libs__trace_params__at_least_at_shallow_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__libs__trace_params__at_least_at_shallow_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__libs__trace_params__at_least_at_shallow_1_0_i11);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__trace_params_module19)
	MR_init_entry1(fn__libs__trace_params__at_least_at_deep_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__libs__trace_params__at_least_at_deep_1_0);
	MR_init_label4(fn__libs__trace_params__at_least_at_deep_1_0,3,14,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'at_least_at_deep'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__libs__trace_params__at_least_at_deep_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__libs__trace_params__at_least_at_deep_1_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__libs__trace_params__at_least_at_deep_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(fn__libs__trace_params__at_least_at_deep_1_0_i4);
	}
MR_def_label(fn__libs__trace_params__at_least_at_deep_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__libs__trace_params__at_least_at_deep_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,5)) {
		MR_GOTO_LAB(fn__libs__trace_params__at_least_at_deep_1_0_i5);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__libs__trace_params__at_least_at_deep_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,4)) {
		MR_GOTO_LAB(fn__libs__trace_params__at_least_at_deep_1_0_i14);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__trace_params_module20)
	MR_init_entry1(fn__libs__trace_params__trace_level_for_unify_compare_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__libs__trace_params__trace_level_for_unify_compare_1_0);
	MR_init_label5(fn__libs__trace_params__trace_level_for_unify_compare_1_0,3,4,5,11,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'trace_level_for_unify_compare'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__libs__trace_params__trace_level_for_unify_compare_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__libs__trace_params__trace_level_for_unify_compare_1_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__libs__trace_params__trace_level_for_unify_compare_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(fn__libs__trace_params__trace_level_for_unify_compare_1_0_i4);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__libs__trace_params__trace_level_for_unify_compare_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,5)) {
		MR_GOTO_LAB(fn__libs__trace_params__trace_level_for_unify_compare_1_0_i5);
	}
	MR_r1 = (MR_Integer) 3;
	MR_proceed();
MR_def_label(fn__libs__trace_params__trace_level_for_unify_compare_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,4)) {
		MR_GOTO_LAB(fn__libs__trace_params__trace_level_for_unify_compare_1_0_i6);
	}
MR_def_label(fn__libs__trace_params__trace_level_for_unify_compare_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 3;
	MR_proceed();
MR_def_label(fn__libs__trace_params__trace_level_for_unify_compare_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__libs__trace_params__trace_level_for_unify_compare_1_0_i11);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__trace_params_module21)
	MR_init_entry1(fn__libs__trace_params__trace_level_rep_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__libs__trace_params__trace_level_rep_1_0);
	MR_init_label5(fn__libs__trace_params__trace_level_rep_1_0,3,4,5,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'trace_level_rep'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__libs__trace_params__trace_level_rep_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__libs__trace_params__trace_level_rep_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("MR_TRACE_LEVEL_BASIC", 20);
	MR_proceed();
MR_def_label(fn__libs__trace_params__trace_level_rep_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(fn__libs__trace_params__trace_level_rep_1_0_i4);
	}
	MR_r1 = (MR_Word) MR_string_const("MR_TRACE_LEVEL_BASIC_USER", 25);
	MR_proceed();
MR_def_label(fn__libs__trace_params__trace_level_rep_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,5)) {
		MR_GOTO_LAB(fn__libs__trace_params__trace_level_rep_1_0_i5);
	}
	MR_r1 = (MR_Word) MR_string_const("MR_TRACE_LEVEL_DECL_REP", 23);
	MR_proceed();
MR_def_label(fn__libs__trace_params__trace_level_rep_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,4)) {
		MR_GOTO_LAB(fn__libs__trace_params__trace_level_rep_1_0_i6);
	}
	MR_r1 = (MR_Word) MR_string_const("MR_TRACE_LEVEL_DEEP", 19);
	MR_proceed();
MR_def_label(fn__libs__trace_params__trace_level_rep_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__libs__trace_params__trace_level_rep_1_0_i7);
	}
	MR_r1 = (MR_Word) MR_string_const("MR_TRACE_LEVEL_NONE", 19);
	MR_proceed();
MR_def_label(fn__libs__trace_params__trace_level_rep_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_TRACE_LEVEL_SHALLOW", 22);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(set__fold_4_0);

MR_BEGIN_MODULE(libs__trace_params_module22)
	MR_init_entry1(fn__libs__trace_params__encode_suppressed_events_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__libs__trace_params__encode_suppressed_events_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'encode_suppressed_events'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__libs__trace_params__encode_suppressed_events_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__trace_params, trace_suppress_item);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_r4 = MR_tempr1;
	MR_r5 = (MR_Integer) 0;
	MR_np_tailcall_ent(set__fold_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__trace_params_module23)
	MR_init_entry1(libs__trace_params__char_is_comma_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__trace_params__char_is_comma_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'char_is_comma'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__trace_params__char_is_comma_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 == (MR_Integer) 44);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__map_3_0);

MR_BEGIN_MODULE(libs__trace_params_module24)
	MR_init_entry1(libs__trace_params__convert_item_name_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__trace_params__convert_item_name_2_0);
	MR_init_label10(libs__trace_params__convert_item_name_2_0,4,5,6,7,8,9,10,11,12,13)
	MR_init_label10(libs__trace_params__convert_item_name_2_0,14,15,16,17,18,19,20,21,22,23)
	MR_init_label10(libs__trace_params__convert_item_name_2_0,24,25,26,27,28,3,2,35,36,34)
	MR_init_label8(libs__trace_params__convert_item_name_2_0,39,33,41,43,45,47,49,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'convert_item_name'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__trace_params__convert_item_name_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("cond", 4)) != 0)) {
		MR_GOTO_LAB(libs__trace_params__convert_item_name_2_0_i4);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 6;
	MR_GOTO_LAB(libs__trace_params__convert_item_name_2_0_i3);
MR_def_label(libs__trace_params__convert_item_name_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("else", 4)) != 0)) {
		MR_GOTO_LAB(libs__trace_params__convert_item_name_2_0_i5);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 8;
	MR_GOTO_LAB(libs__trace_params__convert_item_name_2_0_i3);
MR_def_label(libs__trace_params__convert_item_name_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("exit", 4)) != 0)) {
		MR_GOTO_LAB(libs__trace_params__convert_item_name_2_0_i6);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(libs__trace_params__convert_item_name_2_0_i3);
MR_def_label(libs__trace_params__convert_item_name_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("fail", 4)) != 0)) {
		MR_GOTO_LAB(libs__trace_params__convert_item_name_2_0_i7);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 3;
	MR_GOTO_LAB(libs__trace_params__convert_item_name_2_0_i3);
MR_def_label(libs__trace_params__convert_item_name_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("frst", 4)) != 0)) {
		MR_GOTO_LAB(libs__trace_params__convert_item_name_2_0_i8);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 15;
	MR_GOTO_LAB(libs__trace_params__convert_item_name_2_0_i3);
MR_def_label(libs__trace_params__convert_item_name_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("latr", 4)) != 0)) {
		MR_GOTO_LAB(libs__trace_params__convert_item_name_2_0_i9);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 16;
	MR_GOTO_LAB(libs__trace_params__convert_item_name_2_0_i3);
MR_def_label(libs__trace_params__convert_item_name_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("nege", 4)) != 0)) {
		MR_GOTO_LAB(libs__trace_params__convert_item_name_2_0_i10);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 9;
	MR_GOTO_LAB(libs__trace_params__convert_item_name_2_0_i3);
MR_def_label(libs__trace_params__convert_item_name_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("negf", 4)) != 0)) {
		MR_GOTO_LAB(libs__trace_params__convert_item_name_2_0_i11);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 11;
	MR_GOTO_LAB(libs__trace_params__convert_item_name_2_0_i3);
MR_def_label(libs__trace_params__convert_item_name_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("negs", 4)) != 0)) {
		MR_GOTO_LAB(libs__trace_params__convert_item_name_2_0_i12);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 10;
	MR_GOTO_LAB(libs__trace_params__convert_item_name_2_0_i3);
MR_def_label(libs__trace_params__convert_item_name_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("redo", 4)) != 0)) {
		MR_GOTO_LAB(libs__trace_params__convert_item_name_2_0_i13);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 2;
	MR_GOTO_LAB(libs__trace_params__convert_item_name_2_0_i3);
MR_def_label(libs__trace_params__convert_item_name_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("swtc", 4)) != 0)) {
		MR_GOTO_LAB(libs__trace_params__convert_item_name_2_0_i14);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 14;
	MR_GOTO_LAB(libs__trace_params__convert_item_name_2_0_i3);
MR_def_label(libs__trace_params__convert_item_name_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("tail", 4)) != 0)) {
		MR_GOTO_LAB(libs__trace_params__convert_item_name_2_0_i15);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 4;
	MR_GOTO_LAB(libs__trace_params__convert_item_name_2_0_i3);
MR_def_label(libs__trace_params__convert_item_name_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("then", 4)) != 0)) {
		MR_GOTO_LAB(libs__trace_params__convert_item_name_2_0_i16);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 7;
	MR_GOTO_LAB(libs__trace_params__convert_item_name_2_0_i3);
MR_def_label(libs__trace_params__convert_item_name_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("user", 4)) != 0)) {
		MR_GOTO_LAB(libs__trace_params__convert_item_name_2_0_i17);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 17;
	MR_GOTO_LAB(libs__trace_params__convert_item_name_2_0_i3);
MR_def_label(libs__trace_params__convert_item_name_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("switch", 6)) != 0)) {
		MR_GOTO_LAB(libs__trace_params__convert_item_name_2_0_i18);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 14;
	MR_GOTO_LAB(libs__trace_params__convert_item_name_2_0_i3);
MR_def_label(libs__trace_params__convert_item_name_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("ite_cond", 8)) != 0)) {
		MR_GOTO_LAB(libs__trace_params__convert_item_name_2_0_i19);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 6;
	MR_GOTO_LAB(libs__trace_params__convert_item_name_2_0_i3);
MR_def_label(libs__trace_params__convert_item_name_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("ite_else", 8)) != 0)) {
		MR_GOTO_LAB(libs__trace_params__convert_item_name_2_0_i20);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 8;
	MR_GOTO_LAB(libs__trace_params__convert_item_name_2_0_i3);
MR_def_label(libs__trace_params__convert_item_name_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("ite_then", 8)) != 0)) {
		MR_GOTO_LAB(libs__trace_params__convert_item_name_2_0_i21);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 7;
	MR_GOTO_LAB(libs__trace_params__convert_item_name_2_0_i3);
MR_def_label(libs__trace_params__convert_item_name_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("exception", 9)) != 0)) {
		MR_GOTO_LAB(libs__trace_params__convert_item_name_2_0_i22);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 5;
	MR_GOTO_LAB(libs__trace_params__convert_item_name_2_0_i3);
MR_def_label(libs__trace_params__convert_item_name_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("neg_enter", 9)) != 0)) {
		MR_GOTO_LAB(libs__trace_params__convert_item_name_2_0_i23);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 9;
	MR_GOTO_LAB(libs__trace_params__convert_item_name_2_0_i3);
MR_def_label(libs__trace_params__convert_item_name_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("disj_first", 10)) != 0)) {
		MR_GOTO_LAB(libs__trace_params__convert_item_name_2_0_i24);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 12;
	MR_GOTO_LAB(libs__trace_params__convert_item_name_2_0_i3);
MR_def_label(libs__trace_params__convert_item_name_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("disj_later", 10)) != 0)) {
		MR_GOTO_LAB(libs__trace_params__convert_item_name_2_0_i25);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 13;
	MR_GOTO_LAB(libs__trace_params__convert_item_name_2_0_i3);
MR_def_label(libs__trace_params__convert_item_name_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("neg_failure", 11)) != 0)) {
		MR_GOTO_LAB(libs__trace_params__convert_item_name_2_0_i26);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 11;
	MR_GOTO_LAB(libs__trace_params__convert_item_name_2_0_i3);
MR_def_label(libs__trace_params__convert_item_name_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("neg_success", 11)) != 0)) {
		MR_GOTO_LAB(libs__trace_params__convert_item_name_2_0_i27);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 10;
	MR_GOTO_LAB(libs__trace_params__convert_item_name_2_0_i3);
MR_def_label(libs__trace_params__convert_item_name_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("nondet_foreign_proc_first", 25)) != 0)) {
		MR_GOTO_LAB(libs__trace_params__convert_item_name_2_0_i28);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 15;
	MR_GOTO_LAB(libs__trace_params__convert_item_name_2_0_i3);
MR_def_label(libs__trace_params__convert_item_name_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("nondet_foreign_proc_later", 25)) != 0)) {
		MR_GOTO_LAB(libs__trace_params__convert_item_name_2_0_i2);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 16;
MR_def_label(libs__trace_params__convert_item_name_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
	}
MR_def_label(libs__trace_params__convert_item_name_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("context", 7)) != 0)) {
		MR_GOTO_LAB(libs__trace_params__convert_item_name_2_0_i35);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,5,8);
	MR_GOTO_LAB(libs__trace_params__convert_item_name_2_0_i34);
MR_def_label(libs__trace_params__convert_item_name_2_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("internal", 8)) != 0)) {
		MR_GOTO_LAB(libs__trace_params__convert_item_name_2_0_i36);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,5,13);
	MR_GOTO_LAB(libs__trace_params__convert_item_name_2_0_i34);
MR_def_label(libs__trace_params__convert_item_name_2_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("interface", 9)) != 0)) {
		MR_GOTO_LAB(libs__trace_params__convert_item_name_2_0_i33);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,5,18);
MR_def_label(libs__trace_params__convert_item_name_2_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, trace_port);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(libs__trace_params, trace_suppress_item);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_np_call_localret_ent(list__map_3_0,
		libs__trace_params__convert_item_name_2_0_i39);
MR_def_label(libs__trace_params__convert_item_name_2_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
MR_def_label(libs__trace_params__convert_item_name_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("names", 5)) != 0)) {
		MR_GOTO_LAB(libs__trace_params__convert_item_name_2_0_i41);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,3,2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__trace_params__convert_item_name_2_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("bodies", 6)) != 0)) {
		MR_GOTO_LAB(libs__trace_params__convert_item_name_2_0_i43);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,3,3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__trace_params__convert_item_name_2_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("return", 6)) != 0)) {
		MR_GOTO_LAB(libs__trace_params__convert_item_name_2_0_i45);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,3,4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__trace_params__convert_item_name_2_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("return_info", 11)) != 0)) {
		MR_GOTO_LAB(libs__trace_params__convert_item_name_2_0_i47);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,3,4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__trace_params__convert_item_name_2_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("all_var_names", 13)) != 0)) {
		MR_GOTO_LAB(libs__trace_params__convert_item_name_2_0_i49);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,3,2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__trace_params__convert_item_name_2_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("proc_body_reps", 14)) != 0)) {
		MR_GOTO_LAB(libs__trace_params__convert_item_name_2_0_i1);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,3,3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__trace_params__convert_item_name_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__trace_params_module25)
	MR_init_entry1(libs__trace_params__wrap_port_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__trace_params__wrap_port_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'wrap_port'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__trace_params__wrap_port_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_105_110_116_95_95_60_60_2_0);

MR_BEGIN_MODULE(libs__trace_params_module26)
	MR_init_entry1(libs__trace_params__maybe_add_suppressed_event_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__trace_params__maybe_add_suppressed_event_3_0);
	MR_init_label10(libs__trace_params__maybe_add_suppressed_event_3_0,5,6,7,8,9,10,11,12,13,14)
	MR_init_label9(libs__trace_params__maybe_add_suppressed_event_3_0,15,16,17,18,19,20,21,22,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_add_suppressed_event'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__trace_params__maybe_add_suppressed_event_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(libs__trace_params__maybe_add_suppressed_event_3_0_i3);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r3 = MR_tfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(libs__trace_params__maybe_add_suppressed_event_3_0_i5);
	}
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_60_60_2_0,
		libs__trace_params__maybe_add_suppressed_event_3_0_i22);
MR_def_label(libs__trace_params__maybe_add_suppressed_event_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,12)) {
		MR_GOTO_LAB(libs__trace_params__maybe_add_suppressed_event_3_0_i6);
	}
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Integer) 12;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_60_60_2_0,
		libs__trace_params__maybe_add_suppressed_event_3_0_i22);
MR_def_label(libs__trace_params__maybe_add_suppressed_event_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,13)) {
		MR_GOTO_LAB(libs__trace_params__maybe_add_suppressed_event_3_0_i7);
	}
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Integer) 13;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_60_60_2_0,
		libs__trace_params__maybe_add_suppressed_event_3_0_i22);
MR_def_label(libs__trace_params__maybe_add_suppressed_event_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,5)) {
		MR_GOTO_LAB(libs__trace_params__maybe_add_suppressed_event_3_0_i8);
	}
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Integer) 5;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_60_60_2_0,
		libs__trace_params__maybe_add_suppressed_event_3_0_i22);
MR_def_label(libs__trace_params__maybe_add_suppressed_event_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(libs__trace_params__maybe_add_suppressed_event_3_0_i9);
	}
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_60_60_2_0,
		libs__trace_params__maybe_add_suppressed_event_3_0_i22);
MR_def_label(libs__trace_params__maybe_add_suppressed_event_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,3)) {
		MR_GOTO_LAB(libs__trace_params__maybe_add_suppressed_event_3_0_i10);
	}
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Integer) 3;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_60_60_2_0,
		libs__trace_params__maybe_add_suppressed_event_3_0_i22);
MR_def_label(libs__trace_params__maybe_add_suppressed_event_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,6)) {
		MR_GOTO_LAB(libs__trace_params__maybe_add_suppressed_event_3_0_i11);
	}
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Integer) 6;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_60_60_2_0,
		libs__trace_params__maybe_add_suppressed_event_3_0_i22);
MR_def_label(libs__trace_params__maybe_add_suppressed_event_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,8)) {
		MR_GOTO_LAB(libs__trace_params__maybe_add_suppressed_event_3_0_i12);
	}
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Integer) 8;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_60_60_2_0,
		libs__trace_params__maybe_add_suppressed_event_3_0_i22);
MR_def_label(libs__trace_params__maybe_add_suppressed_event_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,7)) {
		MR_GOTO_LAB(libs__trace_params__maybe_add_suppressed_event_3_0_i13);
	}
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Integer) 7;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_60_60_2_0,
		libs__trace_params__maybe_add_suppressed_event_3_0_i22);
MR_def_label(libs__trace_params__maybe_add_suppressed_event_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,9)) {
		MR_GOTO_LAB(libs__trace_params__maybe_add_suppressed_event_3_0_i14);
	}
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Integer) 9;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_60_60_2_0,
		libs__trace_params__maybe_add_suppressed_event_3_0_i22);
MR_def_label(libs__trace_params__maybe_add_suppressed_event_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,11)) {
		MR_GOTO_LAB(libs__trace_params__maybe_add_suppressed_event_3_0_i15);
	}
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Integer) 11;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_60_60_2_0,
		libs__trace_params__maybe_add_suppressed_event_3_0_i22);
MR_def_label(libs__trace_params__maybe_add_suppressed_event_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,10)) {
		MR_GOTO_LAB(libs__trace_params__maybe_add_suppressed_event_3_0_i16);
	}
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Integer) 10;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_60_60_2_0,
		libs__trace_params__maybe_add_suppressed_event_3_0_i22);
MR_def_label(libs__trace_params__maybe_add_suppressed_event_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,15)) {
		MR_GOTO_LAB(libs__trace_params__maybe_add_suppressed_event_3_0_i17);
	}
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Integer) 15;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_60_60_2_0,
		libs__trace_params__maybe_add_suppressed_event_3_0_i22);
MR_def_label(libs__trace_params__maybe_add_suppressed_event_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,16)) {
		MR_GOTO_LAB(libs__trace_params__maybe_add_suppressed_event_3_0_i18);
	}
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Integer) 16;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_60_60_2_0,
		libs__trace_params__maybe_add_suppressed_event_3_0_i22);
MR_def_label(libs__trace_params__maybe_add_suppressed_event_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,2)) {
		MR_GOTO_LAB(libs__trace_params__maybe_add_suppressed_event_3_0_i19);
	}
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Integer) 2;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_60_60_2_0,
		libs__trace_params__maybe_add_suppressed_event_3_0_i22);
MR_def_label(libs__trace_params__maybe_add_suppressed_event_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,14)) {
		MR_GOTO_LAB(libs__trace_params__maybe_add_suppressed_event_3_0_i20);
	}
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Integer) 14;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_60_60_2_0,
		libs__trace_params__maybe_add_suppressed_event_3_0_i22);
MR_def_label(libs__trace_params__maybe_add_suppressed_event_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,4)) {
		MR_GOTO_LAB(libs__trace_params__maybe_add_suppressed_event_3_0_i21);
	}
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Integer) 4;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_60_60_2_0,
		libs__trace_params__maybe_add_suppressed_event_3_0_i22);
MR_def_label(libs__trace_params__maybe_add_suppressed_event_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Integer) 17;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_60_60_2_0,
		libs__trace_params__maybe_add_suppressed_event_3_0_i22);
MR_def_label(libs__trace_params__maybe_add_suppressed_event_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) | (MR_Integer) MR_r1);
	MR_decr_sp_and_return(2);
MR_def_label(libs__trace_params__maybe_add_suppressed_event_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__trace_params_module27)
	MR_init_entry1(__Unify___libs__trace_params__port_category_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___libs__trace_params__port_category_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___libs__trace_params__port_category_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(libs__trace_params_module28)
	MR_init_entry1(__Compare___libs__trace_params__port_category_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___libs__trace_params__port_category_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___libs__trace_params__port_category_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__trace_params_module29)
	MR_init_entry1(__Unify___libs__trace_params__trace_level_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___libs__trace_params__trace_level_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___libs__trace_params__trace_level_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__trace_params_module30)
	MR_init_entry1(__Compare___libs__trace_params__trace_level_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___libs__trace_params__trace_level_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___libs__trace_params__trace_level_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__trace_params_module31)
	MR_init_entry1(__Unify___libs__trace_params__trace_suppress_item_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___libs__trace_params__trace_suppress_item_0_0);
	MR_init_label5(__Unify___libs__trace_params__trace_suppress_item_0_0,5,6,16,7,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___libs__trace_params__trace_suppress_item_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___libs__trace_params__trace_suppress_item_0_0_i16);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,1)) {
		MR_GOTO_LAB(__Unify___libs__trace_params__trace_suppress_item_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___libs__trace_params__trace_suppress_item_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,2)) {
		MR_GOTO_LAB(__Unify___libs__trace_params__trace_suppress_item_0_0_i6);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___libs__trace_params__trace_suppress_item_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Unify___libs__trace_params__trace_suppress_item_0_0_i7);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___libs__trace_params__trace_suppress_item_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___libs__trace_params__trace_suppress_item_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___libs__trace_params__trace_suppress_item_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___libs__trace_params__trace_suppress_item_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__trace_params_module32)
	MR_init_entry1(__Compare___libs__trace_params__trace_suppress_item_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___libs__trace_params__trace_suppress_item_0_0);
	MR_init_label10(__Compare___libs__trace_params__trace_suppress_item_0_0,7,8,5,78,12,10,17,18,54,15)
	MR_init_label3(__Compare___libs__trace_params__trace_suppress_item_0_0,21,22,23)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___libs__trace_params__trace_suppress_item_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___libs__trace_params__trace_suppress_item_0_0_i54);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Compare___libs__trace_params__trace_suppress_item_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___libs__trace_params__trace_suppress_item_0_0_i7);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(3);
	MR_proceed();
MR_def_label(__Compare___libs__trace_params__trace_suppress_item_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___libs__trace_params__trace_suppress_item_0_0_i8);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___libs__trace_params__trace_suppress_item_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___libs__trace_params__trace_suppress_item_0_0_i78);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___libs__trace_params__trace_suppress_item_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,2)) {
		MR_GOTO_LAB(__Compare___libs__trace_params__trace_suppress_item_0_0_i10);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___libs__trace_params__trace_suppress_item_0_0_i12);
	}
MR_def_label(__Compare___libs__trace_params__trace_suppress_item_0_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___libs__trace_params__trace_suppress_item_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___libs__trace_params__trace_suppress_item_0_0_i78);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___libs__trace_params__trace_suppress_item_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___libs__trace_params__trace_suppress_item_0_0_i15);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___libs__trace_params__trace_suppress_item_0_0_i17);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___libs__trace_params__trace_suppress_item_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___libs__trace_params__trace_suppress_item_0_0_i18);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___libs__trace_params__trace_suppress_item_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___libs__trace_params__trace_suppress_item_0_0_i78);
	}
MR_def_label(__Compare___libs__trace_params__trace_suppress_item_0_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___libs__trace_params__trace_suppress_item_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___libs__trace_params__trace_suppress_item_0_0_i21);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___libs__trace_params__trace_suppress_item_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___libs__trace_params__trace_suppress_item_0_0_i22);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___libs__trace_params__trace_suppress_item_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___libs__trace_params__trace_suppress_item_0_0_i23);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___libs__trace_params__trace_suppress_item_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___set_ordlist__set_ordlist_1_0);

MR_BEGIN_MODULE(libs__trace_params_module33)
	MR_init_entry1(__Unify___libs__trace_params__trace_suppress_items_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___libs__trace_params__trace_suppress_items_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___libs__trace_params__trace_suppress_items_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__trace_params, trace_suppress_item);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___set_ordlist__set_ordlist_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___set_ordlist__set_ordlist_1_0);

MR_BEGIN_MODULE(libs__trace_params_module34)
	MR_init_entry1(__Compare___libs__trace_params__trace_suppress_items_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___libs__trace_params__trace_suppress_items_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___libs__trace_params__trace_suppress_items_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__trace_params, trace_suppress_item);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___set_ordlist__set_ordlist_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__libs__trace_params_maybe_bunch_0(void)
{
	libs__trace_params_module0();
	libs__trace_params_module1();
	libs__trace_params_module2();
	libs__trace_params_module3();
	libs__trace_params_module4();
	libs__trace_params_module5();
	libs__trace_params_module6();
	libs__trace_params_module7();
	libs__trace_params_module8();
	libs__trace_params_module9();
	libs__trace_params_module10();
	libs__trace_params_module11();
	libs__trace_params_module12();
	libs__trace_params_module13();
	libs__trace_params_module14();
	libs__trace_params_module15();
	libs__trace_params_module16();
	libs__trace_params_module17();
	libs__trace_params_module18();
	libs__trace_params_module19();
	libs__trace_params_module20();
	libs__trace_params_module21();
	libs__trace_params_module22();
	libs__trace_params_module23();
	libs__trace_params_module24();
	libs__trace_params_module25();
	libs__trace_params_module26();
	libs__trace_params_module27();
	libs__trace_params_module28();
	libs__trace_params_module29();
	libs__trace_params_module30();
	libs__trace_params_module31();
	libs__trace_params_module32();
	libs__trace_params_module33();
	libs__trace_params_module34();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__libs__trace_params__init(void);
void mercury__libs__trace_params__init_type_tables(void);
void mercury__libs__trace_params__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__libs__trace_params__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__libs__trace_params__init_complexity_procs(void);
#endif

void mercury__libs__trace_params__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__libs__trace_params_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_libs__trace_params__type_ctor_info_port_category_0,
		libs__trace_params__port_category_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_libs__trace_params__type_ctor_info_trace_level_0,
		libs__trace_params__trace_level_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_libs__trace_params__type_ctor_info_trace_suppress_item_0,
		libs__trace_params__trace_suppress_item_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_libs__trace_params__type_ctor_info_trace_suppress_items_0,
		libs__trace_params__trace_suppress_items_0_0);
	mercury__libs__trace_params__init_debugger();
}

void mercury__libs__trace_params__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_libs__trace_params__type_ctor_info_port_category_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_libs__trace_params__type_ctor_info_trace_level_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_libs__trace_params__type_ctor_info_trace_suppress_item_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_libs__trace_params__type_ctor_info_trace_suppress_items_0);
	}
}


void mercury__libs__trace_params__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__libs__trace_params__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__libs__trace_params);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__libs__trace_params__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
