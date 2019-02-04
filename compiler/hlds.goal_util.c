/*
** Automatically generated from `goal_util.m'
** by the Mercury compiler,
** version rotd-2011-08-19, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__hlds__goal_util__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 33 "../library/array.int2"
#include "array.mh"

#line 28 "hlds.goal_util.c"
#line 140 "../library/io.int2"
#include "io.mh"

#line 32 "hlds.goal_util.c"
#line 150 "../library/io.int2"
#include "string.mh"

#line 36 "hlds.goal_util.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 40 "hlds.goal_util.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "hlds.goal_util.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 48 "hlds.goal_util.c"
#line 49 "hlds.goal_util.c"
#include "hlds.goal_util.mh"

#line 52 "hlds.goal_util.c"
#line 53 "hlds.goal_util.c"
#ifndef HLDS__GOAL_UTIL_DECL_GUARD
#define HLDS__GOAL_UTIL_DECL_GUARD

#line 57 "hlds.goal_util.c"
#line 58 "hlds.goal_util.c"

#endif
#line 61 "hlds.goal_util.c"

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
	MR_Word * f1;
	MR_Integer f2;
	MR_Word * f3;
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[11];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_hlds__goal_util__type_ctor_info_attach_in_from_ground_term_0,
	mercury_data_hlds__goal_util__type_ctor_info_goal_is_atomic_0,
	mercury_data_hlds__goal_util__type_ctor_info_is_leaf_0,
	mercury_data_hlds__goal_util__type_ctor_info_maybe_transformed_goal_0;
MR_decl_label5(hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__832__1_3_0, 1,2,3,4,6)
MR_decl_label1(hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1730__1_2_0, 1)
MR_decl_label1(hlds__goal_util__IntroducedFrom__pred__transform_all_goals__2251__1_3_0, 2)
MR_decl_label2(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_0, 2,4)
MR_decl_label2(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_1, 2,4)
MR_decl_label4(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_48_4_0, 21,4,6,9)
MR_decl_label4(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_49_4_1, 21,4,6,9)
MR_decl_label10(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_0, 4,3,6,5,9,8,12,14,16,17)
MR_decl_label10(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_0, 11,20,24,19,30,31,29,35,36,34)
MR_decl_label4(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_0, 39,27,43,42)
MR_decl_label10(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_1, 4,3,6,5,9,8,12,14,16,17)
MR_decl_label10(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_1, 11,48,20,22,19,28,29,27,33,34)
MR_decl_label4(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_1, 32,37,25,41)
MR_decl_label4(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_0, 20,4,6,8)
MR_decl_label4(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_1, 20,4,6,8)
MR_decl_label10(hlds__goal_util__can_reorder_goals_9_0, 2,3,7,9,11,6,5,14,16,18)
MR_decl_label10(hlds__goal_util__can_reorder_goals_9_0, 19,20,21,22,25,17,28,29,30,31)
MR_decl_label3(hlds__goal_util__can_reorder_goals_9_0, 32,35,27)
MR_decl_label10(hlds__goal_util__can_reorder_goals_old_7_0, 2,3,10,13,14,15,16,17,20,44)
MR_decl_label6(hlds__goal_util__can_reorder_goals_old_7_0, 12,23,24,25,26,27)
MR_decl_label3(hlds__goal_util__case_list_calls_proc_in_list_4_0, 10,3,4)
MR_decl_label10(hlds__goal_util__case_to_disjunct_11_0, 2,3,5,6,7,8,10,11,9,15)
MR_decl_label10(hlds__goal_util__case_to_disjunct_11_0, 16,23,24,25,26,27,30,31,32,33)
MR_decl_label4(hlds__goal_util__case_to_disjunct_11_0, 34,35,36,37)
MR_decl_label4(hlds__goal_util__cases_calls_2_0, 18,5,3,1)
MR_decl_label3(hlds__goal_util__cases_calls_2_1, 6,3,2)
MR_decl_label4(hlds__goal_util__cases_calls_pred_id_2_0, 18,5,3,1)
MR_decl_label3(hlds__goal_util__cases_calls_pred_id_2_1, 6,3,2)
MR_decl_label3(hlds__goal_util__cases_goal_vars_3_0, 10,3,4)
MR_decl_label3(hlds__goal_util__cases_size_2_0, 13,4,5)
MR_decl_label3(hlds__goal_util__clause_list_size_2_0, 3,4,7)
MR_decl_label2(hlds__goal_util__clause_size_increment_3_0, 2,3)
MR_decl_label10(hlds__goal_util__clone_variable_10_0, 4,2,6,9,11,7,14,15,17,19)
MR_decl_label1(hlds__goal_util__clone_variable_10_0, 16)
MR_decl_label3(hlds__goal_util__clone_variables_9_0, 10,3,4)
MR_decl_label8(hlds__goal_util__create_conj_from_list_3_0, 28,7,8,9,10,11,12,3)
MR_decl_label4(hlds__goal_util__create_renaming_9_0, 3,4,5,6)
MR_decl_label10(hlds__goal_util__create_renaming_2_12_0, 47,3,4,6,7,10,8,22,23,26)
MR_decl_label3(hlds__goal_util__create_renaming_2_12_0, 27,28,31)
MR_decl_label9(hlds__goal_util__direct_subgoal_2_0, 2,3,46,9,10,7,18,11,12)
MR_decl_label9(hlds__goal_util__extra_nonlocal_typeinfos_5_0, 2,4,5,7,8,10,11,13,14)
MR_decl_label3(hlds__goal_util__flatten_conj_2_0, 34,4,5)
MR_decl_label1(hlds__goal_util__generate_cast_5_0, 2)
MR_decl_label5(hlds__goal_util__generate_cast_with_insts_7_0, 4,7,8,10,11)
MR_decl_label10(hlds__goal_util__generate_foreign_proc_16_0, 2,3,8,10,11,12,13,16,15,17)
MR_decl_label4(hlds__goal_util__generate_foreign_proc_16_0, 18,20,21,23)
MR_decl_label10(hlds__goal_util__generate_simple_call_12_0, 3,4,5,6,9,10,13,12,14,15)
MR_decl_label3(hlds__goal_util__generate_simple_call_12_0, 17,18,20)
MR_decl_label3(hlds__goal_util__generic_call_vars_2_0, 3,9,4)
MR_decl_label10(hlds__goal_util__goal_calls_proc_in_list_2_4_0, 99,3,8,6,5,12,13,14,16,18)
MR_decl_label9(hlds__goal_util__goal_calls_proc_in_list_2_4_0, 20,21,19,24,23,32,31,34,29)
MR_decl_label3(hlds__goal_util__goal_contains_goal_2_0, 2,3,1)
MR_decl_label10(hlds__goal_util__goal_expr_calls_2_0, 86,3,6,7,10,16,19,13,48,24)
MR_decl_label2(hlds__goal_util__goal_expr_calls_2_0, 23,51)
MR_decl_label10(hlds__goal_util__goal_expr_calls_2_1, 2,4,6,8,12,14,10,75,19,17)
MR_decl_label1(hlds__goal_util__goal_expr_calls_2_1, 68)
MR_decl_label10(hlds__goal_util__goal_expr_calls_pred_id_2_0, 82,3,6,7,10,16,19,13,47,24)
MR_decl_label2(hlds__goal_util__goal_expr_calls_pred_id_2_0, 23,50)
MR_decl_label10(hlds__goal_util__goal_expr_calls_pred_id_2_1, 2,4,5,7,11,13,9,74,18,16)
MR_decl_label1(hlds__goal_util__goal_expr_calls_pred_id_2_1, 67)
MR_decl_label10(hlds__goal_util__goal_expr_contains_reconstruction_1_0, 102,3,6,9,12,15,47,22,21,30)
MR_decl_label2(hlds__goal_util__goal_expr_contains_reconstruction_1_0, 31,29)
MR_decl_label10(hlds__goal_util__goal_expr_size_2_0, 3,6,34,5,9,12,13,14,11,39)
MR_decl_label9(hlds__goal_util__goal_expr_size_2_0, 86,15,24,23,27,28,26,21,81)
MR_decl_label2(hlds__goal_util__goal_is_atomic_2_0, 3,4)
MR_decl_label1(hlds__goal_util__goal_is_branched_1_0, 2)
MR_decl_label3(hlds__goal_util__goal_list_calls_proc_in_list_2_4_0, 10,3,4)
MR_decl_label1(hlds__goal_util__goal_vars_2_0, 2)
MR_decl_label10(hlds__goal_util__goal_vars_2_3_0, 220,3,5,8,10,15,12,13,159,7)
MR_decl_label10(hlds__goal_util__goal_vars_2_3_0, 25,27,28,22,30,32,35,36,34,39)
MR_decl_label10(hlds__goal_util__goal_vars_2_3_0, 40,41,38,45,47,48,50,146,51,52)
MR_decl_label10(hlds__goal_util__goal_vars_2_3_0, 43,61,62,63,64,101,66,68,60,71)
MR_decl_label3(hlds__goal_util__goal_vars_2_3_0, 70,58,74)
MR_decl_label4(hlds__goal_util__goals_calls_2_0, 18,5,3,1)
MR_decl_label3(hlds__goal_util__goals_calls_2_1, 6,3,2)
MR_decl_label4(hlds__goal_util__goals_calls_pred_id_2_0, 18,5,3,1)
MR_decl_label3(hlds__goal_util__goals_calls_pred_id_2_1, 6,3,2)
MR_decl_label3(hlds__goal_util__goals_contain_reconstruction_1_0, 3,4,2)
MR_decl_label3(hlds__goal_util__goals_goal_vars_3_0, 10,3,4)
MR_decl_label3(hlds__goal_util__goals_size_2_0, 13,4,5)
MR_decl_label1(hlds__goal_util__maybe_error_to_maybe_transformed_goal_2_0, 3)
MR_decl_label10(hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0, 255,3,97,7,11,13,16,8,24,26)
MR_decl_label10(hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0, 29,21,37,35,45,43,53,34,65,62)
MR_decl_label7(hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0, 74,71,84,86,90,81,266)
MR_decl_label10(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0, 262,3,104,7,11,13,15,17,18,21)
MR_decl_label10(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0, 8,29,31,34,26,42,40,50,51,52)
MR_decl_label10(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0, 48,60,39,72,69,81,78,91,93,97)
MR_decl_label2(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0, 88,273)
MR_decl_label3(hlds__goal_util__predids_from_goals_2_0, 18,5,6)
MR_decl_label8(hlds__goal_util__reordering_maintains_termination_6_0, 2,3,4,5,6,7,11,12)
MR_decl_label8(hlds__goal_util__reordering_maintains_termination_old_4_0, 2,3,4,5,11,21,15,1)
MR_decl_label4(hlds__goal_util__rhs_goal_vars_3_0, 3,6,7,5)
MR_decl_label5(hlds__goal_util__switch_to_disjunction_10_0, 23,4,9,10,12)
MR_decl_label10(hlds__goal_util__transform_all_goals_3_0, 3,6,4,10,8,13,14,15,12,18)
MR_decl_label6(hlds__goal_util__transform_all_goals_3_0, 17,20,19,24,22,2)
MR_decl_label1(hlds__goal_util__update_instmap_3_0, 2)
MR_decl_label1(fn__hlds__goal_util__IntroducedFrom__func__extra_nonlocal_typeinfos__821__1_2_0, 2)
MR_decl_label1(fn__hlds__goal_util__flatten_disj_2_0, 2)
MR_decl_label2(fn__hlds__goal_util__goal_calls_proc_in_list_2_0, 2,3)
MR_decl_label2(fn__hlds__goal_util__goal_list_calls_proc_in_list_2_0, 2,3)
MR_decl_label10(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0, 4,3,8,6,13,11,18,17,20,21)
MR_decl_label10(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0, 22,16,27,30,26,37,39,36,44,43)
MR_decl_label4(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0, 34,51,131,140)
MR_decl_label1(fn__hlds__goal_util__maybe_strip_equality_pretest_case_1_0, 2)
MR_decl_label10(fn__hlds__goal_util__proc_body_is_leaf_1_0, 117,3,40,5,8,10,14,16,18,12)
MR_decl_label6(fn__hlds__goal_util__proc_body_is_leaf_1_0, 22,21,31,33,69,27)
MR_decl_label4(fn__hlds__goal_util__proc_body_is_leaf_cases_1_0, 24,5,7,4)
MR_decl_label4(fn__hlds__goal_util__proc_body_is_leaf_goals_1_0, 24,5,7,4)
MR_decl_label4(__Unify___hlds__goal_util__maybe_transformed_goal_0_0, 5,17,6,1)
MR_decl_label7(__Compare___hlds__goal_util__maybe_transformed_goal_0_0, 30,31,5,11,9,15,16)
MR_def_extern_entry(hlds__goal_util__update_instmap_3_0)
MR_decl_static(hlds__goal_util__create_renaming_2_12_0)
MR_def_extern_entry(hlds__goal_util__create_renaming_9_0)
MR_def_extern_entry(hlds__goal_util__clone_variable_10_0)
MR_def_extern_entry(hlds__goal_util__clone_variables_9_0)
MR_def_extern_entry(hlds__goal_util__generic_call_vars_2_0)
MR_def_extern_entry(hlds__goal_util__goals_goal_vars_3_0)
MR_decl_static(hlds__goal_util__goal_vars_2_3_0)
MR_decl_static(hlds__goal_util__cases_goal_vars_3_0)
MR_decl_static(hlds__goal_util__rhs_goal_vars_3_0)
MR_def_extern_entry(hlds__goal_util__goal_vars_2_0)
MR_def_extern_entry(hlds__goal_util__attach_features_to_all_goals_4_0)
MR_def_extern_entry(hlds__goal_util__attach_features_to_all_goals_4_1)
MR_def_extern_entry(hlds__goal_util__extra_nonlocal_typeinfos_5_0)
MR_def_extern_entry(fn__hlds__goal_util__proc_body_is_leaf_1_0)
MR_decl_static(fn__hlds__goal_util__proc_body_is_leaf_goals_1_0)
MR_decl_static(fn__hlds__goal_util__proc_body_is_leaf_cases_1_0)
MR_def_extern_entry(hlds__goal_util__goal_is_branched_1_0)
MR_def_extern_entry(hlds__goal_util__goal_size_2_0)
MR_def_extern_entry(hlds__goal_util__goals_size_2_0)
MR_decl_static(hlds__goal_util__cases_size_2_0)
MR_decl_static(hlds__goal_util__goal_expr_size_2_0)
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
MR_decl_static(hlds__goal_util__goal_expr_contains_reconstruction_1_0)
MR_decl_static(hlds__goal_util__goals_contain_reconstruction_1_0)
MR_def_extern_entry(hlds__goal_util__direct_subgoal_2_0)
MR_def_extern_entry(hlds__goal_util__goal_contains_goal_2_0)
MR_def_extern_entry(hlds__goal_util__predids_from_goal_2_0)
MR_def_extern_entry(hlds__goal_util__predids_with_args_from_goal_2_0)
MR_def_extern_entry(hlds__goal_util__predids_from_goals_2_0)
MR_def_extern_entry(hlds__goal_util__pred_proc_ids_from_goal_2_0)
MR_def_extern_entry(hlds__goal_util__goal_is_atomic_2_0)
MR_def_extern_entry(hlds__goal_util__case_to_disjunct_11_0)
MR_def_extern_entry(hlds__goal_util__switch_to_disjunction_10_0)
MR_def_extern_entry(hlds__goal_util__flatten_conj_2_0)
MR_def_extern_entry(fn__hlds__goal_util__flatten_disjs_1_0)
MR_def_extern_entry(hlds__goal_util__create_conj_from_list_3_0)
MR_def_extern_entry(hlds__goal_util__create_conj_4_0)
MR_def_extern_entry(hlds__goal_util__reordering_maintains_termination_old_4_0)
MR_def_extern_entry(hlds__goal_util__can_reorder_goals_old_7_0)
MR_def_extern_entry(hlds__goal_util__reordering_maintains_termination_6_0)
MR_def_extern_entry(hlds__goal_util__can_reorder_goals_9_0)
MR_def_extern_entry(hlds__goal_util__generate_simple_call_12_0)
MR_def_extern_entry(hlds__goal_util__generate_foreign_proc_16_0)
MR_def_extern_entry(hlds__goal_util__generate_cast_with_insts_7_0)
MR_def_extern_entry(hlds__goal_util__generate_cast_5_0)
MR_def_extern_entry(hlds__goal_util__foreign_code_uses_variable_2_0)
MR_def_extern_entry(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0)
MR_decl_static(hlds__goal_util__maybe_error_to_maybe_transformed_goal_2_0)
MR_decl_static(hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0)
MR_def_extern_entry(hlds__goal_util__maybe_transform_goal_at_goal_path_4_0)
MR_decl_static(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0)
MR_def_extern_entry(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_5_0)
MR_def_extern_entry(hlds__goal_util__transform_all_goals_3_0)
MR_decl_static(hlds__goal_util__clause_size_increment_3_0)
MR_decl_static(fn__hlds__goal_util__flatten_disj_2_0)
MR_decl_static(fn__hlds__goal_util__maybe_strip_equality_pretest_case_1_0)
MR_def_extern_entry(__Unify___hlds__goal_util__attach_in_from_ground_term_0_0)
MR_def_extern_entry(__Compare___hlds__goal_util__attach_in_from_ground_term_0_0)
MR_def_extern_entry(__Unify___hlds__goal_util__goal_is_atomic_0_0)
MR_def_extern_entry(__Compare___hlds__goal_util__goal_is_atomic_0_0)
MR_def_extern_entry(__Unify___hlds__goal_util__is_leaf_0_0)
MR_def_extern_entry(__Compare___hlds__goal_util__is_leaf_0_0)
MR_def_extern_entry(__Unify___hlds__goal_util__maybe_transformed_goal_0_0)
MR_def_extern_entry(__Compare___hlds__goal_util__maybe_transformed_goal_0_0)
MR_decl_static(fn__hlds__goal_util__IntroducedFrom__func__extra_nonlocal_typeinfos__821__1_2_0)
MR_decl_static(hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__832__1_3_0)
MR_decl_static(hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1730__1_2_0)
MR_decl_static(hlds__goal_util__IntroducedFrom__pred__case_to_disjunct__1363__1_2_0)
MR_decl_static(hlds__goal_util__IntroducedFrom__pred__generate_simple_call__1655__1_2_0)
MR_decl_static(hlds__goal_util__IntroducedFrom__pred__generate_foreign_proc__1688__1_2_0)
MR_decl_static(hlds__goal_util__IntroducedFrom__pred__transform_all_goals__2251__1_3_0)
MR_decl_static(fn__hlds__goal_util__IntroducedFrom__func__maybe_transform_goal_at_goal_path_with_instmap_2__2071__1_1_0)
MR_def_extern_entry(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_0)
MR_def_extern_entry(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_1)
MR_decl_static(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_0)
MR_decl_static(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_1)
MR_decl_static(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_48_4_0)
MR_decl_static(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_49_4_1)
MR_decl_static(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_0)
MR_decl_static(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_1)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_tree_bitset__type_ctor_info_tree_bitset_1;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
static const struct mercury_type_0 mercury_common_0[14] =
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
MR_CTOR1_ADDR(tree_bitset, tree_bitset),
MR_COMMON(0,5)
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
MR_COMMON(0,7)
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
MR_CTOR1_ADDR(varset, varset),
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
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
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
mercury_data__closure_layout__hlds__goal_util__goal_vars_2_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_foreign_arg_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__goal_util__goal_vars_2_3_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__goal_util__predids_from_goal_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__goal_util__predids_with_args_from_goal_2_0_1;
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
static const MR_UserClosureId
mercury_data__closure_layout__fn__hlds__goal_util__maybe_strip_equality_pretest_1_0_4;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_case_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__instmap__type_ctor_info_instmap_0;
static const struct mercury_type_1 mercury_common_1[16] =
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
(MR_Word *) &mercury_data__closure_layout__hlds__goal_util__predids_with_args_from_goal_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(4,0)
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
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
},
{
(MR_Word *) &mercury_data__closure_layout__fn__hlds__goal_util__maybe_strip_equality_pretest_1_0_4,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, case),
MR_CTOR0_ADDR(hlds__hlds_goal, case)
},
{
(MR_Word *) &mercury_data__closure_layout__hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__instmap, instmap)
},
};

MR_decl_entry(fn__hlds__hlds_goal__foreign_arg_var_1_0);
MR_decl_entry(hlds__hlds_goal__goal_info_add_feature_3_0);
MR_decl_entry(hlds__instmap__apply_instmap_delta_sv_3_0);
static const struct mercury_type_2 mercury_common_2[24] =
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
MR_COMMON(3,2),
MR_ENTRY_AP(hlds__goal_util__clause_size_increment_3_0),
0
},
{
MR_COMMON(1,6),
MR_ENTRY_AP(hlds__goal_util__IntroducedFrom__pred__case_to_disjunct__1363__1_2_0),
0
},
{
MR_COMMON(3,3),
MR_ENTRY_AP(fn__hlds__goal_util__flatten_disj_2_0),
0
},
{
MR_COMMON(3,4),
MR_ENTRY_AP(hlds__hlds_goal__goal_info_add_feature_3_0),
0
},
{
MR_COMMON(1,8),
MR_ENTRY_AP(fn__hlds__hlds_goal__foreign_arg_var_1_0),
0
},
{
MR_COMMON(1,9),
MR_ENTRY_AP(fn__hlds__hlds_goal__foreign_arg_var_1_0),
0
},
{
MR_COMMON(3,5),
MR_ENTRY_AP(hlds__hlds_goal__goal_info_add_feature_3_0),
0
},
{
MR_COMMON(1,11),
MR_ENTRY_AP(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0),
0
},
{
MR_COMMON(1,12),
MR_ENTRY_AP(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0),
0
},
{
MR_COMMON(1,13),
MR_ENTRY_AP(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0),
0
},
{
MR_COMMON(1,14),
MR_ENTRY_AP(fn__hlds__goal_util__maybe_strip_equality_pretest_case_1_0),
0
},
{
MR_COMMON(1,15),
MR_ENTRY_AP(fn__hlds__goal_util__IntroducedFrom__func__maybe_transform_goal_at_goal_path_with_instmap_2__2071__1_1_0),
0
},
{
MR_COMMON(3,6),
MR_ENTRY_AP(hlds__instmap__apply_instmap_delta_sv_3_0),
0
},
{
MR_COMMON(3,10),
MR_ENTRY_AP(fn__hlds__goal_util__flatten_disj_2_0),
0
},
{
MR_COMMON(3,11),
MR_ENTRY_AP(hlds__hlds_goal__goal_info_add_feature_3_0),
0
},
{
MR_COMMON(3,12),
MR_ENTRY_AP(hlds__hlds_goal__goal_info_add_feature_3_0),
0
},
{
MR_COMMON(3,13),
MR_ENTRY_AP(hlds__hlds_goal__goal_info_add_feature_3_0),
0
},
{
MR_COMMON(3,14),
MR_ENTRY_AP(hlds__hlds_goal__goal_info_add_feature_3_0),
0
},
{
MR_COMMON(3,15),
MR_ENTRY_AP(hlds__hlds_goal__goal_info_add_feature_3_0),
0
},
{
MR_COMMON(3,16),
MR_ENTRY_AP(hlds__hlds_goal__goal_info_add_feature_3_0),
0
},
{
MR_COMMON(3,17),
MR_ENTRY_AP(hlds__hlds_goal__goal_info_add_feature_3_0),
0
},
{
MR_COMMON(3,18),
MR_ENTRY_AP(hlds__hlds_goal__goal_info_add_feature_3_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__goal_util__extra_nonlocal_typeinfos_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__goal_util__extra_nonlocal_typeinfos_5_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__goal_util__clause_list_size_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_clauses__type_ctor_info_clause_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__hlds__goal_util__flatten_disjs_1_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__goal_util__generate_simple_call_12_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_goal_feature_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__goal_util__generate_foreign_proc_16_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__goal_util__transform_all_goals_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__goal_util__transform_all_goals_3_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__goal_util__transform_all_goals_3_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__fn__hlds__goal_util__flatten_disj_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_1_1;
static const MR_UserClosureId
mercury_data__closure_layout__f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_1_1;
static const MR_UserClosureId
mercury_data__closure_layout__f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_48_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_49_4_1_1;
static const MR_UserClosureId
mercury_data__closure_layout__f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_1_1;
static const struct mercury_type_3 mercury_common_3[19] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__goal_util__extra_nonlocal_typeinfos_5_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_rtti, rtti_varmaps),
MR_COMMON(0,4),
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
MR_COMMON(0,6),
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
(MR_Word *) &mercury_data__closure_layout__fn__hlds__goal_util__flatten_disjs_1_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(0,13),
MR_COMMON(0,13)
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
(MR_Word *) &mercury_data__closure_layout__hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__instmap, instmap),
MR_CTOR0_ADDR(hlds__instmap, instmap),
MR_CTOR0_ADDR(hlds__instmap, instmap)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__goal_util__transform_all_goals_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(4,2),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__goal_util__transform_all_goals_3_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(4,2),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__goal_util__transform_all_goals_3_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(4,2),
MR_CTOR0_ADDR(hlds__hlds_goal, case),
MR_CTOR0_ADDR(hlds__hlds_goal, case)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__hlds__goal_util__flatten_disj_2_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(0,13),
MR_COMMON(0,13)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_0_1,
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
(MR_Word *) &mercury_data__closure_layout__f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_1_1,
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
(MR_Word *) &mercury_data__closure_layout__f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_0_1,
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
(MR_Word *) &mercury_data__closure_layout__f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_1_1,
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
(MR_Word *) &mercury_data__closure_layout__f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_48_4_0_1,
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
(MR_Word *) &mercury_data__closure_layout__f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_49_4_1_1,
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
(MR_Word *) &mercury_data__closure_layout__f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_0_1,
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
(MR_Word *) &mercury_data__closure_layout__f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_1_1,
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

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_tuple_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_tuple_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_pred_0;
static const struct mercury_type_4 mercury_common_4[3] =
{
{
MR_CTOR0_ADDR(builtin, tuple),
2,
MR_INT_CTOR_ADDR,
MR_COMMON(0,8)
},
{
MR_CTOR0_ADDR(builtin, tuple),
2,
MR_CTOR0_ADDR(hlds__hlds_pred, pred_id),
MR_TAG_COMMON(0,0,9)
},
{
MR_CTOR0_ADDR(builtin, pred),
2,
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
static const struct mercury_type_5 mercury_common_5[2] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(0,7),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_TAG_COMMON(0,0,0),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__goal_util__switch_to_disjunction_10_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
static const struct mercury_type_6 mercury_common_6[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__goal_util__switch_to_disjunction_10_0_1,
(MR_Word *) (MR_Integer) 0
},
11,
{
MR_COMMON(0,2),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__instmap, instmap),
MR_CTOR0_ADDR(parse_tree__prog_data, cons_id),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(0,10),
MR_COMMON(0,10),
MR_COMMON(5,0),
MR_COMMON(5,0),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info)
}
},
};

static const MR_EnumFunctorDesc mercury_data_hlds__goal_util__enum_functor_desc_attach_in_from_ground_term_0_0 = {
	"attach_in_from_ground_term",
	0
};

static const MR_EnumFunctorDesc mercury_data_hlds__goal_util__enum_functor_desc_attach_in_from_ground_term_0_1 = {
	"do_not_attach_in_from_ground_term",
	1
};

const MR_EnumFunctorDescPtr mercury_data_hlds__goal_util__enum_value_ordered_attach_in_from_ground_term_0[] = {
	&mercury_data_hlds__goal_util__enum_functor_desc_attach_in_from_ground_term_0_0,
	&mercury_data_hlds__goal_util__enum_functor_desc_attach_in_from_ground_term_0_1
};

const MR_EnumFunctorDescPtr mercury_data_hlds__goal_util__enum_name_ordered_attach_in_from_ground_term_0[] = {
	&mercury_data_hlds__goal_util__enum_functor_desc_attach_in_from_ground_term_0_0,
	&mercury_data_hlds__goal_util__enum_functor_desc_attach_in_from_ground_term_0_1
};

const MR_Integer mercury_data_hlds__goal_util__functor_number_map_attach_in_from_ground_term_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_hlds__goal_util__type_ctor_info_attach_in_from_ground_term_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__goal_util__attach_in_from_ground_term_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__goal_util__attach_in_from_ground_term_0_0)),
	"hlds.goal_util",
	"attach_in_from_ground_term",
	{ (void *)mercury_data_hlds__goal_util__enum_name_ordered_attach_in_from_ground_term_0 },
	{ (void *)mercury_data_hlds__goal_util__enum_value_ordered_attach_in_from_ground_term_0 },
	2,
	4,
	mercury_data_hlds__goal_util__functor_number_map_attach_in_from_ground_term_0
};

static const MR_EnumFunctorDesc mercury_data_hlds__goal_util__enum_functor_desc_goal_is_atomic_0_0 = {
	"goal_is_atomic",
	0
};

static const MR_EnumFunctorDesc mercury_data_hlds__goal_util__enum_functor_desc_goal_is_atomic_0_1 = {
	"goal_is_nonatomic",
	1
};

const MR_EnumFunctorDescPtr mercury_data_hlds__goal_util__enum_value_ordered_goal_is_atomic_0[] = {
	&mercury_data_hlds__goal_util__enum_functor_desc_goal_is_atomic_0_0,
	&mercury_data_hlds__goal_util__enum_functor_desc_goal_is_atomic_0_1
};

const MR_EnumFunctorDescPtr mercury_data_hlds__goal_util__enum_name_ordered_goal_is_atomic_0[] = {
	&mercury_data_hlds__goal_util__enum_functor_desc_goal_is_atomic_0_0,
	&mercury_data_hlds__goal_util__enum_functor_desc_goal_is_atomic_0_1
};

const MR_Integer mercury_data_hlds__goal_util__functor_number_map_goal_is_atomic_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_hlds__goal_util__type_ctor_info_goal_is_atomic_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__goal_util__goal_is_atomic_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__goal_util__goal_is_atomic_0_0)),
	"hlds.goal_util",
	"goal_is_atomic",
	{ (void *)mercury_data_hlds__goal_util__enum_name_ordered_goal_is_atomic_0 },
	{ (void *)mercury_data_hlds__goal_util__enum_value_ordered_goal_is_atomic_0 },
	2,
	4,
	mercury_data_hlds__goal_util__functor_number_map_goal_is_atomic_0
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
	15,
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

const MR_PseudoTypeInfo mercury_data_hlds__goal_util__field_types_maybe_transformed_goal_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

static const MR_DuFunctorDesc mercury_data_hlds__goal_util__du_functor_desc_maybe_transformed_goal_0_0 = {
	"ok",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_hlds__goal_util__field_types_maybe_transformed_goal_0_0,
	NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

const MR_PseudoTypeInfo mercury_data_hlds__goal_util__field_types_maybe_transformed_goal_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_hlds__goal_util__du_functor_desc_maybe_transformed_goal_0_1 = {
	"error",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_hlds__goal_util__field_types_maybe_transformed_goal_0_1,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_hlds__goal_util__du_functor_desc_maybe_transformed_goal_0_2 = {
	"goal_not_found",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	2,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_hlds__goal_util__du_stag_ordered_maybe_transformed_goal_0_0[] = {
	&mercury_data_hlds__goal_util__du_functor_desc_maybe_transformed_goal_0_2

};

const MR_DuFunctorDescPtr mercury_data_hlds__goal_util__du_stag_ordered_maybe_transformed_goal_0_1[] = {
	&mercury_data_hlds__goal_util__du_functor_desc_maybe_transformed_goal_0_0

};

const MR_DuFunctorDescPtr mercury_data_hlds__goal_util__du_stag_ordered_maybe_transformed_goal_0_2[] = {
	&mercury_data_hlds__goal_util__du_functor_desc_maybe_transformed_goal_0_1

};

const MR_DuPtagLayout mercury_data_hlds__goal_util__du_ptag_ordered_maybe_transformed_goal_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_hlds__goal_util__du_stag_ordered_maybe_transformed_goal_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_hlds__goal_util__du_stag_ordered_maybe_transformed_goal_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_hlds__goal_util__du_stag_ordered_maybe_transformed_goal_0_2 }

};

const MR_DuFunctorDescPtr mercury_data_hlds__goal_util__du_name_ordered_maybe_transformed_goal_0[] = {
	&mercury_data_hlds__goal_util__du_functor_desc_maybe_transformed_goal_0_1,
	&mercury_data_hlds__goal_util__du_functor_desc_maybe_transformed_goal_0_2,
	&mercury_data_hlds__goal_util__du_functor_desc_maybe_transformed_goal_0_0
};

const MR_Integer mercury_data_hlds__goal_util__functor_number_map_maybe_transformed_goal_0[] = {
	2,
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_hlds__goal_util__type_ctor_info_maybe_transformed_goal_0 = {
	0,
	15,
	3,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__goal_util__maybe_transformed_goal_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__goal_util__maybe_transformed_goal_0_0)),
	"hlds.goal_util",
	"maybe_transformed_goal",
	{ (void *)mercury_data_hlds__goal_util__du_name_ordered_maybe_transformed_goal_0 },
	{ (void *)mercury_data_hlds__goal_util__du_ptag_ordered_maybe_transformed_goal_0 },
	3,
	4,
	mercury_data_hlds__goal_util__functor_number_map_maybe_transformed_goal_0
};


static const MR_UserClosureId
mercury_data__closure_layout__f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_1_1 = {
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
692,
"8"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_0_1 = {
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
692,
"8"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_49_4_1_1 = {
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
692,
"8"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_48_4_0_1 = {
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
692,
"8"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_1_1 = {
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
692,
"8"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_0_1 = {
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
692,
"8"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_1_1 = {
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
692,
"8"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_0_1 = {
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
692,
"8"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__hlds__goal_util__flatten_disj_2_0_1 = {
{
MR_FUNCTION,
"hlds.goal_util",
"hlds.goal_util",
"flatten_disj",
3,
0
},
"hlds.goal_util",
"goal_util.m",
1416,
"11"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__goal_util__transform_all_goals_3_0_3 = {
{
MR_PREDICATE,
"hlds.goal_util",
"hlds.goal_util",
"lambda_goal_util_m_2251",
3,
0
},
"hlds.goal_util",
"goal_util.m",
2251,
"26"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__goal_util__transform_all_goals_3_0_2 = {
{
MR_PREDICATE,
"hlds.goal_util",
"hlds.goal_util",
"transform_all_goals",
3,
0
},
"hlds.goal_util",
"goal_util.m",
2247,
"21"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__goal_util__transform_all_goals_3_0_1 = {
{
MR_PREDICATE,
"hlds.goal_util",
"hlds.goal_util",
"transform_all_goals",
3,
0
},
"hlds.goal_util",
"goal_util.m",
2243,
"16"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0_2 = {
{
MR_PREDICATE,
"hlds.instmap",
"hlds.instmap",
"apply_instmap_delta_sv",
3,
0
},
"hlds.goal_util",
"goal_util.m",
2074,
"40"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0_1 = {
{
MR_FUNCTION,
"hlds.goal_util",
"hlds.goal_util",
"lambda_goal_util_m_2071",
2,
0
},
"hlds.goal_util",
"goal_util.m",
2071,
"34"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__hlds__goal_util__maybe_strip_equality_pretest_1_0_4 = {
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
1794,
"28"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__hlds__goal_util__maybe_strip_equality_pretest_1_0_3 = {
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
1828,
"67"
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
1789,
"22"
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
1784,
"16"
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
1692,
"47"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__goal_util__generate_foreign_proc_16_0_3 = {
{
MR_PREDICATE,
"hlds.goal_util",
"hlds.goal_util",
"lambda_goal_util_m_1688",
2,
0
},
"hlds.goal_util",
"goal_util.m",
1688,
"42"
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
1672,
"26"
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
1671,
"24"
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
1659,
"40"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__goal_util__generate_simple_call_12_0_1 = {
{
MR_PREDICATE,
"hlds.goal_util",
"hlds.goal_util",
"lambda_goal_util_m_1655",
2,
0
},
"hlds.goal_util",
"goal_util.m",
1655,
"35"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__hlds__goal_util__flatten_disjs_1_0_1 = {
{
MR_FUNCTION,
"hlds.goal_util",
"hlds.goal_util",
"flatten_disj",
3,
0
},
"hlds.goal_util",
"goal_util.m",
1410,
"4"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__goal_util__switch_to_disjunction_10_0_1 = {
{
MR_PREDICATE,
"hlds.goal_util",
"hlds.goal_util",
"case_to_disjunct",
11,
0
},
"hlds.goal_util",
"goal_util.m",
1341,
"28"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__goal_util__case_to_disjunct_11_0_1 = {
{
MR_PREDICATE,
"hlds.goal_util",
"hlds.goal_util",
"lambda_goal_util_m_1363",
2,
0
},
"hlds.goal_util",
"goal_util.m",
1363,
"29"
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
1737,
"4"
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
1726,
"4"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__goal_util__predids_with_args_from_goal_2_0_1 = {
{
MR_PREDICATE,
"hlds.goal_util",
"hlds.goal_util",
"lambda_goal_util_m_1730",
2,
0
},
"hlds.goal_util",
"goal_util.m",
1730,
"4"
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
1726,
"4"
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
967,
"4"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__goal_util__extra_nonlocal_typeinfos_5_0_2 = {
{
MR_PREDICATE,
"hlds.goal_util",
"hlds.goal_util",
"lambda_goal_util_m_832",
3,
0
},
"hlds.goal_util",
"goal_util.m",
832,
"21"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__goal_util__extra_nonlocal_typeinfos_5_0_1 = {
{
MR_FUNCTION,
"hlds.goal_util",
"hlds.goal_util",
"lambda_goal_util_m_821",
3,
0
},
"hlds.goal_util",
"goal_util.m",
821,
"12"
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
620,
"94"
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
619,
"92"
};


MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0);
MR_decl_entry(hlds__instmap__apply_instmap_delta_3_0);

MR_BEGIN_MODULE(hlds__goal_util_module0)
	MR_init_entry1(hlds__goal_util__update_instmap_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_util__update_instmap_3_0);
	MR_init_label1(hlds__goal_util__update_instmap_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'update_instmap'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_util__update_instmap_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		hlds__goal_util__update_instmap_3_0_i2);
MR_def_label(hlds__goal_util__update_instmap_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(hlds__instmap__apply_instmap_delta_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(varset__new_var_3_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);
MR_decl_entry(hlds__instmap__instmap_delta_search_var_3_0);
MR_decl_entry(require__unexpected_3_0);
MR_decl_entry(parse_tree__set_of_var__list_to_set_2_0);
MR_decl_entry(fn__hlds__instmap__instmap_delta_from_assoc_list_1_0);
MR_decl_entry(fn__term__context_init_0_0);
MR_decl_entry(hlds__hlds_goal__goal_info_init_6_0);

MR_BEGIN_MODULE(hlds__goal_util_module1)
	MR_init_entry1(hlds__goal_util__create_renaming_2_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_util__create_renaming_2_12_0);
	MR_init_label10(hlds__goal_util__create_renaming_2_12_0,47,3,4,6,7,10,8,22,23,26)
	MR_init_label3(hlds__goal_util__create_renaming_2_12_0,27,28,31)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_renaming_2'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__goal_util__create_renaming_2_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
MR_def_label(hlds__goal_util__create_renaming_2_12_0,47)
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
	MR_sv(9) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_sv(5) = MR_tfield(1, MR_r1, 0);
	MR_sv(6) = MR_tfield(1, MR_r1, 1);
	MR_sv(13) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(13);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(varset__new_var_3_0,
		hlds__goal_util__create_renaming_2_12_0_i4);
MR_def_label(hlds__goal_util__create_renaming_2_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(11) = MR_r2;
	MR_sv(14) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(5);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__goal_util__create_renaming_2_12_0_i6);
MR_def_label(hlds__goal_util__create_renaming_2_12_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(9);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		hlds__goal_util__create_renaming_2_12_0_i7);
MR_def_label(hlds__goal_util__create_renaming_2_12_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_search_var_3_0,
		hlds__goal_util__create_renaming_2_12_0_i10);
MR_def_label(hlds__goal_util__create_renaming_2_12_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__goal_util__create_renaming_2_12_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 2, (MR_Integer) 2);
	MR_r6 = MR_tempr4;
	MR_tempr9 = MR_sv(5);
	MR_tfield(2, MR_tempr4, 0) = MR_tempr9;
	MR_tempr10 = MR_sv(7);
	MR_tfield(2, MR_tempr4, 1) = MR_tempr10;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 1);
	MR_r7 = MR_tempr5;
	MR_tfield(0, MR_tempr5, 0) = MR_tempr10;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 5);
	MR_sv(8) = MR_tempr6;
	MR_tfield(1, MR_tempr6, 0) = MR_tempr9;
	MR_tfield(1, MR_tempr6, 1) = MR_tempr5;
	MR_tfield(1, MR_tempr6, 2) = MR_tempr3;
	MR_tfield(1, MR_tempr6, 3) = MR_tempr4;
	MR_tfield(1, MR_tempr6, 4) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr7;
	MR_tfield(1, MR_tempr7, 0) = MR_tempr10;
	MR_tfield(1, MR_tempr7, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr8, 1, (MR_Integer) 2);
	MR_r8 = MR_tempr8;
	MR_tfield(1, MR_tempr8, 0) = MR_tempr9;
	MR_tfield(1, MR_tempr8, 1) = MR_tempr7;
	MR_sv(9) = MR_r2;
	MR_r2 = MR_tempr8;
	MR_r1 = MR_sv(13);
	MR_GOTO_LAB(hlds__goal_util__create_renaming_2_12_0_i22);
	}
MR_def_label(hlds__goal_util__create_renaming_2_12_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(12);
	MR_r1 = (MR_Word) MR_string_const("hlds.goal_util", 14);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.goal_util.create_renaming_2\'/12", 47);
	MR_r3 = (MR_Word) MR_string_const("cannot get new inst", 19);
	MR_np_call_localret_ent(require__unexpected_3_0,
		hlds__goal_util__create_renaming_2_12_0_i22);
MR_def_label(hlds__goal_util__create_renaming_2_12_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_np_call_localret_ent(parse_tree__set_of_var__list_to_set_2_0,
		hlds__goal_util__create_renaming_2_12_0_i23);
MR_def_label(hlds__goal_util__create_renaming_2_12_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(5);
	MR_tfield(0, MR_r2, 1) = MR_sv(9);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_from_assoc_list_1_0,
		hlds__goal_util__create_renaming_2_12_0_i26);
MR_def_label(hlds__goal_util__create_renaming_2_12_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		hlds__goal_util__create_renaming_2_12_0_i27);
MR_def_label(hlds__goal_util__create_renaming_2_12_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 0;
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_6_0,
		hlds__goal_util__create_renaming_2_12_0_i28);
MR_def_label(hlds__goal_util__create_renaming_2_12_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(9) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(2);
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_r2;
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(4);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		hlds__goal_util__create_renaming_2_12_0_i31);
MR_def_label(hlds__goal_util__create_renaming_2_12_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(12);
	MR_r5 = MR_sv(9);
	MR_r7 = MR_tempr2;
	MR_succip_word = MR_sv(15);
	MR_GOTO_LAB(hlds__goal_util__create_renaming_2_12_0_i47);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(list__reverse_2_0);

MR_BEGIN_MODULE(hlds__goal_util_module2)
	MR_init_entry1(hlds__goal_util__create_renaming_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_util__create_renaming_9_0);
	MR_init_label4(hlds__goal_util__create_renaming_9_0,3,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_renaming'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_util__create_renaming_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__map__init_0_0,
		hlds__goal_util__create_renaming_9_0_i3);
MR_def_label(hlds__goal_util__create_renaming_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__goal_util__create_renaming_2_12_0,
		hlds__goal_util__create_renaming_9_0_i4);
MR_def_label(hlds__goal_util__create_renaming_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(list__reverse_2_0,
		hlds__goal_util__create_renaming_9_0_i5);
MR_def_label(hlds__goal_util__create_renaming_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		hlds__goal_util__create_renaming_9_0_i6);
MR_def_label(hlds__goal_util__create_renaming_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(1);
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(varset__search_name_3_0);
MR_decl_entry(varset__name_var_4_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(hlds__goal_util_module3)
	MR_init_entry1(hlds__goal_util__clone_variable_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_util__clone_variable_10_0);
	MR_init_label10(hlds__goal_util__clone_variable_10_0,4,2,6,9,11,7,14,15,17,19)
	MR_init_label1(hlds__goal_util__clone_variable_10_0,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'clone_variable'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_util__clone_variable_10_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_sv(3) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(7) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_r2;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__goal_util__clone_variable_10_0_i4);
MR_def_label(hlds__goal_util__clone_variable_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__goal_util__clone_variable_10_0_i2);
	}
	MR_r4 = MR_r2;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(7);
	MR_decr_sp_and_return(8);
MR_def_label(hlds__goal_util__clone_variable_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(varset__new_var_3_0,
		hlds__goal_util__clone_variable_10_0_i6);
MR_def_label(hlds__goal_util__clone_variable_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(varset__search_name_3_0,
		hlds__goal_util__clone_variable_10_0_i9);
MR_def_label(hlds__goal_util__clone_variable_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__goal_util__clone_variable_10_0_i7);
	}
	MR_r1 = MR_sv(6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(varset__name_var_4_0,
		hlds__goal_util__clone_variable_10_0_i11);
MR_def_label(hlds__goal_util__clone_variable_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(2);
	MR_sv(5) = MR_r1;
	MR_r6 = MR_sv(7);
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_GOTO_LAB(hlds__goal_util__clone_variable_10_0_i14);
MR_def_label(hlds__goal_util__clone_variable_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tempr2 = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_r1;
	MR_r6 = MR_sv(7);
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
MR_def_label(hlds__goal_util__clone_variable_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r3 = MR_r2;
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		hlds__goal_util__clone_variable_10_0_i15);
MR_def_label(hlds__goal_util__clone_variable_10_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__goal_util__clone_variable_10_0_i17);
MR_def_label(hlds__goal_util__clone_variable_10_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__goal_util__clone_variable_10_0_i16);
	}
	MR_r1 = MR_sv(6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(3);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		hlds__goal_util__clone_variable_10_0_i19);
MR_def_label(hlds__goal_util__clone_variable_10_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(8);
	}
MR_def_label(hlds__goal_util__clone_variable_10_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module4)
	MR_init_entry1(hlds__goal_util__clone_variables_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_util__clone_variables_9_0);
	MR_init_label3(hlds__goal_util__clone_variables_9_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'clone_variables'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_util__clone_variables_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(hlds__goal_util__clone_variables_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__goal_util__clone_variables_9_0_i3);
	}
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_r3 = MR_r6;
	MR_decr_sp_and_return(4);
MR_def_label(hlds__goal_util__clone_variables_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(hlds__goal_util__clone_variable_10_0,
		hlds__goal_util__clone_variables_9_0_i4);
MR_def_label(hlds__goal_util__clone_variables_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr3;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(hlds__goal_util__clone_variables_9_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module5)
	MR_init_entry1(hlds__goal_util__generic_call_vars_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_util__generic_call_vars_2_0);
	MR_init_label3(hlds__goal_util__generic_call_vars_2_0,3,9,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generic_call_vars'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_util__generic_call_vars_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,3)) {
		MR_GOTO_LAB(hlds__goal_util__generic_call_vars_2_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(hlds__goal_util__generic_call_vars_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(hlds__goal_util__generic_call_vars_2_0_i4);
	}
MR_def_label(hlds__goal_util__generic_call_vars_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_mask_field(MR_r1, 0);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(hlds__goal_util__generic_call_vars_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(hlds__goal_util__generic_call_vars_2_0_i9);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module6)
	MR_init_entry1(hlds__goal_util__goals_goal_vars_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_util__goals_goal_vars_3_0);
	MR_init_label3(hlds__goal_util__goals_goal_vars_3_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goals_goal_vars'/3 mode 0 */
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
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(hlds__goal_util__goal_vars_2_3_0,
		hlds__goal_util__goals_goal_vars_3_0_i4);
