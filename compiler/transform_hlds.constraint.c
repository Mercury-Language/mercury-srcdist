/*
** Automatically generated from `constraint.m'
** by the Mercury compiler,
** version rotd-2007-08-01, configured for i686-pc-linux-gnu.
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
INIT mercury__transform_hlds__constraint__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 530 "../library/io.int"
#include "io.mh"

#line 27 "transform_hlds.constraint.c"
#line 538 "../library/io.int"
#include "string.mh"

#line 31 "transform_hlds.constraint.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "transform_hlds.constraint.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "transform_hlds.constraint.c"
#line 17 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 43 "transform_hlds.constraint.c"
#line 44 "transform_hlds.constraint.c"
#include "transform_hlds.constraint.mh"

#line 47 "transform_hlds.constraint.c"
#line 48 "transform_hlds.constraint.c"
#ifndef TRANSFORM_HLDS__CONSTRAINT_DECL_GUARD
#define TRANSFORM_HLDS__CONSTRAINT_DECL_GUARD

#line 52 "transform_hlds.constraint.c"
#line 53 "transform_hlds.constraint.c"

#endif
#line 56 "transform_hlds.constraint.c"

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
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_transform_hlds__constraint__type_ctor_info_constraint_info_0,
	mercury_data_transform_hlds__constraint__type_ctor_info_constraint_0,
	mercury_data_transform_hlds__constraint__type_ctor_info_constrained_conj_0,
	mercury_data_transform_hlds__constraint__type_ctor_info_annotated_conjunct_0,
	mercury_data_transform_hlds__constraint__type_ctor_info_annotated_conj_0;
MR_decl_label5(transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_output_vars__303__1_5_0, 2,3,6,7,1)
MR_decl_label5(transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_output_vars__316__1_5_0, 2,3,6,7,1)
MR_decl_label8(transform_hlds__constraint__add_constant_construction_6_0, 5,6,8,9,10,11,12,13)
MR_decl_label3(transform_hlds__constraint__add_constant_construction_6_0, 4,15,3)
MR_decl_label8(transform_hlds__constraint__annotate_conj_constraints_9_0, 113,4,5,7,9,8,11,13)
MR_decl_label8(transform_hlds__constraint__annotate_conj_constraints_9_0, 6,19,15,21,22,23,20,25)
MR_decl_label8(transform_hlds__constraint__annotate_conj_constraints_9_0, 27,28,29,24,35,37,38,40)
MR_decl_label8(transform_hlds__constraint__annotate_conj_constraints_9_0, 41,42,43,44,32,45,46,3)
MR_decl_label3(transform_hlds__constraint__annotate_conj_constraints_9_0, 53,54,55)
MR_decl_label8(transform_hlds__constraint__annotate_conj_output_vars_6_0, 19,4,5,6,7,8,9,10)
MR_decl_label3(transform_hlds__constraint__annotate_conj_output_vars_6_0, 11,12,3)
MR_decl_label1(transform_hlds__constraint__constraint_info_update_changed_3_0, 3)
MR_decl_label2(transform_hlds__constraint__constraint_info_update_goal_3_0, 2,3)
MR_decl_label8(transform_hlds__constraint__filter_complex_constraints_2_5_0, 36,5,11,13,14,15,10,4)
MR_decl_label1(transform_hlds__constraint__filter_complex_constraints_2_5_0, 3)
MR_decl_label3(transform_hlds__constraint__filter_dependent_constraints_5_0, 2,3,4)
MR_decl_label8(transform_hlds__constraint__filter_dependent_constraints_2_7_0, 48,4,9,12,8,15,18,33)
MR_decl_label8(transform_hlds__constraint__filter_dependent_constraints_2_7_0, 14,22,24,25,26,21,7,6)
MR_decl_label1(transform_hlds__constraint__filter_dependent_constraints_2_7_0, 3)
MR_decl_label2(transform_hlds__constraint__flatten_constraints_2_0, 2,3)
MR_decl_label5(transform_hlds__constraint__goal_is_simple_1_0, 25,5,8,2,1)
MR_decl_label5(transform_hlds__constraint__propagate_cases_8_0, 4,5,6,7,3)
MR_decl_label7(transform_hlds__constraint__propagate_conj_7_0, 3,2,6,4,7,12,13)
MR_decl_label8(transform_hlds__constraint__propagate_conj_constraints_7_0, 21,4,5,6,7,8,9,10)
MR_decl_label5(transform_hlds__constraint__propagate_conj_constraints_7_0, 11,12,13,3,15)
MR_decl_label4(transform_hlds__constraint__propagate_conj_sub_goal_7_0, 4,2,7,9)
MR_decl_label8(transform_hlds__constraint__propagate_conj_sub_goal_2_7_0, 4,5,8,9,10,11,12,13)
MR_decl_label8(transform_hlds__constraint__propagate_conj_sub_goal_2_7_0, 16,15,17,18,19,20,21,22)
MR_decl_label8(transform_hlds__constraint__propagate_conj_sub_goal_2_7_0, 23,24,25,26,29,37,67,44)
MR_decl_label8(transform_hlds__constraint__propagate_conj_sub_goal_2_7_0, 45,41,42,43,39,40,48,49)
MR_decl_label5(transform_hlds__constraint__propagate_conj_sub_goal_2_7_0, 50,51,52,53,54)
MR_decl_label1(transform_hlds__constraint__propagate_constraints_in_goal_6_0, 2)
MR_decl_label8(transform_hlds__constraint__propagate_goal_7_0, 2,3,4,5,6,7,8,9)
MR_decl_label4(transform_hlds__constraint__propagate_goal_7_0, 10,11,12,13)
MR_decl_label3(transform_hlds__constraint__propagate_in_independent_goals_7_0, 4,5,3)
MR_decl_label2(fn__transform_hlds__constraint__IntroducedFrom__func__attach_constraints__513__1_1_0, 2,3)
MR_decl_label1(fn__transform_hlds__constraint__IntroducedFrom__func__strip_constraint_markers_expr__798__1_1_0, 2)
MR_decl_label1(fn__transform_hlds__constraint__add_constraint_feature_1_0, 2)
MR_decl_label2(fn__transform_hlds__constraint__attach_constraints_2_0, 4,2)
MR_decl_label4(fn__transform_hlds__constraint__strip_constraint_markers_1_0, 2,4,6,3)
MR_decl_label8(fn__transform_hlds__constraint__strip_constraint_markers_expr_1_0, 38,10,39,12,40,14,41,16)
MR_decl_label7(fn__transform_hlds__constraint__strip_constraint_markers_expr_1_0, 42,18,43,20,21,22,37)
MR_decl_label5(__Unify___transform_hlds__constraint__annotated_conjunct_0_0, 4,6,8,12,1)
MR_decl_label5(__Unify___transform_hlds__constraint__constraint_0_0, 4,6,8,12,1)
MR_decl_label6(__Unify___transform_hlds__constraint__constraint_info_0_0, 4,6,8,10,12,1)
MR_decl_label6(__Compare___transform_hlds__constraint__annotated_conjunct_0_0, 3,2,5,9,13,37)
MR_decl_label6(__Compare___transform_hlds__constraint__constraint_0_0, 3,2,5,9,13,37)
MR_decl_label7(__Compare___transform_hlds__constraint__constraint_info_0_0, 3,2,5,9,13,17,45)
MR_decl_static(transform_hlds__constraint__flatten_constraints_2_0)
MR_decl_static(transform_hlds__constraint__constraint_info_update_goal_3_0)
MR_decl_static(fn__transform_hlds__constraint__this_file_0_0)
MR_decl_static(transform_hlds__constraint__constraint_info_update_changed_3_0)
MR_decl_static(transform_hlds__constraint__annotate_conj_output_vars_6_0)
MR_decl_static(fn__transform_hlds__constraint__attach_constraints_2_0)
MR_decl_static(transform_hlds__constraint__add_constant_construction_6_0)
MR_decl_static(transform_hlds__constraint__filter_dependent_constraints_2_7_0)
MR_decl_static(transform_hlds__constraint__filter_dependent_constraints_5_0)
MR_decl_static(transform_hlds__constraint__annotate_conj_constraints_9_0)
MR_decl_static(transform_hlds__constraint__goal_is_simple_1_0)
MR_decl_static(transform_hlds__constraint__filter_complex_constraints_2_5_0)
MR_decl_static(transform_hlds__constraint__propagate_goal_7_0)
MR_decl_static(transform_hlds__constraint__propagate_conj_sub_goal_7_0)
MR_decl_static(transform_hlds__constraint__propagate_conj_sub_goal_2_7_0)
MR_decl_static(transform_hlds__constraint__propagate_in_independent_goals_7_0)
MR_decl_static(transform_hlds__constraint__propagate_cases_8_0)
MR_decl_static(transform_hlds__constraint__propagate_conj_7_0)
MR_decl_static(transform_hlds__constraint__propagate_conj_constraints_7_0)
MR_decl_static(fn__transform_hlds__constraint__strip_constraint_markers_1_0)
MR_decl_static(fn__transform_hlds__constraint__strip_constraint_markers_expr_1_0)
MR_def_extern_entry(transform_hlds__constraint__propagate_constraints_in_goal_6_0)
MR_def_extern_entry(transform_hlds__constraint__constraint_info_init_5_0)
MR_def_extern_entry(transform_hlds__constraint__constraint_info_deconstruct_5_0)
MR_decl_static(transform_hlds__constraint__add_empty_constraints_2_0)
MR_decl_static(fn__transform_hlds__constraint__add_constraint_feature_1_0)
MR_decl_static(__Unify___transform_hlds__constraint__annotated_conj_0_0)
MR_decl_static(__Compare___transform_hlds__constraint__annotated_conj_0_0)
MR_decl_static(__Unify___transform_hlds__constraint__annotated_conjunct_0_0)
MR_decl_static(__Compare___transform_hlds__constraint__annotated_conjunct_0_0)
MR_decl_static(__Unify___transform_hlds__constraint__constrained_conj_0_0)
MR_decl_static(__Compare___transform_hlds__constraint__constrained_conj_0_0)
MR_decl_static(__Unify___transform_hlds__constraint__constraint_0_0)
MR_decl_static(__Compare___transform_hlds__constraint__constraint_0_0)
MR_def_extern_entry(__Unify___transform_hlds__constraint__constraint_info_0_0)
MR_def_extern_entry(__Compare___transform_hlds__constraint__constraint_info_0_0)
MR_decl_static(transform_hlds__constraint__IntroducedFrom__pred__flatten_constraints__215__1_2_0)
MR_decl_static(transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_output_vars__303__1_5_0)
MR_decl_static(transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_output_vars__316__1_5_0)
MR_decl_static(transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_constraints__397__1_2_0)
MR_decl_static(fn__transform_hlds__constraint__IntroducedFrom__func__attach_constraints__513__1_1_0)
MR_decl_static(fn__transform_hlds__constraint__IntroducedFrom__func__strip_constraint_markers_expr__798__1_1_0)

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__constraint__type_ctor_info_constraint_0;
static const struct mercury_type_0 mercury_common_0[9] =
{
{
{
MR_LIST_CTOR_ADDR,
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
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_COMMON(0,2)
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
MR_CTOR0_ADDR(transform_hlds__constraint, constraint)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(transform_hlds__constraint, constraint)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__constraint__flatten_constraints_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__constraint__type_ctor_info_constraint_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__constraint__attach_constraints_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__constraint__annotate_conj_constraints_9_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__constraint__annotate_conj_constraints_9_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__constraint__annotate_conj_constraints_9_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__constraint__strip_constraint_markers_expr_1_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__constraint__strip_constraint_markers_expr_1_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__constraint__strip_constraint_markers_expr_1_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_case_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__constraint__IntroducedFrom__func__attach_constraints__513__1_1_0_1;
static const struct mercury_type_1 mercury_common_1[9] =
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__constraint__flatten_constraints_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(transform_hlds__constraint, constraint),
MR_COMMON(0,3)
},
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__constraint__attach_constraints_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(transform_hlds__constraint, constraint),
MR_CTOR0_ADDR(transform_hlds__constraint, constraint)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__constraint__annotate_conj_constraints_9_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(3,2)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__constraint__annotate_conj_constraints_9_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(3,2)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__constraint__annotate_conj_constraints_9_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(3,2)
},
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__constraint__strip_constraint_markers_expr_1_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
},
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__constraint__strip_constraint_markers_expr_1_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
},
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__constraint__strip_constraint_markers_expr_1_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, case),
MR_CTOR0_ADDR(hlds__hlds_goal, case)
},
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__constraint__IntroducedFrom__func__attach_constraints__513__1_1_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
},
};

static const struct mercury_type_2 mercury_common_2[9] =
{
{
MR_COMMON(1,0),
MR_ENTRY_AP(transform_hlds__constraint__IntroducedFrom__pred__flatten_constraints__215__1_2_0),
0
},
{
MR_COMMON(1,1),
MR_ENTRY_AP(fn__transform_hlds__constraint__IntroducedFrom__func__attach_constraints__513__1_1_0),
0
},
{
MR_COMMON(1,2),
MR_ENTRY_AP(transform_hlds__constraint__add_empty_constraints_2_0),
0
},
{
MR_COMMON(1,3),
MR_ENTRY_AP(transform_hlds__constraint__add_empty_constraints_2_0),
0
},
{
MR_COMMON(1,4),
MR_ENTRY_AP(transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_constraints__397__1_2_0),
0
},
{
MR_COMMON(1,5),
MR_ENTRY_AP(fn__transform_hlds__constraint__strip_constraint_markers_1_0),
0
},
{
MR_COMMON(1,6),
MR_ENTRY_AP(fn__transform_hlds__constraint__strip_constraint_markers_1_0),
0
},
{
MR_COMMON(1,7),
MR_ENTRY_AP(fn__transform_hlds__constraint__IntroducedFrom__func__strip_constraint_markers_expr__798__1_1_0),
0
},
{
MR_COMMON(1,8),
MR_ENTRY_AP(fn__transform_hlds__constraint__add_constraint_feature_1_0),
0
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
static const struct mercury_type_3 mercury_common_3[3] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(0,4),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_TAG_COMMON(0,0,7)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(0,8)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__constraint__annotate_conj_output_vars_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__instmap__type_ctor_info_instmap_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__constraint__annotate_conj_output_vars_6_0_2;
static const struct mercury_type_4 mercury_common_4[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__constraint__annotate_conj_output_vars_6_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(3,0),
MR_CTOR0_ADDR(hlds__instmap, instmap),
MR_CTOR0_ADDR(hlds__instmap, instmap),
MR_COMMON(0,5)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__constraint__annotate_conj_output_vars_6_0_2,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(3,0),
MR_CTOR0_ADDR(hlds__instmap, instmap),
MR_CTOR0_ADDR(hlds__instmap, instmap),
MR_COMMON(0,5)
}
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;

static const MR_FA_TypeInfo_Struct1 mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_varset__type_ctor_info_varset_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__instmap__type_ctor_info_instmap_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__instmap__type_ctor_info_instmap_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;

const MR_PseudoTypeInfo mercury_data_transform_hlds__constraint__field_types_constraint_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_module__type_ctor_info_module_info_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__instmap__type_ctor_info_instmap_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0
};

const MR_ConstString mercury_data_transform_hlds__constraint__field_names_constraint_info_0_0[] = {
	"module_info",
	"vartypes",
	"varset",
	"instmap",
	"changed"
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__constraint__du_functor_desc_constraint_info_0_0 = {
	"constraint_info",
	5,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__constraint__field_types_constraint_info_0_0,
	mercury_data_transform_hlds__constraint__field_names_constraint_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__constraint__du_stag_ordered_constraint_info_0_0[] = {
	&mercury_data_transform_hlds__constraint__du_functor_desc_constraint_info_0_0

};

const MR_DuPtagLayout mercury_data_transform_hlds__constraint__du_ptag_ordered_constraint_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__constraint__du_stag_ordered_constraint_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__constraint__du_name_ordered_constraint_info_0[] = {
	&mercury_data_transform_hlds__constraint__du_functor_desc_constraint_info_0_0
};

const MR_Integer mercury_data_transform_hlds__constraint__functor_number_map_constraint_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__constraint__type_ctor_info_constraint_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__constraint__constraint_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__constraint__constraint_info_0_0)),
	"transform_hlds.constraint",
	"constraint_info",
	{ (void *)mercury_data_transform_hlds__constraint__du_name_ordered_constraint_info_0 },
	{ (void *)mercury_data_transform_hlds__constraint__du_ptag_ordered_constraint_info_0 },
	1,
	4,
	mercury_data_transform_hlds__constraint__functor_number_map_constraint_info_0
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0
}};

const MR_PseudoTypeInfo mercury_data_transform_hlds__constraint__field_types_constraint_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__constraint__du_functor_desc_constraint_0_0 = {
	"constraint",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__constraint__field_types_constraint_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__constraint__du_stag_ordered_constraint_0_0[] = {
	&mercury_data_transform_hlds__constraint__du_functor_desc_constraint_0_0

};

const MR_DuPtagLayout mercury_data_transform_hlds__constraint__du_ptag_ordered_constraint_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__constraint__du_stag_ordered_constraint_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__constraint__du_name_ordered_constraint_0[] = {
	&mercury_data_transform_hlds__constraint__du_functor_desc_constraint_0_0
};

const MR_Integer mercury_data_transform_hlds__constraint__functor_number_map_constraint_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__constraint__type_ctor_info_constraint_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__constraint__constraint_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__constraint__constraint_0_0)),
	"transform_hlds.constraint",
	"constraint",
	{ (void *)mercury_data_transform_hlds__constraint__du_name_ordered_constraint_0 },
	{ (void *)mercury_data_transform_hlds__constraint__du_ptag_ordered_constraint_0 },
	1,
	4,
	mercury_data_transform_hlds__constraint__functor_number_map_constraint_0
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1transform_hlds__constraint__type_ctor_info_constraint_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_transform_hlds__constraint__type_ctor_info_constraint_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0list__ti_list_1transform_hlds__constraint__type_ctor_info_constraint_0 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0,
	(MR_TypeInfo) &mercury_data_list__ti_list_1transform_hlds__constraint__type_ctor_info_constraint_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0list__ti_list_1transform_hlds__constraint__type_ctor_info_constraint_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0list__ti_list_1transform_hlds__constraint__type_ctor_info_constraint_0
}};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__constraint__type_ctor_info_constrained_conj_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__constraint__constrained_conj_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__constraint__constrained_conj_0_0)),
	"transform_hlds.constraint",
	"constrained_conj",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0list__ti_list_1transform_hlds__constraint__type_ctor_info_constraint_0 },
	-1,
	0,
	NULL
};

const MR_PseudoTypeInfo mercury_data_transform_hlds__constraint__field_types_annotated_conjunct_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__constraint__du_functor_desc_annotated_conjunct_0_0 = {
	"annotated_conjunct",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__constraint__field_types_annotated_conjunct_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__constraint__du_stag_ordered_annotated_conjunct_0_0[] = {
	&mercury_data_transform_hlds__constraint__du_functor_desc_annotated_conjunct_0_0

};

const MR_DuPtagLayout mercury_data_transform_hlds__constraint__du_ptag_ordered_annotated_conjunct_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__constraint__du_stag_ordered_annotated_conjunct_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__constraint__du_name_ordered_annotated_conjunct_0[] = {
	&mercury_data_transform_hlds__constraint__du_functor_desc_annotated_conjunct_0_0
};

const MR_Integer mercury_data_transform_hlds__constraint__functor_number_map_annotated_conjunct_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__constraint__type_ctor_info_annotated_conjunct_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__constraint__annotated_conjunct_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__constraint__annotated_conjunct_0_0)),
	"transform_hlds.constraint",
	"annotated_conjunct",
	{ (void *)mercury_data_transform_hlds__constraint__du_name_ordered_annotated_conjunct_0 },
	{ (void *)mercury_data_transform_hlds__constraint__du_ptag_ordered_annotated_conjunct_0 },
	1,
	4,
	mercury_data_transform_hlds__constraint__functor_number_map_annotated_conjunct_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__constraint__type_ctor_info_annotated_conjunct_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1transform_hlds__constraint__type_ctor_info_annotated_conjunct_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_transform_hlds__constraint__type_ctor_info_annotated_conjunct_0
}};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__constraint__type_ctor_info_annotated_conj_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__constraint__annotated_conj_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__constraint__annotated_conj_0_0)),
	"transform_hlds.constraint",
	"annotated_conj",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1transform_hlds__constraint__type_ctor_info_annotated_conjunct_0 },
	-1,
	0,
	NULL
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__constraint__flatten_constraints_2_0_1 = {
{
MR_PREDICATE,
"transform_hlds.constraint",
"transform_hlds.constraint",
"lambda_constraint_m_215",
2,
0
},
"transform_hlds.constraint",
"constraint.m",
215,
"d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__constraint__annotate_conj_output_vars_6_0_1 = {
{
MR_PREDICATE,
"transform_hlds.constraint",
"transform_hlds.constraint",
"lambda_constraint_m_303",
5,
0
},
"transform_hlds.constraint",
"constraint.m",
303,
"d2;c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__constraint__annotate_conj_output_vars_6_0_2 = {
{
MR_PREDICATE,
"transform_hlds.constraint",
"transform_hlds.constraint",
"lambda_constraint_m_316",
5,
0
},
"transform_hlds.constraint",
"constraint.m",
316,
"d2;c15;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__constraint__attach_constraints_2_0_1 = {
{
MR_FUNCTION,
"transform_hlds.constraint",
"transform_hlds.constraint",
"lambda_constraint_m_513",
2,
0
},
"transform_hlds.constraint",
"constraint.m",
513,
"d1;c4;t;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__constraint__annotate_conj_constraints_9_0_1 = {
{
MR_PREDICATE,
"transform_hlds.constraint",
"transform_hlds.constraint",
"add_empty_constraints",
2,
0
},
"transform_hlds.constraint",
"constraint.m",
475,
"d2;c16;e;e;c1;e;c1;t;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__constraint__annotate_conj_constraints_9_0_2 = {
{
MR_PREDICATE,
"transform_hlds.constraint",
"transform_hlds.constraint",
"add_empty_constraints",
2,
0
},
"transform_hlds.constraint",
"constraint.m",
489,
"d2;c16;e;e;c1;e;c1;e;t;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__constraint__annotate_conj_constraints_9_0_3 = {
{
MR_PREDICATE,
"transform_hlds.constraint",
"transform_hlds.constraint",
"lambda_constraint_m_397",
2,
0
},
"transform_hlds.constraint",
"constraint.m",
397,
"d1;c11;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__constraint__strip_constraint_markers_expr_1_0_1 = {
{
MR_FUNCTION,
"transform_hlds.constraint",
"transform_hlds.constraint",
"strip_constraint_markers",
2,
0
},
"transform_hlds.constraint",
"constraint.m",
793,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__constraint__strip_constraint_markers_expr_1_0_2 = {
{
MR_FUNCTION,
"transform_hlds.constraint",
"transform_hlds.constraint",
"strip_constraint_markers",
2,
0
},
"transform_hlds.constraint",
"constraint.m",
795,
"d2;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__constraint__strip_constraint_markers_expr_1_0_3 = {
{
MR_FUNCTION,
"transform_hlds.constraint",
"transform_hlds.constraint",
"lambda_constraint_m_798",
2,
0
},
"transform_hlds.constraint",
"constraint.m",
798,
"d3;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__constraint__IntroducedFrom__func__attach_constraints__513__1_1_0_1 = {
{
MR_FUNCTION,
"transform_hlds.constraint",
"transform_hlds.constraint",
"add_constraint_feature",
2,
0
},
"transform_hlds.constraint",
"constraint.m",
516,
"d1;c4;t;c2;q;c5;"
};

MR_decl_entry(list__map_3_0);
MR_decl_entry(list__condense_2_0);

MR_BEGIN_MODULE(transform_hlds__constraint_module0)
	MR_init_entry1(transform_hlds__constraint__flatten_constraints_2_0);
	MR_init_label2(transform_hlds__constraint__flatten_constraints_2_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__constraint__flatten_constraints_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__constraint, constraint);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_np_call_localret_ent(list__map_3_0,
		transform_hlds__constraint__flatten_constraints_2_0_i2);
MR_def_label(transform_hlds__constraint__flatten_constraints_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(list__condense_2_0,
		transform_hlds__constraint__flatten_constraints_2_0_i3);
MR_def_label(transform_hlds__constraint__flatten_constraints_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(list__condense_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__goal_info_get_instmap_delta_2_0);
MR_decl_entry(hlds__instmap__apply_instmap_delta_3_0);

MR_BEGIN_MODULE(transform_hlds__constraint_module1)
	MR_init_entry1(transform_hlds__constraint__constraint_info_update_goal_3_0);
	MR_init_label2(transform_hlds__constraint__constraint_info_update_goal_3_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__constraint__constraint_info_update_goal_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_instmap_delta_2_0,
		transform_hlds__constraint__constraint_info_update_goal_3_0_i2);
MR_def_label(transform_hlds__constraint__constraint_info_update_goal_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__instmap__apply_instmap_delta_3_0,
		transform_hlds__constraint__constraint_info_update_goal_3_0_i3);
MR_def_label(transform_hlds__constraint__constraint_info_update_goal_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tempr2 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__constraint_module2)
	MR_init_entry1(fn__transform_hlds__constraint__this_file_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__constraint__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("constraint.m", 12);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__constraint_module3)
	MR_init_entry1(transform_hlds__constraint__constraint_info_update_changed_3_0);
	MR_init_label1(transform_hlds__constraint__constraint_info_update_changed_3_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__constraint__constraint_info_update_changed_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__constraint__constraint_info_update_changed_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(transform_hlds__constraint__constraint_info_update_changed_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_tfield(0, MR_r1, 0) = MR_ctfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r1, 1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r1, 2) = MR_ctfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r1, 3) = MR_ctfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r1, 4) = (MR_Integer) 1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__instmap__instmap_changed_vars_5_0);
MR_decl_entry(hlds__instmap__vars_list_2_0);
MR_decl_entry(fn__list__filter_2_0);
MR_decl_entry(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(transform_hlds__constraint_module4)
	MR_init_entry1(transform_hlds__constraint__annotate_conj_output_vars_6_0);
	MR_init_label8(transform_hlds__constraint__annotate_conj_output_vars_6_0,19,4,5,6,7,8,9,10)
	MR_init_label3(transform_hlds__constraint__annotate_conj_output_vars_6_0,11,12,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__constraint__annotate_conj_output_vars_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__constraint__annotate_conj_output_vars_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__constraint__annotate_conj_output_vars_6_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_ctfield(1, MR_r1, 0);
	MR_sv(6) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_sv(5), 1);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_instmap_delta_2_0,
		transform_hlds__constraint__annotate_conj_output_vars_6_0_i4);
MR_def_label(transform_hlds__constraint__annotate_conj_output_vars_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(hlds__instmap__apply_instmap_delta_3_0,
		transform_hlds__constraint__annotate_conj_output_vars_6_0_i5);
MR_def_label(transform_hlds__constraint__annotate_conj_output_vars_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(hlds__instmap__instmap_changed_vars_5_0,
		transform_hlds__constraint__annotate_conj_output_vars_6_0_i6);
MR_def_label(transform_hlds__constraint__annotate_conj_output_vars_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__instmap__vars_list_2_0,
		transform_hlds__constraint__annotate_conj_output_vars_6_0_i7);
MR_def_label(transform_hlds__constraint__annotate_conj_output_vars_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_output_vars__303__1_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(7);
	MR_sv(10) = MR_r1;
	MR_sv(11) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(12) = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r1 = MR_sv(12);
	MR_r3 = MR_sv(10);
	}
	MR_np_call_localret_ent(fn__list__filter_2_0,
		transform_hlds__constraint__annotate_conj_output_vars_6_0_i8);
MR_def_label(transform_hlds__constraint__annotate_conj_output_vars_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0,
		transform_hlds__constraint__annotate_conj_output_vars_6_0_i9);
MR_def_label(transform_hlds__constraint__annotate_conj_output_vars_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_output_vars__316__1_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(7);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r3 = MR_sv(10);
	}
	MR_np_call_localret_ent(fn__list__filter_2_0,
		transform_hlds__constraint__annotate_conj_output_vars_6_0_i10);
MR_def_label(transform_hlds__constraint__annotate_conj_output_vars_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0,
		transform_hlds__constraint__annotate_conj_output_vars_6_0_i11);
MR_def_label(transform_hlds__constraint__annotate_conj_output_vars_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__constraint__annotate_conj_output_vars_6_0_i12);
MR_def_label(transform_hlds__constraint__annotate_conj_output_vars_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(4);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(8);
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(transform_hlds__constraint__annotate_conj_output_vars_6_0_i19);
	}
MR_def_label(transform_hlds__constraint__annotate_conj_output_vars_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__map_2_0);

MR_BEGIN_MODULE(transform_hlds__constraint_module5)
	MR_init_entry1(fn__transform_hlds__constraint__attach_constraints_2_0);
	MR_init_label2(fn__transform_hlds__constraint__attach_constraints_2_0,4,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__constraint__attach_constraints_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(fn__transform_hlds__constraint__attach_constraints_2_0_i2);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__constraint, constraint);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__constraint, constraint);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,1);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__transform_hlds__constraint__attach_constraints_2_0_i4);
MR_def_label(fn__transform_hlds__constraint__attach_constraints_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(fn__transform_hlds__constraint__attach_constraints_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__goal_info_get_nonlocals_2_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(varset__new_var_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);
MR_decl_entry(map__from_assoc_list_2_0);
MR_decl_entry(hlds__goal_util__rename_some_vars_in_goal_3_0);

MR_BEGIN_MODULE(transform_hlds__constraint_module6)
	MR_init_entry1(transform_hlds__constraint__add_constant_construction_6_0);
	MR_init_label8(transform_hlds__constraint__add_constant_construction_6_0,5,6,8,9,10,11,12,13)
	MR_init_label3(transform_hlds__constraint__add_constant_construction_6_0,4,15,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__constraint__add_constant_construction_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(transform_hlds__constraint__add_constant_construction_6_0_i3);
	}
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(5) = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(4) = MR_tempr1;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(9) = MR_ctfield(0, MR_tempr1, 3);
	MR_r1 = MR_ctfield(0, MR_sv(6), 1);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_nonlocals_2_0,
		transform_hlds__constraint__add_constant_construction_6_0_i5);
MR_def_label(transform_hlds__constraint__add_constant_construction_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(13) = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__constraint__add_constant_construction_6_0_i6);
MR_def_label(transform_hlds__constraint__add_constant_construction_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__constraint__add_constant_construction_6_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_ctfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(varset__new_var_3_0,
		transform_hlds__constraint__add_constant_construction_6_0_i8);
MR_def_label(transform_hlds__constraint__add_constant_construction_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_sv(11) = MR_r2;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(13);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(1);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__constraint__add_constant_construction_6_0_i9);
MR_def_label(transform_hlds__constraint__add_constant_construction_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(13);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(10);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		transform_hlds__constraint__add_constant_construction_6_0_i10);
MR_def_label(transform_hlds__constraint__add_constant_construction_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(4) = MR_tempr1;
	MR_tempr4 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr4, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr4, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr4, 4);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(10);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(13);
	MR_r2 = MR_r1;
	}
	MR_np_call_localret_ent(map__from_assoc_list_2_0,
		transform_hlds__constraint__add_constant_construction_6_0_i11);
MR_def_label(transform_hlds__constraint__add_constant_construction_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__goal_util__rename_some_vars_in_goal_3_0,
		transform_hlds__constraint__add_constant_construction_6_0_i12);
MR_def_label(transform_hlds__constraint__add_constant_construction_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(9);
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(hlds__goal_util__rename_some_vars_in_goal_3_0,
		transform_hlds__constraint__add_constant_construction_6_0_i13);
MR_def_label(transform_hlds__constraint__add_constant_construction_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_sv(1) = MR_tempr1;
	MR_r4 = MR_sv(4);
	}
	MR_np_localcall_lab(transform_hlds__constraint__add_constant_construction_6_0,
		transform_hlds__constraint__add_constant_construction_6_0_i15);
MR_def_label(transform_hlds__constraint__add_constant_construction_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_sv(1) = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_np_localcall_lab(transform_hlds__constraint__add_constant_construction_6_0,
		transform_hlds__constraint__add_constant_construction_6_0_i15);
MR_def_label(transform_hlds__constraint__add_constant_construction_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(14);
	}
MR_def_label(transform_hlds__constraint__add_constant_construction_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r4;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(set__empty_1_0);
MR_decl_entry(list__member_2_1);
MR_declare_entry(MR_do_redo);

MR_BEGIN_MODULE(transform_hlds__constraint_module7)
	MR_init_entry1(transform_hlds__constraint__filter_dependent_constraints_2_7_0);
	MR_init_label8(transform_hlds__constraint__filter_dependent_constraints_2_7_0,48,4,9,12,8,15,18,33)
	MR_init_label8(transform_hlds__constraint__filter_dependent_constraints_2_7_0,14,22,24,25,26,21,7,6)
	MR_init_label1(transform_hlds__constraint__filter_dependent_constraints_2_7_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__constraint__filter_dependent_constraints_2_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__constraint__filter_dependent_constraints_2_7_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(transform_hlds__constraint__filter_dependent_constraints_2_7_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 2);
	MR_r1 = MR_ctfield(0, MR_ctfield(0, MR_tempr1, 0), 1);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_nonlocals_2_0,
		transform_hlds__constraint__filter_dependent_constraints_2_7_0_i4);
MR_def_label(transform_hlds__constraint__filter_dependent_constraints_2_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(8);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__constraint__filter_dependent_constraints_2_7_0_i9);
MR_def_label(transform_hlds__constraint__filter_dependent_constraints_2_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(set__empty_1_0,
		transform_hlds__constraint__filter_dependent_constraints_2_7_0_i12);
MR_def_label(transform_hlds__constraint__filter_dependent_constraints_2_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__constraint__filter_dependent_constraints_2_7_0_i8);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_GOTO_LAB(transform_hlds__constraint__filter_dependent_constraints_2_7_0_i7);
MR_def_label(transform_hlds__constraint__filter_dependent_constraints_2_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(7);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__constraint__filter_dependent_constraints_2_7_0_i15);
MR_def_label(transform_hlds__constraint__filter_dependent_constraints_2_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(set__empty_1_0,
		transform_hlds__constraint__filter_dependent_constraints_2_7_0_i18);
MR_def_label(transform_hlds__constraint__filter_dependent_constraints_2_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__constraint__filter_dependent_constraints_2_7_0_i14);
	}
MR_def_label(transform_hlds__constraint__filter_dependent_constraints_2_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_GOTO_LAB(transform_hlds__constraint__filter_dependent_constraints_2_7_0_i7);
MR_def_label(transform_hlds__constraint__filter_dependent_constraints_2_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(10) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(11));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(transform_hlds__constraint__filter_dependent_constraints_2_7_0_i21);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__constraint, constraint);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(list__member_2_1,
		transform_hlds__constraint__filter_dependent_constraints_2_7_0_i22);
MR_def_label(transform_hlds__constraint__filter_dependent_constraints_2_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_ctfield(0, MR_sv(5), 0), 1);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_nonlocals_2_0,
		transform_hlds__constraint__filter_dependent_constraints_2_7_0_i24);
MR_def_label(transform_hlds__constraint__filter_dependent_constraints_2_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(7);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__constraint__filter_dependent_constraints_2_7_0_i25);
MR_def_label(transform_hlds__constraint__filter_dependent_constraints_2_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(set__empty_1_0,
		transform_hlds__constraint__filter_dependent_constraints_2_7_0_i26);
MR_def_label(transform_hlds__constraint__filter_dependent_constraints_2_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(11));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(9);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(10);
	MR_GOTO_LAB(transform_hlds__constraint__filter_dependent_constraints_2_7_0_i33);
MR_def_label(transform_hlds__constraint__filter_dependent_constraints_2_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(9);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(10);
	MR_GOTO_LAB(transform_hlds__constraint__filter_dependent_constraints_2_7_0_i6);
MR_def_label(transform_hlds__constraint__filter_dependent_constraints_2_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_succip_word = MR_sv(12);
	MR_GOTO_LAB(transform_hlds__constraint__filter_dependent_constraints_2_7_0_i48);
	}
MR_def_label(transform_hlds__constraint__filter_dependent_constraints_2_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(12);
	MR_GOTO_LAB(transform_hlds__constraint__filter_dependent_constraints_2_7_0_i48);
	}
MR_def_label(transform_hlds__constraint__filter_dependent_constraints_2_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__reverse_2_0);

MR_BEGIN_MODULE(transform_hlds__constraint_module8)
	MR_init_entry1(transform_hlds__constraint__filter_dependent_constraints_5_0);
	MR_init_label3(transform_hlds__constraint__filter_dependent_constraints_5_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__constraint__filter_dependent_constraints_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(transform_hlds__constraint__filter_dependent_constraints_2_7_0,
		transform_hlds__constraint__filter_dependent_constraints_5_0_i2);
MR_def_label(transform_hlds__constraint__filter_dependent_constraints_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__constraint, constraint);
	MR_np_call_localret_ent(list__reverse_2_0,
		transform_hlds__constraint__filter_dependent_constraints_5_0_i3);
MR_def_label(transform_hlds__constraint__filter_dependent_constraints_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__constraint, constraint);
	MR_np_call_localret_ent(list__reverse_2_0,
		transform_hlds__constraint__filter_dependent_constraints_5_0_i4);
MR_def_label(transform_hlds__constraint__filter_dependent_constraints_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__goal_form__goal_can_loop_or_throw_6_0);
MR_decl_entry(hlds__hlds_goal__goal_info_get_determinism_2_0);
MR_decl_entry(hlds__hlds_goal__goal_info_get_purity_2_0);
MR_decl_entry(parse_tree__prog_data__determinism_components_3_0);
MR_decl_entry(__Unify___hlds__hlds_goal__hlds_goal_info_0_0);
MR_decl_entry(list__append_3_1);
MR_decl_entry(hlds__goal_form__goal_cannot_loop_or_throw_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_1);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(transform_hlds__constraint_module9)
	MR_init_entry1(transform_hlds__constraint__annotate_conj_constraints_9_0);
	MR_init_label8(transform_hlds__constraint__annotate_conj_constraints_9_0,113,4,5,7,9,8,11,13)
	MR_init_label8(transform_hlds__constraint__annotate_conj_constraints_9_0,6,19,15,21,22,23,20,25)
	MR_init_label8(transform_hlds__constraint__annotate_conj_constraints_9_0,27,28,29,24,35,37,38,40)
	MR_init_label8(transform_hlds__constraint__annotate_conj_constraints_9_0,41,42,43,44,32,45,46,3)
	MR_init_label3(transform_hlds__constraint__annotate_conj_constraints_9_0,53,54,55)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__constraint__annotate_conj_constraints_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__constraint__annotate_conj_constraints_9_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__constraint__annotate_conj_constraints_9_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(5) = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(9) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(10) = MR_ctfield(0, MR_sv(6), 1);
	MR_r1 = MR_sv(10);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_nonlocals_2_0,
		transform_hlds__constraint__annotate_conj_constraints_9_0_i4);
MR_def_label(transform_hlds__constraint__annotate_conj_constraints_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_ctfield(0, MR_sv(4), 0);
	MR_np_call_localret_ent(hlds__goal_form__goal_can_loop_or_throw_6_0,
		transform_hlds__constraint__annotate_conj_constraints_9_0_i5);
MR_def_label(transform_hlds__constraint__annotate_conj_constraints_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(12) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tempr2 = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(10);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_determinism_2_0,
		transform_hlds__constraint__annotate_conj_constraints_9_0_i7);
MR_def_label(transform_hlds__constraint__annotate_conj_constraints_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(transform_hlds__constraint__annotate_conj_constraints_9_0_i9);
	}
	MR_r2 = MR_sv(8);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_GOTO_LAB(transform_hlds__constraint__annotate_conj_constraints_9_0_i8);
MR_def_label(transform_hlds__constraint__annotate_conj_constraints_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,7)) {
		MR_GOTO_LAB(transform_hlds__constraint__annotate_conj_constraints_9_0_i6);
	}
	MR_r2 = MR_sv(8);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,6);
MR_def_label(transform_hlds__constraint__annotate_conj_constraints_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r2;
	MR_np_call_localret_ent(set__empty_1_0,
		transform_hlds__constraint__annotate_conj_constraints_9_0_i11);
MR_def_label(transform_hlds__constraint__annotate_conj_constraints_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__constraint__annotate_conj_constraints_9_0_i6);
	}
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_purity_2_0,
		transform_hlds__constraint__annotate_conj_constraints_9_0_i13);
MR_def_label(transform_hlds__constraint__annotate_conj_constraints_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(transform_hlds__constraint__annotate_conj_constraints_9_0_i6);
	}
	if (MR_INT_NE(MR_sv(4),1)) {
		MR_GOTO_LAB(transform_hlds__constraint__annotate_conj_constraints_9_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(2);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(12);
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(transform_hlds__constraint__annotate_conj_constraints_9_0_i113);
	}
MR_def_label(transform_hlds__constraint__annotate_conj_constraints_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_sv(6);
	MR_tempr1 = MR_ctfield(0, MR_tempr4, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__constraint__annotate_conj_constraints_9_0_i15);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 3);
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(transform_hlds__constraint__annotate_conj_constraints_9_0_i15);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 2);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__constraint__annotate_conj_constraints_9_0_i15);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr4;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_tempr3;
	MR_r1 = MR_ctfield(0, MR_tempr2, 0);
	MR_r2 = MR_tempr4;
	MR_r4 = MR_sv(12);
	}
	MR_np_call_localret_ent(transform_hlds__constraint__add_constant_construction_6_0,
		transform_hlds__constraint__annotate_conj_constraints_9_0_i19);
MR_def_label(transform_hlds__constraint__annotate_conj_constraints_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r5 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 1;
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(transform_hlds__constraint__annotate_conj_constraints_9_0_i113);
	}
MR_def_label(transform_hlds__constraint__annotate_conj_constraints_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_determinism_2_0,
		transform_hlds__constraint__annotate_conj_constraints_9_0_i21);
MR_def_label(transform_hlds__constraint__annotate_conj_constraints_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		transform_hlds__constraint__annotate_conj_constraints_9_0_i22);
MR_def_label(transform_hlds__constraint__annotate_conj_constraints_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 != (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(transform_hlds__constraint__annotate_conj_constraints_9_0_i20);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(transform_hlds__constraint__constraint_info_update_changed_3_0,
		transform_hlds__constraint__annotate_conj_constraints_9_0_i23);
MR_def_label(transform_hlds__constraint__annotate_conj_constraints_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(3);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(transform_hlds__constraint__annotate_conj_constraints_9_0_i113);
	}
MR_def_label(transform_hlds__constraint__annotate_conj_constraints_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = MR_ctfield(0, MR_sv(6), 1);
	MR_np_call_localret_ent(__Unify___hlds__hlds_goal__hlds_goal_info_0_0,
		transform_hlds__constraint__annotate_conj_constraints_9_0_i25);
MR_def_label(transform_hlds__constraint__annotate_conj_constraints_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__constraint__annotate_conj_constraints_9_0_i24);
	}
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_purity_2_0,
		transform_hlds__constraint__annotate_conj_constraints_9_0_i27);
MR_def_label(transform_hlds__constraint__annotate_conj_constraints_9_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 2 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(transform_hlds__constraint__annotate_conj_constraints_9_0_i24);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__constraint__flatten_constraints_2_0,
		transform_hlds__constraint__annotate_conj_constraints_9_0_i28);
MR_def_label(transform_hlds__constraint__annotate_conj_constraints_9_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,2);
	}
	MR_np_call_localret_ent(list__map_3_0,
		transform_hlds__constraint__annotate_conj_constraints_9_0_i29);
MR_def_label(transform_hlds__constraint__annotate_conj_constraints_9_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(list__append_3_1,
		transform_hlds__constraint__annotate_conj_constraints_9_0_i44);
MR_def_label(transform_hlds__constraint__annotate_conj_constraints_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(hlds__goal_form__goal_cannot_loop_or_throw_2_0,
		transform_hlds__constraint__annotate_conj_constraints_9_0_i35);
MR_def_label(transform_hlds__constraint__annotate_conj_constraints_9_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__constraint__annotate_conj_constraints_9_0_i32);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		transform_hlds__constraint__annotate_conj_constraints_9_0_i37);
MR_def_label(transform_hlds__constraint__annotate_conj_constraints_9_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 130;
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_1,
		transform_hlds__constraint__annotate_conj_constraints_9_0_i38);
MR_def_label(transform_hlds__constraint__annotate_conj_constraints_9_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__constraint__annotate_conj_constraints_9_0_i32);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__constraint__filter_dependent_constraints_5_0,
		transform_hlds__constraint__annotate_conj_constraints_9_0_i40);
MR_def_label(transform_hlds__constraint__annotate_conj_constraints_9_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(transform_hlds__constraint__flatten_constraints_2_0,
		transform_hlds__constraint__annotate_conj_constraints_9_0_i41);
MR_def_label(transform_hlds__constraint__annotate_conj_constraints_9_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_np_call_localret_ent(list__map_3_0,
		transform_hlds__constraint__annotate_conj_constraints_9_0_i42);
MR_def_label(transform_hlds__constraint__annotate_conj_constraints_9_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__transform_hlds__constraint__attach_constraints_2_0,
		transform_hlds__constraint__annotate_conj_constraints_9_0_i43);
MR_def_label(transform_hlds__constraint__annotate_conj_constraints_9_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__constraint__annotate_conj_constraints_9_0_i44);
MR_def_label(transform_hlds__constraint__annotate_conj_constraints_9_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_sv(12);
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(transform_hlds__constraint__annotate_conj_constraints_9_0_i113);
MR_def_label(transform_hlds__constraint__annotate_conj_constraints_9_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__constraint__filter_dependent_constraints_5_0,
		transform_hlds__constraint__annotate_conj_constraints_9_0_i45);
MR_def_label(transform_hlds__constraint__annotate_conj_constraints_9_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__transform_hlds__constraint__attach_constraints_2_0,
		transform_hlds__constraint__annotate_conj_constraints_9_0_i46);
MR_def_label(transform_hlds__constraint__annotate_conj_constraints_9_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(12);
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(transform_hlds__constraint__annotate_conj_constraints_9_0_i113);
	}
MR_def_label(transform_hlds__constraint__annotate_conj_constraints_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(transform_hlds__constraint__flatten_constraints_2_0,
		transform_hlds__constraint__annotate_conj_constraints_9_0_i53);
MR_def_label(transform_hlds__constraint__annotate_conj_constraints_9_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,4);
	MR_np_call_localret_ent(list__map_3_0,
		transform_hlds__constraint__annotate_conj_constraints_9_0_i54);
MR_def_label(transform_hlds__constraint__annotate_conj_constraints_9_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(list__append_3_1,
		transform_hlds__constraint__annotate_conj_constraints_9_0_i55);
MR_def_label(transform_hlds__constraint__annotate_conj_constraints_9_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__goal_is_atomic_1_0);

MR_BEGIN_MODULE(transform_hlds__constraint_module10)
	MR_init_entry1(transform_hlds__constraint__goal_is_simple_1_0);
	MR_init_label5(transform_hlds__constraint__goal_is_simple_1_0,25,5,8,2,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__constraint__goal_is_simple_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__constraint__goal_is_simple_1_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_is_atomic_1_0,
		transform_hlds__constraint__goal_is_simple_1_0_i5);
MR_def_label(transform_hlds__constraint__goal_is_simple_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__constraint__goal_is_simple_1_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(transform_hlds__constraint__goal_is_simple_1_0_i8);
	}
	MR_r1 = MR_ctfield(3, MR_tempr1, 1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(transform_hlds__constraint__goal_is_simple_1_0_i25);
	}
MR_def_label(transform_hlds__constraint__goal_is_simple_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,5)) {
		MR_GOTO_LAB(transform_hlds__constraint__goal_is_simple_1_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_r2, 2);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(transform_hlds__constraint__goal_is_simple_1_0_i25);
MR_def_label(transform_hlds__constraint__goal_is_simple_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
MR_def_label(transform_hlds__constraint__goal_is_simple_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__constraint_module11)
	MR_init_entry1(transform_hlds__constraint__filter_complex_constraints_2_5_0);
	MR_init_label8(transform_hlds__constraint__filter_complex_constraints_2_5_0,36,5,11,13,14,15,10,4)
	MR_init_label1(transform_hlds__constraint__filter_complex_constraints_2_5_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__constraint__filter_complex_constraints_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__constraint__filter_complex_constraints_2_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__constraint__filter_complex_constraints_2_5_0_i3);
	}
	MR_sv(4) = MR_ctfield(1, MR_r1, 1);
	MR_sv(3) = MR_ctfield(1, MR_r1, 0);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_ctfield(0, MR_sv(3), 0);
	MR_np_call_localret_ent(transform_hlds__constraint__goal_is_simple_1_0,
		transform_hlds__constraint__filter_complex_constraints_2_5_0_i5);
MR_def_label(transform_hlds__constraint__filter_complex_constraints_2_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__constraint__filter_complex_constraints_2_5_0_i4);
	}
	MR_sv(6) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(7) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(8));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(transform_hlds__constraint__filter_complex_constraints_2_5_0_i10);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__constraint, constraint);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(list__member_2_1,
		transform_hlds__constraint__filter_complex_constraints_2_5_0_i11);
MR_def_label(transform_hlds__constraint__filter_complex_constraints_2_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_ctfield(0, MR_sv(3), 0), 1);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_nonlocals_2_0,
		transform_hlds__constraint__filter_complex_constraints_2_5_0_i13);
MR_def_label(transform_hlds__constraint__filter_complex_constraints_2_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(5);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__constraint__filter_complex_constraints_2_5_0_i14);
MR_def_label(transform_hlds__constraint__filter_complex_constraints_2_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(set__empty_1_0,
		transform_hlds__constraint__filter_complex_constraints_2_5_0_i15);
MR_def_label(transform_hlds__constraint__filter_complex_constraints_2_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(8));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(6);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(7);
	MR_GOTO_LAB(transform_hlds__constraint__filter_complex_constraints_2_5_0_i4);
MR_def_label(transform_hlds__constraint__filter_complex_constraints_2_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(6);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(7);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(transform_hlds__constraint__filter_complex_constraints_2_5_0_i36);
	}
MR_def_label(transform_hlds__constraint__filter_complex_constraints_2_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(transform_hlds__constraint__filter_complex_constraints_2_5_0_i36);
	}
MR_def_label(transform_hlds__constraint__filter_complex_constraints_2_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__goal_info_get_features_2_0);
MR_decl_entry(hlds__hlds_goal__goal_info_get_context_2_0);
MR_decl_entry(hlds__hlds_goal__goal_to_conj_list_2_0);
MR_decl_entry(hlds__hlds_goal__goal_list_nonlocals_2_0);
MR_decl_entry(hlds__hlds_goal__goal_list_instmap_delta_2_0);
MR_decl_entry(hlds__hlds_goal__goal_list_determinism_2_0);
MR_decl_entry(hlds__hlds_goal__goal_list_purity_2_0);
MR_decl_entry(hlds__hlds_goal__goal_info_init_6_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_features_3_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_purity_3_0);
MR_decl_entry(hlds__hlds_goal__conj_list_to_goal_3_0);

MR_BEGIN_MODULE(transform_hlds__constraint_module12)
	MR_init_entry1(transform_hlds__constraint__propagate_goal_7_0);
	MR_init_label8(transform_hlds__constraint__propagate_goal_7_0,2,3,4,5,6,7,8,9)
	MR_init_label4(transform_hlds__constraint__propagate_goal_7_0,10,11,12,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__constraint__propagate_goal_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_ctfield(0, MR_r1, 1);
	MR_sv(4) = MR_r3;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_features_2_0,
		transform_hlds__constraint__propagate_goal_7_0_i2);
MR_def_label(transform_hlds__constraint__propagate_goal_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_context_2_0,
		transform_hlds__constraint__propagate_goal_7_0_i3);
MR_def_label(transform_hlds__constraint__propagate_goal_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_conj_list_2_0,
		transform_hlds__constraint__propagate_goal_7_0_i4);
MR_def_label(transform_hlds__constraint__propagate_goal_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(transform_hlds__constraint__propagate_conj_7_0,
		transform_hlds__constraint__propagate_goal_7_0_i5);
MR_def_label(transform_hlds__constraint__propagate_goal_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_list_nonlocals_2_0,
		transform_hlds__constraint__propagate_goal_7_0_i6);
MR_def_label(transform_hlds__constraint__propagate_goal_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_list_instmap_delta_2_0,
		transform_hlds__constraint__propagate_goal_7_0_i7);
MR_def_label(transform_hlds__constraint__propagate_goal_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_list_determinism_2_0,
		transform_hlds__constraint__propagate_goal_7_0_i8);
MR_def_label(transform_hlds__constraint__propagate_goal_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_list_purity_2_0,
		transform_hlds__constraint__propagate_goal_7_0_i9);
MR_def_label(transform_hlds__constraint__propagate_goal_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = (MR_Integer) 0;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_6_0,
		transform_hlds__constraint__propagate_goal_7_0_i10);
MR_def_label(transform_hlds__constraint__propagate_goal_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_features_3_0,
		transform_hlds__constraint__propagate_goal_7_0_i11);
MR_def_label(transform_hlds__constraint__propagate_goal_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_purity_3_0,
		transform_hlds__constraint__propagate_goal_7_0_i12);
MR_def_label(transform_hlds__constraint__propagate_goal_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__conj_list_to_goal_3_0,
		transform_hlds__constraint__propagate_goal_7_0_i13);
MR_def_label(transform_hlds__constraint__propagate_goal_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__constraint_module13)
	MR_init_entry1(transform_hlds__constraint__propagate_conj_sub_goal_7_0);
	MR_init_label4(transform_hlds__constraint__propagate_conj_sub_goal_7_0,4,2,7,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__constraint__propagate_conj_sub_goal_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_is_atomic_1_0,
		transform_hlds__constraint__propagate_conj_sub_goal_7_0_i4);
MR_def_label(transform_hlds__constraint__propagate_conj_sub_goal_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__constraint__propagate_conj_sub_goal_7_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__constraint__propagate_conj_sub_goal_2_7_0,
		transform_hlds__constraint__propagate_conj_sub_goal_7_0_i9);
MR_def_label(transform_hlds__constraint__propagate_conj_sub_goal_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__constraint__propagate_conj_sub_goal_7_0_i7);
	}
	MR_sv(1) = MR_ctfield(0, MR_r3, 3);
	MR_np_call_localret_ent(transform_hlds__constraint__propagate_conj_sub_goal_2_7_0,
		transform_hlds__constraint__propagate_conj_sub_goal_7_0_i9);
MR_def_label(transform_hlds__constraint__propagate_conj_sub_goal_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tempr2 = MR_r3;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 1;
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__constraint__propagate_conj_sub_goal_2_7_0,
		transform_hlds__constraint__propagate_conj_sub_goal_7_0_i9);
MR_def_label(transform_hlds__constraint__propagate_conj_sub_goal_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(transform_hlds__constraint_module14)
	MR_init_entry1(transform_hlds__constraint__propagate_conj_sub_goal_2_7_0);
	MR_init_label8(transform_hlds__constraint__propagate_conj_sub_goal_2_7_0,4,5,8,9,10,11,12,13)
	MR_init_label8(transform_hlds__constraint__propagate_conj_sub_goal_2_7_0,16,15,17,18,19,20,21,22)
	MR_init_label8(transform_hlds__constraint__propagate_conj_sub_goal_2_7_0,23,24,25,26,29,37,67,44)
	MR_init_label8(transform_hlds__constraint__propagate_conj_sub_goal_2_7_0,45,41,42,43,39,40,48,49)
	MR_init_label5(transform_hlds__constraint__propagate_conj_sub_goal_2_7_0,50,51,52,53,54)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__constraint__propagate_conj_sub_goal_2_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_r5 = MR_ctfield(0, MR_r1, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r5),
		MR_LABEL_AP(transform_hlds__constraint__propagate_conj_sub_goal_2_7_0_i4) MR_AND
		MR_LABEL_AP(transform_hlds__constraint__propagate_conj_sub_goal_2_7_0_i8) MR_AND
		MR_LABEL_AP(transform_hlds__constraint__propagate_conj_sub_goal_2_7_0_i8) MR_AND
		MR_LABEL_AP(transform_hlds__constraint__propagate_conj_sub_goal_2_7_0_i10));
MR_def_label(transform_hlds__constraint__propagate_conj_sub_goal_2_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(transform_hlds__constraint__flatten_constraints_2_0,
		transform_hlds__constraint__propagate_conj_sub_goal_2_7_0_i5);
MR_def_label(transform_hlds__constraint__propagate_conj_sub_goal_2_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__constraint__propagate_conj_sub_goal_2_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(transform_hlds__constraint__flatten_constraints_2_0,
		transform_hlds__constraint__propagate_conj_sub_goal_2_7_0_i9);
MR_def_label(transform_hlds__constraint__propagate_conj_sub_goal_2_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__constraint__propagate_conj_sub_goal_2_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r5, 0),
		MR_LABEL_AP(transform_hlds__constraint__propagate_conj_sub_goal_2_7_0_i11) MR_AND
		MR_LABEL_AP(transform_hlds__constraint__propagate_conj_sub_goal_2_7_0_i13) MR_AND
		MR_LABEL_AP(transform_hlds__constraint__propagate_conj_sub_goal_2_7_0_i19) MR_AND
		MR_LABEL_AP(transform_hlds__constraint__propagate_conj_sub_goal_2_7_0_i21) MR_AND
		MR_LABEL_AP(transform_hlds__constraint__propagate_conj_sub_goal_2_7_0_i23) MR_AND
		MR_LABEL_AP(transform_hlds__constraint__propagate_conj_sub_goal_2_7_0_i26) MR_AND
		MR_LABEL_AP(transform_hlds__constraint__propagate_conj_sub_goal_2_7_0_i48) MR_AND
		MR_LABEL_AP(transform_hlds__constraint__propagate_conj_sub_goal_2_7_0_i53));
MR_def_label(transform_hlds__constraint__propagate_conj_sub_goal_2_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(transform_hlds__constraint__flatten_constraints_2_0,
		transform_hlds__constraint__propagate_conj_sub_goal_2_7_0_i12);
MR_def_label(transform_hlds__constraint__propagate_conj_sub_goal_2_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__constraint__propagate_conj_sub_goal_2_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r5;
	MR_tempr1 = MR_ctfield(3, MR_tempr2, 1);
	MR_r6 = MR_tempr1;
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__constraint__propagate_conj_sub_goal_2_7_0_i15);
	}
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(transform_hlds__constraint__propagate_conj_7_0,
		transform_hlds__constraint__propagate_conj_sub_goal_2_7_0_i16);
MR_def_label(transform_hlds__constraint__propagate_conj_sub_goal_2_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__constraint__propagate_conj_sub_goal_2_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_ctfield(3, MR_r5, 2);
	MR_sv(4) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(transform_hlds__constraint__flatten_constraints_2_0,
		transform_hlds__constraint__propagate_conj_sub_goal_2_7_0_i17);
MR_def_label(transform_hlds__constraint__propagate_conj_sub_goal_2_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(transform_hlds__constraint__propagate_in_independent_goals_7_0,
		transform_hlds__constraint__propagate_conj_sub_goal_2_7_0_i18);
MR_def_label(transform_hlds__constraint__propagate_conj_sub_goal_2_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_tfield(1, MR_r1, 1) = MR_sv(3);
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__constraint__propagate_conj_sub_goal_2_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_r5, 1);
	MR_np_call_localret_ent(transform_hlds__constraint__propagate_in_independent_goals_7_0,
		transform_hlds__constraint__propagate_conj_sub_goal_2_7_0_i20);
MR_def_label(transform_hlds__constraint__propagate_conj_sub_goal_2_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__constraint__propagate_conj_sub_goal_2_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r5;
	MR_sv(2) = MR_ctfield(3, MR_tempr2, 1);
	MR_sv(3) = MR_ctfield(3, MR_tempr2, 2);
	MR_r1 = MR_sv(2);
	MR_tempr1 = MR_tempr2;
	MR_r4 = MR_r3;
	MR_r3 = MR_ctfield(3, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(transform_hlds__constraint__propagate_cases_8_0,
		transform_hlds__constraint__propagate_conj_sub_goal_2_7_0_i22);
MR_def_label(transform_hlds__constraint__propagate_conj_sub_goal_2_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__constraint__propagate_conj_sub_goal_2_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_ctfield(3, MR_r5, 1);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(transform_hlds__constraint__propagate_goal_7_0,
		transform_hlds__constraint__propagate_conj_sub_goal_2_7_0_i24);
MR_def_label(transform_hlds__constraint__propagate_conj_sub_goal_2_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_sv(4) = MR_r2;
	}
	MR_np_call_localret_ent(transform_hlds__constraint__flatten_constraints_2_0,
		transform_hlds__constraint__propagate_conj_sub_goal_2_7_0_i25);
MR_def_label(transform_hlds__constraint__propagate_conj_sub_goal_2_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__constraint__propagate_conj_sub_goal_2_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_ctfield(3, MR_r5, 1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r6),
		MR_LABEL_AP(transform_hlds__constraint__propagate_conj_sub_goal_2_7_0_i29) MR_AND
		MR_LABEL_AP(transform_hlds__constraint__propagate_conj_sub_goal_2_7_0_i67) MR_AND
		MR_LABEL_AP(transform_hlds__constraint__propagate_conj_sub_goal_2_7_0_i67) MR_AND
		MR_LABEL_AP(transform_hlds__constraint__propagate_conj_sub_goal_2_7_0_i37));
MR_def_label(transform_hlds__constraint__propagate_conj_sub_goal_2_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_sv(3) = MR_r6;
	MR_r1 = MR_ctfield(3, MR_r5, 2);
	MR_np_call_localret_ent(transform_hlds__constraint__propagate_goal_7_0,
		transform_hlds__constraint__propagate_conj_sub_goal_2_7_0_i45);
MR_def_label(transform_hlds__constraint__propagate_conj_sub_goal_2_7_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_ctfield(3, MR_r6, 0),0)) {
		MR_GOTO_LAB(transform_hlds__constraint__propagate_conj_sub_goal_2_7_0_i67);
	}
	if (MR_INT_EQ(MR_ctfield(3, MR_r6, 0),1)) {
		MR_GOTO_LAB(transform_hlds__constraint__propagate_conj_sub_goal_2_7_0_i41);
	}
	if (MR_INT_EQ(MR_ctfield(3, MR_r6, 0),2)) {
		MR_GOTO_LAB(transform_hlds__constraint__propagate_conj_sub_goal_2_7_0_i44);
	}
MR_def_label(transform_hlds__constraint__propagate_conj_sub_goal_2_7_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r6;
	MR_r1 = MR_ctfield(3, MR_r5, 2);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(transform_hlds__constraint__propagate_goal_7_0,
		transform_hlds__constraint__propagate_conj_sub_goal_2_7_0_i39);
MR_def_label(transform_hlds__constraint__propagate_conj_sub_goal_2_7_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_sv(3) = MR_r6;
	MR_r1 = MR_ctfield(3, MR_r5, 2);
	MR_np_call_localret_ent(transform_hlds__constraint__propagate_goal_7_0,
		transform_hlds__constraint__propagate_conj_sub_goal_2_7_0_i45);
MR_def_label(transform_hlds__constraint__propagate_conj_sub_goal_2_7_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__constraint__propagate_conj_sub_goal_2_7_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r6;
	MR_r1 = MR_ctfield(3, MR_r5, 2);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(transform_hlds__constraint__propagate_goal_7_0,
		transform_hlds__constraint__propagate_conj_sub_goal_2_7_0_i42);
MR_def_label(transform_hlds__constraint__propagate_conj_sub_goal_2_7_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__constraint__flatten_constraints_2_0,
		transform_hlds__constraint__propagate_conj_sub_goal_2_7_0_i43);
MR_def_label(transform_hlds__constraint__propagate_conj_sub_goal_2_7_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_r1;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__constraint__propagate_conj_sub_goal_2_7_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__constraint__flatten_constraints_2_0,
		transform_hlds__constraint__propagate_conj_sub_goal_2_7_0_i40);
MR_def_label(transform_hlds__constraint__propagate_conj_sub_goal_2_7_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__constraint__propagate_conj_sub_goal_2_7_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(5) = MR_ctfield(3, MR_tempr1, 4);
	MR_sv(6) = MR_ctfield(0, MR_r3, 3);
	MR_r1 = MR_ctfield(3, MR_tempr1, 2);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(transform_hlds__constraint__propagate_goal_7_0,
		transform_hlds__constraint__propagate_conj_sub_goal_2_7_0_i49);
MR_def_label(transform_hlds__constraint__propagate_conj_sub_goal_2_7_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(transform_hlds__constraint__constraint_info_update_goal_3_0,
		transform_hlds__constraint__propagate_conj_sub_goal_2_7_0_i50);
MR_def_label(transform_hlds__constraint__propagate_conj_sub_goal_2_7_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__constraint__propagate_goal_7_0,
		transform_hlds__constraint__propagate_conj_sub_goal_2_7_0_i51);
MR_def_label(transform_hlds__constraint__propagate_conj_sub_goal_2_7_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__constraint__propagate_goal_7_0,
		transform_hlds__constraint__propagate_conj_sub_goal_2_7_0_i52);
MR_def_label(transform_hlds__constraint__propagate_conj_sub_goal_2_7_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 4) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__constraint__propagate_conj_sub_goal_2_7_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__transform_hlds__constraint__this_file_0_0,
		transform_hlds__constraint__propagate_conj_sub_goal_2_7_0_i54);
MR_def_label(transform_hlds__constraint__propagate_conj_sub_goal_2_7_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("propagate_conj_sub_goal_2: shorthand", 36);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__constraint_module15)
	MR_init_entry1(transform_hlds__constraint__propagate_in_independent_goals_7_0);
	MR_init_label3(transform_hlds__constraint__propagate_in_independent_goals_7_0,4,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__constraint__propagate_in_independent_goals_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__constraint__propagate_in_independent_goals_7_0_i3);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_sv(3) = MR_ctfield(0, MR_r3, 3);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(transform_hlds__constraint__propagate_goal_7_0,
		transform_hlds__constraint__propagate_in_independent_goals_7_0_i4);
MR_def_label(transform_hlds__constraint__propagate_in_independent_goals_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_localcall_lab(transform_hlds__constraint__propagate_in_independent_goals_7_0,
		transform_hlds__constraint__propagate_in_independent_goals_7_0_i5);
MR_def_label(transform_hlds__constraint__propagate_in_independent_goals_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(transform_hlds__constraint__propagate_in_independent_goals_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__instmap__bind_var_to_functor_7_0);

MR_BEGIN_MODULE(transform_hlds__constraint_module16)
	MR_init_entry1(transform_hlds__constraint__propagate_cases_8_0);
	MR_init_label5(transform_hlds__constraint__propagate_cases_8_0,4,5,6,7,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__constraint__propagate_cases_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(transform_hlds__constraint__propagate_cases_8_0_i3);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_tempr2;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(6) = MR_ctfield(1, MR_tempr3, 1);
	MR_sv(7) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(8) = MR_ctfield(0, MR_tempr2, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_ctfield(0, MR_r4, 1);
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__constraint__propagate_cases_8_0_i4);
MR_def_label(transform_hlds__constraint__propagate_cases_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(8);
	MR_np_call_localret_ent(hlds__instmap__bind_var_to_functor_7_0,
		transform_hlds__constraint__propagate_cases_8_0_i5);
MR_def_label(transform_hlds__constraint__propagate_cases_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tempr2 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(transform_hlds__constraint__propagate_goal_7_0,
		transform_hlds__constraint__propagate_cases_8_0_i6);
MR_def_label(transform_hlds__constraint__propagate_cases_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr2;
	MR_tempr3 = MR_r2;
	MR_tfield(0, MR_tempr2, 0) = MR_ctfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_ctfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr2, 2) = MR_ctfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr2, 3) = MR_sv(7);
	MR_tfield(0, MR_tempr2, 4) = MR_ctfield(0, MR_tempr3, 4);
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	}
	MR_np_localcall_lab(transform_hlds__constraint__propagate_cases_8_0,
		transform_hlds__constraint__propagate_cases_8_0_i7);
MR_def_label(transform_hlds__constraint__propagate_cases_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(transform_hlds__constraint__propagate_cases_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r4;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__constraint_module17)
	MR_init_entry1(transform_hlds__constraint__propagate_conj_7_0);
	MR_init_label7(transform_hlds__constraint__propagate_conj_7_0,3,2,6,4,7,12,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__constraint__propagate_conj_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__constraint__propagate_conj_7_0_i3);
	}
	MR_r5 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_r5;
	MR_sv(3) = MR_r3;
	MR_GOTO_LAB(transform_hlds__constraint__propagate_conj_7_0_i2);
MR_def_label(transform_hlds__constraint__propagate_conj_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(3) = MR_tempr1;
	MR_tempr3 = MR_r3;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr3, 3);
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 1;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr2;
	}
MR_def_label(transform_hlds__constraint__propagate_conj_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__constraint__propagate_conj_7_0_i4);
	}
	MR_np_call_localret_ent(transform_hlds__constraint__flatten_constraints_2_0,
		transform_hlds__constraint__propagate_conj_7_0_i6);
MR_def_label(transform_hlds__constraint__propagate_conj_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(4);
MR_def_label(transform_hlds__constraint__propagate_conj_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__constraint__propagate_conj_7_0_i7);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__constraint__propagate_conj_7_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__constraint__propagate_conj_7_0_i7);
	}
	MR_r1 = MR_ctfield(1, MR_tempr2, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(transform_hlds__constraint__propagate_conj_sub_goal_7_0);
	}
MR_def_label(transform_hlds__constraint__propagate_conj_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	MR_r4 = MR_ctfield(0, MR_tempr1, 3);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(transform_hlds__constraint__annotate_conj_output_vars_6_0,
		transform_hlds__constraint__propagate_conj_7_0_i12);
MR_def_label(transform_hlds__constraint__propagate_conj_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__constraint__annotate_conj_constraints_9_0,
		transform_hlds__constraint__propagate_conj_7_0_i13);
MR_def_label(transform_hlds__constraint__propagate_conj_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(transform_hlds__constraint__propagate_conj_constraints_7_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__reverse_1_0);

MR_BEGIN_MODULE(transform_hlds__constraint_module18)
	MR_init_entry1(transform_hlds__constraint__propagate_conj_constraints_7_0);
	MR_init_label8(transform_hlds__constraint__propagate_conj_constraints_7_0,21,4,5,6,7,8,9,10)
	MR_init_label5(transform_hlds__constraint__propagate_conj_constraints_7_0,11,12,13,3,15)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__constraint__propagate_conj_constraints_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__constraint__propagate_conj_constraints_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__constraint__propagate_conj_constraints_7_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(transform_hlds__constraint__filter_complex_constraints_2_5_0,
		transform_hlds__constraint__propagate_conj_constraints_7_0_i4);
MR_def_label(transform_hlds__constraint__propagate_conj_constraints_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__constraint, constraint);
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		transform_hlds__constraint__propagate_conj_constraints_7_0_i5);
MR_def_label(transform_hlds__constraint__propagate_conj_constraints_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__constraint, constraint);
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		transform_hlds__constraint__propagate_conj_constraints_7_0_i6);
MR_def_label(transform_hlds__constraint__propagate_conj_constraints_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(transform_hlds__constraint__propagate_conj_sub_goal_7_0,
		transform_hlds__constraint__propagate_conj_constraints_7_0_i7);
MR_def_label(transform_hlds__constraint__propagate_conj_constraints_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_sv(5) = MR_r2;
	}
	MR_np_call_localret_ent(transform_hlds__constraint__flatten_constraints_2_0,
		transform_hlds__constraint__propagate_conj_constraints_7_0_i8);
MR_def_label(transform_hlds__constraint__propagate_conj_constraints_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_np_call_localret_ent(list__reverse_2_0,
		transform_hlds__constraint__propagate_conj_constraints_7_0_i9);
MR_def_label(transform_hlds__constraint__propagate_conj_constraints_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_np_call_localret_ent(list__reverse_2_0,
		transform_hlds__constraint__propagate_conj_constraints_7_0_i10);
MR_def_label(transform_hlds__constraint__propagate_conj_constraints_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	}
	MR_np_call_localret_ent(list__condense_2_0,
		transform_hlds__constraint__propagate_conj_constraints_7_0_i11);
MR_def_label(transform_hlds__constraint__propagate_conj_constraints_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(0, MR_sv(5), 3);
	MR_r1 = MR_ctfield(0, MR_sv(3), 1);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_instmap_delta_2_0,
		transform_hlds__constraint__propagate_conj_constraints_7_0_i12);
MR_def_label(transform_hlds__constraint__propagate_conj_constraints_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__instmap__apply_instmap_delta_3_0,
		transform_hlds__constraint__propagate_conj_constraints_7_0_i13);
MR_def_label(transform_hlds__constraint__propagate_conj_constraints_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_sv(5);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(transform_hlds__constraint__propagate_conj_constraints_7_0_i21);
	}
MR_def_label(transform_hlds__constraint__propagate_conj_constraints_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_np_call_localret_ent(list__reverse_2_0,
		transform_hlds__constraint__propagate_conj_constraints_7_0_i15);
MR_def_label(transform_hlds__constraint__propagate_conj_constraints_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__goal_info_has_feature_2_0);
MR_decl_entry(hlds__hlds_goal__goal_info_remove_feature_3_0);

MR_BEGIN_MODULE(transform_hlds__constraint_module19)
	MR_init_entry1(fn__transform_hlds__constraint__strip_constraint_markers_1_0);
	MR_init_label4(fn__transform_hlds__constraint__strip_constraint_markers_1_0,2,4,6,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__constraint__strip_constraint_markers_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_np_call_localret_ent(fn__transform_hlds__constraint__strip_constraint_markers_expr_1_0,
		fn__transform_hlds__constraint__strip_constraint_markers_1_0_i2);
MR_def_label(fn__transform_hlds__constraint__strip_constraint_markers_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_has_feature_2_0,
		fn__transform_hlds__constraint__strip_constraint_markers_1_0_i4);
MR_def_label(fn__transform_hlds__constraint__strip_constraint_markers_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__transform_hlds__constraint__strip_constraint_markers_1_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_remove_feature_3_0,
		fn__transform_hlds__constraint__strip_constraint_markers_1_0_i6);
MR_def_label(fn__transform_hlds__constraint__strip_constraint_markers_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(fn__transform_hlds__constraint__strip_constraint_markers_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_sv(2);
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_case_0;

MR_BEGIN_MODULE(transform_hlds__constraint_module20)
	MR_init_entry1(fn__transform_hlds__constraint__strip_constraint_markers_expr_1_0);
	MR_init_label8(fn__transform_hlds__constraint__strip_constraint_markers_expr_1_0,38,10,39,12,40,14,41,16)
	MR_init_label7(fn__transform_hlds__constraint__strip_constraint_markers_expr_1_0,42,18,43,20,21,22,37)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__constraint__strip_constraint_markers_expr_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_r1),3)) {
		MR_GOTO_LAB(fn__transform_hlds__constraint__strip_constraint_markers_expr_1_0_i37);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(fn__transform_hlds__constraint__strip_constraint_markers_expr_1_0_i37) MR_AND
		MR_LABEL_AP(fn__transform_hlds__constraint__strip_constraint_markers_expr_1_0_i38) MR_AND
		MR_LABEL_AP(fn__transform_hlds__constraint__strip_constraint_markers_expr_1_0_i39) MR_AND
		MR_LABEL_AP(fn__transform_hlds__constraint__strip_constraint_markers_expr_1_0_i40) MR_AND
		MR_LABEL_AP(fn__transform_hlds__constraint__strip_constraint_markers_expr_1_0_i41) MR_AND
		MR_LABEL_AP(fn__transform_hlds__constraint__strip_constraint_markers_expr_1_0_i42) MR_AND
		MR_LABEL_AP(fn__transform_hlds__constraint__strip_constraint_markers_expr_1_0_i43) MR_AND
		MR_LABEL_AP(fn__transform_hlds__constraint__strip_constraint_markers_expr_1_0_i37));
MR_def_label(fn__transform_hlds__constraint__strip_constraint_markers_expr_1_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,5);
	MR_r4 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__transform_hlds__constraint__strip_constraint_markers_expr_1_0_i10);
MR_def_label(fn__transform_hlds__constraint__strip_constraint_markers_expr_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(fn__transform_hlds__constraint__strip_constraint_markers_expr_1_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,6);
	MR_r4 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__transform_hlds__constraint__strip_constraint_markers_expr_1_0_i12);
MR_def_label(fn__transform_hlds__constraint__strip_constraint_markers_expr_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(fn__transform_hlds__constraint__strip_constraint_markers_expr_1_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_sv(2) = MR_ctfield(3, MR_r1, 2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,7);
	MR_r4 = MR_ctfield(3, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__transform_hlds__constraint__strip_constraint_markers_expr_1_0_i14);
MR_def_label(fn__transform_hlds__constraint__strip_constraint_markers_expr_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(fn__transform_hlds__constraint__strip_constraint_markers_expr_1_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__transform_hlds__constraint__strip_constraint_markers_1_0,
		fn__transform_hlds__constraint__strip_constraint_markers_expr_1_0_i16);
MR_def_label(fn__transform_hlds__constraint__strip_constraint_markers_expr_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(fn__transform_hlds__constraint__strip_constraint_markers_expr_1_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_np_call_localret_ent(fn__transform_hlds__constraint__strip_constraint_markers_1_0,
		fn__transform_hlds__constraint__strip_constraint_markers_expr_1_0_i18);
MR_def_label(fn__transform_hlds__constraint__strip_constraint_markers_expr_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(fn__transform_hlds__constraint__strip_constraint_markers_expr_1_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_sv(2) = MR_ctfield(3, MR_r1, 3);
	MR_sv(3) = MR_ctfield(3, MR_r1, 4);
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_np_call_localret_ent(fn__transform_hlds__constraint__strip_constraint_markers_1_0,
		fn__transform_hlds__constraint__strip_constraint_markers_expr_1_0_i20);
MR_def_label(fn__transform_hlds__constraint__strip_constraint_markers_expr_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__transform_hlds__constraint__strip_constraint_markers_1_0,
		fn__transform_hlds__constraint__strip_constraint_markers_expr_1_0_i21);
MR_def_label(fn__transform_hlds__constraint__strip_constraint_markers_expr_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__transform_hlds__constraint__strip_constraint_markers_1_0,
		fn__transform_hlds__constraint__strip_constraint_markers_expr_1_0_i22);
MR_def_label(fn__transform_hlds__constraint__strip_constraint_markers_expr_1_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(fn__transform_hlds__constraint__strip_constraint_markers_expr_1_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__constraint_module21)
	MR_init_entry1(transform_hlds__constraint__propagate_constraints_in_goal_6_0);
	MR_init_label1(transform_hlds__constraint__propagate_constraints_in_goal_6_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__constraint__propagate_constraints_in_goal_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__transform_hlds__constraint__strip_constraint_markers_1_0,
		transform_hlds__constraint__propagate_constraints_in_goal_6_0_i2);
MR_def_label(transform_hlds__constraint__propagate_constraints_in_goal_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(transform_hlds__constraint__propagate_goal_7_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__constraint_module22)
	MR_init_entry1(transform_hlds__constraint__constraint_info_init_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__constraint__constraint_info_init_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tfield(0, MR_tempr1, 2) = MR_r3;
	MR_tfield(0, MR_tempr1, 3) = MR_r4;
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 0;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__constraint_module23)
	MR_init_entry1(transform_hlds__constraint__constraint_info_deconstruct_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__constraint__constraint_info_deconstruct_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_r3 = MR_ctfield(0, MR_tempr1, 2);
	MR_r4 = MR_ctfield(0, MR_tempr1, 4);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__constraint_module24)
	MR_init_entry1(transform_hlds__constraint__add_empty_constraints_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__constraint__add_empty_constraints_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__goal_info_add_feature_3_0);

MR_BEGIN_MODULE(transform_hlds__constraint_module25)
	MR_init_entry1(fn__transform_hlds__constraint__add_constraint_feature_1_0);
	MR_init_label1(fn__transform_hlds__constraint__add_constraint_feature_1_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__constraint__add_constraint_feature_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_add_feature_3_0,
		fn__transform_hlds__constraint__add_constraint_feature_1_0_i2);
MR_def_label(fn__transform_hlds__constraint__add_constraint_feature_1_0,2)
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

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(transform_hlds__constraint_module26)
	MR_init_entry1(__Unify___transform_hlds__constraint__annotated_conj_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__constraint__annotated_conj_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__constraint, annotated_conjunct);
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

MR_BEGIN_MODULE(transform_hlds__constraint_module27)
	MR_init_entry1(__Compare___transform_hlds__constraint__annotated_conj_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__constraint__annotated_conj_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__constraint, annotated_conjunct);
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

MR_decl_entry(__Unify___hlds__hlds_goal__hlds_goal_0_0);

MR_BEGIN_MODULE(transform_hlds__constraint_module28)
	MR_init_entry1(__Unify___transform_hlds__constraint__annotated_conjunct_0_0);
	MR_init_label5(__Unify___transform_hlds__constraint__annotated_conjunct_0_0,4,6,8,12,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__constraint__annotated_conjunct_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__constraint__annotated_conjunct_0_0_i12);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 3);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_goal__hlds_goal_0_0,
		__Unify___transform_hlds__constraint__annotated_conjunct_0_0_i4);
MR_def_label(__Unify___transform_hlds__constraint__annotated_conjunct_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__constraint__annotated_conjunct_0_0_i1);
	}
	MR_r2 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___transform_hlds__constraint__annotated_conjunct_0_0_i6);
MR_def_label(__Unify___transform_hlds__constraint__annotated_conjunct_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__constraint__annotated_conjunct_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___transform_hlds__constraint__annotated_conjunct_0_0_i8);
MR_def_label(__Unify___transform_hlds__constraint__annotated_conjunct_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__constraint__annotated_conjunct_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___transform_hlds__constraint__annotated_conjunct_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__constraint__annotated_conjunct_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___hlds__hlds_goal__hlds_goal_0_0);

MR_BEGIN_MODULE(transform_hlds__constraint_module29)
	MR_init_entry1(__Compare___transform_hlds__constraint__annotated_conjunct_0_0);
	MR_init_label6(__Compare___transform_hlds__constraint__annotated_conjunct_0_0,3,2,5,9,13,37)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__constraint__annotated_conjunct_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__constraint__annotated_conjunct_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__constraint__annotated_conjunct_0_0_i2);
MR_def_label(__Compare___transform_hlds__constraint__annotated_conjunct_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__constraint__annotated_conjunct_0_0,2)
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
	MR_np_call_localret_ent(__Compare___hlds__hlds_goal__hlds_goal_0_0,
		__Compare___transform_hlds__constraint__annotated_conjunct_0_0_i5);
MR_def_label(__Compare___transform_hlds__constraint__annotated_conjunct_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__constraint__annotated_conjunct_0_0_i37);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___transform_hlds__constraint__annotated_conjunct_0_0_i9);
MR_def_label(__Compare___transform_hlds__constraint__annotated_conjunct_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__constraint__annotated_conjunct_0_0_i37);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___transform_hlds__constraint__annotated_conjunct_0_0_i13);
MR_def_label(__Compare___transform_hlds__constraint__annotated_conjunct_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__constraint__annotated_conjunct_0_0_i37);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___transform_hlds__constraint__annotated_conjunct_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__constraint_module30)
	MR_init_entry1(__Unify___transform_hlds__constraint__constrained_conj_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__constraint__constrained_conj_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,1);
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


MR_BEGIN_MODULE(transform_hlds__constraint_module31)
	MR_init_entry1(__Compare___transform_hlds__constraint__constrained_conj_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__constraint__constrained_conj_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,1);
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


MR_BEGIN_MODULE(transform_hlds__constraint_module32)
	MR_init_entry1(__Unify___transform_hlds__constraint__constraint_0_0);
	MR_init_label5(__Unify___transform_hlds__constraint__constraint_0_0,4,6,8,12,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__constraint__constraint_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__constraint__constraint_0_0_i12);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 3);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_goal__hlds_goal_0_0,
		__Unify___transform_hlds__constraint__constraint_0_0_i4);
MR_def_label(__Unify___transform_hlds__constraint__constraint_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__constraint__constraint_0_0_i1);
	}
	MR_r2 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___transform_hlds__constraint__constraint_0_0_i6);
MR_def_label(__Unify___transform_hlds__constraint__constraint_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__constraint__constraint_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___transform_hlds__constraint__constraint_0_0_i8);
MR_def_label(__Unify___transform_hlds__constraint__constraint_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__constraint__constraint_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___transform_hlds__constraint__constraint_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__constraint__constraint_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__constraint_module33)
	MR_init_entry1(__Compare___transform_hlds__constraint__constraint_0_0);
	MR_init_label6(__Compare___transform_hlds__constraint__constraint_0_0,3,2,5,9,13,37)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__constraint__constraint_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__constraint__constraint_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__constraint__constraint_0_0_i2);
MR_def_label(__Compare___transform_hlds__constraint__constraint_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__constraint__constraint_0_0,2)
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
	MR_np_call_localret_ent(__Compare___hlds__hlds_goal__hlds_goal_0_0,
		__Compare___transform_hlds__constraint__constraint_0_0_i5);
MR_def_label(__Compare___transform_hlds__constraint__constraint_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__constraint__constraint_0_0_i37);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___transform_hlds__constraint__constraint_0_0_i9);
MR_def_label(__Compare___transform_hlds__constraint__constraint_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__constraint__constraint_0_0_i37);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___transform_hlds__constraint__constraint_0_0_i13);
MR_def_label(__Compare___transform_hlds__constraint__constraint_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__constraint__constraint_0_0_i37);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___transform_hlds__constraint__constraint_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___hlds__hlds_module__module_info_0_0);
MR_decl_entry(__Unify___tree234__tree234_2_0);
MR_decl_entry(__Unify___varset__varset_1_0);
MR_decl_entry(__Unify___hlds__instmap__instmap_0_0);

MR_BEGIN_MODULE(transform_hlds__constraint_module34)
	MR_init_entry1(__Unify___transform_hlds__constraint__constraint_info_0_0);
	MR_init_label6(__Unify___transform_hlds__constraint__constraint_info_0_0,4,6,8,10,12,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___transform_hlds__constraint__constraint_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__constraint__constraint_info_0_0_i12);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(7) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(8) = MR_ctfield(0, MR_tempr2, 4);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_module__module_info_0_0,
		__Unify___transform_hlds__constraint__constraint_info_0_0_i4);
MR_def_label(__Unify___transform_hlds__constraint__constraint_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__constraint__constraint_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___transform_hlds__constraint__constraint_info_0_0_i6);
MR_def_label(__Unify___transform_hlds__constraint__constraint_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__constraint__constraint_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___transform_hlds__constraint__constraint_info_0_0_i8);
MR_def_label(__Unify___transform_hlds__constraint__constraint_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__constraint__constraint_info_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___hlds__instmap__instmap_0_0,
		__Unify___transform_hlds__constraint__constraint_info_0_0_i10);
MR_def_label(__Unify___transform_hlds__constraint__constraint_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__constraint__constraint_info_0_0_i1);
	}
	MR_r1 = (MR_sv(4) == MR_sv(8));
	MR_decr_sp_and_return(9);
MR_def_label(__Unify___transform_hlds__constraint__constraint_info_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__constraint__constraint_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___hlds__hlds_module__module_info_0_0);
MR_decl_entry(__Compare___tree234__tree234_2_0);
MR_decl_entry(__Compare___varset__varset_1_0);
MR_decl_entry(__Compare___hlds__instmap__instmap_0_0);
MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(transform_hlds__constraint_module35)
	MR_init_entry1(__Compare___transform_hlds__constraint__constraint_info_0_0);
	MR_init_label7(__Compare___transform_hlds__constraint__constraint_info_0_0,3,2,5,9,13,17,45)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___transform_hlds__constraint__constraint_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__constraint__constraint_info_0_0_i3);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__constraint__constraint_info_0_0_i2);
MR_def_label(__Compare___transform_hlds__constraint__constraint_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__constraint__constraint_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(8) = MR_ctfield(0, MR_tempr5, 4);
	MR_sv(7) = MR_ctfield(0, MR_tempr5, 3);
	MR_sv(6) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(5) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(4) = MR_ctfield(0, MR_tempr6, 4);
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
	MR_np_call_localret_ent(__Compare___hlds__hlds_module__module_info_0_0,
		__Compare___transform_hlds__constraint__constraint_info_0_0_i5);
MR_def_label(__Compare___transform_hlds__constraint__constraint_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__constraint__constraint_info_0_0_i45);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___transform_hlds__constraint__constraint_info_0_0_i9);
MR_def_label(__Compare___transform_hlds__constraint__constraint_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__constraint__constraint_info_0_0_i45);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___transform_hlds__constraint__constraint_info_0_0_i13);
MR_def_label(__Compare___transform_hlds__constraint__constraint_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__constraint__constraint_info_0_0_i45);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___hlds__instmap__instmap_0_0,
		__Compare___transform_hlds__constraint__constraint_info_0_0_i17);
MR_def_label(__Compare___transform_hlds__constraint__constraint_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__constraint__constraint_info_0_0_i45);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___transform_hlds__constraint__constraint_info_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__constraint_module36)
	MR_init_entry1(transform_hlds__constraint__IntroducedFrom__pred__flatten_constraints__215__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__constraint__IntroducedFrom__pred__flatten_constraints__215__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(0, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(0, MR_r1, 3);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__instmap__lookup_var_3_0);
MR_decl_entry(hlds__instmap__instmap_delta_search_var_3_0);
MR_decl_entry(fn__f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(check_hlds__inst_match__inst_matches_initial_4_0);

MR_BEGIN_MODULE(transform_hlds__constraint_module37)
	MR_init_entry1(transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_output_vars__303__1_5_0);
	MR_init_label5(transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_output_vars__303__1_5_0,2,3,6,7,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_output_vars__303__1_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_r3;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__instmap__lookup_var_3_0,
		transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_output_vars__303__1_5_0_i2);
MR_def_label(transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_output_vars__303__1_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_search_var_3_0,
		transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_output_vars__303__1_5_0_i3);
MR_def_label(transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_output_vars__303__1_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_output_vars__303__1_5_0_i1);
	}
	MR_r4 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_output_vars__303__1_5_0_i6);
MR_def_label(transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_output_vars__303__1_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_matches_initial_4_0,
		transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_output_vars__303__1_5_0_i7);
MR_def_label(transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_output_vars__303__1_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_output_vars__303__1_5_0_i1);
	}
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_output_vars__303__1_5_0,1)
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

MR_decl_entry(check_hlds__inst_match__inst_matches_binding_4_0);

MR_BEGIN_MODULE(transform_hlds__constraint_module38)
	MR_init_entry1(transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_output_vars__316__1_5_0);
	MR_init_label5(transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_output_vars__316__1_5_0,2,3,6,7,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_output_vars__316__1_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_r3;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__instmap__lookup_var_3_0,
		transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_output_vars__316__1_5_0_i2);
MR_def_label(transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_output_vars__316__1_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_search_var_3_0,
		transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_output_vars__316__1_5_0_i3);
MR_def_label(transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_output_vars__316__1_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_output_vars__316__1_5_0_i1);
	}
	MR_r4 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_output_vars__316__1_5_0_i6);
MR_def_label(transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_output_vars__316__1_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_matches_binding_4_0,
		transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_output_vars__316__1_5_0_i7);
MR_def_label(transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_output_vars__316__1_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_output_vars__316__1_5_0_i1);
	}
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_output_vars__316__1_5_0,1)
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


MR_BEGIN_MODULE(transform_hlds__constraint_module39)
	MR_init_entry1(transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_constraints__397__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_constraints__397__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__constraint_module40)
	MR_init_entry1(fn__transform_hlds__constraint__IntroducedFrom__func__attach_constraints__513__1_1_0);
	MR_init_label2(fn__transform_hlds__constraint__IntroducedFrom__func__attach_constraints__513__1_1_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__constraint__IntroducedFrom__func__attach_constraints__513__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(2) = MR_ctfield(0, MR_r1, 1);
	MR_sv(3) = MR_ctfield(0, MR_r1, 2);
	MR_sv(1) = MR_ctfield(0, MR_r1, 3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_add_feature_3_0,
		fn__transform_hlds__constraint__IntroducedFrom__func__attach_constraints__513__1_1_0_i2);
MR_def_label(fn__transform_hlds__constraint__IntroducedFrom__func__attach_constraints__513__1_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r4 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,8);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__transform_hlds__constraint__IntroducedFrom__func__attach_constraints__513__1_1_0_i3);
MR_def_label(fn__transform_hlds__constraint__IntroducedFrom__func__attach_constraints__513__1_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__constraint_module41)
	MR_init_entry1(fn__transform_hlds__constraint__IntroducedFrom__func__strip_constraint_markers_expr__798__1_1_0);
	MR_init_label1(fn__transform_hlds__constraint__IntroducedFrom__func__strip_constraint_markers_expr__798__1_1_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__constraint__IntroducedFrom__func__strip_constraint_markers_expr__798__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_np_call_localret_ent(fn__transform_hlds__constraint__strip_constraint_markers_1_0,
		fn__transform_hlds__constraint__IntroducedFrom__func__strip_constraint_markers_expr__798__1_1_0_i2);
MR_def_label(fn__transform_hlds__constraint__IntroducedFrom__func__strip_constraint_markers_expr__798__1_1_0,2)
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

static void mercury__transform_hlds__constraint_maybe_bunch_0(void)
{
	transform_hlds__constraint_module0();
	transform_hlds__constraint_module1();
	transform_hlds__constraint_module2();
	transform_hlds__constraint_module3();
	transform_hlds__constraint_module4();
	transform_hlds__constraint_module5();
	transform_hlds__constraint_module6();
	transform_hlds__constraint_module7();
	transform_hlds__constraint_module8();
	transform_hlds__constraint_module9();
	transform_hlds__constraint_module10();
	transform_hlds__constraint_module11();
	transform_hlds__constraint_module12();
	transform_hlds__constraint_module13();
	transform_hlds__constraint_module14();
	transform_hlds__constraint_module15();
	transform_hlds__constraint_module16();
	transform_hlds__constraint_module17();
	transform_hlds__constraint_module18();
	transform_hlds__constraint_module19();
	transform_hlds__constraint_module20();
	transform_hlds__constraint_module21();
	transform_hlds__constraint_module22();
	transform_hlds__constraint_module23();
	transform_hlds__constraint_module24();
	transform_hlds__constraint_module25();
	transform_hlds__constraint_module26();
	transform_hlds__constraint_module27();
	transform_hlds__constraint_module28();
	transform_hlds__constraint_module29();
	transform_hlds__constraint_module30();
	transform_hlds__constraint_module31();
	transform_hlds__constraint_module32();
	transform_hlds__constraint_module33();
	transform_hlds__constraint_module34();
	transform_hlds__constraint_module35();
	transform_hlds__constraint_module36();
	transform_hlds__constraint_module37();
	transform_hlds__constraint_module38();
	transform_hlds__constraint_module39();
}

static void mercury__transform_hlds__constraint_maybe_bunch_1(void)
{
	transform_hlds__constraint_module40();
	transform_hlds__constraint_module41();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__transform_hlds__constraint__init(void);
void mercury__transform_hlds__constraint__init_type_tables(void);
void mercury__transform_hlds__constraint__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__transform_hlds__constraint__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__constraint__init_complexity_procs(void);
#endif

void mercury__transform_hlds__constraint__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__transform_hlds__constraint_maybe_bunch_0();
	mercury__transform_hlds__constraint_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__constraint__type_ctor_info_constraint_info_0,
		transform_hlds__constraint__constraint_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__constraint__type_ctor_info_constraint_0,
		transform_hlds__constraint__constraint_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__constraint__type_ctor_info_constrained_conj_0,
		transform_hlds__constraint__constrained_conj_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__constraint__type_ctor_info_annotated_conjunct_0,
		transform_hlds__constraint__annotated_conjunct_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__constraint__type_ctor_info_annotated_conj_0,
		transform_hlds__constraint__annotated_conj_0_0);
	mercury__transform_hlds__constraint__init_debugger();
}

void mercury__transform_hlds__constraint__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__constraint__type_ctor_info_constraint_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__constraint__type_ctor_info_constraint_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__constraint__type_ctor_info_constrained_conj_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__constraint__type_ctor_info_annotated_conjunct_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__constraint__type_ctor_info_annotated_conj_0);
	}
}


void mercury__transform_hlds__constraint__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__transform_hlds__constraint__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__constraint__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
