/*
** Automatically generated from `from_ground_term_util.m'
** by the Mercury compiler,
** version rotd-2012-06-11, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__hlds__from_ground_term_util__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "hlds.from_ground_term_util.c"
#line 150 "../library/io.int2"
#include "time.mh"

#line 32 "hlds.from_ground_term_util.c"
#line 151 "../library/io.int2"
#include "string.mh"

#line 36 "hlds.from_ground_term_util.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 40 "hlds.from_ground_term_util.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "hlds.from_ground_term_util.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "hlds.from_ground_term_util.c"
#line 49 "hlds.from_ground_term_util.c"
#include "hlds.from_ground_term_util.mh"

#line 52 "hlds.from_ground_term_util.c"
#line 53 "hlds.from_ground_term_util.c"
#ifndef HLDS__FROM_GROUND_TERM_UTIL_DECL_GUARD
#define HLDS__FROM_GROUND_TERM_UTIL_DECL_GUARD

#line 57 "hlds.from_ground_term_util.c"
#line 58 "hlds.from_ground_term_util.c"

#endif
#line 61 "hlds.from_ground_term_util.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_0 {
	MR_Word * f1[2];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_1 {
	MR_Word * f1[3];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_2 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_3 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_4 {
	MR_Integer f1;
	MR_Word * f2;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_hlds__from_ground_term_util__type_ctor_info_fgt_build_info_0,
	mercury_data_hlds__from_ground_term_util__type_ctor_info_fgt_build_info_map_0,
	mercury_data_hlds__from_ground_term_util__type_ctor_info_fgt_invariants_status_0,
	mercury_data_hlds__from_ground_term_util__type_ctor_info_fgt_marked_goal_0,
	mercury_data_hlds__from_ground_term_util__type_ctor_info_goal_order_0,
	mercury_data_hlds__from_ground_term_util__type_ctor_info_maybe_kept_0,
	mercury_data_hlds__from_ground_term_util__type_ctor_info_maybe_kept_goal_info_0;
MR_decl_label10(hlds__from_ground_term_util__introduce_partial_fgt_scopes_5_0, 2,3,4,6,7,8,12,10,9,17)
MR_decl_label1(hlds__from_ground_term_util__introduce_partial_fgt_scopes_5_0, 16)
MR_decl_label10(hlds__from_ground_term_util__introduce_partial_fgt_scopes_loop_4_0, 48,3,6,5,8,9,12,13,11,4)
MR_decl_label3(hlds__from_ground_term_util__introduce_partial_fgt_scopes_loop_4_0, 16,19,21)
MR_decl_label5(hlds__from_ground_term_util__lookup_and_remove_arg_vars_9_0, 22,3,4,6,7)
MR_decl_label10(hlds__from_ground_term_util__lookup_and_remove_arg_vars_insert_fgt_6_0, 69,3,4,6,8,7,11,14,15,16)
MR_decl_label5(hlds__from_ground_term_util__lookup_and_remove_arg_vars_insert_fgt_6_0, 20,27,12,5,30)
MR_decl_label1(hlds__from_ground_term_util__project_kept_goal_2_0, 3)
MR_decl_label3(__Unify___hlds__from_ground_term_util__fgt_build_info_0_0, 4,8,1)
MR_decl_label7(__Unify___hlds__from_ground_term_util__fgt_marked_goal_0_0, 7,9,26,5,14,16,1)
MR_decl_label3(__Unify___hlds__from_ground_term_util__maybe_kept_goal_info_0_0, 12,5,1)
MR_decl_label4(__Compare___hlds__from_ground_term_util__fgt_build_info_0_0, 3,2,5,27)
MR_decl_label10(__Compare___hlds__from_ground_term_util__fgt_marked_goal_0_0, 3,2,9,13,7,5,20,22,26,88)
MR_decl_label6(__Compare___hlds__from_ground_term_util__maybe_kept_goal_info_0_0, 24,7,5,9,11,16)
MR_def_extern_entry(hlds__from_ground_term_util__project_kept_goal_2_0)
MR_decl_static(hlds__from_ground_term_util__lookup_and_remove_arg_vars_9_0)
MR_decl_static(hlds__from_ground_term_util__lookup_and_remove_arg_vars_insert_fgt_6_0)
MR_decl_static(hlds__from_ground_term_util__introduce_partial_fgt_scopes_loop_4_0)
MR_def_extern_entry(hlds__from_ground_term_util__introduce_partial_fgt_scopes_5_0)
MR_decl_static(hlds__from_ground_term_util__project_build_info_goal_cord_2_0)
MR_def_extern_entry(__Unify___hlds__from_ground_term_util__fgt_build_info_0_0)
MR_def_extern_entry(__Compare___hlds__from_ground_term_util__fgt_build_info_0_0)
MR_def_extern_entry(__Unify___hlds__from_ground_term_util__fgt_build_info_map_0_0)
MR_def_extern_entry(__Compare___hlds__from_ground_term_util__fgt_build_info_map_0_0)
MR_def_extern_entry(__Unify___hlds__from_ground_term_util__fgt_invariants_status_0_0)
MR_def_extern_entry(__Compare___hlds__from_ground_term_util__fgt_invariants_status_0_0)
MR_def_extern_entry(__Unify___hlds__from_ground_term_util__fgt_marked_goal_0_0)
MR_def_extern_entry(__Compare___hlds__from_ground_term_util__fgt_marked_goal_0_0)
MR_def_extern_entry(__Unify___hlds__from_ground_term_util__goal_order_0_0)
MR_def_extern_entry(__Compare___hlds__from_ground_term_util__goal_order_0_0)
MR_decl_static(__Unify___hlds__from_ground_term_util__maybe_kept_0_0)
MR_decl_static(__Compare___hlds__from_ground_term_util__maybe_kept_0_0)
MR_decl_static(__Unify___hlds__from_ground_term_util__maybe_kept_goal_info_0_0)
MR_decl_static(__Compare___hlds__from_ground_term_util__maybe_kept_goal_info_0_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_cord__type_ctor_info_cord_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
static const struct mercury_type_0 mercury_common_0[4] =
{
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_CTOR1_ADDR(cord, cord),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_TAG_COMMON(0,0,0)
}
},
{
{
MR_CTOR1_ADDR(cord, cord),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
static const struct mercury_type_1 mercury_common_1[1] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_TAG_COMMON(0,0,0),
MR_CTOR0_ADDR(hlds__from_ground_term_util, fgt_build_info)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__from_ground_term_util__introduce_partial_fgt_scopes_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__from_ground_term_util__type_ctor_info_fgt_build_info_0;
static const struct mercury_type_2 mercury_common_2[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__from_ground_term_util__introduce_partial_fgt_scopes_5_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__from_ground_term_util, fgt_build_info),
MR_COMMON(0,3)
},
};

static const struct mercury_type_3 mercury_common_3[1] =
{
{
MR_COMMON(2,0),
MR_ENTRY_AP(hlds__from_ground_term_util__project_build_info_goal_cord_2_0),
0
},
};

static const struct mercury_type_4 mercury_common_4[1] =
{
{
1,
MR_tbmkword(0, 0)
},
};

static const MR_FA_TypeInfo_Struct1 mercury_data_cord__ti_cord_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
	&mercury_data_cord__type_ctor_info_cord_1,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__from_ground_term_util__type_ctor_info_maybe_kept_goal_info_0;

const MR_PseudoTypeInfo mercury_data_hlds__from_ground_term_util__field_types_fgt_build_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__from_ground_term_util__type_ctor_info_maybe_kept_goal_info_0,
	(MR_PseudoTypeInfo) &mercury_data_cord__ti_cord_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

static const MR_DuFunctorDesc mercury_data_hlds__from_ground_term_util__du_functor_desc_fgt_build_info_0_0 = {
	"fgt_build_info",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_hlds__from_ground_term_util__field_types_fgt_build_info_0_0,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_hlds__from_ground_term_util__du_stag_ordered_fgt_build_info_0_0[] = {
	&mercury_data_hlds__from_ground_term_util__du_functor_desc_fgt_build_info_0_0

};

const MR_DuPtagLayout mercury_data_hlds__from_ground_term_util__du_ptag_ordered_fgt_build_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_hlds__from_ground_term_util__du_stag_ordered_fgt_build_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_hlds__from_ground_term_util__du_name_ordered_fgt_build_info_0[] = {
	&mercury_data_hlds__from_ground_term_util__du_functor_desc_fgt_build_info_0_0
};

const MR_Integer mercury_data_hlds__from_ground_term_util__functor_number_map_fgt_build_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_hlds__from_ground_term_util__type_ctor_info_fgt_build_info_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__from_ground_term_util__fgt_build_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__from_ground_term_util__fgt_build_info_0_0)),
	"hlds.from_ground_term_util",
	"fgt_build_info",
	{ (void *)mercury_data_hlds__from_ground_term_util__du_name_ordered_fgt_build_info_0 },
	{ (void *)mercury_data_hlds__from_ground_term_util__du_ptag_ordered_fgt_build_info_0 },
	1,
	4,
	mercury_data_hlds__from_ground_term_util__functor_number_map_fgt_build_info_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__from_ground_term_util__type_ctor_info_fgt_build_info_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__from_ground_term_util__type_ctor_info_fgt_build_info_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_hlds__from_ground_term_util__type_ctor_info_fgt_build_info_0
}};

const MR_TypeCtorInfo_Struct mercury_data_hlds__from_ground_term_util__type_ctor_info_fgt_build_info_map_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__from_ground_term_util__fgt_build_info_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__from_ground_term_util__fgt_build_info_map_0_0)),
	"hlds.from_ground_term_util",
	"fgt_build_info_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__from_ground_term_util__type_ctor_info_fgt_build_info_0 },
	-1,
	0,
	NULL
};

static const MR_EnumFunctorDesc mercury_data_hlds__from_ground_term_util__enum_functor_desc_fgt_invariants_status_0_0 = {
	"fgt_invariants_kept",
	0
};

static const MR_EnumFunctorDesc mercury_data_hlds__from_ground_term_util__enum_functor_desc_fgt_invariants_status_0_1 = {
	"fgt_invariants_broken",
	1
};

const MR_EnumFunctorDescPtr mercury_data_hlds__from_ground_term_util__enum_value_ordered_fgt_invariants_status_0[] = {
	&mercury_data_hlds__from_ground_term_util__enum_functor_desc_fgt_invariants_status_0_0,
	&mercury_data_hlds__from_ground_term_util__enum_functor_desc_fgt_invariants_status_0_1
};

const MR_EnumFunctorDescPtr mercury_data_hlds__from_ground_term_util__enum_name_ordered_fgt_invariants_status_0[] = {
	&mercury_data_hlds__from_ground_term_util__enum_functor_desc_fgt_invariants_status_0_1,
	&mercury_data_hlds__from_ground_term_util__enum_functor_desc_fgt_invariants_status_0_0
};

const MR_Integer mercury_data_hlds__from_ground_term_util__functor_number_map_fgt_invariants_status_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_hlds__from_ground_term_util__type_ctor_info_fgt_invariants_status_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__from_ground_term_util__fgt_invariants_status_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__from_ground_term_util__fgt_invariants_status_0_0)),
	"hlds.from_ground_term_util",
	"fgt_invariants_status",
	{ (void *)mercury_data_hlds__from_ground_term_util__enum_name_ordered_fgt_invariants_status_0 },
	{ (void *)mercury_data_hlds__from_ground_term_util__enum_value_ordered_fgt_invariants_status_0 },
	2,
	4,
	mercury_data_hlds__from_ground_term_util__functor_number_map_fgt_invariants_status_0
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

const MR_PseudoTypeInfo mercury_data_hlds__from_ground_term_util__field_types_fgt_marked_goal_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0,
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_DuFunctorDesc mercury_data_hlds__from_ground_term_util__du_functor_desc_fgt_marked_goal_0_0 = {
	"fgt_kept_goal",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_hlds__from_ground_term_util__field_types_fgt_marked_goal_0_0,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_hlds__from_ground_term_util__field_types_fgt_marked_goal_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0,
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_DuFunctorDesc mercury_data_hlds__from_ground_term_util__du_functor_desc_fgt_marked_goal_0_1 = {
	"fgt_broken_goal",
	3,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_hlds__from_ground_term_util__field_types_fgt_marked_goal_0_1,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_hlds__from_ground_term_util__du_stag_ordered_fgt_marked_goal_0_0[] = {
	&mercury_data_hlds__from_ground_term_util__du_functor_desc_fgt_marked_goal_0_0

};

const MR_DuFunctorDescPtr mercury_data_hlds__from_ground_term_util__du_stag_ordered_fgt_marked_goal_0_1[] = {
	&mercury_data_hlds__from_ground_term_util__du_functor_desc_fgt_marked_goal_0_1

};

const MR_DuPtagLayout mercury_data_hlds__from_ground_term_util__du_ptag_ordered_fgt_marked_goal_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_hlds__from_ground_term_util__du_stag_ordered_fgt_marked_goal_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_hlds__from_ground_term_util__du_stag_ordered_fgt_marked_goal_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_hlds__from_ground_term_util__du_name_ordered_fgt_marked_goal_0[] = {
	&mercury_data_hlds__from_ground_term_util__du_functor_desc_fgt_marked_goal_0_1,
	&mercury_data_hlds__from_ground_term_util__du_functor_desc_fgt_marked_goal_0_0
};

const MR_Integer mercury_data_hlds__from_ground_term_util__functor_number_map_fgt_marked_goal_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_hlds__from_ground_term_util__type_ctor_info_fgt_marked_goal_0 = {
	0,
	15,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__from_ground_term_util__fgt_marked_goal_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__from_ground_term_util__fgt_marked_goal_0_0)),
	"hlds.from_ground_term_util",
	"fgt_marked_goal",
	{ (void *)mercury_data_hlds__from_ground_term_util__du_name_ordered_fgt_marked_goal_0 },
	{ (void *)mercury_data_hlds__from_ground_term_util__du_ptag_ordered_fgt_marked_goal_0 },
	2,
	4,
	mercury_data_hlds__from_ground_term_util__functor_number_map_fgt_marked_goal_0
};

static const MR_EnumFunctorDesc mercury_data_hlds__from_ground_term_util__enum_functor_desc_goal_order_0_0 = {
	"construct_bottom_up",
	0
};

static const MR_EnumFunctorDesc mercury_data_hlds__from_ground_term_util__enum_functor_desc_goal_order_0_1 = {
	"deconstruct_top_down",
	1
};

const MR_EnumFunctorDescPtr mercury_data_hlds__from_ground_term_util__enum_value_ordered_goal_order_0[] = {
	&mercury_data_hlds__from_ground_term_util__enum_functor_desc_goal_order_0_0,
	&mercury_data_hlds__from_ground_term_util__enum_functor_desc_goal_order_0_1
};

const MR_EnumFunctorDescPtr mercury_data_hlds__from_ground_term_util__enum_name_ordered_goal_order_0[] = {
	&mercury_data_hlds__from_ground_term_util__enum_functor_desc_goal_order_0_0,
	&mercury_data_hlds__from_ground_term_util__enum_functor_desc_goal_order_0_1
};

const MR_Integer mercury_data_hlds__from_ground_term_util__functor_number_map_goal_order_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_hlds__from_ground_term_util__type_ctor_info_goal_order_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__from_ground_term_util__goal_order_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__from_ground_term_util__goal_order_0_0)),
	"hlds.from_ground_term_util",
	"goal_order",
	{ (void *)mercury_data_hlds__from_ground_term_util__enum_name_ordered_goal_order_0 },
	{ (void *)mercury_data_hlds__from_ground_term_util__enum_value_ordered_goal_order_0 },
	2,
	4,
	mercury_data_hlds__from_ground_term_util__functor_number_map_goal_order_0
};

static const MR_EnumFunctorDesc mercury_data_hlds__from_ground_term_util__enum_functor_desc_maybe_kept_0_0 = {
	"kept",
	0
};

static const MR_EnumFunctorDesc mercury_data_hlds__from_ground_term_util__enum_functor_desc_maybe_kept_0_1 = {
	"broken",
	1
};

const MR_EnumFunctorDescPtr mercury_data_hlds__from_ground_term_util__enum_value_ordered_maybe_kept_0[] = {
	&mercury_data_hlds__from_ground_term_util__enum_functor_desc_maybe_kept_0_0,
	&mercury_data_hlds__from_ground_term_util__enum_functor_desc_maybe_kept_0_1
};

const MR_EnumFunctorDescPtr mercury_data_hlds__from_ground_term_util__enum_name_ordered_maybe_kept_0[] = {
	&mercury_data_hlds__from_ground_term_util__enum_functor_desc_maybe_kept_0_1,
	&mercury_data_hlds__from_ground_term_util__enum_functor_desc_maybe_kept_0_0
};

const MR_Integer mercury_data_hlds__from_ground_term_util__functor_number_map_maybe_kept_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_hlds__from_ground_term_util__type_ctor_info_maybe_kept_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__from_ground_term_util__maybe_kept_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__from_ground_term_util__maybe_kept_0_0)),
	"hlds.from_ground_term_util",
	"maybe_kept",
	{ (void *)mercury_data_hlds__from_ground_term_util__enum_name_ordered_maybe_kept_0 },
	{ (void *)mercury_data_hlds__from_ground_term_util__enum_value_ordered_maybe_kept_0 },
	2,
	4,
	mercury_data_hlds__from_ground_term_util__functor_number_map_maybe_kept_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_info_0;

const MR_PseudoTypeInfo mercury_data_hlds__from_ground_term_util__field_types_maybe_kept_goal_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_info_0
};

const MR_ConstString mercury_data_hlds__from_ground_term_util__field_names_maybe_kept_goal_info_0_0[] = {
	"mkgi_size",
	"mkgi_old_goal_info"
};

static const MR_DuFunctorDesc mercury_data_hlds__from_ground_term_util__du_functor_desc_maybe_kept_goal_info_0_0 = {
	"kept_old_gi",
	2,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_hlds__from_ground_term_util__field_types_maybe_kept_goal_info_0_0,
	mercury_data_hlds__from_ground_term_util__field_names_maybe_kept_goal_info_0_0,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_hlds__from_ground_term_util__du_functor_desc_maybe_kept_goal_info_0_1 = {
	"broken_no_gi",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	1,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_hlds__from_ground_term_util__du_stag_ordered_maybe_kept_goal_info_0_0[] = {
	&mercury_data_hlds__from_ground_term_util__du_functor_desc_maybe_kept_goal_info_0_1

};

const MR_DuFunctorDescPtr mercury_data_hlds__from_ground_term_util__du_stag_ordered_maybe_kept_goal_info_0_1[] = {
	&mercury_data_hlds__from_ground_term_util__du_functor_desc_maybe_kept_goal_info_0_0

};

const MR_DuPtagLayout mercury_data_hlds__from_ground_term_util__du_ptag_ordered_maybe_kept_goal_info_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_hlds__from_ground_term_util__du_stag_ordered_maybe_kept_goal_info_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_hlds__from_ground_term_util__du_stag_ordered_maybe_kept_goal_info_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_hlds__from_ground_term_util__du_name_ordered_maybe_kept_goal_info_0[] = {
	&mercury_data_hlds__from_ground_term_util__du_functor_desc_maybe_kept_goal_info_0_1,
	&mercury_data_hlds__from_ground_term_util__du_functor_desc_maybe_kept_goal_info_0_0
};

const MR_Integer mercury_data_hlds__from_ground_term_util__functor_number_map_maybe_kept_goal_info_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_hlds__from_ground_term_util__type_ctor_info_maybe_kept_goal_info_0 = {
	0,
	15,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__from_ground_term_util__maybe_kept_goal_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__from_ground_term_util__maybe_kept_goal_info_0_0)),
	"hlds.from_ground_term_util",
	"maybe_kept_goal_info",
	{ (void *)mercury_data_hlds__from_ground_term_util__du_name_ordered_maybe_kept_goal_info_0 },
	{ (void *)mercury_data_hlds__from_ground_term_util__du_ptag_ordered_maybe_kept_goal_info_0 },
	2,
	4,
	mercury_data_hlds__from_ground_term_util__functor_number_map_maybe_kept_goal_info_0
};


static const MR_UserClosureId
mercury_data__closure_layout__hlds__from_ground_term_util__introduce_partial_fgt_scopes_5_0_1 = {
{
MR_PREDICATE,
"hlds.from_ground_term_util",
"hlds.from_ground_term_util",
"project_build_info_goal_cord",
2,
0
},
"hlds.from_ground_term_util",
"from_ground_term_util.m",
180,
"10"
};


MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(hlds__from_ground_term_util_module0)
	MR_init_entry1(hlds__from_ground_term_util__project_kept_goal_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__from_ground_term_util__project_kept_goal_2_0);
	MR_init_label1(hlds__from_ground_term_util__project_kept_goal_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'project_kept_goal'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__from_ground_term_util__project_kept_goal_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(hlds__from_ground_term_util__project_kept_goal_2_0_i3);
	}
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_proceed();
MR_def_label(hlds__from_ground_term_util__project_kept_goal_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.from_ground_term_util", 26);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.from_ground_term_util.project_kept_goal\'/2", 58);
	MR_r3 = (MR_Word) MR_string_const("broken goal", 11);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__det_remove_4_0);
MR_decl_entry(fn__f_99_111_114_100_95_95_43_43_2_0);

MR_BEGIN_MODULE(hlds__from_ground_term_util_module1)
	MR_init_entry1(hlds__from_ground_term_util__lookup_and_remove_arg_vars_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__from_ground_term_util__lookup_and_remove_arg_vars_9_0);
	MR_init_label5(hlds__from_ground_term_util__lookup_and_remove_arg_vars_9_0,22,3,4,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_and_remove_arg_vars'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__from_ground_term_util__lookup_and_remove_arg_vars_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(hlds__from_ground_term_util__lookup_and_remove_arg_vars_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__from_ground_term_util__lookup_and_remove_arg_vars_9_0_i3);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_decr_sp_and_return(5);
MR_def_label(hlds__from_ground_term_util__lookup_and_remove_arg_vars_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__from_ground_term_util, fgt_build_info);
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	MR_r4 = MR_r5;
	}
	MR_np_call_localret_ent(map__det_remove_4_0,
		hlds__from_ground_term_util__lookup_and_remove_arg_vars_9_0_i4);
MR_def_label(hlds__from_ground_term_util__lookup_and_remove_arg_vars_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(0, MR_r1, 0);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(hlds__from_ground_term_util__lookup_and_remove_arg_vars_9_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tfield(0, MR_r1, 1);
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = (MR_Integer) 1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		hlds__from_ground_term_util__lookup_and_remove_arg_vars_9_0_i7);
MR_def_label(hlds__from_ground_term_util__lookup_and_remove_arg_vars_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tfield(0, MR_r1, 1);
	MR_sv(2) = MR_tempr1;
	MR_sv(4) = ((MR_Integer) MR_sv(4) + (MR_Integer) MR_tfield(1, MR_r4, 0));
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		hlds__from_ground_term_util__lookup_and_remove_arg_vars_9_0_i7);
MR_def_label(hlds__from_ground_term_util__lookup_and_remove_arg_vars_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(hlds__from_ground_term_util__lookup_and_remove_arg_vars_9_0_i22);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(cord__is_empty_1_0);
MR_decl_entry(fn__libs__globals__get_maybe_from_ground_term_threshold_0_0);
MR_decl_entry(fn__parse_tree__set_of_var__make_singleton_1_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_nonlocals_3_0);
MR_decl_entry(fn__cord__list_1_0);
MR_decl_entry(fn__cord__singleton_1_0);

MR_BEGIN_MODULE(hlds__from_ground_term_util_module2)
	MR_init_entry1(hlds__from_ground_term_util__lookup_and_remove_arg_vars_insert_fgt_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__from_ground_term_util__lookup_and_remove_arg_vars_insert_fgt_6_0);
	MR_init_label10(hlds__from_ground_term_util__lookup_and_remove_arg_vars_insert_fgt_6_0,69,3,4,6,8,7,11,14,15,16)
	MR_init_label5(hlds__from_ground_term_util__lookup_and_remove_arg_vars_insert_fgt_6_0,20,27,12,5,30)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_and_remove_arg_vars_insert_fgt'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__from_ground_term_util__lookup_and_remove_arg_vars_insert_fgt_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(hlds__from_ground_term_util__lookup_and_remove_arg_vars_insert_fgt_6_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__from_ground_term_util__lookup_and_remove_arg_vars_insert_fgt_6_0_i3);
	}
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_decr_sp_and_return(9);
MR_def_label(hlds__from_ground_term_util__lookup_and_remove_arg_vars_insert_fgt_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_r1, 0);
	MR_sv(4) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__from_ground_term_util, fgt_build_info);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(map__det_remove_4_0,
		hlds__from_ground_term_util__lookup_and_remove_arg_vars_insert_fgt_6_0_i4);
MR_def_label(hlds__from_ground_term_util__lookup_and_remove_arg_vars_insert_fgt_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(0, MR_r1, 0);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(hlds__from_ground_term_util__lookup_and_remove_arg_vars_insert_fgt_6_0_i6);
	}
	MR_sv(7) = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tfield(0, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		hlds__from_ground_term_util__lookup_and_remove_arg_vars_insert_fgt_6_0_i30);
MR_def_label(hlds__from_ground_term_util__lookup_and_remove_arg_vars_insert_fgt_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(5) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(8) = MR_tfield(1, MR_tempr2, 0);
	MR_tempr1 = MR_tfield(0, MR_r1, 1);
	MR_sv(6) = MR_tempr1;
	MR_sv(7) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(cord__is_empty_1_0,
		hlds__from_ground_term_util__lookup_and_remove_arg_vars_insert_fgt_6_0_i8);
MR_def_label(hlds__from_ground_term_util__lookup_and_remove_arg_vars_insert_fgt_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__from_ground_term_util__lookup_and_remove_arg_vars_insert_fgt_6_0_i7);
	}
	MR_r1 = (MR_Word) MR_string_const("hlds.from_ground_term_util", 26);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.from_ground_term_util.lookup_and_remove_arg_vars_insert_fgt\'/6", 78);
	MR_r3 = (MR_Word) MR_string_const("VarGoalCord0 is empty", 21);
	MR_np_call_localret_ent(require__unexpected_3_0,
		hlds__from_ground_term_util__lookup_and_remove_arg_vars_insert_fgt_6_0_i5);
MR_def_label(hlds__from_ground_term_util__lookup_and_remove_arg_vars_insert_fgt_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__libs__globals__get_maybe_from_ground_term_threshold_0_0,
		hlds__from_ground_term_util__lookup_and_remove_arg_vars_insert_fgt_6_0_i11);
MR_def_label(hlds__from_ground_term_util__lookup_and_remove_arg_vars_insert_fgt_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__from_ground_term_util__lookup_and_remove_arg_vars_insert_fgt_6_0_i12);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	if (((MR_Integer) MR_sv(8) < (MR_Integer) MR_tempr1)) {
		MR_GOTO_LAB(hlds__from_ground_term_util__lookup_and_remove_arg_vars_insert_fgt_6_0_i12);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__make_singleton_1_0,
		hlds__from_ground_term_util__lookup_and_remove_arg_vars_insert_fgt_6_0_i14);
MR_def_label(hlds__from_ground_term_util__lookup_and_remove_arg_vars_insert_fgt_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_nonlocals_3_0,
		hlds__from_ground_term_util__lookup_and_remove_arg_vars_insert_fgt_6_0_i15);
MR_def_label(hlds__from_ground_term_util__lookup_and_remove_arg_vars_insert_fgt_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__list_1_0,
		hlds__from_ground_term_util__lookup_and_remove_arg_vars_insert_fgt_6_0_i16);
MR_def_label(hlds__from_ground_term_util__lookup_and_remove_arg_vars_insert_fgt_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tempr4 = MR_sv(6);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr4;
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(hlds__from_ground_term_util__lookup_and_remove_arg_vars_insert_fgt_6_0_i20);
	}
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr3, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr3;
	MR_tfield(0, MR_r2, 1) = MR_tempr4;
	MR_r1 = MR_sv(8);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		hlds__from_ground_term_util__lookup_and_remove_arg_vars_insert_fgt_6_0_i27);
MR_def_label(hlds__from_ground_term_util__lookup_and_remove_arg_vars_insert_fgt_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 2) = MR_r4;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr2;
	MR_tfield(0, MR_r2, 1) = MR_sv(6);
	MR_r1 = MR_sv(8);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		hlds__from_ground_term_util__lookup_and_remove_arg_vars_insert_fgt_6_0_i27);
MR_def_label(hlds__from_ground_term_util__lookup_and_remove_arg_vars_insert_fgt_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		hlds__from_ground_term_util__lookup_and_remove_arg_vars_insert_fgt_6_0_i30);
MR_def_label(hlds__from_ground_term_util__lookup_and_remove_arg_vars_insert_fgt_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
MR_def_label(hlds__from_ground_term_util__lookup_and_remove_arg_vars_insert_fgt_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		hlds__from_ground_term_util__lookup_and_remove_arg_vars_insert_fgt_6_0_i30);
MR_def_label(hlds__from_ground_term_util__lookup_and_remove_arg_vars_insert_fgt_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(7);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(hlds__from_ground_term_util__lookup_and_remove_arg_vars_insert_fgt_6_0_i69);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__cord__init_0_0);
MR_decl_entry(fn__cord__snoc_2_0);
MR_decl_entry(fn__cord__cons_2_0);
MR_decl_entry(map__det_insert_4_0);

MR_BEGIN_MODULE(hlds__from_ground_term_util_module3)
	MR_init_entry1(hlds__from_ground_term_util__introduce_partial_fgt_scopes_loop_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__from_ground_term_util__introduce_partial_fgt_scopes_loop_4_0);
	MR_init_label10(hlds__from_ground_term_util__introduce_partial_fgt_scopes_loop_4_0,48,3,6,5,8,9,12,13,11,4)
	MR_init_label3(hlds__from_ground_term_util__introduce_partial_fgt_scopes_loop_4_0,16,19,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'introduce_partial_fgt_scopes_loop'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__from_ground_term_util__introduce_partial_fgt_scopes_loop_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(hlds__from_ground_term_util__introduce_partial_fgt_scopes_loop_4_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__from_ground_term_util__introduce_partial_fgt_scopes_loop_4_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(8);
MR_def_label(hlds__from_ground_term_util__introduce_partial_fgt_scopes_loop_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(hlds__from_ground_term_util__introduce_partial_fgt_scopes_loop_4_0_i5);
	}
	MR_sv(1) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_sv(5) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(6) = MR_tfield(1, MR_tempr1, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	}
	MR_np_call_localret_ent(fn__cord__init_0_0,
		hlds__from_ground_term_util__introduce_partial_fgt_scopes_loop_4_0_i6);
MR_def_label(hlds__from_ground_term_util__introduce_partial_fgt_scopes_loop_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__from_ground_term_util__lookup_and_remove_arg_vars_insert_fgt_6_0,
		hlds__from_ground_term_util__introduce_partial_fgt_scopes_loop_4_0_i13);
MR_def_label(hlds__from_ground_term_util__introduce_partial_fgt_scopes_loop_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(5) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r1 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__cord__init_0_0,
		hlds__from_ground_term_util__introduce_partial_fgt_scopes_loop_4_0_i8);
MR_def_label(hlds__from_ground_term_util__introduce_partial_fgt_scopes_loop_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 0;
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__from_ground_term_util__lookup_and_remove_arg_vars_9_0,
		hlds__from_ground_term_util__introduce_partial_fgt_scopes_loop_4_0_i9);
MR_def_label(hlds__from_ground_term_util__introduce_partial_fgt_scopes_loop_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(hlds__from_ground_term_util__introduce_partial_fgt_scopes_loop_4_0_i11);
	}
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__cord__init_0_0,
		hlds__from_ground_term_util__introduce_partial_fgt_scopes_loop_4_0_i12);
MR_def_label(hlds__from_ground_term_util__introduce_partial_fgt_scopes_loop_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__from_ground_term_util__lookup_and_remove_arg_vars_insert_fgt_6_0,
		hlds__from_ground_term_util__introduce_partial_fgt_scopes_loop_4_0_i13);
MR_def_label(hlds__from_ground_term_util__introduce_partial_fgt_scopes_loop_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(5);
	MR_r4 = MR_r2;
	MR_r2 = MR_r1;
	MR_sv(4) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(5) = MR_r4;
	MR_GOTO_LAB(hlds__from_ground_term_util__introduce_partial_fgt_scopes_loop_4_0_i4);
MR_def_label(hlds__from_ground_term_util__introduce_partial_fgt_scopes_loop_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(4) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = ((MR_Integer) MR_r3 + (MR_Integer) 1);
	MR_tempr2 = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_r3 = MR_tempr2;
	MR_r2 = MR_r1;
	MR_sv(5) = MR_r4;
	}
MR_def_label(hlds__from_ground_term_util__introduce_partial_fgt_scopes_loop_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(hlds__from_ground_term_util__introduce_partial_fgt_scopes_loop_4_0_i16);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_np_call_localret_ent(fn__cord__snoc_2_0,
		hlds__from_ground_term_util__introduce_partial_fgt_scopes_loop_4_0_i19);
MR_def_label(hlds__from_ground_term_util__introduce_partial_fgt_scopes_loop_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__cons_2_0,
		hlds__from_ground_term_util__introduce_partial_fgt_scopes_loop_4_0_i19);
MR_def_label(hlds__from_ground_term_util__introduce_partial_fgt_scopes_loop_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(5);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__from_ground_term_util, fgt_build_info);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		hlds__from_ground_term_util__introduce_partial_fgt_scopes_loop_4_0_i21);
MR_def_label(hlds__from_ground_term_util__introduce_partial_fgt_scopes_loop_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(hlds__from_ground_term_util__introduce_partial_fgt_scopes_loop_4_0_i48);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(map__values_2_0);
MR_decl_entry(list__map_3_0);
MR_decl_entry(fn__cord__cord_list_to_cord_1_0);
MR_decl_entry(hlds__hlds_goal__goal_info_has_feature_2_0);
MR_decl_entry(hlds__goal_util__attach_features_to_all_goals_4_0);

MR_BEGIN_MODULE(hlds__from_ground_term_util_module4)
	MR_init_entry1(hlds__from_ground_term_util__introduce_partial_fgt_scopes_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__from_ground_term_util__introduce_partial_fgt_scopes_5_0);
	MR_init_label10(hlds__from_ground_term_util__introduce_partial_fgt_scopes_5_0,2,3,4,6,7,8,12,10,9,17)
	MR_init_label1(hlds__from_ground_term_util__introduce_partial_fgt_scopes_5_0,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'introduce_partial_fgt_scopes'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__from_ground_term_util__introduce_partial_fgt_scopes_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(hlds__from_ground_term_util, fgt_build_info);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__map__init_0_0,
		hlds__from_ground_term_util__introduce_partial_fgt_scopes_5_0_i2);
MR_def_label(hlds__from_ground_term_util__introduce_partial_fgt_scopes_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__from_ground_term_util__introduce_partial_fgt_scopes_loop_4_0,
		hlds__from_ground_term_util__introduce_partial_fgt_scopes_5_0_i3);
MR_def_label(hlds__from_ground_term_util__introduce_partial_fgt_scopes_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__values_2_0,
		hlds__from_ground_term_util__introduce_partial_fgt_scopes_5_0_i4);
MR_def_label(hlds__from_ground_term_util__introduce_partial_fgt_scopes_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map_3_0,
		hlds__from_ground_term_util__introduce_partial_fgt_scopes_5_0_i6);
MR_def_label(hlds__from_ground_term_util__introduce_partial_fgt_scopes_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__cord_list_to_cord_1_0,
		hlds__from_ground_term_util__introduce_partial_fgt_scopes_5_0_i7);
MR_def_label(hlds__from_ground_term_util__introduce_partial_fgt_scopes_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__list_1_0,
		hlds__from_ground_term_util__introduce_partial_fgt_scopes_5_0_i8);
MR_def_label(hlds__from_ground_term_util__introduce_partial_fgt_scopes_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__from_ground_term_util__introduce_partial_fgt_scopes_5_0_i10);
	}
	MR_r4 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(hlds__from_ground_term_util__introduce_partial_fgt_scopes_5_0_i12);
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tfield(1, MR_r2, 0);
	MR_GOTO_LAB(hlds__from_ground_term_util__introduce_partial_fgt_scopes_5_0_i9);
MR_def_label(hlds__from_ground_term_util__introduce_partial_fgt_scopes_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r4 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(1);
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr2;
	MR_GOTO_LAB(hlds__from_ground_term_util__introduce_partial_fgt_scopes_5_0_i9);
	}
MR_def_label(hlds__from_ground_term_util__introduce_partial_fgt_scopes_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.from_ground_term_util", 26);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.from_ground_term_util.introduce_partial_fgt_scopes\'/5", 69);
	MR_r3 = (MR_Word) MR_string_const("BuildGoals = []", 15);
	MR_np_call_localret_ent(require__unexpected_3_0,
		hlds__from_ground_term_util__introduce_partial_fgt_scopes_5_0_i9);
MR_def_label(hlds__from_ground_term_util__introduce_partial_fgt_scopes_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_has_feature_2_0,
		hlds__from_ground_term_util__introduce_partial_fgt_scopes_5_0_i17);
MR_def_label(hlds__from_ground_term_util__introduce_partial_fgt_scopes_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__from_ground_term_util__introduce_partial_fgt_scopes_5_0_i16);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,4,0);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(hlds__goal_util__attach_features_to_all_goals_4_0);
MR_def_label(hlds__from_ground_term_util__introduce_partial_fgt_scopes_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__from_ground_term_util_module5)
	MR_init_entry1(hlds__from_ground_term_util__project_build_info_goal_cord_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__from_ground_term_util__project_build_info_goal_cord_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'project_build_info_goal_cord'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__from_ground_term_util__project_build_info_goal_cord_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__unify_2_0);

MR_BEGIN_MODULE(hlds__from_ground_term_util_module6)
	MR_init_entry1(__Unify___hlds__from_ground_term_util__fgt_build_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__from_ground_term_util__fgt_build_info_0_0);
	MR_init_label3(__Unify___hlds__from_ground_term_util__fgt_build_info_0_0,4,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___hlds__from_ground_term_util__fgt_build_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___hlds__from_ground_term_util__fgt_build_info_0_0_i8);
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
	MR_np_call_localret_ent(__Unify___hlds__from_ground_term_util__maybe_kept_goal_info_0_0,
		__Unify___hlds__from_ground_term_util__fgt_build_info_0_0_i4);
MR_def_label(__Unify___hlds__from_ground_term_util__fgt_build_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__from_ground_term_util__fgt_build_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(__Unify___hlds__from_ground_term_util__fgt_build_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___hlds__from_ground_term_util__fgt_build_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__compare_3_0);

MR_BEGIN_MODULE(hlds__from_ground_term_util_module7)
	MR_init_entry1(__Compare___hlds__from_ground_term_util__fgt_build_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__from_ground_term_util__fgt_build_info_0_0);
	MR_init_label4(__Compare___hlds__from_ground_term_util__fgt_build_info_0_0,3,2,5,27)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___hlds__from_ground_term_util__fgt_build_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___hlds__from_ground_term_util__fgt_build_info_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___hlds__from_ground_term_util__fgt_build_info_0_0_i2);
MR_def_label(__Compare___hlds__from_ground_term_util__fgt_build_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___hlds__from_ground_term_util__fgt_build_info_0_0,2)
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
	MR_np_call_localret_ent(__Compare___hlds__from_ground_term_util__maybe_kept_goal_info_0_0,
		__Compare___hlds__from_ground_term_util__fgt_build_info_0_0_i5);
MR_def_label(__Compare___hlds__from_ground_term_util__fgt_build_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__from_ground_term_util__fgt_build_info_0_0_i27);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(builtin__compare_3_0);
MR_def_label(__Compare___hlds__from_ground_term_util__fgt_build_info_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__from_ground_term_util_module8)
	MR_init_entry1(__Unify___hlds__from_ground_term_util__fgt_build_info_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__from_ground_term_util__fgt_build_info_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___hlds__from_ground_term_util__fgt_build_info_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(builtin__unify_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__from_ground_term_util_module9)
	MR_init_entry1(__Compare___hlds__from_ground_term_util__fgt_build_info_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__from_ground_term_util__fgt_build_info_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___hlds__from_ground_term_util__fgt_build_info_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(builtin__compare_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__from_ground_term_util_module10)
	MR_init_entry1(__Unify___hlds__from_ground_term_util__fgt_invariants_status_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__from_ground_term_util__fgt_invariants_status_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___hlds__from_ground_term_util__fgt_invariants_status_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(hlds__from_ground_term_util_module11)
	MR_init_entry1(__Compare___hlds__from_ground_term_util__fgt_invariants_status_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__from_ground_term_util__fgt_invariants_status_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___hlds__from_ground_term_util__fgt_invariants_status_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___hlds__hlds_goal__hlds_goal_0_0);

MR_BEGIN_MODULE(hlds__from_ground_term_util_module12)
	MR_init_entry1(__Unify___hlds__from_ground_term_util__fgt_marked_goal_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__from_ground_term_util__fgt_marked_goal_0_0);
	MR_init_label7(__Unify___hlds__from_ground_term_util__fgt_marked_goal_0_0,7,9,26,5,14,16,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___hlds__from_ground_term_util__fgt_marked_goal_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___hlds__from_ground_term_util__fgt_marked_goal_0_0_i26);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(__Unify___hlds__from_ground_term_util__fgt_marked_goal_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(__Unify___hlds__from_ground_term_util__fgt_marked_goal_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_tfield(1, MR_tempr3, 1);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_tfield(1, MR_tempr3, 2);
	MR_sv(3) = MR_tfield(1, MR_tempr4, 1);
	MR_sv(4) = MR_tfield(1, MR_tempr4, 2);
	MR_r1 = MR_tfield(1, MR_tempr3, 0);
	MR_r2 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_goal__hlds_goal_0_0,
		__Unify___hlds__from_ground_term_util__fgt_marked_goal_0_0_i7);
MR_def_label(__Unify___hlds__from_ground_term_util__fgt_marked_goal_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__from_ground_term_util__fgt_marked_goal_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___hlds__from_ground_term_util__fgt_marked_goal_0_0_i9);
MR_def_label(__Unify___hlds__from_ground_term_util__fgt_marked_goal_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__from_ground_term_util__fgt_marked_goal_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(__Unify___hlds__from_ground_term_util__fgt_marked_goal_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___hlds__from_ground_term_util__fgt_marked_goal_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___hlds__from_ground_term_util__fgt_marked_goal_0_0_i1);
	}
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
	MR_np_call_localret_ent(__Unify___hlds__hlds_goal__hlds_goal_0_0,
		__Unify___hlds__from_ground_term_util__fgt_marked_goal_0_0_i14);
MR_def_label(__Unify___hlds__from_ground_term_util__fgt_marked_goal_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__from_ground_term_util__fgt_marked_goal_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___hlds__from_ground_term_util__fgt_marked_goal_0_0_i16);
MR_def_label(__Unify___hlds__from_ground_term_util__fgt_marked_goal_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__from_ground_term_util__fgt_marked_goal_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(__Unify___hlds__from_ground_term_util__fgt_marked_goal_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___hlds__hlds_goal__hlds_goal_0_0);

MR_BEGIN_MODULE(hlds__from_ground_term_util_module13)
	MR_init_entry1(__Compare___hlds__from_ground_term_util__fgt_marked_goal_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__from_ground_term_util__fgt_marked_goal_0_0);
	MR_init_label10(__Compare___hlds__from_ground_term_util__fgt_marked_goal_0_0,3,2,9,13,7,5,20,22,26,88)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___hlds__from_ground_term_util__fgt_marked_goal_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___hlds__from_ground_term_util__fgt_marked_goal_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___hlds__from_ground_term_util__fgt_marked_goal_0_0_i2);
MR_def_label(__Compare___hlds__from_ground_term_util__fgt_marked_goal_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___hlds__from_ground_term_util__fgt_marked_goal_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___hlds__from_ground_term_util__fgt_marked_goal_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___hlds__from_ground_term_util__fgt_marked_goal_0_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(4) = MR_tfield(1, MR_tempr5, 1);
	MR_sv(3) = MR_tfield(1, MR_tempr5, 2);
	MR_tempr6 = MR_sv(2);
	MR_tempr1 = MR_tfield(1, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(1, MR_tempr3, 0);
	MR_r2 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___hlds__hlds_goal__hlds_goal_0_0,
		__Compare___hlds__from_ground_term_util__fgt_marked_goal_0_0_i9);
MR_def_label(__Compare___hlds__from_ground_term_util__fgt_marked_goal_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__from_ground_term_util__fgt_marked_goal_0_0_i88);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___hlds__from_ground_term_util__fgt_marked_goal_0_0_i13);
MR_def_label(__Compare___hlds__from_ground_term_util__fgt_marked_goal_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__from_ground_term_util__fgt_marked_goal_0_0_i88);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(builtin__compare_3_0);
MR_def_label(__Compare___hlds__from_ground_term_util__fgt_marked_goal_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___hlds__from_ground_term_util__fgt_marked_goal_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___hlds__from_ground_term_util__fgt_marked_goal_0_0_i20);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___hlds__from_ground_term_util__fgt_marked_goal_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(4) = MR_tfield(0, MR_tempr5, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr5, 2);
	MR_tempr6 = MR_sv(2);
	MR_tempr1 = MR_tfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___hlds__hlds_goal__hlds_goal_0_0,
		__Compare___hlds__from_ground_term_util__fgt_marked_goal_0_0_i22);
MR_def_label(__Compare___hlds__from_ground_term_util__fgt_marked_goal_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__from_ground_term_util__fgt_marked_goal_0_0_i88);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___hlds__from_ground_term_util__fgt_marked_goal_0_0_i26);
MR_def_label(__Compare___hlds__from_ground_term_util__fgt_marked_goal_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__from_ground_term_util__fgt_marked_goal_0_0_i88);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(builtin__compare_3_0);
MR_def_label(__Compare___hlds__from_ground_term_util__fgt_marked_goal_0_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__from_ground_term_util_module14)
	MR_init_entry1(__Unify___hlds__from_ground_term_util__goal_order_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__from_ground_term_util__goal_order_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___hlds__from_ground_term_util__goal_order_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__from_ground_term_util_module15)
	MR_init_entry1(__Compare___hlds__from_ground_term_util__goal_order_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__from_ground_term_util__goal_order_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___hlds__from_ground_term_util__goal_order_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__from_ground_term_util_module16)
	MR_init_entry1(__Unify___hlds__from_ground_term_util__maybe_kept_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__from_ground_term_util__maybe_kept_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___hlds__from_ground_term_util__maybe_kept_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__from_ground_term_util_module17)
	MR_init_entry1(__Compare___hlds__from_ground_term_util__maybe_kept_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__from_ground_term_util__maybe_kept_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___hlds__from_ground_term_util__maybe_kept_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___hlds__hlds_goal__hlds_goal_info_0_0);

MR_BEGIN_MODULE(hlds__from_ground_term_util_module18)
	MR_init_entry1(__Unify___hlds__from_ground_term_util__maybe_kept_goal_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__from_ground_term_util__maybe_kept_goal_info_0_0);
	MR_init_label3(__Unify___hlds__from_ground_term_util__maybe_kept_goal_info_0_0,12,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___hlds__from_ground_term_util__maybe_kept_goal_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___hlds__from_ground_term_util__maybe_kept_goal_info_0_0_i12);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___hlds__from_ground_term_util__maybe_kept_goal_info_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___hlds__from_ground_term_util__maybe_kept_goal_info_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___hlds__from_ground_term_util__maybe_kept_goal_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___hlds__from_ground_term_util__maybe_kept_goal_info_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(1, MR_tempr3, 0);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(1, MR_tempr4, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___hlds__from_ground_term_util__maybe_kept_goal_info_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_tempr3, 1);
	MR_r2 = MR_tfield(1, MR_tempr4, 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___hlds__hlds_goal__hlds_goal_info_0_0);
	}
MR_def_label(__Unify___hlds__from_ground_term_util__maybe_kept_goal_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___hlds__hlds_goal__hlds_goal_info_0_0);

MR_BEGIN_MODULE(hlds__from_ground_term_util_module19)
	MR_init_entry1(__Compare___hlds__from_ground_term_util__maybe_kept_goal_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__from_ground_term_util__maybe_kept_goal_info_0_0);
	MR_init_label6(__Compare___hlds__from_ground_term_util__maybe_kept_goal_info_0_0,24,7,5,9,11,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___hlds__from_ground_term_util__maybe_kept_goal_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___hlds__from_ground_term_util__maybe_kept_goal_info_0_0_i24);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___hlds__from_ground_term_util__maybe_kept_goal_info_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___hlds__from_ground_term_util__maybe_kept_goal_info_0_0_i7);
	}
MR_def_label(__Compare___hlds__from_ground_term_util__maybe_kept_goal_info_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__from_ground_term_util__maybe_kept_goal_info_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__from_ground_term_util__maybe_kept_goal_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___hlds__from_ground_term_util__maybe_kept_goal_info_0_0_i9);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__from_ground_term_util__maybe_kept_goal_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_tfield(1, MR_tempr5, 1);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_tfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(1, MR_tempr3, 0);
	MR_r2 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___hlds__from_ground_term_util__maybe_kept_goal_info_0_0_i11);
MR_def_label(__Compare___hlds__from_ground_term_util__maybe_kept_goal_info_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__from_ground_term_util__maybe_kept_goal_info_0_0_i16);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___hlds__hlds_goal__hlds_goal_info_0_0);
MR_def_label(__Compare___hlds__from_ground_term_util__maybe_kept_goal_info_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__hlds__from_ground_term_util_maybe_bunch_0(void)
{
	hlds__from_ground_term_util_module0();
	hlds__from_ground_term_util_module1();
	hlds__from_ground_term_util_module2();
	hlds__from_ground_term_util_module3();
	hlds__from_ground_term_util_module4();
	hlds__from_ground_term_util_module5();
	hlds__from_ground_term_util_module6();
	hlds__from_ground_term_util_module7();
	hlds__from_ground_term_util_module8();
	hlds__from_ground_term_util_module9();
	hlds__from_ground_term_util_module10();
	hlds__from_ground_term_util_module11();
	hlds__from_ground_term_util_module12();
	hlds__from_ground_term_util_module13();
	hlds__from_ground_term_util_module14();
	hlds__from_ground_term_util_module15();
	hlds__from_ground_term_util_module16();
	hlds__from_ground_term_util_module17();
	hlds__from_ground_term_util_module18();
	hlds__from_ground_term_util_module19();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__hlds__from_ground_term_util__init(void);
void mercury__hlds__from_ground_term_util__init_type_tables(void);
void mercury__hlds__from_ground_term_util__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__hlds__from_ground_term_util__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__hlds__from_ground_term_util__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__hlds__from_ground_term_util__init_threadscope_string_table(void);
#endif

void mercury__hlds__from_ground_term_util__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__hlds__from_ground_term_util_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__from_ground_term_util__type_ctor_info_fgt_build_info_0,
		hlds__from_ground_term_util__fgt_build_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__from_ground_term_util__type_ctor_info_fgt_build_info_map_0,
		hlds__from_ground_term_util__fgt_build_info_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__from_ground_term_util__type_ctor_info_fgt_invariants_status_0,
		hlds__from_ground_term_util__fgt_invariants_status_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__from_ground_term_util__type_ctor_info_fgt_marked_goal_0,
		hlds__from_ground_term_util__fgt_marked_goal_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__from_ground_term_util__type_ctor_info_goal_order_0,
		hlds__from_ground_term_util__goal_order_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__from_ground_term_util__type_ctor_info_maybe_kept_0,
		hlds__from_ground_term_util__maybe_kept_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__from_ground_term_util__type_ctor_info_maybe_kept_goal_info_0,
		hlds__from_ground_term_util__maybe_kept_goal_info_0_0);
	mercury__hlds__from_ground_term_util__init_debugger();
}

void mercury__hlds__from_ground_term_util__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__from_ground_term_util__type_ctor_info_fgt_build_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__from_ground_term_util__type_ctor_info_fgt_build_info_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__from_ground_term_util__type_ctor_info_fgt_invariants_status_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__from_ground_term_util__type_ctor_info_fgt_marked_goal_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__from_ground_term_util__type_ctor_info_goal_order_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__from_ground_term_util__type_ctor_info_maybe_kept_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__from_ground_term_util__type_ctor_info_maybe_kept_goal_info_0);
	}
}


void mercury__hlds__from_ground_term_util__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__hlds__from_ground_term_util__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__hlds__from_ground_term_util);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__hlds__from_ground_term_util__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__hlds__from_ground_term_util__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