MR_def_label(hlds__goal_util__goals_goal_vars_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(hlds__goal_util__goals_goal_vars_3_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__set_of_var__insert_list_3_0);
MR_decl_entry(parse_tree__set_of_var__insert_3_0);
MR_decl_entry(__Unify___term__var_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_foreign_arg_0;
MR_decl_entry(fn__list__map_2_0);

MR_BEGIN_MODULE(hlds__goal_util_module7)
	MR_init_entry1(hlds__goal_util__goal_vars_2_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_util__goal_vars_2_3_0);
	MR_init_label10(hlds__goal_util__goal_vars_2_3_0,220,3,5,8,10,15,12,13,159,7)
	MR_init_label10(hlds__goal_util__goal_vars_2_3_0,25,27,28,22,30,32,35,36,34,39)
	MR_init_label10(hlds__goal_util__goal_vars_2_3_0,40,41,38,45,47,48,50,146,51,52)
	MR_init_label10(hlds__goal_util__goal_vars_2_3_0,43,61,62,63,64,101,66,68,60,71)
	MR_init_label3(hlds__goal_util__goal_vars_2_3_0,70,58,74)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_vars_2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__goal_util__goal_vars_2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(hlds__goal_util__goal_vars_2_3_0,220)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_r5 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(hlds__goal_util__goal_vars_2_3_0_i3);
	}
	MR_r1 = MR_body((MR_Integer) MR_tempr1, (MR_Integer) 0);
	MR_succip_word = MR_sv(7);
	continue;
	}
	break;
	} /* end while */
MR_def_label(hlds__goal_util__goal_vars_2_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,2)) {
		MR_GOTO_LAB(hlds__goal_util__goal_vars_2_3_0_i5);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(2, MR_r5, 2);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(parse_tree__set_of_var__insert_list_3_0);
	}
