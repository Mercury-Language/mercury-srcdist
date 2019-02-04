/*
** Automatically generated from `switch_util.m'
** by the Mercury compiler,
** version rotd-2007-12-21, configured for i686-pc-linux-gnu.
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
INIT mercury__backend_libs__switch_util__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 136 "../library/io.int2"
#include "io.mh"

#line 27 "backend_libs.switch_util.c"
#line 144 "../library/io.int2"
#include "string.mh"

#line 31 "backend_libs.switch_util.c"
#line 87 "../library/table_builtin.int2"
#include "table_builtin.mh"

#line 35 "backend_libs.switch_util.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 39 "backend_libs.switch_util.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 43 "backend_libs.switch_util.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 47 "backend_libs.switch_util.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 51 "backend_libs.switch_util.c"
#line 52 "backend_libs.switch_util.c"
#include "backend_libs.switch_util.mh"

#line 55 "backend_libs.switch_util.c"
#line 56 "backend_libs.switch_util.c"
#ifndef BACKEND_LIBS__SWITCH_UTIL_DECL_GUARD
#define BACKEND_LIBS__SWITCH_UTIL_DECL_GUARD

#line 60 "backend_libs.switch_util.c"
#line 61 "backend_libs.switch_util.c"

#endif
#line 64 "backend_libs.switch_util.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Integer f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_backend_libs__switch_util__type_ctor_info_switch_category_0,
	mercury_data_backend_libs__switch_util__type_ctor_info_stag_goal_map_0,
	mercury_data_backend_libs__switch_util__type_ctor_info_stag_goal_list_0,
	mercury_data_backend_libs__switch_util__type_ctor_info_stag_goal_0,
	mercury_data_backend_libs__switch_util__type_ctor_info_ptag_count_map_0,
	mercury_data_backend_libs__switch_util__type_ctor_info_ptag_count_list_0,
	mercury_data_backend_libs__switch_util__type_ctor_info_ptag_case_map_0,
	mercury_data_backend_libs__switch_util__type_ctor_info_ptag_case_list_0,
	mercury_data_backend_libs__switch_util__type_ctor_info_ptag_case_0,
	mercury_data_backend_libs__switch_util__type_ctor_info_hash_slot_0;

extern const MR_TypeCtorInfo_Struct
	mercury_data_backend_libs__switch_util__type_ctor_info_extended_case_0,
	mercury_data_backend_libs__switch_util__type_ctor_info_cases_list_0;
MR_decl_label1(backend_libs__switch_util__calc_hash_slots_3_0, 2)
MR_decl_label3(backend_libs__switch_util__calc_hash_slots_1_6_0, 10,3,4)
MR_decl_label8(backend_libs__switch_util__calc_hash_slots_2_7_0, 26,4,6,8,9,10,11,12)
MR_decl_label2(backend_libs__switch_util__calc_hash_slots_2_7_0, 5,13)
MR_decl_label4(backend_libs__switch_util__follow_hash_chain_3_0, 18,2,5,4)
MR_decl_label8(backend_libs__switch_util__get_ptag_counts_4_0, 4,2,7,8,9,10,14,15)
MR_decl_label3(backend_libs__switch_util__get_ptag_counts_4_0, 27,11,24)
MR_decl_label8(backend_libs__switch_util__get_ptag_counts_2_5_0, 148,3,6,8,10,24,49,50)
MR_decl_label8(backend_libs__switch_util__get_ptag_counts_2_5_0, 52,54,51,58,59,61,64,65)
MR_decl_label8(backend_libs__switch_util__get_ptag_counts_2_5_0, 68,63,70,60,74,75,77,80)
MR_decl_label8(backend_libs__switch_util__get_ptag_counts_2_5_0, 81,84,79,86,76,88,93,94)
MR_decl_label1(backend_libs__switch_util__get_ptag_counts_2_5_0, 151)
MR_decl_label8(backend_libs__switch_util__group_cases_by_ptag_3_0, 122,3,6,9,8,13,14,25)
MR_decl_label8(backend_libs__switch_util__group_cases_by_ptag_3_0, 50,52,54,51,56,57,60,62)
MR_decl_label8(backend_libs__switch_util__group_cases_by_ptag_3_0, 64,65,66,61,68,69,72,74)
MR_decl_label8(backend_libs__switch_util__group_cases_by_ptag_3_0, 76,77,78,73,80,81,82,87)
MR_decl_label2(backend_libs__switch_util__group_cases_by_ptag_3_0, 88,125)
MR_decl_label4(backend_libs__switch_util__next_free_hash_slot_4_0, 19,5,8,2)
MR_decl_label8(backend_libs__switch_util__order_ptags_by_count_3_0, 32,4,7,9,10,6,2,14)
MR_decl_label1(backend_libs__switch_util__order_ptags_by_count_3_0, 13)
MR_decl_label8(backend_libs__switch_util__order_ptags_by_value_4_0, 29,4,6,7,3,2,11,10)
MR_decl_label3(backend_libs__switch_util__select_frequent_ptag_4_0, 4,3,1)
MR_decl_label7(backend_libs__switch_util__string_hash_cases_3_0, 34,5,6,9,10,12,11)
MR_decl_label8(backend_libs__switch_util__type_range_5_0, 4,5,3,9,7,12,13,14)
MR_decl_label5(backend_libs__switch_util__type_range_5_0, 15,19,31,2,1)
MR_decl_label8(fn__backend_libs__switch_util__switch_priority_1_0, 4,24,5,6,7,8,16,18)
MR_decl_label4(fn__backend_libs__switch_util__switch_priority_1_0, 20,39,22,23)
MR_decl_label8(fn__backend_libs__switch_util__type_cat_to_switch_cat_1_0, 5,10,11,13,14,16,18,20)
MR_decl_label2(fn__backend_libs__switch_util__type_cat_to_switch_cat_1_0, 22,24)
MR_decl_label4(__Unify___backend_libs__switch_util__extended_case_0_0, 4,6,10,1)
MR_decl_label3(__Unify___backend_libs__switch_util__hash_slot_0_0, 4,6,1)
MR_decl_label2(__Unify___backend_libs__switch_util__ptag_case_0_0, 6,1)
MR_decl_label3(__Unify___backend_libs__switch_util__stag_goal_0_0, 4,8,1)
MR_decl_label6(__Compare___backend_libs__switch_util__extended_case_0_0, 3,2,5,9,13,37)
MR_decl_label4(__Compare___backend_libs__switch_util__hash_slot_0_0, 3,2,5,21)
MR_decl_label4(__Compare___backend_libs__switch_util__ptag_case_0_0, 3,2,5,21)
MR_decl_label4(__Compare___backend_libs__switch_util__stag_goal_0_0, 3,2,5,21)
MR_decl_static(fn__backend_libs__switch_util__this_file_0_0)
MR_def_extern_entry(fn__backend_libs__switch_util__type_cat_to_switch_cat_1_0)
MR_def_extern_entry(fn__backend_libs__switch_util__switch_priority_1_0)
MR_def_extern_entry(backend_libs__switch_util__type_range_5_0)
MR_def_extern_entry(fn__backend_libs__switch_util__switch_density_2_0)
MR_def_extern_entry(backend_libs__switch_util__string_hash_cases_3_0)
MR_decl_static(backend_libs__switch_util__follow_hash_chain_3_0)
MR_decl_static(backend_libs__switch_util__next_free_hash_slot_4_0)
MR_decl_static(backend_libs__switch_util__calc_hash_slots_2_7_0)
MR_decl_static(backend_libs__switch_util__calc_hash_slots_1_6_0)
MR_def_extern_entry(backend_libs__switch_util__calc_hash_slots_3_0)
MR_def_extern_entry(backend_libs__switch_util__group_cases_by_ptag_3_0)
MR_decl_static(backend_libs__switch_util__select_frequent_ptag_4_0)
MR_def_extern_entry(backend_libs__switch_util__order_ptags_by_count_3_0)
MR_def_extern_entry(backend_libs__switch_util__order_ptags_by_value_4_0)
MR_decl_static(backend_libs__switch_util__get_ptag_counts_2_5_0)
MR_def_extern_entry(backend_libs__switch_util__get_ptag_counts_4_0)
MR_def_extern_entry(__Unify___backend_libs__switch_util__cases_list_0_0)
MR_def_extern_entry(__Compare___backend_libs__switch_util__cases_list_0_0)
MR_def_extern_entry(__Unify___backend_libs__switch_util__extended_case_0_0)
MR_def_extern_entry(__Compare___backend_libs__switch_util__extended_case_0_0)
MR_def_extern_entry(__Unify___backend_libs__switch_util__hash_slot_0_0)
MR_def_extern_entry(__Compare___backend_libs__switch_util__hash_slot_0_0)
MR_def_extern_entry(__Unify___backend_libs__switch_util__ptag_case_0_0)
MR_def_extern_entry(__Compare___backend_libs__switch_util__ptag_case_0_0)
MR_def_extern_entry(__Unify___backend_libs__switch_util__ptag_case_list_0_0)
MR_def_extern_entry(__Compare___backend_libs__switch_util__ptag_case_list_0_0)
MR_def_extern_entry(__Unify___backend_libs__switch_util__ptag_case_map_0_0)
MR_def_extern_entry(__Compare___backend_libs__switch_util__ptag_case_map_0_0)
MR_def_extern_entry(__Unify___backend_libs__switch_util__ptag_count_list_0_0)
MR_def_extern_entry(__Compare___backend_libs__switch_util__ptag_count_list_0_0)
MR_def_extern_entry(__Unify___backend_libs__switch_util__ptag_count_map_0_0)
MR_def_extern_entry(__Compare___backend_libs__switch_util__ptag_count_map_0_0)
MR_def_extern_entry(__Unify___backend_libs__switch_util__stag_goal_0_0)
MR_def_extern_entry(__Compare___backend_libs__switch_util__stag_goal_0_0)
MR_def_extern_entry(__Unify___backend_libs__switch_util__stag_goal_list_0_0)
MR_def_extern_entry(__Compare___backend_libs__switch_util__stag_goal_list_0_0)
MR_def_extern_entry(__Unify___backend_libs__switch_util__stag_goal_map_0_0)
MR_def_extern_entry(__Compare___backend_libs__switch_util__stag_goal_map_0_0)
MR_def_extern_entry(__Unify___backend_libs__switch_util__switch_category_0_0)
MR_def_extern_entry(__Compare___backend_libs__switch_util__switch_category_0_0)
MR_decl_static(backend_libs__switch_util__IntroducedFrom__pred__group_cases_by_ptag__464__1_2_0)
MR_decl_static(backend_libs__switch_util__IntroducedFrom__pred__group_cases_by_ptag__449__1_2_0)

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
static const struct mercury_type_0 mercury_common_0[1] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(backend_libs__switch_util, extended_case)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__switch_util__group_cases_by_ptag_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__rtti__type_ctor_info_sectag_locn_0;
static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__switch_util__group_cases_by_ptag_3_0_2;
static const struct mercury_type_1 mercury_common_1[2] =
{
{
(MR_Word *) &mercury_data__closure_layout__backend_libs__switch_util__group_cases_by_ptag_3_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(backend_libs__rtti, sectag_locn),
MR_CTOR0_ADDR(backend_libs__rtti, sectag_locn)
},
{
(MR_Word *) &mercury_data__closure_layout__backend_libs__switch_util__group_cases_by_ptag_3_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(backend_libs__rtti, sectag_locn),
MR_CTOR0_ADDR(backend_libs__rtti, sectag_locn)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__rtti__type_ctor_info_sectag_locn_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_2 mercury_common_2[4] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(backend_libs__rtti, sectag_locn),
MR_INT_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(backend_libs__switch_util, ptag_case)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_INT_CTOR_ADDR,
MR_TAG_COMMON(0,2,0)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(backend_libs__switch_util, stag_goal)
}
},
};

static const struct mercury_type_3 mercury_common_3[1] =
{
{
{
0,
-1
}
},
};

static const MR_EnumFunctorDesc mercury_data_backend_libs__switch_util__enum_functor_desc_switch_category_0_0 = {
	"atomic_switch",
	0
};

static const MR_EnumFunctorDesc mercury_data_backend_libs__switch_util__enum_functor_desc_switch_category_0_1 = {
	"string_switch",
	1
};

static const MR_EnumFunctorDesc mercury_data_backend_libs__switch_util__enum_functor_desc_switch_category_0_2 = {
	"tag_switch",
	2
};

static const MR_EnumFunctorDesc mercury_data_backend_libs__switch_util__enum_functor_desc_switch_category_0_3 = {
	"other_switch",
	3
};

const MR_EnumFunctorDescPtr mercury_data_backend_libs__switch_util__enum_value_ordered_switch_category_0[] = {
	&mercury_data_backend_libs__switch_util__enum_functor_desc_switch_category_0_0,
	&mercury_data_backend_libs__switch_util__enum_functor_desc_switch_category_0_1,
	&mercury_data_backend_libs__switch_util__enum_functor_desc_switch_category_0_2,
	&mercury_data_backend_libs__switch_util__enum_functor_desc_switch_category_0_3
};

const MR_EnumFunctorDescPtr mercury_data_backend_libs__switch_util__enum_name_ordered_switch_category_0[] = {
	&mercury_data_backend_libs__switch_util__enum_functor_desc_switch_category_0_0,
	&mercury_data_backend_libs__switch_util__enum_functor_desc_switch_category_0_3,
	&mercury_data_backend_libs__switch_util__enum_functor_desc_switch_category_0_1,
	&mercury_data_backend_libs__switch_util__enum_functor_desc_switch_category_0_2
};

const MR_Integer mercury_data_backend_libs__switch_util__functor_number_map_switch_category_0[] = {
	0,
	2,
	3,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_backend_libs__switch_util__type_ctor_info_switch_category_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___backend_libs__switch_util__switch_category_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___backend_libs__switch_util__switch_category_0_0)),
	"backend_libs.switch_util",
	"switch_category",
	{ (void *)mercury_data_backend_libs__switch_util__enum_name_ordered_switch_category_0 },
	{ (void *)mercury_data_backend_libs__switch_util__enum_value_ordered_switch_category_0 },
	4,
	4,
	mercury_data_backend_libs__switch_util__functor_number_map_switch_category_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__switch_util__type_ctor_info_stag_goal_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__switch_util__type_ctor_info_stag_goal_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_TypeInfo) &mercury_data_backend_libs__switch_util__type_ctor_info_stag_goal_0
}};

const MR_TypeCtorInfo_Struct mercury_data_backend_libs__switch_util__type_ctor_info_stag_goal_map_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___backend_libs__switch_util__stag_goal_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___backend_libs__switch_util__stag_goal_map_0_0)),
	"backend_libs.switch_util",
	"stag_goal_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__switch_util__type_ctor_info_stag_goal_0 },
	-1,
	0,
	NULL
};

static const MR_FA_TypeInfo_Struct2 mercury_data_pair__ti_pair_2builtin__type_ctor_info_int_0backend_libs__switch_util__type_ctor_info_stag_goal_0 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_TypeInfo) &mercury_data_backend_libs__switch_util__type_ctor_info_stag_goal_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0backend_libs__switch_util__type_ctor_info_stag_goal_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_pair__ti_pair_2builtin__type_ctor_info_int_0backend_libs__switch_util__type_ctor_info_stag_goal_0
}};

const MR_TypeCtorInfo_Struct mercury_data_backend_libs__switch_util__type_ctor_info_stag_goal_list_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___backend_libs__switch_util__stag_goal_list_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___backend_libs__switch_util__stag_goal_list_0_0)),
	"backend_libs.switch_util",
	"stag_goal_list",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0backend_libs__switch_util__type_ctor_info_stag_goal_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

const MR_PseudoTypeInfo mercury_data_backend_libs__switch_util__field_types_stag_goal_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

static const MR_DuFunctorDesc mercury_data_backend_libs__switch_util__du_functor_desc_stag_goal_0_0 = {
	"stag_goal",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_backend_libs__switch_util__field_types_stag_goal_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_backend_libs__switch_util__du_stag_ordered_stag_goal_0_0[] = {
	&mercury_data_backend_libs__switch_util__du_functor_desc_stag_goal_0_0

};

const MR_DuPtagLayout mercury_data_backend_libs__switch_util__du_ptag_ordered_stag_goal_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_backend_libs__switch_util__du_stag_ordered_stag_goal_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_backend_libs__switch_util__du_name_ordered_stag_goal_0[] = {
	&mercury_data_backend_libs__switch_util__du_functor_desc_stag_goal_0_0
};

const MR_Integer mercury_data_backend_libs__switch_util__functor_number_map_stag_goal_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_backend_libs__switch_util__type_ctor_info_stag_goal_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___backend_libs__switch_util__stag_goal_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___backend_libs__switch_util__stag_goal_0_0)),
	"backend_libs.switch_util",
	"stag_goal",
	{ (void *)mercury_data_backend_libs__switch_util__du_name_ordered_stag_goal_0 },
	{ (void *)mercury_data_backend_libs__switch_util__du_ptag_ordered_stag_goal_0 },
	1,
	4,
	mercury_data_backend_libs__switch_util__functor_number_map_stag_goal_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__rtti__type_ctor_info_sectag_locn_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0builtin__type_ctor_info_int_0 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_TypeInfo) &mercury_data_backend_libs__rtti__type_ctor_info_sectag_locn_0,
	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_int_0pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0builtin__type_ctor_info_int_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_TypeInfo) &mercury_data_pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0builtin__type_ctor_info_int_0
}};

const MR_TypeCtorInfo_Struct mercury_data_backend_libs__switch_util__type_ctor_info_ptag_count_map_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___backend_libs__switch_util__ptag_count_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___backend_libs__switch_util__ptag_count_map_0_0)),
	"backend_libs.switch_util",
	"ptag_count_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_int_0pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};

static const MR_FA_TypeInfo_Struct2 mercury_data_pair__ti_pair_2builtin__type_ctor_info_int_0pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0builtin__type_ctor_info_int_0 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_TypeInfo) &mercury_data_pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0builtin__type_ctor_info_int_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0builtin__type_ctor_info_int_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_pair__ti_pair_2builtin__type_ctor_info_int_0pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0builtin__type_ctor_info_int_0
}};

const MR_TypeCtorInfo_Struct mercury_data_backend_libs__switch_util__type_ctor_info_ptag_count_list_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___backend_libs__switch_util__ptag_count_list_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___backend_libs__switch_util__ptag_count_list_0_0)),
	"backend_libs.switch_util",
	"ptag_count_list",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__switch_util__type_ctor_info_ptag_case_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__switch_util__type_ctor_info_ptag_case_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_TypeInfo) &mercury_data_backend_libs__switch_util__type_ctor_info_ptag_case_0
}};

const MR_TypeCtorInfo_Struct mercury_data_backend_libs__switch_util__type_ctor_info_ptag_case_map_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___backend_libs__switch_util__ptag_case_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___backend_libs__switch_util__ptag_case_map_0_0)),
	"backend_libs.switch_util",
	"ptag_case_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__switch_util__type_ctor_info_ptag_case_0 },
	-1,
	0,
	NULL
};

static const MR_FA_TypeInfo_Struct2 mercury_data_pair__ti_pair_2builtin__type_ctor_info_int_0backend_libs__switch_util__type_ctor_info_ptag_case_0 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_TypeInfo) &mercury_data_backend_libs__switch_util__type_ctor_info_ptag_case_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0backend_libs__switch_util__type_ctor_info_ptag_case_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_pair__ti_pair_2builtin__type_ctor_info_int_0backend_libs__switch_util__type_ctor_info_ptag_case_0
}};

const MR_TypeCtorInfo_Struct mercury_data_backend_libs__switch_util__type_ctor_info_ptag_case_list_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___backend_libs__switch_util__ptag_case_list_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___backend_libs__switch_util__ptag_case_list_0_0)),
	"backend_libs.switch_util",
	"ptag_case_list",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0backend_libs__switch_util__type_ctor_info_ptag_case_0 },
	-1,
	0,
	NULL
};

const MR_PseudoTypeInfo mercury_data_backend_libs__switch_util__field_types_ptag_case_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_backend_libs__rtti__type_ctor_info_sectag_locn_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__switch_util__type_ctor_info_stag_goal_0
};

static const MR_DuFunctorDesc mercury_data_backend_libs__switch_util__du_functor_desc_ptag_case_0_0 = {
	"ptag_case",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_backend_libs__switch_util__field_types_ptag_case_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_backend_libs__switch_util__du_stag_ordered_ptag_case_0_0[] = {
	&mercury_data_backend_libs__switch_util__du_functor_desc_ptag_case_0_0

};

const MR_DuPtagLayout mercury_data_backend_libs__switch_util__du_ptag_ordered_ptag_case_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_backend_libs__switch_util__du_stag_ordered_ptag_case_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_backend_libs__switch_util__du_name_ordered_ptag_case_0[] = {
	&mercury_data_backend_libs__switch_util__du_functor_desc_ptag_case_0_0
};

const MR_Integer mercury_data_backend_libs__switch_util__functor_number_map_ptag_case_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_backend_libs__switch_util__type_ctor_info_ptag_case_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___backend_libs__switch_util__ptag_case_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___backend_libs__switch_util__ptag_case_0_0)),
	"backend_libs.switch_util",
	"ptag_case",
	{ (void *)mercury_data_backend_libs__switch_util__du_name_ordered_ptag_case_0 },
	{ (void *)mercury_data_backend_libs__switch_util__du_ptag_ordered_ptag_case_0 },
	1,
	4,
	mercury_data_backend_libs__switch_util__functor_number_map_ptag_case_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__switch_util__type_ctor_info_extended_case_0;

const MR_PseudoTypeInfo mercury_data_backend_libs__switch_util__field_types_hash_slot_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_backend_libs__switch_util__type_ctor_info_extended_case_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_backend_libs__switch_util__du_functor_desc_hash_slot_0_0 = {
	"hash_slot",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_backend_libs__switch_util__field_types_hash_slot_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_backend_libs__switch_util__du_stag_ordered_hash_slot_0_0[] = {
	&mercury_data_backend_libs__switch_util__du_functor_desc_hash_slot_0_0

};

const MR_DuPtagLayout mercury_data_backend_libs__switch_util__du_ptag_ordered_hash_slot_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_backend_libs__switch_util__du_stag_ordered_hash_slot_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_backend_libs__switch_util__du_name_ordered_hash_slot_0[] = {
	&mercury_data_backend_libs__switch_util__du_functor_desc_hash_slot_0_0
};

const MR_Integer mercury_data_backend_libs__switch_util__functor_number_map_hash_slot_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_backend_libs__switch_util__type_ctor_info_hash_slot_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___backend_libs__switch_util__hash_slot_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___backend_libs__switch_util__hash_slot_0_0)),
	"backend_libs.switch_util",
	"hash_slot",
	{ (void *)mercury_data_backend_libs__switch_util__du_name_ordered_hash_slot_0 },
	{ (void *)mercury_data_backend_libs__switch_util__du_ptag_ordered_hash_slot_0 },
	1,
	4,
	mercury_data_backend_libs__switch_util__functor_number_map_hash_slot_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_cons_tag_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_cons_tag_0;

const MR_PseudoTypeInfo mercury_data_backend_libs__switch_util__field_types_extended_case_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_data__type_ctor_info_cons_tag_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

static const MR_DuFunctorDesc mercury_data_backend_libs__switch_util__du_functor_desc_extended_case_0_0 = {
	"extended_case",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_backend_libs__switch_util__field_types_extended_case_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_backend_libs__switch_util__du_stag_ordered_extended_case_0_0[] = {
	&mercury_data_backend_libs__switch_util__du_functor_desc_extended_case_0_0

};

const MR_DuPtagLayout mercury_data_backend_libs__switch_util__du_ptag_ordered_extended_case_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_backend_libs__switch_util__du_stag_ordered_extended_case_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_backend_libs__switch_util__du_name_ordered_extended_case_0[] = {
	&mercury_data_backend_libs__switch_util__du_functor_desc_extended_case_0_0
};

const MR_Integer mercury_data_backend_libs__switch_util__functor_number_map_extended_case_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_backend_libs__switch_util__type_ctor_info_extended_case_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___backend_libs__switch_util__extended_case_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___backend_libs__switch_util__extended_case_0_0)),
	"backend_libs.switch_util",
	"extended_case",
	{ (void *)mercury_data_backend_libs__switch_util__du_name_ordered_extended_case_0 },
	{ (void *)mercury_data_backend_libs__switch_util__du_ptag_ordered_extended_case_0 },
	1,
	4,
	mercury_data_backend_libs__switch_util__functor_number_map_extended_case_0
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1backend_libs__switch_util__type_ctor_info_extended_case_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_backend_libs__switch_util__type_ctor_info_extended_case_0
}};

const MR_TypeCtorInfo_Struct mercury_data_backend_libs__switch_util__type_ctor_info_cases_list_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___backend_libs__switch_util__cases_list_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___backend_libs__switch_util__cases_list_0_0)),
	"backend_libs.switch_util",
	"cases_list",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1backend_libs__switch_util__type_ctor_info_extended_case_0 },
	-1,
	0,
	NULL
};

static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__switch_util__group_cases_by_ptag_3_0_1 = {
{
MR_PREDICATE,
"backend_libs.switch_util",
"backend_libs.switch_util",
"lambda_switch_util_m_449",
2,
0
},
"backend_libs.switch_util",
"switch_util.m",
449,
"d2;c6;d2;c2;t;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__switch_util__group_cases_by_ptag_3_0_2 = {
{
MR_PREDICATE,
"backend_libs.switch_util",
"backend_libs.switch_util",
"lambda_switch_util_m_464",
2,
0
},
"backend_libs.switch_util",
"switch_util.m",
464,
"d2;c6;d3;c2;t;c2;"
};


MR_BEGIN_MODULE(backend_libs__switch_util_module0)
	MR_init_entry1(fn__backend_libs__switch_util__this_file_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__backend_libs__switch_util__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("switch_util.m", 13);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(backend_libs__switch_util_module1)
	MR_init_entry1(fn__backend_libs__switch_util__type_cat_to_switch_cat_1_0);
	MR_init_label8(fn__backend_libs__switch_util__type_cat_to_switch_cat_1_0,5,10,11,13,14,16,18,20)
	MR_init_label2(fn__backend_libs__switch_util__type_cat_to_switch_cat_1_0,22,24)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__backend_libs__switch_util__type_cat_to_switch_cat_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r1,
		MR_LABEL_AP(fn__backend_libs__switch_util__type_cat_to_switch_cat_1_0_i10) MR_AND
		MR_LABEL_AP(fn__backend_libs__switch_util__type_cat_to_switch_cat_1_0_i10) MR_AND
		MR_LABEL_AP(fn__backend_libs__switch_util__type_cat_to_switch_cat_1_0_i5) MR_AND
		MR_LABEL_AP(fn__backend_libs__switch_util__type_cat_to_switch_cat_1_0_i13) MR_AND
		MR_LABEL_AP(fn__backend_libs__switch_util__type_cat_to_switch_cat_1_0_i13) MR_AND
		MR_LABEL_AP(fn__backend_libs__switch_util__type_cat_to_switch_cat_1_0_i13) MR_AND
		MR_LABEL_AP(fn__backend_libs__switch_util__type_cat_to_switch_cat_1_0_i10) MR_AND
		MR_LABEL_AP(fn__backend_libs__switch_util__type_cat_to_switch_cat_1_0_i10) MR_AND
		MR_LABEL_AP(fn__backend_libs__switch_util__type_cat_to_switch_cat_1_0_i11) MR_AND
		MR_LABEL_AP(fn__backend_libs__switch_util__type_cat_to_switch_cat_1_0_i13) MR_AND
		MR_LABEL_AP(fn__backend_libs__switch_util__type_cat_to_switch_cat_1_0_i14) MR_AND
		MR_LABEL_AP(fn__backend_libs__switch_util__type_cat_to_switch_cat_1_0_i16) MR_AND
		MR_LABEL_AP(fn__backend_libs__switch_util__type_cat_to_switch_cat_1_0_i18) MR_AND
		MR_LABEL_AP(fn__backend_libs__switch_util__type_cat_to_switch_cat_1_0_i20) MR_AND
		MR_LABEL_AP(fn__backend_libs__switch_util__type_cat_to_switch_cat_1_0_i22) MR_AND
		MR_LABEL_AP(fn__backend_libs__switch_util__type_cat_to_switch_cat_1_0_i24));
MR_def_label(fn__backend_libs__switch_util__type_cat_to_switch_cat_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__backend_libs__switch_util__type_cat_to_switch_cat_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__backend_libs__switch_util__type_cat_to_switch_cat_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("switch_util.m", 13);
	MR_r2 = (MR_Word) MR_string_const("type_cat_to_switch_cat: dummy", 29);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(fn__backend_libs__switch_util__type_cat_to_switch_cat_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 3;
	MR_proceed();
MR_def_label(fn__backend_libs__switch_util__type_cat_to_switch_cat_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("switch_util.m", 13);
	MR_r2 = (MR_Word) MR_string_const("type_cat_to_switch_cat: type_info", 33);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(fn__backend_libs__switch_util__type_cat_to_switch_cat_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("switch_util.m", 13);
	MR_r2 = (MR_Word) MR_string_const("type_cat_to_switch_cat: type_ctor_info", 38);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(fn__backend_libs__switch_util__type_cat_to_switch_cat_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("switch_util.m", 13);
	MR_r2 = (MR_Word) MR_string_const("type_cat_to_switch_cat: typeclass_info", 38);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(fn__backend_libs__switch_util__type_cat_to_switch_cat_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("switch_util.m", 13);
	MR_r2 = (MR_Word) MR_string_const("type_cat_to_switch_cat: base_typeclass_info", 43);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(fn__backend_libs__switch_util__type_cat_to_switch_cat_1_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("switch_util.m", 13);
	MR_r2 = (MR_Word) MR_string_const("type_cat_to_switch_cat: void", 28);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(fn__backend_libs__switch_util__type_cat_to_switch_cat_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_reserved_address_0;
MR_decl_entry(fn__list__length_1_0);

MR_BEGIN_MODULE(backend_libs__switch_util_module2)
	MR_init_entry1(fn__backend_libs__switch_util__switch_priority_1_0);
	MR_init_label8(fn__backend_libs__switch_util__switch_priority_1_0,4,24,5,6,7,8,16,18)
	MR_init_label4(fn__backend_libs__switch_util__switch_priority_1_0,20,39,22,23)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__backend_libs__switch_util__switch_priority_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__backend_libs__switch_util__switch_priority_1_0_i4) MR_AND
		MR_LABEL_AP(fn__backend_libs__switch_util__switch_priority_1_0_i6) MR_AND
		MR_LABEL_AP(fn__backend_libs__switch_util__switch_priority_1_0_i7) MR_AND
		MR_LABEL_AP(fn__backend_libs__switch_util__switch_priority_1_0_i8));
MR_def_label(fn__backend_libs__switch_util__switch_priority_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r1),0)) {
		MR_GOTO_LAB(fn__backend_libs__switch_util__switch_priority_1_0_i5);
	}
MR_def_label(fn__backend_libs__switch_util__switch_priority_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
MR_def_label(fn__backend_libs__switch_util__switch_priority_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__backend_libs__switch_util__switch_priority_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 5;
	MR_proceed();
MR_def_label(fn__backend_libs__switch_util__switch_priority_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 3;
	MR_proceed();
MR_def_label(fn__backend_libs__switch_util__switch_priority_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(fn__backend_libs__switch_util__switch_priority_1_0_i20) MR_AND
		MR_LABEL_AP(fn__backend_libs__switch_util__switch_priority_1_0_i20) MR_AND
		MR_LABEL_AP(fn__backend_libs__switch_util__switch_priority_1_0_i16) MR_AND
		MR_LABEL_AP(fn__backend_libs__switch_util__switch_priority_1_0_i16) MR_AND
		MR_LABEL_AP(fn__backend_libs__switch_util__switch_priority_1_0_i16) MR_AND
		MR_LABEL_AP(fn__backend_libs__switch_util__switch_priority_1_0_i16) MR_AND
		MR_LABEL_AP(fn__backend_libs__switch_util__switch_priority_1_0_i16) MR_AND
		MR_LABEL_AP(fn__backend_libs__switch_util__switch_priority_1_0_i16) MR_AND
		MR_LABEL_AP(fn__backend_libs__switch_util__switch_priority_1_0_i24) MR_AND
		MR_LABEL_AP(fn__backend_libs__switch_util__switch_priority_1_0_i18) MR_AND
		MR_LABEL_AP(fn__backend_libs__switch_util__switch_priority_1_0_i20) MR_AND
		MR_LABEL_AP(fn__backend_libs__switch_util__switch_priority_1_0_i20) MR_AND
		MR_LABEL_AP(fn__backend_libs__switch_util__switch_priority_1_0_i39));
MR_def_label(fn__backend_libs__switch_util__switch_priority_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 6;
	MR_proceed();
MR_def_label(fn__backend_libs__switch_util__switch_priority_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 4;
	MR_proceed();
MR_def_label(fn__backend_libs__switch_util__switch_priority_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__backend_libs__switch_util__switch_priority_1_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_np_localcall_lab(fn__backend_libs__switch_util__switch_priority_1_0,
		fn__backend_libs__switch_util__switch_priority_1_0_i22);
MR_def_label(fn__backend_libs__switch_util__switch_priority_1_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, reserved_address);
	MR_np_call_localret_ent(fn__list__length_1_0,
		fn__backend_libs__switch_util__switch_priority_1_0_i23);
MR_def_label(fn__backend_libs__switch_util__switch_priority_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) MR_r1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(char__min_char_value_1_0);
MR_decl_entry(char__max_char_value_1_0);
MR_decl_entry(parse_tree__prog_type__type_to_ctor_and_args_3_0);
MR_decl_entry(hlds__hlds_module__module_info_get_type_table_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_type_ctor_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_type_defn_0;
MR_decl_entry(map__lookup_3_0);
MR_decl_entry(hlds__hlds_data__get_type_defn_body_2_0);
MR_decl_entry(map__count_2_0);

MR_BEGIN_MODULE(backend_libs__switch_util_module3)
	MR_init_entry1(backend_libs__switch_util__type_range_5_0);
	MR_init_label8(backend_libs__switch_util__type_range_5_0,4,5,3,9,7,12,13,14)
	MR_init_label5(backend_libs__switch_util__type_range_5_0,15,19,31,2,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__backend_libs__switch_util__type_range_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(backend_libs__switch_util__type_range_5_0_i3);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(char__min_char_value_1_0,
		backend_libs__switch_util__type_range_5_0_i4);
MR_def_label(backend_libs__switch_util__type_range_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(char__max_char_value_1_0,
		backend_libs__switch_util__type_range_5_0_i5);
MR_def_label(backend_libs__switch_util__type_range_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_r1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
MR_def_label(backend_libs__switch_util__type_range_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,6)) {
		MR_GOTO_LAB(backend_libs__switch_util__type_range_5_0_i1);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_3_0,
		backend_libs__switch_util__type_range_5_0_i9);
MR_def_label(backend_libs__switch_util__type_range_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(backend_libs__switch_util__type_range_5_0_i7);
	}
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_type_table_2_0,
		backend_libs__switch_util__type_range_5_0_i13);
MR_def_label(backend_libs__switch_util__type_range_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r1 = (MR_Word) MR_string_const("switch_util.m", 13);
	MR_r2 = (MR_Word) MR_string_const("dense_switch.type_range: invalid enum type?", 43);
	}
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		backend_libs__switch_util__type_range_5_0_i12);
MR_def_label(backend_libs__switch_util__type_range_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_type_table_2_0,
		backend_libs__switch_util__type_range_5_0_i13);
MR_def_label(backend_libs__switch_util__type_range_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_type_defn);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__lookup_3_0,
		backend_libs__switch_util__type_range_5_0_i14);
MR_def_label(backend_libs__switch_util__type_range_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_body_2_0,
		backend_libs__switch_util__type_range_5_0_i15);
MR_def_label(backend_libs__switch_util__type_range_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_r1),0)) {
		MR_GOTO_LAB(backend_libs__switch_util__type_range_5_0_i31);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, cons_tag);
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(map__count_2_0,
		backend_libs__switch_util__type_range_5_0_i19);
MR_def_label(backend_libs__switch_util__type_range_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r3 = ((MR_Integer) MR_r1 - (MR_Integer) 1);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
MR_def_label(backend_libs__switch_util__type_range_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("switch_util.m", 13);
	MR_r2 = (MR_Word) MR_string_const("type_range: enum type is not d.u. type?", 39);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		backend_libs__switch_util__type_range_5_0_i2);
MR_def_label(backend_libs__switch_util__type_range_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
MR_def_label(backend_libs__switch_util__type_range_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_105_110_116_95_95_47_47_2_0);

MR_BEGIN_MODULE(backend_libs__switch_util_module4)
	MR_init_entry1(fn__backend_libs__switch_util__switch_density_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__backend_libs__switch_util__switch_density_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 * (MR_Integer) 100);
	MR_np_tailcall_ent(fn__f_105_110_116_95_95_47_47_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__init_1_0);
MR_decl_entry(string__hash_2_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(backend_libs__switch_util_module5)
	MR_init_entry1(backend_libs__switch_util__string_hash_cases_3_0);
	MR_init_label7(backend_libs__switch_util__string_hash_cases_3_0,34,5,6,9,10,12,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__backend_libs__switch_util__string_hash_cases_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(backend_libs__switch_util__string_hash_cases_3_0_i34);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_tailcall_ent(map__init_1_0);
MR_def_label(backend_libs__switch_util__string_hash_cases_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_np_localcall_lab(backend_libs__switch_util__string_hash_cases_3_0,
		backend_libs__switch_util__string_hash_cases_3_0_i5);
MR_def_label(backend_libs__switch_util__string_hash_cases_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_sv(2), 1);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(backend_libs__switch_util__string_hash_cases_3_0_i6);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(string__hash_2_0,
		backend_libs__switch_util__string_hash_cases_3_0_i10);
MR_def_label(backend_libs__switch_util__string_hash_cases_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("switch_util.m", 13);
	MR_r2 = (MR_Word) MR_string_const("string_hash_cases: non-string case?", 35);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		backend_libs__switch_util__string_hash_cases_3_0_i9);
MR_def_label(backend_libs__switch_util__string_hash_cases_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__hash_2_0,
		backend_libs__switch_util__string_hash_cases_3_0_i10);
MR_def_label(backend_libs__switch_util__string_hash_cases_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = ((MR_Integer) MR_r1 & (MR_Integer) MR_sv(1));
	MR_sv(1) = MR_r3;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		backend_libs__switch_util__string_hash_cases_3_0_i12);
MR_def_label(backend_libs__switch_util__string_hash_cases_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(backend_libs__switch_util__string_hash_cases_3_0_i11);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0);
	}
MR_def_label(backend_libs__switch_util__string_hash_cases_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0);
MR_decl_entry(map__contains_2_0);

MR_BEGIN_MODULE(backend_libs__switch_util_module6)
	MR_init_entry1(backend_libs__switch_util__follow_hash_chain_3_0);
	MR_init_label4(backend_libs__switch_util__follow_hash_chain_3_0,18,2,5,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__switch_util__follow_hash_chain_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(backend_libs__switch_util__follow_hash_chain_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__switch_util, hash_slot);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		backend_libs__switch_util__follow_hash_chain_3_0_i2);
MR_def_label(backend_libs__switch_util__follow_hash_chain_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 1);
	MR_r4 = MR_tempr1;
	if (MR_INT_LT(MR_tempr1,0)) {
		MR_GOTO_LAB(backend_libs__switch_util__follow_hash_chain_3_0_i4);
	}
	MR_sv(3) = MR_tempr1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(backend_libs__switch_util, hash_slot);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__contains_2_0,
		backend_libs__switch_util__follow_hash_chain_3_0_i5);
MR_def_label(backend_libs__switch_util__follow_hash_chain_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(backend_libs__switch_util__follow_hash_chain_3_0_i4);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(backend_libs__switch_util__follow_hash_chain_3_0_i18);
MR_def_label(backend_libs__switch_util__follow_hash_chain_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__switch_util_module7)
	MR_init_entry1(backend_libs__switch_util__next_free_hash_slot_4_0);
	MR_init_label4(backend_libs__switch_util__next_free_hash_slot_4_0,19,5,8,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__switch_util__next_free_hash_slot_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(backend_libs__switch_util__next_free_hash_slot_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = ((MR_Integer) MR_r3 + (MR_Integer) 1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(backend_libs__switch_util, hash_slot);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(map__contains_2_0,
		backend_libs__switch_util__next_free_hash_slot_4_0_i5);
MR_def_label(backend_libs__switch_util__next_free_hash_slot_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(backend_libs__switch_util__next_free_hash_slot_4_0_i2);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(map__contains_2_0,
		backend_libs__switch_util__next_free_hash_slot_4_0_i8);
MR_def_label(backend_libs__switch_util__next_free_hash_slot_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(backend_libs__switch_util__next_free_hash_slot_4_0_i2);
	}
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(4);
MR_def_label(backend_libs__switch_util__next_free_hash_slot_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(backend_libs__switch_util__next_free_hash_slot_4_0_i19);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0);
MR_decl_entry(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(backend_libs__switch_util_module8)
	MR_init_entry1(backend_libs__switch_util__calc_hash_slots_2_7_0);
	MR_init_label8(backend_libs__switch_util__calc_hash_slots_2_7_0,26,4,6,8,9,10,11,12)
	MR_init_label2(backend_libs__switch_util__calc_hash_slots_2_7_0,5,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__switch_util__calc_hash_slots_2_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(backend_libs__switch_util__calc_hash_slots_2_7_0_i26);
	}
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_proceed();
MR_def_label(backend_libs__switch_util__calc_hash_slots_2_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_np_localcall_lab(backend_libs__switch_util__calc_hash_slots_2_7_0,
		backend_libs__switch_util__calc_hash_slots_2_7_0_i4);
MR_def_label(backend_libs__switch_util__calc_hash_slots_2_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(backend_libs__switch_util, hash_slot);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__contains_2_0,
		backend_libs__switch_util__calc_hash_slots_2_7_0_i6);
MR_def_label(backend_libs__switch_util__calc_hash_slots_2_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(backend_libs__switch_util__calc_hash_slots_2_7_0_i5);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(backend_libs__switch_util__follow_hash_chain_3_0,
		backend_libs__switch_util__calc_hash_slots_2_7_0_i8);
MR_def_label(backend_libs__switch_util__calc_hash_slots_2_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(backend_libs__switch_util__next_free_hash_slot_4_0,
		backend_libs__switch_util__calc_hash_slots_2_7_0_i9);
MR_def_label(backend_libs__switch_util__calc_hash_slots_2_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__switch_util, hash_slot);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		backend_libs__switch_util__calc_hash_slots_2_7_0_i10);
MR_def_label(backend_libs__switch_util__calc_hash_slots_2_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__switch_util, hash_slot);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		backend_libs__switch_util__calc_hash_slots_2_7_0_i11);
MR_def_label(backend_libs__switch_util__calc_hash_slots_2_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) -1;
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__switch_util, hash_slot);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		backend_libs__switch_util__calc_hash_slots_2_7_0_i12);
MR_def_label(backend_libs__switch_util__calc_hash_slots_2_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(6);
MR_def_label(backend_libs__switch_util__calc_hash_slots_2_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) -1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__switch_util, hash_slot);
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		backend_libs__switch_util__calc_hash_slots_2_7_0_i13);
MR_def_label(backend_libs__switch_util__calc_hash_slots_2_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__switch_util_module9)
	MR_init_entry1(backend_libs__switch_util__calc_hash_slots_1_6_0);
	MR_init_label3(backend_libs__switch_util__calc_hash_slots_1_6_0,10,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__switch_util__calc_hash_slots_1_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(backend_libs__switch_util__calc_hash_slots_1_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(backend_libs__switch_util__calc_hash_slots_1_6_0_i3);
	}
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_decr_sp_and_return(3);
MR_def_label(backend_libs__switch_util__calc_hash_slots_1_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_tempr3, 1);
	MR_tempr1 = MR_tempr3;
	MR_tempr2 = MR_ctfield(1, MR_tempr3, 0);
	MR_r1 = MR_ctfield(0, MR_tempr2, 1);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	MR_r5 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(backend_libs__switch_util__calc_hash_slots_2_7_0,
		backend_libs__switch_util__calc_hash_slots_1_6_0_i4);
MR_def_label(backend_libs__switch_util__calc_hash_slots_1_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(backend_libs__switch_util__calc_hash_slots_1_6_0_i10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__init_0_0);

MR_BEGIN_MODULE(backend_libs__switch_util_module10)
	MR_init_entry1(backend_libs__switch_util__calc_hash_slots_3_0);
	MR_init_label1(backend_libs__switch_util__calc_hash_slots_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__backend_libs__switch_util__calc_hash_slots_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(backend_libs__switch_util, hash_slot);
	MR_np_call_localret_ent(fn__map__init_0_0,
		backend_libs__switch_util__calc_hash_slots_3_0_i2);
MR_def_label(backend_libs__switch_util__calc_hash_slots_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = (MR_Integer) 0;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(backend_libs__switch_util__calc_hash_slots_1_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__compiler_util__expect_3_0);

MR_BEGIN_MODULE(backend_libs__switch_util_module11)
	MR_init_entry1(backend_libs__switch_util__group_cases_by_ptag_3_0);
	MR_init_label8(backend_libs__switch_util__group_cases_by_ptag_3_0,122,3,6,9,8,13,14,25)
	MR_init_label8(backend_libs__switch_util__group_cases_by_ptag_3_0,50,52,54,51,56,57,60,62)
	MR_init_label8(backend_libs__switch_util__group_cases_by_ptag_3_0,64,65,66,61,68,69,72,74)
	MR_init_label8(backend_libs__switch_util__group_cases_by_ptag_3_0,76,77,78,73,80,81,82,87)
	MR_init_label2(backend_libs__switch_util__group_cases_by_ptag_3_0,88,125)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__backend_libs__switch_util__group_cases_by_ptag_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(backend_libs__switch_util__group_cases_by_ptag_3_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(backend_libs__switch_util__group_cases_by_ptag_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(8);
MR_def_label(backend_libs__switch_util__group_cases_by_ptag_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = MR_ctfield(1, MR_r1, 0);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 3);
	MR_r4 = MR_ctfield(0, MR_tempr2, 1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(backend_libs__switch_util__group_cases_by_ptag_3_0_i6) MR_AND
		MR_LABEL_AP(backend_libs__switch_util__group_cases_by_ptag_3_0_i87) MR_AND
		MR_LABEL_AP(backend_libs__switch_util__group_cases_by_ptag_3_0_i87) MR_AND
		MR_LABEL_AP(backend_libs__switch_util__group_cases_by_ptag_3_0_i25));
	}
MR_def_label(backend_libs__switch_util__group_cases_by_ptag_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r4),0)) {
		MR_GOTO_LAB(backend_libs__switch_util__group_cases_by_ptag_3_0_i87);
	}
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__switch_util, ptag_case);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		backend_libs__switch_util__group_cases_by_ptag_3_0_i9);
MR_def_label(backend_libs__switch_util__group_cases_by_ptag_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(backend_libs__switch_util__group_cases_by_ptag_3_0_i8);
	}
	MR_np_call_localret_ent(fn__backend_libs__switch_util__this_file_0_0,
		backend_libs__switch_util__group_cases_by_ptag_3_0_i54);
MR_def_label(backend_libs__switch_util__group_cases_by_ptag_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(backend_libs__switch_util, stag_goal);
	MR_np_call_localret_ent(map__init_1_0,
		backend_libs__switch_util__group_cases_by_ptag_3_0_i13);
MR_def_label(backend_libs__switch_util__group_cases_by_ptag_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__switch_util, stag_goal);
	MR_r3 = (MR_Integer) -1;
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		backend_libs__switch_util__group_cases_by_ptag_3_0_i14);
MR_def_label(backend_libs__switch_util__group_cases_by_ptag_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__switch_util, ptag_case);
	MR_r2 = (MR_Integer) 0;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		backend_libs__switch_util__group_cases_by_ptag_3_0_i82);
MR_def_label(backend_libs__switch_util__group_cases_by_ptag_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r4, 0),
		MR_LABEL_AP(backend_libs__switch_util__group_cases_by_ptag_3_0_i87) MR_AND
		MR_LABEL_AP(backend_libs__switch_util__group_cases_by_ptag_3_0_i87) MR_AND
		MR_LABEL_AP(backend_libs__switch_util__group_cases_by_ptag_3_0_i87) MR_AND
		MR_LABEL_AP(backend_libs__switch_util__group_cases_by_ptag_3_0_i87) MR_AND
		MR_LABEL_AP(backend_libs__switch_util__group_cases_by_ptag_3_0_i87) MR_AND
		MR_LABEL_AP(backend_libs__switch_util__group_cases_by_ptag_3_0_i87) MR_AND
		MR_LABEL_AP(backend_libs__switch_util__group_cases_by_ptag_3_0_i87) MR_AND
		MR_LABEL_AP(backend_libs__switch_util__group_cases_by_ptag_3_0_i87) MR_AND
		MR_LABEL_AP(backend_libs__switch_util__group_cases_by_ptag_3_0_i50) MR_AND
		MR_LABEL_AP(backend_libs__switch_util__group_cases_by_ptag_3_0_i60) MR_AND
		MR_LABEL_AP(backend_libs__switch_util__group_cases_by_ptag_3_0_i72) MR_AND
		MR_LABEL_AP(backend_libs__switch_util__group_cases_by_ptag_3_0_i87) MR_AND
		MR_LABEL_AP(backend_libs__switch_util__group_cases_by_ptag_3_0_i87));
MR_def_label(backend_libs__switch_util__group_cases_by_ptag_3_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(3, MR_r4, 1);
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_sv(1) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__switch_util, ptag_case);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		backend_libs__switch_util__group_cases_by_ptag_3_0_i52);
MR_def_label(backend_libs__switch_util__group_cases_by_ptag_3_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(backend_libs__switch_util__group_cases_by_ptag_3_0_i51);
	}
	MR_np_call_localret_ent(fn__backend_libs__switch_util__this_file_0_0,
		backend_libs__switch_util__group_cases_by_ptag_3_0_i54);
MR_def_label(backend_libs__switch_util__group_cases_by_ptag_3_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("unshared tag is shared", 22);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		backend_libs__switch_util__group_cases_by_ptag_3_0_i125);
MR_def_label(backend_libs__switch_util__group_cases_by_ptag_3_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(backend_libs__switch_util, stag_goal);
	MR_np_call_localret_ent(map__init_1_0,
		backend_libs__switch_util__group_cases_by_ptag_3_0_i56);
MR_def_label(backend_libs__switch_util__group_cases_by_ptag_3_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__switch_util, stag_goal);
	MR_r3 = (MR_Integer) -1;
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		backend_libs__switch_util__group_cases_by_ptag_3_0_i57);
MR_def_label(backend_libs__switch_util__group_cases_by_ptag_3_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__switch_util, ptag_case);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		backend_libs__switch_util__group_cases_by_ptag_3_0_i82);
MR_def_label(backend_libs__switch_util__group_cases_by_ptag_3_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r3 = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_sv(1) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__switch_util, ptag_case);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		backend_libs__switch_util__group_cases_by_ptag_3_0_i62);
MR_def_label(backend_libs__switch_util__group_cases_by_ptag_3_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(backend_libs__switch_util__group_cases_by_ptag_3_0_i61);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(5) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(backend_libs__switch_util__IntroducedFrom__pred__group_cases_by_ptag__449__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 2;
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(fn__backend_libs__switch_util__this_file_0_0,
		backend_libs__switch_util__group_cases_by_ptag_3_0_i64);
MR_def_label(backend_libs__switch_util__group_cases_by_ptag_3_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r3 = (MR_Word) MR_string_const("remote tag is shared with non-remote", 36);
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		backend_libs__switch_util__group_cases_by_ptag_3_0_i65);
MR_def_label(backend_libs__switch_util__group_cases_by_ptag_3_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__switch_util, stag_goal);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		backend_libs__switch_util__group_cases_by_ptag_3_0_i66);
MR_def_label(backend_libs__switch_util__group_cases_by_ptag_3_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__switch_util, ptag_case);
	MR_r2 = MR_sv(7);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		backend_libs__switch_util__group_cases_by_ptag_3_0_i82);
MR_def_label(backend_libs__switch_util__group_cases_by_ptag_3_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(backend_libs__switch_util, stag_goal);
	MR_np_call_localret_ent(map__init_1_0,
		backend_libs__switch_util__group_cases_by_ptag_3_0_i68);
MR_def_label(backend_libs__switch_util__group_cases_by_ptag_3_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__switch_util, stag_goal);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		backend_libs__switch_util__group_cases_by_ptag_3_0_i69);
MR_def_label(backend_libs__switch_util__group_cases_by_ptag_3_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__switch_util, ptag_case);
	MR_r2 = MR_sv(7);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		backend_libs__switch_util__group_cases_by_ptag_3_0_i82);
MR_def_label(backend_libs__switch_util__group_cases_by_ptag_3_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(7) = MR_ctfield(3, MR_tempr1, 2);
	MR_r3 = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_sv(1) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__switch_util, ptag_case);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		backend_libs__switch_util__group_cases_by_ptag_3_0_i74);
MR_def_label(backend_libs__switch_util__group_cases_by_ptag_3_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(backend_libs__switch_util__group_cases_by_ptag_3_0_i73);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(4) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(backend_libs__switch_util__IntroducedFrom__pred__group_cases_by_ptag__464__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = (MR_Integer) 1;
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(fn__backend_libs__switch_util__this_file_0_0,
		backend_libs__switch_util__group_cases_by_ptag_3_0_i76);
MR_def_label(backend_libs__switch_util__group_cases_by_ptag_3_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = (MR_Word) MR_string_const("local tag is shared with non-local", 34);
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		backend_libs__switch_util__group_cases_by_ptag_3_0_i77);
MR_def_label(backend_libs__switch_util__group_cases_by_ptag_3_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__switch_util, stag_goal);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		backend_libs__switch_util__group_cases_by_ptag_3_0_i78);
MR_def_label(backend_libs__switch_util__group_cases_by_ptag_3_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__switch_util, ptag_case);
	MR_r2 = MR_sv(6);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		backend_libs__switch_util__group_cases_by_ptag_3_0_i82);
MR_def_label(backend_libs__switch_util__group_cases_by_ptag_3_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(backend_libs__switch_util, stag_goal);
	MR_np_call_localret_ent(map__init_1_0,
		backend_libs__switch_util__group_cases_by_ptag_3_0_i80);
MR_def_label(backend_libs__switch_util__group_cases_by_ptag_3_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__switch_util, stag_goal);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		backend_libs__switch_util__group_cases_by_ptag_3_0_i81);
MR_def_label(backend_libs__switch_util__group_cases_by_ptag_3_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__switch_util, ptag_case);
	MR_r2 = MR_sv(6);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		backend_libs__switch_util__group_cases_by_ptag_3_0_i82);
MR_def_label(backend_libs__switch_util__group_cases_by_ptag_3_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(backend_libs__switch_util__group_cases_by_ptag_3_0_i122);
MR_def_label(backend_libs__switch_util__group_cases_by_ptag_3_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_np_call_localret_ent(fn__backend_libs__switch_util__this_file_0_0,
		backend_libs__switch_util__group_cases_by_ptag_3_0_i88);
MR_def_label(backend_libs__switch_util__group_cases_by_ptag_3_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("non-du tag in group_cases_by_ptag", 33);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		backend_libs__switch_util__group_cases_by_ptag_3_0_i125);
MR_def_label(backend_libs__switch_util__group_cases_by_ptag_3_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(backend_libs__switch_util__group_cases_by_ptag_3_0_i122);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__switch_util_module12)
	MR_init_entry1(backend_libs__switch_util__select_frequent_ptag_4_0);
	MR_init_label3(backend_libs__switch_util__select_frequent_ptag_4_0,4,3,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__switch_util__select_frequent_ptag_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(backend_libs__switch_util__select_frequent_ptag_4_0_i1);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	MR_sv(4) = MR_ctfield(0, MR_ctfield(0, MR_tempr1, 1), 1);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr2 = MR_ctfield(1, MR_tempr3, 1);
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_tempr2;
	}
	MR_np_localcall_lab(backend_libs__switch_util__select_frequent_ptag_4_0,
		backend_libs__switch_util__select_frequent_ptag_4_0_i4);
MR_def_label(backend_libs__switch_util__select_frequent_ptag_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(backend_libs__switch_util__select_frequent_ptag_4_0_i3);
	}
	if (((MR_Integer) MR_r3 <= (MR_Integer) MR_sv(4))) {
		MR_GOTO_LAB(backend_libs__switch_util__select_frequent_ptag_4_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
	}
MR_def_label(backend_libs__switch_util__select_frequent_ptag_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
MR_def_label(backend_libs__switch_util__select_frequent_ptag_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__delete_3_0);
MR_decl_entry(map__is_empty_1_0);

MR_BEGIN_MODULE(backend_libs__switch_util_module13)
	MR_init_entry1(backend_libs__switch_util__order_ptags_by_count_3_0);
	MR_init_label8(backend_libs__switch_util__order_ptags_by_count_3_0,32,4,7,9,10,6,2,14)
	MR_init_label1(backend_libs__switch_util__order_ptags_by_count_3_0,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__backend_libs__switch_util__order_ptags_by_count_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(backend_libs__switch_util__order_ptags_by_count_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(backend_libs__switch_util__select_frequent_ptag_4_0,
		backend_libs__switch_util__order_ptags_by_count_3_0_i4);
MR_def_label(backend_libs__switch_util__order_ptags_by_count_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(backend_libs__switch_util__order_ptags_by_count_3_0_i2);
	}
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__switch_util, ptag_case);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		backend_libs__switch_util__order_ptags_by_count_3_0_i7);
MR_def_label(backend_libs__switch_util__order_ptags_by_count_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(backend_libs__switch_util__order_ptags_by_count_3_0_i6);
	}
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(backend_libs__switch_util, ptag_case);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__delete_3_0,
		backend_libs__switch_util__order_ptags_by_count_3_0_i9);
MR_def_label(backend_libs__switch_util__order_ptags_by_count_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_localcall_lab(backend_libs__switch_util__order_ptags_by_count_3_0,
		backend_libs__switch_util__order_ptags_by_count_3_0_i10);
MR_def_label(backend_libs__switch_util__order_ptags_by_count_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_decr_sp_and_return(4);
	}
MR_def_label(backend_libs__switch_util__order_ptags_by_count_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(backend_libs__switch_util__order_ptags_by_count_3_0_i32);
MR_def_label(backend_libs__switch_util__order_ptags_by_count_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(backend_libs__switch_util, ptag_case);
	MR_np_call_localret_ent(map__is_empty_1_0,
		backend_libs__switch_util__order_ptags_by_count_3_0_i14);
MR_def_label(backend_libs__switch_util__order_ptags_by_count_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(backend_libs__switch_util__order_ptags_by_count_3_0_i13);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(4);
MR_def_label(backend_libs__switch_util__order_ptags_by_count_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("switch_util.m", 13);
	MR_r2 = (MR_Word) MR_string_const("PtagCaseMap0 is not empty in order_ptags_by_count", 49);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__switch_util_module14)
	MR_init_entry1(backend_libs__switch_util__order_ptags_by_value_4_0);
	MR_init_label8(backend_libs__switch_util__order_ptags_by_value_4_0,29,4,6,7,3,2,11,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__backend_libs__switch_util__order_ptags_by_value_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(backend_libs__switch_util__order_ptags_by_value_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r2 < (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(backend_libs__switch_util__order_ptags_by_value_4_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(4) = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__switch_util, ptag_case);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		backend_libs__switch_util__order_ptags_by_value_4_0_i4);
MR_def_label(backend_libs__switch_util__order_ptags_by_value_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(backend_libs__switch_util__order_ptags_by_value_4_0_i3);
	}
	MR_r3 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(backend_libs__switch_util, ptag_case);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__delete_3_0,
		backend_libs__switch_util__order_ptags_by_value_4_0_i6);
MR_def_label(backend_libs__switch_util__order_ptags_by_value_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_np_localcall_lab(backend_libs__switch_util__order_ptags_by_value_4_0,
		backend_libs__switch_util__order_ptags_by_value_4_0_i7);
MR_def_label(backend_libs__switch_util__order_ptags_by_value_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_decr_sp_and_return(5);
	}
MR_def_label(backend_libs__switch_util__order_ptags_by_value_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(backend_libs__switch_util__order_ptags_by_value_4_0_i29);
MR_def_label(backend_libs__switch_util__order_ptags_by_value_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(backend_libs__switch_util, ptag_case);
	MR_np_call_localret_ent(map__is_empty_1_0,
		backend_libs__switch_util__order_ptags_by_value_4_0_i11);
MR_def_label(backend_libs__switch_util__order_ptags_by_value_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(backend_libs__switch_util__order_ptags_by_value_4_0_i10);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(5);
MR_def_label(backend_libs__switch_util__order_ptags_by_value_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("switch_util.m", 13);
	MR_r2 = (MR_Word) MR_string_const("PtagCaseMap0 is not empty in order_ptags_by_value", 49);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(int__max_3_0);

MR_BEGIN_MODULE(backend_libs__switch_util_module15)
	MR_init_entry1(backend_libs__switch_util__get_ptag_counts_2_5_0);
	MR_init_label8(backend_libs__switch_util__get_ptag_counts_2_5_0,148,3,6,8,10,24,49,50)
	MR_init_label8(backend_libs__switch_util__get_ptag_counts_2_5_0,52,54,51,58,59,61,64,65)
	MR_init_label8(backend_libs__switch_util__get_ptag_counts_2_5_0,68,63,70,60,74,75,77,80)
	MR_init_label8(backend_libs__switch_util__get_ptag_counts_2_5_0,81,84,79,86,76,88,93,94)
	MR_init_label1(backend_libs__switch_util__get_ptag_counts_2_5_0,151)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__switch_util__get_ptag_counts_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(backend_libs__switch_util__get_ptag_counts_2_5_0,148)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(backend_libs__switch_util__get_ptag_counts_2_5_0_i3);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(8);
MR_def_label(backend_libs__switch_util__get_ptag_counts_2_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_ctfield(1, MR_r1, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(backend_libs__switch_util__get_ptag_counts_2_5_0_i6) MR_AND
		MR_LABEL_AP(backend_libs__switch_util__get_ptag_counts_2_5_0_i93) MR_AND
		MR_LABEL_AP(backend_libs__switch_util__get_ptag_counts_2_5_0_i93) MR_AND
		MR_LABEL_AP(backend_libs__switch_util__get_ptag_counts_2_5_0_i24));
MR_def_label(backend_libs__switch_util__get_ptag_counts_2_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r4),0)) {
		MR_GOTO_LAB(backend_libs__switch_util__get_ptag_counts_2_5_0_i93);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_sv(3) = (MR_Integer) 0;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(int__max_3_0,
		backend_libs__switch_util__get_ptag_counts_2_5_0_i8);
MR_def_label(backend_libs__switch_util__get_ptag_counts_2_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		backend_libs__switch_util__get_ptag_counts_2_5_0_i10);
MR_def_label(backend_libs__switch_util__get_ptag_counts_2_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(backend_libs__switch_util__get_ptag_counts_2_5_0_i51);
	}
	MR_np_call_localret_ent(fn__backend_libs__switch_util__this_file_0_0,
		backend_libs__switch_util__get_ptag_counts_2_5_0_i54);
MR_def_label(backend_libs__switch_util__get_ptag_counts_2_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r4, 0),
		MR_LABEL_AP(backend_libs__switch_util__get_ptag_counts_2_5_0_i93) MR_AND
		MR_LABEL_AP(backend_libs__switch_util__get_ptag_counts_2_5_0_i93) MR_AND
		MR_LABEL_AP(backend_libs__switch_util__get_ptag_counts_2_5_0_i93) MR_AND
		MR_LABEL_AP(backend_libs__switch_util__get_ptag_counts_2_5_0_i93) MR_AND
		MR_LABEL_AP(backend_libs__switch_util__get_ptag_counts_2_5_0_i93) MR_AND
		MR_LABEL_AP(backend_libs__switch_util__get_ptag_counts_2_5_0_i93) MR_AND
		MR_LABEL_AP(backend_libs__switch_util__get_ptag_counts_2_5_0_i93) MR_AND
		MR_LABEL_AP(backend_libs__switch_util__get_ptag_counts_2_5_0_i93) MR_AND
		MR_LABEL_AP(backend_libs__switch_util__get_ptag_counts_2_5_0_i49) MR_AND
		MR_LABEL_AP(backend_libs__switch_util__get_ptag_counts_2_5_0_i58) MR_AND
		MR_LABEL_AP(backend_libs__switch_util__get_ptag_counts_2_5_0_i74) MR_AND
		MR_LABEL_AP(backend_libs__switch_util__get_ptag_counts_2_5_0_i93) MR_AND
		MR_LABEL_AP(backend_libs__switch_util__get_ptag_counts_2_5_0_i93));
MR_def_label(backend_libs__switch_util__get_ptag_counts_2_5_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_sv(3) = MR_ctfield(3, MR_r4, 1);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(int__max_3_0,
		backend_libs__switch_util__get_ptag_counts_2_5_0_i50);
MR_def_label(backend_libs__switch_util__get_ptag_counts_2_5_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		backend_libs__switch_util__get_ptag_counts_2_5_0_i52);
MR_def_label(backend_libs__switch_util__get_ptag_counts_2_5_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(backend_libs__switch_util__get_ptag_counts_2_5_0_i51);
	}
	MR_np_call_localret_ent(fn__backend_libs__switch_util__this_file_0_0,
		backend_libs__switch_util__get_ptag_counts_2_5_0_i54);
MR_def_label(backend_libs__switch_util__get_ptag_counts_2_5_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("unshared tag is shared", 22);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		backend_libs__switch_util__get_ptag_counts_2_5_0_i151);
MR_def_label(backend_libs__switch_util__get_ptag_counts_2_5_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		backend_libs__switch_util__get_ptag_counts_2_5_0_i88);
MR_def_label(backend_libs__switch_util__get_ptag_counts_2_5_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(6) = MR_ctfield(3, MR_tempr1, 1);
	MR_r1 = MR_sv(6);
	}
	MR_np_call_localret_ent(int__max_3_0,
		backend_libs__switch_util__get_ptag_counts_2_5_0_i59);
MR_def_label(backend_libs__switch_util__get_ptag_counts_2_5_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		backend_libs__switch_util__get_ptag_counts_2_5_0_i61);
MR_def_label(backend_libs__switch_util__get_ptag_counts_2_5_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(backend_libs__switch_util__get_ptag_counts_2_5_0_i60);
	}
	MR_r1 = MR_ctfield(0, MR_r2, 0);
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(backend_libs__switch_util__get_ptag_counts_2_5_0_i64);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_ctfield(0, MR_r2, 1);
	MR_np_call_localret_ent(int__max_3_0,
		backend_libs__switch_util__get_ptag_counts_2_5_0_i70);
MR_def_label(backend_libs__switch_util__get_ptag_counts_2_5_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(backend_libs__switch_util__get_ptag_counts_2_5_0_i65);
	}
	MR_sv(4) = MR_ctfield(0, MR_r2, 1);
	MR_np_call_localret_ent(fn__backend_libs__switch_util__this_file_0_0,
		backend_libs__switch_util__get_ptag_counts_2_5_0_i68);
MR_def_label(backend_libs__switch_util__get_ptag_counts_2_5_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_ctfield(0, MR_r2, 1);
	MR_np_call_localret_ent(fn__backend_libs__switch_util__this_file_0_0,
		backend_libs__switch_util__get_ptag_counts_2_5_0_i68);
MR_def_label(backend_libs__switch_util__get_ptag_counts_2_5_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("remote tag is shared with non-remote", 36);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		backend_libs__switch_util__get_ptag_counts_2_5_0_i63);
MR_def_label(backend_libs__switch_util__get_ptag_counts_2_5_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(int__max_3_0,
		backend_libs__switch_util__get_ptag_counts_2_5_0_i70);
MR_def_label(backend_libs__switch_util__get_ptag_counts_2_5_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		backend_libs__switch_util__get_ptag_counts_2_5_0_i88);
MR_def_label(backend_libs__switch_util__get_ptag_counts_2_5_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r2 = MR_sv(6);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		backend_libs__switch_util__get_ptag_counts_2_5_0_i88);
MR_def_label(backend_libs__switch_util__get_ptag_counts_2_5_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(6) = MR_ctfield(3, MR_tempr1, 2);
	MR_r1 = MR_sv(4);
	}
	MR_np_call_localret_ent(int__max_3_0,
		backend_libs__switch_util__get_ptag_counts_2_5_0_i75);
MR_def_label(backend_libs__switch_util__get_ptag_counts_2_5_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		backend_libs__switch_util__get_ptag_counts_2_5_0_i77);
MR_def_label(backend_libs__switch_util__get_ptag_counts_2_5_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(backend_libs__switch_util__get_ptag_counts_2_5_0_i76);
	}
	MR_r3 = MR_ctfield(0, MR_r2, 0);
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(backend_libs__switch_util__get_ptag_counts_2_5_0_i80);
	}
	MR_r2 = MR_ctfield(0, MR_r2, 1);
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(int__max_3_0,
		backend_libs__switch_util__get_ptag_counts_2_5_0_i86);
MR_def_label(backend_libs__switch_util__get_ptag_counts_2_5_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(backend_libs__switch_util__get_ptag_counts_2_5_0_i81);
	}
	MR_sv(3) = MR_ctfield(0, MR_r2, 1);
	MR_np_call_localret_ent(fn__backend_libs__switch_util__this_file_0_0,
		backend_libs__switch_util__get_ptag_counts_2_5_0_i84);
MR_def_label(backend_libs__switch_util__get_ptag_counts_2_5_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_ctfield(0, MR_r2, 1);
	MR_np_call_localret_ent(fn__backend_libs__switch_util__this_file_0_0,
		backend_libs__switch_util__get_ptag_counts_2_5_0_i84);
MR_def_label(backend_libs__switch_util__get_ptag_counts_2_5_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("local tag is shared with non-local", 34);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		backend_libs__switch_util__get_ptag_counts_2_5_0_i79);
MR_def_label(backend_libs__switch_util__get_ptag_counts_2_5_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(int__max_3_0,
		backend_libs__switch_util__get_ptag_counts_2_5_0_i86);
MR_def_label(backend_libs__switch_util__get_ptag_counts_2_5_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		backend_libs__switch_util__get_ptag_counts_2_5_0_i88);
MR_def_label(backend_libs__switch_util__get_ptag_counts_2_5_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		backend_libs__switch_util__get_ptag_counts_2_5_0_i88);
MR_def_label(backend_libs__switch_util__get_ptag_counts_2_5_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(backend_libs__switch_util__get_ptag_counts_2_5_0_i148);
MR_def_label(backend_libs__switch_util__get_ptag_counts_2_5_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_np_call_localret_ent(fn__backend_libs__switch_util__this_file_0_0,
		backend_libs__switch_util__get_ptag_counts_2_5_0_i94);
MR_def_label(backend_libs__switch_util__get_ptag_counts_2_5_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("non-du tag in get_ptag_counts_2", 31);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		backend_libs__switch_util__get_ptag_counts_2_5_0_i151);
MR_def_label(backend_libs__switch_util__get_ptag_counts_2_5_0,151)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(backend_libs__switch_util__get_ptag_counts_2_5_0_i148);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__to_assoc_list_2_0);
MR_decl_entry(assoc_list__values_2_0);

MR_BEGIN_MODULE(backend_libs__switch_util_module16)
	MR_init_entry1(backend_libs__switch_util__get_ptag_counts_4_0);
	MR_init_label8(backend_libs__switch_util__get_ptag_counts_4_0,4,2,7,8,9,10,14,15)
	MR_init_label3(backend_libs__switch_util__get_ptag_counts_4_0,27,11,24)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__backend_libs__switch_util__get_ptag_counts_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_3_0,
		backend_libs__switch_util__get_ptag_counts_4_0_i4);
MR_def_label(backend_libs__switch_util__get_ptag_counts_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(backend_libs__switch_util__get_ptag_counts_4_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_type_table_2_0,
		backend_libs__switch_util__get_ptag_counts_4_0_i8);
MR_def_label(backend_libs__switch_util__get_ptag_counts_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r1 = (MR_Word) MR_string_const("switch_util.m", 13);
	MR_r2 = (MR_Word) MR_string_const("unknown type in get_ptag_counts", 31);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		backend_libs__switch_util__get_ptag_counts_4_0_i7);
MR_def_label(backend_libs__switch_util__get_ptag_counts_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_type_table_2_0,
		backend_libs__switch_util__get_ptag_counts_4_0_i8);
MR_def_label(backend_libs__switch_util__get_ptag_counts_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_type_defn);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__lookup_3_0,
		backend_libs__switch_util__get_ptag_counts_4_0_i9);
MR_def_label(backend_libs__switch_util__get_ptag_counts_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_body_2_0,
		backend_libs__switch_util__get_ptag_counts_4_0_i10);
MR_def_label(backend_libs__switch_util__get_ptag_counts_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_r1),0)) {
		MR_GOTO_LAB(backend_libs__switch_util__get_ptag_counts_4_0_i27);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, cons_tag);
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		backend_libs__switch_util__get_ptag_counts_4_0_i14);
MR_def_label(backend_libs__switch_util__get_ptag_counts_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, cons_tag);
	MR_np_call_localret_ent(assoc_list__values_2_0,
		backend_libs__switch_util__get_ptag_counts_4_0_i15);
MR_def_label(backend_libs__switch_util__get_ptag_counts_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_np_call_localret_ent(map__init_1_0,
		backend_libs__switch_util__get_ptag_counts_4_0_i24);
MR_def_label(backend_libs__switch_util__get_ptag_counts_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("switch_util.m", 13);
	MR_r2 = (MR_Word) MR_string_const("non-du type in get_ptag_counts", 30);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		backend_libs__switch_util__get_ptag_counts_4_0_i11);
MR_def_label(backend_libs__switch_util__get_ptag_counts_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(map__init_1_0,
		backend_libs__switch_util__get_ptag_counts_4_0_i24);
MR_def_label(backend_libs__switch_util__get_ptag_counts_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) -1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(backend_libs__switch_util__get_ptag_counts_2_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(backend_libs__switch_util_module17)
	MR_init_entry1(__Unify___backend_libs__switch_util__cases_list_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___backend_libs__switch_util__cases_list_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__switch_util, extended_case);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(backend_libs__switch_util_module18)
	MR_init_entry1(__Compare___backend_libs__switch_util__cases_list_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___backend_libs__switch_util__cases_list_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__switch_util, extended_case);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___list__list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___hlds__hlds_data__cons_tag_0_0);
MR_decl_entry(__Unify___parse_tree__prog_data__cons_id_0_0);
MR_decl_entry(__Unify___hlds__hlds_goal__hlds_goal_0_0);

MR_BEGIN_MODULE(backend_libs__switch_util_module19)
	MR_init_entry1(__Unify___backend_libs__switch_util__extended_case_0_0);
	MR_init_label4(__Unify___backend_libs__switch_util__extended_case_0_0,4,6,10,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___backend_libs__switch_util__extended_case_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___backend_libs__switch_util__extended_case_0_0_i10);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___backend_libs__switch_util__extended_case_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_ctfield(0, MR_tempr3, 2);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_ctfield(0, MR_tempr3, 3);
	MR_sv(3) = MR_ctfield(0, MR_tempr4, 2);
	MR_sv(4) = MR_ctfield(0, MR_tempr4, 3);
	MR_r1 = MR_ctfield(0, MR_tempr3, 1);
	MR_r2 = MR_ctfield(0, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_data__cons_tag_0_0,
		__Unify___backend_libs__switch_util__extended_case_0_0_i4);
MR_def_label(__Unify___backend_libs__switch_util__extended_case_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___backend_libs__switch_util__extended_case_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__cons_id_0_0,
		__Unify___backend_libs__switch_util__extended_case_0_0_i6);
MR_def_label(__Unify___backend_libs__switch_util__extended_case_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___backend_libs__switch_util__extended_case_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___hlds__hlds_goal__hlds_goal_0_0);
MR_def_label(__Unify___backend_libs__switch_util__extended_case_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___backend_libs__switch_util__extended_case_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);
MR_decl_entry(__Compare___hlds__hlds_data__cons_tag_0_0);
MR_decl_entry(__Compare___parse_tree__prog_data__cons_id_0_0);
MR_decl_entry(__Compare___hlds__hlds_goal__hlds_goal_0_0);

MR_BEGIN_MODULE(backend_libs__switch_util_module20)
	MR_init_entry1(__Compare___backend_libs__switch_util__extended_case_0_0);
	MR_init_label6(__Compare___backend_libs__switch_util__extended_case_0_0,3,2,5,9,13,37)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___backend_libs__switch_util__extended_case_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___backend_libs__switch_util__extended_case_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___backend_libs__switch_util__extended_case_0_0_i2);
MR_def_label(__Compare___backend_libs__switch_util__extended_case_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___backend_libs__switch_util__extended_case_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(6) = MR_ctfield(0, MR_tempr5, 3);
	MR_sv(5) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(4) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(3) = MR_ctfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___backend_libs__switch_util__extended_case_0_0_i5);
MR_def_label(__Compare___backend_libs__switch_util__extended_case_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___backend_libs__switch_util__extended_case_0_0_i37);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(__Compare___hlds__hlds_data__cons_tag_0_0,
		__Compare___backend_libs__switch_util__extended_case_0_0_i9);
MR_def_label(__Compare___backend_libs__switch_util__extended_case_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___backend_libs__switch_util__extended_case_0_0_i37);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__cons_id_0_0,
		__Compare___backend_libs__switch_util__extended_case_0_0_i13);
MR_def_label(__Compare___backend_libs__switch_util__extended_case_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___backend_libs__switch_util__extended_case_0_0_i37);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___hlds__hlds_goal__hlds_goal_0_0);
MR_def_label(__Compare___backend_libs__switch_util__extended_case_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__switch_util_module21)
	MR_init_entry1(__Unify___backend_libs__switch_util__hash_slot_0_0);
	MR_init_label3(__Unify___backend_libs__switch_util__hash_slot_0_0,4,6,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___backend_libs__switch_util__hash_slot_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___backend_libs__switch_util__hash_slot_0_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___backend_libs__switch_util__extended_case_0_0,
		__Unify___backend_libs__switch_util__hash_slot_0_0_i4);
MR_def_label(__Unify___backend_libs__switch_util__hash_slot_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___backend_libs__switch_util__hash_slot_0_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___backend_libs__switch_util__hash_slot_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___backend_libs__switch_util__hash_slot_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__switch_util_module22)
	MR_init_entry1(__Compare___backend_libs__switch_util__hash_slot_0_0);
	MR_init_label4(__Compare___backend_libs__switch_util__hash_slot_0_0,3,2,5,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___backend_libs__switch_util__hash_slot_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___backend_libs__switch_util__hash_slot_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___backend_libs__switch_util__hash_slot_0_0_i2);
MR_def_label(__Compare___backend_libs__switch_util__hash_slot_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___backend_libs__switch_util__hash_slot_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___backend_libs__switch_util__extended_case_0_0,
		__Compare___backend_libs__switch_util__hash_slot_0_0_i5);
MR_def_label(__Compare___backend_libs__switch_util__hash_slot_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___backend_libs__switch_util__hash_slot_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___backend_libs__switch_util__hash_slot_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(backend_libs__switch_util_module23)
	MR_init_entry1(__Unify___backend_libs__switch_util__ptag_case_0_0);
	MR_init_label2(__Unify___backend_libs__switch_util__ptag_case_0_0,6,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___backend_libs__switch_util__ptag_case_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___backend_libs__switch_util__ptag_case_0_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___backend_libs__switch_util__ptag_case_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(backend_libs__switch_util, stag_goal);
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	MR_r4 = MR_ctfield(0, MR_tempr2, 1);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
MR_def_label(__Unify___backend_libs__switch_util__ptag_case_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___backend_libs__switch_util__ptag_case_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___tree234__tree234_2_0);

MR_BEGIN_MODULE(backend_libs__switch_util_module24)
	MR_init_entry1(__Compare___backend_libs__switch_util__ptag_case_0_0);
	MR_init_label4(__Compare___backend_libs__switch_util__ptag_case_0_0,3,2,5,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___backend_libs__switch_util__ptag_case_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___backend_libs__switch_util__ptag_case_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___backend_libs__switch_util__ptag_case_0_0_i2);
MR_def_label(__Compare___backend_libs__switch_util__ptag_case_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___backend_libs__switch_util__ptag_case_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___backend_libs__switch_util__ptag_case_0_0_i5);
MR_def_label(__Compare___backend_libs__switch_util__ptag_case_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___backend_libs__switch_util__ptag_case_0_0_i21);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(backend_libs__switch_util, stag_goal);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
MR_def_label(__Compare___backend_libs__switch_util__ptag_case_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__switch_util_module25)
	MR_init_entry1(__Unify___backend_libs__switch_util__ptag_case_list_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___backend_libs__switch_util__ptag_case_list_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__switch_util_module26)
	MR_init_entry1(__Compare___backend_libs__switch_util__ptag_case_list_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___backend_libs__switch_util__ptag_case_list_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___list__list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__switch_util_module27)
	MR_init_entry1(__Unify___backend_libs__switch_util__ptag_case_map_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___backend_libs__switch_util__ptag_case_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(backend_libs__switch_util, ptag_case);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__switch_util_module28)
	MR_init_entry1(__Compare___backend_libs__switch_util__ptag_case_map_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___backend_libs__switch_util__ptag_case_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(backend_libs__switch_util, ptag_case);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__switch_util_module29)
	MR_init_entry1(__Unify___backend_libs__switch_util__ptag_count_list_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___backend_libs__switch_util__ptag_count_list_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__switch_util_module30)
	MR_init_entry1(__Compare___backend_libs__switch_util__ptag_count_list_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___backend_libs__switch_util__ptag_count_list_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___list__list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__switch_util_module31)
	MR_init_entry1(__Unify___backend_libs__switch_util__ptag_count_map_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___backend_libs__switch_util__ptag_count_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__switch_util_module32)
	MR_init_entry1(__Compare___backend_libs__switch_util__ptag_count_map_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___backend_libs__switch_util__ptag_count_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__switch_util_module33)
	MR_init_entry1(__Unify___backend_libs__switch_util__stag_goal_0_0);
	MR_init_label3(__Unify___backend_libs__switch_util__stag_goal_0_0,4,8,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___backend_libs__switch_util__stag_goal_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___backend_libs__switch_util__stag_goal_0_0_i8);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__cons_id_0_0,
		__Unify___backend_libs__switch_util__stag_goal_0_0_i4);
MR_def_label(__Unify___backend_libs__switch_util__stag_goal_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___backend_libs__switch_util__stag_goal_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___hlds__hlds_goal__hlds_goal_0_0);
MR_def_label(__Unify___backend_libs__switch_util__stag_goal_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___backend_libs__switch_util__stag_goal_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__switch_util_module34)
	MR_init_entry1(__Compare___backend_libs__switch_util__stag_goal_0_0);
	MR_init_label4(__Compare___backend_libs__switch_util__stag_goal_0_0,3,2,5,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___backend_libs__switch_util__stag_goal_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___backend_libs__switch_util__stag_goal_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___backend_libs__switch_util__stag_goal_0_0_i2);
MR_def_label(__Compare___backend_libs__switch_util__stag_goal_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___backend_libs__switch_util__stag_goal_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__cons_id_0_0,
		__Compare___backend_libs__switch_util__stag_goal_0_0_i5);
MR_def_label(__Compare___backend_libs__switch_util__stag_goal_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___backend_libs__switch_util__stag_goal_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___hlds__hlds_goal__hlds_goal_0_0);
MR_def_label(__Compare___backend_libs__switch_util__stag_goal_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__switch_util_module35)
	MR_init_entry1(__Unify___backend_libs__switch_util__stag_goal_list_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___backend_libs__switch_util__stag_goal_list_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__switch_util_module36)
	MR_init_entry1(__Compare___backend_libs__switch_util__stag_goal_list_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___backend_libs__switch_util__stag_goal_list_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___list__list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__switch_util_module37)
	MR_init_entry1(__Unify___backend_libs__switch_util__stag_goal_map_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___backend_libs__switch_util__stag_goal_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(backend_libs__switch_util, stag_goal);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__switch_util_module38)
	MR_init_entry1(__Compare___backend_libs__switch_util__stag_goal_map_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___backend_libs__switch_util__stag_goal_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(backend_libs__switch_util, stag_goal);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__switch_util_module39)
	MR_init_entry1(__Unify___backend_libs__switch_util__switch_category_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___backend_libs__switch_util__switch_category_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__switch_util_module40)
	MR_init_entry1(__Compare___backend_libs__switch_util__switch_category_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___backend_libs__switch_util__switch_category_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__switch_util_module41)
	MR_init_entry1(backend_libs__switch_util__IntroducedFrom__pred__group_cases_by_ptag__464__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__switch_util__IntroducedFrom__pred__group_cases_by_ptag__464__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r2 == MR_r1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__switch_util_module42)
	MR_init_entry1(backend_libs__switch_util__IntroducedFrom__pred__group_cases_by_ptag__449__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__switch_util__IntroducedFrom__pred__group_cases_by_ptag__449__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__backend_libs__switch_util_maybe_bunch_0(void)
{
	backend_libs__switch_util_module0();
	backend_libs__switch_util_module1();
	backend_libs__switch_util_module2();
	backend_libs__switch_util_module3();
	backend_libs__switch_util_module4();
	backend_libs__switch_util_module5();
	backend_libs__switch_util_module6();
	backend_libs__switch_util_module7();
	backend_libs__switch_util_module8();
	backend_libs__switch_util_module9();
	backend_libs__switch_util_module10();
	backend_libs__switch_util_module11();
	backend_libs__switch_util_module12();
	backend_libs__switch_util_module13();
	backend_libs__switch_util_module14();
	backend_libs__switch_util_module15();
	backend_libs__switch_util_module16();
	backend_libs__switch_util_module17();
	backend_libs__switch_util_module18();
	backend_libs__switch_util_module19();
	backend_libs__switch_util_module20();
	backend_libs__switch_util_module21();
	backend_libs__switch_util_module22();
	backend_libs__switch_util_module23();
	backend_libs__switch_util_module24();
	backend_libs__switch_util_module25();
	backend_libs__switch_util_module26();
	backend_libs__switch_util_module27();
	backend_libs__switch_util_module28();
	backend_libs__switch_util_module29();
	backend_libs__switch_util_module30();
	backend_libs__switch_util_module31();
	backend_libs__switch_util_module32();
	backend_libs__switch_util_module33();
	backend_libs__switch_util_module34();
	backend_libs__switch_util_module35();
	backend_libs__switch_util_module36();
	backend_libs__switch_util_module37();
	backend_libs__switch_util_module38();
	backend_libs__switch_util_module39();
}

static void mercury__backend_libs__switch_util_maybe_bunch_1(void)
{
	backend_libs__switch_util_module40();
	backend_libs__switch_util_module41();
	backend_libs__switch_util_module42();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__backend_libs__switch_util__init(void);
void mercury__backend_libs__switch_util__init_type_tables(void);
void mercury__backend_libs__switch_util__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__backend_libs__switch_util__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__backend_libs__switch_util__init_complexity_procs(void);
#endif

void mercury__backend_libs__switch_util__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__backend_libs__switch_util_maybe_bunch_0();
	mercury__backend_libs__switch_util_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_backend_libs__switch_util__type_ctor_info_switch_category_0,
		backend_libs__switch_util__switch_category_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_backend_libs__switch_util__type_ctor_info_stag_goal_map_0,
		backend_libs__switch_util__stag_goal_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_backend_libs__switch_util__type_ctor_info_stag_goal_list_0,
		backend_libs__switch_util__stag_goal_list_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_backend_libs__switch_util__type_ctor_info_stag_goal_0,
		backend_libs__switch_util__stag_goal_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_backend_libs__switch_util__type_ctor_info_ptag_count_map_0,
		backend_libs__switch_util__ptag_count_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_backend_libs__switch_util__type_ctor_info_ptag_count_list_0,
		backend_libs__switch_util__ptag_count_list_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_backend_libs__switch_util__type_ctor_info_ptag_case_map_0,
		backend_libs__switch_util__ptag_case_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_backend_libs__switch_util__type_ctor_info_ptag_case_list_0,
		backend_libs__switch_util__ptag_case_list_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_backend_libs__switch_util__type_ctor_info_ptag_case_0,
		backend_libs__switch_util__ptag_case_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_backend_libs__switch_util__type_ctor_info_hash_slot_0,
		backend_libs__switch_util__hash_slot_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_backend_libs__switch_util__type_ctor_info_extended_case_0,
		backend_libs__switch_util__extended_case_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_backend_libs__switch_util__type_ctor_info_cases_list_0,
		backend_libs__switch_util__cases_list_0_0);
	mercury__backend_libs__switch_util__init_debugger();
}

void mercury__backend_libs__switch_util__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_backend_libs__switch_util__type_ctor_info_switch_category_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_backend_libs__switch_util__type_ctor_info_stag_goal_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_backend_libs__switch_util__type_ctor_info_stag_goal_list_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_backend_libs__switch_util__type_ctor_info_stag_goal_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_backend_libs__switch_util__type_ctor_info_ptag_count_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_backend_libs__switch_util__type_ctor_info_ptag_count_list_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_backend_libs__switch_util__type_ctor_info_ptag_case_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_backend_libs__switch_util__type_ctor_info_ptag_case_list_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_backend_libs__switch_util__type_ctor_info_ptag_case_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_backend_libs__switch_util__type_ctor_info_hash_slot_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_backend_libs__switch_util__type_ctor_info_extended_case_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_backend_libs__switch_util__type_ctor_info_cases_list_0);
	}
}


void mercury__backend_libs__switch_util__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__backend_libs__switch_util__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__backend_libs__switch_util);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__backend_libs__switch_util__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
