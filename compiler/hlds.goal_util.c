/*
** Automatically generated from `goal_util.m'
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
INIT mercury__hlds__goal_util__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 532 "../library/io.int"
#include "io.mh"

#line 27 "hlds.goal_util.c"
#line 540 "../library/io.int"
#include "string.mh"

#line 31 "hlds.goal_util.c"
#line 87 "../library/table_builtin.int2"
#include "table_builtin.mh"

#line 35 "hlds.goal_util.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 39 "hlds.goal_util.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 43 "hlds.goal_util.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 47 "hlds.goal_util.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 51 "hlds.goal_util.c"
#line 52 "hlds.goal_util.c"
#include "hlds.goal_util.mh"

#line 55 "hlds.goal_util.c"
#line 56 "hlds.goal_util.c"
#ifndef HLDS__GOAL_UTIL_DECL_GUARD
#define HLDS__GOAL_UTIL_DECL_GUARD

#line 60 "hlds.goal_util.c"
#line 61 "hlds.goal_util.c"

#endif
#line 64 "hlds.goal_util.c"

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
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Integer f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_hlds__goal_util__type_ctor_info_is_leaf_0;
MR_decl_label5(hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__669__1_3_0, 1,2,3,4,6)
MR_decl_label8(hlds__goal_util__attach_features_goal_expr_3_0, 39,10,40,12,41,14,42,16)
MR_decl_label8(hlds__goal_util__attach_features_goal_expr_3_0, 43,18,44,20,21,22,23,24)
MR_decl_label1(hlds__goal_util__attach_features_goal_expr_3_0, 25)
MR_decl_label2(hlds__goal_util__attach_features_to_all_goals_3_0, 2,3)
MR_decl_label2(hlds__goal_util__attach_features_to_case_3_0, 2,3)
MR_decl_label8(hlds__goal_util__can_reorder_goals_11_0, 2,3,7,9,11,6,5,14)
MR_decl_label8(hlds__goal_util__can_reorder_goals_11_0, 16,18,19,20,21,22,25,17)
MR_decl_label7(hlds__goal_util__can_reorder_goals_11_0, 28,29,30,31,32,35,27)
MR_decl_label8(hlds__goal_util__can_reorder_goals_old_7_0, 2,3,10,13,14,15,16,17)
MR_decl_label8(hlds__goal_util__can_reorder_goals_old_7_0, 20,44,12,23,24,25,26,27)
MR_decl_label3(hlds__goal_util__case_list_calls_proc_in_list_4_0, 10,3,4)
MR_decl_label8(hlds__goal_util__case_to_disjunct_11_0, 2,3,4,5,6,7,9,10)
MR_decl_label8(hlds__goal_util__case_to_disjunct_11_0, 8,12,14,15,16,17,18,19)
MR_decl_label8(hlds__goal_util__case_to_disjunct_11_0, 20,21,22,23,24,25,26,27)
MR_decl_label1(hlds__goal_util__case_to_disjunct_11_0, 28)
MR_decl_label4(hlds__goal_util__cases_calls_2_0, 18,5,3,1)
MR_decl_label3(hlds__goal_util__cases_calls_2_1, 6,3,2)
MR_decl_label4(hlds__goal_util__cases_calls_pred_id_2_0, 18,5,3,1)
MR_decl_label3(hlds__goal_util__cases_calls_pred_id_2_1, 6,3,2)
MR_decl_label3(hlds__goal_util__cases_goal_vars_3_0, 10,3,4)
MR_decl_label3(hlds__goal_util__cases_size_2_0, 13,4,5)
MR_decl_label3(hlds__goal_util__clause_list_size_2_0, 2,3,6)
MR_decl_label1(hlds__goal_util__clause_size_increment_3_0, 2)
MR_decl_label8(hlds__goal_util__compute_disjunct_goal_info_4_0, 2,3,4,5,6,7,8,9)
MR_decl_label5(hlds__goal_util__compute_disjunct_goal_info_4_0, 10,11,12,13,14)
MR_decl_label6(hlds__goal_util__create_conj_4_0, 2,3,4,5,6,7)
MR_decl_label4(hlds__goal_util__create_renaming_9_0, 2,3,4,5)
MR_decl_label8(hlds__goal_util__create_renaming_2_12_0, 27,3,4,5,6,9,7,11)
MR_decl_label6(hlds__goal_util__create_renaming_2_12_0, 13,14,15,16,17,18)
MR_decl_label8(hlds__goal_util__create_variables_9_0, 38,3,5,4,7,9,11,8)
MR_decl_label5(hlds__goal_util__create_variables_9_0, 12,13,15,17,14)
MR_decl_label8(hlds__goal_util__direct_subgoal_2_0, 4,6,30,31,10,11,32,14)
MR_decl_label2(hlds__goal_util__direct_subgoal_2_0, 15,29)
MR_decl_label7(hlds__goal_util__extra_nonlocal_typeinfos_5_0, 2,3,4,5,6,7,8)
MR_decl_label3(hlds__goal_util__flatten_conj_2_0, 27,4,5)
MR_decl_label6(hlds__goal_util__foreign_code_uses_variable_2_0, 3,10,14,18,28,1)
MR_decl_label1(hlds__goal_util__generate_cast_5_0, 2)
MR_decl_label5(hlds__goal_util__generate_cast_with_insts_7_0, 2,3,4,5,6)
MR_decl_label8(hlds__goal_util__generate_foreign_proc_16_0, 2,3,4,5,6,7,8,16)
MR_decl_label6(hlds__goal_util__generate_foreign_proc_16_0, 17,18,19,20,21,22)
MR_decl_label8(hlds__goal_util__generate_simple_call_12_0, 2,3,4,5,6,7,8,16)
MR_decl_label6(hlds__goal_util__generate_simple_call_12_0, 17,18,19,20,21,22)
MR_decl_label2(hlds__goal_util__generic_call_vars_2_0, 5,7)
MR_decl_label8(hlds__goal_util__goal_calls_proc_in_list_2_4_0, 35,5,7,6,12,13,14,16)
MR_decl_label7(hlds__goal_util__goal_calls_proc_in_list_2_4_0, 18,20,22,24,25,26,28)
MR_decl_label3(hlds__goal_util__goal_contains_goal_2_0, 2,3,1)
MR_decl_label8(hlds__goal_util__goal_expr_calls_2_0, 59,5,8,11,14,17,20,23)
MR_decl_label4(hlds__goal_util__goal_expr_calls_2_0, 26,4,42,1)
MR_decl_label8(hlds__goal_util__goal_expr_calls_2_1, 4,6,8,10,12,41,16,18)
MR_decl_label3(hlds__goal_util__goal_expr_calls_2_1, 3,40,39)
MR_decl_label8(hlds__goal_util__goal_expr_calls_pred_id_2_0, 55,5,8,11,14,17,20,23)
MR_decl_label4(hlds__goal_util__goal_expr_calls_pred_id_2_0, 26,4,41,1)
MR_decl_label8(hlds__goal_util__goal_expr_calls_pred_id_2_1, 4,6,8,10,12,41,16,18)
MR_decl_label3(hlds__goal_util__goal_expr_calls_pred_id_2_1, 3,40,39)
MR_decl_label8(hlds__goal_util__goal_expr_size_2_0, 8,39,10,27,40,41,42,43)
MR_decl_label6(hlds__goal_util__goal_expr_size_2_0, 44,22,23,24,25,38)
MR_decl_label2(hlds__goal_util__goal_expr_size_shorthand_2_0, 2,3)
MR_decl_label2(hlds__goal_util__goal_is_branched_1_0, 2,1)
MR_decl_label3(hlds__goal_util__goal_list_calls_proc_in_list_2_4_0, 10,3,4)
MR_decl_label1(hlds__goal_util__goal_vars_2_0, 2)
MR_decl_label8(hlds__goal_util__goal_vars_2_3_0, 4,5,12,9,10,21,23,24)
MR_decl_label8(hlds__goal_util__goal_vars_2_3_0, 25,27,28,29,30,31,33,35)
MR_decl_label8(hlds__goal_util__goal_vars_2_3_0, 37,38,40,42,45,47,50,68)
MR_decl_label7(hlds__goal_util__goal_vars_2_3_0, 53,54,56,57,58,59,61)
MR_decl_label1(hlds__goal_util__goal_vars_2_shorthand_3_0, 2)
MR_decl_label4(hlds__goal_util__goals_calls_2_0, 18,5,3,1)
MR_decl_label3(hlds__goal_util__goals_calls_2_1, 6,3,2)
MR_decl_label4(hlds__goal_util__goals_calls_pred_id_2_0, 18,5,3,1)
MR_decl_label3(hlds__goal_util__goals_calls_pred_id_2_1, 6,3,2)
MR_decl_label3(hlds__goal_util__goals_goal_vars_3_0, 10,3,4)
MR_decl_label3(hlds__goal_util__goals_size_2_0, 13,4,5)
MR_decl_label8(hlds__goal_util__if_then_else_to_disjunction_5_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(hlds__goal_util__if_then_else_to_disjunction_5_0, 10,11,12,13,14,15,16,17)
MR_decl_label8(hlds__goal_util__if_then_else_to_disjunction_5_0, 18,23,24,25,26,28,27,30)
MR_decl_label7(hlds__goal_util__if_then_else_to_disjunction_5_0, 38,39,40,41,42,43,44)
MR_decl_label3(hlds__goal_util__predids_from_goals_2_0, 14,4,5)
MR_decl_label8(hlds__goal_util__reordering_maintains_termination_8_0, 2,3,4,5,6,7,11,12)
MR_decl_label8(hlds__goal_util__reordering_maintains_termination_old_4_0, 2,3,4,5,11,21,15,1)
MR_decl_label4(hlds__goal_util__rhs_goal_vars_3_0, 24,7,8,4)
MR_decl_label3(hlds__goal_util__switch_to_disjunction_10_0, 13,4,5)
MR_decl_label1(hlds__goal_util__update_instmap_3_0, 2)
MR_decl_label1(fn__hlds__goal_util__IntroducedFrom__func__extra_nonlocal_typeinfos__659__1_2_0, 2)
MR_decl_label2(fn__hlds__goal_util__goal_calls_proc_in_list_2_0, 2,3)
MR_decl_label2(fn__hlds__goal_util__goal_list_calls_proc_in_list_2_0, 2,3)
MR_decl_label8(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0, 49,10,50,12,51,14,52,16)
MR_decl_label8(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0, 53,18,54,21,20,23,24,25)
MR_decl_label2(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0, 27,48)
MR_decl_label1(fn__hlds__goal_util__maybe_strip_equality_pretest_case_1_0, 2)
MR_decl_label8(fn__hlds__goal_util__proc_body_is_leaf_1_0, 73,4,14,16,18,20,22,24)
MR_decl_label8(fn__hlds__goal_util__proc_body_is_leaf_1_0, 26,28,30,32,35,37,39,47)
MR_decl_label1(fn__hlds__goal_util__proc_body_is_leaf_1_0, 36)
MR_decl_label4(fn__hlds__goal_util__proc_body_is_leaf_cases_1_0, 24,5,7,4)
MR_decl_label4(fn__hlds__goal_util__proc_body_is_leaf_goals_1_0, 24,5,7,4)
MR_def_extern_entry(hlds__goal_util__update_instmap_3_0)
MR_decl_static(fn__hlds__goal_util__this_file_0_0)
MR_decl_static(hlds__goal_util__create_renaming_2_12_0)
MR_def_extern_entry(hlds__goal_util__create_renaming_9_0)
MR_def_extern_entry(hlds__goal_util__create_variables_9_0)
MR_def_extern_entry(hlds__goal_util__generic_call_vars_2_0)
MR_def_extern_entry(hlds__goal_util__goals_goal_vars_3_0)
MR_decl_static(hlds__goal_util__goal_vars_2_3_0)
MR_decl_static(hlds__goal_util__goal_vars_2_shorthand_3_0)
MR_decl_static(hlds__goal_util__cases_goal_vars_3_0)
MR_decl_static(hlds__goal_util__rhs_goal_vars_3_0)
MR_def_extern_entry(hlds__goal_util__goal_vars_2_0)
MR_def_extern_entry(hlds__goal_util__attach_features_to_all_goals_3_0)
MR_decl_static(hlds__goal_util__attach_features_goal_expr_3_0)
MR_def_extern_entry(hlds__goal_util__extra_nonlocal_typeinfos_5_0)
MR_def_extern_entry(fn__hlds__goal_util__proc_body_is_leaf_1_0)
MR_decl_static(fn__hlds__goal_util__proc_body_is_leaf_goals_1_0)
MR_decl_static(fn__hlds__goal_util__proc_body_is_leaf_cases_1_0)
MR_def_extern_entry(hlds__goal_util__goal_is_branched_1_0)
MR_def_extern_entry(hlds__goal_util__goal_size_2_0)
MR_def_extern_entry(hlds__goal_util__goals_size_2_0)
MR_decl_static(hlds__goal_util__cases_size_2_0)
MR_decl_static(hlds__goal_util__goal_expr_size_2_0)
MR_decl_static(hlds__goal_util__goal_expr_size_shorthand_2_0)
MR_def_extern_entry(hlds__goal_util__clause_list_size_2_0)
MR_def_extern_entry(hlds__goal_util__goal_calls_2_0)
MR_def_extern_entry(hlds__goal_util__goal_calls_2_1)
MR_decl_static(hlds__goal_util__goals_calls_2_0)
MR_decl_static(hlds__goal_util__goals_calls_2_1)
MR_decl_static(hlds__goal_util__cases_calls_2_0)
MR_decl_static(hlds__goal_util__cases_calls_2_1)
MR_decl_static(hlds__goal_util__goal_expr_calls_2_0)
MR_decl_static(hlds__goal_util__goal_expr_calls_2_1)
MR_def_extern_entry(hlds__goal_util__goal_calls_pred_id_2_0)
MR_def_extern_entry(hlds__goal_util__goal_calls_pred_id_2_1)
MR_decl_static(hlds__goal_util__goals_calls_pred_id_2_0)
MR_decl_static(hlds__goal_util__goals_calls_pred_id_2_1)
MR_decl_static(hlds__goal_util__cases_calls_pred_id_2_0)
MR_decl_static(hlds__goal_util__cases_calls_pred_id_2_1)
MR_decl_static(hlds__goal_util__goal_expr_calls_pred_id_2_0)
MR_decl_static(hlds__goal_util__goal_expr_calls_pred_id_2_1)
MR_decl_static(hlds__goal_util__goal_calls_proc_in_list_2_4_0)
MR_decl_static(hlds__goal_util__goal_list_calls_proc_in_list_2_4_0)
MR_decl_static(hlds__goal_util__case_list_calls_proc_in_list_4_0)
MR_def_extern_entry(fn__hlds__goal_util__goal_calls_proc_in_list_2_0)
MR_def_extern_entry(fn__hlds__goal_util__goal_list_calls_proc_in_list_2_0)
MR_def_extern_entry(hlds__goal_util__goal_contains_reconstruction_1_0)
MR_def_extern_entry(hlds__goal_util__direct_subgoal_2_0)
MR_def_extern_entry(hlds__goal_util__goal_contains_goal_2_0)
MR_def_extern_entry(hlds__goal_util__predids_from_goal_2_0)
MR_def_extern_entry(hlds__goal_util__predids_from_goals_2_0)
MR_def_extern_entry(hlds__goal_util__pred_proc_ids_from_goal_2_0)
MR_def_extern_entry(hlds__goal_util__case_to_disjunct_11_0)
MR_def_extern_entry(hlds__goal_util__switch_to_disjunction_10_0)
MR_decl_static(hlds__goal_util__compute_disjunct_goal_info_4_0)
MR_def_extern_entry(hlds__goal_util__if_then_else_to_disjunction_5_0)
MR_def_extern_entry(hlds__goal_util__flatten_conj_2_0)
MR_def_extern_entry(hlds__goal_util__create_conj_4_0)
MR_def_extern_entry(hlds__goal_util__reordering_maintains_termination_old_4_0)
MR_def_extern_entry(hlds__goal_util__can_reorder_goals_old_7_0)
MR_def_extern_entry(hlds__goal_util__reordering_maintains_termination_8_0)
MR_def_extern_entry(hlds__goal_util__can_reorder_goals_11_0)
MR_def_extern_entry(hlds__goal_util__generate_simple_call_12_0)
MR_def_extern_entry(hlds__goal_util__generate_foreign_proc_16_0)
MR_def_extern_entry(hlds__goal_util__generate_cast_with_insts_7_0)
MR_def_extern_entry(hlds__goal_util__generate_cast_5_0)
MR_def_extern_entry(hlds__goal_util__foreign_code_uses_variable_2_0)
MR_def_extern_entry(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0)
MR_decl_static(hlds__goal_util__attach_features_to_case_3_0)
MR_decl_static(hlds__goal_util__clause_size_increment_3_0)
MR_decl_static(fn__hlds__goal_util__maybe_strip_equality_pretest_case_1_0)
MR_def_extern_entry(__Unify___hlds__goal_util__is_leaf_0_0)
MR_def_extern_entry(__Compare___hlds__goal_util__is_leaf_0_0)
MR_decl_static(fn__hlds__goal_util__IntroducedFrom__func__extra_nonlocal_typeinfos__659__1_2_0)
MR_decl_static(hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__669__1_3_0)
MR_decl_static(hlds__goal_util__IntroducedFrom__pred__case_to_disjunct__1123__1_2_0)
MR_decl_static(hlds__goal_util__IntroducedFrom__pred__generate_simple_call__1483__1_2_0)
MR_decl_static(hlds__goal_util__IntroducedFrom__pred__generate_foreign_proc__1516__1_2_0)
MR_def_extern_entry(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_111_110_116_97_105_110_115_95_114_101_99_111_110_115_116_114_117_99_116_105_111_110_95_95_91_49_93_95_48_1_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_goal_feature_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
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
MR_tbmkword(0, 0),
MR_tbmkword(0, 0)
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
MR_CTOR0_ADDR(hlds__hlds_goal, goal_feature)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_COMMON(0,6)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__goal_util__goal_vars_2_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_foreign_arg_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__goal_util__goal_vars_2_3_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__goal_util__predids_from_goal_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__goal_util__predids_from_goals_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__goal_util__pred_proc_ids_from_goal_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__goal_util__case_to_disjunct_11_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_uni_mode_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__goal_util__generate_simple_call_12_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_purity_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__goal_util__generate_foreign_proc_16_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__goal_util__generate_foreign_proc_16_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__goal_util__generate_foreign_proc_16_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__fn__hlds__goal_util__maybe_strip_equality_pretest_1_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__hlds__goal_util__maybe_strip_equality_pretest_1_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__fn__hlds__goal_util__maybe_strip_equality_pretest_1_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_case_0;
static const struct mercury_type_1 mercury_common_1[13] =
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__goal_util__goal_vars_2_3_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg),
MR_COMMON(0,2)
},
{
(MR_Word *) &mercury_data__closure_layout__hlds__goal_util__goal_vars_2_3_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg),
MR_COMMON(0,2)
},
{
(MR_Word *) &mercury_data__closure_layout__hlds__goal_util__predids_from_goal_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__hlds__goal_util__predids_from_goals_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__hlds__goal_util__pred_proc_ids_from_goal_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id)
},
{
(MR_Word *) &mercury_data__closure_layout__hlds__goal_util__case_to_disjunct_11_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst),
MR_CTOR0_ADDR(hlds__hlds_goal, uni_mode)
},
{
(MR_Word *) &mercury_data__closure_layout__hlds__goal_util__generate_simple_call_12_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, purity),
MR_CTOR0_ADDR(parse_tree__prog_data, purity)
},
{
(MR_Word *) &mercury_data__closure_layout__hlds__goal_util__generate_foreign_proc_16_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg),
MR_COMMON(0,2)
},
{
(MR_Word *) &mercury_data__closure_layout__hlds__goal_util__generate_foreign_proc_16_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg),
MR_COMMON(0,2)
},
{
(MR_Word *) &mercury_data__closure_layout__hlds__goal_util__generate_foreign_proc_16_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, purity),
MR_CTOR0_ADDR(parse_tree__prog_data, purity)
},
{
(MR_Word *) &mercury_data__closure_layout__fn__hlds__goal_util__maybe_strip_equality_pretest_1_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
},
{
(MR_Word *) &mercury_data__closure_layout__fn__hlds__goal_util__maybe_strip_equality_pretest_1_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
},
{
(MR_Word *) &mercury_data__closure_layout__fn__hlds__goal_util__maybe_strip_equality_pretest_1_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, case),
MR_CTOR0_ADDR(hlds__hlds_goal, case)
},
};

MR_decl_entry(fn__hlds__hlds_goal__foreign_arg_var_1_0);
MR_decl_entry(hlds__hlds_goal__goal_info_add_feature_3_0);
static const struct mercury_type_2 mercury_common_2[15] =
{
{
MR_COMMON(1,0),
MR_ENTRY_AP(fn__hlds__hlds_goal__foreign_arg_var_1_0),
0
},
{
MR_COMMON(1,1),
MR_ENTRY_AP(fn__hlds__hlds_goal__foreign_arg_var_1_0),
0
},
{
MR_COMMON(3,0),
MR_ENTRY_AP(hlds__hlds_goal__goal_info_add_feature_3_0),
0
},
{
MR_COMMON(3,4),
MR_ENTRY_AP(hlds__hlds_goal__goal_info_add_feature_3_0),
0
},
{
MR_COMMON(3,5),
MR_ENTRY_AP(hlds__hlds_goal__goal_info_add_feature_3_0),
0
},
{
MR_COMMON(3,8),
MR_ENTRY_AP(hlds__goal_util__clause_size_increment_3_0),
0
},
{
MR_COMMON(1,5),
MR_ENTRY_AP(hlds__goal_util__IntroducedFrom__pred__case_to_disjunct__1123__1_2_0),
0
},
{
MR_COMMON(3,9),
MR_ENTRY_AP(hlds__hlds_goal__goal_info_add_feature_3_0),
0
},
{
MR_COMMON(1,7),
MR_ENTRY_AP(fn__hlds__hlds_goal__foreign_arg_var_1_0),
0
},
{
MR_COMMON(1,8),
MR_ENTRY_AP(fn__hlds__hlds_goal__foreign_arg_var_1_0),
0
},
{
MR_COMMON(3,10),
MR_ENTRY_AP(hlds__hlds_goal__goal_info_add_feature_3_0),
0
},
{
MR_COMMON(1,10),
MR_ENTRY_AP(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0),
0
},
{
MR_COMMON(1,11),
MR_ENTRY_AP(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0),
0
},
{
MR_COMMON(1,12),
MR_ENTRY_AP(fn__hlds__goal_util__maybe_strip_equality_pretest_case_1_0),
0
},
{
MR_COMMON(3,11),
MR_ENTRY_AP(hlds__hlds_goal__goal_info_add_feature_3_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__goal_util__attach_features_to_all_goals_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_goal_feature_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__goal_util__attach_features_goal_expr_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__goal_util__attach_features_goal_expr_3_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__goal_util__attach_features_goal_expr_3_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__goal_util__attach_features_goal_expr_3_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__goal_util__attach_features_goal_expr_3_0_5;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__goal_util__extra_nonlocal_typeinfos_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__goal_util__extra_nonlocal_typeinfos_5_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__goal_util__clause_list_size_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_clauses__type_ctor_info_clause_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__goal_util__generate_simple_call_12_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__goal_util__generate_foreign_proc_16_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__goal_util__attach_features_to_case_3_0_1;
static const struct mercury_type_3 mercury_common_3[12] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__goal_util__attach_features_to_all_goals_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_goal, goal_feature),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal_info),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__goal_util__attach_features_goal_expr_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,3),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__goal_util__attach_features_goal_expr_3_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,3),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__goal_util__attach_features_goal_expr_3_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,3),
MR_CTOR0_ADDR(hlds__hlds_goal, case),
MR_CTOR0_ADDR(hlds__hlds_goal, case)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__goal_util__attach_features_goal_expr_3_0_4,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_goal, goal_feature),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal_info),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__goal_util__attach_features_goal_expr_3_0_5,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_goal, goal_feature),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal_info),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__goal_util__extra_nonlocal_typeinfos_5_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_rtti, rtti_varmaps),
MR_COMMON(0,5),
MR_COMMON(0,2)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__goal_util__extra_nonlocal_typeinfos_5_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_rtti, rtti_varmaps),
MR_COMMON(0,7),
MR_COMMON(0,2)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__goal_util__clause_list_size_2_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_clauses, clause),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__goal_util__generate_simple_call_12_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_goal, goal_feature),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal_info),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__goal_util__generate_foreign_proc_16_0_4,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_goal, goal_feature),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal_info),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__goal_util__attach_features_to_case_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_goal, goal_feature),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal_info),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal_info)
}
},
};

static const struct mercury_type_4 mercury_common_4[1] =
{
{
{
0,
1
}
},
};

static const MR_EnumFunctorDesc mercury_data_hlds__goal_util__enum_functor_desc_is_leaf_0_0 = {
	"is_leaf",
	0
};

static const MR_EnumFunctorDesc mercury_data_hlds__goal_util__enum_functor_desc_is_leaf_0_1 = {
	"is_not_leaf",
	1
};

const MR_EnumFunctorDescPtr mercury_data_hlds__goal_util__enum_value_ordered_is_leaf_0[] = {
	&mercury_data_hlds__goal_util__enum_functor_desc_is_leaf_0_0,
	&mercury_data_hlds__goal_util__enum_functor_desc_is_leaf_0_1
};

const MR_EnumFunctorDescPtr mercury_data_hlds__goal_util__enum_name_ordered_is_leaf_0[] = {
	&mercury_data_hlds__goal_util__enum_functor_desc_is_leaf_0_0,
	&mercury_data_hlds__goal_util__enum_functor_desc_is_leaf_0_1
};

const MR_Integer mercury_data_hlds__goal_util__functor_number_map_is_leaf_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_hlds__goal_util__type_ctor_info_is_leaf_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__goal_util__is_leaf_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__goal_util__is_leaf_0_0)),
	"hlds.goal_util",
	"is_leaf",
	{ (void *)mercury_data_hlds__goal_util__enum_name_ordered_is_leaf_0 },
	{ (void *)mercury_data_hlds__goal_util__enum_value_ordered_is_leaf_0 },
	2,
	4,
	mercury_data_hlds__goal_util__functor_number_map_is_leaf_0
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__goal_util__goal_vars_2_3_0_1 = {
{
MR_FUNCTION,
"hlds.hlds_goal",
"hlds.hlds_goal",
"foreign_arg_var",
2,
0
},
"hlds.goal_util",
"goal_util.m",
532,
"d10;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__goal_util__goal_vars_2_3_0_2 = {
{
MR_FUNCTION,
"hlds.hlds_goal",
"hlds.hlds_goal",
"foreign_arg_var",
2,
0
},
"hlds.goal_util",
"goal_util.m",
533,
"d10;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__goal_util__attach_features_to_all_goals_3_0_1 = {
{
MR_PREDICATE,
"hlds.hlds_goal",
"hlds.hlds_goal",
"goal_info_add_feature",
3,
0
},
"hlds.goal_util",
"goal_util.m",
584,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__goal_util__attach_features_goal_expr_3_0_1 = {
{
MR_PREDICATE,
"hlds.goal_util",
"hlds.goal_util",
"attach_features_to_all_goals",
3,
0
},
"hlds.goal_util",
"goal_util.m",
599,
"d1;c4;d1;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__goal_util__attach_features_goal_expr_3_0_2 = {
{
MR_PREDICATE,
"hlds.goal_util",
"hlds.goal_util",
"attach_features_to_all_goals",
3,
0
},
"hlds.goal_util",
"goal_util.m",
603,
"d1;c4;d2;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__goal_util__attach_features_goal_expr_3_0_3 = {
{
MR_PREDICATE,
"hlds.goal_util",
"hlds.goal_util",
"attach_features_to_case",
3,
0
},
"hlds.goal_util",
"goal_util.m",
607,
"d1;c4;d3;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__goal_util__attach_features_goal_expr_3_0_4 = {
{
MR_PREDICATE,
"hlds.hlds_goal",
"hlds.hlds_goal",
"goal_info_add_feature",
3,
0
},
"hlds.goal_util",
"goal_util.m",
584,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__goal_util__attach_features_goal_expr_3_0_5 = {
{
MR_PREDICATE,
"hlds.hlds_goal",
"hlds.hlds_goal",
"goal_info_add_feature",
3,
0
},
"hlds.goal_util",
"goal_util.m",
584,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__goal_util__extra_nonlocal_typeinfos_5_0_1 = {
{
MR_FUNCTION,
"hlds.goal_util",
"hlds.goal_util",
"lambda_goal_util_m_659",
3,
0
},
"hlds.goal_util",
"goal_util.m",
659,
"d1;c11;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__goal_util__extra_nonlocal_typeinfos_5_0_2 = {
{
MR_PREDICATE,
"hlds.goal_util",
"hlds.goal_util",
"lambda_goal_util_m_669",
3,
0
},
"hlds.goal_util",
"goal_util.m",
669,
"d1;c13;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__goal_util__clause_list_size_2_0_1 = {
{
MR_PREDICATE,
"hlds.goal_util",
"hlds.goal_util",
"clause_size_increment",
3,
0
},
"hlds.goal_util",
"goal_util.m",
790,
"d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__goal_util__predids_from_goal_2_0_1 = {
{
MR_PREDICATE,
"hlds.goal_util",
"hlds.goal_util",
"goal_calls_pred_id",
2,
1
},
"hlds.goal_util",
"goal_util.m",
1554,
"d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__goal_util__predids_from_goals_2_0_1 = {
{
MR_PREDICATE,
"hlds.goal_util",
"hlds.goal_util",
"goal_calls_pred_id",
2,
1
},
"hlds.goal_util",
"goal_util.m",
1554,
"d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__goal_util__pred_proc_ids_from_goal_2_0_1 = {
{
MR_PREDICATE,
"hlds.goal_util",
"hlds.goal_util",
"goal_calls",
2,
1
},
"hlds.goal_util",
"goal_util.m",
1558,
"d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__goal_util__case_to_disjunct_11_0_1 = {
{
MR_PREDICATE,
"hlds.goal_util",
"hlds.goal_util",
"lambda_goal_util_m_1123",
2,
0
},
"hlds.goal_util",
"goal_util.m",
1123,
"d1;c19;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__goal_util__generate_simple_call_12_0_1 = {
{
MR_PREDICATE,
"hlds.goal_util",
"hlds.goal_util",
"lambda_goal_util_m_1483",
2,
0
},
"hlds.goal_util",
"goal_util.m",
1483,
"d1;c26;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__goal_util__generate_simple_call_12_0_2 = {
{
MR_PREDICATE,
"hlds.hlds_goal",
"hlds.hlds_goal",
"goal_info_add_feature",
3,
0
},
"hlds.goal_util",
"goal_util.m",
1487,
"d1;c31;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__goal_util__generate_foreign_proc_16_0_1 = {
{
MR_FUNCTION,
"hlds.hlds_goal",
"hlds.hlds_goal",
"foreign_arg_var",
2,
0
},
"hlds.goal_util",
"goal_util.m",
1499,
"d1;c23;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__goal_util__generate_foreign_proc_16_0_2 = {
{
MR_FUNCTION,
"hlds.hlds_goal",
"hlds.hlds_goal",
"foreign_arg_var",
2,
0
},
"hlds.goal_util",
"goal_util.m",
1500,
"d1;c25;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__goal_util__generate_foreign_proc_16_0_3 = {
{
MR_PREDICATE,
"hlds.goal_util",
"hlds.goal_util",
"lambda_goal_util_m_1516",
2,
0
},
"hlds.goal_util",
"goal_util.m",
1516,
"d1;c32;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__goal_util__generate_foreign_proc_16_0_4 = {
{
MR_PREDICATE,
"hlds.hlds_goal",
"hlds.hlds_goal",
"goal_info_add_feature",
3,
0
},
"hlds.goal_util",
"goal_util.m",
1520,
"d1;c37;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__hlds__goal_util__maybe_strip_equality_pretest_1_0_1 = {
{
MR_FUNCTION,
"hlds.goal_util",
"hlds.goal_util",
"maybe_strip_equality_pretest",
2,
0
},
"hlds.goal_util",
"goal_util.m",
1591,
"d1;c4;d2;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__hlds__goal_util__maybe_strip_equality_pretest_1_0_2 = {
{
MR_FUNCTION,
"hlds.goal_util",
"hlds.goal_util",
"maybe_strip_equality_pretest",
2,
0
},
"hlds.goal_util",
"goal_util.m",
1596,
"d1;c4;d3;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__hlds__goal_util__maybe_strip_equality_pretest_1_0_3 = {
{
MR_FUNCTION,
"hlds.goal_util",
"hlds.goal_util",
"maybe_strip_equality_pretest_case",
2,
0
},
"hlds.goal_util",
"goal_util.m",
1601,
"d1;c4;d4;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__goal_util__attach_features_to_case_3_0_1 = {
{
MR_PREDICATE,
"hlds.hlds_goal",
"hlds.hlds_goal",
"goal_info_add_feature",
3,
0
},
"hlds.goal_util",
"goal_util.m",
584,
"d1;c6;"
};

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0);
MR_decl_entry(hlds__instmap__apply_instmap_delta_3_0);

MR_BEGIN_MODULE(hlds__goal_util_module0)
	MR_init_entry1(hlds__goal_util__update_instmap_3_0);
	MR_init_label1(hlds__goal_util__update_instmap_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_util__update_instmap_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		hlds__goal_util__update_instmap_3_0_i2);
MR_def_label(hlds__goal_util__update_instmap_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(hlds__instmap__apply_instmap_delta_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module1)
	MR_init_entry1(fn__hlds__goal_util__this_file_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__goal_util__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("goal_util.m", 11);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(svvarset__new_var_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);
MR_decl_entry(hlds__instmap__instmap_delta_search_var_3_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(hlds__instmap__instmap_delta_from_assoc_list_2_0);
MR_decl_entry(fn__term__context_init_0_0);
MR_decl_entry(hlds__hlds_goal__goal_info_init_6_0);

MR_BEGIN_MODULE(hlds__goal_util_module2)
	MR_init_entry1(hlds__goal_util__create_renaming_2_12_0);
	MR_init_label8(hlds__goal_util__create_renaming_2_12_0,27,3,4,5,6,9,7,11)
	MR_init_label6(hlds__goal_util__create_renaming_2_12_0,13,14,15,16,17,18)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__goal_util__create_renaming_2_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
MR_def_label(hlds__goal_util__create_renaming_2_12_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__goal_util__create_renaming_2_12_0_i3);
	}
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	MR_decr_sp_and_return(15);
MR_def_label(hlds__goal_util__create_renaming_2_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r7;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(6) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(7) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(svvarset__new_var_3_0,
		hlds__goal_util__create_renaming_2_12_0_i4);
MR_def_label(hlds__goal_util__create_renaming_2_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(11) = MR_r2;
	MR_sv(13) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(14) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(14);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(6);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__goal_util__create_renaming_2_12_0_i5);
MR_def_label(hlds__goal_util__create_renaming_2_12_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(14);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(8);
	MR_r6 = MR_sv(2);
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		hlds__goal_util__create_renaming_2_12_0_i6);
MR_def_label(hlds__goal_util__create_renaming_2_12_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_search_var_3_0,
		hlds__goal_util__create_renaming_2_12_0_i9);
MR_def_label(hlds__goal_util__create_renaming_2_12_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__goal_util__create_renaming_2_12_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10, MR_tempr11;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tempr9 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = MR_tempr9;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr9;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr9;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r6 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 2, (MR_Integer) 2);
	MR_r7 = MR_tempr4;
	MR_tempr10 = MR_sv(6);
	MR_tfield(2, MR_tempr4, 0) = MR_tempr10;
	MR_tempr11 = MR_sv(8);
	MR_tfield(2, MR_tempr4, 1) = MR_tempr11;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 1);
	MR_r8 = MR_tempr5;
	MR_tfield(0, MR_tempr5, 0) = MR_tempr11;
	MR_tag_alloc_heap(MR_tempr6, 0, (MR_Integer) 5);
	MR_sv(9) = MR_tempr6;
	MR_tfield(0, MR_tempr6, 0) = MR_tempr10;
	MR_tfield(0, MR_tempr6, 1) = MR_tempr5;
	MR_tfield(0, MR_tempr6, 2) = MR_tempr3;
	MR_tfield(0, MR_tempr6, 3) = MR_tempr4;
	MR_tfield(0, MR_tempr6, 4) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr7;
	MR_tfield(1, MR_tempr7, 0) = MR_tempr11;
	MR_tfield(1, MR_tempr7, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr8, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr8;
	MR_tfield(1, MR_tempr8, 0) = MR_tempr10;
	MR_tfield(1, MR_tempr8, 1) = MR_tempr7;
	MR_sv(2) = MR_tempr9;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(14);
	MR_GOTO_LAB(hlds__goal_util__create_renaming_2_12_0_i13);
	}
MR_def_label(hlds__goal_util__create_renaming_2_12_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(12);
	}
	MR_np_call_localret_ent(fn__hlds__goal_util__this_file_0_0,
		hlds__goal_util__create_renaming_2_12_0_i11);
MR_def_label(hlds__goal_util__create_renaming_2_12_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("create_renaming_2: cannot get new inst", 38);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		hlds__goal_util__create_renaming_2_12_0_i13);
MR_def_label(hlds__goal_util__create_renaming_2_12_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_sv(14) = MR_r2;
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		hlds__goal_util__create_renaming_2_12_0_i14);
MR_def_label(hlds__goal_util__create_renaming_2_12_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_from_assoc_list_2_0,
		hlds__goal_util__create_renaming_2_12_0_i15);
MR_def_label(hlds__goal_util__create_renaming_2_12_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		hlds__goal_util__create_renaming_2_12_0_i16);
MR_def_label(hlds__goal_util__create_renaming_2_12_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(10);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 0;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_6_0,
		hlds__goal_util__create_renaming_2_12_0_i17);
MR_def_label(hlds__goal_util__create_renaming_2_12_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(2) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(3);
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_r2;
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(8);
	MR_r6 = MR_sv(5);
	}
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		hlds__goal_util__create_renaming_2_12_0_i18);
MR_def_label(hlds__goal_util__create_renaming_2_12_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_r7 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(12);
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(15);
	MR_GOTO_LAB(hlds__goal_util__create_renaming_2_12_0_i27);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(list__reverse_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

MR_BEGIN_MODULE(hlds__goal_util_module3)
	MR_init_entry1(hlds__goal_util__create_renaming_9_0);
	MR_init_label4(hlds__goal_util__create_renaming_9_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_util__create_renaming_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__map__init_0_0,
		hlds__goal_util__create_renaming_9_0_i2);
MR_def_label(hlds__goal_util__create_renaming_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(hlds__goal_util__create_renaming_2_12_0,
		hlds__goal_util__create_renaming_9_0_i3);
MR_def_label(hlds__goal_util__create_renaming_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r5;
	MR_sv(1) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(list__reverse_2_0,
		hlds__goal_util__create_renaming_9_0_i4);
MR_def_label(hlds__goal_util__create_renaming_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_np_call_localret_ent(list__reverse_2_0,
		hlds__goal_util__create_renaming_9_0_i5);
MR_def_label(hlds__goal_util__create_renaming_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__contains_2_0);
MR_decl_entry(varset__search_name_3_0);
MR_decl_entry(svvarset__name_var_4_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(hlds__goal_util_module4)
	MR_init_entry1(hlds__goal_util__create_variables_9_0);
	MR_init_label8(hlds__goal_util__create_variables_9_0,38,3,5,4,7,9,11,8)
	MR_init_label5(hlds__goal_util__create_variables_9_0,12,13,15,17,14)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_util__create_variables_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(hlds__goal_util__create_variables_9_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__goal_util__create_variables_9_0_i3);
	}
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_r3 = MR_r6;
	MR_decr_sp_and_return(11);
MR_def_label(hlds__goal_util__create_variables_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r1;
	MR_sv(7) = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_tempr3 = MR_r6;
	MR_sv(5) = MR_tempr3;
	MR_sv(6) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr3;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__contains_2_0,
		hlds__goal_util__create_variables_9_0_i5);
MR_def_label(hlds__goal_util__create_variables_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__goal_util__create_variables_9_0_i4);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r1 = MR_sv(7);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(hlds__goal_util__create_variables_9_0_i38);
MR_def_label(hlds__goal_util__create_variables_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(svvarset__new_var_3_0,
		hlds__goal_util__create_variables_9_0_i7);
MR_def_label(hlds__goal_util__create_variables_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(varset__search_name_3_0,
		hlds__goal_util__create_variables_9_0_i9);
MR_def_label(hlds__goal_util__create_variables_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__goal_util__create_variables_9_0_i8);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(8);
	MR_np_call_localret_ent(svvarset__name_var_4_0,
		hlds__goal_util__create_variables_9_0_i11);
MR_def_label(hlds__goal_util__create_variables_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(3);
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_GOTO_LAB(hlds__goal_util__create_variables_9_0_i12);
MR_def_label(hlds__goal_util__create_variables_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
MR_def_label(hlds__goal_util__create_variables_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(9) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(10) = MR_tempr1;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		hlds__goal_util__create_variables_9_0_i13);
MR_def_label(hlds__goal_util__create_variables_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(6);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__goal_util__create_variables_9_0_i15);
MR_def_label(hlds__goal_util__create_variables_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__goal_util__create_variables_9_0_i14);
	}
	MR_r1 = MR_sv(9);
	MR_r5 = MR_r2;
	MR_r2 = MR_sv(10);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		hlds__goal_util__create_variables_9_0_i17);
MR_def_label(hlds__goal_util__create_variables_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r6 = MR_sv(5);
	MR_r4 = MR_sv(8);
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(hlds__goal_util__create_variables_9_0_i38);
MR_def_label(hlds__goal_util__create_variables_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r1 = MR_sv(7);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r4 = MR_sv(8);
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(hlds__goal_util__create_variables_9_0_i38);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module5)
	MR_init_entry1(hlds__goal_util__generic_call_vars_2_0);
	MR_init_label2(hlds__goal_util__generic_call_vars_2_0,5,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_util__generic_call_vars_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(hlds__goal_util__generic_call_vars_2_0_i5) MR_AND
		MR_LABEL_AP(hlds__goal_util__generic_call_vars_2_0_i5) MR_AND
		MR_LABEL_AP(hlds__goal_util__generic_call_vars_2_0_i7) MR_AND
		MR_LABEL_AP(hlds__goal_util__generic_call_vars_2_0_i7));
MR_def_label(hlds__goal_util__generic_call_vars_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_const_mask_field(MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(hlds__goal_util__generic_call_vars_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module6)
	MR_init_entry1(hlds__goal_util__goals_goal_vars_3_0);
	MR_init_label3(hlds__goal_util__goals_goal_vars_3_0,10,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_util__goals_goal_vars_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(hlds__goal_util__goals_goal_vars_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__goal_util__goals_goal_vars_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(hlds__goal_util__goals_goal_vars_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
	MR_np_call_localret_ent(hlds__goal_util__goal_vars_2_3_0,
		hlds__goal_util__goals_goal_vars_3_0_i4);
MR_def_label(hlds__goal_util__goals_goal_vars_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(hlds__goal_util__goals_goal_vars_3_0_i10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_115_118_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(__Unify___term__var_1_0);
MR_decl_entry(f_115_118_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_foreign_arg_0;
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(fn__list__append_2_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(hlds__goal_util_module7)
	MR_init_entry1(hlds__goal_util__goal_vars_2_3_0);
	MR_init_label8(hlds__goal_util__goal_vars_2_3_0,4,5,12,9,10,21,23,24)
	MR_init_label8(hlds__goal_util__goal_vars_2_3_0,25,27,28,29,30,31,33,35)
	MR_init_label8(hlds__goal_util__goal_vars_2_3_0,37,38,40,42,45,47,50,68)
	MR_init_label7(hlds__goal_util__goal_vars_2_3_0,53,54,56,57,58,59,61)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__goal_util__goal_vars_2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(hlds__goal_util__goal_vars_2_3_0_i4) MR_AND
		MR_LABEL_AP(hlds__goal_util__goal_vars_2_3_0_i21) MR_AND
		MR_LABEL_AP(hlds__goal_util__goal_vars_2_3_0_i23) MR_AND
		MR_LABEL_AP(hlds__goal_util__goal_vars_2_3_0_i27));
MR_def_label(hlds__goal_util__goal_vars_2_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(4);
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_115_118_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__goal_util__goal_vars_2_3_0_i5);
MR_def_label(hlds__goal_util__goal_vars_2_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_r3 = MR_tempr1;
	if (MR_INT_NE(MR_tag(MR_tempr1),0)) {
		MR_GOTO_LAB(hlds__goal_util__goal_vars_2_3_0_i10);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 4);
	if (MR_PTAG_TESTR(MR_tempr2,3)) {
		MR_GOTO_LAB(hlds__goal_util__goal_vars_2_3_0_i10);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_ctfield(0, MR_ctfield(3, MR_tempr2, 0), 0);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		hlds__goal_util__goal_vars_2_3_0_i12);
MR_def_label(hlds__goal_util__goal_vars_2_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__goal_util__goal_vars_2_3_0_i9);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(f_115_118_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__goal_util__goal_vars_2_3_0_i10);
MR_def_label(hlds__goal_util__goal_vars_2_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
MR_def_label(hlds__goal_util__goal_vars_2_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(hlds__goal_util__rhs_goal_vars_3_0);
MR_def_label(hlds__goal_util__goal_vars_2_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_ctfield(1, MR_tempr1, 2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(f_115_118_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
	}
MR_def_label(hlds__goal_util__goal_vars_2_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(2, MR_r1, 1);
	MR_r1 = MR_ctfield(2, MR_r1, 0);
	MR_np_call_localret_ent(hlds__goal_util__generic_call_vars_2_0,
		hlds__goal_util__goal_vars_2_3_0_i24);
MR_def_label(hlds__goal_util__goal_vars_2_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(f_115_118_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__goal_util__goal_vars_2_3_0_i25);
MR_def_label(hlds__goal_util__goal_vars_2_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(f_115_118_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_def_label(hlds__goal_util__goal_vars_2_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(hlds__goal_util__goal_vars_2_3_0_i28) MR_AND
		MR_LABEL_AP(hlds__goal_util__goal_vars_2_3_0_i33) MR_AND
		MR_LABEL_AP(hlds__goal_util__goal_vars_2_3_0_i35) MR_AND
		MR_LABEL_AP(hlds__goal_util__goal_vars_2_3_0_i37) MR_AND
		MR_LABEL_AP(hlds__goal_util__goal_vars_2_3_0_i40) MR_AND
		MR_LABEL_AP(hlds__goal_util__goal_vars_2_3_0_i42) MR_AND
		MR_LABEL_AP(hlds__goal_util__goal_vars_2_3_0_i56) MR_AND
		MR_LABEL_AP(hlds__goal_util__goal_vars_2_3_0_i61));
MR_def_label(hlds__goal_util__goal_vars_2_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(2) = MR_ctfield(3, MR_tempr2, 5);
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr1 = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r4 = MR_ctfield(3, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		hlds__goal_util__goal_vars_2_3_0_i29);
MR_def_label(hlds__goal_util__goal_vars_2_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_np_call_localret_ent(fn__list__map_2_0,
		hlds__goal_util__goal_vars_2_3_0_i30);
MR_def_label(hlds__goal_util__goal_vars_2_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__list__append_2_0,
		hlds__goal_util__goal_vars_2_3_0_i31);
MR_def_label(hlds__goal_util__goal_vars_2_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(f_115_118_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_def_label(hlds__goal_util__goal_vars_2_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(hlds__goal_util__goals_goal_vars_3_0);
MR_def_label(hlds__goal_util__goal_vars_2_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(hlds__goal_util__goals_goal_vars_3_0);
MR_def_label(hlds__goal_util__goal_vars_2_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(1) = MR_ctfield(3, MR_tempr2, 3);
	MR_tempr1 = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(f_115_118_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__goal_util__goal_vars_2_3_0_i38);
MR_def_label(hlds__goal_util__goal_vars_2_3_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(hlds__goal_util__cases_goal_vars_3_0);
MR_def_label(hlds__goal_util__goal_vars_2_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_ctfield(3, MR_r1, 1), 0);
	MR_succip_word = MR_sv(6);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(hlds__goal_util__goal_vars_2_3_0_i4) MR_AND
		MR_LABEL_AP(hlds__goal_util__goal_vars_2_3_0_i21) MR_AND
		MR_LABEL_AP(hlds__goal_util__goal_vars_2_3_0_i23) MR_AND
		MR_LABEL_AP(hlds__goal_util__goal_vars_2_3_0_i27));
MR_def_label(hlds__goal_util__goal_vars_2_3_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(3, MR_r1, 1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(hlds__goal_util__goal_vars_2_3_0_i45) MR_AND
		MR_LABEL_AP(hlds__goal_util__goal_vars_2_3_0_i47) MR_AND
		MR_LABEL_AP(hlds__goal_util__goal_vars_2_3_0_i68) MR_AND
		MR_LABEL_AP(hlds__goal_util__goal_vars_2_3_0_i50));
MR_def_label(hlds__goal_util__goal_vars_2_3_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(0, MR_ctfield(3, MR_r1, 2), 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_ctfield(0, MR_r3, 0);
	MR_np_call_localret_ent(f_115_118_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__goal_util__goal_vars_2_3_0_i54);
MR_def_label(hlds__goal_util__goal_vars_2_3_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(0, MR_ctfield(3, MR_r1, 2), 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_ctfield(1, MR_r3, 0);
	MR_np_call_localret_ent(f_115_118_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__goal_util__goal_vars_2_3_0_i54);
MR_def_label(hlds__goal_util__goal_vars_2_3_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r3, 0);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(hlds__goal_util__goal_vars_2_3_0_i68);
	}
	if (MR_INT_EQ(MR_tempr1,1)) {
		MR_GOTO_LAB(hlds__goal_util__goal_vars_2_3_0_i68);
	}
	if (MR_INT_EQ(MR_tempr1,2)) {
		MR_GOTO_LAB(hlds__goal_util__goal_vars_2_3_0_i53);
	}
	}
MR_def_label(hlds__goal_util__goal_vars_2_3_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_ctfield(3, MR_r1, 2), 0);
	MR_succip_word = MR_sv(6);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(hlds__goal_util__goal_vars_2_3_0_i4) MR_AND
		MR_LABEL_AP(hlds__goal_util__goal_vars_2_3_0_i21) MR_AND
		MR_LABEL_AP(hlds__goal_util__goal_vars_2_3_0_i23) MR_AND
		MR_LABEL_AP(hlds__goal_util__goal_vars_2_3_0_i27));
MR_def_label(hlds__goal_util__goal_vars_2_3_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(0, MR_ctfield(3, MR_r1, 2), 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r4 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__goal_util__goal_vars_2_3_0_i54);
MR_def_label(hlds__goal_util__goal_vars_2_3_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(hlds__goal_util__goal_vars_2_3_0_i4) MR_AND
		MR_LABEL_AP(hlds__goal_util__goal_vars_2_3_0_i21) MR_AND
		MR_LABEL_AP(hlds__goal_util__goal_vars_2_3_0_i23) MR_AND
		MR_LABEL_AP(hlds__goal_util__goal_vars_2_3_0_i27));
MR_def_label(hlds__goal_util__goal_vars_2_3_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(1) = MR_ctfield(3, MR_tempr2, 2);
	MR_sv(2) = MR_ctfield(3, MR_tempr2, 3);
	MR_sv(3) = MR_ctfield(3, MR_tempr2, 4);
	MR_tempr1 = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r4 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__goal_util__goal_vars_2_3_0_i57);
MR_def_label(hlds__goal_util__goal_vars_2_3_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(1), 0);
	MR_np_localcall_lab(hlds__goal_util__goal_vars_2_3_0,
		hlds__goal_util__goal_vars_2_3_0_i58);
MR_def_label(hlds__goal_util__goal_vars_2_3_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(2), 0);
	MR_np_localcall_lab(hlds__goal_util__goal_vars_2_3_0,
		hlds__goal_util__goal_vars_2_3_0_i59);
MR_def_label(hlds__goal_util__goal_vars_2_3_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(3), 0);
	MR_succip_word = MR_sv(6);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(hlds__goal_util__goal_vars_2_3_0_i4) MR_AND
		MR_LABEL_AP(hlds__goal_util__goal_vars_2_3_0_i21) MR_AND
		MR_LABEL_AP(hlds__goal_util__goal_vars_2_3_0_i23) MR_AND
		MR_LABEL_AP(hlds__goal_util__goal_vars_2_3_0_i27));
MR_def_label(hlds__goal_util__goal_vars_2_3_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(hlds__goal_util__goal_vars_2_shorthand_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module8)
	MR_init_entry1(hlds__goal_util__goal_vars_2_shorthand_3_0);
	MR_init_label1(hlds__goal_util__goal_vars_2_shorthand_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__goal_util__goal_vars_2_shorthand_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_ctfield(0, MR_r1, 0), 0);
	MR_np_call_localret_ent(hlds__goal_util__goal_vars_2_3_0,
		hlds__goal_util__goal_vars_2_shorthand_3_0_i2);
MR_def_label(hlds__goal_util__goal_vars_2_shorthand_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(1), 0);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(hlds__goal_util__goal_vars_2_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module9)
	MR_init_entry1(hlds__goal_util__cases_goal_vars_3_0);
	MR_init_label3(hlds__goal_util__cases_goal_vars_3_0,10,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__goal_util__cases_goal_vars_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(hlds__goal_util__cases_goal_vars_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__goal_util__cases_goal_vars_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(hlds__goal_util__cases_goal_vars_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 1), 0);
	MR_np_call_localret_ent(hlds__goal_util__goal_vars_2_3_0,
		hlds__goal_util__cases_goal_vars_3_0_i4);
MR_def_label(hlds__goal_util__cases_goal_vars_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(hlds__goal_util__cases_goal_vars_3_0_i10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module10)
	MR_init_entry1(hlds__goal_util__rhs_goal_vars_3_0);
	MR_init_label4(hlds__goal_util__rhs_goal_vars_3_0,24,7,8,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__goal_util__rhs_goal_vars_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_tag(MR_tempr2);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(hlds__goal_util__rhs_goal_vars_3_0_i4);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(hlds__goal_util__rhs_goal_vars_3_0_i24);
	}
	MR_tempr1 = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	MR_np_tailcall_ent(f_115_118_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
	}
MR_def_label(hlds__goal_util__rhs_goal_vars_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(1) = MR_ctfield(2, MR_tempr2, 4);
	MR_sv(2) = MR_ctfield(2, MR_tempr2, 7);
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr1 = MR_tempr2;
	MR_r1 = MR_sv(3);
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_ctfield(2, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(f_115_118_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__goal_util__rhs_goal_vars_3_0_i7);
MR_def_label(hlds__goal_util__rhs_goal_vars_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(f_115_118_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__goal_util__rhs_goal_vars_3_0_i8);
MR_def_label(hlds__goal_util__rhs_goal_vars_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(hlds__goal_util__goal_vars_2_3_0);
MR_def_label(hlds__goal_util__rhs_goal_vars_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_ctfield(1, MR_tempr1, 2);
	MR_np_tailcall_ent(f_115_118_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__set__init_0_0);

MR_BEGIN_MODULE(hlds__goal_util_module11)
	MR_init_entry1(hlds__goal_util__goal_vars_2_0);
	MR_init_label1(hlds__goal_util__goal_vars_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_util__goal_vars_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(fn__set__init_0_0,
		hlds__goal_util__goal_vars_2_0_i2);
MR_def_label(hlds__goal_util__goal_vars_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(hlds__goal_util__goal_vars_2_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_goal_feature_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_info_0;
MR_decl_entry(list__foldl_4_1);

MR_BEGIN_MODULE(hlds__goal_util_module12)
	MR_init_entry1(hlds__goal_util__attach_features_to_all_goals_3_0);
	MR_init_label2(hlds__goal_util__attach_features_to_all_goals_3_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_util__attach_features_to_all_goals_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(0, MR_r2, 1);
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	MR_np_call_localret_ent(hlds__goal_util__attach_features_goal_expr_3_0,
		hlds__goal_util__attach_features_to_all_goals_3_0_i2);
MR_def_label(hlds__goal_util__attach_features_to_all_goals_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, goal_feature);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal_info);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(list__foldl_4_1,
		hlds__goal_util__attach_features_to_all_goals_3_0_i3);
MR_def_label(hlds__goal_util__attach_features_to_all_goals_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__map_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_case_0;

MR_BEGIN_MODULE(hlds__goal_util_module13)
	MR_init_entry1(hlds__goal_util__attach_features_goal_expr_3_0);
	MR_init_label8(hlds__goal_util__attach_features_goal_expr_3_0,39,10,40,12,41,14,42,16)
	MR_init_label8(hlds__goal_util__attach_features_goal_expr_3_0,43,18,44,20,21,22,23,24)
	MR_init_label1(hlds__goal_util__attach_features_goal_expr_3_0,25)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__goal_util__attach_features_goal_expr_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_r2),3)) {
		MR_GOTO_LAB(hlds__goal_util__attach_features_goal_expr_3_0_i25);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r2, 0),
		MR_LABEL_AP(hlds__goal_util__attach_features_goal_expr_3_0_i25) MR_AND
		MR_LABEL_AP(hlds__goal_util__attach_features_goal_expr_3_0_i39) MR_AND
		MR_LABEL_AP(hlds__goal_util__attach_features_goal_expr_3_0_i40) MR_AND
		MR_LABEL_AP(hlds__goal_util__attach_features_goal_expr_3_0_i41) MR_AND
		MR_LABEL_AP(hlds__goal_util__attach_features_goal_expr_3_0_i42) MR_AND
		MR_LABEL_AP(hlds__goal_util__attach_features_goal_expr_3_0_i43) MR_AND
		MR_LABEL_AP(hlds__goal_util__attach_features_goal_expr_3_0_i44) MR_AND
		MR_LABEL_AP(hlds__goal_util__attach_features_goal_expr_3_0_i25));
MR_def_label(hlds__goal_util__attach_features_goal_expr_3_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__goal_util__attach_features_to_all_goals_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tempr3 = MR_r2;
	MR_sv(1) = MR_ctfield(3, MR_tempr3, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_tempr2 = MR_tempr3;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r4 = MR_ctfield(3, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(list__map_3_0,
		hlds__goal_util__attach_features_goal_expr_3_0_i10);
MR_def_label(hlds__goal_util__attach_features_goal_expr_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(hlds__goal_util__attach_features_goal_expr_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__goal_util__attach_features_to_all_goals_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r4 = MR_ctfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(list__map_3_0,
		hlds__goal_util__attach_features_goal_expr_3_0_i12);
MR_def_label(hlds__goal_util__attach_features_goal_expr_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(hlds__goal_util__attach_features_goal_expr_3_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__goal_util__attach_features_to_case_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tempr3 = MR_r2;
	MR_sv(1) = MR_ctfield(3, MR_tempr3, 1);
	MR_sv(2) = MR_ctfield(3, MR_tempr3, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	MR_tempr2 = MR_tempr3;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	MR_r4 = MR_ctfield(3, MR_tempr2, 3);
	}
	MR_np_call_localret_ent(list__map_3_0,
		hlds__goal_util__attach_features_goal_expr_3_0_i14);
MR_def_label(hlds__goal_util__attach_features_goal_expr_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(hlds__goal_util__attach_features_goal_expr_3_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_np_call_localret_ent(hlds__goal_util__attach_features_to_all_goals_3_0,
		hlds__goal_util__attach_features_goal_expr_3_0_i16);
MR_def_label(hlds__goal_util__attach_features_goal_expr_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(hlds__goal_util__attach_features_goal_expr_3_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(3, MR_r2, 1);
	MR_r2 = MR_ctfield(3, MR_r2, 2);
	MR_np_call_localret_ent(hlds__goal_util__attach_features_to_all_goals_3_0,
		hlds__goal_util__attach_features_goal_expr_3_0_i18);
MR_def_label(hlds__goal_util__attach_features_goal_expr_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(hlds__goal_util__attach_features_goal_expr_3_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_tempr2, 1);
	MR_sv(3) = MR_ctfield(3, MR_tempr2, 3);
	MR_sv(4) = MR_ctfield(3, MR_tempr2, 4);
	MR_tempr1 = MR_ctfield(3, MR_tempr2, 2);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 1);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_localcall_lab(hlds__goal_util__attach_features_goal_expr_3_0,
		hlds__goal_util__attach_features_goal_expr_3_0_i20);
MR_def_label(hlds__goal_util__attach_features_goal_expr_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, goal_feature);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal_info);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(list__foldl_4_1,
		hlds__goal_util__attach_features_goal_expr_3_0_i21);
MR_def_label(hlds__goal_util__attach_features_goal_expr_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_localcall_lab(hlds__goal_util__attach_features_goal_expr_3_0,
		hlds__goal_util__attach_features_goal_expr_3_0_i22);
MR_def_label(hlds__goal_util__attach_features_goal_expr_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, goal_feature);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal_info);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,4);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(list__foldl_4_1,
		hlds__goal_util__attach_features_goal_expr_3_0_i23);
MR_def_label(hlds__goal_util__attach_features_goal_expr_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__goal_util__attach_features_to_all_goals_3_0,
		hlds__goal_util__attach_features_goal_expr_3_0_i24);
MR_def_label(hlds__goal_util__attach_features_goal_expr_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(hlds__goal_util__attach_features_goal_expr_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__to_sorted_list_2_0);
MR_decl_entry(map__apply_to_list_3_0);
MR_decl_entry(parse_tree__prog_type__type_vars_list_2_0);
MR_decl_entry(list__append_3_1);
MR_decl_entry(fn__set__map_2_0);
MR_decl_entry(solutions__solutions_set_2_1);
MR_decl_entry(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);

MR_BEGIN_MODULE(hlds__goal_util_module14)
	MR_init_entry1(hlds__goal_util__extra_nonlocal_typeinfos_5_0);
	MR_init_label7(hlds__goal_util__extra_nonlocal_typeinfos_5_0,2,3,4,5,6,7,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_util__extra_nonlocal_typeinfos_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		hlds__goal_util__extra_nonlocal_typeinfos_5_0_i2);
MR_def_label(hlds__goal_util__extra_nonlocal_typeinfos_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__apply_to_list_3_0,
		hlds__goal_util__extra_nonlocal_typeinfos_5_0_i3);
MR_def_label(hlds__goal_util__extra_nonlocal_typeinfos_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_type__type_vars_list_2_0,
		hlds__goal_util__extra_nonlocal_typeinfos_5_0_i4);
MR_def_label(hlds__goal_util__extra_nonlocal_typeinfos_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_sv(3);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(list__append_3_1,
		hlds__goal_util__extra_nonlocal_typeinfos_5_0_i5);
MR_def_label(hlds__goal_util__extra_nonlocal_typeinfos_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		hlds__goal_util__extra_nonlocal_typeinfos_5_0_i6);
MR_def_label(hlds__goal_util__extra_nonlocal_typeinfos_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__hlds__goal_util__IntroducedFrom__func__extra_nonlocal_typeinfos__659__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__set__map_2_0,
		hlds__goal_util__extra_nonlocal_typeinfos_5_0_i7);
MR_def_label(hlds__goal_util__extra_nonlocal_typeinfos_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,7);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__669__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(solutions__solutions_set_2_1,
		hlds__goal_util__extra_nonlocal_typeinfos_5_0_i8);
MR_def_label(hlds__goal_util__extra_nonlocal_typeinfos_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module15)
	MR_init_entry1(fn__hlds__goal_util__proc_body_is_leaf_1_0);
	MR_init_label8(fn__hlds__goal_util__proc_body_is_leaf_1_0,73,4,14,16,18,20,22,24)
	MR_init_label8(fn__hlds__goal_util__proc_body_is_leaf_1_0,26,28,30,32,35,37,39,47)
	MR_init_label1(fn__hlds__goal_util__proc_body_is_leaf_1_0,36)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__goal_util__proc_body_is_leaf_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(fn__hlds__goal_util__proc_body_is_leaf_1_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(0, MR_r1, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(fn__hlds__goal_util__proc_body_is_leaf_1_0_i4) MR_AND
		MR_LABEL_AP(fn__hlds__goal_util__proc_body_is_leaf_1_0_i36) MR_AND
		MR_LABEL_AP(fn__hlds__goal_util__proc_body_is_leaf_1_0_i36) MR_AND
		MR_LABEL_AP(fn__hlds__goal_util__proc_body_is_leaf_1_0_i14));
MR_def_label(fn__hlds__goal_util__proc_body_is_leaf_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r2, 3);
	if (MR_INT_NE(MR_tag(MR_tempr1),3)) {
		MR_GOTO_LAB(fn__hlds__goal_util__proc_body_is_leaf_1_0_i47);
	}
	if (MR_INT_NE(MR_ctfield(3, MR_tempr1, 0),0)) {
		MR_GOTO_LAB(fn__hlds__goal_util__proc_body_is_leaf_1_0_i36);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
	}
MR_def_label(fn__hlds__goal_util__proc_body_is_leaf_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r2, 0),
		MR_LABEL_AP(fn__hlds__goal_util__proc_body_is_leaf_1_0_i36) MR_AND
		MR_LABEL_AP(fn__hlds__goal_util__proc_body_is_leaf_1_0_i16) MR_AND
		MR_LABEL_AP(fn__hlds__goal_util__proc_body_is_leaf_1_0_i18) MR_AND
		MR_LABEL_AP(fn__hlds__goal_util__proc_body_is_leaf_1_0_i20) MR_AND
		MR_LABEL_AP(fn__hlds__goal_util__proc_body_is_leaf_1_0_i22) MR_AND
		MR_LABEL_AP(fn__hlds__goal_util__proc_body_is_leaf_1_0_i24) MR_AND
		MR_LABEL_AP(fn__hlds__goal_util__proc_body_is_leaf_1_0_i26) MR_AND
		MR_LABEL_AP(fn__hlds__goal_util__proc_body_is_leaf_1_0_i35));
MR_def_label(fn__hlds__goal_util__proc_body_is_leaf_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r2, 2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__hlds__goal_util__proc_body_is_leaf_goals_1_0);
MR_def_label(fn__hlds__goal_util__proc_body_is_leaf_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r2, 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__hlds__goal_util__proc_body_is_leaf_goals_1_0);
MR_def_label(fn__hlds__goal_util__proc_body_is_leaf_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r2, 3);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__hlds__goal_util__proc_body_is_leaf_cases_1_0);
MR_def_label(fn__hlds__goal_util__proc_body_is_leaf_1_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r2, 1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(fn__hlds__goal_util__proc_body_is_leaf_1_0_i73);
MR_def_label(fn__hlds__goal_util__proc_body_is_leaf_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r2, 2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(fn__hlds__goal_util__proc_body_is_leaf_1_0_i73);
MR_def_label(fn__hlds__goal_util__proc_body_is_leaf_1_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 4);
	MR_r1 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_localcall_lab(fn__hlds__goal_util__proc_body_is_leaf_1_0,
		fn__hlds__goal_util__proc_body_is_leaf_1_0_i28);
MR_def_label(fn__hlds__goal_util__proc_body_is_leaf_1_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__hlds__goal_util__proc_body_is_leaf_1_0_i36);
	}
	MR_r1 = MR_sv(1);
	MR_np_localcall_lab(fn__hlds__goal_util__proc_body_is_leaf_1_0,
		fn__hlds__goal_util__proc_body_is_leaf_1_0_i30);
MR_def_label(fn__hlds__goal_util__proc_body_is_leaf_1_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__hlds__goal_util__proc_body_is_leaf_1_0_i36);
	}
	MR_r1 = MR_sv(2);
	MR_np_localcall_lab(fn__hlds__goal_util__proc_body_is_leaf_1_0,
		fn__hlds__goal_util__proc_body_is_leaf_1_0_i32);
MR_def_label(fn__hlds__goal_util__proc_body_is_leaf_1_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__hlds__goal_util__proc_body_is_leaf_1_0_i36);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(fn__hlds__goal_util__proc_body_is_leaf_1_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r2, 1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_localcall_lab(fn__hlds__goal_util__proc_body_is_leaf_1_0,
		fn__hlds__goal_util__proc_body_is_leaf_1_0_i37);
MR_def_label(fn__hlds__goal_util__proc_body_is_leaf_1_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__hlds__goal_util__proc_body_is_leaf_1_0_i36);
	}
	MR_r1 = MR_sv(1);
	MR_np_localcall_lab(fn__hlds__goal_util__proc_body_is_leaf_1_0,
		fn__hlds__goal_util__proc_body_is_leaf_1_0_i39);
MR_def_label(fn__hlds__goal_util__proc_body_is_leaf_1_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__hlds__goal_util__proc_body_is_leaf_1_0_i36);
	}
MR_def_label(fn__hlds__goal_util__proc_body_is_leaf_1_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(fn__hlds__goal_util__proc_body_is_leaf_1_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module16)
	MR_init_entry1(fn__hlds__goal_util__proc_body_is_leaf_goals_1_0);
	MR_init_label4(fn__hlds__goal_util__proc_body_is_leaf_goals_1_0,24,5,7,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__goal_util__proc_body_is_leaf_goals_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__hlds__goal_util__proc_body_is_leaf_goals_1_0_i24);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__hlds__goal_util__proc_body_is_leaf_goals_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__hlds__goal_util__proc_body_is_leaf_1_0,
		fn__hlds__goal_util__proc_body_is_leaf_goals_1_0_i5);
MR_def_label(fn__hlds__goal_util__proc_body_is_leaf_goals_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__hlds__goal_util__proc_body_is_leaf_goals_1_0_i4);
	}
	MR_r1 = MR_sv(1);
	MR_np_localcall_lab(fn__hlds__goal_util__proc_body_is_leaf_goals_1_0,
		fn__hlds__goal_util__proc_body_is_leaf_goals_1_0_i7);
MR_def_label(fn__hlds__goal_util__proc_body_is_leaf_goals_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__hlds__goal_util__proc_body_is_leaf_goals_1_0_i4);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(2);
MR_def_label(fn__hlds__goal_util__proc_body_is_leaf_goals_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module17)
	MR_init_entry1(fn__hlds__goal_util__proc_body_is_leaf_cases_1_0);
	MR_init_label4(fn__hlds__goal_util__proc_body_is_leaf_cases_1_0,24,5,7,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__goal_util__proc_body_is_leaf_cases_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__hlds__goal_util__proc_body_is_leaf_cases_1_0_i24);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__hlds__goal_util__proc_body_is_leaf_cases_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 1);
	MR_np_call_localret_ent(fn__hlds__goal_util__proc_body_is_leaf_1_0,
		fn__hlds__goal_util__proc_body_is_leaf_cases_1_0_i5);
MR_def_label(fn__hlds__goal_util__proc_body_is_leaf_cases_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__hlds__goal_util__proc_body_is_leaf_cases_1_0_i4);
	}
	MR_r1 = MR_sv(1);
	MR_np_localcall_lab(fn__hlds__goal_util__proc_body_is_leaf_cases_1_0,
		fn__hlds__goal_util__proc_body_is_leaf_cases_1_0_i7);
MR_def_label(fn__hlds__goal_util__proc_body_is_leaf_cases_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__hlds__goal_util__proc_body_is_leaf_cases_1_0_i4);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(2);
MR_def_label(fn__hlds__goal_util__proc_body_is_leaf_cases_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module18)
	MR_init_entry1(hlds__goal_util__goal_is_branched_1_0);
	MR_init_label2(hlds__goal_util__goal_is_branched_1_0,2,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_util__goal_is_branched_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,3)) {
		MR_GOTO_LAB(hlds__goal_util__goal_is_branched_1_0_i1);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(hlds__goal_util__goal_is_branched_1_0_i1) MR_AND
		MR_LABEL_AP(hlds__goal_util__goal_is_branched_1_0_i1) MR_AND
		MR_LABEL_AP(hlds__goal_util__goal_is_branched_1_0_i2) MR_AND
		MR_LABEL_AP(hlds__goal_util__goal_is_branched_1_0_i2) MR_AND
		MR_LABEL_AP(hlds__goal_util__goal_is_branched_1_0_i1) MR_AND
		MR_LABEL_AP(hlds__goal_util__goal_is_branched_1_0_i1) MR_AND
		MR_LABEL_AP(hlds__goal_util__goal_is_branched_1_0_i2) MR_AND
		MR_LABEL_AP(hlds__goal_util__goal_is_branched_1_0_i1));
MR_def_label(hlds__goal_util__goal_is_branched_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(hlds__goal_util__goal_is_branched_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module19)
	MR_init_entry1(hlds__goal_util__goal_size_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_util__goal_size_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_np_tailcall_ent(hlds__goal_util__goal_expr_size_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module20)
	MR_init_entry1(hlds__goal_util__goals_size_2_0);
	MR_init_label3(hlds__goal_util__goals_size_2_0,13,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_util__goals_size_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__goal_util__goals_size_2_0_i13);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(hlds__goal_util__goals_size_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
	MR_np_call_localret_ent(hlds__goal_util__goal_expr_size_2_0,
		hlds__goal_util__goals_size_2_0_i4);
MR_def_label(hlds__goal_util__goals_size_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_localcall_lab(hlds__goal_util__goals_size_2_0,
		hlds__goal_util__goals_size_2_0_i5);
MR_def_label(hlds__goal_util__goals_size_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) MR_r1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module21)
	MR_init_entry1(hlds__goal_util__cases_size_2_0);
	MR_init_label3(hlds__goal_util__cases_size_2_0,13,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__goal_util__cases_size_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__goal_util__cases_size_2_0_i13);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(hlds__goal_util__cases_size_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 1), 0);
	MR_np_call_localret_ent(hlds__goal_util__goal_expr_size_2_0,
		hlds__goal_util__cases_size_2_0_i4);
MR_def_label(hlds__goal_util__cases_size_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_localcall_lab(hlds__goal_util__cases_size_2_0,
		hlds__goal_util__cases_size_2_0_i5);
MR_def_label(hlds__goal_util__cases_size_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) MR_r1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module22)
	MR_init_entry1(hlds__goal_util__goal_expr_size_2_0);
	MR_init_label8(hlds__goal_util__goal_expr_size_2_0,8,39,10,27,40,41,42,43)
	MR_init_label6(hlds__goal_util__goal_expr_size_2_0,44,22,23,24,25,38)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__goal_util__goal_expr_size_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_r1),3)) {
		MR_GOTO_LAB(hlds__goal_util__goal_expr_size_2_0_i8);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(hlds__goal_util__goal_expr_size_2_0_i8) MR_AND
		MR_LABEL_AP(hlds__goal_util__goal_expr_size_2_0_i39) MR_AND
		MR_LABEL_AP(hlds__goal_util__goal_expr_size_2_0_i40) MR_AND
		MR_LABEL_AP(hlds__goal_util__goal_expr_size_2_0_i41) MR_AND
		MR_LABEL_AP(hlds__goal_util__goal_expr_size_2_0_i42) MR_AND
		MR_LABEL_AP(hlds__goal_util__goal_expr_size_2_0_i43) MR_AND
		MR_LABEL_AP(hlds__goal_util__goal_expr_size_2_0_i44) MR_AND
		MR_LABEL_AP(hlds__goal_util__goal_expr_size_2_0_i25));
MR_def_label(hlds__goal_util__goal_expr_size_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(hlds__goal_util__goal_expr_size_2_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_np_call_localret_ent(hlds__goal_util__goals_size_2_0,
		hlds__goal_util__goal_expr_size_2_0_i10);
MR_def_label(hlds__goal_util__goal_expr_size_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(1),0)) {
		MR_GOTO_LAB(hlds__goal_util__goal_expr_size_2_0_i38);
	}
MR_def_label(hlds__goal_util__goal_expr_size_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 + (MR_Integer) 1);
	MR_decr_sp_and_return(3);
MR_def_label(hlds__goal_util__goal_expr_size_2_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(hlds__goal_util__goals_size_2_0,
		hlds__goal_util__goal_expr_size_2_0_i27);
MR_def_label(hlds__goal_util__goal_expr_size_2_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(3, MR_r1, 3);
	MR_np_call_localret_ent(hlds__goal_util__cases_size_2_0,
		hlds__goal_util__goal_expr_size_2_0_i27);
MR_def_label(hlds__goal_util__goal_expr_size_2_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(0, MR_ctfield(3, MR_r1, 1), 0);
	MR_np_localcall_lab(hlds__goal_util__goal_expr_size_2_0,
		hlds__goal_util__goal_expr_size_2_0_i27);
MR_def_label(hlds__goal_util__goal_expr_size_2_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(0, MR_ctfield(3, MR_r1, 2), 0);
	MR_np_localcall_lab(hlds__goal_util__goal_expr_size_2_0,
		hlds__goal_util__goal_expr_size_2_0_i27);
MR_def_label(hlds__goal_util__goal_expr_size_2_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 4);
	MR_r1 = MR_ctfield(0, MR_ctfield(3, MR_r1, 2), 0);
	}
	MR_np_localcall_lab(hlds__goal_util__goal_expr_size_2_0,
		hlds__goal_util__goal_expr_size_2_0_i22);
MR_def_label(hlds__goal_util__goal_expr_size_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_localcall_lab(hlds__goal_util__goal_expr_size_2_0,
		hlds__goal_util__goal_expr_size_2_0_i23);
MR_def_label(hlds__goal_util__goal_expr_size_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_localcall_lab(hlds__goal_util__goal_expr_size_2_0,
		hlds__goal_util__goal_expr_size_2_0_i24);
MR_def_label(hlds__goal_util__goal_expr_size_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((((MR_Integer) MR_sv(1) + (MR_Integer) MR_sv(2)) + (MR_Integer) MR_r1) + (MR_Integer) 1);
	MR_decr_sp_and_return(3);
MR_def_label(hlds__goal_util__goal_expr_size_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_tailcall_ent(hlds__goal_util__goal_expr_size_shorthand_2_0);
MR_def_label(hlds__goal_util__goal_expr_size_2_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module23)
	MR_init_entry1(hlds__goal_util__goal_expr_size_shorthand_2_0);
	MR_init_label2(hlds__goal_util__goal_expr_size_shorthand_2_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__goal_util__goal_expr_size_shorthand_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_ctfield(0, MR_r1, 0), 0);
	MR_np_call_localret_ent(hlds__goal_util__goal_expr_size_2_0,
		hlds__goal_util__goal_expr_size_shorthand_2_0_i2);
MR_def_label(hlds__goal_util__goal_expr_size_shorthand_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(hlds__goal_util__goal_expr_size_2_0,
		hlds__goal_util__goal_expr_size_shorthand_2_0_i3);
MR_def_label(hlds__goal_util__goal_expr_size_shorthand_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (((MR_Integer) MR_sv(1) + (MR_Integer) MR_r1) + (MR_Integer) 1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_clauses__type_ctor_info_clause_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

MR_BEGIN_MODULE(hlds__goal_util_module24)
	MR_init_entry1(hlds__goal_util__clause_list_size_2_0);
	MR_init_label3(hlds__goal_util__clause_list_size_2_0,2,3,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_util__clause_list_size_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_clauses, clause);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,5);
	MR_r4 = MR_sv(1);
	MR_r5 = (MR_Integer) 0;
	MR_np_call_localret_ent(list__foldl_4_1,
		hlds__goal_util__clause_list_size_2_0_i2);
MR_def_label(hlds__goal_util__clause_list_size_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(hlds__goal_util__clause_list_size_2_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_sv(1), 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__goal_util__clause_list_size_2_0_i6);
	}
	}
MR_def_label(hlds__goal_util__clause_list_size_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 + (MR_Integer) 1);
MR_def_label(hlds__goal_util__clause_list_size_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module25)
	MR_init_entry1(hlds__goal_util__goal_calls_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_util__goal_calls_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_np_tailcall_ent(hlds__goal_util__goal_expr_calls_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module26)
	MR_init_entry1(hlds__goal_util__goal_calls_2_1);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_util__goal_calls_2_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_np_tailcall_ent(hlds__goal_util__goal_expr_calls_2_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module27)
	MR_init_entry1(hlds__goal_util__goals_calls_2_0);
	MR_init_label4(hlds__goal_util__goals_calls_2_0,18,5,3,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__goal_util__goals_calls_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(hlds__goal_util__goals_calls_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__goal_util__goals_calls_2_0_i1);
	}
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
	MR_np_call_localret_ent(hlds__goal_util__goal_expr_calls_2_0,
		hlds__goal_util__goals_calls_2_0_i5);
MR_def_label(hlds__goal_util__goals_calls_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(hlds__goal_util__goals_calls_2_0_i3);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(hlds__goal_util__goals_calls_2_0_i18);
MR_def_label(hlds__goal_util__goals_calls_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
MR_def_label(hlds__goal_util__goals_calls_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(MR_do_fail);

MR_BEGIN_MODULE(hlds__goal_util_module28)
	MR_init_entry1(hlds__goal_util__goals_calls_2_1);
	MR_init_label3(hlds__goal_util__goals_calls_2_1,6,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__goal_util__goals_calls_2_1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe_no_redoip("pred hlds.goal_util.goals_calls/2-1", 1);
MR_def_label(hlds__goal_util__goals_calls_2_1,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO(MR_ENTRY(MR_do_fail));
	}
	MR_fv(1) = MR_ctfield(1, MR_r1, 1);
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(hlds__goal_util__goals_calls_2_1_i3);
	MR_r1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
	MR_np_call_localret_ent(hlds__goal_util__goal_expr_calls_2_1,
		hlds__goal_util__goals_calls_2_1_i2);
MR_def_label(hlds__goal_util__goals_calls_2_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	MR_r1 = MR_fv(1);
	MR_GOTO_LAB(hlds__goal_util__goals_calls_2_1_i6);
MR_def_label(hlds__goal_util__goals_calls_2_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module29)
	MR_init_entry1(hlds__goal_util__cases_calls_2_0);
	MR_init_label4(hlds__goal_util__cases_calls_2_0,18,5,3,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__goal_util__cases_calls_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(hlds__goal_util__cases_calls_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__goal_util__cases_calls_2_0_i1);
	}
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_ctfield(0, MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 1), 0);
	MR_np_call_localret_ent(hlds__goal_util__goal_expr_calls_2_0,
		hlds__goal_util__cases_calls_2_0_i5);
MR_def_label(hlds__goal_util__cases_calls_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(hlds__goal_util__cases_calls_2_0_i3);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(hlds__goal_util__cases_calls_2_0_i18);
MR_def_label(hlds__goal_util__cases_calls_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
MR_def_label(hlds__goal_util__cases_calls_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module30)
	MR_init_entry1(hlds__goal_util__cases_calls_2_1);
	MR_init_label3(hlds__goal_util__cases_calls_2_1,6,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__goal_util__cases_calls_2_1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe_no_redoip("pred hlds.goal_util.cases_calls/2-1", 1);
MR_def_label(hlds__goal_util__cases_calls_2_1,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO(MR_ENTRY(MR_do_fail));
	}
	MR_fv(1) = MR_ctfield(1, MR_r1, 1);
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(hlds__goal_util__cases_calls_2_1_i3);
	MR_r1 = MR_ctfield(0, MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 1), 0);
	MR_np_call_localret_ent(hlds__goal_util__goal_expr_calls_2_1,
		hlds__goal_util__cases_calls_2_1_i2);
MR_def_label(hlds__goal_util__cases_calls_2_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	MR_r1 = MR_fv(1);
	MR_GOTO_LAB(hlds__goal_util__cases_calls_2_1_i6);
MR_def_label(hlds__goal_util__cases_calls_2_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module31)
	MR_init_entry1(hlds__goal_util__goal_expr_calls_2_0);
	MR_init_label8(hlds__goal_util__goal_expr_calls_2_0,59,5,8,11,14,17,20,23)
	MR_init_label4(hlds__goal_util__goal_expr_calls_2_0,26,4,42,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__goal_util__goal_expr_calls_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(hlds__goal_util__goal_expr_calls_2_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r3 = MR_tag(MR_tempr1);
	if ((MR_r3 != MR_mktag((MR_Integer) 3))) {
		MR_GOTO_LAB(hlds__goal_util__goal_expr_calls_2_0_i4);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_tempr1, 0),
		MR_LABEL_AP(hlds__goal_util__goal_expr_calls_2_0_i1) MR_AND
		MR_LABEL_AP(hlds__goal_util__goal_expr_calls_2_0_i5) MR_AND
		MR_LABEL_AP(hlds__goal_util__goal_expr_calls_2_0_i8) MR_AND
		MR_LABEL_AP(hlds__goal_util__goal_expr_calls_2_0_i11) MR_AND
		MR_LABEL_AP(hlds__goal_util__goal_expr_calls_2_0_i14) MR_AND
		MR_LABEL_AP(hlds__goal_util__goal_expr_calls_2_0_i17) MR_AND
		MR_LABEL_AP(hlds__goal_util__goal_expr_calls_2_0_i20) MR_AND
		MR_LABEL_AP(hlds__goal_util__goal_expr_calls_2_0_i1));
	}
MR_def_label(hlds__goal_util__goal_expr_calls_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(hlds__goal_util__goals_calls_2_0);
MR_def_label(hlds__goal_util__goal_expr_calls_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(hlds__goal_util__goals_calls_2_0);
MR_def_label(hlds__goal_util__goal_expr_calls_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(hlds__goal_util__cases_calls_2_0);
MR_def_label(hlds__goal_util__goal_expr_calls_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_ctfield(3, MR_r1, 1), 0);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(hlds__goal_util__goal_expr_calls_2_0_i59);
MR_def_label(hlds__goal_util__goal_expr_calls_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_ctfield(3, MR_r1, 2), 0);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(hlds__goal_util__goal_expr_calls_2_0_i59);
MR_def_label(hlds__goal_util__goal_expr_calls_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 4);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_ctfield(0, MR_ctfield(3, MR_r1, 2), 0);
	}
	MR_np_localcall_lab(hlds__goal_util__goal_expr_calls_2_0,
		hlds__goal_util__goal_expr_calls_2_0_i23);
MR_def_label(hlds__goal_util__goal_expr_calls_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(hlds__goal_util__goal_expr_calls_2_0_i42);
	}
	MR_r1 = MR_ctfield(0, MR_sv(2), 0);
	MR_r2 = MR_sv(1);
	MR_np_localcall_lab(hlds__goal_util__goal_expr_calls_2_0,
		hlds__goal_util__goal_expr_calls_2_0_i26);
MR_def_label(hlds__goal_util__goal_expr_calls_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(hlds__goal_util__goal_expr_calls_2_0_i42);
	}
	MR_r1 = MR_ctfield(0, MR_sv(3), 0);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(hlds__goal_util__goal_expr_calls_2_0_i59);
MR_def_label(hlds__goal_util__goal_expr_calls_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 != MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(hlds__goal_util__goal_expr_calls_2_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	MR_tempr4 = MR_r2;
	MR_tempr2 = MR_ctfield(0, MR_tempr4, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(hlds__goal_util__goal_expr_calls_2_0_i1);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	MR_tempr2 = MR_ctfield(0, MR_tempr4, 1);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(4);
	}
MR_def_label(hlds__goal_util__goal_expr_calls_2_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
MR_def_label(hlds__goal_util__goal_expr_calls_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(MR_do_redo);

MR_BEGIN_MODULE(hlds__goal_util_module32)
	MR_init_entry1(hlds__goal_util__goal_expr_calls_2_1);
	MR_init_label8(hlds__goal_util__goal_expr_calls_2_1,4,6,8,10,12,41,16,18)
	MR_init_label3(hlds__goal_util__goal_expr_calls_2_1,3,40,39)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__goal_util__goal_expr_calls_2_1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r2 = MR_tag(MR_tempr1);
	if ((MR_r2 != MR_mktag((MR_Integer) 3))) {
		MR_GOTO_LAB(hlds__goal_util__goal_expr_calls_2_1_i3);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_tempr1, 0),
		MR_LABEL_AP(hlds__goal_util__goal_expr_calls_2_1_i40) MR_AND
		MR_LABEL_AP(hlds__goal_util__goal_expr_calls_2_1_i4) MR_AND
		MR_LABEL_AP(hlds__goal_util__goal_expr_calls_2_1_i6) MR_AND
		MR_LABEL_AP(hlds__goal_util__goal_expr_calls_2_1_i8) MR_AND
		MR_LABEL_AP(hlds__goal_util__goal_expr_calls_2_1_i10) MR_AND
		MR_LABEL_AP(hlds__goal_util__goal_expr_calls_2_1_i12) MR_AND
		MR_LABEL_AP(hlds__goal_util__goal_expr_calls_2_1_i41) MR_AND
		MR_LABEL_AP(hlds__goal_util__goal_expr_calls_2_1_i40));
	}
MR_def_label(hlds__goal_util__goal_expr_calls_2_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_np_tailcall_ent(hlds__goal_util__goals_calls_2_1);
MR_def_label(hlds__goal_util__goal_expr_calls_2_1,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_tailcall_ent(hlds__goal_util__goals_calls_2_1);
MR_def_label(hlds__goal_util__goal_expr_calls_2_1,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 3);
	MR_np_tailcall_ent(hlds__goal_util__cases_calls_2_1);
MR_def_label(hlds__goal_util__goal_expr_calls_2_1,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_ctfield(3, MR_r1, 1), 0);
	MR_np_localtailcall(hlds__goal_util__goal_expr_calls_2_1);
MR_def_label(hlds__goal_util__goal_expr_calls_2_1,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_ctfield(3, MR_r1, 2), 0);
	MR_np_localtailcall(hlds__goal_util__goal_expr_calls_2_1);
MR_def_label(hlds__goal_util__goal_expr_calls_2_1,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred hlds.goal_util.goal_expr_calls/2-1", 2,
		MR_LABEL_AP(hlds__goal_util__goal_expr_calls_2_1_i16));
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_fv(2) = MR_ctfield(3, MR_tempr1, 4);
	MR_fv(1) = MR_ctfield(3, MR_tempr1, 3);
	MR_r1 = MR_ctfield(0, MR_ctfield(3, MR_r1, 2), 0);
	}
	MR_np_localcall_lab(hlds__goal_util__goal_expr_calls_2_1,
		hlds__goal_util__goal_expr_calls_2_1_i39);
MR_def_label(hlds__goal_util__goal_expr_calls_2_1,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(hlds__goal_util__goal_expr_calls_2_1_i18);
	MR_r1 = MR_ctfield(0, MR_fv(1), 0);
	MR_np_localcall_lab(hlds__goal_util__goal_expr_calls_2_1,
		hlds__goal_util__goal_expr_calls_2_1_i39);
MR_def_label(hlds__goal_util__goal_expr_calls_2_1,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	MR_r1 = MR_ctfield(0, MR_fv(2), 0);
	MR_succip_word = (MR_Word) MR_succip_slot(MR_curfr);
	MR_maxfr_word = (MR_Word) MR_prevfr_slot(MR_curfr);
	MR_curfr_word = (MR_Word) MR_succfr_slot(MR_curfr);
	MR_np_localtailcall(hlds__goal_util__goal_expr_calls_2_1);
MR_def_label(hlds__goal_util__goal_expr_calls_2_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(hlds__goal_util__goal_expr_calls_2_1_i40);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr2 = MR_r1;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(1, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(1, MR_tempr2, 1);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(hlds__goal_util__goal_expr_calls_2_1,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(hlds__goal_util__goal_expr_calls_2_1,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module33)
	MR_init_entry1(hlds__goal_util__goal_calls_pred_id_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_util__goal_calls_pred_id_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_np_tailcall_ent(hlds__goal_util__goal_expr_calls_pred_id_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module34)
	MR_init_entry1(hlds__goal_util__goal_calls_pred_id_2_1);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_util__goal_calls_pred_id_2_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_np_tailcall_ent(hlds__goal_util__goal_expr_calls_pred_id_2_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module35)
	MR_init_entry1(hlds__goal_util__goals_calls_pred_id_2_0);
	MR_init_label4(hlds__goal_util__goals_calls_pred_id_2_0,18,5,3,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__goal_util__goals_calls_pred_id_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(hlds__goal_util__goals_calls_pred_id_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__goal_util__goals_calls_pred_id_2_0_i1);
	}
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
	MR_np_call_localret_ent(hlds__goal_util__goal_expr_calls_pred_id_2_0,
		hlds__goal_util__goals_calls_pred_id_2_0_i5);
MR_def_label(hlds__goal_util__goals_calls_pred_id_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(hlds__goal_util__goals_calls_pred_id_2_0_i3);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(hlds__goal_util__goals_calls_pred_id_2_0_i18);
MR_def_label(hlds__goal_util__goals_calls_pred_id_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
MR_def_label(hlds__goal_util__goals_calls_pred_id_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module36)
	MR_init_entry1(hlds__goal_util__goals_calls_pred_id_2_1);
	MR_init_label3(hlds__goal_util__goals_calls_pred_id_2_1,6,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__goal_util__goals_calls_pred_id_2_1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe_no_redoip("pred hlds.goal_util.goals_calls_pred_id/2-1", 1);
MR_def_label(hlds__goal_util__goals_calls_pred_id_2_1,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO(MR_ENTRY(MR_do_fail));
	}
	MR_fv(1) = MR_ctfield(1, MR_r1, 1);
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(hlds__goal_util__goals_calls_pred_id_2_1_i3);
	MR_r1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
	MR_np_call_localret_ent(hlds__goal_util__goal_expr_calls_pred_id_2_1,
		hlds__goal_util__goals_calls_pred_id_2_1_i2);
MR_def_label(hlds__goal_util__goals_calls_pred_id_2_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	MR_r1 = MR_fv(1);
	MR_GOTO_LAB(hlds__goal_util__goals_calls_pred_id_2_1_i6);
MR_def_label(hlds__goal_util__goals_calls_pred_id_2_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module37)
	MR_init_entry1(hlds__goal_util__cases_calls_pred_id_2_0);
	MR_init_label4(hlds__goal_util__cases_calls_pred_id_2_0,18,5,3,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__goal_util__cases_calls_pred_id_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(hlds__goal_util__cases_calls_pred_id_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__goal_util__cases_calls_pred_id_2_0_i1);
	}
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_ctfield(0, MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 1), 0);
	MR_np_call_localret_ent(hlds__goal_util__goal_expr_calls_pred_id_2_0,
		hlds__goal_util__cases_calls_pred_id_2_0_i5);
MR_def_label(hlds__goal_util__cases_calls_pred_id_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(hlds__goal_util__cases_calls_pred_id_2_0_i3);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(hlds__goal_util__cases_calls_pred_id_2_0_i18);
MR_def_label(hlds__goal_util__cases_calls_pred_id_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
MR_def_label(hlds__goal_util__cases_calls_pred_id_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module38)
	MR_init_entry1(hlds__goal_util__cases_calls_pred_id_2_1);
	MR_init_label3(hlds__goal_util__cases_calls_pred_id_2_1,6,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__goal_util__cases_calls_pred_id_2_1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe_no_redoip("pred hlds.goal_util.cases_calls_pred_id/2-1", 1);
MR_def_label(hlds__goal_util__cases_calls_pred_id_2_1,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO(MR_ENTRY(MR_do_fail));
	}
	MR_fv(1) = MR_ctfield(1, MR_r1, 1);
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(hlds__goal_util__cases_calls_pred_id_2_1_i3);
	MR_r1 = MR_ctfield(0, MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 1), 0);
	MR_np_call_localret_ent(hlds__goal_util__goal_expr_calls_pred_id_2_1,
		hlds__goal_util__cases_calls_pred_id_2_1_i2);
MR_def_label(hlds__goal_util__cases_calls_pred_id_2_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	MR_r1 = MR_fv(1);
	MR_GOTO_LAB(hlds__goal_util__cases_calls_pred_id_2_1_i6);
MR_def_label(hlds__goal_util__cases_calls_pred_id_2_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module39)
	MR_init_entry1(hlds__goal_util__goal_expr_calls_pred_id_2_0);
	MR_init_label8(hlds__goal_util__goal_expr_calls_pred_id_2_0,55,5,8,11,14,17,20,23)
	MR_init_label4(hlds__goal_util__goal_expr_calls_pred_id_2_0,26,4,41,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__goal_util__goal_expr_calls_pred_id_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(hlds__goal_util__goal_expr_calls_pred_id_2_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r3 = MR_tag(MR_tempr1);
	if ((MR_r3 != MR_mktag((MR_Integer) 3))) {
		MR_GOTO_LAB(hlds__goal_util__goal_expr_calls_pred_id_2_0_i4);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_tempr1, 0),
		MR_LABEL_AP(hlds__goal_util__goal_expr_calls_pred_id_2_0_i1) MR_AND
		MR_LABEL_AP(hlds__goal_util__goal_expr_calls_pred_id_2_0_i5) MR_AND
		MR_LABEL_AP(hlds__goal_util__goal_expr_calls_pred_id_2_0_i8) MR_AND
		MR_LABEL_AP(hlds__goal_util__goal_expr_calls_pred_id_2_0_i11) MR_AND
		MR_LABEL_AP(hlds__goal_util__goal_expr_calls_pred_id_2_0_i14) MR_AND
		MR_LABEL_AP(hlds__goal_util__goal_expr_calls_pred_id_2_0_i17) MR_AND
		MR_LABEL_AP(hlds__goal_util__goal_expr_calls_pred_id_2_0_i20) MR_AND
		MR_LABEL_AP(hlds__goal_util__goal_expr_calls_pred_id_2_0_i1));
	}
MR_def_label(hlds__goal_util__goal_expr_calls_pred_id_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(hlds__goal_util__goals_calls_pred_id_2_0);
MR_def_label(hlds__goal_util__goal_expr_calls_pred_id_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(hlds__goal_util__goals_calls_pred_id_2_0);
MR_def_label(hlds__goal_util__goal_expr_calls_pred_id_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(hlds__goal_util__cases_calls_pred_id_2_0);
MR_def_label(hlds__goal_util__goal_expr_calls_pred_id_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_ctfield(3, MR_r1, 1), 0);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(hlds__goal_util__goal_expr_calls_pred_id_2_0_i55);
MR_def_label(hlds__goal_util__goal_expr_calls_pred_id_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_ctfield(3, MR_r1, 2), 0);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(hlds__goal_util__goal_expr_calls_pred_id_2_0_i55);
MR_def_label(hlds__goal_util__goal_expr_calls_pred_id_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 4);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_ctfield(0, MR_ctfield(3, MR_r1, 2), 0);
	}
	MR_np_localcall_lab(hlds__goal_util__goal_expr_calls_pred_id_2_0,
		hlds__goal_util__goal_expr_calls_pred_id_2_0_i23);
MR_def_label(hlds__goal_util__goal_expr_calls_pred_id_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(hlds__goal_util__goal_expr_calls_pred_id_2_0_i41);
	}
	MR_r1 = MR_ctfield(0, MR_sv(2), 0);
	MR_r2 = MR_sv(1);
	MR_np_localcall_lab(hlds__goal_util__goal_expr_calls_pred_id_2_0,
		hlds__goal_util__goal_expr_calls_pred_id_2_0_i26);
MR_def_label(hlds__goal_util__goal_expr_calls_pred_id_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(hlds__goal_util__goal_expr_calls_pred_id_2_0_i41);
	}
	MR_r1 = MR_ctfield(0, MR_sv(3), 0);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(hlds__goal_util__goal_expr_calls_pred_id_2_0_i55);
MR_def_label(hlds__goal_util__goal_expr_calls_pred_id_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 != MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(hlds__goal_util__goal_expr_calls_pred_id_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_r1 = (MR_r2 == MR_tempr1);
	MR_decr_sp_and_return(4);
	}
MR_def_label(hlds__goal_util__goal_expr_calls_pred_id_2_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
MR_def_label(hlds__goal_util__goal_expr_calls_pred_id_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module40)
	MR_init_entry1(hlds__goal_util__goal_expr_calls_pred_id_2_1);
	MR_init_label8(hlds__goal_util__goal_expr_calls_pred_id_2_1,4,6,8,10,12,41,16,18)
	MR_init_label3(hlds__goal_util__goal_expr_calls_pred_id_2_1,3,40,39)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__goal_util__goal_expr_calls_pred_id_2_1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r2 = MR_tag(MR_tempr1);
	if ((MR_r2 != MR_mktag((MR_Integer) 3))) {
		MR_GOTO_LAB(hlds__goal_util__goal_expr_calls_pred_id_2_1_i3);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_tempr1, 0),
		MR_LABEL_AP(hlds__goal_util__goal_expr_calls_pred_id_2_1_i40) MR_AND
		MR_LABEL_AP(hlds__goal_util__goal_expr_calls_pred_id_2_1_i4) MR_AND
		MR_LABEL_AP(hlds__goal_util__goal_expr_calls_pred_id_2_1_i6) MR_AND
		MR_LABEL_AP(hlds__goal_util__goal_expr_calls_pred_id_2_1_i8) MR_AND
		MR_LABEL_AP(hlds__goal_util__goal_expr_calls_pred_id_2_1_i10) MR_AND
		MR_LABEL_AP(hlds__goal_util__goal_expr_calls_pred_id_2_1_i12) MR_AND
		MR_LABEL_AP(hlds__goal_util__goal_expr_calls_pred_id_2_1_i41) MR_AND
		MR_LABEL_AP(hlds__goal_util__goal_expr_calls_pred_id_2_1_i40));
	}
MR_def_label(hlds__goal_util__goal_expr_calls_pred_id_2_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_np_tailcall_ent(hlds__goal_util__goals_calls_pred_id_2_1);
MR_def_label(hlds__goal_util__goal_expr_calls_pred_id_2_1,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_tailcall_ent(hlds__goal_util__goals_calls_pred_id_2_1);
MR_def_label(hlds__goal_util__goal_expr_calls_pred_id_2_1,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 3);
	MR_np_tailcall_ent(hlds__goal_util__cases_calls_pred_id_2_1);
MR_def_label(hlds__goal_util__goal_expr_calls_pred_id_2_1,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_ctfield(3, MR_r1, 1), 0);
	MR_np_localtailcall(hlds__goal_util__goal_expr_calls_pred_id_2_1);
MR_def_label(hlds__goal_util__goal_expr_calls_pred_id_2_1,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_ctfield(3, MR_r1, 2), 0);
	MR_np_localtailcall(hlds__goal_util__goal_expr_calls_pred_id_2_1);
MR_def_label(hlds__goal_util__goal_expr_calls_pred_id_2_1,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred hlds.goal_util.goal_expr_calls_pred_id/2-1", 2,
		MR_LABEL_AP(hlds__goal_util__goal_expr_calls_pred_id_2_1_i16));
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_fv(2) = MR_ctfield(3, MR_tempr1, 4);
	MR_fv(1) = MR_ctfield(3, MR_tempr1, 3);
	MR_r1 = MR_ctfield(0, MR_ctfield(3, MR_r1, 2), 0);
	}
	MR_np_localcall_lab(hlds__goal_util__goal_expr_calls_pred_id_2_1,
		hlds__goal_util__goal_expr_calls_pred_id_2_1_i39);
MR_def_label(hlds__goal_util__goal_expr_calls_pred_id_2_1,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(hlds__goal_util__goal_expr_calls_pred_id_2_1_i18);
	MR_r1 = MR_ctfield(0, MR_fv(1), 0);
	MR_np_localcall_lab(hlds__goal_util__goal_expr_calls_pred_id_2_1,
		hlds__goal_util__goal_expr_calls_pred_id_2_1_i39);
MR_def_label(hlds__goal_util__goal_expr_calls_pred_id_2_1,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	MR_r1 = MR_ctfield(0, MR_fv(2), 0);
	MR_succip_word = (MR_Word) MR_succip_slot(MR_curfr);
	MR_maxfr_word = (MR_Word) MR_prevfr_slot(MR_curfr);
	MR_curfr_word = (MR_Word) MR_succfr_slot(MR_curfr);
	MR_np_localtailcall(hlds__goal_util__goal_expr_calls_pred_id_2_1);
MR_def_label(hlds__goal_util__goal_expr_calls_pred_id_2_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(hlds__goal_util__goal_expr_calls_pred_id_2_1_i40);
	}
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_proceed();
MR_def_label(hlds__goal_util__goal_expr_calls_pred_id_2_1,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(hlds__goal_util__goal_expr_calls_pred_id_2_1,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
MR_decl_entry(list__member_2_0);
MR_decl_entry(svset__insert_3_0);

MR_BEGIN_MODULE(hlds__goal_util_module41)
	MR_init_entry1(hlds__goal_util__goal_calls_proc_in_list_2_4_0);
	MR_init_label8(hlds__goal_util__goal_calls_proc_in_list_2_4_0,35,5,7,6,12,13,14,16)
	MR_init_label7(hlds__goal_util__goal_calls_proc_in_list_2_4_0,18,20,22,24,25,26,28)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__goal_util__goal_calls_proc_in_list_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(hlds__goal_util__goal_calls_proc_in_list_2_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_ctfield(0, MR_r1, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(hlds__goal_util__goal_calls_proc_in_list_2_4_0_i13) MR_AND
		MR_LABEL_AP(hlds__goal_util__goal_calls_proc_in_list_2_4_0_i5) MR_AND
		MR_LABEL_AP(hlds__goal_util__goal_calls_proc_in_list_2_4_0_i13) MR_AND
		MR_LABEL_AP(hlds__goal_util__goal_calls_proc_in_list_2_4_0_i12));
MR_def_label(hlds__goal_util__goal_calls_proc_in_list_2_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr2 = MR_r4;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(1, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r3 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__member_2_0,
		hlds__goal_util__goal_calls_proc_in_list_2_4_0_i7);
MR_def_label(hlds__goal_util__goal_calls_proc_in_list_2_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__goal_util__goal_calls_proc_in_list_2_4_0_i6);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(svset__insert_3_0);
MR_def_label(hlds__goal_util__goal_calls_proc_in_list_2_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(4);
MR_def_label(hlds__goal_util__goal_calls_proc_in_list_2_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r4, 0),
		MR_LABEL_AP(hlds__goal_util__goal_calls_proc_in_list_2_4_0_i13) MR_AND
		MR_LABEL_AP(hlds__goal_util__goal_calls_proc_in_list_2_4_0_i14) MR_AND
		MR_LABEL_AP(hlds__goal_util__goal_calls_proc_in_list_2_4_0_i16) MR_AND
		MR_LABEL_AP(hlds__goal_util__goal_calls_proc_in_list_2_4_0_i18) MR_AND
		MR_LABEL_AP(hlds__goal_util__goal_calls_proc_in_list_2_4_0_i20) MR_AND
		MR_LABEL_AP(hlds__goal_util__goal_calls_proc_in_list_2_4_0_i22) MR_AND
		MR_LABEL_AP(hlds__goal_util__goal_calls_proc_in_list_2_4_0_i24) MR_AND
		MR_LABEL_AP(hlds__goal_util__goal_calls_proc_in_list_2_4_0_i28));
MR_def_label(hlds__goal_util__goal_calls_proc_in_list_2_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(4);
MR_def_label(hlds__goal_util__goal_calls_proc_in_list_2_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r4, 2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(hlds__goal_util__goal_list_calls_proc_in_list_2_4_0);
MR_def_label(hlds__goal_util__goal_calls_proc_in_list_2_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r4, 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(hlds__goal_util__goal_list_calls_proc_in_list_2_4_0);
MR_def_label(hlds__goal_util__goal_calls_proc_in_list_2_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r4, 3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(hlds__goal_util__case_list_calls_proc_in_list_4_0);
MR_def_label(hlds__goal_util__goal_calls_proc_in_list_2_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r4, 1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(hlds__goal_util__goal_calls_proc_in_list_2_4_0_i35);
MR_def_label(hlds__goal_util__goal_calls_proc_in_list_2_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r4, 2);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(hlds__goal_util__goal_calls_proc_in_list_2_4_0_i35);
MR_def_label(hlds__goal_util__goal_calls_proc_in_list_2_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 4);
	MR_r1 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_localcall_lab(hlds__goal_util__goal_calls_proc_in_list_2_4_0,
		hlds__goal_util__goal_calls_proc_in_list_2_4_0_i25);
MR_def_label(hlds__goal_util__goal_calls_proc_in_list_2_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_np_localcall_lab(hlds__goal_util__goal_calls_proc_in_list_2_4_0,
		hlds__goal_util__goal_calls_proc_in_list_2_4_0_i26);
MR_def_label(hlds__goal_util__goal_calls_proc_in_list_2_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(hlds__goal_util__goal_calls_proc_in_list_2_4_0_i35);
MR_def_label(hlds__goal_util__goal_calls_proc_in_list_2_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("goal_util.m", 11);
	MR_r2 = (MR_Word) MR_string_const("goal__calls_proc_in_list_2: shorthand", 37);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module42)
	MR_init_entry1(hlds__goal_util__goal_list_calls_proc_in_list_2_4_0);
	MR_init_label3(hlds__goal_util__goal_list_calls_proc_in_list_2_4_0,10,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__goal_util__goal_list_calls_proc_in_list_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(hlds__goal_util__goal_list_calls_proc_in_list_2_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__goal_util__goal_list_calls_proc_in_list_2_4_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(3);
MR_def_label(hlds__goal_util__goal_list_calls_proc_in_list_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(hlds__goal_util__goal_calls_proc_in_list_2_4_0,
		hlds__goal_util__goal_list_calls_proc_in_list_2_4_0_i4);
MR_def_label(hlds__goal_util__goal_list_calls_proc_in_list_2_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(hlds__goal_util__goal_list_calls_proc_in_list_2_4_0_i10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module43)
	MR_init_entry1(hlds__goal_util__case_list_calls_proc_in_list_4_0);
	MR_init_label3(hlds__goal_util__case_list_calls_proc_in_list_4_0,10,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__goal_util__case_list_calls_proc_in_list_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(hlds__goal_util__case_list_calls_proc_in_list_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__goal_util__case_list_calls_proc_in_list_4_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(3);
MR_def_label(hlds__goal_util__case_list_calls_proc_in_list_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 1);
	MR_np_call_localret_ent(hlds__goal_util__goal_calls_proc_in_list_2_4_0,
		hlds__goal_util__case_list_calls_proc_in_list_4_0_i4);
MR_def_label(hlds__goal_util__case_list_calls_proc_in_list_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(hlds__goal_util__case_list_calls_proc_in_list_4_0_i10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module44)
	MR_init_entry1(fn__hlds__goal_util__goal_calls_proc_in_list_2_0);
	MR_init_label2(fn__hlds__goal_util__goal_calls_proc_in_list_2_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__goal_util__goal_calls_proc_in_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_np_call_localret_ent(fn__set__init_0_0,
		fn__hlds__goal_util__goal_calls_proc_in_list_2_0_i2);
MR_def_label(fn__hlds__goal_util__goal_calls_proc_in_list_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__goal_util__goal_calls_proc_in_list_2_4_0,
		fn__hlds__goal_util__goal_calls_proc_in_list_2_0_i3);
MR_def_label(fn__hlds__goal_util__goal_calls_proc_in_list_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(set__to_sorted_list_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module45)
	MR_init_entry1(fn__hlds__goal_util__goal_list_calls_proc_in_list_2_0);
	MR_init_label2(fn__hlds__goal_util__goal_list_calls_proc_in_list_2_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__goal_util__goal_list_calls_proc_in_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_np_call_localret_ent(fn__set__init_0_0,
		fn__hlds__goal_util__goal_list_calls_proc_in_list_2_0_i2);
MR_def_label(fn__hlds__goal_util__goal_list_calls_proc_in_list_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__goal_util__goal_list_calls_proc_in_list_2_4_0,
		fn__hlds__goal_util__goal_list_calls_proc_in_list_2_0_i3);
MR_def_label(fn__hlds__goal_util__goal_list_calls_proc_in_list_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(set__to_sorted_list_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module46)
	MR_init_entry1(hlds__goal_util__goal_contains_reconstruction_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_util__goal_contains_reconstruction_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_111_110_116_97_105_110_115_95_114_101_99_111_110_115_116_114_117_99_116_105_111_110_95_95_91_49_93_95_48_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__member_2_1);

MR_BEGIN_MODULE(hlds__goal_util_module47)
	MR_init_entry1(hlds__goal_util__direct_subgoal_2_0);
	MR_init_label8(hlds__goal_util__direct_subgoal_2_0,4,6,30,31,10,11,32,14)
	MR_init_label2(hlds__goal_util__direct_subgoal_2_0,15,29)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_util__direct_subgoal_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,3)) {
		MR_GOTO_LAB(hlds__goal_util__direct_subgoal_2_0_i29);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(hlds__goal_util__direct_subgoal_2_0_i29) MR_AND
		MR_LABEL_AP(hlds__goal_util__direct_subgoal_2_0_i4) MR_AND
		MR_LABEL_AP(hlds__goal_util__direct_subgoal_2_0_i6) MR_AND
		MR_LABEL_AP(hlds__goal_util__direct_subgoal_2_0_i30) MR_AND
		MR_LABEL_AP(hlds__goal_util__direct_subgoal_2_0_i31) MR_AND
		MR_LABEL_AP(hlds__goal_util__direct_subgoal_2_0_i11) MR_AND
		MR_LABEL_AP(hlds__goal_util__direct_subgoal_2_0_i32) MR_AND
		MR_LABEL_AP(hlds__goal_util__direct_subgoal_2_0_i29));
MR_def_label(hlds__goal_util__direct_subgoal_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_ctfield(3, MR_tempr1, 2);
	MR_np_tailcall_ent(list__member_2_1);
	}
MR_def_label(hlds__goal_util__direct_subgoal_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_ctfield(3, MR_tempr1, 1);
	MR_np_tailcall_ent(list__member_2_1);
	}
MR_def_label(hlds__goal_util__direct_subgoal_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred hlds.goal_util.direct_subgoal/2-0", 2,
		MR_ENTRY(MR_do_fail));
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	MR_r2 = MR_ctfield(3, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(list__member_2_1,
		hlds__goal_util__direct_subgoal_2_0_i10);
MR_def_label(hlds__goal_util__direct_subgoal_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred hlds.goal_util.direct_subgoal/2-0", 2,
		MR_ENTRY(MR_do_fail));
MR_def_label(hlds__goal_util__direct_subgoal_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_const_mask_field(MR_r1, 1);
	MR_succeed();
MR_def_label(hlds__goal_util__direct_subgoal_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_proceed();
MR_def_label(hlds__goal_util__direct_subgoal_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred hlds.goal_util.direct_subgoal/2-0", 2,
		MR_LABEL_AP(hlds__goal_util__direct_subgoal_2_0_i14));
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_fv(2) = MR_ctfield(3, MR_tempr1, 4);
	MR_fv(1) = MR_ctfield(3, MR_tempr1, 3);
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_succeed();
	}
MR_def_label(hlds__goal_util__direct_subgoal_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(hlds__goal_util__direct_subgoal_2_0_i15);
	MR_r1 = MR_fv(1);
	MR_succeed();
MR_def_label(hlds__goal_util__direct_subgoal_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_fv(2);
	MR_succeed_discard();
MR_def_label(hlds__goal_util__direct_subgoal_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_GOTO(MR_ENTRY(MR_do_redo));
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module48)
	MR_init_entry1(hlds__goal_util__goal_contains_goal_2_0);
	MR_init_label3(hlds__goal_util__goal_contains_goal_2_0,2,3,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_util__goal_contains_goal_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred hlds.goal_util.goal_contains_goal/2-0", 1,
		MR_LABEL_AP(hlds__goal_util__goal_contains_goal_2_0_i2));
	MR_fv(1) = MR_r1;
	MR_succeed();
MR_def_label(hlds__goal_util__goal_contains_goal_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	MR_r1 = MR_ctfield(0, MR_fv(1), 0);
	MR_np_call_localret_ent(hlds__goal_util__direct_subgoal_2_0,
		hlds__goal_util__goal_contains_goal_2_0_i3);
MR_def_label(hlds__goal_util__goal_contains_goal_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_localcall_lab(hlds__goal_util__goal_contains_goal_2_0,
		hlds__goal_util__goal_contains_goal_2_0_i1);
MR_def_label(hlds__goal_util__goal_contains_goal_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
MR_decl_entry(solutions__solutions_2_1);

MR_BEGIN_MODULE(hlds__goal_util_module49)
	MR_init_entry1(hlds__goal_util__predids_from_goal_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_util__predids_from_goal_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__goal_util__goal_calls_pred_id_2_1);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_np_tailcall_ent(solutions__solutions_2_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(hlds__goal_util_module50)
	MR_init_entry1(hlds__goal_util__predids_from_goals_2_0);
	MR_init_label3(hlds__goal_util__predids_from_goals_2_0,14,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_util__predids_from_goals_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__goal_util__predids_from_goals_2_0_i14);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(hlds__goal_util__predids_from_goals_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__goal_util__goal_calls_pred_id_2_1);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr2 = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(1) = MR_ctfield(1, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	}
	MR_np_call_localret_ent(solutions__solutions_2_1,
		hlds__goal_util__predids_from_goals_2_0_i4);
MR_def_label(hlds__goal_util__predids_from_goals_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_localcall_lab(hlds__goal_util__predids_from_goals_2_0,
		hlds__goal_util__predids_from_goals_2_0_i5);
MR_def_label(hlds__goal_util__predids_from_goals_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module51)
	MR_init_entry1(hlds__goal_util__pred_proc_ids_from_goal_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_util__pred_proc_ids_from_goal_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__goal_util__goal_calls_2_1);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_np_tailcall_ent(solutions__solutions_2_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__prog_util__cons_id_arity_1_0);
MR_decl_entry(svvarset__new_vars_4_0);
MR_decl_entry(check_hlds__type_util__get_cons_id_arg_types_4_0);
MR_decl_entry(svmap__det_insert_from_corresponding_lists_4_0);
MR_decl_entry(hlds__instmap__lookup_var_3_0);
MR_decl_entry(check_hlds__inst_match__inst_expand_3_0);
MR_decl_entry(parse_tree__prog_mode__get_arg_insts_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_uni_mode_0;
MR_decl_entry(set__singleton_set_2_1);
MR_decl_entry(hlds__instmap__instmap_delta_init_reachable_1_0);
MR_decl_entry(hlds__instmap__instmap_delta_bind_var_to_functor_8_0);
MR_decl_entry(hlds__hlds_goal__goal_info_init_5_0);
MR_decl_entry(hlds__hlds_goal__goal_to_conj_list_2_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0);
MR_decl_entry(hlds__instmap__instmap_delta_apply_instmap_delta_4_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_determinism_1_0);
MR_decl_entry(parse_tree__prog_data__det_conjunction_detism_3_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_purity_1_0);

MR_BEGIN_MODULE(hlds__goal_util_module52)
	MR_init_entry1(hlds__goal_util__case_to_disjunct_11_0);
	MR_init_label8(hlds__goal_util__case_to_disjunct_11_0,2,3,4,5,6,7,9,10)
	MR_init_label8(hlds__goal_util__case_to_disjunct_11_0,8,12,14,15,16,17,18,19)
	MR_init_label8(hlds__goal_util__case_to_disjunct_11_0,20,21,22,23,24,25,26,27)
	MR_init_label1(hlds__goal_util__case_to_disjunct_11_0,28)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_util__case_to_disjunct_11_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(8) = MR_r6;
	MR_sv(11) = MR_r7;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_util__cons_id_arity_1_0,
		hlds__goal_util__case_to_disjunct_11_0_i2);
MR_def_label(hlds__goal_util__case_to_disjunct_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(svvarset__new_vars_4_0,
		hlds__goal_util__case_to_disjunct_11_0_i3);
MR_def_label(hlds__goal_util__case_to_disjunct_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(12) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(13) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(13);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(1);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__goal_util__case_to_disjunct_11_0_i4);
MR_def_label(hlds__goal_util__case_to_disjunct_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__type_util__get_cons_id_arg_types_4_0,
		hlds__goal_util__case_to_disjunct_11_0_i5);
MR_def_label(hlds__goal_util__case_to_disjunct_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(6);
	MR_r5 = MR_sv(8);
	MR_np_call_localret_ent(svmap__det_insert_from_corresponding_lists_4_0,
		hlds__goal_util__case_to_disjunct_11_0_i6);
MR_def_label(hlds__goal_util__case_to_disjunct_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__instmap__lookup_var_3_0,
		hlds__goal_util__case_to_disjunct_11_0_i7);
MR_def_label(hlds__goal_util__case_to_disjunct_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_expand_3_0,
		hlds__goal_util__case_to_disjunct_11_0_i9);
MR_def_label(hlds__goal_util__case_to_disjunct_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(parse_tree__prog_mode__get_arg_insts_4_0,
		hlds__goal_util__case_to_disjunct_11_0_i10);
MR_def_label(hlds__goal_util__case_to_disjunct_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__goal_util__case_to_disjunct_11_0_i8);
	}
	MR_r4 = MR_r2;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,6);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, uni_mode);
	MR_np_call_localret_ent(list__map_3_0,
		hlds__goal_util__case_to_disjunct_11_0_i15);
MR_def_label(hlds__goal_util__case_to_disjunct_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__goal_util__this_file_0_0,
		hlds__goal_util__case_to_disjunct_11_0_i12);
MR_def_label(hlds__goal_util__case_to_disjunct_11_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("case_to_disjunct - get_arg_insts failed", 39);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		hlds__goal_util__case_to_disjunct_11_0_i14);
MR_def_label(hlds__goal_util__case_to_disjunct_11_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(list__map_3_0,
		hlds__goal_util__case_to_disjunct_11_0_i15);
MR_def_label(hlds__goal_util__case_to_disjunct_11_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr5 = MR_sv(8);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr5;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 6);
	MR_tempr6 = MR_sv(1);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr6;
	MR_tempr7 = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr7;
	MR_tempr8 = MR_sv(6);
	MR_tfield(1, MR_tempr1, 2) = MR_tempr8;
	MR_tfield(1, MR_tempr1, 3) = MR_r1;
	MR_tfield(1, MR_tempr1, 4) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr1, 5) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr7;
	MR_tfield(1, MR_tempr3, 1) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr3, 2) = MR_tempr8;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 5);
	MR_sv(5) = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = MR_tempr6;
	MR_tfield(0, MR_tempr4, 1) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 2) = MR_tempr2;
	MR_tfield(0, MR_tempr4, 3) = MR_tempr1;
	MR_tfield(0, MR_tempr4, 4) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r1 = MR_sv(13);
	MR_r2 = MR_tempr6;
	}
	MR_np_call_localret_ent(set__singleton_set_2_1,
		hlds__goal_util__case_to_disjunct_11_0_i16);
MR_def_label(hlds__goal_util__case_to_disjunct_11_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_init_reachable_1_0,
		hlds__goal_util__case_to_disjunct_11_0_i17);
MR_def_label(hlds__goal_util__case_to_disjunct_11_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r6 = MR_sv(11);
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_bind_var_to_functor_8_0,
		hlds__goal_util__case_to_disjunct_11_0_i18);
MR_def_label(hlds__goal_util__case_to_disjunct_11_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_sv(6) = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = (MR_Integer) 0;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_5_0,
		hlds__goal_util__case_to_disjunct_11_0_i19);
MR_def_label(hlds__goal_util__case_to_disjunct_11_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_conj_list_2_0,
		hlds__goal_util__case_to_disjunct_11_0_i20);
MR_def_label(hlds__goal_util__case_to_disjunct_11_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		hlds__goal_util__case_to_disjunct_11_0_i21);
MR_def_label(hlds__goal_util__case_to_disjunct_11_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(13);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__goal_util__case_to_disjunct_11_0_i22);
MR_def_label(hlds__goal_util__case_to_disjunct_11_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		hlds__goal_util__case_to_disjunct_11_0_i23);
MR_def_label(hlds__goal_util__case_to_disjunct_11_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = (MR_Integer) 2;
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_apply_instmap_delta_4_0,
		hlds__goal_util__case_to_disjunct_11_0_i24);
MR_def_label(hlds__goal_util__case_to_disjunct_11_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		hlds__goal_util__case_to_disjunct_11_0_i25);
MR_def_label(hlds__goal_util__case_to_disjunct_11_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(parse_tree__prog_data__det_conjunction_detism_3_0,
		hlds__goal_util__case_to_disjunct_11_0_i26);
MR_def_label(hlds__goal_util__case_to_disjunct_11_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_purity_1_0,
		hlds__goal_util__case_to_disjunct_11_0_i27);
MR_def_label(hlds__goal_util__case_to_disjunct_11_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_5_0,
		hlds__goal_util__case_to_disjunct_11_0_i28);
MR_def_label(hlds__goal_util__case_to_disjunct_11_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(6);
	MR_decr_sp_and_return(14);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module53)
	MR_init_entry1(hlds__goal_util__switch_to_disjunction_10_0);
	MR_init_label3(hlds__goal_util__switch_to_disjunction_10_0,13,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_util__switch_to_disjunction_10_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__goal_util__switch_to_disjunction_10_0_i13);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_proceed();
MR_def_label(hlds__goal_util__switch_to_disjunction_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_sv(3) = MR_ctfield(1, MR_tempr3, 1);
	MR_tempr1 = MR_tempr3;
	MR_tempr2 = MR_ctfield(1, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	MR_r3 = MR_ctfield(0, MR_tempr2, 1);
	MR_r7 = MR_r6;
	MR_r6 = MR_r5;
	MR_r5 = MR_r4;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__goal_util__case_to_disjunct_11_0,
		hlds__goal_util__switch_to_disjunction_10_0_i4);
MR_def_label(hlds__goal_util__switch_to_disjunction_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r6 = MR_r4;
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r5 = MR_r3;
	MR_r3 = MR_sv(2);
	}
	MR_np_localcall_lab(hlds__goal_util__switch_to_disjunction_10_0,
		hlds__goal_util__switch_to_disjunction_10_0_i5);
MR_def_label(hlds__goal_util__switch_to_disjunction_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(hlds__instmap__instmap_delta_restrict_3_0);
MR_decl_entry(hlds__hlds_goal__goal_list_purity_2_0);

MR_BEGIN_MODULE(hlds__goal_util_module54)
	MR_init_entry1(hlds__goal_util__compute_disjunct_goal_info_4_0);
	MR_init_label8(hlds__goal_util__compute_disjunct_goal_info_4_0,2,3,4,5,6,7,8,9)
	MR_init_label5(hlds__goal_util__compute_disjunct_goal_info_4_0,10,11,12,13,14)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__goal_util__compute_disjunct_goal_info_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		hlds__goal_util__compute_disjunct_goal_info_4_0_i2);
MR_def_label(hlds__goal_util__compute_disjunct_goal_info_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		hlds__goal_util__compute_disjunct_goal_info_4_0_i3);
MR_def_label(hlds__goal_util__compute_disjunct_goal_info_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		hlds__goal_util__compute_disjunct_goal_info_4_0_i4);
MR_def_label(hlds__goal_util__compute_disjunct_goal_info_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r3 = MR_sv(6);
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__goal_util__compute_disjunct_goal_info_4_0_i5);
MR_def_label(hlds__goal_util__compute_disjunct_goal_info_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__goal_util__compute_disjunct_goal_info_4_0_i6);
MR_def_label(hlds__goal_util__compute_disjunct_goal_info_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		hlds__goal_util__compute_disjunct_goal_info_4_0_i7);
MR_def_label(hlds__goal_util__compute_disjunct_goal_info_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		hlds__goal_util__compute_disjunct_goal_info_4_0_i8);
MR_def_label(hlds__goal_util__compute_disjunct_goal_info_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r3 = (MR_Integer) 2;
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_apply_instmap_delta_4_0,
		hlds__goal_util__compute_disjunct_goal_info_4_0_i9);
MR_def_label(hlds__goal_util__compute_disjunct_goal_info_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_restrict_3_0,
		hlds__goal_util__compute_disjunct_goal_info_4_0_i10);
MR_def_label(hlds__goal_util__compute_disjunct_goal_info_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		hlds__goal_util__compute_disjunct_goal_info_4_0_i11);
MR_def_label(hlds__goal_util__compute_disjunct_goal_info_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		hlds__goal_util__compute_disjunct_goal_info_4_0_i12);
MR_def_label(hlds__goal_util__compute_disjunct_goal_info_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__prog_data__det_conjunction_detism_3_0,
		hlds__goal_util__compute_disjunct_goal_info_4_0_i13);
MR_def_label(hlds__goal_util__compute_disjunct_goal_info_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_list_purity_2_0,
		hlds__goal_util__compute_disjunct_goal_info_4_0_i14);
MR_def_label(hlds__goal_util__compute_disjunct_goal_info_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(hlds__hlds_goal__goal_info_init_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__conj_list_to_goal_3_0);
MR_decl_entry(parse_tree__prog_data__determinism_components_3_0);
MR_decl_entry(parse_tree__prog_data__det_negation_det_2_0);
MR_decl_entry(parse_tree__prog_data__determinism_components_3_1);
MR_decl_entry(hlds__hlds_goal__goal_info_set_determinism_3_0);
MR_decl_entry(hlds__instmap__instmap_delta_init_unreachable_1_0);

MR_BEGIN_MODULE(hlds__goal_util_module55)
	MR_init_entry1(hlds__goal_util__if_then_else_to_disjunction_5_0);
	MR_init_label8(hlds__goal_util__if_then_else_to_disjunction_5_0,2,3,4,5,6,7,8,9)
	MR_init_label8(hlds__goal_util__if_then_else_to_disjunction_5_0,10,11,12,13,14,15,16,17)
	MR_init_label8(hlds__goal_util__if_then_else_to_disjunction_5_0,18,23,24,25,26,28,27,30)
	MR_init_label7(hlds__goal_util__if_then_else_to_disjunction_5_0,38,39,40,41,42,43,44)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_util__if_then_else_to_disjunction_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		hlds__goal_util__if_then_else_to_disjunction_5_0_i2);
MR_def_label(hlds__goal_util__if_then_else_to_disjunction_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		hlds__goal_util__if_then_else_to_disjunction_5_0_i3);
MR_def_label(hlds__goal_util__if_then_else_to_disjunction_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		hlds__goal_util__if_then_else_to_disjunction_5_0_i4);
MR_def_label(hlds__goal_util__if_then_else_to_disjunction_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r4 = MR_sv(8);
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__goal_util__if_then_else_to_disjunction_5_0_i5);
MR_def_label(hlds__goal_util__if_then_else_to_disjunction_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__goal_util__if_then_else_to_disjunction_5_0_i6);
MR_def_label(hlds__goal_util__if_then_else_to_disjunction_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		hlds__goal_util__if_then_else_to_disjunction_5_0_i7);
MR_def_label(hlds__goal_util__if_then_else_to_disjunction_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		hlds__goal_util__if_then_else_to_disjunction_5_0_i8);
MR_def_label(hlds__goal_util__if_then_else_to_disjunction_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r3 = (MR_Integer) 2;
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_apply_instmap_delta_4_0,
		hlds__goal_util__if_then_else_to_disjunction_5_0_i9);
MR_def_label(hlds__goal_util__if_then_else_to_disjunction_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_restrict_3_0,
		hlds__goal_util__if_then_else_to_disjunction_5_0_i10);
MR_def_label(hlds__goal_util__if_then_else_to_disjunction_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_sv(5) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		hlds__goal_util__if_then_else_to_disjunction_5_0_i11);
MR_def_label(hlds__goal_util__if_then_else_to_disjunction_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_sv(6) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		hlds__goal_util__if_then_else_to_disjunction_5_0_i12);
MR_def_label(hlds__goal_util__if_then_else_to_disjunction_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(parse_tree__prog_data__det_conjunction_detism_3_0,
		hlds__goal_util__if_then_else_to_disjunction_5_0_i13);
MR_def_label(hlds__goal_util__if_then_else_to_disjunction_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(2) = MR_r1;
	MR_sv(6) = MR_tempr2;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_list_purity_2_0,
		hlds__goal_util__if_then_else_to_disjunction_5_0_i14);
MR_def_label(hlds__goal_util__if_then_else_to_disjunction_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_5_0,
		hlds__goal_util__if_then_else_to_disjunction_5_0_i15);
MR_def_label(hlds__goal_util__if_then_else_to_disjunction_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_goal__conj_list_to_goal_3_0,
		hlds__goal_util__if_then_else_to_disjunction_5_0_i16);
MR_def_label(hlds__goal_util__if_then_else_to_disjunction_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(5) = MR_ctfield(0, MR_sv(1), 1);
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		hlds__goal_util__if_then_else_to_disjunction_5_0_i17);
MR_def_label(hlds__goal_util__if_then_else_to_disjunction_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		hlds__goal_util__if_then_else_to_disjunction_5_0_i18);
MR_def_label(hlds__goal_util__if_then_else_to_disjunction_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r2,3)) {
		MR_GOTO_LAB(hlds__goal_util__if_then_else_to_disjunction_5_0_i23);
	}
	MR_r1 = MR_sv(6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_sv(5);
	MR_sv(5) = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__det_negation_det_2_0,
		hlds__goal_util__if_then_else_to_disjunction_5_0_i26);
MR_def_label(hlds__goal_util__if_then_else_to_disjunction_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_1,
		hlds__goal_util__if_then_else_to_disjunction_5_0_i24);
MR_def_label(hlds__goal_util__if_then_else_to_disjunction_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_determinism_3_0,
		hlds__goal_util__if_then_else_to_disjunction_5_0_i25);
MR_def_label(hlds__goal_util__if_then_else_to_disjunction_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(3,4,0);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_sv(1) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(5) = MR_tempr2;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__det_negation_det_2_0,
		hlds__goal_util__if_then_else_to_disjunction_5_0_i26);
MR_def_label(hlds__goal_util__if_then_else_to_disjunction_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__goal_util__if_then_else_to_disjunction_5_0_i28);
	}
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_GOTO_LAB(hlds__goal_util__if_then_else_to_disjunction_5_0_i27);
MR_def_label(hlds__goal_util__if_then_else_to_disjunction_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("goal_util.m", 11);
	MR_r2 = (MR_Word) MR_string_const("if_then_else_to_disjunction: inappropriate determinism in a negation.", 69);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		hlds__goal_util__if_then_else_to_disjunction_5_0_i27);
MR_def_label(hlds__goal_util__if_then_else_to_disjunction_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		hlds__goal_util__if_then_else_to_disjunction_5_0_i30);
MR_def_label(hlds__goal_util__if_then_else_to_disjunction_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(hlds__goal_util__if_then_else_to_disjunction_5_0_i38);
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_init_unreachable_1_0,
		hlds__goal_util__if_then_else_to_disjunction_5_0_i39);
MR_def_label(hlds__goal_util__if_then_else_to_disjunction_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_init_reachable_1_0,
		hlds__goal_util__if_then_else_to_disjunction_5_0_i39);
MR_def_label(hlds__goal_util__if_then_else_to_disjunction_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		hlds__goal_util__if_then_else_to_disjunction_5_0_i40);
MR_def_label(hlds__goal_util__if_then_else_to_disjunction_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_purity_1_0,
		hlds__goal_util__if_then_else_to_disjunction_5_0_i41);
MR_def_label(hlds__goal_util__if_then_else_to_disjunction_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_5_0,
		hlds__goal_util__if_then_else_to_disjunction_5_0_i42);
MR_def_label(hlds__goal_util__if_then_else_to_disjunction_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_sv(1) = MR_tempr2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__goal_util__compute_disjunct_goal_info_4_0,
		hlds__goal_util__if_then_else_to_disjunction_5_0_i43);
MR_def_label(hlds__goal_util__if_then_else_to_disjunction_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__conj_list_to_goal_3_0,
		hlds__goal_util__if_then_else_to_disjunction_5_0_i44);
MR_def_label(hlds__goal_util__if_then_else_to_disjunction_5_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr2;
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module56)
	MR_init_entry1(hlds__goal_util__flatten_conj_2_0);
	MR_init_label3(hlds__goal_util__flatten_conj_2_0,27,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_util__flatten_conj_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__goal_util__flatten_conj_2_0_i27);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(hlds__goal_util__flatten_conj_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_np_localcall_lab(hlds__goal_util__flatten_conj_2_0,
		hlds__goal_util__flatten_conj_2_0_i4);
MR_def_label(hlds__goal_util__flatten_conj_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_sv(1), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(hlds__goal_util__flatten_conj_2_0_i5);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 1);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(hlds__goal_util__flatten_conj_2_0_i5);
	}
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_ctfield(3, MR_tempr1, 2);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(list__append_3_1);
	}
MR_def_label(hlds__goal_util__flatten_conj_2_0,5)
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

MR_decl_entry(hlds__hlds_goal__goal_list_nonlocals_2_0);
MR_decl_entry(hlds__hlds_goal__goal_list_instmap_delta_2_0);
MR_decl_entry(hlds__hlds_goal__goal_list_determinism_2_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_context_1_0);

MR_BEGIN_MODULE(hlds__goal_util_module57)
	MR_init_entry1(hlds__goal_util__create_conj_4_0);
	MR_init_label6(hlds__goal_util__create_conj_4_0,2,3,4,5,6,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_util__create_conj_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tempr4 = MR_r1;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_sv(3) = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 1) = MR_r3;
	MR_tfield(3, MR_tempr3, 2) = MR_tempr2;
	MR_sv(1) = MR_tempr4;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_list_nonlocals_2_0,
		hlds__goal_util__create_conj_4_0_i2);
MR_def_label(hlds__goal_util__create_conj_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_list_instmap_delta_2_0,
		hlds__goal_util__create_conj_4_0_i3);
MR_def_label(hlds__goal_util__create_conj_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_list_determinism_2_0,
		hlds__goal_util__create_conj_4_0_i4);
MR_def_label(hlds__goal_util__create_conj_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_ctfield(3, MR_sv(3), 2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_list_purity_2_0,
		hlds__goal_util__create_conj_4_0_i5);
MR_def_label(hlds__goal_util__create_conj_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		hlds__goal_util__create_conj_4_0_i6);
MR_def_label(hlds__goal_util__create_conj_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_6_0,
		hlds__goal_util__create_conj_4_0_i7);
MR_def_label(hlds__goal_util__create_conj_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__goal_form__goal_cannot_loop_or_throw_1_0);
MR_decl_entry(hlds__goal_form__goal_cannot_loop_or_throw_2_0);

MR_BEGIN_MODULE(hlds__goal_util_module58)
	MR_init_entry1(hlds__goal_util__reordering_maintains_termination_old_4_0);
	MR_init_label8(hlds__goal_util__reordering_maintains_termination_old_4_0,2,3,4,5,11,21,15,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_util__reordering_maintains_termination_old_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		hlds__goal_util__reordering_maintains_termination_old_4_0_i2);
MR_def_label(hlds__goal_util__reordering_maintains_termination_old_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		hlds__goal_util__reordering_maintains_termination_old_4_0_i3);
MR_def_label(hlds__goal_util__reordering_maintains_termination_old_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_sv(5) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		hlds__goal_util__reordering_maintains_termination_old_4_0_i4);
MR_def_label(hlds__goal_util__reordering_maintains_termination_old_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		hlds__goal_util__reordering_maintains_termination_old_4_0_i5);
MR_def_label(hlds__goal_util__reordering_maintains_termination_old_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(hlds__goal_util__reordering_maintains_termination_old_4_0_i21);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__goal_form__goal_cannot_loop_or_throw_1_0,
		hlds__goal_util__reordering_maintains_termination_old_4_0_i11);
MR_def_label(hlds__goal_util__reordering_maintains_termination_old_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(hlds__goal_util__reordering_maintains_termination_old_4_0_i21);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(hlds__goal_util__reordering_maintains_termination_old_4_0_i1);
	}
	}
MR_def_label(hlds__goal_util__reordering_maintains_termination_old_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	if (MR_INT_NE(MR_sv(5),0)) {
		MR_GOTO_LAB(hlds__goal_util__reordering_maintains_termination_old_4_0_i15);
	}
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(hlds__goal_form__goal_cannot_loop_or_throw_2_0);
MR_def_label(hlds__goal_util__reordering_maintains_termination_old_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(hlds__goal_util__reordering_maintains_termination_old_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__goal_info_get_goal_purity_3_0);
MR_decl_entry(hlds__instmap__instmap_changed_vars_5_0);
MR_decl_entry(set__empty_1_0);

MR_BEGIN_MODULE(hlds__goal_util_module59)
	MR_init_entry1(hlds__goal_util__can_reorder_goals_old_7_0);
	MR_init_label8(hlds__goal_util__can_reorder_goals_old_7_0,2,3,10,13,14,15,16,17)
	MR_init_label8(hlds__goal_util__can_reorder_goals_old_7_0,20,44,12,23,24,25,26,27)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_util__can_reorder_goals_old_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_r6;
	MR_tempr2 = MR_r7;
	MR_sv(7) = MR_tempr2;
	MR_sv(8) = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_goal_purity_3_0,
		hlds__goal_util__can_reorder_goals_old_7_0_i2);
MR_def_label(hlds__goal_util__can_reorder_goals_old_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_sv(8) = MR_tempr1;
	MR_sv(9) = MR_r2;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_goal_purity_3_0,
		hlds__goal_util__can_reorder_goals_old_7_0_i3);
MR_def_label(hlds__goal_util__can_reorder_goals_old_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,2)) {
		MR_GOTO_LAB(hlds__goal_util__can_reorder_goals_old_7_0_i44);
	}
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(hlds__goal_util__can_reorder_goals_old_7_0_i44);
	}
	if (MR_INT_EQ(MR_sv(8),2)) {
		MR_GOTO_LAB(hlds__goal_util__can_reorder_goals_old_7_0_i44);
	}
	if (MR_INT_NE(MR_sv(9),1)) {
		MR_GOTO_LAB(hlds__goal_util__can_reorder_goals_old_7_0_i44);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(hlds__goal_util__reordering_maintains_termination_old_4_0,
		hlds__goal_util__can_reorder_goals_old_7_0_i10);
MR_def_label(hlds__goal_util__can_reorder_goals_old_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__goal_util__can_reorder_goals_old_7_0_i44);
	}
	MR_sv(3) = MR_ctfield(0, MR_sv(7), 1);
	MR_r1 = MR_ctfield(0, MR_sv(5), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		hlds__goal_util__can_reorder_goals_old_7_0_i13);
MR_def_label(hlds__goal_util__can_reorder_goals_old_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__instmap__apply_instmap_delta_3_0,
		hlds__goal_util__can_reorder_goals_old_7_0_i14);
MR_def_label(hlds__goal_util__can_reorder_goals_old_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(hlds__instmap__instmap_changed_vars_5_0,
		hlds__goal_util__can_reorder_goals_old_7_0_i15);
MR_def_label(hlds__goal_util__can_reorder_goals_old_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		hlds__goal_util__can_reorder_goals_old_7_0_i16);
MR_def_label(hlds__goal_util__can_reorder_goals_old_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__goal_util__can_reorder_goals_old_7_0_i17);
MR_def_label(hlds__goal_util__can_reorder_goals_old_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(set__empty_1_0,
		hlds__goal_util__can_reorder_goals_old_7_0_i20);
MR_def_label(hlds__goal_util__can_reorder_goals_old_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(hlds__goal_util__can_reorder_goals_old_7_0_i12);
	}
MR_def_label(hlds__goal_util__can_reorder_goals_old_7_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_r1 = MR_FALSE;
	MR_proceed();
MR_def_label(hlds__goal_util__can_reorder_goals_old_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_ctfield(0, MR_sv(5), 1);
	MR_r1 = MR_ctfield(0, MR_sv(7), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		hlds__goal_util__can_reorder_goals_old_7_0_i23);
MR_def_label(hlds__goal_util__can_reorder_goals_old_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__instmap__apply_instmap_delta_3_0,
		hlds__goal_util__can_reorder_goals_old_7_0_i24);
MR_def_label(hlds__goal_util__can_reorder_goals_old_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(hlds__instmap__instmap_changed_vars_5_0,
		hlds__goal_util__can_reorder_goals_old_7_0_i25);
MR_def_label(hlds__goal_util__can_reorder_goals_old_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		hlds__goal_util__can_reorder_goals_old_7_0_i26);
MR_def_label(hlds__goal_util__can_reorder_goals_old_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__goal_util__can_reorder_goals_old_7_0_i27);
MR_def_label(hlds__goal_util__can_reorder_goals_old_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(set__empty_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__goal_form__goal_can_loop_or_throw_6_0);

MR_BEGIN_MODULE(hlds__goal_util_module60)
	MR_init_entry1(hlds__goal_util__reordering_maintains_termination_8_0);
	MR_init_label8(hlds__goal_util__reordering_maintains_termination_8_0,2,3,4,5,6,7,11,12)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_util__reordering_maintains_termination_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(5) = MR_r4;
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		hlds__goal_util__reordering_maintains_termination_8_0_i2);
MR_def_label(hlds__goal_util__reordering_maintains_termination_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		hlds__goal_util__reordering_maintains_termination_8_0_i3);
MR_def_label(hlds__goal_util__reordering_maintains_termination_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		hlds__goal_util__reordering_maintains_termination_8_0_i4);
MR_def_label(hlds__goal_util__reordering_maintains_termination_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		hlds__goal_util__reordering_maintains_termination_8_0_i5);
MR_def_label(hlds__goal_util__reordering_maintains_termination_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__goal_form__goal_can_loop_or_throw_6_0,
		hlds__goal_util__reordering_maintains_termination_8_0_i6);
MR_def_label(hlds__goal_util__reordering_maintains_termination_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(hlds__goal_util__reordering_maintains_termination_8_0_i7);
	}
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(hlds__goal_util__reordering_maintains_termination_8_0_i7);
	}
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(hlds__goal_util__reordering_maintains_termination_8_0_i7);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(6);
MR_def_label(hlds__goal_util__reordering_maintains_termination_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__goal_form__goal_can_loop_or_throw_6_0,
		hlds__goal_util__reordering_maintains_termination_8_0_i11);
MR_def_label(hlds__goal_util__reordering_maintains_termination_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(hlds__goal_util__reordering_maintains_termination_8_0_i12);
	}
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(hlds__goal_util__reordering_maintains_termination_8_0_i12);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(6);
MR_def_label(hlds__goal_util__reordering_maintains_termination_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module61)
	MR_init_entry1(hlds__goal_util__can_reorder_goals_11_0);
	MR_init_label8(hlds__goal_util__can_reorder_goals_11_0,2,3,7,9,11,6,5,14)
	MR_init_label8(hlds__goal_util__can_reorder_goals_11_0,16,18,19,20,21,22,25,17)
	MR_init_label7(hlds__goal_util__can_reorder_goals_11_0,28,29,30,31,32,35,27)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_util__can_reorder_goals_11_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r5;
	MR_tempr2 = MR_r6;
	MR_sv(6) = MR_tempr2;
	MR_sv(7) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(9) = MR_r7;
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_goal_purity_3_0,
		hlds__goal_util__can_reorder_goals_11_0_i2);
MR_def_label(hlds__goal_util__can_reorder_goals_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_sv(7) = MR_tempr1;
	MR_sv(8) = MR_r2;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_goal_purity_3_0,
		hlds__goal_util__can_reorder_goals_11_0_i3);
MR_def_label(hlds__goal_util__can_reorder_goals_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(7),2)) {
		MR_GOTO_LAB(hlds__goal_util__can_reorder_goals_11_0_i7);
	}
	MR_r2 = MR_sv(9);
	MR_GOTO_LAB(hlds__goal_util__can_reorder_goals_11_0_i6);
MR_def_label(hlds__goal_util__can_reorder_goals_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(hlds__goal_util__can_reorder_goals_11_0_i9);
	}
	MR_r2 = MR_sv(9);
	MR_GOTO_LAB(hlds__goal_util__can_reorder_goals_11_0_i6);
MR_def_label(hlds__goal_util__can_reorder_goals_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(8),0)) {
		MR_GOTO_LAB(hlds__goal_util__can_reorder_goals_11_0_i11);
	}
	MR_r2 = MR_sv(9);
	MR_GOTO_LAB(hlds__goal_util__can_reorder_goals_11_0_i6);
MR_def_label(hlds__goal_util__can_reorder_goals_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(hlds__goal_util__can_reorder_goals_11_0_i5);
	}
	MR_r2 = MR_sv(9);
MR_def_label(hlds__goal_util__can_reorder_goals_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(10);
MR_def_label(hlds__goal_util__can_reorder_goals_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(hlds__goal_util__reordering_maintains_termination_8_0,
		hlds__goal_util__can_reorder_goals_11_0_i14);
MR_def_label(hlds__goal_util__can_reorder_goals_11_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(hlds__goal_util__can_reorder_goals_11_0_i16);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(10);
MR_def_label(hlds__goal_util__can_reorder_goals_11_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(7) = MR_ctfield(0, MR_sv(6), 1);
	MR_r1 = MR_ctfield(0, MR_sv(4), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		hlds__goal_util__can_reorder_goals_11_0_i18);
MR_def_label(hlds__goal_util__can_reorder_goals_11_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__instmap__apply_instmap_delta_3_0,
		hlds__goal_util__can_reorder_goals_11_0_i19);
MR_def_label(hlds__goal_util__can_reorder_goals_11_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(hlds__instmap__instmap_changed_vars_5_0,
		hlds__goal_util__can_reorder_goals_11_0_i20);
MR_def_label(hlds__goal_util__can_reorder_goals_11_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		hlds__goal_util__can_reorder_goals_11_0_i21);
MR_def_label(hlds__goal_util__can_reorder_goals_11_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__goal_util__can_reorder_goals_11_0_i22);
MR_def_label(hlds__goal_util__can_reorder_goals_11_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(set__empty_1_0,
		hlds__goal_util__can_reorder_goals_11_0_i25);
MR_def_label(hlds__goal_util__can_reorder_goals_11_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(hlds__goal_util__can_reorder_goals_11_0_i17);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(10);
MR_def_label(hlds__goal_util__can_reorder_goals_11_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_ctfield(0, MR_sv(4), 1);
	MR_r1 = MR_ctfield(0, MR_sv(6), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		hlds__goal_util__can_reorder_goals_11_0_i28);
MR_def_label(hlds__goal_util__can_reorder_goals_11_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__instmap__apply_instmap_delta_3_0,
		hlds__goal_util__can_reorder_goals_11_0_i29);
MR_def_label(hlds__goal_util__can_reorder_goals_11_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(hlds__instmap__instmap_changed_vars_5_0,
		hlds__goal_util__can_reorder_goals_11_0_i30);
MR_def_label(hlds__goal_util__can_reorder_goals_11_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		hlds__goal_util__can_reorder_goals_11_0_i31);
MR_def_label(hlds__goal_util__can_reorder_goals_11_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__goal_util__can_reorder_goals_11_0_i32);
MR_def_label(hlds__goal_util__can_reorder_goals_11_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(set__empty_1_0,
		hlds__goal_util__can_reorder_goals_11_0_i35);
MR_def_label(hlds__goal_util__can_reorder_goals_11_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(hlds__goal_util__can_reorder_goals_11_0_i27);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(10);
MR_def_label(hlds__goal_util__can_reorder_goals_11_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__length_2_0);
MR_decl_entry(hlds__pred_table__lookup_builtin_pred_proc_id_8_0);
MR_decl_entry(fn__hlds__hlds_pred__invalid_pred_id_0_0);
MR_decl_entry(fn__hlds__hlds_pred__builtin_state_4_0);
MR_decl_entry(set__init_1_0);
MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_purity_2_0);
MR_decl_entry(libs__compiler_util__expect_3_0);

MR_BEGIN_MODULE(hlds__goal_util_module62)
	MR_init_entry1(hlds__goal_util__generate_simple_call_12_0);
	MR_init_label8(hlds__goal_util__generate_simple_call_12_0,2,3,4,5,6,7,8,16)
	MR_init_label6(hlds__goal_util__generate_simple_call_12_0,17,18,19,20,21,22)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_util__generate_simple_call_12_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(7) = MR_tempr1;
	MR_sv(8) = MR_r8;
	MR_sv(9) = MR_r9;
	MR_sv(10) = MR_r10;
	MR_sv(11) = MR_r11;
	MR_sv(12) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(13) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(13);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__length_2_0,
		hlds__goal_util__generate_simple_call_12_0_i2);
MR_def_label(hlds__goal_util__generate_simple_call_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_np_call_localret_ent(hlds__pred_table__lookup_builtin_pred_proc_id_8_0,
		hlds__goal_util__generate_simple_call_12_0_i3);
MR_def_label(hlds__goal_util__generate_simple_call_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__invalid_pred_id_0_0,
		hlds__goal_util__generate_simple_call_12_0_i4);
MR_def_label(hlds__goal_util__generate_simple_call_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__builtin_state_4_0,
		hlds__goal_util__generate_simple_call_12_0_i5);
MR_def_label(hlds__goal_util__generate_simple_call_12_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 6);
	MR_sv(1) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 2) = MR_sv(7);
	MR_tfield(1, MR_tempr2, 3) = MR_r1;
	MR_tfield(1, MR_tempr2, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr2, 5) = MR_tempr1;
	MR_r1 = MR_sv(13);
	}
	MR_np_call_localret_ent(set__init_1_0,
		hlds__goal_util__generate_simple_call_12_0_i6);
MR_def_label(hlds__goal_util__generate_simple_call_12_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(13);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__goal_util__generate_simple_call_12_0_i7);
MR_def_label(hlds__goal_util__generate_simple_call_12_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		hlds__goal_util__generate_simple_call_12_0_i8);
MR_def_label(hlds__goal_util__generate_simple_call_12_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(hlds__goal_util__generate_simple_call_12_0_i16);
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_init_unreachable_1_0,
		hlds__goal_util__generate_simple_call_12_0_i17);
MR_def_label(hlds__goal_util__generate_simple_call_12_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_from_assoc_list_2_0,
		hlds__goal_util__generate_simple_call_12_0_i17);
MR_def_label(hlds__goal_util__generate_simple_call_12_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		hlds__goal_util__generate_simple_call_12_0_i18);
MR_def_label(hlds__goal_util__generate_simple_call_12_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_purity_2_0,
		hlds__goal_util__generate_simple_call_12_0_i19);
MR_def_label(hlds__goal_util__generate_simple_call_12_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__goal_util__IntroducedFrom__pred__generate_simple_call__1483__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("goal_util.m", 11);
	MR_r3 = (MR_Word) MR_string_const("generate_simple_call: purity disagreement", 41);
	}
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		hlds__goal_util__generate_simple_call_12_0_i20);
MR_def_label(hlds__goal_util__generate_simple_call_12_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(11);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_6_0,
		hlds__goal_util__generate_simple_call_12_0_i21);
MR_def_label(hlds__goal_util__generate_simple_call_12_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, goal_feature);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal_info);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,7);
	MR_r4 = MR_sv(8);
	MR_np_call_localret_ent(list__foldl_4_1,
		hlds__goal_util__generate_simple_call_12_0_i22);
MR_def_label(hlds__goal_util__generate_simple_call_12_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(14);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module63)
	MR_init_entry1(hlds__goal_util__generate_foreign_proc_16_0);
	MR_init_label8(hlds__goal_util__generate_foreign_proc_16_0,2,3,4,5,6,7,8,16)
	MR_init_label6(hlds__goal_util__generate_foreign_proc_16_0,17,18,19,20,21,22)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_util__generate_foreign_proc_16_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(16);
	MR_sv(16) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r8;
	MR_sv(8) = MR_tempr1;
	MR_sv(9) = MR_r9;
	MR_sv(10) = MR_r10;
	MR_sv(11) = MR_r11;
	MR_sv(12) = MR_r12;
	MR_sv(13) = MR_r13;
	MR_sv(14) = MR_r14;
	MR_sv(15) = MR_r15;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__length_2_0,
		hlds__goal_util__generate_foreign_proc_16_0_i2);
MR_def_label(hlds__goal_util__generate_foreign_proc_16_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_np_call_localret_ent(hlds__pred_table__lookup_builtin_pred_proc_id_8_0,
		hlds__goal_util__generate_foreign_proc_16_0_i3);
MR_def_label(hlds__goal_util__generate_foreign_proc_16_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 8);
	MR_sv(2) = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(7);
	MR_tempr3 = MR_r1;
	MR_tfield(3, MR_tempr2, 2) = MR_tempr3;
	MR_tfield(3, MR_tempr2, 3) = MR_r2;
	MR_tempr4 = MR_sv(8);
	MR_tfield(3, MR_tempr2, 4) = MR_tempr4;
	MR_tfield(3, MR_tempr2, 5) = MR_sv(9);
	MR_tfield(3, MR_tempr2, 6) = MR_sv(10);
	MR_tfield(3, MR_tempr2, 7) = MR_tempr1;
	MR_sv(1) = MR_tempr3;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_r2 = MR_sv(7);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,8);
	MR_r4 = MR_tempr4;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		hlds__goal_util__generate_foreign_proc_16_0_i4);
MR_def_label(hlds__goal_util__generate_foreign_proc_16_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_r2 = MR_sv(7);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,9);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(fn__list__map_2_0,
		hlds__goal_util__generate_foreign_proc_16_0_i5);
MR_def_label(hlds__goal_util__generate_foreign_proc_16_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__goal_util__generate_foreign_proc_16_0_i6);
MR_def_label(hlds__goal_util__generate_foreign_proc_16_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		hlds__goal_util__generate_foreign_proc_16_0_i7);
MR_def_label(hlds__goal_util__generate_foreign_proc_16_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		hlds__goal_util__generate_foreign_proc_16_0_i8);
MR_def_label(hlds__goal_util__generate_foreign_proc_16_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(hlds__goal_util__generate_foreign_proc_16_0_i16);
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_init_unreachable_1_0,
		hlds__goal_util__generate_foreign_proc_16_0_i17);
MR_def_label(hlds__goal_util__generate_foreign_proc_16_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(13);
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_from_assoc_list_2_0,
		hlds__goal_util__generate_foreign_proc_16_0_i17);
MR_def_label(hlds__goal_util__generate_foreign_proc_16_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		hlds__goal_util__generate_foreign_proc_16_0_i18);
MR_def_label(hlds__goal_util__generate_foreign_proc_16_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_purity_2_0,
		hlds__goal_util__generate_foreign_proc_16_0_i19);
MR_def_label(hlds__goal_util__generate_foreign_proc_16_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,9);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__goal_util__IntroducedFrom__pred__generate_foreign_proc__1516__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("goal_util.m", 11);
	MR_r3 = (MR_Word) MR_string_const("generate_simple_call: purity disagreement", 41);
	}
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		hlds__goal_util__generate_foreign_proc_16_0_i20);
MR_def_label(hlds__goal_util__generate_foreign_proc_16_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(15);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_6_0,
		hlds__goal_util__generate_foreign_proc_16_0_i21);
MR_def_label(hlds__goal_util__generate_foreign_proc_16_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, goal_feature);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal_info);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,10);
	MR_r4 = MR_sv(12);
	MR_np_call_localret_ent(list__foldl_4_1,
		hlds__goal_util__generate_foreign_proc_16_0_i22);
MR_def_label(hlds__goal_util__generate_foreign_proc_16_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(16);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__prog_mode__in_mode_1_0);
MR_decl_entry(fn__parse_tree__prog_mode__out_mode_1_0);

MR_BEGIN_MODULE(hlds__goal_util_module64)
	MR_init_entry1(hlds__goal_util__generate_cast_with_insts_7_0);
	MR_init_label5(hlds__goal_util__generate_cast_with_insts_7_0,2,3,4,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_util__generate_cast_with_insts_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr3 = MR_r3;
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		hlds__goal_util__generate_cast_with_insts_7_0_i2);
MR_def_label(hlds__goal_util__generate_cast_with_insts_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_from_assoc_list_2_0,
		hlds__goal_util__generate_cast_with_insts_7_0_i3);
MR_def_label(hlds__goal_util__generate_cast_with_insts_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 0;
	MR_r5 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_6_0,
		hlds__goal_util__generate_cast_with_insts_7_0_i4);
MR_def_label(hlds__goal_util__generate_cast_with_insts_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(2), 3, (MR_Integer) 1);
	MR_tfield(3, MR_sv(2), 0) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__in_mode_1_0,
		hlds__goal_util__generate_cast_with_insts_7_0_i5);
MR_def_label(hlds__goal_util__generate_cast_with_insts_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__out_mode_1_0,
		hlds__goal_util__generate_cast_with_insts_7_0_i6);
MR_def_label(hlds__goal_util__generate_cast_with_insts_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 4);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(2, MR_tempr1, 2) = MR_tempr2;
	MR_tfield(2, MR_tempr1, 3) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = MR_sv(1);
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__prog_mode__ground_inst_0_0);

MR_BEGIN_MODULE(hlds__goal_util_module65)
	MR_init_entry1(hlds__goal_util__generate_cast_5_0);
	MR_init_label1(hlds__goal_util__generate_cast_5_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_util__generate_cast_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__ground_inst_0_0,
		hlds__goal_util__generate_cast_5_0_i2);
MR_def_label(hlds__goal_util__generate_cast_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_r4;
	MR_r6 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(hlds__goal_util__generate_cast_with_insts_7_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__sub_string_search_3_0);

MR_BEGIN_MODULE(hlds__goal_util_module66)
	MR_init_entry1(hlds__goal_util__foreign_code_uses_variable_2_0);
	MR_init_label6(hlds__goal_util__foreign_code_uses_variable_2_0,3,10,14,18,28,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_util__foreign_code_uses_variable_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(hlds__goal_util__foreign_code_uses_variable_2_0_i3);
	}
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_np_tailcall_ent(string__sub_string_search_3_0);
MR_def_label(hlds__goal_util__foreign_code_uses_variable_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(hlds__goal_util__foreign_code_uses_variable_2_0_i1);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 7);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 4);
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 2);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	}
	MR_np_call_localret_ent(string__sub_string_search_3_0,
		hlds__goal_util__foreign_code_uses_variable_2_0_i10);
MR_def_label(hlds__goal_util__foreign_code_uses_variable_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(hlds__goal_util__foreign_code_uses_variable_2_0_i28);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(string__sub_string_search_3_0,
		hlds__goal_util__foreign_code_uses_variable_2_0_i14);
MR_def_label(hlds__goal_util__foreign_code_uses_variable_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(hlds__goal_util__foreign_code_uses_variable_2_0_i28);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(string__sub_string_search_3_0,
		hlds__goal_util__foreign_code_uses_variable_2_0_i18);
MR_def_label(hlds__goal_util__foreign_code_uses_variable_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(hlds__goal_util__foreign_code_uses_variable_2_0_i28);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(string__sub_string_search_3_0);
MR_def_label(hlds__goal_util__foreign_code_uses_variable_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
MR_def_label(hlds__goal_util__foreign_code_uses_variable_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__goal_info_has_feature_2_0);

MR_BEGIN_MODULE(hlds__goal_util_module67)
	MR_init_entry1(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0);
	MR_init_label8(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0,49,10,50,12,51,14,52,16)
	MR_init_label8(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0,53,18,54,21,20,23,24,25)
	MR_init_label2(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0,27,48)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__goal_util__maybe_strip_equality_pretest_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_tempr1;
	if (MR_INT_NE(MR_tag(MR_tempr1),3)) {
		MR_GOTO_LAB(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0_i48);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_tempr1, 0),
		MR_LABEL_AP(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0_i48) MR_AND
		MR_LABEL_AP(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0_i49) MR_AND
		MR_LABEL_AP(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0_i50) MR_AND
		MR_LABEL_AP(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0_i51) MR_AND
		MR_LABEL_AP(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0_i52) MR_AND
		MR_LABEL_AP(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0_i53) MR_AND
		MR_LABEL_AP(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0_i54) MR_AND
		MR_LABEL_AP(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0_i27));
	}
MR_def_label(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_tempr1 = MR_tempr2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,11);
	MR_r4 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__hlds__goal_util__maybe_strip_equality_pretest_1_0_i10);
MR_def_label(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(1);
	MR_decr_sp_and_return(6);
	}
MR_def_label(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,12);
	MR_r4 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__hlds__goal_util__maybe_strip_equality_pretest_1_0_i12);
MR_def_label(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(1);
	MR_decr_sp_and_return(6);
	}
MR_def_label(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_tempr2, 1);
	MR_sv(3) = MR_ctfield(3, MR_tempr2, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	MR_tempr1 = MR_tempr2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,13);
	MR_r4 = MR_ctfield(3, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__hlds__goal_util__maybe_strip_equality_pretest_1_0_i14);
MR_def_label(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(1);
	MR_decr_sp_and_return(6);
	}
MR_def_label(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_r2, 1);
	MR_np_localcall_lab(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0,
		fn__hlds__goal_util__maybe_strip_equality_pretest_1_0_i16);
MR_def_label(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(1);
	MR_decr_sp_and_return(6);
	}
MR_def_label(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 1);
	MR_r1 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_localcall_lab(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0,
		fn__hlds__goal_util__maybe_strip_equality_pretest_1_0_i18);
MR_def_label(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(1);
	MR_decr_sp_and_return(6);
	}
MR_def_label(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(5) = MR_ctfield(3, MR_tempr2, 4);
	MR_sv(4) = MR_ctfield(3, MR_tempr2, 3);
	MR_sv(3) = MR_ctfield(3, MR_tempr2, 2);
	MR_sv(2) = MR_ctfield(3, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(0, MR_r1, 1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 17;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_has_feature_2_0,
		fn__hlds__goal_util__maybe_strip_equality_pretest_1_0_i21);
MR_def_label(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0_i20);
	}
	MR_r1 = MR_sv(5);
	MR_decr_sp_and_return(6);
MR_def_label(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_localcall_lab(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0,
		fn__hlds__goal_util__maybe_strip_equality_pretest_1_0_i23);
MR_def_label(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_localcall_lab(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0,
		fn__hlds__goal_util__maybe_strip_equality_pretest_1_0_i24);
MR_def_label(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_localcall_lab(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0,
		fn__hlds__goal_util__maybe_strip_equality_pretest_1_0_i25);
MR_def_label(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 4) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(1);
	MR_decr_sp_and_return(6);
	}
MR_def_label(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("goal_util.m", 11);
	MR_r2 = (MR_Word) MR_string_const("maybe_strip_equality_pretest: shorthand", 39);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module68)
	MR_init_entry1(hlds__goal_util__attach_features_to_case_3_0);
	MR_init_label2(hlds__goal_util__attach_features_to_case_3_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__goal_util__attach_features_to_case_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 0);
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(hlds__goal_util__attach_features_goal_expr_3_0,
		hlds__goal_util__attach_features_to_case_3_0_i2);
MR_def_label(hlds__goal_util__attach_features_to_case_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, goal_feature);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal_info);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,14);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(list__foldl_4_1,
		hlds__goal_util__attach_features_to_case_3_0_i3);
MR_def_label(hlds__goal_util__attach_features_to_case_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module69)
	MR_init_entry1(hlds__goal_util__clause_size_increment_3_0);
	MR_init_label1(hlds__goal_util__clause_size_increment_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__goal_util__clause_size_increment_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r1 = MR_ctfield(0, MR_ctfield(0, MR_r1, 1), 0);
	MR_np_call_localret_ent(hlds__goal_util__goal_expr_size_2_0,
		hlds__goal_util__clause_size_increment_3_0_i2);
MR_def_label(hlds__goal_util__clause_size_increment_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) MR_r1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module70)
	MR_init_entry1(fn__hlds__goal_util__maybe_strip_equality_pretest_case_1_0);
	MR_init_label1(fn__hlds__goal_util__maybe_strip_equality_pretest_case_1_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__goal_util__maybe_strip_equality_pretest_case_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_np_call_localret_ent(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0,
		fn__hlds__goal_util__maybe_strip_equality_pretest_case_1_0_i2);
MR_def_label(fn__hlds__goal_util__maybe_strip_equality_pretest_case_1_0,2)
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


MR_BEGIN_MODULE(hlds__goal_util_module71)
	MR_init_entry1(__Unify___hlds__goal_util__is_leaf_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___hlds__goal_util__is_leaf_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(hlds__goal_util_module72)
	MR_init_entry1(__Compare___hlds__goal_util__is_leaf_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___hlds__goal_util__is_leaf_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_rtti__rtti_lookup_type_info_locn_3_0);
MR_decl_entry(hlds__hlds_rtti__type_info_locn_var_2_0);

MR_BEGIN_MODULE(hlds__goal_util_module73)
	MR_init_entry1(fn__hlds__goal_util__IntroducedFrom__func__extra_nonlocal_typeinfos__659__1_2_0);
	MR_init_label1(fn__hlds__goal_util__IntroducedFrom__func__extra_nonlocal_typeinfos__659__1_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__goal_util__IntroducedFrom__func__extra_nonlocal_typeinfos__659__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(hlds__hlds_rtti__rtti_lookup_type_info_locn_3_0,
		fn__hlds__goal_util__IntroducedFrom__func__extra_nonlocal_typeinfos__659__1_2_0_i2);
MR_def_label(fn__hlds__goal_util__IntroducedFrom__func__extra_nonlocal_typeinfos__659__1_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(hlds__hlds_rtti__type_info_locn_var_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_rtti__rtti_varmaps_reusable_constraints_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_constraint_0;
MR_decl_entry(parse_tree__prog_type__type_list_contains_var_2_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(hlds__hlds_rtti__rtti_lookup_typeclass_info_var_3_0);

MR_BEGIN_MODULE(hlds__goal_util_module74)
	MR_init_entry1(hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__669__1_3_0);
	MR_init_label5(hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__669__1_3_0,1,2,3,4,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__669__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred hlds.goal_util.IntroducedFrom__pred__extra_nonlocal_typeinfos__669__1/3-0", 3,
		MR_ENTRY(MR_do_fail));
	MR_fv(1) = MR_r1;
	MR_fv(2) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_rtti__rtti_varmaps_reusable_constraints_2_0,
		hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__669__1_3_0_i1);
MR_def_label(hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__669__1_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_np_call_localret_ent(list__member_2_1,
		hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__669__1_3_0_i2);
MR_def_label(hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__669__1_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(3) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_np_call_localret_ent(parse_tree__prog_type__type_list_contains_var_2_0,
		hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__669__1_3_0_i3);
MR_def_label(hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__669__1_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r4 = MR_fv(2);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__669__1_3_0_i4);
MR_def_label(hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__669__1_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_fv(1);
	MR_r2 = MR_fv(3);
	MR_np_call_localret_ent(hlds__hlds_rtti__rtti_lookup_typeclass_info_var_3_0,
		hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__669__1_3_0_i6);
MR_def_label(hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__669__1_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module75)
	MR_init_entry1(hlds__goal_util__IntroducedFrom__pred__case_to_disjunct__1123__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__goal_util__IntroducedFrom__pred__case_to_disjunct__1123__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr4 = MR_r1;
	MR_tfield(0, MR_tempr1, 0) = MR_tempr4;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr4;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module76)
	MR_init_entry1(hlds__goal_util__IntroducedFrom__pred__generate_simple_call__1483__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__goal_util__IntroducedFrom__pred__generate_simple_call__1483__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module77)
	MR_init_entry1(hlds__goal_util__IntroducedFrom__pred__generate_foreign_proc__1516__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__goal_util__IntroducedFrom__pred__generate_foreign_proc__1516__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__semidet_fail_0_0);

MR_BEGIN_MODULE(hlds__goal_util_module78)
	MR_init_entry1(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_111_110_116_97_105_110_115_95_114_101_99_111_110_115_116_114_117_99_116_105_111_110_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_111_110_116_97_105_110_115_95_114_101_99_111_110_115_116_114_117_99_116_105_111_110_95_95_91_49_93_95_48_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(builtin__semidet_fail_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__hlds__goal_util_maybe_bunch_0(void)
{
	hlds__goal_util_module0();
	hlds__goal_util_module1();
	hlds__goal_util_module2();
	hlds__goal_util_module3();
	hlds__goal_util_module4();
	hlds__goal_util_module5();
	hlds__goal_util_module6();
	hlds__goal_util_module7();
	hlds__goal_util_module8();
	hlds__goal_util_module9();
	hlds__goal_util_module10();
	hlds__goal_util_module11();
	hlds__goal_util_module12();
	hlds__goal_util_module13();
	hlds__goal_util_module14();
	hlds__goal_util_module15();
	hlds__goal_util_module16();
	hlds__goal_util_module17();
	hlds__goal_util_module18();
	hlds__goal_util_module19();
	hlds__goal_util_module20();
	hlds__goal_util_module21();
	hlds__goal_util_module22();
	hlds__goal_util_module23();
	hlds__goal_util_module24();
	hlds__goal_util_module25();
	hlds__goal_util_module26();
	hlds__goal_util_module27();
	hlds__goal_util_module28();
	hlds__goal_util_module29();
	hlds__goal_util_module30();
	hlds__goal_util_module31();
	hlds__goal_util_module32();
	hlds__goal_util_module33();
	hlds__goal_util_module34();
	hlds__goal_util_module35();
	hlds__goal_util_module36();
	hlds__goal_util_module37();
	hlds__goal_util_module38();
	hlds__goal_util_module39();
}

static void mercury__hlds__goal_util_maybe_bunch_1(void)
{
	hlds__goal_util_module40();
	hlds__goal_util_module41();
	hlds__goal_util_module42();
	hlds__goal_util_module43();
	hlds__goal_util_module44();
	hlds__goal_util_module45();
	hlds__goal_util_module46();
	hlds__goal_util_module47();
	hlds__goal_util_module48();
	hlds__goal_util_module49();
	hlds__goal_util_module50();
	hlds__goal_util_module51();
	hlds__goal_util_module52();
	hlds__goal_util_module53();
	hlds__goal_util_module54();
	hlds__goal_util_module55();
	hlds__goal_util_module56();
	hlds__goal_util_module57();
	hlds__goal_util_module58();
	hlds__goal_util_module59();
	hlds__goal_util_module60();
	hlds__goal_util_module61();
	hlds__goal_util_module62();
	hlds__goal_util_module63();
	hlds__goal_util_module64();
	hlds__goal_util_module65();
	hlds__goal_util_module66();
	hlds__goal_util_module67();
	hlds__goal_util_module68();
	hlds__goal_util_module69();
	hlds__goal_util_module70();
	hlds__goal_util_module71();
	hlds__goal_util_module72();
	hlds__goal_util_module73();
	hlds__goal_util_module74();
	hlds__goal_util_module75();
	hlds__goal_util_module76();
	hlds__goal_util_module77();
	hlds__goal_util_module78();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__hlds__goal_util__init(void);
void mercury__hlds__goal_util__init_type_tables(void);
void mercury__hlds__goal_util__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__hlds__goal_util__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__hlds__goal_util__init_complexity_procs(void);
#endif

void mercury__hlds__goal_util__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__hlds__goal_util_maybe_bunch_0();
	mercury__hlds__goal_util_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__goal_util__type_ctor_info_is_leaf_0,
		hlds__goal_util__is_leaf_0_0);
	mercury__hlds__goal_util__init_debugger();
}

void mercury__hlds__goal_util__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__goal_util__type_ctor_info_is_leaf_0);
	}
}


void mercury__hlds__goal_util__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__hlds__goal_util__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__hlds__goal_util);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__hlds__goal_util__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