MR_def_label(hlds__goal_util__goal_vars_2_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(hlds__goal_util__goal_vars_2_3_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r5;
	MR_sv(1) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_tfield(1, MR_tempr2, 3);
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(4);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__insert_3_0,
		hlds__goal_util__goal_vars_2_3_0_i8);
MR_def_label(hlds__goal_util__goal_vars_2_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),2)) {
		MR_GOTO_LAB(hlds__goal_util__goal_vars_2_3_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(hlds__goal_util__rhs_goal_vars_3_0);
	}
MR_def_label(hlds__goal_util__goal_vars_2_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),0)) {
		MR_GOTO_LAB(hlds__goal_util__goal_vars_2_3_0_i159);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_sv(3), 4);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(hlds__goal_util__goal_vars_2_3_0_i13);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tfield(0, MR_body((MR_Integer) MR_tempr1, (MR_Integer) 1), 0);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		hlds__goal_util__goal_vars_2_3_0_i15);
MR_def_label(hlds__goal_util__goal_vars_2_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__goal_util__goal_vars_2_3_0_i12);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__set_of_var__insert_3_0,
		hlds__goal_util__goal_vars_2_3_0_i159);
MR_def_label(hlds__goal_util__goal_vars_2_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
MR_def_label(hlds__goal_util__goal_vars_2_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(hlds__goal_util__rhs_goal_vars_3_0);
	}
MR_def_label(hlds__goal_util__goal_vars_2_3_0,159)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(hlds__goal_util__rhs_goal_vars_3_0);
	}
MR_def_label(hlds__goal_util__goal_vars_2_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,1)) {
		MR_GOTO_LAB(hlds__goal_util__goal_vars_2_3_0_i22);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 5);
	MR_sv(2) = MR_r2;
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r4 = MR_tfield(3, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		hlds__goal_util__goal_vars_2_3_0_i25);
MR_def_label(hlds__goal_util__goal_vars_2_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		hlds__goal_util__goal_vars_2_3_0_i27);
MR_def_label(hlds__goal_util__goal_vars_2_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__insert_list_3_0,
		hlds__goal_util__goal_vars_2_3_0_i28);
MR_def_label(hlds__goal_util__goal_vars_2_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(parse_tree__set_of_var__insert_list_3_0);
	}
MR_def_label(hlds__goal_util__goal_vars_2_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,2)) {
		MR_GOTO_LAB(hlds__goal_util__goal_vars_2_3_0_i30);
	}
	MR_r1 = MR_tfield(3, MR_r5, 2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(hlds__goal_util__goals_goal_vars_3_0);
MR_def_label(hlds__goal_util__goal_vars_2_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,3)) {
		MR_GOTO_LAB(hlds__goal_util__goal_vars_2_3_0_i32);
	}
	MR_r1 = MR_tfield(3, MR_r5, 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(hlds__goal_util__goals_goal_vars_3_0);
MR_def_label(hlds__goal_util__goal_vars_2_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,0)) {
		MR_GOTO_LAB(hlds__goal_util__goal_vars_2_3_0_i34);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(hlds__goal_util__generic_call_vars_2_0,
		hlds__goal_util__goal_vars_2_3_0_i35);
MR_def_label(hlds__goal_util__goal_vars_2_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__insert_list_3_0,
		hlds__goal_util__goal_vars_2_3_0_i36);
MR_def_label(hlds__goal_util__goal_vars_2_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(parse_tree__set_of_var__insert_list_3_0);
	}
MR_def_label(hlds__goal_util__goal_vars_2_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,6)) {
		MR_GOTO_LAB(hlds__goal_util__goal_vars_2_3_0_i38);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r5;
	MR_sv(1) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(2) = MR_tfield(3, MR_tempr2, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr2, 4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__insert_list_3_0,
		hlds__goal_util__goal_vars_2_3_0_i39);
MR_def_label(hlds__goal_util__goal_vars_2_3_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_localcall_lab(hlds__goal_util__goal_vars_2_3_0,
		hlds__goal_util__goal_vars_2_3_0_i40);
MR_def_label(hlds__goal_util__goal_vars_2_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_localcall_lab(hlds__goal_util__goal_vars_2_3_0,
		hlds__goal_util__goal_vars_2_3_0_i41);
MR_def_label(hlds__goal_util__goal_vars_2_3_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(hlds__goal_util__goal_vars_2_3_0_i220);
	}
MR_def_label(hlds__goal_util__goal_vars_2_3_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,5)) {
		MR_GOTO_LAB(hlds__goal_util__goal_vars_2_3_0_i43);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r5;
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(hlds__goal_util__goal_vars_2_3_0_i45);
	}
	MR_sv(1) = MR_tfield(3, MR_tempr3, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__insert_list_3_0,
		hlds__goal_util__goal_vars_2_3_0_i71);
MR_def_label(hlds__goal_util__goal_vars_2_3_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(hlds__goal_util__goal_vars_2_3_0_i47);
	}
	MR_r1 = MR_tfield(3, MR_r5, 2);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(hlds__goal_util__goal_vars_2_3_0_i220);
MR_def_label(hlds__goal_util__goal_vars_2_3_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(hlds__goal_util__goal_vars_2_3_0_i48);
	}
	MR_sv(1) = MR_tfield(3, MR_r5, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(1, MR_r3, 0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__insert_list_3_0,
		hlds__goal_util__goal_vars_2_3_0_i71);
MR_def_label(hlds__goal_util__goal_vars_2_3_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,3)) {
		MR_GOTO_LAB(hlds__goal_util__goal_vars_2_3_0_i50);
	}
	MR_r1 = MR_tfield(3, MR_r5, 2);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(hlds__goal_util__goal_vars_2_3_0_i220);
MR_def_label(hlds__goal_util__goal_vars_2_3_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,2)) {
		MR_GOTO_LAB(hlds__goal_util__goal_vars_2_3_0_i51);
	}
MR_def_label(hlds__goal_util__goal_vars_2_3_0,146)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_r5, 2);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(hlds__goal_util__goal_vars_2_3_0_i220);
MR_def_label(hlds__goal_util__goal_vars_2_3_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,4)) {
		MR_GOTO_LAB(hlds__goal_util__goal_vars_2_3_0_i52);
	}
	MR_sv(1) = MR_tfield(3, MR_r5, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(3, MR_r3, 1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__insert_3_0,
		hlds__goal_util__goal_vars_2_3_0_i71);
MR_def_label(hlds__goal_util__goal_vars_2_3_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,1)) {
		MR_GOTO_LAB(hlds__goal_util__goal_vars_2_3_0_i146);
	}
	MR_sv(1) = MR_tfield(3, MR_r5, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(3, MR_r3, 1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__insert_3_0,
		hlds__goal_util__goal_vars_2_3_0_i71);
MR_def_label(hlds__goal_util__goal_vars_2_3_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,7)) {
		MR_GOTO_LAB(hlds__goal_util__goal_vars_2_3_0_i58);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(3, MR_r5, 1);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(hlds__goal_util__goal_vars_2_3_0_i60);
	}
	MR_sv(1) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 3);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 4);
	MR_sv(4) = MR_tfield(1, MR_tempr1, 5);
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(6);
	MR_tempr3 = MR_r2;
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	MR_r3 = MR_tempr3;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__insert_3_0,
		hlds__goal_util__goal_vars_2_3_0_i61);
MR_def_label(hlds__goal_util__goal_vars_2_3_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__insert_3_0,
		hlds__goal_util__goal_vars_2_3_0_i62);
MR_def_label(hlds__goal_util__goal_vars_2_3_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__insert_3_0,
		hlds__goal_util__goal_vars_2_3_0_i63);
MR_def_label(hlds__goal_util__goal_vars_2_3_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__insert_3_0,
		hlds__goal_util__goal_vars_2_3_0_i64);
MR_def_label(hlds__goal_util__goal_vars_2_3_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(hlds__goal_util__goal_vars_2_3_0_i66);
	}
MR_def_label(hlds__goal_util__goal_vars_2_3_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_localcall_lab(hlds__goal_util__goal_vars_2_3_0,
		hlds__goal_util__goal_vars_2_3_0_i68);
MR_def_label(hlds__goal_util__goal_vars_2_3_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__insert_list_3_0,
		hlds__goal_util__goal_vars_2_3_0_i101);
MR_def_label(hlds__goal_util__goal_vars_2_3_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(hlds__goal_util__goals_goal_vars_3_0);
	}
MR_def_label(hlds__goal_util__goal_vars_2_3_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,0)) {
		MR_GOTO_LAB(hlds__goal_util__goal_vars_2_3_0_i70);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_localcall_lab(hlds__goal_util__goal_vars_2_3_0,
		hlds__goal_util__goal_vars_2_3_0_i71);
MR_def_label(hlds__goal_util__goal_vars_2_3_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(hlds__goal_util__goal_vars_2_3_0_i220);
	}
MR_def_label(hlds__goal_util__goal_vars_2_3_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(2, MR_r4, 2);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(hlds__goal_util__goal_vars_2_3_0_i220);
MR_def_label(hlds__goal_util__goal_vars_2_3_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r5;
	MR_sv(1) = MR_tfield(3, MR_tempr2, 3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__insert_3_0,
		hlds__goal_util__goal_vars_2_3_0_i74);
MR_def_label(hlds__goal_util__goal_vars_2_3_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(hlds__goal_util__cases_goal_vars_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module8)
	MR_init_entry1(hlds__goal_util__cases_goal_vars_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_util__cases_goal_vars_3_0);
	MR_init_label3(hlds__goal_util__cases_goal_vars_3_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cases_goal_vars'/3 mode 0 */
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
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 2);
	MR_np_call_localret_ent(hlds__goal_util__goal_vars_2_3_0,
		hlds__goal_util__cases_goal_vars_3_0_i4);
MR_def_label(hlds__goal_util__cases_goal_vars_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(hlds__goal_util__cases_goal_vars_3_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module9)
	MR_init_entry1(hlds__goal_util__rhs_goal_vars_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_util__rhs_goal_vars_3_0);
	MR_init_label4(hlds__goal_util__rhs_goal_vars_3_0,3,6,7,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rhs_goal_vars'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__goal_util__rhs_goal_vars_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(hlds__goal_util__rhs_goal_vars_3_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(1, MR_tempr1, 2);
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(parse_tree__set_of_var__insert_list_3_0);
	}
MR_def_label(hlds__goal_util__rhs_goal_vars_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(hlds__goal_util__rhs_goal_vars_3_0_i5);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(2, MR_r1, 3);
	MR_sv(2) = MR_tfield(2, MR_r1, 6);
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(2, MR_tempr1, 2);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__insert_list_3_0,
		hlds__goal_util__rhs_goal_vars_3_0_i6);
MR_def_label(hlds__goal_util__rhs_goal_vars_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__insert_list_3_0,
		hlds__goal_util__rhs_goal_vars_3_0_i7);
MR_def_label(hlds__goal_util__rhs_goal_vars_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(hlds__goal_util__goal_vars_2_3_0);
	}
MR_def_label(hlds__goal_util__rhs_goal_vars_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(parse_tree__set_of_var__insert_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__set_of_var__init_0_0);

MR_BEGIN_MODULE(hlds__goal_util_module10)
	MR_init_entry1(hlds__goal_util__goal_vars_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_util__goal_vars_2_0);
	MR_init_label1(hlds__goal_util__goal_vars_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_vars'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_util__goal_vars_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__init_0_0,
		hlds__goal_util__goal_vars_2_0_i2);
MR_def_label(hlds__goal_util__goal_vars_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(hlds__goal_util__goal_vars_2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module11)
	MR_init_entry1(hlds__goal_util__attach_features_to_all_goals_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_util__attach_features_to_all_goals_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'attach_features_to_all_goals'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_util__attach_features_to_all_goals_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module12)
	MR_init_entry1(hlds__goal_util__attach_features_to_all_goals_4_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_util__attach_features_to_all_goals_4_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'attach_features_to_all_goals'/4 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_util__attach_features_to_all_goals_4_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__set_of_var__to_sorted_list_2_0);
MR_decl_entry(map__apply_to_list_3_0);
MR_decl_entry(parse_tree__prog_type__type_vars_list_2_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_decl_entry(fn__parse_tree__set_of_var__list_to_set_1_0);
MR_decl_entry(solutions__solutions_2_1);
MR_decl_entry(parse_tree__set_of_var__sorted_list_to_set_2_0);
MR_decl_entry(fn__parse_tree__set_of_var__union_2_0);

MR_BEGIN_MODULE(hlds__goal_util_module13)
	MR_init_entry1(hlds__goal_util__extra_nonlocal_typeinfos_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_util__extra_nonlocal_typeinfos_5_0);
	MR_init_label9(hlds__goal_util__extra_nonlocal_typeinfos_5_0,2,4,5,7,8,10,11,13,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'extra_nonlocal_typeinfos'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_util__extra_nonlocal_typeinfos_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(parse_tree__set_of_var__to_sorted_list_2_0,
		hlds__goal_util__extra_nonlocal_typeinfos_5_0_i2);
MR_def_label(hlds__goal_util__extra_nonlocal_typeinfos_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__apply_to_list_3_0,
		hlds__goal_util__extra_nonlocal_typeinfos_5_0_i4);
MR_def_label(hlds__goal_util__extra_nonlocal_typeinfos_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_type__type_vars_list_2_0,
		hlds__goal_util__extra_nonlocal_typeinfos_5_0_i5);
MR_def_label(hlds__goal_util__extra_nonlocal_typeinfos_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__goal_util__extra_nonlocal_typeinfos_5_0_i7);
MR_def_label(hlds__goal_util__extra_nonlocal_typeinfos_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__set_of_var__list_to_set_2_0,
		hlds__goal_util__extra_nonlocal_typeinfos_5_0_i8);
MR_def_label(hlds__goal_util__extra_nonlocal_typeinfos_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__hlds__goal_util__IntroducedFrom__func__extra_nonlocal_typeinfos__821__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		hlds__goal_util__extra_nonlocal_typeinfos_5_0_i10);
MR_def_label(hlds__goal_util__extra_nonlocal_typeinfos_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__list_to_set_1_0,
		hlds__goal_util__extra_nonlocal_typeinfos_5_0_i11);
MR_def_label(hlds__goal_util__extra_nonlocal_typeinfos_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(3,1);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__832__1_3_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_r2, 3) = MR_sv(1);
	MR_tfield(0, MR_r2, 4) = MR_sv(4);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(solutions__solutions_2_1,
		hlds__goal_util__extra_nonlocal_typeinfos_5_0_i13);
MR_def_label(hlds__goal_util__extra_nonlocal_typeinfos_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__sorted_list_to_set_2_0,
		hlds__goal_util__extra_nonlocal_typeinfos_5_0_i14);
MR_def_label(hlds__goal_util__extra_nonlocal_typeinfos_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__parse_tree__set_of_var__union_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module14)
	MR_init_entry1(fn__hlds__goal_util__proc_body_is_leaf_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__goal_util__proc_body_is_leaf_1_0);
	MR_init_label10(fn__hlds__goal_util__proc_body_is_leaf_1_0,117,3,40,5,8,10,14,16,18,12)
	MR_init_label6(fn__hlds__goal_util__proc_body_is_leaf_1_0,22,21,31,33,69,27)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'proc_body_is_leaf'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__goal_util__proc_body_is_leaf_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(fn__hlds__goal_util__proc_body_is_leaf_1_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_r2 = MR_tfield(0, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(fn__hlds__goal_util__proc_body_is_leaf_1_0_i3);
	}
	MR_r1 = MR_body((MR_Integer) MR_r2, (MR_Integer) 0);
	MR_succip_word = MR_sv(3);
	/* continue */
	} /* end while */
MR_def_label(fn__hlds__goal_util__proc_body_is_leaf_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(fn__hlds__goal_util__proc_body_is_leaf_1_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 3);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(fn__hlds__goal_util__proc_body_is_leaf_1_0_i69);
	}
	}
MR_def_label(fn__hlds__goal_util__proc_body_is_leaf_1_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(fn__hlds__goal_util__proc_body_is_leaf_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,2)) {
		MR_GOTO_LAB(fn__hlds__goal_util__proc_body_is_leaf_1_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_r2, 2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__hlds__goal_util__proc_body_is_leaf_goals_1_0);
MR_def_label(fn__hlds__goal_util__proc_body_is_leaf_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,3)) {
		MR_GOTO_LAB(fn__hlds__goal_util__proc_body_is_leaf_1_0_i10);
	}
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__hlds__goal_util__proc_body_is_leaf_goals_1_0);
MR_def_label(fn__hlds__goal_util__proc_body_is_leaf_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,6)) {
		MR_GOTO_LAB(fn__hlds__goal_util__proc_body_is_leaf_1_0_i12);
	}
	MR_sv(1) = MR_tfield(3, MR_r2, 3);
	MR_sv(2) = MR_tfield(3, MR_r2, 4);
	MR_r1 = MR_tfield(3, MR_r2, 2);
	MR_np_localcall_lab(fn__hlds__goal_util__proc_body_is_leaf_1_0,
		fn__hlds__goal_util__proc_body_is_leaf_1_0_i14);
MR_def_label(fn__hlds__goal_util__proc_body_is_leaf_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__hlds__goal_util__proc_body_is_leaf_1_0_i40);
	}
	MR_r1 = MR_sv(1);
	MR_np_localcall_lab(fn__hlds__goal_util__proc_body_is_leaf_1_0,
		fn__hlds__goal_util__proc_body_is_leaf_1_0_i16);
MR_def_label(fn__hlds__goal_util__proc_body_is_leaf_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__hlds__goal_util__proc_body_is_leaf_1_0_i40);
	}
	MR_r1 = MR_sv(2);
	MR_np_localcall_lab(fn__hlds__goal_util__proc_body_is_leaf_1_0,
		fn__hlds__goal_util__proc_body_is_leaf_1_0_i18);
MR_def_label(fn__hlds__goal_util__proc_body_is_leaf_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__hlds__goal_util__proc_body_is_leaf_1_0_i40);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(fn__hlds__goal_util__proc_body_is_leaf_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,5)) {
		MR_GOTO_LAB(fn__hlds__goal_util__proc_body_is_leaf_1_0_i21);
	}
	MR_r3 = MR_tfield(3, MR_r2, 2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r2, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(fn__hlds__goal_util__proc_body_is_leaf_1_0_i22);
	}
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__hlds__goal_util__proc_body_is_leaf_1_0_i22);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
	}
MR_def_label(fn__hlds__goal_util__proc_body_is_leaf_1_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(fn__hlds__goal_util__proc_body_is_leaf_1_0_i117);
MR_def_label(fn__hlds__goal_util__proc_body_is_leaf_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,7)) {
		MR_GOTO_LAB(fn__hlds__goal_util__proc_body_is_leaf_1_0_i27);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r2, 1);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__hlds__goal_util__proc_body_is_leaf_1_0_i40);
	}
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_localcall_lab(fn__hlds__goal_util__proc_body_is_leaf_1_0,
		fn__hlds__goal_util__proc_body_is_leaf_1_0_i31);
MR_def_label(fn__hlds__goal_util__proc_body_is_leaf_1_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__hlds__goal_util__proc_body_is_leaf_1_0_i40);
	}
	MR_r1 = MR_sv(1);
	MR_np_localcall_lab(fn__hlds__goal_util__proc_body_is_leaf_1_0,
		fn__hlds__goal_util__proc_body_is_leaf_1_0_i33);
MR_def_label(fn__hlds__goal_util__proc_body_is_leaf_1_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__hlds__goal_util__proc_body_is_leaf_1_0_i40);
	}
MR_def_label(fn__hlds__goal_util__proc_body_is_leaf_1_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(fn__hlds__goal_util__proc_body_is_leaf_1_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,4)) {
		MR_GOTO_LAB(fn__hlds__goal_util__proc_body_is_leaf_1_0_i40);
	}
	MR_r1 = MR_tfield(3, MR_r2, 3);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__hlds__goal_util__proc_body_is_leaf_cases_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module15)
	MR_init_entry1(fn__hlds__goal_util__proc_body_is_leaf_goals_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__goal_util__proc_body_is_leaf_goals_1_0);
	MR_init_label4(fn__hlds__goal_util__proc_body_is_leaf_goals_1_0,24,5,7,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'proc_body_is_leaf_goals'/2 mode 0 */
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
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
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


MR_BEGIN_MODULE(hlds__goal_util_module16)
	MR_init_entry1(fn__hlds__goal_util__proc_body_is_leaf_cases_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__goal_util__proc_body_is_leaf_cases_1_0);
	MR_init_label4(fn__hlds__goal_util__proc_body_is_leaf_cases_1_0,24,5,7,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'proc_body_is_leaf_cases'/2 mode 0 */
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
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 2);
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


MR_BEGIN_MODULE(hlds__goal_util_module17)
	MR_init_entry1(hlds__goal_util__goal_is_branched_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_util__goal_is_branched_1_0);
	MR_init_label1(hlds__goal_util__goal_is_branched_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_is_branched'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_util__goal_is_branched_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TEST(MR_r1,3,3)) {
		MR_GOTO_LAB(hlds__goal_util__goal_is_branched_1_0_i2);
	}
	if (MR_RTAGS_TEST(MR_r1,3,6)) {
		MR_GOTO_LAB(hlds__goal_util__goal_is_branched_1_0_i2);
	}
	MR_r1 = ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 4));
	MR_proceed();
