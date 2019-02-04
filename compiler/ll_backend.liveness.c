/*
** Automatically generated from `liveness.m'
** by the Mercury compiler,
** version rotd-2011-12-05, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__ll_backend__liveness__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 526 "../library/io.int"
#include "io.mh"

#line 28 "ll_backend.liveness.c"
#line 536 "../library/io.int"
#include "time.mh"

#line 32 "ll_backend.liveness.c"
#line 537 "../library/io.int"
#include "string.mh"

#line 36 "ll_backend.liveness.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 40 "ll_backend.liveness.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 44 "ll_backend.liveness.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 48 "ll_backend.liveness.c"
#line 49 "ll_backend.liveness.c"
#include "ll_backend.liveness.mh"

#line 52 "ll_backend.liveness.c"
#line 53 "ll_backend.liveness.c"
#ifndef LL_BACKEND__LIVENESS_DECL_GUARD
#define LL_BACKEND__LIVENESS_DECL_GUARD

#line 57 "ll_backend.liveness.c"
#line 58 "ll_backend.liveness.c"

#endif
#line 61 "ll_backend.liveness.c"

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
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_ll_backend__liveness__type_ctor_info_live_info_0;
MR_decl_label9(ll_backend__liveness__add_branch_pre_deaths_6_0, 2,5,6,7,8,4,10,11,12)
MR_decl_label3(ll_backend__liveness__add_liveness_after_goal_3_0, 2,3,4)
MR_decl_label6(ll_backend__liveness__delay_death_cases_6_0, 34,4,7,10,13,14)
MR_decl_label3(ll_backend__liveness__delay_death_conj_7_0, 17,4,5)
MR_decl_label6(ll_backend__liveness__delay_death_disj_6_0, 33,4,6,9,12,13)
MR_decl_label10(ll_backend__liveness__delay_death_goal_7_0, 2,3,4,6,7,8,9,10,11,12)
MR_decl_label5(ll_backend__liveness__delay_death_goal_7_0, 13,14,15,16,17)
MR_decl_label10(ll_backend__liveness__delay_death_goal_expr_9_0, 7,6,9,4,12,14,19,11,23,24)
MR_decl_label10(ll_backend__liveness__delay_death_goal_expr_9_0, 25,26,27,29,31,22,34,33,37,40)
MR_decl_label7(ll_backend__liveness__delay_death_goal_expr_9_0, 36,44,51,46,43,153,152)
MR_decl_label5(ll_backend__liveness__delay_death_par_conj_7_0, 19,4,5,7,8)
MR_decl_label5(ll_backend__liveness__delay_death_proc_body_4_0, 2,3,4,5,6)
MR_decl_label10(ll_backend__liveness__detect_deadness_in_cases_10_0, 4,5,6,7,3,8,9,12,14,11)
MR_decl_label5(ll_backend__liveness__detect_deadness_in_cases_10_0, 15,16,17,18,19)
MR_decl_label8(ll_backend__liveness__detect_deadness_in_conj_6_0, 33,4,7,9,6,11,12,13)
MR_decl_label10(ll_backend__liveness__detect_deadness_in_disj_9_0, 4,3,5,6,9,11,8,12,13,14)
MR_decl_label2(ll_backend__liveness__detect_deadness_in_disj_9_0, 15,16)
MR_decl_label10(ll_backend__liveness__detect_deadness_in_goal_6_0, 2,3,4,5,6,7,8,9,12,13)
MR_decl_label10(ll_backend__liveness__detect_deadness_in_goal_6_0, 14,15,16,17,11,21,24,25,26,23)
MR_decl_label10(ll_backend__liveness__detect_deadness_in_goal_6_0, 29,32,34,31,38,39,40,19,47,48)
MR_decl_label10(ll_backend__liveness__detect_deadness_in_goal_6_0, 49,50,45,54,55,56,57,58,59,62)
MR_decl_label10(ll_backend__liveness__detect_deadness_in_goal_6_0, 64,65,66,67,69,71,73,68,74,75)
MR_decl_label10(ll_backend__liveness__detect_deadness_in_goal_6_0, 79,81,78,82,83,84,85,86,87,61)
MR_decl_label10(ll_backend__liveness__detect_deadness_in_goal_6_0, 90,91,92,93,53,98,97,104,105,106)
MR_decl_label10(ll_backend__liveness__detect_deadness_in_goal_6_0, 101,107,100,112,113,114,111,10,118,119)
MR_decl_label10(ll_backend__liveness__detect_deadness_in_par_conj_9_0, 4,3,5,6,7,8,11,10,14,15)
MR_decl_label9(ll_backend__liveness__detect_liveness_in_cases_7_0, 25,4,5,6,7,8,9,10,11)
MR_decl_label6(ll_backend__liveness__detect_liveness_in_conj_5_0, 30,4,6,7,5,10)
MR_decl_label10(ll_backend__liveness__detect_liveness_in_construct_6_0, 5,6,8,10,12,13,14,16,17,18)
MR_decl_label4(ll_backend__liveness__detect_liveness_in_construct_6_0, 19,20,7,2)
MR_decl_label10(ll_backend__liveness__detect_liveness_in_construct_goal_loop_4_0, 72,11,13,14,15,16,17,18,10,4)
MR_decl_label2(ll_backend__liveness__detect_liveness_in_construct_goal_loop_4_0, 23,24)
MR_decl_label9(ll_backend__liveness__detect_liveness_in_disj_7_0, 24,4,5,6,7,8,9,10,11)
MR_decl_label10(ll_backend__liveness__detect_liveness_in_goal_5_0, 2,3,4,5,6,9,8,11,12,13)
MR_decl_label10(ll_backend__liveness__detect_liveness_in_goal_5_0, 14,15,16,17,20,21,22,19,26,27)
MR_decl_label10(ll_backend__liveness__detect_liveness_in_goal_5_0, 28,25,30,24,32,33,34,35,23,39)
MR_decl_label10(ll_backend__liveness__detect_liveness_in_goal_5_0, 40,41,43,38,50,51,54,53,56,57)
MR_decl_label10(ll_backend__liveness__detect_liveness_in_goal_5_0, 58,59,60,61,62,63,64,66,67,49)
MR_decl_label10(ll_backend__liveness__detect_liveness_in_goal_5_0, 73,74,72,81,86,89,80,96,98,99)
MR_decl_label7(ll_backend__liveness__detect_liveness_in_goal_5_0, 100,101,102,103,95,18,105)
MR_decl_label9(ll_backend__liveness__detect_liveness_in_par_conj_7_0, 24,4,5,6,7,8,9,10,11)
MR_decl_label2(ll_backend__liveness__detect_liveness_pred_3_0, 2,3)
MR_decl_label2(ll_backend__liveness__detect_liveness_pred_proc_5_0, 2,3)
MR_decl_label1(ll_backend__liveness__detect_liveness_preds_parallel_2_0, 2)
MR_decl_label6(ll_backend__liveness__detect_liveness_preds_parallel_2_4_0, 22,3,6,8,2,11)
MR_decl_label10(ll_backend__liveness__detect_liveness_proc_2_4_0, 2,3,4,5,6,7,8,9,11,12)
MR_decl_label10(ll_backend__liveness__detect_liveness_proc_2_4_0, 13,14,15,16,17,18,19,20,21,22)
MR_decl_label10(ll_backend__liveness__detect_liveness_proc_2_4_0, 23,24,26,27,29,31,33,36,35,38)
MR_decl_label10(ll_backend__liveness__detect_liveness_proc_2_4_0, 34,39,42,25,46,45,49,51,52,53)
MR_decl_label10(ll_backend__liveness__detect_resume_points_in_cases_6_0, 52,4,7,9,11,10,14,15,16,17)
MR_decl_label8(ll_backend__liveness__detect_resume_points_in_cases_6_0, 18,19,20,21,22,23,24,25)
MR_decl_label3(ll_backend__liveness__detect_resume_points_in_conj_6_0, 17,4,5)
MR_decl_label10(ll_backend__liveness__detect_resume_points_in_goal_6_0, 2,3,4,5,6,7,100,9,13,12)
MR_decl_label10(ll_backend__liveness__detect_resume_points_in_goal_6_0, 16,10,20,22,26,19,30,31,32,33)
MR_decl_label10(ll_backend__liveness__detect_resume_points_in_goal_6_0, 34,35,36,38,40,37,46,45,51,50)
MR_decl_label10(ll_backend__liveness__detect_resume_points_in_goal_6_0, 58,59,29,63,64,65,66,69,67,74)
MR_decl_label10(ll_backend__liveness__detect_resume_points_in_goal_6_0, 72,80,62,86,87,83,89,82,94,93)
MR_decl_label3(ll_backend__liveness__detect_resume_points_in_goal_6_0, 8,98,99)
MR_decl_label4(ll_backend__liveness__detect_resume_points_in_last_disjunct_7_0, 2,3,4,5)
MR_decl_label8(ll_backend__liveness__detect_resume_points_in_non_disj_7_0, 6,5,10,9,12,13,15,3)
MR_decl_label10(ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0, 2,3,7,4,5,12,10,18,19,20)
MR_decl_label10(ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0, 21,22,24,23,26,27,28,29,30,31)
MR_decl_label6(ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0, 32,33,34,35,36,37)
MR_decl_label3(ll_backend__liveness__detect_resume_points_in_par_conj_6_0, 17,4,5)
MR_decl_label8(ll_backend__liveness__detect_resume_points_in_pruned_disj_7_0, 4,3,5,6,10,11,7,13)
MR_decl_label5(ll_backend__liveness__find_reachable_case_2_0, 21,3,6,5,1)
MR_decl_label5(ll_backend__liveness__find_reachable_goal_2_0, 21,3,6,5,1)
MR_decl_label7(ll_backend__liveness__find_value_giving_occurrences_5_0, 33,3,5,7,10,11,6)
MR_decl_label2(ll_backend__liveness__get_nonlocals_and_typeinfos_4_0, 2,3)
MR_decl_label10(ll_backend__liveness__initial_liveness_4_0, 2,3,4,6,7,10,9,13,14,15)
MR_decl_label5(ll_backend__liveness__initial_liveness_4_0, 16,17,18,19,20)
MR_decl_label6(ll_backend__liveness__initial_liveness_2_6_0, 40,3,9,10,8,1)
MR_decl_label5(ll_backend__liveness__maybe_debug_liveness_8_0, 3,4,5,6,17)
MR_decl_label10(ll_backend__liveness__require_equal_4_0, 3,5,6,7,8,9,10,11,12,13)
MR_decl_label4(ll_backend__liveness__require_equal_4_0, 14,15,16,18)
MR_decl_label2(ll_backend__liveness__union_branch_deadness_5_0, 4,3)
MR_decl_label3(ll_backend__liveness__update_liveness_conj_4_0, 10,3,4)
MR_decl_label10(ll_backend__liveness__update_liveness_expr_4_0, 3,4,9,6,13,15,16,17,20,18)
MR_decl_label10(ll_backend__liveness__update_liveness_expr_4_0, 24,26,28,23,14,32,34,39,40,36)
MR_decl_label5(ll_backend__liveness__update_liveness_expr_4_0, 35,47,45,44,51)
MR_decl_label10(ll_backend__liveness__update_liveness_goal_4_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label3(ll_backend__liveness__update_liveness_goal_4_0, 12,13,14)
MR_decl_label4(fn__ll_backend__liveness__kill_excess_delayed_dead_case_2_0, 2,3,4,5)
MR_decl_label4(fn__ll_backend__liveness__kill_excess_delayed_dead_goal_2_0, 2,3,4,5)
MR_decl_label5(__Unify___ll_backend__liveness__live_info_0_0, 4,6,9,13,1)
MR_decl_label7(__Compare___ll_backend__liveness__live_info_0_0, 3,2,5,9,13,18,61)
MR_decl_static(ll_backend__liveness__initial_liveness_2_6_0)
MR_def_extern_entry(ll_backend__liveness__initial_liveness_4_0)
MR_decl_static(ll_backend__liveness__maybe_debug_liveness_8_0)
MR_decl_static(ll_backend__liveness__add_liveness_after_goal_3_0)
MR_decl_static(ll_backend__liveness__detect_liveness_in_construct_goal_loop_4_0)
MR_decl_static(ll_backend__liveness__maybe_complete_with_typeinfos_3_0)
MR_decl_static(ll_backend__liveness__detect_liveness_in_construct_6_0)
MR_decl_static(ll_backend__liveness__find_value_giving_occurrences_5_0)
MR_decl_static(ll_backend__liveness__get_nonlocals_and_typeinfos_4_0)
MR_decl_static(ll_backend__liveness__detect_liveness_in_goal_5_0)
MR_decl_static(ll_backend__liveness__detect_liveness_in_conj_5_0)
MR_decl_static(ll_backend__liveness__detect_liveness_in_disj_7_0)
MR_decl_static(ll_backend__liveness__detect_liveness_in_cases_7_0)
MR_decl_static(ll_backend__liveness__detect_liveness_in_par_conj_7_0)
MR_decl_static(ll_backend__liveness__find_reachable_goal_2_0)
MR_decl_static(ll_backend__liveness__find_reachable_case_2_0)
MR_decl_static(ll_backend__liveness__update_liveness_goal_4_0)
MR_decl_static(ll_backend__liveness__update_liveness_expr_4_0)
MR_decl_static(ll_backend__liveness__update_liveness_conj_4_0)
MR_decl_static(ll_backend__liveness__union_branch_deadness_5_0)
MR_decl_static(ll_backend__liveness__add_branch_pre_deaths_6_0)
MR_decl_static(ll_backend__liveness__detect_deadness_in_goal_6_0)
MR_decl_static(ll_backend__liveness__detect_deadness_in_conj_6_0)
MR_decl_static(ll_backend__liveness__detect_deadness_in_disj_9_0)
MR_decl_static(ll_backend__liveness__detect_deadness_in_cases_10_0)
MR_decl_static(ll_backend__liveness__detect_deadness_in_par_conj_9_0)
MR_decl_static(fn__ll_backend__liveness__kill_excess_delayed_dead_goal_2_0)
MR_decl_static(ll_backend__liveness__delay_death_goal_7_0)
MR_decl_static(ll_backend__liveness__delay_death_goal_expr_9_0)
MR_decl_static(ll_backend__liveness__delay_death_conj_7_0)
MR_decl_static(ll_backend__liveness__delay_death_par_conj_7_0)
MR_decl_static(ll_backend__liveness__delay_death_disj_6_0)
MR_decl_static(ll_backend__liveness__delay_death_cases_6_0)
MR_decl_static(ll_backend__liveness__delay_death_proc_body_4_0)
MR_decl_static(ll_backend__liveness__require_equal_4_0)
MR_decl_static(ll_backend__liveness__detect_resume_points_in_goal_6_0)
MR_decl_static(ll_backend__liveness__detect_resume_points_in_conj_6_0)
MR_decl_static(ll_backend__liveness__detect_resume_points_in_non_disj_7_0)
MR_decl_static(ll_backend__liveness__detect_resume_points_in_pruned_disj_7_0)
MR_decl_static(ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0)
MR_decl_static(ll_backend__liveness__detect_resume_points_in_last_disjunct_7_0)
MR_decl_static(ll_backend__liveness__detect_resume_points_in_cases_6_0)
MR_decl_static(ll_backend__liveness__detect_resume_points_in_par_conj_6_0)
MR_decl_static(ll_backend__liveness__detect_liveness_proc_2_4_0)
MR_def_extern_entry(ll_backend__liveness__detect_liveness_proc_4_0)
MR_decl_static(ll_backend__liveness__detect_liveness_preds_parallel_2_4_0)
MR_def_extern_entry(ll_backend__liveness__detect_liveness_preds_parallel_2_0)
MR_decl_static(ll_backend__liveness__detect_liveness_pred_3_0)
MR_decl_static(ll_backend__liveness__detect_liveness_pred_proc_5_0)
MR_decl_static(ll_backend__liveness__var_is_named_2_0)
MR_decl_static(fn__ll_backend__liveness__kill_excess_delayed_dead_case_2_0)
MR_decl_static(__Unify___ll_backend__liveness__live_info_0_0)
MR_decl_static(__Compare___ll_backend__liveness__live_info_0_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_tree_bitset__type_ctor_info_tree_bitset_1;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_tree_bitset__type_ctor_info_tree_bitset_1;
static const struct mercury_type_0 mercury_common_0[7] =
{
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_CTOR1_ADDR(varset, varset),
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
MR_CTOR1_ADDR(tree_bitset, tree_bitset),
MR_TAG_COMMON(0,0,0)
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
MR_CTOR1_ADDR(tree_bitset, tree_bitset),
MR_COMMON(0,4)
}
},
{
{
MR_CTOR1_ADDR(tree_bitset, tree_bitset),
MR_COMMON(0,4)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__liveness__delay_death_goal_7_0_1;
static const struct mercury_type_1 mercury_common_1[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__liveness__delay_death_goal_7_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,1),
MR_COMMON(0,2)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_case_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_case_0;
static const struct mercury_type_2 mercury_common_2[4] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_TAG_COMMON(0,0,3)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(0,6)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(hlds__hlds_goal, case),
MR_TAG_COMMON(0,0,3)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(hlds__hlds_goal, case),
MR_COMMON(0,6)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__liveness__delay_death_goal_expr_9_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__liveness__delay_death_goal_expr_9_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_case_0;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__liveness__detect_liveness_preds_parallel_2_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__liveness__detect_liveness_preds_parallel_2_4_0_3;
static const struct mercury_type_3 mercury_common_3[4] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__liveness__delay_death_goal_expr_9_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,5),
MR_COMMON(2,1),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__liveness__delay_death_goal_expr_9_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,5),
MR_COMMON(2,3),
MR_CTOR0_ADDR(hlds__hlds_goal, case)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__liveness__detect_liveness_preds_parallel_2_4_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_pred, pred_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__liveness__detect_liveness_preds_parallel_2_4_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_pred, pred_info)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__liveness__detect_liveness_preds_parallel_2_4_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__liveness__detect_liveness_preds_parallel_2_4_0_4;
static const struct mercury_type_4 mercury_common_4[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__liveness__detect_liveness_preds_parallel_2_4_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_pred, pred_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__liveness__detect_liveness_preds_parallel_2_4_0_4,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_pred, pred_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info)
}
},
};

MR_decl_entry(hlds__hlds_module__module_info_set_pred_info_4_0);
static const struct mercury_type_5 mercury_common_5[2] =
{
{
MR_COMMON(4,0),
MR_ENTRY_AP(hlds__hlds_module__module_info_set_pred_info_4_0),
0
},
{
MR_COMMON(4,1),
MR_ENTRY_AP(hlds__hlds_module__module_info_set_pred_info_4_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__liveness__detect_liveness_pred_3_0_1;
static const struct mercury_type_6 mercury_common_6[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__liveness__detect_liveness_pred_3_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_pred, pred_info),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_info)
}
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_varset__type_ctor_info_varset_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__liveness__field_types_live_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_module__type_ctor_info_module_info_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0
};

const MR_ConstString mercury_data_ll_backend__liveness__field_names_live_info_0_0[] = {
	"li_module_info",
	"li_typeinfo_liveness",
	"li_varset",
	"li_vartypes",
	"li_rtti_varmaps"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__liveness__du_functor_desc_live_info_0_0 = {
	"live_info",
	5,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__liveness__field_types_live_info_0_0,
	mercury_data_ll_backend__liveness__field_names_live_info_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__liveness__du_stag_ordered_live_info_0_0[] = {
	&mercury_data_ll_backend__liveness__du_functor_desc_live_info_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__liveness__du_ptag_ordered_live_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__liveness__du_stag_ordered_live_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__liveness__du_name_ordered_live_info_0[] = {
	&mercury_data_ll_backend__liveness__du_functor_desc_live_info_0_0
};

const MR_Integer mercury_data_ll_backend__liveness__functor_number_map_live_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__liveness__type_ctor_info_live_info_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__liveness__live_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__liveness__live_info_0_0)),
	"ll_backend.liveness",
	"live_info",
	{ (void *)mercury_data_ll_backend__liveness__du_name_ordered_live_info_0 },
	{ (void *)mercury_data_ll_backend__liveness__du_ptag_ordered_live_info_0 },
	1,
	4,
	mercury_data_ll_backend__liveness__functor_number_map_live_info_0
};


static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__liveness__detect_liveness_pred_3_0_1 = {
{
MR_PREDICATE,
"ll_backend.liveness",
"ll_backend.liveness",
"detect_liveness_pred_proc",
5,
0
},
"ll_backend.liveness",
"liveness.m",
252,
"7"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__liveness__detect_liveness_preds_parallel_2_4_0_4 = {
{
MR_PREDICATE,
"hlds.hlds_module",
"hlds.hlds_module",
"module_info_set_pred_info",
4,
0
},
"ll_backend.liveness",
"liveness.m",
243,
"8"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__liveness__detect_liveness_preds_parallel_2_4_0_3 = {
{
MR_PREDICATE,
"ll_backend.liveness",
"ll_backend.liveness",
"detect_liveness_pred",
3,
0
},
"ll_backend.liveness",
"liveness.m",
242,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__liveness__detect_liveness_preds_parallel_2_4_0_2 = {
{
MR_PREDICATE,
"hlds.hlds_module",
"hlds.hlds_module",
"module_info_set_pred_info",
4,
0
},
"ll_backend.liveness",
"liveness.m",
243,
"8"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__liveness__detect_liveness_preds_parallel_2_4_0_1 = {
{
MR_PREDICATE,
"ll_backend.liveness",
"ll_backend.liveness",
"detect_liveness_pred",
3,
0
},
"ll_backend.liveness",
"liveness.m",
242,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__liveness__delay_death_goal_expr_9_0_2 = {
{
MR_FUNCTION,
"ll_backend.liveness",
"ll_backend.liveness",
"kill_excess_delayed_dead_case",
3,
0
},
"ll_backend.liveness",
"liveness.m",
1231,
"65"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__liveness__delay_death_goal_expr_9_0_1 = {
{
MR_FUNCTION,
"ll_backend.liveness",
"ll_backend.liveness",
"kill_excess_delayed_dead_goal",
3,
0
},
"ll_backend.liveness",
"liveness.m",
1217,
"50"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__liveness__delay_death_goal_7_0_1 = {
{
MR_PREDICATE,
"ll_backend.liveness",
"ll_backend.liveness",
"var_is_named",
2,
0
},
"ll_backend.liveness",
"liveness.m",
1160,
"14"
};


MR_decl_entry(check_hlds__mode_util__mode_to_arg_mode_4_0);
MR_decl_entry(parse_tree__set_of_var__insert_3_0);

MR_BEGIN_MODULE(ll_backend__liveness_module0)
	MR_init_entry1(ll_backend__liveness__initial_liveness_2_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__liveness__initial_liveness_2_6_0);
	MR_init_label6(ll_backend__liveness__initial_liveness_2_6_0,40,3,9,10,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'initial_liveness_2'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__initial_liveness_2_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(ll_backend__liveness__initial_liveness_2_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__liveness__initial_liveness_2_6_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__liveness__initial_liveness_2_6_0_i1);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__liveness__initial_liveness_2_6_0_i1);
	}
	MR_r2 = MR_r5;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
MR_def_label(ll_backend__liveness__initial_liveness_2_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__liveness__initial_liveness_2_6_0_i1);
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__liveness__initial_liveness_2_6_0_i1);
	}
	MR_sv(6) = MR_tfield(1, MR_r3, 1);
	MR_sv(5) = MR_tfield(1, MR_r2, 1);
	MR_sv(4) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_r3 = MR_tfield(1, MR_r3, 0);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_to_arg_mode_4_0,
		ll_backend__liveness__initial_liveness_2_6_0_i9);
MR_def_label(ll_backend__liveness__initial_liveness_2_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(ll_backend__liveness__initial_liveness_2_6_0_i8);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__set_of_var__insert_3_0,
		ll_backend__liveness__initial_liveness_2_6_0_i10);
MR_def_label(ll_backend__liveness__initial_liveness_2_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(ll_backend__liveness__initial_liveness_2_6_0_i40);
	}
MR_def_label(ll_backend__liveness__initial_liveness_2_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(ll_backend__liveness__initial_liveness_2_6_0_i40);
MR_def_label(ll_backend__liveness__initial_liveness_2_6_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_get_headvars_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_argmodes_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_vartypes_2_0);
MR_decl_entry(map__apply_to_list_3_0);
MR_decl_entry(fn__parse_tree__set_of_var__init_0_0);
MR_decl_entry(require__unexpected_3_0);
MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_code_gen_nonlocals_1_0);
MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_rtti_varmaps_2_0);
MR_decl_entry(hlds__hlds_pred__body_should_use_typeinfo_liveness_3_0);
MR_decl_entry(hlds__hlds_rtti__maybe_complete_with_typeinfo_vars_5_0);
MR_decl_entry(parse_tree__set_of_var__intersect_3_0);

MR_BEGIN_MODULE(ll_backend__liveness_module1)
	MR_init_entry1(ll_backend__liveness__initial_liveness_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__liveness__initial_liveness_4_0);
	MR_init_label10(ll_backend__liveness__initial_liveness_4_0,2,3,4,6,7,10,9,13,14,15)
	MR_init_label5(ll_backend__liveness__initial_liveness_4_0,16,17,18,19,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'initial_liveness'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__liveness__initial_liveness_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(6) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		ll_backend__liveness__initial_liveness_4_0_i2);
MR_def_label(ll_backend__liveness__initial_liveness_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		ll_backend__liveness__initial_liveness_4_0_i3);
MR_def_label(ll_backend__liveness__initial_liveness_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		ll_backend__liveness__initial_liveness_4_0_i4);
MR_def_label(ll_backend__liveness__initial_liveness_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__apply_to_list_3_0,
		ll_backend__liveness__initial_liveness_4_0_i6);
MR_def_label(ll_backend__liveness__initial_liveness_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__init_0_0,
		ll_backend__liveness__initial_liveness_4_0_i7);
MR_def_label(ll_backend__liveness__initial_liveness_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__liveness__initial_liveness_2_6_0,
		ll_backend__liveness__initial_liveness_4_0_i10);
MR_def_label(ll_backend__liveness__initial_liveness_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__liveness__initial_liveness_4_0_i9);
	}
	MR_r1 = MR_sv(1);
	MR_sv(7) = MR_r2;
	MR_GOTO_LAB(ll_backend__liveness__initial_liveness_4_0_i13);
MR_def_label(ll_backend__liveness__initial_liveness_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.liveness", 19);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.liveness.initial_liveness\'/4", 50);
	MR_r3 = (MR_Word) MR_string_const("length mismatch", 15);
	MR_np_call_localret_ent(require__unexpected_3_0,
		ll_backend__liveness__initial_liveness_4_0_i13);
MR_def_label(ll_backend__liveness__initial_liveness_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		ll_backend__liveness__initial_liveness_4_0_i14);
MR_def_label(ll_backend__liveness__initial_liveness_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		ll_backend__liveness__initial_liveness_4_0_i15);
MR_def_label(ll_backend__liveness__initial_liveness_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_code_gen_nonlocals_1_0,
		ll_backend__liveness__initial_liveness_4_0_i16);
MR_def_label(ll_backend__liveness__initial_liveness_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		ll_backend__liveness__initial_liveness_4_0_i17);
MR_def_label(ll_backend__liveness__initial_liveness_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_rtti_varmaps_2_0,
		ll_backend__liveness__initial_liveness_4_0_i18);
MR_def_label(ll_backend__liveness__initial_liveness_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__body_should_use_typeinfo_liveness_3_0,
		ll_backend__liveness__initial_liveness_4_0_i19);
MR_def_label(ll_backend__liveness__initial_liveness_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(hlds__hlds_rtti__maybe_complete_with_typeinfo_vars_5_0,
		ll_backend__liveness__initial_liveness_4_0_i20);
MR_def_label(ll_backend__liveness__initial_liveness_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(parse_tree__set_of_var__intersect_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_string_3_0);
MR_decl_entry(fn__hlds__hlds_out__hlds_out_util__init_hlds_out_info_1_0);
MR_decl_entry(hlds__hlds_out__hlds_out_goal__write_goal_9_0);

MR_BEGIN_MODULE(ll_backend__liveness_module2)
	MR_init_entry1(ll_backend__liveness__maybe_debug_liveness_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__liveness__maybe_debug_liveness_8_0);
	MR_init_label5(ll_backend__liveness__maybe_debug_liveness_8_0,3,4,5,6,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_debug_liveness'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__maybe_debug_liveness_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 != MR_r4)) {
		MR_GOTO_LAB(ll_backend__liveness__maybe_debug_liveness_8_0_i17);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__liveness__maybe_debug_liveness_8_0_i3);
MR_def_label(ll_backend__liveness__maybe_debug_liveness_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(":\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__liveness__maybe_debug_liveness_8_0_i4);
MR_def_label(ll_backend__liveness__maybe_debug_liveness_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		ll_backend__liveness__maybe_debug_liveness_8_0_i5);
MR_def_label(ll_backend__liveness__maybe_debug_liveness_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_util__init_hlds_out_info_1_0,
		ll_backend__liveness__maybe_debug_liveness_8_0_i6);
MR_def_label(ll_backend__liveness__maybe_debug_liveness_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = (MR_Integer) 1;
	MR_r6 = (MR_Integer) 0;
	MR_r7 = (MR_Word) MR_string_const("\n", 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(hlds__hlds_out__hlds_out_goal__write_goal_9_0);
MR_def_label(ll_backend__liveness__maybe_debug_liveness_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_llds__goal_info_get_post_births_2_0);
MR_decl_entry(parse_tree__set_of_var__union_3_0);
MR_decl_entry(hlds__hlds_llds__goal_info_set_post_births_3_0);

MR_BEGIN_MODULE(ll_backend__liveness_module3)
	MR_init_entry1(ll_backend__liveness__add_liveness_after_goal_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__liveness__add_liveness_after_goal_3_0);
	MR_init_label3(ll_backend__liveness__add_liveness_after_goal_3_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_liveness_after_goal'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__add_liveness_after_goal_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(0, MR_r1, 0);
	MR_sv(3) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_post_births_2_0,
		ll_backend__liveness__add_liveness_after_goal_3_0_i2);
MR_def_label(ll_backend__liveness__add_liveness_after_goal_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__union_3_0,
		ll_backend__liveness__add_liveness_after_goal_3_0_i3);
MR_def_label(ll_backend__liveness__add_liveness_after_goal_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_set_post_births_3_0,
		ll_backend__liveness__add_liveness_after_goal_3_0_i4);
MR_def_label(ll_backend__liveness__add_liveness_after_goal_3_0,4)
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

MR_decl_entry(parse_tree__set_of_var__remove_list_3_0);
MR_decl_entry(fn__parse_tree__set_of_var__make_singleton_1_0);
MR_decl_entry(fn__parse_tree__set_of_var__list_to_set_1_0);
MR_decl_entry(hlds__hlds_llds__goal_info_initialize_liveness_info_7_0);

MR_BEGIN_MODULE(ll_backend__liveness_module4)
	MR_init_entry1(ll_backend__liveness__detect_liveness_in_construct_goal_loop_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__liveness__detect_liveness_in_construct_goal_loop_4_0);
	MR_init_label10(ll_backend__liveness__detect_liveness_in_construct_goal_loop_4_0,72,11,13,14,15,16,17,18,10,4)
	MR_init_label2(ll_backend__liveness__detect_liveness_in_construct_goal_loop_4_0,23,24)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'detect_liveness_in_construct_goal_loop'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__detect_liveness_in_construct_goal_loop_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_liveness_in_construct_goal_loop_4_0_i72);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__liveness__detect_liveness_in_construct_goal_loop_4_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_liveness_in_construct_goal_loop_4_0_i4);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 3);
	if (MR_PTAG_TESTR(MR_tempr3,0)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_liveness_in_construct_goal_loop_4_0_i4);
	}
	MR_tempr4 = MR_tfield(0, MR_tempr3, 4);
	if (MR_LTAGS_TESTR(MR_tempr4,0,0)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_liveness_in_construct_goal_loop_4_0_i4);
	}
	MR_tempr4 = MR_tfield(0, MR_tempr3, 5);
	if (MR_INT_NE(MR_tempr4,1)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_liveness_in_construct_goal_loop_4_0_i4);
	}
	MR_tempr4 = MR_tfield(0, MR_tempr3, 6);
	if (MR_LTAGS_TESTR(MR_tempr4,0,0)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_liveness_in_construct_goal_loop_4_0_i4);
	}
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr3, 0);
	MR_sv(6) = MR_tfield(0, MR_tempr3, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__remove_list_3_0,
		ll_backend__liveness__detect_liveness_in_construct_goal_loop_4_0_i11);
MR_def_label(ll_backend__liveness__detect_liveness_in_construct_goal_loop_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_liveness_in_construct_goal_loop_4_0_i10);
	}
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(8);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__insert_3_0,
		ll_backend__liveness__detect_liveness_in_construct_goal_loop_4_0_i13);
MR_def_label(ll_backend__liveness__detect_liveness_in_construct_goal_loop_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__make_singleton_1_0,
		ll_backend__liveness__detect_liveness_in_construct_goal_loop_4_0_i14);
MR_def_label(ll_backend__liveness__detect_liveness_in_construct_goal_loop_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__init_0_0,
		ll_backend__liveness__detect_liveness_in_construct_goal_loop_4_0_i15);
MR_def_label(ll_backend__liveness__detect_liveness_in_construct_goal_loop_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__init_0_0,
		ll_backend__liveness__detect_liveness_in_construct_goal_loop_4_0_i16);
MR_def_label(ll_backend__liveness__detect_liveness_in_construct_goal_loop_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__list_to_set_1_0,
		ll_backend__liveness__detect_liveness_in_construct_goal_loop_4_0_i17);
MR_def_label(ll_backend__liveness__detect_liveness_in_construct_goal_loop_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr1;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_initialize_liveness_info_7_0,
		ll_backend__liveness__detect_liveness_in_construct_goal_loop_4_0_i18);
MR_def_label(ll_backend__liveness__detect_liveness_in_construct_goal_loop_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(7);
	}
	MR_np_localcall_lab(ll_backend__liveness__detect_liveness_in_construct_goal_loop_4_0,
		ll_backend__liveness__detect_liveness_in_construct_goal_loop_4_0_i24);
MR_def_label(ll_backend__liveness__detect_liveness_in_construct_goal_loop_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.liveness", 19);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.liveness.detect_liveness_in_construct_goal_loop\'/4", 72);
	MR_r3 = (MR_Word) MR_string_const("rhs var not live", 16);
	MR_np_call_localret_ent(require__unexpected_3_0,
		ll_backend__liveness__detect_liveness_in_construct_goal_loop_4_0_i23);
MR_def_label(ll_backend__liveness__detect_liveness_in_construct_goal_loop_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.liveness", 19);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.liveness.detect_liveness_in_construct_goal_loop\'/4", 72);
	MR_r3 = (MR_Word) MR_string_const("unexpected conjunct", 19);
	MR_np_call_localret_ent(require__unexpected_3_0,
		ll_backend__liveness__detect_liveness_in_construct_goal_loop_4_0_i23);
MR_def_label(ll_backend__liveness__detect_liveness_in_construct_goal_loop_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_localcall_lab(ll_backend__liveness__detect_liveness_in_construct_goal_loop_4_0,
		ll_backend__liveness__detect_liveness_in_construct_goal_loop_4_0_i24);
MR_def_label(ll_backend__liveness__detect_liveness_in_construct_goal_loop_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__liveness_module5)
	MR_init_entry1(ll_backend__liveness__maybe_complete_with_typeinfos_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__liveness__maybe_complete_with_typeinfos_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_complete_with_typeinfos'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__maybe_complete_with_typeinfos_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_tfield(0, MR_tempr1, 3);
	MR_r4 = MR_tfield(0, MR_tempr1, 4);
	MR_np_tailcall_ent(hlds__hlds_rtti__maybe_complete_with_typeinfo_vars_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__set_of_var__is_singleton_2_0);
MR_decl_entry(__Unify___term__var_1_0);

MR_BEGIN_MODULE(ll_backend__liveness_module6)
	MR_init_entry1(ll_backend__liveness__detect_liveness_in_construct_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__liveness__detect_liveness_in_construct_6_0);
	MR_init_label10(ll_backend__liveness__detect_liveness_in_construct_6_0,5,6,8,10,12,13,14,16,17,18)
	MR_init_label4(ll_backend__liveness__detect_liveness_in_construct_6_0,19,20,7,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'detect_liveness_in_construct'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__detect_liveness_in_construct_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,2)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_liveness_in_construct_6_0_i2);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_liveness_in_construct_6_0_i2);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(5) = MR_r2;
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__init_0_0,
		ll_backend__liveness__detect_liveness_in_construct_6_0_i5);
MR_def_label(ll_backend__liveness__detect_liveness_in_construct_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__liveness__detect_liveness_in_construct_goal_loop_4_0,
		ll_backend__liveness__detect_liveness_in_construct_6_0_i6);
MR_def_label(ll_backend__liveness__detect_liveness_in_construct_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(parse_tree__set_of_var__is_singleton_2_0,
		ll_backend__liveness__detect_liveness_in_construct_6_0_i8);
MR_def_label(ll_backend__liveness__detect_liveness_in_construct_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_liveness_in_construct_6_0_i7);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		ll_backend__liveness__detect_liveness_in_construct_6_0_i10);
MR_def_label(ll_backend__liveness__detect_liveness_in_construct_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_liveness_in_construct_6_0_i7);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__make_singleton_1_0,
		ll_backend__liveness__detect_liveness_in_construct_6_0_i12);
MR_def_label(ll_backend__liveness__detect_liveness_in_construct_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_tfield(0, MR_tempr1, 3);
	MR_r4 = MR_tfield(0, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(hlds__hlds_rtti__maybe_complete_with_typeinfo_vars_5_0,
		ll_backend__liveness__detect_liveness_in_construct_6_0_i13);
MR_def_label(ll_backend__liveness__detect_liveness_in_construct_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__union_3_0,
		ll_backend__liveness__detect_liveness_in_construct_6_0_i14);
MR_def_label(ll_backend__liveness__detect_liveness_in_construct_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_sv(2) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(4);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__init_0_0,
		ll_backend__liveness__detect_liveness_in_construct_6_0_i16);
MR_def_label(ll_backend__liveness__detect_liveness_in_construct_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__init_0_0,
		ll_backend__liveness__detect_liveness_in_construct_6_0_i17);
MR_def_label(ll_backend__liveness__detect_liveness_in_construct_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__init_0_0,
		ll_backend__liveness__detect_liveness_in_construct_6_0_i18);
MR_def_label(ll_backend__liveness__detect_liveness_in_construct_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__init_0_0,
		ll_backend__liveness__detect_liveness_in_construct_6_0_i19);
MR_def_label(ll_backend__liveness__detect_liveness_in_construct_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_initialize_liveness_info_7_0,
		ll_backend__liveness__detect_liveness_in_construct_6_0_i20);
MR_def_label(ll_backend__liveness__detect_liveness_in_construct_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	MR_decr_sp_and_return(8);
	}
MR_def_label(ll_backend__liveness__detect_liveness_in_construct_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.liveness", 19);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.liveness.detect_liveness_in_construct\'/6", 62);
	MR_r3 = (MR_Word) MR_string_const("unexpected liveness", 19);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ll_backend__liveness__detect_liveness_in_construct_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.liveness", 19);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.liveness.detect_liveness_in_construct\'/6", 62);
	MR_r3 = (MR_Word) MR_string_const("not conj", 8);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(hlds__instmap__instmap_delta_search_var_3_0);

MR_BEGIN_MODULE(ll_backend__liveness_module7)
	MR_init_entry1(ll_backend__liveness__find_value_giving_occurrences_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__liveness__find_value_giving_occurrences_5_0);
	MR_init_label7(ll_backend__liveness__find_value_giving_occurrences_5_0,33,3,5,7,10,11,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_value_giving_occurrences'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__find_value_giving_occurrences_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(ll_backend__liveness__find_value_giving_occurrences_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__liveness__find_value_giving_occurrences_5_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(8);
MR_def_label(ll_backend__liveness__find_value_giving_occurrences_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_tfield(1, MR_r1, 0);
	MR_sv(5) = MR_tfield(1, MR_r1, 1);
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_tfield(0, MR_sv(1), 3);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__liveness__find_value_giving_occurrences_5_0_i5);
MR_def_label(ll_backend__liveness__find_value_giving_occurrences_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_search_var_3_0,
		ll_backend__liveness__find_value_giving_occurrences_5_0_i7);
MR_def_label(ll_backend__liveness__find_value_giving_occurrences_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__liveness__find_value_giving_occurrences_5_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_to_arg_mode_4_0,
		ll_backend__liveness__find_value_giving_occurrences_5_0_i10);
MR_def_label(ll_backend__liveness__find_value_giving_occurrences_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(ll_backend__liveness__find_value_giving_occurrences_5_0_i6);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__set_of_var__insert_3_0,
		ll_backend__liveness__find_value_giving_occurrences_5_0_i11);
MR_def_label(ll_backend__liveness__find_value_giving_occurrences_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(ll_backend__liveness__find_value_giving_occurrences_5_0_i33);
	}
MR_def_label(ll_backend__liveness__find_value_giving_occurrences_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r1 = MR_sv(5);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(ll_backend__liveness__find_value_giving_occurrences_5_0_i33);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__liveness_module8)
	MR_init_entry1(ll_backend__liveness__get_nonlocals_and_typeinfos_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__liveness__get_nonlocals_and_typeinfos_4_0);
	MR_init_label2(ll_backend__liveness__get_nonlocals_and_typeinfos_4_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_nonlocals_and_typeinfos'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__get_nonlocals_and_typeinfos_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_code_gen_nonlocals_1_0,
		ll_backend__liveness__get_nonlocals_and_typeinfos_4_0_i2);
MR_def_label(ll_backend__liveness__get_nonlocals_and_typeinfos_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_tfield(0, MR_tempr1, 3);
	MR_r4 = MR_tfield(0, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(hlds__hlds_rtti__maybe_complete_with_typeinfo_vars_5_0,
		ll_backend__liveness__get_nonlocals_and_typeinfos_4_0_i3);
MR_def_label(ll_backend__liveness__get_nonlocals_and_typeinfos_4_0,3)
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

MR_decl_entry(parse_tree__set_of_var__difference_3_0);
MR_decl_entry(fn__parse_tree__set_of_var__to_sorted_list_1_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0);
MR_decl_entry(hlds__instmap__instmap_delta_is_unreachable_1_0);

MR_BEGIN_MODULE(ll_backend__liveness_module9)
	MR_init_entry1(ll_backend__liveness__detect_liveness_in_goal_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__liveness__detect_liveness_in_goal_5_0);
	MR_init_label10(ll_backend__liveness__detect_liveness_in_goal_5_0,2,3,4,5,6,9,8,11,12,13)
	MR_init_label10(ll_backend__liveness__detect_liveness_in_goal_5_0,14,15,16,17,20,21,22,19,26,27)
	MR_init_label10(ll_backend__liveness__detect_liveness_in_goal_5_0,28,25,30,24,32,33,34,35,23,39)
	MR_init_label10(ll_backend__liveness__detect_liveness_in_goal_5_0,40,41,43,38,50,51,54,53,56,57)
	MR_init_label10(ll_backend__liveness__detect_liveness_in_goal_5_0,58,59,60,61,62,63,64,66,67,49)
	MR_init_label10(ll_backend__liveness__detect_liveness_in_goal_5_0,73,74,72,81,86,89,80,96,98,99)
	MR_init_label7(ll_backend__liveness__detect_liveness_in_goal_5_0,100,101,102,103,95,18,105)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'detect_liveness_in_goal'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__detect_liveness_in_goal_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(7) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(8) = MR_tempr1;
	MR_sv(9) = MR_tfield(0, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(ll_backend__liveness__get_nonlocals_and_typeinfos_4_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i2);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(11) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(11);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(parse_tree__set_of_var__difference_3_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i3);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__to_sorted_list_1_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i4);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i5);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__init_0_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i6);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_is_unreachable_1_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i9);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_liveness_in_goal_5_0_i8);
	}
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(4);
	MR_r1 = MR_sv(11);
	MR_GOTO_LAB(ll_backend__liveness__detect_liveness_in_goal_5_0_i16);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__init_0_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i11);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__liveness__find_value_giving_occurrences_5_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i12);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__difference_3_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i13);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__difference_3_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i14);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__union_3_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i15);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(11);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(11) = MR_r1;
	MR_np_call_localret_ent(parse_tree__set_of_var__union_3_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i17);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((((MR_tag(MR_sv(9)) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_sv(9), 0) == (MR_Integer) 1)) || ((MR_tag(MR_sv(9)) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_sv(9), 0) == (MR_Integer) 0))) || (MR_tag(MR_sv(9)) == MR_mktag((MR_Integer) 2))) || (MR_tag(MR_sv(9)) == MR_mktag((MR_Integer) 1))))) {
		MR_GOTO_LAB(ll_backend__liveness__detect_liveness_in_goal_5_0_i19);
	}
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__init_0_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i20);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(6) = MR_sv(1);
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__init_0_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i21);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__init_0_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i22);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_sv(2);
	MR_r3 = MR_sv(8);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r4 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_initialize_liveness_info_7_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i105);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(9),3,2)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_liveness_in_goal_5_0_i23);
	}
	MR_r2 = MR_tfield(3, MR_sv(9), 1);
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_liveness_in_goal_5_0_i25);
	}
	MR_sv(5) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r2;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_r1 = MR_sv(11);
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__init_0_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i26);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__liveness__detect_liveness_in_par_conj_7_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i27);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(parse_tree__set_of_var__union_3_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i28);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r2, 1) = MR_sv(9);
	MR_tfield(3, MR_r2, 2) = MR_sv(8);
	MR_sv(9) = MR_r2;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_GOTO_LAB(ll_backend__liveness__detect_liveness_in_goal_5_0_i24);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r2;
	MR_r1 = MR_tfield(3, MR_tempr1, 2);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	}
	MR_np_call_localret_ent(ll_backend__liveness__detect_liveness_in_conj_5_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i30);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(9);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_sv(9) = MR_tempr1;
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(11);
	}
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__init_0_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i32);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__init_0_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i33);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__intersect_3_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i34);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__union_3_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i35);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(parse_tree__set_of_var__difference_3_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i102);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(9),3,3)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_liveness_in_goal_5_0_i38);
	}
	MR_sv(5) = MR_r1;
	MR_sv(9) = MR_tfield(3, MR_sv(9), 1);
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__init_0_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i39);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__liveness__detect_liveness_in_disj_7_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i40);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(parse_tree__set_of_var__union_3_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i41);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_sv(9) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(8);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(11);
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__init_0_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i43);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__init_0_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i99);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(9),3,6)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_liveness_in_goal_5_0_i49);
	}
	MR_sv(5) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 4);
	MR_r1 = MR_tfield(3, MR_tempr1, 2);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	}
	MR_np_localcall_lab(ll_backend__liveness__detect_liveness_in_goal_5_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i50);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i51);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_is_unreachable_1_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i54);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_liveness_in_goal_5_0_i53);
	}
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r1 = MR_sv(3);
	MR_sv(8) = MR_sv(10);
	MR_GOTO_LAB(ll_backend__liveness__detect_liveness_in_goal_5_0_i57);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(8);
	MR_np_localcall_lab(ll_backend__liveness__detect_liveness_in_goal_5_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i56);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(8) = MR_tempr1;
	}
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	MR_np_localcall_lab(ll_backend__liveness__detect_liveness_in_goal_5_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i58);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(parse_tree__set_of_var__union_3_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i59);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(parse_tree__set_of_var__intersect_3_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i60);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__difference_3_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i61);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(10);
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__difference_3_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i62);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__liveness__add_liveness_after_goal_3_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i63);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__liveness__add_liveness_after_goal_3_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i64);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 5);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_r2, 1) = MR_sv(9);
	MR_tfield(3, MR_r2, 2) = MR_sv(4);
	MR_tfield(3, MR_r2, 3) = MR_sv(8);
	MR_tfield(3, MR_r2, 4) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__init_0_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i66);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__init_0_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i67);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(12);
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__intersect_3_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i100);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(9),0)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_liveness_in_goal_5_0_i72);
	}
	MR_sv(5) = MR_r1;
	MR_r1 = MR_body((MR_Integer) MR_sv(9), (MR_Integer) 0);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_np_localcall_lab(ll_backend__liveness__detect_liveness_in_goal_5_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i73);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = (MR_Word) MR_tmkword(0, (MR_Word *) MR_r1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__init_0_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i74);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__init_0_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i99);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(9),3,5)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_liveness_in_goal_5_0_i80);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(9);
	MR_r5 = MR_tfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_tfield(3, MR_tempr2, 1);
	MR_r6 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_liveness_in_goal_5_0_i81);
	}
	MR_tempr1 = MR_tfield(3, MR_r6, 2);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_liveness_in_goal_5_0_i81);
	}
	MR_sv(5) = MR_r1;
	MR_tempr1 = MR_sv(8);
	MR_tempr2 = MR_r6;
	MR_sv(8) = MR_tempr2;
	MR_r1 = MR_r5;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(ll_backend__liveness__detect_liveness_in_construct_6_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i86);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r6;
	MR_r1 = MR_r5;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_localcall_lab(ll_backend__liveness__detect_liveness_in_goal_5_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i86);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_sv(9) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(8);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_sv(1) = MR_r2;
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__init_0_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i89);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__init_0_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i99);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(9),3,4)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_liveness_in_goal_5_0_i95);
	}
	MR_sv(5) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(8);
	MR_tempr3 = MR_sv(9);
	MR_sv(8) = MR_tfield(3, MR_tempr3, 1);
	MR_tempr2 = MR_tempr3;
	MR_sv(9) = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = MR_tfield(3, MR_tempr2, 3);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_r2;
	}
	MR_np_call_localret_ent(ll_backend__liveness__detect_liveness_in_cases_7_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i96);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(8);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(9);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_sv(9) = MR_tempr1;
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(11);
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__init_0_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i98);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__init_0_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i99);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__intersect_3_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i100);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__union_3_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i101);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(parse_tree__set_of_var__difference_3_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i102);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__difference_3_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i103);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_sv(2);
	MR_r3 = MR_sv(8);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_initialize_liveness_info_7_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i105);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ll_backend.liveness", 19);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.liveness.detect_liveness_in_goal\'/5", 57);
	MR_r3 = (MR_Word) MR_string_const("shorthand", 9);
	MR_np_call_localret_ent(require__unexpected_3_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i18);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_initialize_liveness_info_7_0,
		ll_backend__liveness__detect_liveness_in_goal_5_0_i105);
MR_def_label(ll_backend__liveness__detect_liveness_in_goal_5_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(13);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__liveness_module10)
	MR_init_entry1(ll_backend__liveness__detect_liveness_in_conj_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__liveness__detect_liveness_in_conj_5_0);
	MR_init_label6(ll_backend__liveness__detect_liveness_in_conj_5_0,30,4,6,7,5,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'detect_liveness_in_conj'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__detect_liveness_in_conj_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_liveness_in_conj_5_0_i30);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__liveness__detect_liveness_in_conj_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__liveness__detect_liveness_in_goal_5_0,
		ll_backend__liveness__detect_liveness_in_conj_5_0_i4);
MR_def_label(ll_backend__liveness__detect_liveness_in_conj_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		ll_backend__liveness__detect_liveness_in_conj_5_0_i6);
MR_def_label(ll_backend__liveness__detect_liveness_in_conj_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_is_unreachable_1_0,
		ll_backend__liveness__detect_liveness_in_conj_5_0_i7);
MR_def_label(ll_backend__liveness__detect_liveness_in_conj_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_liveness_in_conj_5_0_i5);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(3);
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(5);
MR_def_label(ll_backend__liveness__detect_liveness_in_conj_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_np_localcall_lab(ll_backend__liveness__detect_liveness_in_conj_5_0,
		ll_backend__liveness__detect_liveness_in_conj_5_0_i10);
MR_def_label(ll_backend__liveness__detect_liveness_in_conj_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__liveness_module11)
	MR_init_entry1(ll_backend__liveness__detect_liveness_in_disj_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__liveness__detect_liveness_in_disj_7_0);
	MR_init_label9(ll_backend__liveness__detect_liveness_in_disj_7_0,24,4,5,6,7,8,9,10,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'detect_liveness_in_disj'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__detect_liveness_in_disj_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_liveness_in_disj_7_0_i24);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r5;
	MR_proceed();
MR_def_label(ll_backend__liveness__detect_liveness_in_disj_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(6) = MR_r5;
	MR_sv(7) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__liveness__detect_liveness_in_goal_5_0,
		ll_backend__liveness__detect_liveness_in_disj_7_0_i4);
MR_def_label(ll_backend__liveness__detect_liveness_in_disj_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__union_3_0,
		ll_backend__liveness__detect_liveness_in_disj_7_0_i5);
MR_def_label(ll_backend__liveness__detect_liveness_in_disj_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr1;
	}
	MR_np_localcall_lab(ll_backend__liveness__detect_liveness_in_disj_7_0,
		ll_backend__liveness__detect_liveness_in_disj_7_0_i6);
MR_def_label(ll_backend__liveness__detect_liveness_in_disj_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__intersect_3_0,
		ll_backend__liveness__detect_liveness_in_disj_7_0_i7);
MR_def_label(ll_backend__liveness__detect_liveness_in_disj_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__difference_3_0,
		ll_backend__liveness__detect_liveness_in_disj_7_0_i8);
MR_def_label(ll_backend__liveness__detect_liveness_in_disj_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_tfield(0, MR_r2, 0);
	MR_sv(7) = MR_tfield(0, MR_r2, 1);
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_post_births_2_0,
		ll_backend__liveness__detect_liveness_in_disj_7_0_i9);
MR_def_label(ll_backend__liveness__detect_liveness_in_disj_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__union_3_0,
		ll_backend__liveness__detect_liveness_in_disj_7_0_i10);
MR_def_label(ll_backend__liveness__detect_liveness_in_disj_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_set_post_births_3_0,
		ll_backend__liveness__detect_liveness_in_disj_7_0_i11);
MR_def_label(ll_backend__liveness__detect_liveness_in_disj_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__liveness_module12)
	MR_init_entry1(ll_backend__liveness__detect_liveness_in_cases_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__liveness__detect_liveness_in_cases_7_0);
	MR_init_label9(ll_backend__liveness__detect_liveness_in_cases_7_0,25,4,5,6,7,8,9,10,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'detect_liveness_in_cases'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__detect_liveness_in_cases_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_liveness_in_cases_7_0_i25);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r5;
	MR_proceed();
MR_def_label(ll_backend__liveness__detect_liveness_in_cases_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(6) = MR_tempr2;
	MR_sv(8) = MR_r5;
	MR_sv(9) = MR_tfield(1, MR_r1, 1);
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(ll_backend__liveness__detect_liveness_in_goal_5_0,
		ll_backend__liveness__detect_liveness_in_cases_7_0_i4);
MR_def_label(ll_backend__liveness__detect_liveness_in_cases_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__union_3_0,
		ll_backend__liveness__detect_liveness_in_cases_7_0_i5);
MR_def_label(ll_backend__liveness__detect_liveness_in_cases_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_tempr1;
	}
	MR_np_localcall_lab(ll_backend__liveness__detect_liveness_in_cases_7_0,
		ll_backend__liveness__detect_liveness_in_cases_7_0_i6);
MR_def_label(ll_backend__liveness__detect_liveness_in_cases_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__intersect_3_0,
		ll_backend__liveness__detect_liveness_in_cases_7_0_i7);
MR_def_label(ll_backend__liveness__detect_liveness_in_cases_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__difference_3_0,
		ll_backend__liveness__detect_liveness_in_cases_7_0_i8);
MR_def_label(ll_backend__liveness__detect_liveness_in_cases_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r2 = MR_sv(8);
	MR_sv(8) = MR_tfield(0, MR_r2, 0);
	MR_sv(9) = MR_tfield(0, MR_r2, 1);
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_post_births_2_0,
		ll_backend__liveness__detect_liveness_in_cases_7_0_i9);
MR_def_label(ll_backend__liveness__detect_liveness_in_cases_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__union_3_0,
		ll_backend__liveness__detect_liveness_in_cases_7_0_i10);
MR_def_label(ll_backend__liveness__detect_liveness_in_cases_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_set_post_births_3_0,
		ll_backend__liveness__detect_liveness_in_cases_7_0_i11);
MR_def_label(ll_backend__liveness__detect_liveness_in_cases_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_tfield(1, MR_r1, 1) = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__liveness_module13)
	MR_init_entry1(ll_backend__liveness__detect_liveness_in_par_conj_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__liveness__detect_liveness_in_par_conj_7_0);
	MR_init_label9(ll_backend__liveness__detect_liveness_in_par_conj_7_0,24,4,5,6,7,8,9,10,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'detect_liveness_in_par_conj'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__detect_liveness_in_par_conj_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_liveness_in_par_conj_7_0_i24);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r5;
	MR_proceed();
MR_def_label(ll_backend__liveness__detect_liveness_in_par_conj_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(6) = MR_r5;
	MR_sv(7) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__liveness__detect_liveness_in_goal_5_0,
		ll_backend__liveness__detect_liveness_in_par_conj_7_0_i4);
MR_def_label(ll_backend__liveness__detect_liveness_in_par_conj_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__union_3_0,
		ll_backend__liveness__detect_liveness_in_par_conj_7_0_i5);
MR_def_label(ll_backend__liveness__detect_liveness_in_par_conj_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr1;
	}
	MR_np_localcall_lab(ll_backend__liveness__detect_liveness_in_par_conj_7_0,
		ll_backend__liveness__detect_liveness_in_par_conj_7_0_i6);
MR_def_label(ll_backend__liveness__detect_liveness_in_par_conj_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__intersect_3_0,
		ll_backend__liveness__detect_liveness_in_par_conj_7_0_i7);
MR_def_label(ll_backend__liveness__detect_liveness_in_par_conj_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__difference_3_0,
		ll_backend__liveness__detect_liveness_in_par_conj_7_0_i8);
MR_def_label(ll_backend__liveness__detect_liveness_in_par_conj_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_tfield(0, MR_r2, 0);
	MR_sv(7) = MR_tfield(0, MR_r2, 1);
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_post_births_2_0,
		ll_backend__liveness__detect_liveness_in_par_conj_7_0_i9);
MR_def_label(ll_backend__liveness__detect_liveness_in_par_conj_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__union_3_0,
		ll_backend__liveness__detect_liveness_in_par_conj_7_0_i10);
MR_def_label(ll_backend__liveness__detect_liveness_in_par_conj_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_set_post_births_3_0,
		ll_backend__liveness__detect_liveness_in_par_conj_7_0_i11);
MR_def_label(ll_backend__liveness__detect_liveness_in_par_conj_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__instmap__instmap_delta_is_reachable_1_0);

MR_BEGIN_MODULE(ll_backend__liveness_module14)
	MR_init_entry1(ll_backend__liveness__find_reachable_goal_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__liveness__find_reachable_goal_2_0);
	MR_init_label5(ll_backend__liveness__find_reachable_goal_2_0,21,3,6,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_reachable_goal'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__find_reachable_goal_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(ll_backend__liveness__find_reachable_goal_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__liveness__find_reachable_goal_2_0_i1);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_sv(1), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		ll_backend__liveness__find_reachable_goal_2_0_i3);
MR_def_label(ll_backend__liveness__find_reachable_goal_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_is_reachable_1_0,
		ll_backend__liveness__find_reachable_goal_2_0_i6);
MR_def_label(ll_backend__liveness__find_reachable_goal_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__liveness__find_reachable_goal_2_0_i5);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__liveness__find_reachable_goal_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(ll_backend__liveness__find_reachable_goal_2_0_i21);
MR_def_label(ll_backend__liveness__find_reachable_goal_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__liveness_module15)
	MR_init_entry1(ll_backend__liveness__find_reachable_case_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__liveness__find_reachable_case_2_0);
	MR_init_label5(ll_backend__liveness__find_reachable_case_2_0,21,3,6,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_reachable_case'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__find_reachable_case_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(ll_backend__liveness__find_reachable_case_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__liveness__find_reachable_case_2_0_i1);
	}
	MR_sv(1) = MR_tfield(0, MR_tfield(1, MR_r1, 0), 2);
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_sv(1), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		ll_backend__liveness__find_reachable_case_2_0_i3);
MR_def_label(ll_backend__liveness__find_reachable_case_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_is_unreachable_1_0,
		ll_backend__liveness__find_reachable_case_2_0_i6);
MR_def_label(ll_backend__liveness__find_reachable_case_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__liveness__find_reachable_case_2_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(ll_backend__liveness__find_reachable_case_2_0_i21);
MR_def_label(ll_backend__liveness__find_reachable_case_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__liveness__find_reachable_case_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_llds__goal_info_get_pre_deaths_2_0);
MR_decl_entry(hlds__hlds_llds__goal_info_get_pre_births_2_0);
MR_decl_entry(hlds__hlds_llds__goal_info_get_post_deaths_2_0);
MR_decl_entry(parse_tree__set_of_var__divide_by_set_4_0);

MR_BEGIN_MODULE(ll_backend__liveness_module16)
	MR_init_entry1(ll_backend__liveness__update_liveness_goal_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__liveness__update_liveness_goal_4_0);
	MR_init_label10(ll_backend__liveness__update_liveness_goal_4_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label3(ll_backend__liveness__update_liveness_goal_4_0,12,13,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'update_liveness_goal'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__update_liveness_goal_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_tfield(0, MR_r1, 0);
	MR_sv(6) = MR_tfield(0, MR_r1, 1);
	MR_sv(7) = MR_r3;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_pre_deaths_2_0,
		ll_backend__liveness__update_liveness_goal_4_0_i2);
MR_def_label(ll_backend__liveness__update_liveness_goal_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_pre_births_2_0,
		ll_backend__liveness__update_liveness_goal_4_0_i3);
MR_def_label(ll_backend__liveness__update_liveness_goal_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_post_deaths_2_0,
		ll_backend__liveness__update_liveness_goal_4_0_i4);
MR_def_label(ll_backend__liveness__update_liveness_goal_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_post_births_2_0,
		ll_backend__liveness__update_liveness_goal_4_0_i5);
MR_def_label(ll_backend__liveness__update_liveness_goal_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__difference_3_0,
		ll_backend__liveness__update_liveness_goal_4_0_i6);
MR_def_label(ll_backend__liveness__update_liveness_goal_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__union_3_0,
		ll_backend__liveness__update_liveness_goal_4_0_i7);
MR_def_label(ll_backend__liveness__update_liveness_goal_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__liveness__update_liveness_expr_4_0,
		ll_backend__liveness__update_liveness_goal_4_0_i8);
MR_def_label(ll_backend__liveness__update_liveness_goal_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__difference_3_0,
		ll_backend__liveness__update_liveness_goal_4_0_i9);
MR_def_label(ll_backend__liveness__update_liveness_goal_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__union_3_0,
		ll_backend__liveness__update_liveness_goal_4_0_i10);
MR_def_label(ll_backend__liveness__update_liveness_goal_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__divide_by_set_4_0,
		ll_backend__liveness__update_liveness_goal_4_0_i11);
MR_def_label(ll_backend__liveness__update_liveness_goal_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_code_gen_nonlocals_1_0,
		ll_backend__liveness__update_liveness_goal_4_0_i12);
MR_def_label(ll_backend__liveness__update_liveness_goal_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_tfield(0, MR_tempr1, 3);
	MR_r4 = MR_tfield(0, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(hlds__hlds_rtti__maybe_complete_with_typeinfo_vars_5_0,
		ll_backend__liveness__update_liveness_goal_4_0_i13);
MR_def_label(ll_backend__liveness__update_liveness_goal_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__intersect_3_0,
		ll_backend__liveness__update_liveness_goal_4_0_i14);
MR_def_label(ll_backend__liveness__update_liveness_goal_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(parse_tree__set_of_var__union_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__liveness_module17)
	MR_init_entry1(ll_backend__liveness__update_liveness_expr_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__liveness__update_liveness_expr_4_0);
	MR_init_label10(ll_backend__liveness__update_liveness_expr_4_0,3,4,9,6,13,15,16,17,20,18)
	MR_init_label10(ll_backend__liveness__update_liveness_expr_4_0,24,26,28,23,14,32,34,39,40,36)
	MR_init_label5(ll_backend__liveness__update_liveness_expr_4_0,35,47,45,44,51)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'update_liveness_expr'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__update_liveness_expr_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(ll_backend__liveness__update_liveness_expr_4_0_i3);
	}
	MR_r1 = MR_r3;
	MR_proceed();
MR_def_label(ll_backend__liveness__update_liveness_expr_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(ll_backend__liveness__update_liveness_expr_4_0_i4);
	}
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_tailcall_ent(ll_backend__liveness__update_liveness_conj_4_0);
MR_def_label(ll_backend__liveness__update_liveness_expr_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(ll_backend__liveness__update_liveness_expr_4_0_i6);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__liveness__find_reachable_goal_2_0,
		ll_backend__liveness__update_liveness_expr_4_0_i9);
MR_def_label(ll_backend__liveness__update_liveness_expr_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__liveness__update_liveness_expr_4_0_i45);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(ll_backend__liveness__update_liveness_goal_4_0);
MR_def_label(ll_backend__liveness__update_liveness_expr_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(ll_backend__liveness__update_liveness_expr_4_0_i13);
	}
	MR_r1 = MR_r3;
	MR_proceed();
MR_def_label(ll_backend__liveness__update_liveness_expr_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(ll_backend__liveness__update_liveness_expr_4_0_i14);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(3, MR_r1, 2);
	MR_sv(3) = MR_tfield(3, MR_r1, 3);
	MR_sv(4) = MR_tfield(3, MR_r1, 4);
	MR_sv(7) = MR_r3;
	MR_r1 = MR_tfield(0, MR_sv(4), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		ll_backend__liveness__update_liveness_expr_4_0_i15);
MR_def_label(ll_backend__liveness__update_liveness_expr_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(2), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		ll_backend__liveness__update_liveness_expr_4_0_i16);
MR_def_label(ll_backend__liveness__update_liveness_expr_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(3), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		ll_backend__liveness__update_liveness_expr_4_0_i17);
MR_def_label(ll_backend__liveness__update_liveness_expr_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_is_reachable_1_0,
		ll_backend__liveness__update_liveness_expr_4_0_i20);
MR_def_label(ll_backend__liveness__update_liveness_expr_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__liveness__update_liveness_expr_4_0_i18);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(ll_backend__liveness__update_liveness_goal_4_0);
MR_def_label(ll_backend__liveness__update_liveness_expr_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_is_reachable_1_0,
		ll_backend__liveness__update_liveness_expr_4_0_i24);
MR_def_label(ll_backend__liveness__update_liveness_expr_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__liveness__update_liveness_expr_4_0_i23);
	}
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_is_reachable_1_0,
		ll_backend__liveness__update_liveness_expr_4_0_i26);
MR_def_label(ll_backend__liveness__update_liveness_expr_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__liveness__update_liveness_expr_4_0_i23);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(ll_backend__liveness__update_liveness_goal_4_0,
		ll_backend__liveness__update_liveness_expr_4_0_i28);
MR_def_label(ll_backend__liveness__update_liveness_expr_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(ll_backend__liveness__update_liveness_goal_4_0);
	}
MR_def_label(ll_backend__liveness__update_liveness_expr_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_decr_sp_and_return(8);
MR_def_label(ll_backend__liveness__update_liveness_expr_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__liveness__update_liveness_expr_4_0_i32);
	}
	MR_r1 = MR_body((MR_Integer) MR_r1, (MR_Integer) 0);
	MR_np_tailcall_ent(ll_backend__liveness__update_liveness_goal_4_0);
MR_def_label(ll_backend__liveness__update_liveness_expr_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(ll_backend__liveness__update_liveness_expr_4_0_i34);
	}
	MR_r1 = MR_r3;
	MR_proceed();
MR_def_label(ll_backend__liveness__update_liveness_expr_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(ll_backend__liveness__update_liveness_expr_4_0_i35);
	}
	MR_r4 = MR_tfield(3, MR_r1, 2);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_r1, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(ll_backend__liveness__update_liveness_expr_4_0_i36);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 2);
	if (MR_INT_NE(MR_tempr2,1)) {
		MR_GOTO_LAB(ll_backend__liveness__update_liveness_expr_4_0_i36);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__make_singleton_1_0,
		ll_backend__liveness__update_liveness_expr_4_0_i39);
MR_def_label(ll_backend__liveness__update_liveness_expr_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_tfield(0, MR_tempr1, 3);
	MR_r4 = MR_tfield(0, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(hlds__hlds_rtti__maybe_complete_with_typeinfo_vars_5_0,
		ll_backend__liveness__update_liveness_expr_4_0_i40);
MR_def_label(ll_backend__liveness__update_liveness_expr_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(parse_tree__set_of_var__union_3_0);
	}
MR_def_label(ll_backend__liveness__update_liveness_expr_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_np_tailcall_ent(ll_backend__liveness__update_liveness_goal_4_0);
MR_def_label(ll_backend__liveness__update_liveness_expr_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(ll_backend__liveness__update_liveness_expr_4_0_i44);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_r1 = MR_tfield(3, MR_r1, 3);
	MR_np_call_localret_ent(ll_backend__liveness__find_reachable_case_2_0,
		ll_backend__liveness__update_liveness_expr_4_0_i47);
MR_def_label(ll_backend__liveness__update_liveness_expr_4_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__liveness__update_liveness_expr_4_0_i45);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(ll_backend__liveness__update_liveness_goal_4_0);
MR_def_label(ll_backend__liveness__update_liveness_expr_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(ll_backend__liveness__update_liveness_expr_4_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__liveness__update_liveness_expr_4_0_i51);
	}
	MR_r1 = MR_r3;
	MR_proceed();
MR_def_label(ll_backend__liveness__update_liveness_expr_4_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.liveness", 19);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.liveness.update_liveness_expr\'/4", 54);
	MR_r3 = (MR_Word) MR_string_const("shorthand", 9);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__liveness_module18)
	MR_init_entry1(ll_backend__liveness__update_liveness_conj_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__liveness__update_liveness_conj_4_0);
	MR_init_label3(ll_backend__liveness__update_liveness_conj_4_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'update_liveness_conj'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__update_liveness_conj_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(ll_backend__liveness__update_liveness_conj_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__liveness__update_liveness_conj_4_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__liveness__update_liveness_conj_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(ll_backend__liveness__update_liveness_goal_4_0,
		ll_backend__liveness__update_liveness_conj_4_0_i4);
MR_def_label(ll_backend__liveness__update_liveness_conj_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(ll_backend__liveness__update_liveness_conj_4_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__liveness_module19)
	MR_init_entry1(ll_backend__liveness__union_branch_deadness_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__liveness__union_branch_deadness_5_0);
	MR_init_label2(ll_backend__liveness__union_branch_deadness_5_0,4,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'union_branch_deadness'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__union_branch_deadness_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__liveness__union_branch_deadness_5_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__difference_3_0,
		ll_backend__liveness__union_branch_deadness_5_0_i4);
MR_def_label(ll_backend__liveness__union_branch_deadness_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(parse_tree__set_of_var__union_3_0);
	}
MR_def_label(ll_backend__liveness__union_branch_deadness_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_r4;
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(parse_tree__set_of_var__union_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_llds__goal_info_set_pre_deaths_3_0);

MR_BEGIN_MODULE(ll_backend__liveness_module20)
	MR_init_entry1(ll_backend__liveness__add_branch_pre_deaths_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__liveness__add_branch_pre_deaths_6_0);
	MR_init_label9(ll_backend__liveness__add_branch_pre_deaths_6_0,2,5,6,7,8,4,10,11,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_branch_pre_deaths'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__add_branch_pre_deaths_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__difference_3_0,
		ll_backend__liveness__add_branch_pre_deaths_6_0_i2);
MR_def_label(ll_backend__liveness__add_branch_pre_deaths_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(ll_backend__liveness__add_branch_pre_deaths_6_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__difference_3_0,
		ll_backend__liveness__add_branch_pre_deaths_6_0_i5);
MR_def_label(ll_backend__liveness__add_branch_pre_deaths_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_tfield(0, MR_sv(4), 0);
	MR_sv(4) = MR_tfield(0, MR_sv(4), 1);
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_pre_deaths_2_0,
		ll_backend__liveness__add_branch_pre_deaths_6_0_i6);
MR_def_label(ll_backend__liveness__add_branch_pre_deaths_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__union_3_0,
		ll_backend__liveness__add_branch_pre_deaths_6_0_i7);
MR_def_label(ll_backend__liveness__add_branch_pre_deaths_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_set_pre_deaths_3_0,
		ll_backend__liveness__add_branch_pre_deaths_6_0_i8);
MR_def_label(ll_backend__liveness__add_branch_pre_deaths_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(3);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
MR_def_label(ll_backend__liveness__add_branch_pre_deaths_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_tfield(0, MR_sv(4), 0);
	MR_sv(4) = MR_tfield(0, MR_sv(4), 1);
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_pre_deaths_2_0,
		ll_backend__liveness__add_branch_pre_deaths_6_0_i10);
MR_def_label(ll_backend__liveness__add_branch_pre_deaths_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__union_3_0,
		ll_backend__liveness__add_branch_pre_deaths_6_0_i11);
MR_def_label(ll_backend__liveness__add_branch_pre_deaths_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_set_pre_deaths_3_0,
		ll_backend__liveness__add_branch_pre_deaths_6_0_i12);
MR_def_label(ll_backend__liveness__add_branch_pre_deaths_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_llds__goal_info_set_post_deaths_3_0);

MR_BEGIN_MODULE(ll_backend__liveness_module21)
	MR_init_entry1(ll_backend__liveness__detect_deadness_in_goal_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__liveness__detect_deadness_in_goal_6_0);
	MR_init_label10(ll_backend__liveness__detect_deadness_in_goal_6_0,2,3,4,5,6,7,8,9,12,13)
	MR_init_label10(ll_backend__liveness__detect_deadness_in_goal_6_0,14,15,16,17,11,21,24,25,26,23)
	MR_init_label10(ll_backend__liveness__detect_deadness_in_goal_6_0,29,32,34,31,38,39,40,19,47,48)
	MR_init_label10(ll_backend__liveness__detect_deadness_in_goal_6_0,49,50,45,54,55,56,57,58,59,62)
	MR_init_label10(ll_backend__liveness__detect_deadness_in_goal_6_0,64,65,66,67,69,71,73,68,74,75)
	MR_init_label10(ll_backend__liveness__detect_deadness_in_goal_6_0,79,81,78,82,83,84,85,86,87,61)
	MR_init_label10(ll_backend__liveness__detect_deadness_in_goal_6_0,90,91,92,93,53,98,97,104,105,106)
	MR_init_label10(ll_backend__liveness__detect_deadness_in_goal_6_0,101,107,100,112,113,114,111,10,118,119)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'detect_deadness_in_goal'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__detect_deadness_in_goal_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(16);
	MR_sv(16) = (MR_Word) MR_succip;
	MR_sv(7) = MR_r1;
	MR_sv(2) = MR_r4;
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_sv(3) = MR_tfield(0, MR_r1, 1);
	MR_sv(13) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_pre_deaths_2_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i2);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_pre_births_2_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i3);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_post_deaths_2_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i4);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_post_births_2_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i5);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__difference_3_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i6);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__union_3_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i7);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__set_of_var__difference_3_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i8);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__union_3_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i9);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((((MR_tag(MR_sv(1)) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_sv(1), 0) == (MR_Integer) 1)) || ((MR_tag(MR_sv(1)) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_sv(1), 0) == (MR_Integer) 0))) || (MR_tag(MR_sv(1)) == MR_mktag((MR_Integer) 2))) || (MR_tag(MR_sv(1)) == MR_mktag((MR_Integer) 1))))) {
		MR_GOTO_LAB(ll_backend__liveness__detect_deadness_in_goal_6_0_i11);
	}
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__liveness__get_nonlocals_and_typeinfos_4_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i12);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(15);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__intersect_3_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i13);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(11);
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__difference_3_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i14);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(parse_tree__set_of_var__union_3_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i15);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(parse_tree__set_of_var__union_3_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i16);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_set_post_deaths_3_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i17);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(7) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r3 = MR_sv(5);
	MR_r2 = MR_sv(13);
	MR_r1 = MR_sv(15);
	MR_GOTO_LAB(ll_backend__liveness__detect_deadness_in_goal_6_0_i10);
	}
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,2)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_deadness_in_goal_6_0_i19);
	}
	MR_r3 = MR_tfield(3, MR_sv(1), 2);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_deadness_in_goal_6_0_i21);
	}
	MR_r3 = MR_sv(5);
	MR_r2 = MR_sv(11);
	MR_r1 = MR_sv(15);
	MR_GOTO_LAB(ll_backend__liveness__detect_deadness_in_goal_6_0_i10);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_r4 = MR_tempr1;
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_deadness_in_goal_6_0_i23);
	}
	MR_sv(7) = MR_tempr1;
	MR_sv(1) = MR_r3;
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(ll_backend__liveness__get_nonlocals_and_typeinfos_4_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i24);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	MR_r1 = MR_sv(15);
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__init_0_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i25);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__liveness__detect_deadness_in_par_conj_9_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i26);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_sv(7) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_r1 = MR_sv(15);
	MR_GOTO_LAB(ll_backend__liveness__detect_deadness_in_goal_6_0_i10);
	}
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r4;
	MR_sv(12) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(6) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = MR_tfield(0, MR_sv(1), 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i29);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_is_unreachable_1_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i32);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_deadness_in_goal_6_0_i31);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(2);
	MR_np_localcall_lab(ll_backend__liveness__detect_deadness_in_goal_6_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i34);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_r4 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(7);
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_sv(7) = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_r1 = MR_sv(15);
	MR_GOTO_LAB(ll_backend__liveness__detect_deadness_in_goal_6_0_i10);
	}
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(ll_backend__liveness__update_liveness_goal_4_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i38);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(ll_backend__liveness__detect_deadness_in_conj_6_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i39);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_localcall_lab(ll_backend__liveness__detect_deadness_in_goal_6_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i40);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_r4 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(7);
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_sv(7) = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_r1 = MR_sv(15);
	MR_GOTO_LAB(ll_backend__liveness__detect_deadness_in_goal_6_0_i10);
	}
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,3)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_deadness_in_goal_6_0_i45);
	}
	MR_r3 = MR_tfield(3, MR_sv(1), 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_deadness_in_goal_6_0_i47);
	}
	MR_r3 = MR_sv(5);
	MR_r2 = MR_sv(11);
	MR_r1 = MR_sv(15);
	MR_GOTO_LAB(ll_backend__liveness__detect_deadness_in_goal_6_0_i10);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r3;
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__init_0_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i48);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__liveness__get_nonlocals_and_typeinfos_4_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i49);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(1);
	}
	MR_np_call_localret_ent(ll_backend__liveness__detect_deadness_in_disj_9_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i50);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_sv(7) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_r1 = MR_sv(15);
	MR_GOTO_LAB(ll_backend__liveness__detect_deadness_in_goal_6_0_i10);
	}
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,6)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_deadness_in_goal_6_0_i53);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(1);
	MR_sv(7) = MR_tfield(3, MR_tempr2, 1);
	MR_tempr1 = MR_tempr2;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(6) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(13) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(12);
	}
	MR_np_call_localret_ent(ll_backend__liveness__update_liveness_goal_4_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i54);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(2);
	MR_np_localcall_lab(ll_backend__liveness__detect_deadness_in_goal_6_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i55);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	}
	MR_np_localcall_lab(ll_backend__liveness__detect_deadness_in_goal_6_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i56);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(12);
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	}
	MR_np_localcall_lab(ll_backend__liveness__detect_deadness_in_goal_6_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i57);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(ll_backend__liveness__get_nonlocals_and_typeinfos_4_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i58);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i59);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_is_reachable_1_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i62);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_deadness_in_goal_6_0_i61);
	}
	MR_r1 = MR_tfield(0, MR_sv(1), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i64);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(6), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i65);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(13), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i66);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__init_0_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i67);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_is_reachable_1_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i69);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_deadness_in_goal_6_0_i68);
	}
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_is_reachable_1_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i71);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_deadness_in_goal_6_0_i68);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(parse_tree__set_of_var__union_3_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i73);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_sv(1) = (MR_Integer) 1;
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_is_reachable_1_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i79);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(parse_tree__set_of_var__difference_3_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i74);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__union_3_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i75);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_sv(1) = (MR_Integer) 0;
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_is_reachable_1_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i79);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_deadness_in_goal_6_0_i78);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = (MR_Integer) 1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__liveness__union_branch_deadness_5_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i81);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(14);
	MR_r1 = MR_sv(15);
	MR_GOTO_LAB(ll_backend__liveness__detect_deadness_in_goal_6_0_i84);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(parse_tree__set_of_var__difference_3_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i82);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__union_3_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i83);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = (MR_Integer) 0;
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(14);
	MR_r1 = MR_sv(15);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r2;
	MR_sv(15) = MR_r1;
	MR_np_call_localret_ent(parse_tree__set_of_var__intersect_3_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i85);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__liveness__add_branch_pre_deaths_6_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i86);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(10);
	}
	MR_np_call_localret_ent(ll_backend__liveness__add_branch_pre_deaths_6_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i87);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(12);
	MR_tfield(3, MR_tempr1, 4) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_sv(7) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_r2 = MR_sv(13);
	MR_r1 = MR_sv(15);
	MR_GOTO_LAB(ll_backend__liveness__detect_deadness_in_goal_6_0_i10);
	}
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(parse_tree__set_of_var__union_3_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i90);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(14);
	MR_np_call_localret_ent(parse_tree__set_of_var__intersect_3_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i91);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = (MR_Integer) 0;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__liveness__add_branch_pre_deaths_6_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i92);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Integer) 0;
	MR_r5 = MR_sv(10);
	MR_np_call_localret_ent(ll_backend__liveness__add_branch_pre_deaths_6_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i93);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(12);
	MR_tfield(3, MR_tempr1, 4) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_sv(7) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_r2 = MR_sv(13);
	MR_r1 = MR_sv(15);
	MR_GOTO_LAB(ll_backend__liveness__detect_deadness_in_goal_6_0_i10);
	}
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_deadness_in_goal_6_0_i97);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_body((MR_Integer) MR_sv(1), (MR_Integer) 0);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	}
	MR_np_localcall_lab(ll_backend__liveness__detect_deadness_in_goal_6_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i98);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(7) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tmkword(0, (MR_Word *) MR_r1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_r1 = MR_sv(15);
	MR_GOTO_LAB(ll_backend__liveness__detect_deadness_in_goal_6_0_i10);
	}
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,5)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_deadness_in_goal_6_0_i100);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(1);
	MR_r3 = MR_tfield(3, MR_tempr3, 2);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_r4 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_deadness_in_goal_6_0_i101);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 2);
	if (MR_INT_NE(MR_tempr2,1)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_deadness_in_goal_6_0_i101);
	}
	MR_r1 = MR_sv(15);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__make_singleton_1_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i104);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__liveness__maybe_complete_with_typeinfos_3_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i105);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__difference_3_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i106);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(5);
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(15);
	MR_GOTO_LAB(ll_backend__liveness__detect_deadness_in_goal_6_0_i10);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r3;
	MR_r2 = MR_sv(11);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	}
	MR_np_localcall_lab(ll_backend__liveness__detect_deadness_in_goal_6_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i107);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r5 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_sv(7) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_r1 = MR_sv(15);
	MR_GOTO_LAB(ll_backend__liveness__detect_deadness_in_goal_6_0_i10);
	}
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,4)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_deadness_in_goal_6_0_i111);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(7) = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tempr1;
	MR_sv(1) = MR_tfield(3, MR_r2, 2);
	MR_sv(6) = MR_tfield(3, MR_r2, 3);
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(15);
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__init_0_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i112);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__liveness__get_nonlocals_and_typeinfos_4_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i113);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(12);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(13);
	}
	MR_np_call_localret_ent(ll_backend__liveness__detect_deadness_in_cases_10_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i114);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_sv(7) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_r1 = MR_sv(15);
	MR_GOTO_LAB(ll_backend__liveness__detect_deadness_in_goal_6_0_i10);
	}
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.liveness", 19);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.liveness.detect_deadness_in_goal\'/6", 57);
	MR_r3 = (MR_Word) MR_string_const("shorthand", 9);
	MR_np_call_localret_ent(require__unexpected_3_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i10);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_np_call_localret_ent(parse_tree__set_of_var__difference_3_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i118);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__union_3_0,
		ll_backend__liveness__detect_deadness_in_goal_6_0_i119);
MR_def_label(ll_backend__liveness__detect_deadness_in_goal_6_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(16);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__liveness_module22)
	MR_init_entry1(ll_backend__liveness__detect_deadness_in_conj_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__liveness__detect_deadness_in_conj_6_0);
	MR_init_label8(ll_backend__liveness__detect_deadness_in_conj_6_0,33,4,7,9,6,11,12,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'detect_deadness_in_conj'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__detect_deadness_in_conj_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_deadness_in_conj_6_0_i33);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__liveness__detect_deadness_in_conj_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(5) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tfield(1, MR_r1, 0);
	MR_sv(4) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_sv(3), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		ll_backend__liveness__detect_deadness_in_conj_6_0_i4);
MR_def_label(ll_backend__liveness__detect_deadness_in_conj_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_is_unreachable_1_0,
		ll_backend__liveness__detect_deadness_in_conj_6_0_i7);
MR_def_label(ll_backend__liveness__detect_deadness_in_conj_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_deadness_in_conj_6_0_i6);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__liveness__detect_deadness_in_goal_6_0,
		ll_backend__liveness__detect_deadness_in_conj_6_0_i9);
MR_def_label(ll_backend__liveness__detect_deadness_in_conj_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(ll_backend__liveness__detect_deadness_in_conj_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__liveness__update_liveness_goal_4_0,
		ll_backend__liveness__detect_deadness_in_conj_6_0_i11);
MR_def_label(ll_backend__liveness__detect_deadness_in_conj_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	}
	MR_np_localcall_lab(ll_backend__liveness__detect_deadness_in_conj_6_0,
		ll_backend__liveness__detect_deadness_in_conj_6_0_i12);
MR_def_label(ll_backend__liveness__detect_deadness_in_conj_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__liveness__detect_deadness_in_goal_6_0,
		ll_backend__liveness__detect_deadness_in_conj_6_0_i13);
MR_def_label(ll_backend__liveness__detect_deadness_in_conj_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(5);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__liveness_module23)
	MR_init_entry1(ll_backend__liveness__detect_deadness_in_disj_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__liveness__detect_deadness_in_disj_9_0);
	MR_init_label10(ll_backend__liveness__detect_deadness_in_disj_9_0,4,3,5,6,9,11,8,12,13,14)
	MR_init_label2(ll_backend__liveness__detect_deadness_in_disj_9_0,15,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'detect_deadness_in_disj'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__detect_deadness_in_disj_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_deadness_in_disj_9_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r4;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__intersect_3_0,
		ll_backend__liveness__detect_deadness_in_disj_9_0_i4);
MR_def_label(ll_backend__liveness__detect_deadness_in_disj_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(ll_backend__liveness__detect_deadness_in_disj_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_sv(5) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r6;
	MR_sv(4) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__liveness__detect_deadness_in_goal_6_0,
		ll_backend__liveness__detect_deadness_in_disj_9_0_i5);
MR_def_label(ll_backend__liveness__detect_deadness_in_disj_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		ll_backend__liveness__detect_deadness_in_disj_9_0_i6);
MR_def_label(ll_backend__liveness__detect_deadness_in_disj_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_is_reachable_1_0,
		ll_backend__liveness__detect_deadness_in_disj_9_0_i9);
MR_def_label(ll_backend__liveness__detect_deadness_in_disj_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_deadness_in_disj_9_0_i8);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(parse_tree__set_of_var__union_3_0,
		ll_backend__liveness__detect_deadness_in_disj_9_0_i11);
MR_def_label(ll_backend__liveness__detect_deadness_in_disj_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(1);
	MR_r7 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(8) = (MR_Integer) 1;
	MR_r6 = MR_r7;
	MR_GOTO_LAB(ll_backend__liveness__detect_deadness_in_disj_9_0_i14);
MR_def_label(ll_backend__liveness__detect_deadness_in_disj_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__set_of_var__difference_3_0,
		ll_backend__liveness__detect_deadness_in_disj_9_0_i12);
MR_def_label(ll_backend__liveness__detect_deadness_in_disj_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__union_3_0,
		ll_backend__liveness__detect_deadness_in_disj_9_0_i13);
MR_def_label(ll_backend__liveness__detect_deadness_in_disj_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(8) = (MR_Integer) 0;
	MR_r6 = MR_tempr1;
	}
MR_def_label(ll_backend__liveness__detect_deadness_in_disj_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_np_localcall_lab(ll_backend__liveness__detect_deadness_in_disj_9_0,
		ll_backend__liveness__detect_deadness_in_disj_9_0_i15);
MR_def_label(ll_backend__liveness__detect_deadness_in_disj_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_tempr2 = MR_sv(8);
	MR_sv(8) = MR_r3;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(6);
	}
	MR_np_call_localret_ent(ll_backend__liveness__add_branch_pre_deaths_6_0,
		ll_backend__liveness__detect_deadness_in_disj_9_0_i16);
MR_def_label(ll_backend__liveness__detect_deadness_in_disj_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(5);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(8);
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__liveness_module24)
	MR_init_entry1(ll_backend__liveness__detect_deadness_in_cases_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__liveness__detect_deadness_in_cases_10_0);
	MR_init_label10(ll_backend__liveness__detect_deadness_in_cases_10_0,4,5,6,7,3,8,9,12,14,11)
	MR_init_label5(ll_backend__liveness__detect_deadness_in_cases_10_0,15,16,17,18,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'detect_deadness_in_cases'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__detect_deadness_in_cases_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_deadness_in_cases_10_0_i3);
	}
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(11) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__make_singleton_1_0,
		ll_backend__liveness__detect_deadness_in_cases_10_0_i4);
MR_def_label(ll_backend__liveness__detect_deadness_in_cases_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_tfield(0, MR_tempr1, 3);
	MR_r4 = MR_tfield(0, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(hlds__hlds_rtti__maybe_complete_with_typeinfo_vars_5_0,
		ll_backend__liveness__detect_deadness_in_cases_10_0_i5);
MR_def_label(ll_backend__liveness__detect_deadness_in_cases_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__union_3_0,
		ll_backend__liveness__detect_deadness_in_cases_10_0_i6);
MR_def_label(ll_backend__liveness__detect_deadness_in_cases_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__set_of_var__intersect_3_0,
		ll_backend__liveness__detect_deadness_in_cases_10_0_i7);
MR_def_label(ll_backend__liveness__detect_deadness_in_cases_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
MR_def_label(ll_backend__liveness__detect_deadness_in_cases_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr2 = MR_r3;
	MR_sv(4) = MR_tempr2;
	MR_tempr3 = MR_r4;
	MR_sv(6) = MR_tempr3;
	MR_sv(1) = MR_r5;
	MR_tempr4 = MR_r6;
	MR_sv(2) = MR_tempr4;
	MR_sv(3) = MR_r7;
	MR_sv(5) = MR_tfield(1, MR_r2, 1);
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr3;
	MR_r4 = MR_tempr4;
	}
	MR_np_call_localret_ent(ll_backend__liveness__detect_deadness_in_goal_6_0,
		ll_backend__liveness__detect_deadness_in_cases_10_0_i8);
MR_def_label(ll_backend__liveness__detect_deadness_in_cases_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		ll_backend__liveness__detect_deadness_in_cases_10_0_i9);
MR_def_label(ll_backend__liveness__detect_deadness_in_cases_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_is_reachable_1_0,
		ll_backend__liveness__detect_deadness_in_cases_10_0_i12);
MR_def_label(ll_backend__liveness__detect_deadness_in_cases_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_deadness_in_cases_10_0_i11);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(parse_tree__set_of_var__union_3_0,
		ll_backend__liveness__detect_deadness_in_cases_10_0_i14);
MR_def_label(ll_backend__liveness__detect_deadness_in_cases_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r8 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_sv(11) = (MR_Integer) 1;
	MR_r7 = MR_r8;
	MR_GOTO_LAB(ll_backend__liveness__detect_deadness_in_cases_10_0_i17);
MR_def_label(ll_backend__liveness__detect_deadness_in_cases_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__set_of_var__difference_3_0,
		ll_backend__liveness__detect_deadness_in_cases_10_0_i15);
MR_def_label(ll_backend__liveness__detect_deadness_in_cases_10_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__union_3_0,
		ll_backend__liveness__detect_deadness_in_cases_10_0_i16);
MR_def_label(ll_backend__liveness__detect_deadness_in_cases_10_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_sv(11) = (MR_Integer) 0;
	MR_r7 = MR_tempr1;
	}
MR_def_label(ll_backend__liveness__detect_deadness_in_cases_10_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r3;
	MR_np_localcall_lab(ll_backend__liveness__detect_deadness_in_cases_10_0,
		ll_backend__liveness__detect_deadness_in_cases_10_0_i18);
MR_def_label(ll_backend__liveness__detect_deadness_in_cases_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(11);
	MR_sv(11) = MR_r2;
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_r3;
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr2;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(9);
	}
	MR_np_call_localret_ent(ll_backend__liveness__add_branch_pre_deaths_6_0,
		ll_backend__liveness__detect_deadness_in_cases_10_0_i19);
MR_def_label(ll_backend__liveness__detect_deadness_in_cases_10_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_sv(6);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(13);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__liveness_module25)
	MR_init_entry1(ll_backend__liveness__detect_deadness_in_par_conj_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__liveness__detect_deadness_in_par_conj_9_0);
	MR_init_label10(ll_backend__liveness__detect_deadness_in_par_conj_9_0,4,3,5,6,7,8,11,10,14,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'detect_deadness_in_par_conj'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__detect_deadness_in_par_conj_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_deadness_in_par_conj_9_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(6) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r4;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__intersect_3_0,
		ll_backend__liveness__detect_deadness_in_par_conj_9_0_i4);
MR_def_label(ll_backend__liveness__detect_deadness_in_par_conj_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(ll_backend__liveness__detect_deadness_in_par_conj_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_r6;
	MR_sv(4) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__liveness__detect_deadness_in_goal_6_0,
		ll_backend__liveness__detect_deadness_in_par_conj_9_0_i5);
MR_def_label(ll_backend__liveness__detect_deadness_in_par_conj_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__union_3_0,
		ll_backend__liveness__detect_deadness_in_par_conj_9_0_i6);
MR_def_label(ll_backend__liveness__detect_deadness_in_par_conj_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_tempr1;
	}
	MR_np_localcall_lab(ll_backend__liveness__detect_deadness_in_par_conj_9_0,
		ll_backend__liveness__detect_deadness_in_par_conj_9_0_i7);
MR_def_label(ll_backend__liveness__detect_deadness_in_par_conj_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(6), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		ll_backend__liveness__detect_deadness_in_par_conj_9_0_i8);
MR_def_label(ll_backend__liveness__detect_deadness_in_par_conj_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_is_reachable_1_0,
		ll_backend__liveness__detect_deadness_in_par_conj_9_0_i11);
MR_def_label(ll_backend__liveness__detect_deadness_in_par_conj_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_deadness_in_par_conj_9_0_i10);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(6);
	MR_r1 = MR_sv(7);
	MR_r4 = (MR_Integer) 1;
	MR_GOTO_LAB(ll_backend__liveness__detect_deadness_in_par_conj_9_0_i14);
MR_def_label(ll_backend__liveness__detect_deadness_in_par_conj_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.liveness", 19);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.liveness.detect_deadness_in_par_conj\'/9", 61);
	MR_r3 = (MR_Word) MR_string_const("unreachable instmap", 19);
	MR_np_call_localret_ent(require__unexpected_3_0,
		ll_backend__liveness__detect_deadness_in_par_conj_9_0_i14);
MR_def_label(ll_backend__liveness__detect_deadness_in_par_conj_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(ll_backend__liveness__add_branch_pre_deaths_6_0,
		ll_backend__liveness__detect_deadness_in_par_conj_9_0_i15);
MR_def_label(ll_backend__liveness__detect_deadness_in_par_conj_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(5);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__liveness_module26)
	MR_init_entry1(fn__ll_backend__liveness__kill_excess_delayed_dead_goal_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__liveness__kill_excess_delayed_dead_goal_2_0);
	MR_init_label4(fn__ll_backend__liveness__kill_excess_delayed_dead_goal_2_0,2,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'kill_excess_delayed_dead_goal'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__liveness__kill_excess_delayed_dead_goal_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r2, 0);
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tfield(0, MR_r2, 1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__difference_3_0,
		fn__ll_backend__liveness__kill_excess_delayed_dead_goal_2_0_i2);
MR_def_label(fn__ll_backend__liveness__kill_excess_delayed_dead_goal_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r2, 0);
	MR_sv(3) = MR_tfield(0, MR_r2, 1);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_post_deaths_2_0,
		fn__ll_backend__liveness__kill_excess_delayed_dead_goal_2_0_i3);
MR_def_label(fn__ll_backend__liveness__kill_excess_delayed_dead_goal_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__union_3_0,
		fn__ll_backend__liveness__kill_excess_delayed_dead_goal_2_0_i4);
MR_def_label(fn__ll_backend__liveness__kill_excess_delayed_dead_goal_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_set_post_deaths_3_0,
		fn__ll_backend__liveness__kill_excess_delayed_dead_goal_2_0_i5);
MR_def_label(fn__ll_backend__liveness__kill_excess_delayed_dead_goal_2_0,5)
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

MR_decl_entry(parse_tree__set_of_var__divide_4_0);

MR_BEGIN_MODULE(ll_backend__liveness_module27)
	MR_init_entry1(ll_backend__liveness__delay_death_goal_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__liveness__delay_death_goal_7_0);
	MR_init_label10(ll_backend__liveness__delay_death_goal_7_0,2,3,4,6,7,8,9,10,11,12)
	MR_init_label5(ll_backend__liveness__delay_death_goal_7_0,13,14,15,16,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delay_death_goal'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__delay_death_goal_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_tfield(0, MR_r1, 0);
	MR_sv(6) = MR_tfield(0, MR_r1, 1);
	MR_sv(3) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_pre_births_2_0,
		ll_backend__liveness__delay_death_goal_7_0_i2);
MR_def_label(ll_backend__liveness__delay_death_goal_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_pre_deaths_2_0,
		ll_backend__liveness__delay_death_goal_7_0_i3);
MR_def_label(ll_backend__liveness__delay_death_goal_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__union_3_0,
		ll_backend__liveness__delay_death_goal_7_0_i4);
MR_def_label(ll_backend__liveness__delay_death_goal_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(1,0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__liveness__var_is_named_2_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = MR_sv(1);
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(9);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(parse_tree__set_of_var__divide_4_0,
		ll_backend__liveness__delay_death_goal_7_0_i6);
MR_def_label(ll_backend__liveness__delay_death_goal_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(8);
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__union_3_0,
		ll_backend__liveness__delay_death_goal_7_0_i7);
MR_def_label(ll_backend__liveness__delay_death_goal_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_set_pre_deaths_3_0,
		ll_backend__liveness__delay_death_goal_7_0_i8);
MR_def_label(ll_backend__liveness__delay_death_goal_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(ll_backend__liveness__delay_death_goal_expr_9_0,
		ll_backend__liveness__delay_death_goal_7_0_i9);
MR_def_label(ll_backend__liveness__delay_death_goal_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_post_births_2_0,
		ll_backend__liveness__delay_death_goal_7_0_i10);
MR_def_label(ll_backend__liveness__delay_death_goal_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_post_deaths_2_0,
		ll_backend__liveness__delay_death_goal_7_0_i11);
MR_def_label(ll_backend__liveness__delay_death_goal_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__union_3_0,
		ll_backend__liveness__delay_death_goal_7_0_i12);
MR_def_label(ll_backend__liveness__delay_death_goal_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(parse_tree__set_of_var__divide_4_0,
		ll_backend__liveness__delay_death_goal_7_0_i13);
MR_def_label(ll_backend__liveness__delay_death_goal_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(8);
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__union_3_0,
		ll_backend__liveness__delay_death_goal_7_0_i14);
MR_def_label(ll_backend__liveness__delay_death_goal_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__divide_by_set_4_0,
		ll_backend__liveness__delay_death_goal_7_0_i15);
MR_def_label(ll_backend__liveness__delay_death_goal_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__union_3_0,
		ll_backend__liveness__delay_death_goal_7_0_i16);
MR_def_label(ll_backend__liveness__delay_death_goal_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_set_post_deaths_3_0,
		ll_backend__liveness__delay_death_goal_7_0_i17);
MR_def_label(ll_backend__liveness__delay_death_goal_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(6);
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__map_2_0);

MR_BEGIN_MODULE(ll_backend__liveness_module28)
	MR_init_entry1(ll_backend__liveness__delay_death_goal_expr_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__liveness__delay_death_goal_expr_9_0);
	MR_init_label10(ll_backend__liveness__delay_death_goal_expr_9_0,7,6,9,4,12,14,19,11,23,24)
	MR_init_label10(ll_backend__liveness__delay_death_goal_expr_9_0,25,26,27,29,31,22,34,33,37,40)
	MR_init_label7(ll_backend__liveness__delay_death_goal_expr_9_0,36,44,51,46,43,153,152)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delay_death_goal_expr'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__delay_death_goal_expr_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TEST(MR_r1,3,1)) {
		MR_GOTO_LAB(ll_backend__liveness__delay_death_goal_expr_9_0_i153);
	}
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(ll_backend__liveness__delay_death_goal_expr_9_0_i4);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r1, 1);
	MR_r6 = MR_tempr1;
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__liveness__delay_death_goal_expr_9_0_i6);
	}
	MR_sv(3) = MR_tempr1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	}
	MR_np_call_localret_ent(ll_backend__liveness__delay_death_par_conj_7_0,
		ll_backend__liveness__delay_death_goal_expr_9_0_i7);
MR_def_label(ll_backend__liveness__delay_death_goal_expr_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	MR_decr_sp_and_return(9);
	}
MR_def_label(ll_backend__liveness__delay_death_goal_expr_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r6;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_np_call_localret_ent(ll_backend__liveness__delay_death_conj_7_0,
		ll_backend__liveness__delay_death_goal_expr_9_0_i9);
MR_def_label(ll_backend__liveness__delay_death_goal_expr_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	MR_decr_sp_and_return(9);
	}
MR_def_label(ll_backend__liveness__delay_death_goal_expr_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(ll_backend__liveness__delay_death_goal_expr_9_0_i11);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(6) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(8) = MR_tempr2;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_r5;
	}
	MR_np_call_localret_ent(ll_backend__liveness__delay_death_disj_6_0,
		ll_backend__liveness__delay_death_goal_expr_9_0_i12);
MR_def_label(ll_backend__liveness__delay_death_goal_expr_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__liveness__delay_death_goal_expr_9_0_i14);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(8);
	MR_decr_sp_and_return(9);
MR_def_label(ll_backend__liveness__delay_death_goal_expr_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__ll_backend__liveness__kill_excess_delayed_dead_goal_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr2 = MR_tfield(1, MR_r2, 0);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(7) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 3);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		ll_backend__liveness__delay_death_goal_expr_9_0_i19);
MR_def_label(ll_backend__liveness__delay_death_goal_expr_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(4);
	MR_decr_sp_and_return(9);
	}
MR_def_label(ll_backend__liveness__delay_death_goal_expr_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TEST(MR_r1,3,0)) {
		MR_GOTO_LAB(ll_backend__liveness__delay_death_goal_expr_9_0_i153);
	}
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(ll_backend__liveness__delay_death_goal_expr_9_0_i22);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r5;
	MR_sv(3) = MR_tempr1;
	MR_sv(1) = MR_tfield(3, MR_r1, 1);
	MR_sv(2) = MR_tfield(3, MR_r1, 3);
	MR_sv(5) = MR_tfield(3, MR_r1, 4);
	MR_sv(6) = MR_r2;
	MR_tempr2 = MR_r3;
	MR_sv(4) = MR_tempr2;
	MR_tempr3 = MR_r4;
	MR_sv(8) = MR_tempr3;
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr3;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__liveness__delay_death_goal_7_0,
		ll_backend__liveness__delay_death_goal_expr_9_0_i23);
MR_def_label(ll_backend__liveness__delay_death_goal_expr_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(ll_backend__liveness__delay_death_goal_7_0,
		ll_backend__liveness__delay_death_goal_expr_9_0_i24);
MR_def_label(ll_backend__liveness__delay_death_goal_expr_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_tempr2 = MR_sv(5);
	MR_sv(5) = MR_r2;
	MR_tempr3 = MR_sv(4);
	MR_sv(4) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr3;
	MR_r3 = MR_sv(8);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__liveness__delay_death_goal_7_0,
		ll_backend__liveness__delay_death_goal_expr_9_0_i25);
MR_def_label(ll_backend__liveness__delay_death_goal_expr_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_sv(8) = MR_r3;
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(7);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__intersect_3_0,
		ll_backend__liveness__delay_death_goal_expr_9_0_i26);
MR_def_label(ll_backend__liveness__delay_death_goal_expr_9_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(parse_tree__set_of_var__intersect_3_0,
		ll_backend__liveness__delay_death_goal_expr_9_0_i27);
MR_def_label(ll_backend__liveness__delay_death_goal_expr_9_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(3);
	MR_tfield(0, MR_r2, 1) = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__ll_backend__liveness__kill_excess_delayed_dead_goal_2_0,
		ll_backend__liveness__delay_death_goal_expr_9_0_i29);
MR_def_label(ll_backend__liveness__delay_death_goal_expr_9_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(5);
	MR_tfield(0, MR_r2, 1) = MR_sv(8);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__ll_backend__liveness__kill_excess_delayed_dead_goal_2_0,
		ll_backend__liveness__delay_death_goal_expr_9_0_i31);
MR_def_label(ll_backend__liveness__delay_death_goal_expr_9_0,31)
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
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(4);
	MR_decr_sp_and_return(9);
	}
MR_def_label(ll_backend__liveness__delay_death_goal_expr_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__liveness__delay_death_goal_expr_9_0_i33);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(6) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_body((MR_Integer) MR_r1, (MR_Integer) 0);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	}
	MR_np_call_localret_ent(ll_backend__liveness__delay_death_goal_7_0,
		ll_backend__liveness__delay_death_goal_expr_9_0_i34);
MR_def_label(ll_backend__liveness__delay_death_goal_expr_9_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tmkword(0, (MR_Word *) MR_r1);
	MR_r2 = MR_sv(6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(ll_backend__liveness__delay_death_goal_expr_9_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(ll_backend__liveness__delay_death_goal_expr_9_0_i153);
	}
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(ll_backend__liveness__delay_death_goal_expr_9_0_i36);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_r6 = MR_tfield(3, MR_r1, 2);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_r1, 1);
	MR_sv(3) = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(ll_backend__liveness__delay_death_goal_expr_9_0_i37);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 2);
	if (MR_INT_EQ(MR_tempr2,1)) {
		MR_GOTO_LAB(ll_backend__liveness__delay_death_goal_expr_9_0_i152);
	}
	}
MR_def_label(ll_backend__liveness__delay_death_goal_expr_9_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_r6;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	}
	MR_np_call_localret_ent(ll_backend__liveness__delay_death_goal_7_0,
		ll_backend__liveness__delay_death_goal_expr_9_0_i40);
MR_def_label(ll_backend__liveness__delay_death_goal_expr_9_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr2;
	MR_decr_sp_and_return(9);
	}
MR_def_label(ll_backend__liveness__delay_death_goal_expr_9_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(ll_backend__liveness__delay_death_goal_expr_9_0_i43);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(3) = MR_tfield(3, MR_r1, 1);
	MR_sv(1) = MR_tfield(3, MR_r1, 2);
	MR_sv(6) = MR_r2;
	MR_r1 = MR_tfield(3, MR_r1, 3);
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_np_call_localret_ent(ll_backend__liveness__delay_death_cases_6_0,
		ll_backend__liveness__delay_death_goal_expr_9_0_i44);
MR_def_label(ll_backend__liveness__delay_death_goal_expr_9_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__liveness__delay_death_goal_expr_9_0_i46);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__ll_backend__liveness__kill_excess_delayed_dead_case_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr2 = MR_tfield(1, MR_r2, 0);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(7) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 3);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		ll_backend__liveness__delay_death_goal_expr_9_0_i51);
MR_def_label(ll_backend__liveness__delay_death_goal_expr_9_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(4);
	MR_decr_sp_and_return(9);
	}
MR_def_label(ll_backend__liveness__delay_death_goal_expr_9_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.liveness", 19);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.liveness.delay_death_goal_expr\'/9", 55);
	MR_r3 = (MR_Word) MR_string_const("empty switch", 12);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ll_backend__liveness__delay_death_goal_expr_9_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__liveness__delay_death_goal_expr_9_0_i153);
	}
	MR_r1 = (MR_Word) MR_string_const("ll_backend.liveness", 19);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.liveness.delay_death_goal_expr\'/9", 55);
	MR_r3 = (MR_Word) MR_string_const("shorthand", 9);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ll_backend__liveness__delay_death_goal_expr_9_0,153)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
MR_def_label(ll_backend__liveness__delay_death_goal_expr_9_0,152)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__liveness_module29)
	MR_init_entry1(ll_backend__liveness__delay_death_conj_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__liveness__delay_death_conj_7_0);
	MR_init_label3(ll_backend__liveness__delay_death_conj_7_0,17,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delay_death_conj'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__delay_death_conj_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__liveness__delay_death_conj_7_0_i17);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__liveness__delay_death_conj_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r4;
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(ll_backend__liveness__delay_death_goal_7_0,
		ll_backend__liveness__delay_death_conj_7_0_i4);
MR_def_label(ll_backend__liveness__delay_death_conj_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_localcall_lab(ll_backend__liveness__delay_death_conj_7_0,
		ll_backend__liveness__delay_death_conj_7_0_i5);
MR_def_label(ll_backend__liveness__delay_death_conj_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__liveness_module30)
	MR_init_entry1(ll_backend__liveness__delay_death_par_conj_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__liveness__delay_death_par_conj_7_0);
	MR_init_label5(ll_backend__liveness__delay_death_par_conj_7_0,19,4,5,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delay_death_par_conj'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__delay_death_par_conj_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__liveness__delay_death_par_conj_7_0_i19);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__liveness__delay_death_par_conj_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(4) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(ll_backend__liveness__delay_death_goal_7_0,
		ll_backend__liveness__delay_death_par_conj_7_0_i4);
MR_def_label(ll_backend__liveness__delay_death_par_conj_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_tempr3 = MR_sv(2);
	MR_sv(2) = MR_r3;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	}
	MR_np_localcall_lab(ll_backend__liveness__delay_death_par_conj_7_0,
		ll_backend__liveness__delay_death_par_conj_7_0_i5);
MR_def_label(ll_backend__liveness__delay_death_par_conj_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_r3;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(4);
	MR_tempr3 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr3;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__union_3_0,
		ll_backend__liveness__delay_death_par_conj_7_0_i7);
MR_def_label(ll_backend__liveness__delay_death_par_conj_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__union_3_0,
		ll_backend__liveness__delay_death_par_conj_7_0_i8);
MR_def_label(ll_backend__liveness__delay_death_par_conj_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__liveness_module31)
	MR_init_entry1(ll_backend__liveness__delay_death_disj_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__liveness__delay_death_disj_6_0);
	MR_init_label6(ll_backend__liveness__delay_death_disj_6_0,33,4,6,9,12,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delay_death_disj'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__delay_death_disj_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__liveness__delay_death_disj_6_0_i33);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__liveness__delay_death_disj_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(ll_backend__liveness__delay_death_goal_7_0,
		ll_backend__liveness__delay_death_disj_6_0_i4);
MR_def_label(ll_backend__liveness__delay_death_disj_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tempr5 = MR_r3;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr5;
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_tempr5;
	MR_tempr3 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_tempr4 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr3;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr4;
	}
	MR_np_localcall_lab(ll_backend__liveness__delay_death_disj_6_0,
		ll_backend__liveness__delay_death_disj_6_0_i6);
MR_def_label(ll_backend__liveness__delay_death_disj_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__liveness__delay_death_disj_6_0_i9);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ll_backend__liveness__delay_death_disj_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r3;
	MR_tempr2 = MR_tfield(1, MR_r2, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__intersect_3_0,
		ll_backend__liveness__delay_death_disj_6_0_i12);
MR_def_label(ll_backend__liveness__delay_death_disj_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__intersect_3_0,
		ll_backend__liveness__delay_death_disj_6_0_i13);
MR_def_label(ll_backend__liveness__delay_death_disj_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__liveness_module32)
	MR_init_entry1(ll_backend__liveness__delay_death_cases_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__liveness__delay_death_cases_6_0);
	MR_init_label6(ll_backend__liveness__delay_death_cases_6_0,34,4,7,10,13,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delay_death_cases'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__delay_death_cases_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__liveness__delay_death_cases_6_0_i34);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__liveness__delay_death_cases_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(ll_backend__liveness__delay_death_goal_7_0,
		ll_backend__liveness__delay_death_cases_6_0_i4);
MR_def_label(ll_backend__liveness__delay_death_cases_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tempr5 = MR_r3;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr5;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_tempr5;
	MR_tempr3 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_tempr4 = MR_sv(4);
	MR_sv(4) = MR_tempr2;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr4;
	}
	MR_np_localcall_lab(ll_backend__liveness__delay_death_cases_6_0,
		ll_backend__liveness__delay_death_cases_6_0_i7);
MR_def_label(ll_backend__liveness__delay_death_cases_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__liveness__delay_death_cases_6_0_i10);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(6);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(ll_backend__liveness__delay_death_cases_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r3;
	MR_tempr2 = MR_tfield(1, MR_r2, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__intersect_3_0,
		ll_backend__liveness__delay_death_cases_6_0_i13);
MR_def_label(ll_backend__liveness__delay_death_cases_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__intersect_3_0,
		ll_backend__liveness__delay_death_cases_6_0_i14);
MR_def_label(ll_backend__liveness__delay_death_cases_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__liveness_module33)
	MR_init_entry1(ll_backend__liveness__delay_death_proc_body_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__liveness__delay_death_proc_body_4_0);
	MR_init_label5(ll_backend__liveness__delay_death_proc_body_4_0,2,3,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delay_death_proc_body'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__delay_death_proc_body_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__init_0_0,
		ll_backend__liveness__delay_death_proc_body_4_0_i2);
MR_def_label(ll_backend__liveness__delay_death_proc_body_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(ll_backend__liveness__delay_death_goal_7_0,
		ll_backend__liveness__delay_death_proc_body_4_0_i3);
MR_def_label(ll_backend__liveness__delay_death_proc_body_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(0, MR_r1, 0);
	MR_sv(3) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_post_deaths_2_0,
		ll_backend__liveness__delay_death_proc_body_4_0_i4);
MR_def_label(ll_backend__liveness__delay_death_proc_body_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__union_3_0,
		ll_backend__liveness__delay_death_proc_body_4_0_i5);
MR_def_label(ll_backend__liveness__delay_death_proc_body_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_set_post_deaths_3_0,
		ll_backend__liveness__delay_death_proc_body_4_0_i6);
MR_def_label(ll_backend__liveness__delay_death_proc_body_4_0,6)
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

MR_decl_entry(parse_tree__set_of_var__equal_2_0);
MR_decl_entry(fn__parse_tree__mercury_to_mercury__mercury_vars_to_string_3_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(ll_backend__liveness_module34)
	MR_init_entry1(ll_backend__liveness__require_equal_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__liveness__require_equal_4_0);
	MR_init_label10(ll_backend__liveness__require_equal_4_0,3,5,6,7,8,9,10,11,12,13)
	MR_init_label4(ll_backend__liveness__require_equal_4_0,14,15,16,18)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'require_equal'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__require_equal_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__set_of_var__equal_2_0,
		ll_backend__liveness__require_equal_4_0_i3);
MR_def_label(ll_backend__liveness__require_equal_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ll_backend__liveness__require_equal_4_0_i18);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_tfield(0, MR_sv(4), 2);
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__to_sorted_list_1_0,
		ll_backend__liveness__require_equal_4_0_i5);
MR_def_label(ll_backend__liveness__require_equal_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__to_sorted_list_1_0,
		ll_backend__liveness__require_equal_4_0_i6);
MR_def_label(ll_backend__liveness__require_equal_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_vars_to_string_3_0,
		ll_backend__liveness__require_equal_4_0_i7);
MR_def_label(ll_backend__liveness__require_equal_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_vars_to_string_3_0,
		ll_backend__liveness__require_equal_4_0_i8);
MR_def_label(ll_backend__liveness__require_equal_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__liveness__require_equal_4_0_i9);
MR_def_label(ll_backend__liveness__require_equal_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Rest:  ", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__liveness__require_equal_4_0_i10);
MR_def_label(ll_backend__liveness__require_equal_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__liveness__require_equal_4_0_i11);
MR_def_label(ll_backend__liveness__require_equal_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__liveness__require_equal_4_0_i12);
MR_def_label(ll_backend__liveness__require_equal_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("First: ", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__liveness__require_equal_4_0_i13);
MR_def_label(ll_backend__liveness__require_equal_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" disagree on liveness\n", 22);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__liveness__require_equal_4_0_i14);
MR_def_label(ll_backend__liveness__require_equal_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__liveness__require_equal_4_0_i15);
MR_def_label(ll_backend__liveness__require_equal_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("branches of ", 12);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__liveness__require_equal_4_0_i16);
MR_def_label(ll_backend__liveness__require_equal_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ll_backend.liveness", 19);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.liveness.require_equal\'/4", 47);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(require__unexpected_3_0);
	}
MR_def_label(ll_backend__liveness__require_equal_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__code_model__goal_info_get_code_model_1_0);
MR_decl_entry(hlds__goal_form__cannot_stack_flush_1_0);
MR_decl_entry(hlds__hlds_llds__goal_set_resume_point_3_0);
MR_decl_entry(parse_tree__set_of_var__is_empty_1_0);
MR_decl_entry(hlds__goal_form__cannot_fail_before_stack_flush_1_0);

MR_BEGIN_MODULE(ll_backend__liveness_module35)
	MR_init_entry1(ll_backend__liveness__detect_resume_points_in_goal_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__liveness__detect_resume_points_in_goal_6_0);
	MR_init_label10(ll_backend__liveness__detect_resume_points_in_goal_6_0,2,3,4,5,6,7,100,9,13,12)
	MR_init_label10(ll_backend__liveness__detect_resume_points_in_goal_6_0,16,10,20,22,26,19,30,31,32,33)
	MR_init_label10(ll_backend__liveness__detect_resume_points_in_goal_6_0,34,35,36,38,40,37,46,45,51,50)
	MR_init_label10(ll_backend__liveness__detect_resume_points_in_goal_6_0,58,59,29,63,64,65,66,69,67,74)
	MR_init_label10(ll_backend__liveness__detect_resume_points_in_goal_6_0,72,80,62,86,87,83,89,82,94,93)
	MR_init_label3(ll_backend__liveness__detect_resume_points_in_goal_6_0,8,98,99)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'detect_resume_points_in_goal'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__detect_resume_points_in_goal_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(10) = MR_r1;
	MR_sv(9) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(4) = MR_tfield(0, MR_r1, 0);
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_sv(7) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_pre_deaths_2_0,
		ll_backend__liveness__detect_resume_points_in_goal_6_0_i2);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_pre_births_2_0,
		ll_backend__liveness__detect_resume_points_in_goal_6_0_i3);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_post_deaths_2_0,
		ll_backend__liveness__detect_resume_points_in_goal_6_0_i4);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_post_births_2_0,
		ll_backend__liveness__detect_resume_points_in_goal_6_0_i5);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(12) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__difference_3_0,
		ll_backend__liveness__detect_resume_points_in_goal_6_0_i6);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__union_3_0,
		ll_backend__liveness__detect_resume_points_in_goal_6_0_i7);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((((MR_tag(MR_sv(4)) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_sv(4), 0) == (MR_Integer) 1)) || ((MR_tag(MR_sv(4)) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_sv(4), 0) == (MR_Integer) 0))) || (MR_tag(MR_sv(4)) == MR_mktag((MR_Integer) 2))) || (MR_tag(MR_sv(4)) == MR_mktag((MR_Integer) 1))))) {
		MR_GOTO_LAB(ll_backend__liveness__detect_resume_points_in_goal_6_0_i9);
	}
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_6_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_GOTO_LAB(ll_backend__liveness__detect_resume_points_in_goal_6_0_i8);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(4),3,2)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_resume_points_in_goal_6_0_i10);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(4);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_r5 = MR_tempr1;
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_resume_points_in_goal_6_0_i12);
	}
	MR_sv(10) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tfield(3, MR_tempr3, 2);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(ll_backend__liveness__detect_resume_points_in_par_conj_6_0,
		ll_backend__liveness__detect_resume_points_in_goal_6_0_i13);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r4 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(10);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_sv(10) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r1 = MR_sv(12);
	MR_GOTO_LAB(ll_backend__liveness__detect_resume_points_in_goal_6_0_i8);
	}
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(3, MR_sv(4), 2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(ll_backend__liveness__detect_resume_points_in_conj_6_0,
		ll_backend__liveness__detect_resume_points_in_goal_6_0_i16);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r5 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(10);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_sv(10) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r1 = MR_sv(12);
	MR_GOTO_LAB(ll_backend__liveness__detect_resume_points_in_goal_6_0_i8);
	}
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(4),3,3)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_resume_points_in_goal_6_0_i19);
	}
	MR_sv(8) = MR_r1;
	MR_sv(10) = MR_tfield(3, MR_sv(4), 1);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__code_model__goal_info_get_code_model_1_0,
		ll_backend__liveness__detect_resume_points_in_goal_6_0_i20);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_resume_points_in_goal_6_0_i22);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__liveness__detect_resume_points_in_non_disj_7_0,
		ll_backend__liveness__detect_resume_points_in_goal_6_0_i26);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__liveness__detect_resume_points_in_pruned_disj_7_0,
		ll_backend__liveness__detect_resume_points_in_goal_6_0_i26);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_sv(10) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r1 = MR_sv(12);
	MR_GOTO_LAB(ll_backend__liveness__detect_resume_points_in_goal_6_0_i8);
	}
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(4),3,6)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_resume_points_in_goal_6_0_i29);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(10) = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tempr1;
	MR_sv(4) = MR_tfield(3, MR_r2, 2);
	MR_sv(5) = MR_tfield(3, MR_r2, 3);
	MR_sv(7) = MR_tfield(3, MR_r2, 4);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(7), 1);
	}
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_pre_deaths_2_0,
		ll_backend__liveness__detect_resume_points_in_goal_6_0_i30);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__difference_3_0,
		ll_backend__liveness__detect_resume_points_in_goal_6_0_i31);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__liveness__maybe_complete_with_typeinfos_3_0,
		ll_backend__liveness__detect_resume_points_in_goal_6_0_i32);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__union_3_0,
		ll_backend__liveness__detect_resume_points_in_goal_6_0_i33);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(4);
	}
	MR_np_localcall_lab(ll_backend__liveness__detect_resume_points_in_goal_6_0,
		ll_backend__liveness__detect_resume_points_in_goal_6_0_i34);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(6);
	}
	MR_np_localcall_lab(ll_backend__liveness__detect_resume_points_in_goal_6_0,
		ll_backend__liveness__detect_resume_points_in_goal_6_0_i35);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_sv(11) = MR_r2;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_tempr1;
	}
	MR_np_localcall_lab(ll_backend__liveness__detect_resume_points_in_goal_6_0,
		ll_backend__liveness__detect_resume_points_in_goal_6_0_i36);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__goal_form__cannot_stack_flush_1_0,
		ll_backend__liveness__detect_resume_points_in_goal_6_0_i38);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_resume_points_in_goal_6_0_i37);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__code_model__goal_info_get_code_model_1_0,
		ll_backend__liveness__detect_resume_points_in_goal_6_0_i40);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,2)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_resume_points_in_goal_6_0_i37);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(4);
	MR_tfield(1, MR_r1, 1) = (MR_Integer) 0;
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_set_resume_point_3_0,
		ll_backend__liveness__detect_resume_points_in_goal_6_0_i58);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__set_of_var__is_empty_1_0,
		ll_backend__liveness__detect_resume_points_in_goal_6_0_i46);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_6_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_resume_points_in_goal_6_0_i45);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(4);
	MR_tfield(1, MR_r1, 1) = (MR_Integer) 1;
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_set_resume_point_3_0,
		ll_backend__liveness__detect_resume_points_in_goal_6_0_i58);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_6_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__goal_form__cannot_fail_before_stack_flush_1_0,
		ll_backend__liveness__detect_resume_points_in_goal_6_0_i51);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_6_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_resume_points_in_goal_6_0_i50);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(4);
	MR_tfield(1, MR_r1, 1) = (MR_Integer) 1;
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_set_resume_point_3_0,
		ll_backend__liveness__detect_resume_points_in_goal_6_0_i58);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_6_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(4);
	MR_tfield(1, MR_r1, 1) = (MR_Integer) 3;
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_set_resume_point_3_0,
		ll_backend__liveness__detect_resume_points_in_goal_6_0_i58);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_6_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(8);
	MR_r3 = (MR_Word) MR_string_const("if-then-else", 12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__liveness__require_equal_4_0,
		ll_backend__liveness__detect_resume_points_in_goal_6_0_i59);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_6_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 5);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_r2, 1) = MR_sv(10);
	MR_tfield(3, MR_r2, 2) = MR_sv(9);
	MR_tfield(3, MR_r2, 3) = MR_sv(6);
	MR_tfield(3, MR_r2, 4) = MR_sv(7);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(10) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r2 = MR_sv(11);
	MR_r1 = MR_sv(12);
	MR_GOTO_LAB(ll_backend__liveness__detect_resume_points_in_goal_6_0_i8);
	}
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(4),0)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_resume_points_in_goal_6_0_i62);
	}
	MR_sv(10) = MR_body((MR_Integer) MR_sv(4), (MR_Integer) 0);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(6);
	MR_np_localcall_lab(ll_backend__liveness__detect_resume_points_in_goal_6_0,
		ll_backend__liveness__detect_resume_points_in_goal_6_0_i63);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_6_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r2;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(ll_backend__liveness__maybe_complete_with_typeinfos_3_0,
		ll_backend__liveness__detect_resume_points_in_goal_6_0_i64);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_6_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__union_3_0,
		ll_backend__liveness__detect_resume_points_in_goal_6_0_i65);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_6_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(10);
	}
	MR_np_localcall_lab(ll_backend__liveness__detect_resume_points_in_goal_6_0,
		ll_backend__liveness__detect_resume_points_in_goal_6_0_i66);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_6_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(hlds__goal_form__cannot_stack_flush_1_0,
		ll_backend__liveness__detect_resume_points_in_goal_6_0_i69);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_6_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_resume_points_in_goal_6_0_i67);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(10);
	MR_tfield(1, MR_r1, 1) = (MR_Integer) 0;
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_set_resume_point_3_0,
		ll_backend__liveness__detect_resume_points_in_goal_6_0_i80);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_6_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__goal_form__cannot_fail_before_stack_flush_1_0,
		ll_backend__liveness__detect_resume_points_in_goal_6_0_i74);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_6_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_resume_points_in_goal_6_0_i72);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(10);
	MR_tfield(1, MR_r1, 1) = (MR_Integer) 1;
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_set_resume_point_3_0,
		ll_backend__liveness__detect_resume_points_in_goal_6_0_i80);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_6_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(10);
	MR_tfield(1, MR_tempr1, 1) = (MR_Integer) 3;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_llds__goal_set_resume_point_3_0,
		ll_backend__liveness__detect_resume_points_in_goal_6_0_i80);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_6_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(10) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tmkword(0, (MR_Word *) MR_r1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r2 = MR_sv(11);
	MR_r1 = MR_sv(12);
	MR_GOTO_LAB(ll_backend__liveness__detect_resume_points_in_goal_6_0_i8);
	}
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_6_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(4),3,5)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_resume_points_in_goal_6_0_i82);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(4);
	MR_r3 = MR_tfield(3, MR_tempr3, 2);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_r4 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_resume_points_in_goal_6_0_i83);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 2);
	if (MR_INT_NE(MR_tempr2,1)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_resume_points_in_goal_6_0_i83);
	}
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__make_singleton_1_0,
		ll_backend__liveness__detect_resume_points_in_goal_6_0_i86);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_6_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__liveness__maybe_complete_with_typeinfos_3_0,
		ll_backend__liveness__detect_resume_points_in_goal_6_0_i87);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_6_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(8);
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__union_3_0,
		ll_backend__liveness__detect_resume_points_in_goal_6_0_i100);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_6_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r3;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(6);
	}
	MR_np_localcall_lab(ll_backend__liveness__detect_resume_points_in_goal_6_0,
		ll_backend__liveness__detect_resume_points_in_goal_6_0_i89);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_6_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r5 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(10);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_sv(10) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r1 = MR_sv(12);
	MR_GOTO_LAB(ll_backend__liveness__detect_resume_points_in_goal_6_0_i8);
	}
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_6_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(4),3,4)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_resume_points_in_goal_6_0_i93);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(4);
	MR_sv(10) = MR_tfield(3, MR_tempr3, 1);
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_tfield(3, MR_tempr3, 2);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tfield(3, MR_tempr3, 3);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(ll_backend__liveness__detect_resume_points_in_cases_6_0,
		ll_backend__liveness__detect_resume_points_in_goal_6_0_i94);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_6_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(10);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(9);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_sv(10) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r1 = MR_sv(12);
	MR_GOTO_LAB(ll_backend__liveness__detect_resume_points_in_goal_6_0_i8);
	}
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_6_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.liveness", 19);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.liveness.detect_resume_points_in_goal\'/6", 62);
	MR_r3 = (MR_Word) MR_string_const("shorthand", 9);
	MR_np_call_localret_ent(require__unexpected_3_0,
		ll_backend__liveness__detect_resume_points_in_goal_6_0_i8);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_np_call_localret_ent(parse_tree__set_of_var__difference_3_0,
		ll_backend__liveness__detect_resume_points_in_goal_6_0_i98);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_6_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__union_3_0,
		ll_backend__liveness__detect_resume_points_in_goal_6_0_i99);
MR_def_label(ll_backend__liveness__detect_resume_points_in_goal_6_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__liveness_module36)
	MR_init_entry1(ll_backend__liveness__detect_resume_points_in_conj_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__liveness__detect_resume_points_in_conj_6_0);
	MR_init_label3(ll_backend__liveness__detect_resume_points_in_conj_6_0,17,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'detect_resume_points_in_conj'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__detect_resume_points_in_conj_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_resume_points_in_conj_6_0_i17);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__liveness__detect_resume_points_in_conj_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(ll_backend__liveness__detect_resume_points_in_goal_6_0,
		ll_backend__liveness__detect_resume_points_in_conj_6_0_i4);
MR_def_label(ll_backend__liveness__detect_resume_points_in_conj_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_localcall_lab(ll_backend__liveness__detect_resume_points_in_conj_6_0,
		ll_backend__liveness__detect_resume_points_in_conj_6_0_i5);
MR_def_label(ll_backend__liveness__detect_resume_points_in_conj_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__liveness_module37)
	MR_init_entry1(ll_backend__liveness__detect_resume_points_in_non_disj_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__liveness__detect_resume_points_in_non_disj_7_0);
	MR_init_label8(ll_backend__liveness__detect_resume_points_in_non_disj_7_0,6,5,10,9,12,13,15,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'detect_resume_points_in_non_disj'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__detect_resume_points_in_non_disj_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_resume_points_in_non_disj_7_0_i3);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	MR_r5 = MR_tempr1;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_resume_points_in_non_disj_7_0_i5);
	}
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tfield(1, MR_r1, 0);
	}
	MR_np_call_localret_ent(ll_backend__liveness__detect_resume_points_in_last_disjunct_7_0,
		ll_backend__liveness__detect_resume_points_in_non_disj_7_0_i6);
MR_def_label(ll_backend__liveness__detect_resume_points_in_non_disj_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(5);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(ll_backend__liveness__detect_resume_points_in_non_disj_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r5;
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
	MR_r6 = MR_tempr1;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_resume_points_in_non_disj_7_0_i9);
	}
	MR_sv(5) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tfield(1, MR_r1, 0);
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(ll_backend__liveness__detect_resume_points_in_last_disjunct_7_0,
		ll_backend__liveness__detect_resume_points_in_non_disj_7_0_i10);
MR_def_label(ll_backend__liveness__detect_resume_points_in_non_disj_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(5);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(2);
	MR_r1 = MR_sv(3);
	MR_r4 = MR_r2;
	MR_r7 = MR_tempr2;
	MR_r2 = (MR_Integer) 0;
	MR_sv(5) = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0,
		ll_backend__liveness__detect_resume_points_in_non_disj_7_0_i15);
MR_def_label(ll_backend__liveness__detect_resume_points_in_non_disj_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tfield(1, MR_r1, 0);
	MR_sv(4) = MR_tfield(1, MR_r5, 0);
	MR_r1 = MR_r6;
	MR_np_localcall_lab(ll_backend__liveness__detect_resume_points_in_non_disj_7_0,
		ll_backend__liveness__detect_resume_points_in_non_disj_7_0_i12);
MR_def_label(ll_backend__liveness__detect_resume_points_in_non_disj_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_tempr3;
	}
	MR_np_call_localret_ent(ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0,
		ll_backend__liveness__detect_resume_points_in_non_disj_7_0_i13);
MR_def_label(ll_backend__liveness__detect_resume_points_in_non_disj_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(5);
	MR_tempr3 = MR_tempr1;
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(2);
	MR_r1 = MR_sv(3);
	MR_r4 = MR_r2;
	MR_r7 = MR_tempr2;
	MR_r2 = (MR_Integer) 0;
	MR_sv(5) = MR_tempr3;
	}
	MR_np_call_localret_ent(ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0,
		ll_backend__liveness__detect_resume_points_in_non_disj_7_0_i15);
MR_def_label(ll_backend__liveness__detect_resume_points_in_non_disj_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(5);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(ll_backend__liveness__detect_resume_points_in_non_disj_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.liveness", 19);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.liveness.detect_resume_points_in_non_disj\'/7", 66);
	MR_r3 = (MR_Word) MR_string_const("empty nondet disjunction", 24);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_determinism_1_0);
MR_decl_entry(parse_tree__prog_data__determinism_components_3_0);

MR_BEGIN_MODULE(ll_backend__liveness_module38)
	MR_init_entry1(ll_backend__liveness__detect_resume_points_in_pruned_disj_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__liveness__detect_resume_points_in_pruned_disj_7_0);
	MR_init_label8(ll_backend__liveness__detect_resume_points_in_pruned_disj_7_0,4,3,5,6,10,11,7,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'detect_resume_points_in_pruned_disj'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__detect_resume_points_in_pruned_disj_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_resume_points_in_pruned_disj_7_0_i3);
	}
	MR_sv(5) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__init_0_0,
		ll_backend__liveness__detect_resume_points_in_pruned_disj_7_0_i4);
MR_def_label(ll_backend__liveness__detect_resume_points_in_pruned_disj_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(ll_backend__liveness__detect_resume_points_in_pruned_disj_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tfield(1, MR_r1, 0);
	MR_sv(4) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_sv(3), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		ll_backend__liveness__detect_resume_points_in_pruned_disj_7_0_i5);
MR_def_label(ll_backend__liveness__detect_resume_points_in_pruned_disj_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		ll_backend__liveness__detect_resume_points_in_pruned_disj_7_0_i6);
MR_def_label(ll_backend__liveness__detect_resume_points_in_pruned_disj_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_resume_points_in_pruned_disj_7_0_i7);
	}
	if (MR_LTAGS_TEST(MR_sv(4),0,0)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_resume_points_in_pruned_disj_7_0_i7);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_localcall_lab(ll_backend__liveness__detect_resume_points_in_pruned_disj_7_0,
		ll_backend__liveness__detect_resume_points_in_pruned_disj_7_0_i10);
MR_def_label(ll_backend__liveness__detect_resume_points_in_pruned_disj_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_tempr3;
	}
	MR_np_call_localret_ent(ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0,
		ll_backend__liveness__detect_resume_points_in_pruned_disj_7_0_i11);
MR_def_label(ll_backend__liveness__detect_resume_points_in_pruned_disj_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(5);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(ll_backend__liveness__detect_resume_points_in_pruned_disj_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__liveness__detect_resume_points_in_last_disjunct_7_0,
		ll_backend__liveness__detect_resume_points_in_pruned_disj_7_0_i13);
MR_def_label(ll_backend__liveness__detect_resume_points_in_pruned_disj_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__liveness_module39)
	MR_init_entry1(ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0);
	MR_init_label10(ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0,2,3,7,4,5,12,10,18,19,20)
	MR_init_label10(ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0,21,22,24,23,26,27,28,29,30,31)
	MR_init_label6(ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0,32,33,34,35,36,37)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'detect_resume_points_in_non_last_disjunct'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_sv(7) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(2) = MR_tempr1;
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r6;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__union_3_0,
		ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0_i2);
MR_def_label(ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(ll_backend__liveness__detect_resume_points_in_goal_6_0,
		ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0_i3);
MR_def_label(ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0_i5);
	}
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(hlds__goal_form__cannot_stack_flush_1_0,
		ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0_i7);
MR_def_label(ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0_i4);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(4);
	MR_tfield(1, MR_r1, 1) = (MR_Integer) 0;
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_set_resume_point_3_0,
		ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0_i18);
MR_def_label(ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(5);
MR_def_label(ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(hlds__goal_form__cannot_fail_before_stack_flush_1_0,
		ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0_i12);
MR_def_label(ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0_i10);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(4);
	MR_tfield(1, MR_r1, 1) = (MR_Integer) 1;
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_set_resume_point_3_0,
		ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0_i18);
MR_def_label(ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = (MR_Integer) 3;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_llds__goal_set_resume_point_3_0,
		ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0_i18);
MR_def_label(ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_pre_deaths_2_0,
		ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0_i19);
MR_def_label(ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__difference_3_0,
		ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0_i20);
MR_def_label(ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_tfield(0, MR_tempr1, 3);
	MR_r4 = MR_tfield(0, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(hlds__hlds_rtti__maybe_complete_with_typeinfo_vars_5_0,
		ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0_i21);
MR_def_label(ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__union_3_0,
		ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0_i22);
MR_def_label(ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(parse_tree__set_of_var__equal_2_0,
		ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0_i24);
MR_def_label(ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0_i23);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_decr_sp_and_return(9);
MR_def_label(ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_tfield(0, MR_sv(7), 2);
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__to_sorted_list_1_0,
		ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0_i26);
MR_def_label(ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__to_sorted_list_1_0,
		ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0_i27);
MR_def_label(ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_vars_to_string_3_0,
		ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0_i28);
MR_def_label(ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_vars_to_string_3_0,
		ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0_i29);
MR_def_label(ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0_i30);
MR_def_label(ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Rest:  ", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0_i31);
MR_def_label(ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0_i32);
MR_def_label(ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0_i33);
MR_def_label(ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("First: ", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0_i34);
MR_def_label(ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" disagree on liveness\n", 22);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0_i35);
MR_def_label(ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("disjunction", 11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0_i36);
MR_def_label(ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("branches of ", 12);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0_i37);
MR_def_label(ll_backend__liveness__detect_resume_points_in_non_last_disjunct_10_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ll_backend.liveness", 19);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.liveness.require_equal\'/4", 47);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(require__unexpected_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__liveness_module40)
	MR_init_entry1(ll_backend__liveness__detect_resume_points_in_last_disjunct_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__liveness__detect_resume_points_in_last_disjunct_7_0);
	MR_init_label4(ll_backend__liveness__detect_resume_points_in_last_disjunct_7_0,2,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'detect_resume_points_in_last_disjunct'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__detect_resume_points_in_last_disjunct_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_np_call_localret_ent(ll_backend__liveness__detect_resume_points_in_goal_6_0,
		ll_backend__liveness__detect_resume_points_in_last_disjunct_7_0_i2);
MR_def_label(ll_backend__liveness__detect_resume_points_in_last_disjunct_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_pre_deaths_2_0,
		ll_backend__liveness__detect_resume_points_in_last_disjunct_7_0_i3);
MR_def_label(ll_backend__liveness__detect_resume_points_in_last_disjunct_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__difference_3_0,
		ll_backend__liveness__detect_resume_points_in_last_disjunct_7_0_i4);
MR_def_label(ll_backend__liveness__detect_resume_points_in_last_disjunct_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_tfield(0, MR_tempr1, 3);
	MR_r4 = MR_tfield(0, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(hlds__hlds_rtti__maybe_complete_with_typeinfo_vars_5_0,
		ll_backend__liveness__detect_resume_points_in_last_disjunct_7_0_i5);
MR_def_label(ll_backend__liveness__detect_resume_points_in_last_disjunct_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__liveness_module41)
	MR_init_entry1(ll_backend__liveness__detect_resume_points_in_cases_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__liveness__detect_resume_points_in_cases_6_0);
	MR_init_label10(ll_backend__liveness__detect_resume_points_in_cases_6_0,52,4,7,9,11,10,14,15,16,17)
	MR_init_label8(ll_backend__liveness__detect_resume_points_in_cases_6_0,18,19,20,21,22,23,24,25)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'detect_resume_points_in_cases'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__detect_resume_points_in_cases_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_resume_points_in_cases_6_0_i52);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__liveness__detect_resume_points_in_cases_6_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(ll_backend__liveness__detect_resume_points_in_goal_6_0,
		ll_backend__liveness__detect_resume_points_in_cases_6_0_i4);
MR_def_label(ll_backend__liveness__detect_resume_points_in_cases_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_resume_points_in_cases_6_0_i7);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_sv(3);
	MR_decr_sp_and_return(7);
	}
MR_def_label(ll_backend__liveness__detect_resume_points_in_cases_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_r3;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr2;
	}
	MR_np_localcall_lab(ll_backend__liveness__detect_resume_points_in_cases_6_0,
		ll_backend__liveness__detect_resume_points_in_cases_6_0_i9);
MR_def_label(ll_backend__liveness__detect_resume_points_in_cases_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__set_of_var__equal_2_0,
		ll_backend__liveness__detect_resume_points_in_cases_6_0_i11);
MR_def_label(ll_backend__liveness__detect_resume_points_in_cases_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_resume_points_in_cases_6_0_i10);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(4);
	MR_tfield(1, MR_r1, 1) = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(7);
MR_def_label(ll_backend__liveness__detect_resume_points_in_cases_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_tfield(0, MR_sv(5), 2);
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__to_sorted_list_1_0,
		ll_backend__liveness__detect_resume_points_in_cases_6_0_i14);
MR_def_label(ll_backend__liveness__detect_resume_points_in_cases_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__to_sorted_list_1_0,
		ll_backend__liveness__detect_resume_points_in_cases_6_0_i15);
MR_def_label(ll_backend__liveness__detect_resume_points_in_cases_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_vars_to_string_3_0,
		ll_backend__liveness__detect_resume_points_in_cases_6_0_i16);
MR_def_label(ll_backend__liveness__detect_resume_points_in_cases_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_vars_to_string_3_0,
		ll_backend__liveness__detect_resume_points_in_cases_6_0_i17);
MR_def_label(ll_backend__liveness__detect_resume_points_in_cases_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__liveness__detect_resume_points_in_cases_6_0_i18);
MR_def_label(ll_backend__liveness__detect_resume_points_in_cases_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Rest:  ", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__liveness__detect_resume_points_in_cases_6_0_i19);
MR_def_label(ll_backend__liveness__detect_resume_points_in_cases_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__liveness__detect_resume_points_in_cases_6_0_i20);
MR_def_label(ll_backend__liveness__detect_resume_points_in_cases_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__liveness__detect_resume_points_in_cases_6_0_i21);
MR_def_label(ll_backend__liveness__detect_resume_points_in_cases_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("First: ", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__liveness__detect_resume_points_in_cases_6_0_i22);
MR_def_label(ll_backend__liveness__detect_resume_points_in_cases_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" disagree on liveness\n", 22);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__liveness__detect_resume_points_in_cases_6_0_i23);
MR_def_label(ll_backend__liveness__detect_resume_points_in_cases_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("switch", 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__liveness__detect_resume_points_in_cases_6_0_i24);
MR_def_label(ll_backend__liveness__detect_resume_points_in_cases_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("branches of ", 12);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__liveness__detect_resume_points_in_cases_6_0_i25);
MR_def_label(ll_backend__liveness__detect_resume_points_in_cases_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ll_backend.liveness", 19);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.liveness.require_equal\'/4", 47);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(require__unexpected_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__liveness_module42)
	MR_init_entry1(ll_backend__liveness__detect_resume_points_in_par_conj_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__liveness__detect_resume_points_in_par_conj_6_0);
	MR_init_label3(ll_backend__liveness__detect_resume_points_in_par_conj_6_0,17,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'detect_resume_points_in_par_conj'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__detect_resume_points_in_par_conj_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_resume_points_in_par_conj_6_0_i17);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__liveness__detect_resume_points_in_par_conj_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(ll_backend__liveness__detect_resume_points_in_goal_6_0,
		ll_backend__liveness__detect_resume_points_in_par_conj_6_0_i4);
MR_def_label(ll_backend__liveness__detect_resume_points_in_par_conj_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_sv(2);
	}
	MR_np_localcall_lab(ll_backend__liveness__detect_resume_points_in_par_conj_6_0,
		ll_backend__liveness__detect_resume_points_in_par_conj_6_0_i5);
MR_def_label(ll_backend__liveness__detect_resume_points_in_par_conj_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__quantification__requantify_proc_general_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_varset_2_0);
MR_decl_entry(libs__globals__lookup_int_option_3_0);
MR_decl_entry(hlds__hlds_pred__pred_id_to_int_2_0);
MR_decl_entry(hlds__arg_info__partition_proc_args_5_0);
MR_decl_entry(fn__parse_tree__set_of_var__set_to_bitset_1_0);
MR_decl_entry(libs__globals__get_trace_level_2_0);
MR_decl_entry(__Unify___libs__trace_params__trace_level_0_0);
MR_decl_entry(fn__libs__trace_params__trace_level_allows_delay_death_1_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(fn__varset__num_allocated_1_0);
MR_decl_entry(fn__map__count_1_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_origin_2_0);
MR_decl_entry(fn__libs__trace_params__eff_trace_level_needs_fail_vars_4_0);
MR_decl_entry(ll_backend__trace_gen__trace_fail_vars_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_goal_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_liveness_info_3_0);

MR_BEGIN_MODULE(ll_backend__liveness_module43)
	MR_init_entry1(ll_backend__liveness__detect_liveness_proc_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__liveness__detect_liveness_proc_2_4_0);
	MR_init_label10(ll_backend__liveness__detect_liveness_proc_2_4_0,2,3,4,5,6,7,8,9,11,12)
	MR_init_label10(ll_backend__liveness__detect_liveness_proc_2_4_0,13,14,15,16,17,18,19,20,21,22)
	MR_init_label10(ll_backend__liveness__detect_liveness_proc_2_4_0,23,24,26,27,29,31,33,36,35,38)
	MR_init_label10(ll_backend__liveness__detect_liveness_proc_2_4_0,34,39,42,25,46,45,49,51,52,53)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'detect_liveness_proc_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__detect_liveness_proc_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(11) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(hlds__quantification__requantify_proc_general_3_0,
		ll_backend__liveness__detect_liveness_proc_2_4_0_i2);
MR_def_label(ll_backend__liveness__detect_liveness_proc_2_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		ll_backend__liveness__detect_liveness_proc_2_4_0_i3);
MR_def_label(ll_backend__liveness__detect_liveness_proc_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		ll_backend__liveness__detect_liveness_proc_2_4_0_i4);
MR_def_label(ll_backend__liveness__detect_liveness_proc_2_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		ll_backend__liveness__detect_liveness_proc_2_4_0_i5);
MR_def_label(ll_backend__liveness__detect_liveness_proc_2_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_rtti_varmaps_2_0,
		ll_backend__liveness__detect_liveness_proc_2_4_0_i6);
MR_def_label(ll_backend__liveness__detect_liveness_proc_2_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		ll_backend__liveness__detect_liveness_proc_2_4_0_i7);
MR_def_label(ll_backend__liveness__detect_liveness_proc_2_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		ll_backend__liveness__detect_liveness_proc_2_4_0_i8);
MR_def_label(ll_backend__liveness__detect_liveness_proc_2_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__body_should_use_typeinfo_liveness_3_0,
		ll_backend__liveness__detect_liveness_proc_2_4_0_i9);
MR_def_label(ll_backend__liveness__detect_liveness_proc_2_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 72;
	}
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		ll_backend__liveness__detect_liveness_proc_2_4_0_i11);
MR_def_label(ll_backend__liveness__detect_liveness_proc_2_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_id_to_int_2_0,
		ll_backend__liveness__detect_liveness_proc_2_4_0_i12);
MR_def_label(ll_backend__liveness__detect_liveness_proc_2_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = (MR_Word) MR_string_const("\nbefore liveness", 16);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(10);
	MR_np_call_localret_ent(ll_backend__liveness__maybe_debug_liveness_8_0,
		ll_backend__liveness__detect_liveness_proc_2_4_0_i13);
MR_def_label(ll_backend__liveness__detect_liveness_proc_2_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(ll_backend__liveness__initial_liveness_4_0,
		ll_backend__liveness__detect_liveness_proc_2_4_0_i14);
MR_def_label(ll_backend__liveness__detect_liveness_proc_2_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__liveness__detect_liveness_in_goal_5_0,
		ll_backend__liveness__detect_liveness_proc_2_4_0_i15);
MR_def_label(ll_backend__liveness__detect_liveness_proc_2_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = (MR_Word) MR_string_const("\nafter liveness", 15);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(10);
	MR_np_call_localret_ent(ll_backend__liveness__maybe_debug_liveness_8_0,
		ll_backend__liveness__detect_liveness_proc_2_4_0_i16);
MR_def_label(ll_backend__liveness__detect_liveness_proc_2_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(hlds__arg_info__partition_proc_args_5_0,
		ll_backend__liveness__detect_liveness_proc_2_4_0_i17);
MR_def_label(ll_backend__liveness__detect_liveness_proc_2_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r2;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		ll_backend__liveness__detect_liveness_proc_2_4_0_i18);
MR_def_label(ll_backend__liveness__detect_liveness_proc_2_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_rtti_varmaps_2_0,
		ll_backend__liveness__detect_liveness_proc_2_4_0_i19);
MR_def_label(ll_backend__liveness__detect_liveness_proc_2_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__set_to_bitset_1_0,
		ll_backend__liveness__detect_liveness_proc_2_4_0_i20);
MR_def_label(ll_backend__liveness__detect_liveness_proc_2_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_sv(4), 1);
	MR_r3 = MR_sv(13);
	MR_r4 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_rtti__maybe_complete_with_typeinfo_vars_5_0,
		ll_backend__liveness__detect_liveness_proc_2_4_0_i21);
MR_def_label(ll_backend__liveness__detect_liveness_proc_2_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(ll_backend__liveness__detect_deadness_in_goal_6_0,
		ll_backend__liveness__detect_liveness_proc_2_4_0_i22);
MR_def_label(ll_backend__liveness__detect_liveness_proc_2_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = (MR_Word) MR_string_const("\nafter deadness", 15);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(10);
	MR_np_call_localret_ent(ll_backend__liveness__maybe_debug_liveness_8_0,
		ll_backend__liveness__detect_liveness_proc_2_4_0_i23);
MR_def_label(ll_backend__liveness__detect_liveness_proc_2_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(libs__globals__get_trace_level_2_0,
		ll_backend__liveness__detect_liveness_proc_2_4_0_i24);
MR_def_label(ll_backend__liveness__detect_liveness_proc_2_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(libs__globals__get_trace_level_2_0,
		ll_backend__liveness__detect_liveness_proc_2_4_0_i26);
MR_def_label(ll_backend__liveness__detect_liveness_proc_2_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___libs__trace_params__trace_level_0_0,
		ll_backend__liveness__detect_liveness_proc_2_4_0_i27);
MR_def_label(ll_backend__liveness__detect_liveness_proc_2_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_liveness_proc_2_4_0_i25);
	}
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__libs__trace_params__trace_level_allows_delay_death_1_0,
		ll_backend__liveness__detect_liveness_proc_2_4_0_i29);
MR_def_label(ll_backend__liveness__detect_liveness_proc_2_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_liveness_proc_2_4_0_i25);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 125;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ll_backend__liveness__detect_liveness_proc_2_4_0_i31);
MR_def_label(ll_backend__liveness__detect_liveness_proc_2_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_liveness_proc_2_4_0_i25);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 126;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		ll_backend__liveness__detect_liveness_proc_2_4_0_i33);
MR_def_label(ll_backend__liveness__detect_liveness_proc_2_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__varset__num_allocated_1_0,
		ll_backend__liveness__detect_liveness_proc_2_4_0_i36);
MR_def_label(ll_backend__liveness__detect_liveness_proc_2_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r1 > (MR_Integer) MR_sv(9))) {
		MR_GOTO_LAB(ll_backend__liveness__detect_liveness_proc_2_4_0_i35);
	}
	MR_r1 = MR_sv(3);
	MR_GOTO_LAB(ll_backend__liveness__detect_liveness_proc_2_4_0_i34);
MR_def_label(ll_backend__liveness__detect_liveness_proc_2_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(fn__map__count_1_0,
		ll_backend__liveness__detect_liveness_proc_2_4_0_i38);
MR_def_label(ll_backend__liveness__detect_liveness_proc_2_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r1 > (MR_Integer) MR_sv(9))) {
		MR_GOTO_LAB(ll_backend__liveness__detect_liveness_proc_2_4_0_i25);
	}
	MR_r1 = MR_sv(3);
MR_def_label(ll_backend__liveness__detect_liveness_proc_2_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_origin_2_0,
		ll_backend__liveness__detect_liveness_proc_2_4_0_i39);
MR_def_label(ll_backend__liveness__detect_liveness_proc_2_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_liveness_proc_2_4_0_i25);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(ll_backend__liveness__delay_death_proc_body_4_0,
		ll_backend__liveness__detect_liveness_proc_2_4_0_i42);
MR_def_label(ll_backend__liveness__detect_liveness_proc_2_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = (MR_Word) MR_string_const("\nafter delay death", 18);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(10);
	MR_np_call_localret_ent(ll_backend__liveness__maybe_debug_liveness_8_0,
		ll_backend__liveness__detect_liveness_proc_2_4_0_i25);
MR_def_label(ll_backend__liveness__detect_liveness_proc_2_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(8);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(fn__libs__trace_params__eff_trace_level_needs_fail_vars_4_0,
		ll_backend__liveness__detect_liveness_proc_2_4_0_i46);
MR_def_label(ll_backend__liveness__detect_liveness_proc_2_4_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_liveness_proc_2_4_0_i45);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(ll_backend__trace_gen__trace_fail_vars_3_0,
		ll_backend__liveness__detect_liveness_proc_2_4_0_i49);
MR_def_label(ll_backend__liveness__detect_liveness_proc_2_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__init_0_0,
		ll_backend__liveness__detect_liveness_proc_2_4_0_i49);
MR_def_label(ll_backend__liveness__detect_liveness_proc_2_4_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(4);
	MR_r2 = MR_sv(7);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__liveness__detect_resume_points_in_goal_6_0,
		ll_backend__liveness__detect_liveness_proc_2_4_0_i51);
MR_def_label(ll_backend__liveness__detect_liveness_proc_2_4_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(11);
	MR_sv(11) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("\nafter resume point", 19);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(11);
	}
	MR_np_call_localret_ent(ll_backend__liveness__maybe_debug_liveness_8_0,
		ll_backend__liveness__detect_liveness_proc_2_4_0_i52);
MR_def_label(ll_backend__liveness__detect_liveness_proc_2_4_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		ll_backend__liveness__detect_liveness_proc_2_4_0_i53);
MR_def_label(ll_backend__liveness__detect_liveness_proc_2_4_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_np_tailcall_ent(hlds__hlds_pred__proc_info_set_liveness_info_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__liveness_module44)
	MR_init_entry1(ll_backend__liveness__detect_liveness_proc_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__liveness__detect_liveness_proc_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'detect_liveness_proc'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__liveness__detect_liveness_proc_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_np_tailcall_ent(ll_backend__liveness__detect_liveness_proc_2_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
MR_decl_entry(list__split_list_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
MR_decl_entry(list__map_3_0);
MR_decl_entry(list__foldl_corresponding_5_0);

MR_BEGIN_MODULE(ll_backend__liveness_module45)
	MR_init_entry1(ll_backend__liveness__detect_liveness_preds_parallel_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__liveness__detect_liveness_preds_parallel_2_4_0);
	MR_init_label6(ll_backend__liveness__detect_liveness_preds_parallel_2_4_0,22,3,6,8,2,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'detect_liveness_preds_parallel_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__detect_liveness_preds_parallel_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(ll_backend__liveness__detect_liveness_preds_parallel_2_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Integer) 1000;
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(list__split_list_4_0,
		ll_backend__liveness__detect_liveness_preds_parallel_2_4_0_i3);
MR_def_label(ll_backend__liveness__detect_liveness_preds_parallel_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__liveness__detect_liveness_preds_parallel_2_4_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__liveness__detect_liveness_pred_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_sv(1) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__map_3_0,
		ll_backend__liveness__detect_liveness_preds_parallel_2_4_0_i6);
MR_def_label(ll_backend__liveness__detect_liveness_preds_parallel_2_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(2);
	}
	MR_np_call_localret_ent(list__foldl_corresponding_5_0,
		ll_backend__liveness__detect_liveness_preds_parallel_2_4_0_i8);
MR_def_label(ll_backend__liveness__detect_liveness_preds_parallel_2_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(ll_backend__liveness__detect_liveness_preds_parallel_2_4_0_i22);
	}
MR_def_label(ll_backend__liveness__detect_liveness_preds_parallel_2_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__liveness__detect_liveness_pred_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__map_3_0,
		ll_backend__liveness__detect_liveness_preds_parallel_2_4_0_i11);
MR_def_label(ll_backend__liveness__detect_liveness_preds_parallel_2_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,5,1);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(list__foldl_corresponding_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_valid_predids_3_0);

MR_BEGIN_MODULE(ll_backend__liveness_module46)
	MR_init_entry1(ll_backend__liveness__detect_liveness_preds_parallel_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__liveness__detect_liveness_preds_parallel_2_0);
	MR_init_label1(ll_backend__liveness__detect_liveness_preds_parallel_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'detect_liveness_preds_parallel'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__liveness__detect_liveness_preds_parallel_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_valid_predids_3_0,
		ll_backend__liveness__detect_liveness_preds_parallel_2_0_i2);
MR_def_label(ll_backend__liveness__detect_liveness_preds_parallel_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(ll_backend__liveness__detect_liveness_preds_parallel_2_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_pred__pred_info_non_imported_procids_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;
MR_decl_entry(list__foldl_4_0);

MR_BEGIN_MODULE(ll_backend__liveness_module47)
	MR_init_entry1(ll_backend__liveness__detect_liveness_pred_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__liveness__detect_liveness_pred_3_0);
	MR_init_label2(ll_backend__liveness__detect_liveness_pred_3_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'detect_liveness_pred'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__detect_liveness_pred_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		ll_backend__liveness__detect_liveness_pred_3_0_i2);
MR_def_label(ll_backend__liveness__detect_liveness_pred_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_non_imported_procids_1_0,
		ll_backend__liveness__detect_liveness_pred_3_0_i3);
MR_def_label(ll_backend__liveness__detect_liveness_pred_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__liveness__detect_liveness_pred_proc_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(list__foldl_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__pred_info_proc_info_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_proc_info_4_0);

MR_BEGIN_MODULE(ll_backend__liveness_module48)
	MR_init_entry1(ll_backend__liveness__detect_liveness_pred_proc_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__liveness__detect_liveness_pred_proc_5_0);
	MR_init_label2(ll_backend__liveness__detect_liveness_pred_proc_5_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'detect_liveness_pred_proc'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__detect_liveness_pred_proc_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(4) = MR_tempr2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_proc_info_3_0,
		ll_backend__liveness__detect_liveness_pred_proc_5_0_i2);
MR_def_label(ll_backend__liveness__detect_liveness_pred_proc_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__liveness__detect_liveness_proc_2_4_0,
		ll_backend__liveness__detect_liveness_pred_proc_5_0_i3);
MR_def_label(ll_backend__liveness__detect_liveness_pred_proc_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(hlds__hlds_pred__pred_info_set_proc_info_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(varset__search_name_3_0);

MR_BEGIN_MODULE(ll_backend__liveness_module49)
	MR_init_entry1(ll_backend__liveness__var_is_named_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__liveness__var_is_named_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'var_is_named'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__liveness__var_is_named_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(varset__search_name_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__liveness_module50)
	MR_init_entry1(fn__ll_backend__liveness__kill_excess_delayed_dead_case_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__liveness__kill_excess_delayed_dead_case_2_0);
	MR_init_label4(fn__ll_backend__liveness__kill_excess_delayed_dead_case_2_0,2,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'kill_excess_delayed_dead_case'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__liveness__kill_excess_delayed_dead_case_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tfield(0, MR_r2, 1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__difference_3_0,
		fn__ll_backend__liveness__kill_excess_delayed_dead_case_2_0_i2);
MR_def_label(fn__ll_backend__liveness__kill_excess_delayed_dead_case_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_tfield(0, MR_r2, 0);
	MR_sv(5) = MR_tfield(0, MR_r2, 1);
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_post_deaths_2_0,
		fn__ll_backend__liveness__kill_excess_delayed_dead_case_2_0_i3);
MR_def_label(fn__ll_backend__liveness__kill_excess_delayed_dead_case_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__union_3_0,
		fn__ll_backend__liveness__kill_excess_delayed_dead_case_2_0_i4);
MR_def_label(fn__ll_backend__liveness__kill_excess_delayed_dead_case_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_set_post_deaths_3_0,
		fn__ll_backend__liveness__kill_excess_delayed_dead_case_2_0_i5);
MR_def_label(fn__ll_backend__liveness__kill_excess_delayed_dead_case_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(4);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = MR_sv(1);
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_tfield(0, MR_r1, 2) = MR_r2;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___hlds__hlds_module__module_info_0_0);
MR_decl_entry(__Unify___varset__varset_1_0);
MR_decl_entry(__Unify___tree234__tree234_2_0);
MR_decl_entry(__Unify___hlds__hlds_rtti__rtti_varmaps_0_0);

MR_BEGIN_MODULE(ll_backend__liveness_module51)
	MR_init_entry1(__Unify___ll_backend__liveness__live_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__liveness__live_info_0_0);
	MR_init_label5(__Unify___ll_backend__liveness__live_info_0_0,4,6,9,13,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__liveness__live_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__liveness__live_info_0_0_i13);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(7) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(8) = MR_tfield(0, MR_tempr2, 4);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_module__module_info_0_0,
		__Unify___ll_backend__liveness__live_info_0_0_i4);
MR_def_label(__Unify___ll_backend__liveness__live_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__liveness__live_info_0_0_i1);
	}
	if ((MR_sv(1) != MR_sv(5))) {
		MR_GOTO_LAB(__Unify___ll_backend__liveness__live_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___ll_backend__liveness__live_info_0_0_i6);
MR_def_label(__Unify___ll_backend__liveness__live_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__liveness__live_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___ll_backend__liveness__live_info_0_0_i9);
MR_def_label(__Unify___ll_backend__liveness__live_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__liveness__live_info_0_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Unify___hlds__hlds_rtti__rtti_varmaps_0_0);
MR_def_label(__Unify___ll_backend__liveness__live_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__liveness__live_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___hlds__hlds_module__module_info_0_0);
MR_decl_entry(private_builtin__builtin_compare_int_3_0);
MR_decl_entry(__Compare___varset__varset_1_0);
MR_decl_entry(__Compare___tree234__tree234_2_0);
MR_decl_entry(__Compare___hlds__hlds_rtti__rtti_varmaps_0_0);

MR_BEGIN_MODULE(ll_backend__liveness_module52)
	MR_init_entry1(__Compare___ll_backend__liveness__live_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__liveness__live_info_0_0);
	MR_init_label7(__Compare___ll_backend__liveness__live_info_0_0,3,2,5,9,13,18,61)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__liveness__live_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__liveness__live_info_0_0_i3);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__liveness__live_info_0_0_i2);
MR_def_label(__Compare___ll_backend__liveness__live_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__liveness__live_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(8) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(7) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(6) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(5) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(4) = MR_tfield(0, MR_tempr6, 4);
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
	MR_np_call_localret_ent(__Compare___hlds__hlds_module__module_info_0_0,
		__Compare___ll_backend__liveness__live_info_0_0_i5);
MR_def_label(__Compare___ll_backend__liveness__live_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__liveness__live_info_0_0_i61);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__liveness__live_info_0_0_i9);
MR_def_label(__Compare___ll_backend__liveness__live_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__liveness__live_info_0_0_i61);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___ll_backend__liveness__live_info_0_0_i13);
MR_def_label(__Compare___ll_backend__liveness__live_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__liveness__live_info_0_0_i61);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___ll_backend__liveness__live_info_0_0_i18);
MR_def_label(__Compare___ll_backend__liveness__live_info_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__liveness__live_info_0_0_i61);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___hlds__hlds_rtti__rtti_varmaps_0_0);
MR_def_label(__Compare___ll_backend__liveness__live_info_0_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ll_backend__liveness_maybe_bunch_0(void)
{
	ll_backend__liveness_module0();
	ll_backend__liveness_module1();
	ll_backend__liveness_module2();
	ll_backend__liveness_module3();
	ll_backend__liveness_module4();
	ll_backend__liveness_module5();
	ll_backend__liveness_module6();
	ll_backend__liveness_module7();
	ll_backend__liveness_module8();
	ll_backend__liveness_module9();
	ll_backend__liveness_module10();
	ll_backend__liveness_module11();
	ll_backend__liveness_module12();
	ll_backend__liveness_module13();
	ll_backend__liveness_module14();
	ll_backend__liveness_module15();
	ll_backend__liveness_module16();
	ll_backend__liveness_module17();
	ll_backend__liveness_module18();
	ll_backend__liveness_module19();
	ll_backend__liveness_module20();
	ll_backend__liveness_module21();
	ll_backend__liveness_module22();
	ll_backend__liveness_module23();
	ll_backend__liveness_module24();
	ll_backend__liveness_module25();
	ll_backend__liveness_module26();
	ll_backend__liveness_module27();
	ll_backend__liveness_module28();
	ll_backend__liveness_module29();
	ll_backend__liveness_module30();
	ll_backend__liveness_module31();
	ll_backend__liveness_module32();
	ll_backend__liveness_module33();
	ll_backend__liveness_module34();
	ll_backend__liveness_module35();
	ll_backend__liveness_module36();
	ll_backend__liveness_module37();
	ll_backend__liveness_module38();
	ll_backend__liveness_module39();
}

static void mercury__ll_backend__liveness_maybe_bunch_1(void)
{
	ll_backend__liveness_module40();
	ll_backend__liveness_module41();
	ll_backend__liveness_module42();
	ll_backend__liveness_module43();
	ll_backend__liveness_module44();
	ll_backend__liveness_module45();
	ll_backend__liveness_module46();
	ll_backend__liveness_module47();
	ll_backend__liveness_module48();
	ll_backend__liveness_module49();
	ll_backend__liveness_module50();
	ll_backend__liveness_module51();
	ll_backend__liveness_module52();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ll_backend__liveness__init(void);
void mercury__ll_backend__liveness__init_type_tables(void);
void mercury__ll_backend__liveness__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ll_backend__liveness__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ll_backend__liveness__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__ll_backend__liveness__init_threadscope_string_table(void);
#endif

void mercury__ll_backend__liveness__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ll_backend__liveness_maybe_bunch_0();
	mercury__ll_backend__liveness_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__liveness__type_ctor_info_live_info_0,
		ll_backend__liveness__live_info_0_0);
	mercury__ll_backend__liveness__init_debugger();
}

void mercury__ll_backend__liveness__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__liveness__type_ctor_info_live_info_0);
	}
}


void mercury__ll_backend__liveness__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ll_backend__liveness__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ll_backend__liveness);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ll_backend__liveness__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__ll_backend__liveness__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
