/*
** Automatically generated from `push_goals_together.m'
** by the Mercury compiler,
** version rotd-2011-08-21, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__transform_hlds__implicit_parallelism__push_goals_together__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 526 "../library/io.int"
#include "io.mh"

#line 28 "transform_hlds.implicit_parallelism.push_goals_together.c"
#line 536 "../library/io.int"
#include "string.mh"

#line 32 "transform_hlds.implicit_parallelism.push_goals_together.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 36 "transform_hlds.implicit_parallelism.push_goals_together.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 40 "transform_hlds.implicit_parallelism.push_goals_together.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "transform_hlds.implicit_parallelism.push_goals_together.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 48 "transform_hlds.implicit_parallelism.push_goals_together.c"
#line 49 "transform_hlds.implicit_parallelism.push_goals_together.c"
#include "transform_hlds.implicit_parallelism.push_goals_together.mh"

#line 52 "transform_hlds.implicit_parallelism.push_goals_together.c"
#line 53 "transform_hlds.implicit_parallelism.push_goals_together.c"
#ifndef TRANSFORM_HLDS__IMPLICIT_PARALLELISM__PUSH_GOALS_TOGETHER_DECL_GUARD
#define TRANSFORM_HLDS__IMPLICIT_PARALLELISM__PUSH_GOALS_TOGETHER_DECL_GUARD

#line 57 "transform_hlds.implicit_parallelism.push_goals_together.c"
#line 58 "transform_hlds.implicit_parallelism.push_goals_together.c"

#endif
#line 61 "transform_hlds.implicit_parallelism.push_goals_together.c"

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
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Integer f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_transform_hlds__implicit_parallelism__push_goals_together__type_ctor_info_maybe_pushable_0,
	mercury_data_transform_hlds__implicit_parallelism__push_goals_together__type_ctor_info_one_or_more_1,
	mercury_data_transform_hlds__implicit_parallelism__push_goals_together__type_ctor_info_push_info_0,
	mercury_data_transform_hlds__implicit_parallelism__push_goals_together__type_ctor_info_push_result_0;
MR_decl_label2(transform_hlds__implicit_parallelism__push_goals_together__add_goals_at_end_3_0, 5,2)
MR_decl_label1(transform_hlds__implicit_parallelism__push_goals_together__add_goals_at_end_of_case_3_0, 2)
MR_decl_label6(transform_hlds__implicit_parallelism__push_goals_together__build_disj_steps_map_3_0, 46,9,6,17,2,1)
MR_decl_label4(transform_hlds__implicit_parallelism__push_goals_together__build_ite_steps_map_3_0, 49,4,7,1)
MR_decl_label6(transform_hlds__implicit_parallelism__push_goals_together__build_switch_steps_map_3_0, 46,9,6,17,2,1)
MR_decl_label4(transform_hlds__implicit_parallelism__push_goals_together__do_push_in_cases_7_0, 29,6,4,9)
MR_decl_label10(transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_0, 3,9,6,16,13,23,20,30,27,36)
MR_decl_label7(transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_0, 33,43,40,50,47,57,54)
MR_decl_label4(transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goals_7_0, 28,6,4,8)
MR_decl_label6(transform_hlds__implicit_parallelism__push_goals_together__do_push_list_5_0, 26,3,6,8,10,4)
MR_decl_label5(transform_hlds__implicit_parallelism__push_goals_together__find_hi_goals_7_0, 36,4,6,7,9)
MR_decl_label4(transform_hlds__implicit_parallelism__push_goals_together__find_lo_hi_goals_9_0, 3,2,27,6)
MR_decl_label5(transform_hlds__implicit_parallelism__push_goals_together__find_relative_paths_3_0, 40,4,6,8,1)
MR_decl_label2(transform_hlds__implicit_parallelism__push_goals_together__is_non_rtti_var_2_0, 2,1)
MR_decl_label4(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_case_list_3_0, 15,3,4,6)
MR_decl_label10(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_0, 139,2,3,8,12,17,52,13,10,21)
MR_decl_label10(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_0, 23,28,30,31,33,34,25,37,61,41)
MR_decl_label1(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_0, 39)
MR_decl_label4(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_list_3_0, 15,3,4,6)
MR_decl_label2(transform_hlds__implicit_parallelism__push_goals_together__maybe_steps_after_3_0, 3,1)
MR_decl_label9(transform_hlds__implicit_parallelism__push_goals_together__perform_push_transform_5_0, 2,7,8,15,17,19,21,22,4)
MR_decl_label10(transform_hlds__implicit_parallelism__push_goals_together__push_goals_in_proc_6_0, 2,3,4,5,6,7,8,10,11,12)
MR_decl_label7(transform_hlds__implicit_parallelism__push_goals_together__push_goals_in_proc_6_0, 13,14,15,16,17,18,19)
MR_decl_label10(transform_hlds__implicit_parallelism__push_goals_together__push_into_cases_6_0, 63,6,9,3,65,14,17,13,21,23)
MR_decl_label10(transform_hlds__implicit_parallelism__push_goals_together__push_into_disjuncts_6_0, 60,6,8,3,62,13,15,12,19,20)
MR_decl_label10(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0, 5,3,8,14,15,10,21,23,25,26)
MR_decl_label10(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0, 27,16,17,9,37,38,40,41,32,47)
MR_decl_label10(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0, 49,54,57,56,58,55,61,60,59,45)
MR_decl_label10(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0, 71,72,76,80,82,70,127,88,86,95)
MR_decl_label4(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0, 96,98,99,91)
MR_decl_label3(__Unify___transform_hlds__implicit_parallelism__push_goals_together__one_or_more_1_0, 4,8,1)
MR_decl_label1(__Unify___transform_hlds__implicit_parallelism__push_goals_together__push_info_0_0, 6)
MR_decl_label4(__Compare___transform_hlds__implicit_parallelism__push_goals_together__one_or_more_1_0, 3,2,5,21)
MR_decl_label2(__Compare___transform_hlds__implicit_parallelism__push_goals_together__push_info_0_0, 3,2)
MR_decl_static(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_0)
MR_decl_static(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_list_3_0)
MR_decl_static(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_case_list_3_0)
MR_decl_static(transform_hlds__implicit_parallelism__push_goals_together__find_hi_goals_7_0)
MR_decl_static(transform_hlds__implicit_parallelism__push_goals_together__find_lo_hi_goals_9_0)
MR_decl_static(transform_hlds__implicit_parallelism__push_goals_together__add_goals_at_end_3_0)
MR_decl_static(transform_hlds__implicit_parallelism__push_goals_together__add_goals_at_end_of_case_3_0)
MR_decl_static(transform_hlds__implicit_parallelism__push_goals_together__build_disj_steps_map_3_0)
MR_decl_static(transform_hlds__implicit_parallelism__push_goals_together__build_switch_steps_map_3_0)
MR_decl_static(transform_hlds__implicit_parallelism__push_goals_together__build_ite_steps_map_3_0)
MR_decl_static(transform_hlds__implicit_parallelism__push_goals_together__maybe_steps_after_3_0)
MR_decl_static(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0)
MR_decl_static(transform_hlds__implicit_parallelism__push_goals_together__push_into_disjuncts_6_0)
MR_decl_static(transform_hlds__implicit_parallelism__push_goals_together__push_into_cases_6_0)
MR_decl_static(transform_hlds__implicit_parallelism__push_goals_together__find_relative_paths_3_0)
MR_decl_static(transform_hlds__implicit_parallelism__push_goals_together__perform_push_transform_5_0)
MR_decl_static(transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_0)
MR_decl_static(transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goals_7_0)
MR_decl_static(transform_hlds__implicit_parallelism__push_goals_together__do_push_in_cases_7_0)
MR_decl_static(transform_hlds__implicit_parallelism__push_goals_together__do_push_list_5_0)
MR_def_extern_entry(transform_hlds__implicit_parallelism__push_goals_together__push_goals_in_proc_6_0)
MR_decl_static(transform_hlds__implicit_parallelism__push_goals_together__is_non_rtti_var_2_0)
MR_decl_static(__Unify___transform_hlds__implicit_parallelism__push_goals_together__maybe_pushable_0_0)
MR_decl_static(__Compare___transform_hlds__implicit_parallelism__push_goals_together__maybe_pushable_0_0)
MR_decl_static(__Unify___transform_hlds__implicit_parallelism__push_goals_together__one_or_more_1_0)
MR_decl_static(__Compare___transform_hlds__implicit_parallelism__push_goals_together__one_or_more_1_0)
MR_decl_static(__Unify___transform_hlds__implicit_parallelism__push_goals_together__push_info_0_0)
MR_decl_static(__Compare___transform_hlds__implicit_parallelism__push_goals_together__push_info_0_0)
MR_def_extern_entry(__Unify___transform_hlds__implicit_parallelism__push_goals_together__push_result_0_0)
MR_def_extern_entry(__Compare___transform_hlds__implicit_parallelism__push_goals_together__push_result_0_0)
MR_decl_static(transform_hlds__implicit_parallelism__push_goals_together__IntroducedFrom__pred__push_into_goal__623__1_2_0)
MR_decl_static(transform_hlds__implicit_parallelism__push_goals_together__IntroducedFrom__pred__push_into_goal__644__1_2_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_goal_path_step_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_goal_path_step_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
static const struct mercury_type_0 mercury_common_0[8] =
{
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(mdbcomp__goal_path, goal_path_step)
}
},
{
{
MR_CTOR1_ADDR(transform_hlds__implicit_parallelism__push_goals_together, one_or_more),
MR_TAG_COMMON(0,0,2)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(mdbcomp__goal_path, goal_path_step)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_COMMON(0,4)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(mdbcomp__goal_path, goal_path_step)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0_2;
static const struct mercury_type_1 mercury_common_1[3] =
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_rtti, rtti_varmaps),
MR_COMMON(0,0)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,5),
MR_COMMON(0,5)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,5),
MR_COMMON(0,5)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_goal_path_step_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__implicit_parallelism__push_goals_together__push_into_disjuncts_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__implicit_parallelism__push_goals_together__push_into_cases_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_case_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__implicit_parallelism__push_goals_together__perform_push_transform_5_0_1;
static const struct mercury_type_2 mercury_common_2[5] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(mdbcomp__goal_path, goal_path_step),
MR_COMMON(0,6),
MR_COMMON(0,6)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0_4,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(mdbcomp__goal_path, goal_path_step),
MR_COMMON(0,6),
MR_COMMON(0,6)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__implicit_parallelism__push_goals_together__push_into_disjuncts_6_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,7),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__implicit_parallelism__push_goals_together__push_into_cases_6_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,7),
MR_CTOR0_ADDR(hlds__hlds_goal, case),
MR_CTOR0_ADDR(hlds__hlds_goal, case)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__implicit_parallelism__push_goals_together__perform_push_transform_5_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(mdbcomp__goal_path, goal_path_step),
MR_COMMON(0,6),
MR_COMMON(0,6)
}
},
};

static const struct mercury_type_3 mercury_common_3[1] =
{
{
{
1,
1
}
},
};

static const struct mercury_type_4 mercury_common_4[1] =
{
{
MR_COMMON(2,1),
MR_ENTRY_AP(transform_hlds__implicit_parallelism__push_goals_together__maybe_steps_after_3_0),
1,
MR_TAG_COMMON(3,3,0)
},
};

static const MR_EnumFunctorDesc mercury_data_transform_hlds__implicit_parallelism__push_goals_together__enum_functor_desc_maybe_pushable_0_0 = {
	"not_pushable",
	0
};

static const MR_EnumFunctorDesc mercury_data_transform_hlds__implicit_parallelism__push_goals_together__enum_functor_desc_maybe_pushable_0_1 = {
	"pushable",
	1
};

const MR_EnumFunctorDescPtr mercury_data_transform_hlds__implicit_parallelism__push_goals_together__enum_value_ordered_maybe_pushable_0[] = {
	&mercury_data_transform_hlds__implicit_parallelism__push_goals_together__enum_functor_desc_maybe_pushable_0_0,
	&mercury_data_transform_hlds__implicit_parallelism__push_goals_together__enum_functor_desc_maybe_pushable_0_1
};

const MR_EnumFunctorDescPtr mercury_data_transform_hlds__implicit_parallelism__push_goals_together__enum_name_ordered_maybe_pushable_0[] = {
	&mercury_data_transform_hlds__implicit_parallelism__push_goals_together__enum_functor_desc_maybe_pushable_0_0,
	&mercury_data_transform_hlds__implicit_parallelism__push_goals_together__enum_functor_desc_maybe_pushable_0_1
};

const MR_Integer mercury_data_transform_hlds__implicit_parallelism__push_goals_together__functor_number_map_maybe_pushable_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__implicit_parallelism__push_goals_together__type_ctor_info_maybe_pushable_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__implicit_parallelism__push_goals_together__maybe_pushable_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__implicit_parallelism__push_goals_together__maybe_pushable_0_0)),
	"transform_hlds.implicit_parallelism.push_goals_together",
	"maybe_pushable",
	{ (void *)mercury_data_transform_hlds__implicit_parallelism__push_goals_together__enum_name_ordered_maybe_pushable_0 },
	{ (void *)mercury_data_transform_hlds__implicit_parallelism__push_goals_together__enum_value_ordered_maybe_pushable_0 },
	2,
	4,
	mercury_data_transform_hlds__implicit_parallelism__push_goals_together__functor_number_map_maybe_pushable_0
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_list__pti_list_1__pseudo_1 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_PseudoTypeInfo) 1
}};

const MR_PseudoTypeInfo mercury_data_transform_hlds__implicit_parallelism__push_goals_together__field_types_one_or_more_1_0[] = {
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_list__pti_list_1__pseudo_1
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__implicit_parallelism__push_goals_together__du_functor_desc_one_or_more_1_0 = {
	"one_or_more",
	2,
	3,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__implicit_parallelism__push_goals_together__field_types_one_or_more_1_0,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__implicit_parallelism__push_goals_together__du_stag_ordered_one_or_more_1_0[] = {
	&mercury_data_transform_hlds__implicit_parallelism__push_goals_together__du_functor_desc_one_or_more_1_0

};

const MR_DuPtagLayout mercury_data_transform_hlds__implicit_parallelism__push_goals_together__du_ptag_ordered_one_or_more_1[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__implicit_parallelism__push_goals_together__du_stag_ordered_one_or_more_1_0 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__implicit_parallelism__push_goals_together__du_name_ordered_one_or_more_1[] = {
	&mercury_data_transform_hlds__implicit_parallelism__push_goals_together__du_functor_desc_one_or_more_1_0
};

const MR_Integer mercury_data_transform_hlds__implicit_parallelism__push_goals_together__functor_number_map_one_or_more_1[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__implicit_parallelism__push_goals_together__type_ctor_info_one_or_more_1 = {
	1,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__implicit_parallelism__push_goals_together__one_or_more_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__implicit_parallelism__push_goals_together__one_or_more_1_0)),
	"transform_hlds.implicit_parallelism.push_goals_together",
	"one_or_more",
	{ (void *)mercury_data_transform_hlds__implicit_parallelism__push_goals_together__du_name_ordered_one_or_more_1 },
	{ (void *)mercury_data_transform_hlds__implicit_parallelism__push_goals_together__du_ptag_ordered_one_or_more_1 },
	1,
	4,
	mercury_data_transform_hlds__implicit_parallelism__push_goals_together__functor_number_map_one_or_more_1
};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0;

static const MR_NotagFunctorDesc mercury_data_transform_hlds__implicit_parallelism__push_goals_together__notag_functor_desc_push_info_0 = {
	"push_info",
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0,
	"pi_rtti_varmaps"
};

const MR_Integer mercury_data_transform_hlds__implicit_parallelism__push_goals_together__functor_number_map_push_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__implicit_parallelism__push_goals_together__type_ctor_info_push_info_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__implicit_parallelism__push_goals_together__push_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__implicit_parallelism__push_goals_together__push_info_0_0)),
	"transform_hlds.implicit_parallelism.push_goals_together",
	"push_info",
	{ (void *)&mercury_data_transform_hlds__implicit_parallelism__push_goals_together__notag_functor_desc_push_info_0 },
	{ (void *)&mercury_data_transform_hlds__implicit_parallelism__push_goals_together__notag_functor_desc_push_info_0 },
	1,
	4,
	mercury_data_transform_hlds__implicit_parallelism__push_goals_together__functor_number_map_push_info_0
};

static const MR_EnumFunctorDesc mercury_data_transform_hlds__implicit_parallelism__push_goals_together__enum_functor_desc_push_result_0_0 = {
	"push_failed",
	0
};

static const MR_EnumFunctorDesc mercury_data_transform_hlds__implicit_parallelism__push_goals_together__enum_functor_desc_push_result_0_1 = {
	"push_succeeded",
	1
};

const MR_EnumFunctorDescPtr mercury_data_transform_hlds__implicit_parallelism__push_goals_together__enum_value_ordered_push_result_0[] = {
	&mercury_data_transform_hlds__implicit_parallelism__push_goals_together__enum_functor_desc_push_result_0_0,
	&mercury_data_transform_hlds__implicit_parallelism__push_goals_together__enum_functor_desc_push_result_0_1
};

const MR_EnumFunctorDescPtr mercury_data_transform_hlds__implicit_parallelism__push_goals_together__enum_name_ordered_push_result_0[] = {
	&mercury_data_transform_hlds__implicit_parallelism__push_goals_together__enum_functor_desc_push_result_0_0,
	&mercury_data_transform_hlds__implicit_parallelism__push_goals_together__enum_functor_desc_push_result_0_1
};

const MR_Integer mercury_data_transform_hlds__implicit_parallelism__push_goals_together__functor_number_map_push_result_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__implicit_parallelism__push_goals_together__type_ctor_info_push_result_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__implicit_parallelism__push_goals_together__push_result_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__implicit_parallelism__push_goals_together__push_result_0_0)),
	"transform_hlds.implicit_parallelism.push_goals_together",
	"push_result",
	{ (void *)mercury_data_transform_hlds__implicit_parallelism__push_goals_together__enum_name_ordered_push_result_0 },
	{ (void *)mercury_data_transform_hlds__implicit_parallelism__push_goals_together__enum_value_ordered_push_result_0 },
	2,
	4,
	mercury_data_transform_hlds__implicit_parallelism__push_goals_together__functor_number_map_push_result_0
};


static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__implicit_parallelism__push_goals_together__perform_push_transform_5_0_1 = {
{
MR_PREDICATE,
"transform_hlds.implicit_parallelism.push_goals_together",
"transform_hlds.implicit_parallelism.push_goals_together",
"maybe_steps_after",
3,
0
},
"transform_hlds.implicit_parallelism.push_goals_together",
"push_goals_together.m",
353,
"21"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__implicit_parallelism__push_goals_together__push_into_cases_6_0_1 = {
{
MR_PREDICATE,
"transform_hlds.implicit_parallelism.push_goals_together",
"transform_hlds.implicit_parallelism.push_goals_together",
"add_goals_at_end_of_case",
3,
0
},
"transform_hlds.implicit_parallelism.push_goals_together",
"push_goals_together.m",
857,
"26"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__implicit_parallelism__push_goals_together__push_into_disjuncts_6_0_1 = {
{
MR_PREDICATE,
"transform_hlds.implicit_parallelism.push_goals_together",
"transform_hlds.implicit_parallelism.push_goals_together",
"add_goals_at_end",
3,
0
},
"transform_hlds.implicit_parallelism.push_goals_together",
"push_goals_together.m",
814,
"26"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0_4 = {
{
MR_PREDICATE,
"transform_hlds.implicit_parallelism.push_goals_together",
"transform_hlds.implicit_parallelism.push_goals_together",
"maybe_steps_after",
3,
0
},
"transform_hlds.implicit_parallelism.push_goals_together",
"push_goals_together.m",
761,
"145"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0_3 = {
{
MR_PREDICATE,
"transform_hlds.implicit_parallelism.push_goals_together",
"transform_hlds.implicit_parallelism.push_goals_together",
"maybe_steps_after",
3,
0
},
"transform_hlds.implicit_parallelism.push_goals_together",
"push_goals_together.m",
655,
"47"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0_2 = {
{
MR_PREDICATE,
"transform_hlds.implicit_parallelism.push_goals_together",
"transform_hlds.implicit_parallelism.push_goals_together",
"lambda_push_goals_together_m_644",
2,
0
},
"transform_hlds.implicit_parallelism.push_goals_together",
"push_goals_together.m",
644,
"37"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0_1 = {
{
MR_PREDICATE,
"transform_hlds.implicit_parallelism.push_goals_together",
"transform_hlds.implicit_parallelism.push_goals_together",
"lambda_push_goals_together_m_623",
2,
0
},
"transform_hlds.implicit_parallelism.push_goals_together",
"push_goals_together.m",
623,
"12"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_0_1 = {
{
MR_PREDICATE,
"transform_hlds.implicit_parallelism.push_goals_together",
"transform_hlds.implicit_parallelism.push_goals_together",
"is_non_rtti_var",
2,
0
},
"transform_hlds.implicit_parallelism.push_goals_together",
"push_goals_together.m",
483,
"27"
};


MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_purity_1_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_determinism_1_0);
MR_decl_entry(list__all_true_2_0);
MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(transform_hlds__implicit_parallelism__push_goals_together_module0)
	MR_init_entry1(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_0);
	MR_init_label10(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_0,139,2,3,8,12,17,52,13,10,21)
	MR_init_label10(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_0,23,28,30,31,33,34,25,37,61,41)
	MR_init_label1(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_0,39)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_pushable_goal'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_0,139)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r2, 0);
	MR_sv(3) = MR_tfield(0, MR_r2, 1);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_purity_1_0,
		transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_0_i2);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_0_i3);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_0_i61);
	}
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_0_i61);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_0_i8);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_body((MR_Integer) MR_sv(2), (MR_Integer) 0);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_0_i139);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_sv(2), 3);
	MR_r3 = MR_tempr1;
	if (!((((MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 2)) || (MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 0))) || ((MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_tempr1, 0) == (MR_Integer) 0))))) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_0_i12);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_0_i13);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(1,0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__implicit_parallelism__push_goals_together__is_non_rtti_var_2_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = MR_sv(1);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_tfield(1, MR_r3, 2);
	MR_np_call_localret_ent(list__all_true_2_0,
		transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_0_i17);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_0_i61);
	}
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.implicit_parallelism.push_goals_together", 55);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.implicit_parallelism.push_goals_together.is_pushable_goal\'/3", 86);
	MR_r3 = (MR_Word) MR_string_const("complicated_unify", 17);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(3, MR_sv(2), 2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_list_3_0);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_0_i23);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_list_3_0);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,6)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_0_i25);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr3 = MR_sv(2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(3, MR_tempr3, 4);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tfield(3, MR_tempr3, 3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tempr1 = MR_tempr3;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	}
	MR_np_localcall_lab(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_0,
		transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_0_i28);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_0_i30);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_localcall_lab(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_0,
		transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_0_i31);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_0_i33);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_np_localcall_lab(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_0,
		transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_0_i34);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_0_i52);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_0_i37);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(3, MR_sv(2), 2);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_0_i139);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,7)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_0_i39);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_sv(2), 1);
	if (!(((MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 1)) || (MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 2))))) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_0_i41);
	}
	}
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.implicit_parallelism.push_goals_together", 55);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.implicit_parallelism.push_goals_together.is_pushable_goal\'/3", 86);
	MR_r3 = (MR_Word) MR_string_const("bi_implication", 14);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_0_i52);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(3, MR_sv(2), 3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_case_list_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__implicit_parallelism__push_goals_together_module1)
	MR_init_entry1(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_list_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_list_3_0);
	MR_init_label4(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_list_3_0,15,3,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_pushable_goal_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_list_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_list_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_list_3_0_i3);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_list_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_0,
		transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_list_3_0_i4);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_list_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_list_3_0_i6);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_list_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_list_3_0_i15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__implicit_parallelism__push_goals_together_module2)
	MR_init_entry1(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_case_list_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__implicit_parallelism__push_goals_together__is_pushable_case_list_3_0);
	MR_init_label4(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_case_list_3_0,15,3,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_pushable_case_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_case_list_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_case_list_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_case_list_3_0_i3);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_case_list_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_r2 = MR_tfield(0, MR_tfield(1, MR_r2, 0), 2);
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_0,
		transform_hlds__implicit_parallelism__push_goals_together__is_pushable_case_list_3_0_i4);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_case_list_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_case_list_3_0_i6);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_case_list_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_case_list_3_0_i15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__implicit_parallelism__push_goals_together_module3)
	MR_init_entry1(transform_hlds__implicit_parallelism__push_goals_together__find_hi_goals_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__implicit_parallelism__push_goals_together__find_hi_goals_7_0);
	MR_init_label5(transform_hlds__implicit_parallelism__push_goals_together__find_hi_goals_7_0,36,4,6,7,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_hi_goals'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__implicit_parallelism__push_goals_together__find_hi_goals_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__find_hi_goals_7_0_i36);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__find_hi_goals_7_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_tfield(1, MR_r2, 0);
	MR_sv(5) = MR_tfield(1, MR_r2, 1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_0,
		transform_hlds__implicit_parallelism__push_goals_together__find_hi_goals_7_0_i4);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__find_hi_goals_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__find_hi_goals_7_0_i6);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Integer) 0;
	MR_decr_sp_and_return(6);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__find_hi_goals_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(3) != MR_sv(2))) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__find_hi_goals_7_0_i7);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(4);
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Integer) 1;
	MR_decr_sp_and_return(6);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__find_hi_goals_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_r4 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_np_localcall_lab(transform_hlds__implicit_parallelism__push_goals_together__find_hi_goals_7_0,
		transform_hlds__implicit_parallelism__push_goals_together__find_hi_goals_7_0_i9);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__find_hi_goals_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__implicit_parallelism__push_goals_together_module4)
	MR_init_entry1(transform_hlds__implicit_parallelism__push_goals_together__find_lo_hi_goals_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__implicit_parallelism__push_goals_together__find_lo_hi_goals_9_0);
	MR_init_label4(transform_hlds__implicit_parallelism__push_goals_together__find_lo_hi_goals_9_0,3,2,27,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_lo_hi_goals'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__implicit_parallelism__push_goals_together__find_lo_hi_goals_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r5 != MR_r3)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__find_lo_hi_goals_9_0_i2);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__push_goals_together__find_hi_goals_7_0,
		transform_hlds__implicit_parallelism__push_goals_together__find_lo_hi_goals_9_0_i3);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__find_lo_hi_goals_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	MR_decr_sp_and_return(2);
	}
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__find_lo_hi_goals_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__find_lo_hi_goals_9_0_i27);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__find_lo_hi_goals_9_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_r5 = ((MR_Integer) MR_r5 + (MR_Integer) 1);
	MR_np_localcall_lab(transform_hlds__implicit_parallelism__push_goals_together__find_lo_hi_goals_9_0,
		transform_hlds__implicit_parallelism__push_goals_together__find_lo_hi_goals_9_0_i6);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__find_lo_hi_goals_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_decl_entry(hlds__goal_util__create_conj_from_list_3_0);

MR_BEGIN_MODULE(transform_hlds__implicit_parallelism__push_goals_together_module5)
	MR_init_entry1(transform_hlds__implicit_parallelism__push_goals_together__add_goals_at_end_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__implicit_parallelism__push_goals_together__add_goals_at_end_3_0);
	MR_init_label2(transform_hlds__implicit_parallelism__push_goals_together__add_goals_at_end_3_0,5,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_goals_at_end'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__implicit_parallelism__push_goals_together__add_goals_at_end_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,2)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__add_goals_at_end_3_0_i2);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__add_goals_at_end_3_0_i2);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__implicit_parallelism__push_goals_together__add_goals_at_end_3_0_i5);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__add_goals_at_end_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(hlds__goal_util__create_conj_from_list_3_0);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__add_goals_at_end_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	MR_np_tailcall_ent(hlds__goal_util__create_conj_from_list_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__implicit_parallelism__push_goals_together_module6)
	MR_init_entry1(transform_hlds__implicit_parallelism__push_goals_together__add_goals_at_end_of_case_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__implicit_parallelism__push_goals_together__add_goals_at_end_of_case_3_0);
	MR_init_label1(transform_hlds__implicit_parallelism__push_goals_together__add_goals_at_end_of_case_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_goals_at_end_of_case'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__implicit_parallelism__push_goals_together__add_goals_at_end_of_case_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r2, 0);
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	MR_r2 = MR_tfield(0, MR_r2, 2);
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__push_goals_together__add_goals_at_end_3_0,
		transform_hlds__implicit_parallelism__push_goals_together__add_goals_at_end_of_case_3_0_i2);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__add_goals_at_end_of_case_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_sv(2);
	MR_tfield(0, MR_r2, 2) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(transform_hlds__implicit_parallelism__push_goals_together_module7)
	MR_init_entry1(transform_hlds__implicit_parallelism__push_goals_together__build_disj_steps_map_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__implicit_parallelism__push_goals_together__build_disj_steps_map_3_0);
	MR_init_label6(transform_hlds__implicit_parallelism__push_goals_together__build_disj_steps_map_3_0,46,9,6,17,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_disj_steps_map'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__implicit_parallelism__push_goals_together__build_disj_steps_map_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__build_disj_steps_map_3_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__build_disj_steps_map_3_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__build_disj_steps_map_3_0_i1);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_tempr2,2)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__build_disj_steps_map_3_0_i1);
	}
	MR_sv(4) = MR_tfield(1, MR_tempr1, 1);
	MR_r3 = MR_tfield(2, MR_tempr2, 0);
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		transform_hlds__implicit_parallelism__push_goals_together__build_disj_steps_map_3_0_i9);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__build_disj_steps_map_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__build_disj_steps_map_3_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(0, MR_r2, 1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		transform_hlds__implicit_parallelism__push_goals_together__build_disj_steps_map_3_0_i17);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__build_disj_steps_map_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		transform_hlds__implicit_parallelism__push_goals_together__build_disj_steps_map_3_0_i17);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__build_disj_steps_map_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__build_disj_steps_map_3_0_i46);
	}
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__build_disj_steps_map_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__build_disj_steps_map_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__implicit_parallelism__push_goals_together_module8)
	MR_init_entry1(transform_hlds__implicit_parallelism__push_goals_together__build_switch_steps_map_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__implicit_parallelism__push_goals_together__build_switch_steps_map_3_0);
	MR_init_label6(transform_hlds__implicit_parallelism__push_goals_together__build_switch_steps_map_3_0,46,9,6,17,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_switch_steps_map'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__implicit_parallelism__push_goals_together__build_switch_steps_map_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__build_switch_steps_map_3_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__build_switch_steps_map_3_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__build_switch_steps_map_3_0_i1);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	if (MR_RTAGS_TESTR(MR_tempr2,3,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__build_switch_steps_map_3_0_i1);
	}
	MR_sv(4) = MR_tfield(1, MR_tempr1, 1);
	MR_r3 = MR_tfield(3, MR_tempr2, 1);
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		transform_hlds__implicit_parallelism__push_goals_together__build_switch_steps_map_3_0_i9);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__build_switch_steps_map_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__build_switch_steps_map_3_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(0, MR_r2, 1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		transform_hlds__implicit_parallelism__push_goals_together__build_switch_steps_map_3_0_i17);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__build_switch_steps_map_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		transform_hlds__implicit_parallelism__push_goals_together__build_switch_steps_map_3_0_i17);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__build_switch_steps_map_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__build_switch_steps_map_3_0_i46);
	}
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__build_switch_steps_map_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__build_switch_steps_map_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__implicit_parallelism__push_goals_together_module9)
	MR_init_entry1(transform_hlds__implicit_parallelism__push_goals_together__build_ite_steps_map_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__implicit_parallelism__push_goals_together__build_ite_steps_map_3_0);
	MR_init_label4(transform_hlds__implicit_parallelism__push_goals_together__build_ite_steps_map_3_0,49,4,7,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_ite_steps_map'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__implicit_parallelism__push_goals_together__build_ite_steps_map_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__build_ite_steps_map_3_0_i49);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__build_ite_steps_map_3_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localcall_lab(transform_hlds__implicit_parallelism__push_goals_together__build_ite_steps_map_3_0,
		transform_hlds__implicit_parallelism__push_goals_together__build_ite_steps_map_3_0_i4);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__build_ite_steps_map_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__build_ite_steps_map_3_0_i1);
	}
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__build_ite_steps_map_3_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(1);
	MR_r4 = MR_tfield(1, MR_tempr2, 1);
	MR_r5 = MR_tfield(1, MR_tempr2, 0);
	if (MR_LTAGS_TESTR(MR_r5,0,1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__build_ite_steps_map_3_0_i7);
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r4;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
	}
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__build_ite_steps_map_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__build_ite_steps_map_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r4;
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
	}
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__build_ite_steps_map_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___mdbcomp__goal_path__goal_path_step_0_0);

MR_BEGIN_MODULE(transform_hlds__implicit_parallelism__push_goals_together_module10)
	MR_init_entry1(transform_hlds__implicit_parallelism__push_goals_together__maybe_steps_after_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__implicit_parallelism__push_goals_together__maybe_steps_after_3_0);
	MR_init_label2(transform_hlds__implicit_parallelism__push_goals_together__maybe_steps_after_3_0,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_steps_after'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__implicit_parallelism__push_goals_together__maybe_steps_after_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__maybe_steps_after_3_0_i1);
	}
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(__Unify___mdbcomp__goal_path__goal_path_step_0_0,
		transform_hlds__implicit_parallelism__push_goals_together__maybe_steps_after_3_0_i3);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__maybe_steps_after_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__maybe_steps_after_3_0_i1);
	}
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__maybe_steps_after_3_0,1)
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

MR_decl_entry(require__expect_3_0);
MR_decl_entry(list__map_3_2);
MR_decl_entry(list__index1_3_0);
MR_decl_entry(list__length_2_0);
MR_decl_entry(list__det_replace_nth_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(map__to_assoc_list_2_0);

MR_BEGIN_MODULE(transform_hlds__implicit_parallelism__push_goals_together_module11)
	MR_init_entry1(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0);
	MR_init_label10(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0,5,3,8,14,15,10,21,23,25,26)
	MR_init_label10(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0,27,16,17,9,37,38,40,41,32,47)
	MR_init_label10(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0,49,54,57,56,58,55,61,60,59,45)
	MR_init_label10(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0,71,72,76,80,82,70,127,88,86,95)
	MR_init_label4(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0,96,98,99,91)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'push_into_goal'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0_i3);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__implicit_parallelism__push_goals_together__IntroducedFrom__pred__push_into_goal__623__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r3;
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r4;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("transform_hlds.implicit_parallelism.push_goals_together", 55);
	MR_r3 = (MR_Word) MR_string_const("TailSteps != []", 15);
	}
	MR_np_call_localret_ent(require__expect_3_0,
		transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0_i5);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__push_goals_together__add_goals_at_end_3_0,
		transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0_i15);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r5 = MR_tfield(0, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_r5,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0_i8);
	}
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	MR_proceed();
	}
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,2)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0_i9);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r5;
	MR_sv(6) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(5) = MR_tfield(3, MR_tempr2, 1);
	MR_sv(9) = MR_tfield(1, MR_r2, 1);
	MR_r5 = MR_tfield(1, MR_r2, 0);
	MR_tempr3 = MR_r4;
	MR_sv(3) = MR_tfield(0, MR_tempr3, 1);
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0_i10);
	}
	if (MR_LTAGS_TESTR(MR_sv(9),0,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0_i10);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__implicit_parallelism__push_goals_together__IntroducedFrom__pred__push_into_goal__644__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r3;
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr3;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("transform_hlds.implicit_parallelism.push_goals_together", 55);
	MR_r3 = (MR_Word) MR_string_const("TailSteps != []", 15);
	}
	MR_np_call_localret_ent(require__expect_3_0,
		transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0_i14);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__push_goals_together__add_goals_at_end_3_0,
		transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0_i15);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_decr_sp_and_return(10);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0_i17);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__implicit_parallelism__push_goals_together__maybe_steps_after_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr3 = MR_r5;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr3;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r4;
	MR_sv(7) = MR_tfield(1, MR_tempr3, 0);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = MR_r1;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map_3_2,
		transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0_i21);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0_i16);
	}
	MR_sv(8) = MR_r2;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(list__index1_3_0,
		transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0_i23);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0_i16);
	}
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(list__length_2_0,
		transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0_i25);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(7) != MR_r1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0_i16);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(4);
	MR_np_localcall_lab(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0,
		transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0_i26);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__det_replace_nth_4_0,
		transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0_i27);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(10);
	}
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_r2 = (MR_Integer) 0;
	MR_decr_sp_and_return(10);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,3)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0_i32);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(5) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_r4;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(9) = MR_tfield(3, MR_r5, 1);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0_i37);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__push_goals_together__build_disj_steps_map_3_0,
		transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0_i38);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0_i91);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0_i40);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(9);
	}
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__push_goals_together__push_into_disjuncts_6_0,
		transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0_i41);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(3);
	MR_decr_sp_and_return(10);
	}
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,6)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0_i45);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(9) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_r5;
	MR_sv(5) = MR_tfield(3, MR_tempr2, 1);
	MR_sv(6) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(7) = MR_tfield(3, MR_tempr2, 3);
	MR_sv(8) = MR_tfield(3, MR_tempr2, 4);
	MR_r1 = MR_r3;
	}
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__push_goals_together__build_ite_steps_map_3_0,
		transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0_i47);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0_i91);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(9);
	MR_r4 = MR_tfield(1, MR_tempr2, 1);
	MR_r5 = MR_tfield(1, MR_tempr2, 0);
	if (MR_LTAGS_TESTR(MR_r5,0,1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0_i49);
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r4;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_sv(9) = MR_r3;
	MR_r3 = MR_tempr1;
	MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0_i54);
	}
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0_i91);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(9) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r4;
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr2;
	}
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0_i56);
	}
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__push_goals_together__add_goals_at_end_3_0,
		transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0_i57);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_sv(1) = MR_r4;
	MR_r3 = (MR_Integer) 1;
	MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0_i55);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(1, MR_r3, 0);
	MR_r3 = MR_tfield(1, MR_r3, 1);
	MR_r4 = MR_tempr1;
	}
	MR_np_localcall_lab(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0,
		transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0_i58);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(8);
	MR_sv(1) = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(9),0,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0_i60);
	}
	MR_sv(9) = MR_r3;
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__push_goals_together__add_goals_at_end_3_0,
		transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0_i61);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0_i59);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r3;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_tfield(1, MR_tempr1, 1);
	MR_r4 = MR_tempr2;
	}
	MR_np_localcall_lab(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0,
		transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0_i59);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(9),1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0_i91);
	}
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0_i91);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 4) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(3);
	MR_r2 = (MR_Integer) 1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,5)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0_i70);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(5) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_r5;
	MR_sv(6) = MR_tfield(3, MR_tempr2, 1);
	MR_sv(7) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(8) = MR_tfield(0, MR_sv(7), 1);
	MR_r1 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0_i71);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0_i72);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(8) != MR_r1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0_i91);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(3,3,0);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__push_goals_together__maybe_steps_after_3_0,
		transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0_i76);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0_i91);
	}
	MR_sv(9) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(list__map_3_2,
		transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0_i80);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0_i91);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(7);
	}
	MR_np_localcall_lab(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0,
		transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0_i82);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(3);
	MR_decr_sp_and_return(10);
	}
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,7)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0_i86);
	}
	MR_r2 = MR_tfield(3, MR_r5, 1);
	if (!(((MR_tag(MR_r2) == MR_mktag((MR_Integer) 1)) || (MR_tag(MR_r2) == MR_mktag((MR_Integer) 2))))) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0_i88);
	}
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_r2 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.implicit_parallelism.push_goals_together", 55);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.implicit_parallelism.push_goals_together.push_into_goal\'/6", 84);
	MR_r3 = (MR_Word) MR_string_const("bi_implication", 14);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,4)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0_i127);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(7) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_r4;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_tfield(0, MR_tempr2, 1);
	MR_tempr3 = MR_r5;
	MR_sv(9) = MR_tfield(3, MR_tempr3, 1);
	MR_sv(5) = MR_tfield(3, MR_tempr3, 2);
	MR_sv(6) = MR_tfield(3, MR_tempr3, 3);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(8);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0_i95);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__push_goals_together__build_switch_steps_map_3_0,
		transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0_i96);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0_i91);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0_i98);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__push_goals_together__push_into_cases_6_0,
		transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0_i99);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(9);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(3);
	MR_decr_sp_and_return(10);
	}
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 0;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__map_3_0);

MR_BEGIN_MODULE(transform_hlds__implicit_parallelism__push_goals_together_module12)
	MR_init_entry1(transform_hlds__implicit_parallelism__push_goals_together__push_into_disjuncts_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__implicit_parallelism__push_goals_together__push_into_disjuncts_6_0);
	MR_init_label10(transform_hlds__implicit_parallelism__push_goals_together__push_into_disjuncts_6_0,60,6,8,3,62,13,15,12,19,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'push_into_disjuncts'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__implicit_parallelism__push_goals_together__push_into_disjuncts_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__push_into_disjuncts_6_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__push_into_disjuncts_6_0_i60);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_into_disjuncts_6_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__push_goals_together__add_goals_at_end_3_0,
		transform_hlds__implicit_parallelism__push_goals_together__push_into_disjuncts_6_0_i6);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_into_disjuncts_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__implicit_parallelism__push_goals_together__add_goals_at_end_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_r1;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(list__map_3_0,
		transform_hlds__implicit_parallelism__push_goals_together__push_into_disjuncts_6_0_i8);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_into_disjuncts_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_into_disjuncts_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__push_into_disjuncts_6_0_i62);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_into_disjuncts_6_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r4;
	MR_sv(2) = MR_tfield(1, MR_tempr3, 1);
	MR_r5 = MR_tfield(1, MR_tempr3, 0);
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	if ((MR_tempr2 != MR_r3)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__push_into_disjuncts_6_0_i12);
	}
	MR_sv(4) = MR_r1;
	MR_sv(1) = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 1);
	MR_r4 = MR_r5;
	}
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0,
		transform_hlds__implicit_parallelism__push_goals_together__push_into_disjuncts_6_0_i13);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_into_disjuncts_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__push_into_disjuncts_6_0_i15);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	MR_decr_sp_and_return(5);
	}
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_into_disjuncts_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r4 = MR_sv(2);
	}
	MR_np_localcall_lab(transform_hlds__implicit_parallelism__push_goals_together__push_into_disjuncts_6_0,
		transform_hlds__implicit_parallelism__push_goals_together__push_into_disjuncts_6_0_i20);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_into_disjuncts_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_r2 = MR_r5;
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__push_goals_together__add_goals_at_end_3_0,
		transform_hlds__implicit_parallelism__push_goals_together__push_into_disjuncts_6_0_i19);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_into_disjuncts_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r4 = MR_sv(2);
	}
	MR_np_localcall_lab(transform_hlds__implicit_parallelism__push_goals_together__push_into_disjuncts_6_0,
		transform_hlds__implicit_parallelism__push_goals_together__push_into_disjuncts_6_0_i20);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_into_disjuncts_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_case_0;

MR_BEGIN_MODULE(transform_hlds__implicit_parallelism__push_goals_together_module13)
	MR_init_entry1(transform_hlds__implicit_parallelism__push_goals_together__push_into_cases_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__implicit_parallelism__push_goals_together__push_into_cases_6_0);
	MR_init_label10(transform_hlds__implicit_parallelism__push_goals_together__push_into_cases_6_0,63,6,9,3,65,14,17,13,21,23)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'push_into_cases'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__implicit_parallelism__push_goals_together__push_into_cases_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__push_into_cases_6_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__push_into_cases_6_0_i63);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_into_cases_6_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__push_goals_together__add_goals_at_end_3_0,
		transform_hlds__implicit_parallelism__push_goals_together__push_into_cases_6_0_i6);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_into_cases_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(2,3);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__implicit_parallelism__push_goals_together__add_goals_at_end_of_case_3_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 3) = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	MR_r2 = MR_r1;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(list__map_3_0,
		transform_hlds__implicit_parallelism__push_goals_together__push_into_cases_6_0_i9);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_into_cases_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_into_cases_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__push_into_cases_6_0_i65);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_into_cases_6_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r4;
	MR_sv(4) = MR_tfield(1, MR_tempr4, 1);
	MR_tempr1 = MR_tfield(1, MR_tempr4, 0);
	MR_r5 = MR_tempr1;
	MR_tempr2 = MR_tfield(1, MR_r2, 0);
	MR_tempr3 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_tempr3 != MR_r3)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__push_into_cases_6_0_i13);
	}
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr3 = MR_tfield(0, MR_tempr2, 1);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr3, 1);
	MR_r4 = MR_tfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0,
		transform_hlds__implicit_parallelism__push_goals_together__push_into_cases_6_0_i14);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_into_cases_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__push_into_cases_6_0_i17);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_sv(4);
	MR_r2 = (MR_Integer) 0;
	MR_decr_sp_and_return(7);
	}
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_into_cases_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_r4 = MR_sv(4);
	}
	MR_np_localcall_lab(transform_hlds__implicit_parallelism__push_goals_together__push_into_cases_6_0,
		transform_hlds__implicit_parallelism__push_goals_together__push_into_cases_6_0_i23);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_into_cases_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__push_goals_together__add_goals_at_end_3_0,
		transform_hlds__implicit_parallelism__push_goals_together__push_into_cases_6_0_i21);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_into_cases_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(2);
	MR_r3 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_r4 = MR_sv(4);
	}
	MR_np_localcall_lab(transform_hlds__implicit_parallelism__push_goals_together__push_into_cases_6_0,
		transform_hlds__implicit_parallelism__push_goals_together__push_into_cases_6_0_i23);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_into_cases_6_0,23)
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

MR_decl_entry(mdbcomp__goal_path__goal_path_from_string_2_0);
MR_decl_entry(list__append_3_3);

MR_BEGIN_MODULE(transform_hlds__implicit_parallelism__push_goals_together_module14)
	MR_init_entry1(transform_hlds__implicit_parallelism__push_goals_together__find_relative_paths_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__implicit_parallelism__push_goals_together__find_relative_paths_3_0);
	MR_init_label5(transform_hlds__implicit_parallelism__push_goals_together__find_relative_paths_3_0,40,4,6,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_relative_paths'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__implicit_parallelism__push_goals_together__find_relative_paths_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__find_relative_paths_3_0_i40);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__find_relative_paths_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(mdbcomp__goal_path__goal_path_from_string_2_0,
		transform_hlds__implicit_parallelism__push_goals_together__find_relative_paths_3_0_i4);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__find_relative_paths_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__find_relative_paths_3_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_path_step);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__append_3_3,
		transform_hlds__implicit_parallelism__push_goals_together__find_relative_paths_3_0_i6);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__find_relative_paths_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__find_relative_paths_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_localcall_lab(transform_hlds__implicit_parallelism__push_goals_together__find_relative_paths_3_0,
		transform_hlds__implicit_parallelism__push_goals_together__find_relative_paths_3_0_i8);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__find_relative_paths_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__find_relative_paths_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
	}
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__find_relative_paths_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(mdbcomp__goal_path__goal_path_from_string_det_2_0);

MR_BEGIN_MODULE(transform_hlds__implicit_parallelism__push_goals_together_module15)
	MR_init_entry1(transform_hlds__implicit_parallelism__push_goals_together__perform_push_transform_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__implicit_parallelism__push_goals_together__perform_push_transform_5_0);
	MR_init_label9(transform_hlds__implicit_parallelism__push_goals_together__perform_push_transform_5_0,2,7,8,15,17,19,21,22,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'perform_push_transform'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__implicit_parallelism__push_goals_together__perform_push_transform_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(9) = MR_r2;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_sv(2) = MR_tfield(0, MR_r1, 2);
	MR_sv(3) = MR_tfield(0, MR_r1, 3);
	MR_sv(8) = MR_r3;
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(mdbcomp__goal_path__goal_path_from_string_det_2_0,
		transform_hlds__implicit_parallelism__push_goals_together__perform_push_transform_5_0_i2);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__perform_push_transform_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_sv(8);
	MR_tempr1 = MR_tfield(0, MR_tempr4, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,2)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__perform_push_transform_5_0_i4);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__perform_push_transform_5_0_i4);
	}
	MR_tempr2 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_tempr3 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr4, 1);
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr3;
	MR_r5 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__push_goals_together__find_lo_hi_goals_9_0,
		transform_hlds__implicit_parallelism__push_goals_together__perform_push_transform_5_0_i7);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__perform_push_transform_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__perform_push_transform_5_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__push_goals_together__find_relative_paths_3_0,
		transform_hlds__implicit_parallelism__push_goals_together__perform_push_transform_5_0_i8);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__perform_push_transform_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__perform_push_transform_5_0_i4);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__perform_push_transform_5_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__perform_push_transform_5_0_i4);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__perform_push_transform_5_0_i4);
	}
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_COMMON(2,4);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__implicit_parallelism__push_goals_together__maybe_steps_after_3_0);
	MR_tfield(0, MR_tempr3, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr3, 3) = MR_tempr2;
	MR_sv(5) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(6) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r4 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(list__map_3_2,
		transform_hlds__implicit_parallelism__push_goals_together__perform_push_transform_5_0_i15);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__perform_push_transform_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__perform_push_transform_5_0_i4);
	}
	MR_sv(7) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(list__index1_3_0,
		transform_hlds__implicit_parallelism__push_goals_together__perform_push_transform_5_0_i17);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__perform_push_transform_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__perform_push_transform_5_0_i4);
	}
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_0,
		transform_hlds__implicit_parallelism__push_goals_together__perform_push_transform_5_0_i19);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__perform_push_transform_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__perform_push_transform_5_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(5);
	MR_tempr1 = ((MR_Integer) MR_sv(1) - (MR_Integer) MR_tempr3);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__perform_push_transform_5_0_i4);
	}
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr3;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__det_replace_nth_4_0,
		transform_hlds__implicit_parallelism__push_goals_together__perform_push_transform_5_0_i21);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__perform_push_transform_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__implicit_parallelism__push_goals_together__perform_push_transform_5_0_i22);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__perform_push_transform_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tfield(0, MR_r2, 1) = MR_sv(2);
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__perform_push_transform_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(8);
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__implicit_parallelism__push_goals_together_module16)
	MR_init_entry1(transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_0);
	MR_init_label10(transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_0,3,9,6,16,13,23,20,30,27,36)
	MR_init_label7(transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_0,33,43,40,50,47,57,54)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_push_in_goal'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_0_i3);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(transform_hlds__implicit_parallelism__push_goals_together__perform_push_transform_5_0);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_tfield(1, MR_r1, 0);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r4, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,6)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_0_i54);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r4, 1);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 4);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_r4 = MR_tfield(3, MR_tempr1, 2);
	}
	MR_np_localcall_lab(transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_0,
		transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_0_i9);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_tfield(3, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(3);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tfield(0, MR_r2, 1) = MR_sv(1);
	MR_decr_sp_and_return(5);
	}
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,2)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_0_i13);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r4, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,6)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_0_i54);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r4, 1);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 3);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_r4 = MR_tfield(3, MR_tempr1, 4);
	}
	MR_np_localcall_lab(transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_0,
		transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_0_i16);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 4) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tfield(0, MR_r2, 1) = MR_sv(1);
	MR_decr_sp_and_return(5);
	}
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_0_i20);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r4, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,6)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_0_i54);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r4, 1);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 4);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_r4 = MR_tfield(3, MR_tempr1, 3);
	}
	MR_np_localcall_lab(transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_0,
		transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_0_i23);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_r2;
	MR_tfield(3, MR_tempr1, 4) = MR_sv(3);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tfield(0, MR_r2, 1) = MR_sv(1);
	MR_decr_sp_and_return(5);
	}
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,3)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_0_i27);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r4, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_0_i54);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r4, 1);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_r4 = MR_body((MR_Integer) MR_tempr1, (MR_Integer) 0);
	}
	MR_np_localcall_lab(transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_0,
		transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_0_i30);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tmkword(0, (MR_Word *) MR_r2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_0_i33);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(0, MR_r4, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,2)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_0_i54);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r4, 1);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tfield(1, MR_r5, 0);
	MR_tempr3 = MR_r2;
	MR_r2 = MR_tfield(1, MR_tempr2, 1);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr3;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goals_7_0,
		transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_0_i36);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tfield(0, MR_r2, 1) = MR_sv(1);
	MR_decr_sp_and_return(5);
	}
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,2)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_0_i40);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(0, MR_r4, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,3)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_0_i54);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r4, 1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tfield(2, MR_r5, 0);
	MR_tempr3 = MR_r2;
	MR_r2 = MR_tfield(1, MR_tempr2, 1);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr3;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goals_7_0,
		transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_0_i43);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tfield(0, MR_r2, 1) = MR_sv(1);
	MR_decr_sp_and_return(5);
	}
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_0_i47);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r4, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,5)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_0_i54);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r4, 1);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_r4 = MR_tfield(3, MR_tempr1, 2);
	}
	MR_np_localcall_lab(transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_0,
		transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_0_i50);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tfield(0, MR_r2, 1) = MR_sv(1);
	MR_decr_sp_and_return(5);
	}
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_0_i54);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(0, MR_r4, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_0_i54);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r4, 1);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tfield(3, MR_r5, 1);
	MR_tempr3 = MR_r2;
	MR_r2 = MR_tfield(1, MR_tempr2, 1);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr3;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tfield(3, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__push_goals_together__do_push_in_cases_7_0,
		transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_0_i57);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tfield(0, MR_r2, 1) = MR_sv(1);
	MR_decr_sp_and_return(5);
	}
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_r4;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__implicit_parallelism__push_goals_together_module17)
	MR_init_entry1(transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goals_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goals_7_0);
	MR_init_label4(transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goals_7_0,28,6,4,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_push_in_goals'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goals_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goals_7_0_i28);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goals_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_r6 = MR_tfield(1, MR_tempr1, 0);
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goals_7_0_i4);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r6;
	}
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_0,
		transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goals_7_0_i6);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goals_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goals_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r6;
	MR_r1 = ((MR_Integer) MR_r1 - (MR_Integer) 1);
	MR_r5 = MR_tempr1;
	}
	MR_np_localcall_lab(transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goals_7_0,
		transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goals_7_0_i8);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goals_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__implicit_parallelism__push_goals_together_module18)
	MR_init_entry1(transform_hlds__implicit_parallelism__push_goals_together__do_push_in_cases_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__implicit_parallelism__push_goals_together__do_push_in_cases_7_0);
	MR_init_label4(transform_hlds__implicit_parallelism__push_goals_together__do_push_in_cases_7_0,29,6,4,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_push_in_cases'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__implicit_parallelism__push_goals_together__do_push_in_cases_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__do_push_in_cases_7_0_i29);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__do_push_in_cases_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r5;
	MR_sv(1) = MR_tfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	MR_r6 = MR_tempr1;
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__do_push_in_cases_7_0_i4);
	}
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_tfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_0,
		transform_hlds__implicit_parallelism__push_goals_together__do_push_in_cases_7_0_i6);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__do_push_in_cases_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = MR_sv(1);
	MR_decr_sp_and_return(4);
	}
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__do_push_in_cases_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r6;
	MR_r1 = ((MR_Integer) MR_r1 - (MR_Integer) 1);
	MR_r5 = MR_tempr1;
	}
	MR_np_localcall_lab(transform_hlds__implicit_parallelism__push_goals_together__do_push_in_cases_7_0,
		transform_hlds__implicit_parallelism__push_goals_together__do_push_in_cases_7_0_i9);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__do_push_in_cases_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__implicit_parallelism__push_goals_together_module19)
	MR_init_entry1(transform_hlds__implicit_parallelism__push_goals_together__do_push_list_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__implicit_parallelism__push_goals_together__do_push_list_5_0);
	MR_init_label6(transform_hlds__implicit_parallelism__push_goals_together__do_push_list_5_0,26,3,6,8,10,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_push_list'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__implicit_parallelism__push_goals_together__do_push_list_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__do_push_list_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__do_push_list_5_0_i3);
	}
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(5);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__do_push_list_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_r1, 0);
	MR_sv(4) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_sv(3), 0);
	MR_np_call_localret_ent(mdbcomp__goal_path__goal_path_from_string_2_0,
		transform_hlds__implicit_parallelism__push_goals_together__do_push_list_5_0_i6);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__do_push_list_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__do_push_list_5_0_i4);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_0,
		transform_hlds__implicit_parallelism__push_goals_together__do_push_list_5_0_i8);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__do_push_list_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__do_push_list_5_0_i10);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(5);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__do_push_list_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__do_push_list_5_0_i26);
	}
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__do_push_list_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_varset_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_vartypes_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_rtti_varmaps_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(fn__hlds__hlds_out__hlds_out_util__init_hlds_out_info_1_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_headvars_2_0);
MR_decl_entry(hlds__quantification__implicitly_quantify_clause_body_general_11_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_initial_instmap_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_inst_varset_2_0);
MR_decl_entry(check_hlds__mode_util__recompute_instmap_delta_8_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_goal_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_varset_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_vartypes_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_rtti_varmaps_3_0);

MR_BEGIN_MODULE(transform_hlds__implicit_parallelism__push_goals_together_module20)
	MR_init_entry1(transform_hlds__implicit_parallelism__push_goals_together__push_goals_in_proc_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__implicit_parallelism__push_goals_together__push_goals_in_proc_6_0);
	MR_init_label10(transform_hlds__implicit_parallelism__push_goals_together__push_goals_in_proc_6_0,2,3,4,5,6,7,8,10,11,12)
	MR_init_label7(transform_hlds__implicit_parallelism__push_goals_together__push_goals_in_proc_6_0,13,14,15,16,17,18,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'push_goals_in_proc'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__implicit_parallelism__push_goals_together__push_goals_in_proc_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__implicit_parallelism__push_goals_together__push_goals_in_proc_6_0_i2);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_goals_in_proc_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		transform_hlds__implicit_parallelism__push_goals_together__push_goals_in_proc_6_0_i3);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_goals_in_proc_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__implicit_parallelism__push_goals_together__push_goals_in_proc_6_0_i4);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_goals_in_proc_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_rtti_varmaps_2_0,
		transform_hlds__implicit_parallelism__push_goals_together__push_goals_in_proc_6_0_i5);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_goals_in_proc_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		transform_hlds__implicit_parallelism__push_goals_together__push_goals_in_proc_6_0_i6);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_goals_in_proc_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_util__init_hlds_out_info_1_0,
		transform_hlds__implicit_parallelism__push_goals_together__push_goals_in_proc_6_0_i7);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_goals_in_proc_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__push_goals_together__do_push_list_5_0,
		transform_hlds__implicit_parallelism__push_goals_together__push_goals_in_proc_6_0_i8);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_goals_in_proc_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__push_goals_in_proc_6_0_i10);
	}
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_decr_sp_and_return(9);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_goals_in_proc_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		transform_hlds__implicit_parallelism__push_goals_together__push_goals_in_proc_6_0_i11);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_goals_in_proc_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__quantification__implicitly_quantify_clause_body_general_11_0,
		transform_hlds__implicit_parallelism__push_goals_together__push_goals_in_proc_6_0_i12);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_goals_in_proc_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_initial_instmap_3_0,
		transform_hlds__implicit_parallelism__push_goals_together__push_goals_in_proc_6_0_i13);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_goals_in_proc_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_inst_varset_2_0,
		transform_hlds__implicit_parallelism__push_goals_together__push_goals_in_proc_6_0_i14);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_goals_in_proc_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(7);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__recompute_instmap_delta_8_0,
		transform_hlds__implicit_parallelism__push_goals_together__push_goals_in_proc_6_0_i15);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_goals_in_proc_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r2;
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		transform_hlds__implicit_parallelism__push_goals_together__push_goals_in_proc_6_0_i16);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_goals_in_proc_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_varset_3_0,
		transform_hlds__implicit_parallelism__push_goals_together__push_goals_in_proc_6_0_i17);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_goals_in_proc_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_vartypes_3_0,
		transform_hlds__implicit_parallelism__push_goals_together__push_goals_in_proc_6_0_i18);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_goals_in_proc_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_rtti_varmaps_3_0,
		transform_hlds__implicit_parallelism__push_goals_together__push_goals_in_proc_6_0_i19);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__push_goals_in_proc_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(8);
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_rtti__rtti_varmaps_var_info_3_0);

MR_BEGIN_MODULE(transform_hlds__implicit_parallelism__push_goals_together_module21)
	MR_init_entry1(transform_hlds__implicit_parallelism__push_goals_together__is_non_rtti_var_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__implicit_parallelism__push_goals_together__is_non_rtti_var_2_0);
	MR_init_label2(transform_hlds__implicit_parallelism__push_goals_together__is_non_rtti_var_2_0,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_non_rtti_var'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__implicit_parallelism__push_goals_together__is_non_rtti_var_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(hlds__hlds_rtti__rtti_varmaps_var_info_3_0,
		transform_hlds__implicit_parallelism__push_goals_together__is_non_rtti_var_2_0_i2);
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__is_non_rtti_var_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__push_goals_together__is_non_rtti_var_2_0_i1);
	}
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__implicit_parallelism__push_goals_together__is_non_rtti_var_2_0,1)
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


MR_BEGIN_MODULE(transform_hlds__implicit_parallelism__push_goals_together_module22)
	MR_init_entry1(__Unify___transform_hlds__implicit_parallelism__push_goals_together__maybe_pushable_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__implicit_parallelism__push_goals_together__maybe_pushable_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__implicit_parallelism__push_goals_together__maybe_pushable_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(transform_hlds__implicit_parallelism__push_goals_together_module23)
	MR_init_entry1(__Compare___transform_hlds__implicit_parallelism__push_goals_together__maybe_pushable_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__implicit_parallelism__push_goals_together__maybe_pushable_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__implicit_parallelism__push_goals_together__maybe_pushable_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__unify_2_0);
MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(transform_hlds__implicit_parallelism__push_goals_together_module24)
	MR_init_entry1(__Unify___transform_hlds__implicit_parallelism__push_goals_together__one_or_more_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__implicit_parallelism__push_goals_together__one_or_more_1_0);
	MR_init_label3(__Unify___transform_hlds__implicit_parallelism__push_goals_together__one_or_more_1_0,4,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__implicit_parallelism__push_goals_together__one_or_more_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___transform_hlds__implicit_parallelism__push_goals_together__one_or_more_1_0_i8);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___transform_hlds__implicit_parallelism__push_goals_together__one_or_more_1_0_i4);
MR_def_label(__Unify___transform_hlds__implicit_parallelism__push_goals_together__one_or_more_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__implicit_parallelism__push_goals_together__one_or_more_1_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___transform_hlds__implicit_parallelism__push_goals_together__one_or_more_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__implicit_parallelism__push_goals_together__one_or_more_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__compare_3_0);
MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(transform_hlds__implicit_parallelism__push_goals_together_module25)
	MR_init_entry1(__Compare___transform_hlds__implicit_parallelism__push_goals_together__one_or_more_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__implicit_parallelism__push_goals_together__one_or_more_1_0);
	MR_init_label4(__Compare___transform_hlds__implicit_parallelism__push_goals_together__one_or_more_1_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__implicit_parallelism__push_goals_together__one_or_more_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___transform_hlds__implicit_parallelism__push_goals_together__one_or_more_1_0_i3);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_GOTO_LAB(__Compare___transform_hlds__implicit_parallelism__push_goals_together__one_or_more_1_0_i2);
MR_def_label(__Compare___transform_hlds__implicit_parallelism__push_goals_together__one_or_more_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__implicit_parallelism__push_goals_together__one_or_more_1_0,2)
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
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___transform_hlds__implicit_parallelism__push_goals_together__one_or_more_1_0_i5);
MR_def_label(__Compare___transform_hlds__implicit_parallelism__push_goals_together__one_or_more_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__implicit_parallelism__push_goals_together__one_or_more_1_0_i21);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___transform_hlds__implicit_parallelism__push_goals_together__one_or_more_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___hlds__hlds_rtti__rtti_varmaps_0_0);

MR_BEGIN_MODULE(transform_hlds__implicit_parallelism__push_goals_together_module26)
	MR_init_entry1(__Unify___transform_hlds__implicit_parallelism__push_goals_together__push_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__implicit_parallelism__push_goals_together__push_info_0_0);
	MR_init_label1(__Unify___transform_hlds__implicit_parallelism__push_goals_together__push_info_0_0,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__implicit_parallelism__push_goals_together__push_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__implicit_parallelism__push_goals_together__push_info_0_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___hlds__hlds_rtti__rtti_varmaps_0_0);
MR_def_label(__Unify___transform_hlds__implicit_parallelism__push_goals_together__push_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___hlds__hlds_rtti__rtti_varmaps_0_0);

MR_BEGIN_MODULE(transform_hlds__implicit_parallelism__push_goals_together_module27)
	MR_init_entry1(__Compare___transform_hlds__implicit_parallelism__push_goals_together__push_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__implicit_parallelism__push_goals_together__push_info_0_0);
	MR_init_label2(__Compare___transform_hlds__implicit_parallelism__push_goals_together__push_info_0_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__implicit_parallelism__push_goals_together__push_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__implicit_parallelism__push_goals_together__push_info_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__implicit_parallelism__push_goals_together__push_info_0_0_i2);
MR_def_label(__Compare___transform_hlds__implicit_parallelism__push_goals_together__push_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__implicit_parallelism__push_goals_together__push_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___hlds__hlds_rtti__rtti_varmaps_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__implicit_parallelism__push_goals_together_module28)
	MR_init_entry1(__Unify___transform_hlds__implicit_parallelism__push_goals_together__push_result_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__implicit_parallelism__push_goals_together__push_result_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___transform_hlds__implicit_parallelism__push_goals_together__push_result_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__implicit_parallelism__push_goals_together_module29)
	MR_init_entry1(__Compare___transform_hlds__implicit_parallelism__push_goals_together__push_result_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__implicit_parallelism__push_goals_together__push_result_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___transform_hlds__implicit_parallelism__push_goals_together__push_result_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__implicit_parallelism__push_goals_together_module30)
	MR_init_entry1(transform_hlds__implicit_parallelism__push_goals_together__IntroducedFrom__pred__push_into_goal__623__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__implicit_parallelism__push_goals_together__IntroducedFrom__pred__push_into_goal__623__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__push_into_goal__623__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__implicit_parallelism__push_goals_together__IntroducedFrom__pred__push_into_goal__623__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
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


MR_BEGIN_MODULE(transform_hlds__implicit_parallelism__push_goals_together_module31)
	MR_init_entry1(transform_hlds__implicit_parallelism__push_goals_together__IntroducedFrom__pred__push_into_goal__644__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__implicit_parallelism__push_goals_together__IntroducedFrom__pred__push_into_goal__644__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__push_into_goal__644__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__implicit_parallelism__push_goals_together__IntroducedFrom__pred__push_into_goal__644__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
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

static void mercury__transform_hlds__implicit_parallelism__push_goals_together_maybe_bunch_0(void)
{
	transform_hlds__implicit_parallelism__push_goals_together_module0();
	transform_hlds__implicit_parallelism__push_goals_together_module1();
	transform_hlds__implicit_parallelism__push_goals_together_module2();
	transform_hlds__implicit_parallelism__push_goals_together_module3();
	transform_hlds__implicit_parallelism__push_goals_together_module4();
	transform_hlds__implicit_parallelism__push_goals_together_module5();
	transform_hlds__implicit_parallelism__push_goals_together_module6();
	transform_hlds__implicit_parallelism__push_goals_together_module7();
	transform_hlds__implicit_parallelism__push_goals_together_module8();
	transform_hlds__implicit_parallelism__push_goals_together_module9();
	transform_hlds__implicit_parallelism__push_goals_together_module10();
	transform_hlds__implicit_parallelism__push_goals_together_module11();
	transform_hlds__implicit_parallelism__push_goals_together_module12();
	transform_hlds__implicit_parallelism__push_goals_together_module13();
	transform_hlds__implicit_parallelism__push_goals_together_module14();
	transform_hlds__implicit_parallelism__push_goals_together_module15();
	transform_hlds__implicit_parallelism__push_goals_together_module16();
	transform_hlds__implicit_parallelism__push_goals_together_module17();
	transform_hlds__implicit_parallelism__push_goals_together_module18();
	transform_hlds__implicit_parallelism__push_goals_together_module19();
	transform_hlds__implicit_parallelism__push_goals_together_module20();
	transform_hlds__implicit_parallelism__push_goals_together_module21();
	transform_hlds__implicit_parallelism__push_goals_together_module22();
	transform_hlds__implicit_parallelism__push_goals_together_module23();
	transform_hlds__implicit_parallelism__push_goals_together_module24();
	transform_hlds__implicit_parallelism__push_goals_together_module25();
	transform_hlds__implicit_parallelism__push_goals_together_module26();
	transform_hlds__implicit_parallelism__push_goals_together_module27();
	transform_hlds__implicit_parallelism__push_goals_together_module28();
	transform_hlds__implicit_parallelism__push_goals_together_module29();
	transform_hlds__implicit_parallelism__push_goals_together_module30();
	transform_hlds__implicit_parallelism__push_goals_together_module31();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__transform_hlds__implicit_parallelism__push_goals_together__init(void);
void mercury__transform_hlds__implicit_parallelism__push_goals_together__init_type_tables(void);
void mercury__transform_hlds__implicit_parallelism__push_goals_together__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__transform_hlds__implicit_parallelism__push_goals_together__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__implicit_parallelism__push_goals_together__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__transform_hlds__implicit_parallelism__push_goals_together__init_threadscope_string_table(void);
#endif

void mercury__transform_hlds__implicit_parallelism__push_goals_together__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__transform_hlds__implicit_parallelism__push_goals_together_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__implicit_parallelism__push_goals_together__type_ctor_info_maybe_pushable_0,
		transform_hlds__implicit_parallelism__push_goals_together__maybe_pushable_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__implicit_parallelism__push_goals_together__type_ctor_info_one_or_more_1,
		transform_hlds__implicit_parallelism__push_goals_together__one_or_more_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__implicit_parallelism__push_goals_together__type_ctor_info_push_info_0,
		transform_hlds__implicit_parallelism__push_goals_together__push_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__implicit_parallelism__push_goals_together__type_ctor_info_push_result_0,
		transform_hlds__implicit_parallelism__push_goals_together__push_result_0_0);
	mercury__transform_hlds__implicit_parallelism__push_goals_together__init_debugger();
}

void mercury__transform_hlds__implicit_parallelism__push_goals_together__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__implicit_parallelism__push_goals_together__type_ctor_info_maybe_pushable_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__implicit_parallelism__push_goals_together__type_ctor_info_one_or_more_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__implicit_parallelism__push_goals_together__type_ctor_info_push_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__implicit_parallelism__push_goals_together__type_ctor_info_push_result_0);
	}
}


void mercury__transform_hlds__implicit_parallelism__push_goals_together__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__transform_hlds__implicit_parallelism__push_goals_together__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__transform_hlds__implicit_parallelism__push_goals_together);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__implicit_parallelism__push_goals_together__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__transform_hlds__implicit_parallelism__push_goals_together__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