MR_def_label(hlds__goal_util__goal_is_branched_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module18)
	MR_init_entry1(hlds__goal_util__goal_size_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_util__goal_size_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_size'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_util__goal_size_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_tailcall_ent(hlds__goal_util__goal_expr_size_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module19)
	MR_init_entry1(hlds__goal_util__goals_size_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_util__goals_size_2_0);
	MR_init_label3(hlds__goal_util__goals_size_2_0,13,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goals_size'/2 mode 0 */
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
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	MR_np_call_localret_ent(hlds__goal_util__goal_expr_size_2_0,
		hlds__goal_util__goals_size_2_0_i4);
MR_def_label(hlds__goal_util__goals_size_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
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


MR_BEGIN_MODULE(hlds__goal_util_module20)
	MR_init_entry1(hlds__goal_util__cases_size_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_util__cases_size_2_0);
	MR_init_label3(hlds__goal_util__cases_size_2_0,13,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cases_size'/2 mode 0 */
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
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_tfield(0, MR_tfield(1, MR_r1, 0), 2), 0);
	MR_np_call_localret_ent(hlds__goal_util__goal_expr_size_2_0,
		hlds__goal_util__cases_size_2_0_i4);
MR_def_label(hlds__goal_util__cases_size_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
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


MR_BEGIN_MODULE(hlds__goal_util_module21)
	MR_init_entry1(hlds__goal_util__goal_expr_size_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_util__goal_expr_size_2_0);
	MR_init_label10(hlds__goal_util__goal_expr_size_2_0,3,6,34,5,9,12,13,14,11,39)
	MR_init_label9(hlds__goal_util__goal_expr_size_2_0,86,15,24,23,27,28,26,21,81)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_expr_size'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__goal_util__goal_expr_size_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(hlds__goal_util__goal_expr_size_2_0_i3);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(0, MR_body((MR_Integer) MR_r1, (MR_Integer) 0), 0);
	MR_np_localcall_lab(hlds__goal_util__goal_expr_size_2_0,
		hlds__goal_util__goal_expr_size_2_0_i34);
MR_def_label(hlds__goal_util__goal_expr_size_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(hlds__goal_util__goal_expr_size_2_0_i5);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(2) = MR_tfield(3, MR_r1, 1);
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_call_localret_ent(hlds__goal_util__goals_size_2_0,
		hlds__goal_util__goal_expr_size_2_0_i6);
MR_def_label(hlds__goal_util__goal_expr_size_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(hlds__goal_util__goal_expr_size_2_0_i81);
	}
MR_def_label(hlds__goal_util__goal_expr_size_2_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 + (MR_Integer) 1);
	MR_decr_sp_and_return(4);
MR_def_label(hlds__goal_util__goal_expr_size_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(hlds__goal_util__goal_expr_size_2_0_i9);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(hlds__goal_util__goals_size_2_0,
		hlds__goal_util__goal_expr_size_2_0_i34);
MR_def_label(hlds__goal_util__goal_expr_size_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(hlds__goal_util__goal_expr_size_2_0_i11);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(2) = MR_tfield(3, MR_r1, 3);
	MR_sv(1) = MR_tfield(3, MR_r1, 4);
	MR_r1 = MR_tfield(0, MR_tfield(3, MR_r1, 2), 0);
	MR_np_localcall_lab(hlds__goal_util__goal_expr_size_2_0,
		hlds__goal_util__goal_expr_size_2_0_i12);
MR_def_label(hlds__goal_util__goal_expr_size_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(2), 0);
	MR_np_localcall_lab(hlds__goal_util__goal_expr_size_2_0,
		hlds__goal_util__goal_expr_size_2_0_i13);
MR_def_label(hlds__goal_util__goal_expr_size_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_np_localcall_lab(hlds__goal_util__goal_expr_size_2_0,
		hlds__goal_util__goal_expr_size_2_0_i14);
MR_def_label(hlds__goal_util__goal_expr_size_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((((MR_Integer) MR_sv(3) + (MR_Integer) MR_sv(2)) + (MR_Integer) MR_r1) + (MR_Integer) 1);
	MR_decr_sp_and_return(4);
MR_def_label(hlds__goal_util__goal_expr_size_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(hlds__goal_util__goal_expr_size_2_0_i15);
	}
	MR_r2 = MR_tfield(3, MR_r1, 2);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_r1, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(hlds__goal_util__goal_expr_size_2_0_i86);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 2);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(hlds__goal_util__goal_expr_size_2_0_i86);
	}
	}
MR_def_label(hlds__goal_util__goal_expr_size_2_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(hlds__goal_util__goal_expr_size_2_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__goal_util__goal_size_2_0,
		hlds__goal_util__goal_expr_size_2_0_i34);
MR_def_label(hlds__goal_util__goal_expr_size_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,7)) {
		MR_GOTO_LAB(hlds__goal_util__goal_expr_size_2_0_i21);
	}
	MR_r2 = MR_tfield(3, MR_r1, 1);
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(hlds__goal_util__goal_expr_size_2_0_i23);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(2) = MR_tfield(1, MR_r2, 5);
	MR_r1 = MR_tfield(1, MR_r2, 4);
	MR_np_call_localret_ent(hlds__goal_util__goal_size_2_0,
		hlds__goal_util__goal_expr_size_2_0_i24);
MR_def_label(hlds__goal_util__goal_expr_size_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__goal_util__goals_size_2_0,
		hlds__goal_util__goal_expr_size_2_0_i28);
MR_def_label(hlds__goal_util__goal_expr_size_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(hlds__goal_util__goal_expr_size_2_0_i26);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(hlds__goal_util__goal_size_2_0,
		hlds__goal_util__goal_expr_size_2_0_i27);
MR_def_label(hlds__goal_util__goal_expr_size_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__goal_util__goal_size_2_0,
		hlds__goal_util__goal_expr_size_2_0_i28);
MR_def_label(hlds__goal_util__goal_expr_size_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (((MR_Integer) MR_sv(2) + (MR_Integer) MR_r1) + (MR_Integer) 1);
	MR_decr_sp_and_return(4);
MR_def_label(hlds__goal_util__goal_expr_size_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(2, MR_r2, 2);
	MR_np_tailcall_ent(hlds__goal_util__goal_size_2_0);
MR_def_label(hlds__goal_util__goal_expr_size_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(hlds__goal_util__goal_expr_size_2_0_i39);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(3, MR_r1, 3);
	MR_np_call_localret_ent(hlds__goal_util__cases_size_2_0,
		hlds__goal_util__goal_expr_size_2_0_i34);
MR_def_label(hlds__goal_util__goal_expr_size_2_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_clauses__type_ctor_info_clause_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(list__foldl_4_0);

MR_BEGIN_MODULE(hlds__goal_util_module22)
	MR_init_entry1(hlds__goal_util__clause_list_size_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_util__clause_list_size_2_0);
	MR_init_label3(hlds__goal_util__clause_list_size_2_0,3,4,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'clause_list_size'/2 mode 0 */
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
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_r4 = MR_sv(1);
	MR_r5 = (MR_Integer) 0;
	MR_np_call_localret_ent(list__foldl_4_0,
		hlds__goal_util__clause_list_size_2_0_i3);
MR_def_label(hlds__goal_util__clause_list_size_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(hlds__goal_util__clause_list_size_2_0_i4);
	}
	MR_r2 = MR_tfield(1, MR_sv(1), 1);
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__goal_util__clause_list_size_2_0_i7);
	}
MR_def_label(hlds__goal_util__clause_list_size_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 + (MR_Integer) 1);
MR_def_label(hlds__goal_util__clause_list_size_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module23)
	MR_init_entry1(hlds__goal_util__goal_calls_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_util__goal_calls_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_calls'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_util__goal_calls_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_tailcall_ent(hlds__goal_util__goal_expr_calls_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module24)
	MR_init_entry1(hlds__goal_util__goal_calls_2_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_util__goal_calls_2_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_calls'/2 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_util__goal_calls_2_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_tailcall_ent(hlds__goal_util__goal_expr_calls_2_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module25)
	MR_init_entry1(hlds__goal_util__goals_calls_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_util__goals_calls_2_0);
	MR_init_label4(hlds__goal_util__goals_calls_2_0,18,5,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goals_calls'/2 mode 0 */
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
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
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

MR_BEGIN_MODULE(hlds__goal_util_module26)
	MR_init_entry1(hlds__goal_util__goals_calls_2_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_util__goals_calls_2_1);
	MR_init_label3(hlds__goal_util__goals_calls_2_1,6,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goals_calls'/2 mode 1 */
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
	MR_fv(1) = MR_tfield(1, MR_r1, 1);
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(hlds__goal_util__goals_calls_2_1_i3);
	MR_r1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
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


MR_BEGIN_MODULE(hlds__goal_util_module27)
	MR_init_entry1(hlds__goal_util__cases_calls_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_util__cases_calls_2_0);
	MR_init_label4(hlds__goal_util__cases_calls_2_0,18,5,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cases_calls'/2 mode 0 */
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
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tfield(0, MR_tfield(0, MR_tfield(1, MR_r1, 0), 2), 0);
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


MR_BEGIN_MODULE(hlds__goal_util_module28)
	MR_init_entry1(hlds__goal_util__cases_calls_2_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_util__cases_calls_2_1);
	MR_init_label3(hlds__goal_util__cases_calls_2_1,6,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cases_calls'/2 mode 1 */
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
	MR_fv(1) = MR_tfield(1, MR_r1, 1);
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(hlds__goal_util__cases_calls_2_1_i3);
	MR_r1 = MR_tfield(0, MR_tfield(0, MR_tfield(1, MR_r1, 0), 2), 0);
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


MR_BEGIN_MODULE(hlds__goal_util_module29)
	MR_init_entry1(hlds__goal_util__goal_expr_calls_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_util__goal_expr_calls_2_0);
	MR_init_label10(hlds__goal_util__goal_expr_calls_2_0,86,3,6,7,10,16,19,13,48,24)
	MR_init_label2(hlds__goal_util__goal_expr_calls_2_0,23,51)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_expr_calls'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__goal_util__goal_expr_calls_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(hlds__goal_util__goal_expr_calls_2_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(hlds__goal_util__goal_expr_calls_2_0_i3);
	}
	MR_r1 = MR_tfield(0, MR_body((MR_Integer) MR_r1, (MR_Integer) 0), 0);
	MR_succip_word = MR_sv(4);
	/* continue */
	} /* end while */
MR_def_label(hlds__goal_util__goal_expr_calls_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(hlds__goal_util__goal_expr_calls_2_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(2, MR_r1, 0);
	MR_tempr2 = MR_tfield(0, MR_r2, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(hlds__goal_util__goal_expr_calls_2_0_i48);
	}
	MR_tempr1 = MR_tfield(2, MR_r1, 1);
	MR_tempr2 = MR_tfield(0, MR_r2, 1);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(4);
	}
MR_def_label(hlds__goal_util__goal_expr_calls_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(hlds__goal_util__goal_expr_calls_2_0_i7);
	}
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(hlds__goal_util__goals_calls_2_0);
MR_def_label(hlds__goal_util__goal_expr_calls_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(hlds__goal_util__goal_expr_calls_2_0_i10);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(hlds__goal_util__goals_calls_2_0);
MR_def_label(hlds__goal_util__goal_expr_calls_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(hlds__goal_util__goal_expr_calls_2_0_i13);
	}
	MR_sv(3) = MR_tfield(3, MR_r1, 4);
	MR_sv(2) = MR_tfield(3, MR_r1, 3);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tfield(0, MR_tfield(3, MR_r1, 2), 0);
	MR_np_localcall_lab(hlds__goal_util__goal_expr_calls_2_0,
		hlds__goal_util__goal_expr_calls_2_0_i16);
MR_def_label(hlds__goal_util__goal_expr_calls_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(hlds__goal_util__goal_expr_calls_2_0_i51);
	}
	MR_r1 = MR_tfield(0, MR_sv(2), 0);
	MR_r2 = MR_sv(1);
	MR_np_localcall_lab(hlds__goal_util__goal_expr_calls_2_0,
		hlds__goal_util__goal_expr_calls_2_0_i19);
MR_def_label(hlds__goal_util__goal_expr_calls_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(hlds__goal_util__goal_expr_calls_2_0_i51);
	}
	MR_r1 = MR_tfield(0, MR_sv(3), 0);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(hlds__goal_util__goal_expr_calls_2_0_i86);
MR_def_label(hlds__goal_util__goal_expr_calls_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(hlds__goal_util__goal_expr_calls_2_0_i23);
	}
	MR_r3 = MR_tfield(3, MR_r1, 2);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_r1, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(hlds__goal_util__goal_expr_calls_2_0_i24);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 2);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(hlds__goal_util__goal_expr_calls_2_0_i24);
	}
	}
MR_def_label(hlds__goal_util__goal_expr_calls_2_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
MR_def_label(hlds__goal_util__goal_expr_calls_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r3, 0);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(hlds__goal_util__goal_expr_calls_2_0_i86);
MR_def_label(hlds__goal_util__goal_expr_calls_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(hlds__goal_util__goal_expr_calls_2_0_i48);
	}
	MR_r1 = MR_tfield(3, MR_r1, 3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(hlds__goal_util__cases_calls_2_0);
MR_def_label(hlds__goal_util__goal_expr_calls_2_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(MR_do_redo);

MR_BEGIN_MODULE(hlds__goal_util_module30)
	MR_init_entry1(hlds__goal_util__goal_expr_calls_2_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_util__goal_expr_calls_2_1);
	MR_init_label10(hlds__goal_util__goal_expr_calls_2_1,2,4,6,8,12,14,10,75,19,17)
	MR_init_label1(hlds__goal_util__goal_expr_calls_2_1,68)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_expr_calls'/2 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__goal_util__goal_expr_calls_2_1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(hlds__goal_util__goal_expr_calls_2_1_i2);
	}
	MR_r1 = MR_tfield(0, MR_body((MR_Integer) MR_r1, (MR_Integer) 0), 0);
	MR_np_localtailcall(hlds__goal_util__goal_expr_calls_2_1);
MR_def_label(hlds__goal_util__goal_expr_calls_2_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(hlds__goal_util__goal_expr_calls_2_1_i4);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tfield(2, MR_r1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(2, MR_r1, 1);
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(hlds__goal_util__goal_expr_calls_2_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(hlds__goal_util__goal_expr_calls_2_1_i6);
	}
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_tailcall_ent(hlds__goal_util__goals_calls_2_1);
MR_def_label(hlds__goal_util__goal_expr_calls_2_1,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(hlds__goal_util__goal_expr_calls_2_1_i8);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(hlds__goal_util__goals_calls_2_1);
MR_def_label(hlds__goal_util__goal_expr_calls_2_1,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(hlds__goal_util__goal_expr_calls_2_1_i10);
	}
	MR_mkframe("pred hlds.goal_util.goal_expr_calls/2-1", 2,
		MR_LABEL_AP(hlds__goal_util__goal_expr_calls_2_1_i12));
	MR_fv(1) = MR_tfield(3, MR_r1, 4);
	MR_fv(2) = MR_tfield(3, MR_r1, 3);
	MR_r1 = MR_tfield(0, MR_tfield(3, MR_r1, 2), 0);
	MR_np_localcall_lab(hlds__goal_util__goal_expr_calls_2_1,
		hlds__goal_util__goal_expr_calls_2_1_i68);
MR_def_label(hlds__goal_util__goal_expr_calls_2_1,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(hlds__goal_util__goal_expr_calls_2_1_i14);
	MR_r1 = MR_tfield(0, MR_fv(2), 0);
	MR_np_localcall_lab(hlds__goal_util__goal_expr_calls_2_1,
		hlds__goal_util__goal_expr_calls_2_1_i68);
MR_def_label(hlds__goal_util__goal_expr_calls_2_1,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	MR_r1 = MR_tfield(0, MR_fv(1), 0);
	MR_succip_word = (MR_Word) MR_succip_slot(MR_curfr);
	MR_maxfr_word = (MR_Word) MR_prevfr_slot(MR_curfr);
	MR_curfr_word = (MR_Word) MR_succfr_slot(MR_curfr);
	MR_np_localtailcall(hlds__goal_util__goal_expr_calls_2_1);
MR_def_label(hlds__goal_util__goal_expr_calls_2_1,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(hlds__goal_util__goal_expr_calls_2_1_i17);
	}
	MR_mkframe("pred hlds.goal_util.goal_expr_calls/2-1", 2,
		MR_ENTRY(MR_do_fail));
	MR_fv(2) = MR_tfield(3, MR_r1, 2);
	MR_r2 = MR_tfield(3, MR_r1, 1);
	if (MR_RTAGS_TESTR(MR_r2,3,4)) {
		MR_GOTO_LAB(hlds__goal_util__goal_expr_calls_2_1_i19);
	}
	MR_r3 = MR_tfield(3, MR_r2, 2);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(hlds__goal_util__goal_expr_calls_2_1_i19);
	}
	MR_GOTO(MR_ENTRY(MR_do_fail));
MR_def_label(hlds__goal_util__goal_expr_calls_2_1,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(hlds__goal_util__goal_expr_calls_2_1,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_fv(2), 0);
	MR_succip_word = (MR_Word) MR_succip_slot(MR_curfr);
	MR_maxfr_word = (MR_Word) MR_prevfr_slot(MR_curfr);
	MR_curfr_word = (MR_Word) MR_succfr_slot(MR_curfr);
	MR_np_localtailcall(hlds__goal_util__goal_expr_calls_2_1);
MR_def_label(hlds__goal_util__goal_expr_calls_2_1,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(hlds__goal_util__goal_expr_calls_2_1_i75);
	}
	MR_r1 = MR_tfield(3, MR_r1, 3);
	MR_np_tailcall_ent(hlds__goal_util__cases_calls_2_1);
MR_def_label(hlds__goal_util__goal_expr_calls_2_1,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module31)
	MR_init_entry1(hlds__goal_util__goal_calls_pred_id_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_util__goal_calls_pred_id_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_calls_pred_id'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_util__goal_calls_pred_id_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_tailcall_ent(hlds__goal_util__goal_expr_calls_pred_id_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module32)
	MR_init_entry1(hlds__goal_util__goal_calls_pred_id_2_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_util__goal_calls_pred_id_2_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_calls_pred_id'/2 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_util__goal_calls_pred_id_2_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_tailcall_ent(hlds__goal_util__goal_expr_calls_pred_id_2_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module33)
	MR_init_entry1(hlds__goal_util__goals_calls_pred_id_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_util__goals_calls_pred_id_2_0);
	MR_init_label4(hlds__goal_util__goals_calls_pred_id_2_0,18,5,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goals_calls_pred_id'/2 mode 0 */
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
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
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


MR_BEGIN_MODULE(hlds__goal_util_module34)
	MR_init_entry1(hlds__goal_util__goals_calls_pred_id_2_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_util__goals_calls_pred_id_2_1);
	MR_init_label3(hlds__goal_util__goals_calls_pred_id_2_1,6,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goals_calls_pred_id'/2 mode 1 */
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
	MR_fv(1) = MR_tfield(1, MR_r1, 1);
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(hlds__goal_util__goals_calls_pred_id_2_1_i3);
	MR_r1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
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


MR_BEGIN_MODULE(hlds__goal_util_module35)
	MR_init_entry1(hlds__goal_util__cases_calls_pred_id_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_util__cases_calls_pred_id_2_0);
	MR_init_label4(hlds__goal_util__cases_calls_pred_id_2_0,18,5,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cases_calls_pred_id'/2 mode 0 */
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
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tfield(0, MR_tfield(0, MR_tfield(1, MR_r1, 0), 2), 0);
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


MR_BEGIN_MODULE(hlds__goal_util_module36)
	MR_init_entry1(hlds__goal_util__cases_calls_pred_id_2_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_util__cases_calls_pred_id_2_1);
	MR_init_label3(hlds__goal_util__cases_calls_pred_id_2_1,6,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cases_calls_pred_id'/2 mode 1 */
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
	MR_fv(1) = MR_tfield(1, MR_r1, 1);
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(hlds__goal_util__cases_calls_pred_id_2_1_i3);
	MR_r1 = MR_tfield(0, MR_tfield(0, MR_tfield(1, MR_r1, 0), 2), 0);
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


MR_BEGIN_MODULE(hlds__goal_util_module37)
	MR_init_entry1(hlds__goal_util__goal_expr_calls_pred_id_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_util__goal_expr_calls_pred_id_2_0);
	MR_init_label10(hlds__goal_util__goal_expr_calls_pred_id_2_0,82,3,6,7,10,16,19,13,47,24)
	MR_init_label2(hlds__goal_util__goal_expr_calls_pred_id_2_0,23,50)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_expr_calls_pred_id'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__goal_util__goal_expr_calls_pred_id_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(hlds__goal_util__goal_expr_calls_pred_id_2_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(hlds__goal_util__goal_expr_calls_pred_id_2_0_i3);
	}
	MR_r1 = MR_tfield(0, MR_body((MR_Integer) MR_r1, (MR_Integer) 0), 0);
	MR_succip_word = MR_sv(4);
	/* continue */
	} /* end while */
MR_def_label(hlds__goal_util__goal_expr_calls_pred_id_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(hlds__goal_util__goal_expr_calls_pred_id_2_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(2, MR_r1, 0);
	MR_r1 = (MR_r2 == MR_tempr1);
	MR_decr_sp_and_return(4);
	}
MR_def_label(hlds__goal_util__goal_expr_calls_pred_id_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(hlds__goal_util__goal_expr_calls_pred_id_2_0_i7);
	}
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(hlds__goal_util__goals_calls_pred_id_2_0);
MR_def_label(hlds__goal_util__goal_expr_calls_pred_id_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(hlds__goal_util__goal_expr_calls_pred_id_2_0_i10);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(hlds__goal_util__goals_calls_pred_id_2_0);
MR_def_label(hlds__goal_util__goal_expr_calls_pred_id_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(hlds__goal_util__goal_expr_calls_pred_id_2_0_i13);
	}
	MR_sv(3) = MR_tfield(3, MR_r1, 4);
	MR_sv(2) = MR_tfield(3, MR_r1, 3);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tfield(0, MR_tfield(3, MR_r1, 2), 0);
	MR_np_localcall_lab(hlds__goal_util__goal_expr_calls_pred_id_2_0,
		hlds__goal_util__goal_expr_calls_pred_id_2_0_i16);
MR_def_label(hlds__goal_util__goal_expr_calls_pred_id_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(hlds__goal_util__goal_expr_calls_pred_id_2_0_i50);
	}
	MR_r1 = MR_tfield(0, MR_sv(2), 0);
	MR_r2 = MR_sv(1);
	MR_np_localcall_lab(hlds__goal_util__goal_expr_calls_pred_id_2_0,
		hlds__goal_util__goal_expr_calls_pred_id_2_0_i19);
MR_def_label(hlds__goal_util__goal_expr_calls_pred_id_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(hlds__goal_util__goal_expr_calls_pred_id_2_0_i50);
	}
	MR_r1 = MR_tfield(0, MR_sv(3), 0);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(hlds__goal_util__goal_expr_calls_pred_id_2_0_i82);
MR_def_label(hlds__goal_util__goal_expr_calls_pred_id_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(hlds__goal_util__goal_expr_calls_pred_id_2_0_i23);
	}
	MR_r3 = MR_tfield(3, MR_r1, 2);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_r1, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(hlds__goal_util__goal_expr_calls_pred_id_2_0_i24);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 2);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(hlds__goal_util__goal_expr_calls_pred_id_2_0_i24);
	}
	}
MR_def_label(hlds__goal_util__goal_expr_calls_pred_id_2_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
MR_def_label(hlds__goal_util__goal_expr_calls_pred_id_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r3, 0);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(hlds__goal_util__goal_expr_calls_pred_id_2_0_i82);
MR_def_label(hlds__goal_util__goal_expr_calls_pred_id_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(hlds__goal_util__goal_expr_calls_pred_id_2_0_i47);
	}
	MR_r1 = MR_tfield(3, MR_r1, 3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(hlds__goal_util__cases_calls_pred_id_2_0);
MR_def_label(hlds__goal_util__goal_expr_calls_pred_id_2_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module38)
	MR_init_entry1(hlds__goal_util__goal_expr_calls_pred_id_2_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_util__goal_expr_calls_pred_id_2_1);
	MR_init_label10(hlds__goal_util__goal_expr_calls_pred_id_2_1,2,4,5,7,11,13,9,74,18,16)
	MR_init_label1(hlds__goal_util__goal_expr_calls_pred_id_2_1,67)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_expr_calls_pred_id'/2 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__goal_util__goal_expr_calls_pred_id_2_1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(hlds__goal_util__goal_expr_calls_pred_id_2_1_i2);
	}
	MR_r1 = MR_tfield(0, MR_body((MR_Integer) MR_r1, (MR_Integer) 0), 0);
	MR_np_localtailcall(hlds__goal_util__goal_expr_calls_pred_id_2_1);
MR_def_label(hlds__goal_util__goal_expr_calls_pred_id_2_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(hlds__goal_util__goal_expr_calls_pred_id_2_1_i4);
	}
	MR_r1 = MR_tfield(2, MR_r1, 0);
	MR_proceed();
MR_def_label(hlds__goal_util__goal_expr_calls_pred_id_2_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(hlds__goal_util__goal_expr_calls_pred_id_2_1_i5);
	}
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_tailcall_ent(hlds__goal_util__goals_calls_pred_id_2_1);
MR_def_label(hlds__goal_util__goal_expr_calls_pred_id_2_1,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(hlds__goal_util__goal_expr_calls_pred_id_2_1_i7);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(hlds__goal_util__goals_calls_pred_id_2_1);
MR_def_label(hlds__goal_util__goal_expr_calls_pred_id_2_1,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(hlds__goal_util__goal_expr_calls_pred_id_2_1_i9);
	}
	MR_mkframe("pred hlds.goal_util.goal_expr_calls_pred_id/2-1", 2,
		MR_LABEL_AP(hlds__goal_util__goal_expr_calls_pred_id_2_1_i11));
	MR_fv(1) = MR_tfield(3, MR_r1, 4);
	MR_fv(2) = MR_tfield(3, MR_r1, 3);
	MR_r1 = MR_tfield(0, MR_tfield(3, MR_r1, 2), 0);
	MR_np_localcall_lab(hlds__goal_util__goal_expr_calls_pred_id_2_1,
		hlds__goal_util__goal_expr_calls_pred_id_2_1_i67);
MR_def_label(hlds__goal_util__goal_expr_calls_pred_id_2_1,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(hlds__goal_util__goal_expr_calls_pred_id_2_1_i13);
	MR_r1 = MR_tfield(0, MR_fv(2), 0);
	MR_np_localcall_lab(hlds__goal_util__goal_expr_calls_pred_id_2_1,
		hlds__goal_util__goal_expr_calls_pred_id_2_1_i67);
MR_def_label(hlds__goal_util__goal_expr_calls_pred_id_2_1,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	MR_r1 = MR_tfield(0, MR_fv(1), 0);
	MR_succip_word = (MR_Word) MR_succip_slot(MR_curfr);
	MR_maxfr_word = (MR_Word) MR_prevfr_slot(MR_curfr);
	MR_curfr_word = (MR_Word) MR_succfr_slot(MR_curfr);
	MR_np_localtailcall(hlds__goal_util__goal_expr_calls_pred_id_2_1);
MR_def_label(hlds__goal_util__goal_expr_calls_pred_id_2_1,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(hlds__goal_util__goal_expr_calls_pred_id_2_1_i16);
	}
	MR_mkframe("pred hlds.goal_util.goal_expr_calls_pred_id/2-1", 2,
		MR_ENTRY(MR_do_fail));
	MR_fv(2) = MR_tfield(3, MR_r1, 2);
	MR_r2 = MR_tfield(3, MR_r1, 1);
	if (MR_RTAGS_TESTR(MR_r2,3,4)) {
		MR_GOTO_LAB(hlds__goal_util__goal_expr_calls_pred_id_2_1_i18);
	}
	MR_r3 = MR_tfield(3, MR_r2, 2);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(hlds__goal_util__goal_expr_calls_pred_id_2_1_i18);
	}
	MR_GOTO(MR_ENTRY(MR_do_fail));
MR_def_label(hlds__goal_util__goal_expr_calls_pred_id_2_1,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(hlds__goal_util__goal_expr_calls_pred_id_2_1,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_fv(2), 0);
	MR_succip_word = (MR_Word) MR_succip_slot(MR_curfr);
	MR_maxfr_word = (MR_Word) MR_prevfr_slot(MR_curfr);
	MR_curfr_word = (MR_Word) MR_succfr_slot(MR_curfr);
	MR_np_localtailcall(hlds__goal_util__goal_expr_calls_pred_id_2_1);
MR_def_label(hlds__goal_util__goal_expr_calls_pred_id_2_1,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(hlds__goal_util__goal_expr_calls_pred_id_2_1_i74);
	}
	MR_r1 = MR_tfield(3, MR_r1, 3);
	MR_np_tailcall_ent(hlds__goal_util__cases_calls_pred_id_2_1);
MR_def_label(hlds__goal_util__goal_expr_calls_pred_id_2_1,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
MR_decl_entry(list__member_2_0);
MR_decl_entry(set__insert_3_0);

MR_BEGIN_MODULE(hlds__goal_util_module39)
	MR_init_entry1(hlds__goal_util__goal_calls_proc_in_list_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_util__goal_calls_proc_in_list_2_4_0);
	MR_init_label10(hlds__goal_util__goal_calls_proc_in_list_2_4_0,99,3,8,6,5,12,13,14,16,18)
	MR_init_label9(hlds__goal_util__goal_calls_proc_in_list_2_4_0,20,21,19,24,23,32,31,34,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_calls_proc_in_list_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__goal_util__goal_calls_proc_in_list_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(hlds__goal_util__goal_calls_proc_in_list_2_4_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(hlds__goal_util__goal_calls_proc_in_list_2_4_0_i3);
	}
	MR_r1 = MR_body((MR_Integer) MR_tempr1, (MR_Integer) 0);
	MR_succip_word = MR_sv(4);
	continue;
	}
	break;
	} /* end while */
MR_def_label(hlds__goal_util__goal_calls_proc_in_list_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,2)) {
		MR_GOTO_LAB(hlds__goal_util__goal_calls_proc_in_list_2_4_0_i5);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr3 = MR_r4;
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(2, MR_tempr3, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(2, MR_tempr3, 1);
	MR_sv(3) = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__member_2_0,
		hlds__goal_util__goal_calls_proc_in_list_2_4_0_i8);
MR_def_label(hlds__goal_util__goal_calls_proc_in_list_2_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__goal_util__goal_calls_proc_in_list_2_4_0_i6);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(set__insert_3_0);
MR_def_label(hlds__goal_util__goal_calls_proc_in_list_2_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(4);
MR_def_label(hlds__goal_util__goal_calls_proc_in_list_2_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(hlds__goal_util__goal_calls_proc_in_list_2_4_0_i12);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(4);
MR_def_label(hlds__goal_util__goal_calls_proc_in_list_2_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,1)) {
		MR_GOTO_LAB(hlds__goal_util__goal_calls_proc_in_list_2_4_0_i13);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(4);
MR_def_label(hlds__goal_util__goal_calls_proc_in_list_2_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,2)) {
		MR_GOTO_LAB(hlds__goal_util__goal_calls_proc_in_list_2_4_0_i14);
	}
	MR_r1 = MR_tfield(3, MR_r4, 2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(hlds__goal_util__goal_list_calls_proc_in_list_2_4_0);
MR_def_label(hlds__goal_util__goal_calls_proc_in_list_2_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,3)) {
		MR_GOTO_LAB(hlds__goal_util__goal_calls_proc_in_list_2_4_0_i16);
	}
	MR_r1 = MR_tfield(3, MR_r4, 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(hlds__goal_util__goal_list_calls_proc_in_list_2_4_0);
MR_def_label(hlds__goal_util__goal_calls_proc_in_list_2_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,0)) {
		MR_GOTO_LAB(hlds__goal_util__goal_calls_proc_in_list_2_4_0_i18);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(4);
MR_def_label(hlds__goal_util__goal_calls_proc_in_list_2_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,6)) {
		MR_GOTO_LAB(hlds__goal_util__goal_calls_proc_in_list_2_4_0_i19);
	}
	MR_sv(3) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 4);
	MR_r1 = MR_tfield(3, MR_tempr1, 2);
	}
	MR_np_localcall_lab(hlds__goal_util__goal_calls_proc_in_list_2_4_0,
		hlds__goal_util__goal_calls_proc_in_list_2_4_0_i20);
MR_def_label(hlds__goal_util__goal_calls_proc_in_list_2_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_localcall_lab(hlds__goal_util__goal_calls_proc_in_list_2_4_0,
		hlds__goal_util__goal_calls_proc_in_list_2_4_0_i21);
MR_def_label(hlds__goal_util__goal_calls_proc_in_list_2_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(hlds__goal_util__goal_calls_proc_in_list_2_4_0_i99);
	}
MR_def_label(hlds__goal_util__goal_calls_proc_in_list_2_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,5)) {
		MR_GOTO_LAB(hlds__goal_util__goal_calls_proc_in_list_2_4_0_i23);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r4;
	MR_r5 = MR_tfield(3, MR_tempr3, 2);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(hlds__goal_util__goal_calls_proc_in_list_2_4_0_i24);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 2);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(hlds__goal_util__goal_calls_proc_in_list_2_4_0_i24);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(4);
	}
MR_def_label(hlds__goal_util__goal_calls_proc_in_list_2_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(hlds__goal_util__goal_calls_proc_in_list_2_4_0_i99);
MR_def_label(hlds__goal_util__goal_calls_proc_in_list_2_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,7)) {
		MR_GOTO_LAB(hlds__goal_util__goal_calls_proc_in_list_2_4_0_i29);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r4, 1);
	MR_r5 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(hlds__goal_util__goal_calls_proc_in_list_2_4_0_i31);
	}
	MR_sv(3) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 5);
	MR_r1 = MR_tfield(1, MR_tempr1, 4);
	}
	MR_np_localcall_lab(hlds__goal_util__goal_calls_proc_in_list_2_4_0,
		hlds__goal_util__goal_calls_proc_in_list_2_4_0_i32);
MR_def_label(hlds__goal_util__goal_calls_proc_in_list_2_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(hlds__goal_util__goal_list_calls_proc_in_list_2_4_0);
	}
MR_def_label(hlds__goal_util__goal_calls_proc_in_list_2_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,2)) {
		MR_GOTO_LAB(hlds__goal_util__goal_calls_proc_in_list_2_4_0_i34);
	}
	MR_r1 = MR_tfield(2, MR_r5, 2);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(hlds__goal_util__goal_calls_proc_in_list_2_4_0_i99);
MR_def_label(hlds__goal_util__goal_calls_proc_in_list_2_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.goal_util", 14);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.goal_util.goal_calls_proc_in_list_2\'/4", 54);
	MR_r3 = (MR_Word) MR_string_const("bi_implication", 14);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(hlds__goal_util__goal_calls_proc_in_list_2_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_r4, 3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(hlds__goal_util__case_list_calls_proc_in_list_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module40)
	MR_init_entry1(hlds__goal_util__goal_list_calls_proc_in_list_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_util__goal_list_calls_proc_in_list_2_4_0);
	MR_init_label3(hlds__goal_util__goal_list_calls_proc_in_list_2_4_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_list_calls_proc_in_list_2'/4 mode 0 */
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
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(hlds__goal_util__goal_calls_proc_in_list_2_4_0,
		hlds__goal_util__goal_list_calls_proc_in_list_2_4_0_i4);
MR_def_label(hlds__goal_util__goal_list_calls_proc_in_list_2_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(hlds__goal_util__goal_list_calls_proc_in_list_2_4_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module41)
	MR_init_entry1(hlds__goal_util__case_list_calls_proc_in_list_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_util__case_list_calls_proc_in_list_4_0);
	MR_init_label3(hlds__goal_util__case_list_calls_proc_in_list_4_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'case_list_calls_proc_in_list'/4 mode 0 */
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
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 2);
	MR_np_call_localret_ent(hlds__goal_util__goal_calls_proc_in_list_2_4_0,
		hlds__goal_util__case_list_calls_proc_in_list_4_0_i4);
MR_def_label(hlds__goal_util__case_list_calls_proc_in_list_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(hlds__goal_util__case_list_calls_proc_in_list_4_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__set__init_0_0);
MR_decl_entry(set__to_sorted_list_2_0);

MR_BEGIN_MODULE(hlds__goal_util_module42)
	MR_init_entry1(fn__hlds__goal_util__goal_calls_proc_in_list_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__goal_util__goal_calls_proc_in_list_2_0);
	MR_init_label2(fn__hlds__goal_util__goal_calls_proc_in_list_2_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_calls_proc_in_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__goal_util__goal_calls_proc_in_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__set__init_0_0,
		fn__hlds__goal_util__goal_calls_proc_in_list_2_0_i2);
MR_def_label(fn__hlds__goal_util__goal_calls_proc_in_list_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__goal_util__goal_calls_proc_in_list_2_4_0,
		fn__hlds__goal_util__goal_calls_proc_in_list_2_0_i3);
MR_def_label(fn__hlds__goal_util__goal_calls_proc_in_list_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(set__to_sorted_list_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module43)
	MR_init_entry1(fn__hlds__goal_util__goal_list_calls_proc_in_list_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__goal_util__goal_list_calls_proc_in_list_2_0);
	MR_init_label2(fn__hlds__goal_util__goal_list_calls_proc_in_list_2_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_list_calls_proc_in_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__goal_util__goal_list_calls_proc_in_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__set__init_0_0,
		fn__hlds__goal_util__goal_list_calls_proc_in_list_2_0_i2);
MR_def_label(fn__hlds__goal_util__goal_list_calls_proc_in_list_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__goal_util__goal_list_calls_proc_in_list_2_4_0,
		fn__hlds__goal_util__goal_list_calls_proc_in_list_2_0_i3);
MR_def_label(fn__hlds__goal_util__goal_list_calls_proc_in_list_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(set__to_sorted_list_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module44)
	MR_init_entry1(hlds__goal_util__goal_contains_reconstruction_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_util__goal_contains_reconstruction_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_contains_reconstruction'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_util__goal_contains_reconstruction_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_tailcall_ent(hlds__goal_util__goal_expr_contains_reconstruction_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_case_0;
MR_decl_entry(list__member_2_1);

MR_BEGIN_MODULE(hlds__goal_util_module45)
	MR_init_entry1(hlds__goal_util__goal_expr_contains_reconstruction_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_util__goal_expr_contains_reconstruction_1_0);
	MR_init_label10(hlds__goal_util__goal_expr_contains_reconstruction_1_0,102,3,6,9,12,15,47,22,21,30)
	MR_init_label2(hlds__goal_util__goal_expr_contains_reconstruction_1_0,31,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_expr_contains_reconstruction'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__goal_util__goal_expr_contains_reconstruction_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(hlds__goal_util__goal_expr_contains_reconstruction_1_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(hlds__goal_util__goal_expr_contains_reconstruction_1_0_i3);
	}
	MR_r1 = MR_tfield(0, MR_body((MR_Integer) MR_r1, (MR_Integer) 0), 0);
	MR_succip_word = MR_sv(4);
	/* continue */
	} /* end while */
MR_def_label(hlds__goal_util__goal_expr_contains_reconstruction_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(hlds__goal_util__goal_expr_contains_reconstruction_1_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 3);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(hlds__goal_util__goal_expr_contains_reconstruction_1_0_i47);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 4);
	MR_r1 = (MR_tag(MR_tempr2) == MR_mktag((MR_Integer) 1));
	MR_decr_sp_and_return(4);
	}
MR_def_label(hlds__goal_util__goal_expr_contains_reconstruction_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(hlds__goal_util__goal_expr_contains_reconstruction_1_0_i9);
	}
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(hlds__goal_util__goals_contain_reconstruction_1_0);
MR_def_label(hlds__goal_util__goal_expr_contains_reconstruction_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(hlds__goal_util__goal_expr_contains_reconstruction_1_0_i12);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(hlds__goal_util__goals_contain_reconstruction_1_0);
MR_def_label(hlds__goal_util__goal_expr_contains_reconstruction_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(hlds__goal_util__goal_expr_contains_reconstruction_1_0_i15);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tfield(3, MR_r1, 4);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(3, MR_r1, 3);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tfield(3, MR_r1, 2);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_r1 = MR_r2;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(hlds__goal_util__goals_contain_reconstruction_1_0);
	}
MR_def_label(hlds__goal_util__goal_expr_contains_reconstruction_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(hlds__goal_util__goal_expr_contains_reconstruction_1_0_i21);
	}
	MR_r2 = MR_tfield(3, MR_r1, 2);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_r1, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(hlds__goal_util__goal_expr_contains_reconstruction_1_0_i22);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 2);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(hlds__goal_util__goal_expr_contains_reconstruction_1_0_i22);
	}
	}
MR_def_label(hlds__goal_util__goal_expr_contains_reconstruction_1_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
MR_def_label(hlds__goal_util__goal_expr_contains_reconstruction_1_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(hlds__goal_util__goal_expr_contains_reconstruction_1_0_i102);
MR_def_label(hlds__goal_util__goal_expr_contains_reconstruction_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(hlds__goal_util__goal_expr_contains_reconstruction_1_0_i47);
	}
	MR_sv(1) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(2) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(3));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(hlds__goal_util__goal_expr_contains_reconstruction_1_0_i29);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	MR_r2 = MR_tfield(3, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(list__member_2_1,
		hlds__goal_util__goal_expr_contains_reconstruction_1_0_i30);
MR_def_label(hlds__goal_util__goal_expr_contains_reconstruction_1_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_tfield(0, MR_r1, 2), 0);
	MR_np_localcall_lab(hlds__goal_util__goal_expr_contains_reconstruction_1_0,
		hlds__goal_util__goal_expr_contains_reconstruction_1_0_i31);
MR_def_label(hlds__goal_util__goal_expr_contains_reconstruction_1_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(3));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(1);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(2);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
MR_def_label(hlds__goal_util__goal_expr_contains_reconstruction_1_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(1);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(2);
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module46)
	MR_init_entry1(hlds__goal_util__goals_contain_reconstruction_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_util__goals_contain_reconstruction_1_0);
	MR_init_label3(hlds__goal_util__goals_contain_reconstruction_1_0,3,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goals_contain_reconstruction'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__goal_util__goals_contain_reconstruction_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(2) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(3));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(hlds__goal_util__goals_contain_reconstruction_1_0_i2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__member_2_1,
		hlds__goal_util__goals_contain_reconstruction_1_0_i3);
MR_def_label(hlds__goal_util__goals_contain_reconstruction_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(hlds__goal_util__goal_expr_contains_reconstruction_1_0,
		hlds__goal_util__goals_contain_reconstruction_1_0_i4);
MR_def_label(hlds__goal_util__goals_contain_reconstruction_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(3));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(1);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(hlds__goal_util__goals_contain_reconstruction_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(1);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module47)
	MR_init_entry1(hlds__goal_util__direct_subgoal_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_util__direct_subgoal_2_0);
	MR_init_label9(hlds__goal_util__direct_subgoal_2_0,2,3,46,9,10,7,18,11,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'direct_subgoal'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_util__direct_subgoal_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(hlds__goal_util__direct_subgoal_2_0_i2);
	}
	MR_r1 = MR_body((MR_Integer) MR_r1, (MR_Integer) 0);
	MR_proceed();
MR_def_label(hlds__goal_util__direct_subgoal_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(hlds__goal_util__direct_subgoal_2_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	MR_np_tailcall_ent(list__member_2_1);
	}
MR_def_label(hlds__goal_util__direct_subgoal_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(hlds__goal_util__direct_subgoal_2_0_i46);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	MR_np_tailcall_ent(list__member_2_1);
	}
MR_def_label(hlds__goal_util__direct_subgoal_2_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred hlds.goal_util.direct_subgoal/2-0", 2,
		MR_ENTRY(MR_do_fail));
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(hlds__goal_util__direct_subgoal_2_0_i7);
	}
	MR_fv(2) = MR_tfield(3, MR_r1, 4);
	MR_fv(1) = MR_tfield(3, MR_r1, 3);
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(hlds__goal_util__direct_subgoal_2_0_i9);
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_succeed();
MR_def_label(hlds__goal_util__direct_subgoal_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(hlds__goal_util__direct_subgoal_2_0_i10);
	MR_r1 = MR_fv(1);
	MR_succeed();
MR_def_label(hlds__goal_util__direct_subgoal_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_fv(2);
	MR_succeed_discard();
MR_def_label(hlds__goal_util__direct_subgoal_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(hlds__goal_util__direct_subgoal_2_0_i11);
	}
MR_def_label(hlds__goal_util__direct_subgoal_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_mask_field(MR_r1, 2);
	MR_succeed();
MR_def_label(hlds__goal_util__direct_subgoal_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(hlds__goal_util__direct_subgoal_2_0_i12);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	MR_r2 = MR_tfield(3, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(list__member_2_1,
		hlds__goal_util__direct_subgoal_2_0_i18);
MR_def_label(hlds__goal_util__direct_subgoal_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_GOTO(MR_ENTRY(MR_do_fail));
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module48)
	MR_init_entry1(hlds__goal_util__goal_contains_goal_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_util__goal_contains_goal_2_0);
	MR_init_label3(hlds__goal_util__goal_contains_goal_2_0,2,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_contains_goal'/2 mode 0 */
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
	MR_r1 = MR_tfield(0, MR_fv(1), 0);
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


MR_BEGIN_MODULE(hlds__goal_util_module49)
	MR_init_entry1(hlds__goal_util__predids_from_goal_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_util__predids_from_goal_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'predids_from_goal'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_util__predids_from_goal_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(1,2);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(hlds__goal_util__goal_calls_pred_id_2_1);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_np_tailcall_ent(solutions__solutions_2_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module50)
	MR_init_entry1(hlds__goal_util__predids_with_args_from_goal_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_util__predids_with_args_from_goal_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'predids_with_args_from_goal'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_util__predids_with_args_from_goal_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(1,3);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1730__1_2_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_np_tailcall_ent(solutions__solutions_2_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module51)
	MR_init_entry1(hlds__goal_util__predids_from_goals_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_util__predids_from_goals_2_0);
	MR_init_label3(hlds__goal_util__predids_from_goals_2_0,18,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'predids_from_goals'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_util__predids_from_goals_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__goal_util__predids_from_goals_2_0_i18);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(hlds__goal_util__predids_from_goals_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(1,4);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(hlds__goal_util__goal_calls_pred_id_2_1);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = MR_tfield(1, MR_r1, 0);
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_np_call_localret_ent(solutions__solutions_2_1,
		hlds__goal_util__predids_from_goals_2_0_i5);
MR_def_label(hlds__goal_util__predids_from_goals_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_localcall_lab(hlds__goal_util__predids_from_goals_2_0,
		hlds__goal_util__predids_from_goals_2_0_i6);
MR_def_label(hlds__goal_util__predids_from_goals_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module52)
	MR_init_entry1(hlds__goal_util__pred_proc_ids_from_goal_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_util__pred_proc_ids_from_goal_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pred_proc_ids_from_goal'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_util__pred_proc_ids_from_goal_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(1,5);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(hlds__goal_util__goal_calls_2_1);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_np_tailcall_ent(solutions__solutions_2_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module53)
	MR_init_entry1(hlds__goal_util__goal_is_atomic_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_util__goal_is_atomic_2_0);
	MR_init_label2(hlds__goal_util__goal_is_atomic_2_0,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_is_atomic'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_util__goal_is_atomic_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 0);
	if (!((((((MR_tag(MR_r2) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r2, 0) == (MR_Integer) 1)) || ((MR_tag(MR_r2) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r2, 0) == (MR_Integer) 0))) || (MR_tag(MR_r2) == MR_mktag((MR_Integer) 2))) || (MR_tag(MR_r2) == MR_mktag((MR_Integer) 1))))) {
		MR_GOTO_LAB(hlds__goal_util__goal_is_atomic_2_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(hlds__goal_util__goal_is_atomic_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((((((MR_tag(MR_r2) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r2, 0) == (MR_Integer) 2)) || ((MR_tag(MR_r2) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r2, 0) == (MR_Integer) 3))) || ((MR_tag(MR_r2) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r2, 0) == (MR_Integer) 6))) || (MR_tag(MR_r2) == MR_mktag((MR_Integer) 0))) || ((MR_tag(MR_r2) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r2, 0) == (MR_Integer) 5))) || ((MR_tag(MR_r2) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r2, 0) == (MR_Integer) 4))))) {
		MR_GOTO_LAB(hlds__goal_util__goal_is_atomic_2_0_i4);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(hlds__goal_util__goal_is_atomic_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.goal_util", 14);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.goal_util.goal_is_atomic\'/2", 43);
	MR_r3 = (MR_Word) MR_string_const("shorthand", 9);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__prog_util__cons_id_arity_1_0);
MR_decl_entry(varset__new_vars_4_0);
MR_decl_entry(check_hlds__type_util__get_cons_id_arg_types_4_0);
MR_decl_entry(map__det_insert_from_corresponding_lists_4_0);
MR_decl_entry(hlds__instmap__instmap_lookup_var_3_0);
MR_decl_entry(check_hlds__inst_match__inst_expand_3_0);
MR_decl_entry(parse_tree__prog_mode__get_arg_insts_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_uni_mode_0;
MR_decl_entry(list__map_3_0);
MR_decl_entry(fn__parse_tree__set_of_var__make_singleton_1_0);
MR_decl_entry(hlds__instmap__instmap_delta_init_reachable_1_0);
MR_decl_entry(hlds__instmap__instmap_delta_bind_var_to_functor_8_0);
MR_decl_entry(hlds__hlds_goal__goal_info_init_5_0);
MR_decl_entry(hlds__hlds_goal__goal_to_conj_list_2_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0);
MR_decl_entry(hlds__instmap__instmap_delta_apply_instmap_delta_4_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_determinism_1_0);
MR_decl_entry(parse_tree__prog_data__det_conjunction_detism_3_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_purity_1_0);

MR_BEGIN_MODULE(hlds__goal_util_module54)
	MR_init_entry1(hlds__goal_util__case_to_disjunct_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_util__case_to_disjunct_11_0);
	MR_init_label10(hlds__goal_util__case_to_disjunct_11_0,2,3,5,6,7,8,10,11,9,15)
	MR_init_label10(hlds__goal_util__case_to_disjunct_11_0,16,23,24,25,26,27,30,31,32,33)
	MR_init_label4(hlds__goal_util__case_to_disjunct_11_0,34,35,36,37)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'case_to_disjunct'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_util__case_to_disjunct_11_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_r5;
	MR_sv(8) = MR_r6;
	MR_sv(10) = MR_r7;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_util__cons_id_arity_1_0,
		hlds__goal_util__case_to_disjunct_11_0_i2);
MR_def_label(hlds__goal_util__case_to_disjunct_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_sv(12) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(varset__new_vars_4_0,
		hlds__goal_util__case_to_disjunct_11_0_i3);
MR_def_label(hlds__goal_util__case_to_disjunct_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_sv(13) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(13);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__goal_util__case_to_disjunct_11_0_i5);
MR_def_label(hlds__goal_util__case_to_disjunct_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__type_util__get_cons_id_arg_types_4_0,
		hlds__goal_util__case_to_disjunct_11_0_i6);
MR_def_label(hlds__goal_util__case_to_disjunct_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(8);
	}
	MR_np_call_localret_ent(map__det_insert_from_corresponding_lists_4_0,
		hlds__goal_util__case_to_disjunct_11_0_i7);
MR_def_label(hlds__goal_util__case_to_disjunct_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__instmap__instmap_lookup_var_3_0,
		hlds__goal_util__case_to_disjunct_11_0_i8);
MR_def_label(hlds__goal_util__case_to_disjunct_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_expand_3_0,
		hlds__goal_util__case_to_disjunct_11_0_i10);
MR_def_label(hlds__goal_util__case_to_disjunct_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(parse_tree__prog_mode__get_arg_insts_4_0,
		hlds__goal_util__case_to_disjunct_11_0_i11);
MR_def_label(hlds__goal_util__case_to_disjunct_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__goal_util__case_to_disjunct_11_0_i9);
	}
	MR_r4 = MR_r2;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, uni_mode);
	MR_np_call_localret_ent(list__map_3_0,
		hlds__goal_util__case_to_disjunct_11_0_i16);
MR_def_label(hlds__goal_util__case_to_disjunct_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.goal_util", 14);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.goal_util.case_to_disjunct\'/11", 46);
	MR_r3 = (MR_Word) MR_string_const("get_arg_insts failed", 20);
	MR_np_call_localret_ent(require__unexpected_3_0,
		hlds__goal_util__case_to_disjunct_11_0_i15);
MR_def_label(hlds__goal_util__case_to_disjunct_11_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(list__map_3_0,
		hlds__goal_util__case_to_disjunct_11_0_i16);
MR_def_label(hlds__goal_util__case_to_disjunct_11_0,16)
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
	MR_tempr6 = MR_sv(3);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr6;
	MR_tempr7 = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr7;
	MR_tempr8 = MR_sv(11);
	MR_tfield(1, MR_tempr1, 2) = MR_tempr8;
	MR_tfield(1, MR_tempr1, 3) = MR_r1;
	MR_tfield(1, MR_tempr1, 4) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr1, 5) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr7;
	MR_tfield(1, MR_tempr3, 1) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr3, 2) = MR_tempr8;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 5);
	MR_sv(6) = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr6;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 2) = MR_tempr2;
	MR_tfield(1, MR_tempr4, 3) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 4) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tempr6;
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__make_singleton_1_0,
		hlds__goal_util__case_to_disjunct_11_0_i23);
MR_def_label(hlds__goal_util__case_to_disjunct_11_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_init_reachable_1_0,
		hlds__goal_util__case_to_disjunct_11_0_i24);
MR_def_label(hlds__goal_util__case_to_disjunct_11_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(10);
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_bind_var_to_functor_8_0,
		hlds__goal_util__case_to_disjunct_11_0_i25);
MR_def_label(hlds__goal_util__case_to_disjunct_11_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(11);
	MR_sv(11) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_5_0,
		hlds__goal_util__case_to_disjunct_11_0_i26);
MR_def_label(hlds__goal_util__case_to_disjunct_11_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_conj_list_2_0,
		hlds__goal_util__case_to_disjunct_11_0_i27);
MR_def_label(hlds__goal_util__case_to_disjunct_11_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(6);
	MR_tfield(0, MR_r2, 1) = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_sv(5) = MR_tfield(0, MR_r2, 1);
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		hlds__goal_util__case_to_disjunct_11_0_i30);
MR_def_label(hlds__goal_util__case_to_disjunct_11_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__insert_3_0,
		hlds__goal_util__case_to_disjunct_11_0_i31);
MR_def_label(hlds__goal_util__case_to_disjunct_11_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		hlds__goal_util__case_to_disjunct_11_0_i32);
MR_def_label(hlds__goal_util__case_to_disjunct_11_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_apply_instmap_delta_4_0,
		hlds__goal_util__case_to_disjunct_11_0_i33);
MR_def_label(hlds__goal_util__case_to_disjunct_11_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		hlds__goal_util__case_to_disjunct_11_0_i34);
MR_def_label(hlds__goal_util__case_to_disjunct_11_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__det_conjunction_detism_3_0,
		hlds__goal_util__case_to_disjunct_11_0_i35);
MR_def_label(hlds__goal_util__case_to_disjunct_11_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_purity_1_0,
		hlds__goal_util__case_to_disjunct_11_0_i36);
MR_def_label(hlds__goal_util__case_to_disjunct_11_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_5_0,
		hlds__goal_util__case_to_disjunct_11_0_i37);
MR_def_label(hlds__goal_util__case_to_disjunct_11_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(11);
	MR_decr_sp_and_return(14);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
MR_decl_entry(list__map_foldl3_9_1);

MR_BEGIN_MODULE(hlds__goal_util_module55)
	MR_init_entry1(hlds__goal_util__switch_to_disjunction_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_util__switch_to_disjunction_10_0);
	MR_init_label5(hlds__goal_util__switch_to_disjunction_10_0,23,4,9,10,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'switch_to_disjunction'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_util__switch_to_disjunction_10_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__goal_util__switch_to_disjunction_10_0_i23);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_proceed();
MR_def_label(hlds__goal_util__switch_to_disjunction_10_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(5) = MR_r1;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 2);
	MR_r2 = MR_sv(3);
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr1 = MR_r5;
	MR_r5 = MR_tempr2;
	MR_tempr3 = MR_r6;
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tempr3;
	}
	MR_np_call_localret_ent(hlds__goal_util__case_to_disjunct_11_0,
		hlds__goal_util__switch_to_disjunction_10_0_i4);
MR_def_label(hlds__goal_util__switch_to_disjunction_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r6 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__goal_util__case_to_disjunct_11_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(1);
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_tempr3 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_tempr4 = MR_r3;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,11);
	MR_tempr5 = MR_r4;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,5,1);
	MR_r5 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r7 = MR_tempr2;
	MR_r8 = MR_tempr3;
	MR_r9 = MR_tempr4;
	MR_r10 = MR_tempr5;
	}
	MR_np_call_localret_ent(list__map_foldl3_9_1,
		hlds__goal_util__switch_to_disjunction_10_0_i9);
MR_def_label(hlds__goal_util__switch_to_disjunction_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	MR_r6 = MR_tempr4;
	}
	MR_np_localcall_lab(hlds__goal_util__switch_to_disjunction_10_0,
		hlds__goal_util__switch_to_disjunction_10_0_i10);
MR_def_label(hlds__goal_util__switch_to_disjunction_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(5);
	MR_sv(5) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__goal_util__switch_to_disjunction_10_0_i12);
MR_def_label(hlds__goal_util__switch_to_disjunction_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__append_3_1);

MR_BEGIN_MODULE(hlds__goal_util_module56)
	MR_init_entry1(hlds__goal_util__flatten_conj_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_util__flatten_conj_2_0);
	MR_init_label3(hlds__goal_util__flatten_conj_2_0,34,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'flatten_conj'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_util__flatten_conj_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__goal_util__flatten_conj_2_0_i34);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(hlds__goal_util__flatten_conj_2_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localcall_lab(hlds__goal_util__flatten_conj_2_0,
		hlds__goal_util__flatten_conj_2_0_i4);
MR_def_label(hlds__goal_util__flatten_conj_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_sv(1), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,2)) {
		MR_GOTO_LAB(hlds__goal_util__flatten_conj_2_0_i5);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(hlds__goal_util__flatten_conj_2_0_i5);
	}
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	MR_r3 = MR_tempr2;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(list__append_3_1);
	}
MR_def_label(hlds__goal_util__flatten_conj_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__foldr_3_0);

MR_BEGIN_MODULE(hlds__goal_util_module57)
	MR_init_entry1(fn__hlds__goal_util__flatten_disjs_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__goal_util__flatten_disjs_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'flatten_disjs'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__goal_util__flatten_disjs_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,12);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,4);
	MR_r4 = MR_tempr1;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(fn__list__foldr_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__goal_list_nonlocals_2_0);
MR_decl_entry(hlds__hlds_goal__goal_list_instmap_delta_2_0);
MR_decl_entry(hlds__hlds_goal__goal_list_determinism_2_0);
MR_decl_entry(hlds__hlds_goal__goal_list_purity_2_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_context_1_0);

MR_BEGIN_MODULE(hlds__goal_util_module58)
	MR_init_entry1(hlds__goal_util__create_conj_from_list_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_util__create_conj_from_list_3_0);
	MR_init_label8(hlds__goal_util__create_conj_from_list_3_0,28,7,8,9,10,11,12,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_conj_from_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_util__create_conj_from_list_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__goal_util__create_conj_from_list_3_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__goal_util__create_conj_from_list_3_0_i28);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_proceed();
	}
MR_def_label(hlds__goal_util__create_conj_from_list_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_sv(1) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_tfield(1, MR_r1, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_list_nonlocals_2_0,
		hlds__goal_util__create_conj_from_list_3_0_i7);
MR_def_label(hlds__goal_util__create_conj_from_list_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_list_instmap_delta_2_0,
		hlds__goal_util__create_conj_from_list_3_0_i8);
MR_def_label(hlds__goal_util__create_conj_from_list_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_list_determinism_2_0,
		hlds__goal_util__create_conj_from_list_3_0_i9);
MR_def_label(hlds__goal_util__create_conj_from_list_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tfield(3, MR_sv(1), 2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_list_purity_2_0,
		hlds__goal_util__create_conj_from_list_3_0_i10);
MR_def_label(hlds__goal_util__create_conj_from_list_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tfield(0, MR_r2, 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		hlds__goal_util__create_conj_from_list_3_0_i11);
MR_def_label(hlds__goal_util__create_conj_from_list_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_6_0,
		hlds__goal_util__create_conj_from_list_3_0_i12);
MR_def_label(hlds__goal_util__create_conj_from_list_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(hlds__goal_util__create_conj_from_list_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.goal_util", 14);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.goal_util.create_conj_from_list\'/3", 50);
	MR_r3 = (MR_Word) MR_string_const("empty conjunction", 17);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module59)
	MR_init_entry1(hlds__goal_util__create_conj_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_util__create_conj_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_conj'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_util__create_conj_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(hlds__goal_util__create_conj_from_list_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_data__determinism_components_3_0);
MR_decl_entry(hlds__goal_form__goal_cannot_loop_or_throw_1_0);
MR_decl_entry(hlds__goal_form__goal_cannot_loop_or_throw_2_0);

MR_BEGIN_MODULE(hlds__goal_util_module60)
	MR_init_entry1(hlds__goal_util__reordering_maintains_termination_old_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_util__reordering_maintains_termination_old_4_0);
	MR_init_label8(hlds__goal_util__reordering_maintains_termination_old_4_0,2,3,4,5,11,21,15,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'reordering_maintains_termination_old'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_util__reordering_maintains_termination_old_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		hlds__goal_util__reordering_maintains_termination_old_4_0_i2);
MR_def_label(hlds__goal_util__reordering_maintains_termination_old_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		hlds__goal_util__reordering_maintains_termination_old_4_0_i3);
MR_def_label(hlds__goal_util__reordering_maintains_termination_old_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		hlds__goal_util__reordering_maintains_termination_old_4_0_i4);
MR_def_label(hlds__goal_util__reordering_maintains_termination_old_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		hlds__goal_util__reordering_maintains_termination_old_4_0_i5);
MR_def_label(hlds__goal_util__reordering_maintains_termination_old_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),1)) {
		MR_GOTO_LAB(hlds__goal_util__reordering_maintains_termination_old_4_0_i21);
	}
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__goal_form__goal_cannot_loop_or_throw_1_0,
		hlds__goal_util__reordering_maintains_termination_old_4_0_i11);
MR_def_label(hlds__goal_util__reordering_maintains_termination_old_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(hlds__goal_util__reordering_maintains_termination_old_4_0_i21);
	}
	MR_r1 = MR_sv(5);
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(hlds__goal_util__reordering_maintains_termination_old_4_0_i1);
	}
MR_def_label(hlds__goal_util__reordering_maintains_termination_old_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	if (MR_INT_NE(MR_sv(4),0)) {
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
MR_decl_entry(parse_tree__set_of_var__intersect_3_0);
MR_decl_entry(parse_tree__set_of_var__is_empty_1_0);

MR_BEGIN_MODULE(hlds__goal_util_module61)
	MR_init_entry1(hlds__goal_util__can_reorder_goals_old_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_util__can_reorder_goals_old_7_0);
	MR_init_label10(hlds__goal_util__can_reorder_goals_old_7_0,2,3,10,13,14,15,16,17,20,44)
	MR_init_label6(hlds__goal_util__can_reorder_goals_old_7_0,12,23,24,25,26,27)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'can_reorder_goals_old'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_util__can_reorder_goals_old_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(9) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_sv(2) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r5;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r6;
	MR_tempr2 = MR_r7;
	MR_sv(5) = MR_tempr2;
	MR_sv(6) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_goal_purity_3_0,
		hlds__goal_util__can_reorder_goals_old_7_0_i2);
MR_def_label(hlds__goal_util__can_reorder_goals_old_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = MR_tempr1;
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
	if (MR_INT_EQ(MR_sv(6),2)) {
		MR_GOTO_LAB(hlds__goal_util__can_reorder_goals_old_7_0_i44);
	}
	if (MR_INT_NE(MR_sv(7),1)) {
		MR_GOTO_LAB(hlds__goal_util__can_reorder_goals_old_7_0_i44);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(hlds__goal_util__reordering_maintains_termination_old_4_0,
		hlds__goal_util__can_reorder_goals_old_7_0_i10);
MR_def_label(hlds__goal_util__can_reorder_goals_old_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__goal_util__can_reorder_goals_old_7_0_i44);
	}
	MR_sv(8) = MR_tfield(0, MR_sv(5), 1);
	MR_r1 = MR_tfield(0, MR_sv(3), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		hlds__goal_util__can_reorder_goals_old_7_0_i13);
MR_def_label(hlds__goal_util__can_reorder_goals_old_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__instmap__apply_instmap_delta_3_0,
		hlds__goal_util__can_reorder_goals_old_7_0_i14);
MR_def_label(hlds__goal_util__can_reorder_goals_old_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(9);
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_changed_vars_5_0,
		hlds__goal_util__can_reorder_goals_old_7_0_i15);
MR_def_label(hlds__goal_util__can_reorder_goals_old_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		hlds__goal_util__can_reorder_goals_old_7_0_i16);
MR_def_label(hlds__goal_util__can_reorder_goals_old_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__intersect_3_0,
		hlds__goal_util__can_reorder_goals_old_7_0_i17);
MR_def_label(hlds__goal_util__can_reorder_goals_old_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__is_empty_1_0,
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
	MR_sv(8) = MR_tfield(0, MR_sv(3), 1);
	MR_r1 = MR_tfield(0, MR_sv(5), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		hlds__goal_util__can_reorder_goals_old_7_0_i23);
MR_def_label(hlds__goal_util__can_reorder_goals_old_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__instmap__apply_instmap_delta_3_0,
		hlds__goal_util__can_reorder_goals_old_7_0_i24);
MR_def_label(hlds__goal_util__can_reorder_goals_old_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(9);
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_changed_vars_5_0,
		hlds__goal_util__can_reorder_goals_old_7_0_i25);
MR_def_label(hlds__goal_util__can_reorder_goals_old_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		hlds__goal_util__can_reorder_goals_old_7_0_i26);
MR_def_label(hlds__goal_util__can_reorder_goals_old_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__intersect_3_0,
		hlds__goal_util__can_reorder_goals_old_7_0_i27);
MR_def_label(hlds__goal_util__can_reorder_goals_old_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(parse_tree__set_of_var__is_empty_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__goal_form__goal_can_loop_or_throw_4_0);

MR_BEGIN_MODULE(hlds__goal_util_module62)
	MR_init_entry1(hlds__goal_util__reordering_maintains_termination_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_util__reordering_maintains_termination_6_0);
	MR_init_label8(hlds__goal_util__reordering_maintains_termination_6_0,2,3,4,5,6,7,11,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'reordering_maintains_termination'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_util__reordering_maintains_termination_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_r4;
	MR_r1 = MR_tfield(0, MR_r2, 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		hlds__goal_util__reordering_maintains_termination_6_0_i2);
MR_def_label(hlds__goal_util__reordering_maintains_termination_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		hlds__goal_util__reordering_maintains_termination_6_0_i3);
MR_def_label(hlds__goal_util__reordering_maintains_termination_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		hlds__goal_util__reordering_maintains_termination_6_0_i4);
MR_def_label(hlds__goal_util__reordering_maintains_termination_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		hlds__goal_util__reordering_maintains_termination_6_0_i5);
MR_def_label(hlds__goal_util__reordering_maintains_termination_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__goal_form__goal_can_loop_or_throw_4_0,
		hlds__goal_util__reordering_maintains_termination_6_0_i6);
MR_def_label(hlds__goal_util__reordering_maintains_termination_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(hlds__goal_util__reordering_maintains_termination_6_0_i7);
	}
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(hlds__goal_util__reordering_maintains_termination_6_0_i7);
	}
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(hlds__goal_util__reordering_maintains_termination_6_0_i7);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(6);
MR_def_label(hlds__goal_util__reordering_maintains_termination_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__goal_form__goal_can_loop_or_throw_4_0,
		hlds__goal_util__reordering_maintains_termination_6_0_i11);
MR_def_label(hlds__goal_util__reordering_maintains_termination_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(hlds__goal_util__reordering_maintains_termination_6_0_i12);
	}
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(hlds__goal_util__reordering_maintains_termination_6_0_i12);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(6);
MR_def_label(hlds__goal_util__reordering_maintains_termination_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module63)
	MR_init_entry1(hlds__goal_util__can_reorder_goals_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_util__can_reorder_goals_9_0);
	MR_init_label10(hlds__goal_util__can_reorder_goals_9_0,2,3,7,9,11,6,5,14,16,18)
	MR_init_label10(hlds__goal_util__can_reorder_goals_9_0,19,20,21,22,25,17,28,29,30,31)
	MR_init_label3(hlds__goal_util__can_reorder_goals_9_0,32,35,27)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'can_reorder_goals'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_util__can_reorder_goals_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(9) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(8) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r5;
	MR_tempr2 = MR_r6;
	MR_sv(3) = MR_tempr2;
	MR_sv(7) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(5) = MR_r7;
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_goal_purity_3_0,
		hlds__goal_util__can_reorder_goals_9_0_i2);
MR_def_label(hlds__goal_util__can_reorder_goals_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_goal_purity_3_0,
		hlds__goal_util__can_reorder_goals_9_0_i3);
MR_def_label(hlds__goal_util__can_reorder_goals_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(7),2)) {
		MR_GOTO_LAB(hlds__goal_util__can_reorder_goals_9_0_i7);
	}
	MR_r2 = MR_sv(5);
	MR_GOTO_LAB(hlds__goal_util__can_reorder_goals_9_0_i6);
MR_def_label(hlds__goal_util__can_reorder_goals_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(hlds__goal_util__can_reorder_goals_9_0_i9);
	}
	MR_r2 = MR_sv(5);
	MR_GOTO_LAB(hlds__goal_util__can_reorder_goals_9_0_i6);
MR_def_label(hlds__goal_util__can_reorder_goals_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(hlds__goal_util__can_reorder_goals_9_0_i11);
	}
	MR_r2 = MR_sv(5);
	MR_GOTO_LAB(hlds__goal_util__can_reorder_goals_9_0_i6);
MR_def_label(hlds__goal_util__can_reorder_goals_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(hlds__goal_util__can_reorder_goals_9_0_i5);
	}
	MR_r2 = MR_sv(5);
MR_def_label(hlds__goal_util__can_reorder_goals_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(10);
MR_def_label(hlds__goal_util__can_reorder_goals_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(hlds__goal_util__reordering_maintains_termination_6_0,
		hlds__goal_util__can_reorder_goals_9_0_i14);
MR_def_label(hlds__goal_util__can_reorder_goals_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(hlds__goal_util__can_reorder_goals_9_0_i16);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(10);
MR_def_label(hlds__goal_util__can_reorder_goals_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_tfield(0, MR_sv(3), 1);
	MR_r1 = MR_tfield(0, MR_sv(1), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		hlds__goal_util__can_reorder_goals_9_0_i18);
MR_def_label(hlds__goal_util__can_reorder_goals_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__instmap__apply_instmap_delta_3_0,
		hlds__goal_util__can_reorder_goals_9_0_i19);
MR_def_label(hlds__goal_util__can_reorder_goals_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_changed_vars_5_0,
		hlds__goal_util__can_reorder_goals_9_0_i20);
MR_def_label(hlds__goal_util__can_reorder_goals_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		hlds__goal_util__can_reorder_goals_9_0_i21);
MR_def_label(hlds__goal_util__can_reorder_goals_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__intersect_3_0,
		hlds__goal_util__can_reorder_goals_9_0_i22);
MR_def_label(hlds__goal_util__can_reorder_goals_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__is_empty_1_0,
		hlds__goal_util__can_reorder_goals_9_0_i25);
MR_def_label(hlds__goal_util__can_reorder_goals_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(hlds__goal_util__can_reorder_goals_9_0_i17);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(6);
	MR_decr_sp_and_return(10);
MR_def_label(hlds__goal_util__can_reorder_goals_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_tfield(0, MR_sv(1), 1);
	MR_r1 = MR_tfield(0, MR_sv(3), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		hlds__goal_util__can_reorder_goals_9_0_i28);
MR_def_label(hlds__goal_util__can_reorder_goals_9_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__instmap__apply_instmap_delta_3_0,
		hlds__goal_util__can_reorder_goals_9_0_i29);
MR_def_label(hlds__goal_util__can_reorder_goals_9_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_changed_vars_5_0,
		hlds__goal_util__can_reorder_goals_9_0_i30);
MR_def_label(hlds__goal_util__can_reorder_goals_9_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		hlds__goal_util__can_reorder_goals_9_0_i31);
MR_def_label(hlds__goal_util__can_reorder_goals_9_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__intersect_3_0,
		hlds__goal_util__can_reorder_goals_9_0_i32);
MR_def_label(hlds__goal_util__can_reorder_goals_9_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__is_empty_1_0,
		hlds__goal_util__can_reorder_goals_9_0_i35);
MR_def_label(hlds__goal_util__can_reorder_goals_9_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(hlds__goal_util__can_reorder_goals_9_0_i27);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(6);
	MR_decr_sp_and_return(10);
MR_def_label(hlds__goal_util__can_reorder_goals_9_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(6);
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
MR_decl_entry(hlds__instmap__instmap_delta_init_unreachable_1_0);
MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_purity_2_0);
MR_decl_entry(require__expect_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_goal_feature_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_info_0;

MR_BEGIN_MODULE(hlds__goal_util_module64)
	MR_init_entry1(hlds__goal_util__generate_simple_call_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_util__generate_simple_call_12_0);
	MR_init_label10(hlds__goal_util__generate_simple_call_12_0,3,4,5,6,9,10,13,12,14,15)
	MR_init_label3(hlds__goal_util__generate_simple_call_12_0,17,18,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_simple_call'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_util__generate_simple_call_12_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(9) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_sv(11) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r8;
	MR_sv(5) = MR_r9;
	MR_sv(6) = MR_r10;
	MR_sv(7) = MR_r11;
	MR_sv(12) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__length_2_0,
		hlds__goal_util__generate_simple_call_12_0_i3);
MR_def_label(hlds__goal_util__generate_simple_call_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(8);
	}
	MR_np_call_localret_ent(hlds__pred_table__lookup_builtin_pred_proc_id_8_0,
		hlds__goal_util__generate_simple_call_12_0_i4);
MR_def_label(hlds__goal_util__generate_simple_call_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__invalid_pred_id_0_0,
		hlds__goal_util__generate_simple_call_12_0_i5);
MR_def_label(hlds__goal_util__generate_simple_call_12_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(8);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__builtin_state_4_0,
		hlds__goal_util__generate_simple_call_12_0_i6);
MR_def_label(hlds__goal_util__generate_simple_call_12_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(10);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 6);
	MR_sv(9) = MR_tempr2;
	MR_tfield(2, MR_tempr2, 0) = MR_sv(11);
	MR_tfield(2, MR_tempr2, 1) = MR_sv(8);
	MR_tempr3 = MR_sv(3);
	MR_tfield(2, MR_tempr2, 2) = MR_tempr3;
	MR_tfield(2, MR_tempr2, 3) = MR_r1;
	MR_tfield(2, MR_tempr2, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(2, MR_tempr2, 5) = MR_tempr1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tempr3;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__list_to_set_2_0,
		hlds__goal_util__generate_simple_call_12_0_i9);
MR_def_label(hlds__goal_util__generate_simple_call_12_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		hlds__goal_util__generate_simple_call_12_0_i10);
MR_def_label(hlds__goal_util__generate_simple_call_12_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(hlds__goal_util__generate_simple_call_12_0_i12);
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_init_unreachable_1_0,
		hlds__goal_util__generate_simple_call_12_0_i13);
MR_def_label(hlds__goal_util__generate_simple_call_12_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(11);
	MR_sv(11) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		hlds__goal_util__generate_simple_call_12_0_i14);
MR_def_label(hlds__goal_util__generate_simple_call_12_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(11);
	MR_sv(11) = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		hlds__goal_util__generate_simple_call_12_0_i14);
MR_def_label(hlds__goal_util__generate_simple_call_12_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_purity_2_0,
		hlds__goal_util__generate_simple_call_12_0_i15);
MR_def_label(hlds__goal_util__generate_simple_call_12_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,7);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__goal_util__IntroducedFrom__pred__generate_simple_call__1655__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("hlds.goal_util", 14);
	MR_r3 = (MR_Word) MR_string_const("generate_simple_call: purity disagreement", 41);
	}
	MR_np_call_localret_ent(require__expect_3_0,
		hlds__goal_util__generate_simple_call_12_0_i17);
MR_def_label(hlds__goal_util__generate_simple_call_12_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_6_0,
		hlds__goal_util__generate_simple_call_12_0_i18);
MR_def_label(hlds__goal_util__generate_simple_call_12_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, goal_feature);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal_info);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,5);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		hlds__goal_util__generate_simple_call_12_0_i20);
MR_def_label(hlds__goal_util__generate_simple_call_12_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(9);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module65)
	MR_init_entry1(hlds__goal_util__generate_foreign_proc_16_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_util__generate_foreign_proc_16_0);
	MR_init_label10(hlds__goal_util__generate_foreign_proc_16_0,2,3,8,10,11,12,13,16,15,17)
	MR_init_label4(hlds__goal_util__generate_foreign_proc_16_0,18,20,21,23)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_foreign_proc'/16 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_util__generate_foreign_proc_16_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
	MR_sv(13) = MR_r1;
	MR_sv(11) = MR_r2;
	MR_sv(12) = MR_r3;
	MR_sv(15) = MR_r4;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r6;
	MR_sv(16) = MR_r7;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r8;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r9;
	MR_sv(5) = MR_r10;
	MR_sv(6) = MR_r11;
	MR_sv(7) = MR_r12;
	MR_sv(8) = MR_r13;
	MR_sv(9) = MR_r14;
	MR_sv(10) = MR_r15;
	MR_sv(14) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_r1 = MR_sv(14);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__length_2_0,
		hlds__goal_util__generate_foreign_proc_16_0_i2);
MR_def_label(hlds__goal_util__generate_foreign_proc_16_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(12);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(15);
	}
	MR_np_call_localret_ent(hlds__pred_table__lookup_builtin_pred_proc_id_8_0,
		hlds__goal_util__generate_foreign_proc_16_0_i3);
MR_def_label(hlds__goal_util__generate_foreign_proc_16_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 8);
	MR_sv(11) = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(16);
	MR_tfield(3, MR_tempr2, 2) = MR_r1;
	MR_tfield(3, MR_tempr2, 3) = MR_r2;
	MR_tempr3 = MR_sv(3);
	MR_tfield(3, MR_tempr2, 4) = MR_tempr3;
	MR_tfield(3, MR_tempr2, 5) = MR_sv(4);
	MR_tfield(3, MR_tempr2, 6) = MR_sv(5);
	MR_tfield(3, MR_tempr2, 7) = MR_tempr1;
	MR_sv(13) = MR_r1;
	MR_sv(15) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(16) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(16);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,6);
	MR_r4 = MR_tempr3;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		hlds__goal_util__generate_foreign_proc_16_0_i8);
MR_def_label(hlds__goal_util__generate_foreign_proc_16_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(16);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,7);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(fn__list__map_2_0,
		hlds__goal_util__generate_foreign_proc_16_0_i10);
MR_def_label(hlds__goal_util__generate_foreign_proc_16_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__goal_util__generate_foreign_proc_16_0_i11);
MR_def_label(hlds__goal_util__generate_foreign_proc_16_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__list_to_set_2_0,
		hlds__goal_util__generate_foreign_proc_16_0_i12);
MR_def_label(hlds__goal_util__generate_foreign_proc_16_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		hlds__goal_util__generate_foreign_proc_16_0_i13);
MR_def_label(hlds__goal_util__generate_foreign_proc_16_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(hlds__goal_util__generate_foreign_proc_16_0_i15);
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_init_unreachable_1_0,
		hlds__goal_util__generate_foreign_proc_16_0_i16);
MR_def_label(hlds__goal_util__generate_foreign_proc_16_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(13);
	MR_sv(13) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		hlds__goal_util__generate_foreign_proc_16_0_i17);
MR_def_label(hlds__goal_util__generate_foreign_proc_16_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(13);
	MR_sv(13) = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		hlds__goal_util__generate_foreign_proc_16_0_i17);
MR_def_label(hlds__goal_util__generate_foreign_proc_16_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_purity_2_0,
		hlds__goal_util__generate_foreign_proc_16_0_i18);
MR_def_label(hlds__goal_util__generate_foreign_proc_16_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,10);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__goal_util__IntroducedFrom__pred__generate_foreign_proc__1688__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("hlds.goal_util", 14);
	MR_r3 = (MR_Word) MR_string_const("generate_simple_call: purity disagreement", 41);
	}
	MR_np_call_localret_ent(require__expect_3_0,
		hlds__goal_util__generate_foreign_proc_16_0_i20);
MR_def_label(hlds__goal_util__generate_foreign_proc_16_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(10);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_6_0,
		hlds__goal_util__generate_foreign_proc_16_0_i21);
MR_def_label(hlds__goal_util__generate_foreign_proc_16_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, goal_feature);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal_info);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,8);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		hlds__goal_util__generate_foreign_proc_16_0_i23);
MR_def_label(hlds__goal_util__generate_foreign_proc_16_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(11);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(17);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__prog_mode__in_mode_1_0);
MR_decl_entry(fn__parse_tree__prog_mode__out_mode_1_0);

MR_BEGIN_MODULE(hlds__goal_util_module66)
	MR_init_entry1(hlds__goal_util__generate_cast_with_insts_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_util__generate_cast_with_insts_7_0);
	MR_init_label5(hlds__goal_util__generate_cast_with_insts_7_0,4,7,8,10,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_cast_with_insts'/7 mode 0 */
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
	MR_sv(3) = MR_r1;
	MR_sv(5) = MR_tempr3;
	MR_sv(6) = MR_r4;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r6;
	MR_sv(4) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__list_to_set_2_0,
		hlds__goal_util__generate_cast_with_insts_7_0_i4);
MR_def_label(hlds__goal_util__generate_cast_with_insts_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(5);
	MR_tfield(0, MR_r2, 1) = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_from_assoc_list_1_0,
		hlds__goal_util__generate_cast_with_insts_7_0_i7);
MR_def_label(hlds__goal_util__generate_cast_with_insts_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 0;
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_6_0,
		hlds__goal_util__generate_cast_with_insts_7_0_i8);
MR_def_label(hlds__goal_util__generate_cast_with_insts_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(5), 3, (MR_Integer) 1);
	MR_tfield(3, MR_sv(5), 0) = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__in_mode_1_0,
		hlds__goal_util__generate_cast_with_insts_7_0_i10);
MR_def_label(hlds__goal_util__generate_cast_with_insts_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__out_mode_1_0,
		hlds__goal_util__generate_cast_with_insts_7_0_i11);
MR_def_label(hlds__goal_util__generate_cast_with_insts_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 5);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 1) = MR_sv(5);
	MR_tfield(3, MR_r2, 2) = MR_sv(4);
	MR_tfield(3, MR_r2, 3) = MR_tempr1;
	MR_tfield(3, MR_r2, 4) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_tfield(0, MR_r1, 1) = MR_sv(3);
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__prog_mode__ground_inst_0_0);

MR_BEGIN_MODULE(hlds__goal_util_module67)
	MR_init_entry1(hlds__goal_util__generate_cast_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_util__generate_cast_5_0);
	MR_init_label1(hlds__goal_util__generate_cast_5_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_cast'/5 mode 0 */
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
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_r4;
	MR_r6 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(hlds__goal_util__generate_cast_with_insts_7_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__sub_string_search_3_0);

MR_BEGIN_MODULE(hlds__goal_util_module68)
	MR_init_entry1(hlds__goal_util__foreign_code_uses_variable_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_util__foreign_code_uses_variable_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foreign_code_uses_variable'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_util__foreign_code_uses_variable_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_tailcall_ent(string__sub_string_search_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__goal_info_has_feature_2_0);

MR_BEGIN_MODULE(hlds__goal_util_module69)
	MR_init_entry1(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__goal_util__maybe_strip_equality_pretest_1_0);
	MR_init_label10(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0,4,3,8,6,13,11,18,17,20,21)
	MR_init_label10(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0,22,16,27,30,26,37,39,36,44,43)
	MR_init_label4(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0,34,51,131,140)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_strip_equality_pretest'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__goal_util__maybe_strip_equality_pretest_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0_i3);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_body((MR_Integer) MR_r2, (MR_Integer) 0);
	MR_np_localcall_lab(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0,
		fn__hlds__goal_util__maybe_strip_equality_pretest_1_0_i4);
MR_def_label(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tmkword(0, (MR_Word *) MR_r1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,2)) {
		MR_GOTO_LAB(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0_i6);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_sv(6) = MR_tfield(3, MR_r2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,9);
	MR_r4 = MR_tfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__hlds__goal_util__maybe_strip_equality_pretest_1_0_i8);
MR_def_label(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r2, 1) = MR_sv(6);
	MR_tfield(3, MR_r2, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(8);
MR_def_label(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,3)) {
		MR_GOTO_LAB(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0_i11);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,10);
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__hlds__goal_util__maybe_strip_equality_pretest_1_0_i13);
MR_def_label(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(8);
	}
MR_def_label(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,6)) {
		MR_GOTO_LAB(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0_i16);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(3) = MR_tfield(3, MR_r2, 4);
	MR_sv(2) = MR_tfield(3, MR_r2, 3);
	MR_sv(7) = MR_tfield(3, MR_r2, 2);
	MR_sv(6) = MR_tfield(3, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 18;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_has_feature_2_0,
		fn__hlds__goal_util__maybe_strip_equality_pretest_1_0_i18);
MR_def_label(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0_i17);
	}
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(8);
MR_def_label(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_np_localcall_lab(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0,
		fn__hlds__goal_util__maybe_strip_equality_pretest_1_0_i20);
MR_def_label(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_localcall_lab(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0,
		fn__hlds__goal_util__maybe_strip_equality_pretest_1_0_i21);
MR_def_label(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_localcall_lab(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0,
		fn__hlds__goal_util__maybe_strip_equality_pretest_1_0_i22);
MR_def_label(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 4) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(8);
	}
MR_def_label(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,5)) {
		MR_GOTO_LAB(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0_i26);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_r3 = MR_tfield(3, MR_r2, 2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r2, 1);
	MR_sv(6) = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0_i27);
	}
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	if (MR_INT_EQ(MR_r2,0)) {
		MR_GOTO_LAB(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0_i131);
	}
	}
MR_def_label(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_np_localcall_lab(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0,
		fn__hlds__goal_util__maybe_strip_equality_pretest_1_0_i30);
MR_def_label(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_r2, 1) = MR_sv(6);
	MR_tfield(3, MR_r2, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(8);
MR_def_label(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,7)) {
		MR_GOTO_LAB(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0_i34);
	}
	MR_r3 = MR_tfield(3, MR_r2, 1);
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0_i36);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(6) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(7) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 3);
	MR_sv(5) = MR_tfield(1, MR_tempr1, 5);
	MR_sv(4) = MR_tfield(1, MR_tempr1, 6);
	MR_r1 = MR_tfield(1, MR_tempr1, 4);
	}
	MR_np_localcall_lab(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0,
		fn__hlds__goal_util__maybe_strip_equality_pretest_1_0_i37);
MR_def_label(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,11);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__hlds__goal_util__maybe_strip_equality_pretest_1_0_i39);
MR_def_label(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 7);
	MR_tfield(1, MR_r2, 0) = MR_sv(6);
	MR_tfield(1, MR_r2, 1) = MR_sv(7);
	MR_tfield(1, MR_r2, 2) = MR_sv(2);
	MR_tfield(1, MR_r2, 3) = MR_sv(3);
	MR_tfield(1, MR_r2, 4) = MR_sv(5);
	MR_tfield(1, MR_r2, 5) = MR_r1;
	MR_tfield(1, MR_r2, 6) = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(8);
	}
MR_def_label(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0_i43);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(6) = MR_tfield(2, MR_tempr1, 0);
	MR_sv(7) = MR_tfield(2, MR_tempr1, 1);
	MR_r1 = MR_tfield(2, MR_tempr1, 2);
	}
	MR_np_localcall_lab(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0,
		fn__hlds__goal_util__maybe_strip_equality_pretest_1_0_i44);
MR_def_label(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(2, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr2;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(8);
	}
MR_def_label(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.goal_util", 14);
	MR_r2 = (MR_Word) MR_string_const("function \140hlds.goal_util.maybe_strip_equality_pretest\'/1", 56);
	MR_r3 = (MR_Word) MR_string_const("bi_implication", 14);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,4)) {
		MR_GOTO_LAB(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0_i140);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_sv(6) = MR_tfield(3, MR_r2, 1);
	MR_sv(7) = MR_tfield(3, MR_r2, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,12);
	MR_r4 = MR_tfield(3, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__hlds__goal_util__maybe_strip_equality_pretest_1_0_i51);
MR_def_label(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_r2, 1) = MR_sv(6);
	MR_tfield(3, MR_r2, 2) = MR_sv(7);
	MR_tfield(3, MR_r2, 3) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
MR_def_label(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0,131)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(8);
MR_def_label(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0,140)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module70)
	MR_init_entry1(hlds__goal_util__maybe_error_to_maybe_transformed_goal_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_util__maybe_error_to_maybe_transformed_goal_2_0);
	MR_init_label1(hlds__goal_util__maybe_error_to_maybe_transformed_goal_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_error_to_maybe_transformed_goal'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__goal_util__maybe_error_to_maybe_transformed_goal_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(hlds__goal_util__maybe_error_to_maybe_transformed_goal_2_0_i3);
	}
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(hlds__goal_util__maybe_error_to_maybe_transformed_goal_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_1);
MR_decl_entry(list__index1_3_0);
MR_decl_entry(list__det_replace_nth_4_0);

MR_BEGIN_MODULE(hlds__goal_util_module71)
	MR_init_entry1(hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0);
	MR_init_label10(hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0,255,3,97,7,11,13,16,8,24,26)
	MR_init_label10(hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0,29,21,37,35,45,43,53,34,65,62)
	MR_init_label7(hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0,74,71,84,86,90,81,266)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_transform_goal_at_goal_path_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0_i3);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_r2 = MR_r3;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0_i255);
MR_def_label(hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0,255)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(hlds__goal_util__maybe_error_to_maybe_transformed_goal_2_0);
MR_def_label(hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r3, 0);
	MR_r4 = MR_tempr1;
	if (!((((((MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_tempr1, 0) == (MR_Integer) 1)) || ((MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_tempr1, 0) == (MR_Integer) 0))) || (MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 2))) || (MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 1))))) {
		MR_GOTO_LAB(hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0_i7);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	}
MR_def_label(hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(8);
MR_def_label(hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,2)) {
		MR_GOTO_LAB(hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0_i8);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0_i97);
	}
	MR_sv(7) = MR_r1;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_tfield(3, MR_tempr2, 1);
	MR_sv(4) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(5) = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(list__index1_3_0,
		hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0_i11);
MR_def_label(hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0_i97);
	}
	MR_r1 = MR_sv(7);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_localcall_lab(hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0,
		hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0_i13);
MR_def_label(hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0_i266);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(list__det_replace_nth_4_0,
		hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0_i16);
MR_def_label(hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(0, MR_sv(1), 1);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_decr_sp_and_return(8);
	}
MR_def_label(hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,3)) {
		MR_GOTO_LAB(hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0_i21);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0_i97);
	}
	MR_sv(7) = MR_r1;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_sv(3) = MR_tfield(3, MR_r4, 1);
	MR_sv(4) = MR_tfield(2, MR_tempr1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__index1_3_0,
		hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0_i24);
MR_def_label(hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0_i97);
	}
	MR_r1 = MR_sv(7);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_localcall_lab(hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0,
		hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0_i26);
MR_def_label(hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0_i266);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(list__det_replace_nth_4_0,
		hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0_i29);
MR_def_label(hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(0, MR_sv(1), 1);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_decr_sp_and_return(8);
	}
MR_def_label(hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,6)) {
		MR_GOTO_LAB(hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0_i34);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 3);
	MR_r5 = MR_tfield(3, MR_tempr1, 2);
	MR_sv(7) = MR_tfield(3, MR_tempr1, 1);
	MR_r4 = MR_tfield(1, MR_r2, 1);
	MR_r6 = MR_tfield(1, MR_r2, 0);
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0_i35);
	}
	MR_sv(1) = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	}
	MR_np_localcall_lab(hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0,
		hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0_i37);
