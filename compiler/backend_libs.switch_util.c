/*
** Automatically generated from `switch_util.m'
** by the Mercury compiler,
** version rotd-2009-06-06, configured for i686-pc-linux-gnu.
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
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 35 "backend_libs.switch_util.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 39 "backend_libs.switch_util.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 43 "backend_libs.switch_util.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 47 "backend_libs.switch_util.c"
#line 48 "backend_libs.switch_util.c"
#include "backend_libs.switch_util.mh"

#line 51 "backend_libs.switch_util.c"
#line 52 "backend_libs.switch_util.c"
#ifndef BACKEND_LIBS__SWITCH_UTIL_DECL_GUARD
#define BACKEND_LIBS__SWITCH_UTIL_DECL_GUARD

#line 56 "backend_libs.switch_util.c"
#line 57 "backend_libs.switch_util.c"

#endif
#line 60 "backend_libs.switch_util.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[12];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_3 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Unsigned f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Integer f5;
	MR_Word * f6;
	MR_Word * f7;
	MR_Word * f8;
	MR_Word * f9;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Word * f1;
	MR_Integer f2;
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

struct mercury_type_10 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Integer f5;
	MR_Word * f6;
	MR_Word * f7;
	MR_Word * f8;
};
MR_STATIC_LINKAGE const struct mercury_type_10 mercury_common_10[];

struct mercury_type_11 {
	MR_Integer f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_11 mercury_common_11[];

struct mercury_type_2 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_vector_common_2_0[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_backend_libs__switch_util__type_ctor_info_switch_category_0,
	mercury_data_backend_libs__switch_util__type_ctor_info_string_hash_slot_1,
	mercury_data_backend_libs__switch_util__type_ctor_info_stag_goal_map_1,
	mercury_data_backend_libs__switch_util__type_ctor_info_stag_goal_list_1,
	mercury_data_backend_libs__switch_util__type_ctor_info_ptag_count_map_0,
	mercury_data_backend_libs__switch_util__type_ctor_info_ptag_count_list_0,
	mercury_data_backend_libs__switch_util__type_ctor_info_ptag_case_map_1,
	mercury_data_backend_libs__switch_util__type_ctor_info_ptag_case_list_1,
	mercury_data_backend_libs__switch_util__type_ctor_info_ptag_case_1,
	mercury_data_backend_libs__switch_util__type_ctor_info_maybe_int_switch_info_0;

extern const MR_TypeCtorInfo_Struct
	mercury_data_backend_libs__switch_util__type_ctor_info_is_int_switch_0;
MR_decl_label1(backend_libs__switch_util__calc_string_hash_slots_3_0, 3)
MR_decl_label3(backend_libs__switch_util__calc_string_hash_slots_1_6_0, 10,3,4)
MR_decl_label8(backend_libs__switch_util__calc_string_hash_slots_2_7_0, 30,4,8,10,11,12,14,15)
MR_decl_label2(backend_libs__switch_util__calc_string_hash_slots_2_7_0, 6,17)
MR_decl_label4(backend_libs__switch_util__follow_hash_chain_3_0, 19,3,6,5)
MR_decl_label8(backend_libs__switch_util__get_ptag_counts_4_0, 2,3,4,5,8,9,7,6)
MR_decl_label1(backend_libs__switch_util__get_ptag_counts_4_0, 12)
MR_decl_label8(backend_libs__switch_util__get_ptag_counts_2_5_0, 105,3,66,43,46,44,5,6)
MR_decl_label8(backend_libs__switch_util__get_ptag_counts_2_5_0, 70,8,9,12,15,16,14,18)
MR_decl_label8(backend_libs__switch_util__get_ptag_counts_2_5_0, 10,25,26,29,32,33,31,35)
MR_decl_label8(backend_libs__switch_util__get_ptag_counts_2_5_0, 27,40,54,55,58,60,56,64)
MR_decl_label1(backend_libs__switch_util__get_ptag_counts_2_5_0, 108)
MR_decl_label8(backend_libs__switch_util__group_case_by_ptag_4_0, 66,43,41,47,48,3,4,70)
MR_decl_label8(backend_libs__switch_util__group_case_by_ptag_4_0, 6,9,12,13,14,7,17,18)
MR_decl_label8(backend_libs__switch_util__group_case_by_ptag_4_0, 23,26,29,30,31,24,34,35)
MR_decl_label6(backend_libs__switch_util__group_case_by_ptag_4_0, 53,56,58,54,60,61)
MR_decl_label5(backend_libs__switch_util__group_cases_by_ptag_10_0, 15,3,4,5,9)
MR_decl_label4(backend_libs__switch_util__next_free_hash_slot_4_0, 22,6,11,2)
MR_decl_label8(backend_libs__switch_util__order_ptags_by_count_3_0, 36,4,8,10,11,6,2,18)
MR_decl_label1(backend_libs__switch_util__order_ptags_by_count_3_0, 16)
MR_decl_label8(backend_libs__switch_util__order_ptags_by_value_4_0, 33,5,7,8,3,2,15,13)
MR_decl_label3(backend_libs__switch_util__select_frequent_ptag_4_0, 4,3,1)
MR_decl_label4(backend_libs__switch_util__string_hash_cases_10_0, 3,7,8,14)
MR_decl_label5(backend_libs__switch_util__string_hash_cons_id_5_0, 2,5,6,10,7)
MR_decl_label7(backend_libs__switch_util__tag_cases_5_0, 4,9,11,6,18,20,3)
MR_decl_label4(backend_libs__switch_util__tag_cases_in_int_switch_12_0, 17,4,6,8)
MR_decl_label4(backend_libs__switch_util__tag_cases_plain_4_0, 18,4,7,9)
MR_decl_label1(backend_libs__switch_util__tag_cons_id_4_0, 2)
MR_decl_label4(backend_libs__switch_util__tag_cons_id_in_int_switch_12_0, 2,6,7,4)
MR_decl_label8(backend_libs__switch_util__type_range_6_0, 5,6,3,9,10,11,12,15)
MR_decl_label3(backend_libs__switch_util__type_range_6_0, 14,2,1)
MR_decl_label8(fn__backend_libs__switch_util__estimate_switch_tag_test_cost_1_0, 15,21,3,31,13,5,19,6)
MR_decl_label4(fn__backend_libs__switch_util__estimate_switch_tag_test_cost_1_0, 7,35,9,10)
MR_decl_label5(fn__backend_libs__switch_util__type_ctor_cat_to_switch_cat_1_0, 3,7,27,34,14)
MR_decl_label3(__Unify___backend_libs__switch_util__maybe_int_switch_info_0_0, 10,5,1)
MR_decl_label2(__Unify___backend_libs__switch_util__ptag_case_1_0, 6,1)
MR_decl_label2(__Unify___backend_libs__switch_util__string_hash_slot_1_0, 6,1)
MR_decl_label7(__Compare___backend_libs__switch_util__maybe_int_switch_info_0_0, 30,7,5,9,11,15,21)
MR_decl_label4(__Compare___backend_libs__switch_util__ptag_case_1_0, 3,2,5,21)
MR_decl_label5(__Compare___backend_libs__switch_util__string_hash_slot_1_0, 3,2,5,9,29)
MR_decl_static(backend_libs__switch_util__tag_cons_id_4_0)
MR_decl_static(backend_libs__switch_util__tag_cases_plain_4_0)
MR_decl_static(backend_libs__switch_util__tag_cons_id_in_int_switch_12_0)
MR_decl_static(backend_libs__switch_util__tag_cases_in_int_switch_12_0)
MR_decl_static(fn__backend_libs__switch_util__this_file_0_0)
MR_def_extern_entry(backend_libs__switch_util__tag_cases_5_0)
MR_def_extern_entry(backend_libs__switch_util__represent_tagged_case_by_itself_8_0)
MR_def_extern_entry(fn__backend_libs__switch_util__type_ctor_cat_to_switch_cat_1_0)
MR_def_extern_entry(fn__backend_libs__switch_util__estimate_switch_tag_test_cost_1_0)
MR_def_extern_entry(backend_libs__switch_util__type_range_6_0)
MR_def_extern_entry(fn__backend_libs__switch_util__switch_density_2_0)
MR_def_extern_entry(backend_libs__switch_util__string_hash_cases_10_0)
MR_decl_static(backend_libs__switch_util__follow_hash_chain_3_0)
MR_decl_static(backend_libs__switch_util__next_free_hash_slot_4_0)
MR_decl_static(backend_libs__switch_util__calc_string_hash_slots_2_7_0)
MR_decl_static(backend_libs__switch_util__calc_string_hash_slots_1_6_0)
MR_def_extern_entry(backend_libs__switch_util__calc_string_hash_slots_3_0)
MR_decl_static(backend_libs__switch_util__group_case_by_ptag_4_0)
MR_def_extern_entry(backend_libs__switch_util__group_cases_by_ptag_10_0)
MR_decl_static(backend_libs__switch_util__select_frequent_ptag_4_0)
MR_def_extern_entry(backend_libs__switch_util__order_ptags_by_count_3_0)
MR_def_extern_entry(backend_libs__switch_util__order_ptags_by_value_4_0)
MR_decl_static(backend_libs__switch_util__get_ptag_counts_2_5_0)
MR_def_extern_entry(backend_libs__switch_util__get_ptag_counts_4_0)
MR_decl_static(backend_libs__switch_util__string_hash_cons_id_5_0)
MR_decl_static(__Unify___backend_libs__switch_util__is_int_switch_0_0)
MR_decl_static(__Compare___backend_libs__switch_util__is_int_switch_0_0)
MR_def_extern_entry(__Unify___backend_libs__switch_util__maybe_int_switch_info_0_0)
MR_def_extern_entry(__Compare___backend_libs__switch_util__maybe_int_switch_info_0_0)
MR_def_extern_entry(__Unify___backend_libs__switch_util__ptag_case_1_0)
MR_def_extern_entry(__Compare___backend_libs__switch_util__ptag_case_1_0)
MR_def_extern_entry(__Unify___backend_libs__switch_util__ptag_case_list_1_0)
MR_def_extern_entry(__Compare___backend_libs__switch_util__ptag_case_list_1_0)
MR_def_extern_entry(__Unify___backend_libs__switch_util__ptag_case_map_1_0)
MR_def_extern_entry(__Compare___backend_libs__switch_util__ptag_case_map_1_0)
MR_def_extern_entry(__Unify___backend_libs__switch_util__ptag_count_list_0_0)
MR_def_extern_entry(__Compare___backend_libs__switch_util__ptag_count_list_0_0)
MR_def_extern_entry(__Unify___backend_libs__switch_util__ptag_count_map_0_0)
MR_def_extern_entry(__Compare___backend_libs__switch_util__ptag_count_map_0_0)
MR_def_extern_entry(__Unify___backend_libs__switch_util__stag_goal_list_1_0)
MR_def_extern_entry(__Compare___backend_libs__switch_util__stag_goal_list_1_0)
MR_def_extern_entry(__Unify___backend_libs__switch_util__stag_goal_map_1_0)
MR_def_extern_entry(__Compare___backend_libs__switch_util__stag_goal_map_1_0)
MR_def_extern_entry(__Unify___backend_libs__switch_util__string_hash_slot_1_0)
MR_def_extern_entry(__Compare___backend_libs__switch_util__string_hash_slot_1_0)
MR_def_extern_entry(__Unify___backend_libs__switch_util__switch_category_0_0)
MR_def_extern_entry(__Compare___backend_libs__switch_util__switch_category_0_0)
MR_decl_static(backend_libs__switch_util__IntroducedFrom__pred__group_case_by_ptag__709__1_2_0)
MR_decl_static(backend_libs__switch_util__IntroducedFrom__pred__group_case_by_ptag__694__1_2_0)

static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__switch_util__tag_cases_plain_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_tagged_cons_id_0;
static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__switch_util__tag_cases_5_0_2;
static const struct mercury_type_0 mercury_common_0[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__backend_libs__switch_util__tag_cases_plain_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type),
MR_CTOR0_ADDR(parse_tree__prog_data, cons_id),
MR_CTOR0_ADDR(hlds__hlds_data, tagged_cons_id)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__backend_libs__switch_util__tag_cases_5_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type),
MR_CTOR0_ADDR(parse_tree__prog_data, cons_id),
MR_CTOR0_ADDR(hlds__hlds_data, tagged_cons_id)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__switch_util__tag_cases_in_int_switch_12_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__switch_util__type_ctor_info_is_int_switch_0;
static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__switch_util__tag_cases_5_0_1;
static const struct mercury_type_1 mercury_common_1[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__backend_libs__switch_util__tag_cases_in_int_switch_12_0_1,
(MR_Word *) (MR_Integer) 0
},
12,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type),
MR_CTOR0_ADDR(parse_tree__prog_data, cons_id),
MR_CTOR0_ADDR(hlds__hlds_data, tagged_cons_id),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(backend_libs__switch_util, is_int_switch),
MR_CTOR0_ADDR(backend_libs__switch_util, is_int_switch)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__backend_libs__switch_util__tag_cases_5_0_1,
(MR_Word *) (MR_Integer) 0
},
12,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type),
MR_CTOR0_ADDR(parse_tree__prog_data, cons_id),
MR_CTOR0_ADDR(hlds__hlds_data, tagged_cons_id),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(backend_libs__switch_util, is_int_switch),
MR_CTOR0_ADDR(backend_libs__switch_util, is_int_switch)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const struct mercury_type_3 mercury_common_3[1] =
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_STRING_CTOR_ADDR,
1
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
static const struct mercury_type_4 mercury_common_4[1] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_COMMON(3,0)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__rtti__type_ctor_info_sectag_locn_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_5 mercury_common_5[4] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_INT_CTOR_ADDR,
MR_COMMON(4,0)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_INT_CTOR_ADDR,
MR_COMMON(9,0)
}
},
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
MR_TAG_COMMON(0,5,2)
}
},
};

static const struct mercury_type_6 mercury_common_6[1] =
{
{
{
1,
17
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__switch_util__string_hash_cases_10_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_private_builtin__type_ctor_info_type_info_0;
static const struct mercury_type_7 mercury_common_7[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__backend_libs__switch_util__string_hash_cases_10_0_1,
MR_COMMON(6,0),
6,
MR_CTOR0_ADDR(private_builtin, type_info),
1,
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_data, tagged_cons_id),
MR_COMMON(5,0),
MR_COMMON(5,0)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__switch_util__group_case_by_ptag_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__rtti__type_ctor_info_sectag_locn_0;
static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__switch_util__group_case_by_ptag_4_0_2;
static const struct mercury_type_8 mercury_common_8[2] =
{
{
(MR_Word *) &mercury_data__closure_layout__backend_libs__switch_util__group_case_by_ptag_4_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(backend_libs__rtti, sectag_locn),
MR_CTOR0_ADDR(backend_libs__rtti, sectag_locn)
},
{
(MR_Word *) &mercury_data__closure_layout__backend_libs__switch_util__group_case_by_ptag_4_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(backend_libs__rtti, sectag_locn),
MR_CTOR0_ADDR(backend_libs__rtti, sectag_locn)
},
};

static const struct mercury_type_9 mercury_common_9[1] =
{
{
MR_CTOR1_ADDR(backend_libs__switch_util, ptag_case),
1
},
};

static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__switch_util__group_cases_by_ptag_10_0_1;
static const struct mercury_type_10 mercury_common_10[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__backend_libs__switch_util__group_cases_by_ptag_10_0_1,
MR_COMMON(6,0),
5,
MR_CTOR0_ADDR(private_builtin, type_info),
1,
MR_CTOR0_ADDR(hlds__hlds_data, tagged_cons_id),
MR_COMMON(5,1),
MR_COMMON(5,1)
},
};

static const struct mercury_type_11 mercury_common_11[1] =
{
{
{
0,
-1
}
},
};

static const struct mercury_type_2 mercury_vector_common_2_0[4] =
{
{
0
},
{
3
},
{
0
},
{
1
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

const MR_PseudoTypeInfo mercury_data_backend_libs__switch_util__field_types_string_hash_slot_1_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) 1
};

static const MR_DuFunctorDesc mercury_data_backend_libs__switch_util__du_functor_desc_string_hash_slot_1_0 = {
	"string_hash_slot",
	3,
	4,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_backend_libs__switch_util__field_types_string_hash_slot_1_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_backend_libs__switch_util__du_stag_ordered_string_hash_slot_1_0[] = {
	&mercury_data_backend_libs__switch_util__du_functor_desc_string_hash_slot_1_0

};

const MR_DuPtagLayout mercury_data_backend_libs__switch_util__du_ptag_ordered_string_hash_slot_1[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_backend_libs__switch_util__du_stag_ordered_string_hash_slot_1_0 }

};

const MR_DuFunctorDescPtr mercury_data_backend_libs__switch_util__du_name_ordered_string_hash_slot_1[] = {
	&mercury_data_backend_libs__switch_util__du_functor_desc_string_hash_slot_1_0
};

const MR_Integer mercury_data_backend_libs__switch_util__functor_number_map_string_hash_slot_1[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_backend_libs__switch_util__type_ctor_info_string_hash_slot_1 = {
	1,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___backend_libs__switch_util__string_hash_slot_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___backend_libs__switch_util__string_hash_slot_1_0)),
	"backend_libs.switch_util",
	"string_hash_slot",
	{ (void *)mercury_data_backend_libs__switch_util__du_name_ordered_string_hash_slot_1 },
	{ (void *)mercury_data_backend_libs__switch_util__du_ptag_ordered_string_hash_slot_1 },
	1,
	4,
	mercury_data_backend_libs__switch_util__functor_number_map_string_hash_slot_1
};

static const MR_FA_PseudoTypeInfo_Struct2 mercury_data_tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_1 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) 1
}};

const MR_TypeCtorInfo_Struct mercury_data_backend_libs__switch_util__type_ctor_info_stag_goal_map_1 = {
	1,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___backend_libs__switch_util__stag_goal_map_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___backend_libs__switch_util__stag_goal_map_1_0)),
	"backend_libs.switch_util",
	"stag_goal_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_1 },
	-1,
	0,
	NULL
};

static const MR_FA_PseudoTypeInfo_Struct2 mercury_data_pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_1 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) 1
}};

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_list__pti_list_1__pseudo_pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_1 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_PseudoTypeInfo) &mercury_data_pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_1
}};

const MR_TypeCtorInfo_Struct mercury_data_backend_libs__switch_util__type_ctor_info_stag_goal_list_1 = {
	1,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___backend_libs__switch_util__stag_goal_list_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___backend_libs__switch_util__stag_goal_list_1_0)),
	"backend_libs.switch_util",
	"stag_goal_list",
	{ 0 },
	{ (void *)&mercury_data_list__pti_list_1__pseudo_pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_1 },
	-1,
	0,
	NULL
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

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_backend_libs__switch_util__pti_ptag_case_1__pseudo_1 = {
	&mercury_data_backend_libs__switch_util__type_ctor_info_ptag_case_1,
{	(MR_PseudoTypeInfo) 1
}};

static const MR_FA_PseudoTypeInfo_Struct2 mercury_data_tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_backend_libs__switch_util__pti_ptag_case_1__pseudo_1 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_backend_libs__switch_util__pti_ptag_case_1__pseudo_1
}};

const MR_TypeCtorInfo_Struct mercury_data_backend_libs__switch_util__type_ctor_info_ptag_case_map_1 = {
	1,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___backend_libs__switch_util__ptag_case_map_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___backend_libs__switch_util__ptag_case_map_1_0)),
	"backend_libs.switch_util",
	"ptag_case_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_backend_libs__switch_util__pti_ptag_case_1__pseudo_1 },
	-1,
	0,
	NULL
};

static const MR_FA_PseudoTypeInfo_Struct2 mercury_data_pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_backend_libs__switch_util__pti_ptag_case_1__pseudo_1 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_backend_libs__switch_util__pti_ptag_case_1__pseudo_1
}};

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_list__pti_list_1__pseudo_pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_backend_libs__switch_util__pti_ptag_case_1__pseudo_1 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_PseudoTypeInfo) &mercury_data_pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_backend_libs__switch_util__pti_ptag_case_1__pseudo_1
}};

const MR_TypeCtorInfo_Struct mercury_data_backend_libs__switch_util__type_ctor_info_ptag_case_list_1 = {
	1,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___backend_libs__switch_util__ptag_case_list_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___backend_libs__switch_util__ptag_case_list_1_0)),
	"backend_libs.switch_util",
	"ptag_case_list",
	{ 0 },
	{ (void *)&mercury_data_list__pti_list_1__pseudo_pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_backend_libs__switch_util__pti_ptag_case_1__pseudo_1 },
	-1,
	0,
	NULL
};

const MR_PseudoTypeInfo mercury_data_backend_libs__switch_util__field_types_ptag_case_1_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_backend_libs__rtti__type_ctor_info_sectag_locn_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_1
};

static const MR_DuFunctorDesc mercury_data_backend_libs__switch_util__du_functor_desc_ptag_case_1_0 = {
	"ptag_case",
	2,
	2,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_backend_libs__switch_util__field_types_ptag_case_1_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_backend_libs__switch_util__du_stag_ordered_ptag_case_1_0[] = {
	&mercury_data_backend_libs__switch_util__du_functor_desc_ptag_case_1_0

};

const MR_DuPtagLayout mercury_data_backend_libs__switch_util__du_ptag_ordered_ptag_case_1[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_backend_libs__switch_util__du_stag_ordered_ptag_case_1_0 }

};

const MR_DuFunctorDescPtr mercury_data_backend_libs__switch_util__du_name_ordered_ptag_case_1[] = {
	&mercury_data_backend_libs__switch_util__du_functor_desc_ptag_case_1_0
};

const MR_Integer mercury_data_backend_libs__switch_util__functor_number_map_ptag_case_1[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_backend_libs__switch_util__type_ctor_info_ptag_case_1 = {
	1,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___backend_libs__switch_util__ptag_case_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___backend_libs__switch_util__ptag_case_1_0)),
	"backend_libs.switch_util",
	"ptag_case",
	{ (void *)mercury_data_backend_libs__switch_util__du_name_ordered_ptag_case_1 },
	{ (void *)mercury_data_backend_libs__switch_util__du_ptag_ordered_ptag_case_1 },
	1,
	4,
	mercury_data_backend_libs__switch_util__functor_number_map_ptag_case_1
};

const MR_PseudoTypeInfo mercury_data_backend_libs__switch_util__field_types_maybe_int_switch_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_backend_libs__switch_util__field_names_maybe_int_switch_info_0_0[] = {
	"lower_limit",
	"upper_limit",
	"num_values"
};

static const MR_DuFunctorDesc mercury_data_backend_libs__switch_util__du_functor_desc_maybe_int_switch_info_0_0 = {
	"int_switch",
	3,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_backend_libs__switch_util__field_types_maybe_int_switch_info_0_0,
	mercury_data_backend_libs__switch_util__field_names_maybe_int_switch_info_0_0,
	NULL
};

static const MR_DuFunctorDesc mercury_data_backend_libs__switch_util__du_functor_desc_maybe_int_switch_info_0_1 = {
	"not_int_switch",
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

const MR_DuFunctorDescPtr mercury_data_backend_libs__switch_util__du_stag_ordered_maybe_int_switch_info_0_0[] = {
	&mercury_data_backend_libs__switch_util__du_functor_desc_maybe_int_switch_info_0_1

};

const MR_DuFunctorDescPtr mercury_data_backend_libs__switch_util__du_stag_ordered_maybe_int_switch_info_0_1[] = {
	&mercury_data_backend_libs__switch_util__du_functor_desc_maybe_int_switch_info_0_0

};

const MR_DuPtagLayout mercury_data_backend_libs__switch_util__du_ptag_ordered_maybe_int_switch_info_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_backend_libs__switch_util__du_stag_ordered_maybe_int_switch_info_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_backend_libs__switch_util__du_stag_ordered_maybe_int_switch_info_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_backend_libs__switch_util__du_name_ordered_maybe_int_switch_info_0[] = {
	&mercury_data_backend_libs__switch_util__du_functor_desc_maybe_int_switch_info_0_0,
	&mercury_data_backend_libs__switch_util__du_functor_desc_maybe_int_switch_info_0_1
};

const MR_Integer mercury_data_backend_libs__switch_util__functor_number_map_maybe_int_switch_info_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_backend_libs__switch_util__type_ctor_info_maybe_int_switch_info_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___backend_libs__switch_util__maybe_int_switch_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___backend_libs__switch_util__maybe_int_switch_info_0_0)),
	"backend_libs.switch_util",
	"maybe_int_switch_info",
	{ (void *)mercury_data_backend_libs__switch_util__du_name_ordered_maybe_int_switch_info_0 },
	{ (void *)mercury_data_backend_libs__switch_util__du_ptag_ordered_maybe_int_switch_info_0 },
	2,
	4,
	mercury_data_backend_libs__switch_util__functor_number_map_maybe_int_switch_info_0
};

static const MR_EnumFunctorDesc mercury_data_backend_libs__switch_util__enum_functor_desc_is_int_switch_0_0 = {
	"is_int_switch",
	0
};

static const MR_EnumFunctorDesc mercury_data_backend_libs__switch_util__enum_functor_desc_is_int_switch_0_1 = {
	"is_not_int_switch",
	1
};

const MR_EnumFunctorDescPtr mercury_data_backend_libs__switch_util__enum_value_ordered_is_int_switch_0[] = {
	&mercury_data_backend_libs__switch_util__enum_functor_desc_is_int_switch_0_0,
	&mercury_data_backend_libs__switch_util__enum_functor_desc_is_int_switch_0_1
};

const MR_EnumFunctorDescPtr mercury_data_backend_libs__switch_util__enum_name_ordered_is_int_switch_0[] = {
	&mercury_data_backend_libs__switch_util__enum_functor_desc_is_int_switch_0_0,
	&mercury_data_backend_libs__switch_util__enum_functor_desc_is_int_switch_0_1
};

const MR_Integer mercury_data_backend_libs__switch_util__functor_number_map_is_int_switch_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_backend_libs__switch_util__type_ctor_info_is_int_switch_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___backend_libs__switch_util__is_int_switch_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___backend_libs__switch_util__is_int_switch_0_0)),
	"backend_libs.switch_util",
	"is_int_switch",
	{ (void *)mercury_data_backend_libs__switch_util__enum_name_ordered_is_int_switch_0 },
	{ (void *)mercury_data_backend_libs__switch_util__enum_value_ordered_is_int_switch_0 },
	2,
	4,
	mercury_data_backend_libs__switch_util__functor_number_map_is_int_switch_0
};

static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__switch_util__tag_cases_plain_4_0_1 = {
{
MR_PREDICATE,
"backend_libs.switch_util",
"backend_libs.switch_util",
"tag_cons_id",
4,
0
},
"backend_libs.switch_util",
"switch_util.m",
273,
"d2;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__switch_util__tag_cases_in_int_switch_12_0_1 = {
{
MR_PREDICATE,
"backend_libs.switch_util",
"backend_libs.switch_util",
"tag_cons_id_in_int_switch",
12,
0
},
"backend_libs.switch_util",
"switch_util.m",
291,
"d2;c15;"
};

static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__switch_util__tag_cases_5_0_1 = {
{
MR_PREDICATE,
"backend_libs.switch_util",
"backend_libs.switch_util",
"tag_cons_id_in_int_switch",
12,
0
},
"backend_libs.switch_util",
"switch_util.m",
241,
"d2;c9;t;c1;"
};

static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__switch_util__tag_cases_5_0_2 = {
{
MR_PREDICATE,
"backend_libs.switch_util",
"backend_libs.switch_util",
"tag_cons_id",
4,
0
},
"backend_libs.switch_util",
"switch_util.m",
258,
"d2;c9;e;c1;"
};

static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__switch_util__string_hash_cases_10_0_1 = {
{
MR_PREDICATE,
"backend_libs.switch_util",
"backend_libs.switch_util",
"string_hash_cons_id",
5,
0
},
"backend_libs.switch_util",
"switch_util.m",
467,
"d2;c15;"
};

static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__switch_util__group_case_by_ptag_4_0_1 = {
{
MR_PREDICATE,
"backend_libs.switch_util",
"backend_libs.switch_util",
"lambda_switch_util_m_709",
2,
0
},
"backend_libs.switch_util",
"switch_util.m",
709,
"d1;c6;d3;c2;t;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__switch_util__group_case_by_ptag_4_0_2 = {
{
MR_PREDICATE,
"backend_libs.switch_util",
"backend_libs.switch_util",
"lambda_switch_util_m_694",
2,
0
},
"backend_libs.switch_util",
"switch_util.m",
694,
"d1;c6;d2;c2;t;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__switch_util__group_cases_by_ptag_10_0_1 = {
{
MR_PREDICATE,
"backend_libs.switch_util",
"backend_libs.switch_util",
"group_case_by_ptag",
4,
0
},
"backend_libs.switch_util",
"switch_util.m",
669,
"d2;c14;"
};

MR_decl_entry(fn__hlds__hlds_code_util__cons_id_to_tag_3_0);

MR_BEGIN_MODULE(backend_libs__switch_util_module0)
	MR_init_entry1(backend_libs__switch_util__tag_cons_id_4_0);
	MR_init_label1(backend_libs__switch_util__tag_cons_id_4_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__switch_util__tag_cons_id_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_np_call_localret_ent(fn__hlds__hlds_code_util__cons_id_to_tag_3_0,
		backend_libs__switch_util__tag_cons_id_4_0_i2);
MR_def_label(backend_libs__switch_util__tag_cons_id_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_tagged_cons_id_0;
MR_decl_entry(list__map_3_0);

MR_BEGIN_MODULE(backend_libs__switch_util_module1)
	MR_init_entry1(backend_libs__switch_util__tag_cases_plain_4_0);
	MR_init_label4(backend_libs__switch_util__tag_cases_plain_4_0,18,4,7,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__switch_util__tag_cases_plain_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(backend_libs__switch_util__tag_cases_plain_4_0_i18);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(backend_libs__switch_util__tag_cases_plain_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 2);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_code_util__cons_id_to_tag_3_0,
		backend_libs__switch_util__tag_cases_plain_4_0_i4);
MR_def_label(backend_libs__switch_util__tag_cases_plain_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(0,0);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(backend_libs__switch_util__tag_cons_id_4_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr2, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr2, 4) = MR_sv(2);
	MR_sv(4) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, tagged_cons_id);
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(list__map_3_0,
		backend_libs__switch_util__tag_cases_plain_4_0_i7);
MR_def_label(backend_libs__switch_util__tag_cases_plain_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(6);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	}
	MR_np_localcall_lab(backend_libs__switch_util__tag_cases_plain_4_0,
		backend_libs__switch_util__tag_cases_plain_4_0_i9);
MR_def_label(backend_libs__switch_util__tag_cases_plain_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(int__min_3_0);
MR_decl_entry(int__max_3_0);

MR_BEGIN_MODULE(backend_libs__switch_util_module2)
	MR_init_entry1(backend_libs__switch_util__tag_cons_id_in_int_switch_12_0);
	MR_init_label4(backend_libs__switch_util__tag_cons_id_in_int_switch_12_0,2,6,7,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__switch_util__tag_cons_id_in_int_switch_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r7;
	MR_np_call_localret_ent(fn__hlds__hlds_code_util__cons_id_to_tag_3_0,
		backend_libs__switch_util__tag_cons_id_in_int_switch_12_0_i2);
MR_def_label(backend_libs__switch_util__tag_cons_id_in_int_switch_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tempr3 = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr3;
	if (MR_RTAGS_TESTR(MR_tempr3,3,0)) {
		MR_GOTO_LAB(backend_libs__switch_util__tag_cons_id_in_int_switch_12_0_i4);
	}
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(3, MR_tempr3, 1);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(int__min_3_0,
		backend_libs__switch_util__tag_cons_id_in_int_switch_12_0_i6);
MR_def_label(backend_libs__switch_util__tag_cons_id_in_int_switch_12_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(int__max_3_0,
		backend_libs__switch_util__tag_cons_id_in_int_switch_12_0_i7);
MR_def_label(backend_libs__switch_util__tag_cons_id_in_int_switch_12_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = ((MR_Integer) MR_sv(4) + (MR_Integer) 1);
	MR_r5 = MR_sv(5);
	MR_decr_sp_and_return(6);
	}
MR_def_label(backend_libs__switch_util__tag_cons_id_in_int_switch_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = (MR_Integer) 1;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__map_foldl4_11_1);

MR_BEGIN_MODULE(backend_libs__switch_util_module3)
	MR_init_entry1(backend_libs__switch_util__tag_cases_in_int_switch_12_0);
	MR_init_label4(backend_libs__switch_util__tag_cases_in_int_switch_12_0,17,4,6,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__switch_util__tag_cases_in_int_switch_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(backend_libs__switch_util__tag_cases_in_int_switch_12_0_i17);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	MR_proceed();
MR_def_label(backend_libs__switch_util__tag_cases_in_int_switch_12_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 2);
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(backend_libs__switch_util__tag_cons_id_in_int_switch_12_0,
		backend_libs__switch_util__tag_cases_in_int_switch_12_0_i4);
MR_def_label(backend_libs__switch_util__tag_cases_in_int_switch_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r7 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(backend_libs__switch_util__tag_cons_id_in_int_switch_12_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_tempr3 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, tagged_cons_id);
	MR_tempr4 = MR_r3;
	MR_r3 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_tempr5 = MR_r4;
	MR_r4 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_tempr6 = MR_r5;
	MR_r5 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r6 = (MR_Word) MR_CTOR0_ADDR(backend_libs__switch_util, is_int_switch);
	MR_r8 = MR_tempr2;
	MR_r9 = MR_tempr3;
	MR_r10 = MR_tempr4;
	MR_r11 = MR_tempr5;
	MR_r12 = MR_tempr6;
	}
	MR_np_call_localret_ent(list__map_foldl4_11_1,
		backend_libs__switch_util__tag_cases_in_int_switch_12_0_i6);
MR_def_label(backend_libs__switch_util__tag_cases_in_int_switch_12_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(5);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_tempr3 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_tempr4 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_tempr5 = MR_r4;
	MR_r4 = MR_tempr3;
	MR_tempr6 = MR_r5;
	MR_r5 = MR_tempr4;
	MR_r6 = MR_tempr5;
	MR_r7 = MR_tempr6;
	}
	MR_np_localcall_lab(backend_libs__switch_util__tag_cases_in_int_switch_12_0,
		backend_libs__switch_util__tag_cases_in_int_switch_12_0_i8);
MR_def_label(backend_libs__switch_util__tag_cases_in_int_switch_12_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__switch_util_module4)
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

MR_BEGIN_MODULE(backend_libs__switch_util_module5)
	MR_init_entry1(backend_libs__switch_util__tag_cases_5_0);
	MR_init_label7(backend_libs__switch_util__tag_cases_5_0,4,9,11,6,18,20,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__backend_libs__switch_util__tag_cases_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(backend_libs__switch_util__tag_cases_5_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 2);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_code_util__cons_id_to_tag_3_0,
		backend_libs__switch_util__tag_cases_5_0_i4);
MR_def_label(backend_libs__switch_util__tag_cases_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r13 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tempr3 = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr3;
	if (MR_RTAGS_TESTR(MR_tempr3,3,0)) {
		MR_GOTO_LAB(backend_libs__switch_util__tag_cases_5_0_i6);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 5);
	MR_r7 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(1,1);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(backend_libs__switch_util__tag_cons_id_in_int_switch_12_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr2, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr2, 4) = MR_sv(2);
	MR_sv(4) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, tagged_cons_id);
	MR_r3 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r4 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r5 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r6 = (MR_Word) MR_CTOR0_ADDR(backend_libs__switch_util, is_int_switch);
	MR_r8 = MR_sv(5);
	MR_r9 = MR_ctfield(3, MR_ctfield(0, MR_tempr1, 1), 1);
	MR_r10 = MR_r9;
	MR_r11 = (MR_Integer) 1;
	MR_r12 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__map_foldl4_11_1,
		backend_libs__switch_util__tag_cases_5_0_i9);
MR_def_label(backend_libs__switch_util__tag_cases_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(6);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_tempr3 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_tempr4 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_tempr5 = MR_r4;
	MR_r4 = MR_tempr3;
	MR_tempr6 = MR_r5;
	MR_r5 = MR_tempr4;
	MR_r6 = MR_tempr5;
	MR_r7 = MR_tempr6;
	}
	MR_np_call_localret_ent(backend_libs__switch_util__tag_cases_in_int_switch_12_0,
		backend_libs__switch_util__tag_cases_5_0_i11);
MR_def_label(backend_libs__switch_util__tag_cases_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(backend_libs__switch_util__tag_cases_5_0_i20);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_tfield(1, MR_tempr1, 2) = MR_r4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(backend_libs__switch_util__tag_cases_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(backend_libs__switch_util__tag_cons_id_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_sv(4) = MR_r13;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, tagged_cons_id);
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(list__map_3_0,
		backend_libs__switch_util__tag_cases_5_0_i18);
MR_def_label(backend_libs__switch_util__tag_cases_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(6);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(backend_libs__switch_util__tag_cases_plain_4_0,
		backend_libs__switch_util__tag_cases_5_0_i20);
MR_def_label(backend_libs__switch_util__tag_cases_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(7);
	}
MR_def_label(backend_libs__switch_util__tag_cases_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("switch_util.m", 13);
	MR_r2 = (MR_Word) MR_string_const("tag_cases: no cases", 19);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__switch_util_module6)
	MR_init_entry1(backend_libs__switch_util__represent_tagged_case_by_itself_8_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__backend_libs__switch_util__represent_tagged_case_by_itself_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__switch_util_module7)
	MR_init_entry1(fn__backend_libs__switch_util__type_ctor_cat_to_switch_cat_1_0);
	MR_init_label5(fn__backend_libs__switch_util__type_ctor_cat_to_switch_cat_1_0,3,7,27,34,14)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__backend_libs__switch_util__type_ctor_cat_to_switch_cat_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__backend_libs__switch_util__type_ctor_cat_to_switch_cat_1_0_i34) MR_AND
		MR_LABEL_AP(fn__backend_libs__switch_util__type_ctor_cat_to_switch_cat_1_0_i3) MR_AND
		MR_LABEL_AP(fn__backend_libs__switch_util__type_ctor_cat_to_switch_cat_1_0_i7) MR_AND
		MR_LABEL_AP(fn__backend_libs__switch_util__type_ctor_cat_to_switch_cat_1_0_i27));
MR_def_label(fn__backend_libs__switch_util__type_ctor_cat_to_switch_cat_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_tempr2 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_2_0, (MR_Integer) MR_tempr1);
	MR_r1 = MR_ctfield(0, MR_tempr2, 0);
	MR_proceed();
	}
MR_def_label(fn__backend_libs__switch_util__type_ctor_cat_to_switch_cat_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__backend_libs__switch_util__type_ctor_cat_to_switch_cat_1_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r1, 0),0)) {
		MR_GOTO_LAB(fn__backend_libs__switch_util__type_ctor_cat_to_switch_cat_1_0_i14);
	}
MR_def_label(fn__backend_libs__switch_util__type_ctor_cat_to_switch_cat_1_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("switch_util.m", 13);
	MR_r2 = (MR_Word) MR_string_const("type_ctor_cat_to_switch_cat: bad type ctor cat", 46);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(fn__backend_libs__switch_util__type_ctor_cat_to_switch_cat_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	if (MR_INT_NE(MR_tempr1,2)) {
		MR_GOTO_LAB(fn__backend_libs__switch_util__type_ctor_cat_to_switch_cat_1_0_i34);
	}
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__length_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_reserved_address_0;
MR_decl_entry(fn__list__length_1_0);

MR_BEGIN_MODULE(backend_libs__switch_util_module8)
	MR_init_entry1(fn__backend_libs__switch_util__estimate_switch_tag_test_cost_1_0);
	MR_init_label8(fn__backend_libs__switch_util__estimate_switch_tag_test_cost_1_0,15,21,3,31,13,5,19,6)
	MR_init_label4(fn__backend_libs__switch_util__estimate_switch_tag_test_cost_1_0,7,35,9,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__backend_libs__switch_util__estimate_switch_tag_test_cost_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__backend_libs__switch_util__estimate_switch_tag_test_cost_1_0_i15) MR_AND
		MR_LABEL_AP(fn__backend_libs__switch_util__estimate_switch_tag_test_cost_1_0_i31) MR_AND
		MR_LABEL_AP(fn__backend_libs__switch_util__estimate_switch_tag_test_cost_1_0_i5) MR_AND
		MR_LABEL_AP(fn__backend_libs__switch_util__estimate_switch_tag_test_cost_1_0_i19));
MR_def_label(fn__backend_libs__switch_util__estimate_switch_tag_test_cost_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r1),0)) {
		MR_GOTO_LAB(fn__backend_libs__switch_util__estimate_switch_tag_test_cost_1_0_i3);
	}
MR_def_label(fn__backend_libs__switch_util__estimate_switch_tag_test_cost_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
MR_def_label(fn__backend_libs__switch_util__estimate_switch_tag_test_cost_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("switch_util.m", 13);
	MR_r2 = (MR_Word) MR_string_const("estimate_switch_tag_test_cost: non-switch tag", 45);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(fn__backend_libs__switch_util__estimate_switch_tag_test_cost_1_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__string__length_1_0,
		fn__backend_libs__switch_util__estimate_switch_tag_test_cost_1_0_i13);
MR_def_label(fn__backend_libs__switch_util__estimate_switch_tag_test_cost_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) 1 + ((MR_Integer) 2 * (MR_Integer) MR_r1));
	MR_decr_sp_and_return(2);
MR_def_label(fn__backend_libs__switch_util__estimate_switch_tag_test_cost_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 3;
	MR_proceed();
MR_def_label(fn__backend_libs__switch_util__estimate_switch_tag_test_cost_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(fn__backend_libs__switch_util__estimate_switch_tag_test_cost_1_0_i6) MR_AND
		MR_LABEL_AP(fn__backend_libs__switch_util__estimate_switch_tag_test_cost_1_0_i6) MR_AND
		MR_LABEL_AP(fn__backend_libs__switch_util__estimate_switch_tag_test_cost_1_0_i3) MR_AND
		MR_LABEL_AP(fn__backend_libs__switch_util__estimate_switch_tag_test_cost_1_0_i3) MR_AND
		MR_LABEL_AP(fn__backend_libs__switch_util__estimate_switch_tag_test_cost_1_0_i3) MR_AND
		MR_LABEL_AP(fn__backend_libs__switch_util__estimate_switch_tag_test_cost_1_0_i3) MR_AND
		MR_LABEL_AP(fn__backend_libs__switch_util__estimate_switch_tag_test_cost_1_0_i3) MR_AND
		MR_LABEL_AP(fn__backend_libs__switch_util__estimate_switch_tag_test_cost_1_0_i3) MR_AND
		MR_LABEL_AP(fn__backend_libs__switch_util__estimate_switch_tag_test_cost_1_0_i21) MR_AND
		MR_LABEL_AP(fn__backend_libs__switch_util__estimate_switch_tag_test_cost_1_0_i7) MR_AND
		MR_LABEL_AP(fn__backend_libs__switch_util__estimate_switch_tag_test_cost_1_0_i6) MR_AND
		MR_LABEL_AP(fn__backend_libs__switch_util__estimate_switch_tag_test_cost_1_0_i6) MR_AND
		MR_LABEL_AP(fn__backend_libs__switch_util__estimate_switch_tag_test_cost_1_0_i35));
MR_def_label(fn__backend_libs__switch_util__estimate_switch_tag_test_cost_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__backend_libs__switch_util__estimate_switch_tag_test_cost_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 4;
	MR_proceed();
MR_def_label(fn__backend_libs__switch_util__estimate_switch_tag_test_cost_1_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(1) = MR_ctfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, reserved_address);
	MR_r2 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__list__length_1_0,
		fn__backend_libs__switch_util__estimate_switch_tag_test_cost_1_0_i9);
MR_def_label(fn__backend_libs__switch_util__estimate_switch_tag_test_cost_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = ((MR_Integer) 2 * (MR_Integer) MR_r1);
	MR_r1 = MR_tempr1;
	}
	MR_np_localcall_lab(fn__backend_libs__switch_util__estimate_switch_tag_test_cost_1_0,
		fn__backend_libs__switch_util__estimate_switch_tag_test_cost_1_0_i10);
MR_def_label(fn__backend_libs__switch_util__estimate_switch_tag_test_cost_1_0,10)
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
MR_decl_entry(parse_tree__prog_type__type_to_ctor_det_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_type_table_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_type_ctor_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_type_defn_0;
MR_decl_entry(map__lookup_3_0);
MR_decl_entry(hlds__hlds_data__get_type_defn_body_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_cons_tag_0;
MR_decl_entry(map__count_2_0);

MR_BEGIN_MODULE(backend_libs__switch_util_module9)
	MR_init_entry1(backend_libs__switch_util__type_range_6_0);
	MR_init_label8(backend_libs__switch_util__type_range_6_0,5,6,3,9,10,11,12,15)
	MR_init_label3(backend_libs__switch_util__type_range_6_0,14,2,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__backend_libs__switch_util__type_range_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(backend_libs__switch_util__type_range_6_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r2, 0);
	if (MR_INT_NE(MR_tempr1,2)) {
		MR_GOTO_LAB(backend_libs__switch_util__type_range_6_0_i1);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	}
	MR_np_call_localret_ent(char__min_char_value_1_0,
		backend_libs__switch_util__type_range_6_0_i5);
MR_def_label(backend_libs__switch_util__type_range_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(char__max_char_value_1_0,
		backend_libs__switch_util__type_range_6_0_i6);
MR_def_label(backend_libs__switch_util__type_range_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r4 = (((MR_Integer) MR_tempr1 - (MR_Integer) MR_r2) + (MR_Integer) 1);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
	}
MR_def_label(backend_libs__switch_util__type_range_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(backend_libs__switch_util__type_range_6_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(2, MR_r2, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(backend_libs__switch_util__type_range_6_0_i1);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r3;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_det_2_0,
		backend_libs__switch_util__type_range_6_0_i9);
MR_def_label(backend_libs__switch_util__type_range_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_type_table_2_0,
		backend_libs__switch_util__type_range_6_0_i10);
MR_def_label(backend_libs__switch_util__type_range_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_type_defn);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		backend_libs__switch_util__type_range_6_0_i11);
MR_def_label(backend_libs__switch_util__type_range_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_body_2_0,
		backend_libs__switch_util__type_range_6_0_i12);
MR_def_label(backend_libs__switch_util__type_range_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(backend_libs__switch_util__type_range_6_0_i14);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, cons_tag);
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(map__count_2_0,
		backend_libs__switch_util__type_range_6_0_i15);
MR_def_label(backend_libs__switch_util__type_range_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r3 = ((MR_Integer) MR_r1 - (MR_Integer) 1);
	MR_r4 = (((MR_Integer) MR_r3 - (MR_Integer) MR_r2) + (MR_Integer) 1);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
MR_def_label(backend_libs__switch_util__type_range_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("switch_util.m", 13);
	MR_r2 = (MR_Word) MR_string_const("type_range: enum type is not d.u. type?", 39);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		backend_libs__switch_util__type_range_6_0_i2);
MR_def_label(backend_libs__switch_util__type_range_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
MR_def_label(backend_libs__switch_util__type_range_6_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_105_110_116_95_95_47_47_2_0);

MR_BEGIN_MODULE(backend_libs__switch_util_module10)
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

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(map__init_1_0);
MR_declare_entry(mercury__do_call_closure_4);
MR_decl_entry(list__foldl_4_0);

MR_BEGIN_MODULE(backend_libs__switch_util_module11)
	MR_init_entry1(backend_libs__switch_util__string_hash_cases_10_0);
	MR_init_label4(backend_libs__switch_util__string_hash_cases_10_0,3,7,8,14)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__backend_libs__switch_util__string_hash_cases_10_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(backend_libs__switch_util__string_hash_cases_10_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(pair, pair, 2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_sv(1) = MR_r8;
	MR_sv(2) = MR_r9;
	MR_sv(3) = MR_r10;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	}
	MR_np_call_localret_ent(map__init_1_0,
		backend_libs__switch_util__string_hash_cases_10_0_i14);
MR_def_label(backend_libs__switch_util__string_hash_cases_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r6;
	MR_sv(2) = MR_r7;
	MR_sv(3) = MR_ctfield(1, MR_r5, 0);
	MR_sv(4) = MR_r1;
	MR_r5 = MR_ctfield(1, MR_r5, 1);
	MR_np_localcall_lab(backend_libs__switch_util__string_hash_cases_10_0,
		backend_libs__switch_util__string_hash_cases_10_0_i7);
MR_def_label(backend_libs__switch_util__string_hash_cases_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r4;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr3 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_tempr4 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	MR_r5 = MR_tempr4;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(backend_libs__switch_util__string_hash_cases_10_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_4),
		mercury__backend_libs__switch_util__string_hash_cases_10_0_i8);
MR_def_label(backend_libs__switch_util__string_hash_cases_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr5 = MR_sv(3);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(0, MR_tempr5, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(0, MR_tempr5, 1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(7,0);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(backend_libs__switch_util__string_hash_cons_id_5_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 3;
	MR_tempr6 = MR_sv(4);
	MR_tfield(0, MR_tempr2, 3) = MR_tempr6;
	MR_tfield(0, MR_tempr2, 4) = MR_r1;
	MR_tfield(0, MR_tempr2, 5) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_CTOR_ADDR(pair, pair, 2);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_tfield(0, MR_tempr3, 2) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr4, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_CTOR_ADDR(tree234, tree234, 2);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_tfield(0, MR_tempr3, 2) = MR_tempr4;
	MR_sv(1) = MR_r2;
	MR_tempr4 = MR_sv(2);
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, tagged_cons_id);
	MR_r2 = MR_tempr3;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr4;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		backend_libs__switch_util__string_hash_cases_10_0_i14);
MR_def_label(backend_libs__switch_util__string_hash_cases_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0);
MR_decl_entry(map__contains_2_0);

MR_BEGIN_MODULE(backend_libs__switch_util_module12)
	MR_init_entry1(backend_libs__switch_util__follow_hash_chain_3_0);
	MR_init_label4(backend_libs__switch_util__follow_hash_chain_3_0,19,3,6,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__switch_util__follow_hash_chain_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(backend_libs__switch_util__follow_hash_chain_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(backend_libs__switch_util, string_hash_slot);
	MR_tempr2 = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_tempr2;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		backend_libs__switch_util__follow_hash_chain_3_0_i3);
MR_def_label(backend_libs__switch_util__follow_hash_chain_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_r4 = MR_tempr1;
	if (MR_INT_LT(MR_tempr1,0)) {
		MR_GOTO_LAB(backend_libs__switch_util__follow_hash_chain_3_0_i5);
	}
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__contains_2_0,
		backend_libs__switch_util__follow_hash_chain_3_0_i6);
MR_def_label(backend_libs__switch_util__follow_hash_chain_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(backend_libs__switch_util__follow_hash_chain_3_0_i5);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(backend_libs__switch_util__follow_hash_chain_3_0_i19);
MR_def_label(backend_libs__switch_util__follow_hash_chain_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__switch_util_module13)
	MR_init_entry1(backend_libs__switch_util__next_free_hash_slot_4_0);
	MR_init_label4(backend_libs__switch_util__next_free_hash_slot_4_0,22,6,11,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__switch_util__next_free_hash_slot_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(backend_libs__switch_util__next_free_hash_slot_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = ((MR_Integer) MR_r4 + (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR1_ADDR(backend_libs__switch_util, string_hash_slot);
	MR_tempr3 = MR_r1;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr3;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tempr3;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__contains_2_0,
		backend_libs__switch_util__next_free_hash_slot_4_0_i6);
MR_def_label(backend_libs__switch_util__next_free_hash_slot_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(backend_libs__switch_util__next_free_hash_slot_4_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(pair, pair, 2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(map__contains_2_0,
		backend_libs__switch_util__next_free_hash_slot_4_0_i11);
MR_def_label(backend_libs__switch_util__next_free_hash_slot_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(backend_libs__switch_util__next_free_hash_slot_4_0_i2);
	}
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(5);
MR_def_label(backend_libs__switch_util__next_free_hash_slot_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r1 = MR_sv(4);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(backend_libs__switch_util__next_free_hash_slot_4_0_i22);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0);
MR_decl_entry(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(backend_libs__switch_util_module14)
	MR_init_entry1(backend_libs__switch_util__calc_string_hash_slots_2_7_0);
	MR_init_label8(backend_libs__switch_util__calc_string_hash_slots_2_7_0,30,4,8,10,11,12,14,15)
	MR_init_label2(backend_libs__switch_util__calc_string_hash_slots_2_7_0,6,17)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__switch_util__calc_string_hash_slots_2_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(backend_libs__switch_util__calc_string_hash_slots_2_7_0_i30);
	}
	MR_r1 = MR_r5;
	MR_r2 = MR_r6;
	MR_proceed();
MR_def_label(backend_libs__switch_util__calc_string_hash_slots_2_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_ctfield(1, MR_r2, 0);
	MR_sv(6) = MR_r1;
	MR_r2 = MR_ctfield(1, MR_r2, 1);
	MR_np_localcall_lab(backend_libs__switch_util__calc_string_hash_slots_2_7_0,
		backend_libs__switch_util__calc_string_hash_slots_2_7_0_i4);
MR_def_label(backend_libs__switch_util__calc_string_hash_slots_2_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) -1;
	MR_tempr3 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr3, 1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR1_ADDR(backend_libs__switch_util, string_hash_slot);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(6);
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(7) = MR_tempr2;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__contains_2_0,
		backend_libs__switch_util__calc_string_hash_slots_2_7_0_i8);
MR_def_label(backend_libs__switch_util__calc_string_hash_slots_2_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(backend_libs__switch_util__calc_string_hash_slots_2_7_0_i6);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(backend_libs__switch_util__follow_hash_chain_3_0,
		backend_libs__switch_util__calc_string_hash_slots_2_7_0_i10);
MR_def_label(backend_libs__switch_util__calc_string_hash_slots_2_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(backend_libs__switch_util__next_free_hash_slot_4_0,
		backend_libs__switch_util__calc_string_hash_slots_2_7_0_i11);
MR_def_label(backend_libs__switch_util__calc_string_hash_slots_2_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		backend_libs__switch_util__calc_string_hash_slots_2_7_0_i12);
MR_def_label(backend_libs__switch_util__calc_string_hash_slots_2_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		backend_libs__switch_util__calc_string_hash_slots_2_7_0_i14);
MR_def_label(backend_libs__switch_util__calc_string_hash_slots_2_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		backend_libs__switch_util__calc_string_hash_slots_2_7_0_i15);
MR_def_label(backend_libs__switch_util__calc_string_hash_slots_2_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(8);
MR_def_label(backend_libs__switch_util__calc_string_hash_slots_2_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(backend_libs__switch_util, string_hash_slot);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		backend_libs__switch_util__calc_string_hash_slots_2_7_0_i17);
MR_def_label(backend_libs__switch_util__calc_string_hash_slots_2_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__switch_util_module15)
	MR_init_entry1(backend_libs__switch_util__calc_string_hash_slots_1_6_0);
	MR_init_label3(backend_libs__switch_util__calc_string_hash_slots_1_6_0,10,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__switch_util__calc_string_hash_slots_1_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(backend_libs__switch_util__calc_string_hash_slots_1_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(backend_libs__switch_util__calc_string_hash_slots_1_6_0_i3);
	}
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_decr_sp_and_return(4);
MR_def_label(backend_libs__switch_util__calc_string_hash_slots_1_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_tempr3, 1);
	MR_sv(3) = MR_r1;
	MR_tempr1 = MR_tempr3;
	MR_tempr2 = MR_ctfield(1, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 1);
	MR_r3 = MR_ctfield(0, MR_tempr2, 0);
	MR_tempr1 = MR_r4;
	MR_r4 = MR_sv(1);
	MR_tempr2 = MR_r5;
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(backend_libs__switch_util__calc_string_hash_slots_2_7_0,
		backend_libs__switch_util__calc_string_hash_slots_1_6_0_i4);
MR_def_label(backend_libs__switch_util__calc_string_hash_slots_1_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(backend_libs__switch_util__calc_string_hash_slots_1_6_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__init_0_0);

MR_BEGIN_MODULE(backend_libs__switch_util_module16)
	MR_init_entry1(backend_libs__switch_util__calc_string_hash_slots_3_0);
	MR_init_label1(backend_libs__switch_util__calc_string_hash_slots_3_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__backend_libs__switch_util__calc_string_hash_slots_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(backend_libs__switch_util, string_hash_slot);
	MR_tempr2 = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tempr2;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		backend_libs__switch_util__calc_string_hash_slots_3_0_i3);
MR_def_label(backend_libs__switch_util__calc_string_hash_slots_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = (MR_Integer) 0;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(backend_libs__switch_util__calc_string_hash_slots_1_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0);
MR_decl_entry(libs__compiler_util__expect_3_0);

MR_BEGIN_MODULE(backend_libs__switch_util_module17)
	MR_init_entry1(backend_libs__switch_util__group_case_by_ptag_4_0);
	MR_init_label8(backend_libs__switch_util__group_case_by_ptag_4_0,66,43,41,47,48,3,4,70)
	MR_init_label8(backend_libs__switch_util__group_case_by_ptag_4_0,6,9,12,13,14,7,17,18)
	MR_init_label8(backend_libs__switch_util__group_case_by_ptag_4_0,23,26,29,30,31,24,34,35)
	MR_init_label6(backend_libs__switch_util__group_case_by_ptag_4_0,53,56,58,54,60,61)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__switch_util__group_case_by_ptag_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_r5 = MR_ctfield(0, MR_r3, 1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r5),
		MR_LABEL_AP(backend_libs__switch_util__group_case_by_ptag_4_0_i66) MR_AND
		MR_LABEL_AP(backend_libs__switch_util__group_case_by_ptag_4_0_i3) MR_AND
		MR_LABEL_AP(backend_libs__switch_util__group_case_by_ptag_4_0_i3) MR_AND
		MR_LABEL_AP(backend_libs__switch_util__group_case_by_ptag_4_0_i70));
MR_def_label(backend_libs__switch_util__group_case_by_ptag_4_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r5),0)) {
		MR_GOTO_LAB(backend_libs__switch_util__group_case_by_ptag_4_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(backend_libs__switch_util, ptag_case);
	MR_tempr2 = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_sv(1) = MR_r2;
	MR_tempr3 = MR_r4;
	MR_sv(3) = MR_tempr3;
	MR_sv(7) = MR_tempr2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr3;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		backend_libs__switch_util__group_case_by_ptag_4_0_i43);
MR_def_label(backend_libs__switch_util__group_case_by_ptag_4_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(backend_libs__switch_util__group_case_by_ptag_4_0_i41);
	}
	MR_np_call_localret_ent(fn__backend_libs__switch_util__this_file_0_0,
		backend_libs__switch_util__group_case_by_ptag_4_0_i58);
MR_def_label(backend_libs__switch_util__group_case_by_ptag_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(map__init_1_0,
		backend_libs__switch_util__group_case_by_ptag_4_0_i47);
MR_def_label(backend_libs__switch_util__group_case_by_ptag_4_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) -1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		backend_libs__switch_util__group_case_by_ptag_4_0_i48);
MR_def_label(backend_libs__switch_util__group_case_by_ptag_4_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR1_ADDR(backend_libs__switch_util, ptag_case);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(7);
	MR_r2 = (MR_Integer) 0;
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0);
	}
MR_def_label(backend_libs__switch_util__group_case_by_ptag_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__backend_libs__switch_util__this_file_0_0,
		backend_libs__switch_util__group_case_by_ptag_4_0_i4);
MR_def_label(backend_libs__switch_util__group_case_by_ptag_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("non-du tag in group_case_by_ptag", 32);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(backend_libs__switch_util__group_case_by_ptag_4_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r5, 0),
		MR_LABEL_AP(backend_libs__switch_util__group_case_by_ptag_4_0_i3) MR_AND
		MR_LABEL_AP(backend_libs__switch_util__group_case_by_ptag_4_0_i3) MR_AND
		MR_LABEL_AP(backend_libs__switch_util__group_case_by_ptag_4_0_i3) MR_AND
		MR_LABEL_AP(backend_libs__switch_util__group_case_by_ptag_4_0_i3) MR_AND
		MR_LABEL_AP(backend_libs__switch_util__group_case_by_ptag_4_0_i3) MR_AND
		MR_LABEL_AP(backend_libs__switch_util__group_case_by_ptag_4_0_i3) MR_AND
		MR_LABEL_AP(backend_libs__switch_util__group_case_by_ptag_4_0_i3) MR_AND
		MR_LABEL_AP(backend_libs__switch_util__group_case_by_ptag_4_0_i3) MR_AND
		MR_LABEL_AP(backend_libs__switch_util__group_case_by_ptag_4_0_i53) MR_AND
		MR_LABEL_AP(backend_libs__switch_util__group_case_by_ptag_4_0_i23) MR_AND
		MR_LABEL_AP(backend_libs__switch_util__group_case_by_ptag_4_0_i6) MR_AND
		MR_LABEL_AP(backend_libs__switch_util__group_case_by_ptag_4_0_i3) MR_AND
		MR_LABEL_AP(backend_libs__switch_util__group_case_by_ptag_4_0_i3));
MR_def_label(backend_libs__switch_util__group_case_by_ptag_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr2 = MR_r5;
	MR_sv(6) = MR_ctfield(3, MR_tempr2, 2);
	MR_r3 = MR_ctfield(3, MR_tempr2, 1);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(backend_libs__switch_util, ptag_case);
	MR_tempr3 = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr3;
	MR_sv(1) = MR_r2;
	MR_tempr4 = MR_r4;
	MR_sv(3) = MR_tempr4;
	MR_sv(5) = MR_r3;
	MR_sv(7) = MR_tempr3;
	MR_sv(8) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr4;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		backend_libs__switch_util__group_case_by_ptag_4_0_i9);
MR_def_label(backend_libs__switch_util__group_case_by_ptag_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(backend_libs__switch_util__group_case_by_ptag_4_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(backend_libs__switch_util__IntroducedFrom__pred__group_case_by_ptag__709__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = (MR_Integer) 1;
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(fn__backend_libs__switch_util__this_file_0_0,
		backend_libs__switch_util__group_case_by_ptag_4_0_i12);
MR_def_label(backend_libs__switch_util__group_case_by_ptag_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_string_const("local tag is shared with non-local", 34);
	}
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		backend_libs__switch_util__group_case_by_ptag_4_0_i13);
MR_def_label(backend_libs__switch_util__group_case_by_ptag_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		backend_libs__switch_util__group_case_by_ptag_4_0_i14);
MR_def_label(backend_libs__switch_util__group_case_by_ptag_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(5);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0);
	}
MR_def_label(backend_libs__switch_util__group_case_by_ptag_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(map__init_1_0,
		backend_libs__switch_util__group_case_by_ptag_4_0_i17);
MR_def_label(backend_libs__switch_util__group_case_by_ptag_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		backend_libs__switch_util__group_case_by_ptag_4_0_i18);
MR_def_label(backend_libs__switch_util__group_case_by_ptag_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR1_ADDR(backend_libs__switch_util, ptag_case);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0);
	}
MR_def_label(backend_libs__switch_util__group_case_by_ptag_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr2 = MR_r5;
	MR_r3 = MR_ctfield(3, MR_tempr2, 1);
	MR_sv(2) = MR_ctfield(3, MR_tempr2, 2);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(backend_libs__switch_util, ptag_case);
	MR_tempr3 = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr3;
	MR_sv(1) = MR_r2;
	MR_tempr4 = MR_r4;
	MR_sv(3) = MR_tempr4;
	MR_sv(6) = MR_r3;
	MR_sv(7) = MR_tempr3;
	MR_sv(8) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr4;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		backend_libs__switch_util__group_case_by_ptag_4_0_i26);
MR_def_label(backend_libs__switch_util__group_case_by_ptag_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(backend_libs__switch_util__group_case_by_ptag_4_0_i24);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(4) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(backend_libs__switch_util__IntroducedFrom__pred__group_case_by_ptag__694__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 2;
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(fn__backend_libs__switch_util__this_file_0_0,
		backend_libs__switch_util__group_case_by_ptag_4_0_i29);
MR_def_label(backend_libs__switch_util__group_case_by_ptag_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_string_const("remote tag is shared with non-remote", 36);
	}
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		backend_libs__switch_util__group_case_by_ptag_4_0_i30);
MR_def_label(backend_libs__switch_util__group_case_by_ptag_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		backend_libs__switch_util__group_case_by_ptag_4_0_i31);
MR_def_label(backend_libs__switch_util__group_case_by_ptag_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(6);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0);
	}
MR_def_label(backend_libs__switch_util__group_case_by_ptag_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(map__init_1_0,
		backend_libs__switch_util__group_case_by_ptag_4_0_i34);
MR_def_label(backend_libs__switch_util__group_case_by_ptag_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		backend_libs__switch_util__group_case_by_ptag_4_0_i35);
MR_def_label(backend_libs__switch_util__group_case_by_ptag_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR1_ADDR(backend_libs__switch_util, ptag_case);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0);
	}
MR_def_label(backend_libs__switch_util__group_case_by_ptag_4_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(3, MR_r5, 1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(backend_libs__switch_util, ptag_case);
	MR_tempr2 = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_sv(1) = MR_r2;
	MR_tempr3 = MR_r4;
	MR_sv(3) = MR_tempr3;
	MR_sv(7) = MR_tempr2;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr3;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		backend_libs__switch_util__group_case_by_ptag_4_0_i56);
MR_def_label(backend_libs__switch_util__group_case_by_ptag_4_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(backend_libs__switch_util__group_case_by_ptag_4_0_i54);
	}
	MR_np_call_localret_ent(fn__backend_libs__switch_util__this_file_0_0,
		backend_libs__switch_util__group_case_by_ptag_4_0_i58);
MR_def_label(backend_libs__switch_util__group_case_by_ptag_4_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("unshared tag is shared", 22);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(backend_libs__switch_util__group_case_by_ptag_4_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(map__init_1_0,
		backend_libs__switch_util__group_case_by_ptag_4_0_i60);
MR_def_label(backend_libs__switch_util__group_case_by_ptag_4_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) -1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		backend_libs__switch_util__group_case_by_ptag_4_0_i61);
MR_def_label(backend_libs__switch_util__group_case_by_ptag_4_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR1_ADDR(backend_libs__switch_util, ptag_case);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__switch_util_module18)
	MR_init_entry1(backend_libs__switch_util__group_cases_by_ptag_10_0);
	MR_init_label5(backend_libs__switch_util__group_cases_by_ptag_10_0,15,3,4,5,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__backend_libs__switch_util__group_cases_by_ptag_10_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
MR_def_label(backend_libs__switch_util__group_cases_by_ptag_10_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(backend_libs__switch_util__group_cases_by_ptag_10_0_i3);
	}
	MR_r1 = MR_r7;
	MR_r2 = MR_r8;
	MR_r3 = MR_r9;
	MR_r4 = MR_r10;
	MR_decr_sp_and_return(12);
MR_def_label(backend_libs__switch_util__group_cases_by_ptag_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r6;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r10;
	MR_tempr3 = MR_r5;
	MR_sv(3) = MR_ctfield(1, MR_tempr3, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_sv(11) = MR_r4;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r7;
	MR_r4 = MR_r8;
	MR_r5 = MR_r9;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(backend_libs__switch_util__group_cases_by_ptag_10_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_4),
		mercury__backend_libs__switch_util__group_cases_by_ptag_10_0_i4);
MR_def_label(backend_libs__switch_util__group_cases_by_ptag_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(7) = MR_r4;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__switch_util__group_case_by_ptag_4_0,
		backend_libs__switch_util__group_cases_by_ptag_10_0_i5);
MR_def_label(backend_libs__switch_util__group_cases_by_ptag_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(10,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(backend_libs__switch_util__group_case_by_ptag_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tempr5 = MR_sv(8);
	MR_tfield(0, MR_tempr1, 3) = MR_tempr5;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR1_ADDR(backend_libs__switch_util, ptag_case);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_r2 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_CTOR_ADDR(tree234, tree234, 2);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_tfield(0, MR_tempr3, 2) = MR_tempr2;
	MR_tempr4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, tagged_cons_id);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr4;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		backend_libs__switch_util__group_cases_by_ptag_10_0_i9);
MR_def_label(backend_libs__switch_util__group_cases_by_ptag_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(4);
	MR_r8 = MR_sv(6);
	MR_r9 = MR_sv(7);
	MR_r10 = MR_tempr1;
	MR_succip_word = MR_sv(12);
	MR_GOTO_LAB(backend_libs__switch_util__group_cases_by_ptag_10_0_i15);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__switch_util_module19)
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

MR_BEGIN_MODULE(backend_libs__switch_util_module20)
	MR_init_entry1(backend_libs__switch_util__order_ptags_by_count_3_0);
	MR_init_label8(backend_libs__switch_util__order_ptags_by_count_3_0,36,4,8,10,11,6,2,18)
	MR_init_label1(backend_libs__switch_util__order_ptags_by_count_3_0,16)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__backend_libs__switch_util__order_ptags_by_count_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(backend_libs__switch_util__order_ptags_by_count_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(backend_libs__switch_util__select_frequent_ptag_4_0,
		backend_libs__switch_util__order_ptags_by_count_3_0_i4);
MR_def_label(backend_libs__switch_util__order_ptags_by_count_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(backend_libs__switch_util__order_ptags_by_count_3_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(backend_libs__switch_util, ptag_case);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(5) = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		backend_libs__switch_util__order_ptags_by_count_3_0_i8);
MR_def_label(backend_libs__switch_util__order_ptags_by_count_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(backend_libs__switch_util__order_ptags_by_count_3_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__delete_3_0,
		backend_libs__switch_util__order_ptags_by_count_3_0_i10);
MR_def_label(backend_libs__switch_util__order_ptags_by_count_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_localcall_lab(backend_libs__switch_util__order_ptags_by_count_3_0,
		backend_libs__switch_util__order_ptags_by_count_3_0_i11);
MR_def_label(backend_libs__switch_util__order_ptags_by_count_3_0,11)
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
	MR_decr_sp_and_return(6);
	}
MR_def_label(backend_libs__switch_util__order_ptags_by_count_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(backend_libs__switch_util__order_ptags_by_count_3_0_i36);
MR_def_label(backend_libs__switch_util__order_ptags_by_count_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r1 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(backend_libs__switch_util, ptag_case);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	}
	MR_np_call_localret_ent(map__is_empty_1_0,
		backend_libs__switch_util__order_ptags_by_count_3_0_i18);
MR_def_label(backend_libs__switch_util__order_ptags_by_count_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(backend_libs__switch_util__order_ptags_by_count_3_0_i16);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(6);
MR_def_label(backend_libs__switch_util__order_ptags_by_count_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("switch_util.m", 13);
	MR_r2 = (MR_Word) MR_string_const("PtagCaseMap0 is not empty in order_ptags_by_count", 49);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__switch_util_module21)
	MR_init_entry1(backend_libs__switch_util__order_ptags_by_value_4_0);
	MR_init_label8(backend_libs__switch_util__order_ptags_by_value_4_0,33,5,7,8,3,2,15,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__backend_libs__switch_util__order_ptags_by_value_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(backend_libs__switch_util__order_ptags_by_value_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r3 < (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(backend_libs__switch_util__order_ptags_by_value_4_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr2 = MR_r2;
	MR_sv(4) = ((MR_Integer) MR_tempr2 + (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(backend_libs__switch_util, ptag_case);
	MR_tempr3 = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr3;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r3;
	MR_tempr4 = MR_r4;
	MR_sv(3) = MR_tempr4;
	MR_sv(5) = MR_tempr3;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr4;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		backend_libs__switch_util__order_ptags_by_value_4_0_i5);
MR_def_label(backend_libs__switch_util__order_ptags_by_value_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(backend_libs__switch_util__order_ptags_by_value_4_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__delete_3_0,
		backend_libs__switch_util__order_ptags_by_value_4_0_i7);
MR_def_label(backend_libs__switch_util__order_ptags_by_value_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_localcall_lab(backend_libs__switch_util__order_ptags_by_value_4_0,
		backend_libs__switch_util__order_ptags_by_value_4_0_i8);
MR_def_label(backend_libs__switch_util__order_ptags_by_value_4_0,8)
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
	MR_decr_sp_and_return(7);
	}
MR_def_label(backend_libs__switch_util__order_ptags_by_value_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(backend_libs__switch_util__order_ptags_by_value_4_0_i33);
MR_def_label(backend_libs__switch_util__order_ptags_by_value_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(backend_libs__switch_util, ptag_case);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_r4;
	}
	MR_np_call_localret_ent(map__is_empty_1_0,
		backend_libs__switch_util__order_ptags_by_value_4_0_i15);
MR_def_label(backend_libs__switch_util__order_ptags_by_value_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(backend_libs__switch_util__order_ptags_by_value_4_0_i13);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(7);
MR_def_label(backend_libs__switch_util__order_ptags_by_value_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("switch_util.m", 13);
	MR_r2 = (MR_Word) MR_string_const("PtagCaseMap0 is not empty in order_ptags_by_value", 49);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__switch_util_module22)
	MR_init_entry1(backend_libs__switch_util__get_ptag_counts_2_5_0);
	MR_init_label8(backend_libs__switch_util__get_ptag_counts_2_5_0,105,3,66,43,46,44,5,6)
	MR_init_label8(backend_libs__switch_util__get_ptag_counts_2_5_0,70,8,9,12,15,16,14,18)
	MR_init_label8(backend_libs__switch_util__get_ptag_counts_2_5_0,10,25,26,29,32,33,31,35)
	MR_init_label8(backend_libs__switch_util__get_ptag_counts_2_5_0,27,40,54,55,58,60,56,64)
	MR_init_label1(backend_libs__switch_util__get_ptag_counts_2_5_0,108)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__switch_util__get_ptag_counts_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(backend_libs__switch_util__get_ptag_counts_2_5_0,105)
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
		MR_LABEL_AP(backend_libs__switch_util__get_ptag_counts_2_5_0_i66) MR_AND
		MR_LABEL_AP(backend_libs__switch_util__get_ptag_counts_2_5_0_i5) MR_AND
		MR_LABEL_AP(backend_libs__switch_util__get_ptag_counts_2_5_0_i5) MR_AND
		MR_LABEL_AP(backend_libs__switch_util__get_ptag_counts_2_5_0_i70));
MR_def_label(backend_libs__switch_util__get_ptag_counts_2_5_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r4),0)) {
		MR_GOTO_LAB(backend_libs__switch_util__get_ptag_counts_2_5_0_i5);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_sv(3) = (MR_Integer) 0;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(int__max_3_0,
		backend_libs__switch_util__get_ptag_counts_2_5_0_i43);
MR_def_label(backend_libs__switch_util__get_ptag_counts_2_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,5,2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		backend_libs__switch_util__get_ptag_counts_2_5_0_i46);
MR_def_label(backend_libs__switch_util__get_ptag_counts_2_5_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(backend_libs__switch_util__get_ptag_counts_2_5_0_i44);
	}
	MR_np_call_localret_ent(fn__backend_libs__switch_util__this_file_0_0,
		backend_libs__switch_util__get_ptag_counts_2_5_0_i60);
MR_def_label(backend_libs__switch_util__get_ptag_counts_2_5_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,5,2);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,11,0);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		backend_libs__switch_util__get_ptag_counts_2_5_0_i40);
MR_def_label(backend_libs__switch_util__get_ptag_counts_2_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_np_call_localret_ent(fn__backend_libs__switch_util__this_file_0_0,
		backend_libs__switch_util__get_ptag_counts_2_5_0_i6);
MR_def_label(backend_libs__switch_util__get_ptag_counts_2_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("non-du tag in get_ptag_counts_2", 31);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		backend_libs__switch_util__get_ptag_counts_2_5_0_i108);
MR_def_label(backend_libs__switch_util__get_ptag_counts_2_5_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r4, 0),
		MR_LABEL_AP(backend_libs__switch_util__get_ptag_counts_2_5_0_i5) MR_AND
		MR_LABEL_AP(backend_libs__switch_util__get_ptag_counts_2_5_0_i5) MR_AND
		MR_LABEL_AP(backend_libs__switch_util__get_ptag_counts_2_5_0_i5) MR_AND
		MR_LABEL_AP(backend_libs__switch_util__get_ptag_counts_2_5_0_i5) MR_AND
		MR_LABEL_AP(backend_libs__switch_util__get_ptag_counts_2_5_0_i5) MR_AND
		MR_LABEL_AP(backend_libs__switch_util__get_ptag_counts_2_5_0_i5) MR_AND
		MR_LABEL_AP(backend_libs__switch_util__get_ptag_counts_2_5_0_i5) MR_AND
		MR_LABEL_AP(backend_libs__switch_util__get_ptag_counts_2_5_0_i5) MR_AND
		MR_LABEL_AP(backend_libs__switch_util__get_ptag_counts_2_5_0_i54) MR_AND
		MR_LABEL_AP(backend_libs__switch_util__get_ptag_counts_2_5_0_i25) MR_AND
		MR_LABEL_AP(backend_libs__switch_util__get_ptag_counts_2_5_0_i8) MR_AND
		MR_LABEL_AP(backend_libs__switch_util__get_ptag_counts_2_5_0_i5) MR_AND
		MR_LABEL_AP(backend_libs__switch_util__get_ptag_counts_2_5_0_i5));
MR_def_label(backend_libs__switch_util__get_ptag_counts_2_5_0,8)
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
		backend_libs__switch_util__get_ptag_counts_2_5_0_i9);
MR_def_label(backend_libs__switch_util__get_ptag_counts_2_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,5,2);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		backend_libs__switch_util__get_ptag_counts_2_5_0_i12);
MR_def_label(backend_libs__switch_util__get_ptag_counts_2_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(backend_libs__switch_util__get_ptag_counts_2_5_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r2, 0);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(backend_libs__switch_util__get_ptag_counts_2_5_0_i15);
	}
	MR_r2 = MR_ctfield(0, MR_r2, 1);
	MR_r1 = MR_sv(6);
	}
	MR_np_call_localret_ent(int__max_3_0,
		backend_libs__switch_util__get_ptag_counts_2_5_0_i18);
MR_def_label(backend_libs__switch_util__get_ptag_counts_2_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_ctfield(0, MR_r2, 1);
	MR_np_call_localret_ent(fn__backend_libs__switch_util__this_file_0_0,
		backend_libs__switch_util__get_ptag_counts_2_5_0_i16);
MR_def_label(backend_libs__switch_util__get_ptag_counts_2_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("local tag is shared with non-local", 34);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		backend_libs__switch_util__get_ptag_counts_2_5_0_i14);
MR_def_label(backend_libs__switch_util__get_ptag_counts_2_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(int__max_3_0,
		backend_libs__switch_util__get_ptag_counts_2_5_0_i18);
MR_def_label(backend_libs__switch_util__get_ptag_counts_2_5_0,18)
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
		backend_libs__switch_util__get_ptag_counts_2_5_0_i40);
MR_def_label(backend_libs__switch_util__get_ptag_counts_2_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,5,2);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		backend_libs__switch_util__get_ptag_counts_2_5_0_i40);
MR_def_label(backend_libs__switch_util__get_ptag_counts_2_5_0,25)
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
		backend_libs__switch_util__get_ptag_counts_2_5_0_i26);
MR_def_label(backend_libs__switch_util__get_ptag_counts_2_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,5,2);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		backend_libs__switch_util__get_ptag_counts_2_5_0_i29);
MR_def_label(backend_libs__switch_util__get_ptag_counts_2_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(backend_libs__switch_util__get_ptag_counts_2_5_0_i27);
	}
	MR_r1 = MR_ctfield(0, MR_r2, 0);
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(backend_libs__switch_util__get_ptag_counts_2_5_0_i32);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_ctfield(0, MR_r2, 1);
	MR_np_call_localret_ent(int__max_3_0,
		backend_libs__switch_util__get_ptag_counts_2_5_0_i35);
MR_def_label(backend_libs__switch_util__get_ptag_counts_2_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_ctfield(0, MR_r2, 1);
	MR_np_call_localret_ent(fn__backend_libs__switch_util__this_file_0_0,
		backend_libs__switch_util__get_ptag_counts_2_5_0_i33);
MR_def_label(backend_libs__switch_util__get_ptag_counts_2_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("remote tag is shared with non-remote", 36);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		backend_libs__switch_util__get_ptag_counts_2_5_0_i31);
MR_def_label(backend_libs__switch_util__get_ptag_counts_2_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(int__max_3_0,
		backend_libs__switch_util__get_ptag_counts_2_5_0_i35);
MR_def_label(backend_libs__switch_util__get_ptag_counts_2_5_0,35)
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
		backend_libs__switch_util__get_ptag_counts_2_5_0_i40);
MR_def_label(backend_libs__switch_util__get_ptag_counts_2_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,5,2);
	MR_r2 = MR_sv(6);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		backend_libs__switch_util__get_ptag_counts_2_5_0_i40);
MR_def_label(backend_libs__switch_util__get_ptag_counts_2_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(backend_libs__switch_util__get_ptag_counts_2_5_0_i105);
	}
MR_def_label(backend_libs__switch_util__get_ptag_counts_2_5_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_sv(3) = MR_ctfield(3, MR_r4, 1);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(int__max_3_0,
		backend_libs__switch_util__get_ptag_counts_2_5_0_i55);
MR_def_label(backend_libs__switch_util__get_ptag_counts_2_5_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,5,2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		backend_libs__switch_util__get_ptag_counts_2_5_0_i58);
MR_def_label(backend_libs__switch_util__get_ptag_counts_2_5_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(backend_libs__switch_util__get_ptag_counts_2_5_0_i56);
	}
	MR_np_call_localret_ent(fn__backend_libs__switch_util__this_file_0_0,
		backend_libs__switch_util__get_ptag_counts_2_5_0_i60);
MR_def_label(backend_libs__switch_util__get_ptag_counts_2_5_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("unshared tag is shared", 22);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		backend_libs__switch_util__get_ptag_counts_2_5_0_i108);
MR_def_label(backend_libs__switch_util__get_ptag_counts_2_5_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,5,2);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,11,0);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		backend_libs__switch_util__get_ptag_counts_2_5_0_i64);
MR_def_label(backend_libs__switch_util__get_ptag_counts_2_5_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
MR_def_label(backend_libs__switch_util__get_ptag_counts_2_5_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(backend_libs__switch_util__get_ptag_counts_2_5_0_i105);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__to_assoc_list_2_0);
MR_decl_entry(assoc_list__values_2_0);

MR_BEGIN_MODULE(backend_libs__switch_util_module23)
	MR_init_entry1(backend_libs__switch_util__get_ptag_counts_4_0);
	MR_init_label8(backend_libs__switch_util__get_ptag_counts_4_0,2,3,4,5,8,9,7,6)
	MR_init_label1(backend_libs__switch_util__get_ptag_counts_4_0,12)
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
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_det_2_0,
		backend_libs__switch_util__get_ptag_counts_4_0_i2);
MR_def_label(backend_libs__switch_util__get_ptag_counts_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_type_table_2_0,
		backend_libs__switch_util__get_ptag_counts_4_0_i3);
MR_def_label(backend_libs__switch_util__get_ptag_counts_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_type_defn);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		backend_libs__switch_util__get_ptag_counts_4_0_i4);
MR_def_label(backend_libs__switch_util__get_ptag_counts_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_body_2_0,
		backend_libs__switch_util__get_ptag_counts_4_0_i5);
MR_def_label(backend_libs__switch_util__get_ptag_counts_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(backend_libs__switch_util__get_ptag_counts_4_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, cons_tag);
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		backend_libs__switch_util__get_ptag_counts_4_0_i8);
MR_def_label(backend_libs__switch_util__get_ptag_counts_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, cons_tag);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(assoc_list__values_2_0,
		backend_libs__switch_util__get_ptag_counts_4_0_i9);
MR_def_label(backend_libs__switch_util__get_ptag_counts_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,5,2);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_np_call_localret_ent(map__init_1_0,
		backend_libs__switch_util__get_ptag_counts_4_0_i12);
MR_def_label(backend_libs__switch_util__get_ptag_counts_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("switch_util.m", 13);
	MR_r2 = (MR_Word) MR_string_const("non-du type in get_ptag_counts", 30);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		backend_libs__switch_util__get_ptag_counts_4_0_i6);
MR_def_label(backend_libs__switch_util__get_ptag_counts_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(map__init_1_0,
		backend_libs__switch_util__get_ptag_counts_4_0_i12);
MR_def_label(backend_libs__switch_util__get_ptag_counts_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) -1;
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(backend_libs__switch_util__get_ptag_counts_2_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__hash_2_0);

MR_BEGIN_MODULE(backend_libs__switch_util_module24)
	MR_init_entry1(backend_libs__switch_util__string_hash_cons_id_5_0);
	MR_init_label5(backend_libs__switch_util__string_hash_cons_id_5_0,2,5,6,10,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__switch_util__string_hash_cons_id_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r4, 1);
	MR_r6 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(backend_libs__switch_util__string_hash_cons_id_5_0_i2);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(4) = MR_r5;
	MR_GOTO_LAB(backend_libs__switch_util__string_hash_cons_id_5_0_i5);
	}
MR_def_label(backend_libs__switch_util__string_hash_cons_id_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("switch_util.m", 13);
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("string_hash_cases: non-string case?", 35);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		backend_libs__switch_util__string_hash_cons_id_5_0_i5);
MR_def_label(backend_libs__switch_util__string_hash_cons_id_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(string__hash_2_0,
		backend_libs__switch_util__string_hash_cons_id_5_0_i6);
MR_def_label(backend_libs__switch_util__string_hash_cons_id_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = ((MR_Integer) MR_r1 & (MR_Integer) MR_sv(2));
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(pair, pair, 2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_sv(2) = MR_r3;
	MR_sv(6) = MR_tempr2;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		backend_libs__switch_util__string_hash_cons_id_5_0_i10);
MR_def_label(backend_libs__switch_util__string_hash_cons_id_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(backend_libs__switch_util__string_hash_cons_id_5_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0);
	}
MR_def_label(backend_libs__switch_util__string_hash_cons_id_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(pair, pair, 2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__switch_util_module25)
	MR_init_entry1(__Unify___backend_libs__switch_util__is_int_switch_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___backend_libs__switch_util__is_int_switch_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(backend_libs__switch_util_module26)
	MR_init_entry1(__Compare___backend_libs__switch_util__is_int_switch_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___backend_libs__switch_util__is_int_switch_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__switch_util_module27)
	MR_init_entry1(__Unify___backend_libs__switch_util__maybe_int_switch_info_0_0);
	MR_init_label3(__Unify___backend_libs__switch_util__maybe_int_switch_info_0_0,10,5,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___backend_libs__switch_util__maybe_int_switch_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___backend_libs__switch_util__maybe_int_switch_info_0_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___backend_libs__switch_util__maybe_int_switch_info_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___backend_libs__switch_util__maybe_int_switch_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___backend_libs__switch_util__maybe_int_switch_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___backend_libs__switch_util__maybe_int_switch_info_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_sv(1);
	MR_r1 = MR_ctfield(1, MR_tempr2, 0);
	MR_tempr3 = MR_sv(2);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___backend_libs__switch_util__maybe_int_switch_info_0_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___backend_libs__switch_util__maybe_int_switch_info_0_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_tempr2, 2);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 2);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___backend_libs__switch_util__maybe_int_switch_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__switch_util_module28)
	MR_init_entry1(__Compare___backend_libs__switch_util__maybe_int_switch_info_0_0);
	MR_init_label7(__Compare___backend_libs__switch_util__maybe_int_switch_info_0_0,30,7,5,9,11,15,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___backend_libs__switch_util__maybe_int_switch_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___backend_libs__switch_util__maybe_int_switch_info_0_0_i30);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___backend_libs__switch_util__maybe_int_switch_info_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___backend_libs__switch_util__maybe_int_switch_info_0_0_i7);
	}
MR_def_label(__Compare___backend_libs__switch_util__maybe_int_switch_info_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___backend_libs__switch_util__maybe_int_switch_info_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___backend_libs__switch_util__maybe_int_switch_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___backend_libs__switch_util__maybe_int_switch_info_0_0_i9);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___backend_libs__switch_util__maybe_int_switch_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(4) = MR_ctfield(1, MR_tempr5, 1);
	MR_sv(3) = MR_ctfield(1, MR_tempr5, 2);
	MR_tempr6 = MR_sv(2);
	MR_tempr1 = MR_ctfield(1, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(1, MR_tempr3, 0);
	MR_r2 = MR_ctfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___backend_libs__switch_util__maybe_int_switch_info_0_0_i11);
MR_def_label(__Compare___backend_libs__switch_util__maybe_int_switch_info_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___backend_libs__switch_util__maybe_int_switch_info_0_0_i21);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___backend_libs__switch_util__maybe_int_switch_info_0_0_i15);
MR_def_label(__Compare___backend_libs__switch_util__maybe_int_switch_info_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___backend_libs__switch_util__maybe_int_switch_info_0_0_i21);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___backend_libs__switch_util__maybe_int_switch_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(backend_libs__switch_util_module29)
	MR_init_entry1(__Unify___backend_libs__switch_util__ptag_case_1_0);
	MR_init_label2(__Unify___backend_libs__switch_util__ptag_case_1_0,6,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___backend_libs__switch_util__ptag_case_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___backend_libs__switch_util__ptag_case_1_0_i6);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r1;
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___backend_libs__switch_util__ptag_case_1_0_i1);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	MR_r4 = MR_ctfield(0, MR_tempr2, 1);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
MR_def_label(__Unify___backend_libs__switch_util__ptag_case_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___backend_libs__switch_util__ptag_case_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___tree234__tree234_2_0);

MR_BEGIN_MODULE(backend_libs__switch_util_module30)
	MR_init_entry1(__Compare___backend_libs__switch_util__ptag_case_1_0);
	MR_init_label4(__Compare___backend_libs__switch_util__ptag_case_1_0,3,2,5,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___backend_libs__switch_util__ptag_case_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___backend_libs__switch_util__ptag_case_1_0_i3);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_GOTO_LAB(__Compare___backend_libs__switch_util__ptag_case_1_0_i2);
MR_def_label(__Compare___backend_libs__switch_util__ptag_case_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___backend_libs__switch_util__ptag_case_1_0,2)
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
		__Compare___backend_libs__switch_util__ptag_case_1_0_i5);
MR_def_label(__Compare___backend_libs__switch_util__ptag_case_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___backend_libs__switch_util__ptag_case_1_0_i21);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
MR_def_label(__Compare___backend_libs__switch_util__ptag_case_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(backend_libs__switch_util_module31)
	MR_init_entry1(__Unify___backend_libs__switch_util__ptag_case_list_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___backend_libs__switch_util__ptag_case_list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(backend_libs__switch_util, ptag_case);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR_ADDR(pair, pair, 2);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_tfield(0, MR_tempr2, 2) = MR_tempr1;
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(backend_libs__switch_util_module32)
	MR_init_entry1(__Compare___backend_libs__switch_util__ptag_case_list_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___backend_libs__switch_util__ptag_case_list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(backend_libs__switch_util, ptag_case);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR_ADDR(pair, pair, 2);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_tfield(0, MR_tempr2, 2) = MR_tempr1;
	MR_np_tailcall_ent(__Compare___list__list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__switch_util_module33)
	MR_init_entry1(__Unify___backend_libs__switch_util__ptag_case_map_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___backend_libs__switch_util__ptag_case_map_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(backend_libs__switch_util, ptag_case);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__switch_util_module34)
	MR_init_entry1(__Compare___backend_libs__switch_util__ptag_case_map_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___backend_libs__switch_util__ptag_case_map_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(backend_libs__switch_util, ptag_case);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__switch_util_module35)
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
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,5,3);
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
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,5,3);
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
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,5,2);
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
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,5,2);
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
	MR_init_entry1(__Unify___backend_libs__switch_util__stag_goal_list_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___backend_libs__switch_util__stag_goal_list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(pair, pair, 2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__switch_util_module40)
	MR_init_entry1(__Compare___backend_libs__switch_util__stag_goal_list_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___backend_libs__switch_util__stag_goal_list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(pair, pair, 2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_np_tailcall_ent(__Compare___list__list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__switch_util_module41)
	MR_init_entry1(__Unify___backend_libs__switch_util__stag_goal_map_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___backend_libs__switch_util__stag_goal_map_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__switch_util_module42)
	MR_init_entry1(__Compare___backend_libs__switch_util__stag_goal_map_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___backend_libs__switch_util__stag_goal_map_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__unify_2_0);

MR_BEGIN_MODULE(backend_libs__switch_util_module43)
	MR_init_entry1(__Unify___backend_libs__switch_util__string_hash_slot_1_0);
	MR_init_label2(__Unify___backend_libs__switch_util__string_hash_slot_1_0,6,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___backend_libs__switch_util__string_hash_slot_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___backend_libs__switch_util__string_hash_slot_1_0_i6);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r1;
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___backend_libs__switch_util__string_hash_slot_1_0_i1);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 1);
	if ((strcmp((char *) (MR_Word *) MR_tempr3, (char *) (MR_Word *) MR_tempr4) != 0)) {
		MR_GOTO_LAB(__Unify___backend_libs__switch_util__string_hash_slot_1_0_i1);
	}
	MR_r2 = MR_ctfield(0, MR_tempr1, 2);
	MR_r3 = MR_ctfield(0, MR_tempr2, 2);
	MR_decr_sp(4);
	MR_np_tailcall_ent(builtin__unify_2_0);
	}
MR_def_label(__Unify___backend_libs__switch_util__string_hash_slot_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___backend_libs__switch_util__string_hash_slot_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_string_3_0);
MR_decl_entry(builtin__compare_3_0);

MR_BEGIN_MODULE(backend_libs__switch_util_module44)
	MR_init_entry1(__Compare___backend_libs__switch_util__string_hash_slot_1_0);
	MR_init_label5(__Compare___backend_libs__switch_util__string_hash_slot_1_0,3,2,5,9,29)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___backend_libs__switch_util__string_hash_slot_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___backend_libs__switch_util__string_hash_slot_1_0_i3);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(5) = MR_r1;
	MR_GOTO_LAB(__Compare___backend_libs__switch_util__string_hash_slot_1_0_i2);
MR_def_label(__Compare___backend_libs__switch_util__string_hash_slot_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___backend_libs__switch_util__string_hash_slot_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(4) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
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
		__Compare___backend_libs__switch_util__string_hash_slot_1_0_i5);
MR_def_label(__Compare___backend_libs__switch_util__string_hash_slot_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___backend_libs__switch_util__string_hash_slot_1_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___backend_libs__switch_util__string_hash_slot_1_0_i9);
MR_def_label(__Compare___backend_libs__switch_util__string_hash_slot_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___backend_libs__switch_util__string_hash_slot_1_0_i29);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(builtin__compare_3_0);
MR_def_label(__Compare___backend_libs__switch_util__string_hash_slot_1_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__switch_util_module45)
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


MR_BEGIN_MODULE(backend_libs__switch_util_module46)
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


MR_BEGIN_MODULE(backend_libs__switch_util_module47)
	MR_init_entry1(backend_libs__switch_util__IntroducedFrom__pred__group_case_by_ptag__709__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__switch_util__IntroducedFrom__pred__group_case_by_ptag__709__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r2 == MR_r1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__switch_util_module48)
	MR_init_entry1(backend_libs__switch_util__IntroducedFrom__pred__group_case_by_ptag__694__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__switch_util__IntroducedFrom__pred__group_case_by_ptag__694__1_2_0)
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
	backend_libs__switch_util_module43();
	backend_libs__switch_util_module44();
	backend_libs__switch_util_module45();
	backend_libs__switch_util_module46();
	backend_libs__switch_util_module47();
	backend_libs__switch_util_module48();
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
		mercury_data_backend_libs__switch_util__type_ctor_info_string_hash_slot_1,
		backend_libs__switch_util__string_hash_slot_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_backend_libs__switch_util__type_ctor_info_stag_goal_map_1,
		backend_libs__switch_util__stag_goal_map_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_backend_libs__switch_util__type_ctor_info_stag_goal_list_1,
		backend_libs__switch_util__stag_goal_list_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_backend_libs__switch_util__type_ctor_info_ptag_count_map_0,
		backend_libs__switch_util__ptag_count_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_backend_libs__switch_util__type_ctor_info_ptag_count_list_0,
		backend_libs__switch_util__ptag_count_list_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_backend_libs__switch_util__type_ctor_info_ptag_case_map_1,
		backend_libs__switch_util__ptag_case_map_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_backend_libs__switch_util__type_ctor_info_ptag_case_list_1,
		backend_libs__switch_util__ptag_case_list_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_backend_libs__switch_util__type_ctor_info_ptag_case_1,
		backend_libs__switch_util__ptag_case_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_backend_libs__switch_util__type_ctor_info_maybe_int_switch_info_0,
		backend_libs__switch_util__maybe_int_switch_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_backend_libs__switch_util__type_ctor_info_is_int_switch_0,
		backend_libs__switch_util__is_int_switch_0_0);
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
		&mercury_data_backend_libs__switch_util__type_ctor_info_string_hash_slot_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_backend_libs__switch_util__type_ctor_info_stag_goal_map_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_backend_libs__switch_util__type_ctor_info_stag_goal_list_1);
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
		&mercury_data_backend_libs__switch_util__type_ctor_info_ptag_case_map_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_backend_libs__switch_util__type_ctor_info_ptag_case_list_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_backend_libs__switch_util__type_ctor_info_ptag_case_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_backend_libs__switch_util__type_ctor_info_maybe_int_switch_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_backend_libs__switch_util__type_ctor_info_is_int_switch_0);
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
