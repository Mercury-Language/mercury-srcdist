/*
** Automatically generated from `stm_expand.m'
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
INIT mercury__transform_hlds__stm_expand__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 539 "../library/io.int"
#include "io.mh"

#line 28 "transform_hlds.stm_expand.c"
#line 547 "../library/io.int"
#include "string.mh"

#line 32 "transform_hlds.stm_expand.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 36 "transform_hlds.stm_expand.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 40 "transform_hlds.stm_expand.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "transform_hlds.stm_expand.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 48 "transform_hlds.stm_expand.c"
#line 49 "transform_hlds.stm_expand.c"
#include "transform_hlds.stm_expand.mh"

#line 52 "transform_hlds.stm_expand.c"
#line 53 "transform_hlds.stm_expand.c"
#ifndef TRANSFORM_HLDS__STM_EXPAND_DECL_GUARD
#define TRANSFORM_HLDS__STM_EXPAND_DECL_GUARD

#line 57 "transform_hlds.stm_expand.c"
#line 58 "transform_hlds.stm_expand.c"

#endif
#line 61 "transform_hlds.stm_expand.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
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
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Integer f1;
	MR_Integer f2;
	MR_Word * f3;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

struct mercury_type_10 {
	MR_String f1;
	MR_Integer f2;
};
MR_STATIC_LINKAGE const struct mercury_type_10 mercury_common_10[];

struct mercury_type_11 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[11];
};
MR_STATIC_LINKAGE const struct mercury_type_11 mercury_common_11[];

struct mercury_type_12 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[6];
};
MR_STATIC_LINKAGE const struct mercury_type_12 mercury_common_12[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_transform_hlds__stm_expand__type_ctor_info_stm_goal_vars_0,
	mercury_data_transform_hlds__stm_expand__type_ctor_info_stm_info_0,
	mercury_data_transform_hlds__stm_expand__type_ctor_info_stm_new_pred_info_0;
MR_decl_label1(transform_hlds__stm_expand__IntroducedFrom__pred__create_nested_goal__778__1_7_0, 2)
MR_decl_label2(transform_hlds__stm_expand__IntroducedFrom__pred__create_or_else_end_branch__1791__1_6_0, 2,13)
MR_decl_label1(transform_hlds__stm_expand__IntroducedFrom__pred__create_wrapper_for_goal_list__1331__1_7_0, 2)
MR_decl_label2(transform_hlds__stm_expand__IntroducedFrom__pred__rename_var_in_wrapper_pred__2078__1_4_0, 3,2)
MR_decl_label5(transform_hlds__stm_expand__IntroducedFrom__pred__template_lock_and_validate_many__967__1_5_0, 2,4,5,13,14)
MR_decl_label2(transform_hlds__stm_expand__IntroducedFrom__pred__template_lock_and_validate_many__981__1_5_0, 2,3)
MR_decl_label1(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_111_114_95_101_108_115_101_95_101_110_100_95_98_114_97_110_99_104_95_95_49_55_55_57_95_95_49_95_95_91_49_93_95_48_4_0, 2)
MR_decl_label10(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0, 2,5,8,9,11,12,13,15,7,25)
MR_decl_label10(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0, 27,29,30,31,32,33,34,35,36,37)
MR_decl_label10(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0, 38,39,40,41,42,44,45,46,47,48)
MR_decl_label5(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0, 50,51,52,54,58)
MR_decl_label4(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_50_95_95_91_51_93_95_48_6_0, 2,8,9,5)
MR_decl_label4(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_51_95_95_91_51_93_95_48_6_0, 2,8,9,5)
MR_decl_label8(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_109_95_99_114_101_97_116_101_95_97_99_116_117_97_108_95_103_111_97_108_95_95_91_53_93_95_48_10_0, 4,3,7,10,16,17,6,2)
MR_decl_label4(transform_hlds__stm_expand__apply_varset_to_preds_11_0, 3,4,5,6)
MR_decl_label10(transform_hlds__stm_expand__calc_pred_variables_9_0, 2,4,5,6,7,8,9,10,11,12)
MR_decl_label1(transform_hlds__stm_expand__calc_pred_variables_9_0, 13)
MR_decl_label4(transform_hlds__stm_expand__calc_pred_variables_list_9_0, 2,12,13,6)
MR_decl_label1(transform_hlds__stm_expand__commit_new_pred_3_0, 2)
MR_decl_label3(transform_hlds__stm_expand__common_goal_vars_from_list_2_0, 5,6,7)
MR_decl_label10(transform_hlds__stm_expand__construct_output_7_0, 3,4,5,8,9,7,13,14,15,17)
MR_decl_label5(transform_hlds__stm_expand__construct_output_7_0, 12,19,20,21,23)
MR_decl_label5(transform_hlds__stm_expand__create_aux_variable_5_0, 3,4,5,6,8)
MR_decl_label2(transform_hlds__stm_expand__create_aux_variable_assignment_7_0, 2,3)
MR_decl_label3(transform_hlds__stm_expand__create_aux_variable_stm_5_0, 3,4,6)
MR_decl_label10(transform_hlds__stm_expand__create_cloned_pred_10_0, 3,4,5,6,7,8,11,10,9,12)
MR_decl_label10(transform_hlds__stm_expand__create_cloned_pred_10_0, 13,14,15,16,17,18,19,20,21,22)
MR_decl_label10(transform_hlds__stm_expand__create_cloned_pred_10_0, 23,24,25,26,27,28,29,30,31,33)
MR_decl_label10(transform_hlds__stm_expand__create_cloned_pred_10_0, 35,36,37,38,39,40,41,42,43,45)
MR_decl_label5(transform_hlds__stm_expand__create_cloned_pred_10_0, 46,47,48,49,50)
MR_decl_label7(transform_hlds__stm_expand__create_closure_8_0, 2,3,6,7,14,15,16)
MR_decl_label3(transform_hlds__stm_expand__create_if_then_else_9_0, 4,5,6)
MR_decl_label10(transform_hlds__stm_expand__create_or_else_branch_13_0, 2,3,4,5,7,8,10,11,12,16)
MR_decl_label10(transform_hlds__stm_expand__create_or_else_branch_13_0, 17,18,19,23,24,25,33,34,35,53)
MR_decl_label10(transform_hlds__stm_expand__create_or_else_branch_13_0, 54,55,56,65,66,69,70,72,73,74)
MR_decl_label10(transform_hlds__stm_expand__create_or_else_branch_13_0, 77,78,79,81,82,84,87,88,89,92)
MR_decl_label4(transform_hlds__stm_expand__create_or_else_branch_13_0, 93,95,99,104)
MR_decl_label3(transform_hlds__stm_expand__create_or_else_branches_13_0, 2,10,6)
MR_decl_label10(transform_hlds__stm_expand__create_or_else_end_branch_7_0, 3,5,8,9,10,11,12,13,14,16)
MR_decl_label10(transform_hlds__stm_expand__create_or_else_end_branch_7_0, 17,20,21,25,26,27,28,30,31,34)
MR_decl_label4(transform_hlds__stm_expand__create_or_else_end_branch_7_0, 35,39,40,41)
MR_decl_label5(transform_hlds__stm_expand__create_or_else_inner_stm_vars_4_0, 2,5,7,8,4)
MR_decl_label10(transform_hlds__stm_expand__create_or_else_pred_8_0, 3,4,5,6,9,8,13,7,19,20)
MR_decl_label10(transform_hlds__stm_expand__create_or_else_pred_8_0, 21,22,25,26,27,28,31,32,33,34)
MR_decl_label9(transform_hlds__stm_expand__create_or_else_pred_8_0, 35,37,38,40,43,44,45,46,47)
MR_decl_label10(transform_hlds__stm_expand__create_or_else_pred_2_8_0, 2,3,4,5,6,8,9,10,11,13)
MR_decl_label10(transform_hlds__stm_expand__create_or_else_pred_2_8_0, 14,16,17,18,19,20,21,22,23,24)
MR_decl_label1(transform_hlds__stm_expand__create_or_else_pred_2_8_0, 28)
MR_decl_label7(transform_hlds__stm_expand__create_plain_conj_2_0, 3,4,5,6,7,8,9)
MR_decl_label10(transform_hlds__stm_expand__create_post_wrapper_goal_11_0, 2,3,4,5,7,8,9,10,11,13)
MR_decl_label10(transform_hlds__stm_expand__create_post_wrapper_goal_11_0, 14,15,16,17,26,27,30,31,32,33)
MR_decl_label10(transform_hlds__stm_expand__create_post_wrapper_goal_11_0, 36,37,40,44,45,46,51,55,56,61)
MR_decl_label9(transform_hlds__stm_expand__create_post_wrapper_goal_11_0, 62,58,63,64,66,70,57,72,73)
MR_decl_label5(transform_hlds__stm_expand__create_promise_purity_scope_3_0, 2,3,4,5,6)
MR_decl_label10(transform_hlds__stm_expand__create_retry_handler_branch_5_0, 2,4,5,6,7,8,9,10,14,15)
MR_decl_label2(transform_hlds__stm_expand__create_retry_handler_branch_5_0, 18,19)
MR_decl_label10(transform_hlds__stm_expand__create_rollback_handler_goal_10_0, 2,3,4,5,6,10,11,12,13,17)
MR_decl_label10(transform_hlds__stm_expand__create_rollback_handler_goal_10_0, 18,19,20,21,22,24,25,30,31,32)
MR_decl_label9(transform_hlds__stm_expand__create_rollback_handler_goal_10_0, 51,52,53,54,59,64,65,66,67)
MR_decl_label10(transform_hlds__stm_expand__create_rollback_pred_6_0, 5,6,7,9,10,11,12,13,14,15)
MR_decl_label3(transform_hlds__stm_expand__create_rollback_pred_6_0, 16,17,18)
MR_decl_label10(transform_hlds__stm_expand__create_rollback_pred_2_8_0, 5,6,7,9,12,11,15,10,19,20)
MR_decl_label10(transform_hlds__stm_expand__create_rollback_pred_2_8_0, 22,23,25,26,28,29,30,31,32,33)
MR_decl_label1(transform_hlds__stm_expand__create_simple_call_12_0, 2)
MR_decl_label10(transform_hlds__stm_expand__create_simple_post_wrapper_goal_11_0, 2,5,6,8,11,12,3,15,16,17)
MR_decl_label3(transform_hlds__stm_expand__create_simple_post_wrapper_goal_11_0, 18,19,20)
MR_decl_label1(transform_hlds__stm_expand__create_simple_wrapper_pred_8_0, 2)
MR_decl_label10(transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_0, 2,3,4,9,10,11,15,16,17,18)
MR_decl_label10(transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_0, 22,23,24,25,27,29,31,26,32,33)
MR_decl_label6(transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_0, 37,38,39,40,41,42)
MR_decl_label3(transform_hlds__stm_expand__create_switch_disjunction_7_0, 3,4,6)
MR_decl_label10(transform_hlds__stm_expand__create_test_on_exception_7_0, 2,4,5,7,8,9,10,11,13,18)
MR_decl_label10(transform_hlds__stm_expand__create_test_on_exception_7_0, 19,22,23,24,25,26,27,28,31,32)
MR_decl_label1(transform_hlds__stm_expand__create_test_on_exception_7_0, 33)
MR_decl_label10(transform_hlds__stm_expand__create_top_level_pred_8_0, 2,3,5,6,7,8,11,12,13,14)
MR_decl_label10(transform_hlds__stm_expand__create_top_level_pred_8_0, 17,18,19,20,23,24,25,26,27,29)
MR_decl_label4(transform_hlds__stm_expand__create_top_level_pred_8_0, 32,33,34,35)
MR_decl_label10(transform_hlds__stm_expand__create_validate_exception_goal_7_0, 2,3,4,6,9,10,12,13,14,19)
MR_decl_label4(transform_hlds__stm_expand__create_validate_exception_goal_7_0, 20,23,24,25)
MR_decl_label5(transform_hlds__stm_expand__create_var_test_6_0, 9,12,13,14,15)
MR_decl_label5(transform_hlds__stm_expand__create_var_unify_6_0, 9,12,13,14,15)
MR_decl_label5(transform_hlds__stm_expand__create_var_unify_stm_6_0, 10,13,14,15,16)
MR_decl_label7(transform_hlds__stm_expand__create_wrapper_for_goal_list_8_0, 6,7,5,8,9,10,3)
MR_decl_label1(transform_hlds__stm_expand__create_wrapper_pred_8_0, 2)
MR_decl_label10(transform_hlds__stm_expand__create_wrapper_pred_2_9_0, 2,3,4,9,10,11,15,16,17,18)
MR_decl_label10(transform_hlds__stm_expand__create_wrapper_pred_2_9_0, 22,23,24,25,27,29,31,26,32,33)
MR_decl_label6(transform_hlds__stm_expand__create_wrapper_pred_2_9_0, 37,38,39,40,41,42)
MR_decl_label10(transform_hlds__stm_expand__deconstruct_output_7_0, 3,4,5,9,10,7,15,16,18,14)
MR_decl_label8(transform_hlds__stm_expand__deconstruct_output_7_0, 19,20,21,24,25,27,28,31)
MR_decl_label6(transform_hlds__stm_expand__get_input_output_modes_3_0, 3,4,5,7,8,10)
MR_decl_label5(transform_hlds__stm_expand__get_input_output_types_4_0, 2,4,5,7,9)
MR_decl_label2(transform_hlds__stm_expand__get_input_output_varlist_3_0, 3,4)
MR_decl_label2(transform_hlds__stm_expand__make_return_type_2_0, 3,6)
MR_decl_label3(transform_hlds__stm_expand__make_type_info_5_0, 2,3,4)
MR_decl_label4(transform_hlds__stm_expand__map3_in_foldl__ho1_7_0, 2,10,11,6)
MR_decl_label10(transform_hlds__stm_expand__move_variables_to_new_pred_9_0, 2,3,4,5,7,8,13,15,14,18)
MR_decl_label6(transform_hlds__stm_expand__move_variables_to_new_pred_9_0, 19,21,22,23,24,25)
MR_decl_label8(transform_hlds__stm_expand__new_pred_set_goal_3_0, 2,3,4,5,7,8,9,10)
MR_decl_label10(transform_hlds__stm_expand__order_vars_into_groups_2_10_0, 58,3,4,5,7,9,6,13,15,12)
MR_decl_label4(transform_hlds__stm_expand__order_vars_into_groups_2_10_0, 19,21,18,63)
MR_decl_label10(transform_hlds__stm_expand__remove_tail_4_0, 123,5,13,15,6,7,28,30,21,22)
MR_decl_label10(transform_hlds__stm_expand__rename_var_in_wrapper_pred_8_0, 2,3,4,5,7,8,9,10,11,13)
MR_decl_label4(transform_hlds__stm_expand__rename_var_in_wrapper_pred_8_0, 14,15,16,17)
MR_decl_label2(transform_hlds__stm_expand__run_quantification_over_pred_2_0, 2,3)
MR_decl_label1(transform_hlds__stm_expand__set_head_vars_3_0, 2)
MR_decl_label5(transform_hlds__stm_expand__stm_process_conj_5_0, 19,4,5,6,7)
MR_decl_label3(transform_hlds__stm_expand__stm_process_disj_5_0, 17,4,5)
MR_decl_label10(transform_hlds__stm_expand__stm_process_goal_5_0, 3,5,4,9,8,13,12,17,16,22)
MR_decl_label10(transform_hlds__stm_expand__stm_process_goal_5_0, 26,30,34,193,38,87,52,20,58,59)
MR_decl_label10(transform_hlds__stm_expand__stm_process_goal_5_0, 61,62,63,64,57,67,66,69,55,72)
MR_decl_label5(transform_hlds__stm_expand__stm_process_if_then_else_9_0, 2,3,4,5,6)
MR_decl_label2(transform_hlds__stm_expand__stm_process_module_2_0, 2,4)
MR_decl_label2(transform_hlds__stm_expand__stm_process_pred_3_0, 2,3)
MR_decl_label10(transform_hlds__stm_expand__stm_process_proc_4_0, 2,3,4,5,6,7,9,10,12,13)
MR_decl_label7(transform_hlds__stm_expand__stm_process_proc_4_0, 14,11,15,16,17,18,19)
MR_decl_label3(transform_hlds__stm_expand__stm_process_switch_cases_5_0, 18,4,5)
MR_decl_label8(transform_hlds__stm_expand__strip_goal_calls_6_0, 7,10,11,12,13,14,6,2)
MR_decl_label10(transform_hlds__stm_expand__template_if_exceptres_is_cons_8_0, 2,4,5,7,8,20,21,22,26,27)
MR_decl_label4(transform_hlds__stm_expand__template_if_exceptres_is_cons_8_0, 28,29,31,35)
MR_decl_label10(transform_hlds__stm_expand__template_lock_and_validate_7_0, 2,4,5,6,7,8,16,17,18,20)
MR_decl_label5(transform_hlds__stm_expand__template_lock_and_validate_7_0, 24,26,30,31,32)
MR_decl_label10(transform_hlds__stm_expand__template_lock_and_validate_many_7_0, 2,3,5,6,7,8,11,13,14,15)
MR_decl_label8(transform_hlds__stm_expand__template_lock_and_validate_many_7_0, 21,22,17,23,24,25,30,31)
MR_decl_label6(__Unify___transform_hlds__stm_expand__stm_goal_vars_0_0, 5,7,9,11,15,1)
MR_decl_label5(__Unify___transform_hlds__stm_expand__stm_info_0_0, 4,6,8,10,1)
MR_decl_label6(__Unify___transform_hlds__stm_expand__stm_new_pred_info_0_0, 4,6,8,10,12,1)
MR_decl_label7(__Compare___transform_hlds__stm_expand__stm_goal_vars_0_0, 3,2,6,11,16,20,63)
MR_decl_label9(__Compare___transform_hlds__stm_expand__stm_info_0_0, 3,2,5,9,13,17,21,25,61)
MR_decl_label9(__Compare___transform_hlds__stm_expand__stm_new_pred_info_0_0, 3,2,5,9,13,17,21,25,61)
MR_def_extern_entry(transform_hlds__stm_expand__stm_process_module_2_0)
MR_def_extern_entry(transform_hlds__stm_expand__stm_process_pred_3_0)
MR_decl_static(transform_hlds__stm_expand__common_goal_vars_from_list_2_0)
MR_decl_static(fn__transform_hlds__stm_expand__this_file_0_0)
MR_decl_static(transform_hlds__stm_expand__order_vars_into_groups_2_10_0)
MR_decl_static(transform_hlds__stm_expand__calc_pred_variables_9_0)
MR_decl_static(transform_hlds__stm_expand__calc_pred_variables_list_9_0)
MR_decl_static(transform_hlds__stm_expand__remove_tail_4_0)
MR_decl_static(transform_hlds__stm_expand__strip_goal_calls_6_0)
MR_decl_static(transform_hlds__stm_expand__create_aux_variable_5_0)
MR_decl_static(transform_hlds__stm_expand__create_aux_variable_assignment_7_0)
MR_decl_static(transform_hlds__stm_expand__create_var_test_6_0)
MR_decl_static(transform_hlds__stm_expand__create_simple_call_12_0)
MR_decl_static(transform_hlds__stm_expand__create_if_then_else_9_0)
MR_decl_static(transform_hlds__stm_expand__create_plain_conj_2_0)
MR_decl_static(transform_hlds__stm_expand__template_if_exceptres_is_cons_8_0)
MR_decl_static(transform_hlds__stm_expand__make_type_info_5_0)
MR_decl_static(transform_hlds__stm_expand__get_input_output_varlist_3_0)
MR_decl_static(transform_hlds__stm_expand__get_input_output_types_4_0)
MR_decl_static(transform_hlds__stm_expand__deconstruct_output_7_0)
MR_decl_static(transform_hlds__stm_expand__create_closure_8_0)
MR_decl_static(transform_hlds__stm_expand__create_switch_disjunction_7_0)
MR_decl_static(transform_hlds__stm_expand__get_input_output_modes_3_0)
MR_decl_static(transform_hlds__stm_expand__create_or_else_branch_13_0)
MR_decl_static(transform_hlds__stm_expand__create_or_else_branches_13_0)
MR_decl_static(transform_hlds__stm_expand__create_or_else_inner_stm_vars_4_0)
MR_decl_static(transform_hlds__stm_expand__template_lock_and_validate_many_7_0)
MR_decl_static(transform_hlds__stm_expand__create_or_else_end_branch_7_0)
MR_decl_static(transform_hlds__stm_expand__create_promise_purity_scope_3_0)
MR_decl_static(transform_hlds__stm_expand__run_quantification_over_pred_2_0)
MR_decl_static(transform_hlds__stm_expand__new_pred_set_goal_3_0)
MR_decl_static(transform_hlds__stm_expand__create_or_else_pred_2_8_0)
MR_decl_static(transform_hlds__stm_expand__make_return_type_2_0)
MR_decl_static(transform_hlds__stm_expand__create_cloned_pred_10_0)
MR_decl_static(transform_hlds__stm_expand__set_head_vars_3_0)
MR_decl_static(transform_hlds__stm_expand__commit_new_pred_3_0)
MR_decl_static(transform_hlds__stm_expand__create_or_else_pred_8_0)
MR_decl_static(transform_hlds__stm_expand__create_aux_variable_stm_5_0)
MR_decl_static(transform_hlds__stm_expand__create_var_unify_stm_6_0)
MR_decl_static(transform_hlds__stm_expand__template_lock_and_validate_7_0)
MR_decl_static(transform_hlds__stm_expand__create_validate_exception_goal_7_0)
MR_decl_static(transform_hlds__stm_expand__create_retry_handler_branch_5_0)
MR_decl_static(transform_hlds__stm_expand__create_test_on_exception_7_0)
MR_decl_static(transform_hlds__stm_expand__create_rollback_handler_goal_10_0)
MR_decl_static(transform_hlds__stm_expand__move_variables_to_new_pred_9_0)
MR_decl_static(transform_hlds__stm_expand__create_var_unify_6_0)
MR_decl_static(transform_hlds__stm_expand__construct_output_7_0)
MR_decl_static(transform_hlds__stm_expand__create_post_wrapper_goal_11_0)
MR_decl_static(transform_hlds__stm_expand__rename_var_in_wrapper_pred_8_0)
MR_decl_static(transform_hlds__stm_expand__get_pred_proc_id_2_0)
MR_decl_static(transform_hlds__stm_expand__create_wrapper_pred_2_9_0)
MR_decl_static(transform_hlds__stm_expand__create_wrapper_pred_8_0)
MR_decl_static(transform_hlds__stm_expand__create_wrapper_for_goal_list_8_0)
MR_decl_static(transform_hlds__stm_expand__update_new_pred_info_3_0)
MR_decl_static(transform_hlds__stm_expand__create_rollback_pred_2_8_0)
MR_decl_static(transform_hlds__stm_expand__create_rollback_pred_6_0)
MR_decl_static(transform_hlds__stm_expand__create_top_level_pred_8_0)
MR_decl_static(transform_hlds__stm_expand__stm_process_goal_5_0)
MR_decl_static(transform_hlds__stm_expand__stm_process_conj_5_0)
MR_decl_static(transform_hlds__stm_expand__stm_process_disj_5_0)
MR_decl_static(transform_hlds__stm_expand__stm_process_if_then_else_9_0)
MR_decl_static(transform_hlds__stm_expand__stm_process_switch_cases_5_0)
MR_decl_static(transform_hlds__stm_expand__stm_process_proc_4_0)
MR_decl_static(transform_hlds__stm_expand__apply_varset_to_preds_11_0)
MR_decl_static(transform_hlds__stm_expand__create_simple_post_wrapper_goal_11_0)
MR_decl_static(transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_0)
MR_decl_static(transform_hlds__stm_expand__create_simple_wrapper_pred_8_0)
MR_decl_static(__Unify___transform_hlds__stm_expand__stm_goal_vars_0_0)
MR_decl_static(__Compare___transform_hlds__stm_expand__stm_goal_vars_0_0)
MR_decl_static(__Unify___transform_hlds__stm_expand__stm_info_0_0)
MR_decl_static(__Compare___transform_hlds__stm_expand__stm_info_0_0)
MR_decl_static(__Unify___transform_hlds__stm_expand__stm_new_pred_info_0_0)
MR_decl_static(__Compare___transform_hlds__stm_expand__stm_new_pred_info_0_0)
MR_decl_static(transform_hlds__stm_expand__IntroducedFrom__pred__common_goal_vars_from_list__563__1_2_0)
MR_decl_static(transform_hlds__stm_expand__IntroducedFrom__pred__create_nested_goal__778__1_7_0)
MR_decl_static(transform_hlds__stm_expand__IntroducedFrom__pred__template_lock_and_validate_many__967__1_5_0)
MR_decl_static(transform_hlds__stm_expand__IntroducedFrom__pred__template_lock_and_validate_many__981__1_5_0)
MR_decl_static(transform_hlds__stm_expand__IntroducedFrom__pred__create_wrapper_for_goal_list__1331__1_7_0)
MR_decl_static(transform_hlds__stm_expand__IntroducedFrom__pred__create_or_else_end_branch__1779__1_4_0)
MR_decl_static(transform_hlds__stm_expand__IntroducedFrom__pred__create_or_else_end_branch__1791__1_6_0)
MR_decl_static(transform_hlds__stm_expand__IntroducedFrom__pred__rename_var_in_wrapper_pred__2078__1_4_0)
MR_decl_static(transform_hlds__stm_expand__IntroducedFrom__pred__get_input_output_types__2586__1_3_0)
MR_decl_static(transform_hlds__stm_expand__IntroducedFrom__pred__get_input_output_types__2587__1_3_0)
MR_decl_static(transform_hlds__stm_expand__IntroducedFrom__pred__get_input_output_modes__2604__1_3_0)
MR_decl_static(transform_hlds__stm_expand__IntroducedFrom__pred__get_input_output_modes__2605__1_3_0)
MR_decl_static(transform_hlds__stm_expand__map3_in_foldl__ho1_7_0)
MR_decl_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_109_95_99_114_101_97_116_101_95_97_99_116_117_97_108_95_103_111_97_108_95_95_91_53_93_95_48_10_0)
MR_decl_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0)
MR_decl_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_111_114_95_101_108_115_101_95_101_110_100_95_98_114_97_110_99_104_95_95_49_55_55_57_95_95_49_95_95_91_49_93_95_48_4_0)
MR_decl_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_103_101_116_95_105_110_112_117_116_95_111_117_116_112_117_116_95_109_111_100_101_115_95_95_50_54_48_52_95_95_49_95_95_91_50_93_95_48_3_0)
MR_decl_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_103_101_116_95_105_110_112_117_116_95_111_117_116_112_117_116_95_109_111_100_101_115_95_95_50_54_48_53_95_95_49_95_95_91_50_93_95_48_3_0)
MR_decl_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_50_95_95_91_51_93_95_48_6_0)
MR_decl_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_51_95_95_91_51_93_95_48_6_0)

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__stm_expand__stm_process_module_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__stm_expand__get_input_output_types_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__stm_expand__get_input_output_types_4_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__stm_expand__get_input_output_modes_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__stm_expand__get_input_output_modes_3_0_2;
static const struct mercury_type_0 mercury_common_0[5] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__stm_expand__stm_process_module_2_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__stm_expand__get_input_output_types_4_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(8,0),
MR_COMMON(3,6),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__stm_expand__get_input_output_types_4_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(8,0),
MR_COMMON(3,6),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__stm_expand__get_input_output_modes_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode),
MR_COMMON(3,6),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__stm_expand__get_input_output_modes_3_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode),
MR_COMMON(3,6),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode)
}
},
};

static const struct mercury_type_1 mercury_common_1[9] =
{
{
MR_COMMON(0,0),
MR_ENTRY_AP(transform_hlds__stm_expand__stm_process_pred_3_0),
0
},
{
MR_COMMON(4,0),
MR_ENTRY_AP(transform_hlds__stm_expand__IntroducedFrom__pred__common_goal_vars_from_list__563__1_2_0),
0
},
{
MR_COMMON(9,0),
MR_ENTRY_AP(transform_hlds__stm_expand__IntroducedFrom__pred__template_lock_and_validate_many__967__1_5_0),
0
},
{
MR_COMMON(2,1),
MR_ENTRY_AP(transform_hlds__stm_expand__IntroducedFrom__pred__create_or_else_end_branch__1779__1_4_0),
0
},
{
MR_COMMON(11,0),
MR_ENTRY_AP(transform_hlds__stm_expand__apply_varset_to_preds_11_0),
0
},
{
MR_COMMON(4,1),
MR_ENTRY_AP(transform_hlds__stm_expand__IntroducedFrom__pred__common_goal_vars_from_list__563__1_2_0),
0
},
{
MR_COMMON(4,2),
MR_ENTRY_AP(transform_hlds__stm_expand__IntroducedFrom__pred__common_goal_vars_from_list__563__1_2_0),
0
},
{
MR_COMMON(12,0),
MR_ENTRY_AP(transform_hlds__stm_expand__strip_goal_calls_6_0),
0
},
{
MR_COMMON(12,1),
MR_ENTRY_AP(transform_hlds__stm_expand__strip_goal_calls_6_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__stm_expand__stm_process_pred_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__stm_expand__create_or_else_end_branch_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__stm_expand__type_ctor_info_stm_new_pred_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__stm_expand__rename_var_in_wrapper_pred_8_0_1;
static const struct mercury_type_2 mercury_common_2[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__stm_expand__stm_process_pred_3_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__stm_expand__create_or_else_end_branch_7_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(3,6),
MR_COMMON(3,6),
MR_CTOR0_ADDR(transform_hlds__stm_expand, stm_new_pred_info),
MR_CTOR0_ADDR(transform_hlds__stm_expand, stm_new_pred_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__stm_expand__rename_var_in_wrapper_pred_8_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(3,6),
MR_COMMON(3,6),
MR_COMMON(3,6),
MR_COMMON(3,6)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;
static const struct mercury_type_3 mercury_common_3[9] =
{
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_TAG_COMMON(0,3,0)
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
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_COMMON(3,2)
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
MR_CTOR1_ADDR(maybe, maybe),
MR_TAG_COMMON(0,3,0)
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
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__stm_expand__common_goal_vars_from_list_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__stm_expand__type_ctor_info_stm_goal_vars_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__stm_expand__create_rollback_pred_2_8_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__stm_expand__create_rollback_pred_6_0_1;
static const struct mercury_type_4 mercury_common_4[3] =
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__stm_expand__common_goal_vars_from_list_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(transform_hlds__stm_expand, stm_goal_vars),
MR_COMMON(3,3)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__stm_expand__create_rollback_pred_2_8_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(transform_hlds__stm_expand, stm_goal_vars),
MR_COMMON(3,3)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__stm_expand__create_rollback_pred_6_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(transform_hlds__stm_expand, stm_goal_vars),
MR_COMMON(3,3)
},
};

static const struct mercury_type_5 mercury_common_5[24] =
{
{
MR_string_const("UnivPayload", 11)
},
{
MR_string_const("RollbackExcpt", 13)
},
{
MR_string_const("BoringResult", 12)
},
{
MR_string_const("SucessResult", 12)
},
{
MR_string_const("Closure", 7)
},
{
MR_string_const("InnerSTM0", 9)
},
{
MR_string_const("ExcptRes", 8)
},
{
MR_string_const("ExceptUnivVar", 13)
},
{
MR_string_const("InnSTM", 6)
},
{
MR_string_const("IsValidConst", 12)
},
{
MR_string_const("RetryCons", 9)
},
{
MR_string_const("RollbackCons", 12)
},
{
MR_string_const("STMDI", 5)
},
{
MR_string_const("STMUO", 5)
},
{
MR_string_const("ValidResult", 11)
},
{
MR_string_const("ExceptionResult", 15)
},
{
MR_string_const("Stm_Expand_IsValid", 18)
},
{
MR_string_const("Stm_Expand_Rollback", 19)
},
{
MR_string_const("NewUO", 5)
},
{
MR_string_const("ResultVar", 9)
},
{
MR_string_const("STM0", 4)
},
{
MR_string_const("STM", 3)
},
{
MR_string_const("res", 3)
},
{
MR_string_const("InterSTM", 8)
},
};

static const struct mercury_type_6 mercury_common_6[2] =
{
{
2
},
{
0
},
};

static const struct mercury_type_7 mercury_common_7[3] =
{
{
1,
0,
MR_tbmkword(0, 0)
},
{
1,
1,
MR_tbmkword(0, 0)
},
{
1,
3,
MR_tbmkword(0, 0)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
static const struct mercury_type_8 mercury_common_8[4] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(3,2),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_TAG_COMMON(0,3,0),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_TAG_COMMON(0,3,0),
MR_TAG_COMMON(0,3,0)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(3,2),
MR_COMMON(3,2)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__stm_expand__template_lock_and_validate_many_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__stm_expand__template_lock_and_validate_many_7_0_2;
static const struct mercury_type_9 mercury_common_9[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__stm_expand__template_lock_and_validate_many_7_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(3,6),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(3,6),
MR_CTOR0_ADDR(transform_hlds__stm_expand, stm_new_pred_info),
MR_CTOR0_ADDR(transform_hlds__stm_expand, stm_new_pred_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__stm_expand__template_lock_and_validate_many_7_0_2,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(3,6),
MR_COMMON(3,6),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(transform_hlds__stm_expand, stm_new_pred_info),
MR_CTOR0_ADDR(transform_hlds__stm_expand, stm_new_pred_info)
}
},
};

static const struct mercury_type_10 mercury_common_10[1] =
{
{
MR_string_const("--temp-context--", 16),
999
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__stm_expand__move_variables_to_new_pred_9_0_1;
static const struct mercury_type_11 mercury_common_11[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__stm_expand__move_variables_to_new_pred_9_0_1,
(MR_Word *) (MR_Integer) 0
},
11,
{
MR_COMMON(3,6),
MR_COMMON(3,8),
MR_COMMON(3,8),
MR_COMMON(8,0),
MR_COMMON(8,0),
MR_COMMON(3,8),
MR_COMMON(3,8),
MR_COMMON(8,0),
MR_COMMON(8,0),
MR_COMMON(8,3),
MR_COMMON(8,3)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_109_95_99_114_101_97_116_101_95_97_99_116_117_97_108_95_103_111_97_108_95_95_91_53_93_95_48_10_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0_1;
static const struct mercury_type_12 mercury_common_12[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_109_95_99_114_101_97_116_101_95_97_99_116_117_97_108_95_103_111_97_108_95_95_91_53_93_95_48_10_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(3,6),
MR_COMMON(3,6),
MR_COMMON(3,6),
MR_COMMON(3,6)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(3,6),
MR_COMMON(3,6),
MR_COMMON(3,6),
MR_COMMON(3,6)
}
},
};

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_set_ordlist__type_ctor_info_set_ordlist_1,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

const MR_PseudoTypeInfo mercury_data_transform_hlds__stm_expand__field_types_stm_goal_vars_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

const MR_ConstString mercury_data_transform_hlds__stm_expand__field_names_stm_goal_vars_0_0[] = {
	"vars_input",
	"vars_local",
	"vars_output",
	"vars_innerDI",
	"vars_innerUO"
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__stm_expand__du_functor_desc_stm_goal_vars_0_0 = {
	"stm_goal_vars",
	5,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__stm_expand__field_types_stm_goal_vars_0_0,
	mercury_data_transform_hlds__stm_expand__field_names_stm_goal_vars_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__stm_expand__du_stag_ordered_stm_goal_vars_0_0[] = {
	&mercury_data_transform_hlds__stm_expand__du_functor_desc_stm_goal_vars_0_0

};

const MR_DuPtagLayout mercury_data_transform_hlds__stm_expand__du_ptag_ordered_stm_goal_vars_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__stm_expand__du_stag_ordered_stm_goal_vars_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__stm_expand__du_name_ordered_stm_goal_vars_0[] = {
	&mercury_data_transform_hlds__stm_expand__du_functor_desc_stm_goal_vars_0_0
};

const MR_Integer mercury_data_transform_hlds__stm_expand__functor_number_map_stm_goal_vars_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__stm_expand__type_ctor_info_stm_goal_vars_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__stm_expand__stm_goal_vars_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__stm_expand__stm_goal_vars_0_0)),
	"transform_hlds.stm_expand",
	"stm_goal_vars",
	{ (void *)mercury_data_transform_hlds__stm_expand__du_name_ordered_stm_goal_vars_0 },
	{ (void *)mercury_data_transform_hlds__stm_expand__du_ptag_ordered_stm_goal_vars_0 },
	1,
	4,
	mercury_data_transform_hlds__stm_expand__functor_number_map_stm_goal_vars_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;

const MR_PseudoTypeInfo mercury_data_transform_hlds__stm_expand__field_types_stm_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_module__type_ctor_info_module_info_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_transform_hlds__stm_expand__field_names_stm_info_0_0[] = {
	"stm_info_module_info",
	"stm_info_pred_id",
	"stm_info_proc_id",
	"stm_info_proc_info",
	"stm_info_pred_info",
	"stm_info_requalify",
	"stm_info_expand_id"
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__stm_expand__du_functor_desc_stm_info_0_0 = {
	"stm_info",
	7,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__stm_expand__field_types_stm_info_0_0,
	mercury_data_transform_hlds__stm_expand__field_names_stm_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__stm_expand__du_stag_ordered_stm_info_0_0[] = {
	&mercury_data_transform_hlds__stm_expand__du_functor_desc_stm_info_0_0

};

const MR_DuPtagLayout mercury_data_transform_hlds__stm_expand__du_ptag_ordered_stm_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__stm_expand__du_stag_ordered_stm_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__stm_expand__du_name_ordered_stm_info_0[] = {
	&mercury_data_transform_hlds__stm_expand__du_functor_desc_stm_info_0_0
};

const MR_Integer mercury_data_transform_hlds__stm_expand__functor_number_map_stm_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__stm_expand__type_ctor_info_stm_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__stm_expand__stm_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__stm_expand__stm_info_0_0)),
	"transform_hlds.stm_expand",
	"stm_info",
	{ (void *)mercury_data_transform_hlds__stm_expand__du_name_ordered_stm_info_0 },
	{ (void *)mercury_data_transform_hlds__stm_expand__du_ptag_ordered_stm_info_0 },
	1,
	4,
	mercury_data_transform_hlds__stm_expand__functor_number_map_stm_info_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;

const MR_PseudoTypeInfo mercury_data_transform_hlds__stm_expand__field_types_stm_new_pred_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_module__type_ctor_info_module_info_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0,
	(MR_PseudoTypeInfo) &mercury_data_term__type_ctor_info_context_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_transform_hlds__stm_expand__field_names_stm_new_pred_info_0_0[] = {
	"new_pred_module_info",
	"new_pred_pred_id",
	"new_pred_proc_id",
	"new_pred_pred_info",
	"new_pred_proc_info",
	"new_pred_context",
	"new_pred_var_cnt"
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__stm_expand__du_functor_desc_stm_new_pred_info_0_0 = {
	"stm_new_pred_info",
	7,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__stm_expand__field_types_stm_new_pred_info_0_0,
	mercury_data_transform_hlds__stm_expand__field_names_stm_new_pred_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__stm_expand__du_stag_ordered_stm_new_pred_info_0_0[] = {
	&mercury_data_transform_hlds__stm_expand__du_functor_desc_stm_new_pred_info_0_0

};

const MR_DuPtagLayout mercury_data_transform_hlds__stm_expand__du_ptag_ordered_stm_new_pred_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__stm_expand__du_stag_ordered_stm_new_pred_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__stm_expand__du_name_ordered_stm_new_pred_info_0[] = {
	&mercury_data_transform_hlds__stm_expand__du_functor_desc_stm_new_pred_info_0_0
};

const MR_Integer mercury_data_transform_hlds__stm_expand__functor_number_map_stm_new_pred_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__stm_expand__type_ctor_info_stm_new_pred_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__stm_expand__stm_new_pred_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__stm_expand__stm_new_pred_info_0_0)),
	"transform_hlds.stm_expand",
	"stm_new_pred_info",
	{ (void *)mercury_data_transform_hlds__stm_expand__du_name_ordered_stm_new_pred_info_0 },
	{ (void *)mercury_data_transform_hlds__stm_expand__du_ptag_ordered_stm_new_pred_info_0 },
	1,
	4,
	mercury_data_transform_hlds__stm_expand__functor_number_map_stm_new_pred_info_0
};


static const MR_UserClosureId
mercury_data__closure_layout__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0_1 = {
{
MR_PREDICATE,
"transform_hlds.stm_expand",
"transform_hlds.stm_expand",
"strip_goal_calls",
6,
0
},
"transform_hlds.stm_expand",
"stm_expand.m",
735,
"d1;c13;"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_109_95_99_114_101_97_116_101_95_97_99_116_117_97_108_95_103_111_97_108_95_95_91_53_93_95_48_10_0_1 = {
{
MR_PREDICATE,
"transform_hlds.stm_expand",
"transform_hlds.stm_expand",
"strip_goal_calls",
6,
0
},
"transform_hlds.stm_expand",
"stm_expand.m",
803,
"d1;c13;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__stm_expand__create_rollback_pred_6_0_1 = {
{
MR_PREDICATE,
"transform_hlds.stm_expand",
"transform_hlds.stm_expand",
"lambda_stm_expand_m_563",
2,
0
},
"transform_hlds.stm_expand",
"stm_expand.m",
562,
"d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__stm_expand__create_rollback_pred_2_8_0_1 = {
{
MR_PREDICATE,
"transform_hlds.stm_expand",
"transform_hlds.stm_expand",
"lambda_stm_expand_m_563",
2,
0
},
"transform_hlds.stm_expand",
"stm_expand.m",
562,
"d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__stm_expand__rename_var_in_wrapper_pred_8_0_1 = {
{
MR_PREDICATE,
"transform_hlds.stm_expand",
"transform_hlds.stm_expand",
"lambda_stm_expand_m_2078",
4,
0
},
"transform_hlds.stm_expand",
"stm_expand.m",
2075,
"d1;c19;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__stm_expand__move_variables_to_new_pred_9_0_1 = {
{
MR_PREDICATE,
"transform_hlds.stm_expand",
"transform_hlds.stm_expand",
"apply_varset_to_preds",
11,
0
},
"transform_hlds.stm_expand",
"stm_expand.m",
1284,
"d1;c19;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__stm_expand__create_or_else_end_branch_7_0_1 = {
{
MR_PREDICATE,
"transform_hlds.stm_expand",
"transform_hlds.stm_expand",
"lambda_stm_expand_m_1779",
4,
0
},
"transform_hlds.stm_expand",
"stm_expand.m",
1779,
"d1;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__stm_expand__template_lock_and_validate_many_7_0_2 = {
{
MR_PREDICATE,
"transform_hlds.stm_expand",
"transform_hlds.stm_expand",
"lambda_stm_expand_m_981",
5,
0
},
"transform_hlds.stm_expand",
"stm_expand.m",
981,
"d1;c25;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__stm_expand__template_lock_and_validate_many_7_0_1 = {
{
MR_PREDICATE,
"transform_hlds.stm_expand",
"transform_hlds.stm_expand",
"lambda_stm_expand_m_967",
5,
0
},
"transform_hlds.stm_expand",
"stm_expand.m",
967,
"d1;c23;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__stm_expand__get_input_output_modes_3_0_2 = {
{
MR_PREDICATE,
"transform_hlds.stm_expand",
"transform_hlds.stm_expand",
"lambda_stm_expand_m_2605",
3,
0
},
"transform_hlds.stm_expand",
"stm_expand.m",
2605,
"d1;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__stm_expand__get_input_output_modes_3_0_1 = {
{
MR_PREDICATE,
"transform_hlds.stm_expand",
"transform_hlds.stm_expand",
"lambda_stm_expand_m_2604",
3,
0
},
"transform_hlds.stm_expand",
"stm_expand.m",
2604,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__stm_expand__get_input_output_types_4_0_2 = {
{
MR_PREDICATE,
"transform_hlds.stm_expand",
"transform_hlds.stm_expand",
"lambda_stm_expand_m_2587",
3,
0
},
"transform_hlds.stm_expand",
"stm_expand.m",
2587,
"d1;c10;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__stm_expand__get_input_output_types_4_0_1 = {
{
MR_PREDICATE,
"transform_hlds.stm_expand",
"transform_hlds.stm_expand",
"lambda_stm_expand_m_2586",
3,
0
},
"transform_hlds.stm_expand",
"stm_expand.m",
2586,
"d1;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__stm_expand__common_goal_vars_from_list_2_0_1 = {
{
MR_PREDICATE,
"transform_hlds.stm_expand",
"transform_hlds.stm_expand",
"lambda_stm_expand_m_563",
2,
0
},
"transform_hlds.stm_expand",
"stm_expand.m",
562,
"d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__stm_expand__stm_process_pred_3_0_1 = {
{
MR_PREDICATE,
"transform_hlds.stm_expand",
"transform_hlds.stm_expand",
"stm_process_proc",
4,
0
},
"transform_hlds.stm_expand",
"stm_expand.m",
260,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__stm_expand__stm_process_module_2_0_1 = {
{
MR_PREDICATE,
"transform_hlds.stm_expand",
"transform_hlds.stm_expand",
"stm_process_pred",
3,
0
},
"transform_hlds.stm_expand",
"stm_expand.m",
254,
"d1;c4;"
};


MR_decl_entry(hlds__hlds_module__module_info_predids_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
MR_decl_entry(list__foldl_4_0);
MR_decl_entry(hlds__hlds_module__module_info_clobber_dependency_info_2_0);

MR_BEGIN_MODULE(transform_hlds__stm_expand_module0)
	MR_init_entry1(transform_hlds__stm_expand__stm_process_module_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__stm_expand__stm_process_module_2_0);
	MR_init_label2(transform_hlds__stm_expand__stm_process_module_2_0,2,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'stm_process_module'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__stm_expand__stm_process_module_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_predids_3_0,
		transform_hlds__stm_expand__stm_process_module_2_0_i2);
MR_def_label(transform_hlds__stm_expand__stm_process_module_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		transform_hlds__stm_expand__stm_process_module_2_0_i4);
MR_def_label(transform_hlds__stm_expand__stm_process_module_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(hlds__hlds_module__module_info_clobber_dependency_info_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_procids_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;

MR_BEGIN_MODULE(transform_hlds__stm_expand_module1)
	MR_init_entry1(transform_hlds__stm_expand__stm_process_pred_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__stm_expand__stm_process_pred_3_0);
	MR_init_label2(transform_hlds__stm_expand__stm_process_pred_3_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'stm_process_pred'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__stm_expand__stm_process_pred_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		transform_hlds__stm_expand__stm_process_pred_3_0_i2);
MR_def_label(transform_hlds__stm_expand__stm_process_pred_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_procids_1_0,
		transform_hlds__stm_expand__stm_process_pred_3_0_i3);
MR_def_label(transform_hlds__stm_expand__stm_process_pred_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__stm_expand__stm_process_proc_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(list__foldl_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__map_3_0);
MR_decl_entry(fn__set__union_list_1_0);
MR_decl_entry(fn__list__det_head_1_0);

MR_BEGIN_MODULE(transform_hlds__stm_expand_module2)
	MR_init_entry1(transform_hlds__stm_expand__common_goal_vars_from_list_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__stm_expand__common_goal_vars_from_list_2_0);
	MR_init_label3(transform_hlds__stm_expand__common_goal_vars_from_list_2_0,5,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'common_goal_vars_from_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__stm_expand__common_goal_vars_from_list_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__stm_expand, stm_goal_vars);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(list__map_3_0,
		transform_hlds__stm_expand__common_goal_vars_from_list_2_0_i5);
MR_def_label(transform_hlds__stm_expand__common_goal_vars_from_list_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__union_list_1_0,
		transform_hlds__stm_expand__common_goal_vars_from_list_2_0_i6);
MR_def_label(transform_hlds__stm_expand__common_goal_vars_from_list_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__stm_expand, stm_goal_vars);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__det_head_1_0,
		transform_hlds__stm_expand__common_goal_vars_from_list_2_0_i7);
MR_def_label(transform_hlds__stm_expand__common_goal_vars_from_list_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_r1, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_r1, 3);
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_r1, 4);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__stm_expand_module3)
	MR_init_entry1(fn__transform_hlds__stm_expand__this_file_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__stm_expand__this_file_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'this_file'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__stm_expand__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("stm_expand.m", 12);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__instmap__instmap_lookup_var_3_0);
MR_decl_entry(check_hlds__inst_match__inst_is_free_2_0);
MR_decl_entry(check_hlds__inst_match__inst_is_bound_2_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(transform_hlds__stm_expand_module4)
	MR_init_entry1(transform_hlds__stm_expand__order_vars_into_groups_2_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__stm_expand__order_vars_into_groups_2_10_0);
	MR_init_label10(transform_hlds__stm_expand__order_vars_into_groups_2_10_0,58,3,4,5,7,9,6,13,15,12)
	MR_init_label4(transform_hlds__stm_expand__order_vars_into_groups_2_10_0,19,21,18,63)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'order_vars_into_groups_2'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__stm_expand__order_vars_into_groups_2_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__stm_expand__order_vars_into_groups_2_10_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__order_vars_into_groups_2_10_0_i3);
	}
	MR_r1 = MR_r5;
	MR_r2 = MR_r6;
	MR_r3 = MR_r7;
	MR_decr_sp_and_return(11);
MR_def_label(transform_hlds__stm_expand__order_vars_into_groups_2_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_tfield(1, MR_r2, 0);
	MR_sv(8) = MR_tfield(1, MR_r2, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_lookup_var_3_0,
		transform_hlds__stm_expand__order_vars_into_groups_2_10_0_i4);
MR_def_label(transform_hlds__stm_expand__order_vars_into_groups_2_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(hlds__instmap__instmap_lookup_var_3_0,
		transform_hlds__stm_expand__order_vars_into_groups_2_10_0_i5);
MR_def_label(transform_hlds__stm_expand__order_vars_into_groups_2_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_free_2_0,
		transform_hlds__stm_expand__order_vars_into_groups_2_10_0_i7);
MR_def_label(transform_hlds__stm_expand__order_vars_into_groups_2_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__order_vars_into_groups_2_10_0_i6);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_free_2_0,
		transform_hlds__stm_expand__order_vars_into_groups_2_10_0_i9);
MR_def_label(transform_hlds__stm_expand__order_vars_into_groups_2_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__order_vars_into_groups_2_10_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r2 = MR_sv(8);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(transform_hlds__stm_expand__order_vars_into_groups_2_10_0_i58);
	}
MR_def_label(transform_hlds__stm_expand__order_vars_into_groups_2_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_free_2_0,
		transform_hlds__stm_expand__order_vars_into_groups_2_10_0_i13);
MR_def_label(transform_hlds__stm_expand__order_vars_into_groups_2_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__order_vars_into_groups_2_10_0_i12);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_bound_2_0,
		transform_hlds__stm_expand__order_vars_into_groups_2_10_0_i15);
MR_def_label(transform_hlds__stm_expand__order_vars_into_groups_2_10_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__order_vars_into_groups_2_10_0_i12);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r7 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(6);
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r2 = MR_sv(8);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(transform_hlds__stm_expand__order_vars_into_groups_2_10_0_i58);
	}
MR_def_label(transform_hlds__stm_expand__order_vars_into_groups_2_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_bound_2_0,
		transform_hlds__stm_expand__order_vars_into_groups_2_10_0_i19);
MR_def_label(transform_hlds__stm_expand__order_vars_into_groups_2_10_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__order_vars_into_groups_2_10_0_i18);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_bound_2_0,
		transform_hlds__stm_expand__order_vars_into_groups_2_10_0_i21);
MR_def_label(transform_hlds__stm_expand__order_vars_into_groups_2_10_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__order_vars_into_groups_2_10_0_i18);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(5);
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r2 = MR_sv(8);
	MR_r5 = MR_sv(4);
	MR_r7 = MR_sv(6);
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(transform_hlds__stm_expand__order_vars_into_groups_2_10_0_i58);
	}
MR_def_label(transform_hlds__stm_expand__order_vars_into_groups_2_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("stm_expand.m", 12);
	MR_r2 = (MR_Word) MR_string_const("order_vars_into_groups_2: Unhandled inst case", 45);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		transform_hlds__stm_expand__order_vars_into_groups_2_10_0_i63);
MR_def_label(transform_hlds__stm_expand__order_vars_into_groups_2_10_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(transform_hlds__stm_expand__order_vars_into_groups_2_10_0_i58);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__goal_util__goal_vars_2_0);
MR_decl_entry(set__delete_list_3_0);
MR_decl_entry(fn__set__to_sorted_list_1_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0);
MR_decl_entry(fn__set__from_list_1_0);

MR_BEGIN_MODULE(transform_hlds__stm_expand_module5)
	MR_init_entry1(transform_hlds__stm_expand__calc_pred_variables_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__stm_expand__calc_pred_variables_9_0);
	MR_init_label10(transform_hlds__stm_expand__calc_pred_variables_9_0,2,4,5,6,7,8,9,10,11,12)
	MR_init_label1(transform_hlds__stm_expand__calc_pred_variables_9_0,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'calc_pred_variables'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__stm_expand__calc_pred_variables_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_tempr2 = MR_r7;
	MR_sv(7) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(8) = MR_tempr2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__goal_util__goal_vars_2_0,
		transform_hlds__stm_expand__calc_pred_variables_9_0_i2);
MR_def_label(transform_hlds__stm_expand__calc_pred_variables_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_tfield(0, MR_sv(3), 1);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,3,0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(set__delete_list_3_0,
		transform_hlds__stm_expand__calc_pred_variables_9_0_i4);
MR_def_label(transform_hlds__stm_expand__calc_pred_variables_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		transform_hlds__stm_expand__calc_pred_variables_9_0_i5);
MR_def_label(transform_hlds__stm_expand__calc_pred_variables_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		transform_hlds__stm_expand__calc_pred_variables_9_0_i6);
MR_def_label(transform_hlds__stm_expand__calc_pred_variables_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(set__delete_list_3_0,
		transform_hlds__stm_expand__calc_pred_variables_9_0_i7);
MR_def_label(transform_hlds__stm_expand__calc_pred_variables_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		transform_hlds__stm_expand__calc_pred_variables_9_0_i8);
MR_def_label(transform_hlds__stm_expand__calc_pred_variables_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__order_vars_into_groups_2_10_0,
		transform_hlds__stm_expand__calc_pred_variables_9_0_i9);
MR_def_label(transform_hlds__stm_expand__calc_pred_variables_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__order_vars_into_groups_2_10_0,
		transform_hlds__stm_expand__calc_pred_variables_9_0_i10);
MR_def_label(transform_hlds__stm_expand__calc_pred_variables_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r3;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__from_list_1_0,
		transform_hlds__stm_expand__calc_pred_variables_9_0_i11);
MR_def_label(transform_hlds__stm_expand__calc_pred_variables_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__from_list_1_0,
		transform_hlds__stm_expand__calc_pred_variables_9_0_i12);
MR_def_label(transform_hlds__stm_expand__calc_pred_variables_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__from_list_1_0,
		transform_hlds__stm_expand__calc_pred_variables_9_0_i13);
MR_def_label(transform_hlds__stm_expand__calc_pred_variables_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(5);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(8);
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__stm_expand_module6)
	MR_init_entry1(transform_hlds__stm_expand__calc_pred_variables_list_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__stm_expand__calc_pred_variables_list_9_0);
	MR_init_label4(transform_hlds__stm_expand__calc_pred_variables_list_9_0,2,12,13,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'calc_pred_variables_list'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__stm_expand__calc_pred_variables_list_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__calc_pred_variables_list_9_0_i2);
	}
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__calc_pred_variables_list_9_0_i2);
	}
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__calc_pred_variables_list_9_0_i2);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r7;
	MR_proceed();
MR_def_label(transform_hlds__stm_expand__calc_pred_variables_list_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__calc_pred_variables_list_9_0_i6);
	}
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__calc_pred_variables_list_9_0_i6);
	}
	if (MR_LTAGS_TEST(MR_r5,0,0)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__calc_pred_variables_list_9_0_i6);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr3 = MR_r5;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_tempr3, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r6;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr2;
	MR_tempr4 = MR_r4;
	MR_tfield(1, MR_tempr2, 0) = MR_tfield(1, MR_tempr4, 0);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tfield(1, MR_r3, 1);
	MR_sv(4) = MR_tfield(1, MR_tempr4, 1);
	MR_sv(5) = MR_tfield(1, MR_tempr3, 1);
	MR_sv(6) = MR_tempr2;
	MR_r3 = MR_tfield(1, MR_r3, 0);
	MR_r4 = MR_tfield(1, MR_tempr2, 0);
	MR_r5 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__calc_pred_variables_9_0,
		transform_hlds__stm_expand__calc_pred_variables_list_9_0_i12);
MR_def_label(transform_hlds__stm_expand__calc_pred_variables_list_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_tempr2;
	}
	MR_np_localcall_lab(transform_hlds__stm_expand__calc_pred_variables_list_9_0,
		transform_hlds__stm_expand__calc_pred_variables_list_9_0_i13);
MR_def_label(transform_hlds__stm_expand__calc_pred_variables_list_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(transform_hlds__stm_expand__calc_pred_variables_list_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("stm_expand.m", 12);
	MR_r2 = (MR_Word) MR_string_const("calc_pred_variables_list: lengths mismatch", 42);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__prim_data__mercury_stm_builtin_module_0_0);
MR_decl_entry(__Unify___mdbcomp__prim_data__sym_name_0_0);

MR_BEGIN_MODULE(transform_hlds__stm_expand_module7)
	MR_init_entry1(transform_hlds__stm_expand__remove_tail_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__stm_expand__remove_tail_4_0);
	MR_init_label10(transform_hlds__stm_expand__remove_tail_4_0,123,5,13,15,6,7,28,30,21,22)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'remove_tail'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__stm_expand__remove_tail_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__remove_tail_4_0_i123);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,4);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,4);
	MR_proceed();
MR_def_label(transform_hlds__stm_expand__remove_tail_4_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localcall_lab(transform_hlds__stm_expand__remove_tail_4_0,
		transform_hlds__stm_expand__remove_tail_4_0_i5);
MR_def_label(transform_hlds__stm_expand__remove_tail_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r3;
	MR_sv(5) = MR_tfield(0, MR_tempr5, 0);
	MR_sv(3) = MR_tfield(0, MR_r2, 0);
	MR_tempr1 = MR_tfield(0, MR_sv(1), 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__remove_tail_4_0_i7);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 2);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__remove_tail_4_0_i7);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TEST(MR_tempr3,0,0)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__remove_tail_4_0_i7);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__remove_tail_4_0_i7);
	}
	MR_tempr4 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr4,0,0)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__remove_tail_4_0_i7);
	}
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_tfield(0, MR_r2, 1);
	MR_sv(6) = MR_tfield(0, MR_tempr5, 1);
	MR_sv(7) = MR_tfield(1, MR_tempr3, 0);
	MR_sv(8) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_tempr5;
	MR_sv(11) = MR_tfield(1, MR_tempr1, 5);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_stm_builtin_module_0_0,
		transform_hlds__stm_expand__remove_tail_4_0_i13);
MR_def_label(transform_hlds__stm_expand__remove_tail_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_string_const("stm_from_outer_to_inner", 23);
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		transform_hlds__stm_expand__remove_tail_4_0_i15);
MR_def_label(transform_hlds__stm_expand__remove_tail_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__remove_tail_4_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(7);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr2;
	MR_tfield(0, MR_r2, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = MR_sv(6);
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(12);
	}
MR_def_label(transform_hlds__stm_expand__remove_tail_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
MR_def_label(transform_hlds__stm_expand__remove_tail_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_tfield(0, MR_sv(1), 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__remove_tail_4_0_i22);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 2);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__remove_tail_4_0_i22);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TEST(MR_tempr3,0,0)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__remove_tail_4_0_i22);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__remove_tail_4_0_i22);
	}
	MR_tempr4 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr4,0,0)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__remove_tail_4_0_i22);
	}
	MR_sv(2) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_sv(4) = MR_tfield(1, MR_tempr1, 5);
	MR_sv(6) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(7) = MR_tfield(1, MR_tempr3, 0);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_stm_builtin_module_0_0,
		transform_hlds__stm_expand__remove_tail_4_0_i28);
MR_def_label(transform_hlds__stm_expand__remove_tail_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_string_const("stm_from_inner_to_outer", 23);
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		transform_hlds__stm_expand__remove_tail_4_0_i30);
MR_def_label(transform_hlds__stm_expand__remove_tail_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__remove_tail_4_0_i21);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(6);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(3);
	MR_tfield(0, MR_r2, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr1;
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(12);
	}
MR_def_label(transform_hlds__stm_expand__remove_tail_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
MR_def_label(transform_hlds__stm_expand__remove_tail_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(12);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__pair__fst_1_0);
MR_decl_entry(fn__pair__snd_1_0);

MR_BEGIN_MODULE(transform_hlds__stm_expand_module8)
	MR_init_entry1(transform_hlds__stm_expand__strip_goal_calls_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__stm_expand__strip_goal_calls_6_0);
	MR_init_label8(transform_hlds__stm_expand__strip_goal_calls_6_0,7,10,11,12,13,14,6,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'strip_goal_calls'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__stm_expand__strip_goal_calls_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__strip_goal_calls_6_0_i2);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__strip_goal_calls_6_0_i2);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 2);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__strip_goal_calls_6_0_i6);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__remove_tail_4_0,
		transform_hlds__stm_expand__strip_goal_calls_6_0_i7);
MR_def_label(transform_hlds__stm_expand__strip_goal_calls_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,3,5);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__pair__fst_1_0,
		transform_hlds__stm_expand__strip_goal_calls_6_0_i10);
MR_def_label(transform_hlds__stm_expand__strip_goal_calls_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__pair__snd_1_0,
		transform_hlds__stm_expand__strip_goal_calls_6_0_i11);
MR_def_label(transform_hlds__stm_expand__strip_goal_calls_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(fn__pair__fst_1_0,
		transform_hlds__stm_expand__strip_goal_calls_6_0_i12);
MR_def_label(transform_hlds__stm_expand__strip_goal_calls_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__pair__snd_1_0,
		transform_hlds__stm_expand__strip_goal_calls_6_0_i13);
MR_def_label(transform_hlds__stm_expand__strip_goal_calls_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(4),0,0)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__strip_goal_calls_6_0_i14);
	}
	if (MR_LTAGS_TEST(MR_sv(5),0,0)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__strip_goal_calls_6_0_i14);
	}
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__strip_goal_calls_6_0_i14);
	}
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__strip_goal_calls_6_0_i14);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(1);
	MR_tempr3 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tfield(1, MR_sv(3), 0);
	MR_r3 = MR_tfield(1, MR_tempr3, 0);
	MR_r4 = MR_tfield(1, MR_sv(4), 0);
	MR_r5 = MR_tfield(1, MR_sv(5), 0);
	MR_decr_sp_and_return(7);
	}
MR_def_label(transform_hlds__stm_expand__strip_goal_calls_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("stm_expand.m", 12);
	MR_r2 = (MR_Word) MR_string_const("strip_goal_calls: Vars not extracted", 36);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(transform_hlds__stm_expand__strip_goal_calls_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("stm_expand.m", 12);
	MR_r2 = (MR_Word) MR_string_const("strip_goal_calls: conjunction is empty", 38);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(transform_hlds__stm_expand__strip_goal_calls_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("stm_expand.m", 12);
	MR_r2 = (MR_Word) MR_string_const("strip_goal_calls: atomic_goal not a conj", 40);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_create_var_from_type_5_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(fn__string__string_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(transform_hlds__stm_expand_module9)
	MR_init_entry1(transform_hlds__stm_expand__create_aux_variable_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__stm_expand__create_aux_variable_5_0);
	MR_init_label5(transform_hlds__stm_expand__create_aux_variable_5_0,3,4,5,6,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_aux_variable'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__stm_expand__create_aux_variable_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__create_aux_variable_5_0_i3);
	}
	MR_sv(5) = MR_r3;
	MR_r3 = MR_tfield(0, MR_r3, 4);
	MR_sv(3) = MR_tfield(0, MR_sv(5), 6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_create_var_from_type_5_0,
		transform_hlds__stm_expand__create_aux_variable_5_0_i8);
MR_def_label(transform_hlds__stm_expand__create_aux_variable_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 6);
	MR_sv(4) = MR_tfield(1, MR_r2, 0);
	MR_sv(5) = MR_tempr1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__string__string_1_0,
		transform_hlds__stm_expand__create_aux_variable_5_0_i4);
MR_def_label(transform_hlds__stm_expand__create_aux_variable_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_Aux_", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__stm_expand__create_aux_variable_5_0_i5);
MR_def_label(transform_hlds__stm_expand__create_aux_variable_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__stm_expand__create_aux_variable_5_0_i6);
MR_def_label(transform_hlds__stm_expand__create_aux_variable_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_create_var_from_type_5_0,
		transform_hlds__stm_expand__create_aux_variable_5_0_i8);
MR_def_label(transform_hlds__stm_expand__create_aux_variable_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tempr2 = MR_sv(5);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__make_const_construction_3_0);

MR_BEGIN_MODULE(transform_hlds__stm_expand_module10)
	MR_init_entry1(transform_hlds__stm_expand__create_aux_variable_assignment_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__stm_expand__create_aux_variable_assignment_7_0);
	MR_init_label2(transform_hlds__stm_expand__create_aux_variable_assignment_7_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_aux_variable_assignment'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__stm_expand__create_aux_variable_assignment_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_aux_variable_5_0,
		transform_hlds__stm_expand__create_aux_variable_assignment_7_0_i2);
MR_def_label(transform_hlds__stm_expand__create_aux_variable_assignment_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__make_const_construction_3_0,
		transform_hlds__stm_expand__create_aux_variable_assignment_7_0_i3);
MR_def_label(transform_hlds__stm_expand__create_aux_variable_assignment_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__instmap__instmap_delta_from_mode_list_4_0);
MR_decl_entry(set__init_1_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(hlds__hlds_goal__goal_info_init_6_0);

MR_BEGIN_MODULE(transform_hlds__stm_expand_module11)
	MR_init_entry1(transform_hlds__stm_expand__create_var_test_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__stm_expand__create_var_test_6_0);
	MR_init_label5(transform_hlds__stm_expand__create_var_test_6_0,9,12,13,14,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_var_test'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__stm_expand__create_var_test_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_sv(5) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_tag_alloc_heap(MR_sv(6), 0, (MR_Integer) 1);
	MR_tfield(0, MR_sv(6), 0) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_r1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tempr6 = MR_r3;
	MR_tfield(1, MR_tempr4, 0) = MR_tfield(0, MR_tempr6, 1);
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tfield(0, MR_tempr6, 0);
	MR_tfield(1, MR_tempr5, 1) = MR_tempr4;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr6;
	MR_tempr7 = MR_r4;
	MR_sv(4) = MR_tfield(0, MR_tempr7, 5);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,3,4);
	MR_sv(8) = MR_tempr7;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr5;
	MR_r3 = MR_tfield(0, MR_tempr7, 0);
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_from_mode_list_4_0,
		transform_hlds__stm_expand__create_var_test_6_0_i9);
MR_def_label(transform_hlds__stm_expand__create_var_test_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_sv(6);
	MR_tfield(0, MR_r2, 2) = MR_sv(3);
	MR_tfield(0, MR_r2, 3) = MR_sv(5);
	MR_tfield(0, MR_r2, 4) = MR_sv(7);
	MR_sv(3) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(set__init_1_0,
		transform_hlds__stm_expand__create_var_test_6_0_i12);
MR_def_label(transform_hlds__stm_expand__create_var_test_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__stm_expand__create_var_test_6_0_i13);
MR_def_label(transform_hlds__stm_expand__create_var_test_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__stm_expand__create_var_test_6_0_i14);
MR_def_label(transform_hlds__stm_expand__create_var_test_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = (MR_Integer) 0;
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_6_0,
		transform_hlds__stm_expand__create_var_test_6_0_i15);
MR_def_label(transform_hlds__stm_expand__create_var_test_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(8);
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__goal_util__generate_simple_call_12_0);

MR_BEGIN_MODULE(transform_hlds__stm_expand_module12)
	MR_init_entry1(transform_hlds__stm_expand__create_simple_call_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__stm_expand__create_simple_call_12_0);
	MR_init_label1(transform_hlds__stm_expand__create_simple_call_12_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_simple_call'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__stm_expand__create_simple_call_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r10;
	MR_r10 = MR_tfield(0, MR_r10, 0);
	MR_r11 = MR_tfield(0, MR_sv(1), 5);
	MR_np_call_localret_ent(hlds__goal_util__generate_simple_call_12_0,
		transform_hlds__stm_expand__create_simple_call_12_0_i2);
MR_def_label(transform_hlds__stm_expand__create_simple_call_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__set__init_0_0);
MR_decl_entry(hlds__instmap__instmap_delta_init_reachable_1_0);

MR_BEGIN_MODULE(transform_hlds__stm_expand_module13)
	MR_init_entry1(transform_hlds__stm_expand__create_if_then_else_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__stm_expand__create_if_then_else_9_0);
	MR_init_label3(transform_hlds__stm_expand__create_if_then_else_9_0,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_if_then_else'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__stm_expand__create_if_then_else_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_sv(4) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_tfield(3, MR_tempr1, 3) = MR_r3;
	MR_tfield(3, MR_tempr1, 4) = MR_r4;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r6;
	MR_tempr2 = MR_r7;
	MR_sv(3) = MR_tfield(0, MR_tempr2, 5);
	MR_sv(6) = MR_tempr2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	}
	MR_np_call_localret_ent(fn__set__init_0_0,
		transform_hlds__stm_expand__create_if_then_else_9_0_i4);
MR_def_label(transform_hlds__stm_expand__create_if_then_else_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_init_reachable_1_0,
		transform_hlds__stm_expand__create_if_then_else_9_0_i5);
MR_def_label(transform_hlds__stm_expand__create_if_then_else_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_6_0,
		transform_hlds__stm_expand__create_if_then_else_9_0_i6);
MR_def_label(transform_hlds__stm_expand__create_if_then_else_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	MR_decr_sp_and_return(7);
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
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_context_1_0);

MR_BEGIN_MODULE(transform_hlds__stm_expand_module14)
	MR_init_entry1(transform_hlds__stm_expand__create_plain_conj_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__stm_expand__create_plain_conj_2_0);
	MR_init_label7(transform_hlds__stm_expand__create_plain_conj_2_0,3,4,5,6,7,8,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_plain_conj'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__stm_expand__create_plain_conj_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_sv(2) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_sv(1) = MR_r1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_list_nonlocals_2_0,
		transform_hlds__stm_expand__create_plain_conj_2_0_i3);
MR_def_label(transform_hlds__stm_expand__create_plain_conj_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_list_instmap_delta_2_0,
		transform_hlds__stm_expand__create_plain_conj_2_0_i4);
MR_def_label(transform_hlds__stm_expand__create_plain_conj_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_list_determinism_2_0,
		transform_hlds__stm_expand__create_plain_conj_2_0_i5);
MR_def_label(transform_hlds__stm_expand__create_plain_conj_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_list_purity_2_0,
		transform_hlds__stm_expand__create_plain_conj_2_0_i6);
MR_def_label(transform_hlds__stm_expand__create_plain_conj_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_tfield(3, MR_sv(2), 2);
	MR_np_call_localret_ent(fn__list__det_head_1_0,
		transform_hlds__stm_expand__create_plain_conj_2_0_i7);
MR_def_label(transform_hlds__stm_expand__create_plain_conj_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		transform_hlds__stm_expand__create_plain_conj_2_0_i8);
MR_def_label(transform_hlds__stm_expand__create_plain_conj_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_6_0,
		transform_hlds__stm_expand__create_plain_conj_2_0_i9);
MR_def_label(transform_hlds__stm_expand__create_plain_conj_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__builtin_lib_types__stm_rollback_exception_type_0_0);
MR_decl_entry(fn__mdbcomp__prim_data__mercury_univ_module_0_0);
MR_decl_entry(fn__hlds__instmap__instmap_delta_from_assoc_list_1_0);
MR_decl_entry(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0);
MR_decl_entry(fn__hlds__instmap__instmap_delta_bind_no_var_0_0);
MR_decl_entry(fn__parse_tree__prog_mode__in_mode_0_0);

MR_BEGIN_MODULE(transform_hlds__stm_expand_module15)
	MR_init_entry1(transform_hlds__stm_expand__template_if_exceptres_is_cons_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__stm_expand__template_if_exceptres_is_cons_8_0);
	MR_init_label10(transform_hlds__stm_expand__template_if_exceptres_is_cons_8_0,2,4,5,7,8,20,21,22,26,27)
	MR_init_label4(transform_hlds__stm_expand__template_if_exceptres_is_cons_8_0,28,29,31,35)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'template_if_exceptres_is_cons'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__stm_expand__template_if_exceptres_is_cons_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__stm_rollback_exception_type_0_0,
		transform_hlds__stm_expand__template_if_exceptres_is_cons_8_0_i2);
MR_def_label(transform_hlds__stm_expand__template_if_exceptres_is_cons_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,5,0);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_aux_variable_5_0,
		transform_hlds__stm_expand__template_if_exceptres_is_cons_8_0_i4);
MR_def_label(transform_hlds__stm_expand__template_if_exceptres_is_cons_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__stm_rollback_exception_type_0_0,
		transform_hlds__stm_expand__template_if_exceptres_is_cons_8_0_i5);
MR_def_label(transform_hlds__stm_expand__template_if_exceptres_is_cons_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,5,1);
	MR_r4 = MR_sv(7);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_aux_variable_assignment_7_0,
		transform_hlds__stm_expand__template_if_exceptres_is_cons_8_0_i7);
MR_def_label(transform_hlds__stm_expand__template_if_exceptres_is_cons_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_univ_module_0_0,
		transform_hlds__stm_expand__template_if_exceptres_is_cons_8_0_i8);
MR_def_label(transform_hlds__stm_expand__template_if_exceptres_is_cons_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9;
	MR_tempr7 = MR_sv(2);
	MR_tfield(1, MR_r2, 0) = MR_tempr7;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr8 = MR_sv(6);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr8;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(10) = MR_tempr2;
	MR_tempr9 = MR_sv(1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr9;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr9;
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_TAG_COMMON(3,7,0);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr4, 0) = MR_tempr7;
	MR_tfield(0, MR_tempr4, 1) = (MR_Word) MR_TAG_COMMON(3,7,0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr8;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_r2;
	MR_tfield(1, MR_tempr5, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr6, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr6;
	MR_sv(2) = MR_r1;
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(1,6,0);
	MR_r1 = MR_tempr4;
	}
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_from_assoc_list_1_0,
		transform_hlds__stm_expand__template_if_exceptres_is_cons_8_0_i20);
MR_def_label(transform_hlds__stm_expand__template_if_exceptres_is_cons_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("type_to_univ", 12);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(9);
	MR_r5 = (MR_Integer) 1;
	MR_r6 = (MR_Integer) 0;
	MR_r7 = MR_sv(10);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_sv(8);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_simple_call_12_0,
		transform_hlds__stm_expand__template_if_exceptres_is_cons_8_0_i21);
MR_def_label(transform_hlds__stm_expand__template_if_exceptres_is_cons_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		transform_hlds__stm_expand__template_if_exceptres_is_cons_8_0_i22);
MR_def_label(transform_hlds__stm_expand__template_if_exceptres_is_cons_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(6);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(9) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(1) = MR_r1;
	}
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_bind_no_var_0_0,
		transform_hlds__stm_expand__template_if_exceptres_is_cons_8_0_i26);
MR_def_label(transform_hlds__stm_expand__template_if_exceptres_is_cons_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("unify", 5);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r6 = (MR_Integer) 0;
	MR_r7 = MR_sv(9);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_sv(8);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_simple_call_12_0,
		transform_hlds__stm_expand__template_if_exceptres_is_cons_8_0_i27);
MR_def_label(transform_hlds__stm_expand__template_if_exceptres_is_cons_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__in_mode_0_0,
		transform_hlds__stm_expand__template_if_exceptres_is_cons_8_0_i28);
MR_def_label(transform_hlds__stm_expand__template_if_exceptres_is_cons_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__in_mode_0_0,
		transform_hlds__stm_expand__template_if_exceptres_is_cons_8_0_i29);
MR_def_label(transform_hlds__stm_expand__template_if_exceptres_is_cons_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_var_test_6_0,
		transform_hlds__stm_expand__template_if_exceptres_is_cons_8_0_i31);
MR_def_label(transform_hlds__stm_expand__template_if_exceptres_is_cons_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(3);
	MR_tfield(1, MR_r1, 1) = MR_tempr2;
	MR_sv(1) = MR_r2;
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_plain_conj_2_0,
		transform_hlds__stm_expand__template_if_exceptres_is_cons_8_0_i35);
MR_def_label(transform_hlds__stm_expand__template_if_exceptres_is_cons_8_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Integer) 2;
	MR_r7 = MR_sv(1);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(transform_hlds__stm_expand__create_if_then_else_9_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__polymorphism__create_poly_info_4_0);
MR_decl_entry(check_hlds__polymorphism__polymorphism_make_type_info_var_6_0);
MR_decl_entry(check_hlds__polymorphism__poly_info_extract_6_0);

MR_BEGIN_MODULE(transform_hlds__stm_expand_module16)
	MR_init_entry1(transform_hlds__stm_expand__make_type_info_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__stm_expand__make_type_info_5_0);
	MR_init_label3(transform_hlds__stm_expand__make_type_info_5_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_type_info'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__stm_expand__make_type_info_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_tfield(0, MR_r2, 1);
	MR_sv(4) = MR_tfield(0, MR_r2, 2);
	MR_sv(2) = MR_tfield(0, MR_r2, 3);
	MR_sv(5) = MR_tfield(0, MR_r2, 4);
	MR_sv(6) = MR_tfield(0, MR_r2, 5);
	MR_sv(7) = MR_tfield(0, MR_r2, 6);
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__polymorphism__create_poly_info_4_0,
		transform_hlds__stm_expand__make_type_info_5_0_i2);
MR_def_label(transform_hlds__stm_expand__make_type_info_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__polymorphism__polymorphism_make_type_info_var_6_0,
		transform_hlds__stm_expand__make_type_info_5_0_i3);
MR_def_label(transform_hlds__stm_expand__make_type_info_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r3;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(check_hlds__polymorphism__poly_info_extract_6_0,
		transform_hlds__stm_expand__make_type_info_5_0_i4);
MR_def_label(transform_hlds__stm_expand__make_type_info_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr1, 0) = MR_r3;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_tfield(0, MR_tempr1, 5) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(7);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__stm_expand_module17)
	MR_init_entry1(transform_hlds__stm_expand__get_input_output_varlist_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__stm_expand__get_input_output_varlist_3_0);
	MR_init_label2(transform_hlds__stm_expand__get_input_output_varlist_3_0,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_input_output_varlist'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__stm_expand__get_input_output_varlist_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 2);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,3,0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		transform_hlds__stm_expand__get_input_output_varlist_3_0_i3);
MR_def_label(transform_hlds__stm_expand__get_input_output_varlist_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		transform_hlds__stm_expand__get_input_output_varlist_3_0_i4);
MR_def_label(transform_hlds__stm_expand__get_input_output_varlist_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_get_vartypes_2_0);

MR_BEGIN_MODULE(transform_hlds__stm_expand_module18)
	MR_init_entry1(transform_hlds__stm_expand__get_input_output_types_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__stm_expand__get_input_output_types_4_0);
	MR_init_label5(transform_hlds__stm_expand__get_input_output_types_4_0,2,4,5,7,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_input_output_types'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__stm_expand__get_input_output_types_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(0, MR_r2, 3);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__stm_expand__get_input_output_types_4_0_i2);
MR_def_label(transform_hlds__stm_expand__get_input_output_types_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		transform_hlds__stm_expand__get_input_output_types_4_0_i4);
MR_def_label(transform_hlds__stm_expand__get_input_output_types_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		transform_hlds__stm_expand__get_input_output_types_4_0_i5);
MR_def_label(transform_hlds__stm_expand__get_input_output_types_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__stm_expand__IntroducedFrom__pred__get_input_output_types__2586__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map_3_0,
		transform_hlds__stm_expand__get_input_output_types_4_0_i7);
MR_def_label(transform_hlds__stm_expand__get_input_output_types_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__stm_expand__IntroducedFrom__pred__get_input_output_types__2587__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(list__map_3_0,
		transform_hlds__stm_expand__get_input_output_types_4_0_i9);
MR_def_label(transform_hlds__stm_expand__get_input_output_types_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__builtin_lib_types__exception_succeeded_functor_0_0);
MR_decl_entry(hlds__hlds_goal__deconstruct_functor_4_0);
MR_decl_entry(hlds__hlds_goal__deconstruct_tuple_3_0);

MR_BEGIN_MODULE(transform_hlds__stm_expand_module19)
	MR_init_entry1(transform_hlds__stm_expand__deconstruct_output_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__stm_expand__deconstruct_output_7_0);
	MR_init_label10(transform_hlds__stm_expand__deconstruct_output_7_0,3,4,5,9,10,7,15,16,18,14)
	MR_init_label8(transform_hlds__stm_expand__deconstruct_output_7_0,19,20,21,24,25,27,28,31)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'deconstruct_output'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__stm_expand__deconstruct_output_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_tfield(0, MR_r1, 2);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		transform_hlds__stm_expand__deconstruct_output_7_0_i3);
MR_def_label(transform_hlds__stm_expand__deconstruct_output_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		transform_hlds__stm_expand__deconstruct_output_7_0_i4);
MR_def_label(transform_hlds__stm_expand__deconstruct_output_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__get_input_output_types_4_0,
		transform_hlds__stm_expand__deconstruct_output_7_0_i5);
MR_def_label(transform_hlds__stm_expand__deconstruct_output_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__deconstruct_output_7_0_i7);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,5,2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_aux_variable_5_0,
		transform_hlds__stm_expand__deconstruct_output_7_0_i9);
MR_def_label(transform_hlds__stm_expand__deconstruct_output_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__exception_succeeded_functor_0_0,
		transform_hlds__stm_expand__deconstruct_output_7_0_i10);
MR_def_label(transform_hlds__stm_expand__deconstruct_output_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__deconstruct_functor_4_0,
		transform_hlds__stm_expand__deconstruct_output_7_0_i31);
MR_def_label(transform_hlds__stm_expand__deconstruct_output_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__deconstruct_output_7_0_i14);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__list__det_head_1_0,
		transform_hlds__stm_expand__deconstruct_output_7_0_i15);
MR_def_label(transform_hlds__stm_expand__deconstruct_output_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__exception_succeeded_functor_0_0,
		transform_hlds__stm_expand__deconstruct_output_7_0_i16);
MR_def_label(transform_hlds__stm_expand__deconstruct_output_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__deconstruct_functor_4_0,
		transform_hlds__stm_expand__deconstruct_output_7_0_i18);
MR_def_label(transform_hlds__stm_expand__deconstruct_output_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(10);
MR_def_label(transform_hlds__stm_expand__deconstruct_output_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(9) = MR_tfield(0, MR_tempr1, 6);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(check_hlds__polymorphism__create_poly_info_4_0,
		transform_hlds__stm_expand__deconstruct_output_7_0_i19);
MR_def_label(transform_hlds__stm_expand__deconstruct_output_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__polymorphism__polymorphism_make_type_info_var_6_0,
		transform_hlds__stm_expand__deconstruct_output_7_0_i20);
MR_def_label(transform_hlds__stm_expand__deconstruct_output_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_r1 = MR_r3;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(check_hlds__polymorphism__poly_info_extract_6_0,
		transform_hlds__stm_expand__deconstruct_output_7_0_i21);
MR_def_label(transform_hlds__stm_expand__deconstruct_output_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr1, 0) = MR_r3;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_tfield(0, MR_tempr1, 5) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(9);
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,5,3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_aux_variable_5_0,
		transform_hlds__stm_expand__deconstruct_output_7_0_i24);
MR_def_label(transform_hlds__stm_expand__deconstruct_output_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__exception_succeeded_functor_0_0,
		transform_hlds__stm_expand__deconstruct_output_7_0_i25);
MR_def_label(transform_hlds__stm_expand__deconstruct_output_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__deconstruct_functor_4_0,
		transform_hlds__stm_expand__deconstruct_output_7_0_i27);
MR_def_label(transform_hlds__stm_expand__deconstruct_output_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__deconstruct_tuple_3_0,
		transform_hlds__stm_expand__deconstruct_output_7_0_i28);
MR_def_label(transform_hlds__stm_expand__deconstruct_output_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = MR_r2;
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_plain_conj_2_0,
		transform_hlds__stm_expand__deconstruct_output_7_0_i31);
MR_def_label(transform_hlds__stm_expand__deconstruct_output_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_pred__shroud_pred_proc_id_1_0);
MR_decl_entry(parse_tree__prog_type__construct_higher_order_pred_type_4_0);
MR_decl_entry(hlds__hlds_goal__construct_functor_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0;
MR_decl_entry(fn__assoc_list__from_corresponding_lists_2_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_instmap_delta_3_0);

MR_BEGIN_MODULE(transform_hlds__stm_expand_module20)
	MR_init_entry1(transform_hlds__stm_expand__create_closure_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__stm_expand__create_closure_8_0);
	MR_init_label7(transform_hlds__stm_expand__create_closure_8_0,2,3,6,7,14,15,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_closure'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__stm_expand__create_closure_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__shroud_pred_proc_id_1_0,
		transform_hlds__stm_expand__create_closure_8_0_i2);
MR_def_label(transform_hlds__stm_expand__create_closure_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__construct_higher_order_pred_type_4_0,
		transform_hlds__stm_expand__create_closure_8_0_i3);
MR_def_label(transform_hlds__stm_expand__create_closure_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,5,4);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_aux_variable_5_0,
		transform_hlds__stm_expand__create_closure_8_0_i6);
MR_def_label(transform_hlds__stm_expand__create_closure_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__construct_functor_4_0,
		transform_hlds__stm_expand__create_closure_8_0_i7);
MR_def_label(transform_hlds__stm_expand__create_closure_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 2) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	}
	MR_np_call_localret_ent(fn__assoc_list__from_corresponding_lists_2_0,
		transform_hlds__stm_expand__create_closure_8_0_i14);
MR_def_label(transform_hlds__stm_expand__create_closure_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_from_assoc_list_1_0,
		transform_hlds__stm_expand__create_closure_8_0_i15);
MR_def_label(transform_hlds__stm_expand__create_closure_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_instmap_delta_3_0,
		transform_hlds__stm_expand__create_closure_8_0_i16);
MR_def_label(transform_hlds__stm_expand__create_closure_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__stm_expand_module21)
	MR_init_entry1(transform_hlds__stm_expand__create_switch_disjunction_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__stm_expand__create_switch_disjunction_7_0);
	MR_init_label3(transform_hlds__stm_expand__create_switch_disjunction_7_0,3,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_switch_disjunction'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__stm_expand__create_switch_disjunction_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(7) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	}
	MR_np_call_localret_ent(fn__set__init_0_0,
		transform_hlds__stm_expand__create_switch_disjunction_7_0_i3);
MR_def_label(transform_hlds__stm_expand__create_switch_disjunction_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_init_reachable_1_0,
		transform_hlds__stm_expand__create_switch_disjunction_7_0_i4);
MR_def_label(transform_hlds__stm_expand__create_switch_disjunction_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 3) = MR_sv(2);
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_6_0,
		transform_hlds__stm_expand__create_switch_disjunction_7_0_i6);
MR_def_label(transform_hlds__stm_expand__create_switch_disjunction_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(7);
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;
MR_decl_entry(fn__parse_tree__prog_mode__out_mode_0_0);

MR_BEGIN_MODULE(transform_hlds__stm_expand_module22)
	MR_init_entry1(transform_hlds__stm_expand__get_input_output_modes_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__stm_expand__get_input_output_modes_3_0);
	MR_init_label6(transform_hlds__stm_expand__get_input_output_modes_3_0,3,4,5,7,8,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_input_output_modes'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__stm_expand__get_input_output_modes_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_sv(1) = MR_tfield(0, MR_r1, 2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		transform_hlds__stm_expand__get_input_output_modes_3_0_i3);
MR_def_label(transform_hlds__stm_expand__get_input_output_modes_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		transform_hlds__stm_expand__get_input_output_modes_3_0_i4);
MR_def_label(transform_hlds__stm_expand__get_input_output_modes_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__in_mode_0_0,
		transform_hlds__stm_expand__get_input_output_modes_3_0_i5);
MR_def_label(transform_hlds__stm_expand__get_input_output_modes_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__stm_expand__IntroducedFrom__pred__get_input_output_modes__2604__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__map_3_0,
		transform_hlds__stm_expand__get_input_output_modes_3_0_i7);
MR_def_label(transform_hlds__stm_expand__get_input_output_modes_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__out_mode_0_0,
		transform_hlds__stm_expand__get_input_output_modes_3_0_i8);
MR_def_label(transform_hlds__stm_expand__get_input_output_modes_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__stm_expand__IntroducedFrom__pred__get_input_output_modes__2605__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(list__map_3_0,
		transform_hlds__stm_expand__get_input_output_modes_3_0_i10);
MR_def_label(transform_hlds__stm_expand__get_input_output_modes_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__builtin_lib_types__stm_state_type_0_0);
MR_decl_entry(fn__parse_tree__builtin_lib_types__exception_result_type_1_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_decl_entry(fn__parse_tree__prog_mode__di_mode_0_0);
MR_decl_entry(fn__parse_tree__prog_mode__uo_mode_0_0);
MR_decl_entry(fn__mdbcomp__prim_data__mercury_exception_module_0_0);
MR_decl_entry(fn__hlds__instmap__instmap_delta_bind_vars_1_0);
MR_decl_entry(fn__parse_tree__builtin_lib_types__univ_type_0_0);
MR_decl_entry(fn__parse_tree__builtin_lib_types__exception_exception_functor_0_0);
MR_decl_entry(fn__parse_tree__builtin_lib_types__stm_rollback_retry_functor_0_0);

MR_BEGIN_MODULE(transform_hlds__stm_expand_module23)
	MR_init_entry1(transform_hlds__stm_expand__create_or_else_branch_13_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__stm_expand__create_or_else_branch_13_0);
	MR_init_label10(transform_hlds__stm_expand__create_or_else_branch_13_0,2,3,4,5,7,8,10,11,12,16)
	MR_init_label10(transform_hlds__stm_expand__create_or_else_branch_13_0,17,18,19,23,24,25,33,34,35,53)
	MR_init_label10(transform_hlds__stm_expand__create_or_else_branch_13_0,54,55,56,65,66,69,70,72,73,74)
	MR_init_label10(transform_hlds__stm_expand__create_or_else_branch_13_0,77,78,79,81,82,84,87,88,89,92)
	MR_init_label4(transform_hlds__stm_expand__create_or_else_branch_13_0,93,95,99,104)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_or_else_branch'/13 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__stm_expand__create_or_else_branch_13_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(20);
	MR_sv(20) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_sv(9) = MR_r9;
	MR_sv(10) = MR_r10;
	MR_sv(14) = MR_r11;
	MR_np_call_localret_ent(transform_hlds__stm_expand__get_input_output_varlist_3_0,
		transform_hlds__stm_expand__create_or_else_branch_13_0_i2);
MR_def_label(transform_hlds__stm_expand__create_or_else_branch_13_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(transform_hlds__stm_expand__get_input_output_types_4_0,
		transform_hlds__stm_expand__create_or_else_branch_13_0_i3);
MR_def_label(transform_hlds__stm_expand__create_or_else_branch_13_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(transform_hlds__stm_expand__get_input_output_modes_3_0,
		transform_hlds__stm_expand__create_or_else_branch_13_0_i4);
MR_def_label(transform_hlds__stm_expand__create_or_else_branch_13_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__stm_state_type_0_0,
		transform_hlds__stm_expand__create_or_else_branch_13_0_i5);
MR_def_label(transform_hlds__stm_expand__create_or_else_branch_13_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,5,5);
	MR_r3 = MR_sv(14);
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_aux_variable_5_0,
		transform_hlds__stm_expand__create_or_else_branch_13_0_i7);
MR_def_label(transform_hlds__stm_expand__create_or_else_branch_13_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_sv(15) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__exception_result_type_1_0,
		transform_hlds__stm_expand__create_or_else_branch_13_0_i8);
MR_def_label(transform_hlds__stm_expand__create_or_else_branch_13_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,5,6);
	MR_r3 = MR_sv(15);
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_aux_variable_5_0,
		transform_hlds__stm_expand__create_or_else_branch_13_0_i10);
MR_def_label(transform_hlds__stm_expand__create_or_else_branch_13_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_sv(16) = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__stm_state_type_0_0,
		transform_hlds__stm_expand__create_or_else_branch_13_0_i11);
MR_def_label(transform_hlds__stm_expand__create_or_else_branch_13_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__stm_state_type_0_0,
		transform_hlds__stm_expand__create_or_else_branch_13_0_i12);
MR_def_label(transform_hlds__stm_expand__create_or_else_branch_13_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(17);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(12);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__stm_expand__create_or_else_branch_13_0_i16);
MR_def_label(transform_hlds__stm_expand__create_or_else_branch_13_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__out_mode_0_0,
		transform_hlds__stm_expand__create_or_else_branch_13_0_i17);
MR_def_label(transform_hlds__stm_expand__create_or_else_branch_13_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__di_mode_0_0,
		transform_hlds__stm_expand__create_or_else_branch_13_0_i18);
MR_def_label(transform_hlds__stm_expand__create_or_else_branch_13_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(18) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__uo_mode_0_0,
		transform_hlds__stm_expand__create_or_else_branch_13_0_i19);
MR_def_label(transform_hlds__stm_expand__create_or_else_branch_13_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(18);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(17);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_sv(13);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__stm_expand__create_or_else_branch_13_0_i23);
MR_def_label(transform_hlds__stm_expand__create_or_else_branch_13_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(16);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_closure_8_0,
		transform_hlds__stm_expand__create_or_else_branch_13_0_i24);
MR_def_label(transform_hlds__stm_expand__create_or_else_branch_13_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(11) = MR_r2;
	MR_sv(12) = MR_r3;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_stm_builtin_module_0_0,
		transform_hlds__stm_expand__create_or_else_branch_13_0_i25);
MR_def_label(transform_hlds__stm_expand__create_or_else_branch_13_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr6 = MR_sv(14);
	MR_tfield(1, MR_r2, 0) = MR_tempr6;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(16) = MR_tempr1;
	MR_tempr7 = MR_sv(3);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr7;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_sv(17) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr7;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(3,7,1);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr6;
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr4;
	MR_sv(13) = MR_r1;
	MR_sv(18) = (MR_Word) MR_TAG_COMMON(3,7,1);
	MR_r1 = MR_tempr5;
	}
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_from_assoc_list_1_0,
		transform_hlds__stm_expand__create_or_else_branch_13_0_i33);
MR_def_label(transform_hlds__stm_expand__create_or_else_branch_13_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = (MR_Word) MR_string_const("stm_create_nested_transaction_log", 33);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Integer) 2;
	MR_r7 = MR_sv(16);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_sv(12);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_simple_call_12_0,
		transform_hlds__stm_expand__create_or_else_branch_13_0_i34);
MR_def_label(transform_hlds__stm_expand__create_or_else_branch_13_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_sv(13) = MR_r2;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_exception_module_0_0,
		transform_hlds__stm_expand__create_or_else_branch_13_0_i35);
MR_def_label(transform_hlds__stm_expand__create_or_else_branch_13_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10, MR_tempr11, MR_tempr12, MR_tempr13, MR_tempr14, MR_tempr15;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(19) = MR_tempr1;
	MR_tempr11 = MR_sv(5);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr11;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tempr12 = MR_sv(14);
	MR_tfield(1, MR_r2, 0) = MR_tempr12;
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tempr13 = MR_sv(15);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr13;
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tempr14 = MR_sv(8);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr14;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tempr15 = MR_sv(6);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr15;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr5, 0) = MR_tempr15;
	MR_tfield(0, MR_tempr5, 1) = (MR_Word) MR_TAG_COMMON(3,7,0);
	MR_tag_alloc_heap(MR_tempr6, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr6, 0) = MR_tempr14;
	MR_tfield(0, MR_tempr6, 1) = (MR_Word) MR_TAG_COMMON(3,7,0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr13;
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr7, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr7, 0) = MR_tempr12;
	MR_tfield(0, MR_tempr7, 1) = MR_sv(18);
	MR_tag_alloc_heap(MR_tempr8, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr8, 0) = MR_tempr11;
	MR_tfield(0, MR_tempr8, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr9, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr9, 0) = MR_tempr8;
	MR_tfield(1, MR_tempr9, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr10, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr10, 0) = MR_tempr7;
	MR_tfield(1, MR_tempr10, 1) = MR_tempr9;
	MR_tag_alloc_heap(MR_tempr9, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr9, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr9, 1) = MR_tempr10;
	MR_tag_alloc_heap(MR_tempr10, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr10, 0) = MR_tempr6;
	MR_tfield(1, MR_tempr10, 1) = MR_tempr9;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr6, 1) = MR_tempr10;
	MR_sv(8) = MR_r1;
	MR_sv(14) = (MR_Word) MR_TAG_COMMON(1,6,1);
	MR_sv(16) = MR_tempr4;
	MR_r1 = MR_tempr6;
	}
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_from_assoc_list_1_0,
		transform_hlds__stm_expand__create_or_else_branch_13_0_i53);
MR_def_label(transform_hlds__stm_expand__create_or_else_branch_13_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_string_const("unsafe_try_stm", 14);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(14);
	MR_r5 = (MR_Integer) 4;
	MR_r6 = (MR_Integer) 0;
	MR_r7 = MR_sv(16);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_sv(13);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_simple_call_12_0,
		transform_hlds__stm_expand__create_or_else_branch_13_0_i54);
MR_def_label(transform_hlds__stm_expand__create_or_else_branch_13_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(15);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__deconstruct_output_7_0,
		transform_hlds__stm_expand__create_or_else_branch_13_0_i55);
MR_def_label(transform_hlds__stm_expand__create_or_else_branch_13_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_stm_builtin_module_0_0,
		transform_hlds__stm_expand__create_or_else_branch_13_0_i56);
MR_def_label(transform_hlds__stm_expand__create_or_else_branch_13_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(4);
	MR_tfield(1, MR_r2, 0) = MR_tempr4;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tempr5 = MR_sv(5);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr5;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(18);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr4;
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr3;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(17);
	MR_tfield(1, MR_tempr3, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = MR_tempr3;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_from_assoc_list_1_0,
		transform_hlds__stm_expand__create_or_else_branch_13_0_i65);
MR_def_label(transform_hlds__stm_expand__create_or_else_branch_13_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("stm_merge_nested_logs", 21);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Integer) 2;
	MR_r7 = MR_sv(4);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_sv(8);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_simple_call_12_0,
		transform_hlds__stm_expand__create_or_else_branch_13_0_i66);
MR_def_label(transform_hlds__stm_expand__create_or_else_branch_13_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(2);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_sv(3) = MR_r2;
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_plain_conj_2_0,
		transform_hlds__stm_expand__create_or_else_branch_13_0_i69);
MR_def_label(transform_hlds__stm_expand__create_or_else_branch_13_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_stm_builtin_module_0_0,
		transform_hlds__stm_expand__create_or_else_branch_13_0_i70);
MR_def_label(transform_hlds__stm_expand__create_or_else_branch_13_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(5);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_from_assoc_list_1_0,
		transform_hlds__stm_expand__create_or_else_branch_13_0_i72);
MR_def_label(transform_hlds__stm_expand__create_or_else_branch_13_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("stm_discard_transaction_log", 27);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Integer) 2;
	MR_r7 = MR_sv(19);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_sv(3);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_simple_call_12_0,
		transform_hlds__stm_expand__create_or_else_branch_13_0_i73);
MR_def_label(transform_hlds__stm_expand__create_or_else_branch_13_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_exception_module_0_0,
		transform_hlds__stm_expand__create_or_else_branch_13_0_i74);
MR_def_label(transform_hlds__stm_expand__create_or_else_branch_13_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(15);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_bind_vars_1_0,
		transform_hlds__stm_expand__create_or_else_branch_13_0_i77);
MR_def_label(transform_hlds__stm_expand__create_or_else_branch_13_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const("rethrow", 7);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 6;
	MR_r6 = (MR_Integer) 0;
	MR_r7 = MR_sv(6);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_sv(4);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_simple_call_12_0,
		transform_hlds__stm_expand__create_or_else_branch_13_0_i78);
MR_def_label(transform_hlds__stm_expand__create_or_else_branch_13_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__univ_type_0_0,
		transform_hlds__stm_expand__create_or_else_branch_13_0_i79);
MR_def_label(transform_hlds__stm_expand__create_or_else_branch_13_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,5,7);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_aux_variable_5_0,
		transform_hlds__stm_expand__create_or_else_branch_13_0_i81);
MR_def_label(transform_hlds__stm_expand__create_or_else_branch_13_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__exception_exception_functor_0_0,
		transform_hlds__stm_expand__create_or_else_branch_13_0_i82);
MR_def_label(transform_hlds__stm_expand__create_or_else_branch_13_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__deconstruct_functor_4_0,
		transform_hlds__stm_expand__create_or_else_branch_13_0_i84);
MR_def_label(transform_hlds__stm_expand__create_or_else_branch_13_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(4);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_plain_conj_2_0,
		transform_hlds__stm_expand__create_or_else_branch_13_0_i87);
MR_def_label(transform_hlds__stm_expand__create_or_else_branch_13_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__stm_rollback_retry_functor_0_0,
		transform_hlds__stm_expand__create_or_else_branch_13_0_i88);
MR_def_label(transform_hlds__stm_expand__create_or_else_branch_13_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(6);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__template_if_exceptres_is_cons_8_0,
		transform_hlds__stm_expand__create_or_else_branch_13_0_i89);
MR_def_label(transform_hlds__stm_expand__create_or_else_branch_13_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(3);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_sv(4) = MR_r2;
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_plain_conj_2_0,
		transform_hlds__stm_expand__create_or_else_branch_13_0_i92);
MR_def_label(transform_hlds__stm_expand__create_or_else_branch_13_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__exception_exception_functor_0_0,
		transform_hlds__stm_expand__create_or_else_branch_13_0_i93);
MR_def_label(transform_hlds__stm_expand__create_or_else_branch_13_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 2) = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__exception_succeeded_functor_0_0,
		transform_hlds__stm_expand__create_or_else_branch_13_0_i95);
MR_def_label(transform_hlds__stm_expand__create_or_else_branch_13_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_tempr2;
	MR_r1 = MR_sv(15);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 2;
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_switch_disjunction_7_0,
		transform_hlds__stm_expand__create_or_else_branch_13_0_i99);
MR_def_label(transform_hlds__stm_expand__create_or_else_branch_13_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(11);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(12);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_sv(1) = MR_r2;
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_plain_conj_2_0,
		transform_hlds__stm_expand__create_or_else_branch_13_0_i104);
MR_def_label(transform_hlds__stm_expand__create_or_else_branch_13_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(20);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__stm_expand_module24)
	MR_init_entry1(transform_hlds__stm_expand__create_or_else_branches_13_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__stm_expand__create_or_else_branches_13_0);
	MR_init_label3(transform_hlds__stm_expand__create_or_else_branches_13_0,2,10,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_or_else_branches'/13 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__stm_expand__create_or_else_branches_13_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__create_or_else_branches_13_0_i2);
	}
	if (MR_LTAGS_TESTR(MR_r8,0,0)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__create_or_else_branches_13_0_i2);
	}
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__create_or_else_branches_13_0_i2);
	}
	MR_r1 = MR_r9;
	MR_r2 = MR_r11;
	MR_proceed();
MR_def_label(transform_hlds__stm_expand__create_or_else_branches_13_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__create_or_else_branches_13_0_i6);
	}
	if (MR_LTAGS_TEST(MR_r5,0,0)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__create_or_else_branches_13_0_i6);
	}
	if (MR_LTAGS_TEST(MR_r8,0,0)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__create_or_else_branches_13_0_i6);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_r10;
	MR_sv(7) = MR_tfield(1, MR_r1, 0);
	MR_sv(8) = MR_tfield(1, MR_r5, 0);
	MR_sv(9) = MR_tfield(1, MR_r8, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_r5 = MR_tfield(1, MR_r5, 1);
	MR_r8 = MR_tfield(1, MR_r8, 1);
	MR_np_localcall_lab(transform_hlds__stm_expand__create_or_else_branches_13_0,
		transform_hlds__stm_expand__create_or_else_branches_13_0_i10);
MR_def_label(transform_hlds__stm_expand__create_or_else_branches_13_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(8);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(9);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_sv(6);
	MR_r11 = MR_tempr2;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(transform_hlds__stm_expand__create_or_else_branch_13_0);
	}
MR_def_label(transform_hlds__stm_expand__create_or_else_branches_13_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("stm_expand.m", 12);
	MR_r2 = (MR_Word) MR_string_const("create_or_else_branches: Mismatched lists", 41);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__stm_expand_module25)
	MR_init_entry1(transform_hlds__stm_expand__create_or_else_inner_stm_vars_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__stm_expand__create_or_else_inner_stm_vars_4_0);
	MR_init_label5(transform_hlds__stm_expand__create_or_else_inner_stm_vars_4_0,2,5,7,8,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_or_else_inner_stm_vars'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__stm_expand__create_or_else_inner_stm_vars_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__create_or_else_inner_stm_vars_4_0_i2);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(transform_hlds__stm_expand__create_or_else_inner_stm_vars_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__create_or_else_inner_stm_vars_4_0_i4);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__stm_state_type_0_0,
		transform_hlds__stm_expand__create_or_else_inner_stm_vars_4_0_i5);
MR_def_label(transform_hlds__stm_expand__create_or_else_inner_stm_vars_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,5,8);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_aux_variable_5_0,
		transform_hlds__stm_expand__create_or_else_inner_stm_vars_4_0_i7);
MR_def_label(transform_hlds__stm_expand__create_or_else_inner_stm_vars_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	}
	MR_np_localcall_lab(transform_hlds__stm_expand__create_or_else_inner_stm_vars_4_0,
		transform_hlds__stm_expand__create_or_else_inner_stm_vars_4_0_i8);
MR_def_label(transform_hlds__stm_expand__create_or_else_inner_stm_vars_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(transform_hlds__stm_expand__create_or_else_inner_stm_vars_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("stm_expand.m", 12);
	MR_r2 = (MR_Word) MR_string_const("create_or_else_inner_stm_vars: Negative count", 45);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__builtin_lib_types__stm_validres_valid_functor_0_0);
MR_decl_entry(fn__parse_tree__builtin_lib_types__stm_valid_result_type_0_0);
MR_decl_entry(list__map2_foldl_6_0);
MR_decl_entry(list__map_foldl_5_1);

MR_BEGIN_MODULE(transform_hlds__stm_expand_module26)
	MR_init_entry1(transform_hlds__stm_expand__template_lock_and_validate_many_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__stm_expand__template_lock_and_validate_many_7_0);
	MR_init_label10(transform_hlds__stm_expand__template_lock_and_validate_many_7_0,2,3,5,6,7,8,11,13,14,15)
	MR_init_label8(transform_hlds__stm_expand__template_lock_and_validate_many_7_0,21,22,17,23,24,25,30,31)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'template_lock_and_validate_many'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__stm_expand__template_lock_and_validate_many_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__stm_validres_valid_functor_0_0,
		transform_hlds__stm_expand__template_lock_and_validate_many_7_0_i2);
MR_def_label(transform_hlds__stm_expand__template_lock_and_validate_many_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__stm_valid_result_type_0_0,
		transform_hlds__stm_expand__template_lock_and_validate_many_7_0_i3);
MR_def_label(transform_hlds__stm_expand__template_lock_and_validate_many_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,5,9);
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_aux_variable_assignment_7_0,
		transform_hlds__stm_expand__template_lock_and_validate_many_7_0_i5);
MR_def_label(transform_hlds__stm_expand__template_lock_and_validate_many_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_stm_builtin_module_0_0,
		transform_hlds__stm_expand__template_lock_and_validate_many_7_0_i6);
MR_def_label(transform_hlds__stm_expand__template_lock_and_validate_many_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_bind_no_var_0_0,
		transform_hlds__stm_expand__template_lock_and_validate_many_7_0_i7);
MR_def_label(transform_hlds__stm_expand__template_lock_and_validate_many_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_string_const("stm_lock", 8);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Integer) 2;
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_sv(7);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_simple_call_12_0,
		transform_hlds__stm_expand__template_lock_and_validate_many_7_0_i8);
MR_def_label(transform_hlds__stm_expand__template_lock_and_validate_many_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(transform_hlds__stm_expand, stm_new_pred_info);
	MR_r1 = MR_sv(7);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_r1;
	MR_r4 = MR_sv(9);
	MR_r5 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map2_foldl_6_0,
		transform_hlds__stm_expand__template_lock_and_validate_many_7_0_i11);
MR_def_label(transform_hlds__stm_expand__template_lock_and_validate_many_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__stm_expand__IntroducedFrom__pred__template_lock_and_validate_many__981__1_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(8);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(9);
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr3;
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		transform_hlds__stm_expand__template_lock_and_validate_many_7_0_i13);
MR_def_label(transform_hlds__stm_expand__template_lock_and_validate_many_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_plain_conj_2_0,
		transform_hlds__stm_expand__template_lock_and_validate_many_7_0_i14);
MR_def_label(transform_hlds__stm_expand__template_lock_and_validate_many_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = (MR_Integer) 4;
	MR_r6 = (MR_Integer) 2;
	MR_r7 = MR_sv(7);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_if_then_else_9_0,
		transform_hlds__stm_expand__template_lock_and_validate_many_7_0_i15);
MR_def_label(transform_hlds__stm_expand__template_lock_and_validate_many_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__template_lock_and_validate_many_7_0_i17);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_r1;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__stm_expand__template_lock_and_validate_many_7_0_i21);
MR_def_label(transform_hlds__stm_expand__template_lock_and_validate_many_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__stm_expand__template_lock_and_validate_many_7_0_i22);
MR_def_label(transform_hlds__stm_expand__template_lock_and_validate_many_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(10);
MR_def_label(transform_hlds__stm_expand__template_lock_and_validate_many_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_stm_builtin_module_0_0,
		transform_hlds__stm_expand__template_lock_and_validate_many_7_0_i23);
MR_def_label(transform_hlds__stm_expand__template_lock_and_validate_many_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_bind_no_var_0_0,
		transform_hlds__stm_expand__template_lock_and_validate_many_7_0_i24);
MR_def_label(transform_hlds__stm_expand__template_lock_and_validate_many_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("stm_unlock", 10);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Integer) 2;
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_sv(3);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_simple_call_12_0,
		transform_hlds__stm_expand__template_lock_and_validate_many_7_0_i25);
MR_def_label(transform_hlds__stm_expand__template_lock_and_validate_many_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_r1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__stm_expand__template_lock_and_validate_many_7_0_i30);
MR_def_label(transform_hlds__stm_expand__template_lock_and_validate_many_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__stm_expand__template_lock_and_validate_many_7_0_i31);
MR_def_label(transform_hlds__stm_expand__template_lock_and_validate_many_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__det_tail_1_0);
MR_decl_entry(fn__parse_tree__builtin_lib_types__stm_rollback_exception_functor_0_0);

MR_BEGIN_MODULE(transform_hlds__stm_expand_module27)
	MR_init_entry1(transform_hlds__stm_expand__create_or_else_end_branch_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__stm_expand__create_or_else_end_branch_7_0);
	MR_init_label10(transform_hlds__stm_expand__create_or_else_end_branch_7_0,3,5,8,9,10,11,12,13,14,16)
	MR_init_label10(transform_hlds__stm_expand__create_or_else_end_branch_7_0,17,20,21,25,26,27,28,30,31,34)
	MR_init_label4(transform_hlds__stm_expand__create_or_else_end_branch_7_0,35,39,40,41)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_or_else_end_branch'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__stm_expand__create_or_else_end_branch_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__list__det_tail_1_0,
		transform_hlds__stm_expand__create_or_else_end_branch_7_0_i3);
MR_def_label(transform_hlds__stm_expand__create_or_else_end_branch_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__stm_expand, stm_new_pred_info);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(5);
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		transform_hlds__stm_expand__create_or_else_end_branch_7_0_i5);
MR_def_label(transform_hlds__stm_expand__create_or_else_end_branch_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__stm_expand__create_or_else_end_branch_7_0_i8);
MR_def_label(transform_hlds__stm_expand__create_or_else_end_branch_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__map3_in_foldl__ho1_7_0,
		transform_hlds__stm_expand__create_or_else_end_branch_7_0_i9);
MR_def_label(transform_hlds__stm_expand__create_or_else_end_branch_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_stm_builtin_module_0_0,
		transform_hlds__stm_expand__create_or_else_end_branch_7_0_i10);
MR_def_label(transform_hlds__stm_expand__create_or_else_end_branch_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_bind_no_var_0_0,
		transform_hlds__stm_expand__create_or_else_end_branch_7_0_i11);
MR_def_label(transform_hlds__stm_expand__create_or_else_end_branch_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const("stm_unlock", 10);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Integer) 2;
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_sv(3);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_simple_call_12_0,
		transform_hlds__stm_expand__create_or_else_end_branch_7_0_i12);
MR_def_label(transform_hlds__stm_expand__create_or_else_end_branch_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__stm_rollback_retry_functor_0_0,
		transform_hlds__stm_expand__create_or_else_end_branch_7_0_i13);
MR_def_label(transform_hlds__stm_expand__create_or_else_end_branch_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__stm_rollback_exception_type_0_0,
		transform_hlds__stm_expand__create_or_else_end_branch_7_0_i14);
MR_def_label(transform_hlds__stm_expand__create_or_else_end_branch_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,5,10);
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_aux_variable_assignment_7_0,
		transform_hlds__stm_expand__create_or_else_end_branch_7_0_i16);
MR_def_label(transform_hlds__stm_expand__create_or_else_end_branch_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_exception_module_0_0,
		transform_hlds__stm_expand__create_or_else_end_branch_7_0_i17);
MR_def_label(transform_hlds__stm_expand__create_or_else_end_branch_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(6);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_sv(6) = MR_r1;
	MR_sv(8) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_bind_vars_1_0,
		transform_hlds__stm_expand__create_or_else_end_branch_7_0_i20);
MR_def_label(transform_hlds__stm_expand__create_or_else_end_branch_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_string_const("throw", 5);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 6;
	MR_r6 = (MR_Integer) 0;
	MR_r7 = MR_sv(8);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_sv(7);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_simple_call_12_0,
		transform_hlds__stm_expand__create_or_else_end_branch_7_0_i21);
MR_def_label(transform_hlds__stm_expand__create_or_else_end_branch_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_sv(5) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__stm_expand__create_or_else_end_branch_7_0_i25);
MR_def_label(transform_hlds__stm_expand__create_or_else_end_branch_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_plain_conj_2_0,
		transform_hlds__stm_expand__create_or_else_end_branch_7_0_i26);
MR_def_label(transform_hlds__stm_expand__create_or_else_end_branch_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__stm_rollback_exception_functor_0_0,
		transform_hlds__stm_expand__create_or_else_end_branch_7_0_i27);
MR_def_label(transform_hlds__stm_expand__create_or_else_end_branch_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__stm_rollback_exception_type_0_0,
		transform_hlds__stm_expand__create_or_else_end_branch_7_0_i28);
MR_def_label(transform_hlds__stm_expand__create_or_else_end_branch_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,5,11);
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_aux_variable_assignment_7_0,
		transform_hlds__stm_expand__create_or_else_end_branch_7_0_i30);
MR_def_label(transform_hlds__stm_expand__create_or_else_end_branch_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_exception_module_0_0,
		transform_hlds__stm_expand__create_or_else_end_branch_7_0_i31);
MR_def_label(transform_hlds__stm_expand__create_or_else_end_branch_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(6);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_sv(4) = MR_r1;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_bind_vars_1_0,
		transform_hlds__stm_expand__create_or_else_end_branch_7_0_i34);
MR_def_label(transform_hlds__stm_expand__create_or_else_end_branch_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("throw", 5);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 6;
	MR_r6 = (MR_Integer) 0;
	MR_r7 = MR_sv(6);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_sv(7);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_simple_call_12_0,
		transform_hlds__stm_expand__create_or_else_end_branch_7_0_i35);
MR_def_label(transform_hlds__stm_expand__create_or_else_end_branch_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(3);
	MR_tfield(1, MR_r1, 1) = MR_tempr2;
	MR_sv(3) = MR_r2;
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_plain_conj_2_0,
		transform_hlds__stm_expand__create_or_else_end_branch_7_0_i39);
MR_def_label(transform_hlds__stm_expand__create_or_else_end_branch_7_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__template_lock_and_validate_many_7_0,
		transform_hlds__stm_expand__create_or_else_end_branch_7_0_i40);
MR_def_label(transform_hlds__stm_expand__create_or_else_end_branch_7_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_plain_conj_2_0,
		transform_hlds__stm_expand__create_or_else_end_branch_7_0_i41);
MR_def_label(transform_hlds__stm_expand__create_or_else_end_branch_7_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_determinism_1_0);

MR_BEGIN_MODULE(transform_hlds__stm_expand_module28)
	MR_init_entry1(transform_hlds__stm_expand__create_promise_purity_scope_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__stm_expand__create_promise_purity_scope_3_0);
	MR_init_label5(transform_hlds__stm_expand__create_promise_purity_scope_3_0,2,3,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_promise_purity_scope'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__stm_expand__create_promise_purity_scope_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		transform_hlds__stm_expand__create_promise_purity_scope_3_0_i2);
MR_def_label(transform_hlds__stm_expand__create_promise_purity_scope_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		transform_hlds__stm_expand__create_promise_purity_scope_3_0_i3);
MR_def_label(transform_hlds__stm_expand__create_promise_purity_scope_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		transform_hlds__stm_expand__create_promise_purity_scope_3_0_i4);
MR_def_label(transform_hlds__stm_expand__create_promise_purity_scope_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		transform_hlds__stm_expand__create_promise_purity_scope_3_0_i5);
MR_def_label(transform_hlds__stm_expand__create_promise_purity_scope_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_6_0,
		transform_hlds__stm_expand__create_promise_purity_scope_3_0_i6);
MR_def_label(transform_hlds__stm_expand__create_promise_purity_scope_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__quantification__requantify_proc_general_3_0);
MR_decl_entry(check_hlds__mode_util__recompute_instmap_delta_proc_5_0);

MR_BEGIN_MODULE(transform_hlds__stm_expand_module29)
	MR_init_entry1(transform_hlds__stm_expand__run_quantification_over_pred_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__stm_expand__run_quantification_over_pred_2_0);
	MR_init_label2(transform_hlds__stm_expand__run_quantification_over_pred_2_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'run_quantification_over_pred'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__stm_expand__run_quantification_over_pred_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tfield(0, MR_sv(2), 4);
	MR_np_call_localret_ent(hlds__quantification__requantify_proc_general_3_0,
		transform_hlds__stm_expand__run_quantification_over_pred_2_0_i2);
MR_def_label(transform_hlds__stm_expand__run_quantification_over_pred_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__recompute_instmap_delta_proc_5_0,
		transform_hlds__stm_expand__run_quantification_over_pred_2_0_i3);
MR_def_label(transform_hlds__stm_expand__run_quantification_over_pred_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tempr2 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr2, 6);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_get_varset_2_0);
MR_decl_entry(varset__select_3_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_varset_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_goal_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_vartypes_3_0);

MR_BEGIN_MODULE(transform_hlds__stm_expand_module30)
	MR_init_entry1(transform_hlds__stm_expand__new_pred_set_goal_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__stm_expand__new_pred_set_goal_3_0);
	MR_init_label8(transform_hlds__stm_expand__new_pred_set_goal_3_0,2,3,4,5,7,8,9,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'new_pred_set_goal'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__stm_expand__new_pred_set_goal_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r2, 4);
	MR_sv(5) = MR_r2;
	MR_np_call_localret_ent(hlds__goal_util__goal_vars_2_0,
		transform_hlds__stm_expand__new_pred_set_goal_3_0_i2);
MR_def_label(transform_hlds__stm_expand__new_pred_set_goal_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		transform_hlds__stm_expand__new_pred_set_goal_3_0_i3);
MR_def_label(transform_hlds__stm_expand__new_pred_set_goal_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__stm_expand__new_pred_set_goal_3_0_i4);
MR_def_label(transform_hlds__stm_expand__new_pred_set_goal_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(varset__select_3_0,
		transform_hlds__stm_expand__new_pred_set_goal_3_0_i5);
MR_def_label(transform_hlds__stm_expand__new_pred_set_goal_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__stm_expand__new_pred_set_goal_3_0_i7);
MR_def_label(transform_hlds__stm_expand__new_pred_set_goal_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_varset_3_0,
		transform_hlds__stm_expand__new_pred_set_goal_3_0_i8);
MR_def_label(transform_hlds__stm_expand__new_pred_set_goal_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		transform_hlds__stm_expand__new_pred_set_goal_3_0_i9);
MR_def_label(transform_hlds__stm_expand__new_pred_set_goal_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_vartypes_3_0,
		transform_hlds__stm_expand__new_pred_set_goal_3_0_i10);
MR_def_label(transform_hlds__stm_expand__new_pred_set_goal_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 7);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r2, 4) = MR_r1;
	MR_tfield(0, MR_r2, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_tfield(0, MR_r2, 6) = MR_tfield(0, MR_tempr1, 6);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
MR_decl_entry(list__length_2_0);
MR_decl_entry(hlds__goal_util__flatten_conj_2_0);

MR_BEGIN_MODULE(transform_hlds__stm_expand_module31)
	MR_init_entry1(transform_hlds__stm_expand__create_or_else_pred_2_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__stm_expand__create_or_else_pred_2_8_0);
	MR_init_label10(transform_hlds__stm_expand__create_or_else_pred_2_8_0,2,3,4,5,6,8,9,10,11,13)
	MR_init_label10(transform_hlds__stm_expand__create_or_else_pred_2_8_0,14,16,17,18,19,20,21,22,23,24)
	MR_init_label1(transform_hlds__stm_expand__create_or_else_pred_2_8_0,28)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_or_else_pred_2'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__stm_expand__create_or_else_pred_2_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_np_call_localret_ent(list__length_2_0,
		transform_hlds__stm_expand__create_or_else_pred_2_8_0_i2);
MR_def_label(transform_hlds__stm_expand__create_or_else_pred_2_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_or_else_inner_stm_vars_4_0,
		transform_hlds__stm_expand__create_or_else_pred_2_8_0_i3);
MR_def_label(transform_hlds__stm_expand__create_or_else_pred_2_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(10) = MR_tfield(0, MR_r2, 1);
	MR_sv(11) = MR_tfield(0, MR_r2, 2);
	MR_sv(8) = MR_tfield(0, MR_r2, 3);
	MR_sv(9) = MR_tfield(0, MR_r2, 4);
	MR_sv(12) = MR_tfield(0, MR_r2, 5);
	MR_sv(13) = MR_tfield(0, MR_r2, 6);
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__polymorphism__create_poly_info_4_0,
		transform_hlds__stm_expand__create_or_else_pred_2_8_0_i4);
MR_def_label(transform_hlds__stm_expand__create_or_else_pred_2_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__polymorphism__polymorphism_make_type_info_var_6_0,
		transform_hlds__stm_expand__create_or_else_pred_2_8_0_i5);
MR_def_label(transform_hlds__stm_expand__create_or_else_pred_2_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_tempr2 = MR_sv(9);
	MR_sv(9) = MR_r2;
	MR_r1 = MR_r3;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__polymorphism__poly_info_extract_6_0,
		transform_hlds__stm_expand__create_or_else_pred_2_8_0_i6);
MR_def_label(transform_hlds__stm_expand__create_or_else_pred_2_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr1, 0) = MR_r3;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_tfield(0, MR_tempr1, 5) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(13);
	MR_sv(10) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__stm_rollback_exception_type_0_0,
		transform_hlds__stm_expand__create_or_else_pred_2_8_0_i8);
MR_def_label(transform_hlds__stm_expand__create_or_else_pred_2_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_sv(12) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(13) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(11) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(14) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(15) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(16) = MR_tfield(0, MR_tempr1, 6);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(14);
	}
	MR_np_call_localret_ent(check_hlds__polymorphism__create_poly_info_4_0,
		transform_hlds__stm_expand__create_or_else_pred_2_8_0_i9);
MR_def_label(transform_hlds__stm_expand__create_or_else_pred_2_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(15);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__polymorphism__polymorphism_make_type_info_var_6_0,
		transform_hlds__stm_expand__create_or_else_pred_2_8_0_i10);
MR_def_label(transform_hlds__stm_expand__create_or_else_pred_2_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(11);
	MR_sv(11) = MR_r2;
	MR_r1 = MR_r3;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(14);
	}
	MR_np_call_localret_ent(check_hlds__polymorphism__poly_info_extract_6_0,
		transform_hlds__stm_expand__create_or_else_pred_2_8_0_i11);
MR_def_label(transform_hlds__stm_expand__create_or_else_pred_2_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r3;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(13);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_tfield(0, MR_tempr1, 5) = MR_sv(15);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(16);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(10);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_or_else_end_branch_7_0,
		transform_hlds__stm_expand__create_or_else_pred_2_8_0_i13);
MR_def_label(transform_hlds__stm_expand__create_or_else_pred_2_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(10);
	MR_r8 = MR_sv(2);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_sv(6);
	MR_r11 = MR_tempr2;
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_or_else_branches_13_0,
		transform_hlds__stm_expand__create_or_else_pred_2_8_0_i14);
MR_def_label(transform_hlds__stm_expand__create_or_else_pred_2_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(11);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__stm_expand__create_or_else_pred_2_8_0_i16);
MR_def_label(transform_hlds__stm_expand__create_or_else_pred_2_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__stm_expand__create_or_else_pred_2_8_0_i17);
MR_def_label(transform_hlds__stm_expand__create_or_else_pred_2_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__goal_util__flatten_conj_2_0,
		transform_hlds__stm_expand__create_or_else_pred_2_8_0_i18);
MR_def_label(transform_hlds__stm_expand__create_or_else_pred_2_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_plain_conj_2_0,
		transform_hlds__stm_expand__create_or_else_pred_2_8_0_i19);
MR_def_label(transform_hlds__stm_expand__create_or_else_pred_2_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		transform_hlds__stm_expand__create_or_else_pred_2_8_0_i20);
MR_def_label(transform_hlds__stm_expand__create_or_else_pred_2_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		transform_hlds__stm_expand__create_or_else_pred_2_8_0_i21);
MR_def_label(transform_hlds__stm_expand__create_or_else_pred_2_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		transform_hlds__stm_expand__create_or_else_pred_2_8_0_i22);
MR_def_label(transform_hlds__stm_expand__create_or_else_pred_2_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		transform_hlds__stm_expand__create_or_else_pred_2_8_0_i23);
MR_def_label(transform_hlds__stm_expand__create_or_else_pred_2_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(3);
	MR_r4 = (MR_Integer) 0;
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_6_0,
		transform_hlds__stm_expand__create_or_else_pred_2_8_0_i24);
MR_def_label(transform_hlds__stm_expand__create_or_else_pred_2_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(2,6,1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__new_pred_set_goal_3_0,
		transform_hlds__stm_expand__create_or_else_pred_2_8_0_i28);
MR_def_label(transform_hlds__stm_expand__create_or_else_pred_2_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(transform_hlds__stm_expand__run_quantification_over_pred_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__builtin_lib_types__stm_dummy_output_type_0_0);

MR_BEGIN_MODULE(transform_hlds__stm_expand_module32)
	MR_init_entry1(transform_hlds__stm_expand__make_return_type_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__stm_expand__make_return_type_2_0);
	MR_init_label2(transform_hlds__stm_expand__make_return_type_2_0,3,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_return_type'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__stm_expand__make_return_type_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__make_return_type_2_0_i3);
	}
	MR_np_tailcall_ent(fn__parse_tree__builtin_lib_types__stm_dummy_output_type_0_0);
MR_def_label(transform_hlds__stm_expand__make_return_type_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__make_return_type_2_0_i6);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_proceed();
MR_def_label(transform_hlds__stm_expand__make_return_type_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_tfield(3, MR_r2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__pred_info_proc_info_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_context_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_inst_varset_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_inferred_determinism_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_rtti_varmaps_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_var_name_remap_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_create_13_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_module_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_name_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_context_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_origin_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_typevarset_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_class_context_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_assertions_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_markers_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_create_16_0);
MR_decl_entry(hlds__hlds_module__module_info_get_predicate_table_2_0);
MR_decl_entry(hlds__pred_table__predicate_table_insert_4_0);
MR_decl_entry(hlds__hlds_module__module_info_set_predicate_table_3_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_purity_1_0);

MR_BEGIN_MODULE(transform_hlds__stm_expand_module33)
	MR_init_entry1(transform_hlds__stm_expand__create_cloned_pred_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__stm_expand__create_cloned_pred_10_0);
	MR_init_label10(transform_hlds__stm_expand__create_cloned_pred_10_0,3,4,5,6,7,8,11,10,9,12)
	MR_init_label10(transform_hlds__stm_expand__create_cloned_pred_10_0,13,14,15,16,17,18,19,20,21,22)
	MR_init_label10(transform_hlds__stm_expand__create_cloned_pred_10_0,23,24,25,26,27,28,29,30,31,33)
	MR_init_label10(transform_hlds__stm_expand__create_cloned_pred_10_0,35,36,37,38,39,40,41,42,43,45)
	MR_init_label5(transform_hlds__stm_expand__create_cloned_pred_10_0,46,47,48,49,50)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_cloned_pred'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__stm_expand__create_cloned_pred_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(22);
	MR_sv(22) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(7) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(9) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(10) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(11) = MR_tfield(0, MR_tempr1, 6);
	MR_sv(19) = MR_tempr1;
	MR_sv(20) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(21) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r1 = MR_sv(21);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__length_2_0,
		transform_hlds__stm_expand__create_cloned_pred_10_0_i3);
MR_def_label(transform_hlds__stm_expand__create_cloned_pred_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_tempr2 = MR_sv(9);
	MR_sv(9) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_proc_info_3_0,
		transform_hlds__stm_expand__create_cloned_pred_10_0_i4);
MR_def_label(transform_hlds__stm_expand__create_cloned_pred_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_context_2_0,
		transform_hlds__stm_expand__create_cloned_pred_10_0_i5);
MR_def_label(transform_hlds__stm_expand__create_cloned_pred_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		transform_hlds__stm_expand__create_cloned_pred_10_0_i6);
MR_def_label(transform_hlds__stm_expand__create_cloned_pred_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__stm_expand__create_cloned_pred_10_0_i7);
MR_def_label(transform_hlds__stm_expand__create_cloned_pred_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_inst_varset_2_0,
		transform_hlds__stm_expand__create_cloned_pred_10_0_i8);
MR_def_label(transform_hlds__stm_expand__create_cloned_pred_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__create_cloned_pred_10_0_i10);
	}
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_inferred_determinism_2_0,
		transform_hlds__stm_expand__create_cloned_pred_10_0_i11);
MR_def_label(transform_hlds__stm_expand__create_cloned_pred_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(18) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_GOTO_LAB(transform_hlds__stm_expand__create_cloned_pred_10_0_i9);
MR_def_label(transform_hlds__stm_expand__create_cloned_pred_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(12);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r2;
	MR_sv(18) = MR_tfield(1, MR_tempr1, 0);
	}
MR_def_label(transform_hlds__stm_expand__create_cloned_pred_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__stm_expand__create_cloned_pred_10_0_i12);
MR_def_label(transform_hlds__stm_expand__create_cloned_pred_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_rtti_varmaps_2_0,
		transform_hlds__stm_expand__create_cloned_pred_10_0_i13);
MR_def_label(transform_hlds__stm_expand__create_cloned_pred_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(12);
	MR_sv(12) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_var_name_remap_2_0,
		transform_hlds__stm_expand__create_cloned_pred_10_0_i14);
MR_def_label(transform_hlds__stm_expand__create_cloned_pred_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(15);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(3);
	MR_r7 = (MR_Integer) 2;
	MR_r8 = MR_sv(18);
	MR_r9 = MR_sv(16);
	MR_r10 = MR_sv(12);
	MR_r11 = (MR_Integer) 1;
	MR_r12 = MR_sv(6);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_create_13_0,
		transform_hlds__stm_expand__create_cloned_pred_10_0_i15);
MR_def_label(transform_hlds__stm_expand__create_cloned_pred_10_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_module_1_0,
		transform_hlds__stm_expand__create_cloned_pred_10_0_i16);
MR_def_label(transform_hlds__stm_expand__create_cloned_pred_10_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		transform_hlds__stm_expand__create_cloned_pred_10_0_i17);
MR_def_label(transform_hlds__stm_expand__create_cloned_pred_10_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		transform_hlds__stm_expand__create_cloned_pred_10_0_i18);
MR_def_label(transform_hlds__stm_expand__create_cloned_pred_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_context_2_0,
		transform_hlds__stm_expand__create_cloned_pred_10_0_i19);
MR_def_label(transform_hlds__stm_expand__create_cloned_pred_10_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_sv(17) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r1 = MR_sv(17);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__string_1_0,
		transform_hlds__stm_expand__create_cloned_pred_10_0_i20);
MR_def_label(transform_hlds__stm_expand__create_cloned_pred_10_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(fn__string__string_1_0,
		transform_hlds__stm_expand__create_cloned_pred_10_0_i21);
MR_def_label(transform_hlds__stm_expand__create_cloned_pred_10_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(fn__string__string_1_0,
		transform_hlds__stm_expand__create_cloned_pred_10_0_i22);
MR_def_label(transform_hlds__stm_expand__create_cloned_pred_10_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__stm_expand__create_cloned_pred_10_0_i23);
MR_def_label(transform_hlds__stm_expand__create_cloned_pred_10_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(17);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__stm_expand__create_cloned_pred_10_0_i24);
MR_def_label(transform_hlds__stm_expand__create_cloned_pred_10_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__stm_expand__create_cloned_pred_10_0_i25);
MR_def_label(transform_hlds__stm_expand__create_cloned_pred_10_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__stm_expand__create_cloned_pred_10_0_i26);
MR_def_label(transform_hlds__stm_expand__create_cloned_pred_10_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__stm_expand__create_cloned_pred_10_0_i27);
MR_def_label(transform_hlds__stm_expand__create_cloned_pred_10_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__stm_expand__create_cloned_pred_10_0_i28);
MR_def_label(transform_hlds__stm_expand__create_cloned_pred_10_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__stm_expand__create_cloned_pred_10_0_i29);
MR_def_label(transform_hlds__stm_expand__create_cloned_pred_10_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__stm_expand__create_cloned_pred_10_0_i30);
MR_def_label(transform_hlds__stm_expand__create_cloned_pred_10_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("StmExpanded_", 12);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__stm_expand__create_cloned_pred_10_0_i31);
MR_def_label(transform_hlds__stm_expand__create_cloned_pred_10_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(4) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(13);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(8);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_origin_2_0,
		transform_hlds__stm_expand__create_cloned_pred_10_0_i33);
MR_def_label(transform_hlds__stm_expand__create_cloned_pred_10_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 3);
	MR_tfield(2, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(2, MR_r2, 1) = MR_r1;
	MR_tfield(2, MR_r2, 2) = MR_sv(10);
	MR_sv(10) = MR_r2;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_typevarset_2_0,
		transform_hlds__stm_expand__create_cloned_pred_10_0_i35);
MR_def_label(transform_hlds__stm_expand__create_cloned_pred_10_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_0,
		transform_hlds__stm_expand__create_cloned_pred_10_0_i36);
MR_def_label(transform_hlds__stm_expand__create_cloned_pred_10_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_class_context_2_0,
		transform_hlds__stm_expand__create_cloned_pred_10_0_i37);
MR_def_label(transform_hlds__stm_expand__create_cloned_pred_10_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_assertions_2_0,
		transform_hlds__stm_expand__create_cloned_pred_10_0_i38);
MR_def_label(transform_hlds__stm_expand__create_cloned_pred_10_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		transform_hlds__stm_expand__create_cloned_pred_10_0_i39);
MR_def_label(transform_hlds__stm_expand__create_cloned_pred_10_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(15);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(10);
	MR_r6 = (MR_Word) MR_tbmkword(0, 8);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_sv(2);
	MR_r9 = MR_sv(14);
	MR_r10 = MR_sv(16);
	MR_r11 = MR_sv(17);
	MR_r12 = MR_sv(8);
	MR_r13 = MR_sv(6);
	MR_r14 = MR_sv(12);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_create_16_0,
		transform_hlds__stm_expand__create_cloned_pred_10_0_i40);
MR_def_label(transform_hlds__stm_expand__create_cloned_pred_10_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_predicate_table_2_0,
		transform_hlds__stm_expand__create_cloned_pred_10_0_i41);
MR_def_label(transform_hlds__stm_expand__create_cloned_pred_10_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_insert_4_0,
		transform_hlds__stm_expand__create_cloned_pred_10_0_i42);
MR_def_label(transform_hlds__stm_expand__create_cloned_pred_10_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_predicate_table_3_0,
		transform_hlds__stm_expand__create_cloned_pred_10_0_i43);
MR_def_label(transform_hlds__stm_expand__create_cloned_pred_10_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 6);
	MR_sv(8) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 3) = (MR_Integer) 2;
	MR_tfield(1, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr1, 5) = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(21);
	}
	MR_np_call_localret_ent(set__init_1_0,
		transform_hlds__stm_expand__create_cloned_pred_10_0_i45);
MR_def_label(transform_hlds__stm_expand__create_cloned_pred_10_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(20);
	MR_r2 = MR_sv(21);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__stm_expand__create_cloned_pred_10_0_i46);
MR_def_label(transform_hlds__stm_expand__create_cloned_pred_10_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(1, MR_sv(8), 2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_from_mode_list_4_0,
		transform_hlds__stm_expand__create_cloned_pred_10_0_i47);
MR_def_label(transform_hlds__stm_expand__create_cloned_pred_10_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_purity_1_0,
		transform_hlds__stm_expand__create_cloned_pred_10_0_i48);
MR_def_label(transform_hlds__stm_expand__create_cloned_pred_10_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		transform_hlds__stm_expand__create_cloned_pred_10_0_i49);
MR_def_label(transform_hlds__stm_expand__create_cloned_pred_10_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(18);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_6_0,
		transform_hlds__stm_expand__create_cloned_pred_10_0_i50);
MR_def_label(transform_hlds__stm_expand__create_cloned_pred_10_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(8);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_sv(4);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tempr3 = MR_sv(19);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr3, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr3, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr3, 5);
	MR_tfield(0, MR_tempr1, 6) = ((MR_Integer) MR_sv(11) + (MR_Integer) 1);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_r1, 0) = MR_tempr2;
	MR_tfield(0, MR_r1, 1) = MR_sv(6);
	MR_tfield(0, MR_r1, 2) = MR_sv(2);
	MR_tfield(0, MR_r1, 3) = MR_sv(5);
	MR_tfield(0, MR_r1, 4) = MR_sv(12);
	MR_tfield(0, MR_r1, 5) = MR_sv(1);
	MR_tfield(0, MR_r1, 6) = (MR_Integer) 0;
	MR_decr_sp_and_return(22);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_set_headvars_3_0);

MR_BEGIN_MODULE(transform_hlds__stm_expand_module34)
	MR_init_entry1(transform_hlds__stm_expand__set_head_vars_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__stm_expand__set_head_vars_3_0);
	MR_init_label1(transform_hlds__stm_expand__set_head_vars_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_head_vars'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__stm_expand__set_head_vars_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r2 = MR_tfield(0, MR_r2, 4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_headvars_3_0,
		transform_hlds__stm_expand__set_head_vars_3_0_i2);
MR_def_label(transform_hlds__stm_expand__set_head_vars_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 7);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r2, 4) = MR_r1;
	MR_tfield(0, MR_r2, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_tfield(0, MR_r2, 6) = MR_tfield(0, MR_tempr1, 6);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_set_pred_proc_info_6_0);

MR_BEGIN_MODULE(transform_hlds__stm_expand_module35)
	MR_init_entry1(transform_hlds__stm_expand__commit_new_pred_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__stm_expand__commit_new_pred_3_0);
	MR_init_label1(transform_hlds__stm_expand__commit_new_pred_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'commit_new_pred'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__stm_expand__commit_new_pred_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r2, 1);
	MR_sv(2) = MR_tfield(0, MR_r2, 2);
	MR_sv(3) = MR_tfield(0, MR_r2, 3);
	MR_sv(4) = MR_tfield(0, MR_r2, 4);
	MR_sv(5) = MR_tfield(0, MR_r2, 5);
	MR_sv(6) = MR_tfield(0, MR_r2, 6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_r2 = MR_tfield(0, MR_tempr1, 2);
	MR_r3 = MR_tfield(0, MR_tempr1, 3);
	MR_r4 = MR_tfield(0, MR_tempr1, 4);
	MR_r5 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_pred_proc_info_6_0,
		transform_hlds__stm_expand__commit_new_pred_3_0_i2);
MR_def_label(transform_hlds__stm_expand__commit_new_pred_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 7);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = MR_sv(1);
	MR_tfield(0, MR_r2, 2) = MR_sv(2);
	MR_tfield(0, MR_r2, 3) = MR_sv(3);
	MR_tfield(0, MR_r2, 4) = MR_sv(4);
	MR_tfield(0, MR_r2, 5) = MR_sv(5);
	MR_tfield(0, MR_r2, 6) = MR_sv(6);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__true_goal_0_0);

MR_BEGIN_MODULE(transform_hlds__stm_expand_module36)
	MR_init_entry1(transform_hlds__stm_expand__create_or_else_pred_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__stm_expand__create_or_else_pred_8_0);
	MR_init_label10(transform_hlds__stm_expand__create_or_else_pred_8_0,3,4,5,6,9,8,13,7,19,20)
	MR_init_label10(transform_hlds__stm_expand__create_or_else_pred_8_0,21,22,25,26,27,28,31,32,33,34)
	MR_init_label9(transform_hlds__stm_expand__create_or_else_pred_8_0,35,37,38,40,43,44,45,46,47)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_or_else_pred'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__stm_expand__create_or_else_pred_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(11) = MR_r6;
	MR_sv(13) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_sv(6) = MR_tfield(0, MR_r1, 2);
	MR_r1 = MR_sv(13);
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		transform_hlds__stm_expand__create_or_else_pred_8_0_i3);
MR_def_label(transform_hlds__stm_expand__create_or_else_pred_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		transform_hlds__stm_expand__create_or_else_pred_8_0_i4);
MR_def_label(transform_hlds__stm_expand__create_or_else_pred_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(transform_hlds__stm_expand__get_input_output_types_4_0,
		transform_hlds__stm_expand__create_or_else_pred_8_0_i5);
MR_def_label(transform_hlds__stm_expand__create_or_else_pred_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__get_input_output_modes_3_0,
		transform_hlds__stm_expand__create_or_else_pred_8_0_i6);
MR_def_label(transform_hlds__stm_expand__create_or_else_pred_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(8),0,0)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__create_or_else_pred_8_0_i8);
	}
	MR_sv(9) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__stm_dummy_output_type_0_0,
		transform_hlds__stm_expand__create_or_else_pred_8_0_i9);
MR_def_label(transform_hlds__stm_expand__create_or_else_pred_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r2 = MR_sv(7);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_GOTO_LAB(transform_hlds__stm_expand__create_or_else_pred_8_0_i7);
	}
MR_def_label(transform_hlds__stm_expand__create_or_else_pred_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(8);
	MR_r3 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__create_or_else_pred_8_0_i13);
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(10) = MR_r2;
	MR_r2 = MR_sv(7);
	MR_sv(9) = MR_r1;
	MR_sv(4) = MR_tfield(1, MR_tempr3, 0);
	MR_r3 = MR_tempr2;
	MR_r1 = MR_sv(13);
	MR_GOTO_LAB(transform_hlds__stm_expand__create_or_else_pred_8_0_i7);
	}
MR_def_label(transform_hlds__stm_expand__create_or_else_pred_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(8);
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_sv(10) = MR_r2;
	MR_r2 = MR_sv(7);
	MR_sv(9) = MR_r1;
	MR_sv(4) = MR_tempr1;
	MR_r3 = MR_tempr3;
	MR_r1 = MR_sv(13);
	}
MR_def_label(transform_hlds__stm_expand__create_or_else_pred_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	MR_sv(13) = MR_r1;
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__stm_expand__create_or_else_pred_8_0_i19);
MR_def_label(transform_hlds__stm_expand__create_or_else_pred_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__stm_expand__create_or_else_pred_8_0_i20);
MR_def_label(transform_hlds__stm_expand__create_or_else_pred_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__stm_state_type_0_0,
		transform_hlds__stm_expand__create_or_else_pred_8_0_i21);
MR_def_label(transform_hlds__stm_expand__create_or_else_pred_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__stm_state_type_0_0,
		transform_hlds__stm_expand__create_or_else_pred_8_0_i22);
MR_def_label(transform_hlds__stm_expand__create_or_else_pred_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(12);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(8);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__stm_expand__create_or_else_pred_8_0_i25);
MR_def_label(transform_hlds__stm_expand__create_or_else_pred_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__stm_expand__create_or_else_pred_8_0_i26);
MR_def_label(transform_hlds__stm_expand__create_or_else_pred_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__di_mode_0_0,
		transform_hlds__stm_expand__create_or_else_pred_8_0_i27);
MR_def_label(transform_hlds__stm_expand__create_or_else_pred_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__uo_mode_0_0,
		transform_hlds__stm_expand__create_or_else_pred_8_0_i28);
MR_def_label(transform_hlds__stm_expand__create_or_else_pred_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_sv(10);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__stm_expand__create_or_else_pred_8_0_i31);
MR_def_label(transform_hlds__stm_expand__create_or_else_pred_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__stm_expand__create_or_else_pred_8_0_i32);
MR_def_label(transform_hlds__stm_expand__create_or_else_pred_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__true_goal_0_0,
		transform_hlds__stm_expand__create_or_else_pred_8_0_i33);
MR_def_label(transform_hlds__stm_expand__create_or_else_pred_8_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(8);
	MR_r4 = (MR_Word) MR_string_const("or_else", 7);
	MR_r5 = MR_tempr1;
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = MR_sv(11);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_cloned_pred_10_0,
		transform_hlds__stm_expand__create_or_else_pred_8_0_i34);
MR_def_label(transform_hlds__stm_expand__create_or_else_pred_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_sv(9) = MR_r3;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__stm_state_type_0_0,
		transform_hlds__stm_expand__create_or_else_pred_8_0_i35);
MR_def_label(transform_hlds__stm_expand__create_or_else_pred_8_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,5,12);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_aux_variable_5_0,
		transform_hlds__stm_expand__create_or_else_pred_8_0_i37);
MR_def_label(transform_hlds__stm_expand__create_or_else_pred_8_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__stm_state_type_0_0,
		transform_hlds__stm_expand__create_or_else_pred_8_0_i38);
MR_def_label(transform_hlds__stm_expand__create_or_else_pred_8_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,5,13);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_aux_variable_5_0,
		transform_hlds__stm_expand__create_or_else_pred_8_0_i40);
MR_def_label(transform_hlds__stm_expand__create_or_else_pred_8_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tempr3 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_tempr3;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__stm_expand__create_or_else_pred_8_0_i43);
MR_def_label(transform_hlds__stm_expand__create_or_else_pred_8_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__stm_expand__create_or_else_pred_8_0_i44);
MR_def_label(transform_hlds__stm_expand__create_or_else_pred_8_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(transform_hlds__stm_expand__set_head_vars_3_0,
		transform_hlds__stm_expand__create_or_else_pred_8_0_i45);
MR_def_label(transform_hlds__stm_expand__create_or_else_pred_8_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(9);
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_or_else_pred_2_8_0,
		transform_hlds__stm_expand__create_or_else_pred_8_0_i46);
MR_def_label(transform_hlds__stm_expand__create_or_else_pred_8_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(transform_hlds__stm_expand__commit_new_pred_3_0,
		transform_hlds__stm_expand__create_or_else_pred_8_0_i47);
MR_def_label(transform_hlds__stm_expand__create_or_else_pred_8_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(14);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__stm_expand_module37)
	MR_init_entry1(transform_hlds__stm_expand__create_aux_variable_stm_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__stm_expand__create_aux_variable_stm_5_0);
	MR_init_label3(transform_hlds__stm_expand__create_aux_variable_stm_5_0,3,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_aux_variable_stm'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__stm_expand__create_aux_variable_stm_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__create_aux_variable_stm_5_0_i3);
	}
	MR_sv(3) = MR_r3;
	MR_r3 = MR_tfield(0, MR_r3, 3);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_create_var_from_type_5_0,
		transform_hlds__stm_expand__create_aux_variable_stm_5_0_i6);
MR_def_label(transform_hlds__stm_expand__create_aux_variable_stm_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_r2 = (MR_Word) MR_string_const("_Aux_STM", 8);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__stm_expand__create_aux_variable_stm_5_0_i4);
MR_def_label(transform_hlds__stm_expand__create_aux_variable_stm_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_create_var_from_type_5_0,
		transform_hlds__stm_expand__create_aux_variable_stm_5_0_i6);
MR_def_label(transform_hlds__stm_expand__create_aux_variable_stm_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tempr2 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr2, 6);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__stm_expand_module38)
	MR_init_entry1(transform_hlds__stm_expand__create_var_unify_stm_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__stm_expand__create_var_unify_stm_6_0);
	MR_init_label5(transform_hlds__stm_expand__create_var_unify_stm_6_0,10,13,14,15,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_var_unify_stm'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__stm_expand__create_var_unify_stm_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_sv(5) = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tfield(2, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_sv(6), 0, (MR_Integer) 1);
	MR_tfield(0, MR_sv(6), 0) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_r1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tempr6 = MR_r3;
	MR_tfield(1, MR_tempr4, 0) = MR_tfield(0, MR_tempr6, 1);
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tfield(0, MR_tempr6, 0);
	MR_tfield(1, MR_tempr5, 1) = MR_tempr4;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr6;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,10,0);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,3,4);
	MR_tempr7 = MR_r4;
	MR_sv(8) = MR_tempr7;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr5;
	MR_r3 = MR_tfield(0, MR_tempr7, 0);
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_from_mode_list_4_0,
		transform_hlds__stm_expand__create_var_unify_stm_6_0_i10);
MR_def_label(transform_hlds__stm_expand__create_var_unify_stm_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_sv(6);
	MR_tfield(0, MR_r2, 2) = MR_sv(3);
	MR_tfield(0, MR_r2, 3) = MR_sv(5);
	MR_tfield(0, MR_r2, 4) = MR_sv(7);
	MR_sv(3) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(set__init_1_0,
		transform_hlds__stm_expand__create_var_unify_stm_6_0_i13);
MR_def_label(transform_hlds__stm_expand__create_var_unify_stm_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__stm_expand__create_var_unify_stm_6_0_i14);
MR_def_label(transform_hlds__stm_expand__create_var_unify_stm_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__stm_expand__create_var_unify_stm_6_0_i15);
MR_def_label(transform_hlds__stm_expand__create_var_unify_stm_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 0;
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_6_0,
		transform_hlds__stm_expand__create_var_unify_stm_6_0_i16);
MR_def_label(transform_hlds__stm_expand__create_var_unify_stm_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(8);
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__builtin_lib_types__stm_validres_invalid_functor_0_0);

MR_BEGIN_MODULE(transform_hlds__stm_expand_module39)
	MR_init_entry1(transform_hlds__stm_expand__template_lock_and_validate_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__stm_expand__template_lock_and_validate_7_0);
	MR_init_label10(transform_hlds__stm_expand__template_lock_and_validate_7_0,2,4,5,6,7,8,16,17,18,20)
	MR_init_label5(transform_hlds__stm_expand__template_lock_and_validate_7_0,24,26,30,31,32)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'template_lock_and_validate'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__stm_expand__template_lock_and_validate_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__stm_valid_result_type_0_0,
		transform_hlds__stm_expand__template_lock_and_validate_7_0_i2);
MR_def_label(transform_hlds__stm_expand__template_lock_and_validate_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,5,14);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_aux_variable_5_0,
		transform_hlds__stm_expand__template_lock_and_validate_7_0_i4);
MR_def_label(transform_hlds__stm_expand__template_lock_and_validate_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_stm_builtin_module_0_0,
		transform_hlds__stm_expand__template_lock_and_validate_7_0_i5);
MR_def_label(transform_hlds__stm_expand__template_lock_and_validate_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_bind_no_var_0_0,
		transform_hlds__stm_expand__template_lock_and_validate_7_0_i6);
MR_def_label(transform_hlds__stm_expand__template_lock_and_validate_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_string_const("stm_lock", 8);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Integer) 2;
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_sv(6);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_simple_call_12_0,
		transform_hlds__stm_expand__template_lock_and_validate_7_0_i7);
MR_def_label(transform_hlds__stm_expand__template_lock_and_validate_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_stm_builtin_module_0_0,
		transform_hlds__stm_expand__template_lock_and_validate_7_0_i8);
MR_def_label(transform_hlds__stm_expand__template_lock_and_validate_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr6 = MR_sv(5);
	MR_tfield(1, MR_r2, 0) = MR_tempr6;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(8) = MR_tempr1;
	MR_tempr7 = MR_sv(1);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr7;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr7;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(3,7,1);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr6;
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr4;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr5;
	}
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_from_assoc_list_1_0,
		transform_hlds__stm_expand__template_lock_and_validate_7_0_i16);
MR_def_label(transform_hlds__stm_expand__template_lock_and_validate_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("stm_validate", 12);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Integer) 2;
	MR_r7 = MR_sv(8);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_sv(7);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_simple_call_12_0,
		transform_hlds__stm_expand__template_lock_and_validate_7_0_i17);
MR_def_label(transform_hlds__stm_expand__template_lock_and_validate_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__stm_validres_valid_functor_0_0,
		transform_hlds__stm_expand__template_lock_and_validate_7_0_i18);
MR_def_label(transform_hlds__stm_expand__template_lock_and_validate_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 2) = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__stm_validres_invalid_functor_0_0,
		transform_hlds__stm_expand__template_lock_and_validate_7_0_i20);
MR_def_label(transform_hlds__stm_expand__template_lock_and_validate_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_tempr2;
	MR_r1 = MR_sv(5);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 2;
	MR_r5 = MR_sv(7);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_switch_disjunction_7_0,
		transform_hlds__stm_expand__template_lock_and_validate_7_0_i24);
MR_def_label(transform_hlds__stm_expand__template_lock_and_validate_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__template_lock_and_validate_7_0_i26);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(6);
	MR_tfield(1, MR_r1, 1) = MR_tempr2;
	MR_decr_sp_and_return(9);
	}
MR_def_label(transform_hlds__stm_expand__template_lock_and_validate_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_stm_builtin_module_0_0,
		transform_hlds__stm_expand__template_lock_and_validate_7_0_i30);
MR_def_label(transform_hlds__stm_expand__template_lock_and_validate_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_bind_no_var_0_0,
		transform_hlds__stm_expand__template_lock_and_validate_7_0_i31);
MR_def_label(transform_hlds__stm_expand__template_lock_and_validate_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("stm_unlock", 10);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Integer) 2;
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_sv(3);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_simple_call_12_0,
		transform_hlds__stm_expand__template_lock_and_validate_7_0_i32);
MR_def_label(transform_hlds__stm_expand__template_lock_and_validate_7_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(6);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__stm_expand_module40)
	MR_init_entry1(transform_hlds__stm_expand__create_validate_exception_goal_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__stm_expand__create_validate_exception_goal_7_0);
	MR_init_label10(transform_hlds__stm_expand__create_validate_exception_goal_7_0,2,3,4,6,9,10,12,13,14,19)
	MR_init_label4(transform_hlds__stm_expand__create_validate_exception_goal_7_0,20,23,24,25)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_validate_exception_goal'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__stm_expand__create_validate_exception_goal_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(6) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(9) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(10) = MR_tfield(0, MR_tempr1, 6);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(8);
	}
	MR_np_call_localret_ent(check_hlds__polymorphism__create_poly_info_4_0,
		transform_hlds__stm_expand__create_validate_exception_goal_7_0_i2);
MR_def_label(transform_hlds__stm_expand__create_validate_exception_goal_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__polymorphism__polymorphism_make_type_info_var_6_0,
		transform_hlds__stm_expand__create_validate_exception_goal_7_0_i3);
MR_def_label(transform_hlds__stm_expand__create_validate_exception_goal_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r2;
	MR_r1 = MR_r3;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(8);
	}
	MR_np_call_localret_ent(check_hlds__polymorphism__poly_info_extract_6_0,
		transform_hlds__stm_expand__create_validate_exception_goal_7_0_i4);
MR_def_label(transform_hlds__stm_expand__create_validate_exception_goal_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr1, 0) = MR_r3;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_tfield(0, MR_tempr1, 5) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(10);
	MR_sv(6) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_exception_module_0_0,
		transform_hlds__stm_expand__create_validate_exception_goal_7_0_i6);
MR_def_label(transform_hlds__stm_expand__create_validate_exception_goal_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_bind_vars_1_0,
		transform_hlds__stm_expand__create_validate_exception_goal_7_0_i9);
MR_def_label(transform_hlds__stm_expand__create_validate_exception_goal_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("rethrow", 7);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 6;
	MR_r6 = (MR_Integer) 0;
	MR_r7 = MR_sv(3);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_sv(6);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_simple_call_12_0,
		transform_hlds__stm_expand__create_validate_exception_goal_7_0_i10);
MR_def_label(transform_hlds__stm_expand__create_validate_exception_goal_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__stm_expand__create_validate_exception_goal_7_0_i12);
MR_def_label(transform_hlds__stm_expand__create_validate_exception_goal_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_plain_conj_2_0,
		transform_hlds__stm_expand__create_validate_exception_goal_7_0_i13);
MR_def_label(transform_hlds__stm_expand__create_validate_exception_goal_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_stm_builtin_module_0_0,
		transform_hlds__stm_expand__create_validate_exception_goal_7_0_i14);
MR_def_label(transform_hlds__stm_expand__create_validate_exception_goal_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(6) = MR_tempr1;
	MR_tempr3 = MR_sv(1);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr3;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(3,7,2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_from_assoc_list_1_0,
		transform_hlds__stm_expand__create_validate_exception_goal_7_0_i19);
MR_def_label(transform_hlds__stm_expand__create_validate_exception_goal_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const("stm_discard_transaction_log", 27);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Integer) 2;
	MR_r7 = MR_sv(6);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_sv(3);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_simple_call_12_0,
		transform_hlds__stm_expand__create_validate_exception_goal_7_0_i20);
MR_def_label(transform_hlds__stm_expand__create_validate_exception_goal_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_plain_conj_2_0,
		transform_hlds__stm_expand__create_validate_exception_goal_7_0_i23);
MR_def_label(transform_hlds__stm_expand__create_validate_exception_goal_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__template_lock_and_validate_7_0,
		transform_hlds__stm_expand__create_validate_exception_goal_7_0_i24);
MR_def_label(transform_hlds__stm_expand__create_validate_exception_goal_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_plain_conj_2_0,
		transform_hlds__stm_expand__create_validate_exception_goal_7_0_i25);
MR_def_label(transform_hlds__stm_expand__create_validate_exception_goal_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__instmap__instmap_delta_bind_var_1_0);

MR_BEGIN_MODULE(transform_hlds__stm_expand_module41)
	MR_init_entry1(transform_hlds__stm_expand__create_retry_handler_branch_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__stm_expand__create_retry_handler_branch_5_0);
	MR_init_label10(transform_hlds__stm_expand__create_retry_handler_branch_5_0,2,4,5,6,7,8,9,10,14,15)
	MR_init_label2(transform_hlds__stm_expand__create_retry_handler_branch_5_0,18,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_retry_handler_branch'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__stm_expand__create_retry_handler_branch_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_stm_builtin_module_0_0,
		transform_hlds__stm_expand__create_retry_handler_branch_5_0_i2);
MR_def_label(transform_hlds__stm_expand__create_retry_handler_branch_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(5) = MR_tempr1;
	MR_tempr2 = MR_sv(1);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_bind_var_1_0,
		transform_hlds__stm_expand__create_retry_handler_branch_5_0_i4);
MR_def_label(transform_hlds__stm_expand__create_retry_handler_branch_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("stm_block", 9);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Integer) 2;
	MR_r7 = MR_sv(5);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_sv(3);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_simple_call_12_0,
		transform_hlds__stm_expand__create_retry_handler_branch_5_0_i5);
MR_def_label(transform_hlds__stm_expand__create_retry_handler_branch_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_stm_builtin_module_0_0,
		transform_hlds__stm_expand__create_retry_handler_branch_5_0_i6);
MR_def_label(transform_hlds__stm_expand__create_retry_handler_branch_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_bind_no_var_0_0,
		transform_hlds__stm_expand__create_retry_handler_branch_5_0_i7);
MR_def_label(transform_hlds__stm_expand__create_retry_handler_branch_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_string_const("stm_unlock", 10);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Integer) 2;
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_sv(4);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_simple_call_12_0,
		transform_hlds__stm_expand__create_retry_handler_branch_5_0_i8);
MR_def_label(transform_hlds__stm_expand__create_retry_handler_branch_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__template_lock_and_validate_7_0,
		transform_hlds__stm_expand__create_retry_handler_branch_5_0_i9);
MR_def_label(transform_hlds__stm_expand__create_retry_handler_branch_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_stm_builtin_module_0_0,
		transform_hlds__stm_expand__create_retry_handler_branch_5_0_i10);
MR_def_label(transform_hlds__stm_expand__create_retry_handler_branch_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(3,7,2);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_from_assoc_list_1_0,
		transform_hlds__stm_expand__create_retry_handler_branch_5_0_i14);
MR_def_label(transform_hlds__stm_expand__create_retry_handler_branch_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("stm_discard_transaction_log", 27);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Integer) 2;
	MR_r7 = MR_sv(5);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_sv(4);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_simple_call_12_0,
		transform_hlds__stm_expand__create_retry_handler_branch_5_0_i15);
MR_def_label(transform_hlds__stm_expand__create_retry_handler_branch_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__stm_expand__create_retry_handler_branch_5_0_i18);
MR_def_label(transform_hlds__stm_expand__create_retry_handler_branch_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_plain_conj_2_0,
		transform_hlds__stm_expand__create_retry_handler_branch_5_0_i19);
MR_def_label(transform_hlds__stm_expand__create_retry_handler_branch_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__stm_expand_module42)
	MR_init_entry1(transform_hlds__stm_expand__create_test_on_exception_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__stm_expand__create_test_on_exception_7_0);
	MR_init_label10(transform_hlds__stm_expand__create_test_on_exception_7_0,2,4,5,7,8,9,10,11,13,18)
	MR_init_label10(transform_hlds__stm_expand__create_test_on_exception_7_0,19,22,23,24,25,26,27,28,31,32)
	MR_init_label1(transform_hlds__stm_expand__create_test_on_exception_7_0,33)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_test_on_exception'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__stm_expand__create_test_on_exception_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__univ_type_0_0,
		transform_hlds__stm_expand__create_test_on_exception_7_0_i2);
MR_def_label(transform_hlds__stm_expand__create_test_on_exception_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,5,7);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_aux_variable_5_0,
		transform_hlds__stm_expand__create_test_on_exception_7_0_i4);
MR_def_label(transform_hlds__stm_expand__create_test_on_exception_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__exception_exception_functor_0_0,
		transform_hlds__stm_expand__create_test_on_exception_7_0_i5);
MR_def_label(transform_hlds__stm_expand__create_test_on_exception_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__deconstruct_functor_4_0,
		transform_hlds__stm_expand__create_test_on_exception_7_0_i7);
MR_def_label(transform_hlds__stm_expand__create_test_on_exception_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__stm_rollback_exception_type_0_0,
		transform_hlds__stm_expand__create_test_on_exception_7_0_i8);
MR_def_label(transform_hlds__stm_expand__create_test_on_exception_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_sv(9) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(10) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(11) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(12) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(13) = MR_tfield(0, MR_tempr1, 6);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(11);
	}
	MR_np_call_localret_ent(check_hlds__polymorphism__create_poly_info_4_0,
		transform_hlds__stm_expand__create_test_on_exception_7_0_i9);
MR_def_label(transform_hlds__stm_expand__create_test_on_exception_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__polymorphism__polymorphism_make_type_info_var_6_0,
		transform_hlds__stm_expand__create_test_on_exception_7_0_i10);
MR_def_label(transform_hlds__stm_expand__create_test_on_exception_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r2;
	MR_r1 = MR_r3;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(11);
	}
	MR_np_call_localret_ent(check_hlds__polymorphism__poly_info_extract_6_0,
		transform_hlds__stm_expand__create_test_on_exception_7_0_i11);
MR_def_label(transform_hlds__stm_expand__create_test_on_exception_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr1, 0) = MR_r3;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_tfield(0, MR_tempr1, 5) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(13);
	MR_sv(9) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_stm_builtin_module_0_0,
		transform_hlds__stm_expand__create_test_on_exception_7_0_i13);
MR_def_label(transform_hlds__stm_expand__create_test_on_exception_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(11) = MR_tempr1;
	MR_tempr3 = MR_sv(2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr3;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(3,7,2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_from_assoc_list_1_0,
		transform_hlds__stm_expand__create_test_on_exception_7_0_i18);
MR_def_label(transform_hlds__stm_expand__create_test_on_exception_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Word) MR_string_const("stm_discard_transaction_log", 27);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Integer) 2;
	MR_r7 = MR_sv(11);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_sv(9);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_simple_call_12_0,
		transform_hlds__stm_expand__create_test_on_exception_7_0_i19);
MR_def_label(transform_hlds__stm_expand__create_test_on_exception_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(9) = MR_r2;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_plain_conj_2_0,
		transform_hlds__stm_expand__create_test_on_exception_7_0_i22);
MR_def_label(transform_hlds__stm_expand__create_test_on_exception_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(9);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_validate_exception_goal_7_0,
		transform_hlds__stm_expand__create_test_on_exception_7_0_i23);
MR_def_label(transform_hlds__stm_expand__create_test_on_exception_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tfield(1, MR_sv(11), 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_retry_handler_branch_5_0,
		transform_hlds__stm_expand__create_test_on_exception_7_0_i24);
MR_def_label(transform_hlds__stm_expand__create_test_on_exception_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__stm_rollback_retry_functor_0_0,
		transform_hlds__stm_expand__create_test_on_exception_7_0_i25);
MR_def_label(transform_hlds__stm_expand__create_test_on_exception_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(4);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__template_if_exceptres_is_cons_8_0,
		transform_hlds__stm_expand__create_test_on_exception_7_0_i26);
MR_def_label(transform_hlds__stm_expand__create_test_on_exception_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__stm_rollback_exception_functor_0_0,
		transform_hlds__stm_expand__create_test_on_exception_7_0_i27);
MR_def_label(transform_hlds__stm_expand__create_test_on_exception_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(3);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__template_if_exceptres_is_cons_8_0,
		transform_hlds__stm_expand__create_test_on_exception_7_0_i28);
MR_def_label(transform_hlds__stm_expand__create_test_on_exception_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(2) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(8);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__stm_expand__create_test_on_exception_7_0_i31);
MR_def_label(transform_hlds__stm_expand__create_test_on_exception_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__stm_expand__create_test_on_exception_7_0_i32);
MR_def_label(transform_hlds__stm_expand__create_test_on_exception_7_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_plain_conj_2_0,
		transform_hlds__stm_expand__create_test_on_exception_7_0_i33);
MR_def_label(transform_hlds__stm_expand__create_test_on_exception_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(14);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__stm_expand_module43)
	MR_init_entry1(transform_hlds__stm_expand__create_rollback_handler_goal_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__stm_expand__create_rollback_handler_goal_10_0);
	MR_init_label10(transform_hlds__stm_expand__create_rollback_handler_goal_10_0,2,3,4,5,6,10,11,12,13,17)
	MR_init_label10(transform_hlds__stm_expand__create_rollback_handler_goal_10_0,18,19,20,21,22,24,25,30,31,32)
	MR_init_label9(transform_hlds__stm_expand__create_rollback_handler_goal_10_0,51,52,53,54,59,64,65,66,67)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_rollback_handler_goal'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__stm_expand__create_rollback_handler_goal_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(18);
	MR_sv(18) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(11) = MR_r8;
	MR_np_call_localret_ent(transform_hlds__stm_expand__get_input_output_varlist_3_0,
		transform_hlds__stm_expand__create_rollback_handler_goal_10_0_i2);
MR_def_label(transform_hlds__stm_expand__create_rollback_handler_goal_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(transform_hlds__stm_expand__get_input_output_types_4_0,
		transform_hlds__stm_expand__create_rollback_handler_goal_10_0_i3);
MR_def_label(transform_hlds__stm_expand__create_rollback_handler_goal_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(transform_hlds__stm_expand__get_input_output_modes_3_0,
		transform_hlds__stm_expand__create_rollback_handler_goal_10_0_i4);
MR_def_label(transform_hlds__stm_expand__create_rollback_handler_goal_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__stm_state_type_0_0,
		transform_hlds__stm_expand__create_rollback_handler_goal_10_0_i5);
MR_def_label(transform_hlds__stm_expand__create_rollback_handler_goal_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__stm_state_type_0_0,
		transform_hlds__stm_expand__create_rollback_handler_goal_10_0_i6);
MR_def_label(transform_hlds__stm_expand__create_rollback_handler_goal_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(12);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(9);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__stm_expand__create_rollback_handler_goal_10_0_i10);
MR_def_label(transform_hlds__stm_expand__create_rollback_handler_goal_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__out_mode_0_0,
		transform_hlds__stm_expand__create_rollback_handler_goal_10_0_i11);
MR_def_label(transform_hlds__stm_expand__create_rollback_handler_goal_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__di_mode_0_0,
		transform_hlds__stm_expand__create_rollback_handler_goal_10_0_i12);
MR_def_label(transform_hlds__stm_expand__create_rollback_handler_goal_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__uo_mode_0_0,
		transform_hlds__stm_expand__create_rollback_handler_goal_10_0_i13);
MR_def_label(transform_hlds__stm_expand__create_rollback_handler_goal_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(13);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(12);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_sv(10);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__stm_expand__create_rollback_handler_goal_10_0_i17);
MR_def_label(transform_hlds__stm_expand__create_rollback_handler_goal_10_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(11);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_closure_8_0,
		transform_hlds__stm_expand__create_rollback_handler_goal_10_0_i18);
MR_def_label(transform_hlds__stm_expand__create_rollback_handler_goal_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(transform_hlds__stm_expand__make_type_info_5_0,
		transform_hlds__stm_expand__create_rollback_handler_goal_10_0_i19);
MR_def_label(transform_hlds__stm_expand__create_rollback_handler_goal_10_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_sv(13) = MR_r3;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__exception_result_type_1_0,
		transform_hlds__stm_expand__create_rollback_handler_goal_10_0_i20);
MR_def_label(transform_hlds__stm_expand__create_rollback_handler_goal_10_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__exception_succeeded_functor_0_0,
		transform_hlds__stm_expand__create_rollback_handler_goal_10_0_i21);
MR_def_label(transform_hlds__stm_expand__create_rollback_handler_goal_10_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__exception_exception_functor_0_0,
		transform_hlds__stm_expand__create_rollback_handler_goal_10_0_i22);
MR_def_label(transform_hlds__stm_expand__create_rollback_handler_goal_10_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(11);
	MR_sv(11) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,5,15);
	MR_r3 = MR_sv(13);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_aux_variable_5_0,
		transform_hlds__stm_expand__create_rollback_handler_goal_10_0_i24);
MR_def_label(transform_hlds__stm_expand__create_rollback_handler_goal_10_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_sv(14) = MR_r2;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_stm_builtin_module_0_0,
		transform_hlds__stm_expand__create_rollback_handler_goal_10_0_i25);
MR_def_label(transform_hlds__stm_expand__create_rollback_handler_goal_10_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(16) = MR_tempr1;
	MR_tempr3 = MR_sv(3);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr3;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(3,7,1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(15) = MR_r1;
	MR_sv(17) = (MR_Word) MR_TAG_COMMON(3,7,1);
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_from_assoc_list_1_0,
		transform_hlds__stm_expand__create_rollback_handler_goal_10_0_i30);
MR_def_label(transform_hlds__stm_expand__create_rollback_handler_goal_10_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = (MR_Word) MR_string_const("stm_create_transaction_log", 26);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Integer) 2;
	MR_r7 = MR_sv(16);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_sv(14);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_simple_call_12_0,
		transform_hlds__stm_expand__create_rollback_handler_goal_10_0_i31);
MR_def_label(transform_hlds__stm_expand__create_rollback_handler_goal_10_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_sv(15) = MR_r2;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_exception_module_0_0,
		transform_hlds__stm_expand__create_rollback_handler_goal_10_0_i32);
MR_def_label(transform_hlds__stm_expand__create_rollback_handler_goal_10_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10, MR_tempr11, MR_tempr12, MR_tempr13, MR_tempr14;
	MR_tempr10 = MR_sv(4);
	MR_tfield(1, MR_r2, 0) = MR_tempr10;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr11 = MR_sv(3);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr11;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tempr12 = MR_sv(13);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr12;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tempr13 = MR_sv(5);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr13;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tempr14 = MR_sv(9);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr14;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr5, 0) = MR_tempr14;
	MR_tfield(0, MR_tempr5, 1) = (MR_Word) MR_TAG_COMMON(3,7,0);
	MR_tag_alloc_heap(MR_tempr6, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr6, 0) = MR_tempr13;
	MR_tfield(0, MR_tempr6, 1) = (MR_Word) MR_TAG_COMMON(3,7,0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr12;
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_TAG_COMMON(3,7,0);
	MR_tag_alloc_heap(MR_tempr7, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr7, 0) = MR_tempr11;
	MR_tfield(0, MR_tempr7, 1) = (MR_Word) MR_TAG_COMMON(3,7,2);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr10;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(17);
	MR_tag_alloc_heap(MR_tempr8, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr8, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr8, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr9, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr9, 0) = MR_tempr7;
	MR_tfield(1, MR_tempr9, 1) = MR_tempr8;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr7, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr7, 1) = MR_tempr9;
	MR_tag_alloc_heap(MR_tempr8, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr8, 0) = MR_tempr6;
	MR_tfield(1, MR_tempr8, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr6, 1) = MR_tempr8;
	MR_sv(3) = MR_r1;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(1,6,1);
	MR_sv(9) = MR_tempr4;
	MR_r1 = MR_tempr6;
	}
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_from_assoc_list_1_0,
		transform_hlds__stm_expand__create_rollback_handler_goal_10_0_i51);
MR_def_label(transform_hlds__stm_expand__create_rollback_handler_goal_10_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("unsafe_try_stm", 14);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(5);
	MR_r5 = (MR_Integer) 4;
	MR_r6 = (MR_Integer) 0;
	MR_r7 = MR_sv(9);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_sv(15);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_simple_call_12_0,
		transform_hlds__stm_expand__create_rollback_handler_goal_10_0_i52);
MR_def_label(transform_hlds__stm_expand__create_rollback_handler_goal_10_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(13);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__deconstruct_output_7_0,
		transform_hlds__stm_expand__create_rollback_handler_goal_10_0_i53);
MR_def_label(transform_hlds__stm_expand__create_rollback_handler_goal_10_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(6);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_test_on_exception_7_0,
		transform_hlds__stm_expand__create_rollback_handler_goal_10_0_i54);
MR_def_label(transform_hlds__stm_expand__create_rollback_handler_goal_10_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(12);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 2) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_r1 = MR_sv(13);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 2;
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_switch_disjunction_7_0,
		transform_hlds__stm_expand__create_rollback_handler_goal_10_0_i59);
MR_def_label(transform_hlds__stm_expand__create_rollback_handler_goal_10_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(2) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(14);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(10);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__stm_expand__create_rollback_handler_goal_10_0_i64);
MR_def_label(transform_hlds__stm_expand__create_rollback_handler_goal_10_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__stm_expand__create_rollback_handler_goal_10_0_i65);
MR_def_label(transform_hlds__stm_expand__create_rollback_handler_goal_10_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_plain_conj_2_0,
		transform_hlds__stm_expand__create_rollback_handler_goal_10_0_i66);
MR_def_label(transform_hlds__stm_expand__create_rollback_handler_goal_10_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_promise_purity_scope_3_0,
		transform_hlds__stm_expand__create_rollback_handler_goal_10_0_i67);
MR_def_label(transform_hlds__stm_expand__create_rollback_handler_goal_10_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(18);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(list__foldl5_12_0);
MR_decl_entry(__Unify___term__var_1_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);
MR_decl_entry(hlds__hlds_goal__rename_some_vars_in_goal_3_0);

MR_BEGIN_MODULE(transform_hlds__stm_expand_module44)
	MR_init_entry1(transform_hlds__stm_expand__move_variables_to_new_pred_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__stm_expand__move_variables_to_new_pred_9_0);
	MR_init_label10(transform_hlds__stm_expand__move_variables_to_new_pred_9_0,2,3,4,5,7,8,13,15,14,18)
	MR_init_label6(transform_hlds__stm_expand__move_variables_to_new_pred_9_0,19,21,22,23,24,25)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'move_variables_to_new_pred'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__stm_expand__move_variables_to_new_pred_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_tfield(0, MR_tempr1, 4);
	MR_tempr2 = MR_r6;
	MR_sv(6) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(13) = MR_tempr1;
	MR_sv(14) = MR_tempr2;
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		transform_hlds__stm_expand__move_variables_to_new_pred_9_0_i2);
MR_def_label(transform_hlds__stm_expand__move_variables_to_new_pred_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__stm_expand__move_variables_to_new_pred_9_0_i3);
MR_def_label(transform_hlds__stm_expand__move_variables_to_new_pred_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		transform_hlds__stm_expand__move_variables_to_new_pred_9_0_i4);
MR_def_label(transform_hlds__stm_expand__move_variables_to_new_pred_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__stm_expand__move_variables_to_new_pred_9_0_i5);
MR_def_label(transform_hlds__stm_expand__move_variables_to_new_pred_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(10) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(11) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(15) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(16) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r1 = MR_sv(16);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		transform_hlds__stm_expand__move_variables_to_new_pred_9_0_i7);
MR_def_label(transform_hlds__stm_expand__move_variables_to_new_pred_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__stm_expand__move_variables_to_new_pred_9_0_i8);
MR_def_label(transform_hlds__stm_expand__move_variables_to_new_pred_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,7);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,8,1);
	MR_r4 = MR_r2;
	MR_r5 = MR_r3;
	MR_r6 = (MR_Word) MR_TAG_COMMON(0,8,2);
	MR_r7 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r8 = MR_sv(12);
	MR_r9 = MR_sv(7);
	MR_r10 = MR_sv(8);
	MR_r11 = MR_sv(9);
	MR_r12 = MR_sv(2);
	MR_r13 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl5_12_0,
		transform_hlds__stm_expand__move_variables_to_new_pred_9_0_i13);
MR_def_label(transform_hlds__stm_expand__move_variables_to_new_pred_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_sv(9) = MR_r4;
	MR_sv(12) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		transform_hlds__stm_expand__move_variables_to_new_pred_9_0_i15);
MR_def_label(transform_hlds__stm_expand__move_variables_to_new_pred_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__move_variables_to_new_pred_9_0_i14);
	}
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_r2;
	MR_r4 = MR_sv(12);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(3);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		transform_hlds__stm_expand__move_variables_to_new_pred_9_0_i19);
MR_def_label(transform_hlds__stm_expand__move_variables_to_new_pred_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_r2;
	MR_r4 = MR_sv(12);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(3);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		transform_hlds__stm_expand__move_variables_to_new_pred_9_0_i18);
MR_def_label(transform_hlds__stm_expand__move_variables_to_new_pred_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_r2;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(11);
	MR_r6 = MR_sv(4);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		transform_hlds__stm_expand__move_variables_to_new_pred_9_0_i19);
MR_def_label(transform_hlds__stm_expand__move_variables_to_new_pred_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_goal__rename_some_vars_in_goal_3_0,
		transform_hlds__stm_expand__move_variables_to_new_pred_9_0_i21);
MR_def_label(transform_hlds__stm_expand__move_variables_to_new_pred_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_varset_3_0,
		transform_hlds__stm_expand__move_variables_to_new_pred_9_0_i22);
MR_def_label(transform_hlds__stm_expand__move_variables_to_new_pred_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_vartypes_3_0,
		transform_hlds__stm_expand__move_variables_to_new_pred_9_0_i23);
MR_def_label(transform_hlds__stm_expand__move_variables_to_new_pred_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_varset_3_0,
		transform_hlds__stm_expand__move_variables_to_new_pred_9_0_i24);
MR_def_label(transform_hlds__stm_expand__move_variables_to_new_pred_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_vartypes_3_0,
		transform_hlds__stm_expand__move_variables_to_new_pred_9_0_i25);
MR_def_label(transform_hlds__stm_expand__move_variables_to_new_pred_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 7);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_sv(13);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_r2, 4) = MR_sv(2);
	MR_tfield(0, MR_r2, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_r2, 6) = MR_tfield(0, MR_tempr2, 6);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r3 = MR_tempr1;
	MR_tempr3 = MR_sv(14);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr3, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr3, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr3, 6);
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(17);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__stm_expand_module45)
	MR_init_entry1(transform_hlds__stm_expand__create_var_unify_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__stm_expand__create_var_unify_6_0);
	MR_init_label5(transform_hlds__stm_expand__create_var_unify_6_0,9,12,13,14,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_var_unify'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__stm_expand__create_var_unify_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_sv(5) = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tfield(2, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_sv(6), 0, (MR_Integer) 1);
	MR_tfield(0, MR_sv(6), 0) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_r1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tempr6 = MR_r3;
	MR_tfield(1, MR_tempr4, 0) = MR_tfield(0, MR_tempr6, 1);
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tfield(0, MR_tempr6, 0);
	MR_tfield(1, MR_tempr5, 1) = MR_tempr4;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr6;
	MR_tempr7 = MR_r4;
	MR_sv(4) = MR_tfield(0, MR_tempr7, 5);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,3,4);
	MR_sv(8) = MR_tempr7;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr5;
	MR_r3 = MR_tfield(0, MR_tempr7, 0);
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_from_mode_list_4_0,
		transform_hlds__stm_expand__create_var_unify_6_0_i9);
MR_def_label(transform_hlds__stm_expand__create_var_unify_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_sv(6);
	MR_tfield(0, MR_r2, 2) = MR_sv(3);
	MR_tfield(0, MR_r2, 3) = MR_sv(5);
	MR_tfield(0, MR_r2, 4) = MR_sv(7);
	MR_sv(3) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(set__init_1_0,
		transform_hlds__stm_expand__create_var_unify_6_0_i12);
MR_def_label(transform_hlds__stm_expand__create_var_unify_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__stm_expand__create_var_unify_6_0_i13);
MR_def_label(transform_hlds__stm_expand__create_var_unify_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__stm_expand__create_var_unify_6_0_i14);
MR_def_label(transform_hlds__stm_expand__create_var_unify_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 0;
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_6_0,
		transform_hlds__stm_expand__create_var_unify_6_0_i15);
MR_def_label(transform_hlds__stm_expand__create_var_unify_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(8);
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__builtin_lib_types__stm_dummy_output_functor_0_0);
MR_decl_entry(hlds__hlds_goal__construct_tuple_3_0);

MR_BEGIN_MODULE(transform_hlds__stm_expand_module46)
	MR_init_entry1(transform_hlds__stm_expand__construct_output_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__stm_expand__construct_output_7_0);
	MR_init_label10(transform_hlds__stm_expand__construct_output_7_0,3,4,5,8,9,7,13,14,15,17)
	MR_init_label5(transform_hlds__stm_expand__construct_output_7_0,12,19,20,21,23)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'construct_output'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__stm_expand__construct_output_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_tfield(0, MR_r1, 2);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		transform_hlds__stm_expand__construct_output_7_0_i3);
MR_def_label(transform_hlds__stm_expand__construct_output_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		transform_hlds__stm_expand__construct_output_7_0_i4);
MR_def_label(transform_hlds__stm_expand__construct_output_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__get_input_output_types_4_0,
		transform_hlds__stm_expand__construct_output_7_0_i5);
MR_def_label(transform_hlds__stm_expand__construct_output_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__construct_output_7_0_i7);
	}
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__stm_dummy_output_functor_0_0,
		transform_hlds__stm_expand__construct_output_7_0_i8);
MR_def_label(transform_hlds__stm_expand__construct_output_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__make_const_construction_3_0,
		transform_hlds__stm_expand__construct_output_7_0_i9);
MR_def_label(transform_hlds__stm_expand__construct_output_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(10);
	}
MR_def_label(transform_hlds__stm_expand__construct_output_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__construct_output_7_0_i12);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__list__det_head_1_0,
		transform_hlds__stm_expand__construct_output_7_0_i13);
MR_def_label(transform_hlds__stm_expand__construct_output_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__out_mode_0_0,
		transform_hlds__stm_expand__construct_output_7_0_i14);
MR_def_label(transform_hlds__stm_expand__construct_output_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__in_mode_0_0,
		transform_hlds__stm_expand__construct_output_7_0_i15);
MR_def_label(transform_hlds__stm_expand__construct_output_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_var_unify_6_0,
		transform_hlds__stm_expand__construct_output_7_0_i17);
MR_def_label(transform_hlds__stm_expand__construct_output_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(transform_hlds__stm_expand__construct_output_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(5);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 1);
	MR_tempr1 = MR_tempr2;
	MR_sv(5) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(9) = MR_tfield(0, MR_tempr1, 6);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(check_hlds__polymorphism__create_poly_info_4_0,
		transform_hlds__stm_expand__construct_output_7_0_i19);
MR_def_label(transform_hlds__stm_expand__construct_output_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__polymorphism__polymorphism_make_type_info_var_6_0,
		transform_hlds__stm_expand__construct_output_7_0_i20);
MR_def_label(transform_hlds__stm_expand__construct_output_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r3;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__polymorphism__poly_info_extract_6_0,
		transform_hlds__stm_expand__construct_output_7_0_i21);
MR_def_label(transform_hlds__stm_expand__construct_output_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr1, 0) = MR_r3;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_tfield(0, MR_tempr1, 5) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(9);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__construct_tuple_3_0,
		transform_hlds__stm_expand__construct_output_7_0_i23);
MR_def_label(transform_hlds__stm_expand__construct_output_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__stm_expand_module47)
	MR_init_entry1(transform_hlds__stm_expand__create_post_wrapper_goal_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__stm_expand__create_post_wrapper_goal_11_0);
	MR_init_label10(transform_hlds__stm_expand__create_post_wrapper_goal_11_0,2,3,4,5,7,8,9,10,11,13)
	MR_init_label10(transform_hlds__stm_expand__create_post_wrapper_goal_11_0,14,15,16,17,26,27,30,31,32,33)
	MR_init_label10(transform_hlds__stm_expand__create_post_wrapper_goal_11_0,36,37,40,44,45,46,51,55,56,61)
	MR_init_label9(transform_hlds__stm_expand__create_post_wrapper_goal_11_0,62,58,63,64,66,70,57,72,73)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_post_wrapper_goal'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__stm_expand__create_post_wrapper_goal_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(18);
	MR_sv(18) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_sv(10) = MR_r9;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_stm_builtin_module_0_0,
		transform_hlds__stm_expand__create_post_wrapper_goal_11_0_i2);
MR_def_label(transform_hlds__stm_expand__create_post_wrapper_goal_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_exception_module_0_0,
		transform_hlds__stm_expand__create_post_wrapper_goal_11_0_i3);
MR_def_label(transform_hlds__stm_expand__create_post_wrapper_goal_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(10);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__construct_output_7_0,
		transform_hlds__stm_expand__create_post_wrapper_goal_11_0_i4);
MR_def_label(transform_hlds__stm_expand__create_post_wrapper_goal_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__stm_valid_result_type_0_0,
		transform_hlds__stm_expand__create_post_wrapper_goal_11_0_i5);
MR_def_label(transform_hlds__stm_expand__create_post_wrapper_goal_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,5,16);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_aux_variable_5_0,
		transform_hlds__stm_expand__create_post_wrapper_goal_11_0_i7);
MR_def_label(transform_hlds__stm_expand__create_post_wrapper_goal_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(12) = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__stm_validres_valid_functor_0_0,
		transform_hlds__stm_expand__create_post_wrapper_goal_11_0_i8);
MR_def_label(transform_hlds__stm_expand__create_post_wrapper_goal_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__stm_validres_invalid_functor_0_0,
		transform_hlds__stm_expand__create_post_wrapper_goal_11_0_i9);
MR_def_label(transform_hlds__stm_expand__create_post_wrapper_goal_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__stm_rollback_exception_functor_0_0,
		transform_hlds__stm_expand__create_post_wrapper_goal_11_0_i10);
MR_def_label(transform_hlds__stm_expand__create_post_wrapper_goal_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__stm_rollback_exception_type_0_0,
		transform_hlds__stm_expand__create_post_wrapper_goal_11_0_i11);
MR_def_label(transform_hlds__stm_expand__create_post_wrapper_goal_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,5,17);
	MR_r4 = MR_sv(12);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_aux_variable_assignment_7_0,
		transform_hlds__stm_expand__create_post_wrapper_goal_11_0_i13);
MR_def_label(transform_hlds__stm_expand__create_post_wrapper_goal_11_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_sv(12) = MR_r2;
	MR_sv(13) = MR_r3;
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_bind_no_var_0_0,
		transform_hlds__stm_expand__create_post_wrapper_goal_11_0_i14);
MR_def_label(transform_hlds__stm_expand__create_post_wrapper_goal_11_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Word) MR_string_const("stm_lock", 8);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Integer) 2;
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_sv(13);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_simple_call_12_0,
		transform_hlds__stm_expand__create_post_wrapper_goal_11_0_i15);
MR_def_label(transform_hlds__stm_expand__create_post_wrapper_goal_11_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_sv(14) = MR_r2;
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_bind_no_var_0_0,
		transform_hlds__stm_expand__create_post_wrapper_goal_11_0_i16);
MR_def_label(transform_hlds__stm_expand__create_post_wrapper_goal_11_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Word) MR_string_const("stm_unlock", 10);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Integer) 2;
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_sv(14);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_simple_call_12_0,
		transform_hlds__stm_expand__create_post_wrapper_goal_11_0_i17);
MR_def_label(transform_hlds__stm_expand__create_post_wrapper_goal_11_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr7 = MR_sv(4);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr7;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(16) = MR_tempr2;
	MR_tempr8 = MR_sv(6);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr8;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_sv(17) = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr8;
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_TAG_COMMON(3,7,1);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr4, 0) = MR_tempr7;
	MR_tfield(0, MR_tempr4, 1) = (MR_Word) MR_TAG_COMMON(3,7,0);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr6, 1) = MR_tempr5;
	MR_sv(14) = MR_r1;
	MR_sv(15) = MR_r2;
	MR_r1 = MR_tempr6;
	}
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_from_assoc_list_1_0,
		transform_hlds__stm_expand__create_post_wrapper_goal_11_0_i26);
MR_def_label(transform_hlds__stm_expand__create_post_wrapper_goal_11_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Word) MR_string_const("stm_validate", 12);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Integer) 2;
	MR_r7 = MR_sv(16);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_sv(15);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_simple_call_12_0,
		transform_hlds__stm_expand__create_post_wrapper_goal_11_0_i27);
MR_def_label(transform_hlds__stm_expand__create_post_wrapper_goal_11_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(17);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(15) = MR_r1;
	MR_sv(16) = MR_r2;
	MR_sv(17) = MR_tempr1;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_from_assoc_list_1_0,
		transform_hlds__stm_expand__create_post_wrapper_goal_11_0_i30);
MR_def_label(transform_hlds__stm_expand__create_post_wrapper_goal_11_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Word) MR_string_const("stm_commit", 10);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Integer) 2;
	MR_r7 = MR_sv(17);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_sv(16);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_simple_call_12_0,
		transform_hlds__stm_expand__create_post_wrapper_goal_11_0_i31);
MR_def_label(transform_hlds__stm_expand__create_post_wrapper_goal_11_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_sv(16) = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__stm_rollback_exception_type_0_0,
		transform_hlds__stm_expand__create_post_wrapper_goal_11_0_i32);
MR_def_label(transform_hlds__stm_expand__create_post_wrapper_goal_11_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(16);
	MR_np_call_localret_ent(transform_hlds__stm_expand__make_type_info_5_0,
		transform_hlds__stm_expand__create_post_wrapper_goal_11_0_i33);
MR_def_label(transform_hlds__stm_expand__create_post_wrapper_goal_11_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(12);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(12) = MR_r2;
	MR_sv(16) = MR_r3;
	MR_sv(17) = MR_tempr2;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_bind_vars_1_0,
		transform_hlds__stm_expand__create_post_wrapper_goal_11_0_i36);
MR_def_label(transform_hlds__stm_expand__create_post_wrapper_goal_11_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("throw", 5);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 6;
	MR_r6 = (MR_Integer) 0;
	MR_r7 = MR_sv(17);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_sv(16);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_simple_call_12_0,
		transform_hlds__stm_expand__create_post_wrapper_goal_11_0_i37);
MR_def_label(transform_hlds__stm_expand__create_post_wrapper_goal_11_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(14);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(1) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_plain_conj_2_0,
		transform_hlds__stm_expand__create_post_wrapper_goal_11_0_i40);
MR_def_label(transform_hlds__stm_expand__create_post_wrapper_goal_11_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(11);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(11) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(14);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(12);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__stm_expand__create_post_wrapper_goal_11_0_i44);
MR_def_label(transform_hlds__stm_expand__create_post_wrapper_goal_11_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__stm_expand__create_post_wrapper_goal_11_0_i45);
MR_def_label(transform_hlds__stm_expand__create_post_wrapper_goal_11_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_plain_conj_2_0,
		transform_hlds__stm_expand__create_post_wrapper_goal_11_0_i46);
MR_def_label(transform_hlds__stm_expand__create_post_wrapper_goal_11_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(10);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = MR_tempr3;
	MR_r1 = MR_sv(4);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 2;
	MR_r5 = MR_sv(9);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_switch_disjunction_7_0,
		transform_hlds__stm_expand__create_post_wrapper_goal_11_0_i51);
MR_def_label(transform_hlds__stm_expand__create_post_wrapper_goal_11_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(15);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(13);
	MR_tfield(1, MR_r1, 1) = MR_tempr2;
	MR_sv(4) = MR_r2;
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_plain_conj_2_0,
		transform_hlds__stm_expand__create_post_wrapper_goal_11_0_i55);
MR_def_label(transform_hlds__stm_expand__create_post_wrapper_goal_11_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_promise_purity_scope_3_0,
		transform_hlds__stm_expand__create_post_wrapper_goal_11_0_i56);
MR_def_label(transform_hlds__stm_expand__create_post_wrapper_goal_11_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(7),0)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__create_post_wrapper_goal_11_0_i58);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__stm_expand__create_post_wrapper_goal_11_0_i61);
MR_def_label(transform_hlds__stm_expand__create_post_wrapper_goal_11_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__stm_expand__create_post_wrapper_goal_11_0_i62);
MR_def_label(transform_hlds__stm_expand__create_post_wrapper_goal_11_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_sv(4);
	MR_np_call_localret_ent(hlds__goal_util__flatten_conj_2_0,
		transform_hlds__stm_expand__create_post_wrapper_goal_11_0_i72);
MR_def_label(transform_hlds__stm_expand__create_post_wrapper_goal_11_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__uo_mode_0_0,
		transform_hlds__stm_expand__create_post_wrapper_goal_11_0_i63);
MR_def_label(transform_hlds__stm_expand__create_post_wrapper_goal_11_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__di_mode_0_0,
		transform_hlds__stm_expand__create_post_wrapper_goal_11_0_i64);
MR_def_label(transform_hlds__stm_expand__create_post_wrapper_goal_11_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_var_unify_6_0,
		transform_hlds__stm_expand__create_post_wrapper_goal_11_0_i66);
MR_def_label(transform_hlds__stm_expand__create_post_wrapper_goal_11_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_r1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__stm_expand__create_post_wrapper_goal_11_0_i70);
MR_def_label(transform_hlds__stm_expand__create_post_wrapper_goal_11_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__stm_expand__create_post_wrapper_goal_11_0_i57);
MR_def_label(transform_hlds__stm_expand__create_post_wrapper_goal_11_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__goal_util__flatten_conj_2_0,
		transform_hlds__stm_expand__create_post_wrapper_goal_11_0_i72);
MR_def_label(transform_hlds__stm_expand__create_post_wrapper_goal_11_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_plain_conj_2_0,
		transform_hlds__stm_expand__create_post_wrapper_goal_11_0_i73);
MR_def_label(transform_hlds__stm_expand__create_post_wrapper_goal_11_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(18);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_get_headvars_2_0);
MR_decl_entry(varset__delete_var_3_0);
MR_decl_entry(map__delete_3_0);
MR_decl_entry(svvarset__new_named_var_4_0);

MR_BEGIN_MODULE(transform_hlds__stm_expand_module48)
	MR_init_entry1(transform_hlds__stm_expand__rename_var_in_wrapper_pred_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__stm_expand__rename_var_in_wrapper_pred_8_0);
	MR_init_label10(transform_hlds__stm_expand__rename_var_in_wrapper_pred_8_0,2,3,4,5,7,8,9,10,11,13)
	MR_init_label4(transform_hlds__stm_expand__rename_var_in_wrapper_pred_8_0,14,15,16,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rename_var_in_wrapper_pred'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__stm_expand__rename_var_in_wrapper_pred_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(7) = MR_tempr1;
	MR_sv(8) = MR_r5;
	MR_r1 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		transform_hlds__stm_expand__rename_var_in_wrapper_pred_8_0_i2);
MR_def_label(transform_hlds__stm_expand__rename_var_in_wrapper_pred_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__stm_expand__rename_var_in_wrapper_pred_8_0_i3);
MR_def_label(transform_hlds__stm_expand__rename_var_in_wrapper_pred_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		transform_hlds__stm_expand__rename_var_in_wrapper_pred_8_0_i4);
MR_def_label(transform_hlds__stm_expand__rename_var_in_wrapper_pred_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(varset__delete_var_3_0,
		transform_hlds__stm_expand__rename_var_in_wrapper_pred_8_0_i5);
MR_def_label(transform_hlds__stm_expand__rename_var_in_wrapper_pred_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_sv(11) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__delete_3_0,
		transform_hlds__stm_expand__rename_var_in_wrapper_pred_8_0_i7);
MR_def_label(transform_hlds__stm_expand__rename_var_in_wrapper_pred_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(svvarset__new_named_var_4_0,
		transform_hlds__stm_expand__rename_var_in_wrapper_pred_8_0_i8);
MR_def_label(transform_hlds__stm_expand__rename_var_in_wrapper_pred_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(1);
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		transform_hlds__stm_expand__rename_var_in_wrapper_pred_8_0_i9);
MR_def_label(transform_hlds__stm_expand__rename_var_in_wrapper_pred_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__stm_expand__rename_var_in_wrapper_pred_8_0_i10);
MR_def_label(transform_hlds__stm_expand__rename_var_in_wrapper_pred_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_r2;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		transform_hlds__stm_expand__rename_var_in_wrapper_pred_8_0_i11);
MR_def_label(transform_hlds__stm_expand__rename_var_in_wrapper_pred_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__stm_expand__IntroducedFrom__pred__rename_var_in_wrapper_pred__2078__1_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_r1;
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(list__map_3_0,
		transform_hlds__stm_expand__rename_var_in_wrapper_pred_8_0_i13);
MR_def_label(transform_hlds__stm_expand__rename_var_in_wrapper_pred_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(8);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__rename_some_vars_in_goal_3_0,
		transform_hlds__stm_expand__rename_var_in_wrapper_pred_8_0_i14);
MR_def_label(transform_hlds__stm_expand__rename_var_in_wrapper_pred_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_varset_3_0,
		transform_hlds__stm_expand__rename_var_in_wrapper_pred_8_0_i15);
MR_def_label(transform_hlds__stm_expand__rename_var_in_wrapper_pred_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_vartypes_3_0,
		transform_hlds__stm_expand__rename_var_in_wrapper_pred_8_0_i16);
MR_def_label(transform_hlds__stm_expand__rename_var_in_wrapper_pred_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_headvars_3_0,
		transform_hlds__stm_expand__rename_var_in_wrapper_pred_8_0_i17);
MR_def_label(transform_hlds__stm_expand__rename_var_in_wrapper_pred_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 7);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r2, 4) = MR_r1;
	MR_tfield(0, MR_r2, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_tfield(0, MR_r2, 6) = MR_tfield(0, MR_tempr1, 6);
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_decr_sp_and_return(12);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__stm_expand_module49)
	MR_init_entry1(transform_hlds__stm_expand__get_pred_proc_id_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__stm_expand__get_pred_proc_id_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_pred_proc_id'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__stm_expand__get_pred_proc_id_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_r1, 2);
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__stm_expand_module50)
	MR_init_entry1(transform_hlds__stm_expand__create_wrapper_pred_2_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__stm_expand__create_wrapper_pred_2_9_0);
	MR_init_label10(transform_hlds__stm_expand__create_wrapper_pred_2_9_0,2,3,4,9,10,11,15,16,17,18)
	MR_init_label10(transform_hlds__stm_expand__create_wrapper_pred_2_9_0,22,23,24,25,27,29,31,26,32,33)
	MR_init_label6(transform_hlds__stm_expand__create_wrapper_pred_2_9_0,37,38,39,40,41,42)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_wrapper_pred_2'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__stm_expand__create_wrapper_pred_2_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(5) = MR_tfield(0, MR_r1, 3);
	MR_sv(6) = MR_tfield(0, MR_r1, 4);
	MR_sv(9) = MR_r4;
	MR_sv(10) = MR_r5;
	MR_np_call_localret_ent(transform_hlds__stm_expand__get_input_output_varlist_3_0,
		transform_hlds__stm_expand__create_wrapper_pred_2_9_0_i2);
MR_def_label(transform_hlds__stm_expand__create_wrapper_pred_2_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(transform_hlds__stm_expand__get_input_output_types_4_0,
		transform_hlds__stm_expand__create_wrapper_pred_2_9_0_i3);
MR_def_label(transform_hlds__stm_expand__create_wrapper_pred_2_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(transform_hlds__stm_expand__get_input_output_modes_3_0,
		transform_hlds__stm_expand__create_wrapper_pred_2_9_0_i4);
MR_def_label(transform_hlds__stm_expand__create_wrapper_pred_2_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_sv(8) = MR_r1;
	MR_sv(14) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__stm_expand__create_wrapper_pred_2_9_0_i9);
MR_def_label(transform_hlds__stm_expand__create_wrapper_pred_2_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__stm_state_type_0_0,
		transform_hlds__stm_expand__create_wrapper_pred_2_9_0_i10);
MR_def_label(transform_hlds__stm_expand__create_wrapper_pred_2_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__stm_state_type_0_0,
		transform_hlds__stm_expand__create_wrapper_pred_2_9_0_i11);
MR_def_label(transform_hlds__stm_expand__create_wrapper_pred_2_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(12);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__stm_expand__create_wrapper_pred_2_9_0_i15);
MR_def_label(transform_hlds__stm_expand__create_wrapper_pred_2_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__out_mode_0_0,
		transform_hlds__stm_expand__create_wrapper_pred_2_9_0_i16);
MR_def_label(transform_hlds__stm_expand__create_wrapper_pred_2_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__di_mode_0_0,
		transform_hlds__stm_expand__create_wrapper_pred_2_9_0_i17);
MR_def_label(transform_hlds__stm_expand__create_wrapper_pred_2_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__uo_mode_0_0,
		transform_hlds__stm_expand__create_wrapper_pred_2_9_0_i18);
MR_def_label(transform_hlds__stm_expand__create_wrapper_pred_2_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(13);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(12);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_sv(8);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__stm_expand__create_wrapper_pred_2_9_0_i22);
MR_def_label(transform_hlds__stm_expand__create_wrapper_pred_2_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Word) MR_string_const("wrapper", 7);
	MR_r5 = MR_sv(9);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = MR_sv(10);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_cloned_pred_10_0,
		transform_hlds__stm_expand__create_wrapper_pred_2_9_0_i23);
MR_def_label(transform_hlds__stm_expand__create_wrapper_pred_2_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_sv(8) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("stm_ResultVar", 13);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(9);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__rename_var_in_wrapper_pred_8_0,
		transform_hlds__stm_expand__create_wrapper_pred_2_9_0_i24);
MR_def_label(transform_hlds__stm_expand__create_wrapper_pred_2_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_r3;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__move_variables_to_new_pred_9_0,
		transform_hlds__stm_expand__create_wrapper_pred_2_9_0_i25);
MR_def_label(transform_hlds__stm_expand__create_wrapper_pred_2_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r3;
	MR_sv(10) = MR_r1;
	MR_sv(11) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		transform_hlds__stm_expand__create_wrapper_pred_2_9_0_i27);
MR_def_label(transform_hlds__stm_expand__create_wrapper_pred_2_9_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__create_wrapper_pred_2_9_0_i26);
	}
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__stm_state_type_0_0,
		transform_hlds__stm_expand__create_wrapper_pred_2_9_0_i29);
MR_def_label(transform_hlds__stm_expand__create_wrapper_pred_2_9_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,5,18);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_aux_variable_5_0,
		transform_hlds__stm_expand__create_wrapper_pred_2_9_0_i31);
MR_def_label(transform_hlds__stm_expand__create_wrapper_pred_2_9_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r10 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(5);
	MR_r4 = MR_sv(8);
	MR_r7 = (MR_Integer) 1;
	MR_r6 = MR_r10;
	MR_r8 = MR_sv(9);
	MR_r11 = MR_r2;
	MR_r2 = MR_sv(10);
	MR_r9 = MR_r11;
	MR_GOTO_LAB(transform_hlds__stm_expand__create_wrapper_pred_2_9_0_i32);
MR_def_label(transform_hlds__stm_expand__create_wrapper_pred_2_9_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(5);
	MR_r4 = MR_sv(8);
	MR_r7 = (MR_Integer) 0;
	MR_r6 = MR_sv(6);
	MR_r8 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r9 = MR_sv(11);
MR_def_label(transform_hlds__stm_expand__create_wrapper_pred_2_9_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r5;
	MR_sv(1) = MR_r6;
	MR_sv(9) = MR_r8;
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_post_wrapper_goal_11_0,
		transform_hlds__stm_expand__create_wrapper_pred_2_9_0_i33);
MR_def_label(transform_hlds__stm_expand__create_wrapper_pred_2_9_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__stm_expand__create_wrapper_pred_2_9_0_i37);
MR_def_label(transform_hlds__stm_expand__create_wrapper_pred_2_9_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__stm_expand__set_head_vars_3_0,
		transform_hlds__stm_expand__create_wrapper_pred_2_9_0_i38);
MR_def_label(transform_hlds__stm_expand__create_wrapper_pred_2_9_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__new_pred_set_goal_3_0,
		transform_hlds__stm_expand__create_wrapper_pred_2_9_0_i39);
MR_def_label(transform_hlds__stm_expand__create_wrapper_pred_2_9_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(transform_hlds__stm_expand__run_quantification_over_pred_2_0,
		transform_hlds__stm_expand__create_wrapper_pred_2_9_0_i40);
MR_def_label(transform_hlds__stm_expand__create_wrapper_pred_2_9_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(transform_hlds__stm_expand__get_pred_proc_id_2_0,
		transform_hlds__stm_expand__create_wrapper_pred_2_9_0_i41);
MR_def_label(transform_hlds__stm_expand__create_wrapper_pred_2_9_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(transform_hlds__stm_expand__commit_new_pred_3_0,
		transform_hlds__stm_expand__create_wrapper_pred_2_9_0_i42);
MR_def_label(transform_hlds__stm_expand__create_wrapper_pred_2_9_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	MR_decr_sp_and_return(15);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__stm_expand_module51)
	MR_init_entry1(transform_hlds__stm_expand__create_wrapper_pred_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__stm_expand__create_wrapper_pred_8_0);
	MR_init_label1(transform_hlds__stm_expand__create_wrapper_pred_8_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_wrapper_pred'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__stm_expand__create_wrapper_pred_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_wrapper_pred_2_9_0,
		transform_hlds__stm_expand__create_wrapper_pred_8_0_i2);
MR_def_label(transform_hlds__stm_expand__create_wrapper_pred_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__stm_expand_module52)
	MR_init_entry1(transform_hlds__stm_expand__create_wrapper_for_goal_list_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__stm_expand__create_wrapper_for_goal_list_8_0);
	MR_init_label7(transform_hlds__stm_expand__create_wrapper_for_goal_list_8_0,6,7,5,8,9,10,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_wrapper_for_goal_list'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__stm_expand__create_wrapper_for_goal_list_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__create_wrapper_for_goal_list_8_0_i3);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r4;
	MR_tempr1 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__create_wrapper_for_goal_list_8_0_i5);
	}
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(1) = MR_r5;
	MR_sv(4) = MR_tfield(1, MR_tempr3, 0);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__stm_expand, stm_goal_vars);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__det_head_1_0,
		transform_hlds__stm_expand__create_wrapper_for_goal_list_8_0_i6);
MR_def_label(transform_hlds__stm_expand__create_wrapper_for_goal_list_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(1);
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_wrapper_pred_2_9_0,
		transform_hlds__stm_expand__create_wrapper_for_goal_list_8_0_i7);
MR_def_label(transform_hlds__stm_expand__create_wrapper_for_goal_list_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_decr_sp_and_return(6);
MR_def_label(transform_hlds__stm_expand__create_wrapper_for_goal_list_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r4;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_50_95_95_91_51_93_95_48_6_0,
		transform_hlds__stm_expand__create_wrapper_for_goal_list_8_0_i8);
MR_def_label(transform_hlds__stm_expand__create_wrapper_for_goal_list_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(transform_hlds__stm_expand__common_goal_vars_from_list_2_0,
		transform_hlds__stm_expand__create_wrapper_for_goal_list_8_0_i9);
MR_def_label(transform_hlds__stm_expand__create_wrapper_for_goal_list_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tfield(0, MR_r1, 3);
	MR_r5 = MR_tfield(0, MR_r1, 4);
	MR_r6 = MR_sv(5);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_or_else_pred_8_0,
		transform_hlds__stm_expand__create_wrapper_for_goal_list_8_0_i10);
MR_def_label(transform_hlds__stm_expand__create_wrapper_for_goal_list_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(transform_hlds__stm_expand__create_wrapper_pred_8_0);
	}
MR_def_label(transform_hlds__stm_expand__create_wrapper_for_goal_list_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("stm_expand.m", 12);
	MR_r2 = (MR_Word) MR_string_const("create_wrapper_for_goal_list: list empty", 40);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__stm_expand_module53)
	MR_init_entry1(transform_hlds__stm_expand__update_new_pred_info_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__stm_expand__update_new_pred_info_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'update_new_pred_info'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__stm_expand__update_new_pred_info_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_r2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_r2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_r2, 6);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__stm_expand_module54)
	MR_init_entry1(transform_hlds__stm_expand__create_rollback_pred_2_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__stm_expand__create_rollback_pred_2_8_0);
	MR_init_label10(transform_hlds__stm_expand__create_rollback_pred_2_8_0,5,6,7,9,12,11,15,10,19,20)
	MR_init_label10(transform_hlds__stm_expand__create_rollback_pred_2_8_0,22,23,25,26,28,29,30,31,32,33)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_rollback_pred_2'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__stm_expand__create_rollback_pred_2_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_sv(9) = MR_r6;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__stm_expand, stm_goal_vars);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,5);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(list__map_3_0,
		transform_hlds__stm_expand__create_rollback_pred_2_8_0_i5);
MR_def_label(transform_hlds__stm_expand__create_rollback_pred_2_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__union_list_1_0,
		transform_hlds__stm_expand__create_rollback_pred_2_8_0_i6);
MR_def_label(transform_hlds__stm_expand__create_rollback_pred_2_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__stm_expand, stm_goal_vars);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__list__det_head_1_0,
		transform_hlds__stm_expand__create_rollback_pred_2_8_0_i7);
MR_def_label(transform_hlds__stm_expand__create_rollback_pred_2_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r1, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r1, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_r1, 4);
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(9);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__get_input_output_types_4_0,
		transform_hlds__stm_expand__create_rollback_pred_2_8_0_i9);
MR_def_label(transform_hlds__stm_expand__create_rollback_pred_2_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__create_rollback_pred_2_8_0_i11);
	}
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__stm_dummy_output_type_0_0,
		transform_hlds__stm_expand__create_rollback_pred_2_8_0_i12);
MR_def_label(transform_hlds__stm_expand__create_rollback_pred_2_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(6);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,5,19);
	MR_GOTO_LAB(transform_hlds__stm_expand__create_rollback_pred_2_8_0_i10);
MR_def_label(transform_hlds__stm_expand__create_rollback_pred_2_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__create_rollback_pred_2_8_0_i15);
	}
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_r3 = MR_sv(6);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,5,19);
	MR_GOTO_LAB(transform_hlds__stm_expand__create_rollback_pred_2_8_0_i10);
MR_def_label(transform_hlds__stm_expand__create_rollback_pred_2_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_tfield(3, MR_r1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(6);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,5,19);
MR_def_label(transform_hlds__stm_expand__create_rollback_pred_2_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_aux_variable_5_0,
		transform_hlds__stm_expand__create_rollback_pred_2_8_0_i19);
MR_def_label(transform_hlds__stm_expand__create_rollback_pred_2_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__stm_state_type_0_0,
		transform_hlds__stm_expand__create_rollback_pred_2_8_0_i20);
MR_def_label(transform_hlds__stm_expand__create_rollback_pred_2_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,5,20);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_aux_variable_5_0,
		transform_hlds__stm_expand__create_rollback_pred_2_8_0_i22);
MR_def_label(transform_hlds__stm_expand__create_rollback_pred_2_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__stm_state_type_0_0,
		transform_hlds__stm_expand__create_rollback_pred_2_8_0_i23);
MR_def_label(transform_hlds__stm_expand__create_rollback_pred_2_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,5,21);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_aux_variable_5_0,
		transform_hlds__stm_expand__create_rollback_pred_2_8_0_i25);
MR_def_label(transform_hlds__stm_expand__create_rollback_pred_2_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__commit_new_pred_3_0,
		transform_hlds__stm_expand__create_rollback_pred_2_8_0_i26);
MR_def_label(transform_hlds__stm_expand__create_rollback_pred_2_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_wrapper_for_goal_list_8_0,
		transform_hlds__stm_expand__create_rollback_pred_2_8_0_i28);
MR_def_label(transform_hlds__stm_expand__create_rollback_pred_2_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(10);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__update_new_pred_info_3_0,
		transform_hlds__stm_expand__create_rollback_pred_2_8_0_i29);
MR_def_label(transform_hlds__stm_expand__create_rollback_pred_2_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(3);
	MR_r8 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_rollback_handler_goal_10_0,
		transform_hlds__stm_expand__create_rollback_pred_2_8_0_i30);
MR_def_label(transform_hlds__stm_expand__create_rollback_pred_2_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(transform_hlds__stm_expand__new_pred_set_goal_3_0,
		transform_hlds__stm_expand__create_rollback_pred_2_8_0_i31);
MR_def_label(transform_hlds__stm_expand__create_rollback_pred_2_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(transform_hlds__stm_expand__run_quantification_over_pred_2_0,
		transform_hlds__stm_expand__create_rollback_pred_2_8_0_i32);
MR_def_label(transform_hlds__stm_expand__create_rollback_pred_2_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__stm_expand__commit_new_pred_3_0,
		transform_hlds__stm_expand__create_rollback_pred_2_8_0_i33);
MR_def_label(transform_hlds__stm_expand__create_rollback_pred_2_8_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__stm_expand_module55)
	MR_init_entry1(transform_hlds__stm_expand__create_rollback_pred_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__stm_expand__create_rollback_pred_6_0);
	MR_init_label10(transform_hlds__stm_expand__create_rollback_pred_6_0,5,6,7,9,10,11,12,13,14,15)
	MR_init_label3(transform_hlds__stm_expand__create_rollback_pred_6_0,16,17,18)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_rollback_pred'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__stm_expand__create_rollback_pred_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__stm_expand, stm_goal_vars);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,6);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(list__map_3_0,
		transform_hlds__stm_expand__create_rollback_pred_6_0_i5);
MR_def_label(transform_hlds__stm_expand__create_rollback_pred_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__union_list_1_0,
		transform_hlds__stm_expand__create_rollback_pred_6_0_i6);
MR_def_label(transform_hlds__stm_expand__create_rollback_pred_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__stm_expand, stm_goal_vars);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__list__det_head_1_0,
		transform_hlds__stm_expand__create_rollback_pred_6_0_i7);
MR_def_label(transform_hlds__stm_expand__create_rollback_pred_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r1, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r1, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_r1, 4);
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_tfield(0, MR_tempr1, 2);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		transform_hlds__stm_expand__create_rollback_pred_6_0_i9);
MR_def_label(transform_hlds__stm_expand__create_rollback_pred_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tfield(0, MR_sv(4), 2);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		transform_hlds__stm_expand__create_rollback_pred_6_0_i10);
MR_def_label(transform_hlds__stm_expand__create_rollback_pred_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(transform_hlds__stm_expand__get_input_output_types_4_0,
		transform_hlds__stm_expand__create_rollback_pred_6_0_i11);
MR_def_label(transform_hlds__stm_expand__create_rollback_pred_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__get_input_output_modes_3_0,
		transform_hlds__stm_expand__create_rollback_pred_6_0_i12);
MR_def_label(transform_hlds__stm_expand__create_rollback_pred_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_tempr2 = MR_sv(6);
	MR_sv(6) = MR_r2;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__stm_expand__create_rollback_pred_6_0_i13);
MR_def_label(transform_hlds__stm_expand__create_rollback_pred_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__stm_expand__create_rollback_pred_6_0_i14);
MR_def_label(transform_hlds__stm_expand__create_rollback_pred_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__stm_expand__create_rollback_pred_6_0_i15);
MR_def_label(transform_hlds__stm_expand__create_rollback_pred_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Word) MR_string_const("rollback", 8);
	MR_r5 = MR_sv(2);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = MR_sv(8);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_cloned_pred_10_0,
		transform_hlds__stm_expand__create_rollback_pred_6_0_i16);
MR_def_label(transform_hlds__stm_expand__create_rollback_pred_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr3;
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_rollback_pred_2_8_0,
		transform_hlds__stm_expand__create_rollback_pred_6_0_i17);
MR_def_label(transform_hlds__stm_expand__create_rollback_pred_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(transform_hlds__stm_expand__commit_new_pred_3_0,
		transform_hlds__stm_expand__create_rollback_pred_6_0_i18);
MR_def_label(transform_hlds__stm_expand__create_rollback_pred_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__builtin_lib_types__io_io_type_0_0);

MR_BEGIN_MODULE(transform_hlds__stm_expand_module56)
	MR_init_entry1(transform_hlds__stm_expand__create_top_level_pred_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__stm_expand__create_top_level_pred_8_0);
	MR_init_label10(transform_hlds__stm_expand__create_top_level_pred_8_0,2,3,5,6,7,8,11,12,13,14)
	MR_init_label10(transform_hlds__stm_expand__create_top_level_pred_8_0,17,18,19,20,23,24,25,26,27,29)
	MR_init_label4(transform_hlds__stm_expand__create_top_level_pred_8_0,32,33,34,35)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_top_level_pred'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__stm_expand__create_top_level_pred_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_rollback_pred_6_0,
		transform_hlds__stm_expand__create_top_level_pred_8_0_i2);
MR_def_label(transform_hlds__stm_expand__create_top_level_pred_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(transform_hlds__stm_expand__common_goal_vars_from_list_2_0,
		transform_hlds__stm_expand__create_top_level_pred_8_0_i3);
MR_def_label(transform_hlds__stm_expand__create_top_level_pred_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(11) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_sv(6) = MR_tfield(0, MR_r1, 2);
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		transform_hlds__stm_expand__create_top_level_pred_8_0_i5);
MR_def_label(transform_hlds__stm_expand__create_top_level_pred_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		transform_hlds__stm_expand__create_top_level_pred_8_0_i6);
MR_def_label(transform_hlds__stm_expand__create_top_level_pred_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(transform_hlds__stm_expand__get_input_output_types_4_0,
		transform_hlds__stm_expand__create_top_level_pred_8_0_i7);
MR_def_label(transform_hlds__stm_expand__create_top_level_pred_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__get_input_output_modes_3_0,
		transform_hlds__stm_expand__create_top_level_pred_8_0_i8);
MR_def_label(transform_hlds__stm_expand__create_top_level_pred_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tempr3 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr3;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__stm_expand__create_top_level_pred_8_0_i11);
MR_def_label(transform_hlds__stm_expand__create_top_level_pred_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__stm_expand__create_top_level_pred_8_0_i12);
MR_def_label(transform_hlds__stm_expand__create_top_level_pred_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__io_io_type_0_0,
		transform_hlds__stm_expand__create_top_level_pred_8_0_i13);
MR_def_label(transform_hlds__stm_expand__create_top_level_pred_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__io_io_type_0_0,
		transform_hlds__stm_expand__create_top_level_pred_8_0_i14);
MR_def_label(transform_hlds__stm_expand__create_top_level_pred_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(11);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(8);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__stm_expand__create_top_level_pred_8_0_i17);
MR_def_label(transform_hlds__stm_expand__create_top_level_pred_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__stm_expand__create_top_level_pred_8_0_i18);
MR_def_label(transform_hlds__stm_expand__create_top_level_pred_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__di_mode_0_0,
		transform_hlds__stm_expand__create_top_level_pred_8_0_i19);
MR_def_label(transform_hlds__stm_expand__create_top_level_pred_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__uo_mode_0_0,
		transform_hlds__stm_expand__create_top_level_pred_8_0_i20);
MR_def_label(transform_hlds__stm_expand__create_top_level_pred_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_sv(9);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__stm_expand__create_top_level_pred_8_0_i23);
MR_def_label(transform_hlds__stm_expand__create_top_level_pred_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__stm_expand__create_top_level_pred_8_0_i24);
MR_def_label(transform_hlds__stm_expand__create_top_level_pred_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Word) MR_string_const("toplevel", 8);
	MR_r5 = MR_sv(4);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = MR_sv(10);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_cloned_pred_10_0,
		transform_hlds__stm_expand__create_top_level_pred_8_0_i25);
MR_def_label(transform_hlds__stm_expand__create_top_level_pred_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(4) = MR_r1;
	MR_sv(6) = MR_r3;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__uo_mode_0_0,
		transform_hlds__stm_expand__create_top_level_pred_8_0_i26);
MR_def_label(transform_hlds__stm_expand__create_top_level_pred_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__di_mode_0_0,
		transform_hlds__stm_expand__create_top_level_pred_8_0_i27);
MR_def_label(transform_hlds__stm_expand__create_top_level_pred_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_var_unify_6_0,
		transform_hlds__stm_expand__create_top_level_pred_8_0_i29);
MR_def_label(transform_hlds__stm_expand__create_top_level_pred_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(5);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_plain_conj_2_0,
		transform_hlds__stm_expand__create_top_level_pred_8_0_i32);
MR_def_label(transform_hlds__stm_expand__create_top_level_pred_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__stm_expand__new_pred_set_goal_3_0,
		transform_hlds__stm_expand__create_top_level_pred_8_0_i33);
MR_def_label(transform_hlds__stm_expand__create_top_level_pred_8_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(transform_hlds__stm_expand__run_quantification_over_pred_2_0,
		transform_hlds__stm_expand__create_top_level_pred_8_0_i34);
MR_def_label(transform_hlds__stm_expand__create_top_level_pred_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(transform_hlds__stm_expand__commit_new_pred_3_0,
		transform_hlds__stm_expand__create_top_level_pred_8_0_i35);
MR_def_label(transform_hlds__stm_expand__create_top_level_pred_8_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(12);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__instmap__apply_instmap_delta_3_0);

MR_BEGIN_MODULE(transform_hlds__stm_expand_module57)
	MR_init_entry1(transform_hlds__stm_expand__stm_process_goal_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__stm_expand__stm_process_goal_5_0);
	MR_init_label10(transform_hlds__stm_expand__stm_process_goal_5_0,3,5,4,9,8,13,12,17,16,22)
	MR_init_label10(transform_hlds__stm_expand__stm_process_goal_5_0,26,30,34,193,38,87,52,20,58,59)
	MR_init_label10(transform_hlds__stm_expand__stm_process_goal_5_0,61,62,63,64,57,67,66,69,55,72)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'stm_process_goal'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__stm_expand__stm_process_goal_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(0, MR_r2, 0);
	if (MR_PTAG_TESTR(MR_r4,0)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__stm_process_goal_5_0_i3);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_proceed();
MR_def_label(transform_hlds__stm_expand__stm_process_goal_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,1)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__stm_process_goal_5_0_i4);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__stm_process_conj_5_0,
		transform_hlds__stm_expand__stm_process_goal_5_0_i5);
MR_def_label(transform_hlds__stm_expand__stm_process_goal_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__stm_expand__stm_process_goal_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,2)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__stm_process_goal_5_0_i8);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	MR_r2 = MR_tfield(3, MR_r4, 1);
	MR_np_call_localret_ent(transform_hlds__stm_expand__stm_process_disj_5_0,
		transform_hlds__stm_expand__stm_process_goal_5_0_i9);
MR_def_label(transform_hlds__stm_expand__stm_process_goal_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__stm_expand__stm_process_goal_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,6)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__stm_process_goal_5_0_i12);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_tfield(3, MR_tempr2, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_r3;
	MR_r3 = MR_tfield(3, MR_tempr2, 3);
	MR_r4 = MR_tfield(3, MR_r4, 4);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__stm_process_if_then_else_9_0,
		transform_hlds__stm_expand__stm_process_goal_5_0_i13);
MR_def_label(transform_hlds__stm_expand__stm_process_goal_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tfield(3, MR_tempr1, 3) = MR_r2;
	MR_tfield(3, MR_tempr1, 4) = MR_r3;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_r2 = MR_r4;
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__stm_expand__stm_process_goal_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,4)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__stm_process_goal_5_0_i16);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	MR_r2 = MR_tfield(3, MR_r4, 1);
	MR_np_localcall_lab(transform_hlds__stm_expand__stm_process_goal_5_0,
		transform_hlds__stm_expand__stm_process_goal_5_0_i17);
MR_def_label(transform_hlds__stm_expand__stm_process_goal_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__stm_expand__stm_process_goal_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,5)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__stm_process_goal_5_0_i20);
	}
	MR_r5 = MR_tfield(3, MR_r4, 1);
	if (MR_PTAG_TESTR(MR_r5,0)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__stm_process_goal_5_0_i22);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	MR_sv(1) = MR_r5;
	MR_r2 = MR_tfield(3, MR_r4, 2);
	MR_np_localcall_lab(transform_hlds__stm_expand__stm_process_goal_5_0,
		transform_hlds__stm_expand__stm_process_goal_5_0_i52);
MR_def_label(transform_hlds__stm_expand__stm_process_goal_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,2)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__stm_process_goal_5_0_i26);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	MR_sv(1) = MR_r5;
	MR_r2 = MR_tfield(3, MR_r4, 2);
	MR_np_localcall_lab(transform_hlds__stm_expand__stm_process_goal_5_0,
		transform_hlds__stm_expand__stm_process_goal_5_0_i52);
MR_def_label(transform_hlds__stm_expand__stm_process_goal_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__stm_process_goal_5_0_i30);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	MR_sv(1) = MR_r5;
	MR_r2 = MR_tfield(3, MR_r4, 2);
	MR_np_localcall_lab(transform_hlds__stm_expand__stm_process_goal_5_0,
		transform_hlds__stm_expand__stm_process_goal_5_0_i52);
MR_def_label(transform_hlds__stm_expand__stm_process_goal_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,1)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__stm_process_goal_5_0_i34);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	MR_sv(1) = MR_r5;
	MR_r2 = MR_tfield(3, MR_r4, 2);
	MR_np_localcall_lab(transform_hlds__stm_expand__stm_process_goal_5_0,
		transform_hlds__stm_expand__stm_process_goal_5_0_i52);
MR_def_label(transform_hlds__stm_expand__stm_process_goal_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,0)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__stm_process_goal_5_0_i38);
	}
MR_def_label(transform_hlds__stm_expand__stm_process_goal_5_0,193)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	MR_sv(1) = MR_r5;
	MR_r2 = MR_tfield(3, MR_r4, 2);
	MR_np_localcall_lab(transform_hlds__stm_expand__stm_process_goal_5_0,
		transform_hlds__stm_expand__stm_process_goal_5_0_i52);
MR_def_label(transform_hlds__stm_expand__stm_process_goal_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,2)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__stm_process_goal_5_0_i193);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r5, 2);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__stm_process_goal_5_0_i193);
	}
	}
MR_def_label(transform_hlds__stm_expand__stm_process_goal_5_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_proceed();
MR_def_label(transform_hlds__stm_expand__stm_process_goal_5_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__stm_expand__stm_process_goal_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,7)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__stm_process_goal_5_0_i55);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r4, 1);
	MR_r5 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__stm_process_goal_5_0_i57);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(1, MR_tempr1, 5);
	MR_r2 = MR_tfield(1, MR_tempr1, 4);
	}
	MR_np_localcall_lab(transform_hlds__stm_expand__stm_process_goal_5_0,
		transform_hlds__stm_expand__stm_process_goal_5_0_i58);
MR_def_label(transform_hlds__stm_expand__stm_process_goal_5_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__stm_process_disj_5_0,
		transform_hlds__stm_expand__stm_process_goal_5_0_i59);
MR_def_label(transform_hlds__stm_expand__stm_process_goal_5_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__det_head_1_0,
		transform_hlds__stm_expand__stm_process_goal_5_0_i61);
MR_def_label(transform_hlds__stm_expand__stm_process_goal_5_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__det_tail_1_0,
		transform_hlds__stm_expand__stm_process_goal_5_0_i62);
MR_def_label(transform_hlds__stm_expand__stm_process_goal_5_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		transform_hlds__stm_expand__stm_process_goal_5_0_i63);
MR_def_label(transform_hlds__stm_expand__stm_process_goal_5_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__instmap__apply_instmap_delta_3_0,
		transform_hlds__stm_expand__stm_process_goal_5_0_i64);
MR_def_label(transform_hlds__stm_expand__stm_process_goal_5_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(6);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_109_95_99_114_101_97_116_101_95_97_99_116_117_97_108_95_103_111_97_108_95_95_91_53_93_95_48_10_0);
	}
MR_def_label(transform_hlds__stm_expand__stm_process_goal_5_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,0)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__stm_process_goal_5_0_i66);
	}
	MR_np_call_localret_ent(fn__transform_hlds__stm_expand__this_file_0_0,
		transform_hlds__stm_expand__stm_process_goal_5_0_i67);
MR_def_label(transform_hlds__stm_expand__stm_process_goal_5_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("stm_process_goal: bi_implication", 32);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(transform_hlds__stm_expand__stm_process_goal_5_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__transform_hlds__stm_expand__this_file_0_0,
		transform_hlds__stm_expand__stm_process_goal_5_0_i69);
MR_def_label(transform_hlds__stm_expand__stm_process_goal_5_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("stm_process_goal: try_goal", 26);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(transform_hlds__stm_expand__stm_process_goal_5_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,3)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__stm_process_goal_5_0_i87);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 2);
	MR_r2 = MR_tfield(3, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__stm_process_switch_cases_5_0,
		transform_hlds__stm_expand__stm_process_goal_5_0_i72);
MR_def_label(transform_hlds__stm_expand__stm_process_goal_5_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__stm_expand_module58)
	MR_init_entry1(transform_hlds__stm_expand__stm_process_conj_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__stm_expand__stm_process_conj_5_0);
	MR_init_label5(transform_hlds__stm_expand__stm_process_conj_5_0,19,4,5,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'stm_process_conj'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__stm_expand__stm_process_conj_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__stm_process_conj_5_0_i19);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r3;
	MR_proceed();
MR_def_label(transform_hlds__stm_expand__stm_process_conj_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_r2, 0);
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__stm_expand__stm_process_goal_5_0,
		transform_hlds__stm_expand__stm_process_conj_5_0_i4);
MR_def_label(transform_hlds__stm_expand__stm_process_conj_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		transform_hlds__stm_expand__stm_process_conj_5_0_i5);
MR_def_label(transform_hlds__stm_expand__stm_process_conj_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__instmap__apply_instmap_delta_3_0,
		transform_hlds__stm_expand__stm_process_conj_5_0_i6);
MR_def_label(transform_hlds__stm_expand__stm_process_conj_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_np_localcall_lab(transform_hlds__stm_expand__stm_process_conj_5_0,
		transform_hlds__stm_expand__stm_process_conj_5_0_i7);
MR_def_label(transform_hlds__stm_expand__stm_process_conj_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__stm_expand_module59)
	MR_init_entry1(transform_hlds__stm_expand__stm_process_disj_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__stm_expand__stm_process_disj_5_0);
	MR_init_label3(transform_hlds__stm_expand__stm_process_disj_5_0,17,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'stm_process_disj'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__stm_expand__stm_process_disj_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__stm_process_disj_5_0_i17);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r3;
	MR_proceed();
MR_def_label(transform_hlds__stm_expand__stm_process_disj_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(transform_hlds__stm_expand__stm_process_goal_5_0,
		transform_hlds__stm_expand__stm_process_disj_5_0_i4);
MR_def_label(transform_hlds__stm_expand__stm_process_disj_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr2;
	}
	MR_np_localcall_lab(transform_hlds__stm_expand__stm_process_disj_5_0,
		transform_hlds__stm_expand__stm_process_disj_5_0_i5);
MR_def_label(transform_hlds__stm_expand__stm_process_disj_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__stm_expand_module60)
	MR_init_entry1(transform_hlds__stm_expand__stm_process_if_then_else_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__stm_expand__stm_process_if_then_else_9_0);
	MR_init_label5(transform_hlds__stm_expand__stm_process_if_then_else_9_0,2,3,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'stm_process_if_then_else'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__stm_expand__stm_process_if_then_else_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r3 = MR_r5;
	MR_np_call_localret_ent(transform_hlds__stm_expand__stm_process_goal_5_0,
		transform_hlds__stm_expand__stm_process_if_then_else_9_0_i2);
MR_def_label(transform_hlds__stm_expand__stm_process_if_then_else_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		transform_hlds__stm_expand__stm_process_if_then_else_9_0_i3);
MR_def_label(transform_hlds__stm_expand__stm_process_if_then_else_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__instmap__apply_instmap_delta_3_0,
		transform_hlds__stm_expand__stm_process_if_then_else_9_0_i4);
MR_def_label(transform_hlds__stm_expand__stm_process_if_then_else_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(transform_hlds__stm_expand__stm_process_goal_5_0,
		transform_hlds__stm_expand__stm_process_if_then_else_9_0_i5);
MR_def_label(transform_hlds__stm_expand__stm_process_if_then_else_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__stm_process_goal_5_0,
		transform_hlds__stm_expand__stm_process_if_then_else_9_0_i6);
MR_def_label(transform_hlds__stm_expand__stm_process_if_then_else_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__stm_expand_module61)
	MR_init_entry1(transform_hlds__stm_expand__stm_process_switch_cases_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__stm_expand__stm_process_switch_cases_5_0);
	MR_init_label3(transform_hlds__stm_expand__stm_process_switch_cases_5_0,18,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'stm_process_switch_cases'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__stm_expand__stm_process_switch_cases_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__stm_process_switch_cases_5_0_i18);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r3;
	MR_proceed();
MR_def_label(transform_hlds__stm_expand__stm_process_switch_cases_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__stm_process_goal_5_0,
		transform_hlds__stm_expand__stm_process_switch_cases_5_0_i4);
MR_def_label(transform_hlds__stm_expand__stm_process_switch_cases_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr2;
	}
	MR_np_localcall_lab(transform_hlds__stm_expand__stm_process_switch_cases_5_0,
		transform_hlds__stm_expand__stm_process_switch_cases_5_0_i5);
MR_def_label(transform_hlds__stm_expand__stm_process_switch_cases_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_preds_2_0);
MR_decl_entry(map__lookup_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_procedures_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_initial_instmap_3_0);
MR_decl_entry(map__det_update_4_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_procedures_3_0);
MR_decl_entry(hlds__hlds_module__module_info_set_preds_3_0);

MR_BEGIN_MODULE(transform_hlds__stm_expand_module62)
	MR_init_entry1(transform_hlds__stm_expand__stm_process_proc_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__stm_expand__stm_process_proc_4_0);
	MR_init_label10(transform_hlds__stm_expand__stm_process_proc_4_0,2,3,4,5,6,7,9,10,12,13)
	MR_init_label7(transform_hlds__stm_expand__stm_process_proc_4_0,14,11,15,16,17,18,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'stm_process_proc'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__stm_expand__stm_process_proc_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_preds_2_0,
		transform_hlds__stm_expand__stm_process_proc_4_0_i2);
MR_def_label(transform_hlds__stm_expand__stm_process_proc_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__stm_expand__stm_process_proc_4_0_i3);
MR_def_label(transform_hlds__stm_expand__stm_process_proc_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		transform_hlds__stm_expand__stm_process_proc_4_0_i4);
MR_def_label(transform_hlds__stm_expand__stm_process_proc_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__stm_expand__stm_process_proc_4_0_i5);
MR_def_label(transform_hlds__stm_expand__stm_process_proc_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__stm_expand__stm_process_proc_4_0_i6);
MR_def_label(transform_hlds__stm_expand__stm_process_proc_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_initial_instmap_3_0,
		transform_hlds__stm_expand__stm_process_proc_4_0_i7);
MR_def_label(transform_hlds__stm_expand__stm_process_proc_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 5) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 6) = (MR_Integer) 0;
	MR_r2 = MR_sv(10);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__stm_process_goal_5_0,
		transform_hlds__stm_expand__stm_process_proc_4_0_i9);
MR_def_label(transform_hlds__stm_expand__stm_process_proc_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_tfield(0, MR_r2, 4);
	MR_sv(3) = MR_tfield(0, MR_r2, 5);
	MR_sv(5) = MR_tfield(0, MR_r2, 0);
	MR_r2 = MR_tfield(0, MR_r2, 3);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		transform_hlds__stm_expand__stm_process_proc_4_0_i10);
MR_def_label(transform_hlds__stm_expand__stm_process_proc_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__stm_process_proc_4_0_i12);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_GOTO_LAB(transform_hlds__stm_expand__stm_process_proc_4_0_i11);
MR_def_label(transform_hlds__stm_expand__stm_process_proc_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__quantification__requantify_proc_general_3_0,
		transform_hlds__stm_expand__stm_process_proc_4_0_i13);
MR_def_label(transform_hlds__stm_expand__stm_process_proc_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__recompute_instmap_delta_proc_5_0,
		transform_hlds__stm_expand__stm_process_proc_4_0_i14);
MR_def_label(transform_hlds__stm_expand__stm_process_proc_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(5) = MR_r2;
MR_def_label(transform_hlds__stm_expand__stm_process_proc_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		transform_hlds__stm_expand__stm_process_proc_4_0_i15);
MR_def_label(transform_hlds__stm_expand__stm_process_proc_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		transform_hlds__stm_expand__stm_process_proc_4_0_i16);
MR_def_label(transform_hlds__stm_expand__stm_process_proc_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_procedures_3_0,
		transform_hlds__stm_expand__stm_process_proc_4_0_i17);
MR_def_label(transform_hlds__stm_expand__stm_process_proc_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_preds_2_0,
		transform_hlds__stm_expand__stm_process_proc_4_0_i18);
MR_def_label(transform_hlds__stm_expand__stm_process_proc_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		transform_hlds__stm_expand__stm_process_proc_4_0_i19);
MR_def_label(transform_hlds__stm_expand__stm_process_proc_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(hlds__hlds_module__module_info_set_preds_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(svvarset__new_var_3_0);

MR_BEGIN_MODULE(transform_hlds__stm_expand_module63)
	MR_init_entry1(transform_hlds__stm_expand__apply_varset_to_preds_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__stm_expand__apply_varset_to_preds_11_0);
	MR_init_label4(transform_hlds__stm_expand__apply_varset_to_preds_11_0,3,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'apply_varset_to_preds'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__stm_expand__apply_varset_to_preds_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_r6;
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__stm_expand__apply_varset_to_preds_11_0_i3);
MR_def_label(transform_hlds__stm_expand__apply_varset_to_preds_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(svvarset__new_var_3_0,
		transform_hlds__stm_expand__apply_varset_to_preds_11_0_i4);
MR_def_label(transform_hlds__stm_expand__apply_varset_to_preds_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(2);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		transform_hlds__stm_expand__apply_varset_to_preds_11_0_i5);
MR_def_label(transform_hlds__stm_expand__apply_varset_to_preds_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_r2;
	MR_r4 = MR_sv(6);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		transform_hlds__stm_expand__apply_varset_to_preds_11_0_i6);
MR_def_label(transform_hlds__stm_expand__apply_varset_to_preds_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__stm_expand_module64)
	MR_init_entry1(transform_hlds__stm_expand__create_simple_post_wrapper_goal_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__stm_expand__create_simple_post_wrapper_goal_11_0);
	MR_init_label10(transform_hlds__stm_expand__create_simple_post_wrapper_goal_11_0,2,5,6,8,11,12,3,15,16,17)
	MR_init_label3(transform_hlds__stm_expand__create_simple_post_wrapper_goal_11_0,18,19,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_simple_post_wrapper_goal'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__stm_expand__create_simple_post_wrapper_goal_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r8;
	MR_r5 = MR_r9;
	MR_np_call_localret_ent(transform_hlds__stm_expand__construct_output_7_0,
		transform_hlds__stm_expand__create_simple_post_wrapper_goal_11_0_i2);
MR_def_label(transform_hlds__stm_expand__create_simple_post_wrapper_goal_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),1)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__create_simple_post_wrapper_goal_11_0_i3);
	}
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__uo_mode_0_0,
		transform_hlds__stm_expand__create_simple_post_wrapper_goal_11_0_i5);
MR_def_label(transform_hlds__stm_expand__create_simple_post_wrapper_goal_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__di_mode_0_0,
		transform_hlds__stm_expand__create_simple_post_wrapper_goal_11_0_i6);
MR_def_label(transform_hlds__stm_expand__create_simple_post_wrapper_goal_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_var_unify_6_0,
		transform_hlds__stm_expand__create_simple_post_wrapper_goal_11_0_i8);
MR_def_label(transform_hlds__stm_expand__create_simple_post_wrapper_goal_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(2) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__stm_expand__create_simple_post_wrapper_goal_11_0_i11);
MR_def_label(transform_hlds__stm_expand__create_simple_post_wrapper_goal_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__stm_expand__create_simple_post_wrapper_goal_11_0_i12);
MR_def_label(transform_hlds__stm_expand__create_simple_post_wrapper_goal_11_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__stm_expand__create_simple_post_wrapper_goal_11_0_i18);
MR_def_label(transform_hlds__stm_expand__create_simple_post_wrapper_goal_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(5) = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__stm_expand__create_simple_post_wrapper_goal_11_0_i15);
MR_def_label(transform_hlds__stm_expand__create_simple_post_wrapper_goal_11_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__stm_expand__create_simple_post_wrapper_goal_11_0_i16);
MR_def_label(transform_hlds__stm_expand__create_simple_post_wrapper_goal_11_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__stm_expand__create_simple_post_wrapper_goal_11_0_i17);
MR_def_label(transform_hlds__stm_expand__create_simple_post_wrapper_goal_11_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_sv(5);
MR_def_label(transform_hlds__stm_expand__create_simple_post_wrapper_goal_11_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__goal_util__flatten_conj_2_0,
		transform_hlds__stm_expand__create_simple_post_wrapper_goal_11_0_i19);
MR_def_label(transform_hlds__stm_expand__create_simple_post_wrapper_goal_11_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_plain_conj_2_0,
		transform_hlds__stm_expand__create_simple_post_wrapper_goal_11_0_i20);
MR_def_label(transform_hlds__stm_expand__create_simple_post_wrapper_goal_11_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__stm_expand_module65)
	MR_init_entry1(transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_0);
	MR_init_label10(transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_0,2,3,4,9,10,11,15,16,17,18)
	MR_init_label10(transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_0,22,23,24,25,27,29,31,26,32,33)
	MR_init_label6(transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_0,37,38,39,40,41,42)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_simple_wrapper_pred_2'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_tfield(0, MR_r1, 3);
	MR_sv(5) = MR_tfield(0, MR_r1, 4);
	MR_sv(9) = MR_r4;
	MR_sv(10) = MR_r5;
	MR_np_call_localret_ent(transform_hlds__stm_expand__get_input_output_varlist_3_0,
		transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_0_i2);
MR_def_label(transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(transform_hlds__stm_expand__get_input_output_types_4_0,
		transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_0_i3);
MR_def_label(transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(transform_hlds__stm_expand__get_input_output_modes_3_0,
		transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_0_i4);
MR_def_label(transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_sv(8) = MR_r1;
	MR_sv(14) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_0_i9);
MR_def_label(transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__stm_state_type_0_0,
		transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_0_i10);
MR_def_label(transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__stm_state_type_0_0,
		transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_0_i11);
MR_def_label(transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(12);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_0_i15);
MR_def_label(transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__out_mode_0_0,
		transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_0_i16);
MR_def_label(transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__di_mode_0_0,
		transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_0_i17);
MR_def_label(transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__uo_mode_0_0,
		transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_0_i18);
MR_def_label(transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(13);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(12);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_sv(8);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_0_i22);
MR_def_label(transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Word) MR_string_const("simple_wrapper", 14);
	MR_r5 = MR_sv(9);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = MR_sv(10);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_cloned_pred_10_0,
		transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_0_i23);
MR_def_label(transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("stm_ResultVar", 13);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(9);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__rename_var_in_wrapper_pred_8_0,
		transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_0_i24);
MR_def_label(transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_r3;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__move_variables_to_new_pred_9_0,
		transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_0_i25);
MR_def_label(transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r3;
	MR_sv(9) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_0_i27);
MR_def_label(transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_0_i26);
	}
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__stm_state_type_0_0,
		transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_0_i29);
MR_def_label(transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,5,18);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_aux_variable_5_0,
		transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_0_i31);
MR_def_label(transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r10 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_r4 = MR_sv(7);
	MR_r7 = (MR_Integer) 1;
	MR_r6 = MR_r10;
	MR_r8 = MR_sv(8);
	MR_r11 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_r9 = MR_r11;
	MR_GOTO_LAB(transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_0_i32);
MR_def_label(transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_r4 = MR_sv(7);
	MR_r7 = (MR_Integer) 0;
	MR_r6 = MR_sv(5);
	MR_r8 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r9 = MR_sv(10);
MR_def_label(transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r5;
	MR_sv(7) = MR_r4;
	MR_sv(1) = MR_r6;
	MR_sv(8) = MR_r8;
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_simple_post_wrapper_goal_11_0,
		transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_0_i33);
MR_def_label(transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_0_i37);
MR_def_label(transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__stm_expand__set_head_vars_3_0,
		transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_0_i38);
MR_def_label(transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__new_pred_set_goal_3_0,
		transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_0_i39);
MR_def_label(transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(transform_hlds__stm_expand__run_quantification_over_pred_2_0,
		transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_0_i40);
MR_def_label(transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(transform_hlds__stm_expand__get_pred_proc_id_2_0,
		transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_0_i41);
MR_def_label(transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(transform_hlds__stm_expand__commit_new_pred_3_0,
		transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_0_i42);
MR_def_label(transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_decr_sp_and_return(15);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__stm_expand_module66)
	MR_init_entry1(transform_hlds__stm_expand__create_simple_wrapper_pred_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__stm_expand__create_simple_wrapper_pred_8_0);
	MR_init_label1(transform_hlds__stm_expand__create_simple_wrapper_pred_8_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_simple_wrapper_pred'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__stm_expand__create_simple_wrapper_pred_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_0,
		transform_hlds__stm_expand__create_simple_wrapper_pred_8_0_i2);
MR_def_label(transform_hlds__stm_expand__create_simple_wrapper_pred_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___set_ordlist__set_ordlist_1_0);

MR_BEGIN_MODULE(transform_hlds__stm_expand_module67)
	MR_init_entry1(__Unify___transform_hlds__stm_expand__stm_goal_vars_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__stm_expand__stm_goal_vars_0_0);
	MR_init_label6(__Unify___transform_hlds__stm_expand__stm_goal_vars_0_0,5,7,9,11,15,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__stm_expand__stm_goal_vars_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__stm_expand__stm_goal_vars_0_0_i15);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
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
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___set_ordlist__set_ordlist_1_0,
		__Unify___transform_hlds__stm_expand__stm_goal_vars_0_0_i5);
MR_def_label(__Unify___transform_hlds__stm_expand__stm_goal_vars_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__stm_expand__stm_goal_vars_0_0_i1);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___set_ordlist__set_ordlist_1_0,
		__Unify___transform_hlds__stm_expand__stm_goal_vars_0_0_i7);
MR_def_label(__Unify___transform_hlds__stm_expand__stm_goal_vars_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__stm_expand__stm_goal_vars_0_0_i1);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___set_ordlist__set_ordlist_1_0,
		__Unify___transform_hlds__stm_expand__stm_goal_vars_0_0_i9);
MR_def_label(__Unify___transform_hlds__stm_expand__stm_goal_vars_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__stm_expand__stm_goal_vars_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		__Unify___transform_hlds__stm_expand__stm_goal_vars_0_0_i11);
MR_def_label(__Unify___transform_hlds__stm_expand__stm_goal_vars_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__stm_expand__stm_goal_vars_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(8);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(__Unify___term__var_1_0);
MR_def_label(__Unify___transform_hlds__stm_expand__stm_goal_vars_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__stm_expand__stm_goal_vars_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___set_ordlist__set_ordlist_1_0);
MR_decl_entry(__Compare___term__var_1_0);

MR_BEGIN_MODULE(transform_hlds__stm_expand_module68)
	MR_init_entry1(__Compare___transform_hlds__stm_expand__stm_goal_vars_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__stm_expand__stm_goal_vars_0_0);
	MR_init_label7(__Compare___transform_hlds__stm_expand__stm_goal_vars_0_0,3,2,6,11,16,20,63)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__stm_expand__stm_goal_vars_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__stm_expand__stm_goal_vars_0_0_i3);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__stm_expand__stm_goal_vars_0_0_i2);
MR_def_label(__Compare___transform_hlds__stm_expand__stm_goal_vars_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__stm_expand__stm_goal_vars_0_0,2)
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
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___set_ordlist__set_ordlist_1_0,
		__Compare___transform_hlds__stm_expand__stm_goal_vars_0_0_i6);
MR_def_label(__Compare___transform_hlds__stm_expand__stm_goal_vars_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__stm_expand__stm_goal_vars_0_0_i63);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___set_ordlist__set_ordlist_1_0,
		__Compare___transform_hlds__stm_expand__stm_goal_vars_0_0_i11);
MR_def_label(__Compare___transform_hlds__stm_expand__stm_goal_vars_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__stm_expand__stm_goal_vars_0_0_i63);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Compare___set_ordlist__set_ordlist_1_0,
		__Compare___transform_hlds__stm_expand__stm_goal_vars_0_0_i16);
MR_def_label(__Compare___transform_hlds__stm_expand__stm_goal_vars_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__stm_expand__stm_goal_vars_0_0_i63);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___term__var_1_0,
		__Compare___transform_hlds__stm_expand__stm_goal_vars_0_0_i20);
MR_def_label(__Compare___transform_hlds__stm_expand__stm_goal_vars_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__stm_expand__stm_goal_vars_0_0_i63);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___term__var_1_0);
MR_def_label(__Compare___transform_hlds__stm_expand__stm_goal_vars_0_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___hlds__hlds_module__module_info_0_0);
MR_decl_entry(__Unify___hlds__hlds_pred__proc_info_0_0);
MR_decl_entry(__Unify___hlds__hlds_pred__pred_info_0_0);

MR_BEGIN_MODULE(transform_hlds__stm_expand_module69)
	MR_init_entry1(__Unify___transform_hlds__stm_expand__stm_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__stm_expand__stm_info_0_0);
	MR_init_label5(__Unify___transform_hlds__stm_expand__stm_info_0_0,4,6,8,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__stm_expand__stm_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__stm_expand__stm_info_0_0_i10);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
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
	MR_sv(5) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 6);
	MR_sv(7) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(8) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(9) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(10) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(11) = MR_tfield(0, MR_tempr2, 5);
	MR_sv(12) = MR_tfield(0, MR_tempr2, 6);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_module__module_info_0_0,
		__Unify___transform_hlds__stm_expand__stm_info_0_0_i4);
MR_def_label(__Unify___transform_hlds__stm_expand__stm_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__stm_expand__stm_info_0_0_i1);
	}
	if ((MR_sv(1) != MR_sv(7))) {
		MR_GOTO_LAB(__Unify___transform_hlds__stm_expand__stm_info_0_0_i1);
	}
	if ((MR_sv(2) != MR_sv(8))) {
		MR_GOTO_LAB(__Unify___transform_hlds__stm_expand__stm_info_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__proc_info_0_0,
		__Unify___transform_hlds__stm_expand__stm_info_0_0_i6);
MR_def_label(__Unify___transform_hlds__stm_expand__stm_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__stm_expand__stm_info_0_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__pred_info_0_0,
		__Unify___transform_hlds__stm_expand__stm_info_0_0_i8);
MR_def_label(__Unify___transform_hlds__stm_expand__stm_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__stm_expand__stm_info_0_0_i1);
	}
	if ((MR_sv(5) != MR_sv(11))) {
		MR_GOTO_LAB(__Unify___transform_hlds__stm_expand__stm_info_0_0_i1);
	}
	MR_r1 = (MR_sv(6) == MR_sv(12));
	MR_decr_sp_and_return(13);
MR_def_label(__Unify___transform_hlds__stm_expand__stm_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__stm_expand__stm_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___hlds__hlds_module__module_info_0_0);
MR_decl_entry(private_builtin__builtin_compare_int_3_0);
MR_decl_entry(__Compare___hlds__hlds_pred__proc_info_0_0);
MR_decl_entry(__Compare___hlds__hlds_pred__pred_info_0_0);

MR_BEGIN_MODULE(transform_hlds__stm_expand_module70)
	MR_init_entry1(__Compare___transform_hlds__stm_expand__stm_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__stm_expand__stm_info_0_0);
	MR_init_label9(__Compare___transform_hlds__stm_expand__stm_info_0_0,3,2,5,9,13,17,21,25,61)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__stm_expand__stm_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__stm_expand__stm_info_0_0_i3);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__stm_expand__stm_info_0_0_i2);
MR_def_label(__Compare___transform_hlds__stm_expand__stm_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__stm_expand__stm_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(12) = MR_tfield(0, MR_tempr5, 6);
	MR_sv(11) = MR_tfield(0, MR_tempr5, 5);
	MR_sv(10) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(9) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(8) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(7) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(6) = MR_tfield(0, MR_tempr6, 6);
	MR_sv(5) = MR_tfield(0, MR_tempr6, 5);
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
		__Compare___transform_hlds__stm_expand__stm_info_0_0_i5);
MR_def_label(__Compare___transform_hlds__stm_expand__stm_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__stm_expand__stm_info_0_0_i61);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__stm_expand__stm_info_0_0_i9);
MR_def_label(__Compare___transform_hlds__stm_expand__stm_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__stm_expand__stm_info_0_0_i61);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__stm_expand__stm_info_0_0_i13);
MR_def_label(__Compare___transform_hlds__stm_expand__stm_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__stm_expand__stm_info_0_0_i61);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___hlds__hlds_pred__proc_info_0_0,
		__Compare___transform_hlds__stm_expand__stm_info_0_0_i17);
MR_def_label(__Compare___transform_hlds__stm_expand__stm_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__stm_expand__stm_info_0_0_i61);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(__Compare___hlds__hlds_pred__pred_info_0_0,
		__Compare___transform_hlds__stm_expand__stm_info_0_0_i21);
MR_def_label(__Compare___transform_hlds__stm_expand__stm_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__stm_expand__stm_info_0_0_i61);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__stm_expand__stm_info_0_0_i25);
MR_def_label(__Compare___transform_hlds__stm_expand__stm_info_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__stm_expand__stm_info_0_0_i61);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(12);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___transform_hlds__stm_expand__stm_info_0_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___term__context_0_0);

MR_BEGIN_MODULE(transform_hlds__stm_expand_module71)
	MR_init_entry1(__Unify___transform_hlds__stm_expand__stm_new_pred_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__stm_expand__stm_new_pred_info_0_0);
	MR_init_label6(__Unify___transform_hlds__stm_expand__stm_new_pred_info_0_0,4,6,8,10,12,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__stm_expand__stm_new_pred_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__stm_expand__stm_new_pred_info_0_0_i12);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
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
	MR_sv(5) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 6);
	MR_sv(7) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(8) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(9) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(10) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(11) = MR_tfield(0, MR_tempr2, 5);
	MR_sv(12) = MR_tfield(0, MR_tempr2, 6);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_module__module_info_0_0,
		__Unify___transform_hlds__stm_expand__stm_new_pred_info_0_0_i4);
MR_def_label(__Unify___transform_hlds__stm_expand__stm_new_pred_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__stm_expand__stm_new_pred_info_0_0_i1);
	}
	if ((MR_sv(1) != MR_sv(7))) {
		MR_GOTO_LAB(__Unify___transform_hlds__stm_expand__stm_new_pred_info_0_0_i1);
	}
	if ((MR_sv(2) != MR_sv(8))) {
		MR_GOTO_LAB(__Unify___transform_hlds__stm_expand__stm_new_pred_info_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__pred_info_0_0,
		__Unify___transform_hlds__stm_expand__stm_new_pred_info_0_0_i6);
MR_def_label(__Unify___transform_hlds__stm_expand__stm_new_pred_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__stm_expand__stm_new_pred_info_0_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__proc_info_0_0,
		__Unify___transform_hlds__stm_expand__stm_new_pred_info_0_0_i8);
MR_def_label(__Unify___transform_hlds__stm_expand__stm_new_pred_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__stm_expand__stm_new_pred_info_0_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(__Unify___term__context_0_0,
		__Unify___transform_hlds__stm_expand__stm_new_pred_info_0_0_i10);
MR_def_label(__Unify___transform_hlds__stm_expand__stm_new_pred_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__stm_expand__stm_new_pred_info_0_0_i1);
	}
	MR_r1 = (MR_sv(6) == MR_sv(12));
	MR_decr_sp_and_return(13);
MR_def_label(__Unify___transform_hlds__stm_expand__stm_new_pred_info_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__stm_expand__stm_new_pred_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___term__context_0_0);

MR_BEGIN_MODULE(transform_hlds__stm_expand_module72)
	MR_init_entry1(__Compare___transform_hlds__stm_expand__stm_new_pred_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__stm_expand__stm_new_pred_info_0_0);
	MR_init_label9(__Compare___transform_hlds__stm_expand__stm_new_pred_info_0_0,3,2,5,9,13,17,21,25,61)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__stm_expand__stm_new_pred_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__stm_expand__stm_new_pred_info_0_0_i3);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__stm_expand__stm_new_pred_info_0_0_i2);
MR_def_label(__Compare___transform_hlds__stm_expand__stm_new_pred_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__stm_expand__stm_new_pred_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(12) = MR_tfield(0, MR_tempr5, 6);
	MR_sv(11) = MR_tfield(0, MR_tempr5, 5);
	MR_sv(10) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(9) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(8) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(7) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(6) = MR_tfield(0, MR_tempr6, 6);
	MR_sv(5) = MR_tfield(0, MR_tempr6, 5);
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
		__Compare___transform_hlds__stm_expand__stm_new_pred_info_0_0_i5);
MR_def_label(__Compare___transform_hlds__stm_expand__stm_new_pred_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__stm_expand__stm_new_pred_info_0_0_i61);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__stm_expand__stm_new_pred_info_0_0_i9);
MR_def_label(__Compare___transform_hlds__stm_expand__stm_new_pred_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__stm_expand__stm_new_pred_info_0_0_i61);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__stm_expand__stm_new_pred_info_0_0_i13);
MR_def_label(__Compare___transform_hlds__stm_expand__stm_new_pred_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__stm_expand__stm_new_pred_info_0_0_i61);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___hlds__hlds_pred__pred_info_0_0,
		__Compare___transform_hlds__stm_expand__stm_new_pred_info_0_0_i17);
MR_def_label(__Compare___transform_hlds__stm_expand__stm_new_pred_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__stm_expand__stm_new_pred_info_0_0_i61);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(__Compare___hlds__hlds_pred__proc_info_0_0,
		__Compare___transform_hlds__stm_expand__stm_new_pred_info_0_0_i21);
MR_def_label(__Compare___transform_hlds__stm_expand__stm_new_pred_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__stm_expand__stm_new_pred_info_0_0_i61);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(__Compare___term__context_0_0,
		__Compare___transform_hlds__stm_expand__stm_new_pred_info_0_0_i25);
MR_def_label(__Compare___transform_hlds__stm_expand__stm_new_pred_info_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__stm_expand__stm_new_pred_info_0_0_i61);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(12);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___transform_hlds__stm_expand__stm_new_pred_info_0_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__stm_expand_module73)
	MR_init_entry1(transform_hlds__stm_expand__IntroducedFrom__pred__common_goal_vars_from_list__563__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__stm_expand__IntroducedFrom__pred__common_goal_vars_from_list__563__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__common_goal_vars_from_list__563__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__stm_expand__IntroducedFrom__pred__common_goal_vars_from_list__563__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__stm_expand_module74)
	MR_init_entry1(transform_hlds__stm_expand__IntroducedFrom__pred__create_nested_goal__778__1_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__stm_expand__IntroducedFrom__pred__create_nested_goal__778__1_7_0);
	MR_init_label1(transform_hlds__stm_expand__IntroducedFrom__pred__create_nested_goal__778__1_7_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__create_nested_goal__778__1'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__stm_expand__IntroducedFrom__pred__create_nested_goal__778__1_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r4;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_simple_wrapper_pred_8_0,
		transform_hlds__stm_expand__IntroducedFrom__pred__create_nested_goal__778__1_7_0_i2);
MR_def_label(transform_hlds__stm_expand__IntroducedFrom__pred__create_nested_goal__778__1_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__stm_expand_module75)
	MR_init_entry1(transform_hlds__stm_expand__IntroducedFrom__pred__template_lock_and_validate_many__967__1_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__stm_expand__IntroducedFrom__pred__template_lock_and_validate_many__967__1_5_0);
	MR_init_label5(transform_hlds__stm_expand__IntroducedFrom__pred__template_lock_and_validate_many__967__1_5_0,2,4,5,13,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__template_lock_and_validate_many__967__1'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__stm_expand__IntroducedFrom__pred__template_lock_and_validate_many__967__1_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__stm_valid_result_type_0_0,
		transform_hlds__stm_expand__IntroducedFrom__pred__template_lock_and_validate_many__967__1_5_0_i2);
MR_def_label(transform_hlds__stm_expand__IntroducedFrom__pred__template_lock_and_validate_many__967__1_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,5,14);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_aux_variable_5_0,
		transform_hlds__stm_expand__IntroducedFrom__pred__template_lock_and_validate_many__967__1_5_0_i4);
MR_def_label(transform_hlds__stm_expand__IntroducedFrom__pred__template_lock_and_validate_many__967__1_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_stm_builtin_module_0_0,
		transform_hlds__stm_expand__IntroducedFrom__pred__template_lock_and_validate_many__967__1_5_0_i5);
MR_def_label(transform_hlds__stm_expand__IntroducedFrom__pred__template_lock_and_validate_many__967__1_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr6 = MR_sv(2);
	MR_tfield(1, MR_r2, 0) = MR_tempr6;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(4) = MR_tempr1;
	MR_tempr7 = MR_sv(3);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr7;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr7;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(3,7,1);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr6;
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr4;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr5;
	}
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_from_assoc_list_1_0,
		transform_hlds__stm_expand__IntroducedFrom__pred__template_lock_and_validate_many__967__1_5_0_i13);
MR_def_label(transform_hlds__stm_expand__IntroducedFrom__pred__template_lock_and_validate_many__967__1_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("stm_validate", 12);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Integer) 2;
	MR_r7 = MR_sv(4);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_sv(1);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_simple_call_12_0,
		transform_hlds__stm_expand__IntroducedFrom__pred__template_lock_and_validate_many__967__1_5_0_i14);
MR_def_label(transform_hlds__stm_expand__IntroducedFrom__pred__template_lock_and_validate_many__967__1_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__stm_expand_module76)
	MR_init_entry1(transform_hlds__stm_expand__IntroducedFrom__pred__template_lock_and_validate_many__981__1_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__stm_expand__IntroducedFrom__pred__template_lock_and_validate_many__981__1_5_0);
	MR_init_label2(transform_hlds__stm_expand__IntroducedFrom__pred__template_lock_and_validate_many__981__1_5_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__template_lock_and_validate_many__981__1'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__stm_expand__IntroducedFrom__pred__template_lock_and_validate_many__981__1_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__in_mode_0_0,
		transform_hlds__stm_expand__IntroducedFrom__pred__template_lock_and_validate_many__981__1_5_0_i2);
MR_def_label(transform_hlds__stm_expand__IntroducedFrom__pred__template_lock_and_validate_many__981__1_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__in_mode_0_0,
		transform_hlds__stm_expand__IntroducedFrom__pred__template_lock_and_validate_many__981__1_5_0_i3);
MR_def_label(transform_hlds__stm_expand__IntroducedFrom__pred__template_lock_and_validate_many__981__1_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(transform_hlds__stm_expand__create_var_test_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__stm_expand_module77)
	MR_init_entry1(transform_hlds__stm_expand__IntroducedFrom__pred__create_wrapper_for_goal_list__1331__1_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__stm_expand__IntroducedFrom__pred__create_wrapper_for_goal_list__1331__1_7_0);
	MR_init_label1(transform_hlds__stm_expand__IntroducedFrom__pred__create_wrapper_for_goal_list__1331__1_7_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__create_wrapper_for_goal_list__1331__1'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__stm_expand__IntroducedFrom__pred__create_wrapper_for_goal_list__1331__1_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r4;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_0,
		transform_hlds__stm_expand__IntroducedFrom__pred__create_wrapper_for_goal_list__1331__1_7_0_i2);
MR_def_label(transform_hlds__stm_expand__IntroducedFrom__pred__create_wrapper_for_goal_list__1331__1_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r4;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__stm_expand_module78)
	MR_init_entry1(transform_hlds__stm_expand__IntroducedFrom__pred__create_or_else_end_branch__1779__1_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__stm_expand__IntroducedFrom__pred__create_or_else_end_branch__1779__1_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__create_or_else_end_branch__1779__1'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__stm_expand__IntroducedFrom__pred__create_or_else_end_branch__1779__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_tailcall_ent(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_111_114_95_101_108_115_101_95_101_110_100_95_98_114_97_110_99_104_95_95_49_55_55_57_95_95_49_95_95_91_49_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__stm_expand_module79)
	MR_init_entry1(transform_hlds__stm_expand__IntroducedFrom__pred__create_or_else_end_branch__1791__1_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__stm_expand__IntroducedFrom__pred__create_or_else_end_branch__1791__1_6_0);
	MR_init_label2(transform_hlds__stm_expand__IntroducedFrom__pred__create_or_else_end_branch__1791__1_6_0,2,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__create_or_else_end_branch__1791__1'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__stm_expand__IntroducedFrom__pred__create_or_else_end_branch__1791__1_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_stm_builtin_module_0_0,
		transform_hlds__stm_expand__IntroducedFrom__pred__create_or_else_end_branch__1791__1_6_0_i2);
MR_def_label(transform_hlds__stm_expand__IntroducedFrom__pred__create_or_else_end_branch__1791__1_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr5 = MR_sv(2);
	MR_tfield(1, MR_r2, 0) = MR_tempr5;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr6 = MR_sv(3);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr6;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tempr7 = MR_sv(4);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr7;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr7;
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_TAG_COMMON(3,7,1);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr4, 0) = MR_tempr6;
	MR_tfield(0, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr5;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(3,7,1);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr3;
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_tempr2;
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_from_assoc_list_1_0,
		transform_hlds__stm_expand__IntroducedFrom__pred__create_or_else_end_branch__1791__1_6_0_i13);
MR_def_label(transform_hlds__stm_expand__IntroducedFrom__pred__create_or_else_end_branch__1791__1_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("stm_merge_nested_logs", 21);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Integer) 2;
	MR_r7 = MR_sv(3);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(transform_hlds__stm_expand__create_simple_call_12_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__stm_expand_module80)
	MR_init_entry1(transform_hlds__stm_expand__IntroducedFrom__pred__rename_var_in_wrapper_pred__2078__1_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__stm_expand__IntroducedFrom__pred__rename_var_in_wrapper_pred__2078__1_4_0);
	MR_init_label2(transform_hlds__stm_expand__IntroducedFrom__pred__rename_var_in_wrapper_pred__2078__1_4_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__rename_var_in_wrapper_pred__2078__1'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__stm_expand__IntroducedFrom__pred__rename_var_in_wrapper_pred__2078__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		transform_hlds__stm_expand__IntroducedFrom__pred__rename_var_in_wrapper_pred__2078__1_4_0_i3);
MR_def_label(transform_hlds__stm_expand__IntroducedFrom__pred__rename_var_in_wrapper_pred__2078__1_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__IntroducedFrom__pred__rename_var_in_wrapper_pred__2078__1_4_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(3);
MR_def_label(transform_hlds__stm_expand__IntroducedFrom__pred__rename_var_in_wrapper_pred__2078__1_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__stm_expand_module81)
	MR_init_entry1(transform_hlds__stm_expand__IntroducedFrom__pred__get_input_output_types__2586__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__stm_expand__IntroducedFrom__pred__get_input_output_types__2586__1_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__get_input_output_types__2586__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__stm_expand__IntroducedFrom__pred__get_input_output_types__2586__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__stm_expand_module82)
	MR_init_entry1(transform_hlds__stm_expand__IntroducedFrom__pred__get_input_output_types__2587__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__stm_expand__IntroducedFrom__pred__get_input_output_types__2587__1_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__get_input_output_types__2587__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__stm_expand__IntroducedFrom__pred__get_input_output_types__2587__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__stm_expand_module83)
	MR_init_entry1(transform_hlds__stm_expand__IntroducedFrom__pred__get_input_output_modes__2604__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__stm_expand__IntroducedFrom__pred__get_input_output_modes__2604__1_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__get_input_output_modes__2604__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__stm_expand__IntroducedFrom__pred__get_input_output_modes__2604__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_103_101_116_95_105_110_112_117_116_95_111_117_116_112_117_116_95_109_111_100_101_115_95_95_50_54_48_52_95_95_49_95_95_91_50_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__stm_expand_module84)
	MR_init_entry1(transform_hlds__stm_expand__IntroducedFrom__pred__get_input_output_modes__2605__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__stm_expand__IntroducedFrom__pred__get_input_output_modes__2605__1_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__get_input_output_modes__2605__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__stm_expand__IntroducedFrom__pred__get_input_output_modes__2605__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_103_101_116_95_105_110_112_117_116_95_111_117_116_112_117_116_95_109_111_100_101_115_95_95_50_54_48_53_95_95_49_95_95_91_50_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__stm_expand_module85)
	MR_init_entry1(transform_hlds__stm_expand__map3_in_foldl__ho1_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__stm_expand__map3_in_foldl__ho1_7_0);
	MR_init_label4(transform_hlds__stm_expand__map3_in_foldl__ho1_7_0,2,10,11,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map3_in_foldl__ho1'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__stm_expand__map3_in_foldl__ho1_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__map3_in_foldl__ho1_7_0_i2);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__map3_in_foldl__ho1_7_0_i2);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__map3_in_foldl__ho1_7_0_i2);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r4;
	MR_proceed();
MR_def_label(transform_hlds__stm_expand__map3_in_foldl__ho1_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__map3_in_foldl__ho1_7_0_i6);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__map3_in_foldl__ho1_7_0_i6);
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(transform_hlds__stm_expand__map3_in_foldl__ho1_7_0_i6);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_sv(3) = MR_tfield(1, MR_r3, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_r3 = MR_tfield(1, MR_r3, 0);
	MR_np_call_localret_ent(transform_hlds__stm_expand__IntroducedFrom__pred__create_or_else_end_branch__1791__1_6_0,
		transform_hlds__stm_expand__map3_in_foldl__ho1_7_0_i10);
MR_def_label(transform_hlds__stm_expand__map3_in_foldl__ho1_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr2;
	}
	MR_np_localcall_lab(transform_hlds__stm_expand__map3_in_foldl__ho1_7_0,
		transform_hlds__stm_expand__map3_in_foldl__ho1_7_0_i11);
MR_def_label(transform_hlds__stm_expand__map3_in_foldl__ho1_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(transform_hlds__stm_expand__map3_in_foldl__ho1_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("stm_expand.m", 12);
	MR_r2 = (MR_Word) MR_string_const("map2_in_foldl: Source list lengths mismatch", 43);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_string_3_0);
MR_decl_entry(list__map5_7_0);

MR_BEGIN_MODULE(transform_hlds__stm_expand_module86)
	MR_init_entry1(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_109_95_99_114_101_97_116_101_95_97_99_116_117_97_108_95_103_111_97_108_95_95_91_53_93_95_48_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_109_95_99_114_101_97_116_101_95_97_99_116_117_97_108_95_103_111_97_108_95_95_91_53_93_95_48_10_0);
	MR_init_label8(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_109_95_99_114_101_97_116_101_95_97_99_116_117_97_108_95_103_111_97_108_95_95_91_53_93_95_48_10_0,4,3,7,10,16,17,6,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__stm_create_actual_goal__[5]_0'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_109_95_99_114_101_97_116_101_95_97_99_116_117_97_108_95_103_111_97_108_95_95_91_53_93_95_48_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_109_95_99_114_101_97_116_101_95_97_99_116_117_97_108_95_103_111_97_108_95_95_91_53_93_95_48_10_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(5) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(7) = MR_r7;
	MR_r1 = (MR_Word) MR_string_const("Creating nested atomic goal\n", 28);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_109_95_99_114_101_97_116_101_95_97_99_116_117_97_108_95_103_111_97_108_95_95_91_53_93_95_48_10_0_i4);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_109_95_99_114_101_97_116_101_95_97_99_116_117_97_108_95_103_111_97_108_95_95_91_53_93_95_48_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(7);
	MR_np_call_localret_ent(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_109_95_99_114_101_97_116_101_95_97_99_116_117_97_108_95_103_111_97_108_95_95_91_53_93_95_48_10_0_i17);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_109_95_99_114_101_97_116_101_95_97_99_116_117_97_108_95_103_111_97_108_95_95_91_53_93_95_48_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_109_95_99_114_101_97_116_101_95_97_99_116_117_97_108_95_103_111_97_108_95_95_91_53_93_95_48_10_0_i6);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r5;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r6;
	MR_tempr2 = MR_r4;
	MR_sv(5) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(7) = MR_r7;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__strip_goal_calls_6_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_109_95_99_114_101_97_116_101_95_97_99_116_117_97_108_95_103_111_97_108_95_95_91_53_93_95_48_10_0_i7);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_109_95_99_114_101_97_116_101_95_97_99_116_117_97_108_95_103_111_97_108_95_95_91_53_93_95_48_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r4;
	MR_sv(10) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr1;
	MR_r7 = (MR_Word) MR_TAG_COMMON(0,1,7);
	MR_r8 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__map5_7_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_109_95_99_114_101_97_116_101_95_97_99_116_117_97_108_95_103_111_97_108_95_95_91_53_93_95_48_10_0_i10);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_109_95_99_114_101_97_116_101_95_97_99_116_117_97_108_95_103_111_97_108_95_95_91_53_93_95_48_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr2, 1) = MR_r4;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(10);
	MR_tfield(1, MR_tempr3, 1) = MR_r5;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr5, 1) = MR_tempr4;
	MR_tempr6 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr6;
	MR_r2 = MR_sv(2);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	MR_r7 = MR_sv(7);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__calc_pred_variables_list_9_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_109_95_99_114_101_97_116_101_95_97_99_116_117_97_108_95_103_111_97_108_95_95_91_53_93_95_48_10_0_i16);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_109_95_99_114_101_97_116_101_95_97_99_116_117_97_108_95_103_111_97_108_95_95_91_53_93_95_48_10_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_top_level_pred_8_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_109_95_99_114_101_97_116_101_95_97_99_116_117_97_108_95_103_111_97_108_95_95_91_53_93_95_48_10_0_i17);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_109_95_99_114_101_97_116_101_95_97_99_116_117_97_108_95_103_111_97_108_95_95_91_53_93_95_48_10_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Integer) 1;
	MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_109_95_99_114_101_97_116_101_95_97_99_116_117_97_108_95_103_111_97_108_95_95_91_53_93_95_48_10_0_i2);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_109_95_99_114_101_97_116_101_95_97_99_116_117_97_108_95_103_111_97_108_95_95_91_53_93_95_48_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("stm_expand.m", 12);
	MR_r2 = (MR_Word) MR_string_const("stm_create_actual_goal: Unknown atomic goal type", 48);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_109_95_99_114_101_97_116_101_95_97_99_116_117_97_108_95_103_111_97_108_95_95_91_53_93_95_48_10_0_i2);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_109_95_99_114_101_97_116_101_95_97_99_116_117_97_108_95_103_111_97_108_95_95_91_53_93_95_48_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_r2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_r3;
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_r2, 6);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__stm_expand_module87)
	MR_init_entry1(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0);
	MR_init_label10(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0,2,5,8,9,11,12,13,15,7,25)
	MR_init_label10(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0,27,29,30,31,32,33,34,35,36,37)
	MR_init_label10(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0,38,39,40,41,42,44,45,46,47,48)
	MR_init_label5(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0,50,51,52,54,58)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__create_nested_goal__[5, 6]_0'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_r6;
	MR_sv(12) = MR_r7;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__strip_goal_calls_6_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0_i2);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_sv(9) = MR_r3;
	MR_sv(10) = MR_r4;
	MR_sv(11) = MR_r5;
	MR_sv(13) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(13);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr1;
	MR_r7 = (MR_Word) MR_TAG_COMMON(0,1,8);
	MR_r8 = MR_sv(6);
	}
	MR_np_call_localret_ent(list__map5_7_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0_i5);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0_i7);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__uo_mode_0_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0_i8);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__di_mode_0_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0_i9);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(8);
	MR_r4 = MR_sv(12);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_var_unify_stm_6_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0_i11);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__uo_mode_0_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0_i12);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__di_mode_0_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0_i13);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(11);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_var_unify_stm_6_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0_i15);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = MR_tempr2;
	MR_sv(1) = MR_r2;
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_plain_conj_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0_i58);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(10);
	MR_tfield(1, MR_tempr2, 1) = MR_r4;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(11);
	MR_tfield(1, MR_tempr3, 1) = MR_r5;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr5, 1) = MR_tempr4;
	MR_tempr4 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr4;
	MR_r2 = MR_sv(2);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	MR_r7 = MR_sv(12);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__calc_pred_variables_list_9_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0_i25);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__common_goal_vars_from_list_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0_i27);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tfield(0, MR_sv(2), 1);
	MR_np_call_localret_ent(fn__string__string_1_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0_i29);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0_i30);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Local: ", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0_i31);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0_i32);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
	MR_np_call_localret_ent(fn__string__string_1_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0_i33);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0_i34);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Inner: ", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0_i35);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0_i36);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tfield(0, MR_sv(2), 2);
	MR_np_call_localret_ent(fn__string__string_1_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0_i37);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0_i38);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Outer: ", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0_i39);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0_i40);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(transform_hlds__stm_expand__get_input_output_types_4_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0_i41);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(transform_hlds__stm_expand__make_return_type_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0_i42);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,5,22);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_aux_variable_stm_5_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0_i44);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_51_95_95_91_51_93_95_48_6_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0_i45);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(11);
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_or_else_pred_8_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0_i46);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__uo_mode_0_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0_i47);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__di_mode_0_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0_i48);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(8);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_var_unify_stm_6_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0_i50);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__uo_mode_0_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0_i51);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__di_mode_0_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0_i52);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(11);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_var_unify_stm_6_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0_i54);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(4);
	MR_tfield(1, MR_r1, 1) = MR_tempr2;
	MR_sv(1) = MR_r2;
	}
	MR_np_call_localret_ent(transform_hlds__stm_expand__create_plain_conj_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0_i58);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(14);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__stm_expand_module88)
	MR_init_entry1(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_111_114_95_101_108_115_101_95_101_110_100_95_98_114_97_110_99_104_95_95_49_55_55_57_95_95_49_95_95_91_49_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_111_114_95_101_108_115_101_95_101_110_100_95_98_114_97_110_99_104_95_95_49_55_55_57_95_95_49_95_95_91_49_93_95_48_4_0);
	MR_init_label1(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_111_114_95_101_108_115_101_95_101_110_100_95_98_114_97_110_99_104_95_95_49_55_55_57_95_95_49_95_95_91_49_93_95_48_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__IntroducedFrom__pred__create_or_else_end_branch__1779__1__[1]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_111_114_95_101_108_115_101_95_101_110_100_95_98_114_97_110_99_104_95_95_49_55_55_57_95_95_49_95_95_91_49_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__stm_state_type_0_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_111_114_95_101_108_115_101_95_101_110_100_95_98_114_97_110_99_104_95_95_49_55_55_57_95_95_49_95_95_91_49_93_95_48_4_0_i2);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_111_114_95_101_108_115_101_95_101_110_100_95_98_114_97_110_99_104_95_95_49_55_55_57_95_95_49_95_95_91_49_93_95_48_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,5,23);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(transform_hlds__stm_expand__create_aux_variable_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__stm_expand_module89)
	MR_init_entry1(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_103_101_116_95_105_110_112_117_116_95_111_117_116_112_117_116_95_109_111_100_101_115_95_95_50_54_48_52_95_95_49_95_95_91_50_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_103_101_116_95_105_110_112_117_116_95_111_117_116_112_117_116_95_109_111_100_101_115_95_95_50_54_48_52_95_95_49_95_95_91_50_93_95_48_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__IntroducedFrom__pred__get_input_output_modes__2604__1__[2]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_103_101_116_95_105_110_112_117_116_95_111_117_116_112_117_116_95_109_111_100_101_115_95_95_50_54_48_52_95_95_49_95_95_91_50_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__stm_expand_module90)
	MR_init_entry1(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_103_101_116_95_105_110_112_117_116_95_111_117_116_112_117_116_95_109_111_100_101_115_95_95_50_54_48_53_95_95_49_95_95_91_50_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_103_101_116_95_105_110_112_117_116_95_111_117_116_112_117_116_95_109_111_100_101_115_95_95_50_54_48_53_95_95_49_95_95_91_50_93_95_48_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__IntroducedFrom__pred__get_input_output_modes__2605__1__[2]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_103_101_116_95_105_110_112_117_116_95_111_117_116_112_117_116_95_109_111_100_101_115_95_95_50_54_48_53_95_95_49_95_95_91_50_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__stm_expand_module91)
	MR_init_entry1(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_50_95_95_91_51_93_95_48_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_50_95_95_91_51_93_95_48_6_0);
	MR_init_label4(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_50_95_95_91_51_93_95_48_6_0,2,8,9,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__map2_in_foldl__ho2__[3]_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_50_95_95_91_51_93_95_48_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_50_95_95_91_51_93_95_48_6_0_i2);
	}
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_50_95_95_91_51_93_95_48_6_0_i2);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r5;
	MR_proceed();
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_50_95_95_91_51_93_95_48_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_50_95_95_91_51_93_95_48_6_0_i5);
	}
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_50_95_95_91_51_93_95_48_6_0_i5);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r3, 1);
	MR_sv(2) = MR_tfield(1, MR_r4, 1);
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r1;
	MR_r3 = MR_tfield(1, MR_r3, 0);
	MR_r4 = MR_tfield(1, MR_r4, 0);
	MR_np_call_localret_ent(transform_hlds__stm_expand__IntroducedFrom__pred__create_wrapper_for_goal_list__1331__1_7_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_50_95_95_91_51_93_95_48_6_0_i8);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_50_95_95_91_51_93_95_48_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr2;
	}
	MR_np_localcall_lab(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_50_95_95_91_51_93_95_48_6_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_50_95_95_91_51_93_95_48_6_0_i9);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_50_95_95_91_51_93_95_48_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_50_95_95_91_51_93_95_48_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("stm_expand.m", 12);
	MR_r2 = (MR_Word) MR_string_const("map2_in_foldl: Source list lengths mismatch", 43);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__stm_expand_module92)
	MR_init_entry1(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_51_95_95_91_51_93_95_48_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_51_95_95_91_51_93_95_48_6_0);
	MR_init_label4(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_51_95_95_91_51_93_95_48_6_0,2,8,9,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__map2_in_foldl__ho3__[3]_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_51_95_95_91_51_93_95_48_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_51_95_95_91_51_93_95_48_6_0_i2);
	}
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_51_95_95_91_51_93_95_48_6_0_i2);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r5;
	MR_proceed();
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_51_95_95_91_51_93_95_48_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_51_95_95_91_51_93_95_48_6_0_i5);
	}
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_51_95_95_91_51_93_95_48_6_0_i5);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r3, 1);
	MR_sv(2) = MR_tfield(1, MR_r4, 1);
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r1;
	MR_r3 = MR_tfield(1, MR_r3, 0);
	MR_r4 = MR_tfield(1, MR_r4, 0);
	MR_np_call_localret_ent(transform_hlds__stm_expand__IntroducedFrom__pred__create_nested_goal__778__1_7_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_51_95_95_91_51_93_95_48_6_0_i8);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_51_95_95_91_51_93_95_48_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr2;
	}
	MR_np_localcall_lab(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_51_95_95_91_51_93_95_48_6_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_51_95_95_91_51_93_95_48_6_0_i9);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_51_95_95_91_51_93_95_48_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_115_116_109_95_101_120_112_97_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_51_95_95_91_51_93_95_48_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("stm_expand.m", 12);
	MR_r2 = (MR_Word) MR_string_const("map2_in_foldl: Source list lengths mismatch", 43);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__transform_hlds__stm_expand_maybe_bunch_0(void)
{
	transform_hlds__stm_expand_module0();
	transform_hlds__stm_expand_module1();
	transform_hlds__stm_expand_module2();
	transform_hlds__stm_expand_module3();
	transform_hlds__stm_expand_module4();
	transform_hlds__stm_expand_module5();
	transform_hlds__stm_expand_module6();
	transform_hlds__stm_expand_module7();
	transform_hlds__stm_expand_module8();
	transform_hlds__stm_expand_module9();
	transform_hlds__stm_expand_module10();
	transform_hlds__stm_expand_module11();
	transform_hlds__stm_expand_module12();
	transform_hlds__stm_expand_module13();
	transform_hlds__stm_expand_module14();
	transform_hlds__stm_expand_module15();
	transform_hlds__stm_expand_module16();
	transform_hlds__stm_expand_module17();
	transform_hlds__stm_expand_module18();
	transform_hlds__stm_expand_module19();
	transform_hlds__stm_expand_module20();
	transform_hlds__stm_expand_module21();
	transform_hlds__stm_expand_module22();
	transform_hlds__stm_expand_module23();
	transform_hlds__stm_expand_module24();
	transform_hlds__stm_expand_module25();
	transform_hlds__stm_expand_module26();
	transform_hlds__stm_expand_module27();
	transform_hlds__stm_expand_module28();
	transform_hlds__stm_expand_module29();
	transform_hlds__stm_expand_module30();
	transform_hlds__stm_expand_module31();
	transform_hlds__stm_expand_module32();
	transform_hlds__stm_expand_module33();
	transform_hlds__stm_expand_module34();
	transform_hlds__stm_expand_module35();
	transform_hlds__stm_expand_module36();
	transform_hlds__stm_expand_module37();
	transform_hlds__stm_expand_module38();
	transform_hlds__stm_expand_module39();
}

static void mercury__transform_hlds__stm_expand_maybe_bunch_1(void)
{
	transform_hlds__stm_expand_module40();
	transform_hlds__stm_expand_module41();
	transform_hlds__stm_expand_module42();
	transform_hlds__stm_expand_module43();
	transform_hlds__stm_expand_module44();
	transform_hlds__stm_expand_module45();
	transform_hlds__stm_expand_module46();
	transform_hlds__stm_expand_module47();
	transform_hlds__stm_expand_module48();
	transform_hlds__stm_expand_module49();
	transform_hlds__stm_expand_module50();
	transform_hlds__stm_expand_module51();
	transform_hlds__stm_expand_module52();
	transform_hlds__stm_expand_module53();
	transform_hlds__stm_expand_module54();
	transform_hlds__stm_expand_module55();
	transform_hlds__stm_expand_module56();
	transform_hlds__stm_expand_module57();
	transform_hlds__stm_expand_module58();
	transform_hlds__stm_expand_module59();
	transform_hlds__stm_expand_module60();
	transform_hlds__stm_expand_module61();
	transform_hlds__stm_expand_module62();
	transform_hlds__stm_expand_module63();
	transform_hlds__stm_expand_module64();
	transform_hlds__stm_expand_module65();
	transform_hlds__stm_expand_module66();
	transform_hlds__stm_expand_module67();
	transform_hlds__stm_expand_module68();
	transform_hlds__stm_expand_module69();
	transform_hlds__stm_expand_module70();
	transform_hlds__stm_expand_module71();
	transform_hlds__stm_expand_module72();
	transform_hlds__stm_expand_module73();
	transform_hlds__stm_expand_module74();
	transform_hlds__stm_expand_module75();
	transform_hlds__stm_expand_module76();
	transform_hlds__stm_expand_module77();
	transform_hlds__stm_expand_module78();
	transform_hlds__stm_expand_module79();
}

static void mercury__transform_hlds__stm_expand_maybe_bunch_2(void)
{
	transform_hlds__stm_expand_module80();
	transform_hlds__stm_expand_module81();
	transform_hlds__stm_expand_module82();
	transform_hlds__stm_expand_module83();
	transform_hlds__stm_expand_module84();
	transform_hlds__stm_expand_module85();
	transform_hlds__stm_expand_module86();
	transform_hlds__stm_expand_module87();
	transform_hlds__stm_expand_module88();
	transform_hlds__stm_expand_module89();
	transform_hlds__stm_expand_module90();
	transform_hlds__stm_expand_module91();
	transform_hlds__stm_expand_module92();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__transform_hlds__stm_expand__init(void);
void mercury__transform_hlds__stm_expand__init_type_tables(void);
void mercury__transform_hlds__stm_expand__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__transform_hlds__stm_expand__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__stm_expand__init_complexity_procs(void);
#endif

void mercury__transform_hlds__stm_expand__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__transform_hlds__stm_expand_maybe_bunch_0();
	mercury__transform_hlds__stm_expand_maybe_bunch_1();
	mercury__transform_hlds__stm_expand_maybe_bunch_2();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__stm_expand__type_ctor_info_stm_goal_vars_0,
		transform_hlds__stm_expand__stm_goal_vars_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__stm_expand__type_ctor_info_stm_info_0,
		transform_hlds__stm_expand__stm_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__stm_expand__type_ctor_info_stm_new_pred_info_0,
		transform_hlds__stm_expand__stm_new_pred_info_0_0);
	mercury__transform_hlds__stm_expand__init_debugger();
}

void mercury__transform_hlds__stm_expand__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__stm_expand__type_ctor_info_stm_goal_vars_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__stm_expand__type_ctor_info_stm_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__stm_expand__type_ctor_info_stm_new_pred_info_0);
	}
}


void mercury__transform_hlds__stm_expand__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__transform_hlds__stm_expand__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__transform_hlds__stm_expand);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__stm_expand__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