MR_def_label(hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0_i266);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 2) = MR_tfield(1, MR_r1, 0);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(0, MR_sv(1), 1);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_decr_sp_and_return(8);
	}
MR_def_label(hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,1)) {
		MR_GOTO_LAB(hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0_i43);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r5;
	MR_r2 = MR_r4;
	MR_r3 = MR_sv(3);
	MR_np_localcall_lab(hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0,
		hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0_i45);
MR_def_label(hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0_i266);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_tfield(1, MR_r1, 0);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(0, MR_sv(1), 1);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_decr_sp_and_return(8);
	}
MR_def_label(hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,2)) {
		MR_GOTO_LAB(hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0_i97);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r5;
	MR_r2 = MR_r4;
	MR_r3 = MR_sv(4);
	MR_np_localcall_lab(hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0,
		hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0_i53);
MR_def_label(hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0_i266);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 4) = MR_tfield(1, MR_r1, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(0, MR_sv(1), 1);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_decr_sp_and_return(8);
	}
MR_def_label(hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,0)) {
		MR_GOTO_LAB(hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0_i62);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	if (MR_LTAGS_TESTR(MR_tempr1,0,3)) {
		MR_GOTO_LAB(hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0_i97);
	}
	MR_sv(1) = MR_r3;
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_r3 = MR_body((MR_Integer) MR_r4, (MR_Integer) 0);
	}
	MR_np_localcall_lab(hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0,
		hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0_i65);
