/*
** Automatically generated from `mode_errors.m'
** by the Mercury compiler,
** version 11.07.1, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__check_hlds__mode_errors__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 526 "../library/io.int"
#include "io.mh"

#line 28 "check_hlds.mode_errors.c"
#line 536 "../library/io.int"
#include "time.mh"

#line 32 "check_hlds.mode_errors.c"
#line 537 "../library/io.int"
#include "string.mh"

#line 36 "check_hlds.mode_errors.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 40 "check_hlds.mode_errors.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 44 "check_hlds.mode_errors.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 48 "check_hlds.mode_errors.c"
#line 49 "check_hlds.mode_errors.c"
#include "check_hlds.mode_errors.mh"

#line 52 "check_hlds.mode_errors.c"
#line 53 "check_hlds.mode_errors.c"
#ifndef CHECK_HLDS__MODE_ERRORS_DECL_GUARD
#define CHECK_HLDS__MODE_ERRORS_DECL_GUARD

#line 57 "check_hlds.mode_errors.c"
#line 58 "check_hlds.mode_errors.c"

#endif
#line 61 "check_hlds.mode_errors.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Integer f1;
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Integer f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Integer f1[2];
	MR_Word * f2[2];
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

struct mercury_type_10 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_10 mercury_common_10[];

struct mercury_type_11 {
	MR_Integer f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_11 mercury_common_11[];

struct mercury_type_12 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_12 mercury_common_12[];

struct mercury_type_13 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_13 mercury_common_13[];

extern const MR_BaseTypeclassInfo
	mercury_data_base_typeclass_info_parse_tree__error_util__print_anything__arity1__check_hlds__mode_errors__write_indented_goal__arity0__[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_check_hlds__mode_errors__type_ctor_info_delayed_goal_0,
	mercury_data_check_hlds__mode_errors__type_ctor_info_final_inst_error_0,
	mercury_data_check_hlds__mode_errors__type_ctor_info_include_detism_on_modes_0,
	mercury_data_check_hlds__mode_errors__type_ctor_info_merge_context_0,
	mercury_data_check_hlds__mode_errors__type_ctor_info_merge_error_0,
	mercury_data_check_hlds__mode_errors__type_ctor_info_merge_errors_0,
	mercury_data_check_hlds__mode_errors__type_ctor_info_mode_error_0,
	mercury_data_check_hlds__mode_errors__type_ctor_info_mode_error_info_0,
	mercury_data_check_hlds__mode_errors__type_ctor_info_mode_error_unify_rhs_0,
	mercury_data_check_hlds__mode_errors__type_ctor_info_mode_warning_0;

extern const MR_TypeCtorInfo_Struct
	mercury_data_check_hlds__mode_errors__type_ctor_info_mode_warning_info_0,
	mercury_data_check_hlds__mode_errors__type_ctor_info_negated_context_desc_0,
	mercury_data_check_hlds__mode_errors__type_ctor_info_schedule_culprit_0,
	mercury_data_check_hlds__mode_errors__type_ctor_info_write_indented_goal_0;
MR_decl_label3(check_hlds__mode_errors__ClassMethod_for_parse_tree__error_util__print_anything____check_hlds__mode_errors__write_indented_goal__arity0______parse_tree__error_util__print_anything_3_3_0, 2,3,4)
MR_decl_label1(check_hlds__mode_errors__is_error_important_1_0, 8)
MR_decl_label9(fn__check_hlds__mode_errors__inst_list_to_sep_lines_2_0, 36,5,9,10,11,12,16,17,18)
MR_decl_label3(fn__check_hlds__mode_errors__inst_to_string_2_0, 2,3,4)
MR_decl_label10(fn__check_hlds__mode_errors__maybe_report_error_no_modes_3_0, 2,3,6,9,12,16,17,8,4,27)
MR_decl_label3(fn__check_hlds__mode_errors__maybe_report_error_no_modes_3_0, 30,34,35)
MR_decl_label4(fn__check_hlds__mode_errors__merge_error_to_pieces_2_0, 2,3,7,8)
MR_decl_label9(fn__check_hlds__mode_errors__mode_decl_to_string_2_0, 2,3,5,6,7,8,9,10,11)
MR_decl_label10(fn__check_hlds__mode_errors__mode_error_bind_var_to_spec_5_0, 2,3,4,7,10,14,29,34,39,44)
MR_decl_label6(fn__check_hlds__mode_errors__mode_error_bind_var_to_spec_5_0, 49,54,55,56,57,62)
MR_decl_label10(fn__check_hlds__mode_errors__mode_error_conj_to_spec_3_0, 2,6,9,10,11,12,19,18,16,25)
MR_decl_label10(fn__check_hlds__mode_errors__mode_error_conj_to_spec_3_0, 15,14,31,33,34,42,49,50,51,52)
MR_decl_label6(fn__check_hlds__mode_errors__mode_error_conj_to_spec_3_0, 4,3,55,57,67,83)
MR_decl_label7(fn__check_hlds__mode_errors__mode_error_conjunct_to_msgs_3_0, 3,4,6,18,28,29,30)
MR_decl_label8(fn__check_hlds__mode_errors__mode_error_disj_to_spec_3_0, 2,3,6,15,32,33,35,36)
MR_decl_label10(fn__check_hlds__mode_errors__mode_error_final_inst_to_spec_6_0, 2,3,4,6,8,11,15,18,19,20)
MR_decl_label6(fn__check_hlds__mode_errors__mode_error_final_inst_to_spec_6_0, 21,25,26,27,28,46)
MR_decl_label10(fn__check_hlds__mode_errors__mode_error_higher_order_pred_var_to_spec_5_0, 2,3,4,7,8,6,11,12,13,15)
MR_decl_label5(fn__check_hlds__mode_errors__mode_error_higher_order_pred_var_to_spec_5_0, 18,19,20,21,34)
MR_decl_label10(fn__check_hlds__mode_errors__mode_error_implied_mode_to_spec_4_0, 2,3,4,7,10,11,12,13,17,18)
MR_decl_label3(fn__check_hlds__mode_errors__mode_error_implied_mode_to_spec_4_0, 19,20,37)
MR_decl_label10(fn__check_hlds__mode_errors__mode_error_in_callee_to_spec_6_0, 2,3,4,5,7,15,18,19,20,31)
MR_decl_label10(fn__check_hlds__mode_errors__mode_error_in_callee_to_spec_6_0, 32,33,34,42,43,44,45,46,48,53)
MR_decl_label1(fn__check_hlds__mode_errors__mode_error_in_callee_to_spec_6_0, 41)
MR_decl_label2(fn__check_hlds__mode_errors__mode_error_info_to_spec_2_0, 2,3)
MR_decl_label10(fn__check_hlds__mode_errors__mode_error_no_matching_mode_to_spec_3_0, 2,3,4,5,8,7,6,11,19,27)
MR_decl_label2(fn__check_hlds__mode_errors__mode_error_no_matching_mode_to_spec_3_0, 28,30)
MR_decl_label9(fn__check_hlds__mode_errors__mode_error_non_local_lambda_var_to_spec_3_0, 2,3,4,6,9,10,11,12,27)
MR_decl_label6(fn__check_hlds__mode_errors__mode_error_par_conj_to_spec_2_0, 2,3,6,7,9,10)
MR_decl_label9(fn__check_hlds__mode_errors__mode_error_poly_unify_to_spec_3_0, 2,3,4,7,10,11,12,13,28)
MR_decl_label10(fn__check_hlds__mode_errors__mode_error_to_spec_2_0, 4,5,7,3,13,15,17,19,21,23)
MR_decl_label10(fn__check_hlds__mode_errors__mode_error_to_spec_2_0, 25,27,29,31,33,35,37,39,41,43)
MR_decl_label4(fn__check_hlds__mode_errors__mode_error_to_spec_2_0, 45,47,49,51)
MR_decl_label10(fn__check_hlds__mode_errors__mode_error_unify_pred_to_spec_5_0, 2,3,4,5,6,8,11,12,10,14)
MR_decl_label8(fn__check_hlds__mode_errors__mode_error_unify_pred_to_spec_5_0, 15,17,24,40,41,45,46,68)
MR_decl_label10(fn__check_hlds__mode_errors__mode_error_unify_var_functor_to_spec_6_0, 2,3,4,5,6,8,14,17,35,37)
MR_decl_label6(fn__check_hlds__mode_errors__mode_error_unify_var_functor_to_spec_6_0, 53,56,57,36,59,60)
MR_decl_label10(fn__check_hlds__mode_errors__mode_error_unify_var_lambda_to_spec_4_0, 2,3,4,6,10,13,14,15,16,20)
MR_decl_label4(fn__check_hlds__mode_errors__mode_error_unify_var_lambda_to_spec_4_0, 21,22,23,41)
MR_decl_label10(fn__check_hlds__mode_errors__mode_error_unify_var_multimode_pred_to_spec_3_0, 2,3,4,5,6,7,8,9,11,12)
MR_decl_label2(fn__check_hlds__mode_errors__mode_error_unify_var_multimode_pred_to_spec_3_0, 14,29)
MR_decl_label10(fn__check_hlds__mode_errors__mode_error_unify_var_multimode_pred_undetermined_to_spec_3_0, 2,3,4,5,6,7,8,9,11,12)
MR_decl_label2(fn__check_hlds__mode_errors__mode_error_unify_var_multimode_pred_undetermined_to_spec_3_0, 14,31)
MR_decl_label10(fn__check_hlds__mode_errors__mode_error_unify_var_var_to_spec_5_0, 2,3,4,6,9,13,16,17,18,19)
MR_decl_label6(fn__check_hlds__mode_errors__mode_error_unify_var_var_to_spec_5_0, 23,25,26,27,28,49)
MR_decl_label10(fn__check_hlds__mode_errors__mode_error_var_has_inst_to_spec_4_0, 2,3,4,6,9,10,11,12,16,17)
MR_decl_label3(fn__check_hlds__mode_errors__mode_error_var_has_inst_to_spec_4_0, 18,19,33)
MR_decl_label5(fn__check_hlds__mode_errors__mode_error_var_is_live_to_spec_2_0, 2,3,4,7,16)
MR_decl_label10(fn__check_hlds__mode_errors__mode_info_context_preamble_1_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label7(fn__check_hlds__mode_errors__mode_info_context_preamble_1_0, 13,14,22,24,27,25,31)
MR_decl_label10(fn__check_hlds__mode_errors__mode_warning_cannot_succeed_var_var_5_0, 2,3,4,6,9,12,15,16,17,18)
MR_decl_label6(fn__check_hlds__mode_errors__mode_warning_cannot_succeed_var_var_5_0, 21,23,24,25,26,46)
MR_decl_label10(fn__check_hlds__mode_errors__mode_warning_info_to_spec_2_0, 2,3,6,7,8,10,13,16,19,20)
MR_decl_label4(fn__check_hlds__mode_errors__mode_warning_info_to_spec_2_0, 21,22,37,5)
MR_decl_label5(fn__check_hlds__mode_errors__purity_error_lambda_should_be_any_to_spec_2_0, 2,3,4,7,15)
MR_decl_label7(fn__check_hlds__mode_errors__purity_error_should_be_in_promise_purity_scope_to_spec_3_0, 2,3,4,10,6,22,31)
MR_decl_label10(fn__check_hlds__mode_errors__report_indistinguishable_modes_error_5_0, 2,3,4,5,6,9,16,17,19,22)
MR_decl_label10(fn__check_hlds__mode_errors__report_mode_inference_message_4_0, 2,4,5,6,7,10,9,13,14,15)
MR_decl_label10(fn__check_hlds__mode_errors__report_mode_inference_message_4_0, 17,18,22,21,24,28,30,32,34,37)
MR_decl_label3(fn__check_hlds__mode_errors__report_mode_inference_message_4_0, 38,36,53)
MR_decl_label9(fn__check_hlds__mode_errors__report_mode_inference_messages_3_0, 32,4,5,6,8,10,11,12,7)
MR_decl_label9(fn__check_hlds__mode_errors__report_mode_inference_messages_2_5_0, 42,4,5,6,7,13,11,16,9)
MR_decl_label5(fn__check_hlds__mode_errors__should_report_mode_warning_for_pred_origin_1_0, 3,4,5,6,7)
MR_decl_label4(__Unify___check_hlds__mode_errors__delayed_goal_0_0, 5,7,11,1)
MR_decl_label3(__Unify___check_hlds__mode_errors__merge_error_0_0, 4,8,1)
MR_decl_label10(__Unify___check_hlds__mode_errors__mode_error_0_0, 5,6,10,16,18,20,14,26,24,32)
MR_decl_label10(__Unify___check_hlds__mode_errors__mode_error_0_0, 34,36,30,40,42,38,46,48,44,55)
MR_decl_label10(__Unify___check_hlds__mode_errors__mode_error_0_0, 57,52,64,61,70,68,76,74,82,84)
MR_decl_label10(__Unify___check_hlds__mode_errors__mode_error_0_0, 86,80,91,93,95,97,88,103,105,101)
MR_decl_label10(__Unify___check_hlds__mode_errors__mode_error_0_0, 111,109,115,113,119,121,123,117,129,131)
MR_decl_label5(__Unify___check_hlds__mode_errors__mode_error_0_0, 127,135,247,139,1)
MR_decl_label5(__Unify___check_hlds__mode_errors__mode_error_info_0_0, 5,7,9,13,1)
MR_decl_label6(__Unify___check_hlds__mode_errors__mode_error_unify_rhs_0_0, 7,5,15,31,12,1)
MR_decl_label8(__Unify___check_hlds__mode_errors__mode_warning_0_0, 7,9,28,5,14,16,18,1)
MR_decl_label4(__Unify___check_hlds__mode_errors__mode_warning_info_0_0, 4,6,10,1)
MR_decl_label4(__Unify___check_hlds__mode_errors__schedule_culprit_0_0, 5,15,6,1)
MR_decl_label4(__Unify___check_hlds__mode_errors__write_indented_goal_0_0, 4,6,10,1)
MR_decl_label10(__Index___check_hlds__mode_errors__mode_error_0_0, 3,4,5,6,7,8,9,10,11,12)
MR_decl_label10(__Index___check_hlds__mode_errors__mode_error_0_0, 13,14,15,16,17,18,19,20,21,22)
MR_decl_label1(__Index___check_hlds__mode_errors__mode_error_0_0, 23)
MR_decl_label5(__Compare___check_hlds__mode_errors__delayed_goal_0_0, 3,2,6,10,39)
MR_decl_label4(__Compare___check_hlds__mode_errors__merge_error_0_0, 3,2,5,21)
MR_decl_label10(__Compare___check_hlds__mode_errors__mode_error_0_0, 4,5,6,7,358,10,14,11,19,25)
MR_decl_label10(__Compare___check_hlds__mode_errors__mode_error_0_0, 29,33,22,43,40,51,55,59,63,48)
MR_decl_label10(__Compare___check_hlds__mode_errors__mode_error_0_0, 74,78,82,71,92,96,89,106,110,114)
MR_decl_label10(__Compare___check_hlds__mode_errors__mode_error_0_0, 118,102,130,126,138,135,146,143,154,158)
MR_decl_label10(__Compare___check_hlds__mode_errors__mode_error_0_0, 162,151,172,176,181,185,169,196,200,193)
MR_decl_label10(__Compare___check_hlds__mode_errors__mode_error_0_0, 209,206,217,214,225,229,233,222,243,247)
MR_decl_label6(__Compare___check_hlds__mode_errors__mode_error_0_0, 240,253,256,262,8,271)
MR_decl_label6(__Compare___check_hlds__mode_errors__mode_error_info_0_0, 3,2,6,10,14,50)
MR_decl_label10(__Compare___check_hlds__mode_errors__mode_error_unify_rhs_0_0, 3,2,9,7,5,49,18,22,16,28)
MR_decl_label2(__Compare___check_hlds__mode_errors__mode_error_unify_rhs_0_0, 29,104)
MR_decl_label10(__Compare___check_hlds__mode_errors__mode_warning_0_0, 3,2,9,13,7,5,20,22,26,30)
MR_decl_label1(__Compare___check_hlds__mode_errors__mode_warning_0_0, 81)
MR_decl_label5(__Compare___check_hlds__mode_errors__mode_warning_info_0_0, 3,2,5,9,29)
MR_decl_label9(__Compare___check_hlds__mode_errors__schedule_culprit_0_0, 7,5,11,33,9,25,14,26,15)
MR_decl_label5(__Compare___check_hlds__mode_errors__write_indented_goal_0_0, 3,2,5,9,29)
MR_def_extern_entry(check_hlds__mode_errors__mode_context_init_1_0)
MR_def_extern_entry(fn__check_hlds__mode_errors__maybe_report_error_no_modes_3_0)
MR_def_extern_entry(fn__check_hlds__mode_errors__mode_decl_to_string_2_0)
MR_def_extern_entry(fn__check_hlds__mode_errors__report_indistinguishable_modes_error_5_0)
MR_decl_static(fn__check_hlds__mode_errors__report_mode_inference_message_4_0)
MR_decl_static(fn__check_hlds__mode_errors__report_mode_inference_messages_2_5_0)
MR_def_extern_entry(fn__check_hlds__mode_errors__report_mode_inference_messages_3_0)
MR_decl_static(fn__check_hlds__mode_errors__mode_info_context_preamble_1_0)
MR_decl_static(fn__check_hlds__mode_errors__mode_error_disj_to_spec_3_0)
MR_decl_static(fn__check_hlds__mode_errors__mode_error_par_conj_to_spec_2_0)
MR_decl_static(fn__check_hlds__mode_errors__inst_to_string_2_0)
MR_decl_static(fn__check_hlds__mode_errors__mode_error_bind_var_to_spec_5_0)
MR_decl_static(fn__check_hlds__mode_errors__mode_error_non_local_lambda_var_to_spec_3_0)
MR_decl_static(fn__check_hlds__mode_errors__inst_list_to_sep_lines_2_0)
MR_decl_static(fn__check_hlds__mode_errors__mode_error_no_matching_mode_to_spec_3_0)
MR_decl_static(fn__check_hlds__mode_errors__mode_error_higher_order_pred_var_to_spec_5_0)
MR_decl_static(fn__check_hlds__mode_errors__mode_error_poly_unify_to_spec_3_0)
MR_decl_static(fn__check_hlds__mode_errors__mode_error_var_is_live_to_spec_2_0)
MR_decl_static(fn__check_hlds__mode_errors__mode_error_var_has_inst_to_spec_4_0)
MR_decl_static(fn__check_hlds__mode_errors__mode_error_implied_mode_to_spec_4_0)
MR_decl_static(fn__check_hlds__mode_errors__mode_error_unify_pred_to_spec_5_0)
MR_decl_static(fn__check_hlds__mode_errors__mode_error_unify_var_var_to_spec_5_0)
MR_decl_static(fn__check_hlds__mode_errors__mode_error_unify_var_lambda_to_spec_4_0)
MR_decl_static(fn__check_hlds__mode_errors__mode_error_unify_var_multimode_pred_to_spec_3_0)
MR_decl_static(fn__check_hlds__mode_errors__mode_error_unify_var_multimode_pred_undetermined_to_spec_3_0)
MR_decl_static(fn__check_hlds__mode_errors__mode_error_unify_var_functor_to_spec_6_0)
MR_decl_static(fn__check_hlds__mode_errors__mode_error_final_inst_to_spec_6_0)
MR_decl_static(fn__check_hlds__mode_errors__purity_error_should_be_in_promise_purity_scope_to_spec_3_0)
MR_decl_static(fn__check_hlds__mode_errors__purity_error_lambda_should_be_any_to_spec_2_0)
MR_decl_static(fn__check_hlds__mode_errors__mode_error_to_spec_2_0)
MR_decl_static(fn__check_hlds__mode_errors__mode_error_conj_to_spec_3_0)
MR_decl_static(fn__check_hlds__mode_errors__mode_error_conjunct_to_msgs_3_0)
MR_decl_static(fn__check_hlds__mode_errors__mode_error_in_callee_to_spec_6_0)
MR_def_extern_entry(fn__check_hlds__mode_errors__mode_error_info_to_spec_2_0)
MR_decl_static(fn__check_hlds__mode_errors__mode_warning_cannot_succeed_var_var_5_0)
MR_def_extern_entry(fn__check_hlds__mode_errors__mode_warning_info_to_spec_2_0)
MR_def_extern_entry(fn__check_hlds__mode_errors__should_report_mode_warning_for_pred_origin_1_0)
MR_decl_static(check_hlds__mode_errors__is_error_important_1_0)
MR_decl_static(fn__check_hlds__mode_errors__merge_error_to_pieces_2_0)
MR_def_extern_entry(__Unify___check_hlds__mode_errors__delayed_goal_0_0)
MR_def_extern_entry(__Compare___check_hlds__mode_errors__delayed_goal_0_0)
MR_def_extern_entry(__Unify___check_hlds__mode_errors__final_inst_error_0_0)
MR_def_extern_entry(__Compare___check_hlds__mode_errors__final_inst_error_0_0)
MR_def_extern_entry(__Unify___check_hlds__mode_errors__include_detism_on_modes_0_0)
MR_def_extern_entry(__Compare___check_hlds__mode_errors__include_detism_on_modes_0_0)
MR_def_extern_entry(__Unify___check_hlds__mode_errors__merge_context_0_0)
MR_def_extern_entry(__Compare___check_hlds__mode_errors__merge_context_0_0)
MR_def_extern_entry(__Unify___check_hlds__mode_errors__merge_error_0_0)
MR_def_extern_entry(__Compare___check_hlds__mode_errors__merge_error_0_0)
MR_def_extern_entry(__Unify___check_hlds__mode_errors__merge_errors_0_0)
MR_def_extern_entry(__Compare___check_hlds__mode_errors__merge_errors_0_0)
MR_def_extern_entry(__Unify___check_hlds__mode_errors__mode_error_0_0)
MR_def_extern_entry(__Index___check_hlds__mode_errors__mode_error_0_0)
MR_def_extern_entry(__Compare___check_hlds__mode_errors__mode_error_0_0)
MR_def_extern_entry(__Unify___check_hlds__mode_errors__mode_error_info_0_0)
MR_def_extern_entry(__Compare___check_hlds__mode_errors__mode_error_info_0_0)
MR_def_extern_entry(__Unify___check_hlds__mode_errors__mode_error_unify_rhs_0_0)
MR_def_extern_entry(__Compare___check_hlds__mode_errors__mode_error_unify_rhs_0_0)
MR_def_extern_entry(__Unify___check_hlds__mode_errors__mode_warning_0_0)
MR_def_extern_entry(__Compare___check_hlds__mode_errors__mode_warning_0_0)
MR_def_extern_entry(__Unify___check_hlds__mode_errors__mode_warning_info_0_0)
MR_def_extern_entry(__Compare___check_hlds__mode_errors__mode_warning_info_0_0)
MR_def_extern_entry(__Unify___check_hlds__mode_errors__negated_context_desc_0_0)
MR_def_extern_entry(__Compare___check_hlds__mode_errors__negated_context_desc_0_0)
MR_def_extern_entry(__Unify___check_hlds__mode_errors__schedule_culprit_0_0)
MR_def_extern_entry(__Compare___check_hlds__mode_errors__schedule_culprit_0_0)
MR_decl_static(__Unify___check_hlds__mode_errors__write_indented_goal_0_0)
MR_decl_static(__Compare___check_hlds__mode_errors__write_indented_goal_0_0)
MR_decl_static(check_hlds__mode_errors__ClassMethod_for_parse_tree__error_util__print_anything____check_hlds__mode_errors__write_indented_goal__arity0______parse_tree__error_util__print_anything_3_3_0)
MR_decl_static(fn__check_hlds__mode_errors__IntroducedFrom__func__report_mode_inference_message__1362__1_1_0)

static const struct mercury_type_0 mercury_common_0[120] =
{
{
4,
MR_string_const("Error: no mode declaration for", 30)
},
{
3,
MR_string_const(".", 1)
},
{
4,
MR_string_const("(Use \140--infer-modes\' to enable mode inference.)", 47)
},
{
4,
MR_string_const("Error: no mode declaration for exported", 39)
},
{
4,
MR_string_const("In mode declarations for ", 25)
},
{
3,
MR_string_const(":", 1)
},
{
4,
MR_string_const("error: duplicate mode declaration.", 34)
},
{
4,
MR_string_const("Modes", 5)
},
{
4,
MR_string_const("and", 3)
},
{
4,
MR_string_const("are indistinguishable.", 22)
},
{
4,
MR_string_const("Here is the conflicting mode declaration.", 41)
},
{
4,
MR_string_const("In clause for", 13)
},
{
4,
MR_string_const("in", 2)
},
{
4,
MR_string_const("mode mismatch in ", 17)
},
{
4,
MR_string_const("disjunction", 11)
},
{
4,
MR_string_const("if-then-else", 12)
},
{
4,
MR_string_const("atomic", 6)
},
{
4,
MR_string_const("parallel conjunctions to fail.)", 31)
},
{
4,
MR_string_const("(The current implementation does not permit", 43)
},
{
4,
MR_string_const("in parallel conjunction.", 24)
},
{
4,
MR_string_const("mode error: mutually exclusive bindings", 39)
},
{
4,
MR_string_const("scope error:", 12)
},
{
4,
MR_string_const("Variable", 8)
},
{
4,
MR_string_const("has instantiatedness", 20)
},
{
3,
MR_string_const(",", 1)
},
{
4,
MR_string_const("expected instantiatedness was", 29)
},
{
4,
MR_string_const("belonging to the outer scope.", 29)
},
{
4,
MR_string_const("An atomic goal may not use the state variables", 46)
},
{
4,
MR_string_const("attempt to bind outer state variables inside an atomic goal.", 60)
},
{
4,
MR_string_const("and the \140then\' part.", 20)
},
{
4,
MR_string_const("condition or which occur only in the condition", 46)
},
{
4,
MR_string_const("allowed to bind variables which are local to the", 48)
},
{
4,
MR_string_const("The condition of an if-then-else is only", 40)
},
{
4,
MR_string_const("attempt to bind a non-local variable inside the condition of an if-then-else.", 77)
},
{
4,
MR_string_const("inside the scope of the negation.", 33)
},
{
4,
MR_string_const("implicitly existentially quantified", 35)
},
{
4,
MR_string_const("which are local to the negation, i.e. those which are", 53)
},
{
4,
MR_string_const("A negation is only allowed to bind variables", 44)
},
{
4,
MR_string_const("attempt to bind a non-local variable inside a negation.", 55)
},
{
4,
MR_string_const("may be bound in at most one conjunct.", 37)
},
{
4,
MR_string_const("A nonlocal variable of a parallel conjunction", 45)
},
{
4,
MR_string_const("attempt to bind a non-local variable inside more than one parallel conjunct.", 76)
},
{
4,
MR_string_const("which are local to the trace goal.", 34)
},
{
4,
MR_string_const("A trace goal is only allowed to bind variables", 46)
},
{
4,
MR_string_const("attempt to bind a non-local variable inside a trace goal.", 57)
},
{
4,
MR_string_const("lambda expression.", 18)
},
{
4,
MR_string_const("its arguments and variables local to the ", 41)
},
{
4,
MR_string_const("A lambda goal is only allowed to bind", 37)
},
{
4,
MR_string_const("mode error: variable", 20)
},
{
4,
MR_string_const("expected instantiatedness for non-local variables", 49)
},
{
4,
MR_string_const("of lambda goals is \140ground\'.", 28)
},
{
4,
MR_string_const("mode error: arguments", 21)
},
{
4,
MR_string_const("have the following insts:", 25)
},
{
4,
MR_string_const("which does not match any of the modes for", 41)
},
{
4,
MR_string_const("in polymorphically-typed unification:", 37)
},
{
4,
MR_string_const("expected instantiatedness was \140ground\' or \140any\'.", 48)
},
{
4,
MR_string_const("instantiated modes are not allowed.", 35)
},
{
4,
MR_string_const("polymorphically-typed variables with partially", 46)
},
{
4,
MR_string_const("be ground (or have inst \140any\'). Unifications of", 47)
},
{
4,
MR_string_const("will not be known until runtime, the variables must both", 56)
},
{
4,
MR_string_const("When unifying two variables whose type", 38)
},
{
4,
MR_string_const("unique-mode error: the called procedure", 39)
},
{
4,
MR_string_const("would clobber its argument, but variable", 40)
},
{
4,
MR_string_const("is still live.", 14)
},
{
4,
MR_string_const("sorry, implied modes not implemented.", 37)
},
{
4,
MR_string_const("In unification of", 17)
},
{
4,
MR_string_const("with", 4)
},
{
4,
MR_string_const("mode error: attempt at higher-order unification.", 48)
},
{
4,
MR_string_const("Cannot unify two terms of type", 30)
},
{
4,
MR_string_const("Your code is trying to test whether two ", 40)
},
{
4,
MR_string_const("are equal, by unifying them.", 28)
},
{
4,
MR_string_const("In the general case, testing equivalence of", 43)
},
{
4,
MR_string_const("is an undecidable problem,", 26)
},
{
4,
MR_string_const("and so this is not allowed by the Mercury mode system.", 54)
},
{
4,
MR_string_const("In some cases, you can achieve the same effect by", 49)
},
{
4,
MR_string_const("writing an explicit universal quantification, e.g.", 50)
},
{
4,
MR_string_const("instead of", 10)
},
{
4,
MR_string_const("mode error in unification of", 28)
},
{
4,
MR_string_const("variable", 8)
},
{
4,
MR_string_const("and lambda expression.", 22)
},
{
4,
MR_string_const("lambda expression has instantiatedness", 38)
},
{
4,
MR_string_const("and higher-order term based on multi-moded", 42)
},
{
4,
MR_string_const("and higher-order term.", 22)
},
{
4,
MR_string_const("Could not determine the mode of", 31)
},
{
4,
MR_string_const("by the insts of the higher-order arguments only.", 48)
},
{
4,
MR_string_const("term", 4)
},
{
2,
MR_string_const("\140", 1)
},
{
3,
MR_string_const("(", 1)
},
{
4,
MR_string_const("mode error: argument", 20)
},
{
4,
MR_string_const("Final instantiatedness of", 25)
},
{
4,
MR_string_const("was", 3)
},
{
4,
MR_string_const("expected final instantiatedness was", 35)
},
{
4,
MR_string_const("purity error: if-then-else", 26)
},
{
4,
MR_string_const("should be inside a promise_purity", 33)
},
{
4,
MR_string_const("scope because non-local variable", 32)
},
{
4,
MR_string_const("has inst any and appears in the condition.", 42)
},
{
4,
MR_string_const("purity error: negation", 22)
},
{
4,
MR_string_const("has inst any and appears in the body.", 37)
},
{
4,
MR_string_const("purity error: lambda is \140ground\' but contains the", 49)
},
{
4,
MR_string_const("following non-local variables whose insts contain \140any\':", 56)
},
{
4,
MR_string_const("Function expressions with inst \140any\' can be written", 51)
},
{
4,
MR_string_const("Predicate expressions with inst \140any\' can be written", 52)
},
{
4,
MR_string_const("no mode declaration for called predicate.", 41)
},
{
4,
MR_string_const("mode error in conjunction. The next", 35)
},
{
4,
MR_string_const("error messages indicate", 23)
},
{
4,
MR_string_const("possible causes of this error.", 30)
},
{
4,
MR_string_const("The goal could not be reordered,", 32)
},
{
4,
MR_string_const("because it was impure.", 22)
},
{
4,
MR_string_const("because it was followed by an impure goal.", 42)
},
{
4,
MR_string_const("This is the location of the impure goal.", 40)
},
{
4,
MR_string_const("Floundered goal, waiting on {", 29)
},
{
4,
MR_string_const("}:", 2)
},
{
4,
MR_string_const("which does not match any of the valid modes for", 47)
},
{
4,
MR_string_const("the callee", 10)
},
{
2,
MR_string_const("(", 1)
},
{
3,
MR_string_const(")", 1)
},
{
4,
MR_string_const("because of the following error.", 31)
},
{
4,
MR_string_const("the callee, because of the following error.", 43)
},
{
4,
MR_string_const("warning: unification of", 23)
},
{
4,
MR_string_const("cannot succeed", 14)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_format_component_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_format_component_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_msg_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_msg_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
static const struct mercury_type_1 mercury_common_1[104] =
{
{
{
MR_TAG_COMMON(3,0,0),
MR_tbmkword(0, 0)
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
MR_TAG_COMMON(3,0,1),
MR_TAG_COMMON(1,1,1)
}
},
{
{
MR_TAG_COMMON(3,0,2),
MR_TAG_COMMON(1,1,1)
}
},
{
{
MR_TAG_COMMON(2,3,0),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,3),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,4),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,6),
MR_TAG_COMMON(1,1,1)
}
},
{
{
MR_tbmkword(0, 1),
MR_TAG_COMMON(1,1,7)
}
},
{
{
MR_TAG_COMMON(3,0,5),
MR_TAG_COMMON(1,1,8)
}
},
{
{
MR_TAG_COMMON(3,0,9),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,10),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,3,1),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,4,0),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,5),
MR_TAG_COMMON(1,1,1)
}
},
{
{
MR_TAG_COMMON(3,0,14),
MR_TAG_COMMON(1,1,2)
}
},
{
{
MR_TAG_COMMON(3,0,13),
MR_TAG_COMMON(1,1,15)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__error_util, format_component)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__error_util, format_component)
}
},
{
{
MR_TAG_COMMON(3,0,15),
MR_TAG_COMMON(1,1,2)
}
},
{
{
MR_TAG_COMMON(3,0,13),
MR_TAG_COMMON(1,1,19)
}
},
{
{
MR_TAG_COMMON(3,0,16),
MR_TAG_COMMON(1,1,2)
}
},
{
{
MR_TAG_COMMON(3,0,13),
MR_TAG_COMMON(1,1,21)
}
},
{
{
MR_TAG_COMMON(3,0,17),
MR_TAG_COMMON(1,1,1)
}
},
{
{
MR_TAG_COMMON(3,0,18),
MR_TAG_COMMON(1,1,23)
}
},
{
{
MR_TAG_COMMON(3,0,19),
MR_TAG_COMMON(1,1,24)
}
},
{
{
MR_TAG_COMMON(3,0,20),
MR_TAG_COMMON(1,1,25)
}
},
{
{
MR_TAG_COMMON(3,0,26),
MR_TAG_COMMON(1,1,1)
}
},
{
{
MR_TAG_COMMON(3,0,27),
MR_TAG_COMMON(1,1,27)
}
},
{
{
MR_TAG_COMMON(3,0,29),
MR_TAG_COMMON(1,1,1)
}
},
{
{
MR_TAG_COMMON(3,0,30),
MR_TAG_COMMON(1,1,29)
}
},
{
{
MR_TAG_COMMON(3,0,31),
MR_TAG_COMMON(1,1,30)
}
},
{
{
MR_TAG_COMMON(3,0,32),
MR_TAG_COMMON(1,1,31)
}
},
{
{
MR_TAG_COMMON(3,0,34),
MR_TAG_COMMON(1,1,1)
}
},
{
{
MR_TAG_COMMON(3,0,35),
MR_TAG_COMMON(1,1,33)
}
},
{
{
MR_TAG_COMMON(3,0,36),
MR_TAG_COMMON(1,1,34)
}
},
{
{
MR_TAG_COMMON(3,0,37),
MR_TAG_COMMON(1,1,35)
}
},
{
{
MR_TAG_COMMON(3,0,39),
MR_TAG_COMMON(1,1,1)
}
},
{
{
MR_TAG_COMMON(3,0,40),
MR_TAG_COMMON(1,1,37)
}
},
{
{
MR_TAG_COMMON(3,0,42),
MR_TAG_COMMON(1,1,1)
}
},
{
{
MR_TAG_COMMON(3,0,43),
MR_TAG_COMMON(1,1,39)
}
},
{
{
MR_TAG_COMMON(3,0,45),
MR_TAG_COMMON(1,1,1)
}
},
{
{
MR_TAG_COMMON(3,0,46),
MR_TAG_COMMON(1,1,41)
}
},
{
{
MR_TAG_COMMON(3,0,47),
MR_TAG_COMMON(1,1,42)
}
},
{
{
MR_TAG_COMMON(3,0,50),
MR_TAG_COMMON(1,1,1)
}
},
{
{
MR_TAG_COMMON(3,0,49),
MR_TAG_COMMON(1,1,44)
}
},
{
{
MR_tbmkword(0, 1),
MR_TAG_COMMON(1,1,45)
}
},
{
{
MR_TAG_COMMON(3,0,24),
MR_TAG_COMMON(1,1,46)
}
},
{
{
MR_TAG_COMMON(3,0,24),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,11,1),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,52),
MR_TAG_COMMON(1,1,49)
}
},
{
{
MR_TAG_COMMON(3,0,55),
MR_TAG_COMMON(1,1,1)
}
},
{
{
MR_tbmkword(0, 1),
MR_TAG_COMMON(1,1,51)
}
},
{
{
MR_TAG_COMMON(3,0,24),
MR_TAG_COMMON(1,1,52)
}
},
{
{
MR_TAG_COMMON(3,0,56),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,57),
MR_TAG_COMMON(1,1,54)
}
},
{
{
MR_TAG_COMMON(3,0,58),
MR_TAG_COMMON(1,1,55)
}
},
{
{
MR_TAG_COMMON(3,0,59),
MR_TAG_COMMON(1,1,56)
}
},
{
{
MR_TAG_COMMON(3,0,60),
MR_TAG_COMMON(1,1,57)
}
},
{
{
MR_TAG_COMMON(2,3,2),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,63),
MR_TAG_COMMON(1,1,1)
}
},
{
{
MR_TAG_COMMON(1,4,2),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,76),
MR_TAG_COMMON(1,1,61)
}
},
{
{
MR_TAG_COMMON(1,4,1),
MR_TAG_COMMON(1,1,62)
}
},
{
{
MR_TAG_COMMON(3,0,75),
MR_TAG_COMMON(1,1,63)
}
},
{
{
MR_TAG_COMMON(3,0,74),
MR_TAG_COMMON(1,1,64)
}
},
{
{
MR_TAG_COMMON(3,0,73),
MR_TAG_COMMON(1,1,65)
}
},
{
{
MR_TAG_COMMON(3,0,72),
MR_TAG_COMMON(1,1,66)
}
},
{
{
MR_TAG_COMMON(3,0,84),
MR_TAG_COMMON(1,1,1)
}
},
{
{
MR_TAG_COMMON(3,0,87),
MR_TAG_COMMON(1,1,49)
}
},
{
{
MR_TAG_COMMON(1,4,3),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,95),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,97),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,1),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(2,4,4),
MR_TAG_COMMON(1,1,73)
}
},
{
{
MR_TAG_COMMON(3,0,100),
MR_TAG_COMMON(1,1,74)
}
},
{
{
MR_TAG_COMMON(3,0,1),
MR_TAG_COMMON(1,1,75)
}
},
{
{
MR_TAG_COMMON(2,4,5),
MR_TAG_COMMON(1,1,76)
}
},
{
{
MR_TAG_COMMON(3,0,101),
MR_TAG_COMMON(1,1,77)
}
},
{
{
MR_TAG_COMMON(2,3,3),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,102),
MR_TAG_COMMON(1,1,1)
}
},
{
{
MR_TAG_COMMON(2,3,4),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,105),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,104),
MR_TAG_COMMON(1,1,82)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__error_util, error_msg)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__error_util, error_msg)
}
},
{
{
MR_TAG_COMMON(3,0,107),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,106),
MR_TAG_COMMON(1,1,86)
}
},
{
{
MR_TAG_COMMON(0,3,5),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,108),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,106),
MR_TAG_COMMON(1,1,89)
}
},
{
{
MR_TAG_COMMON(3,0,109),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,3,6),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,3,7),
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
MR_TAG_COMMON(3,0,111),
MR_TAG_COMMON(1,1,1)
}
},
{
{
(MR_Word *) &mercury_data_base_typeclass_info_parse_tree__error_util__print_anything__arity1__check_hlds__mode_errors__write_indented_goal__arity0__,
MR_CTOR0_ADDR(check_hlds__mode_errors, write_indented_goal)
}
},
{
{
MR_TAG_COMMON(3,0,112),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,114),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,113),
MR_TAG_COMMON(1,1,98)
}
},
{
{
MR_TAG_COMMON(3,0,116),
MR_TAG_COMMON(1,1,1)
}
},
{
{
MR_tbmkword(0, 1),
MR_TAG_COMMON(1,1,100)
}
},
{
{
MR_TAG_COMMON(3,0,115),
MR_TAG_COMMON(1,1,101)
}
},
{
{
MR_TAG_COMMON(3,0,117),
MR_TAG_COMMON(1,1,1)
}
},
};

static const struct mercury_type_2 mercury_common_2[2] =
{
{
0
},
{
1
},
};

static const struct mercury_type_3 mercury_common_3[9] =
{
{
MR_TAG_COMMON(1,1,3)
},
{
MR_TAG_COMMON(1,1,11)
},
{
MR_TAG_COMMON(1,1,58)
},
{
MR_TAG_COMMON(1,1,78)
},
{
MR_tbmkword(0, 0)
},
{
MR_TAG_COMMON(1,1,87)
},
{
MR_TAG_COMMON(1,1,90)
},
{
MR_TAG_COMMON(1,1,91)
},
{
MR_TAG_COMMON(1,1,1)
},
};

static const struct mercury_type_4 mercury_common_4[7] =
{
{
MR_string_const("...", 3)
},
{
MR_string_const("\140all [X] call(P, X) <=> call(Q, X)\',", 36)
},
{
MR_string_const("\140P = Q\'.", 8)
},
{
MR_string_const(")\'.", 3)
},
{
MR_string_const("any_func(Args) = Result is det :- ...", 37)
},
{
MR_string_const("any_pred(Args) is det :- ...", 28)
},
{
MR_string_const("::", 2)
},
};

static const struct mercury_type_5 mercury_common_5[1] =
{
{
4,
MR_TAG_COMMON(0,1,13)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0;
static const struct mercury_type_6 mercury_common_6[2] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__mode_errors__report_mode_inference_message_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;
static const struct mercury_type_7 mercury_common_7[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__fn__check_hlds__mode_errors__report_mode_inference_message_4_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(6,1),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode)
},
};

static const struct mercury_type_8 mercury_common_8[2] =
{
{
MR_COMMON(7,0),
MR_ENTRY_AP(fn__check_hlds__mode_errors__IntroducedFrom__func__report_mode_inference_message__1362__1_1_0),
0
},
{
MR_COMMON(12,0),
MR_ENTRY_AP(check_hlds__mode_errors__is_error_important_1_0),
0
},
};

static const struct mercury_type_9 mercury_common_9[2] =
{
{
{
43,
1
},
{
MR_tbmkword(0, 2),
MR_tbmkword(0, 0)
}
},
{
{
95,
0
},
{
MR_tbmkword(0, 0),
MR_tbmkword(0, 0)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__mode_errors__mode_error_disj_to_spec_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_info__type_ctor_info_mode_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_errors__type_ctor_info_merge_error_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__mode_errors__mode_error_disj_to_spec_3_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__mode_errors__mode_error_disj_to_spec_3_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__mode_errors__mode_error_par_conj_to_spec_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__mode_errors__merge_error_to_pieces_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const struct mercury_type_10 mercury_common_10[5] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__fn__check_hlds__mode_errors__mode_error_disj_to_spec_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(check_hlds__mode_info, mode_info),
MR_CTOR0_ADDR(check_hlds__mode_errors, merge_error),
MR_COMMON(1,18)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__check_hlds__mode_errors__mode_error_disj_to_spec_3_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(check_hlds__mode_info, mode_info),
MR_CTOR0_ADDR(check_hlds__mode_errors, merge_error),
MR_COMMON(1,18)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__check_hlds__mode_errors__mode_error_disj_to_spec_3_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(check_hlds__mode_info, mode_info),
MR_CTOR0_ADDR(check_hlds__mode_errors, merge_error),
MR_COMMON(1,18)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__check_hlds__mode_errors__mode_error_par_conj_to_spec_2_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(check_hlds__mode_info, mode_info),
MR_CTOR0_ADDR(check_hlds__mode_errors, merge_error),
MR_COMMON(1,18)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__check_hlds__mode_errors__merge_error_to_pieces_2_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(check_hlds__mode_info, mode_info),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst),
MR_STRING_CTOR_ADDR
}
},
};

static const struct mercury_type_11 mercury_common_11[2] =
{
{
{
11,
-1
}
},
{
{
11,
1
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__mode_errors__mode_error_conj_to_spec_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_errors__type_ctor_info_delayed_goal_0;
static const struct mercury_type_12 mercury_common_12[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__fn__check_hlds__mode_errors__mode_error_conj_to_spec_3_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(check_hlds__mode_errors, delayed_goal)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__mode_errors__mode_error_conj_to_spec_3_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
static const struct mercury_type_13 mercury_common_13[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__fn__check_hlds__mode_errors__mode_error_conj_to_spec_3_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(term, context),
MR_CTOR0_ADDR(check_hlds__mode_info, mode_info),
MR_CTOR0_ADDR(check_hlds__mode_errors, delayed_goal),
MR_COMMON(1,85)
}
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_set_ordlist__type_ctor_info_set_ordlist_1,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_errors__type_ctor_info_mode_error_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

const MR_PseudoTypeInfo mercury_data_check_hlds__mode_errors__field_types_delayed_goal_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_check_hlds__mode_errors__type_ctor_info_mode_error_info_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__mode_errors__du_functor_desc_delayed_goal_0_0 = {
	"delayed_goal",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__mode_errors__field_types_delayed_goal_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__mode_errors__du_stag_ordered_delayed_goal_0_0[] = {
	&mercury_data_check_hlds__mode_errors__du_functor_desc_delayed_goal_0_0

};

const MR_DuPtagLayout mercury_data_check_hlds__mode_errors__du_ptag_ordered_delayed_goal_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__mode_errors__du_stag_ordered_delayed_goal_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__mode_errors__du_name_ordered_delayed_goal_0[] = {
	&mercury_data_check_hlds__mode_errors__du_functor_desc_delayed_goal_0_0
};

const MR_Integer mercury_data_check_hlds__mode_errors__functor_number_map_delayed_goal_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_errors__type_ctor_info_delayed_goal_0 = {
	0,
	14,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__mode_errors__delayed_goal_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__mode_errors__delayed_goal_0_0)),
	"check_hlds.mode_errors",
	"delayed_goal",
	{ (void *)mercury_data_check_hlds__mode_errors__du_name_ordered_delayed_goal_0 },
	{ (void *)mercury_data_check_hlds__mode_errors__du_ptag_ordered_delayed_goal_0 },
	1,
	4,
	mercury_data_check_hlds__mode_errors__functor_number_map_delayed_goal_0
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__mode_errors__enum_functor_desc_final_inst_error_0_0 = {
	"too_instantiated",
	0
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__mode_errors__enum_functor_desc_final_inst_error_0_1 = {
	"not_instantiated_enough",
	1
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__mode_errors__enum_functor_desc_final_inst_error_0_2 = {
	"wrongly_instantiated",
	2
};

const MR_EnumFunctorDescPtr mercury_data_check_hlds__mode_errors__enum_value_ordered_final_inst_error_0[] = {
	&mercury_data_check_hlds__mode_errors__enum_functor_desc_final_inst_error_0_0,
	&mercury_data_check_hlds__mode_errors__enum_functor_desc_final_inst_error_0_1,
	&mercury_data_check_hlds__mode_errors__enum_functor_desc_final_inst_error_0_2
};

const MR_EnumFunctorDescPtr mercury_data_check_hlds__mode_errors__enum_name_ordered_final_inst_error_0[] = {
	&mercury_data_check_hlds__mode_errors__enum_functor_desc_final_inst_error_0_1,
	&mercury_data_check_hlds__mode_errors__enum_functor_desc_final_inst_error_0_0,
	&mercury_data_check_hlds__mode_errors__enum_functor_desc_final_inst_error_0_2
};

const MR_Integer mercury_data_check_hlds__mode_errors__functor_number_map_final_inst_error_0[] = {
	1,
	0,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_errors__type_ctor_info_final_inst_error_0 = {
	0,
	14,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__mode_errors__final_inst_error_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__mode_errors__final_inst_error_0_0)),
	"check_hlds.mode_errors",
	"final_inst_error",
	{ (void *)mercury_data_check_hlds__mode_errors__enum_name_ordered_final_inst_error_0 },
	{ (void *)mercury_data_check_hlds__mode_errors__enum_value_ordered_final_inst_error_0 },
	3,
	4,
	mercury_data_check_hlds__mode_errors__functor_number_map_final_inst_error_0
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__mode_errors__enum_functor_desc_include_detism_on_modes_0_0 = {
	"include_detism_on_modes",
	0
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__mode_errors__enum_functor_desc_include_detism_on_modes_0_1 = {
	"do_not_include_detism_on_modes",
	1
};

const MR_EnumFunctorDescPtr mercury_data_check_hlds__mode_errors__enum_value_ordered_include_detism_on_modes_0[] = {
	&mercury_data_check_hlds__mode_errors__enum_functor_desc_include_detism_on_modes_0_0,
	&mercury_data_check_hlds__mode_errors__enum_functor_desc_include_detism_on_modes_0_1
};

const MR_EnumFunctorDescPtr mercury_data_check_hlds__mode_errors__enum_name_ordered_include_detism_on_modes_0[] = {
	&mercury_data_check_hlds__mode_errors__enum_functor_desc_include_detism_on_modes_0_1,
	&mercury_data_check_hlds__mode_errors__enum_functor_desc_include_detism_on_modes_0_0
};

const MR_Integer mercury_data_check_hlds__mode_errors__functor_number_map_include_detism_on_modes_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_errors__type_ctor_info_include_detism_on_modes_0 = {
	0,
	14,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__mode_errors__include_detism_on_modes_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__mode_errors__include_detism_on_modes_0_0)),
	"check_hlds.mode_errors",
	"include_detism_on_modes",
	{ (void *)mercury_data_check_hlds__mode_errors__enum_name_ordered_include_detism_on_modes_0 },
	{ (void *)mercury_data_check_hlds__mode_errors__enum_value_ordered_include_detism_on_modes_0 },
	2,
	4,
	mercury_data_check_hlds__mode_errors__functor_number_map_include_detism_on_modes_0
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__mode_errors__enum_functor_desc_merge_context_0_0 = {
	"merge_disj",
	0
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__mode_errors__enum_functor_desc_merge_context_0_1 = {
	"merge_if_then_else",
	1
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__mode_errors__enum_functor_desc_merge_context_0_2 = {
	"merge_stm_atomic",
	2
};

const MR_EnumFunctorDescPtr mercury_data_check_hlds__mode_errors__enum_value_ordered_merge_context_0[] = {
	&mercury_data_check_hlds__mode_errors__enum_functor_desc_merge_context_0_0,
	&mercury_data_check_hlds__mode_errors__enum_functor_desc_merge_context_0_1,
	&mercury_data_check_hlds__mode_errors__enum_functor_desc_merge_context_0_2
};

const MR_EnumFunctorDescPtr mercury_data_check_hlds__mode_errors__enum_name_ordered_merge_context_0[] = {
	&mercury_data_check_hlds__mode_errors__enum_functor_desc_merge_context_0_0,
	&mercury_data_check_hlds__mode_errors__enum_functor_desc_merge_context_0_1,
	&mercury_data_check_hlds__mode_errors__enum_functor_desc_merge_context_0_2
};

const MR_Integer mercury_data_check_hlds__mode_errors__functor_number_map_merge_context_0[] = {
	0,
	1,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_errors__type_ctor_info_merge_context_0 = {
	0,
	14,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__mode_errors__merge_context_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__mode_errors__merge_context_0_0)),
	"check_hlds.mode_errors",
	"merge_context",
	{ (void *)mercury_data_check_hlds__mode_errors__enum_name_ordered_merge_context_0 },
	{ (void *)mercury_data_check_hlds__mode_errors__enum_value_ordered_merge_context_0 },
	3,
	4,
	mercury_data_check_hlds__mode_errors__functor_number_map_merge_context_0
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0
}};

const MR_PseudoTypeInfo mercury_data_check_hlds__mode_errors__field_types_merge_error_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_inst_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__mode_errors__du_functor_desc_merge_error_0_0 = {
	"merge_error",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__mode_errors__field_types_merge_error_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__mode_errors__du_stag_ordered_merge_error_0_0[] = {
	&mercury_data_check_hlds__mode_errors__du_functor_desc_merge_error_0_0

};

const MR_DuPtagLayout mercury_data_check_hlds__mode_errors__du_ptag_ordered_merge_error_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__mode_errors__du_stag_ordered_merge_error_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__mode_errors__du_name_ordered_merge_error_0[] = {
	&mercury_data_check_hlds__mode_errors__du_functor_desc_merge_error_0_0
};

const MR_Integer mercury_data_check_hlds__mode_errors__functor_number_map_merge_error_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_errors__type_ctor_info_merge_error_0 = {
	0,
	14,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__mode_errors__merge_error_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__mode_errors__merge_error_0_0)),
	"check_hlds.mode_errors",
	"merge_error",
	{ (void *)mercury_data_check_hlds__mode_errors__du_name_ordered_merge_error_0 },
	{ (void *)mercury_data_check_hlds__mode_errors__du_ptag_ordered_merge_error_0 },
	1,
	4,
	mercury_data_check_hlds__mode_errors__functor_number_map_merge_error_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_errors__type_ctor_info_merge_error_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1check_hlds__mode_errors__type_ctor_info_merge_error_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_check_hlds__mode_errors__type_ctor_info_merge_error_0
}};

const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_errors__type_ctor_info_merge_errors_0 = {
	0,
	14,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__mode_errors__merge_errors_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__mode_errors__merge_errors_0_0)),
	"check_hlds.mode_errors",
	"merge_errors",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1check_hlds__mode_errors__type_ctor_info_merge_error_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_errors__type_ctor_info_merge_context_0;

const MR_PseudoTypeInfo mercury_data_check_hlds__mode_errors__field_types_mode_error_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_check_hlds__mode_errors__type_ctor_info_merge_context_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1check_hlds__mode_errors__type_ctor_info_merge_error_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__mode_errors__du_functor_desc_mode_error_0_0 = {
	"mode_error_disj",
	2,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__mode_errors__field_types_mode_error_0_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_check_hlds__mode_errors__field_types_mode_error_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1check_hlds__mode_errors__type_ctor_info_merge_error_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__mode_errors__du_functor_desc_mode_error_0_1 = {
	"mode_error_par_conj",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__mode_errors__field_types_mode_error_0_1,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_pred_or_func_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_pred_or_func_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_PseudoTypeInfo mercury_data_check_hlds__mode_errors__field_types_mode_error_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__mode_errors__du_functor_desc_mode_error_0_2 = {
	"mode_error_higher_order_pred_var",
	4,
	0,
	MR_SECTAG_REMOTE,
	3,
	0,
	2,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__mode_errors__field_types_mode_error_0_2,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_check_hlds__mode_errors__field_types_mode_error_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__mode_errors__du_functor_desc_mode_error_0_3 = {
	"mode_error_poly_unify",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	1,
	3,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__mode_errors__field_types_mode_error_0_3,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_check_hlds__mode_errors__field_types_mode_error_0_4[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__mode_errors__du_functor_desc_mode_error_0_4 = {
	"mode_error_var_is_live",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	2,
	4,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__mode_errors__field_types_mode_error_0_4,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_check_hlds__mode_errors__field_types_mode_error_0_5[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__mode_errors__du_functor_desc_mode_error_0_5 = {
	"mode_error_var_has_inst",
	3,
	0,
	MR_SECTAG_REMOTE,
	3,
	3,
	5,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__mode_errors__field_types_mode_error_0_5,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_errors__type_ctor_info_mode_error_unify_rhs_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;

const MR_PseudoTypeInfo mercury_data_check_hlds__mode_errors__field_types_mode_error_0_6[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_check_hlds__mode_errors__type_ctor_info_mode_error_unify_rhs_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_pred_or_func_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__mode_errors__du_functor_desc_mode_error_0_6 = {
	"mode_error_unify_pred",
	4,
	0,
	MR_SECTAG_REMOTE,
	3,
	4,
	6,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__mode_errors__field_types_mode_error_0_6,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_check_hlds__mode_errors__field_types_mode_error_0_7[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__mode_errors__du_functor_desc_mode_error_0_7 = {
	"mode_error_implied_mode",
	3,
	0,
	MR_SECTAG_REMOTE,
	3,
	5,
	7,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__mode_errors__field_types_mode_error_0_7,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_check_hlds__mode_errors__du_functor_desc_mode_error_0_8 = {
	"mode_error_no_mode_decl",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	8,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

const MR_PseudoTypeInfo mercury_data_check_hlds__mode_errors__field_types_mode_error_0_9[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_inst_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__mode_errors__du_functor_desc_mode_error_0_9 = {
	"mode_error_no_matching_mode",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	6,
	9,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__mode_errors__field_types_mode_error_0_9,
	NULL,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1check_hlds__mode_errors__type_ctor_info_mode_error_info_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_check_hlds__mode_errors__type_ctor_info_mode_error_info_0
}};

const MR_PseudoTypeInfo mercury_data_check_hlds__mode_errors__field_types_mode_error_0_10[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_inst_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1check_hlds__mode_errors__type_ctor_info_mode_error_info_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__mode_errors__du_functor_desc_mode_error_0_10 = {
	"mode_error_in_callee",
	5,
	0,
	MR_SECTAG_REMOTE,
	3,
	7,
	10,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__mode_errors__field_types_mode_error_0_10,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_info__type_ctor_info_var_lock_reason_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_info__type_ctor_info_var_lock_reason_0;

const MR_PseudoTypeInfo mercury_data_check_hlds__mode_errors__field_types_mode_error_0_11[] = {
	(MR_PseudoTypeInfo) &mercury_data_check_hlds__mode_info__type_ctor_info_var_lock_reason_0,
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__mode_errors__du_functor_desc_mode_error_0_11 = {
	"mode_error_bind_var",
	4,
	0,
	MR_SECTAG_REMOTE,
	3,
	8,
	11,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__mode_errors__field_types_mode_error_0_11,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_check_hlds__mode_errors__field_types_mode_error_0_12[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__mode_errors__du_functor_desc_mode_error_0_12 = {
	"mode_error_non_local_lambda_var",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	9,
	12,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__mode_errors__field_types_mode_error_0_12,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_check_hlds__mode_errors__field_types_mode_error_0_13[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__mode_errors__du_functor_desc_mode_error_0_13 = {
	"mode_error_unify_var_var",
	4,
	0,
	MR_SECTAG_REMOTE,
	3,
	10,
	13,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__mode_errors__field_types_mode_error_0_13,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0;

const MR_PseudoTypeInfo mercury_data_check_hlds__mode_errors__field_types_mode_error_0_14[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_inst_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__mode_errors__du_functor_desc_mode_error_0_14 = {
	"mode_error_unify_var_functor",
	5,
	0,
	MR_SECTAG_REMOTE,
	3,
	11,
	14,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__mode_errors__field_types_mode_error_0_14,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_check_hlds__mode_errors__field_types_mode_error_0_15[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__mode_errors__du_functor_desc_mode_error_0_15 = {
	"mode_error_unify_var_lambda",
	3,
	0,
	MR_SECTAG_REMOTE,
	3,
	12,
	15,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__mode_errors__field_types_mode_error_0_15,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_check_hlds__mode_errors__field_types_mode_error_0_16[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__mode_errors__du_functor_desc_mode_error_0_16 = {
	"mode_error_unify_var_multimode_pred",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	13,
	16,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__mode_errors__field_types_mode_error_0_16,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_check_hlds__mode_errors__field_types_mode_error_0_17[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__mode_errors__du_functor_desc_mode_error_0_17 = {
	"mode_error_unify_var_multimode_pred_undetermined",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	14,
	17,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__mode_errors__field_types_mode_error_0_17,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_errors__type_ctor_info_delayed_goal_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1check_hlds__mode_errors__type_ctor_info_delayed_goal_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_check_hlds__mode_errors__type_ctor_info_delayed_goal_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_errors__type_ctor_info_schedule_culprit_0;

const MR_PseudoTypeInfo mercury_data_check_hlds__mode_errors__field_types_mode_error_0_18[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1check_hlds__mode_errors__type_ctor_info_delayed_goal_0,
	(MR_PseudoTypeInfo) &mercury_data_check_hlds__mode_errors__type_ctor_info_schedule_culprit_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__mode_errors__du_functor_desc_mode_error_0_18 = {
	"mode_error_conj",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	15,
	18,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__mode_errors__field_types_mode_error_0_18,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_errors__type_ctor_info_final_inst_error_0;

const MR_PseudoTypeInfo mercury_data_check_hlds__mode_errors__field_types_mode_error_0_19[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0,
	(MR_PseudoTypeInfo) &mercury_data_check_hlds__mode_errors__type_ctor_info_final_inst_error_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__mode_errors__du_functor_desc_mode_error_0_19 = {
	"mode_error_final_inst",
	5,
	0,
	MR_SECTAG_REMOTE,
	3,
	16,
	19,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__mode_errors__field_types_mode_error_0_19,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_errors__type_ctor_info_negated_context_desc_0;

const MR_PseudoTypeInfo mercury_data_check_hlds__mode_errors__field_types_mode_error_0_20[] = {
	(MR_PseudoTypeInfo) &mercury_data_check_hlds__mode_errors__type_ctor_info_negated_context_desc_0,
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__mode_errors__du_functor_desc_mode_error_0_20 = {
	"purity_error_should_be_in_promise_purity_scope",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	17,
	20,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__mode_errors__field_types_mode_error_0_20,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_check_hlds__mode_errors__field_types_mode_error_0_21[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__mode_errors__du_functor_desc_mode_error_0_21 = {
	"purity_error_lambda_should_be_any",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	18,
	21,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__mode_errors__field_types_mode_error_0_21,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__mode_errors__du_stag_ordered_mode_error_0_0[] = {
	&mercury_data_check_hlds__mode_errors__du_functor_desc_mode_error_0_8

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__mode_errors__du_stag_ordered_mode_error_0_1[] = {
	&mercury_data_check_hlds__mode_errors__du_functor_desc_mode_error_0_0

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__mode_errors__du_stag_ordered_mode_error_0_2[] = {
	&mercury_data_check_hlds__mode_errors__du_functor_desc_mode_error_0_1

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__mode_errors__du_stag_ordered_mode_error_0_3[] = {
	&mercury_data_check_hlds__mode_errors__du_functor_desc_mode_error_0_2,
	&mercury_data_check_hlds__mode_errors__du_functor_desc_mode_error_0_3,
	&mercury_data_check_hlds__mode_errors__du_functor_desc_mode_error_0_4,
	&mercury_data_check_hlds__mode_errors__du_functor_desc_mode_error_0_5,
	&mercury_data_check_hlds__mode_errors__du_functor_desc_mode_error_0_6,
	&mercury_data_check_hlds__mode_errors__du_functor_desc_mode_error_0_7,
	&mercury_data_check_hlds__mode_errors__du_functor_desc_mode_error_0_9,
	&mercury_data_check_hlds__mode_errors__du_functor_desc_mode_error_0_10,
	&mercury_data_check_hlds__mode_errors__du_functor_desc_mode_error_0_11,
	&mercury_data_check_hlds__mode_errors__du_functor_desc_mode_error_0_12,
	&mercury_data_check_hlds__mode_errors__du_functor_desc_mode_error_0_13,
	&mercury_data_check_hlds__mode_errors__du_functor_desc_mode_error_0_14,
	&mercury_data_check_hlds__mode_errors__du_functor_desc_mode_error_0_15,
	&mercury_data_check_hlds__mode_errors__du_functor_desc_mode_error_0_16,
	&mercury_data_check_hlds__mode_errors__du_functor_desc_mode_error_0_17,
	&mercury_data_check_hlds__mode_errors__du_functor_desc_mode_error_0_18,
	&mercury_data_check_hlds__mode_errors__du_functor_desc_mode_error_0_19,
	&mercury_data_check_hlds__mode_errors__du_functor_desc_mode_error_0_20,
	&mercury_data_check_hlds__mode_errors__du_functor_desc_mode_error_0_21

};

const MR_DuPtagLayout mercury_data_check_hlds__mode_errors__du_ptag_ordered_mode_error_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_check_hlds__mode_errors__du_stag_ordered_mode_error_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__mode_errors__du_stag_ordered_mode_error_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__mode_errors__du_stag_ordered_mode_error_0_2 },
	{ 19, MR_SECTAG_REMOTE,
	mercury_data_check_hlds__mode_errors__du_stag_ordered_mode_error_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__mode_errors__du_name_ordered_mode_error_0[] = {
	&mercury_data_check_hlds__mode_errors__du_functor_desc_mode_error_0_11,
	&mercury_data_check_hlds__mode_errors__du_functor_desc_mode_error_0_18,
	&mercury_data_check_hlds__mode_errors__du_functor_desc_mode_error_0_0,
	&mercury_data_check_hlds__mode_errors__du_functor_desc_mode_error_0_19,
	&mercury_data_check_hlds__mode_errors__du_functor_desc_mode_error_0_2,
	&mercury_data_check_hlds__mode_errors__du_functor_desc_mode_error_0_7,
	&mercury_data_check_hlds__mode_errors__du_functor_desc_mode_error_0_10,
	&mercury_data_check_hlds__mode_errors__du_functor_desc_mode_error_0_9,
	&mercury_data_check_hlds__mode_errors__du_functor_desc_mode_error_0_8,
	&mercury_data_check_hlds__mode_errors__du_functor_desc_mode_error_0_12,
	&mercury_data_check_hlds__mode_errors__du_functor_desc_mode_error_0_1,
	&mercury_data_check_hlds__mode_errors__du_functor_desc_mode_error_0_3,
	&mercury_data_check_hlds__mode_errors__du_functor_desc_mode_error_0_6,
	&mercury_data_check_hlds__mode_errors__du_functor_desc_mode_error_0_14,
	&mercury_data_check_hlds__mode_errors__du_functor_desc_mode_error_0_15,
	&mercury_data_check_hlds__mode_errors__du_functor_desc_mode_error_0_16,
	&mercury_data_check_hlds__mode_errors__du_functor_desc_mode_error_0_17,
	&mercury_data_check_hlds__mode_errors__du_functor_desc_mode_error_0_13,
	&mercury_data_check_hlds__mode_errors__du_functor_desc_mode_error_0_5,
	&mercury_data_check_hlds__mode_errors__du_functor_desc_mode_error_0_4,
	&mercury_data_check_hlds__mode_errors__du_functor_desc_mode_error_0_21,
	&mercury_data_check_hlds__mode_errors__du_functor_desc_mode_error_0_20
};

const MR_Integer mercury_data_check_hlds__mode_errors__functor_number_map_mode_error_0[] = {
	2,
	10,
	4,
	11,
	19,
	18,
	12,
	5,
	8,
	7,
	6,
	0,
	9,
	17,
	13,
	14,
	15,
	16,
	1,
	3,
	21,
	20 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_errors__type_ctor_info_mode_error_0 = {
	0,
	14,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__mode_errors__mode_error_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__mode_errors__mode_error_0_0)),
	"check_hlds.mode_errors",
	"mode_error",
	{ (void *)mercury_data_check_hlds__mode_errors__du_name_ordered_mode_error_0 },
	{ (void *)mercury_data_check_hlds__mode_errors__du_ptag_ordered_mode_error_0 },
	22,
	4,
	mercury_data_check_hlds__mode_errors__functor_number_map_mode_error_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_info__type_ctor_info_mode_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_errors__type_ctor_info_mode_error_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_info__type_ctor_info_mode_context_0;

const MR_PseudoTypeInfo mercury_data_check_hlds__mode_errors__field_types_mode_error_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_check_hlds__mode_errors__type_ctor_info_mode_error_0,
	(MR_PseudoTypeInfo) &mercury_data_term__type_ctor_info_context_0,
	(MR_PseudoTypeInfo) &mercury_data_check_hlds__mode_info__type_ctor_info_mode_context_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__mode_errors__du_functor_desc_mode_error_info_0_0 = {
	"mode_error_info",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__mode_errors__field_types_mode_error_info_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__mode_errors__du_stag_ordered_mode_error_info_0_0[] = {
	&mercury_data_check_hlds__mode_errors__du_functor_desc_mode_error_info_0_0

};

const MR_DuPtagLayout mercury_data_check_hlds__mode_errors__du_ptag_ordered_mode_error_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__mode_errors__du_stag_ordered_mode_error_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__mode_errors__du_name_ordered_mode_error_info_0[] = {
	&mercury_data_check_hlds__mode_errors__du_functor_desc_mode_error_info_0_0
};

const MR_Integer mercury_data_check_hlds__mode_errors__functor_number_map_mode_error_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_errors__type_ctor_info_mode_error_info_0 = {
	0,
	14,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__mode_errors__mode_error_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__mode_errors__mode_error_info_0_0)),
	"check_hlds.mode_errors",
	"mode_error_info",
	{ (void *)mercury_data_check_hlds__mode_errors__du_name_ordered_mode_error_info_0 },
	{ (void *)mercury_data_check_hlds__mode_errors__du_ptag_ordered_mode_error_info_0 },
	1,
	4,
	mercury_data_check_hlds__mode_errors__functor_number_map_mode_error_info_0
};

const MR_PseudoTypeInfo mercury_data_check_hlds__mode_errors__field_types_mode_error_unify_rhs_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__mode_errors__du_functor_desc_mode_error_unify_rhs_0_0 = {
	"error_at_var",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__mode_errors__field_types_mode_error_unify_rhs_0_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_check_hlds__mode_errors__field_types_mode_error_unify_rhs_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__mode_errors__du_functor_desc_mode_error_unify_rhs_0_1 = {
	"error_at_functor",
	2,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__mode_errors__field_types_mode_error_unify_rhs_0_1,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0
}};

const MR_PseudoTypeInfo mercury_data_check_hlds__mode_errors__field_types_mode_error_unify_rhs_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__mode_errors__du_functor_desc_mode_error_unify_rhs_0_2 = {
	"error_at_lambda",
	2,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__mode_errors__field_types_mode_error_unify_rhs_0_2,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__mode_errors__du_stag_ordered_mode_error_unify_rhs_0_0[] = {
	&mercury_data_check_hlds__mode_errors__du_functor_desc_mode_error_unify_rhs_0_0

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__mode_errors__du_stag_ordered_mode_error_unify_rhs_0_1[] = {
	&mercury_data_check_hlds__mode_errors__du_functor_desc_mode_error_unify_rhs_0_1

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__mode_errors__du_stag_ordered_mode_error_unify_rhs_0_2[] = {
	&mercury_data_check_hlds__mode_errors__du_functor_desc_mode_error_unify_rhs_0_2

};

const MR_DuPtagLayout mercury_data_check_hlds__mode_errors__du_ptag_ordered_mode_error_unify_rhs_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__mode_errors__du_stag_ordered_mode_error_unify_rhs_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__mode_errors__du_stag_ordered_mode_error_unify_rhs_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__mode_errors__du_stag_ordered_mode_error_unify_rhs_0_2 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__mode_errors__du_name_ordered_mode_error_unify_rhs_0[] = {
	&mercury_data_check_hlds__mode_errors__du_functor_desc_mode_error_unify_rhs_0_1,
	&mercury_data_check_hlds__mode_errors__du_functor_desc_mode_error_unify_rhs_0_2,
	&mercury_data_check_hlds__mode_errors__du_functor_desc_mode_error_unify_rhs_0_0
};

const MR_Integer mercury_data_check_hlds__mode_errors__functor_number_map_mode_error_unify_rhs_0[] = {
	2,
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_errors__type_ctor_info_mode_error_unify_rhs_0 = {
	0,
	14,
	3,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__mode_errors__mode_error_unify_rhs_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__mode_errors__mode_error_unify_rhs_0_0)),
	"check_hlds.mode_errors",
	"mode_error_unify_rhs",
	{ (void *)mercury_data_check_hlds__mode_errors__du_name_ordered_mode_error_unify_rhs_0 },
	{ (void *)mercury_data_check_hlds__mode_errors__du_ptag_ordered_mode_error_unify_rhs_0 },
	3,
	4,
	mercury_data_check_hlds__mode_errors__functor_number_map_mode_error_unify_rhs_0
};

const MR_PseudoTypeInfo mercury_data_check_hlds__mode_errors__field_types_mode_warning_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__mode_errors__du_functor_desc_mode_warning_0_0 = {
	"cannot_succeed_var_var",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__mode_errors__field_types_mode_warning_0_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_check_hlds__mode_errors__field_types_mode_warning_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__mode_errors__du_functor_desc_mode_warning_0_1 = {
	"cannot_succeed_var_functor",
	3,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__mode_errors__field_types_mode_warning_0_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__mode_errors__du_stag_ordered_mode_warning_0_0[] = {
	&mercury_data_check_hlds__mode_errors__du_functor_desc_mode_warning_0_0

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__mode_errors__du_stag_ordered_mode_warning_0_1[] = {
	&mercury_data_check_hlds__mode_errors__du_functor_desc_mode_warning_0_1

};

const MR_DuPtagLayout mercury_data_check_hlds__mode_errors__du_ptag_ordered_mode_warning_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__mode_errors__du_stag_ordered_mode_warning_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__mode_errors__du_stag_ordered_mode_warning_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__mode_errors__du_name_ordered_mode_warning_0[] = {
	&mercury_data_check_hlds__mode_errors__du_functor_desc_mode_warning_0_1,
	&mercury_data_check_hlds__mode_errors__du_functor_desc_mode_warning_0_0
};

const MR_Integer mercury_data_check_hlds__mode_errors__functor_number_map_mode_warning_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_errors__type_ctor_info_mode_warning_0 = {
	0,
	14,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__mode_errors__mode_warning_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__mode_errors__mode_warning_0_0)),
	"check_hlds.mode_errors",
	"mode_warning",
	{ (void *)mercury_data_check_hlds__mode_errors__du_name_ordered_mode_warning_0 },
	{ (void *)mercury_data_check_hlds__mode_errors__du_ptag_ordered_mode_warning_0 },
	2,
	4,
	mercury_data_check_hlds__mode_errors__functor_number_map_mode_warning_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_errors__type_ctor_info_mode_warning_0;

const MR_PseudoTypeInfo mercury_data_check_hlds__mode_errors__field_types_mode_warning_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_check_hlds__mode_errors__type_ctor_info_mode_warning_0,
	(MR_PseudoTypeInfo) &mercury_data_term__type_ctor_info_context_0,
	(MR_PseudoTypeInfo) &mercury_data_check_hlds__mode_info__type_ctor_info_mode_context_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__mode_errors__du_functor_desc_mode_warning_info_0_0 = {
	"mode_warning_info",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__mode_errors__field_types_mode_warning_info_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__mode_errors__du_stag_ordered_mode_warning_info_0_0[] = {
	&mercury_data_check_hlds__mode_errors__du_functor_desc_mode_warning_info_0_0

};

const MR_DuPtagLayout mercury_data_check_hlds__mode_errors__du_ptag_ordered_mode_warning_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__mode_errors__du_stag_ordered_mode_warning_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__mode_errors__du_name_ordered_mode_warning_info_0[] = {
	&mercury_data_check_hlds__mode_errors__du_functor_desc_mode_warning_info_0_0
};

const MR_Integer mercury_data_check_hlds__mode_errors__functor_number_map_mode_warning_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_errors__type_ctor_info_mode_warning_info_0 = {
	0,
	14,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__mode_errors__mode_warning_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__mode_errors__mode_warning_info_0_0)),
	"check_hlds.mode_errors",
	"mode_warning_info",
	{ (void *)mercury_data_check_hlds__mode_errors__du_name_ordered_mode_warning_info_0 },
	{ (void *)mercury_data_check_hlds__mode_errors__du_ptag_ordered_mode_warning_info_0 },
	1,
	4,
	mercury_data_check_hlds__mode_errors__functor_number_map_mode_warning_info_0
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__mode_errors__enum_functor_desc_negated_context_desc_0_0 = {
	"if_then_else",
	0
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__mode_errors__enum_functor_desc_negated_context_desc_0_1 = {
	"negation",
	1
};

const MR_EnumFunctorDescPtr mercury_data_check_hlds__mode_errors__enum_value_ordered_negated_context_desc_0[] = {
	&mercury_data_check_hlds__mode_errors__enum_functor_desc_negated_context_desc_0_0,
	&mercury_data_check_hlds__mode_errors__enum_functor_desc_negated_context_desc_0_1
};

const MR_EnumFunctorDescPtr mercury_data_check_hlds__mode_errors__enum_name_ordered_negated_context_desc_0[] = {
	&mercury_data_check_hlds__mode_errors__enum_functor_desc_negated_context_desc_0_0,
	&mercury_data_check_hlds__mode_errors__enum_functor_desc_negated_context_desc_0_1
};

const MR_Integer mercury_data_check_hlds__mode_errors__functor_number_map_negated_context_desc_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_errors__type_ctor_info_negated_context_desc_0 = {
	0,
	14,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__mode_errors__negated_context_desc_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__mode_errors__negated_context_desc_0_0)),
	"check_hlds.mode_errors",
	"negated_context_desc",
	{ (void *)mercury_data_check_hlds__mode_errors__enum_name_ordered_negated_context_desc_0 },
	{ (void *)mercury_data_check_hlds__mode_errors__enum_value_ordered_negated_context_desc_0 },
	2,
	4,
	mercury_data_check_hlds__mode_errors__functor_number_map_negated_context_desc_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__mode_errors__du_functor_desc_schedule_culprit_0_0 = {
	"goal_itself_was_impure",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	0,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_check_hlds__mode_errors__field_types_schedule_culprit_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__mode_errors__du_functor_desc_schedule_culprit_0_1 = {
	"goals_followed_by_impure_goal",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__mode_errors__field_types_schedule_culprit_0_1,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_check_hlds__mode_errors__du_functor_desc_schedule_culprit_0_2 = {
	"conj_floundered",
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

const MR_DuFunctorDescPtr mercury_data_check_hlds__mode_errors__du_stag_ordered_schedule_culprit_0_0[] = {
	&mercury_data_check_hlds__mode_errors__du_functor_desc_schedule_culprit_0_0,
	&mercury_data_check_hlds__mode_errors__du_functor_desc_schedule_culprit_0_2

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__mode_errors__du_stag_ordered_schedule_culprit_0_1[] = {
	&mercury_data_check_hlds__mode_errors__du_functor_desc_schedule_culprit_0_1

};

const MR_DuPtagLayout mercury_data_check_hlds__mode_errors__du_ptag_ordered_schedule_culprit_0[] = {
	{ 2, MR_SECTAG_LOCAL,
	mercury_data_check_hlds__mode_errors__du_stag_ordered_schedule_culprit_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__mode_errors__du_stag_ordered_schedule_culprit_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__mode_errors__du_name_ordered_schedule_culprit_0[] = {
	&mercury_data_check_hlds__mode_errors__du_functor_desc_schedule_culprit_0_2,
	&mercury_data_check_hlds__mode_errors__du_functor_desc_schedule_culprit_0_0,
	&mercury_data_check_hlds__mode_errors__du_functor_desc_schedule_culprit_0_1
};

const MR_Integer mercury_data_check_hlds__mode_errors__functor_number_map_schedule_culprit_0[] = {
	1,
	2,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_errors__type_ctor_info_schedule_culprit_0 = {
	0,
	14,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__mode_errors__schedule_culprit_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__mode_errors__schedule_culprit_0_0)),
	"check_hlds.mode_errors",
	"schedule_culprit",
	{ (void *)mercury_data_check_hlds__mode_errors__du_name_ordered_schedule_culprit_0 },
	{ (void *)mercury_data_check_hlds__mode_errors__du_ptag_ordered_schedule_culprit_0 },
	3,
	4,
	mercury_data_check_hlds__mode_errors__functor_number_map_schedule_culprit_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;

static const MR_FA_TypeInfo_Struct1 mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_varset__type_ctor_info_varset_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;

const MR_PseudoTypeInfo mercury_data_check_hlds__mode_errors__field_types_write_indented_goal_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_module__type_ctor_info_module_info_0,
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__mode_errors__du_functor_desc_write_indented_goal_0_0 = {
	"write_indented_goal",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__mode_errors__field_types_write_indented_goal_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__mode_errors__du_stag_ordered_write_indented_goal_0_0[] = {
	&mercury_data_check_hlds__mode_errors__du_functor_desc_write_indented_goal_0_0

};

const MR_DuPtagLayout mercury_data_check_hlds__mode_errors__du_ptag_ordered_write_indented_goal_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__mode_errors__du_stag_ordered_write_indented_goal_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__mode_errors__du_name_ordered_write_indented_goal_0[] = {
	&mercury_data_check_hlds__mode_errors__du_functor_desc_write_indented_goal_0_0
};

const MR_Integer mercury_data_check_hlds__mode_errors__functor_number_map_write_indented_goal_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_errors__type_ctor_info_write_indented_goal_0 = {
	0,
	14,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__mode_errors__write_indented_goal_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__mode_errors__write_indented_goal_0_0)),
	"check_hlds.mode_errors",
	"write_indented_goal",
	{ (void *)mercury_data_check_hlds__mode_errors__du_name_ordered_write_indented_goal_0 },
	{ (void *)mercury_data_check_hlds__mode_errors__du_ptag_ordered_write_indented_goal_0 },
	1,
	4,
	mercury_data_check_hlds__mode_errors__functor_number_map_write_indented_goal_0
};

const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_parse_tree__error_util__print_anything__arity1__check_hlds__mode_errors__write_indented_goal__arity0__[] = {
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 1,
	(MR_Code *) 1,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(check_hlds__mode_errors__ClassMethod_for_parse_tree__error_util__print_anything____check_hlds__mode_errors__write_indented_goal__arity0______parse_tree__error_util__print_anything_3_3_0))
};


static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__mode_errors__merge_error_to_pieces_2_0_1 = {
{
MR_FUNCTION,
"check_hlds.mode_errors",
"check_hlds.mode_errors",
"inst_to_string",
3,
0
},
"check_hlds.mode_errors",
"mode_errors.m",
1438,
"7"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__mode_errors__mode_error_conj_to_spec_3_0_2 = {
{
MR_FUNCTION,
"check_hlds.mode_errors",
"check_hlds.mode_errors",
"mode_error_conjunct_to_msgs",
4,
0
},
"check_hlds.mode_errors",
"mode_errors.m",
437,
"79"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__mode_errors__mode_error_conj_to_spec_3_0_1 = {
{
MR_PREDICATE,
"check_hlds.mode_errors",
"check_hlds.mode_errors",
"is_error_important",
1,
0
},
"check_hlds.mode_errors",
"mode_errors.m",
401,
"21"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__mode_errors__mode_error_par_conj_to_spec_2_0_1 = {
{
MR_FUNCTION,
"check_hlds.mode_errors",
"check_hlds.mode_errors",
"merge_error_to_pieces",
3,
0
},
"check_hlds.mode_errors",
"mode_errors.m",
551,
"25"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__mode_errors__mode_error_disj_to_spec_3_0_3 = {
{
MR_FUNCTION,
"check_hlds.mode_errors",
"check_hlds.mode_errors",
"merge_error_to_pieces",
3,
0
},
"check_hlds.mode_errors",
"mode_errors.m",
536,
"21"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__mode_errors__mode_error_disj_to_spec_3_0_2 = {
{
MR_FUNCTION,
"check_hlds.mode_errors",
"check_hlds.mode_errors",
"merge_error_to_pieces",
3,
0
},
"check_hlds.mode_errors",
"mode_errors.m",
536,
"21"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__mode_errors__mode_error_disj_to_spec_3_0_1 = {
{
MR_FUNCTION,
"check_hlds.mode_errors",
"check_hlds.mode_errors",
"merge_error_to_pieces",
3,
0
},
"check_hlds.mode_errors",
"mode_errors.m",
536,
"21"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__mode_errors__report_mode_inference_message_4_0_1 = {
{
MR_FUNCTION,
"check_hlds.mode_errors",
"check_hlds.mode_errors",
"lambda_mode_errors_m_1362",
2,
0
},
"check_hlds.mode_errors",
"mode_errors.m",
1362,
"51"
};



MR_BEGIN_MODULE(check_hlds__mode_errors_module0)
	MR_init_entry1(check_hlds__mode_errors__mode_context_init_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_errors__mode_context_init_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mode_context_init'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__mode_errors__mode_context_init_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__pred_info_get_import_status_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_context_2_0);
MR_decl_entry(fn__hlds__hlds_error_util__describe_one_pred_name_3_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(check_hlds__mode_errors_module1)
	MR_init_entry1(fn__check_hlds__mode_errors__maybe_report_error_no_modes_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__mode_errors__maybe_report_error_no_modes_3_0);
	MR_init_label10(fn__check_hlds__mode_errors__maybe_report_error_no_modes_3_0,2,3,6,9,12,16,17,8,4,27)
	MR_init_label3(fn__check_hlds__mode_errors__maybe_report_error_no_modes_3_0,30,34,35)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_report_error_no_modes'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__check_hlds__mode_errors__maybe_report_error_no_modes_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_import_status_2_0,
		fn__check_hlds__mode_errors__maybe_report_error_no_modes_3_0_i2);
MR_def_label(fn__check_hlds__mode_errors__maybe_report_error_no_modes_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		fn__check_hlds__mode_errors__maybe_report_error_no_modes_3_0_i3);
MR_def_label(fn__check_hlds__mode_errors__maybe_report_error_no_modes_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,8)) {
		MR_GOTO_LAB(fn__check_hlds__mode_errors__maybe_report_error_no_modes_3_0_i4);
	}
	MR_r2 = (MR_Integer) 158;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		fn__check_hlds__mode_errors__maybe_report_error_no_modes_3_0_i6);
MR_def_label(fn__check_hlds__mode_errors__maybe_report_error_no_modes_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__check_hlds__mode_errors__maybe_report_error_no_modes_3_0_i8);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_context_2_0,
		fn__check_hlds__mode_errors__maybe_report_error_no_modes_3_0_i9);
MR_def_label(fn__check_hlds__mode_errors__maybe_report_error_no_modes_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_error_util__describe_one_pred_name_3_0,
		fn__check_hlds__mode_errors__maybe_report_error_no_modes_3_0_i12);
MR_def_label(fn__check_hlds__mode_errors__maybe_report_error_no_modes_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,2);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__mode_errors__maybe_report_error_no_modes_3_0_i16);
MR_def_label(fn__check_hlds__mode_errors__maybe_report_error_no_modes_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__mode_errors__maybe_report_error_no_modes_3_0_i17);
MR_def_label(fn__check_hlds__mode_errors__maybe_report_error_no_modes_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,1,4);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,2,0);
	MR_tfield(0, MR_r2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(5);
	}
MR_def_label(fn__check_hlds__mode_errors__maybe_report_error_no_modes_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(5);
MR_def_label(fn__check_hlds__mode_errors__maybe_report_error_no_modes_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_context_2_0,
		fn__check_hlds__mode_errors__maybe_report_error_no_modes_3_0_i27);
MR_def_label(fn__check_hlds__mode_errors__maybe_report_error_no_modes_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,1,5);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_error_util__describe_one_pred_name_3_0,
		fn__check_hlds__mode_errors__maybe_report_error_no_modes_3_0_i30);
MR_def_label(fn__check_hlds__mode_errors__maybe_report_error_no_modes_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,2);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__mode_errors__maybe_report_error_no_modes_3_0_i34);
MR_def_label(fn__check_hlds__mode_errors__maybe_report_error_no_modes_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__mode_errors__maybe_report_error_no_modes_3_0_i35);
MR_def_label(fn__check_hlds__mode_errors__maybe_report_error_no_modes_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,2,0);
	MR_tfield(0, MR_r2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_name_1_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_procedures_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
MR_decl_entry(map__lookup_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_declared_argmodes_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_declared_determinism_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_context_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_inst_var_type_0;
MR_decl_entry(varset__init_1_0);
MR_decl_entry(parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_list_2_0);
MR_decl_entry(fn__parse_tree__mercury_to_mercury__mercury_mode_subdecl_to_string_6_0);

MR_BEGIN_MODULE(check_hlds__mode_errors_module2)
	MR_init_entry1(fn__check_hlds__mode_errors__mode_decl_to_string_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__mode_errors__mode_decl_to_string_2_0);
	MR_init_label9(fn__check_hlds__mode_errors__mode_decl_to_string_2_0,2,3,5,6,7,8,9,10,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mode_decl_to_string'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__check_hlds__mode_errors__mode_decl_to_string_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		fn__check_hlds__mode_errors__mode_decl_to_string_2_0_i2);
MR_def_label(fn__check_hlds__mode_errors__mode_decl_to_string_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		fn__check_hlds__mode_errors__mode_decl_to_string_2_0_i3);
MR_def_label(fn__check_hlds__mode_errors__mode_decl_to_string_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		fn__check_hlds__mode_errors__mode_decl_to_string_2_0_i5);
MR_def_label(fn__check_hlds__mode_errors__mode_decl_to_string_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		fn__check_hlds__mode_errors__mode_decl_to_string_2_0_i6);
MR_def_label(fn__check_hlds__mode_errors__mode_decl_to_string_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_declared_argmodes_2_0,
		fn__check_hlds__mode_errors__mode_decl_to_string_2_0_i7);
MR_def_label(fn__check_hlds__mode_errors__mode_decl_to_string_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_declared_determinism_2_0,
		fn__check_hlds__mode_errors__mode_decl_to_string_2_0_i8);
MR_def_label(fn__check_hlds__mode_errors__mode_decl_to_string_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_context_2_0,
		fn__check_hlds__mode_errors__mode_decl_to_string_2_0_i9);
MR_def_label(fn__check_hlds__mode_errors__mode_decl_to_string_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_np_call_localret_ent(varset__init_1_0,
		fn__check_hlds__mode_errors__mode_decl_to_string_2_0_i10);
MR_def_label(fn__check_hlds__mode_errors__mode_decl_to_string_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_list_2_0,
		fn__check_hlds__mode_errors__mode_decl_to_string_2_0_i11);
MR_def_label(fn__check_hlds__mode_errors__mode_decl_to_string_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__parse_tree__mercury_to_mercury__mercury_mode_subdecl_to_string_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_errors_module3)
	MR_init_entry1(fn__check_hlds__mode_errors__report_indistinguishable_modes_error_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__mode_errors__report_indistinguishable_modes_error_5_0);
	MR_init_label10(fn__check_hlds__mode_errors__report_indistinguishable_modes_error_5_0,2,3,4,5,6,9,16,17,19,22)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'report_indistinguishable_modes_error'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__check_hlds__mode_errors__report_indistinguishable_modes_error_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		fn__check_hlds__mode_errors__report_indistinguishable_modes_error_5_0_i2);
MR_def_label(fn__check_hlds__mode_errors__report_indistinguishable_modes_error_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__lookup_3_0,
		fn__check_hlds__mode_errors__report_indistinguishable_modes_error_5_0_i3);
MR_def_label(fn__check_hlds__mode_errors__report_indistinguishable_modes_error_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		fn__check_hlds__mode_errors__report_indistinguishable_modes_error_5_0_i4);
MR_def_label(fn__check_hlds__mode_errors__report_indistinguishable_modes_error_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_context_2_0,
		fn__check_hlds__mode_errors__report_indistinguishable_modes_error_5_0_i5);
MR_def_label(fn__check_hlds__mode_errors__report_indistinguishable_modes_error_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_context_2_0,
		fn__check_hlds__mode_errors__report_indistinguishable_modes_error_5_0_i6);
MR_def_label(fn__check_hlds__mode_errors__report_indistinguishable_modes_error_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(1,1,6);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_error_util__describe_one_pred_name_3_0,
		fn__check_hlds__mode_errors__report_indistinguishable_modes_error_5_0_i9);
MR_def_label(fn__check_hlds__mode_errors__report_indistinguishable_modes_error_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,9);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__mode_errors__report_indistinguishable_modes_error_5_0_i16);
MR_def_label(fn__check_hlds__mode_errors__report_indistinguishable_modes_error_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__mode_errors__report_indistinguishable_modes_error_5_0_i17);
MR_def_label(fn__check_hlds__mode_errors__report_indistinguishable_modes_error_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(3,0,7);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__check_hlds__mode_errors__mode_decl_to_string_2_0,
		fn__check_hlds__mode_errors__report_indistinguishable_modes_error_5_0_i19);
MR_def_label(fn__check_hlds__mode_errors__report_indistinguishable_modes_error_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_tempr3 = MR_sv(5);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(3,0,8);
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr3;
	}
	MR_np_call_localret_ent(fn__check_hlds__mode_errors__mode_decl_to_string_2_0,
		fn__check_hlds__mode_errors__report_indistinguishable_modes_error_5_0_i22);
MR_def_label(fn__check_hlds__mode_errors__report_indistinguishable_modes_error_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,1,10);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(5);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(4);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,1,12);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_TAG_COMMON(1,2,0);
	MR_tfield(0, MR_r1, 2) = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_pred__pred_info_orig_arity_1_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_argmodes_2_0);
MR_decl_entry(list__length_2_0);
MR_decl_entry(list__drop_3_0);
MR_decl_entry(require__unexpected_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_is_valid_mode_1_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_inferred_determinism_2_0);
MR_decl_entry(check_hlds__mode_util__mode_list_get_initial_insts_3_0);
MR_decl_entry(list__duplicate_3_0);
MR_decl_entry(fn__assoc_list__from_corresponding_lists_2_0);
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(parse_tree__prog_util__pred_args_to_func_args_3_0);
MR_decl_entry(fn__parse_tree__mercury_to_mercury__mercury_func_mode_decl_to_string_6_0);
MR_decl_entry(fn__parse_tree__mercury_to_mercury__mercury_pred_mode_decl_to_string_5_0);

MR_BEGIN_MODULE(check_hlds__mode_errors_module4)
	MR_init_entry1(fn__check_hlds__mode_errors__report_mode_inference_message_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__mode_errors__report_mode_inference_message_4_0);
	MR_init_label10(fn__check_hlds__mode_errors__report_mode_inference_message_4_0,2,4,5,6,7,10,9,13,14,15)
	MR_init_label10(fn__check_hlds__mode_errors__report_mode_inference_message_4_0,17,18,22,21,24,28,30,32,34,37)
	MR_init_label3(fn__check_hlds__mode_errors__report_mode_inference_message_4_0,38,36,53)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'report_mode_inference_message'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__mode_errors__report_mode_inference_message_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		fn__check_hlds__mode_errors__report_mode_inference_message_4_0_i2);
MR_def_label(fn__check_hlds__mode_errors__report_mode_inference_message_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(5), 0, (MR_Integer) 1);
	MR_tfield(0, MR_sv(5), 0) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_context_2_0,
		fn__check_hlds__mode_errors__report_mode_inference_message_4_0_i4);
MR_def_label(fn__check_hlds__mode_errors__report_mode_inference_message_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_orig_arity_1_0,
		fn__check_hlds__mode_errors__report_mode_inference_message_4_0_i5);
MR_def_label(fn__check_hlds__mode_errors__report_mode_inference_message_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		fn__check_hlds__mode_errors__report_mode_inference_message_4_0_i6);
MR_def_label(fn__check_hlds__mode_errors__report_mode_inference_message_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(list__length_2_0,
		fn__check_hlds__mode_errors__report_mode_inference_message_4_0_i7);
MR_def_label(fn__check_hlds__mode_errors__report_mode_inference_message_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = ((MR_Integer) MR_tempr1 - (MR_Integer) MR_sv(7));
	MR_r3 = MR_sv(8);
	}
	MR_np_call_localret_ent(list__drop_3_0,
		fn__check_hlds__mode_errors__report_mode_inference_message_4_0_i10);
MR_def_label(fn__check_hlds__mode_errors__report_mode_inference_message_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__check_hlds__mode_errors__report_mode_inference_message_4_0_i9);
	}
	MR_sv(8) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_np_call_localret_ent(varset__init_1_0,
		fn__check_hlds__mode_errors__report_mode_inference_message_4_0_i14);
MR_def_label(fn__check_hlds__mode_errors__report_mode_inference_message_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.mode_errors", 22);
	MR_r2 = (MR_Word) MR_string_const("function \140check_hlds.mode_errors.report_mode_inference_message\'/4", 65);
	MR_r3 = (MR_Word) MR_string_const("list.drop failed", 16);
	MR_np_call_localret_ent(require__unexpected_3_0,
		fn__check_hlds__mode_errors__report_mode_inference_message_4_0_i13);
MR_def_label(fn__check_hlds__mode_errors__report_mode_inference_message_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(varset__init_1_0,
		fn__check_hlds__mode_errors__report_mode_inference_message_4_0_i14);
MR_def_label(fn__check_hlds__mode_errors__report_mode_inference_message_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		fn__check_hlds__mode_errors__report_mode_inference_message_4_0_i15);
MR_def_label(fn__check_hlds__mode_errors__report_mode_inference_message_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(fn__check_hlds__mode_errors__report_mode_inference_message_4_0_i17);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_is_valid_mode_1_0,
		fn__check_hlds__mode_errors__report_mode_inference_message_4_0_i22);
MR_def_label(fn__check_hlds__mode_errors__report_mode_inference_message_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_inferred_determinism_2_0,
		fn__check_hlds__mode_errors__report_mode_inference_message_4_0_i18);
MR_def_label(fn__check_hlds__mode_errors__report_mode_inference_message_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_is_valid_mode_1_0,
		fn__check_hlds__mode_errors__report_mode_inference_message_4_0_i22);
MR_def_label(fn__check_hlds__mode_errors__report_mode_inference_message_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__check_hlds__mode_errors__report_mode_inference_message_4_0_i21);
	}
	MR_sv(1) = (MR_Word) MR_string_const("Inferred", 8);
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_list_2_0,
		fn__check_hlds__mode_errors__report_mode_inference_message_4_0_i34);
MR_def_label(fn__check_hlds__mode_errors__report_mode_inference_message_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__mode_util__mode_list_get_initial_insts_3_0,
		fn__check_hlds__mode_errors__report_mode_inference_message_4_0_i24);
MR_def_label(fn__check_hlds__mode_errors__report_mode_inference_message_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(7);
	MR_r3 = (MR_Word) MR_TAG_COMMON(3,5,0);
	MR_np_call_localret_ent(list__duplicate_3_0,
		fn__check_hlds__mode_errors__report_mode_inference_message_4_0_i28);
MR_def_label(fn__check_hlds__mode_errors__report_mode_inference_message_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,6,0);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__assoc_list__from_corresponding_lists_2_0,
		fn__check_hlds__mode_errors__report_mode_inference_message_4_0_i30);
MR_def_label(fn__check_hlds__mode_errors__report_mode_inference_message_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(9);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,8,0);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__check_hlds__mode_errors__report_mode_inference_message_4_0_i32);
MR_def_label(fn__check_hlds__mode_errors__report_mode_inference_message_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("REJECTED", 8);
	MR_sv(4) = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_list_2_0,
		fn__check_hlds__mode_errors__report_mode_inference_message_4_0_i34);
MR_def_label(fn__check_hlds__mode_errors__report_mode_inference_message_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(fn__check_hlds__mode_errors__report_mode_inference_message_4_0_i36);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_util__pred_args_to_func_args_3_0,
		fn__check_hlds__mode_errors__report_mode_inference_message_4_0_i37);
MR_def_label(fn__check_hlds__mode_errors__report_mode_inference_message_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_func_mode_decl_to_string_6_0,
		fn__check_hlds__mode_errors__report_mode_inference_message_4_0_i38);
MR_def_label(fn__check_hlds__mode_errors__report_mode_inference_message_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_r2, 1) = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,1);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r2, 0) = (MR_Integer) 43;
	MR_tfield(1, MR_r2, 1) = (MR_Integer) 1;
	MR_tfield(1, MR_r2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(6);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_TAG_COMMON(1,9,0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_TAG_COMMON(1,2,0);
	MR_tfield(0, MR_r1, 2) = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(fn__check_hlds__mode_errors__report_mode_inference_message_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_pred_mode_decl_to_string_5_0,
		fn__check_hlds__mode_errors__report_mode_inference_message_4_0_i53);
MR_def_label(fn__check_hlds__mode_errors__report_mode_inference_message_4_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_TAG_COMMON(1,1,1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 43;
	MR_tfield(1, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tfield(1, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_TAG_COMMON(1,9,0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_TAG_COMMON(1,2,0);
	MR_tfield(0, MR_r1, 2) = MR_tempr2;
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_errors_module5)
	MR_init_entry1(fn__check_hlds__mode_errors__report_mode_inference_messages_2_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__mode_errors__report_mode_inference_messages_2_5_0);
	MR_init_label9(fn__check_hlds__mode_errors__report_mode_inference_messages_2_5_0,42,4,5,6,7,13,11,16,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'report_mode_inference_messages_2'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__mode_errors__report_mode_inference_messages_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(fn__check_hlds__mode_errors__report_mode_inference_messages_2_5_0_i42);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__check_hlds__mode_errors__report_mode_inference_messages_2_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_tfield(1, MR_r5, 0);
	MR_r5 = MR_tfield(1, MR_r5, 1);
	MR_np_localcall_lab(fn__check_hlds__mode_errors__report_mode_inference_messages_2_5_0,
		fn__check_hlds__mode_errors__report_mode_inference_messages_2_5_0_i4);
MR_def_label(fn__check_hlds__mode_errors__report_mode_inference_messages_2_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		fn__check_hlds__mode_errors__report_mode_inference_messages_2_5_0_i5);
MR_def_label(fn__check_hlds__mode_errors__report_mode_inference_messages_2_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 46;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		fn__check_hlds__mode_errors__report_mode_inference_messages_2_5_0_i6);
MR_def_label(fn__check_hlds__mode_errors__report_mode_inference_messages_2_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		fn__check_hlds__mode_errors__report_mode_inference_messages_2_5_0_i7);
MR_def_label(fn__check_hlds__mode_errors__report_mode_inference_messages_2_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_is_valid_mode_1_0,
		fn__check_hlds__mode_errors__report_mode_inference_messages_2_5_0_i13);
MR_def_label(fn__check_hlds__mode_errors__report_mode_inference_messages_2_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__check_hlds__mode_errors__report_mode_inference_messages_2_5_0_i11);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(fn__check_hlds__mode_errors__report_mode_inference_message_4_0,
		fn__check_hlds__mode_errors__report_mode_inference_messages_2_5_0_i16);
MR_def_label(fn__check_hlds__mode_errors__report_mode_inference_messages_2_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	if (MR_INT_NE(MR_sv(4),1)) {
		MR_GOTO_LAB(fn__check_hlds__mode_errors__report_mode_inference_messages_2_5_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__check_hlds__mode_errors__report_mode_inference_message_4_0,
		fn__check_hlds__mode_errors__report_mode_inference_messages_2_5_0_i16);
MR_def_label(fn__check_hlds__mode_errors__report_mode_inference_messages_2_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_sv(6);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(7);
MR_def_label(fn__check_hlds__mode_errors__report_mode_inference_messages_2_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_markers_2_0);
MR_decl_entry(hlds__hlds_pred__check_marker_2_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_all_procids_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0;

MR_BEGIN_MODULE(check_hlds__mode_errors_module6)
	MR_init_entry1(fn__check_hlds__mode_errors__report_mode_inference_messages_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__mode_errors__report_mode_inference_messages_3_0);
	MR_init_label9(fn__check_hlds__mode_errors__report_mode_inference_messages_3_0,32,4,5,6,8,10,11,12,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'report_mode_inference_messages'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__check_hlds__mode_errors__report_mode_inference_messages_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(fn__check_hlds__mode_errors__report_mode_inference_messages_3_0_i32);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__check_hlds__mode_errors__report_mode_inference_messages_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tfield(1, MR_r3, 0);
	MR_r3 = MR_tfield(1, MR_r3, 1);
	MR_np_localcall_lab(fn__check_hlds__mode_errors__report_mode_inference_messages_3_0,
		fn__check_hlds__mode_errors__report_mode_inference_messages_3_0_i4);
MR_def_label(fn__check_hlds__mode_errors__report_mode_inference_messages_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		fn__check_hlds__mode_errors__report_mode_inference_messages_3_0_i5);
MR_def_label(fn__check_hlds__mode_errors__report_mode_inference_messages_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		fn__check_hlds__mode_errors__report_mode_inference_messages_3_0_i6);
MR_def_label(fn__check_hlds__mode_errors__report_mode_inference_messages_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 3;
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		fn__check_hlds__mode_errors__report_mode_inference_messages_3_0_i8);
MR_def_label(fn__check_hlds__mode_errors__report_mode_inference_messages_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__check_hlds__mode_errors__report_mode_inference_messages_3_0_i7);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_all_procids_1_0,
		fn__check_hlds__mode_errors__report_mode_inference_messages_3_0_i10);
MR_def_label(fn__check_hlds__mode_errors__report_mode_inference_messages_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		fn__check_hlds__mode_errors__report_mode_inference_messages_3_0_i11);
MR_def_label(fn__check_hlds__mode_errors__report_mode_inference_messages_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__check_hlds__mode_errors__report_mode_inference_messages_2_5_0,
		fn__check_hlds__mode_errors__report_mode_inference_messages_3_0_i12);
MR_def_label(fn__check_hlds__mode_errors__report_mode_inference_messages_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
	}
MR_def_label(fn__check_hlds__mode_errors__report_mode_inference_messages_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__mode_info__mode_info_get_module_info_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_context_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_pred_id_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_proc_id_2_0);
MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_5_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_instvarset_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_mode_context_2_0);
MR_decl_entry(fn__hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_0);
MR_decl_entry(hlds__hlds_out__hlds_out_util__unify_context_first_to_pieces_5_0);

MR_BEGIN_MODULE(check_hlds__mode_errors_module7)
	MR_init_entry1(fn__check_hlds__mode_errors__mode_info_context_preamble_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__mode_errors__mode_info_context_preamble_1_0);
	MR_init_label10(fn__check_hlds__mode_errors__mode_info_context_preamble_1_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label7(fn__check_hlds__mode_errors__mode_info_context_preamble_1_0,13,14,22,24,27,25,31)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mode_info_context_preamble'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__mode_errors__mode_info_context_preamble_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		fn__check_hlds__mode_errors__mode_info_context_preamble_1_0_i2);
MR_def_label(fn__check_hlds__mode_errors__mode_info_context_preamble_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_context_2_0,
		fn__check_hlds__mode_errors__mode_info_context_preamble_1_0_i3);
MR_def_label(fn__check_hlds__mode_errors__mode_info_context_preamble_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_pred_id_2_0,
		fn__check_hlds__mode_errors__mode_info_context_preamble_1_0_i4);
MR_def_label(fn__check_hlds__mode_errors__mode_info_context_preamble_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_proc_id_2_0,
		fn__check_hlds__mode_errors__mode_info_context_preamble_1_0_i5);
MR_def_label(fn__check_hlds__mode_errors__mode_info_context_preamble_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		fn__check_hlds__mode_errors__mode_info_context_preamble_1_0_i6);
MR_def_label(fn__check_hlds__mode_errors__mode_info_context_preamble_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		fn__check_hlds__mode_errors__mode_info_context_preamble_1_0_i7);
MR_def_label(fn__check_hlds__mode_errors__mode_info_context_preamble_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		fn__check_hlds__mode_errors__mode_info_context_preamble_1_0_i8);
MR_def_label(fn__check_hlds__mode_errors__mode_info_context_preamble_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_declared_argmodes_2_0,
		fn__check_hlds__mode_errors__mode_info_context_preamble_1_0_i9);
MR_def_label(fn__check_hlds__mode_errors__mode_info_context_preamble_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_list_2_0,
		fn__check_hlds__mode_errors__mode_info_context_preamble_1_0_i10);
MR_def_label(fn__check_hlds__mode_errors__mode_info_context_preamble_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		fn__check_hlds__mode_errors__mode_info_context_preamble_1_0_i11);
MR_def_label(fn__check_hlds__mode_errors__mode_info_context_preamble_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(6), 0, (MR_Integer) 1);
	MR_tfield(0, MR_sv(6), 0) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instvarset_2_0,
		fn__check_hlds__mode_errors__mode_info_context_preamble_1_0_i13);
MR_def_label(fn__check_hlds__mode_errors__mode_info_context_preamble_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(2);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_mode_subdecl_to_string_6_0,
		fn__check_hlds__mode_errors__mode_info_context_preamble_1_0_i14);
MR_def_label(fn__check_hlds__mode_errors__mode_info_context_preamble_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,1,14);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(3,0,11);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,1,14);
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_mode_context_2_0,
		fn__check_hlds__mode_errors__mode_info_context_preamble_1_0_i22);
MR_def_label(fn__check_hlds__mode_errors__mode_info_context_preamble_1_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__check_hlds__mode_errors__mode_info_context_preamble_1_0_i24);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_def_label(fn__check_hlds__mode_errors__mode_info_context_preamble_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__check_hlds__mode_errors__mode_info_context_preamble_1_0_i25);
	}
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(3,0,12);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = MR_tfield(1, MR_tempr1, 1);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_0,
		fn__check_hlds__mode_errors__mode_info_context_preamble_1_0_i27);
MR_def_label(fn__check_hlds__mode_errors__mode_info_context_preamble_1_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r2 = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
	}
MR_def_label(fn__check_hlds__mode_errors__mode_info_context_preamble_1_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tfield(2, MR_tempr1, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__unify_context_first_to_pieces_5_0,
		fn__check_hlds__mode_errors__mode_info_context_preamble_1_0_i31);
MR_def_label(fn__check_hlds__mode_errors__mode_info_context_preamble_1_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__condense_2_0);

MR_BEGIN_MODULE(check_hlds__mode_errors_module8)
	MR_init_entry1(fn__check_hlds__mode_errors__mode_error_disj_to_spec_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__mode_errors__mode_error_disj_to_spec_3_0);
	MR_init_label8(fn__check_hlds__mode_errors__mode_error_disj_to_spec_3_0,2,3,6,15,32,33,35,36)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mode_error_disj_to_spec'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__mode_errors__mode_error_disj_to_spec_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(fn__check_hlds__mode_errors__mode_info_context_preamble_1_0,
		fn__check_hlds__mode_errors__mode_error_disj_to_spec_3_0_i2);
MR_def_label(fn__check_hlds__mode_errors__mode_error_disj_to_spec_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_context_2_0,
		fn__check_hlds__mode_errors__mode_error_disj_to_spec_3_0_i3);
MR_def_label(fn__check_hlds__mode_errors__mode_error_disj_to_spec_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(fn__check_hlds__mode_errors__mode_error_disj_to_spec_3_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(10,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__check_hlds__mode_errors__merge_error_to_pieces_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,1,16);
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,17);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_errors, merge_error);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__check_hlds__mode_errors__mode_error_disj_to_spec_3_0_i32);
MR_def_label(fn__check_hlds__mode_errors__mode_error_disj_to_spec_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(fn__check_hlds__mode_errors__mode_error_disj_to_spec_3_0_i15);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(10,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__check_hlds__mode_errors__merge_error_to_pieces_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,1,20);
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,17);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_errors, merge_error);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__check_hlds__mode_errors__mode_error_disj_to_spec_3_0_i32);
MR_def_label(fn__check_hlds__mode_errors__mode_error_disj_to_spec_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(10,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__check_hlds__mode_errors__merge_error_to_pieces_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,1,22);
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,17);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_errors, merge_error);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__check_hlds__mode_errors__mode_error_disj_to_spec_3_0_i32);
MR_def_label(fn__check_hlds__mode_errors__mode_error_disj_to_spec_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__condense_2_0,
		fn__check_hlds__mode_errors__mode_error_disj_to_spec_3_0_i33);
MR_def_label(fn__check_hlds__mode_errors__mode_error_disj_to_spec_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,2,0);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__mode_errors__mode_error_disj_to_spec_3_0_i35);
MR_def_label(fn__check_hlds__mode_errors__mode_error_disj_to_spec_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__mode_errors__mode_error_disj_to_spec_3_0_i36);
MR_def_label(fn__check_hlds__mode_errors__mode_error_disj_to_spec_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_tfield(0, MR_r1, 2) = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_errors_module9)
	MR_init_entry1(fn__check_hlds__mode_errors__mode_error_par_conj_to_spec_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__mode_errors__mode_error_par_conj_to_spec_2_0);
	MR_init_label6(fn__check_hlds__mode_errors__mode_error_par_conj_to_spec_2_0,2,3,6,7,9,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mode_error_par_conj_to_spec'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__mode_errors__mode_error_par_conj_to_spec_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(fn__check_hlds__mode_errors__mode_info_context_preamble_1_0,
		fn__check_hlds__mode_errors__mode_error_par_conj_to_spec_2_0_i2);
MR_def_label(fn__check_hlds__mode_errors__mode_error_par_conj_to_spec_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_context_2_0,
		fn__check_hlds__mode_errors__mode_error_par_conj_to_spec_2_0_i3);
MR_def_label(fn__check_hlds__mode_errors__mode_error_par_conj_to_spec_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(10,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__check_hlds__mode_errors__merge_error_to_pieces_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,1,26);
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_errors, merge_error);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,17);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__check_hlds__mode_errors__mode_error_par_conj_to_spec_2_0_i6);
MR_def_label(fn__check_hlds__mode_errors__mode_error_par_conj_to_spec_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__condense_2_0,
		fn__check_hlds__mode_errors__mode_error_par_conj_to_spec_2_0_i7);
MR_def_label(fn__check_hlds__mode_errors__mode_error_par_conj_to_spec_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,2,0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,26);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__mode_errors__mode_error_par_conj_to_spec_2_0_i9);
MR_def_label(fn__check_hlds__mode_errors__mode_error_par_conj_to_spec_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__mode_errors__mode_error_par_conj_to_spec_2_0_i10);
MR_def_label(fn__check_hlds__mode_errors__mode_error_par_conj_to_spec_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_tfield(0, MR_r1, 2) = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0);
MR_decl_entry(fn__hlds__hlds_out__hlds_out_mode__mercury_expanded_inst_to_string_3_0);

MR_BEGIN_MODULE(check_hlds__mode_errors_module10)
	MR_init_entry1(fn__check_hlds__mode_errors__inst_to_string_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__mode_errors__inst_to_string_2_0);
	MR_init_label3(fn__check_hlds__mode_errors__inst_to_string_2_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'inst_to_string'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__mode_errors__inst_to_string_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0,
		fn__check_hlds__mode_errors__inst_to_string_2_0_i2);
MR_def_label(fn__check_hlds__mode_errors__inst_to_string_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instvarset_2_0,
		fn__check_hlds__mode_errors__inst_to_string_2_0_i3);
MR_def_label(fn__check_hlds__mode_errors__inst_to_string_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		fn__check_hlds__mode_errors__inst_to_string_2_0_i4);
MR_def_label(fn__check_hlds__mode_errors__inst_to_string_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__hlds__hlds_out__hlds_out_mode__mercury_expanded_inst_to_string_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__mode_info__mode_info_get_varset_2_0);
MR_decl_entry(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0);
MR_decl_entry(fn__parse_tree__prog_out__pred_or_func_to_str_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(check_hlds__mode_errors_module11)
	MR_init_entry1(fn__check_hlds__mode_errors__mode_error_bind_var_to_spec_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__mode_errors__mode_error_bind_var_to_spec_5_0);
	MR_init_label10(fn__check_hlds__mode_errors__mode_error_bind_var_to_spec_5_0,2,3,4,7,10,14,29,34,39,44)
	MR_init_label6(fn__check_hlds__mode_errors__mode_error_bind_var_to_spec_5_0,49,54,55,56,57,62)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mode_error_bind_var_to_spec'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__mode_errors__mode_error_bind_var_to_spec_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_np_call_localret_ent(fn__check_hlds__mode_errors__mode_info_context_preamble_1_0,
		fn__check_hlds__mode_errors__mode_error_bind_var_to_spec_5_0_i2);
MR_def_label(fn__check_hlds__mode_errors__mode_error_bind_var_to_spec_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_context_2_0,
		fn__check_hlds__mode_errors__mode_error_bind_var_to_spec_5_0_i3);
MR_def_label(fn__check_hlds__mode_errors__mode_error_bind_var_to_spec_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_varset_2_0,
		fn__check_hlds__mode_errors__mode_error_bind_var_to_spec_5_0_i4);
MR_def_label(fn__check_hlds__mode_errors__mode_error_bind_var_to_spec_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(3,0,21);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(3,0,22);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr2;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0,
		fn__check_hlds__mode_errors__mode_error_bind_var_to_spec_5_0_i7);
MR_def_label(fn__check_hlds__mode_errors__mode_error_bind_var_to_spec_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(3,0,23);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__check_hlds__mode_errors__inst_to_string_2_0,
		fn__check_hlds__mode_errors__mode_error_bind_var_to_spec_5_0_i10);
MR_def_label(fn__check_hlds__mode_errors__mode_error_bind_var_to_spec_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_tempr3 = MR_sv(5);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(3,0,24);
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(3,0,25);
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr3;
	}
	MR_np_call_localret_ent(fn__check_hlds__mode_errors__inst_to_string_2_0,
		fn__check_hlds__mode_errors__mode_error_bind_var_to_spec_5_0_i14);
MR_def_label(fn__check_hlds__mode_errors__mode_error_bind_var_to_spec_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,2);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(10);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	if (MR_LTAGS_TESTR(MR_sv(2),0,3)) {
		MR_GOTO_LAB(fn__check_hlds__mode_errors__mode_error_bind_var_to_spec_5_0_i29);
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,0,28);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr1;
	MR_r2 = MR_sv(6);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,1,28);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,2,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__mode_errors__mode_error_bind_var_to_spec_5_0_i62);
MR_def_label(fn__check_hlds__mode_errors__mode_error_bind_var_to_spec_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(fn__check_hlds__mode_errors__mode_error_bind_var_to_spec_5_0_i34);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,0,33);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r2 = MR_sv(6);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,1,32);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,2,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__mode_errors__mode_error_bind_var_to_spec_5_0_i62);
MR_def_label(fn__check_hlds__mode_errors__mode_error_bind_var_to_spec_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(fn__check_hlds__mode_errors__mode_error_bind_var_to_spec_5_0_i39);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(3,0,38);
	MR_tfield(1, MR_r2, 1) = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_sv(6);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,1,36);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,2,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__mode_errors__mode_error_bind_var_to_spec_5_0_i62);
MR_def_label(fn__check_hlds__mode_errors__mode_error_bind_var_to_spec_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,4)) {
		MR_GOTO_LAB(fn__check_hlds__mode_errors__mode_error_bind_var_to_spec_5_0_i44);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(3,0,41);
	MR_tfield(1, MR_r2, 1) = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_sv(6);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,1,38);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,2,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__mode_errors__mode_error_bind_var_to_spec_5_0_i62);
MR_def_label(fn__check_hlds__mode_errors__mode_error_bind_var_to_spec_5_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(fn__check_hlds__mode_errors__mode_error_bind_var_to_spec_5_0_i49);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(3,0,44);
	MR_tfield(1, MR_r2, 1) = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_sv(6);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,1,40);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,2,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__mode_errors__mode_error_bind_var_to_spec_5_0_i62);
MR_def_label(fn__check_hlds__mode_errors__mode_error_bind_var_to_spec_5_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(2), 0);
	MR_np_call_localret_ent(fn__parse_tree__prog_out__pred_or_func_to_str_1_0,
		fn__check_hlds__mode_errors__mode_error_bind_var_to_spec_5_0_i54);
MR_def_label(fn__check_hlds__mode_errors__mode_error_bind_var_to_spec_5_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(" lambda goal.", 13);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__check_hlds__mode_errors__mode_error_bind_var_to_spec_5_0_i55);
MR_def_label(fn__check_hlds__mode_errors__mode_error_bind_var_to_spec_5_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" a ", 3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__check_hlds__mode_errors__mode_error_bind_var_to_spec_5_0_i56);
MR_def_label(fn__check_hlds__mode_errors__mode_error_bind_var_to_spec_5_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("attempt to bind a non-local variable inside", 43);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__check_hlds__mode_errors__mode_error_bind_var_to_spec_5_0_i57);
MR_def_label(fn__check_hlds__mode_errors__mode_error_bind_var_to_spec_5_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r2 = MR_sv(6);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,1,43);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,2,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__mode_errors__mode_error_bind_var_to_spec_5_0_i62);
MR_def_label(fn__check_hlds__mode_errors__mode_error_bind_var_to_spec_5_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(7);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_tfield(0, MR_r1, 2) = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_errors_module12)
	MR_init_entry1(fn__check_hlds__mode_errors__mode_error_non_local_lambda_var_to_spec_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__mode_errors__mode_error_non_local_lambda_var_to_spec_3_0);
	MR_init_label9(fn__check_hlds__mode_errors__mode_error_non_local_lambda_var_to_spec_3_0,2,3,4,6,9,10,11,12,27)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mode_error_non_local_lambda_var_to_spec'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__mode_errors__mode_error_non_local_lambda_var_to_spec_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(fn__check_hlds__mode_errors__mode_info_context_preamble_1_0,
		fn__check_hlds__mode_errors__mode_error_non_local_lambda_var_to_spec_3_0_i2);
MR_def_label(fn__check_hlds__mode_errors__mode_error_non_local_lambda_var_to_spec_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_context_2_0,
		fn__check_hlds__mode_errors__mode_error_non_local_lambda_var_to_spec_3_0_i3);
MR_def_label(fn__check_hlds__mode_errors__mode_error_non_local_lambda_var_to_spec_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_varset_2_0,
		fn__check_hlds__mode_errors__mode_error_non_local_lambda_var_to_spec_3_0_i4);
MR_def_label(fn__check_hlds__mode_errors__mode_error_non_local_lambda_var_to_spec_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(3,0,48);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr2;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0,
		fn__check_hlds__mode_errors__mode_error_non_local_lambda_var_to_spec_3_0_i6);
MR_def_label(fn__check_hlds__mode_errors__mode_error_non_local_lambda_var_to_spec_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(3,0,23);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0,
		fn__check_hlds__mode_errors__mode_error_non_local_lambda_var_to_spec_3_0_i9);
MR_def_label(fn__check_hlds__mode_errors__mode_error_non_local_lambda_var_to_spec_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instvarset_2_0,
		fn__check_hlds__mode_errors__mode_error_non_local_lambda_var_to_spec_3_0_i10);
MR_def_label(fn__check_hlds__mode_errors__mode_error_non_local_lambda_var_to_spec_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		fn__check_hlds__mode_errors__mode_error_non_local_lambda_var_to_spec_3_0_i11);
MR_def_label(fn__check_hlds__mode_errors__mode_error_non_local_lambda_var_to_spec_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_mode__mercury_expanded_inst_to_string_3_0,
		fn__check_hlds__mode_errors__mode_error_non_local_lambda_var_to_spec_3_0_i12);
MR_def_label(fn__check_hlds__mode_errors__mode_error_non_local_lambda_var_to_spec_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,47);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,2,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__mode_errors__mode_error_non_local_lambda_var_to_spec_3_0_i27);
MR_def_label(fn__check_hlds__mode_errors__mode_error_non_local_lambda_var_to_spec_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(5);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_tfield(0, MR_r1, 2) = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_errors_module13)
	MR_init_entry1(fn__check_hlds__mode_errors__inst_list_to_sep_lines_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__mode_errors__inst_list_to_sep_lines_2_0);
	MR_init_label9(fn__check_hlds__mode_errors__inst_list_to_sep_lines_2_0,36,5,9,10,11,12,16,17,18)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'inst_list_to_sep_lines'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__mode_errors__inst_list_to_sep_lines_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__check_hlds__mode_errors__inst_list_to_sep_lines_2_0_i36);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__check_hlds__mode_errors__inst_list_to_sep_lines_2_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	MR_r3 = MR_tempr1;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__check_hlds__mode_errors__inst_list_to_sep_lines_2_0_i5);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(3,11,0);
	}
	MR_np_call_localret_ent(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0,
		fn__check_hlds__mode_errors__inst_list_to_sep_lines_2_0_i9);
MR_def_label(fn__check_hlds__mode_errors__inst_list_to_sep_lines_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_sv(2) = MR_r3;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(1,1,48);
	MR_sv(4) = (MR_Word) MR_tbmkword(0, 1);
	MR_np_call_localret_ent(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0,
		fn__check_hlds__mode_errors__inst_list_to_sep_lines_2_0_i9);
MR_def_label(fn__check_hlds__mode_errors__inst_list_to_sep_lines_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instvarset_2_0,
		fn__check_hlds__mode_errors__inst_list_to_sep_lines_2_0_i10);
MR_def_label(fn__check_hlds__mode_errors__inst_list_to_sep_lines_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		fn__check_hlds__mode_errors__inst_list_to_sep_lines_2_0_i11);
MR_def_label(fn__check_hlds__mode_errors__inst_list_to_sep_lines_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_mode__mercury_expanded_inst_to_string_3_0,
		fn__check_hlds__mode_errors__inst_list_to_sep_lines_2_0_i12);
MR_def_label(fn__check_hlds__mode_errors__inst_list_to_sep_lines_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__mode_errors__inst_list_to_sep_lines_2_0_i16);
MR_def_label(fn__check_hlds__mode_errors__inst_list_to_sep_lines_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__mode_errors__inst_list_to_sep_lines_2_0_i17);
MR_def_label(fn__check_hlds__mode_errors__inst_list_to_sep_lines_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_localcall_lab(fn__check_hlds__mode_errors__inst_list_to_sep_lines_2_0,
		fn__check_hlds__mode_errors__inst_list_to_sep_lines_2_0_i18);
MR_def_label(fn__check_hlds__mode_errors__inst_list_to_sep_lines_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_out__hlds_out_util__call_id_to_string_1_0);
MR_decl_entry(fn__parse_tree__mercury_to_mercury__mercury_vars_to_string_3_0);

MR_BEGIN_MODULE(check_hlds__mode_errors_module14)
	MR_init_entry1(fn__check_hlds__mode_errors__mode_error_no_matching_mode_to_spec_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__mode_errors__mode_error_no_matching_mode_to_spec_3_0);
	MR_init_label10(fn__check_hlds__mode_errors__mode_error_no_matching_mode_to_spec_3_0,2,3,4,5,8,7,6,11,19,27)
	MR_init_label2(fn__check_hlds__mode_errors__mode_error_no_matching_mode_to_spec_3_0,28,30)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mode_error_no_matching_mode_to_spec'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__mode_errors__mode_error_no_matching_mode_to_spec_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(fn__check_hlds__mode_errors__mode_info_context_preamble_1_0,
		fn__check_hlds__mode_errors__mode_error_no_matching_mode_to_spec_3_0_i2);
MR_def_label(fn__check_hlds__mode_errors__mode_error_no_matching_mode_to_spec_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_context_2_0,
		fn__check_hlds__mode_errors__mode_error_no_matching_mode_to_spec_3_0_i3);
MR_def_label(fn__check_hlds__mode_errors__mode_error_no_matching_mode_to_spec_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_varset_2_0,
		fn__check_hlds__mode_errors__mode_error_no_matching_mode_to_spec_3_0_i4);
MR_def_label(fn__check_hlds__mode_errors__mode_error_no_matching_mode_to_spec_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_mode_context_2_0,
		fn__check_hlds__mode_errors__mode_error_no_matching_mode_to_spec_3_0_i5);
MR_def_label(fn__check_hlds__mode_errors__mode_error_no_matching_mode_to_spec_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__check_hlds__mode_errors__mode_error_no_matching_mode_to_spec_3_0_i7);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_util__call_id_to_string_1_0,
		fn__check_hlds__mode_errors__mode_error_no_matching_mode_to_spec_3_0_i8);
MR_def_label(fn__check_hlds__mode_errors__mode_error_no_matching_mode_to_spec_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_sv(2) = MR_r1;
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(3,0,51);
	MR_r3 = (MR_Integer) 0;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_vars_to_string_3_0,
		fn__check_hlds__mode_errors__mode_error_no_matching_mode_to_spec_3_0_i11);
MR_def_label(fn__check_hlds__mode_errors__mode_error_no_matching_mode_to_spec_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.mode_errors", 22);
	MR_r2 = (MR_Word) MR_string_const("function \140check_hlds.mode_errors.mode_error_no_matching_mode_to_spec\'/3", 71);
	MR_r3 = (MR_Word) MR_string_const("invalid context", 15);
	MR_np_call_localret_ent(require__unexpected_3_0,
		fn__check_hlds__mode_errors__mode_error_no_matching_mode_to_spec_3_0_i6);
MR_def_label(fn__check_hlds__mode_errors__mode_error_no_matching_mode_to_spec_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_vars_to_string_3_0,
		fn__check_hlds__mode_errors__mode_error_no_matching_mode_to_spec_3_0_i11);
MR_def_label(fn__check_hlds__mode_errors__mode_error_no_matching_mode_to_spec_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,50);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__check_hlds__mode_errors__inst_list_to_sep_lines_2_0,
		fn__check_hlds__mode_errors__mode_error_no_matching_mode_to_spec_3_0_i19);
MR_def_label(fn__check_hlds__mode_errors__mode_error_no_matching_mode_to_spec_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,2);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,0,53);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__mode_errors__mode_error_no_matching_mode_to_spec_3_0_i27);
MR_def_label(fn__check_hlds__mode_errors__mode_error_no_matching_mode_to_spec_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__mode_errors__mode_error_no_matching_mode_to_spec_3_0_i28);
MR_def_label(fn__check_hlds__mode_errors__mode_error_no_matching_mode_to_spec_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,2,0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__mode_errors__mode_error_no_matching_mode_to_spec_3_0_i30);
MR_def_label(fn__check_hlds__mode_errors__mode_error_no_matching_mode_to_spec_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(5);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_tfield(0, MR_r1, 2) = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__int_to_string_1_0);

MR_BEGIN_MODULE(check_hlds__mode_errors_module15)
	MR_init_entry1(fn__check_hlds__mode_errors__mode_error_higher_order_pred_var_to_spec_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__mode_errors__mode_error_higher_order_pred_var_to_spec_5_0);
	MR_init_label10(fn__check_hlds__mode_errors__mode_error_higher_order_pred_var_to_spec_5_0,2,3,4,7,8,6,11,12,13,15)
	MR_init_label5(fn__check_hlds__mode_errors__mode_error_higher_order_pred_var_to_spec_5_0,18,19,20,21,34)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mode_error_higher_order_pred_var_to_spec'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__mode_errors__mode_error_higher_order_pred_var_to_spec_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_np_call_localret_ent(fn__check_hlds__mode_errors__mode_info_context_preamble_1_0,
		fn__check_hlds__mode_errors__mode_error_higher_order_pred_var_to_spec_5_0_i2);
MR_def_label(fn__check_hlds__mode_errors__mode_error_higher_order_pred_var_to_spec_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_context_2_0,
		fn__check_hlds__mode_errors__mode_error_higher_order_pred_var_to_spec_5_0_i3);
MR_def_label(fn__check_hlds__mode_errors__mode_error_higher_order_pred_var_to_spec_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_varset_2_0,
		fn__check_hlds__mode_errors__mode_error_higher_order_pred_var_to_spec_5_0_i4);
MR_def_label(fn__check_hlds__mode_errors__mode_error_higher_order_pred_var_to_spec_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(fn__check_hlds__mode_errors__mode_error_higher_order_pred_var_to_spec_5_0_i6);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = ((MR_Integer) MR_sv(5) - (MR_Integer) 1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__check_hlds__mode_errors__mode_error_higher_order_pred_var_to_spec_5_0_i7);
MR_def_label(fn__check_hlds__mode_errors__mode_error_higher_order_pred_var_to_spec_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(").", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__check_hlds__mode_errors__mode_error_higher_order_pred_var_to_spec_5_0_i8);
MR_def_label(fn__check_hlds__mode_errors__mode_error_higher_order_pred_var_to_spec_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("expecting higher-order func inst (of arity ", 43);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__check_hlds__mode_errors__mode_error_higher_order_pred_var_to_spec_5_0_i13);
MR_def_label(fn__check_hlds__mode_errors__mode_error_higher_order_pred_var_to_spec_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__check_hlds__mode_errors__mode_error_higher_order_pred_var_to_spec_5_0_i11);
MR_def_label(fn__check_hlds__mode_errors__mode_error_higher_order_pred_var_to_spec_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(").", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__check_hlds__mode_errors__mode_error_higher_order_pred_var_to_spec_5_0_i12);
MR_def_label(fn__check_hlds__mode_errors__mode_error_higher_order_pred_var_to_spec_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("expecting higher-order pred inst (of arity ", 43);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__check_hlds__mode_errors__mode_error_higher_order_pred_var_to_spec_5_0_i13);
MR_def_label(fn__check_hlds__mode_errors__mode_error_higher_order_pred_var_to_spec_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(3,0,48);
	MR_r3 = (MR_Integer) 0;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0,
		fn__check_hlds__mode_errors__mode_error_higher_order_pred_var_to_spec_5_0_i15);
MR_def_label(fn__check_hlds__mode_errors__mode_error_higher_order_pred_var_to_spec_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(3,0,23);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0,
		fn__check_hlds__mode_errors__mode_error_higher_order_pred_var_to_spec_5_0_i18);
MR_def_label(fn__check_hlds__mode_errors__mode_error_higher_order_pred_var_to_spec_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instvarset_2_0,
		fn__check_hlds__mode_errors__mode_error_higher_order_pred_var_to_spec_5_0_i19);
MR_def_label(fn__check_hlds__mode_errors__mode_error_higher_order_pred_var_to_spec_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		fn__check_hlds__mode_errors__mode_error_higher_order_pred_var_to_spec_5_0_i20);
MR_def_label(fn__check_hlds__mode_errors__mode_error_higher_order_pred_var_to_spec_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_mode__mercury_expanded_inst_to_string_3_0,
		fn__check_hlds__mode_errors__mode_error_higher_order_pred_var_to_spec_5_0_i21);
MR_def_label(fn__check_hlds__mode_errors__mode_error_higher_order_pred_var_to_spec_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_TAG_COMMON(1,1,1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,0,24);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr2;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,2,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__mode_errors__mode_error_higher_order_pred_var_to_spec_5_0_i34);
MR_def_label(fn__check_hlds__mode_errors__mode_error_higher_order_pred_var_to_spec_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(7);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_tfield(0, MR_r1, 2) = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_errors_module16)
	MR_init_entry1(fn__check_hlds__mode_errors__mode_error_poly_unify_to_spec_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__mode_errors__mode_error_poly_unify_to_spec_3_0);
	MR_init_label9(fn__check_hlds__mode_errors__mode_error_poly_unify_to_spec_3_0,2,3,4,7,10,11,12,13,28)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mode_error_poly_unify_to_spec'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__mode_errors__mode_error_poly_unify_to_spec_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(fn__check_hlds__mode_errors__mode_info_context_preamble_1_0,
		fn__check_hlds__mode_errors__mode_error_poly_unify_to_spec_3_0_i2);
MR_def_label(fn__check_hlds__mode_errors__mode_error_poly_unify_to_spec_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_context_2_0,
		fn__check_hlds__mode_errors__mode_error_poly_unify_to_spec_3_0_i3);
MR_def_label(fn__check_hlds__mode_errors__mode_error_poly_unify_to_spec_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_varset_2_0,
		fn__check_hlds__mode_errors__mode_error_poly_unify_to_spec_3_0_i4);
MR_def_label(fn__check_hlds__mode_errors__mode_error_poly_unify_to_spec_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(3,0,54);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(3,0,48);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr2;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0,
		fn__check_hlds__mode_errors__mode_error_poly_unify_to_spec_3_0_i7);
MR_def_label(fn__check_hlds__mode_errors__mode_error_poly_unify_to_spec_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(3,0,23);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0,
		fn__check_hlds__mode_errors__mode_error_poly_unify_to_spec_3_0_i10);
MR_def_label(fn__check_hlds__mode_errors__mode_error_poly_unify_to_spec_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instvarset_2_0,
		fn__check_hlds__mode_errors__mode_error_poly_unify_to_spec_3_0_i11);
MR_def_label(fn__check_hlds__mode_errors__mode_error_poly_unify_to_spec_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		fn__check_hlds__mode_errors__mode_error_poly_unify_to_spec_3_0_i12);
MR_def_label(fn__check_hlds__mode_errors__mode_error_poly_unify_to_spec_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_mode__mercury_expanded_inst_to_string_3_0,
		fn__check_hlds__mode_errors__mode_error_poly_unify_to_spec_3_0_i13);
MR_def_label(fn__check_hlds__mode_errors__mode_error_poly_unify_to_spec_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,53);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,1,58);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,2,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__mode_errors__mode_error_poly_unify_to_spec_3_0_i28);
MR_def_label(fn__check_hlds__mode_errors__mode_error_poly_unify_to_spec_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,1,59);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(5);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_tfield(0, MR_r1, 2) = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_errors_module17)
	MR_init_entry1(fn__check_hlds__mode_errors__mode_error_var_is_live_to_spec_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__mode_errors__mode_error_var_is_live_to_spec_2_0);
	MR_init_label5(fn__check_hlds__mode_errors__mode_error_var_is_live_to_spec_2_0,2,3,4,7,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mode_error_var_is_live_to_spec'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__mode_errors__mode_error_var_is_live_to_spec_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(fn__check_hlds__mode_errors__mode_info_context_preamble_1_0,
		fn__check_hlds__mode_errors__mode_error_var_is_live_to_spec_2_0_i2);
MR_def_label(fn__check_hlds__mode_errors__mode_error_var_is_live_to_spec_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_context_2_0,
		fn__check_hlds__mode_errors__mode_error_var_is_live_to_spec_2_0_i3);
MR_def_label(fn__check_hlds__mode_errors__mode_error_var_is_live_to_spec_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_varset_2_0,
		fn__check_hlds__mode_errors__mode_error_var_is_live_to_spec_2_0_i4);
MR_def_label(fn__check_hlds__mode_errors__mode_error_var_is_live_to_spec_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(3,0,61);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(3,0,62);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr2;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0,
		fn__check_hlds__mode_errors__mode_error_var_is_live_to_spec_2_0_i7);
MR_def_label(fn__check_hlds__mode_errors__mode_error_var_is_live_to_spec_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,60);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,2,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__mode_errors__mode_error_var_is_live_to_spec_2_0_i16);
MR_def_label(fn__check_hlds__mode_errors__mode_error_var_is_live_to_spec_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_tfield(0, MR_r1, 2) = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_errors_module18)
	MR_init_entry1(fn__check_hlds__mode_errors__mode_error_var_has_inst_to_spec_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__mode_errors__mode_error_var_has_inst_to_spec_4_0);
	MR_init_label10(fn__check_hlds__mode_errors__mode_error_var_has_inst_to_spec_4_0,2,3,4,6,9,10,11,12,16,17)
	MR_init_label3(fn__check_hlds__mode_errors__mode_error_var_has_inst_to_spec_4_0,18,19,33)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mode_error_var_has_inst_to_spec'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__mode_errors__mode_error_var_has_inst_to_spec_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_np_call_localret_ent(fn__check_hlds__mode_errors__mode_info_context_preamble_1_0,
		fn__check_hlds__mode_errors__mode_error_var_has_inst_to_spec_4_0_i2);
MR_def_label(fn__check_hlds__mode_errors__mode_error_var_has_inst_to_spec_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_context_2_0,
		fn__check_hlds__mode_errors__mode_error_var_has_inst_to_spec_4_0_i3);
MR_def_label(fn__check_hlds__mode_errors__mode_error_var_has_inst_to_spec_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_varset_2_0,
		fn__check_hlds__mode_errors__mode_error_var_has_inst_to_spec_4_0_i4);
MR_def_label(fn__check_hlds__mode_errors__mode_error_var_has_inst_to_spec_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(3,0,48);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr2;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0,
		fn__check_hlds__mode_errors__mode_error_var_has_inst_to_spec_4_0_i6);
MR_def_label(fn__check_hlds__mode_errors__mode_error_var_has_inst_to_spec_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(3,0,23);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0,
		fn__check_hlds__mode_errors__mode_error_var_has_inst_to_spec_4_0_i9);
MR_def_label(fn__check_hlds__mode_errors__mode_error_var_has_inst_to_spec_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instvarset_2_0,
		fn__check_hlds__mode_errors__mode_error_var_has_inst_to_spec_4_0_i10);
MR_def_label(fn__check_hlds__mode_errors__mode_error_var_has_inst_to_spec_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		fn__check_hlds__mode_errors__mode_error_var_has_inst_to_spec_4_0_i11);
MR_def_label(fn__check_hlds__mode_errors__mode_error_var_has_inst_to_spec_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_mode__mercury_expanded_inst_to_string_3_0,
		fn__check_hlds__mode_errors__mode_error_var_has_inst_to_spec_4_0_i12);
MR_def_label(fn__check_hlds__mode_errors__mode_error_var_has_inst_to_spec_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(3,0,24);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(3,0,25);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0,
		fn__check_hlds__mode_errors__mode_error_var_has_inst_to_spec_4_0_i16);
MR_def_label(fn__check_hlds__mode_errors__mode_error_var_has_inst_to_spec_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instvarset_2_0,
		fn__check_hlds__mode_errors__mode_error_var_has_inst_to_spec_4_0_i17);
MR_def_label(fn__check_hlds__mode_errors__mode_error_var_has_inst_to_spec_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		fn__check_hlds__mode_errors__mode_error_var_has_inst_to_spec_4_0_i18);
MR_def_label(fn__check_hlds__mode_errors__mode_error_var_has_inst_to_spec_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_mode__mercury_expanded_inst_to_string_3_0,
		fn__check_hlds__mode_errors__mode_error_var_has_inst_to_spec_4_0_i19);
MR_def_label(fn__check_hlds__mode_errors__mode_error_var_has_inst_to_spec_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,2);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,2,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__mode_errors__mode_error_var_has_inst_to_spec_4_0_i33);
MR_def_label(fn__check_hlds__mode_errors__mode_error_var_has_inst_to_spec_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(6);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_tfield(0, MR_r1, 2) = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_errors_module19)
	MR_init_entry1(fn__check_hlds__mode_errors__mode_error_implied_mode_to_spec_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__mode_errors__mode_error_implied_mode_to_spec_4_0);
	MR_init_label10(fn__check_hlds__mode_errors__mode_error_implied_mode_to_spec_4_0,2,3,4,7,10,11,12,13,17,18)
	MR_init_label3(fn__check_hlds__mode_errors__mode_error_implied_mode_to_spec_4_0,19,20,37)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mode_error_implied_mode_to_spec'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__mode_errors__mode_error_implied_mode_to_spec_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_np_call_localret_ent(fn__check_hlds__mode_errors__mode_info_context_preamble_1_0,
		fn__check_hlds__mode_errors__mode_error_implied_mode_to_spec_4_0_i2);
MR_def_label(fn__check_hlds__mode_errors__mode_error_implied_mode_to_spec_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_context_2_0,
		fn__check_hlds__mode_errors__mode_error_implied_mode_to_spec_4_0_i3);
MR_def_label(fn__check_hlds__mode_errors__mode_error_implied_mode_to_spec_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_varset_2_0,
		fn__check_hlds__mode_errors__mode_error_implied_mode_to_spec_4_0_i4);
MR_def_label(fn__check_hlds__mode_errors__mode_error_implied_mode_to_spec_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(3,0,64);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(3,0,22);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr2;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0,
		fn__check_hlds__mode_errors__mode_error_implied_mode_to_spec_4_0_i7);
MR_def_label(fn__check_hlds__mode_errors__mode_error_implied_mode_to_spec_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(3,0,23);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0,
		fn__check_hlds__mode_errors__mode_error_implied_mode_to_spec_4_0_i10);
MR_def_label(fn__check_hlds__mode_errors__mode_error_implied_mode_to_spec_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instvarset_2_0,
		fn__check_hlds__mode_errors__mode_error_implied_mode_to_spec_4_0_i11);
MR_def_label(fn__check_hlds__mode_errors__mode_error_implied_mode_to_spec_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		fn__check_hlds__mode_errors__mode_error_implied_mode_to_spec_4_0_i12);
MR_def_label(fn__check_hlds__mode_errors__mode_error_implied_mode_to_spec_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_mode__mercury_expanded_inst_to_string_3_0,
		fn__check_hlds__mode_errors__mode_error_implied_mode_to_spec_4_0_i13);
MR_def_label(fn__check_hlds__mode_errors__mode_error_implied_mode_to_spec_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(3,0,24);
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(3,0,25);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0,
		fn__check_hlds__mode_errors__mode_error_implied_mode_to_spec_4_0_i17);
MR_def_label(fn__check_hlds__mode_errors__mode_error_implied_mode_to_spec_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instvarset_2_0,
		fn__check_hlds__mode_errors__mode_error_implied_mode_to_spec_4_0_i18);
MR_def_label(fn__check_hlds__mode_errors__mode_error_implied_mode_to_spec_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		fn__check_hlds__mode_errors__mode_error_implied_mode_to_spec_4_0_i19);
MR_def_label(fn__check_hlds__mode_errors__mode_error_implied_mode_to_spec_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_mode__mercury_expanded_inst_to_string_3_0,
		fn__check_hlds__mode_errors__mode_error_implied_mode_to_spec_4_0_i20);
MR_def_label(fn__check_hlds__mode_errors__mode_error_implied_mode_to_spec_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,2);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(10);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,9,1);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,2,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__mode_errors__mode_error_implied_mode_to_spec_4_0_i37);
MR_def_label(fn__check_hlds__mode_errors__mode_error_implied_mode_to_spec_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r2, 0) = (MR_Integer) 95;
	MR_tfield(1, MR_r2, 1) = (MR_Integer) 0;
	MR_tfield(1, MR_r2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(6);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = MR_sv(1);
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_tfield(0, MR_r1, 2) = MR_tempr1;
	MR_decr_sp_and_return(12);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0);
MR_decl_entry(fn__hlds__hlds_out__hlds_out_util__var_modes_to_string_5_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
MR_decl_entry(fn__parse_tree__mercury_to_mercury__mercury_type_to_string_3_0);
MR_decl_entry(fn__parse_tree__prog_out__pred_or_func_to_full_str_1_0);

MR_BEGIN_MODULE(check_hlds__mode_errors_module20)
	MR_init_entry1(fn__check_hlds__mode_errors__mode_error_unify_pred_to_spec_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__mode_errors__mode_error_unify_pred_to_spec_5_0);
	MR_init_label10(fn__check_hlds__mode_errors__mode_error_unify_pred_to_spec_5_0,2,3,4,5,6,8,11,12,10,14)
	MR_init_label8(fn__check_hlds__mode_errors__mode_error_unify_pred_to_spec_5_0,15,17,24,40,41,45,46,68)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mode_error_unify_pred_to_spec'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__mode_errors__mode_error_unify_pred_to_spec_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_np_call_localret_ent(fn__check_hlds__mode_errors__mode_info_context_preamble_1_0,
		fn__check_hlds__mode_errors__mode_error_unify_pred_to_spec_5_0_i2);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_pred_to_spec_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_context_2_0,
		fn__check_hlds__mode_errors__mode_error_unify_pred_to_spec_5_0_i3);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_pred_to_spec_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_varset_2_0,
		fn__check_hlds__mode_errors__mode_error_unify_pred_to_spec_5_0_i4);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_pred_to_spec_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instvarset_2_0,
		fn__check_hlds__mode_errors__mode_error_unify_pred_to_spec_5_0_i5);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_pred_to_spec_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		fn__check_hlds__mode_errors__mode_error_unify_pred_to_spec_5_0_i6);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_pred_to_spec_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),1)) {
		MR_GOTO_LAB(fn__check_hlds__mode_errors__mode_error_unify_pred_to_spec_5_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_tempr2 = MR_sv(3);
	MR_r1 = MR_tfield(1, MR_tempr2, 0);
	MR_r2 = MR_tfield(1, MR_tempr2, 1);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_tempr1;
	MR_r5 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0,
		fn__check_hlds__mode_errors__mode_error_unify_pred_to_spec_5_0_i14);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_pred_to_spec_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),2)) {
		MR_GOTO_LAB(fn__check_hlds__mode_errors__mode_error_unify_pred_to_spec_5_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r1 = MR_tfield(2, MR_tempr1, 0);
	MR_r2 = MR_tfield(2, MR_tempr1, 1);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(1);
	MR_r5 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_util__var_modes_to_string_5_0,
		fn__check_hlds__mode_errors__mode_error_unify_pred_to_spec_5_0_i11);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_pred_to_spec_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("] ... )", 7);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__check_hlds__mode_errors__mode_error_unify_pred_to_spec_5_0_i12);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_pred_to_spec_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("lambda([", 8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__check_hlds__mode_errors__mode_error_unify_pred_to_spec_5_0_i14);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_pred_to_spec_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(8);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_tfield(0, MR_sv(3), 0);
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0,
		fn__check_hlds__mode_errors__mode_error_unify_pred_to_spec_5_0_i14);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_pred_to_spec_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_np_call_localret_ent(varset__init_1_0,
		fn__check_hlds__mode_errors__mode_error_unify_pred_to_spec_5_0_i15);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_pred_to_spec_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(3,0,65);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(8);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0,
		fn__check_hlds__mode_errors__mode_error_unify_pred_to_spec_5_0_i17);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_pred_to_spec_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_tempr3 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(3,0,66);
	MR_tempr4 = MR_sv(4);
	MR_sv(4) = MR_tempr2;
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(3,0,5);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(3,0,67);
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(3,0,68);
	MR_r1 = MR_tempr3;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tempr4;
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_type_to_string_3_0,
		fn__check_hlds__mode_errors__mode_error_unify_pred_to_spec_5_0_i24);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_pred_to_spec_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,1,2);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(10);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(9);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(8);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(3,0,69);
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_out__pred_or_func_to_full_str_1_0,
		fn__check_hlds__mode_errors__mode_error_unify_pred_to_spec_5_0_i40);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_pred_to_spec_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("s", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__check_hlds__mode_errors__mode_error_unify_pred_to_spec_5_0_i41);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_pred_to_spec_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_sv(3) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(3,0,70);
	MR_r2 = MR_sv(5);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(3,0,71);
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_out__pred_or_func_to_full_str_1_0,
		fn__check_hlds__mode_errors__mode_error_unify_pred_to_spec_5_0_i45);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_pred_to_spec_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("s", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__check_hlds__mode_errors__mode_error_unify_pred_to_spec_5_0_i46);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_pred_to_spec_5_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,67);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,2,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__mode_errors__mode_error_unify_pred_to_spec_5_0_i68);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_pred_to_spec_5_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(7);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_tfield(0, MR_r1, 2) = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_errors_module21)
	MR_init_entry1(fn__check_hlds__mode_errors__mode_error_unify_var_var_to_spec_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__mode_errors__mode_error_unify_var_var_to_spec_5_0);
	MR_init_label10(fn__check_hlds__mode_errors__mode_error_unify_var_var_to_spec_5_0,2,3,4,6,9,13,16,17,18,19)
	MR_init_label6(fn__check_hlds__mode_errors__mode_error_unify_var_var_to_spec_5_0,23,25,26,27,28,49)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mode_error_unify_var_var_to_spec'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__mode_errors__mode_error_unify_var_var_to_spec_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(18);
	MR_sv(18) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_np_call_localret_ent(fn__check_hlds__mode_errors__mode_info_context_preamble_1_0,
		fn__check_hlds__mode_errors__mode_error_unify_var_var_to_spec_5_0_i2);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_var_var_to_spec_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_context_2_0,
		fn__check_hlds__mode_errors__mode_error_unify_var_var_to_spec_5_0_i3);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_var_var_to_spec_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_varset_2_0,
		fn__check_hlds__mode_errors__mode_error_unify_var_var_to_spec_5_0_i4);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_var_var_to_spec_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(3,0,77);
	MR_sv(15) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(8);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0,
		fn__check_hlds__mode_errors__mode_error_unify_var_var_to_spec_5_0_i6);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_var_var_to_spec_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(10), 2, (MR_Integer) 1);
	MR_tfield(2, MR_sv(10), 0) = MR_r1;
	MR_sv(11) = (MR_Word) MR_TAG_COMMON(3,0,8);
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(8);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0,
		fn__check_hlds__mode_errors__mode_error_unify_var_var_to_spec_5_0_i9);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_var_var_to_spec_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_sv(12) = (MR_Word) MR_TAG_COMMON(3,0,1);
	MR_sv(13) = (MR_Word) MR_TAG_COMMON(3,0,22);
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(8);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0,
		fn__check_hlds__mode_errors__mode_error_unify_var_var_to_spec_5_0_i13);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_var_var_to_spec_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_sv(14) = (MR_Word) MR_TAG_COMMON(3,0,23);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0,
		fn__check_hlds__mode_errors__mode_error_unify_var_var_to_spec_5_0_i16);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_var_var_to_spec_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instvarset_2_0,
		fn__check_hlds__mode_errors__mode_error_unify_var_var_to_spec_5_0_i17);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_var_var_to_spec_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		fn__check_hlds__mode_errors__mode_error_unify_var_var_to_spec_5_0_i18);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_var_var_to_spec_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(17);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_mode__mercury_expanded_inst_to_string_3_0,
		fn__check_hlds__mode_errors__mode_error_unify_var_var_to_spec_5_0_i19);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_var_var_to_spec_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_tempr3 = MR_sv(8);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(3,0,24);
	MR_sv(15) = (MR_Word) MR_TAG_COMMON(3,0,78);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr3;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0,
		fn__check_hlds__mode_errors__mode_error_unify_var_var_to_spec_5_0_i23);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_var_var_to_spec_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0,
		fn__check_hlds__mode_errors__mode_error_unify_var_var_to_spec_5_0_i25);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_var_var_to_spec_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instvarset_2_0,
		fn__check_hlds__mode_errors__mode_error_unify_var_var_to_spec_5_0_i26);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_var_var_to_spec_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		fn__check_hlds__mode_errors__mode_error_unify_var_var_to_spec_5_0_i27);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_var_var_to_spec_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_mode__mercury_expanded_inst_to_string_3_0,
		fn__check_hlds__mode_errors__mode_error_unify_var_var_to_spec_5_0_i28);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_var_var_to_spec_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,2);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr5 = MR_sv(14);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(15);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(13);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(12);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(11);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(10);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr1;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,2,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__mode_errors__mode_error_unify_var_var_to_spec_5_0_i49);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_var_var_to_spec_5_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(7);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_tfield(0, MR_r1, 2) = MR_tempr1;
	MR_decr_sp_and_return(18);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_errors_module22)
	MR_init_entry1(fn__check_hlds__mode_errors__mode_error_unify_var_lambda_to_spec_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__mode_errors__mode_error_unify_var_lambda_to_spec_4_0);
	MR_init_label10(fn__check_hlds__mode_errors__mode_error_unify_var_lambda_to_spec_4_0,2,3,4,6,10,13,14,15,16,20)
	MR_init_label4(fn__check_hlds__mode_errors__mode_error_unify_var_lambda_to_spec_4_0,21,22,23,41)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mode_error_unify_var_lambda_to_spec'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__mode_errors__mode_error_unify_var_lambda_to_spec_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_np_call_localret_ent(fn__check_hlds__mode_errors__mode_info_context_preamble_1_0,
		fn__check_hlds__mode_errors__mode_error_unify_var_lambda_to_spec_4_0_i2);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_var_lambda_to_spec_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_context_2_0,
		fn__check_hlds__mode_errors__mode_error_unify_var_lambda_to_spec_4_0_i3);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_var_lambda_to_spec_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_varset_2_0,
		fn__check_hlds__mode_errors__mode_error_unify_var_lambda_to_spec_4_0_i4);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_var_lambda_to_spec_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(3,0,77);
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(7);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0,
		fn__check_hlds__mode_errors__mode_error_unify_var_lambda_to_spec_4_0_i6);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_var_lambda_to_spec_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_tempr3 = MR_sv(7);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(3,0,79);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(3,0,22);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr3;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0,
		fn__check_hlds__mode_errors__mode_error_unify_var_lambda_to_spec_4_0_i10);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_var_lambda_to_spec_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(3,0,23);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0,
		fn__check_hlds__mode_errors__mode_error_unify_var_lambda_to_spec_4_0_i13);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_var_lambda_to_spec_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instvarset_2_0,
		fn__check_hlds__mode_errors__mode_error_unify_var_lambda_to_spec_4_0_i14);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_var_lambda_to_spec_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		fn__check_hlds__mode_errors__mode_error_unify_var_lambda_to_spec_4_0_i15);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_var_lambda_to_spec_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_mode__mercury_expanded_inst_to_string_3_0,
		fn__check_hlds__mode_errors__mode_error_unify_var_lambda_to_spec_4_0_i16);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_var_lambda_to_spec_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_sv(11) = (MR_Word) MR_TAG_COMMON(3,0,24);
	MR_sv(12) = (MR_Word) MR_TAG_COMMON(3,0,80);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0,
		fn__check_hlds__mode_errors__mode_error_unify_var_lambda_to_spec_4_0_i20);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_var_lambda_to_spec_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instvarset_2_0,
		fn__check_hlds__mode_errors__mode_error_unify_var_lambda_to_spec_4_0_i21);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_var_lambda_to_spec_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		fn__check_hlds__mode_errors__mode_error_unify_var_lambda_to_spec_4_0_i22);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_var_lambda_to_spec_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_mode__mercury_expanded_inst_to_string_3_0,
		fn__check_hlds__mode_errors__mode_error_unify_var_lambda_to_spec_4_0_i23);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_var_lambda_to_spec_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,2);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(12);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(11);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(10);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,2,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__mode_errors__mode_error_unify_var_lambda_to_spec_4_0_i41);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_var_lambda_to_spec_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(6);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_tfield(0, MR_r1, 2) = MR_tempr1;
	MR_decr_sp_and_return(14);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_pred__pred_info_module_1_0);
MR_decl_entry(parse_tree__prog_util__adjust_func_arity_3_1);

MR_BEGIN_MODULE(check_hlds__mode_errors_module23)
	MR_init_entry1(fn__check_hlds__mode_errors__mode_error_unify_var_multimode_pred_to_spec_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__mode_errors__mode_error_unify_var_multimode_pred_to_spec_3_0);
	MR_init_label10(fn__check_hlds__mode_errors__mode_error_unify_var_multimode_pred_to_spec_3_0,2,3,4,5,6,7,8,9,11,12)
	MR_init_label2(fn__check_hlds__mode_errors__mode_error_unify_var_multimode_pred_to_spec_3_0,14,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mode_error_unify_var_multimode_pred_to_spec'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__mode_errors__mode_error_unify_var_multimode_pred_to_spec_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(fn__check_hlds__mode_errors__mode_info_context_preamble_1_0,
		fn__check_hlds__mode_errors__mode_error_unify_var_multimode_pred_to_spec_3_0_i2);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_var_multimode_pred_to_spec_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_context_2_0,
		fn__check_hlds__mode_errors__mode_error_unify_var_multimode_pred_to_spec_3_0_i3);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_var_multimode_pred_to_spec_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_varset_2_0,
		fn__check_hlds__mode_errors__mode_error_unify_var_multimode_pred_to_spec_3_0_i4);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_var_multimode_pred_to_spec_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		fn__check_hlds__mode_errors__mode_error_unify_var_multimode_pred_to_spec_3_0_i5);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_var_multimode_pred_to_spec_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		fn__check_hlds__mode_errors__mode_error_unify_var_multimode_pred_to_spec_3_0_i6);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_var_multimode_pred_to_spec_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		fn__check_hlds__mode_errors__mode_error_unify_var_multimode_pred_to_spec_3_0_i7);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_var_multimode_pred_to_spec_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_module_1_0,
		fn__check_hlds__mode_errors__mode_error_unify_var_multimode_pred_to_spec_3_0_i8);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_var_multimode_pred_to_spec_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		fn__check_hlds__mode_errors__mode_error_unify_var_multimode_pred_to_spec_3_0_i9);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_var_multimode_pred_to_spec_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(7);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_orig_arity_1_0,
		fn__check_hlds__mode_errors__mode_error_unify_var_multimode_pred_to_spec_3_0_i11);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_var_multimode_pred_to_spec_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_util__adjust_func_arity_3_1,
		fn__check_hlds__mode_errors__mode_error_unify_var_multimode_pred_to_spec_3_0_i12);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_var_multimode_pred_to_spec_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(3,0,77);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0,
		fn__check_hlds__mode_errors__mode_error_unify_var_multimode_pred_to_spec_3_0_i14);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_var_multimode_pred_to_spec_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr3, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_TAG_COMMON(1,1,2);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,0,81);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr5, 1) = MR_tempr3;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,2,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__mode_errors__mode_error_unify_var_multimode_pred_to_spec_3_0_i29);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_var_multimode_pred_to_spec_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(5);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_tfield(0, MR_r1, 2) = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_errors_module24)
	MR_init_entry1(fn__check_hlds__mode_errors__mode_error_unify_var_multimode_pred_undetermined_to_spec_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__mode_errors__mode_error_unify_var_multimode_pred_undetermined_to_spec_3_0);
	MR_init_label10(fn__check_hlds__mode_errors__mode_error_unify_var_multimode_pred_undetermined_to_spec_3_0,2,3,4,5,6,7,8,9,11,12)
	MR_init_label2(fn__check_hlds__mode_errors__mode_error_unify_var_multimode_pred_undetermined_to_spec_3_0,14,31)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mode_error_unify_var_multimode_pred_undetermined_to_spec'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__mode_errors__mode_error_unify_var_multimode_pred_undetermined_to_spec_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(fn__check_hlds__mode_errors__mode_info_context_preamble_1_0,
		fn__check_hlds__mode_errors__mode_error_unify_var_multimode_pred_undetermined_to_spec_3_0_i2);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_var_multimode_pred_undetermined_to_spec_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_context_2_0,
		fn__check_hlds__mode_errors__mode_error_unify_var_multimode_pred_undetermined_to_spec_3_0_i3);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_var_multimode_pred_undetermined_to_spec_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_varset_2_0,
		fn__check_hlds__mode_errors__mode_error_unify_var_multimode_pred_undetermined_to_spec_3_0_i4);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_var_multimode_pred_undetermined_to_spec_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		fn__check_hlds__mode_errors__mode_error_unify_var_multimode_pred_undetermined_to_spec_3_0_i5);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_var_multimode_pred_undetermined_to_spec_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		fn__check_hlds__mode_errors__mode_error_unify_var_multimode_pred_undetermined_to_spec_3_0_i6);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_var_multimode_pred_undetermined_to_spec_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		fn__check_hlds__mode_errors__mode_error_unify_var_multimode_pred_undetermined_to_spec_3_0_i7);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_var_multimode_pred_undetermined_to_spec_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_module_1_0,
		fn__check_hlds__mode_errors__mode_error_unify_var_multimode_pred_undetermined_to_spec_3_0_i8);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_var_multimode_pred_undetermined_to_spec_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		fn__check_hlds__mode_errors__mode_error_unify_var_multimode_pred_undetermined_to_spec_3_0_i9);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_var_multimode_pred_undetermined_to_spec_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(7);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_orig_arity_1_0,
		fn__check_hlds__mode_errors__mode_error_unify_var_multimode_pred_undetermined_to_spec_3_0_i11);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_var_multimode_pred_undetermined_to_spec_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_util__adjust_func_arity_3_1,
		fn__check_hlds__mode_errors__mode_error_unify_var_multimode_pred_undetermined_to_spec_3_0_i12);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_var_multimode_pred_undetermined_to_spec_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(3,0,65);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0,
		fn__check_hlds__mode_errors__mode_error_unify_var_multimode_pred_undetermined_to_spec_3_0_i14);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_var_multimode_pred_undetermined_to_spec_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr3, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_TAG_COMMON(1,1,68);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,0,83);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,0,82);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr5, 1) = MR_tempr2;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,2,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__mode_errors__mode_error_unify_var_multimode_pred_undetermined_to_spec_3_0_i31);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_var_multimode_pred_undetermined_to_spec_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(5);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_tfield(0, MR_r1, 2) = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__mercury_to_mercury__mercury_cons_id_to_string_2_0);

MR_BEGIN_MODULE(check_hlds__mode_errors_module25)
	MR_init_entry1(fn__check_hlds__mode_errors__mode_error_unify_var_functor_to_spec_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__mode_errors__mode_error_unify_var_functor_to_spec_6_0);
	MR_init_label10(fn__check_hlds__mode_errors__mode_error_unify_var_functor_to_spec_6_0,2,3,4,5,6,8,14,17,35,37)
	MR_init_label6(fn__check_hlds__mode_errors__mode_error_unify_var_functor_to_spec_6_0,53,56,57,36,59,60)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mode_error_unify_var_functor_to_spec'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__mode_errors__mode_error_unify_var_functor_to_spec_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_np_call_localret_ent(fn__check_hlds__mode_errors__mode_info_context_preamble_1_0,
		fn__check_hlds__mode_errors__mode_error_unify_var_functor_to_spec_6_0_i2);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_var_functor_to_spec_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_context_2_0,
		fn__check_hlds__mode_errors__mode_error_unify_var_functor_to_spec_6_0_i3);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_var_functor_to_spec_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_varset_2_0,
		fn__check_hlds__mode_errors__mode_error_unify_var_functor_to_spec_6_0_i4);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_var_functor_to_spec_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		fn__check_hlds__mode_errors__mode_error_unify_var_functor_to_spec_6_0_i5);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_var_functor_to_spec_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_tempr1;
	MR_r5 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0,
		fn__check_hlds__mode_errors__mode_error_unify_var_functor_to_spec_6_0_i6);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_var_functor_to_spec_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_sv(11) = (MR_Word) MR_TAG_COMMON(3,0,77);
	MR_sv(12) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(9);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0,
		fn__check_hlds__mode_errors__mode_error_unify_var_functor_to_spec_6_0_i8);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_var_functor_to_spec_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(10);
	MR_tempr3 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_tempr4 = MR_sv(9);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(3,0,8);
	MR_sv(10) = MR_tempr2;
	MR_sv(12) = (MR_Word) MR_TAG_COMMON(3,0,1);
	MR_sv(13) = (MR_Word) MR_TAG_COMMON(3,0,22);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr4;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_tempr3;
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0,
		fn__check_hlds__mode_errors__mode_error_unify_var_functor_to_spec_6_0_i14);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_var_functor_to_spec_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_sv(5);
	MR_sv(5) = MR_tempr1;
	MR_sv(14) = (MR_Word) MR_TAG_COMMON(3,0,23);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__check_hlds__mode_errors__inst_to_string_2_0,
		fn__check_hlds__mode_errors__mode_error_unify_var_functor_to_spec_6_0_i17);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_var_functor_to_spec_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tempr6 = MR_sv(10);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr6;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,0,85);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,0,24);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(14);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_sv(13);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_sv(12);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr6;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_sv(2) = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_sv(11);
	MR_tfield(1, MR_tempr5, 1) = MR_tempr3;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_cons_id_to_string_2_0,
		fn__check_hlds__mode_errors__mode_error_unify_var_functor_to_spec_6_0_i35);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_var_functor_to_spec_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(fn__check_hlds__mode_errors__mode_error_unify_var_functor_to_spec_6_0_i37);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,2);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(14);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r2 = MR_sv(2);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,2,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_GOTO_LAB(fn__check_hlds__mode_errors__mode_error_unify_var_functor_to_spec_6_0_i36);
	}
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_var_functor_to_spec_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,69);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,0,86);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(14);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tempr2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__check_hlds__mode_errors__inst_list_to_sep_lines_2_0,
		fn__check_hlds__mode_errors__mode_error_unify_var_functor_to_spec_6_0_i53);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_var_functor_to_spec_6_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,70);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__mode_errors__mode_error_unify_var_functor_to_spec_6_0_i56);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_var_functor_to_spec_6_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__mode_errors__mode_error_unify_var_functor_to_spec_6_0_i57);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_var_functor_to_spec_6_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_r1;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,2,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_var_functor_to_spec_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__mode_errors__mode_error_unify_var_functor_to_spec_6_0_i59);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_var_functor_to_spec_6_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__mode_errors__mode_error_unify_var_functor_to_spec_6_0_i60);
MR_def_label(fn__check_hlds__mode_errors__mode_error_unify_var_functor_to_spec_6_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(8);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_tfield(0, MR_r1, 2) = MR_tempr1;
	MR_decr_sp_and_return(15);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_errors_module26)
	MR_init_entry1(fn__check_hlds__mode_errors__mode_error_final_inst_to_spec_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__mode_errors__mode_error_final_inst_to_spec_6_0);
	MR_init_label10(fn__check_hlds__mode_errors__mode_error_final_inst_to_spec_6_0,2,3,4,6,8,11,15,18,19,20)
	MR_init_label6(fn__check_hlds__mode_errors__mode_error_final_inst_to_spec_6_0,21,25,26,27,28,46)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mode_error_final_inst_to_spec'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__mode_errors__mode_error_final_inst_to_spec_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_np_call_localret_ent(fn__check_hlds__mode_errors__mode_info_context_preamble_1_0,
		fn__check_hlds__mode_errors__mode_error_final_inst_to_spec_6_0_i2);
MR_def_label(fn__check_hlds__mode_errors__mode_error_final_inst_to_spec_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_context_2_0,
		fn__check_hlds__mode_errors__mode_error_final_inst_to_spec_6_0_i3);
MR_def_label(fn__check_hlds__mode_errors__mode_error_final_inst_to_spec_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_varset_2_0,
		fn__check_hlds__mode_errors__mode_error_final_inst_to_spec_6_0_i4);
MR_def_label(fn__check_hlds__mode_errors__mode_error_final_inst_to_spec_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),1)) {
		MR_GOTO_LAB(fn__check_hlds__mode_errors__mode_error_final_inst_to_spec_6_0_i6);
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_sv(6) = (MR_Word) MR_string_const("did not get sufficiently instantiated.", 38);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(3,0,88);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__check_hlds__mode_errors__mode_error_final_inst_to_spec_6_0_i11);
MR_def_label(fn__check_hlds__mode_errors__mode_error_final_inst_to_spec_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO_LAB(fn__check_hlds__mode_errors__mode_error_final_inst_to_spec_6_0_i8);
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_sv(6) = (MR_Word) MR_string_const(" became too instantiated.", 25);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(3,0,88);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__check_hlds__mode_errors__mode_error_final_inst_to_spec_6_0_i11);
MR_def_label(fn__check_hlds__mode_errors__mode_error_final_inst_to_spec_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_sv(6) = (MR_Word) MR_string_const("had the wrong instantiatedness.", 31);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(3,0,88);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__check_hlds__mode_errors__mode_error_final_inst_to_spec_6_0_i11);
MR_def_label(fn__check_hlds__mode_errors__mode_error_final_inst_to_spec_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(6);
	MR_tempr3 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_tempr4 = MR_sv(3);
	MR_sv(3) = MR_tempr2;
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(3,0,89);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr3;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_tempr4;
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0,
		fn__check_hlds__mode_errors__mode_error_final_inst_to_spec_6_0_i15);
MR_def_label(fn__check_hlds__mode_errors__mode_error_final_inst_to_spec_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(3,0,90);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0,
		fn__check_hlds__mode_errors__mode_error_final_inst_to_spec_6_0_i18);
MR_def_label(fn__check_hlds__mode_errors__mode_error_final_inst_to_spec_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instvarset_2_0,
		fn__check_hlds__mode_errors__mode_error_final_inst_to_spec_6_0_i19);
MR_def_label(fn__check_hlds__mode_errors__mode_error_final_inst_to_spec_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		fn__check_hlds__mode_errors__mode_error_final_inst_to_spec_6_0_i20);
MR_def_label(fn__check_hlds__mode_errors__mode_error_final_inst_to_spec_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_mode__mercury_expanded_inst_to_string_3_0,
		fn__check_hlds__mode_errors__mode_error_final_inst_to_spec_6_0_i21);
MR_def_label(fn__check_hlds__mode_errors__mode_error_final_inst_to_spec_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r2;
	MR_sv(11) = (MR_Word) MR_TAG_COMMON(3,0,24);
	MR_sv(12) = (MR_Word) MR_TAG_COMMON(3,0,91);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0,
		fn__check_hlds__mode_errors__mode_error_final_inst_to_spec_6_0_i25);
MR_def_label(fn__check_hlds__mode_errors__mode_error_final_inst_to_spec_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instvarset_2_0,
		fn__check_hlds__mode_errors__mode_error_final_inst_to_spec_6_0_i26);
MR_def_label(fn__check_hlds__mode_errors__mode_error_final_inst_to_spec_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		fn__check_hlds__mode_errors__mode_error_final_inst_to_spec_6_0_i27);
MR_def_label(fn__check_hlds__mode_errors__mode_error_final_inst_to_spec_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_mode__mercury_expanded_inst_to_string_3_0,
		fn__check_hlds__mode_errors__mode_error_final_inst_to_spec_6_0_i28);
MR_def_label(fn__check_hlds__mode_errors__mode_error_final_inst_to_spec_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,2);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(12);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(11);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(10);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,2,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__mode_errors__mode_error_final_inst_to_spec_6_0_i46);
MR_def_label(fn__check_hlds__mode_errors__mode_error_final_inst_to_spec_6_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(8);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_tfield(0, MR_r1, 2) = MR_tempr1;
	MR_decr_sp_and_return(14);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_errors_module27)
	MR_init_entry1(fn__check_hlds__mode_errors__purity_error_should_be_in_promise_purity_scope_to_spec_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__mode_errors__purity_error_should_be_in_promise_purity_scope_to_spec_3_0);
	MR_init_label7(fn__check_hlds__mode_errors__purity_error_should_be_in_promise_purity_scope_to_spec_3_0,2,3,4,10,6,22,31)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'purity_error_should_be_in_promise_purity_scope_to_spec'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__mode_errors__purity_error_should_be_in_promise_purity_scope_to_spec_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__check_hlds__mode_errors__mode_info_context_preamble_1_0,
		fn__check_hlds__mode_errors__purity_error_should_be_in_promise_purity_scope_to_spec_3_0_i2);
MR_def_label(fn__check_hlds__mode_errors__purity_error_should_be_in_promise_purity_scope_to_spec_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_context_2_0,
		fn__check_hlds__mode_errors__purity_error_should_be_in_promise_purity_scope_to_spec_3_0_i3);
MR_def_label(fn__check_hlds__mode_errors__purity_error_should_be_in_promise_purity_scope_to_spec_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_varset_2_0,
		fn__check_hlds__mode_errors__purity_error_should_be_in_promise_purity_scope_to_spec_3_0_i4);
MR_def_label(fn__check_hlds__mode_errors__purity_error_should_be_in_promise_purity_scope_to_spec_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(fn__check_hlds__mode_errors__purity_error_should_be_in_promise_purity_scope_to_spec_3_0_i6);
	}
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(3,0,92);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(3,0,93);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(3,0,94);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr2;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0,
		fn__check_hlds__mode_errors__purity_error_should_be_in_promise_purity_scope_to_spec_3_0_i10);
MR_def_label(fn__check_hlds__mode_errors__purity_error_should_be_in_promise_purity_scope_to_spec_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,71);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r2 = MR_sv(4);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,2,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__mode_errors__purity_error_should_be_in_promise_purity_scope_to_spec_3_0_i31);
MR_def_label(fn__check_hlds__mode_errors__purity_error_should_be_in_promise_purity_scope_to_spec_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(3,0,96);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(3,0,93);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(3,0,94);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr2;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0,
		fn__check_hlds__mode_errors__purity_error_should_be_in_promise_purity_scope_to_spec_3_0_i22);
MR_def_label(fn__check_hlds__mode_errors__purity_error_should_be_in_promise_purity_scope_to_spec_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,72);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r2 = MR_sv(4);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,2,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__mode_errors__purity_error_should_be_in_promise_purity_scope_to_spec_3_0_i31);
MR_def_label(fn__check_hlds__mode_errors__purity_error_should_be_in_promise_purity_scope_to_spec_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_tfield(0, MR_r1, 2) = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_errors_module28)
	MR_init_entry1(fn__check_hlds__mode_errors__purity_error_lambda_should_be_any_to_spec_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__mode_errors__purity_error_lambda_should_be_any_to_spec_2_0);
	MR_init_label5(fn__check_hlds__mode_errors__purity_error_lambda_should_be_any_to_spec_2_0,2,3,4,7,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'purity_error_lambda_should_be_any_to_spec'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__mode_errors__purity_error_lambda_should_be_any_to_spec_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(fn__check_hlds__mode_errors__mode_info_context_preamble_1_0,
		fn__check_hlds__mode_errors__purity_error_lambda_should_be_any_to_spec_2_0_i2);
MR_def_label(fn__check_hlds__mode_errors__purity_error_lambda_should_be_any_to_spec_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_context_2_0,
		fn__check_hlds__mode_errors__purity_error_lambda_should_be_any_to_spec_2_0_i3);
MR_def_label(fn__check_hlds__mode_errors__purity_error_lambda_should_be_any_to_spec_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_varset_2_0,
		fn__check_hlds__mode_errors__purity_error_lambda_should_be_any_to_spec_2_0_i4);
MR_def_label(fn__check_hlds__mode_errors__purity_error_lambda_should_be_any_to_spec_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(3,0,98);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(3,0,99);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr2;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_vars_to_string_3_0,
		fn__check_hlds__mode_errors__purity_error_lambda_should_be_any_to_spec_2_0_i7);
MR_def_label(fn__check_hlds__mode_errors__purity_error_lambda_should_be_any_to_spec_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,2);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__mode_errors__purity_error_lambda_should_be_any_to_spec_2_0_i15);
MR_def_label(fn__check_hlds__mode_errors__purity_error_lambda_should_be_any_to_spec_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,1,79);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_TAG_COMMON(1,2,0);
	MR_tfield(0, MR_r1, 2) = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_errors_module29)
	MR_init_entry1(fn__check_hlds__mode_errors__mode_error_to_spec_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__mode_errors__mode_error_to_spec_2_0);
	MR_init_label10(fn__check_hlds__mode_errors__mode_error_to_spec_2_0,4,5,7,3,13,15,17,19,21,23)
	MR_init_label10(fn__check_hlds__mode_errors__mode_error_to_spec_2_0,25,27,29,31,33,35,37,39,41,43)
	MR_init_label4(fn__check_hlds__mode_errors__mode_error_to_spec_2_0,45,47,49,51)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mode_error_to_spec'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__mode_errors__mode_error_to_spec_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__check_hlds__mode_errors__mode_error_to_spec_2_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__check_hlds__mode_errors__mode_info_context_preamble_1_0,
		fn__check_hlds__mode_errors__mode_error_to_spec_2_0_i4);
MR_def_label(fn__check_hlds__mode_errors__mode_error_to_spec_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_context_2_0,
		fn__check_hlds__mode_errors__mode_error_to_spec_2_0_i5);
MR_def_label(fn__check_hlds__mode_errors__mode_error_to_spec_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,2,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,80);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__mode_errors__mode_error_to_spec_2_0_i7);
MR_def_label(fn__check_hlds__mode_errors__mode_error_to_spec_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_tfield(0, MR_r1, 2) = MR_tempr2;
	MR_decr_sp_and_return(3);
	}
MR_def_label(fn__check_hlds__mode_errors__mode_error_to_spec_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(fn__check_hlds__mode_errors__mode_error_to_spec_2_0_i13);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_r3 = MR_tfield(1, MR_tempr1, 1);
	MR_np_tailcall_ent(fn__check_hlds__mode_errors__mode_error_disj_to_spec_3_0);
	}
MR_def_label(fn__check_hlds__mode_errors__mode_error_to_spec_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(fn__check_hlds__mode_errors__mode_error_to_spec_2_0_i15);
	}
	MR_r2 = MR_tfield(2, MR_r2, 0);
	MR_np_tailcall_ent(fn__check_hlds__mode_errors__mode_error_par_conj_to_spec_2_0);
MR_def_label(fn__check_hlds__mode_errors__mode_error_to_spec_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,8)) {
		MR_GOTO_LAB(fn__check_hlds__mode_errors__mode_error_to_spec_2_0_i17);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_r3 = MR_tfield(3, MR_tempr1, 2);
	MR_r4 = MR_tfield(3, MR_tempr1, 3);
	MR_r5 = MR_tfield(3, MR_tempr1, 4);
	MR_np_tailcall_ent(fn__check_hlds__mode_errors__mode_error_bind_var_to_spec_5_0);
	}
MR_def_label(fn__check_hlds__mode_errors__mode_error_to_spec_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,15)) {
		MR_GOTO_LAB(fn__check_hlds__mode_errors__mode_error_to_spec_2_0_i19);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_r3 = MR_tfield(3, MR_tempr1, 2);
	MR_np_tailcall_ent(fn__check_hlds__mode_errors__mode_error_conj_to_spec_3_0);
	}
MR_def_label(fn__check_hlds__mode_errors__mode_error_to_spec_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,16)) {
		MR_GOTO_LAB(fn__check_hlds__mode_errors__mode_error_to_spec_2_0_i21);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_r3 = MR_tfield(3, MR_tempr1, 2);
	MR_r4 = MR_tfield(3, MR_tempr1, 3);
	MR_r5 = MR_tfield(3, MR_tempr1, 4);
	MR_r6 = MR_tfield(3, MR_tempr1, 5);
	MR_np_tailcall_ent(fn__check_hlds__mode_errors__mode_error_final_inst_to_spec_6_0);
	}
MR_def_label(fn__check_hlds__mode_errors__mode_error_to_spec_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(fn__check_hlds__mode_errors__mode_error_to_spec_2_0_i23);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_r3 = MR_tfield(3, MR_tempr1, 2);
	MR_r4 = MR_tfield(3, MR_tempr1, 3);
	MR_r5 = MR_tfield(3, MR_tempr1, 4);
	MR_np_tailcall_ent(fn__check_hlds__mode_errors__mode_error_higher_order_pred_var_to_spec_5_0);
	}
MR_def_label(fn__check_hlds__mode_errors__mode_error_to_spec_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,5)) {
		MR_GOTO_LAB(fn__check_hlds__mode_errors__mode_error_to_spec_2_0_i25);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_r3 = MR_tfield(3, MR_tempr1, 2);
	MR_r4 = MR_tfield(3, MR_tempr1, 3);
	MR_np_tailcall_ent(fn__check_hlds__mode_errors__mode_error_implied_mode_to_spec_4_0);
	}
MR_def_label(fn__check_hlds__mode_errors__mode_error_to_spec_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,7)) {
		MR_GOTO_LAB(fn__check_hlds__mode_errors__mode_error_to_spec_2_0_i27);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_r3 = MR_tfield(3, MR_tempr1, 2);
	MR_r4 = MR_tfield(3, MR_tempr1, 3);
	MR_r5 = MR_tfield(3, MR_tempr1, 4);
	MR_r6 = MR_tfield(3, MR_tempr1, 5);
	MR_np_tailcall_ent(fn__check_hlds__mode_errors__mode_error_in_callee_to_spec_6_0);
	}
MR_def_label(fn__check_hlds__mode_errors__mode_error_to_spec_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,6)) {
		MR_GOTO_LAB(fn__check_hlds__mode_errors__mode_error_to_spec_2_0_i29);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_r3 = MR_tfield(3, MR_tempr1, 2);
	MR_np_tailcall_ent(fn__check_hlds__mode_errors__mode_error_no_matching_mode_to_spec_3_0);
	}
MR_def_label(fn__check_hlds__mode_errors__mode_error_to_spec_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,9)) {
		MR_GOTO_LAB(fn__check_hlds__mode_errors__mode_error_to_spec_2_0_i31);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_r3 = MR_tfield(3, MR_tempr1, 2);
	MR_np_tailcall_ent(fn__check_hlds__mode_errors__mode_error_non_local_lambda_var_to_spec_3_0);
	}
MR_def_label(fn__check_hlds__mode_errors__mode_error_to_spec_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(fn__check_hlds__mode_errors__mode_error_to_spec_2_0_i33);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_r3 = MR_tfield(3, MR_tempr1, 2);
	MR_np_tailcall_ent(fn__check_hlds__mode_errors__mode_error_poly_unify_to_spec_3_0);
	}
MR_def_label(fn__check_hlds__mode_errors__mode_error_to_spec_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,4)) {
		MR_GOTO_LAB(fn__check_hlds__mode_errors__mode_error_to_spec_2_0_i35);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_r3 = MR_tfield(3, MR_tempr1, 2);
	MR_r4 = MR_tfield(3, MR_tempr1, 3);
	MR_r5 = MR_tfield(3, MR_tempr1, 4);
	MR_np_tailcall_ent(fn__check_hlds__mode_errors__mode_error_unify_pred_to_spec_5_0);
	}
MR_def_label(fn__check_hlds__mode_errors__mode_error_to_spec_2_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,11)) {
		MR_GOTO_LAB(fn__check_hlds__mode_errors__mode_error_to_spec_2_0_i37);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_r3 = MR_tfield(3, MR_tempr1, 2);
	MR_r4 = MR_tfield(3, MR_tempr1, 3);
	MR_r5 = MR_tfield(3, MR_tempr1, 4);
	MR_r6 = MR_tfield(3, MR_tempr1, 5);
	MR_np_tailcall_ent(fn__check_hlds__mode_errors__mode_error_unify_var_functor_to_spec_6_0);
	}
MR_def_label(fn__check_hlds__mode_errors__mode_error_to_spec_2_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,12)) {
		MR_GOTO_LAB(fn__check_hlds__mode_errors__mode_error_to_spec_2_0_i39);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_r3 = MR_tfield(3, MR_tempr1, 2);
	MR_r4 = MR_tfield(3, MR_tempr1, 3);
	MR_np_tailcall_ent(fn__check_hlds__mode_errors__mode_error_unify_var_lambda_to_spec_4_0);
	}
MR_def_label(fn__check_hlds__mode_errors__mode_error_to_spec_2_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,13)) {
		MR_GOTO_LAB(fn__check_hlds__mode_errors__mode_error_to_spec_2_0_i41);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_r3 = MR_tfield(3, MR_tempr1, 2);
	MR_np_tailcall_ent(fn__check_hlds__mode_errors__mode_error_unify_var_multimode_pred_to_spec_3_0);
	}
MR_def_label(fn__check_hlds__mode_errors__mode_error_to_spec_2_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,14)) {
		MR_GOTO_LAB(fn__check_hlds__mode_errors__mode_error_to_spec_2_0_i43);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_r3 = MR_tfield(3, MR_tempr1, 2);
	MR_np_tailcall_ent(fn__check_hlds__mode_errors__mode_error_unify_var_multimode_pred_undetermined_to_spec_3_0);
	}
MR_def_label(fn__check_hlds__mode_errors__mode_error_to_spec_2_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,10)) {
		MR_GOTO_LAB(fn__check_hlds__mode_errors__mode_error_to_spec_2_0_i45);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_r3 = MR_tfield(3, MR_tempr1, 2);
	MR_r4 = MR_tfield(3, MR_tempr1, 3);
	MR_r5 = MR_tfield(3, MR_tempr1, 4);
	MR_np_tailcall_ent(fn__check_hlds__mode_errors__mode_error_unify_var_var_to_spec_5_0);
	}
MR_def_label(fn__check_hlds__mode_errors__mode_error_to_spec_2_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,3)) {
		MR_GOTO_LAB(fn__check_hlds__mode_errors__mode_error_to_spec_2_0_i47);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_r3 = MR_tfield(3, MR_tempr1, 2);
	MR_r4 = MR_tfield(3, MR_tempr1, 3);
	MR_np_tailcall_ent(fn__check_hlds__mode_errors__mode_error_var_has_inst_to_spec_4_0);
	}
MR_def_label(fn__check_hlds__mode_errors__mode_error_to_spec_2_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,2)) {
		MR_GOTO_LAB(fn__check_hlds__mode_errors__mode_error_to_spec_2_0_i49);
	}
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_tailcall_ent(fn__check_hlds__mode_errors__mode_error_var_is_live_to_spec_2_0);
MR_def_label(fn__check_hlds__mode_errors__mode_error_to_spec_2_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,18)) {
		MR_GOTO_LAB(fn__check_hlds__mode_errors__mode_error_to_spec_2_0_i51);
	}
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_tailcall_ent(fn__check_hlds__mode_errors__purity_error_lambda_should_be_any_to_spec_2_0);
MR_def_label(fn__check_hlds__mode_errors__mode_error_to_spec_2_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tfield(3, MR_tempr2, 2);
	MR_np_tailcall_ent(fn__check_hlds__mode_errors__purity_error_should_be_in_promise_purity_scope_to_spec_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__filter_4_0);
MR_decl_entry(fn__list__length_1_0);
MR_decl_entry(fn__list__condense_1_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_context_1_0);

MR_BEGIN_MODULE(check_hlds__mode_errors_module30)
	MR_init_entry1(fn__check_hlds__mode_errors__mode_error_conj_to_spec_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__mode_errors__mode_error_conj_to_spec_3_0);
	MR_init_label10(fn__check_hlds__mode_errors__mode_error_conj_to_spec_3_0,2,6,9,10,11,12,19,18,16,25)
	MR_init_label10(fn__check_hlds__mode_errors__mode_error_conj_to_spec_3_0,15,14,31,33,34,42,49,50,51,52)
	MR_init_label6(fn__check_hlds__mode_errors__mode_error_conj_to_spec_3_0,4,3,55,57,67,83)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mode_error_conj_to_spec'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__mode_errors__mode_error_conj_to_spec_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_context_2_0,
		fn__check_hlds__mode_errors__mode_error_conj_to_spec_3_0_i2);
MR_def_label(fn__check_hlds__mode_errors__mode_error_conj_to_spec_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(fn__check_hlds__mode_errors__mode_error_conj_to_spec_3_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(2);
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__check_hlds__mode_errors__mode_error_conj_to_spec_3_0_i6);
	}
	MR_sv(4) = MR_r1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(fn__check_hlds__mode_errors__mode_error_conjunct_to_msgs_3_0,
		fn__check_hlds__mode_errors__mode_error_conj_to_spec_3_0_i52);
MR_def_label(fn__check_hlds__mode_errors__mode_error_conj_to_spec_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_errors, delayed_goal);
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,8,1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(list__filter_4_0,
		fn__check_hlds__mode_errors__mode_error_conj_to_spec_3_0_i9);
MR_def_label(fn__check_hlds__mode_errors__mode_error_conj_to_spec_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		fn__check_hlds__mode_errors__mode_error_conj_to_spec_3_0_i10);
MR_def_label(fn__check_hlds__mode_errors__mode_error_conj_to_spec_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		fn__check_hlds__mode_errors__mode_error_conj_to_spec_3_0_i11);
MR_def_label(fn__check_hlds__mode_errors__mode_error_conj_to_spec_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 46;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		fn__check_hlds__mode_errors__mode_error_conj_to_spec_3_0_i12);
MR_def_label(fn__check_hlds__mode_errors__mode_error_conj_to_spec_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__check_hlds__mode_errors__mode_error_conj_to_spec_3_0_i14);
	}
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(fn__check_hlds__mode_errors__mode_error_conj_to_spec_3_0_i16);
	}
	if (MR_LTAGS_TEST(MR_sv(6),0,0)) {
		MR_GOTO_LAB(fn__check_hlds__mode_errors__mode_error_conj_to_spec_3_0_i18);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tfield(1, MR_sv(6), 0);
	MR_np_call_localret_ent(fn__check_hlds__mode_errors__mode_error_conjunct_to_msgs_3_0,
		fn__check_hlds__mode_errors__mode_error_conj_to_spec_3_0_i19);
MR_def_label(fn__check_hlds__mode_errors__mode_error_conj_to_spec_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,1,81);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_msg);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__mode_errors__mode_error_conj_to_spec_3_0_i52);
MR_def_label(fn__check_hlds__mode_errors__mode_error_conj_to_spec_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.mode_errors", 22);
	MR_r2 = (MR_Word) MR_string_const("function \140check_hlds.mode_errors.mode_error_conj_to_spec\'/3", 59);
	MR_r3 = (MR_Word) MR_string_const("no errors of any kind", 21);
	MR_np_call_localret_ent(require__unexpected_3_0,
		fn__check_hlds__mode_errors__mode_error_conj_to_spec_3_0_i15);
MR_def_label(fn__check_hlds__mode_errors__mode_error_conj_to_spec_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tfield(1, MR_sv(5), 0);
	MR_np_call_localret_ent(fn__check_hlds__mode_errors__mode_error_conjunct_to_msgs_3_0,
		fn__check_hlds__mode_errors__mode_error_conj_to_spec_3_0_i25);
MR_def_label(fn__check_hlds__mode_errors__mode_error_conj_to_spec_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,1,81);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_msg);
	}
MR_def_label(fn__check_hlds__mode_errors__mode_error_conj_to_spec_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__mode_errors__mode_error_conj_to_spec_3_0_i52);
MR_def_label(fn__check_hlds__mode_errors__mode_error_conj_to_spec_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__check_hlds__mode_errors__mode_info_context_preamble_1_0,
		fn__check_hlds__mode_errors__mode_error_conj_to_spec_3_0_i31);
MR_def_label(fn__check_hlds__mode_errors__mode_error_conj_to_spec_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(3,0,103);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__length_1_0,
		fn__check_hlds__mode_errors__mode_error_conj_to_spec_3_0_i33);
MR_def_label(fn__check_hlds__mode_errors__mode_error_conj_to_spec_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__check_hlds__mode_errors__mode_error_conj_to_spec_3_0_i34);
MR_def_label(fn__check_hlds__mode_errors__mode_error_conj_to_spec_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,83);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__mode_errors__mode_error_conj_to_spec_3_0_i42);
MR_def_label(fn__check_hlds__mode_errors__mode_error_conj_to_spec_3_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr6 = MR_sv(4);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr6;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 5);
	MR_sv(2) = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_COMMON(13,0);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_ENTRY_AP(fn__check_hlds__mode_errors__mode_error_conjunct_to_msgs_3_0);
	MR_tfield(0, MR_tempr3, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr3, 3) = MR_tempr6;
	MR_tfield(0, MR_tempr3, 4) = MR_sv(1);
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_sv(5);
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_msg);
	MR_tempr5 = MR_sv(6);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,1,84);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr4;
	MR_r3 = MR_tempr5;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__mode_errors__mode_error_conj_to_spec_3_0_i49);
MR_def_label(fn__check_hlds__mode_errors__mode_error_conj_to_spec_3_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__check_hlds__mode_errors__mode_error_conj_to_spec_3_0_i50);
MR_def_label(fn__check_hlds__mode_errors__mode_error_conj_to_spec_3_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__condense_1_0,
		fn__check_hlds__mode_errors__mode_error_conj_to_spec_3_0_i51);
MR_def_label(fn__check_hlds__mode_errors__mode_error_conj_to_spec_3_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__mode_errors__mode_error_conj_to_spec_3_0_i52);
MR_def_label(fn__check_hlds__mode_errors__mode_error_conj_to_spec_3_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_GOTO_LAB(fn__check_hlds__mode_errors__mode_error_conj_to_spec_3_0_i3);
MR_def_label(fn__check_hlds__mode_errors__mode_error_conj_to_spec_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("check_hlds.mode_errors", 22);
	MR_r2 = (MR_Word) MR_string_const("function \140check_hlds.mode_errors.mode_error_conj_to_spec\'/3", 59);
	MR_r3 = (MR_Word) MR_string_const("no errors", 9);
	MR_np_call_localret_ent(require__unexpected_3_0,
		fn__check_hlds__mode_errors__mode_error_conj_to_spec_3_0_i3);
MR_def_label(fn__check_hlds__mode_errors__mode_error_conj_to_spec_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,1)) {
		MR_GOTO_LAB(fn__check_hlds__mode_errors__mode_error_conj_to_spec_3_0_i55);
	}
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,2,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_msg);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__mode_errors__mode_error_conj_to_spec_3_0_i83);
MR_def_label(fn__check_hlds__mode_errors__mode_error_conj_to_spec_3_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(fn__check_hlds__mode_errors__mode_error_conj_to_spec_3_0_i57);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,1,88);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,2,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_msg);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__mode_errors__mode_error_conj_to_spec_3_0_i83);
MR_def_label(fn__check_hlds__mode_errors__mode_error_conj_to_spec_3_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tfield(0, MR_tfield(1, MR_sv(3), 0), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		fn__check_hlds__mode_errors__mode_error_conj_to_spec_3_0_i67);
MR_def_label(fn__check_hlds__mode_errors__mode_error_conj_to_spec_3_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,1,92);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_r1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,93);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r2 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,2,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_msg);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__mode_errors__mode_error_conj_to_spec_3_0_i83);
MR_def_label(fn__check_hlds__mode_errors__mode_error_conj_to_spec_3_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 1) = MR_sv(1);
	MR_tfield(0, MR_r2, 2) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__to_sorted_list_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_set_context_3_0);
MR_decl_entry(check_hlds__mode_info__mode_info_set_mode_context_3_0);

MR_BEGIN_MODULE(check_hlds__mode_errors_module31)
	MR_init_entry1(fn__check_hlds__mode_errors__mode_error_conjunct_to_msgs_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__mode_errors__mode_error_conjunct_to_msgs_3_0);
	MR_init_label7(fn__check_hlds__mode_errors__mode_error_conjunct_to_msgs_3_0,3,4,6,18,28,29,30)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mode_error_conjunct_to_msgs'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__mode_errors__mode_error_conjunct_to_msgs_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(5) = MR_r2;
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,94);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		fn__check_hlds__mode_errors__mode_error_conjunct_to_msgs_3_0_i3);
MR_def_label(fn__check_hlds__mode_errors__mode_error_conjunct_to_msgs_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_varset_2_0,
		fn__check_hlds__mode_errors__mode_error_conjunct_to_msgs_3_0_i4);
MR_def_label(fn__check_hlds__mode_errors__mode_error_conjunct_to_msgs_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(3,0,110);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_vars_to_string_3_0,
		fn__check_hlds__mode_errors__mode_error_conjunct_to_msgs_3_0_i6);
MR_def_label(fn__check_hlds__mode_errors__mode_error_conjunct_to_msgs_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,1,95);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(6);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 58;
	MR_tfield(1, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tfield(1, MR_tempr1, 2) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(1,1,1);
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		fn__check_hlds__mode_errors__mode_error_conjunct_to_msgs_3_0_i18);
MR_def_label(fn__check_hlds__mode_errors__mode_error_conjunct_to_msgs_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(0,1,96);
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(0,3,8);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 45;
	MR_tfield(1, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tfield(1, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tfield(1, MR_tempr1, 2) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr1, 3) = MR_tempr2;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 3);
	MR_r1 = MR_tfield(0, MR_tempr2, 2);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_context_3_0,
		fn__check_hlds__mode_errors__mode_error_conjunct_to_msgs_3_0_i28);
MR_def_label(fn__check_hlds__mode_errors__mode_error_conjunct_to_msgs_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_mode_context_3_0,
		fn__check_hlds__mode_errors__mode_error_conjunct_to_msgs_3_0_i29);
MR_def_label(fn__check_hlds__mode_errors__mode_error_conjunct_to_msgs_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__check_hlds__mode_errors__mode_error_to_spec_2_0,
		fn__check_hlds__mode_errors__mode_error_conjunct_to_msgs_3_0_i30);
MR_def_label(fn__check_hlds__mode_errors__mode_error_conjunct_to_msgs_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_msg);
	MR_r3 = MR_tfield(0, MR_tempr1, 2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__mode_info__mode_info_set_pred_id_3_0);
MR_decl_entry(check_hlds__mode_info__mode_info_set_proc_id_3_0);

MR_BEGIN_MODULE(check_hlds__mode_errors_module32)
	MR_init_entry1(fn__check_hlds__mode_errors__mode_error_in_callee_to_spec_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__mode_errors__mode_error_in_callee_to_spec_6_0);
	MR_init_label10(fn__check_hlds__mode_errors__mode_error_in_callee_to_spec_6_0,2,3,4,5,7,15,18,19,20,31)
	MR_init_label10(fn__check_hlds__mode_errors__mode_error_in_callee_to_spec_6_0,32,33,34,42,43,44,45,46,48,53)
	MR_init_label1(fn__check_hlds__mode_errors__mode_error_in_callee_to_spec_6_0,41)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mode_error_in_callee_to_spec'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__mode_errors__mode_error_in_callee_to_spec_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(fn__check_hlds__mode_errors__mode_info_context_preamble_1_0,
		fn__check_hlds__mode_errors__mode_error_in_callee_to_spec_6_0_i2);
MR_def_label(fn__check_hlds__mode_errors__mode_error_in_callee_to_spec_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		fn__check_hlds__mode_errors__mode_error_in_callee_to_spec_6_0_i3);
MR_def_label(fn__check_hlds__mode_errors__mode_error_in_callee_to_spec_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_context_2_0,
		fn__check_hlds__mode_errors__mode_error_in_callee_to_spec_6_0_i4);
MR_def_label(fn__check_hlds__mode_errors__mode_error_in_callee_to_spec_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_varset_2_0,
		fn__check_hlds__mode_errors__mode_error_in_callee_to_spec_6_0_i5);
MR_def_label(fn__check_hlds__mode_errors__mode_error_in_callee_to_spec_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(3,0,51);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr2;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_vars_to_string_3_0,
		fn__check_hlds__mode_errors__mode_error_in_callee_to_spec_6_0_i7);
MR_def_label(fn__check_hlds__mode_errors__mode_error_in_callee_to_spec_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,50);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__check_hlds__mode_errors__inst_list_to_sep_lines_2_0,
		fn__check_hlds__mode_errors__mode_error_in_callee_to_spec_6_0_i15);
MR_def_label(fn__check_hlds__mode_errors__mode_error_in_callee_to_spec_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,97);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__mode_errors__mode_error_in_callee_to_spec_6_0_i18);
MR_def_label(fn__check_hlds__mode_errors__mode_error_in_callee_to_spec_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__mode_errors__mode_error_in_callee_to_spec_6_0_i19);
MR_def_label(fn__check_hlds__mode_errors__mode_error_in_callee_to_spec_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_error_util__describe_one_pred_name_3_0,
		fn__check_hlds__mode_errors__mode_error_in_callee_to_spec_6_0_i20);
MR_def_label(fn__check_hlds__mode_errors__mode_error_in_callee_to_spec_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,1,99);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,102);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__mode_errors__mode_error_in_callee_to_spec_6_0_i31);
MR_def_label(fn__check_hlds__mode_errors__mode_error_in_callee_to_spec_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__mode_errors__mode_error_in_callee_to_spec_6_0_i32);
MR_def_label(fn__check_hlds__mode_errors__mode_error_in_callee_to_spec_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__mode_errors__mode_error_in_callee_to_spec_6_0_i33);
MR_def_label(fn__check_hlds__mode_errors__mode_error_in_callee_to_spec_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,103);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__mode_errors__mode_error_in_callee_to_spec_6_0_i34);
MR_def_label(fn__check_hlds__mode_errors__mode_error_in_callee_to_spec_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr2, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_sv(1) = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = MR_sv(8);
	MR_tfield(0, MR_tempr4, 1) = MR_tempr2;
	if (MR_LTAGS_TEST(MR_sv(5),0,0)) {
		MR_GOTO_LAB(fn__check_hlds__mode_errors__mode_error_in_callee_to_spec_6_0_i41);
	}
	MR_tempr5 = MR_tfield(1, MR_sv(5), 0);
	MR_sv(2) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(5) = MR_tfield(0, MR_tempr5, 3);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(9);
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_pred_id_3_0,
		fn__check_hlds__mode_errors__mode_error_in_callee_to_spec_6_0_i42);
MR_def_label(fn__check_hlds__mode_errors__mode_error_in_callee_to_spec_6_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_proc_id_3_0,
		fn__check_hlds__mode_errors__mode_error_in_callee_to_spec_6_0_i43);
MR_def_label(fn__check_hlds__mode_errors__mode_error_in_callee_to_spec_6_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_context_3_0,
		fn__check_hlds__mode_errors__mode_error_in_callee_to_spec_6_0_i44);
MR_def_label(fn__check_hlds__mode_errors__mode_error_in_callee_to_spec_6_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_mode_context_3_0,
		fn__check_hlds__mode_errors__mode_error_in_callee_to_spec_6_0_i45);
MR_def_label(fn__check_hlds__mode_errors__mode_error_in_callee_to_spec_6_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__check_hlds__mode_errors__mode_error_to_spec_2_0,
		fn__check_hlds__mode_errors__mode_error_in_callee_to_spec_6_0_i46);
MR_def_label(fn__check_hlds__mode_errors__mode_error_in_callee_to_spec_6_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(0, MR_r1, 2);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(fn__check_hlds__mode_errors__mode_error_in_callee_to_spec_6_0_i48);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_TAG_COMMON(1,2,0);
	MR_tfield(0, MR_r1, 2) = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(fn__check_hlds__mode_errors__mode_error_in_callee_to_spec_6_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r4;
	MR_tempr1 = MR_tfield(1, MR_tempr5, 0);
	MR_r5 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(fn__check_hlds__mode_errors__mode_error_in_callee_to_spec_6_0_i53);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr2, 0) = MR_tfield(1, MR_tempr1, 0);
	MR_tfield(1, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr2, 2) = MR_tfield(1, MR_tempr1, 2);
	MR_tfield(1, MR_tempr2, 3) = MR_tfield(1, MR_tempr1, 3);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tfield(1, MR_tempr5, 1);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_TAG_COMMON(1,2,0);
	MR_tfield(0, MR_r1, 2) = MR_tempr4;
	MR_decr_sp_and_return(10);
	}
MR_def_label(fn__check_hlds__mode_errors__mode_error_in_callee_to_spec_6_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tempr5 = MR_r5;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_tempr5, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr2, 2) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr2, 3) = MR_tfield(0, MR_tempr5, 1);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tfield(1, MR_r4, 1);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_TAG_COMMON(1,2,0);
	MR_tfield(0, MR_r1, 2) = MR_tempr4;
	MR_decr_sp_and_return(10);
	}
MR_def_label(fn__check_hlds__mode_errors__mode_error_in_callee_to_spec_6_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.mode_errors", 22);
	MR_r2 = (MR_Word) MR_string_const("function \140check_hlds.mode_errors.mode_error_in_callee_to_spec\'/6", 64);
	MR_r3 = (MR_Word) MR_string_const("no error", 8);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_errors_module33)
	MR_init_entry1(fn__check_hlds__mode_errors__mode_error_info_to_spec_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__mode_errors__mode_error_info_to_spec_2_0);
	MR_init_label2(fn__check_hlds__mode_errors__mode_error_info_to_spec_2_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mode_error_info_to_spec'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__check_hlds__mode_errors__mode_error_info_to_spec_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r2, 1);
	MR_sv(2) = MR_tfield(0, MR_r2, 3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_r2, 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_context_3_0,
		fn__check_hlds__mode_errors__mode_error_info_to_spec_2_0_i2);
MR_def_label(fn__check_hlds__mode_errors__mode_error_info_to_spec_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_mode_context_3_0,
		fn__check_hlds__mode_errors__mode_error_info_to_spec_2_0_i3);
MR_def_label(fn__check_hlds__mode_errors__mode_error_info_to_spec_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__check_hlds__mode_errors__mode_error_to_spec_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_errors_module34)
	MR_init_entry1(fn__check_hlds__mode_errors__mode_warning_cannot_succeed_var_var_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__mode_errors__mode_warning_cannot_succeed_var_var_5_0);
	MR_init_label10(fn__check_hlds__mode_errors__mode_warning_cannot_succeed_var_var_5_0,2,3,4,6,9,12,15,16,17,18)
	MR_init_label6(fn__check_hlds__mode_errors__mode_warning_cannot_succeed_var_var_5_0,21,23,24,25,26,46)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mode_warning_cannot_succeed_var_var'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__mode_errors__mode_warning_cannot_succeed_var_var_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_np_call_localret_ent(fn__check_hlds__mode_errors__mode_info_context_preamble_1_0,
		fn__check_hlds__mode_errors__mode_warning_cannot_succeed_var_var_5_0_i2);
MR_def_label(fn__check_hlds__mode_errors__mode_warning_cannot_succeed_var_var_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_context_2_0,
		fn__check_hlds__mode_errors__mode_warning_cannot_succeed_var_var_5_0_i3);
MR_def_label(fn__check_hlds__mode_errors__mode_warning_cannot_succeed_var_var_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_varset_2_0,
		fn__check_hlds__mode_errors__mode_warning_cannot_succeed_var_var_5_0_i4);
MR_def_label(fn__check_hlds__mode_errors__mode_warning_cannot_succeed_var_var_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(3,0,118);
	MR_sv(14) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(8);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0,
		fn__check_hlds__mode_errors__mode_warning_cannot_succeed_var_var_5_0_i6);
MR_def_label(fn__check_hlds__mode_errors__mode_warning_cannot_succeed_var_var_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(10), 2, (MR_Integer) 1);
	MR_tfield(2, MR_sv(10), 0) = MR_r1;
	MR_sv(11) = (MR_Word) MR_TAG_COMMON(3,0,8);
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(8);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0,
		fn__check_hlds__mode_errors__mode_warning_cannot_succeed_var_var_5_0_i9);
MR_def_label(fn__check_hlds__mode_errors__mode_warning_cannot_succeed_var_var_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_sv(12) = (MR_Word) MR_TAG_COMMON(3,0,119);
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(8);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0,
		fn__check_hlds__mode_errors__mode_warning_cannot_succeed_var_var_5_0_i12);
MR_def_label(fn__check_hlds__mode_errors__mode_warning_cannot_succeed_var_var_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_sv(13) = (MR_Word) MR_TAG_COMMON(3,0,23);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0,
		fn__check_hlds__mode_errors__mode_warning_cannot_succeed_var_var_5_0_i15);
MR_def_label(fn__check_hlds__mode_errors__mode_warning_cannot_succeed_var_var_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instvarset_2_0,
		fn__check_hlds__mode_errors__mode_warning_cannot_succeed_var_var_5_0_i16);
MR_def_label(fn__check_hlds__mode_errors__mode_warning_cannot_succeed_var_var_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		fn__check_hlds__mode_errors__mode_warning_cannot_succeed_var_var_5_0_i17);
MR_def_label(fn__check_hlds__mode_errors__mode_warning_cannot_succeed_var_var_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_mode__mercury_expanded_inst_to_string_3_0,
		fn__check_hlds__mode_errors__mode_warning_cannot_succeed_var_var_5_0_i18);
MR_def_label(fn__check_hlds__mode_errors__mode_warning_cannot_succeed_var_var_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_tempr3 = MR_sv(8);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(3,0,24);
	MR_r1 = MR_sv(14);
	MR_r2 = MR_tempr3;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0,
		fn__check_hlds__mode_errors__mode_warning_cannot_succeed_var_var_5_0_i21);
MR_def_label(fn__check_hlds__mode_errors__mode_warning_cannot_succeed_var_var_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0,
		fn__check_hlds__mode_errors__mode_warning_cannot_succeed_var_var_5_0_i23);
MR_def_label(fn__check_hlds__mode_errors__mode_warning_cannot_succeed_var_var_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instvarset_2_0,
		fn__check_hlds__mode_errors__mode_warning_cannot_succeed_var_var_5_0_i24);
MR_def_label(fn__check_hlds__mode_errors__mode_warning_cannot_succeed_var_var_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		fn__check_hlds__mode_errors__mode_warning_cannot_succeed_var_var_5_0_i25);
MR_def_label(fn__check_hlds__mode_errors__mode_warning_cannot_succeed_var_var_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_mode__mercury_expanded_inst_to_string_3_0,
		fn__check_hlds__mode_errors__mode_warning_cannot_succeed_var_var_5_0_i26);
MR_def_label(fn__check_hlds__mode_errors__mode_warning_cannot_succeed_var_var_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,2);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr5 = MR_sv(13);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(12);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(11);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(10);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr2;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,2,1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__mode_errors__mode_warning_cannot_succeed_var_var_5_0_i46);
MR_def_label(fn__check_hlds__mode_errors__mode_warning_cannot_succeed_var_var_5_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(7);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_tfield(0, MR_r1, 2) = MR_tempr1;
	MR_decr_sp_and_return(17);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_errors_module35)
	MR_init_entry1(fn__check_hlds__mode_errors__mode_warning_info_to_spec_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__mode_errors__mode_warning_info_to_spec_2_0);
	MR_init_label10(fn__check_hlds__mode_errors__mode_warning_info_to_spec_2_0,2,3,6,7,8,10,13,16,19,20)
	MR_init_label4(fn__check_hlds__mode_errors__mode_warning_info_to_spec_2_0,21,22,37,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mode_warning_info_to_spec'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__check_hlds__mode_errors__mode_warning_info_to_spec_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r2, 0);
	MR_sv(2) = MR_tfield(0, MR_r2, 2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_r2, 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_context_3_0,
		fn__check_hlds__mode_errors__mode_warning_info_to_spec_2_0_i2);
MR_def_label(fn__check_hlds__mode_errors__mode_warning_info_to_spec_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_mode_context_3_0,
		fn__check_hlds__mode_errors__mode_warning_info_to_spec_2_0_i3);
MR_def_label(fn__check_hlds__mode_errors__mode_warning_info_to_spec_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(fn__check_hlds__mode_errors__mode_warning_info_to_spec_2_0_i5);
	}
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_sv(3) = MR_tfield(1, MR_r2, 2);
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__check_hlds__mode_errors__mode_info_context_preamble_1_0,
		fn__check_hlds__mode_errors__mode_warning_info_to_spec_2_0_i6);
MR_def_label(fn__check_hlds__mode_errors__mode_warning_info_to_spec_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_context_2_0,
		fn__check_hlds__mode_errors__mode_warning_info_to_spec_2_0_i7);
MR_def_label(fn__check_hlds__mode_errors__mode_warning_info_to_spec_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_varset_2_0,
		fn__check_hlds__mode_errors__mode_warning_info_to_spec_2_0_i8);
MR_def_label(fn__check_hlds__mode_errors__mode_warning_info_to_spec_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(3,0,118);
	MR_sv(10) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(7);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0,
		fn__check_hlds__mode_errors__mode_warning_info_to_spec_2_0_i10);
MR_def_label(fn__check_hlds__mode_errors__mode_warning_info_to_spec_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(3,0,8);
	MR_r1 = MR_tempr2;
	MR_r2 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_cons_id_to_string_2_0,
		fn__check_hlds__mode_errors__mode_warning_info_to_spec_2_0_i13);
MR_def_label(fn__check_hlds__mode_errors__mode_warning_info_to_spec_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_tempr3 = MR_sv(7);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(3,0,119);
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr3;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0,
		fn__check_hlds__mode_errors__mode_warning_info_to_spec_2_0_i16);
MR_def_label(fn__check_hlds__mode_errors__mode_warning_info_to_spec_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(3,0,23);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_0,
		fn__check_hlds__mode_errors__mode_warning_info_to_spec_2_0_i19);
MR_def_label(fn__check_hlds__mode_errors__mode_warning_info_to_spec_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instvarset_2_0,
		fn__check_hlds__mode_errors__mode_warning_info_to_spec_2_0_i20);
MR_def_label(fn__check_hlds__mode_errors__mode_warning_info_to_spec_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		fn__check_hlds__mode_errors__mode_warning_info_to_spec_2_0_i21);
MR_def_label(fn__check_hlds__mode_errors__mode_warning_info_to_spec_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_mode__mercury_expanded_inst_to_string_3_0,
		fn__check_hlds__mode_errors__mode_warning_info_to_spec_2_0_i22);
MR_def_label(fn__check_hlds__mode_errors__mode_warning_info_to_spec_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,2);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(10);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,2,1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__mode_errors__mode_warning_info_to_spec_2_0_i37);
MR_def_label(fn__check_hlds__mode_errors__mode_warning_info_to_spec_2_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(6);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_tfield(0, MR_r1, 2) = MR_tempr1;
	MR_decr_sp_and_return(12);
	}
MR_def_label(fn__check_hlds__mode_errors__mode_warning_info_to_spec_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	MR_r4 = MR_tfield(0, MR_tempr1, 2);
	MR_r5 = MR_tfield(0, MR_tempr1, 3);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(fn__check_hlds__mode_errors__mode_warning_cannot_succeed_var_var_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_errors_module36)
	MR_init_entry1(fn__check_hlds__mode_errors__should_report_mode_warning_for_pred_origin_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__mode_errors__should_report_mode_warning_for_pred_origin_1_0);
	MR_init_label5(fn__check_hlds__mode_errors__should_report_mode_warning_for_pred_origin_1_0,3,4,5,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'should_report_mode_warning_for_pred_origin'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__check_hlds__mode_errors__should_report_mode_warning_for_pred_origin_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__check_hlds__mode_errors__should_report_mode_warning_for_pred_origin_1_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__check_hlds__mode_errors__should_report_mode_warning_for_pred_origin_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(fn__check_hlds__mode_errors__should_report_mode_warning_for_pred_origin_1_0_i4);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__check_hlds__mode_errors__should_report_mode_warning_for_pred_origin_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(fn__check_hlds__mode_errors__should_report_mode_warning_for_pred_origin_1_0_i5);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__check_hlds__mode_errors__should_report_mode_warning_for_pred_origin_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(fn__check_hlds__mode_errors__should_report_mode_warning_for_pred_origin_1_0_i6);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__check_hlds__mode_errors__should_report_mode_warning_for_pred_origin_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(fn__check_hlds__mode_errors__should_report_mode_warning_for_pred_origin_1_0_i7);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__check_hlds__mode_errors__should_report_mode_warning_for_pred_origin_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_errors_module37)
	MR_init_entry1(check_hlds__mode_errors__is_error_important_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_errors__is_error_important_1_0);
	MR_init_label1(check_hlds__mode_errors__is_error_important_1_0,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_error_important'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__mode_errors__is_error_important_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 1);
	MR_r2 = MR_tfield(0, MR_tempr1, 3);
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(check_hlds__mode_errors__is_error_important_1_0_i8);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_tempr1 = MR_tfield(0, MR_tfield(2, MR_r2, 0), 0);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__mode_errors__is_error_important_1_0_i8);
	}
	MR_r1 = ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 9));
	MR_proceed();
	}
MR_def_label(check_hlds__mode_errors__is_error_important_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(fn__string__join_list_2_0);

MR_BEGIN_MODULE(check_hlds__mode_errors_module38)
	MR_init_entry1(fn__check_hlds__mode_errors__merge_error_to_pieces_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__mode_errors__merge_error_to_pieces_2_0);
	MR_init_label4(fn__check_hlds__mode_errors__merge_error_to_pieces_2_0,2,3,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'merge_error_to_pieces'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__mode_errors__merge_error_to_pieces_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r2, 0);
	MR_sv(3) = MR_tfield(0, MR_r2, 1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_varset_2_0,
		fn__check_hlds__mode_errors__merge_error_to_pieces_2_0_i2);
MR_def_label(fn__check_hlds__mode_errors__merge_error_to_pieces_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0,
		fn__check_hlds__mode_errors__merge_error_to_pieces_2_0_i3);
MR_def_label(fn__check_hlds__mode_errors__merge_error_to_pieces_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(10,4);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(fn__check_hlds__mode_errors__inst_to_string_2_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 3) = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,4,6);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__check_hlds__mode_errors__merge_error_to_pieces_2_0_i7);
MR_def_label(fn__check_hlds__mode_errors__merge_error_to_pieces_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__join_list_2_0,
		fn__check_hlds__mode_errors__merge_error_to_pieces_2_0_i8);
MR_def_label(fn__check_hlds__mode_errors__merge_error_to_pieces_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,1,2);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___set_ordlist__set_ordlist_1_0);
MR_decl_entry(__Unify___hlds__hlds_goal__hlds_goal_0_0);

MR_BEGIN_MODULE(check_hlds__mode_errors_module39)
	MR_init_entry1(__Unify___check_hlds__mode_errors__delayed_goal_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__mode_errors__delayed_goal_0_0);
	MR_init_label4(__Unify___check_hlds__mode_errors__delayed_goal_0_0,5,7,11,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__mode_errors__delayed_goal_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__delayed_goal_0_0_i11);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 2);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,94);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___set_ordlist__set_ordlist_1_0,
		__Unify___check_hlds__mode_errors__delayed_goal_0_0_i5);
MR_def_label(__Unify___check_hlds__mode_errors__delayed_goal_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__delayed_goal_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___check_hlds__mode_errors__mode_error_info_0_0,
		__Unify___check_hlds__mode_errors__delayed_goal_0_0_i7);
MR_def_label(__Unify___check_hlds__mode_errors__delayed_goal_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__delayed_goal_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___hlds__hlds_goal__hlds_goal_0_0);
MR_def_label(__Unify___check_hlds__mode_errors__delayed_goal_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__mode_errors__delayed_goal_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___set_ordlist__set_ordlist_1_0);
MR_decl_entry(__Compare___hlds__hlds_goal__hlds_goal_0_0);

MR_BEGIN_MODULE(check_hlds__mode_errors_module40)
	MR_init_entry1(__Compare___check_hlds__mode_errors__delayed_goal_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__mode_errors__delayed_goal_0_0);
	MR_init_label5(__Compare___check_hlds__mode_errors__delayed_goal_0_0,3,2,6,10,39)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__mode_errors__delayed_goal_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__delayed_goal_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__mode_errors__delayed_goal_0_0_i2);
MR_def_label(__Compare___check_hlds__mode_errors__delayed_goal_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__mode_errors__delayed_goal_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(4) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr1 = MR_tfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,94);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___set_ordlist__set_ordlist_1_0,
		__Compare___check_hlds__mode_errors__delayed_goal_0_0_i6);
MR_def_label(__Compare___check_hlds__mode_errors__delayed_goal_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__delayed_goal_0_0_i39);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___check_hlds__mode_errors__mode_error_info_0_0,
		__Compare___check_hlds__mode_errors__delayed_goal_0_0_i10);
MR_def_label(__Compare___check_hlds__mode_errors__delayed_goal_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__delayed_goal_0_0_i39);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___hlds__hlds_goal__hlds_goal_0_0);
MR_def_label(__Compare___check_hlds__mode_errors__delayed_goal_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_errors_module41)
	MR_init_entry1(__Unify___check_hlds__mode_errors__final_inst_error_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__mode_errors__final_inst_error_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__mode_errors__final_inst_error_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(check_hlds__mode_errors_module42)
	MR_init_entry1(__Compare___check_hlds__mode_errors__final_inst_error_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__mode_errors__final_inst_error_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__mode_errors__final_inst_error_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_errors_module43)
	MR_init_entry1(__Unify___check_hlds__mode_errors__include_detism_on_modes_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__mode_errors__include_detism_on_modes_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__mode_errors__include_detism_on_modes_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_errors_module44)
	MR_init_entry1(__Compare___check_hlds__mode_errors__include_detism_on_modes_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__mode_errors__include_detism_on_modes_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__mode_errors__include_detism_on_modes_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_errors_module45)
	MR_init_entry1(__Unify___check_hlds__mode_errors__merge_context_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__mode_errors__merge_context_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__mode_errors__merge_context_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_errors_module46)
	MR_init_entry1(__Compare___check_hlds__mode_errors__merge_context_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__mode_errors__merge_context_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__mode_errors__merge_context_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___term__var_1_0);
MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(check_hlds__mode_errors_module47)
	MR_init_entry1(__Unify___check_hlds__mode_errors__merge_error_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__mode_errors__merge_error_0_0);
	MR_init_label3(__Unify___check_hlds__mode_errors__merge_error_0_0,4,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__mode_errors__merge_error_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__merge_error_0_0_i8);
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		__Unify___check_hlds__mode_errors__merge_error_0_0_i4);
MR_def_label(__Unify___check_hlds__mode_errors__merge_error_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__merge_error_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___check_hlds__mode_errors__merge_error_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__mode_errors__merge_error_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___term__var_1_0);
MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(check_hlds__mode_errors_module48)
	MR_init_entry1(__Compare___check_hlds__mode_errors__merge_error_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__mode_errors__merge_error_0_0);
	MR_init_label4(__Compare___check_hlds__mode_errors__merge_error_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__mode_errors__merge_error_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__merge_error_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__mode_errors__merge_error_0_0_i2);
MR_def_label(__Compare___check_hlds__mode_errors__merge_error_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__mode_errors__merge_error_0_0,2)
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___term__var_1_0,
		__Compare___check_hlds__mode_errors__merge_error_0_0_i5);
MR_def_label(__Compare___check_hlds__mode_errors__merge_error_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__merge_error_0_0_i21);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___check_hlds__mode_errors__merge_error_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_errors_module49)
	MR_init_entry1(__Unify___check_hlds__mode_errors__merge_errors_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__mode_errors__merge_errors_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__mode_errors__merge_errors_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_errors, merge_error);
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


MR_BEGIN_MODULE(check_hlds__mode_errors_module50)
	MR_init_entry1(__Compare___check_hlds__mode_errors__merge_errors_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__mode_errors__merge_errors_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__mode_errors__merge_errors_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_errors, merge_error);
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

MR_decl_entry(__Unify___check_hlds__mode_info__var_lock_reason_0_0);
MR_decl_entry(__Unify___parse_tree__prog_data__mer_inst_0_0);
MR_decl_entry(__Unify___parse_tree__prog_data__mer_type_0_0);
MR_decl_entry(__Unify___parse_tree__prog_data__cons_id_0_0);

MR_BEGIN_MODULE(check_hlds__mode_errors_module51)
	MR_init_entry1(__Unify___check_hlds__mode_errors__mode_error_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__mode_errors__mode_error_0_0);
	MR_init_label10(__Unify___check_hlds__mode_errors__mode_error_0_0,5,6,10,16,18,20,14,26,24,32)
	MR_init_label10(__Unify___check_hlds__mode_errors__mode_error_0_0,34,36,30,40,42,38,46,48,44,55)
	MR_init_label10(__Unify___check_hlds__mode_errors__mode_error_0_0,57,52,64,61,70,68,76,74,82,84)
	MR_init_label10(__Unify___check_hlds__mode_errors__mode_error_0_0,86,80,91,93,95,97,88,103,105,101)
	MR_init_label10(__Unify___check_hlds__mode_errors__mode_error_0_0,111,109,115,113,119,121,123,117,129,131)
	MR_init_label5(__Unify___check_hlds__mode_errors__mode_error_0_0,127,135,247,139,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__mode_errors__mode_error_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i247);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(10);
	MR_proceed();
	}
MR_def_label(__Unify___check_hlds__mode_errors__mode_error_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i6);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(1, MR_tempr3, 0);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(1, MR_tempr4, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_errors, merge_error);
	MR_r2 = MR_tfield(1, MR_tempr3, 1);
	MR_r3 = MR_tfield(1, MR_tempr4, 1);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___check_hlds__mode_errors__mode_error_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i10);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_errors, merge_error);
	MR_r2 = MR_tfield(2, MR_sv(1), 0);
	MR_r3 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___check_hlds__mode_errors__mode_error_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,8)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i14);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,8)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(4) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(5) = MR_tfield(3, MR_tempr2, 3);
	MR_sv(6) = MR_tfield(3, MR_tempr2, 4);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___check_hlds__mode_info__var_lock_reason_0_0,
		__Unify___check_hlds__mode_errors__mode_error_0_0_i16);
MR_def_label(__Unify___check_hlds__mode_errors__mode_error_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		__Unify___check_hlds__mode_errors__mode_error_0_0_i18);
MR_def_label(__Unify___check_hlds__mode_errors__mode_error_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_inst_0_0,
		__Unify___check_hlds__mode_errors__mode_error_0_0_i20);
MR_def_label(__Unify___check_hlds__mode_errors__mode_error_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(__Unify___parse_tree__prog_data__mer_inst_0_0);
MR_def_label(__Unify___check_hlds__mode_errors__mode_error_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,15)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i24);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,15)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_errors, delayed_goal);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	MR_r3 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___check_hlds__mode_errors__mode_error_0_0_i26);
MR_def_label(__Unify___check_hlds__mode_errors__mode_error_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(__Unify___check_hlds__mode_errors__schedule_culprit_0_0);
MR_def_label(__Unify___check_hlds__mode_errors__mode_error_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,16)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i30);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,16)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i1);
	}
	MR_tempr1 = MR_tempr3;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 3);
	MR_tempr2 = MR_tempr4;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 5);
	MR_sv(4) = MR_tfield(3, MR_tempr2, 3);
	MR_sv(5) = MR_tfield(3, MR_tempr2, 4);
	MR_sv(6) = MR_tfield(3, MR_tempr2, 5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	MR_r3 = MR_tfield(3, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		__Unify___check_hlds__mode_errors__mode_error_0_0_i32);
MR_def_label(__Unify___check_hlds__mode_errors__mode_error_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_inst_0_0,
		__Unify___check_hlds__mode_errors__mode_error_0_0_i34);
MR_def_label(__Unify___check_hlds__mode_errors__mode_error_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_inst_0_0,
		__Unify___check_hlds__mode_errors__mode_error_0_0_i36);
MR_def_label(__Unify___check_hlds__mode_errors__mode_error_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i1);
	}
	MR_r1 = (MR_sv(3) == MR_sv(6));
	MR_decr_sp_and_return(10);
MR_def_label(__Unify___check_hlds__mode_errors__mode_error_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i38);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i1);
	}
	MR_tempr1 = MR_tempr3;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 3);
	MR_tempr2 = MR_tempr4;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(3) = MR_tfield(3, MR_tempr2, 3);
	MR_sv(4) = MR_tfield(3, MR_tempr2, 4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	MR_r3 = MR_tfield(3, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		__Unify___check_hlds__mode_errors__mode_error_0_0_i40);
MR_def_label(__Unify___check_hlds__mode_errors__mode_error_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_inst_0_0,
		__Unify___check_hlds__mode_errors__mode_error_0_0_i42);
MR_def_label(__Unify___check_hlds__mode_errors__mode_error_0_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i1);
	}
	MR_r1 = (MR_sv(2) == MR_sv(4));
	MR_decr_sp_and_return(10);
MR_def_label(__Unify___check_hlds__mode_errors__mode_error_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,5)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i44);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(4) = MR_tfield(3, MR_tempr2, 3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	MR_r3 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		__Unify___check_hlds__mode_errors__mode_error_0_0_i46);
MR_def_label(__Unify___check_hlds__mode_errors__mode_error_0_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_inst_0_0,
		__Unify___check_hlds__mode_errors__mode_error_0_0_i48);
MR_def_label(__Unify___check_hlds__mode_errors__mode_error_0_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(__Unify___parse_tree__prog_data__mer_inst_0_0);
MR_def_label(__Unify___check_hlds__mode_errors__mode_error_0_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,7)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i52);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,7)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 5);
	MR_sv(5) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(6) = MR_tfield(3, MR_tempr2, 3);
	MR_sv(7) = MR_tfield(3, MR_tempr2, 4);
	MR_sv(8) = MR_tfield(3, MR_tempr2, 5);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,94);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	MR_r3 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___check_hlds__mode_errors__mode_error_0_0_i55);
MR_def_label(__Unify___check_hlds__mode_errors__mode_error_0_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___check_hlds__mode_errors__mode_error_0_0_i57);
MR_def_label(__Unify___check_hlds__mode_errors__mode_error_0_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i1);
	}
	if ((MR_sv(2) != MR_sv(6))) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i1);
	}
	if ((MR_sv(3) != MR_sv(7))) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_errors, mode_error_info);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(8);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___check_hlds__mode_errors__mode_error_0_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,6)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i61);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,6)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,94);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	MR_r3 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___check_hlds__mode_errors__mode_error_0_0_i64);
MR_def_label(__Unify___check_hlds__mode_errors__mode_error_0_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___check_hlds__mode_errors__mode_error_0_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,9)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i68);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,9)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	MR_r3 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		__Unify___check_hlds__mode_errors__mode_error_0_0_i70);
MR_def_label(__Unify___check_hlds__mode_errors__mode_error_0_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(__Unify___parse_tree__prog_data__mer_inst_0_0);
MR_def_label(__Unify___check_hlds__mode_errors__mode_error_0_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i74);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	MR_r3 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		__Unify___check_hlds__mode_errors__mode_error_0_0_i76);
MR_def_label(__Unify___check_hlds__mode_errors__mode_error_0_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(__Unify___parse_tree__prog_data__mer_inst_0_0);
MR_def_label(__Unify___check_hlds__mode_errors__mode_error_0_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,4)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i80);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(4) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(5) = MR_tfield(3, MR_tempr2, 3);
	MR_sv(6) = MR_tfield(3, MR_tempr2, 4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	MR_r3 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		__Unify___check_hlds__mode_errors__mode_error_0_0_i82);
MR_def_label(__Unify___check_hlds__mode_errors__mode_error_0_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___check_hlds__mode_errors__mode_error_unify_rhs_0_0,
		__Unify___check_hlds__mode_errors__mode_error_0_0_i84);
MR_def_label(__Unify___check_hlds__mode_errors__mode_error_0_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_type_0_0,
		__Unify___check_hlds__mode_errors__mode_error_0_0_i86);
MR_def_label(__Unify___check_hlds__mode_errors__mode_error_0_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i1);
	}
	MR_r1 = (MR_sv(3) == MR_sv(6));
	MR_decr_sp_and_return(10);
MR_def_label(__Unify___check_hlds__mode_errors__mode_error_0_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,11)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i88);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,11)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 5);
	MR_sv(5) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(6) = MR_tfield(3, MR_tempr2, 3);
	MR_sv(7) = MR_tfield(3, MR_tempr2, 4);
	MR_sv(8) = MR_tfield(3, MR_tempr2, 5);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,1,94);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	MR_r3 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		__Unify___check_hlds__mode_errors__mode_error_0_0_i91);
MR_def_label(__Unify___check_hlds__mode_errors__mode_error_0_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__cons_id_0_0,
		__Unify___check_hlds__mode_errors__mode_error_0_0_i93);
MR_def_label(__Unify___check_hlds__mode_errors__mode_error_0_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i1);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___check_hlds__mode_errors__mode_error_0_0_i95);
MR_def_label(__Unify___check_hlds__mode_errors__mode_error_0_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_inst_0_0,
		__Unify___check_hlds__mode_errors__mode_error_0_0_i97);
MR_def_label(__Unify___check_hlds__mode_errors__mode_error_0_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(8);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___check_hlds__mode_errors__mode_error_0_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,12)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i101);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,12)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(4) = MR_tfield(3, MR_tempr2, 3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	MR_r3 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		__Unify___check_hlds__mode_errors__mode_error_0_0_i103);
MR_def_label(__Unify___check_hlds__mode_errors__mode_error_0_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_inst_0_0,
		__Unify___check_hlds__mode_errors__mode_error_0_0_i105);
MR_def_label(__Unify___check_hlds__mode_errors__mode_error_0_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(__Unify___parse_tree__prog_data__mer_inst_0_0);
MR_def_label(__Unify___check_hlds__mode_errors__mode_error_0_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,13)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i109);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,13)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	MR_r3 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		__Unify___check_hlds__mode_errors__mode_error_0_0_i111);
MR_def_label(__Unify___check_hlds__mode_errors__mode_error_0_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(10);
MR_def_label(__Unify___check_hlds__mode_errors__mode_error_0_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,14)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i113);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,14)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	MR_r3 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		__Unify___check_hlds__mode_errors__mode_error_0_0_i115);
MR_def_label(__Unify___check_hlds__mode_errors__mode_error_0_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(10);
MR_def_label(__Unify___check_hlds__mode_errors__mode_error_0_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,10)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i117);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,10)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(4) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(5) = MR_tfield(3, MR_tempr2, 3);
	MR_sv(6) = MR_tfield(3, MR_tempr2, 4);
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	MR_r3 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		__Unify___check_hlds__mode_errors__mode_error_0_0_i119);
MR_def_label(__Unify___check_hlds__mode_errors__mode_error_0_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		__Unify___check_hlds__mode_errors__mode_error_0_0_i121);
MR_def_label(__Unify___check_hlds__mode_errors__mode_error_0_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_inst_0_0,
		__Unify___check_hlds__mode_errors__mode_error_0_0_i123);
MR_def_label(__Unify___check_hlds__mode_errors__mode_error_0_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(__Unify___parse_tree__prog_data__mer_inst_0_0);
MR_def_label(__Unify___check_hlds__mode_errors__mode_error_0_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,3)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i127);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(4) = MR_tfield(3, MR_tempr2, 3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	MR_r3 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		__Unify___check_hlds__mode_errors__mode_error_0_0_i129);
MR_def_label(__Unify___check_hlds__mode_errors__mode_error_0_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_inst_0_0,
		__Unify___check_hlds__mode_errors__mode_error_0_0_i131);
MR_def_label(__Unify___check_hlds__mode_errors__mode_error_0_0,131)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(__Unify___parse_tree__prog_data__mer_inst_0_0);
MR_def_label(__Unify___check_hlds__mode_errors__mode_error_0_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,2)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i135);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(__Unify___term__var_1_0);
MR_def_label(__Unify___check_hlds__mode_errors__mode_error_0_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,18)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i139);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,18)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,94);
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___check_hlds__mode_errors__mode_error_0_0,247)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__mode_errors__mode_error_0_0,139)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,17)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(3, MR_tempr3, 2);
	MR_r3 = MR_tfield(3, MR_tempr4, 2);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(__Unify___term__var_1_0);
	}
MR_def_label(__Unify___check_hlds__mode_errors__mode_error_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_errors_module52)
	MR_init_entry1(__Index___check_hlds__mode_errors__mode_error_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Index___check_hlds__mode_errors__mode_error_0_0);
	MR_init_label10(__Index___check_hlds__mode_errors__mode_error_0_0,3,4,5,6,7,8,9,10,11,12)
	MR_init_label10(__Index___check_hlds__mode_errors__mode_error_0_0,13,14,15,16,17,18,19,20,21,22)
	MR_init_label1(__Index___check_hlds__mode_errors__mode_error_0_0,23)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Index__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Index___check_hlds__mode_errors__mode_error_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(__Index___check_hlds__mode_errors__mode_error_0_0_i3);
	}
	MR_r1 = (MR_Integer) 8;
	MR_proceed();
MR_def_label(__Index___check_hlds__mode_errors__mode_error_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(__Index___check_hlds__mode_errors__mode_error_0_0_i4);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Index___check_hlds__mode_errors__mode_error_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(__Index___check_hlds__mode_errors__mode_error_0_0_i5);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Index___check_hlds__mode_errors__mode_error_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,8)) {
		MR_GOTO_LAB(__Index___check_hlds__mode_errors__mode_error_0_0_i6);
	}
	MR_r1 = (MR_Integer) 11;
	MR_proceed();
MR_def_label(__Index___check_hlds__mode_errors__mode_error_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,15)) {
		MR_GOTO_LAB(__Index___check_hlds__mode_errors__mode_error_0_0_i7);
	}
	MR_r1 = (MR_Integer) 18;
	MR_proceed();
MR_def_label(__Index___check_hlds__mode_errors__mode_error_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,16)) {
		MR_GOTO_LAB(__Index___check_hlds__mode_errors__mode_error_0_0_i8);
	}
	MR_r1 = (MR_Integer) 19;
	MR_proceed();
MR_def_label(__Index___check_hlds__mode_errors__mode_error_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(__Index___check_hlds__mode_errors__mode_error_0_0_i9);
	}
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
MR_def_label(__Index___check_hlds__mode_errors__mode_error_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(__Index___check_hlds__mode_errors__mode_error_0_0_i10);
	}
	MR_r1 = (MR_Integer) 7;
	MR_proceed();
MR_def_label(__Index___check_hlds__mode_errors__mode_error_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,7)) {
		MR_GOTO_LAB(__Index___check_hlds__mode_errors__mode_error_0_0_i11);
	}
	MR_r1 = (MR_Integer) 10;
	MR_proceed();
MR_def_label(__Index___check_hlds__mode_errors__mode_error_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(__Index___check_hlds__mode_errors__mode_error_0_0_i12);
	}
	MR_r1 = (MR_Integer) 9;
	MR_proceed();
MR_def_label(__Index___check_hlds__mode_errors__mode_error_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,9)) {
		MR_GOTO_LAB(__Index___check_hlds__mode_errors__mode_error_0_0_i13);
	}
	MR_r1 = (MR_Integer) 12;
	MR_proceed();
MR_def_label(__Index___check_hlds__mode_errors__mode_error_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(__Index___check_hlds__mode_errors__mode_error_0_0_i14);
	}
	MR_r1 = (MR_Integer) 3;
	MR_proceed();
MR_def_label(__Index___check_hlds__mode_errors__mode_error_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(__Index___check_hlds__mode_errors__mode_error_0_0_i15);
	}
	MR_r1 = (MR_Integer) 6;
	MR_proceed();
MR_def_label(__Index___check_hlds__mode_errors__mode_error_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,11)) {
		MR_GOTO_LAB(__Index___check_hlds__mode_errors__mode_error_0_0_i16);
	}
	MR_r1 = (MR_Integer) 14;
	MR_proceed();
MR_def_label(__Index___check_hlds__mode_errors__mode_error_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,12)) {
		MR_GOTO_LAB(__Index___check_hlds__mode_errors__mode_error_0_0_i17);
	}
	MR_r1 = (MR_Integer) 15;
	MR_proceed();
MR_def_label(__Index___check_hlds__mode_errors__mode_error_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,13)) {
		MR_GOTO_LAB(__Index___check_hlds__mode_errors__mode_error_0_0_i18);
	}
	MR_r1 = (MR_Integer) 16;
	MR_proceed();
MR_def_label(__Index___check_hlds__mode_errors__mode_error_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,14)) {
		MR_GOTO_LAB(__Index___check_hlds__mode_errors__mode_error_0_0_i19);
	}
	MR_r1 = (MR_Integer) 17;
	MR_proceed();
MR_def_label(__Index___check_hlds__mode_errors__mode_error_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,10)) {
		MR_GOTO_LAB(__Index___check_hlds__mode_errors__mode_error_0_0_i20);
	}
	MR_r1 = (MR_Integer) 13;
	MR_proceed();
MR_def_label(__Index___check_hlds__mode_errors__mode_error_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(__Index___check_hlds__mode_errors__mode_error_0_0_i21);
	}
	MR_r1 = (MR_Integer) 5;
	MR_proceed();
MR_def_label(__Index___check_hlds__mode_errors__mode_error_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(__Index___check_hlds__mode_errors__mode_error_0_0_i22);
	}
	MR_r1 = (MR_Integer) 4;
	MR_proceed();
MR_def_label(__Index___check_hlds__mode_errors__mode_error_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,18)) {
		MR_GOTO_LAB(__Index___check_hlds__mode_errors__mode_error_0_0_i23);
	}
	MR_r1 = (MR_Integer) 21;
	MR_proceed();
MR_def_label(__Index___check_hlds__mode_errors__mode_error_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 20;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___check_hlds__mode_info__var_lock_reason_0_0);
MR_decl_entry(__Compare___parse_tree__prog_data__mer_inst_0_0);
MR_decl_entry(__Compare___parse_tree__prog_data__mer_type_0_0);
MR_decl_entry(__Compare___parse_tree__prog_data__cons_id_0_0);
MR_decl_entry(private_builtin__compare_error_0_0);

MR_BEGIN_MODULE(check_hlds__mode_errors_module53)
	MR_init_entry1(__Compare___check_hlds__mode_errors__mode_error_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__mode_errors__mode_error_0_0);
	MR_init_label10(__Compare___check_hlds__mode_errors__mode_error_0_0,4,5,6,7,358,10,14,11,19,25)
	MR_init_label10(__Compare___check_hlds__mode_errors__mode_error_0_0,29,33,22,43,40,51,55,59,63,48)
	MR_init_label10(__Compare___check_hlds__mode_errors__mode_error_0_0,74,78,82,71,92,96,89,106,110,114)
	MR_init_label10(__Compare___check_hlds__mode_errors__mode_error_0_0,118,102,130,126,138,135,146,143,154,158)
	MR_init_label10(__Compare___check_hlds__mode_errors__mode_error_0_0,162,151,172,176,181,185,169,196,200,193)
	MR_init_label10(__Compare___check_hlds__mode_errors__mode_error_0_0,209,206,217,214,225,229,233,222,243,247)
	MR_init_label6(__Compare___check_hlds__mode_errors__mode_error_0_0,240,253,256,262,8,271)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__mode_errors__mode_error_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i358);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(__Index___check_hlds__mode_errors__mode_error_0_0,
		__Compare___check_hlds__mode_errors__mode_error_0_0_i4);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(__Index___check_hlds__mode_errors__mode_error_0_0,
		__Compare___check_hlds__mode_errors__mode_error_0_0_i5);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(3) >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i6);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(3) <= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i7);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i10);
	}
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_0_0,358)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i11);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(1, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(1, MR_tempr3, 0);
	MR_r2 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___check_hlds__mode_errors__mode_error_0_0_i14);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i271);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_errors, merge_error);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i19);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i8);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_errors, merge_error);
	MR_r2 = MR_tfield(2, MR_sv(1), 0);
	MR_r3 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,8)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i22);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,8)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(6) = MR_tfield(3, MR_tempr5, 4);
	MR_sv(5) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(4) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_sv(3) = MR_tfield(3, MR_tempr6, 4);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___check_hlds__mode_info__var_lock_reason_0_0,
		__Compare___check_hlds__mode_errors__mode_error_0_0_i25);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i271);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(__Compare___term__var_1_0,
		__Compare___check_hlds__mode_errors__mode_error_0_0_i29);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i271);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__mer_inst_0_0,
		__Compare___check_hlds__mode_errors__mode_error_0_0_i33);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i271);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___parse_tree__prog_data__mer_inst_0_0);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,15)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i40);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,15)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_errors, delayed_goal);
	MR_r2 = MR_tfield(3, MR_tempr3, 1);
	MR_r3 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___check_hlds__mode_errors__mode_error_0_0_i43);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_0_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i271);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___check_hlds__mode_errors__schedule_culprit_0_0);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,16)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i48);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,16)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(8) = MR_tfield(3, MR_tempr5, 5);
	MR_sv(7) = MR_tfield(3, MR_tempr5, 4);
	MR_sv(6) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(5) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_sv(4) = MR_tfield(3, MR_tempr6, 5);
	MR_sv(3) = MR_tfield(3, MR_tempr6, 4);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___check_hlds__mode_errors__mode_error_0_0_i51);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_0_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i271);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___term__var_1_0,
		__Compare___check_hlds__mode_errors__mode_error_0_0_i55);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_0_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i271);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__mer_inst_0_0,
		__Compare___check_hlds__mode_errors__mode_error_0_0_i59);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_0_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i271);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__mer_inst_0_0,
		__Compare___check_hlds__mode_errors__mode_error_0_0_i63);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_0_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i271);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_0_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i71);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(6) = MR_tfield(3, MR_tempr5, 4);
	MR_sv(5) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(4) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_sv(3) = MR_tfield(3, MR_tempr6, 4);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___check_hlds__mode_errors__mode_error_0_0_i74);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_0_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i271);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(__Compare___term__var_1_0,
		__Compare___check_hlds__mode_errors__mode_error_0_0_i78);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_0_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i271);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__mer_inst_0_0,
		__Compare___check_hlds__mode_errors__mode_error_0_0_i82);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_0_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i271);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_0_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,5)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i89);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(4) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(3, MR_tempr3, 1);
	MR_r3 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___term__var_1_0,
		__Compare___check_hlds__mode_errors__mode_error_0_0_i92);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_0_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i271);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__mer_inst_0_0,
		__Compare___check_hlds__mode_errors__mode_error_0_0_i96);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_0_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i271);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___parse_tree__prog_data__mer_inst_0_0);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_0_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,7)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i102);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,7)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(8) = MR_tfield(3, MR_tempr5, 5);
	MR_sv(7) = MR_tfield(3, MR_tempr5, 4);
	MR_sv(6) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(5) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_sv(4) = MR_tfield(3, MR_tempr6, 5);
	MR_sv(3) = MR_tfield(3, MR_tempr6, 4);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,94);
	MR_r2 = MR_tfield(3, MR_tempr3, 1);
	MR_r3 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___check_hlds__mode_errors__mode_error_0_0_i106);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_0_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i271);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___check_hlds__mode_errors__mode_error_0_0_i110);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_0_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i271);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___check_hlds__mode_errors__mode_error_0_0_i114);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_0_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i271);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___check_hlds__mode_errors__mode_error_0_0_i118);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_0_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i271);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_errors, mode_error_info);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_0_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,6)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i126);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,6)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,94);
	MR_r2 = MR_tfield(3, MR_tempr3, 1);
	MR_r3 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___check_hlds__mode_errors__mode_error_0_0_i130);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_0_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i271);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_0_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,9)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i135);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,9)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(3, MR_tempr3, 1);
	MR_r3 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___term__var_1_0,
		__Compare___check_hlds__mode_errors__mode_error_0_0_i138);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_0_0,138)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i271);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___parse_tree__prog_data__mer_inst_0_0);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_0_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i143);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(3, MR_tempr3, 1);
	MR_r3 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___term__var_1_0,
		__Compare___check_hlds__mode_errors__mode_error_0_0_i146);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_0_0,146)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i271);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___parse_tree__prog_data__mer_inst_0_0);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_0_0,143)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,4)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i151);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(6) = MR_tfield(3, MR_tempr5, 4);
	MR_sv(5) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(4) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_sv(3) = MR_tfield(3, MR_tempr6, 4);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(3, MR_tempr3, 1);
	MR_r3 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___term__var_1_0,
		__Compare___check_hlds__mode_errors__mode_error_0_0_i154);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_0_0,154)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i271);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(__Compare___check_hlds__mode_errors__mode_error_unify_rhs_0_0,
		__Compare___check_hlds__mode_errors__mode_error_0_0_i158);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_0_0,158)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i271);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__mer_type_0_0,
		__Compare___check_hlds__mode_errors__mode_error_0_0_i162);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_0_0,162)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i271);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_0_0,151)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,11)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i169);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,11)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(8) = MR_tfield(3, MR_tempr5, 5);
	MR_sv(7) = MR_tfield(3, MR_tempr5, 4);
	MR_sv(6) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(5) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_sv(4) = MR_tfield(3, MR_tempr6, 5);
	MR_sv(3) = MR_tfield(3, MR_tempr6, 4);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(3, MR_tempr3, 1);
	MR_r3 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___term__var_1_0,
		__Compare___check_hlds__mode_errors__mode_error_0_0_i172);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_0_0,172)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i271);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__cons_id_0_0,
		__Compare___check_hlds__mode_errors__mode_error_0_0_i176);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_0_0,176)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i271);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,94);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___check_hlds__mode_errors__mode_error_0_0_i181);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_0_0,181)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i271);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__mer_inst_0_0,
		__Compare___check_hlds__mode_errors__mode_error_0_0_i185);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_0_0,185)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i271);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_0_0,169)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,12)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i193);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,12)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(4) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(3, MR_tempr3, 1);
	MR_r3 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___term__var_1_0,
		__Compare___check_hlds__mode_errors__mode_error_0_0_i196);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_0_0,196)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i271);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__mer_inst_0_0,
		__Compare___check_hlds__mode_errors__mode_error_0_0_i200);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_0_0,200)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i271);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___parse_tree__prog_data__mer_inst_0_0);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_0_0,193)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,13)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i206);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,13)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(3, MR_tempr3, 1);
	MR_r3 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___term__var_1_0,
		__Compare___check_hlds__mode_errors__mode_error_0_0_i209);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_0_0,209)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i271);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_0_0,206)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,14)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i214);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,14)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(3, MR_tempr3, 1);
	MR_r3 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___term__var_1_0,
		__Compare___check_hlds__mode_errors__mode_error_0_0_i217);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_0_0,217)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i271);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_0_0,214)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,10)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i222);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,10)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(6) = MR_tfield(3, MR_tempr5, 4);
	MR_sv(5) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(4) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_sv(3) = MR_tfield(3, MR_tempr6, 4);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(3, MR_tempr3, 1);
	MR_r3 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___term__var_1_0,
		__Compare___check_hlds__mode_errors__mode_error_0_0_i225);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_0_0,225)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i271);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(__Compare___term__var_1_0,
		__Compare___check_hlds__mode_errors__mode_error_0_0_i229);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_0_0,229)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i271);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__mer_inst_0_0,
		__Compare___check_hlds__mode_errors__mode_error_0_0_i233);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_0_0,233)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i271);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___parse_tree__prog_data__mer_inst_0_0);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_0_0,222)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,3)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i240);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(4) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(3, MR_tempr3, 1);
	MR_r3 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___term__var_1_0,
		__Compare___check_hlds__mode_errors__mode_error_0_0_i243);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_0_0,243)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i271);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__mer_inst_0_0,
		__Compare___check_hlds__mode_errors__mode_error_0_0_i247);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_0_0,247)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i271);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___parse_tree__prog_data__mer_inst_0_0);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_0_0,240)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,2)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i253);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i8);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___term__var_1_0);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_0_0,253)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,18)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i256);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,18)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i8);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,94);
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_0_0,256)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,17)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___check_hlds__mode_errors__mode_error_0_0_i262);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_0_0,262)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_0_0_i271);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___term__var_1_0);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(private_builtin__compare_error_0_0);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_0_0,271)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___term__context_0_0);
MR_decl_entry(__Unify___check_hlds__mode_info__mode_context_0_0);

MR_BEGIN_MODULE(check_hlds__mode_errors_module54)
	MR_init_entry1(__Unify___check_hlds__mode_errors__mode_error_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__mode_errors__mode_error_info_0_0);
	MR_init_label5(__Unify___check_hlds__mode_errors__mode_error_info_0_0,5,7,9,13,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__mode_errors__mode_error_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_info_0_0_i13);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 3);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,94);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___set_ordlist__set_ordlist_1_0,
		__Unify___check_hlds__mode_errors__mode_error_info_0_0_i5);
MR_def_label(__Unify___check_hlds__mode_errors__mode_error_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___check_hlds__mode_errors__mode_error_0_0,
		__Unify___check_hlds__mode_errors__mode_error_info_0_0_i7);
MR_def_label(__Unify___check_hlds__mode_errors__mode_error_info_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_info_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___term__context_0_0,
		__Unify___check_hlds__mode_errors__mode_error_info_0_0_i9);
MR_def_label(__Unify___check_hlds__mode_errors__mode_error_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_info_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Unify___check_hlds__mode_info__mode_context_0_0);
MR_def_label(__Unify___check_hlds__mode_errors__mode_error_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__mode_errors__mode_error_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___term__context_0_0);
MR_decl_entry(__Compare___check_hlds__mode_info__mode_context_0_0);

MR_BEGIN_MODULE(check_hlds__mode_errors_module55)
	MR_init_entry1(__Compare___check_hlds__mode_errors__mode_error_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__mode_errors__mode_error_info_0_0);
	MR_init_label6(__Compare___check_hlds__mode_errors__mode_error_info_0_0,3,2,6,10,14,50)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__mode_errors__mode_error_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_info_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_info_0_0_i2);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(6) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(5) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(3) = MR_tfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_tfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,94);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___set_ordlist__set_ordlist_1_0,
		__Compare___check_hlds__mode_errors__mode_error_info_0_0_i6);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_info_0_0_i50);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(__Compare___check_hlds__mode_errors__mode_error_0_0,
		__Compare___check_hlds__mode_errors__mode_error_info_0_0_i10);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_info_0_0_i50);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___term__context_0_0,
		__Compare___check_hlds__mode_errors__mode_error_info_0_0_i14);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_info_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_info_0_0_i50);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___check_hlds__mode_info__mode_context_0_0);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_info_0_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_errors_module56)
	MR_init_entry1(__Unify___check_hlds__mode_errors__mode_error_unify_rhs_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__mode_errors__mode_error_unify_rhs_0_0);
	MR_init_label6(__Unify___check_hlds__mode_errors__mode_error_unify_rhs_0_0,7,5,15,31,12,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__mode_errors__mode_error_unify_rhs_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_unify_rhs_0_0_i31);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_unify_rhs_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_unify_rhs_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_tfield(1, MR_tempr3, 1);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_tfield(1, MR_tempr4, 1);
	MR_r1 = MR_tfield(1, MR_tempr3, 0);
	MR_r2 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__cons_id_0_0,
		__Unify___check_hlds__mode_errors__mode_error_unify_rhs_0_0_i7);
MR_def_label(__Unify___check_hlds__mode_errors__mode_error_unify_rhs_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_unify_rhs_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,94);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___check_hlds__mode_errors__mode_error_unify_rhs_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_unify_rhs_0_0_i12);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_unify_rhs_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(2, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(2, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,94);
	MR_r2 = MR_tfield(2, MR_tempr1, 0);
	MR_r3 = MR_tfield(2, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___check_hlds__mode_errors__mode_error_unify_rhs_0_0_i15);
MR_def_label(__Unify___check_hlds__mode_errors__mode_error_unify_rhs_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_unify_rhs_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___check_hlds__mode_errors__mode_error_unify_rhs_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__mode_errors__mode_error_unify_rhs_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_error_unify_rhs_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	MR_r3 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___term__var_1_0);
MR_def_label(__Unify___check_hlds__mode_errors__mode_error_unify_rhs_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_errors_module57)
	MR_init_entry1(__Compare___check_hlds__mode_errors__mode_error_unify_rhs_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__mode_errors__mode_error_unify_rhs_0_0);
	MR_init_label10(__Compare___check_hlds__mode_errors__mode_error_unify_rhs_0_0,3,2,9,7,5,49,18,22,16,28)
	MR_init_label2(__Compare___check_hlds__mode_errors__mode_error_unify_rhs_0_0,29,104)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__mode_errors__mode_error_unify_rhs_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_unify_rhs_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_unify_rhs_0_0_i2);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_unify_rhs_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_unify_rhs_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_unify_rhs_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_unify_rhs_0_0_i7);
	}
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
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__cons_id_0_0,
		__Compare___check_hlds__mode_errors__mode_error_unify_rhs_0_0_i9);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_unify_rhs_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_unify_rhs_0_0_i104);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,94);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_unify_rhs_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_unify_rhs_0_0_i49);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_unify_rhs_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_unify_rhs_0_0_i16);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_unify_rhs_0_0_i18);
	}
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_unify_rhs_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_unify_rhs_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_unify_rhs_0_0_i49);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_tfield(2, MR_tempr5, 1);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_tfield(2, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,94);
	MR_r2 = MR_tfield(2, MR_tempr3, 0);
	MR_r3 = MR_tfield(2, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___check_hlds__mode_errors__mode_error_unify_rhs_0_0_i22);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_unify_rhs_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_unify_rhs_0_0_i104);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_unify_rhs_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_unify_rhs_0_0_i28);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_unify_rhs_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_error_unify_rhs_0_0_i29);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_unify_rhs_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	MR_r3 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___term__var_1_0);
MR_def_label(__Compare___check_hlds__mode_errors__mode_error_unify_rhs_0_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_errors_module58)
	MR_init_entry1(__Unify___check_hlds__mode_errors__mode_warning_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__mode_errors__mode_warning_0_0);
	MR_init_label8(__Unify___check_hlds__mode_errors__mode_warning_0_0,7,9,28,5,14,16,18,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__mode_errors__mode_warning_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_warning_0_0_i28);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_warning_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_warning_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_tfield(1, MR_tempr3, 1);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_tfield(1, MR_tempr3, 2);
	MR_sv(3) = MR_tfield(1, MR_tempr4, 1);
	MR_sv(4) = MR_tfield(1, MR_tempr4, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(1, MR_tempr3, 0);
	MR_r3 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		__Unify___check_hlds__mode_errors__mode_warning_0_0_i7);
MR_def_label(__Unify___check_hlds__mode_errors__mode_warning_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_warning_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_inst_0_0,
		__Unify___check_hlds__mode_errors__mode_warning_0_0_i9);
MR_def_label(__Unify___check_hlds__mode_errors__mode_warning_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_warning_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(__Unify___parse_tree__prog_data__cons_id_0_0);
MR_def_label(__Unify___check_hlds__mode_errors__mode_warning_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__mode_errors__mode_warning_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_warning_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		__Unify___check_hlds__mode_errors__mode_warning_0_0_i14);
MR_def_label(__Unify___check_hlds__mode_errors__mode_warning_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_warning_0_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		__Unify___check_hlds__mode_errors__mode_warning_0_0_i16);
MR_def_label(__Unify___check_hlds__mode_errors__mode_warning_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_warning_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_inst_0_0,
		__Unify___check_hlds__mode_errors__mode_warning_0_0_i18);
MR_def_label(__Unify___check_hlds__mode_errors__mode_warning_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_warning_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(__Unify___parse_tree__prog_data__mer_inst_0_0);
MR_def_label(__Unify___check_hlds__mode_errors__mode_warning_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_errors_module59)
	MR_init_entry1(__Compare___check_hlds__mode_errors__mode_warning_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__mode_errors__mode_warning_0_0);
	MR_init_label10(__Compare___check_hlds__mode_errors__mode_warning_0_0,3,2,9,13,7,5,20,22,26,30)
	MR_init_label1(__Compare___check_hlds__mode_errors__mode_warning_0_0,81)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__mode_errors__mode_warning_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_warning_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_warning_0_0_i2);
MR_def_label(__Compare___check_hlds__mode_errors__mode_warning_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__mode_errors__mode_warning_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_warning_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_warning_0_0_i7);
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(1, MR_tempr3, 0);
	MR_r3 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___term__var_1_0,
		__Compare___check_hlds__mode_errors__mode_warning_0_0_i9);
MR_def_label(__Compare___check_hlds__mode_errors__mode_warning_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_warning_0_0_i81);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__mer_inst_0_0,
		__Compare___check_hlds__mode_errors__mode_warning_0_0_i13);
MR_def_label(__Compare___check_hlds__mode_errors__mode_warning_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_warning_0_0_i81);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___parse_tree__prog_data__cons_id_0_0);
MR_def_label(__Compare___check_hlds__mode_errors__mode_warning_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___check_hlds__mode_errors__mode_warning_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_warning_0_0_i20);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___check_hlds__mode_errors__mode_warning_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(6) = MR_tfield(0, MR_tempr5, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr5, 3);
	MR_tempr6 = MR_sv(2);
	MR_sv(3) = MR_tfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_tfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___term__var_1_0,
		__Compare___check_hlds__mode_errors__mode_warning_0_0_i22);
MR_def_label(__Compare___check_hlds__mode_errors__mode_warning_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_warning_0_0_i81);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(__Compare___term__var_1_0,
		__Compare___check_hlds__mode_errors__mode_warning_0_0_i26);
MR_def_label(__Compare___check_hlds__mode_errors__mode_warning_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_warning_0_0_i81);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__mer_inst_0_0,
		__Compare___check_hlds__mode_errors__mode_warning_0_0_i30);
MR_def_label(__Compare___check_hlds__mode_errors__mode_warning_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_warning_0_0_i81);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___parse_tree__prog_data__mer_inst_0_0);
MR_def_label(__Compare___check_hlds__mode_errors__mode_warning_0_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_errors_module60)
	MR_init_entry1(__Unify___check_hlds__mode_errors__mode_warning_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__mode_errors__mode_warning_info_0_0);
	MR_init_label4(__Unify___check_hlds__mode_errors__mode_warning_info_0_0,4,6,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__mode_errors__mode_warning_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_warning_info_0_0_i10);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
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
	MR_np_call_localret_ent(__Unify___check_hlds__mode_errors__mode_warning_0_0,
		__Unify___check_hlds__mode_errors__mode_warning_info_0_0_i4);
MR_def_label(__Unify___check_hlds__mode_errors__mode_warning_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_warning_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___term__context_0_0,
		__Unify___check_hlds__mode_errors__mode_warning_info_0_0_i6);
MR_def_label(__Unify___check_hlds__mode_errors__mode_warning_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__mode_warning_info_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___check_hlds__mode_info__mode_context_0_0);
MR_def_label(__Unify___check_hlds__mode_errors__mode_warning_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__mode_errors__mode_warning_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_errors_module61)
	MR_init_entry1(__Compare___check_hlds__mode_errors__mode_warning_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__mode_errors__mode_warning_info_0_0);
	MR_init_label5(__Compare___check_hlds__mode_errors__mode_warning_info_0_0,3,2,5,9,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__mode_errors__mode_warning_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_warning_info_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_warning_info_0_0_i2);
MR_def_label(__Compare___check_hlds__mode_errors__mode_warning_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__mode_errors__mode_warning_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(4) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr1 = MR_tfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___check_hlds__mode_errors__mode_warning_0_0,
		__Compare___check_hlds__mode_errors__mode_warning_info_0_0_i5);
MR_def_label(__Compare___check_hlds__mode_errors__mode_warning_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_warning_info_0_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___term__context_0_0,
		__Compare___check_hlds__mode_errors__mode_warning_info_0_0_i9);
MR_def_label(__Compare___check_hlds__mode_errors__mode_warning_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__mode_warning_info_0_0_i29);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___check_hlds__mode_info__mode_context_0_0);
MR_def_label(__Compare___check_hlds__mode_errors__mode_warning_info_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_errors_module62)
	MR_init_entry1(__Unify___check_hlds__mode_errors__negated_context_desc_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__mode_errors__negated_context_desc_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__mode_errors__negated_context_desc_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_errors_module63)
	MR_init_entry1(__Compare___check_hlds__mode_errors__negated_context_desc_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__mode_errors__negated_context_desc_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__mode_errors__negated_context_desc_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_errors_module64)
	MR_init_entry1(__Unify___check_hlds__mode_errors__schedule_culprit_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__mode_errors__schedule_culprit_0_0);
	MR_init_label4(__Unify___check_hlds__mode_errors__schedule_culprit_0_0,5,15,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__mode_errors__schedule_culprit_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__schedule_culprit_0_0_i15);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__schedule_culprit_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___check_hlds__mode_errors__schedule_culprit_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__schedule_culprit_0_0_i6);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___check_hlds__mode_errors__schedule_culprit_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__mode_errors__schedule_culprit_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__schedule_culprit_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___hlds__hlds_goal__hlds_goal_0_0);
MR_def_label(__Unify___check_hlds__mode_errors__schedule_culprit_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_errors_module65)
	MR_init_entry1(__Compare___check_hlds__mode_errors__schedule_culprit_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__mode_errors__schedule_culprit_0_0);
	MR_init_label9(__Compare___check_hlds__mode_errors__schedule_culprit_0_0,7,5,11,33,9,25,14,26,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__mode_errors__schedule_culprit_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__schedule_culprit_0_0_i33);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__schedule_culprit_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__schedule_culprit_0_0_i7);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(3);
	MR_proceed();
MR_def_label(__Compare___check_hlds__mode_errors__schedule_culprit_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__schedule_culprit_0_0_i26);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__mode_errors__schedule_culprit_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__schedule_culprit_0_0_i9);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__schedule_culprit_0_0_i11);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__mode_errors__schedule_culprit_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__schedule_culprit_0_0_i25);
	}
MR_def_label(__Compare___check_hlds__mode_errors__schedule_culprit_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__mode_errors__schedule_culprit_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__schedule_culprit_0_0_i14);
	}
MR_def_label(__Compare___check_hlds__mode_errors__schedule_culprit_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__mode_errors__schedule_culprit_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__schedule_culprit_0_0_i15);
	}
MR_def_label(__Compare___check_hlds__mode_errors__schedule_culprit_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__mode_errors__schedule_culprit_0_0,15)
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

MR_decl_entry(__Unify___hlds__hlds_module__module_info_0_0);
MR_decl_entry(__Unify___varset__varset_1_0);

MR_BEGIN_MODULE(check_hlds__mode_errors_module66)
	MR_init_entry1(__Unify___check_hlds__mode_errors__write_indented_goal_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__mode_errors__write_indented_goal_0_0);
	MR_init_label4(__Unify___check_hlds__mode_errors__write_indented_goal_0_0,4,6,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__mode_errors__write_indented_goal_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__write_indented_goal_0_0_i10);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
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
	MR_np_call_localret_ent(__Unify___hlds__hlds_module__module_info_0_0,
		__Unify___check_hlds__mode_errors__write_indented_goal_0_0_i4);
MR_def_label(__Unify___check_hlds__mode_errors__write_indented_goal_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__write_indented_goal_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___check_hlds__mode_errors__write_indented_goal_0_0_i6);
MR_def_label(__Unify___check_hlds__mode_errors__write_indented_goal_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_errors__write_indented_goal_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___hlds__hlds_goal__hlds_goal_0_0);
MR_def_label(__Unify___check_hlds__mode_errors__write_indented_goal_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__mode_errors__write_indented_goal_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___hlds__hlds_module__module_info_0_0);
MR_decl_entry(__Compare___varset__varset_1_0);

MR_BEGIN_MODULE(check_hlds__mode_errors_module67)
	MR_init_entry1(__Compare___check_hlds__mode_errors__write_indented_goal_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__mode_errors__write_indented_goal_0_0);
	MR_init_label5(__Compare___check_hlds__mode_errors__write_indented_goal_0_0,3,2,5,9,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__mode_errors__write_indented_goal_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__write_indented_goal_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__mode_errors__write_indented_goal_0_0_i2);
MR_def_label(__Compare___check_hlds__mode_errors__write_indented_goal_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__mode_errors__write_indented_goal_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(4) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
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
		__Compare___check_hlds__mode_errors__write_indented_goal_0_0_i5);
MR_def_label(__Compare___check_hlds__mode_errors__write_indented_goal_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__write_indented_goal_0_0_i29);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___check_hlds__mode_errors__write_indented_goal_0_0_i9);
MR_def_label(__Compare___check_hlds__mode_errors__write_indented_goal_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_errors__write_indented_goal_0_0_i29);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___hlds__hlds_goal__hlds_goal_0_0);
MR_def_label(__Compare___check_hlds__mode_errors__write_indented_goal_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_string_3_0);
MR_decl_entry(fn__hlds__hlds_out__hlds_out_util__init_hlds_out_info_1_0);
MR_decl_entry(hlds__hlds_out__hlds_out_goal__write_goal_9_0);

MR_BEGIN_MODULE(check_hlds__mode_errors_module68)
	MR_init_entry1(check_hlds__mode_errors__ClassMethod_for_parse_tree__error_util__print_anything____check_hlds__mode_errors__write_indented_goal__arity0______parse_tree__error_util__print_anything_3_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_errors__ClassMethod_for_parse_tree__error_util__print_anything____check_hlds__mode_errors__write_indented_goal__arity0______parse_tree__error_util__print_anything_3_3_0);
	MR_init_label3(check_hlds__mode_errors__ClassMethod_for_parse_tree__error_util__print_anything____check_hlds__mode_errors__write_indented_goal__arity0______parse_tree__error_util__print_anything_3_3_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_parse_tree__error_util__print_anything____check_hlds__mode_errors__write_indented_goal__arity0______parse_tree__error_util__print_anything_3'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__mode_errors__ClassMethod_for_parse_tree__error_util__print_anything____check_hlds__mode_errors__write_indented_goal__arity0______parse_tree__error_util__print_anything_3_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_sv(3) = MR_tfield(0, MR_r1, 2);
	MR_r1 = (MR_Word) MR_string_const("\t\t", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__mode_errors__ClassMethod_for_parse_tree__error_util__print_anything____check_hlds__mode_errors__write_indented_goal__arity0______parse_tree__error_util__print_anything_3_3_0_i2);
MR_def_label(check_hlds__mode_errors__ClassMethod_for_parse_tree__error_util__print_anything____check_hlds__mode_errors__write_indented_goal__arity0______parse_tree__error_util__print_anything_3_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		check_hlds__mode_errors__ClassMethod_for_parse_tree__error_util__print_anything____check_hlds__mode_errors__write_indented_goal__arity0______parse_tree__error_util__print_anything_3_3_0_i3);
MR_def_label(check_hlds__mode_errors__ClassMethod_for_parse_tree__error_util__print_anything____check_hlds__mode_errors__write_indented_goal__arity0______parse_tree__error_util__print_anything_3_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_util__init_hlds_out_info_1_0,
		check_hlds__mode_errors__ClassMethod_for_parse_tree__error_util__print_anything____check_hlds__mode_errors__write_indented_goal__arity0______parse_tree__error_util__print_anything_3_3_0_i4);
MR_def_label(check_hlds__mode_errors__ClassMethod_for_parse_tree__error_util__print_anything____check_hlds__mode_errors__write_indented_goal__arity0______parse_tree__error_util__print_anything_3_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Integer) 2;
	MR_r7 = (MR_Word) MR_string_const(".\n", 2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(hlds__hlds_out__hlds_out_goal__write_goal_9_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_errors_module69)
	MR_init_entry1(fn__check_hlds__mode_errors__IntroducedFrom__func__report_mode_inference_message__1362__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__mode_errors__IntroducedFrom__func__report_mode_inference_message__1362__1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__report_mode_inference_message__1362__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__mode_errors__IntroducedFrom__func__report_mode_inference_message__1362__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__check_hlds__mode_errors_maybe_bunch_0(void)
{
	check_hlds__mode_errors_module0();
	check_hlds__mode_errors_module1();
	check_hlds__mode_errors_module2();
	check_hlds__mode_errors_module3();
	check_hlds__mode_errors_module4();
	check_hlds__mode_errors_module5();
	check_hlds__mode_errors_module6();
	check_hlds__mode_errors_module7();
	check_hlds__mode_errors_module8();
	check_hlds__mode_errors_module9();
	check_hlds__mode_errors_module10();
	check_hlds__mode_errors_module11();
	check_hlds__mode_errors_module12();
	check_hlds__mode_errors_module13();
	check_hlds__mode_errors_module14();
	check_hlds__mode_errors_module15();
	check_hlds__mode_errors_module16();
	check_hlds__mode_errors_module17();
	check_hlds__mode_errors_module18();
	check_hlds__mode_errors_module19();
	check_hlds__mode_errors_module20();
	check_hlds__mode_errors_module21();
	check_hlds__mode_errors_module22();
	check_hlds__mode_errors_module23();
	check_hlds__mode_errors_module24();
	check_hlds__mode_errors_module25();
	check_hlds__mode_errors_module26();
	check_hlds__mode_errors_module27();
	check_hlds__mode_errors_module28();
	check_hlds__mode_errors_module29();
	check_hlds__mode_errors_module30();
	check_hlds__mode_errors_module31();
	check_hlds__mode_errors_module32();
	check_hlds__mode_errors_module33();
	check_hlds__mode_errors_module34();
	check_hlds__mode_errors_module35();
	check_hlds__mode_errors_module36();
	check_hlds__mode_errors_module37();
	check_hlds__mode_errors_module38();
	check_hlds__mode_errors_module39();
}

static void mercury__check_hlds__mode_errors_maybe_bunch_1(void)
{
	check_hlds__mode_errors_module40();
	check_hlds__mode_errors_module41();
	check_hlds__mode_errors_module42();
	check_hlds__mode_errors_module43();
	check_hlds__mode_errors_module44();
	check_hlds__mode_errors_module45();
	check_hlds__mode_errors_module46();
	check_hlds__mode_errors_module47();
	check_hlds__mode_errors_module48();
	check_hlds__mode_errors_module49();
	check_hlds__mode_errors_module50();
	check_hlds__mode_errors_module51();
	check_hlds__mode_errors_module52();
	check_hlds__mode_errors_module53();
	check_hlds__mode_errors_module54();
	check_hlds__mode_errors_module55();
	check_hlds__mode_errors_module56();
	check_hlds__mode_errors_module57();
	check_hlds__mode_errors_module58();
	check_hlds__mode_errors_module59();
	check_hlds__mode_errors_module60();
	check_hlds__mode_errors_module61();
	check_hlds__mode_errors_module62();
	check_hlds__mode_errors_module63();
	check_hlds__mode_errors_module64();
	check_hlds__mode_errors_module65();
	check_hlds__mode_errors_module66();
	check_hlds__mode_errors_module67();
	check_hlds__mode_errors_module68();
	check_hlds__mode_errors_module69();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__check_hlds__mode_errors__init(void);
void mercury__check_hlds__mode_errors__init_type_tables(void);
void mercury__check_hlds__mode_errors__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__check_hlds__mode_errors__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__check_hlds__mode_errors__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__check_hlds__mode_errors__init_threadscope_string_table(void);
#endif

void mercury__check_hlds__mode_errors__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__check_hlds__mode_errors_maybe_bunch_0();
	mercury__check_hlds__mode_errors_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__mode_errors__type_ctor_info_delayed_goal_0,
		check_hlds__mode_errors__delayed_goal_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__mode_errors__type_ctor_info_final_inst_error_0,
		check_hlds__mode_errors__final_inst_error_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__mode_errors__type_ctor_info_include_detism_on_modes_0,
		check_hlds__mode_errors__include_detism_on_modes_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__mode_errors__type_ctor_info_merge_context_0,
		check_hlds__mode_errors__merge_context_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__mode_errors__type_ctor_info_merge_error_0,
		check_hlds__mode_errors__merge_error_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__mode_errors__type_ctor_info_merge_errors_0,
		check_hlds__mode_errors__merge_errors_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__mode_errors__type_ctor_info_mode_error_0,
		check_hlds__mode_errors__mode_error_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__mode_errors__type_ctor_info_mode_error_info_0,
		check_hlds__mode_errors__mode_error_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__mode_errors__type_ctor_info_mode_error_unify_rhs_0,
		check_hlds__mode_errors__mode_error_unify_rhs_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__mode_errors__type_ctor_info_mode_warning_0,
		check_hlds__mode_errors__mode_warning_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__mode_errors__type_ctor_info_mode_warning_info_0,
		check_hlds__mode_errors__mode_warning_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__mode_errors__type_ctor_info_negated_context_desc_0,
		check_hlds__mode_errors__negated_context_desc_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__mode_errors__type_ctor_info_schedule_culprit_0,
		check_hlds__mode_errors__schedule_culprit_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__mode_errors__type_ctor_info_write_indented_goal_0,
		check_hlds__mode_errors__write_indented_goal_0_0);
#ifndef MR_STATIC_CODE_ADDRESSES
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_parse_tree__error_util__print_anything__arity1__check_hlds__mode_errors__write_indented_goal__arity0__, 5) =
			MR_ENTRY_AP(check_hlds__mode_errors__ClassMethod_for_parse_tree__error_util__print_anything____check_hlds__mode_errors__write_indented_goal__arity0______parse_tree__error_util__print_anything_3_3_0);
#endif /* MR_STATIC_CODE_ADDRESSES */
	mercury__check_hlds__mode_errors__init_debugger();
}

void mercury__check_hlds__mode_errors__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__mode_errors__type_ctor_info_delayed_goal_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__mode_errors__type_ctor_info_final_inst_error_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__mode_errors__type_ctor_info_include_detism_on_modes_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__mode_errors__type_ctor_info_merge_context_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__mode_errors__type_ctor_info_merge_error_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__mode_errors__type_ctor_info_merge_errors_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__mode_errors__type_ctor_info_mode_error_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__mode_errors__type_ctor_info_mode_error_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__mode_errors__type_ctor_info_mode_error_unify_rhs_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__mode_errors__type_ctor_info_mode_warning_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__mode_errors__type_ctor_info_mode_warning_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__mode_errors__type_ctor_info_negated_context_desc_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__mode_errors__type_ctor_info_schedule_culprit_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__mode_errors__type_ctor_info_write_indented_goal_0);
	}
}


void mercury__check_hlds__mode_errors__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__check_hlds__mode_errors__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__check_hlds__mode_errors);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__check_hlds__mode_errors__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__check_hlds__mode_errors__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