MR_def_label(hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0_i266);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tmkword(0, (MR_Word *) MR_tfield(1, MR_r1, 0));
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_sv(1), 1);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,5)) {
		MR_GOTO_LAB(hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0_i71);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0_i97);
	}
	MR_sv(1) = MR_r3;
	MR_tempr2 = MR_r4;
	MR_sv(7) = MR_tfield(3, MR_tempr2, 1);
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_r3 = MR_tfield(3, MR_tempr2, 2);
	}
	MR_np_localcall_lab(hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0,
		hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0_i74);
MR_def_label(hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0_i266);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 2) = MR_tfield(1, MR_r1, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(0, MR_sv(1), 1);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_decr_sp_and_return(8);
	}
MR_def_label(hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,4)) {
		MR_GOTO_LAB(hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0_i81);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,0)) {
		MR_GOTO_LAB(hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0_i97);
	}
	MR_sv(7) = MR_r1;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_tfield(3, MR_tempr2, 1);
	MR_sv(4) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(5) = MR_tfield(3, MR_tempr2, 3);
	MR_sv(6) = MR_tfield(3, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(list__index1_3_0,
		hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0_i84);
MR_def_label(hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0_i97);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tfield(0, MR_sv(7), 2);
	}
	MR_np_localcall_lab(hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0,
		hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0_i86);
MR_def_label(hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0_i266);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r4 = MR_tempr1;
	MR_tempr2 = MR_sv(7);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(1, MR_r1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(list__det_replace_nth_4_0,
		hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0_i90);
MR_def_label(hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(0, MR_sv(1), 1);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_decr_sp_and_return(8);
	}
MR_def_label(hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.goal_util", 14);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.goal_util.maybe_transform_goal_at_goal_path_2\'/4", 64);
	MR_r3 = (MR_Word) MR_string_const("shorthand", 9);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0,266)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module72)
	MR_init_entry1(hlds__goal_util__maybe_transform_goal_at_goal_path_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_util__maybe_transform_goal_at_goal_path_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_transform_goal_at_goal_path'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_util__maybe_transform_goal_at_goal_path_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(hlds__goal_util__maybe_transform_goal_at_goal_path_2_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_2);
MR_decl_entry(list__take_upto_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__instmap__type_ctor_info_instmap_delta_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__instmap__type_ctor_info_instmap_0;

MR_BEGIN_MODULE(hlds__goal_util_module73)
	MR_init_entry1(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0);
	MR_init_label10(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0,262,3,104,7,11,13,15,17,18,21)
	MR_init_label10(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0,8,29,31,34,26,42,40,50,51,52)
	MR_init_label10(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0,48,60,39,72,69,81,78,91,93,97)
	MR_init_label2(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0,88,273)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_transform_goal_at_goal_path_with_instmap_2'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0_i3);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0_i262);
MR_def_label(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0,262)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(hlds__goal_util__maybe_error_to_maybe_transformed_goal_2_0);
MR_def_label(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r4, 0);
	MR_r5 = MR_tempr1;
	if (!((((((MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_tempr1, 0) == (MR_Integer) 1)) || ((MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_tempr1, 0) == (MR_Integer) 0))) || (MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 2))) || (MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 1))))) {
		MR_GOTO_LAB(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0_i7);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	}
MR_def_label(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(11);
MR_def_label(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,2)) {
		MR_GOTO_LAB(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0_i8);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0_i104);
	}
	MR_sv(8) = MR_r1;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_tempr2 = MR_r5;
	MR_sv(4) = MR_tfield(3, MR_tempr2, 1);
	MR_sv(5) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(6) = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(list__index1_3_0,
		hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0_i11);
MR_def_label(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0_i104);
	}
	MR_sv(7) = MR_r2;
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r1 = MR_sv(9);
	MR_r2 = ((MR_Integer) MR_sv(6) - (MR_Integer) 1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(list__take_upto_3_0,
		hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0_i13);
MR_def_label(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = (MR_Word) MR_CTOR0_ADDR(hlds__instmap, instmap_delta);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,13);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0_i15);
MR_def_label(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__instmap, instmap);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,14);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0_i17);
MR_def_label(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(7);
	}
	MR_np_localcall_lab(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0,
		hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0_i18);
MR_def_label(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0_i273);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(list__det_replace_nth_4_0,
		hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0_i21);
MR_def_label(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(0, MR_sv(2), 1);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_decr_sp_and_return(11);
	}
MR_def_label(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,3)) {
		MR_GOTO_LAB(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0_i26);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0_i104);
	}
	MR_sv(8) = MR_r1;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_sv(4) = MR_tfield(3, MR_r5, 1);
	MR_sv(5) = MR_tfield(2, MR_tempr1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(list__index1_3_0,
		hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0_i29);
MR_def_label(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0_i104);
	}
	MR_r1 = MR_sv(8);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_localcall_lab(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0,
		hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0_i31);
MR_def_label(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0_i273);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(list__det_replace_nth_4_0,
		hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0_i34);
MR_def_label(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(0, MR_sv(2), 1);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_decr_sp_and_return(11);
	}
MR_def_label(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,6)) {
		MR_GOTO_LAB(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0_i39);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(7) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(6) = MR_tfield(3, MR_tempr1, 3);
	MR_r6 = MR_tfield(3, MR_tempr1, 2);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 1);
	MR_r5 = MR_tfield(1, MR_r2, 1);
	MR_r7 = MR_tfield(1, MR_r2, 0);
	if (MR_LTAGS_TESTR(MR_r7,0,0)) {
		MR_GOTO_LAB(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0_i40);
	}
	MR_sv(2) = MR_r4;
	MR_r2 = MR_r5;
	MR_r4 = MR_r6;
	}
	MR_np_localcall_lab(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0,
		hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0_i42);
MR_def_label(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0_i273);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 2) = MR_tfield(1, MR_r1, 0);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(0, MR_sv(2), 1);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_decr_sp_and_return(11);
	}
MR_def_label(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r7,0,1)) {
		MR_GOTO_LAB(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0_i48);
	}
	MR_sv(8) = MR_r1;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0_i50);
MR_def_label(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__instmap__apply_instmap_delta_sv_3_0,
		hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0_i51);
MR_def_label(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(6);
	}
	MR_np_localcall_lab(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0,
		hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0_i52);
MR_def_label(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0_i273);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 3) = MR_tfield(1, MR_r1, 0);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(0, MR_sv(2), 1);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_decr_sp_and_return(11);
	}
MR_def_label(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r7,0,2)) {
		MR_GOTO_LAB(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0_i104);
	}
	MR_sv(2) = MR_r4;
	MR_sv(5) = MR_r6;
	MR_r2 = MR_r5;
	MR_r4 = MR_sv(7);
	MR_np_localcall_lab(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0,
		hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0_i60);
MR_def_label(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0_i273);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 4) = MR_tfield(1, MR_r1, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(0, MR_sv(2), 1);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_decr_sp_and_return(11);
	}
MR_def_label(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,0)) {
		MR_GOTO_LAB(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0_i69);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	if (MR_LTAGS_TESTR(MR_tempr1,0,3)) {
		MR_GOTO_LAB(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0_i104);
	}
	MR_sv(2) = MR_r4;
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_r4 = MR_body((MR_Integer) MR_r5, (MR_Integer) 0);
	}
	MR_np_localcall_lab(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0,
		hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0_i72);
MR_def_label(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0_i273);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tmkword(0, (MR_Word *) MR_tfield(1, MR_r1, 0));
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_sv(2), 1);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
MR_def_label(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,5)) {
		MR_GOTO_LAB(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0_i78);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0_i104);
	}
	MR_sv(2) = MR_r4;
	MR_tempr2 = MR_r5;
	MR_sv(8) = MR_tfield(3, MR_tempr2, 1);
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_r4 = MR_tfield(3, MR_tempr2, 2);
	}
	MR_np_localcall_lab(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0,
		hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0_i81);
MR_def_label(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0_i273);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(8);
	MR_tfield(3, MR_tempr1, 2) = MR_tfield(1, MR_r1, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(0, MR_sv(2), 1);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_decr_sp_and_return(11);
	}
MR_def_label(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,4)) {
		MR_GOTO_LAB(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0_i88);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,0)) {
		MR_GOTO_LAB(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0_i104);
	}
	MR_sv(8) = MR_r1;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_tempr2 = MR_r5;
	MR_sv(4) = MR_tfield(3, MR_tempr2, 1);
	MR_sv(5) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(6) = MR_tfield(3, MR_tempr2, 3);
	MR_sv(7) = MR_tfield(3, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(list__index1_3_0,
		hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0_i91);
MR_def_label(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0_i104);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tfield(0, MR_sv(8), 2);
	}
	MR_np_localcall_lab(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0,
		hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0_i93);
MR_def_label(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0_i273);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r4 = MR_tempr1;
	MR_tempr2 = MR_sv(8);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(1, MR_r1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(list__det_replace_nth_4_0,
		hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0_i97);
MR_def_label(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(0, MR_sv(2), 1);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_decr_sp_and_return(11);
	}
MR_def_label(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.goal_util", 14);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.goal_util.maybe_transform_goal_at_goal_path_with_instmap_2\'/5", 77);
	MR_r3 = (MR_Word) MR_string_const("shorthand", 9);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0,273)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module74)
	MR_init_entry1(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_transform_goal_at_goal_path_with_instmap'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(hlds__goal_util__maybe_transform_goal_at_goal_path_with_instmap_2_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module75)
	MR_init_entry1(hlds__goal_util__transform_all_goals_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_util__transform_all_goals_3_0);
	MR_init_label10(hlds__goal_util__transform_all_goals_3_0,3,6,4,10,8,13,14,15,12,18)
	MR_init_label6(hlds__goal_util__transform_all_goals_3_0,17,20,19,24,22,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'transform_all_goals'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_util__transform_all_goals_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	MR_r3 = MR_tempr1;
	if (!((((((MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_tempr1, 0) == (MR_Integer) 1)) || ((MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_tempr1, 0) == (MR_Integer) 0))) || (MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 2))) || (MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 1))))) {
		MR_GOTO_LAB(hlds__goal_util__transform_all_goals_3_0_i3);
	}
	MR_r4 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_sv(5) = MR_tfield(0, MR_r4, 1);
	MR_GOTO_LAB(hlds__goal_util__transform_all_goals_3_0_i2);
	}
MR_def_label(hlds__goal_util__transform_all_goals_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,2)) {
		MR_GOTO_LAB(hlds__goal_util__transform_all_goals_3_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,7);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__goal_util__transform_all_goals_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(1) = MR_r1;
	MR_tempr3 = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_tempr3, 1);
	MR_sv(5) = MR_tfield(0, MR_r2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_r1;
	MR_tempr2 = MR_tempr3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tfield(3, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(list__map_3_0,
		hlds__goal_util__transform_all_goals_3_0_i6);
MR_def_label(hlds__goal_util__transform_all_goals_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_GOTO_LAB(hlds__goal_util__transform_all_goals_3_0_i2);
	}
MR_def_label(hlds__goal_util__transform_all_goals_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,3)) {
		MR_GOTO_LAB(hlds__goal_util__transform_all_goals_3_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,8);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__goal_util__transform_all_goals_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_tfield(0, MR_r2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_r1;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(list__map_3_0,
		hlds__goal_util__transform_all_goals_3_0_i10);
MR_def_label(hlds__goal_util__transform_all_goals_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_GOTO_LAB(hlds__goal_util__transform_all_goals_3_0_i2);
	}
MR_def_label(hlds__goal_util__transform_all_goals_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,6)) {
		MR_GOTO_LAB(hlds__goal_util__transform_all_goals_3_0_i12);
	}
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(5) = MR_tfield(0, MR_r2, 1);
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	}
	MR_np_localcall_lab(hlds__goal_util__transform_all_goals_3_0,
		hlds__goal_util__transform_all_goals_3_0_i13);
MR_def_label(hlds__goal_util__transform_all_goals_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_localcall_lab(hlds__goal_util__transform_all_goals_3_0,
		hlds__goal_util__transform_all_goals_3_0_i14);
MR_def_label(hlds__goal_util__transform_all_goals_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_localcall_lab(hlds__goal_util__transform_all_goals_3_0,
		hlds__goal_util__transform_all_goals_3_0_i15);
MR_def_label(hlds__goal_util__transform_all_goals_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_r5 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_GOTO_LAB(hlds__goal_util__transform_all_goals_3_0_i2);
	}
MR_def_label(hlds__goal_util__transform_all_goals_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,0)) {
		MR_GOTO_LAB(hlds__goal_util__transform_all_goals_3_0_i17);
	}
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_tfield(0, MR_r2, 1);
	MR_r2 = MR_body((MR_Integer) MR_r3, (MR_Integer) 0);
	MR_np_localcall_lab(hlds__goal_util__transform_all_goals_3_0,
		hlds__goal_util__transform_all_goals_3_0_i18);
MR_def_label(hlds__goal_util__transform_all_goals_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_tmkword(0, (MR_Word *) MR_r3);
	MR_GOTO_LAB(hlds__goal_util__transform_all_goals_3_0_i2);
MR_def_label(hlds__goal_util__transform_all_goals_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,5)) {
		MR_GOTO_LAB(hlds__goal_util__transform_all_goals_3_0_i19);
	}
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(0, MR_r2, 1);
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	}
	MR_np_localcall_lab(hlds__goal_util__transform_all_goals_3_0,
		hlds__goal_util__transform_all_goals_3_0_i20);
MR_def_label(hlds__goal_util__transform_all_goals_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_GOTO_LAB(hlds__goal_util__transform_all_goals_3_0_i2);
	}
MR_def_label(hlds__goal_util__transform_all_goals_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,4)) {
		MR_GOTO_LAB(hlds__goal_util__transform_all_goals_3_0_i22);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,9);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__goal_util__IntroducedFrom__pred__transform_all_goals__2251__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(1) = MR_r1;
	MR_tempr3 = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_tempr3, 1);
	MR_sv(3) = MR_tfield(3, MR_tempr3, 2);
	MR_sv(5) = MR_tfield(0, MR_r2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	MR_r2 = MR_r1;
	MR_tempr2 = MR_tempr3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tfield(3, MR_tempr2, 3);
	}
	MR_np_call_localret_ent(list__map_3_0,
		hlds__goal_util__transform_all_goals_3_0_i24);
MR_def_label(hlds__goal_util__transform_all_goals_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_GOTO_LAB(hlds__goal_util__transform_all_goals_3_0_i2);
	}
MR_def_label(hlds__goal_util__transform_all_goals_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("hlds.goal_util", 14);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.goal_util.transform_all_goals\'/3", 48);
	MR_r3 = (MR_Word) MR_string_const("shorthand", 9);
	}
	MR_np_call_localret_ent(require__unexpected_3_0,
		hlds__goal_util__transform_all_goals_3_0_i2);
MR_def_label(hlds__goal_util__transform_all_goals_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(hlds__goal_util__transform_all_goals_3_0));
	MR_np_tailcall_ent(do_call_closure_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_clauses__clause_body_1_0);

MR_BEGIN_MODULE(hlds__goal_util_module76)
	MR_init_entry1(hlds__goal_util__clause_size_increment_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_util__clause_size_increment_3_0);
	MR_init_label2(hlds__goal_util__clause_size_increment_3_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'clause_size_increment'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__goal_util__clause_size_increment_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_clauses__clause_body_1_0,
		hlds__goal_util__clause_size_increment_3_0_i2);
MR_def_label(hlds__goal_util__clause_size_increment_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(hlds__goal_util__goal_expr_size_2_0,
		hlds__goal_util__clause_size_increment_3_0_i3);
MR_def_label(hlds__goal_util__clause_size_increment_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) MR_r1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module77)
	MR_init_entry1(fn__hlds__goal_util__flatten_disj_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__goal_util__flatten_disj_2_0);
	MR_init_label1(fn__hlds__goal_util__flatten_disj_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'flatten_disj'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__goal_util__flatten_disj_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,3)) {
		MR_GOTO_LAB(fn__hlds__goal_util__flatten_disj_2_0_i2);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,12);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,15);
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(fn__list__foldr_3_0);
	}
MR_def_label(fn__hlds__goal_util__flatten_disj_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module78)
	MR_init_entry1(fn__hlds__goal_util__maybe_strip_equality_pretest_case_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__goal_util__maybe_strip_equality_pretest_case_1_0);
	MR_init_label1(fn__hlds__goal_util__maybe_strip_equality_pretest_case_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_strip_equality_pretest_case'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__goal_util__maybe_strip_equality_pretest_case_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_r1, 2);
	MR_np_call_localret_ent(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0,
		fn__hlds__goal_util__maybe_strip_equality_pretest_case_1_0_i2);
MR_def_label(fn__hlds__goal_util__maybe_strip_equality_pretest_case_1_0,2)
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


MR_BEGIN_MODULE(hlds__goal_util_module79)
	MR_init_entry1(__Unify___hlds__goal_util__attach_in_from_ground_term_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__goal_util__attach_in_from_ground_term_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___hlds__goal_util__attach_in_from_ground_term_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(hlds__goal_util_module80)
	MR_init_entry1(__Compare___hlds__goal_util__attach_in_from_ground_term_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__goal_util__attach_in_from_ground_term_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___hlds__goal_util__attach_in_from_ground_term_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module81)
	MR_init_entry1(__Unify___hlds__goal_util__goal_is_atomic_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__goal_util__goal_is_atomic_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___hlds__goal_util__goal_is_atomic_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module82)
	MR_init_entry1(__Compare___hlds__goal_util__goal_is_atomic_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__goal_util__goal_is_atomic_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___hlds__goal_util__goal_is_atomic_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module83)
	MR_init_entry1(__Unify___hlds__goal_util__is_leaf_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__goal_util__is_leaf_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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


MR_BEGIN_MODULE(hlds__goal_util_module84)
	MR_init_entry1(__Compare___hlds__goal_util__is_leaf_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__goal_util__is_leaf_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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

MR_decl_entry(__Unify___hlds__hlds_goal__hlds_goal_0_0);

MR_BEGIN_MODULE(hlds__goal_util_module85)
	MR_init_entry1(__Unify___hlds__goal_util__maybe_transformed_goal_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__goal_util__maybe_transformed_goal_0_0);
	MR_init_label4(__Unify___hlds__goal_util__maybe_transformed_goal_0_0,5,17,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___hlds__goal_util__maybe_transformed_goal_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___hlds__goal_util__maybe_transformed_goal_0_0_i17);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___hlds__goal_util__maybe_transformed_goal_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___hlds__goal_util__maybe_transformed_goal_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Unify___hlds__goal_util__maybe_transformed_goal_0_0_i6);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___hlds__goal_util__maybe_transformed_goal_0_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___hlds__goal_util__maybe_transformed_goal_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___hlds__goal_util__maybe_transformed_goal_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___hlds__goal_util__maybe_transformed_goal_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___hlds__hlds_goal__hlds_goal_0_0);
MR_def_label(__Unify___hlds__goal_util__maybe_transformed_goal_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_string_3_0);
MR_decl_entry(__Compare___hlds__hlds_goal__hlds_goal_0_0);

MR_BEGIN_MODULE(hlds__goal_util_module86)
	MR_init_entry1(__Compare___hlds__goal_util__maybe_transformed_goal_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__goal_util__maybe_transformed_goal_0_0);
	MR_init_label7(__Compare___hlds__goal_util__maybe_transformed_goal_0_0,30,31,5,11,9,15,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___hlds__goal_util__maybe_transformed_goal_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___hlds__goal_util__maybe_transformed_goal_0_0_i30);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___hlds__goal_util__maybe_transformed_goal_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___hlds__goal_util__maybe_transformed_goal_0_0_i31);
	}
MR_def_label(__Compare___hlds__goal_util__maybe_transformed_goal_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__goal_util__maybe_transformed_goal_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__goal_util__maybe_transformed_goal_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___hlds__goal_util__maybe_transformed_goal_0_0_i9);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___hlds__goal_util__maybe_transformed_goal_0_0_i11);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__goal_util__maybe_transformed_goal_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___hlds__goal_util__maybe_transformed_goal_0_0_i31);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___hlds__goal_util__maybe_transformed_goal_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___hlds__goal_util__maybe_transformed_goal_0_0_i15);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__goal_util__maybe_transformed_goal_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___hlds__goal_util__maybe_transformed_goal_0_0_i16);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__goal_util__maybe_transformed_goal_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___hlds__hlds_goal__hlds_goal_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_rtti__rtti_lookup_type_info_locn_3_0);
MR_decl_entry(hlds__hlds_rtti__type_info_locn_var_2_0);

MR_BEGIN_MODULE(hlds__goal_util_module87)
	MR_init_entry1(fn__hlds__goal_util__IntroducedFrom__func__extra_nonlocal_typeinfos__821__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__goal_util__IntroducedFrom__func__extra_nonlocal_typeinfos__821__1_2_0);
	MR_init_label1(fn__hlds__goal_util__IntroducedFrom__func__extra_nonlocal_typeinfos__821__1_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__extra_nonlocal_typeinfos__821__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__goal_util__IntroducedFrom__func__extra_nonlocal_typeinfos__821__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(hlds__hlds_rtti__rtti_lookup_type_info_locn_3_0,
		fn__hlds__goal_util__IntroducedFrom__func__extra_nonlocal_typeinfos__821__1_2_0_i2);
MR_def_label(fn__hlds__goal_util__IntroducedFrom__func__extra_nonlocal_typeinfos__821__1_2_0,2)
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
MR_decl_entry(parse_tree__set_of_var__member_2_0);
MR_decl_entry(hlds__hlds_rtti__rtti_lookup_typeclass_info_var_3_0);

MR_BEGIN_MODULE(hlds__goal_util_module88)
	MR_init_entry1(hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__832__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__832__1_3_0);
	MR_init_label5(hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__832__1_3_0,1,2,3,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__extra_nonlocal_typeinfos__832__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__832__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred hlds.goal_util.IntroducedFrom__pred__extra_nonlocal_typeinfos__832__1/3-0", 3,
		MR_ENTRY(MR_do_fail));
	MR_fv(1) = MR_r1;
	MR_fv(2) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_rtti__rtti_varmaps_reusable_constraints_2_0,
		hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__832__1_3_0_i1);
MR_def_label(hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__832__1_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__member_2_1,
		hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__832__1_3_0_i2);
MR_def_label(hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__832__1_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(3) = MR_r1;
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_np_call_localret_ent(parse_tree__prog_type__type_list_contains_var_2_0,
		hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__832__1_3_0_i3);
MR_def_label(hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__832__1_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_fv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__member_2_0,
		hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__832__1_3_0_i4);
MR_def_label(hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__832__1_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_fv(1);
	MR_r2 = MR_fv(3);
	MR_np_call_localret_ent(hlds__hlds_rtti__rtti_lookup_typeclass_info_var_3_0,
		hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__832__1_3_0_i6);
MR_def_label(hlds__goal_util__IntroducedFrom__pred__extra_nonlocal_typeinfos__832__1_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module89)
	MR_init_entry1(hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1730__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1730__1_2_0);
	MR_init_label1(hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1730__1_2_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__predids_with_args_from_goal__1730__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1730__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred hlds.goal_util.IntroducedFrom__pred__predids_with_args_from_goal__1730__1/2-0", 0,
		MR_ENTRY(MR_do_fail));
	MR_np_call_localret_ent(hlds__goal_util__goal_contains_goal_2_0,
		hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1730__1_2_0_i1);
MR_def_label(hlds__goal_util__IntroducedFrom__pred__predids_with_args_from_goal__1730__1_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tfield(2, MR_r2, 0);
	MR_tfield(0, MR_r1, 1) = MR_tfield(2, MR_r2, 2);
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module90)
	MR_init_entry1(hlds__goal_util__IntroducedFrom__pred__case_to_disjunct__1363__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_util__IntroducedFrom__pred__case_to_disjunct__1363__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__case_to_disjunct__1363__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__goal_util__IntroducedFrom__pred__case_to_disjunct__1363__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_tfield(0, MR_r1, 1) = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module91)
	MR_init_entry1(hlds__goal_util__IntroducedFrom__pred__generate_simple_call__1655__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_util__IntroducedFrom__pred__generate_simple_call__1655__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__generate_simple_call__1655__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__goal_util__IntroducedFrom__pred__generate_simple_call__1655__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module92)
	MR_init_entry1(hlds__goal_util__IntroducedFrom__pred__generate_foreign_proc__1688__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_util__IntroducedFrom__pred__generate_foreign_proc__1688__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__generate_foreign_proc__1688__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__goal_util__IntroducedFrom__pred__generate_foreign_proc__1688__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module93)
	MR_init_entry1(hlds__goal_util__IntroducedFrom__pred__transform_all_goals__2251__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_util__IntroducedFrom__pred__transform_all_goals__2251__1_3_0);
	MR_init_label1(hlds__goal_util__IntroducedFrom__pred__transform_all_goals__2251__1_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__transform_all_goals__2251__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__goal_util__IntroducedFrom__pred__transform_all_goals__2251__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r2 = MR_tfield(0, MR_r2, 2);
	MR_np_call_localret_ent(hlds__goal_util__transform_all_goals_3_0,
		hlds__goal_util__IntroducedFrom__pred__transform_all_goals__2251__1_3_0_i2);
MR_def_label(hlds__goal_util__IntroducedFrom__pred__transform_all_goals__2251__1_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module94)
	MR_init_entry1(fn__hlds__goal_util__IntroducedFrom__func__maybe_transform_goal_at_goal_path_with_instmap_2__2071__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__goal_util__IntroducedFrom__func__maybe_transform_goal_at_goal_path_with_instmap_2__2071__1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__maybe_transform_goal_at_goal_path_with_instmap_2__2071__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__goal_util__IntroducedFrom__func__maybe_transform_goal_at_goal_path_with_instmap_2__2071__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_np_tailcall_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module95)
	MR_init_entry1(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_0);
	MR_init_label2(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_0,2,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__attach_features_to_all_goals__[2]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_tfield(0, MR_r2, 1);
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_0,
		f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_0_i2);
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, goal_feature);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal_info);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,16);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_0_i4);
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module96)
	MR_init_entry1(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_1);
	MR_init_label2(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_1,2,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__attach_features_to_all_goals__[2]_1'/4 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_tfield(0, MR_r2, 1);
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_1,
		f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_1_i2);
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, goal_feature);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal_info);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,17);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_1_i4);
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module97)
	MR_init_entry1(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_0);
	MR_init_label4(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_0,20,4,6,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__attach_features_to_goals__[2]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_0_i20);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_0,
		f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_0_i4);
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, goal_feature);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal_info);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,18);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_0_i6);
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(1);
	}
	MR_np_localcall_lab(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_0,
		f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_0_i8);
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module98)
	MR_init_entry1(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_1);
	MR_init_label4(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_1,20,4,6,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__attach_features_to_goals__[2]_1'/4 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_1_i20);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_1,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_1,
		f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_1_i4);
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, goal_feature);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal_info);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,19);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_1_i6);
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_1,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(1);
	}
	MR_np_localcall_lab(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_1,
		f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_1_i8);
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_1,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module99)
	MR_init_entry1(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_48_4_0);
	MR_init_label4(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_48_4_0,21,4,6,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__attach_features_to_cases__[2]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_48_4_0_i21);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_48_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 2);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 1);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_0,
		f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_48_4_0_i4);
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_48_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, goal_feature);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal_info);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,20);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_48_4_0_i6);
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_48_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr2, 2) = MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_localcall_lab(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_48_4_0,
		f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_48_4_0_i9);
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_48_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module100)
	MR_init_entry1(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_49_4_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_49_4_1);
	MR_init_label4(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_49_4_1,21,4,6,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__attach_features_to_cases__[2]_1'/4 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_49_4_1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_49_4_1_i21);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_49_4_1,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 2);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 1);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_1,
		f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_49_4_1_i4);
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_49_4_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, goal_feature);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal_info);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,21);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_49_4_1_i6);
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_49_4_1,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr2, 2) = MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_localcall_lab(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_49_4_1,
		f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_49_4_1_i9);
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_49_4_1,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module101)
	MR_init_entry1(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_0);
	MR_init_label10(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_0,4,3,6,5,9,8,12,14,16,17)
	MR_init_label10(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_0,11,20,24,19,30,31,29,35,36,34)
	MR_init_label4(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_0,39,27,43,42)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__attach_features_to_goal_expr__[2]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_0_i3);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_r2 = MR_body((MR_Integer) MR_r2, (MR_Integer) 0);
	MR_np_call_localret_ent(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_0,
		f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_0_i4);
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tmkword(0, (MR_Word *) MR_r1);
	MR_decr_sp_and_return(8);
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,2)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_0_i5);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(6) = MR_tfield(3, MR_r2, 1);
	MR_r2 = MR_tfield(3, MR_r2, 2);
	MR_np_call_localret_ent(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_0,
		f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_0_i6);
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r2, 1) = MR_sv(6);
	MR_tfield(3, MR_r2, 2) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(8);
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,3)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_0_i8);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_0,
		f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_0_i9);
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,6)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_0_i11);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_tfield(3, MR_r2, 1);
	MR_sv(1) = MR_tfield(3, MR_r2, 3);
	MR_sv(2) = MR_tfield(3, MR_r2, 4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r2, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_localcall_lab(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_0,
		f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_0_i12);
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, goal_feature);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal_info);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,22);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_0_i14);
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_0,
		f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_0_i16);
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_0,
		f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_0_i17);
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,5)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_0_i19);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_r3 = MR_tfield(3, MR_r2, 2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r2, 1);
	MR_sv(6) = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_0_i20);
	}
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_0,
		f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_0_i24);
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_0,
		f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_0_i24);
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,7)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_0_i27);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r2, 1);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_0_i29);
	}
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(1, MR_tempr1, 5);
	MR_sv(5) = MR_tfield(1, MR_tempr1, 6);
	MR_r2 = MR_tfield(1, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_0,
		f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_0_i30);
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_0,
		f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_0_i31);
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 7);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 4) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 5) = MR_r1;
	MR_tfield(1, MR_tempr1, 6) = MR_sv(5);
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_r1, 1) = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,0)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_0_i34);
	}
	MR_sv(6) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(7) = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_0,
		f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_0_i35);
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_0,
		f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_0_i36);
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_r1, 1) = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(6) = MR_tfield(2, MR_tempr1, 0);
	MR_sv(7) = MR_tfield(2, MR_tempr1, 1);
	MR_r2 = MR_tfield(2, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_0,
		f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_0_i39);
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(2, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_r1, 1) = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,4)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_0_i42);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(6) = MR_tfield(3, MR_r2, 1);
	MR_sv(7) = MR_tfield(3, MR_r2, 2);
	MR_r2 = MR_tfield(3, MR_r2, 3);
	MR_np_call_localret_ent(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_48_4_0,
		f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_0_i43);
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_48_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_util_module102)
	MR_init_entry1(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_1);
	MR_init_label10(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_1,4,3,6,5,9,8,12,14,16,17)
	MR_init_label10(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_1,11,48,20,22,19,28,29,27,33,34)
	MR_init_label4(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_1,32,37,25,41)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__attach_features_to_goal_expr__[2]_1'/4 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_1_i3);
	}
	MR_r2 = MR_body((MR_Integer) MR_r2, (MR_Integer) 0);
	MR_np_call_localret_ent(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_1,
		f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_1_i4);
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tmkword(0, (MR_Word *) MR_r1);
	MR_decr_sp_and_return(8);
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,2)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_1_i5);
	}
	MR_sv(6) = MR_tfield(3, MR_r2, 1);
	MR_r2 = MR_tfield(3, MR_r2, 2);
	MR_np_call_localret_ent(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_1,
		f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_1_i6);
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_1,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r2, 1) = MR_sv(6);
	MR_tfield(3, MR_r2, 2) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(8);
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_1,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,3)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_1_i8);
	}
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_1,
		f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_1_i9);
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_1,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_1,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,6)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_1_i11);
	}
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_tfield(3, MR_r2, 1);
	MR_sv(1) = MR_tfield(3, MR_r2, 3);
	MR_sv(2) = MR_tfield(3, MR_r2, 4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r2, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_localcall_lab(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_1,
		f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_1_i12);
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_1,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, goal_feature);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal_info);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,23);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_1_i14);
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_1,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_1,
		f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_1_i16);
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_1,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_1,
		f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_1_i17);
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_1,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_1,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,5)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_1_i19);
	}
	MR_r3 = MR_tfield(3, MR_r2, 2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r2, 1);
	MR_sv(6) = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_1_i20);
	}
	}
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_1,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(8);
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_1,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_1,
		f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_1_i22);
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_1,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_1,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,7)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_1_i25);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r2, 1);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_1_i27);
	}
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(1, MR_tempr1, 5);
	MR_sv(5) = MR_tfield(1, MR_tempr1, 6);
	MR_r2 = MR_tfield(1, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_1,
		f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_1_i28);
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_1,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_1,
		f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_1_i29);
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_1,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 7);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 4) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 5) = MR_r1;
	MR_tfield(1, MR_tempr1, 6) = MR_sv(5);
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_r1, 1) = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_1,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,0)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_1_i32);
	}
	MR_sv(6) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(7) = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_1,
		f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_1_i33);
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_1,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_1,
		f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_1_i34);
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_1,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_r1, 1) = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_1,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(6) = MR_tfield(2, MR_tempr1, 0);
	MR_sv(7) = MR_tfield(2, MR_tempr1, 1);
	MR_r2 = MR_tfield(2, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_1,
		f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_1_i37);
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_1,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(2, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_r1, 1) = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_1,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,4)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_1_i48);
	}
	MR_sv(6) = MR_tfield(3, MR_r2, 1);
	MR_sv(7) = MR_tfield(3, MR_r2, 2);
	MR_r2 = MR_tfield(3, MR_r2, 3);
	MR_np_call_localret_ent(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_49_4_1,
		f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_1_i41);
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_95_101_120_112_114_95_95_91_50_93_95_49_4_1,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
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
	hlds__goal_util_module79();
}

static void mercury__hlds__goal_util_maybe_bunch_2(void)
{
	hlds__goal_util_module80();
	hlds__goal_util_module81();
	hlds__goal_util_module82();
	hlds__goal_util_module83();
	hlds__goal_util_module84();
	hlds__goal_util_module85();
	hlds__goal_util_module86();
	hlds__goal_util_module87();
	hlds__goal_util_module88();
	hlds__goal_util_module89();
	hlds__goal_util_module90();
	hlds__goal_util_module91();
	hlds__goal_util_module92();
	hlds__goal_util_module93();
	hlds__goal_util_module94();
	hlds__goal_util_module95();
	hlds__goal_util_module96();
	hlds__goal_util_module97();
	hlds__goal_util_module98();
	hlds__goal_util_module99();
	hlds__goal_util_module100();
	hlds__goal_util_module101();
	hlds__goal_util_module102();
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
#ifdef MR_THREADSCOPE
void mercury__hlds__goal_util__init_threadscope_string_table(void);
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
	mercury__hlds__goal_util_maybe_bunch_2();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__goal_util__type_ctor_info_attach_in_from_ground_term_0,
		hlds__goal_util__attach_in_from_ground_term_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__goal_util__type_ctor_info_goal_is_atomic_0,
		hlds__goal_util__goal_is_atomic_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__goal_util__type_ctor_info_is_leaf_0,
		hlds__goal_util__is_leaf_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__goal_util__type_ctor_info_maybe_transformed_goal_0,
		hlds__goal_util__maybe_transformed_goal_0_0);
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
		&mercury_data_hlds__goal_util__type_ctor_info_attach_in_from_ground_term_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__goal_util__type_ctor_info_goal_is_atomic_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__goal_util__type_ctor_info_is_leaf_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__goal_util__type_ctor_info_maybe_transformed_goal_0);
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

#ifdef MR_THREADSCOPE

void mercury__hlds__goal_util__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
