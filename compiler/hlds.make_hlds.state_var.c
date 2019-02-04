/*
** Automatically generated from `state_var.m'
** by the Mercury compiler,
** version rotd-2011-07-23, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__hlds__make_hlds__state_var__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 526 "../library/io.int"
#include "io.mh"

#line 28 "hlds.make_hlds.state_var.c"
#line 536 "../library/io.int"
#include "string.mh"

#line 32 "hlds.make_hlds.state_var.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 36 "hlds.make_hlds.state_var.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 40 "hlds.make_hlds.state_var.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "hlds.make_hlds.state_var.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 48 "hlds.make_hlds.state_var.c"
#line 49 "hlds.make_hlds.state_var.c"
#include "hlds.make_hlds.state_var.mh"

#line 52 "hlds.make_hlds.state_var.c"
#line 53 "hlds.make_hlds.state_var.c"
#ifndef HLDS__MAKE_HLDS__STATE_VAR_DECL_GUARD
#define HLDS__MAKE_HLDS__STATE_VAR_DECL_GUARD

#line 57 "hlds.make_hlds.state_var.c"
#line 58 "hlds.make_hlds.state_var.c"

#endif
#line 61 "hlds.make_hlds.state_var.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_String f1;
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
	MR_Integer f1;
	MR_String f2;
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
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Integer f1[2];
	MR_Word * f2[2];
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[7];
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_hlds__make_hlds__state_var__type_ctor_info_hlds_goal_svar_state_0,
	mercury_data_hlds__make_hlds__state_var__type_ctor_info_readonly_context_kind_0,
	mercury_data_hlds__make_hlds__state_var__type_ctor_info_state_var_name_source_0,
	mercury_data_hlds__make_hlds__state_var__type_ctor_info_svar_0,
	mercury_data_hlds__make_hlds__state_var__type_ctor_info_svar_inner_atomic_scope_info_0,
	mercury_data_hlds__make_hlds__state_var__type_ctor_info_svar_outer_atomic_scope_info_0,
	mercury_data_hlds__make_hlds__state_var__type_ctor_info_svar_state_0,
	mercury_data_hlds__make_hlds__state_var__type_ctor_info_svar_status_0,
	mercury_data_hlds__make_hlds__state_var__type_ctor_info_svar_store_0;
MR_decl_label10(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_102_105_110_105_115_104_95_100_105_115_106_117_110_99_116_105_111_110_95_95_91_49_93_95_48_9_0, 4,6,7,2,9,10,11,12,13,14)
MR_decl_label2(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_102_105_110_105_115_104_95_105_110_110_101_114_95_97_116_111_109_105_99_95_115_99_111_112_101_95_95_91_49_93_95_48_10_0, 3,5)
MR_decl_label5(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_115_116_97_114_116_95_105_110_110_101_114_95_97_116_111_109_105_99_95_115_99_111_112_101_95_95_91_49_93_95_48_9_0, 2,3,4,5,8)
MR_decl_label8(hlds__make_hlds__state_var__add_conjunct_delayed_renames_7_0, 2,7,9,10,3,11,12,16)
MR_decl_label3(hlds__make_hlds__state_var__compute_status_after_arms_6_0, 10,3,4)
MR_decl_label5(hlds__make_hlds__state_var__expand_bang_states_2_0, 21,22,5,4,2)
MR_decl_label1(hlds__make_hlds__state_var__expand_bang_states_clause_2_0, 2)
MR_decl_label2(hlds__make_hlds__state_var__expand_bang_states_instance_body_2_0, 17,5)
MR_decl_label5(hlds__make_hlds__state_var__expand_bang_states_method_2_0, 5,9,10,6,32)
MR_decl_label9(hlds__make_hlds__state_var__find_changes_in_arm_and_update_changed_status_map_6_0, 38,3,5,8,6,12,10,14,15)
MR_decl_label6(hlds__make_hlds__state_var__finish_svars_for_scope_4_0, 26,3,6,8,4,10)
MR_decl_label3(hlds__make_hlds__state_var__get_disjuncts_with_empty_states_3_0, 12,3,5)
MR_decl_label10(hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_0, 138,4,6,7,10,13,15,24,23,21)
MR_decl_label10(hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_0, 28,29,27,8,37,36,35,33,43,45)
MR_decl_label10(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0, 4,8,12,11,16,17,15,19,21,22)
MR_decl_label10(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0, 20,7,28,32,33,31,35,37,38,36)
MR_decl_label10(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0, 27,41,42,2,49,53,57,58,59,61)
MR_decl_label10(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0, 56,64,66,67,69,70,71,65,52,75)
MR_decl_label10(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0, 76,77,47,82,86,87,85,89,91,92)
MR_decl_label4(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0, 90,80,95,96)
MR_decl_label10(hlds__make_hlds__state_var__handle_state_vars_in_ite_25_0, 33,3,5,6,7,8,11,14,15,9)
MR_decl_label2(hlds__make_hlds__state_var__handle_state_vars_in_ite_25_0, 16,18)
MR_decl_label4(hlds__make_hlds__state_var__illegal_state_var_func_result_3_0, 5,8,11,1)
MR_decl_label2(hlds__make_hlds__state_var__lambda_args_contain_bang_state_var_2_0, 3,1)
MR_decl_label10(hlds__make_hlds__state_var__lookup_colon_state_var_9_0, 4,8,9,10,7,14,15,16,17,19)
MR_decl_label9(hlds__make_hlds__state_var__lookup_colon_state_var_9_0, 13,20,22,23,24,26,21,2,27)
MR_decl_label10(hlds__make_hlds__state_var__lookup_dot_state_var_9_0, 4,8,10,23,24,25,7,28,30,31)
MR_decl_label6(hlds__make_hlds__state_var__lookup_dot_state_var_9_0, 32,33,35,29,2,37)
MR_decl_label2(hlds__make_hlds__state_var__make_copy_goal_3_0, 3,5)
MR_decl_label6(hlds__make_hlds__state_var__make_svars_read_only_4_0, 15,16,5,8,4,2)
MR_decl_label10(hlds__make_hlds__state_var__merge_changes_made_by_arms_12_0, 42,3,4,5,9,11,12,13,10,16)
MR_decl_label3(hlds__make_hlds__state_var__merge_changes_made_by_arms_12_0, 17,18,19)
MR_decl_label6(hlds__make_hlds__state_var__new_state_var_instance_5_0, 2,4,8,9,7,11)
MR_decl_label7(hlds__make_hlds__state_var__prepare_svars_for_scope_7_0, 43,3,6,8,25,4,27)
MR_decl_label4(hlds__make_hlds__state_var__report_illegal_bang_svar_lambda_arg_5_0, 2,4,8,11)
MR_decl_label4(hlds__make_hlds__state_var__report_illegal_func_svar_result_5_0, 2,4,8,11)
MR_decl_label3(hlds__make_hlds__state_var__report_illegal_state_var_update_7_0, 2,4,10)
MR_decl_label3(hlds__make_hlds__state_var__report_missing_inits_in_disjunct_4_0, 4,10,11)
MR_decl_label3(hlds__make_hlds__state_var__report_missing_inits_in_ite_6_0, 10,20,21)
MR_decl_label3(hlds__make_hlds__state_var__report_non_visible_state_var_6_0, 2,4,5)
MR_decl_label1(hlds__make_hlds__state_var__report_repeated_head_state_var_5_0, 2)
MR_decl_label2(hlds__make_hlds__state_var__report_uninitialized_state_var_5_0, 2,4)
MR_decl_label2(hlds__make_hlds__state_var__reset_updated_status_2_0, 5,2)
MR_decl_label6(hlds__make_hlds__state_var__substitute_state_var_mapping_8_0, 9,10,2,19,20,65)
MR_decl_label3(hlds__make_hlds__state_var__substitute_state_var_mappings_8_0, 17,4,5)
MR_decl_label10(hlds__make_hlds__state_var__svar_find_final_renames_and_copy_goals_7_0, 58,3,5,6,11,14,16,17,9,8)
MR_decl_label3(hlds__make_hlds__state_var__svar_find_final_renames_and_copy_goals_7_0, 22,23,63)
MR_decl_label1(hlds__make_hlds__state_var__svar_finish_atomic_goal_3_0, 3)
MR_decl_label10(hlds__make_hlds__state_var__svar_finish_body_8_0, 3,4,6,7,8,9,13,15,16,10)
MR_decl_label4(hlds__make_hlds__state_var__svar_finish_body_8_0, 19,20,23,24)
MR_decl_label7(hlds__make_hlds__state_var__svar_finish_clause_body_9_0, 2,4,7,11,5,14,15)
MR_decl_label10(hlds__make_hlds__state_var__svar_finish_if_then_else_18_0, 3,4,5,6,8,10,12,13,14,16)
MR_decl_label10(hlds__make_hlds__state_var__svar_finish_if_then_else_18_0, 17,15,21,19,23,24,25,26,27,28)
MR_decl_label7(hlds__make_hlds__state_var__svar_finish_if_then_else_18_0, 29,30,31,32,33,36,37)
MR_decl_label1(hlds__make_hlds__state_var__svar_finish_outer_atomic_scope_3_0, 3)
MR_decl_label3(hlds__make_hlds__state_var__svar_flatten_conj_5_0, 4,5,7)
MR_decl_label5(hlds__make_hlds__state_var__svar_goal_to_conj_list_4_0, 5,10,14,6,2)
MR_decl_label4(hlds__make_hlds__state_var__svar_goal_to_conj_list_internal_6_0, 5,10,6,2)
MR_decl_label5(hlds__make_hlds__state_var__svar_prepare_for_clause_head_9_0, 3,4,7,9,10)
MR_decl_label4(hlds__make_hlds__state_var__svar_prepare_for_lambda_head_10_0, 3,4,5,6)
MR_decl_label10(hlds__make_hlds__state_var__svar_prepare_head_term_10_0, 12,16,15,19,20,21,22,23,18,28)
MR_decl_label10(hlds__make_hlds__state_var__svar_prepare_head_term_10_0, 29,30,31,32,27,36,10,39,40,44)
MR_decl_label10(hlds__make_hlds__state_var__svar_prepare_head_term_10_0, 4,52,53,57,60,61,62,63,55,67)
MR_decl_label8(hlds__make_hlds__state_var__svar_prepare_head_term_10_0, 68,71,73,69,75,46,77,222)
MR_decl_label3(hlds__make_hlds__state_var__svar_prepare_head_terms_10_0, 17,4,5)
MR_decl_label10(hlds__make_hlds__state_var__svar_start_outer_atomic_scope_11_0, 4,8,9,10,7,14,15,16,17,13)
MR_decl_label10(hlds__make_hlds__state_var__svar_start_outer_atomic_scope_11_0, 20,22,35,36,37,38,39,40,19,2)
MR_decl_label3(hlds__make_hlds__state_var__svar_start_outer_atomic_scope_11_0, 43,44,45)
MR_decl_label5(fn__hlds__make_hlds__state_var__svar_get_current_progvar_2_0, 5,6,7,3,10)
MR_decl_label3(__Unify___hlds__make_hlds__state_var__hlds_goal_svar_state_0_0, 4,8,1)
MR_decl_label4(__Unify___hlds__make_hlds__state_var__svar_inner_atomic_scope_info_0_0, 4,6,10,1)
MR_decl_label5(__Unify___hlds__make_hlds__state_var__svar_outer_atomic_scope_info_0_0, 16,5,7,9,1)
MR_decl_label1(__Unify___hlds__make_hlds__state_var__svar_state_0_0, 7)
MR_decl_label8(__Unify___hlds__make_hlds__state_var__svar_status_0_0, 5,8,6,12,38,16,21,1)
MR_decl_label4(__Unify___hlds__make_hlds__state_var__svar_store_0_0, 4,9,13,1)
MR_decl_label4(__Compare___hlds__make_hlds__state_var__hlds_goal_svar_state_0_0, 3,2,5,21)
MR_decl_label5(__Compare___hlds__make_hlds__state_var__svar_inner_atomic_scope_info_0_0, 3,2,5,9,29)
MR_decl_label7(__Compare___hlds__make_hlds__state_var__svar_outer_atomic_scope_info_0_0, 30,7,5,9,11,15,21)
MR_decl_label2(__Compare___hlds__make_hlds__state_var__svar_state_0_0, 3,2)
MR_decl_label10(__Compare___hlds__make_hlds__state_var__svar_status_0_0, 78,7,8,9,5,13,16,14,21,11)
MR_decl_label10(__Compare___hlds__make_hlds__state_var__svar_status_0_0, 25,141,26,23,32,33,34,30,38,39)
MR_decl_label4(__Compare___hlds__make_hlds__state_var__svar_status_0_0, 40,41,43,48)
MR_decl_label5(__Compare___hlds__make_hlds__state_var__svar_store_0_0, 3,2,5,12,41)
MR_def_extern_entry(hlds__make_hlds__state_var__expand_bang_states_2_0)
MR_def_extern_entry(hlds__make_hlds__state_var__expand_bang_states_instance_body_2_0)
MR_decl_static(hlds__make_hlds__state_var__new_state_var_instance_5_0)
MR_decl_static(hlds__make_hlds__state_var__report_repeated_head_state_var_5_0)
MR_decl_static(hlds__make_hlds__state_var__svar_prepare_head_terms_10_0)
MR_decl_static(hlds__make_hlds__state_var__svar_prepare_head_term_10_0)
MR_def_extern_entry(hlds__make_hlds__state_var__svar_prepare_for_clause_head_9_0)
MR_def_extern_entry(hlds__make_hlds__state_var__svar_flatten_conj_5_0)
MR_decl_static(hlds__make_hlds__state_var__make_copy_goal_3_0)
MR_decl_static(hlds__make_hlds__state_var__svar_find_final_renames_and_copy_goals_7_0)
MR_decl_static(hlds__make_hlds__state_var__svar_finish_body_8_0)
MR_def_extern_entry(hlds__make_hlds__state_var__svar_finish_clause_body_9_0)
MR_decl_static(hlds__make_hlds__state_var__make_svars_read_only_4_0)
MR_def_extern_entry(hlds__make_hlds__state_var__svar_prepare_for_lambda_head_10_0)
MR_def_extern_entry(hlds__make_hlds__state_var__svar_finish_lambda_body_8_0)
MR_def_extern_entry(hlds__make_hlds__state_var__svar_finish_atomic_goal_3_0)
MR_decl_static(hlds__make_hlds__state_var__prepare_svars_for_scope_7_0)
MR_def_extern_entry(hlds__make_hlds__state_var__svar_prepare_for_local_state_vars_7_0)
MR_decl_static(hlds__make_hlds__state_var__finish_svars_for_scope_4_0)
MR_def_extern_entry(hlds__make_hlds__state_var__svar_finish_local_state_vars_4_0)
MR_decl_static(hlds__make_hlds__state_var__get_disjuncts_with_empty_states_3_0)
MR_decl_static(hlds__make_hlds__state_var__find_changes_in_arm_and_update_changed_status_map_6_0)
MR_decl_static(hlds__make_hlds__state_var__compute_status_after_arms_6_0)
MR_decl_static(hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_0)
MR_decl_static(hlds__make_hlds__state_var__svar_goal_to_conj_list_internal_6_0)
MR_decl_static(hlds__make_hlds__state_var__report_missing_inits_in_disjunct_4_0)
MR_decl_static(hlds__make_hlds__state_var__merge_changes_made_by_arms_12_0)
MR_def_extern_entry(hlds__make_hlds__state_var__svar_finish_disjunction_9_0)
MR_def_extern_entry(hlds__make_hlds__state_var__svar_goal_to_conj_list_4_0)
MR_decl_static(fn__hlds__make_hlds__state_var__svar_get_current_progvar_2_0)
MR_decl_static(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0)
MR_decl_static(hlds__make_hlds__state_var__handle_state_vars_in_ite_25_0)
MR_decl_static(hlds__make_hlds__state_var__report_missing_inits_in_ite_6_0)
MR_def_extern_entry(hlds__make_hlds__state_var__svar_finish_if_then_else_18_0)
MR_def_extern_entry(hlds__make_hlds__state_var__report_illegal_state_var_update_7_0)
MR_decl_static(hlds__make_hlds__state_var__report_non_visible_state_var_6_0)
MR_decl_static(hlds__make_hlds__state_var__report_uninitialized_state_var_5_0)
MR_def_extern_entry(hlds__make_hlds__state_var__svar_start_outer_atomic_scope_11_0)
MR_def_extern_entry(hlds__make_hlds__state_var__svar_finish_outer_atomic_scope_3_0)
MR_def_extern_entry(hlds__make_hlds__state_var__svar_start_inner_atomic_scope_9_0)
MR_def_extern_entry(hlds__make_hlds__state_var__svar_finish_inner_atomic_scope_10_0)
MR_def_extern_entry(hlds__make_hlds__state_var__lookup_dot_state_var_9_0)
MR_def_extern_entry(hlds__make_hlds__state_var__lookup_colon_state_var_9_0)
MR_def_extern_entry(hlds__make_hlds__state_var__substitute_state_var_mapping_8_0)
MR_def_extern_entry(hlds__make_hlds__state_var__substitute_state_var_mappings_8_0)
MR_def_extern_entry(hlds__make_hlds__state_var__illegal_state_var_func_result_3_0)
MR_def_extern_entry(hlds__make_hlds__state_var__lambda_args_contain_bang_state_var_2_0)
MR_def_extern_entry(hlds__make_hlds__state_var__report_illegal_func_svar_result_5_0)
MR_def_extern_entry(hlds__make_hlds__state_var__report_illegal_bang_svar_lambda_arg_5_0)
MR_decl_static(hlds__make_hlds__state_var__expand_bang_states_method_2_0)
MR_decl_static(hlds__make_hlds__state_var__expand_bang_states_clause_2_0)
MR_decl_static(hlds__make_hlds__state_var__reset_updated_status_2_0)
MR_decl_static(hlds__make_hlds__state_var__add_conjunct_delayed_renames_7_0)
MR_decl_static(hlds__make_hlds__state_var__severity_is_error_1_0)
MR_def_extern_entry(__Unify___hlds__make_hlds__state_var__hlds_goal_svar_state_0_0)
MR_def_extern_entry(__Compare___hlds__make_hlds__state_var__hlds_goal_svar_state_0_0)
MR_decl_static(__Unify___hlds__make_hlds__state_var__readonly_context_kind_0_0)
MR_decl_static(__Compare___hlds__make_hlds__state_var__readonly_context_kind_0_0)
MR_decl_static(__Unify___hlds__make_hlds__state_var__state_var_name_source_0_0)
MR_decl_static(__Compare___hlds__make_hlds__state_var__state_var_name_source_0_0)
MR_def_extern_entry(__Unify___hlds__make_hlds__state_var__svar_0_0)
MR_def_extern_entry(__Compare___hlds__make_hlds__state_var__svar_0_0)
MR_def_extern_entry(__Unify___hlds__make_hlds__state_var__svar_inner_atomic_scope_info_0_0)
MR_def_extern_entry(__Compare___hlds__make_hlds__state_var__svar_inner_atomic_scope_info_0_0)
MR_def_extern_entry(__Unify___hlds__make_hlds__state_var__svar_outer_atomic_scope_info_0_0)
MR_def_extern_entry(__Compare___hlds__make_hlds__state_var__svar_outer_atomic_scope_info_0_0)
MR_def_extern_entry(__Unify___hlds__make_hlds__state_var__svar_state_0_0)
MR_def_extern_entry(__Compare___hlds__make_hlds__state_var__svar_state_0_0)
MR_decl_static(__Unify___hlds__make_hlds__state_var__svar_status_0_0)
MR_decl_static(__Compare___hlds__make_hlds__state_var__svar_status_0_0)
MR_def_extern_entry(__Unify___hlds__make_hlds__state_var__svar_store_0_0)
MR_def_extern_entry(__Compare___hlds__make_hlds__state_var__svar_store_0_0)
MR_decl_static(hlds__make_hlds__state_var__IntroducedFrom__pred__svar_finish_if_then_else__1190__1_2_0)
MR_decl_static(hlds__make_hlds__state_var__IntroducedFrom__pred__svar_finish_if_then_else__1192__1_2_0)
MR_decl_static(hlds__make_hlds__state_var__IntroducedFrom__pred__svar_finish_if_then_else__1194__1_2_0)
MR_decl_static(hlds__make_hlds__state_var__IntroducedFrom__pred__get_disjuncts_with_empty_states__948__1_1_0)
MR_decl_static(hlds__make_hlds__state_var__IntroducedFrom__pred__handle_arm_updated_state_vars__1058__1_2_0)
MR_decl_static(hlds__make_hlds__state_var__IntroducedFrom__pred__handle_state_vars_in_ite__1277__1_2_0)
MR_def_extern_entry(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_102_105_110_105_115_104_95_100_105_115_106_117_110_99_116_105_111_110_95_95_91_49_93_95_48_9_0)
MR_def_extern_entry(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_115_116_97_114_116_95_105_110_110_101_114_95_97_116_111_109_105_99_95_115_99_111_112_101_95_95_91_49_93_95_48_9_0)
MR_def_extern_entry(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_102_105_110_105_115_104_95_105_110_110_101_114_95_97_116_111_109_105_99_95_115_99_111_112_101_95_95_91_49_93_95_48_10_0)
MR_decl_static(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_114_101_97_100_111_110_108_121_95_99_111_110_116_101_120_116_95_107_105_110_100_95_48_95_95_91_49_44_32_50_93_95_48_2_0)
MR_decl_static(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_114_101_97_100_111_110_108_121_95_99_111_110_116_101_120_116_95_107_105_110_100_95_48_95_95_91_50_44_32_51_93_95_48_3_0)

static const struct mercury_type_0 mercury_common_0[4] =
{
{
MR_string_const("!.", 2)
},
{
MR_string_const("!:", 2)
},
{
MR_string_const("state variable", 14)
},
{
MR_string_const("!", 1)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__state_var__expand_bang_states_instance_body_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_instance_method_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__state_var__svar_finish_atomic_goal_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__make_hlds__state_var__type_ctor_info_svar_status_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__state_var__handle_state_vars_in_ite_25_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__state_var__svar_finish_if_then_else_18_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__state_var__svar_finish_if_then_else_18_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__state_var__svar_finish_if_then_else_18_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__state_var__expand_bang_states_method_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_item_clause_info_0;
static const struct mercury_type_1 mercury_common_1[8] =
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__make_hlds__state_var__expand_bang_states_instance_body_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, instance_method),
MR_CTOR0_ADDR(parse_tree__prog_data, instance_method)
},
{
(MR_Word *) &mercury_data__closure_layout__hlds__make_hlds__state_var__svar_finish_atomic_goal_3_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__make_hlds__state_var, svar_status),
MR_CTOR0_ADDR(hlds__make_hlds__state_var, svar_status)
},
{
(MR_Word *) &mercury_data__closure_layout__hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__make_hlds__state_var, svar_status),
MR_CTOR0_ADDR(hlds__make_hlds__state_var, svar_status)
},
{
(MR_Word *) &mercury_data__closure_layout__hlds__make_hlds__state_var__handle_state_vars_in_ite_25_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__make_hlds__state_var, svar_status),
MR_CTOR0_ADDR(hlds__make_hlds__state_var, svar_status)
},
{
(MR_Word *) &mercury_data__closure_layout__hlds__make_hlds__state_var__svar_finish_if_then_else_18_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(4,17),
MR_COMMON(4,17)
},
{
(MR_Word *) &mercury_data__closure_layout__hlds__make_hlds__state_var__svar_finish_if_then_else_18_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(4,17),
MR_COMMON(4,17)
},
{
(MR_Word *) &mercury_data__closure_layout__hlds__make_hlds__state_var__svar_finish_if_then_else_18_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(4,17),
MR_COMMON(4,17)
},
{
(MR_Word *) &mercury_data__closure_layout__hlds__make_hlds__state_var__expand_bang_states_method_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_item, item_clause_info),
MR_CTOR0_ADDR(parse_tree__prog_item, item_clause_info)
},
};

static const struct mercury_type_2 mercury_common_2[5] =
{
{
MR_COMMON(1,0),
MR_ENTRY_AP(hlds__make_hlds__state_var__expand_bang_states_method_2_0),
0
},
{
MR_COMMON(6,0),
MR_ENTRY_AP(hlds__make_hlds__state_var__svar_goal_to_conj_list_4_0),
0
},
{
MR_COMMON(7,0),
MR_ENTRY_AP(hlds__make_hlds__state_var__severity_is_error_1_0),
0
},
{
MR_COMMON(1,1),
MR_ENTRY_AP(hlds__make_hlds__state_var__reset_updated_status_2_0),
0
},
{
MR_COMMON(1,7),
MR_ENTRY_AP(hlds__make_hlds__state_var__expand_bang_states_clause_2_0),
0
},
};

static const struct mercury_type_3 mercury_common_3[28] =
{
{
4,
MR_string_const("Warning: clause head introduces", 31)
},
{
4,
MR_string_const("state variable", 14)
},
{
4,
MR_string_const("more than once.", 15)
},
{
4,
MR_string_const("Warning: new state variable", 27)
},
{
4,
MR_string_const("shadows old one.", 16)
},
{
4,
MR_string_const("Other disjuncts define", 22)
},
{
3,
MR_string_const(",", 1)
},
{
4,
MR_string_const("but not this one.", 17)
},
{
4,
MR_string_const("When the condition", 18)
},
{
4,
MR_string_const("the if-then-else defines", 24)
},
{
4,
MR_string_const("but when the condition", 22)
},
{
4,
MR_string_const("it does not.", 12)
},
{
4,
MR_string_const("Error: cannot use", 17)
},
{
4,
MR_string_const("here due to the surrounding", 27)
},
{
3,
MR_string_const(";", 1)
},
{
4,
MR_string_const("you may only refer to", 21)
},
{
3,
MR_string_const(".", 1)
},
{
4,
MR_string_const("Here is the surrounding context that makes", 42)
},
{
4,
MR_string_const("readonly.", 9)
},
{
4,
MR_string_const("Error: state variable", 21)
},
{
4,
MR_string_const("is not visible in this context.", 31)
},
{
4,
MR_string_const("Warning: reference to uninitialized state variable", 50)
},
{
4,
MR_string_const("Error:", 6)
},
{
4,
MR_string_const("cannot be a function result.", 28)
},
{
4,
MR_string_const("You probably meant", 18)
},
{
4,
MR_string_const("or", 2)
},
{
4,
MR_string_const("cannot be a lambda argument.", 28)
},
{
4,
MR_string_const("Perhaps you meant", 17)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_term_1;
static const struct mercury_type_4 mercury_common_4[22] =
{
{
{
MR_tbmkword(0, 1),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,3,2),
MR_TAG_COMMON(1,4,0)
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
MR_TAG_COMMON(0,5,0)
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
{
{
MR_TAG_COMMON(3,3,4),
MR_TAG_COMMON(1,4,0)
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
MR_COMMON(5,2)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_COMMON(5,2)
}
},
{
{
MR_TAG_COMMON(3,3,5),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,3,7),
MR_TAG_COMMON(1,4,0)
}
},
{
{
MR_TAG_COMMON(3,3,6),
MR_TAG_COMMON(1,4,11)
}
},
{
{
MR_TAG_COMMON(3,3,9),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,3,6),
MR_TAG_COMMON(1,4,13)
}
},
{
{
MR_TAG_COMMON(3,3,11),
MR_TAG_COMMON(1,4,0)
}
},
{
{
MR_TAG_COMMON(3,3,6),
MR_TAG_COMMON(1,4,15)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_COMMON(4,7)
}
},
{
{
MR_TAG_COMMON(3,3,16),
MR_TAG_COMMON(1,4,0)
}
},
{
{
MR_TAG_COMMON(3,3,18),
MR_TAG_COMMON(1,4,0)
}
},
{
{
MR_TAG_COMMON(3,3,20),
MR_TAG_COMMON(1,4,0)
}
},
{
{
MR_CTOR1_ADDR(term, term),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__make_hlds__state_var__type_ctor_info_svar_status_0;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_goal_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_goal_id_0;
static const struct mercury_type_5 mercury_common_5[5] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_TAG_COMMON(0,4,2),
MR_TAG_COMMON(0,4,2)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(4,7),
MR_CTOR0_ADDR(hlds__make_hlds__state_var, svar_status)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_COMMON(4,7),
MR_COMMON(4,7)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id),
MR_COMMON(4,9)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id),
MR_TAG_COMMON(0,4,3)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__state_var__svar_flatten_conj_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__make_hlds__state_var__type_ctor_info_svar_store_0;
static const struct mercury_type_6 mercury_common_6[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__make_hlds__state_var__svar_flatten_conj_5_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(4,5),
MR_CTOR0_ADDR(hlds__make_hlds__state_var, svar_store),
MR_CTOR0_ADDR(hlds__make_hlds__state_var, svar_store)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__state_var__svar_finish_clause_body_9_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__state_var__get_disjuncts_with_empty_states_3_0_1;
static const struct mercury_type_7 mercury_common_7[2] =
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__make_hlds__state_var__svar_finish_clause_body_9_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(parse_tree__error_util, error_spec)
},
{
(MR_Word *) &mercury_data__closure_layout__hlds__make_hlds__state_var__get_disjuncts_with_empty_states_3_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_COMMON(5,1)
},
};

static const struct mercury_type_8 mercury_common_8[1] =
{
{
{
40,
1
},
{
MR_tbmkword(0, 1),
MR_tbmkword(0, 0)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__state_var__svar_goal_to_conj_list_internal_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_counter__type_ctor_info_counter_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__state_var__svar_goal_to_conj_list_4_0_1;
static const struct mercury_type_9 mercury_common_9[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__make_hlds__state_var__svar_goal_to_conj_list_internal_6_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_COMMON(4,8),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(counter, counter),
MR_CTOR0_ADDR(counter, counter),
MR_COMMON(5,3),
MR_COMMON(5,3)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__make_hlds__state_var__svar_goal_to_conj_list_4_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_COMMON(4,8),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(counter, counter),
MR_CTOR0_ADDR(counter, counter),
MR_COMMON(5,3),
MR_COMMON(5,3)
}
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__make_hlds__state_var__type_ctor_info_svar_state_0;

const MR_PseudoTypeInfo mercury_data_hlds__make_hlds__state_var__field_types_hlds_goal_svar_state_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__make_hlds__state_var__type_ctor_info_svar_state_0
};

static const MR_DuFunctorDesc mercury_data_hlds__make_hlds__state_var__du_functor_desc_hlds_goal_svar_state_0_0 = {
	"hlds_goal_svar_state",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_hlds__make_hlds__state_var__field_types_hlds_goal_svar_state_0_0,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_hlds__make_hlds__state_var__du_stag_ordered_hlds_goal_svar_state_0_0[] = {
	&mercury_data_hlds__make_hlds__state_var__du_functor_desc_hlds_goal_svar_state_0_0

};

const MR_DuPtagLayout mercury_data_hlds__make_hlds__state_var__du_ptag_ordered_hlds_goal_svar_state_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_hlds__make_hlds__state_var__du_stag_ordered_hlds_goal_svar_state_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_hlds__make_hlds__state_var__du_name_ordered_hlds_goal_svar_state_0[] = {
	&mercury_data_hlds__make_hlds__state_var__du_functor_desc_hlds_goal_svar_state_0_0
};

const MR_Integer mercury_data_hlds__make_hlds__state_var__functor_number_map_hlds_goal_svar_state_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_hlds__make_hlds__state_var__type_ctor_info_hlds_goal_svar_state_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__make_hlds__state_var__hlds_goal_svar_state_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__make_hlds__state_var__hlds_goal_svar_state_0_0)),
	"hlds.make_hlds.state_var",
	"hlds_goal_svar_state",
	{ (void *)mercury_data_hlds__make_hlds__state_var__du_name_ordered_hlds_goal_svar_state_0 },
	{ (void *)mercury_data_hlds__make_hlds__state_var__du_ptag_ordered_hlds_goal_svar_state_0 },
	1,
	4,
	mercury_data_hlds__make_hlds__state_var__functor_number_map_hlds_goal_svar_state_0
};

static const MR_EnumFunctorDesc mercury_data_hlds__make_hlds__state_var__enum_functor_desc_readonly_context_kind_0_0 = {
	"roc_lambda",
	0
};

const MR_EnumFunctorDescPtr mercury_data_hlds__make_hlds__state_var__enum_value_ordered_readonly_context_kind_0[] = {
	&mercury_data_hlds__make_hlds__state_var__enum_functor_desc_readonly_context_kind_0_0
};

const MR_EnumFunctorDescPtr mercury_data_hlds__make_hlds__state_var__enum_name_ordered_readonly_context_kind_0[] = {
	&mercury_data_hlds__make_hlds__state_var__enum_functor_desc_readonly_context_kind_0_0
};

const MR_Integer mercury_data_hlds__make_hlds__state_var__functor_number_map_readonly_context_kind_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_hlds__make_hlds__state_var__type_ctor_info_readonly_context_kind_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_DUMMY,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__make_hlds__state_var__readonly_context_kind_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__make_hlds__state_var__readonly_context_kind_0_0)),
	"hlds.make_hlds.state_var",
	"readonly_context_kind",
	{ (void *)mercury_data_hlds__make_hlds__state_var__enum_name_ordered_readonly_context_kind_0 },
	{ (void *)mercury_data_hlds__make_hlds__state_var__enum_value_ordered_readonly_context_kind_0 },
	1,
	4,
	mercury_data_hlds__make_hlds__state_var__functor_number_map_readonly_context_kind_0
};

static const MR_EnumFunctorDesc mercury_data_hlds__make_hlds__state_var__enum_functor_desc_state_var_name_source_0_0 = {
	"name_initial",
	0
};

static const MR_EnumFunctorDesc mercury_data_hlds__make_hlds__state_var__enum_functor_desc_state_var_name_source_0_1 = {
	"name_middle",
	1
};

static const MR_EnumFunctorDesc mercury_data_hlds__make_hlds__state_var__enum_functor_desc_state_var_name_source_0_2 = {
	"name_final",
	2
};

const MR_EnumFunctorDescPtr mercury_data_hlds__make_hlds__state_var__enum_value_ordered_state_var_name_source_0[] = {
	&mercury_data_hlds__make_hlds__state_var__enum_functor_desc_state_var_name_source_0_0,
	&mercury_data_hlds__make_hlds__state_var__enum_functor_desc_state_var_name_source_0_1,
	&mercury_data_hlds__make_hlds__state_var__enum_functor_desc_state_var_name_source_0_2
};

const MR_EnumFunctorDescPtr mercury_data_hlds__make_hlds__state_var__enum_name_ordered_state_var_name_source_0[] = {
	&mercury_data_hlds__make_hlds__state_var__enum_functor_desc_state_var_name_source_0_2,
	&mercury_data_hlds__make_hlds__state_var__enum_functor_desc_state_var_name_source_0_0,
	&mercury_data_hlds__make_hlds__state_var__enum_functor_desc_state_var_name_source_0_1
};

const MR_Integer mercury_data_hlds__make_hlds__state_var__functor_number_map_state_var_name_source_0[] = {
	1,
	2,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_hlds__make_hlds__state_var__type_ctor_info_state_var_name_source_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__make_hlds__state_var__state_var_name_source_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__make_hlds__state_var__state_var_name_source_0_0)),
	"hlds.make_hlds.state_var",
	"state_var_name_source",
	{ (void *)mercury_data_hlds__make_hlds__state_var__enum_name_ordered_state_var_name_source_0 },
	{ (void *)mercury_data_hlds__make_hlds__state_var__enum_value_ordered_state_var_name_source_0 },
	3,
	4,
	mercury_data_hlds__make_hlds__state_var__functor_number_map_state_var_name_source_0
};

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

const MR_TypeCtorInfo_Struct mercury_data_hlds__make_hlds__state_var__type_ctor_info_svar_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__make_hlds__state_var__svar_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__make_hlds__state_var__svar_0_0)),
	"hlds.make_hlds.state_var",
	"svar",
	{ 0 },
	{ (void *)&mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 },
	-1,
	0,
	NULL
};

const MR_PseudoTypeInfo mercury_data_hlds__make_hlds__state_var__field_types_svar_inner_atomic_scope_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__make_hlds__state_var__type_ctor_info_svar_state_0
};

const MR_ConstString mercury_data_hlds__make_hlds__state_var__field_names_svar_inner_atomic_scope_info_0_0[] = {
	"siasi_state_var",
	"siasi_di_var",
	"siasi_state_before"
};

static const MR_DuFunctorDesc mercury_data_hlds__make_hlds__state_var__du_functor_desc_svar_inner_atomic_scope_info_0_0 = {
	"svar_inner_atomic_scope_info",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_hlds__make_hlds__state_var__field_types_svar_inner_atomic_scope_info_0_0,
	mercury_data_hlds__make_hlds__state_var__field_names_svar_inner_atomic_scope_info_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_hlds__make_hlds__state_var__du_stag_ordered_svar_inner_atomic_scope_info_0_0[] = {
	&mercury_data_hlds__make_hlds__state_var__du_functor_desc_svar_inner_atomic_scope_info_0_0

};

const MR_DuPtagLayout mercury_data_hlds__make_hlds__state_var__du_ptag_ordered_svar_inner_atomic_scope_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_hlds__make_hlds__state_var__du_stag_ordered_svar_inner_atomic_scope_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_hlds__make_hlds__state_var__du_name_ordered_svar_inner_atomic_scope_info_0[] = {
	&mercury_data_hlds__make_hlds__state_var__du_functor_desc_svar_inner_atomic_scope_info_0_0
};

const MR_Integer mercury_data_hlds__make_hlds__state_var__functor_number_map_svar_inner_atomic_scope_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_hlds__make_hlds__state_var__type_ctor_info_svar_inner_atomic_scope_info_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__make_hlds__state_var__svar_inner_atomic_scope_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__make_hlds__state_var__svar_inner_atomic_scope_info_0_0)),
	"hlds.make_hlds.state_var",
	"svar_inner_atomic_scope_info",
	{ (void *)mercury_data_hlds__make_hlds__state_var__du_name_ordered_svar_inner_atomic_scope_info_0 },
	{ (void *)mercury_data_hlds__make_hlds__state_var__du_ptag_ordered_svar_inner_atomic_scope_info_0 },
	1,
	4,
	mercury_data_hlds__make_hlds__state_var__functor_number_map_svar_inner_atomic_scope_info_0
};

const MR_PseudoTypeInfo mercury_data_hlds__make_hlds__state_var__field_types_svar_outer_atomic_scope_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__make_hlds__state_var__type_ctor_info_svar_status_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__make_hlds__state_var__type_ctor_info_svar_status_0
};

const MR_ConstString mercury_data_hlds__make_hlds__state_var__field_names_svar_outer_atomic_scope_info_0_0[] = {
	"soasi_state_var",
	"soasi_before_status",
	"soasi_after_status"
};

static const MR_DuFunctorDesc mercury_data_hlds__make_hlds__state_var__du_functor_desc_svar_outer_atomic_scope_info_0_0 = {
	"svar_outer_atomic_scope_info",
	3,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_hlds__make_hlds__state_var__field_types_svar_outer_atomic_scope_info_0_0,
	mercury_data_hlds__make_hlds__state_var__field_names_svar_outer_atomic_scope_info_0_0,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_hlds__make_hlds__state_var__du_functor_desc_svar_outer_atomic_scope_info_0_1 = {
	"no_svar_outer_atomic_scope_info",
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

const MR_DuFunctorDescPtr mercury_data_hlds__make_hlds__state_var__du_stag_ordered_svar_outer_atomic_scope_info_0_0[] = {
	&mercury_data_hlds__make_hlds__state_var__du_functor_desc_svar_outer_atomic_scope_info_0_1

};

const MR_DuFunctorDescPtr mercury_data_hlds__make_hlds__state_var__du_stag_ordered_svar_outer_atomic_scope_info_0_1[] = {
	&mercury_data_hlds__make_hlds__state_var__du_functor_desc_svar_outer_atomic_scope_info_0_0

};

const MR_DuPtagLayout mercury_data_hlds__make_hlds__state_var__du_ptag_ordered_svar_outer_atomic_scope_info_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_hlds__make_hlds__state_var__du_stag_ordered_svar_outer_atomic_scope_info_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_hlds__make_hlds__state_var__du_stag_ordered_svar_outer_atomic_scope_info_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_hlds__make_hlds__state_var__du_name_ordered_svar_outer_atomic_scope_info_0[] = {
	&mercury_data_hlds__make_hlds__state_var__du_functor_desc_svar_outer_atomic_scope_info_0_1,
	&mercury_data_hlds__make_hlds__state_var__du_functor_desc_svar_outer_atomic_scope_info_0_0
};

const MR_Integer mercury_data_hlds__make_hlds__state_var__functor_number_map_svar_outer_atomic_scope_info_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_hlds__make_hlds__state_var__type_ctor_info_svar_outer_atomic_scope_info_0 = {
	0,
	15,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__make_hlds__state_var__svar_outer_atomic_scope_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__make_hlds__state_var__svar_outer_atomic_scope_info_0_0)),
	"hlds.make_hlds.state_var",
	"svar_outer_atomic_scope_info",
	{ (void *)mercury_data_hlds__make_hlds__state_var__du_name_ordered_svar_outer_atomic_scope_info_0 },
	{ (void *)mercury_data_hlds__make_hlds__state_var__du_ptag_ordered_svar_outer_atomic_scope_info_0 },
	2,
	4,
	mercury_data_hlds__make_hlds__state_var__functor_number_map_svar_outer_atomic_scope_info_0
};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__make_hlds__state_var__type_ctor_info_svar_status_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_hlds__make_hlds__state_var__type_ctor_info_svar_status_0
}};

static const MR_NotagFunctorDesc mercury_data_hlds__make_hlds__state_var__notag_functor_desc_svar_state_0 = {
	"svar_state",
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__make_hlds__state_var__type_ctor_info_svar_status_0,
	"state_status_map"
};

const MR_Integer mercury_data_hlds__make_hlds__state_var__functor_number_map_svar_state_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_hlds__make_hlds__state_var__type_ctor_info_svar_state_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__make_hlds__state_var__svar_state_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__make_hlds__state_var__svar_state_0_0)),
	"hlds.make_hlds.state_var",
	"svar_state",
	{ (void *)&mercury_data_hlds__make_hlds__state_var__notag_functor_desc_svar_state_0 },
	{ (void *)&mercury_data_hlds__make_hlds__state_var__notag_functor_desc_svar_state_0 },
	1,
	4,
	mercury_data_hlds__make_hlds__state_var__functor_number_map_svar_state_0
};

static const MR_DuFunctorDesc mercury_data_hlds__make_hlds__state_var__du_functor_desc_svar_status_0_0 = {
	"status_unknown",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	0,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_hlds__make_hlds__state_var__field_types_svar_status_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_DuFunctorDesc mercury_data_hlds__make_hlds__state_var__du_functor_desc_svar_status_0_1 = {
	"status_unknown_updated",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_hlds__make_hlds__state_var__field_types_svar_status_0_1,
	NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__make_hlds__state_var__type_ctor_info_readonly_context_kind_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;

const MR_PseudoTypeInfo mercury_data_hlds__make_hlds__state_var__field_types_svar_status_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__make_hlds__state_var__type_ctor_info_readonly_context_kind_0,
	(MR_PseudoTypeInfo) &mercury_data_term__type_ctor_info_context_0
};

static const MR_DuFunctorDesc mercury_data_hlds__make_hlds__state_var__du_functor_desc_svar_status_0_2 = {
	"status_known_ro",
	3,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_hlds__make_hlds__state_var__field_types_svar_status_0_2,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_hlds__make_hlds__state_var__field_types_svar_status_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_DuFunctorDesc mercury_data_hlds__make_hlds__state_var__du_functor_desc_svar_status_0_3 = {
	"status_known",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	0,
	3,
	(MR_PseudoTypeInfo *) mercury_data_hlds__make_hlds__state_var__field_types_svar_status_0_3,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_hlds__make_hlds__state_var__field_types_svar_status_0_4[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_DuFunctorDesc mercury_data_hlds__make_hlds__state_var__du_functor_desc_svar_status_0_4 = {
	"status_known_updated",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	1,
	4,
	(MR_PseudoTypeInfo *) mercury_data_hlds__make_hlds__state_var__field_types_svar_status_0_4,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_hlds__make_hlds__state_var__du_stag_ordered_svar_status_0_0[] = {
	&mercury_data_hlds__make_hlds__state_var__du_functor_desc_svar_status_0_0

};

const MR_DuFunctorDescPtr mercury_data_hlds__make_hlds__state_var__du_stag_ordered_svar_status_0_1[] = {
	&mercury_data_hlds__make_hlds__state_var__du_functor_desc_svar_status_0_1

};

const MR_DuFunctorDescPtr mercury_data_hlds__make_hlds__state_var__du_stag_ordered_svar_status_0_2[] = {
	&mercury_data_hlds__make_hlds__state_var__du_functor_desc_svar_status_0_2

};

const MR_DuFunctorDescPtr mercury_data_hlds__make_hlds__state_var__du_stag_ordered_svar_status_0_3[] = {
	&mercury_data_hlds__make_hlds__state_var__du_functor_desc_svar_status_0_3,
	&mercury_data_hlds__make_hlds__state_var__du_functor_desc_svar_status_0_4

};

const MR_DuPtagLayout mercury_data_hlds__make_hlds__state_var__du_ptag_ordered_svar_status_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_hlds__make_hlds__state_var__du_stag_ordered_svar_status_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_hlds__make_hlds__state_var__du_stag_ordered_svar_status_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_hlds__make_hlds__state_var__du_stag_ordered_svar_status_0_2 },
	{ 2, MR_SECTAG_REMOTE,
	mercury_data_hlds__make_hlds__state_var__du_stag_ordered_svar_status_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_hlds__make_hlds__state_var__du_name_ordered_svar_status_0[] = {
	&mercury_data_hlds__make_hlds__state_var__du_functor_desc_svar_status_0_3,
	&mercury_data_hlds__make_hlds__state_var__du_functor_desc_svar_status_0_2,
	&mercury_data_hlds__make_hlds__state_var__du_functor_desc_svar_status_0_4,
	&mercury_data_hlds__make_hlds__state_var__du_functor_desc_svar_status_0_0,
	&mercury_data_hlds__make_hlds__state_var__du_functor_desc_svar_status_0_1
};

const MR_Integer mercury_data_hlds__make_hlds__state_var__functor_number_map_svar_status_0[] = {
	3,
	4,
	1,
	0,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_hlds__make_hlds__state_var__type_ctor_info_svar_status_0 = {
	0,
	15,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__make_hlds__state_var__svar_status_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__make_hlds__state_var__svar_status_0_0)),
	"hlds.make_hlds.state_var",
	"svar_status",
	{ (void *)mercury_data_hlds__make_hlds__state_var__du_name_ordered_svar_status_0 },
	{ (void *)mercury_data_hlds__make_hlds__state_var__du_ptag_ordered_svar_status_0 },
	5,
	4,
	mercury_data_hlds__make_hlds__state_var__functor_number_map_svar_status_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_counter__type_ctor_info_counter_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_mdbcomp__goal_path__type_ctor_info_goal_id_0,
	(MR_TypeInfo) &mercury_data_list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_counter__type_ctor_info_counter_0;

const MR_PseudoTypeInfo mercury_data_hlds__make_hlds__state_var__field_types_svar_store_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_counter__type_ctor_info_counter_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0
};

const MR_ConstString mercury_data_hlds__make_hlds__state_var__field_names_svar_store_0_0[] = {
	"store_next_goal_id",
	"store_final_remap",
	"store_specs"
};

static const MR_DuFunctorDesc mercury_data_hlds__make_hlds__state_var__du_functor_desc_svar_store_0_0 = {
	"svar_store",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_hlds__make_hlds__state_var__field_types_svar_store_0_0,
	mercury_data_hlds__make_hlds__state_var__field_names_svar_store_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_hlds__make_hlds__state_var__du_stag_ordered_svar_store_0_0[] = {
	&mercury_data_hlds__make_hlds__state_var__du_functor_desc_svar_store_0_0

};

const MR_DuPtagLayout mercury_data_hlds__make_hlds__state_var__du_ptag_ordered_svar_store_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_hlds__make_hlds__state_var__du_stag_ordered_svar_store_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_hlds__make_hlds__state_var__du_name_ordered_svar_store_0[] = {
	&mercury_data_hlds__make_hlds__state_var__du_functor_desc_svar_store_0_0
};

const MR_Integer mercury_data_hlds__make_hlds__state_var__functor_number_map_svar_store_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_hlds__make_hlds__state_var__type_ctor_info_svar_store_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__make_hlds__state_var__svar_store_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__make_hlds__state_var__svar_store_0_0)),
	"hlds.make_hlds.state_var",
	"svar_store",
	{ (void *)mercury_data_hlds__make_hlds__state_var__du_name_ordered_svar_store_0 },
	{ (void *)mercury_data_hlds__make_hlds__state_var__du_ptag_ordered_svar_store_0 },
	1,
	4,
	mercury_data_hlds__make_hlds__state_var__functor_number_map_svar_store_0
};


static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__state_var__expand_bang_states_method_2_0_1 = {
{
MR_PREDICATE,
"hlds.make_hlds.state_var",
"hlds.make_hlds.state_var",
"expand_bang_states_clause",
2,
0
},
"hlds.make_hlds.state_var",
"state_var.m",
442,
"11"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__state_var__svar_finish_if_then_else_18_0_3 = {
{
MR_PREDICATE,
"hlds.make_hlds.state_var",
"hlds.make_hlds.state_var",
"lambda_state_var_m_1194",
2,
0
},
"hlds.make_hlds.state_var",
"state_var.m",
1194,
"36"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__state_var__svar_finish_if_then_else_18_0_2 = {
{
MR_PREDICATE,
"hlds.make_hlds.state_var",
"hlds.make_hlds.state_var",
"lambda_state_var_m_1192",
2,
0
},
"hlds.make_hlds.state_var",
"state_var.m",
1192,
"32"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__state_var__svar_finish_if_then_else_18_0_1 = {
{
MR_PREDICATE,
"hlds.make_hlds.state_var",
"hlds.make_hlds.state_var",
"lambda_state_var_m_1190",
2,
0
},
"hlds.make_hlds.state_var",
"state_var.m",
1190,
"28"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__state_var__handle_state_vars_in_ite_25_0_1 = {
{
MR_PREDICATE,
"hlds.make_hlds.state_var",
"hlds.make_hlds.state_var",
"lambda_state_var_m_1277",
2,
0
},
"hlds.make_hlds.state_var",
"state_var.m",
1277,
"69"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__state_var__svar_goal_to_conj_list_4_0_1 = {
{
MR_PREDICATE,
"hlds.make_hlds.state_var",
"hlds.make_hlds.state_var",
"add_conjunct_delayed_renames",
7,
0
},
"hlds.make_hlds.state_var",
"state_var.m",
1834,
"17"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__state_var__svar_goal_to_conj_list_internal_6_0_1 = {
{
MR_PREDICATE,
"hlds.make_hlds.state_var",
"hlds.make_hlds.state_var",
"add_conjunct_delayed_renames",
7,
0
},
"hlds.make_hlds.state_var",
"state_var.m",
1859,
"18"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_0_1 = {
{
MR_PREDICATE,
"hlds.make_hlds.state_var",
"hlds.make_hlds.state_var",
"lambda_state_var_m_1058",
2,
0
},
"hlds.make_hlds.state_var",
"state_var.m",
1058,
"24"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__state_var__get_disjuncts_with_empty_states_3_0_1 = {
{
MR_PREDICATE,
"hlds.make_hlds.state_var",
"hlds.make_hlds.state_var",
"lambda_state_var_m_948",
1,
0
},
"hlds.make_hlds.state_var",
"state_var.m",
948,
"12"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__state_var__svar_finish_atomic_goal_3_0_1 = {
{
MR_PREDICATE,
"hlds.make_hlds.state_var",
"hlds.make_hlds.state_var",
"reset_updated_status",
2,
0
},
"hlds.make_hlds.state_var",
"state_var.m",
807,
"9"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__state_var__svar_finish_clause_body_9_0_1 = {
{
MR_PREDICATE,
"hlds.make_hlds.state_var",
"hlds.make_hlds.state_var",
"severity_is_error",
1,
0
},
"hlds.make_hlds.state_var",
"state_var.m",
654,
"13"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__state_var__svar_flatten_conj_5_0_1 = {
{
MR_PREDICATE,
"hlds.make_hlds.state_var",
"hlds.make_hlds.state_var",
"svar_goal_to_conj_list",
4,
0
},
"hlds.make_hlds.state_var",
"state_var.m",
1820,
"7"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__state_var__expand_bang_states_instance_body_2_0_1 = {
{
MR_PREDICATE,
"hlds.make_hlds.state_var",
"hlds.make_hlds.state_var",
"expand_bang_states_method",
2,
0
},
"hlds.make_hlds.state_var",
"state_var.m",
428,
"10"
};



MR_BEGIN_MODULE(hlds__make_hlds__state_var_module0)
	MR_init_entry1(hlds__make_hlds__state_var__expand_bang_states_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__state_var__expand_bang_states_2_0);
	MR_init_label5(hlds__make_hlds__state_var__expand_bang_states_2_0,21,22,5,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'expand_bang_states'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__state_var__expand_bang_states_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__expand_bang_states_2_0_i2);
	}
	MR_r5 = (MR_Word) MR_sp;
MR_def_label(hlds__make_hlds__state_var__expand_bang_states_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_incr_sp(1);
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r1,0,0))
		continue;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	break;
	} /* end while */
MR_def_label(hlds__make_hlds__state_var__expand_bang_states_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__expand_bang_states_2_0_i5);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(1);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__expand_bang_states_2_0_i5);
	}
	MR_r3 = MR_tfield(0, MR_r2, 0);
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("!", 1)) != 0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__expand_bang_states_2_0_i5);
	}
	MR_r2 = MR_tfield(0, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__expand_bang_states_2_0_i5);
	}
	MR_r3 = MR_tfield(1, MR_r2, 0);
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__expand_bang_states_2_0_i5);
	}
	MR_r3 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__expand_bang_states_2_0_i5);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr3, 2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_r4 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_tfield(0, MR_tempr2, 1) = MR_r2;
	MR_tfield(0, MR_tempr2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_r2;
	MR_GOTO_LAB(hlds__make_hlds__state_var__expand_bang_states_2_0_i4);
	}
MR_def_label(hlds__make_hlds__state_var__expand_bang_states_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
MR_def_label(hlds__make_hlds__state_var__expand_bang_states_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(1);
	if (((MR_Integer) MR_sp > (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__expand_bang_states_2_0_i22);
	}
	MR_proceed();
MR_def_label(hlds__make_hlds__state_var__expand_bang_states_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_instance_method_0;
MR_decl_entry(list__map_3_0);

MR_BEGIN_MODULE(hlds__make_hlds__state_var_module1)
	MR_init_entry1(hlds__make_hlds__state_var__expand_bang_states_instance_body_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__state_var__expand_bang_states_instance_body_2_0);
	MR_init_label2(hlds__make_hlds__state_var__expand_bang_states_instance_body_2_0,17,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'expand_bang_states_instance_body'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__state_var__expand_bang_states_instance_body_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__expand_bang_states_instance_body_2_0_i17);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(hlds__make_hlds__state_var__expand_bang_states_instance_body_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, instance_method);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(list__map_3_0,
		hlds__make_hlds__state_var__expand_bang_states_instance_body_2_0_i5);
MR_def_label(hlds__make_hlds__state_var__expand_bang_states_instance_body_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__varset__lookup_name_2_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(varset__new_named_var_4_0);
MR_decl_entry(varset__new_uniquely_named_var_4_0);

MR_BEGIN_MODULE(hlds__make_hlds__state_var_module2)
	MR_init_entry1(hlds__make_hlds__state_var__new_state_var_instance_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__state_var__new_state_var_instance_5_0);
	MR_init_label6(hlds__make_hlds__state_var__new_state_var_instance_5_0,2,4,8,9,7,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'new_state_var_instance'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__state_var__new_state_var_instance_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__varset__lookup_name_2_0,
		hlds__make_hlds__state_var__new_state_var_instance_5_0_i2);
MR_def_label(hlds__make_hlds__state_var__new_state_var_instance_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),2)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__new_state_var_instance_5_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("STATE_VARIABLE_", 15);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__state_var__new_state_var_instance_5_0_i9);
MR_def_label(hlds__make_hlds__state_var__new_state_var_instance_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__new_state_var_instance_5_0_i7);
	}
	MR_r2 = (MR_Word) MR_string_const("_0", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__state_var__new_state_var_instance_5_0_i8);
MR_def_label(hlds__make_hlds__state_var__new_state_var_instance_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("STATE_VARIABLE_", 15);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__state_var__new_state_var_instance_5_0_i9);
MR_def_label(hlds__make_hlds__state_var__new_state_var_instance_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(varset__new_named_var_4_0);
	}
MR_def_label(hlds__make_hlds__state_var__new_state_var_instance_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("STATE_VARIABLE_", 15);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__state_var__new_state_var_instance_5_0_i11);
MR_def_label(hlds__make_hlds__state_var__new_state_var_instance_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(varset__new_uniquely_named_var_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__state_var_module3)
	MR_init_entry1(hlds__make_hlds__state_var__report_repeated_head_state_var_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__state_var__report_repeated_head_state_var_5_0);
	MR_init_label1(hlds__make_hlds__state_var__report_repeated_head_state_var_5_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'report_repeated_head_state_var'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__state_var__report_repeated_head_state_var_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_np_call_localret_ent(fn__varset__lookup_name_2_0,
		hlds__make_hlds__state_var__report_repeated_head_state_var_5_0_i2);
MR_def_label(hlds__make_hlds__state_var__report_repeated_head_state_var_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,4,1);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(3,3,1);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,3,0);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_r2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = MR_sv(2);
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__state_var_module4)
	MR_init_entry1(hlds__make_hlds__state_var__svar_prepare_head_terms_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__state_var__svar_prepare_head_terms_10_0);
	MR_init_label3(hlds__make_hlds__state_var__svar_prepare_head_terms_10_0,17,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'svar_prepare_head_terms'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__state_var__svar_prepare_head_terms_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__svar_prepare_head_terms_10_0_i17);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(hlds__make_hlds__state_var__svar_prepare_head_terms_10_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_prepare_head_term_10_0,
		hlds__make_hlds__state_var__svar_prepare_head_terms_10_0_i4);
MR_def_label(hlds__make_hlds__state_var__svar_prepare_head_terms_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_localcall_lab(hlds__make_hlds__state_var__svar_prepare_head_terms_10_0,
		hlds__make_hlds__state_var__svar_prepare_head_terms_10_0_i5);
MR_def_label(hlds__make_hlds__state_var__svar_prepare_head_terms_10_0,5)
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

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(fn__term__context_init_0_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);
MR_decl_entry(require__unexpected_3_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(hlds__make_hlds__state_var_module5)
	MR_init_entry1(hlds__make_hlds__state_var__svar_prepare_head_term_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__state_var__svar_prepare_head_term_10_0);
	MR_init_label10(hlds__make_hlds__state_var__svar_prepare_head_term_10_0,12,16,15,19,20,21,22,23,18,28)
	MR_init_label10(hlds__make_hlds__state_var__svar_prepare_head_term_10_0,29,30,31,32,27,36,10,39,40,44)
	MR_init_label10(hlds__make_hlds__state_var__svar_prepare_head_term_10_0,4,52,53,57,60,61,62,63,55,67)
	MR_init_label8(hlds__make_hlds__state_var__svar_prepare_head_term_10_0,68,71,73,69,75,46,77,222)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'svar_prepare_head_term'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__state_var__svar_prepare_head_term_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__svar_prepare_head_term_10_0_i222);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(2) = MR_tfield(0, MR_r1, 2);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_tfield(0, MR_r1, 1);
	MR_r6 = MR_tempr1;
	MR_tempr2 = MR_tfield(0, MR_r1, 0);
	MR_sv(1) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__svar_prepare_head_term_10_0_i4);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr3, MR_string_const("!.", 2)) != 0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__svar_prepare_head_term_10_0_i4);
	}
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__svar_prepare_head_term_10_0_i4);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__svar_prepare_head_term_10_0_i4);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_tempr3,1)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__svar_prepare_head_term_10_0_i4);
	}
	MR_tempr4 = MR_tfield(1, MR_tempr3, 0);
	MR_sv(1) = MR_tempr4;
	MR_tempr5 = MR_r3;
	MR_sv(2) = MR_tempr5;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_tempr5;
	MR_sv(5) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__make_hlds__state_var, svar_status);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr4;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__make_hlds__state_var__svar_prepare_head_term_10_0_i12);
MR_def_label(hlds__make_hlds__state_var__svar_prepare_head_term_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__svar_prepare_head_term_10_0_i10);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__svar_prepare_head_term_10_0_i15);
	}
	MR_sv(1) = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		hlds__make_hlds__state_var__svar_prepare_head_term_10_0_i16);
MR_def_label(hlds__make_hlds__state_var__svar_prepare_head_term_10_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_decr_sp_and_return(10);
	}
MR_def_label(hlds__make_hlds__state_var__svar_prepare_head_term_10_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__svar_prepare_head_term_10_0_i18);
	}
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(fn__varset__lookup_name_2_0,
		hlds__make_hlds__state_var__svar_prepare_head_term_10_0_i19);
MR_def_label(hlds__make_hlds__state_var__svar_prepare_head_term_10_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("_0", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__state_var__svar_prepare_head_term_10_0_i20);
MR_def_label(hlds__make_hlds__state_var__svar_prepare_head_term_10_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("STATE_VARIABLE_", 15);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__state_var__svar_prepare_head_term_10_0_i21);
MR_def_label(hlds__make_hlds__state_var__svar_prepare_head_term_10_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(varset__new_named_var_4_0,
		hlds__make_hlds__state_var__svar_prepare_head_term_10_0_i22);
MR_def_label(hlds__make_hlds__state_var__svar_prepare_head_term_10_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		hlds__make_hlds__state_var__svar_prepare_head_term_10_0_i23);
MR_def_label(hlds__make_hlds__state_var__svar_prepare_head_term_10_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr4 = MR_sv(4);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_r5 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__make_hlds__state_var, svar_status);
	MR_r4 = MR_tempr3;
	MR_r6 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		hlds__make_hlds__state_var__svar_prepare_head_term_10_0_i44);
MR_def_label(hlds__make_hlds__state_var__svar_prepare_head_term_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__svar_prepare_head_term_10_0_i27);
	}
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(fn__varset__lookup_name_2_0,
		hlds__make_hlds__state_var__svar_prepare_head_term_10_0_i28);
MR_def_label(hlds__make_hlds__state_var__svar_prepare_head_term_10_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("_0", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__state_var__svar_prepare_head_term_10_0_i29);
MR_def_label(hlds__make_hlds__state_var__svar_prepare_head_term_10_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("STATE_VARIABLE_", 15);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__state_var__svar_prepare_head_term_10_0_i30);
MR_def_label(hlds__make_hlds__state_var__svar_prepare_head_term_10_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(varset__new_named_var_4_0,
		hlds__make_hlds__state_var__svar_prepare_head_term_10_0_i31);
MR_def_label(hlds__make_hlds__state_var__svar_prepare_head_term_10_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		hlds__make_hlds__state_var__svar_prepare_head_term_10_0_i32);
MR_def_label(hlds__make_hlds__state_var__svar_prepare_head_term_10_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr4 = MR_sv(4);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_r5 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__make_hlds__state_var, svar_status);
	MR_r4 = MR_tempr3;
	MR_r6 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		hlds__make_hlds__state_var__svar_prepare_head_term_10_0_i44);
MR_def_label(hlds__make_hlds__state_var__svar_prepare_head_term_10_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__svar_prepare_head_term_10_0_i36);
	}
	MR_r1 = (MR_Word) MR_string_const("hlds.make_hlds.state_var", 24);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.make_hlds.state_var.svar_prepare_head_term\'/10", 62);
	MR_r3 = (MR_Word) MR_string_const("status_known_updated for !.", 27);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(hlds__make_hlds__state_var__svar_prepare_head_term_10_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.make_hlds.state_var", 24);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.make_hlds.state_var.svar_prepare_head_term\'/10", 62);
	MR_r3 = (MR_Word) MR_string_const("status_unknown_updated for !.", 29);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(hlds__make_hlds__state_var__svar_prepare_head_term_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(hlds__make_hlds__state_var__new_state_var_instance_5_0,
		hlds__make_hlds__state_var__svar_prepare_head_term_10_0_i39);
MR_def_label(hlds__make_hlds__state_var__svar_prepare_head_term_10_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		hlds__make_hlds__state_var__svar_prepare_head_term_10_0_i40);
MR_def_label(hlds__make_hlds__state_var__svar_prepare_head_term_10_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr4 = MR_sv(4);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_r5 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__make_hlds__state_var, svar_status);
	MR_r4 = MR_tempr3;
	MR_r6 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		hlds__make_hlds__state_var__svar_prepare_head_term_10_0_i44);
MR_def_label(hlds__make_hlds__state_var__svar_prepare_head_term_10_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_decr_sp_and_return(10);
	}
MR_def_label(hlds__make_hlds__state_var__svar_prepare_head_term_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__svar_prepare_head_term_10_0_i46);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_sv(1), 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("!:", 2)) != 0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__svar_prepare_head_term_10_0_i46);
	}
	if (MR_LTAGS_TEST(MR_r6,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__svar_prepare_head_term_10_0_i46);
	}
	MR_tempr2 = MR_r6;
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__svar_prepare_head_term_10_0_i46);
	}
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__svar_prepare_head_term_10_0_i46);
	}
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(6) = MR_r5;
	MR_sv(7) = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 2;
	MR_r3 = MR_r4;
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__new_state_var_instance_5_0,
		hlds__make_hlds__state_var__svar_prepare_head_term_10_0_i52);
MR_def_label(hlds__make_hlds__state_var__svar_prepare_head_term_10_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		hlds__make_hlds__state_var__svar_prepare_head_term_10_0_i53);
MR_def_label(hlds__make_hlds__state_var__svar_prepare_head_term_10_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tempr2 = MR_sv(4);
	MR_sv(8) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__make_hlds__state_var, svar_status);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(7);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__make_hlds__state_var__svar_prepare_head_term_10_0_i57);
MR_def_label(hlds__make_hlds__state_var__svar_prepare_head_term_10_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__svar_prepare_head_term_10_0_i55);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__svar_prepare_head_term_10_0_i60);
	}
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(7);
	MR_GOTO_LAB(hlds__make_hlds__state_var__svar_prepare_head_term_10_0_i68);
MR_def_label(hlds__make_hlds__state_var__svar_prepare_head_term_10_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__svar_prepare_head_term_10_0_i61);
	}
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(7);
	MR_GOTO_LAB(hlds__make_hlds__state_var__svar_prepare_head_term_10_0_i68);
MR_def_label(hlds__make_hlds__state_var__svar_prepare_head_term_10_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__svar_prepare_head_term_10_0_i62);
	}
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(7);
	MR_GOTO_LAB(hlds__make_hlds__state_var__svar_prepare_head_term_10_0_i68);
MR_def_label(hlds__make_hlds__state_var__svar_prepare_head_term_10_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__svar_prepare_head_term_10_0_i63);
	}
	MR_r1 = (MR_Word) MR_string_const("hlds.make_hlds.state_var", 24);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.make_hlds.state_var.svar_prepare_head_term\'/10", 62);
	MR_r3 = (MR_Word) MR_string_const("status_known_updated for !:", 27);
	MR_np_call_localret_ent(require__unexpected_3_0,
		hlds__make_hlds__state_var__svar_prepare_head_term_10_0_i68);
MR_def_label(hlds__make_hlds__state_var__svar_prepare_head_term_10_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.make_hlds.state_var", 24);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.make_hlds.state_var.svar_prepare_head_term\'/10", 62);
	MR_r3 = (MR_Word) MR_string_const("status_unknown_updated for !:", 29);
	MR_np_call_localret_ent(require__unexpected_3_0,
		hlds__make_hlds__state_var__svar_prepare_head_term_10_0_i68);
MR_def_label(hlds__make_hlds__state_var__svar_prepare_head_term_10_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__make_hlds__state_var, svar_status);
	MR_r4 = MR_sv(7);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = MR_sv(8);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		hlds__make_hlds__state_var__svar_prepare_head_term_10_0_i67);
MR_def_label(hlds__make_hlds__state_var__svar_prepare_head_term_10_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(3);
	MR_sv(4) = MR_r1;
	MR_r5 = MR_sv(7);
MR_def_label(hlds__make_hlds__state_var__svar_prepare_head_term_10_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_r3 = MR_r2;
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__make_hlds__state_var__svar_prepare_head_term_10_0_i71);
MR_def_label(hlds__make_hlds__state_var__svar_prepare_head_term_10_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__svar_prepare_head_term_10_0_i69);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(hlds__make_hlds__state_var__report_repeated_head_state_var_5_0,
		hlds__make_hlds__state_var__svar_prepare_head_term_10_0_i73);
MR_def_label(hlds__make_hlds__state_var__svar_prepare_head_term_10_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(hlds__make_hlds__state_var__svar_prepare_head_term_10_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_r3 = MR_r2;
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(3);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		hlds__make_hlds__state_var__svar_prepare_head_term_10_0_i75);
MR_def_label(hlds__make_hlds__state_var__svar_prepare_head_term_10_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_decr_sp_and_return(10);
	}
MR_def_label(hlds__make_hlds__state_var__svar_prepare_head_term_10_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r6;
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_prepare_head_terms_10_0,
		hlds__make_hlds__state_var__svar_prepare_head_term_10_0_i77);
MR_def_label(hlds__make_hlds__state_var__svar_prepare_head_term_10_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(hlds__make_hlds__state_var__svar_prepare_head_term_10_0,222)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(fn__counter__init_1_0);

MR_BEGIN_MODULE(hlds__make_hlds__state_var_module6)
	MR_init_entry1(hlds__make_hlds__state_var__svar_prepare_for_clause_head_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__state_var__svar_prepare_for_clause_head_9_0);
	MR_init_label5(hlds__make_hlds__state_var__svar_prepare_for_clause_head_9_0,3,4,7,9,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'svar_prepare_for_clause_head'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__state_var__svar_prepare_for_clause_head_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__make_hlds__state_var, svar_status);
	MR_np_call_localret_ent(fn__map__init_0_0,
		hlds__make_hlds__state_var__svar_prepare_for_clause_head_9_0_i3);
MR_def_label(hlds__make_hlds__state_var__svar_prepare_for_clause_head_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__counter__init_1_0,
		hlds__make_hlds__state_var__svar_prepare_for_clause_head_9_0_i4);
MR_def_label(hlds__make_hlds__state_var__svar_prepare_for_clause_head_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,3);
	MR_np_call_localret_ent(fn__map__init_0_0,
		hlds__make_hlds__state_var__svar_prepare_for_clause_head_9_0_i7);
MR_def_label(hlds__make_hlds__state_var__svar_prepare_for_clause_head_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(5) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_r2 = MR_r1;
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		hlds__make_hlds__state_var__svar_prepare_for_clause_head_9_0_i9);
MR_def_label(hlds__make_hlds__state_var__svar_prepare_for_clause_head_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_prepare_head_terms_10_0,
		hlds__make_hlds__state_var__svar_prepare_for_clause_head_9_0_i10);
MR_def_label(hlds__make_hlds__state_var__svar_prepare_for_clause_head_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r4;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_tempr3 = MR_r5;
	MR_r5 = MR_sv(5);
	MR_r6 = MR_tempr3;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__map_foldl_5_1);
MR_decl_entry(list__condense_2_0);
MR_decl_entry(hlds__hlds_goal__goal_info_init_2_0);

MR_BEGIN_MODULE(hlds__make_hlds__state_var_module7)
	MR_init_entry1(hlds__make_hlds__state_var__svar_flatten_conj_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__state_var__svar_flatten_conj_5_0);
	MR_init_label3(hlds__make_hlds__state_var__svar_flatten_conj_5_0,4,5,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'svar_flatten_conj'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__state_var__svar_flatten_conj_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r1 = MR_sv(2);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,4);
	MR_tempr2 = MR_r3;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__make_hlds__state_var, svar_store);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		hlds__make_hlds__state_var__svar_flatten_conj_5_0_i4);
MR_def_label(hlds__make_hlds__state_var__svar_flatten_conj_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__condense_2_0,
		hlds__make_hlds__state_var__svar_flatten_conj_5_0_i5);
MR_def_label(hlds__make_hlds__state_var__svar_flatten_conj_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r2, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 2) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_2_0,
		hlds__make_hlds__state_var__svar_flatten_conj_5_0_i7);
MR_def_label(hlds__make_hlds__state_var__svar_flatten_conj_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__create_pure_atomic_complicated_unification_6_0);
MR_decl_entry(hlds__hlds_goal__goal_add_feature_3_0);

MR_BEGIN_MODULE(hlds__make_hlds__state_var_module8)
	MR_init_entry1(hlds__make_hlds__state_var__make_copy_goal_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__state_var__make_copy_goal_3_0);
	MR_init_label2(hlds__make_hlds__state_var__make_copy_goal_3_0,3,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_copy_goal'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__state_var__make_copy_goal_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_tag_alloc_heap(MR_sv(2), 0, (MR_Integer) 1);
	MR_tfield(0, MR_sv(2), 0) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		hlds__make_hlds__state_var__make_copy_goal_3_0_i3);
MR_def_label(hlds__make_hlds__state_var__make_copy_goal_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Word) MR_TAG_COMMON(3,0,2);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__create_pure_atomic_complicated_unification_6_0,
		hlds__make_hlds__state_var__make_copy_goal_3_0_i5);
MR_def_label(hlds__make_hlds__state_var__make_copy_goal_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 12;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(hlds__hlds_goal__goal_add_feature_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(hlds__make_hlds__state_var_module9)
	MR_init_entry1(hlds__make_hlds__state_var__svar_find_final_renames_and_copy_goals_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__state_var__svar_find_final_renames_and_copy_goals_7_0);
	MR_init_label10(hlds__make_hlds__state_var__svar_find_final_renames_and_copy_goals_7_0,58,3,5,6,11,14,16,17,9,8)
	MR_init_label3(hlds__make_hlds__state_var__svar_find_final_renames_and_copy_goals_7_0,22,23,63)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'svar_find_final_renames_and_copy_goals'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__state_var__svar_find_final_renames_and_copy_goals_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(hlds__make_hlds__state_var__svar_find_final_renames_and_copy_goals_7_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__svar_find_final_renames_and_copy_goals_7_0_i3);
	}
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_decr_sp_and_return(11);
MR_def_label(hlds__make_hlds__state_var__svar_find_final_renames_and_copy_goals_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(10) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(hlds__make_hlds__state_var, svar_status);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(10);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__make_hlds__state_var__svar_find_final_renames_and_copy_goals_7_0_i5);
MR_def_label(hlds__make_hlds__state_var__svar_find_final_renames_and_copy_goals_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__make_hlds__state_var__svar_find_final_renames_and_copy_goals_7_0_i6);
MR_def_label(hlds__make_hlds__state_var__svar_find_final_renames_and_copy_goals_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__svar_find_final_renames_and_copy_goals_7_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_r1, 1);
	MR_tempr2 = MR_sv(10);
	MR_sv(10) = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(__Unify___hlds__make_hlds__state_var__svar_status_0_0,
		hlds__make_hlds__state_var__svar_find_final_renames_and_copy_goals_7_0_i11);
MR_def_label(hlds__make_hlds__state_var__svar_find_final_renames_and_copy_goals_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__svar_find_final_renames_and_copy_goals_7_0_i9);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		hlds__make_hlds__state_var__svar_find_final_renames_and_copy_goals_7_0_i14);
MR_def_label(hlds__make_hlds__state_var__svar_find_final_renames_and_copy_goals_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Word) MR_TAG_COMMON(3,0,2);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__create_pure_atomic_complicated_unification_6_0,
		hlds__make_hlds__state_var__svar_find_final_renames_and_copy_goals_7_0_i16);
MR_def_label(hlds__make_hlds__state_var__svar_find_final_renames_and_copy_goals_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 12;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_add_feature_3_0,
		hlds__make_hlds__state_var__svar_find_final_renames_and_copy_goals_7_0_i17);
MR_def_label(hlds__make_hlds__state_var__svar_find_final_renames_and_copy_goals_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r1 = MR_sv(5);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(hlds__make_hlds__state_var__svar_find_final_renames_and_copy_goals_7_0_i58);
	}
MR_def_label(hlds__make_hlds__state_var__svar_find_final_renames_and_copy_goals_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(10);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r3;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r1 = MR_sv(5);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(hlds__make_hlds__state_var__svar_find_final_renames_and_copy_goals_7_0_i58);
	}
MR_def_label(hlds__make_hlds__state_var__svar_find_final_renames_and_copy_goals_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__svar_find_final_renames_and_copy_goals_7_0_i22);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r1 = MR_sv(5);
	MR_r5 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(hlds__make_hlds__state_var__svar_find_final_renames_and_copy_goals_7_0_i58);
MR_def_label(hlds__make_hlds__state_var__svar_find_final_renames_and_copy_goals_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__svar_find_final_renames_and_copy_goals_7_0_i23);
	}
	MR_r1 = (MR_Word) MR_string_const("hlds.make_hlds.state_var", 24);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.make_hlds.state_var.svar_find_final_renames_and_copy_goals\'/7", 77);
	MR_r3 = (MR_Word) MR_string_const("readonly status", 15);
	MR_np_call_localret_ent(require__unexpected_3_0,
		hlds__make_hlds__state_var__svar_find_final_renames_and_copy_goals_7_0_i63);
MR_def_label(hlds__make_hlds__state_var__svar_find_final_renames_and_copy_goals_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.make_hlds.state_var", 24);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.make_hlds.state_var.svar_find_final_renames_and_copy_goals\'/7", 77);
	MR_r3 = (MR_Word) MR_string_const("updated status", 14);
	MR_np_call_localret_ent(require__unexpected_3_0,
		hlds__make_hlds__state_var__svar_find_final_renames_and_copy_goals_7_0_i63);
MR_def_label(hlds__make_hlds__state_var__svar_find_final_renames_and_copy_goals_7_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(hlds__make_hlds__state_var__svar_find_final_renames_and_copy_goals_7_0_i58);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__to_assoc_list_2_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_goal_id_1_0);
MR_decl_entry(map__search_3_0);
MR_decl_entry(map__det_update_4_0);
MR_decl_entry(counter__allocate_3_0);
MR_decl_entry(map__det_insert_4_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_goal_id_3_0);

MR_BEGIN_MODULE(hlds__make_hlds__state_var_module10)
	MR_init_entry1(hlds__make_hlds__state_var__svar_finish_body_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__state_var__svar_finish_body_8_0);
	MR_init_label10(hlds__make_hlds__state_var__svar_finish_body_8_0,3,4,6,7,8,9,13,15,16,10)
	MR_init_label4(hlds__make_hlds__state_var__svar_finish_body_8_0,19,20,23,24)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'svar_finish_body'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__state_var__svar_finish_body_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(7) = MR_r1;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(8) = MR_r6;
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_r1 = MR_sv(10);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		hlds__make_hlds__state_var__svar_finish_body_8_0_i3);
MR_def_label(hlds__make_hlds__state_var__svar_finish_body_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_find_final_renames_and_copy_goals_7_0,
		hlds__make_hlds__state_var__svar_finish_body_8_0_i4);
MR_def_label(hlds__make_hlds__state_var__svar_finish_body_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__svar_finish_body_8_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(8);
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_flatten_conj_5_0,
		hlds__make_hlds__state_var__svar_finish_body_8_0_i8);
MR_def_label(hlds__make_hlds__state_var__svar_finish_body_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_hlds__state_var__svar_finish_body_8_0_i7);
MR_def_label(hlds__make_hlds__state_var__svar_finish_body_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(8);
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_flatten_conj_5_0,
		hlds__make_hlds__state_var__svar_finish_body_8_0_i8);
MR_def_label(hlds__make_hlds__state_var__svar_finish_body_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r1, 0);
	MR_sv(3) = MR_tfield(0, MR_r1, 1);
	MR_sv(9) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_goal_id_1_0,
		hlds__make_hlds__state_var__svar_finish_body_8_0_i9);
MR_def_label(hlds__make_hlds__state_var__svar_finish_body_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_sv(9);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 2);
	MR_r3 = MR_tfield(0, MR_tempr2, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(11) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(pair, pair, 2);
	MR_tempr3 = MR_sv(10);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr3;
	MR_tfield(0, MR_tempr1, 2) = MR_tempr3;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_sv(8) = MR_r1;
	MR_sv(5) = MR_r3;
	MR_sv(12) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id);
	MR_r4 = MR_sv(8);
	}
	MR_np_call_localret_ent(map__search_3_0,
		hlds__make_hlds__state_var__svar_finish_body_8_0_i13);
MR_def_label(hlds__make_hlds__state_var__svar_finish_body_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__svar_finish_body_8_0_i10);
	}
	MR_r1 = MR_sv(11);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_hlds__state_var__svar_finish_body_8_0_i15);
MR_def_label(hlds__make_hlds__state_var__svar_finish_body_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(5);
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		hlds__make_hlds__state_var__svar_finish_body_8_0_i16);
MR_def_label(hlds__make_hlds__state_var__svar_finish_body_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_sv(4);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tfield(0, MR_r2, 2) = MR_sv(6);
	MR_r1 = MR_sv(7);
	MR_decr_sp_and_return(13);
MR_def_label(hlds__make_hlds__state_var__svar_finish_body_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__svar_finish_body_8_0_i19);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(9);
	MR_decr_sp_and_return(13);
MR_def_label(hlds__make_hlds__state_var__svar_finish_body_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(counter__allocate_3_0,
		hlds__make_hlds__state_var__svar_finish_body_8_0_i20);
MR_def_label(hlds__make_hlds__state_var__svar_finish_body_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(pair, pair, 2);
	MR_tempr3 = MR_sv(10);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr3;
	MR_tfield(0, MR_tempr1, 2) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_sv(7) = MR_r1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(5);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		hlds__make_hlds__state_var__svar_finish_body_8_0_i23);
MR_def_label(hlds__make_hlds__state_var__svar_finish_body_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_goal_id_3_0,
		hlds__make_hlds__state_var__svar_finish_body_8_0_i24);
MR_def_label(hlds__make_hlds__state_var__svar_finish_body_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_sv(7);
	MR_tfield(0, MR_r2, 2) = MR_sv(6);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__filter_4_0);
MR_decl_entry(map__is_empty_1_0);
MR_decl_entry(hlds__hlds_goal__incremental_rename_vars_in_goal_4_0);

MR_BEGIN_MODULE(hlds__make_hlds__state_var_module11)
	MR_init_entry1(hlds__make_hlds__state_var__svar_finish_clause_body_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__state_var__svar_finish_clause_body_9_0);
	MR_init_label7(hlds__make_hlds__state_var__svar_finish_clause_body_9_0,2,4,7,11,5,14,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'svar_finish_clause_body'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__state_var__svar_finish_clause_body_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_finish_body_8_0,
		hlds__make_hlds__state_var__svar_finish_clause_body_9_0_i2);
MR_def_label(hlds__make_hlds__state_var__svar_finish_clause_body_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_tfield(0, MR_r2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_r3 = MR_tfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(list__filter_4_0,
		hlds__make_hlds__state_var__svar_finish_clause_body_9_0_i4);
MR_def_label(hlds__make_hlds__state_var__svar_finish_clause_body_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__is_empty_1_0,
		hlds__make_hlds__state_var__svar_finish_clause_body_9_0_i7);
MR_def_label(hlds__make_hlds__state_var__svar_finish_clause_body_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__svar_finish_clause_body_9_0_i5);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,3);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(map__is_empty_1_0,
		hlds__make_hlds__state_var__svar_finish_clause_body_9_0_i11);
MR_def_label(hlds__make_hlds__state_var__svar_finish_clause_body_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__svar_finish_clause_body_9_0_i5);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(6);
MR_def_label(hlds__make_hlds__state_var__svar_finish_clause_body_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__map__init_0_0,
		hlds__make_hlds__state_var__svar_finish_clause_body_9_0_i14);
MR_def_label(hlds__make_hlds__state_var__svar_finish_clause_body_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_goal__incremental_rename_vars_in_goal_4_0,
		hlds__make_hlds__state_var__svar_finish_clause_body_9_0_i15);
MR_def_label(hlds__make_hlds__state_var__svar_finish_clause_body_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__state_var_module12)
	MR_init_entry1(hlds__make_hlds__state_var__make_svars_read_only_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__state_var__make_svars_read_only_4_0);
	MR_init_label6(hlds__make_hlds__state_var__make_svars_read_only_4_0,15,16,5,8,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_svars_read_only'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__state_var__make_svars_read_only_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__make_svars_read_only_4_0_i2);
	}
	MR_r5 = (MR_Word) MR_sp;
MR_def_label(hlds__make_hlds__state_var__make_svars_read_only_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_incr_sp(4);
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r3, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_tempr1;
	MR_r3 = MR_tfield(1, MR_r3, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0))
		continue;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	}
	break;
	} /* end while */
MR_def_label(hlds__make_hlds__state_var__make_svars_read_only_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),2)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__make_svars_read_only_4_0_i5);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(4);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(hlds__make_hlds__state_var__make_svars_read_only_4_0_i4);
MR_def_label(hlds__make_hlds__state_var__make_svars_read_only_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((((MR_Integer) MR_sv(3) == (MR_Integer) MR_tbmkword(0, 0)) || (MR_tag(MR_sv(3)) == MR_mktag((MR_Integer) 1)))) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__make_svars_read_only_4_0_i4);
	}
	if (MR_RTAGS_TESTR(MR_sv(3),3,0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__make_svars_read_only_4_0_i8);
	}
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 3);
	MR_tfield(2, MR_r2, 0) = MR_tfield(3, MR_sv(3), 1);
	MR_tfield(2, MR_r2, 2) = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(hlds__make_hlds__state_var__make_svars_read_only_4_0_i4);
	}
MR_def_label(hlds__make_hlds__state_var__make_svars_read_only_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 3);
	MR_tfield(2, MR_r2, 0) = MR_tfield(3, MR_sv(3), 1);
	MR_tfield(2, MR_r2, 2) = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	}
MR_def_label(hlds__make_hlds__state_var__make_svars_read_only_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(4);
	if (((MR_Integer) MR_sp > (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__make_svars_read_only_4_0_i16);
	}
	MR_proceed();
MR_def_label(hlds__make_hlds__state_var__make_svars_read_only_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__to_sorted_assoc_list_2_0);
MR_decl_entry(map__from_sorted_assoc_list_2_0);

MR_BEGIN_MODULE(hlds__make_hlds__state_var_module13)
	MR_init_entry1(hlds__make_hlds__state_var__svar_prepare_for_lambda_head_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__state_var__svar_prepare_for_lambda_head_10_0);
	MR_init_label4(hlds__make_hlds__state_var__svar_prepare_for_lambda_head_10_0,3,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'svar_prepare_for_lambda_head'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__state_var__svar_prepare_for_lambda_head_10_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(hlds__make_hlds__state_var, svar_status);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(map__to_sorted_assoc_list_2_0,
		hlds__make_hlds__state_var__svar_prepare_for_lambda_head_10_0_i3);
MR_def_label(hlds__make_hlds__state_var__svar_prepare_for_lambda_head_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_r1;
	MR_np_call_localret_ent(hlds__make_hlds__state_var__make_svars_read_only_4_0,
		hlds__make_hlds__state_var__svar_prepare_for_lambda_head_10_0_i4);
MR_def_label(hlds__make_hlds__state_var__svar_prepare_for_lambda_head_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__from_sorted_assoc_list_2_0,
		hlds__make_hlds__state_var__svar_prepare_for_lambda_head_10_0_i5);
MR_def_label(hlds__make_hlds__state_var__svar_prepare_for_lambda_head_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__map__init_0_0,
		hlds__make_hlds__state_var__svar_prepare_for_lambda_head_10_0_i6);
MR_def_label(hlds__make_hlds__state_var__svar_prepare_for_lambda_head_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(hlds__make_hlds__state_var__svar_prepare_head_terms_10_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__state_var_module14)
	MR_init_entry1(hlds__make_hlds__state_var__svar_finish_lambda_body_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__state_var__svar_finish_lambda_body_8_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'svar_finish_lambda_body'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__state_var__svar_finish_lambda_body_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(hlds__make_hlds__state_var__svar_finish_body_8_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__map_values_only_3_0);

MR_BEGIN_MODULE(hlds__make_hlds__state_var_module15)
	MR_init_entry1(hlds__make_hlds__state_var__svar_finish_atomic_goal_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__state_var__svar_finish_atomic_goal_3_0);
	MR_init_label1(hlds__make_hlds__state_var__svar_finish_atomic_goal_3_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'svar_finish_atomic_goal'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__state_var__svar_finish_atomic_goal_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__svar_finish_atomic_goal_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(hlds__make_hlds__state_var__svar_finish_atomic_goal_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__make_hlds__state_var, svar_status);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r5 = MR_tempr1;
	MR_np_tailcall_ent(map__map_values_only_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__state_var_module16)
	MR_init_entry1(hlds__make_hlds__state_var__prepare_svars_for_scope_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__state_var__prepare_svars_for_scope_7_0);
	MR_init_label7(hlds__make_hlds__state_var__prepare_svars_for_scope_7_0,43,3,6,8,25,4,27)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'prepare_svars_for_scope'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__state_var__prepare_svars_for_scope_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(hlds__make_hlds__state_var__prepare_svars_for_scope_7_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__prepare_svars_for_scope_7_0_i3);
	}
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_decr_sp_and_return(9);
MR_def_label(hlds__make_hlds__state_var__prepare_svars_for_scope_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(5) = MR_tfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(6) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_tempr1;
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__make_hlds__state_var, svar_status);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__make_hlds__state_var__prepare_svars_for_scope_7_0_i6);
MR_def_label(hlds__make_hlds__state_var__prepare_svars_for_scope_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__prepare_svars_for_scope_7_0_i4);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(fn__varset__lookup_name_2_0,
		hlds__make_hlds__state_var__prepare_svars_for_scope_7_0_i8);
MR_def_label(hlds__make_hlds__state_var__prepare_svars_for_scope_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,4,6);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,3,3);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = ((MR_Integer) 40 | ((MR_Integer) 1 << (MR_Integer) 10));
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(1,8,0);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_tempr3, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_tempr3 = MR_sv(6);
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__make_hlds__state_var, svar_status);
	MR_r4 = MR_sv(4);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = MR_tempr3;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		hlds__make_hlds__state_var__prepare_svars_for_scope_7_0_i25);
MR_def_label(hlds__make_hlds__state_var__prepare_svars_for_scope_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(hlds__make_hlds__state_var__prepare_svars_for_scope_7_0_i43);
	}
MR_def_label(hlds__make_hlds__state_var__prepare_svars_for_scope_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__make_hlds__state_var, svar_status);
	MR_r4 = MR_sv(4);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = MR_sv(6);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		hlds__make_hlds__state_var__prepare_svars_for_scope_7_0_i27);
MR_def_label(hlds__make_hlds__state_var__prepare_svars_for_scope_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r5 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(hlds__make_hlds__state_var__prepare_svars_for_scope_7_0_i43);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__state_var_module17)
	MR_init_entry1(hlds__make_hlds__state_var__svar_prepare_for_local_state_vars_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__state_var__svar_prepare_for_local_state_vars_7_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'svar_prepare_for_local_state_vars'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__state_var__svar_prepare_for_local_state_vars_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(hlds__make_hlds__state_var__prepare_svars_for_scope_7_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__det_remove_4_0);

MR_BEGIN_MODULE(hlds__make_hlds__state_var_module18)
	MR_init_entry1(hlds__make_hlds__state_var__finish_svars_for_scope_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__state_var__finish_svars_for_scope_4_0);
	MR_init_label6(hlds__make_hlds__state_var__finish_svars_for_scope_4_0,26,3,6,8,4,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'finish_svars_for_scope'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__state_var__finish_svars_for_scope_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(hlds__make_hlds__state_var__finish_svars_for_scope_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__finish_svars_for_scope_4_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(7);
MR_def_label(hlds__make_hlds__state_var__finish_svars_for_scope_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_tfield(1, MR_r1, 1);
	MR_r5 = MR_tfield(1, MR_r1, 0);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r5;
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__make_hlds__state_var, svar_status);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__make_hlds__state_var__finish_svars_for_scope_4_0_i6);
MR_def_label(hlds__make_hlds__state_var__finish_svars_for_scope_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__finish_svars_for_scope_4_0_i4);
	}
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__make_hlds__state_var, svar_status);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		hlds__make_hlds__state_var__finish_svars_for_scope_4_0_i8);
MR_def_label(hlds__make_hlds__state_var__finish_svars_for_scope_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(hlds__make_hlds__state_var__finish_svars_for_scope_4_0_i26);
	}
MR_def_label(hlds__make_hlds__state_var__finish_svars_for_scope_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__make_hlds__state_var, svar_status);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__det_remove_4_0,
		hlds__make_hlds__state_var__finish_svars_for_scope_4_0_i10);
MR_def_label(hlds__make_hlds__state_var__finish_svars_for_scope_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(hlds__make_hlds__state_var__finish_svars_for_scope_4_0_i26);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__state_var_module19)
	MR_init_entry1(hlds__make_hlds__state_var__svar_finish_local_state_vars_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__state_var__svar_finish_local_state_vars_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'svar_finish_local_state_vars'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__state_var__svar_finish_local_state_vars_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(hlds__make_hlds__state_var__finish_svars_for_scope_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__expect_3_0);

MR_BEGIN_MODULE(hlds__make_hlds__state_var_module20)
	MR_init_entry1(hlds__make_hlds__state_var__get_disjuncts_with_empty_states_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__state_var__get_disjuncts_with_empty_states_3_0);
	MR_init_label3(hlds__make_hlds__state_var__get_disjuncts_with_empty_states_3_0,12,3,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_disjuncts_with_empty_states'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__state_var__get_disjuncts_with_empty_states_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(hlds__make_hlds__state_var__get_disjuncts_with_empty_states_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__get_disjuncts_with_empty_states_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(hlds__make_hlds__state_var__get_disjuncts_with_empty_states_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__make_hlds__state_var__IntroducedFrom__pred__get_disjuncts_with_empty_states__948__1_1_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr2 = MR_tfield(1, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 0);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("hlds.make_hlds.state_var", 24);
	MR_r3 = (MR_Word) MR_string_const("map after goal not empty", 24);
	}
	MR_np_call_localret_ent(require__expect_3_0,
		hlds__make_hlds__state_var__get_disjuncts_with_empty_states_3_0_i5);
MR_def_label(hlds__make_hlds__state_var__get_disjuncts_with_empty_states_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(hlds__make_hlds__state_var__get_disjuncts_with_empty_states_3_0_i12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__state_var_module21)
	MR_init_entry1(hlds__make_hlds__state_var__find_changes_in_arm_and_update_changed_status_map_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__state_var__find_changes_in_arm_and_update_changed_status_map_6_0);
	MR_init_label9(hlds__make_hlds__state_var__find_changes_in_arm_and_update_changed_status_map_6_0,38,3,5,8,6,12,10,14,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_changes_in_arm_and_update_changed_status_map'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__state_var__find_changes_in_arm_and_update_changed_status_map_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(hlds__make_hlds__state_var__find_changes_in_arm_and_update_changed_status_map_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__find_changes_in_arm_and_update_changed_status_map_6_0_i3);
	}
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_decr_sp_and_return(10);
MR_def_label(hlds__make_hlds__state_var__find_changes_in_arm_and_update_changed_status_map_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(hlds__make_hlds__state_var, svar_status);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__make_hlds__state_var__find_changes_in_arm_and_update_changed_status_map_6_0_i5);
MR_def_label(hlds__make_hlds__state_var__find_changes_in_arm_and_update_changed_status_map_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(__Unify___hlds__make_hlds__state_var__svar_status_0_0,
		hlds__make_hlds__state_var__find_changes_in_arm_and_update_changed_status_map_6_0_i8);
MR_def_label(hlds__make_hlds__state_var__find_changes_in_arm_and_update_changed_status_map_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__find_changes_in_arm_and_update_changed_status_map_6_0_i6);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(hlds__make_hlds__state_var__find_changes_in_arm_and_update_changed_status_map_6_0_i38);
MR_def_label(hlds__make_hlds__state_var__find_changes_in_arm_and_update_changed_status_map_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__make_hlds__state_var__find_changes_in_arm_and_update_changed_status_map_6_0_i12);
MR_def_label(hlds__make_hlds__state_var__find_changes_in_arm_and_update_changed_status_map_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__find_changes_in_arm_and_update_changed_status_map_6_0_i10);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(hlds__make_hlds__state_var__find_changes_in_arm_and_update_changed_status_map_6_0_i38);
MR_def_label(hlds__make_hlds__state_var__find_changes_in_arm_and_update_changed_status_map_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		hlds__make_hlds__state_var__find_changes_in_arm_and_update_changed_status_map_6_0_i14);
MR_def_label(hlds__make_hlds__state_var__find_changes_in_arm_and_update_changed_status_map_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(2);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		hlds__make_hlds__state_var__find_changes_in_arm_and_update_changed_status_map_6_0_i15);
MR_def_label(hlds__make_hlds__state_var__find_changes_in_arm_and_update_changed_status_map_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(hlds__make_hlds__state_var__find_changes_in_arm_and_update_changed_status_map_6_0_i38);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__state_var_module22)
	MR_init_entry1(hlds__make_hlds__state_var__compute_status_after_arms_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__state_var__compute_status_after_arms_6_0);
	MR_init_label3(hlds__make_hlds__state_var__compute_status_after_arms_6_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'compute_status_after_arms'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__state_var__compute_status_after_arms_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(hlds__make_hlds__state_var__compute_status_after_arms_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__compute_status_after_arms_6_0_i3);
	}
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_decr_sp_and_return(3);
MR_def_label(hlds__make_hlds__state_var__compute_status_after_arms_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_r2 = MR_tfield(0, MR_tfield(1, MR_r2, 0), 1);
	MR_np_call_localret_ent(hlds__make_hlds__state_var__find_changes_in_arm_and_update_changed_status_map_6_0,
		hlds__make_hlds__state_var__compute_status_after_arms_6_0_i4);
MR_def_label(hlds__make_hlds__state_var__compute_status_after_arms_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(hlds__make_hlds__state_var__compute_status_after_arms_6_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__expect_not_3_0);
MR_decl_entry(varset__lookup_name_3_0);
MR_decl_entry(__Unify___term__var_1_0);

MR_BEGIN_MODULE(hlds__make_hlds__state_var_module23)
	MR_init_entry1(hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_0);
	MR_init_label10(hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_0,138,4,6,7,10,13,15,24,23,21)
	MR_init_label10(hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_0,28,29,27,8,37,36,35,33,43,45)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'handle_arm_updated_state_vars'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_0_i138);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_0,138)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localcall_lab(hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_0,
		hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_0_i4);
MR_def_label(hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_sv(10) = (MR_Word) MR_CTOR0_ADDR(hlds__make_hlds__state_var, svar_status);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_0_i6);
MR_def_label(hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_0_i7);
MR_def_label(hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___hlds__make_hlds__state_var__svar_status_0_0,
		hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_0_i10);
MR_def_label(hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_0_i8);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_COMMON(1,2);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_ENTRY_AP(hlds__make_hlds__state_var__IntroducedFrom__pred__handle_arm_updated_state_vars__1058__1_2_0);
	MR_tfield(0, MR_r1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_r1, 3) = MR_sv(5);
	MR_tfield(0, MR_r1, 4) = MR_sv(7);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.make_hlds.state_var.handle_arm_updated_state_vars\'/7", 68);
	MR_r3 = (MR_Word) MR_string_const("AfterArmStatus = AfterAllArmsStatus", 35);
	MR_np_call_localret_ent(require__expect_not_3_0,
		hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_0_i13);
MR_def_label(hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(6),3,0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_0_i15);
	}
	if (MR_RTAGS_TESTR(MR_sv(5),3,0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_0_i23);
	}
	MR_r1 = MR_tfield(3, MR_sv(6), 1);
	MR_r2 = MR_tfield(3, MR_sv(5), 1);
	MR_np_call_localret_ent(hlds__make_hlds__state_var__make_copy_goal_3_0,
		hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_0_i24);
MR_def_label(hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(6),2)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_0_i21);
	}
	if (MR_RTAGS_TESTR(MR_sv(5),3,0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_0_i23);
	}
	MR_r1 = MR_tfield(2, MR_sv(6), 0);
	MR_r2 = MR_tfield(3, MR_sv(5), 1);
	MR_np_call_localret_ent(hlds__make_hlds__state_var__make_copy_goal_3_0,
		hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_0_i24);
MR_def_label(hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_decr_sp_and_return(11);
MR_def_label(hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.make_hlds.state_var", 24);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.make_hlds.state_var.handle_arm_updated_state_vars\'/7", 68);
	MR_r3 = (MR_Word) MR_string_const("AfterAllArmsStatus != status_known (Before == After)", 52);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_0_i27);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(varset__lookup_name_3_0,
		hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_0_i28);
MR_def_label(hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("!:", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_0_i29);
MR_def_label(hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_decr_sp_and_return(11);
	}
MR_def_label(hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.make_hlds.state_var", 24);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.make_hlds.state_var.handle_arm_updated_state_vars\'/7", 68);
	MR_r3 = (MR_Word) MR_string_const("BeforeStatus is updated", 23);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_0_i33);
	}
	if (MR_RTAGS_TESTR(MR_sv(5),3,0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_0_i35);
	}
	MR_r3 = MR_tfield(3, MR_sv(5), 1);
	MR_r2 = MR_tfield(3, MR_r1, 1);
	MR_sv(6) = MR_sv(2);
	MR_sv(8) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_0_i37);
MR_def_label(hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_0_i36);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(3);
	MR_decr_sp_and_return(11);
MR_def_label(hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(3);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_decr_sp_and_return(11);
	}
MR_def_label(hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.make_hlds.state_var", 24);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.make_hlds.state_var.handle_arm_updated_state_vars\'/7", 68);
	MR_r3 = (MR_Word) MR_string_const("AfterAllArmsStatus != status_known (Before != After)", 52);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_0_i43);
	}
	MR_r1 = (MR_Word) MR_string_const("hlds.make_hlds.state_var", 24);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.make_hlds.state_var.handle_arm_updated_state_vars\'/7", 68);
	MR_r3 = (MR_Word) MR_string_const("AfterArmStatus = status_known_ro", 32);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_0_i45);
	}
	MR_r1 = (MR_Word) MR_string_const("hlds.make_hlds.state_var", 24);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.make_hlds.state_var.handle_arm_updated_state_vars\'/7", 68);
	MR_r3 = (MR_Word) MR_string_const("AfterArmStatus = status_known_updated", 37);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.make_hlds.state_var", 24);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.make_hlds.state_var.handle_arm_updated_state_vars\'/7", 68);
	MR_r3 = (MR_Word) MR_string_const("AfterArmStatus = status_unknown", 31);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__map_foldl2_7_0);

MR_BEGIN_MODULE(hlds__make_hlds__state_var_module24)
	MR_init_entry1(hlds__make_hlds__state_var__svar_goal_to_conj_list_internal_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__state_var__svar_goal_to_conj_list_internal_6_0);
	MR_init_label4(hlds__make_hlds__state_var__svar_goal_to_conj_list_internal_6_0,5,10,6,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'svar_goal_to_conj_list_internal'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__state_var__svar_goal_to_conj_list_internal_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,2)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__svar_goal_to_conj_list_internal_6_0_i2);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__svar_goal_to_conj_list_internal_6_0_i2);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tfield(0, MR_r1, 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_goal_id_1_0,
		hlds__make_hlds__state_var__svar_goal_to_conj_list_internal_6_0_i5);
MR_def_label(hlds__make_hlds__state_var__svar_goal_to_conj_list_internal_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,4,3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__search_3_0,
		hlds__make_hlds__state_var__svar_goal_to_conj_list_internal_6_0_i10);
MR_def_label(hlds__make_hlds__state_var__svar_goal_to_conj_list_internal_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__svar_goal_to_conj_list_internal_6_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__make_hlds__state_var__add_conjunct_delayed_renames_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(counter, counter);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,5,4);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(2);
	MR_r8 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(list__map_foldl2_7_0);
	}
MR_def_label(hlds__make_hlds__state_var__svar_goal_to_conj_list_internal_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_decr_sp_and_return(5);
MR_def_label(hlds__make_hlds__state_var__svar_goal_to_conj_list_internal_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__error_util__list_to_pieces_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_format_component_0;

MR_BEGIN_MODULE(hlds__make_hlds__state_var_module25)
	MR_init_entry1(hlds__make_hlds__state_var__report_missing_inits_in_disjunct_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__state_var__report_missing_inits_in_disjunct_4_0);
	MR_init_label3(hlds__make_hlds__state_var__report_missing_inits_in_disjunct_4_0,4,10,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'report_missing_inits_in_disjunct'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__state_var__report_missing_inits_in_disjunct_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(1,4,10);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__error_util__list_to_pieces_1_0,
		hlds__make_hlds__state_var__report_missing_inits_in_disjunct_4_0_i4);
MR_def_label(hlds__make_hlds__state_var__report_missing_inits_in_disjunct_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,4,12);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_hlds__state_var__report_missing_inits_in_disjunct_4_0_i10);
MR_def_label(hlds__make_hlds__state_var__report_missing_inits_in_disjunct_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_hlds__state_var__report_missing_inits_in_disjunct_4_0_i11);
MR_def_label(hlds__make_hlds__state_var__report_missing_inits_in_disjunct_4_0,11)
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
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_r2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = MR_sv(2);
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_context_1_0);

MR_BEGIN_MODULE(hlds__make_hlds__state_var_module26)
	MR_init_entry1(hlds__make_hlds__state_var__merge_changes_made_by_arms_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__state_var__merge_changes_made_by_arms_12_0);
	MR_init_label10(hlds__make_hlds__state_var__merge_changes_made_by_arms_12_0,42,3,4,5,9,11,12,13,10,16)
	MR_init_label3(hlds__make_hlds__state_var__merge_changes_made_by_arms_12_0,17,18,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'merge_changes_made_by_arms'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__state_var__merge_changes_made_by_arms_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
MR_def_label(hlds__make_hlds__state_var__merge_changes_made_by_arms_12_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__merge_changes_made_by_arms_12_0_i3);
	}
	MR_r1 = MR_r5;
	MR_r2 = MR_r6;
	MR_r3 = MR_r7;
	MR_r4 = MR_r8;
	MR_decr_sp_and_return(13);
MR_def_label(hlds__make_hlds__state_var__merge_changes_made_by_arms_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(8) = MR_r7;
	MR_sv(5) = MR_r8;
	MR_sv(6) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(9) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_r6;
	}
	MR_np_call_localret_ent(counter__allocate_3_0,
		hlds__make_hlds__state_var__merge_changes_made_by_arms_12_0_i4);
MR_def_label(hlds__make_hlds__state_var__merge_changes_made_by_arms_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_sv(11) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_0,
		hlds__make_hlds__state_var__merge_changes_made_by_arms_12_0_i5);
MR_def_label(hlds__make_hlds__state_var__merge_changes_made_by_arms_12_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,3);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		hlds__make_hlds__state_var__merge_changes_made_by_arms_12_0_i9);
MR_def_label(hlds__make_hlds__state_var__merge_changes_made_by_arms_12_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(10),0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__merge_changes_made_by_arms_12_0_i11);
	}
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(7);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_sv(10) = MR_tfield(0, MR_tempr1, 0);
	MR_GOTO_LAB(hlds__make_hlds__state_var__merge_changes_made_by_arms_12_0_i10);
	}
MR_def_label(hlds__make_hlds__state_var__merge_changes_made_by_arms_12_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(11);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_goal_to_conj_list_internal_6_0,
		hlds__make_hlds__state_var__merge_changes_made_by_arms_12_0_i12);
MR_def_label(hlds__make_hlds__state_var__merge_changes_made_by_arms_12_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r2;
	MR_sv(12) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(10);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_hlds__state_var__merge_changes_made_by_arms_12_0_i13);
MR_def_label(hlds__make_hlds__state_var__merge_changes_made_by_arms_12_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_sv(10) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(9);
	}
MR_def_label(hlds__make_hlds__state_var__merge_changes_made_by_arms_12_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(8),0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__merge_changes_made_by_arms_12_0_i16);
	}
	MR_sv(8) = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_goal_id_3_0,
		hlds__make_hlds__state_var__merge_changes_made_by_arms_12_0_i19);
MR_def_label(hlds__make_hlds__state_var__merge_changes_made_by_arms_12_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		hlds__make_hlds__state_var__merge_changes_made_by_arms_12_0_i17);
MR_def_label(hlds__make_hlds__state_var__merge_changes_made_by_arms_12_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(hlds__make_hlds__state_var__report_missing_inits_in_disjunct_4_0,
		hlds__make_hlds__state_var__merge_changes_made_by_arms_12_0_i18);
MR_def_label(hlds__make_hlds__state_var__merge_changes_made_by_arms_12_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_goal_id_3_0,
		hlds__make_hlds__state_var__merge_changes_made_by_arms_12_0_i19);
MR_def_label(hlds__make_hlds__state_var__merge_changes_made_by_arms_12_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(4);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r6 = MR_sv(11);
	MR_r7 = MR_sv(12);
	MR_r8 = MR_sv(8);
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(hlds__make_hlds__state_var__merge_changes_made_by_arms_12_0_i42);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__state_var_module27)
	MR_init_entry1(hlds__make_hlds__state_var__svar_finish_disjunction_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__state_var__svar_finish_disjunction_9_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'svar_finish_disjunction'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__state_var__svar_finish_disjunction_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_np_tailcall_ent(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_102_105_110_105_115_104_95_100_105_115_106_117_110_99_116_105_111_110_95_95_91_49_93_95_48_9_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__state_var_module28)
	MR_init_entry1(hlds__make_hlds__state_var__svar_goal_to_conj_list_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__state_var__svar_goal_to_conj_list_4_0);
	MR_init_label5(hlds__make_hlds__state_var__svar_goal_to_conj_list_4_0,5,10,14,6,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'svar_goal_to_conj_list'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__state_var__svar_goal_to_conj_list_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,2)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__svar_goal_to_conj_list_4_0_i2);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__svar_goal_to_conj_list_4_0_i2);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(2) = MR_tfield(0, MR_r2, 0);
	MR_sv(3) = MR_tfield(0, MR_r2, 1);
	MR_sv(4) = MR_tfield(0, MR_r2, 2);
	MR_sv(5) = MR_r2;
	MR_r1 = MR_tfield(0, MR_r1, 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_goal_id_1_0,
		hlds__make_hlds__state_var__svar_goal_to_conj_list_4_0_i5);
MR_def_label(hlds__make_hlds__state_var__svar_goal_to_conj_list_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,4,3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__search_3_0,
		hlds__make_hlds__state_var__svar_goal_to_conj_list_4_0_i10);
MR_def_label(hlds__make_hlds__state_var__svar_goal_to_conj_list_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__svar_goal_to_conj_list_4_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__make_hlds__state_var__add_conjunct_delayed_renames_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(counter, counter);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,5,4);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(2);
	MR_r8 = MR_sv(3);
	}
	MR_np_call_localret_ent(list__map_foldl2_7_0,
		hlds__make_hlds__state_var__svar_goal_to_conj_list_4_0_i14);
MR_def_label(hlds__make_hlds__state_var__svar_goal_to_conj_list_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_r3;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(hlds__make_hlds__state_var__svar_goal_to_conj_list_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(7);
MR_def_label(hlds__make_hlds__state_var__svar_goal_to_conj_list_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__state_var_module29)
	MR_init_entry1(fn__hlds__make_hlds__state_var__svar_get_current_progvar_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__make_hlds__state_var__svar_get_current_progvar_2_0);
	MR_init_label5(fn__hlds__make_hlds__state_var__svar_get_current_progvar_2_0,5,6,7,3,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'svar_get_current_progvar'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__make_hlds__state_var__svar_get_current_progvar_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__hlds__make_hlds__state_var__svar_get_current_progvar_2_0_i3);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(fn__hlds__make_hlds__state_var__svar_get_current_progvar_2_0_i5);
	}
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_proceed();
MR_def_label(fn__hlds__make_hlds__state_var__svar_get_current_progvar_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(fn__hlds__make_hlds__state_var__svar_get_current_progvar_2_0_i6);
	}
	MR_r1 = MR_tfield(3, MR_r2, 2);
	MR_proceed();
MR_def_label(fn__hlds__make_hlds__state_var__svar_get_current_progvar_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(fn__hlds__make_hlds__state_var__svar_get_current_progvar_2_0_i7);
	}
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_proceed();
MR_def_label(fn__hlds__make_hlds__state_var__svar_get_current_progvar_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.make_hlds.state_var", 24);
	MR_r2 = (MR_Word) MR_string_const("function \140hlds.make_hlds.state_var.svar_get_current_progvar\'/2", 62);
	MR_r3 = (MR_Word) MR_string_const("Status not known or updated", 27);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(fn__hlds__make_hlds__state_var__svar_get_current_progvar_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(fn__hlds__make_hlds__state_var__svar_get_current_progvar_2_0_i10);
	}
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_proceed();
MR_def_label(fn__hlds__make_hlds__state_var__svar_get_current_progvar_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.make_hlds.state_var", 24);
	MR_r2 = (MR_Word) MR_string_const("function \140hlds.make_hlds.state_var.svar_get_current_progvar\'/2", 62);
	MR_r3 = (MR_Word) MR_string_const("Status not known", 16);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__state_var_module30)
	MR_init_entry1(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__state_var__handle_state_var_in_ite_23_0);
	MR_init_label10(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0,4,8,12,11,16,17,15,19,21,22)
	MR_init_label10(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0,20,7,28,32,33,31,35,37,38,36)
	MR_init_label10(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0,27,41,42,2,49,53,57,58,59,61)
	MR_init_label10(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0,56,64,66,67,69,70,71,65,52,75)
	MR_init_label10(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0,76,77,47,82,86,87,85,89,91,92)
	MR_init_label4(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0,90,80,95,96)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'handle_state_var_in_ite'/23 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(6) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_sv(9) = MR_r9;
	MR_sv(10) = MR_r10;
	MR_sv(11) = MR_r11;
	MR_sv(12) = MR_r12;
	MR_sv(13) = MR_r13;
	MR_sv(14) = MR_r14;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___hlds__make_hlds__state_var__svar_status_0_0,
		hlds__make_hlds__state_var__handle_state_var_in_ite_23_0_i4);
MR_def_label(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0_i2);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___hlds__make_hlds__state_var__svar_status_0_0,
		hlds__make_hlds__state_var__handle_state_var_in_ite_23_0_i8);
MR_def_label(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0_i7);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(__Unify___hlds__make_hlds__state_var__svar_status_0_0,
		hlds__make_hlds__state_var__handle_state_var_in_ite_23_0_i12);
MR_def_label(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0_i11);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(11);
	MR_r7 = MR_sv(12);
	MR_r8 = MR_sv(13);
	MR_r9 = MR_sv(14);
	MR_decr_sp_and_return(15);
MR_def_label(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0_i15);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__hlds__make_hlds__state_var__svar_get_current_progvar_2_0,
		hlds__make_hlds__state_var__handle_state_var_in_ite_23_0_i16);
MR_def_label(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__make_copy_goal_3_0,
		hlds__make_hlds__state_var__handle_state_var_in_ite_23_0_i17);
MR_def_label(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(9);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(11);
	MR_r7 = MR_sv(12);
	MR_r8 = MR_sv(13);
	MR_r9 = MR_sv(14);
	MR_decr_sp_and_return(15);
	}
MR_def_label(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0_i19);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(11);
	MR_r7 = MR_sv(12);
	MR_r8 = MR_sv(13);
	MR_r9 = MR_sv(14);
	MR_decr_sp_and_return(15);
MR_def_label(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0_i20);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(varset__lookup_name_3_0,
		hlds__make_hlds__state_var__handle_state_var_in_ite_23_0_i21);
MR_def_label(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("!:", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__state_var__handle_state_var_in_ite_23_0_i22);
MR_def_label(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r8 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(13);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(11);
	MR_r7 = MR_sv(12);
	MR_r9 = MR_sv(14);
	MR_decr_sp_and_return(15);
	}
MR_def_label(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.make_hlds.state_var", 24);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.make_hlds.state_var.handle_state_var_in_ite\'/23", 63);
	MR_r3 = (MR_Word) MR_string_const("updated before (case 2)", 23);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(__Unify___hlds__make_hlds__state_var__svar_status_0_0,
		hlds__make_hlds__state_var__handle_state_var_in_ite_23_0_i28);
MR_def_label(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0_i27);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0_i31);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__hlds__make_hlds__state_var__svar_get_current_progvar_2_0,
		hlds__make_hlds__state_var__handle_state_var_in_ite_23_0_i32);
MR_def_label(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__make_copy_goal_3_0,
		hlds__make_hlds__state_var__handle_state_var_in_ite_23_0_i33);
MR_def_label(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(10);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(9);
	MR_r6 = MR_sv(11);
	MR_r7 = MR_sv(12);
	MR_r8 = MR_sv(13);
	MR_r9 = MR_sv(14);
	MR_decr_sp_and_return(15);
	}
MR_def_label(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0_i35);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(11);
	MR_r7 = MR_sv(12);
	MR_r8 = MR_sv(13);
	MR_r9 = MR_sv(14);
	MR_decr_sp_and_return(15);
MR_def_label(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0_i36);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(varset__lookup_name_3_0,
		hlds__make_hlds__state_var__handle_state_var_in_ite_23_0_i37);
MR_def_label(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("!:", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__state_var__handle_state_var_in_ite_23_0_i38);
MR_def_label(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r9 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(14);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(11);
	MR_r7 = MR_sv(12);
	MR_r8 = MR_sv(13);
	MR_decr_sp_and_return(15);
	}
MR_def_label(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.make_hlds.state_var", 24);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.make_hlds.state_var.handle_state_var_in_ite\'/23", 63);
	MR_r3 = (MR_Word) MR_string_const("updated before (case 3)", 23);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__make_hlds__state_var__svar_get_current_progvar_2_0,
		hlds__make_hlds__state_var__handle_state_var_in_ite_23_0_i41);
MR_def_label(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__hlds__make_hlds__state_var__svar_get_current_progvar_2_0,
		hlds__make_hlds__state_var__handle_state_var_in_ite_23_0_i42);
MR_def_label(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r7 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(12);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(11);
	MR_r8 = MR_sv(13);
	MR_r9 = MR_sv(14);
	MR_decr_sp_and_return(15);
	}
MR_def_label(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10, MR_tempr11, MR_tempr12;
	MR_tempr1 = MR_sv(2);
	MR_tempr2 = MR_sv(3);
	MR_tempr3 = MR_sv(4);
	MR_tempr4 = MR_sv(5);
	MR_tempr5 = MR_sv(7);
	MR_tempr6 = MR_sv(8);
	MR_tempr7 = MR_sv(9);
	MR_tempr8 = MR_sv(10);
	MR_tempr9 = MR_sv(11);
	MR_tempr10 = MR_sv(12);
	MR_tempr11 = MR_sv(13);
	MR_tempr12 = MR_sv(14);
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(__Unify___hlds__make_hlds__state_var__svar_status_0_0,
		hlds__make_hlds__state_var__handle_state_var_in_ite_23_0_i49);
MR_def_label(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0_i47);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(__Unify___hlds__make_hlds__state_var__svar_status_0_0,
		hlds__make_hlds__state_var__handle_state_var_in_ite_23_0_i53);
MR_def_label(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0_i52);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0_i56);
	}
	MR_sv(2) = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(hlds__make_hlds__state_var__new_state_var_instance_5_0,
		hlds__make_hlds__state_var__handle_state_var_in_ite_23_0_i57);
MR_def_label(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__hlds__make_hlds__state_var__svar_get_current_progvar_2_0,
		hlds__make_hlds__state_var__handle_state_var_in_ite_23_0_i58);
MR_def_label(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(hlds__make_hlds__state_var__make_copy_goal_3_0,
		hlds__make_hlds__state_var__handle_state_var_in_ite_23_0_i59);
MR_def_label(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(8);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__make_copy_goal_3_0,
		hlds__make_hlds__state_var__handle_state_var_in_ite_23_0_i61);
MR_def_label(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(10);
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(9);
	MR_r6 = MR_sv(11);
	MR_r7 = MR_sv(12);
	MR_r8 = MR_sv(13);
	MR_r9 = MR_sv(14);
	MR_decr_sp_and_return(15);
	}
MR_def_label(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0_i64);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(11);
	MR_r7 = MR_sv(12);
	MR_r8 = MR_sv(13);
	MR_r9 = MR_sv(14);
	MR_decr_sp_and_return(15);
MR_def_label(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0_i65);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(varset__lookup_name_3_0,
		hlds__make_hlds__state_var__handle_state_var_in_ite_23_0_i66);
MR_def_label(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("!:", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__state_var__handle_state_var_in_ite_23_0_i67);
MR_def_label(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(2) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(14);
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__new_state_var_instance_5_0,
		hlds__make_hlds__state_var__handle_state_var_in_ite_23_0_i69);
MR_def_label(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__hlds__make_hlds__state_var__svar_get_current_progvar_2_0,
		hlds__make_hlds__state_var__handle_state_var_in_ite_23_0_i70);
MR_def_label(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(hlds__make_hlds__state_var__make_copy_goal_3_0,
		hlds__make_hlds__state_var__handle_state_var_in_ite_23_0_i71);
MR_def_label(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(8);
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(11);
	MR_r7 = MR_sv(12);
	MR_r8 = MR_sv(13);
	MR_r9 = MR_sv(2);
	MR_decr_sp_and_return(15);
	}
MR_def_label(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.make_hlds.state_var", 24);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.make_hlds.state_var.handle_state_var_in_ite\'/23", 63);
	MR_r3 = (MR_Word) MR_string_const("updated before (case 5)", 23);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__make_hlds__state_var__svar_get_current_progvar_2_0,
		hlds__make_hlds__state_var__handle_state_var_in_ite_23_0_i75);
MR_def_label(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__hlds__make_hlds__state_var__svar_get_current_progvar_2_0,
		hlds__make_hlds__state_var__handle_state_var_in_ite_23_0_i76);
MR_def_label(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__make_copy_goal_3_0,
		hlds__make_hlds__state_var__handle_state_var_in_ite_23_0_i77);
MR_def_label(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(8);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(7);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(11);
	MR_r7 = MR_sv(12);
	MR_r8 = MR_sv(13);
	MR_r9 = MR_sv(14);
	MR_decr_sp_and_return(15);
	}
MR_def_label(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10, MR_tempr11;
	MR_tempr1 = MR_sv(2);
	MR_tempr2 = MR_sv(4);
	MR_tempr3 = MR_sv(5);
	MR_tempr4 = MR_sv(7);
	MR_tempr5 = MR_sv(8);
	MR_tempr6 = MR_sv(9);
	MR_tempr7 = MR_sv(10);
	MR_tempr8 = MR_sv(11);
	MR_tempr9 = MR_sv(12);
	MR_tempr10 = MR_sv(13);
	MR_tempr11 = MR_sv(14);
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___hlds__make_hlds__state_var__svar_status_0_0,
		hlds__make_hlds__state_var__handle_state_var_in_ite_23_0_i82);
MR_def_label(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0_i80);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0_i85);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__hlds__make_hlds__state_var__svar_get_current_progvar_2_0,
		hlds__make_hlds__state_var__handle_state_var_in_ite_23_0_i86);
MR_def_label(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__make_copy_goal_3_0,
		hlds__make_hlds__state_var__handle_state_var_in_ite_23_0_i87);
MR_def_label(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(10);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(9);
	MR_r6 = MR_sv(11);
	MR_r7 = MR_sv(12);
	MR_r8 = MR_sv(13);
	MR_r9 = MR_sv(14);
	MR_decr_sp_and_return(15);
	}
MR_def_label(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0_i89);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(11);
	MR_r7 = MR_sv(12);
	MR_r8 = MR_sv(13);
	MR_r9 = MR_sv(14);
	MR_decr_sp_and_return(15);
MR_def_label(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0_i90);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(varset__lookup_name_3_0,
		hlds__make_hlds__state_var__handle_state_var_in_ite_23_0_i91);
MR_def_label(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("!:", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__state_var__handle_state_var_in_ite_23_0_i92);
MR_def_label(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r9 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(14);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(11);
	MR_r7 = MR_sv(12);
	MR_r8 = MR_sv(13);
	MR_decr_sp_and_return(15);
	}
MR_def_label(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.make_hlds.state_var", 24);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.make_hlds.state_var.handle_state_var_in_ite\'/23", 63);
	MR_r3 = (MR_Word) MR_string_const("updated before (case 7)", 23);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10;
	MR_tempr1 = MR_sv(4);
	MR_tempr2 = MR_sv(5);
	MR_tempr3 = MR_sv(7);
	MR_tempr4 = MR_sv(8);
	MR_tempr5 = MR_sv(9);
	MR_tempr6 = MR_sv(10);
	MR_tempr7 = MR_sv(11);
	MR_tempr8 = MR_sv(12);
	MR_tempr9 = MR_sv(13);
	MR_tempr10 = MR_sv(14);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__make_hlds__state_var__svar_get_current_progvar_2_0,
		hlds__make_hlds__state_var__handle_state_var_in_ite_23_0_i95);
MR_def_label(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__hlds__make_hlds__state_var__svar_get_current_progvar_2_0,
		hlds__make_hlds__state_var__handle_state_var_in_ite_23_0_i96);
MR_def_label(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r7 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(12);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(11);
	MR_r8 = MR_sv(13);
	MR_r9 = MR_sv(14);
	MR_decr_sp_and_return(15);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);

MR_BEGIN_MODULE(hlds__make_hlds__state_var_module31)
	MR_init_entry1(hlds__make_hlds__state_var__handle_state_vars_in_ite_25_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__state_var__handle_state_vars_in_ite_25_0);
	MR_init_label10(hlds__make_hlds__state_var__handle_state_vars_in_ite_25_0,33,3,5,6,7,8,11,14,15,9)
	MR_init_label2(hlds__make_hlds__state_var__handle_state_vars_in_ite_25_0,16,18)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'handle_state_vars_in_ite'/25 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__state_var__handle_state_vars_in_ite_25_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(25);
	MR_sv(25) = (MR_Word) MR_succip;
MR_def_label(hlds__make_hlds__state_var__handle_state_vars_in_ite_25_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__handle_state_vars_in_ite_25_0_i3);
	}
	MR_r1 = MR_r8;
	MR_r2 = MR_r9;
	MR_r3 = MR_r10;
	MR_r4 = MR_r11;
	MR_r5 = MR_r12;
	MR_r6 = MR_r13;
	MR_r7 = MR_r14;
	MR_r8 = MR_r15;
	MR_r9 = MR_r16;
	MR_decr_sp_and_return(25);
MR_def_label(hlds__make_hlds__state_var__handle_state_vars_in_ite_25_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_r9;
	MR_sv(9) = MR_r10;
	MR_sv(10) = MR_r11;
	MR_sv(11) = MR_r12;
	MR_sv(12) = MR_r13;
	MR_sv(13) = MR_r14;
	MR_sv(14) = MR_r15;
	MR_sv(15) = MR_r16;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(16) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(17) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(22) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(23) = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_sv(24) = (MR_Word) MR_CTOR0_ADDR(hlds__make_hlds__state_var, svar_status);
	MR_r1 = MR_sv(22);
	MR_r2 = MR_sv(23);
	MR_r3 = MR_sv(24);
	MR_r5 = MR_sv(16);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__make_hlds__state_var__handle_state_vars_in_ite_25_0_i5);
MR_def_label(hlds__make_hlds__state_var__handle_state_vars_in_ite_25_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(18) = MR_r1;
	MR_r1 = MR_sv(22);
	MR_r2 = MR_sv(23);
	MR_r3 = MR_sv(24);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(16);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__make_hlds__state_var__handle_state_vars_in_ite_25_0_i6);
MR_def_label(hlds__make_hlds__state_var__handle_state_vars_in_ite_25_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(19) = MR_r1;
	MR_r1 = MR_sv(22);
	MR_r2 = MR_sv(23);
	MR_r3 = MR_sv(24);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(16);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__make_hlds__state_var__handle_state_vars_in_ite_25_0_i7);
MR_def_label(hlds__make_hlds__state_var__handle_state_vars_in_ite_25_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(20) = MR_r1;
	MR_r1 = MR_sv(22);
	MR_r2 = MR_sv(23);
	MR_r3 = MR_sv(24);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(16);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__make_hlds__state_var__handle_state_vars_in_ite_25_0_i8);
MR_def_label(hlds__make_hlds__state_var__handle_state_vars_in_ite_25_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(21) = MR_r1;
	MR_r1 = MR_sv(22);
	MR_r2 = MR_sv(23);
	MR_r3 = MR_sv(16);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		hlds__make_hlds__state_var__handle_state_vars_in_ite_25_0_i11);
MR_def_label(hlds__make_hlds__state_var__handle_state_vars_in_ite_25_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__handle_state_vars_in_ite_25_0_i9);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_COMMON(1,3);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_ENTRY_AP(hlds__make_hlds__state_var__IntroducedFrom__pred__handle_state_vars_in_ite__1277__1_2_0);
	MR_tfield(0, MR_r1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_r1, 3) = MR_sv(18);
	MR_tfield(0, MR_r1, 4) = MR_sv(20);
	MR_r2 = (MR_Word) MR_string_const("hlds.make_hlds.state_var", 24);
	MR_r3 = (MR_Word) MR_string_const("state var shadowed in if-then-else is nevertheless updated", 58);
	MR_np_call_localret_ent(require__expect_3_0,
		hlds__make_hlds__state_var__handle_state_vars_in_ite_25_0_i14);
MR_def_label(hlds__make_hlds__state_var__handle_state_vars_in_ite_25_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(16);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(18);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(21);
	MR_r7 = MR_sv(8);
	MR_r8 = MR_sv(9);
	MR_r9 = MR_sv(10);
	MR_r10 = MR_sv(11);
	MR_r11 = MR_sv(12);
	MR_r12 = MR_sv(13);
	MR_r13 = MR_sv(14);
	MR_r14 = MR_sv(15);
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0,
		hlds__make_hlds__state_var__handle_state_vars_in_ite_25_0_i15);
MR_def_label(hlds__make_hlds__state_var__handle_state_vars_in_ite_25_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r6;
	MR_r6 = MR_sv(7);
	MR_sv(9) = MR_r4;
	MR_r4 = MR_sv(16);
	MR_sv(10) = MR_r5;
	MR_r5 = MR_r1;
	MR_sv(7) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_sv(12) = MR_r7;
	MR_sv(13) = MR_r8;
	MR_sv(14) = MR_r9;
	MR_r1 = MR_sv(22);
	MR_r2 = MR_sv(23);
	MR_r3 = MR_sv(24);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		hlds__make_hlds__state_var__handle_state_vars_in_ite_25_0_i18);
MR_def_label(hlds__make_hlds__state_var__handle_state_vars_in_ite_25_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(21);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_sv(18);
	MR_r4 = MR_sv(19);
	MR_r5 = MR_sv(20);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(8);
	MR_r8 = MR_sv(9);
	MR_r9 = MR_sv(10);
	MR_r10 = MR_sv(11);
	MR_r11 = MR_sv(12);
	MR_r12 = MR_sv(13);
	MR_r13 = MR_sv(14);
	MR_r14 = MR_sv(15);
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__handle_state_var_in_ite_23_0,
		hlds__make_hlds__state_var__handle_state_vars_in_ite_25_0_i16);
MR_def_label(hlds__make_hlds__state_var__handle_state_vars_in_ite_25_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r6;
	MR_r6 = MR_sv(7);
	MR_sv(9) = MR_r4;
	MR_r4 = MR_sv(16);
	MR_sv(10) = MR_r5;
	MR_r5 = MR_r1;
	MR_sv(7) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_sv(12) = MR_r7;
	MR_sv(13) = MR_r8;
	MR_sv(14) = MR_r9;
	MR_r1 = MR_sv(22);
	MR_r2 = MR_sv(23);
	MR_r3 = MR_sv(24);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		hlds__make_hlds__state_var__handle_state_vars_in_ite_25_0_i18);
MR_def_label(hlds__make_hlds__state_var__handle_state_vars_in_ite_25_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(17);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_sv(7);
	MR_r10 = MR_sv(8);
	MR_r11 = MR_sv(9);
	MR_r12 = MR_sv(10);
	MR_r13 = MR_sv(11);
	MR_r14 = MR_sv(12);
	MR_r15 = MR_sv(13);
	MR_r16 = MR_sv(14);
	MR_succip_word = MR_sv(25);
	MR_GOTO_LAB(hlds__make_hlds__state_var__handle_state_vars_in_ite_25_0_i33);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__state_var_module32)
	MR_init_entry1(hlds__make_hlds__state_var__report_missing_inits_in_ite_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__state_var__report_missing_inits_in_ite_6_0);
	MR_init_label3(hlds__make_hlds__state_var__report_missing_inits_in_ite_6_0,10,20,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'report_missing_inits_in_ite'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__state_var__report_missing_inits_in_ite_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,4,14);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_sv(4) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,3,8);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r5;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(3,3,6);
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(fn__parse_tree__error_util__list_to_pieces_1_0,
		hlds__make_hlds__state_var__report_missing_inits_in_ite_6_0_i10);
MR_def_label(hlds__make_hlds__state_var__report_missing_inits_in_ite_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,4,16);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,3,10);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_hlds__state_var__report_missing_inits_in_ite_6_0_i20);
MR_def_label(hlds__make_hlds__state_var__report_missing_inits_in_ite_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_hlds__state_var__report_missing_inits_in_ite_6_0_i21);
MR_def_label(hlds__make_hlds__state_var__report_missing_inits_in_ite_6_0,21)
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
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_r2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = MR_sv(3);
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__keys_2_0);
MR_decl_entry(hlds__hlds_goal__conj_list_to_goal_3_0);
MR_decl_entry(hlds__hlds_goal__goal_set_goal_id_3_0);

MR_BEGIN_MODULE(hlds__make_hlds__state_var_module33)
	MR_init_entry1(hlds__make_hlds__state_var__svar_finish_if_then_else_18_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__state_var__svar_finish_if_then_else_18_0);
	MR_init_label10(hlds__make_hlds__state_var__svar_finish_if_then_else_18_0,3,4,5,6,8,10,12,13,14,16)
	MR_init_label10(hlds__make_hlds__state_var__svar_finish_if_then_else_18_0,17,15,21,19,23,24,25,26,27,28)
	MR_init_label7(hlds__make_hlds__state_var__svar_finish_if_then_else_18_0,29,30,31,32,33,36,37)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'svar_finish_if_then_else'/18 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__state_var__svar_finish_if_then_else_18_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(18);
	MR_sv(18) = (MR_Word) MR_succip;
	MR_sv(12) = MR_r1;
	MR_sv(11) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(1) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_r9;
	MR_sv(13) = MR_r10;
	MR_sv(14) = MR_r11;
	MR_sv(15) = MR_r12;
	MR_sv(16) = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_sv(17) = (MR_Word) MR_CTOR0_ADDR(hlds__make_hlds__state_var, svar_status);
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(17);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__keys_2_0,
		hlds__make_hlds__state_var__svar_finish_if_then_else_18_0_i3);
MR_def_label(hlds__make_hlds__state_var__svar_finish_if_then_else_18_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(17);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(map__keys_2_0,
		hlds__make_hlds__state_var__svar_finish_if_then_else_18_0_i4);
MR_def_label(hlds__make_hlds__state_var__svar_finish_if_then_else_18_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(17);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(map__keys_2_0,
		hlds__make_hlds__state_var__svar_finish_if_then_else_18_0_i5);
MR_def_label(hlds__make_hlds__state_var__svar_finish_if_then_else_18_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(17);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(map__keys_2_0,
		hlds__make_hlds__state_var__svar_finish_if_then_else_18_0_i6);
MR_def_label(hlds__make_hlds__state_var__svar_finish_if_then_else_18_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__make_hlds__state_var__IntroducedFrom__pred__svar_finish_if_then_else__1190__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.make_hlds.state_var.svar_finish_if_then_else\'/18", 64);
	MR_r3 = (MR_Word) MR_string_const("vars Before not sublist of Cond", 31);
	}
	MR_np_call_localret_ent(require__expect_3_0,
		hlds__make_hlds__state_var__svar_finish_if_then_else_18_0_i8);
MR_def_label(hlds__make_hlds__state_var__svar_finish_if_then_else_18_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_COMMON(1,5);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_ENTRY_AP(hlds__make_hlds__state_var__IntroducedFrom__pred__svar_finish_if_then_else__1192__1_2_0);
	MR_tfield(0, MR_r1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_r1, 3) = MR_sv(9);
	MR_tfield(0, MR_r1, 4) = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.make_hlds.state_var.svar_finish_if_then_else\'/18", 64);
	MR_r3 = (MR_Word) MR_string_const("vars Before != AfterThen", 24);
	MR_np_call_localret_ent(require__expect_3_0,
		hlds__make_hlds__state_var__svar_finish_if_then_else_18_0_i10);
MR_def_label(hlds__make_hlds__state_var__svar_finish_if_then_else_18_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_COMMON(1,6);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_ENTRY_AP(hlds__make_hlds__state_var__IntroducedFrom__pred__svar_finish_if_then_else__1194__1_2_0);
	MR_tfield(0, MR_r1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_r1, 3) = MR_sv(9);
	MR_tfield(0, MR_r1, 4) = MR_sv(10);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.make_hlds.state_var.svar_finish_if_then_else\'/18", 64);
	MR_r3 = (MR_Word) MR_string_const("vars Before != AfterElse", 24);
	MR_np_call_localret_ent(require__expect_3_0,
		hlds__make_hlds__state_var__svar_finish_if_then_else_18_0_i12);
MR_def_label(hlds__make_hlds__state_var__svar_finish_if_then_else_18_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(17);
	MR_np_call_localret_ent(fn__map__init_0_0,
		hlds__make_hlds__state_var__svar_finish_if_then_else_18_0_i13);
MR_def_label(hlds__make_hlds__state_var__svar_finish_if_then_else_18_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(7);
	MR_r7 = MR_sv(8);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_sv(13);
	MR_r10 = (MR_Word) MR_tbmkword(0, 0);
	MR_r11 = (MR_Word) MR_tbmkword(0, 0);
	MR_r12 = (MR_Word) MR_tbmkword(0, 0);
	MR_r13 = (MR_Word) MR_tbmkword(0, 0);
	MR_r14 = (MR_Word) MR_tbmkword(0, 0);
	MR_r15 = (MR_Word) MR_tbmkword(0, 0);
	MR_r16 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__handle_state_vars_in_ite_25_0,
		hlds__make_hlds__state_var__svar_finish_if_then_else_18_0_i14);
MR_def_label(hlds__make_hlds__state_var__svar_finish_if_then_else_18_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r8,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__svar_finish_if_then_else_18_0_i16);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(12) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_sv(7) = MR_r6;
	MR_sv(8) = MR_r7;
	MR_sv(9) = MR_r8;
	MR_sv(10) = MR_r9;
	MR_sv(4) = MR_r2;
	MR_r2 = MR_sv(14);
	MR_GOTO_LAB(hlds__make_hlds__state_var__svar_finish_if_then_else_18_0_i15);
MR_def_label(hlds__make_hlds__state_var__svar_finish_if_then_else_18_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(12) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_sv(7) = MR_r6;
	MR_sv(8) = MR_r7;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r8;
	MR_sv(9) = MR_tempr1;
	MR_sv(10) = MR_r9;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_string_const("succeeds", 8);
	MR_r4 = (MR_Word) MR_string_const("fails", 5);
	MR_r5 = MR_tfield(0, MR_sv(14), 2);
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__report_missing_inits_in_ite_6_0,
		hlds__make_hlds__state_var__svar_finish_if_then_else_18_0_i17);
MR_def_label(hlds__make_hlds__state_var__svar_finish_if_then_else_18_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(14);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = MR_r1;
	MR_r1 = MR_sv(3);
	}
MR_def_label(hlds__make_hlds__state_var__svar_finish_if_then_else_18_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(10),0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__svar_finish_if_then_else_18_0_i19);
	}
	MR_sv(3) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(11);
	MR_sv(11) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(9);
	MR_r3 = (MR_Word) MR_string_const("fails", 5);
	MR_r4 = (MR_Word) MR_string_const("succeeds", 8);
	MR_r5 = MR_tfield(0, MR_sv(11), 2);
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__report_missing_inits_in_ite_6_0,
		hlds__make_hlds__state_var__svar_finish_if_then_else_18_0_i21);
MR_def_label(hlds__make_hlds__state_var__svar_finish_if_then_else_18_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(11);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = MR_r1;
	MR_r1 = MR_sv(3);
	}
MR_def_label(hlds__make_hlds__state_var__svar_finish_if_then_else_18_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_goal_to_conj_list_4_0,
		hlds__make_hlds__state_var__svar_finish_if_then_else_18_0_i23);
MR_def_label(hlds__make_hlds__state_var__svar_finish_if_then_else_18_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_goal_to_conj_list_4_0,
		hlds__make_hlds__state_var__svar_finish_if_then_else_18_0_i24);
MR_def_label(hlds__make_hlds__state_var__svar_finish_if_then_else_18_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(11);
	MR_sv(11) = MR_r1;
	MR_tempr2 = MR_sv(5);
	MR_sv(5) = MR_r2;
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_hlds__state_var__svar_finish_if_then_else_18_0_i25);
MR_def_label(hlds__make_hlds__state_var__svar_finish_if_then_else_18_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_hlds__state_var__svar_finish_if_then_else_18_0_i26);
MR_def_label(hlds__make_hlds__state_var__svar_finish_if_then_else_18_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_hlds__state_var__svar_finish_if_then_else_18_0_i27);
MR_def_label(hlds__make_hlds__state_var__svar_finish_if_then_else_18_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(12);
	MR_sv(12) = MR_r1;
	MR_sv(11) = MR_tfield(0, MR_sv(1), 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_sv(3), 1);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__conj_list_to_goal_3_0,
		hlds__make_hlds__state_var__svar_finish_if_then_else_18_0_i28);
MR_def_label(hlds__make_hlds__state_var__svar_finish_if_then_else_18_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(12);
	MR_sv(12) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(11);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__conj_list_to_goal_3_0,
		hlds__make_hlds__state_var__svar_finish_if_then_else_18_0_i29);
MR_def_label(hlds__make_hlds__state_var__svar_finish_if_then_else_18_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(11) = MR_r1;
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(counter__allocate_3_0,
		hlds__make_hlds__state_var__svar_finish_if_then_else_18_0_i30);
MR_def_label(hlds__make_hlds__state_var__svar_finish_if_then_else_18_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(counter__allocate_3_0,
		hlds__make_hlds__state_var__svar_finish_if_then_else_18_0_i31);
MR_def_label(hlds__make_hlds__state_var__svar_finish_if_then_else_18_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_tempr1;
	MR_sv(9) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(12);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_set_goal_id_3_0,
		hlds__make_hlds__state_var__svar_finish_if_then_else_18_0_i32);
MR_def_label(hlds__make_hlds__state_var__svar_finish_if_then_else_18_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_set_goal_id_3_0,
		hlds__make_hlds__state_var__svar_finish_if_then_else_18_0_i33);
MR_def_label(hlds__make_hlds__state_var__svar_finish_if_then_else_18_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(pair, pair, 2);
	MR_tempr2 = MR_sv(16);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_sv(11) = MR_r1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		hlds__make_hlds__state_var__svar_finish_if_then_else_18_0_i36);
MR_def_label(hlds__make_hlds__state_var__svar_finish_if_then_else_18_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		hlds__make_hlds__state_var__svar_finish_if_then_else_18_0_i37);
MR_def_label(hlds__make_hlds__state_var__svar_finish_if_then_else_18_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r6 = MR_sv(15);
	MR_decr_sp_and_return(18);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__state_var_module34)
	MR_init_entry1(hlds__make_hlds__state_var__report_illegal_state_var_update_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__state_var__report_illegal_state_var_update_7_0);
	MR_init_label3(hlds__make_hlds__state_var__report_illegal_state_var_update_7_0,2,4,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'report_illegal_state_var_update'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__state_var__report_illegal_state_var_update_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_r6;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_np_call_localret_ent(fn__varset__lookup_name_2_0,
		hlds__make_hlds__state_var__report_illegal_state_var_update_7_0_i2);
MR_def_label(hlds__make_hlds__state_var__report_illegal_state_var_update_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(3,3,12);
	MR_r1 = (MR_Word) MR_string_const("!:", 2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__state_var__report_illegal_state_var_update_7_0_i4);
MR_def_label(hlds__make_hlds__state_var__report_illegal_state_var_update_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_sv(8) = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(6);
	MR_sv(6) = MR_tempr1;
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(3,3,13);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(3,3,14);
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(3,3,15);
	MR_r1 = (MR_Word) MR_string_const("!.", 2);
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__state_var__report_illegal_state_var_update_7_0_i10);
MR_def_label(hlds__make_hlds__state_var__report_illegal_state_var_update_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,4,18);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(10);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(8);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(6);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,4,19);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,3,1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,3,17);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_r2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = MR_sv(4);
	MR_decr_sp_and_return(11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__state_var_module35)
	MR_init_entry1(hlds__make_hlds__state_var__report_non_visible_state_var_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__state_var__report_non_visible_state_var_6_0);
	MR_init_label3(hlds__make_hlds__state_var__report_non_visible_state_var_6_0,2,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'report_non_visible_state_var'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__state_var__report_non_visible_state_var_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_np_call_localret_ent(fn__varset__lookup_name_2_0,
		hlds__make_hlds__state_var__report_non_visible_state_var_6_0_i2);
MR_def_label(hlds__make_hlds__state_var__report_non_visible_state_var_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(3,3,19);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__state_var__report_non_visible_state_var_6_0_i4);
MR_def_label(hlds__make_hlds__state_var__report_non_visible_state_var_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("!", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__state_var__report_non_visible_state_var_6_0_i5);
MR_def_label(hlds__make_hlds__state_var__report_non_visible_state_var_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,4,20);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_sv(2);
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__state_var_module36)
	MR_init_entry1(hlds__make_hlds__state_var__report_uninitialized_state_var_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__state_var__report_uninitialized_state_var_5_0);
	MR_init_label2(hlds__make_hlds__state_var__report_uninitialized_state_var_5_0,2,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'report_uninitialized_state_var'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__state_var__report_uninitialized_state_var_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_np_call_localret_ent(fn__varset__lookup_name_2_0,
		hlds__make_hlds__state_var__report_uninitialized_state_var_5_0_i2);
MR_def_label(hlds__make_hlds__state_var__report_uninitialized_state_var_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(3,3,21);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("!.", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__state_var__report_uninitialized_state_var_5_0_i4);
MR_def_label(hlds__make_hlds__state_var__report_uninitialized_state_var_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,4,18);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_sv(2);
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__remove_4_0);

MR_BEGIN_MODULE(hlds__make_hlds__state_var_module37)
	MR_init_entry1(hlds__make_hlds__state_var__svar_start_outer_atomic_scope_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__state_var__svar_start_outer_atomic_scope_11_0);
	MR_init_label10(hlds__make_hlds__state_var__svar_start_outer_atomic_scope_11_0,4,8,9,10,7,14,15,16,17,13)
	MR_init_label10(hlds__make_hlds__state_var__svar_start_outer_atomic_scope_11_0,20,22,35,36,37,38,39,40,19,2)
	MR_init_label3(hlds__make_hlds__state_var__svar_start_outer_atomic_scope_11_0,43,44,45)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'svar_start_outer_atomic_scope'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__state_var__svar_start_outer_atomic_scope_11_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__make_hlds__state_var, svar_status);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(map__remove_4_0,
		hlds__make_hlds__state_var__svar_start_outer_atomic_scope_11_0_i4);
MR_def_label(hlds__make_hlds__state_var__svar_start_outer_atomic_scope_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__svar_start_outer_atomic_scope_11_0_i2);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__svar_start_outer_atomic_scope_11_0_i7);
	}
	MR_sv(2) = MR_tfield(3, MR_r2, 1);
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(fn__varset__lookup_name_2_0,
		hlds__make_hlds__state_var__svar_start_outer_atomic_scope_11_0_i8);
MR_def_label(hlds__make_hlds__state_var__svar_start_outer_atomic_scope_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("STATE_VARIABLE_", 15);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__state_var__svar_start_outer_atomic_scope_11_0_i9);
MR_def_label(hlds__make_hlds__state_var__svar_start_outer_atomic_scope_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(varset__new_uniquely_named_var_4_0,
		hlds__make_hlds__state_var__svar_start_outer_atomic_scope_11_0_i10);
MR_def_label(hlds__make_hlds__state_var__svar_start_outer_atomic_scope_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 2) = MR_tempr1;
	MR_r1 = MR_sv(2);
	MR_tempr3 = MR_r2;
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr3;
	MR_r6 = MR_sv(5);
	MR_decr_sp_and_return(8);
	}
MR_def_label(hlds__make_hlds__state_var__svar_start_outer_atomic_scope_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__svar_start_outer_atomic_scope_11_0_i13);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_tfield(2, MR_r2, 0);
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("lambda expression", 17);
	MR_r3 = MR_tfield(2, MR_sv(3), 2);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__report_illegal_state_var_update_7_0,
		hlds__make_hlds__state_var__svar_start_outer_atomic_scope_11_0_i14);
MR_def_label(hlds__make_hlds__state_var__svar_start_outer_atomic_scope_11_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(fn__varset__lookup_name_2_0,
		hlds__make_hlds__state_var__svar_start_outer_atomic_scope_11_0_i15);
MR_def_label(hlds__make_hlds__state_var__svar_start_outer_atomic_scope_11_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("STATE_VARIABLE_", 15);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__state_var__svar_start_outer_atomic_scope_11_0_i16);
MR_def_label(hlds__make_hlds__state_var__svar_start_outer_atomic_scope_11_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(varset__new_uniquely_named_var_4_0,
		hlds__make_hlds__state_var__svar_start_outer_atomic_scope_11_0_i17);
MR_def_label(hlds__make_hlds__state_var__svar_start_outer_atomic_scope_11_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tempr4 = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr4;
	MR_tfield(1, MR_tempr1, 2) = MR_tempr4;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_tempr3 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr3;
	MR_r6 = MR_sv(5);
	MR_decr_sp_and_return(8);
	}
MR_def_label(hlds__make_hlds__state_var__svar_start_outer_atomic_scope_11_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__svar_start_outer_atomic_scope_11_0_i19);
	}
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(fn__varset__lookup_name_2_0,
		hlds__make_hlds__state_var__svar_start_outer_atomic_scope_11_0_i20);
MR_def_label(hlds__make_hlds__state_var__svar_start_outer_atomic_scope_11_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(3,3,21);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("!.", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__state_var__svar_start_outer_atomic_scope_11_0_i22);
MR_def_label(hlds__make_hlds__state_var__svar_start_outer_atomic_scope_11_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,4,18);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(5);
	MR_sv(5) = MR_tempr1;
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__varset__lookup_name_2_0,
		hlds__make_hlds__state_var__svar_start_outer_atomic_scope_11_0_i35);
MR_def_label(hlds__make_hlds__state_var__svar_start_outer_atomic_scope_11_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("STATE_VARIABLE_", 15);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__state_var__svar_start_outer_atomic_scope_11_0_i36);
MR_def_label(hlds__make_hlds__state_var__svar_start_outer_atomic_scope_11_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(varset__new_uniquely_named_var_4_0,
		hlds__make_hlds__state_var__svar_start_outer_atomic_scope_11_0_i37);
MR_def_label(hlds__make_hlds__state_var__svar_start_outer_atomic_scope_11_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(fn__varset__lookup_name_2_0,
		hlds__make_hlds__state_var__svar_start_outer_atomic_scope_11_0_i38);
MR_def_label(hlds__make_hlds__state_var__svar_start_outer_atomic_scope_11_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("STATE_VARIABLE_", 15);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__state_var__svar_start_outer_atomic_scope_11_0_i39);
MR_def_label(hlds__make_hlds__state_var__svar_start_outer_atomic_scope_11_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(varset__new_uniquely_named_var_4_0,
		hlds__make_hlds__state_var__svar_start_outer_atomic_scope_11_0_i40);
MR_def_label(hlds__make_hlds__state_var__svar_start_outer_atomic_scope_11_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tempr4 = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr4;
	MR_tfield(1, MR_tempr1, 2) = MR_tempr4;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_tempr3 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr3;
	MR_r6 = MR_sv(5);
	MR_decr_sp_and_return(8);
	}
MR_def_label(hlds__make_hlds__state_var__svar_start_outer_atomic_scope_11_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.make_hlds.state_var", 24);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.make_hlds.state_var.svar_start_outer_atomic_scope\'/11", 69);
	MR_sv(4) = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("status updated", 14);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(hlds__make_hlds__state_var__svar_start_outer_atomic_scope_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(5);
	MR_np_call_localret_ent(hlds__make_hlds__state_var__report_non_visible_state_var_6_0,
		hlds__make_hlds__state_var__svar_start_outer_atomic_scope_11_0_i43);
MR_def_label(hlds__make_hlds__state_var__svar_start_outer_atomic_scope_11_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(hlds__make_hlds__state_var__new_state_var_instance_5_0,
		hlds__make_hlds__state_var__svar_start_outer_atomic_scope_11_0_i44);
MR_def_label(hlds__make_hlds__state_var__svar_start_outer_atomic_scope_11_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__new_state_var_instance_5_0,
		hlds__make_hlds__state_var__svar_start_outer_atomic_scope_11_0_i45);
MR_def_label(hlds__make_hlds__state_var__svar_start_outer_atomic_scope_11_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr2;
	MR_r6 = MR_sv(5);
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__state_var_module38)
	MR_init_entry1(hlds__make_hlds__state_var__svar_finish_outer_atomic_scope_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__state_var__svar_finish_outer_atomic_scope_3_0);
	MR_init_label1(hlds__make_hlds__state_var__svar_finish_outer_atomic_scope_3_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'svar_finish_outer_atomic_scope'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__state_var__svar_finish_outer_atomic_scope_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__svar_finish_outer_atomic_scope_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(hlds__make_hlds__state_var__svar_finish_outer_atomic_scope_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__make_hlds__state_var, svar_status);
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	MR_r5 = MR_tfield(1, MR_tempr1, 2);
	MR_r6 = MR_tempr2;
	MR_np_tailcall_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__state_var_module39)
	MR_init_entry1(hlds__make_hlds__state_var__svar_start_inner_atomic_scope_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__state_var__svar_start_inner_atomic_scope_9_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'svar_start_inner_atomic_scope'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__state_var__svar_start_inner_atomic_scope_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_np_tailcall_ent(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_115_116_97_114_116_95_105_110_110_101_114_95_97_116_111_109_105_99_95_115_99_111_112_101_95_95_91_49_93_95_48_9_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__state_var_module40)
	MR_init_entry1(hlds__make_hlds__state_var__svar_finish_inner_atomic_scope_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__state_var__svar_finish_inner_atomic_scope_10_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'svar_finish_inner_atomic_scope'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__state_var__svar_finish_inner_atomic_scope_10_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_np_tailcall_ent(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_102_105_110_105_115_104_95_105_110_110_101_114_95_97_116_111_109_105_99_95_115_99_111_112_101_95_95_91_49_93_95_48_10_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__state_var_module41)
	MR_init_entry1(hlds__make_hlds__state_var__lookup_dot_state_var_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__state_var__lookup_dot_state_var_9_0);
	MR_init_label10(hlds__make_hlds__state_var__lookup_dot_state_var_9_0,4,8,10,23,24,25,7,28,30,31)
	MR_init_label6(hlds__make_hlds__state_var__lookup_dot_state_var_9_0,32,33,35,29,2,37)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_dot_state_var'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__state_var__lookup_dot_state_var_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_sv(6) = MR_tempr1;
	MR_sv(5) = MR_r5;
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__make_hlds__state_var, svar_status);
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__make_hlds__state_var__lookup_dot_state_var_9_0_i4);
MR_def_label(hlds__make_hlds__state_var__lookup_dot_state_var_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__lookup_dot_state_var_9_0_i2);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__lookup_dot_state_var_9_0_i7);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(fn__varset__lookup_name_2_0,
		hlds__make_hlds__state_var__lookup_dot_state_var_9_0_i8);
MR_def_label(hlds__make_hlds__state_var__lookup_dot_state_var_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(3,3,21);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("!.", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__state_var__lookup_dot_state_var_9_0_i10);
MR_def_label(hlds__make_hlds__state_var__lookup_dot_state_var_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,4,18);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_sv(6) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_sv(5);
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__varset__lookup_name_2_0,
		hlds__make_hlds__state_var__lookup_dot_state_var_9_0_i23);
MR_def_label(hlds__make_hlds__state_var__lookup_dot_state_var_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("STATE_VARIABLE_", 15);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__state_var__lookup_dot_state_var_9_0_i24);
MR_def_label(hlds__make_hlds__state_var__lookup_dot_state_var_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(varset__new_uniquely_named_var_4_0,
		hlds__make_hlds__state_var__lookup_dot_state_var_9_0_i25);
MR_def_label(hlds__make_hlds__state_var__lookup_dot_state_var_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r5 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_sv(2) = MR_r1;
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__make_hlds__state_var, svar_status);
	MR_r4 = MR_tempr2;
	MR_r6 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		hlds__make_hlds__state_var__lookup_dot_state_var_9_0_i35);
MR_def_label(hlds__make_hlds__state_var__lookup_dot_state_var_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__lookup_dot_state_var_9_0_i28);
	}
	MR_r1 = MR_tfield(2, MR_r2, 0);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_decr_sp_and_return(9);
MR_def_label(hlds__make_hlds__state_var__lookup_dot_state_var_9_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__lookup_dot_state_var_9_0_i29);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_r2, 0);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__report_uninitialized_state_var_5_0,
		hlds__make_hlds__state_var__lookup_dot_state_var_9_0_i30);
MR_def_label(hlds__make_hlds__state_var__lookup_dot_state_var_9_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(fn__varset__lookup_name_2_0,
		hlds__make_hlds__state_var__lookup_dot_state_var_9_0_i31);
MR_def_label(hlds__make_hlds__state_var__lookup_dot_state_var_9_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("STATE_VARIABLE_", 15);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__state_var__lookup_dot_state_var_9_0_i32);
MR_def_label(hlds__make_hlds__state_var__lookup_dot_state_var_9_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(varset__new_uniquely_named_var_4_0,
		hlds__make_hlds__state_var__lookup_dot_state_var_9_0_i33);
MR_def_label(hlds__make_hlds__state_var__lookup_dot_state_var_9_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r5 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__make_hlds__state_var, svar_status);
	MR_r4 = MR_tempr2;
	MR_r6 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		hlds__make_hlds__state_var__lookup_dot_state_var_9_0_i35);
MR_def_label(hlds__make_hlds__state_var__lookup_dot_state_var_9_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(6);
	MR_decr_sp_and_return(9);
	}
MR_def_label(hlds__make_hlds__state_var__lookup_dot_state_var_9_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_decr_sp_and_return(9);
MR_def_label(hlds__make_hlds__state_var__lookup_dot_state_var_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_np_call_localret_ent(hlds__make_hlds__state_var__report_non_visible_state_var_6_0,
		hlds__make_hlds__state_var__lookup_dot_state_var_9_0_i37);
MR_def_label(hlds__make_hlds__state_var__lookup_dot_state_var_9_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__state_var_module42)
	MR_init_entry1(hlds__make_hlds__state_var__lookup_colon_state_var_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__state_var__lookup_colon_state_var_9_0);
	MR_init_label10(hlds__make_hlds__state_var__lookup_colon_state_var_9_0,4,8,9,10,7,14,15,16,17,19)
	MR_init_label9(hlds__make_hlds__state_var__lookup_colon_state_var_9_0,13,20,22,23,24,26,21,2,27)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_colon_state_var'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__state_var__lookup_colon_state_var_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(6) = MR_r1;
	MR_sv(3) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r3;
	MR_sv(5) = MR_tempr1;
	MR_sv(4) = MR_r5;
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__make_hlds__state_var, svar_status);
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__make_hlds__state_var__lookup_colon_state_var_9_0_i4);
MR_def_label(hlds__make_hlds__state_var__lookup_colon_state_var_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__lookup_colon_state_var_9_0_i2);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__lookup_colon_state_var_9_0_i7);
	}
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(fn__varset__lookup_name_2_0,
		hlds__make_hlds__state_var__lookup_colon_state_var_9_0_i8);
MR_def_label(hlds__make_hlds__state_var__lookup_colon_state_var_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("STATE_VARIABLE_", 15);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__state_var__lookup_colon_state_var_9_0_i9);
MR_def_label(hlds__make_hlds__state_var__lookup_colon_state_var_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(varset__new_uniquely_named_var_4_0,
		hlds__make_hlds__state_var__lookup_colon_state_var_9_0_i10);
MR_def_label(hlds__make_hlds__state_var__lookup_colon_state_var_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r5, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r5, 0) = MR_r1;
	MR_sv(6) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__make_hlds__state_var, svar_status);
	MR_r4 = MR_tempr1;
	MR_r6 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		hlds__make_hlds__state_var__lookup_colon_state_var_9_0_i26);
MR_def_label(hlds__make_hlds__state_var__lookup_colon_state_var_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__lookup_colon_state_var_9_0_i13);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_tfield(2, MR_r2, 0);
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("lambda expression", 17);
	MR_r3 = MR_tfield(2, MR_tempr2, 2);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__report_illegal_state_var_update_7_0,
		hlds__make_hlds__state_var__lookup_colon_state_var_9_0_i14);
MR_def_label(hlds__make_hlds__state_var__lookup_colon_state_var_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(fn__varset__lookup_name_2_0,
		hlds__make_hlds__state_var__lookup_colon_state_var_9_0_i15);
MR_def_label(hlds__make_hlds__state_var__lookup_colon_state_var_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("STATE_VARIABLE_", 15);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__state_var__lookup_colon_state_var_9_0_i16);
MR_def_label(hlds__make_hlds__state_var__lookup_colon_state_var_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(varset__new_uniquely_named_var_4_0,
		hlds__make_hlds__state_var__lookup_colon_state_var_9_0_i17);
MR_def_label(hlds__make_hlds__state_var__lookup_colon_state_var_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r5 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_sv(6) = MR_r1;
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__make_hlds__state_var, svar_status);
	MR_r4 = MR_tempr2;
	MR_r6 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		hlds__make_hlds__state_var__lookup_colon_state_var_9_0_i19);
MR_def_label(hlds__make_hlds__state_var__lookup_colon_state_var_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(5);
	MR_decr_sp_and_return(9);
	}
MR_def_label(hlds__make_hlds__state_var__lookup_colon_state_var_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__lookup_colon_state_var_9_0_i20);
	}
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_decr_sp_and_return(9);
MR_def_label(hlds__make_hlds__state_var__lookup_colon_state_var_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__lookup_colon_state_var_9_0_i21);
	}
	MR_sv(6) = MR_tfield(3, MR_r2, 1);
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(fn__varset__lookup_name_2_0,
		hlds__make_hlds__state_var__lookup_colon_state_var_9_0_i22);
MR_def_label(hlds__make_hlds__state_var__lookup_colon_state_var_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("STATE_VARIABLE_", 15);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__state_var__lookup_colon_state_var_9_0_i23);
MR_def_label(hlds__make_hlds__state_var__lookup_colon_state_var_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(varset__new_uniquely_named_var_4_0,
		hlds__make_hlds__state_var__lookup_colon_state_var_9_0_i24);
MR_def_label(hlds__make_hlds__state_var__lookup_colon_state_var_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r5 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_sv(6) = MR_r1;
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__make_hlds__state_var, svar_status);
	MR_r4 = MR_tempr2;
	MR_r6 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		hlds__make_hlds__state_var__lookup_colon_state_var_9_0_i26);
MR_def_label(hlds__make_hlds__state_var__lookup_colon_state_var_9_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	MR_decr_sp_and_return(9);
	}
MR_def_label(hlds__make_hlds__state_var__lookup_colon_state_var_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_r2, 2);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_decr_sp_and_return(9);
MR_def_label(hlds__make_hlds__state_var__lookup_colon_state_var_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(":", 1);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(hlds__make_hlds__state_var__report_non_visible_state_var_6_0,
		hlds__make_hlds__state_var__lookup_colon_state_var_9_0_i27);
MR_def_label(hlds__make_hlds__state_var__lookup_colon_state_var_9_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__state_var_module43)
	MR_init_entry1(hlds__make_hlds__state_var__substitute_state_var_mapping_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__state_var__substitute_state_var_mapping_8_0);
	MR_init_label6(hlds__make_hlds__state_var__substitute_state_var_mapping_8_0,9,10,2,19,20,65)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'substitute_state_var_mapping'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__state_var__substitute_state_var_mapping_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__substitute_state_var_mapping_8_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__substitute_state_var_mapping_8_0_i2);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr2, MR_string_const("!.", 2)) != 0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__substitute_state_var_mapping_8_0_i2);
	}
	MR_tempr1 = MR_tfield(0, MR_r1, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__substitute_state_var_mapping_8_0_i2);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__substitute_state_var_mapping_8_0_i2);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__substitute_state_var_mapping_8_0_i2);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(0, MR_r1, 2);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__lookup_dot_state_var_9_0,
		hlds__make_hlds__state_var__substitute_state_var_mapping_8_0_i9);
MR_def_label(hlds__make_hlds__state_var__substitute_state_var_mapping_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		hlds__make_hlds__state_var__substitute_state_var_mapping_8_0_i10);
MR_def_label(hlds__make_hlds__state_var__substitute_state_var_mapping_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_decr_sp_and_return(5);
	}
MR_def_label(hlds__make_hlds__state_var__substitute_state_var_mapping_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__substitute_state_var_mapping_8_0_i65);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__substitute_state_var_mapping_8_0_i65);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr2, MR_string_const("!:", 2)) != 0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__substitute_state_var_mapping_8_0_i65);
	}
	MR_tempr1 = MR_tfield(0, MR_r1, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__substitute_state_var_mapping_8_0_i65);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__substitute_state_var_mapping_8_0_i65);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__substitute_state_var_mapping_8_0_i65);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(0, MR_r1, 2);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__lookup_colon_state_var_9_0,
		hlds__make_hlds__state_var__substitute_state_var_mapping_8_0_i19);
MR_def_label(hlds__make_hlds__state_var__substitute_state_var_mapping_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		hlds__make_hlds__state_var__substitute_state_var_mapping_8_0_i20);
MR_def_label(hlds__make_hlds__state_var__substitute_state_var_mapping_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_decr_sp_and_return(5);
	}
MR_def_label(hlds__make_hlds__state_var__substitute_state_var_mapping_8_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__state_var_module44)
	MR_init_entry1(hlds__make_hlds__state_var__substitute_state_var_mappings_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__state_var__substitute_state_var_mappings_8_0);
	MR_init_label3(hlds__make_hlds__state_var__substitute_state_var_mappings_8_0,17,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'substitute_state_var_mappings'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__state_var__substitute_state_var_mappings_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__substitute_state_var_mappings_8_0_i17);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(hlds__make_hlds__state_var__substitute_state_var_mappings_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(hlds__make_hlds__state_var__substitute_state_var_mapping_8_0,
		hlds__make_hlds__state_var__substitute_state_var_mappings_8_0_i4);
MR_def_label(hlds__make_hlds__state_var__substitute_state_var_mappings_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_localcall_lab(hlds__make_hlds__state_var__substitute_state_var_mappings_8_0,
		hlds__make_hlds__state_var__substitute_state_var_mappings_8_0_i5);
MR_def_label(hlds__make_hlds__state_var__substitute_state_var_mappings_8_0,5)
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

MR_decl_entry(list__last_2_0);
MR_decl_entry(__Unify___term__const_0_0);
MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(hlds__make_hlds__state_var_module45)
	MR_init_entry1(hlds__make_hlds__state_var__illegal_state_var_func_result_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__state_var__illegal_state_var_func_result_3_0);
	MR_init_label4(hlds__make_hlds__state_var__illegal_state_var_func_result_3_0,5,8,11,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'illegal_state_var_func_result'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__state_var__illegal_state_var_func_result_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__illegal_state_var_func_result_3_0_i1);
	}
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,4,21);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(list__last_2_0,
		hlds__make_hlds__state_var__illegal_state_var_func_result_3_0_i5);
MR_def_label(hlds__make_hlds__state_var__illegal_state_var_func_result_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__illegal_state_var_func_result_3_0_i1);
	}
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__illegal_state_var_func_result_3_0_i1);
	}
	MR_sv(1) = MR_tfield(0, MR_r2, 1);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(__Unify___term__const_0_0,
		hlds__make_hlds__state_var__illegal_state_var_func_result_3_0_i8);
MR_def_label(hlds__make_hlds__state_var__illegal_state_var_func_result_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__illegal_state_var_func_result_3_0_i1);
	}
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__illegal_state_var_func_result_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		hlds__make_hlds__state_var__illegal_state_var_func_result_3_0_i11);
MR_def_label(hlds__make_hlds__state_var__illegal_state_var_func_result_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__illegal_state_var_func_result_3_0_i1);
	}
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__illegal_state_var_func_result_3_0_i1);
	}
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(hlds__make_hlds__state_var__illegal_state_var_func_result_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__state_var_module46)
	MR_init_entry1(hlds__make_hlds__state_var__lambda_args_contain_bang_state_var_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__state_var__lambda_args_contain_bang_state_var_2_0);
	MR_init_label2(hlds__make_hlds__state_var__lambda_args_contain_bang_state_var_2_0,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lambda_args_contain_bang_state_var'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__state_var__lambda_args_contain_bang_state_var_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__lambda_args_contain_bang_state_var_2_0_i1);
	}
	MR_r3 = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__lambda_args_contain_bang_state_var_2_0_i3);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__lambda_args_contain_bang_state_var_2_0_i3);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr3, MR_string_const("!", 1)) != 0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__lambda_args_contain_bang_state_var_2_0_i3);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__lambda_args_contain_bang_state_var_2_0_i3);
	}
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__lambda_args_contain_bang_state_var_2_0_i3);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__lambda_args_contain_bang_state_var_2_0_i3);
	}
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(hlds__make_hlds__state_var__lambda_args_contain_bang_state_var_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_np_localtailcall(hlds__make_hlds__state_var__lambda_args_contain_bang_state_var_2_0);
MR_def_label(hlds__make_hlds__state_var__lambda_args_contain_bang_state_var_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__state_var_module47)
	MR_init_entry1(hlds__make_hlds__state_var__report_illegal_func_svar_result_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__state_var__report_illegal_func_svar_result_5_0);
	MR_init_label4(hlds__make_hlds__state_var__report_illegal_func_svar_result_5_0,2,4,8,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'report_illegal_func_svar_result'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__state_var__report_illegal_func_svar_result_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_np_call_localret_ent(fn__varset__lookup_name_2_0,
		hlds__make_hlds__state_var__report_illegal_func_svar_result_5_0_i2);
MR_def_label(hlds__make_hlds__state_var__report_illegal_func_svar_result_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(3,3,22);
	MR_r1 = (MR_Word) MR_string_const("!", 1);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__state_var__report_illegal_func_svar_result_5_0_i4);
MR_def_label(hlds__make_hlds__state_var__report_illegal_func_svar_result_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(4), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(4), 0) = MR_r1;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(3,3,23);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(3,3,24);
	MR_r1 = (MR_Word) MR_string_const("!.", 2);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__state_var__report_illegal_func_svar_result_5_0_i8);
MR_def_label(hlds__make_hlds__state_var__report_illegal_func_svar_result_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_sv(7);
	MR_sv(7) = MR_tempr1;
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(3,3,25);
	MR_r1 = (MR_Word) MR_string_const("!:", 2);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__state_var__report_illegal_func_svar_result_5_0_i11);
MR_def_label(hlds__make_hlds__state_var__report_illegal_func_svar_result_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,4,18);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(8);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(6);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(5);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_sv(2);
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__state_var_module48)
	MR_init_entry1(hlds__make_hlds__state_var__report_illegal_bang_svar_lambda_arg_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__state_var__report_illegal_bang_svar_lambda_arg_5_0);
	MR_init_label4(hlds__make_hlds__state_var__report_illegal_bang_svar_lambda_arg_5_0,2,4,8,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'report_illegal_bang_svar_lambda_arg'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__state_var__report_illegal_bang_svar_lambda_arg_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_np_call_localret_ent(fn__varset__lookup_name_2_0,
		hlds__make_hlds__state_var__report_illegal_bang_svar_lambda_arg_5_0_i2);
MR_def_label(hlds__make_hlds__state_var__report_illegal_bang_svar_lambda_arg_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(3,3,22);
	MR_r1 = (MR_Word) MR_string_const("!", 1);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__state_var__report_illegal_bang_svar_lambda_arg_5_0_i4);
MR_def_label(hlds__make_hlds__state_var__report_illegal_bang_svar_lambda_arg_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(4), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(4), 0) = MR_r1;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(3,3,26);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(3,3,27);
	MR_r1 = (MR_Word) MR_string_const("!.", 2);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__state_var__report_illegal_bang_svar_lambda_arg_5_0_i8);
MR_def_label(hlds__make_hlds__state_var__report_illegal_bang_svar_lambda_arg_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_sv(7);
	MR_sv(7) = MR_tempr1;
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(3,3,25);
	MR_r1 = (MR_Word) MR_string_const("!:", 2);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__state_var__report_illegal_bang_svar_lambda_arg_5_0_i11);
MR_def_label(hlds__make_hlds__state_var__report_illegal_bang_svar_lambda_arg_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,4,18);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(8);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(6);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(5);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_sv(2);
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_item_clause_info_0;
MR_decl_entry(fn__list__length_1_0);
MR_decl_entry(parse_tree__prog_util__adjust_func_arity_3_1);

MR_BEGIN_MODULE(hlds__make_hlds__state_var_module49)
	MR_init_entry1(hlds__make_hlds__state_var__expand_bang_states_method_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__state_var__expand_bang_states_method_2_0);
	MR_init_label5(hlds__make_hlds__state_var__expand_bang_states_method_2_0,5,9,10,6,32)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'expand_bang_states_method'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__state_var__expand_bang_states_method_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 2);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__expand_bang_states_method_2_0_i32);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_sv(4) = MR_tfield(0, MR_r1, 3);
	MR_sv(3) = MR_tfield(0, MR_r1, 4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, item_clause_info);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,4);
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(list__map_3_0,
		hlds__make_hlds__state_var__expand_bang_states_method_2_0_i5);
MR_def_label(hlds__make_hlds__state_var__expand_bang_states_method_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__expand_bang_states_method_2_0_i6);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,21);
	MR_r2 = MR_tfield(0, MR_tfield(1, MR_sv(4), 0), 4);
	MR_np_call_localret_ent(fn__list__length_1_0,
		hlds__make_hlds__state_var__expand_bang_states_method_2_0_i9);
MR_def_label(hlds__make_hlds__state_var__expand_bang_states_method_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_util__adjust_func_arity_3_1,
		hlds__make_hlds__state_var__expand_bang_states_method_2_0_i10);
MR_def_label(hlds__make_hlds__state_var__expand_bang_states_method_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(hlds__make_hlds__state_var__expand_bang_states_method_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r1, 0) = MR_sv(1);
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_tfield(0, MR_r1, 2) = MR_r2;
	MR_tfield(0, MR_r1, 3) = MR_sv(4);
	MR_tfield(0, MR_r1, 4) = MR_sv(3);
	MR_decr_sp_and_return(5);
MR_def_label(hlds__make_hlds__state_var__expand_bang_states_method_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__state_var_module50)
	MR_init_entry1(hlds__make_hlds__state_var__expand_bang_states_clause_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__state_var__expand_bang_states_clause_2_0);
	MR_init_label1(hlds__make_hlds__state_var__expand_bang_states_clause_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'expand_bang_states_clause'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__state_var__expand_bang_states_clause_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_sv(3) = MR_tfield(0, MR_r1, 2);
	MR_sv(4) = MR_tfield(0, MR_r1, 3);
	MR_sv(5) = MR_tfield(0, MR_r1, 5);
	MR_sv(6) = MR_tfield(0, MR_r1, 6);
	MR_sv(7) = MR_tfield(0, MR_r1, 7);
	MR_r1 = MR_tfield(0, MR_r1, 4);
	MR_np_call_localret_ent(hlds__make_hlds__state_var__expand_bang_states_2_0,
		hlds__make_hlds__state_var__expand_bang_states_clause_2_0_i2);
MR_def_label(hlds__make_hlds__state_var__expand_bang_states_clause_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 8);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_sv(2);
	MR_tfield(0, MR_r2, 2) = MR_sv(3);
	MR_tfield(0, MR_r2, 3) = MR_sv(4);
	MR_tfield(0, MR_r2, 4) = MR_r1;
	MR_tfield(0, MR_r2, 5) = MR_sv(5);
	MR_tfield(0, MR_r2, 6) = MR_sv(6);
	MR_tfield(0, MR_r2, 7) = MR_sv(7);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__state_var_module51)
	MR_init_entry1(hlds__make_hlds__state_var__reset_updated_status_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__state_var__reset_updated_status_2_0);
	MR_init_label2(hlds__make_hlds__state_var__reset_updated_status_2_0,5,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'reset_updated_status'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__state_var__reset_updated_status_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__reset_updated_status_2_0_i2);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__reset_updated_status_2_0_i2);
	}
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__reset_updated_status_2_0_i5);
	}
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(hlds__make_hlds__state_var__reset_updated_status_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TEST(MR_r1,3,0)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__reset_updated_status_2_0_i2);
	}
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 1) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_r2;
MR_def_label(hlds__make_hlds__state_var__reset_updated_status_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__state_var_module52)
	MR_init_entry1(hlds__make_hlds__state_var__add_conjunct_delayed_renames_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__state_var__add_conjunct_delayed_renames_7_0);
	MR_init_label8(hlds__make_hlds__state_var__add_conjunct_delayed_renames_7_0,2,7,9,10,3,11,12,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_conjunct_delayed_renames'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__state_var__add_conjunct_delayed_renames_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(1) = MR_tfield(0, MR_r2, 0);
	MR_sv(6) = MR_tfield(0, MR_r2, 1);
	MR_sv(5) = MR_r3;
	MR_sv(7) = MR_r4;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_goal_id_1_0,
		hlds__make_hlds__state_var__add_conjunct_delayed_renames_7_0_i2);
MR_def_label(hlds__make_hlds__state_var__add_conjunct_delayed_renames_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,4,3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__search_3_0,
		hlds__make_hlds__state_var__add_conjunct_delayed_renames_7_0_i7);
MR_def_label(hlds__make_hlds__state_var__add_conjunct_delayed_renames_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__state_var__add_conjunct_delayed_renames_7_0_i3);
	}
	MR_r1 = MR_sv(8);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_hlds__state_var__add_conjunct_delayed_renames_7_0_i9);
MR_def_label(hlds__make_hlds__state_var__add_conjunct_delayed_renames_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(7);
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		hlds__make_hlds__state_var__add_conjunct_delayed_renames_7_0_i10);
MR_def_label(hlds__make_hlds__state_var__add_conjunct_delayed_renames_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(hlds__make_hlds__state_var__add_conjunct_delayed_renames_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(counter__allocate_3_0,
		hlds__make_hlds__state_var__add_conjunct_delayed_renames_7_0_i11);
MR_def_label(hlds__make_hlds__state_var__add_conjunct_delayed_renames_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_goal_id_3_0,
		hlds__make_hlds__state_var__add_conjunct_delayed_renames_7_0_i12);
MR_def_label(hlds__make_hlds__state_var__add_conjunct_delayed_renames_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,3);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(7);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		hlds__make_hlds__state_var__add_conjunct_delayed_renames_7_0_i16);
MR_def_label(hlds__make_hlds__state_var__add_conjunct_delayed_renames_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr2;
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__state_var_module53)
	MR_init_entry1(hlds__make_hlds__state_var__severity_is_error_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__state_var__severity_is_error_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'severity_is_error'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__state_var__severity_is_error_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 0);
	MR_r1 = ((MR_Integer) MR_r2 == (MR_Integer) MR_tbmkword(0, 0));
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___hlds__hlds_goal__hlds_goal_0_0);

MR_BEGIN_MODULE(hlds__make_hlds__state_var_module54)
	MR_init_entry1(__Unify___hlds__make_hlds__state_var__hlds_goal_svar_state_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__make_hlds__state_var__hlds_goal_svar_state_0_0);
	MR_init_label3(__Unify___hlds__make_hlds__state_var__hlds_goal_svar_state_0_0,4,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___hlds__make_hlds__state_var__hlds_goal_svar_state_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___hlds__make_hlds__state_var__hlds_goal_svar_state_0_0_i8);
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
	MR_np_call_localret_ent(__Unify___hlds__hlds_goal__hlds_goal_0_0,
		__Unify___hlds__make_hlds__state_var__hlds_goal_svar_state_0_0_i4);
MR_def_label(__Unify___hlds__make_hlds__state_var__hlds_goal_svar_state_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__make_hlds__state_var__hlds_goal_svar_state_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___hlds__make_hlds__state_var__svar_state_0_0);
MR_def_label(__Unify___hlds__make_hlds__state_var__hlds_goal_svar_state_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___hlds__make_hlds__state_var__hlds_goal_svar_state_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___hlds__hlds_goal__hlds_goal_0_0);

MR_BEGIN_MODULE(hlds__make_hlds__state_var_module55)
	MR_init_entry1(__Compare___hlds__make_hlds__state_var__hlds_goal_svar_state_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__make_hlds__state_var__hlds_goal_svar_state_0_0);
	MR_init_label4(__Compare___hlds__make_hlds__state_var__hlds_goal_svar_state_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___hlds__make_hlds__state_var__hlds_goal_svar_state_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__state_var__hlds_goal_svar_state_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___hlds__make_hlds__state_var__hlds_goal_svar_state_0_0_i2);
MR_def_label(__Compare___hlds__make_hlds__state_var__hlds_goal_svar_state_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___hlds__make_hlds__state_var__hlds_goal_svar_state_0_0,2)
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
	MR_np_call_localret_ent(__Compare___hlds__hlds_goal__hlds_goal_0_0,
		__Compare___hlds__make_hlds__state_var__hlds_goal_svar_state_0_0_i5);
MR_def_label(__Compare___hlds__make_hlds__state_var__hlds_goal_svar_state_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__state_var__hlds_goal_svar_state_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___hlds__make_hlds__state_var__svar_state_0_0);
MR_def_label(__Compare___hlds__make_hlds__state_var__hlds_goal_svar_state_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__state_var_module56)
	MR_init_entry1(__Unify___hlds__make_hlds__state_var__readonly_context_kind_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__make_hlds__state_var__readonly_context_kind_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___hlds__make_hlds__state_var__readonly_context_kind_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_114_101_97_100_111_110_108_121_95_99_111_110_116_101_120_116_95_107_105_110_100_95_48_95_95_91_49_44_32_50_93_95_48_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__state_var_module57)
	MR_init_entry1(__Compare___hlds__make_hlds__state_var__readonly_context_kind_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__make_hlds__state_var__readonly_context_kind_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___hlds__make_hlds__state_var__readonly_context_kind_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_114_101_97_100_111_110_108_121_95_99_111_110_116_101_120_116_95_107_105_110_100_95_48_95_95_91_50_44_32_51_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__state_var_module58)
	MR_init_entry1(__Unify___hlds__make_hlds__state_var__state_var_name_source_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__make_hlds__state_var__state_var_name_source_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___hlds__make_hlds__state_var__state_var_name_source_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(hlds__make_hlds__state_var_module59)
	MR_init_entry1(__Compare___hlds__make_hlds__state_var__state_var_name_source_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__make_hlds__state_var__state_var_name_source_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___hlds__make_hlds__state_var__state_var_name_source_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__state_var_module60)
	MR_init_entry1(__Unify___hlds__make_hlds__state_var__svar_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__make_hlds__state_var__svar_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___hlds__make_hlds__state_var__svar_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___term__var_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___term__var_1_0);

MR_BEGIN_MODULE(hlds__make_hlds__state_var_module61)
	MR_init_entry1(__Compare___hlds__make_hlds__state_var__svar_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__make_hlds__state_var__svar_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___hlds__make_hlds__state_var__svar_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___term__var_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__state_var_module62)
	MR_init_entry1(__Unify___hlds__make_hlds__state_var__svar_inner_atomic_scope_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__make_hlds__state_var__svar_inner_atomic_scope_info_0_0);
	MR_init_label4(__Unify___hlds__make_hlds__state_var__svar_inner_atomic_scope_info_0_0,4,6,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___hlds__make_hlds__state_var__svar_inner_atomic_scope_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___hlds__make_hlds__state_var__svar_inner_atomic_scope_info_0_0_i10);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
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
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		__Unify___hlds__make_hlds__state_var__svar_inner_atomic_scope_info_0_0_i4);
MR_def_label(__Unify___hlds__make_hlds__state_var__svar_inner_atomic_scope_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__make_hlds__state_var__svar_inner_atomic_scope_info_0_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		__Unify___hlds__make_hlds__state_var__svar_inner_atomic_scope_info_0_0_i6);
MR_def_label(__Unify___hlds__make_hlds__state_var__svar_inner_atomic_scope_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__make_hlds__state_var__svar_inner_atomic_scope_info_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(__Unify___hlds__make_hlds__state_var__svar_state_0_0);
MR_def_label(__Unify___hlds__make_hlds__state_var__svar_inner_atomic_scope_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___hlds__make_hlds__state_var__svar_inner_atomic_scope_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__state_var_module63)
	MR_init_entry1(__Compare___hlds__make_hlds__state_var__svar_inner_atomic_scope_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__make_hlds__state_var__svar_inner_atomic_scope_info_0_0);
	MR_init_label5(__Compare___hlds__make_hlds__state_var__svar_inner_atomic_scope_info_0_0,3,2,5,9,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___hlds__make_hlds__state_var__svar_inner_atomic_scope_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__state_var__svar_inner_atomic_scope_info_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___hlds__make_hlds__state_var__svar_inner_atomic_scope_info_0_0_i2);
MR_def_label(__Compare___hlds__make_hlds__state_var__svar_inner_atomic_scope_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___hlds__make_hlds__state_var__svar_inner_atomic_scope_info_0_0,2)
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___term__var_1_0,
		__Compare___hlds__make_hlds__state_var__svar_inner_atomic_scope_info_0_0_i5);
MR_def_label(__Compare___hlds__make_hlds__state_var__svar_inner_atomic_scope_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__state_var__svar_inner_atomic_scope_info_0_0_i29);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___term__var_1_0,
		__Compare___hlds__make_hlds__state_var__svar_inner_atomic_scope_info_0_0_i9);
MR_def_label(__Compare___hlds__make_hlds__state_var__svar_inner_atomic_scope_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__state_var__svar_inner_atomic_scope_info_0_0_i29);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___hlds__make_hlds__state_var__svar_state_0_0);
MR_def_label(__Compare___hlds__make_hlds__state_var__svar_inner_atomic_scope_info_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__state_var_module64)
	MR_init_entry1(__Unify___hlds__make_hlds__state_var__svar_outer_atomic_scope_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__make_hlds__state_var__svar_outer_atomic_scope_info_0_0);
	MR_init_label5(__Unify___hlds__make_hlds__state_var__svar_outer_atomic_scope_info_0_0,16,5,7,9,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___hlds__make_hlds__state_var__svar_outer_atomic_scope_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___hlds__make_hlds__state_var__svar_outer_atomic_scope_info_0_0_i16);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___hlds__make_hlds__state_var__svar_outer_atomic_scope_info_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(5);
	MR_proceed();
	}
MR_def_label(__Unify___hlds__make_hlds__state_var__svar_outer_atomic_scope_info_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___hlds__make_hlds__state_var__svar_outer_atomic_scope_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___hlds__make_hlds__state_var__svar_outer_atomic_scope_info_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(4) = MR_tfield(1, MR_tempr2, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		__Unify___hlds__make_hlds__state_var__svar_outer_atomic_scope_info_0_0_i7);
MR_def_label(__Unify___hlds__make_hlds__state_var__svar_outer_atomic_scope_info_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__make_hlds__state_var__svar_outer_atomic_scope_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___hlds__make_hlds__state_var__svar_status_0_0,
		__Unify___hlds__make_hlds__state_var__svar_outer_atomic_scope_info_0_0_i9);
MR_def_label(__Unify___hlds__make_hlds__state_var__svar_outer_atomic_scope_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__make_hlds__state_var__svar_outer_atomic_scope_info_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___hlds__make_hlds__state_var__svar_status_0_0);
MR_def_label(__Unify___hlds__make_hlds__state_var__svar_outer_atomic_scope_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__state_var_module65)
	MR_init_entry1(__Compare___hlds__make_hlds__state_var__svar_outer_atomic_scope_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__make_hlds__state_var__svar_outer_atomic_scope_info_0_0);
	MR_init_label7(__Compare___hlds__make_hlds__state_var__svar_outer_atomic_scope_info_0_0,30,7,5,9,11,15,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___hlds__make_hlds__state_var__svar_outer_atomic_scope_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__state_var__svar_outer_atomic_scope_info_0_0_i30);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__state_var__svar_outer_atomic_scope_info_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__state_var__svar_outer_atomic_scope_info_0_0_i7);
	}
MR_def_label(__Compare___hlds__make_hlds__state_var__svar_outer_atomic_scope_info_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___hlds__make_hlds__state_var__svar_outer_atomic_scope_info_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___hlds__make_hlds__state_var__svar_outer_atomic_scope_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__state_var__svar_outer_atomic_scope_info_0_0_i9);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___hlds__make_hlds__state_var__svar_outer_atomic_scope_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
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
		__Compare___hlds__make_hlds__state_var__svar_outer_atomic_scope_info_0_0_i11);
MR_def_label(__Compare___hlds__make_hlds__state_var__svar_outer_atomic_scope_info_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__state_var__svar_outer_atomic_scope_info_0_0_i21);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(__Compare___hlds__make_hlds__state_var__svar_status_0_0,
		__Compare___hlds__make_hlds__state_var__svar_outer_atomic_scope_info_0_0_i15);
MR_def_label(__Compare___hlds__make_hlds__state_var__svar_outer_atomic_scope_info_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__state_var__svar_outer_atomic_scope_info_0_0_i21);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___hlds__make_hlds__state_var__svar_status_0_0);
MR_def_label(__Compare___hlds__make_hlds__state_var__svar_outer_atomic_scope_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(hlds__make_hlds__state_var_module66)
	MR_init_entry1(__Unify___hlds__make_hlds__state_var__svar_state_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__make_hlds__state_var__svar_state_0_0);
	MR_init_label1(__Unify___hlds__make_hlds__state_var__svar_state_0_0,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___hlds__make_hlds__state_var__svar_state_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___hlds__make_hlds__state_var__svar_state_0_0_i7);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__make_hlds__state_var, svar_status);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
MR_def_label(__Unify___hlds__make_hlds__state_var__svar_state_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___tree234__tree234_2_0);

MR_BEGIN_MODULE(hlds__make_hlds__state_var_module67)
	MR_init_entry1(__Compare___hlds__make_hlds__state_var__svar_state_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__make_hlds__state_var__svar_state_0_0);
	MR_init_label2(__Compare___hlds__make_hlds__state_var__svar_state_0_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___hlds__make_hlds__state_var__svar_state_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__state_var__svar_state_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___hlds__make_hlds__state_var__svar_state_0_0_i2);
MR_def_label(__Compare___hlds__make_hlds__state_var__svar_state_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___hlds__make_hlds__state_var__svar_state_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__make_hlds__state_var, svar_status);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___term__context_0_0);

MR_BEGIN_MODULE(hlds__make_hlds__state_var_module68)
	MR_init_entry1(__Unify___hlds__make_hlds__state_var__svar_status_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__make_hlds__state_var__svar_status_0_0);
	MR_init_label8(__Unify___hlds__make_hlds__state_var__svar_status_0_0,5,8,6,12,38,16,21,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___hlds__make_hlds__state_var__svar_status_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___hlds__make_hlds__state_var__svar_status_0_0_i38);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___hlds__make_hlds__state_var__svar_status_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(4);
	MR_proceed();
	}
MR_def_label(__Unify___hlds__make_hlds__state_var__svar_status_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Unify___hlds__make_hlds__state_var__svar_status_0_0_i6);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___hlds__make_hlds__state_var__svar_status_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(2, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(2, MR_tempr2, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(2, MR_tempr1, 0);
	MR_r3 = MR_tfield(2, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		__Unify___hlds__make_hlds__state_var__svar_status_0_0_i8);
MR_def_label(__Unify___hlds__make_hlds__state_var__svar_status_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__make_hlds__state_var__svar_status_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___term__context_0_0);
MR_def_label(__Unify___hlds__make_hlds__state_var__svar_status_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Unify___hlds__make_hlds__state_var__svar_status_0_0_i12);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___hlds__make_hlds__state_var__svar_status_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	MR_r3 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___term__var_1_0);
MR_def_label(__Unify___hlds__make_hlds__state_var__svar_status_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Unify___hlds__make_hlds__state_var__svar_status_0_0_i16);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___hlds__make_hlds__state_var__svar_status_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___term__var_1_0);
MR_def_label(__Unify___hlds__make_hlds__state_var__svar_status_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___hlds__make_hlds__state_var__svar_status_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___hlds__make_hlds__state_var__svar_status_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	MR_r3 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		__Unify___hlds__make_hlds__state_var__svar_status_0_0_i21);
MR_def_label(__Unify___hlds__make_hlds__state_var__svar_status_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__make_hlds__state_var__svar_status_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___term__var_1_0);
MR_def_label(__Unify___hlds__make_hlds__state_var__svar_status_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___term__context_0_0);

MR_BEGIN_MODULE(hlds__make_hlds__state_var_module69)
	MR_init_entry1(__Compare___hlds__make_hlds__state_var__svar_status_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__make_hlds__state_var__svar_status_0_0);
	MR_init_label10(__Compare___hlds__make_hlds__state_var__svar_status_0_0,78,7,8,9,5,13,16,14,21,11)
	MR_init_label10(__Compare___hlds__make_hlds__state_var__svar_status_0_0,25,141,26,23,32,33,34,30,38,39)
	MR_init_label4(__Compare___hlds__make_hlds__state_var__svar_status_0_0,40,41,43,48)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___hlds__make_hlds__state_var__svar_status_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__state_var__svar_status_0_0_i78);
	}
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__state_var__svar_status_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__state_var__svar_status_0_0_i7);
	}
MR_def_label(__Compare___hlds__make_hlds__state_var__svar_status_0_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__make_hlds__state_var__svar_status_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__state_var__svar_status_0_0_i8);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__make_hlds__state_var__svar_status_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__state_var__svar_status_0_0_i9);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__make_hlds__state_var__svar_status_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__state_var__svar_status_0_0_i141);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__make_hlds__state_var__svar_status_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__state_var__svar_status_0_0_i11);
	}
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__state_var__svar_status_0_0_i13);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__make_hlds__state_var__svar_status_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__state_var__svar_status_0_0_i14);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(2, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(2, MR_tempr6, 2);
	MR_tempr3 = MR_tempr5;
	MR_sv(2) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(2, MR_tempr3, 0);
	MR_r3 = MR_tfield(2, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___term__var_1_0,
		__Compare___hlds__make_hlds__state_var__svar_status_0_0_i16);
MR_def_label(__Compare___hlds__make_hlds__state_var__svar_status_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__state_var__svar_status_0_0_i48);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___term__context_0_0);
MR_def_label(__Compare___hlds__make_hlds__state_var__svar_status_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__state_var__svar_status_0_0_i21);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__make_hlds__state_var__svar_status_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__state_var__svar_status_0_0_i141);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__make_hlds__state_var__svar_status_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__state_var__svar_status_0_0_i23);
	}
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__state_var__svar_status_0_0_i25);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__make_hlds__state_var__svar_status_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__state_var__svar_status_0_0_i26);
	}
MR_def_label(__Compare___hlds__make_hlds__state_var__svar_status_0_0,141)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__make_hlds__state_var__svar_status_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__state_var__svar_status_0_0_i141);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_r3 = MR_tfield(1, MR_sv(1), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___term__var_1_0);
MR_def_label(__Compare___hlds__make_hlds__state_var__svar_status_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__state_var__svar_status_0_0_i30);
	}
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__state_var__svar_status_0_0_i32);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__make_hlds__state_var__svar_status_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__state_var__svar_status_0_0_i33);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__make_hlds__state_var__svar_status_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__state_var__svar_status_0_0_i34);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__make_hlds__state_var__svar_status_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__state_var__svar_status_0_0_i141);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_r3 = MR_tfield(3, MR_sv(1), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___term__var_1_0);
MR_def_label(__Compare___hlds__make_hlds__state_var__svar_status_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__state_var__svar_status_0_0_i38);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__make_hlds__state_var__svar_status_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__state_var__svar_status_0_0_i39);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__make_hlds__state_var__svar_status_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__state_var__svar_status_0_0_i40);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__make_hlds__state_var__svar_status_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__state_var__svar_status_0_0_i41);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__make_hlds__state_var__svar_status_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr5;
	MR_sv(2) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(3, MR_tempr3, 1);
	MR_r3 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___term__var_1_0,
		__Compare___hlds__make_hlds__state_var__svar_status_0_0_i43);
MR_def_label(__Compare___hlds__make_hlds__state_var__svar_status_0_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__state_var__svar_status_0_0_i48);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___term__var_1_0);
MR_def_label(__Compare___hlds__make_hlds__state_var__svar_status_0_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___counter__counter_0_0);

MR_BEGIN_MODULE(hlds__make_hlds__state_var_module70)
	MR_init_entry1(__Unify___hlds__make_hlds__state_var__svar_store_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__make_hlds__state_var__svar_store_0_0);
	MR_init_label4(__Unify___hlds__make_hlds__state_var__svar_store_0_0,4,9,13,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___hlds__make_hlds__state_var__svar_store_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___hlds__make_hlds__state_var__svar_store_0_0_i13);
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
	MR_np_call_localret_ent(__Unify___counter__counter_0_0,
		__Unify___hlds__make_hlds__state_var__svar_store_0_0_i4);
MR_def_label(__Unify___hlds__make_hlds__state_var__svar_store_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__make_hlds__state_var__svar_store_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___hlds__make_hlds__state_var__svar_store_0_0_i9);
MR_def_label(__Unify___hlds__make_hlds__state_var__svar_store_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__make_hlds__state_var__svar_store_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___hlds__make_hlds__state_var__svar_store_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___hlds__make_hlds__state_var__svar_store_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___counter__counter_0_0);
MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(hlds__make_hlds__state_var_module71)
	MR_init_entry1(__Compare___hlds__make_hlds__state_var__svar_store_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__make_hlds__state_var__svar_store_0_0);
	MR_init_label5(__Compare___hlds__make_hlds__state_var__svar_store_0_0,3,2,5,12,41)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___hlds__make_hlds__state_var__svar_store_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__state_var__svar_store_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___hlds__make_hlds__state_var__svar_store_0_0_i2);
MR_def_label(__Compare___hlds__make_hlds__state_var__svar_store_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___hlds__make_hlds__state_var__svar_store_0_0,2)
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
	MR_np_call_localret_ent(__Compare___counter__counter_0_0,
		__Compare___hlds__make_hlds__state_var__svar_store_0_0_i5);
MR_def_label(__Compare___hlds__make_hlds__state_var__svar_store_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__state_var__svar_store_0_0_i41);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___hlds__make_hlds__state_var__svar_store_0_0_i12);
MR_def_label(__Compare___hlds__make_hlds__state_var__svar_store_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__state_var__svar_store_0_0_i41);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___hlds__make_hlds__state_var__svar_store_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__sublist_2_0);

MR_BEGIN_MODULE(hlds__make_hlds__state_var_module72)
	MR_init_entry1(hlds__make_hlds__state_var__IntroducedFrom__pred__svar_finish_if_then_else__1190__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__state_var__IntroducedFrom__pred__svar_finish_if_then_else__1190__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__svar_finish_if_then_else__1190__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__state_var__IntroducedFrom__pred__svar_finish_if_then_else__1190__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(list__sublist_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__state_var_module73)
	MR_init_entry1(hlds__make_hlds__state_var__IntroducedFrom__pred__svar_finish_if_then_else__1192__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__state_var__IntroducedFrom__pred__svar_finish_if_then_else__1192__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__svar_finish_if_then_else__1192__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__state_var__IntroducedFrom__pred__svar_finish_if_then_else__1192__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,2);
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


MR_BEGIN_MODULE(hlds__make_hlds__state_var_module74)
	MR_init_entry1(hlds__make_hlds__state_var__IntroducedFrom__pred__svar_finish_if_then_else__1194__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__state_var__IntroducedFrom__pred__svar_finish_if_then_else__1194__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__svar_finish_if_then_else__1194__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__state_var__IntroducedFrom__pred__svar_finish_if_then_else__1194__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,2);
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


MR_BEGIN_MODULE(hlds__make_hlds__state_var_module75)
	MR_init_entry1(hlds__make_hlds__state_var__IntroducedFrom__pred__get_disjuncts_with_empty_states__948__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__state_var__IntroducedFrom__pred__get_disjuncts_with_empty_states__948__1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__get_disjuncts_with_empty_states__948__1'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__state_var__IntroducedFrom__pred__get_disjuncts_with_empty_states__948__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__make_hlds__state_var, svar_status);
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(map__is_empty_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__state_var_module76)
	MR_init_entry1(hlds__make_hlds__state_var__IntroducedFrom__pred__handle_arm_updated_state_vars__1058__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__state_var__IntroducedFrom__pred__handle_arm_updated_state_vars__1058__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__handle_arm_updated_state_vars__1058__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__state_var__IntroducedFrom__pred__handle_arm_updated_state_vars__1058__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(__Unify___hlds__make_hlds__state_var__svar_status_0_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__state_var_module77)
	MR_init_entry1(hlds__make_hlds__state_var__IntroducedFrom__pred__handle_state_vars_in_ite__1277__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__state_var__IntroducedFrom__pred__handle_state_vars_in_ite__1277__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__handle_state_vars_in_ite__1277__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__state_var__IntroducedFrom__pred__handle_state_vars_in_ite__1277__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___hlds__make_hlds__state_var__svar_status_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__reverse_2_0);

MR_BEGIN_MODULE(hlds__make_hlds__state_var_module78)
	MR_init_entry1(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_102_105_110_105_115_104_95_100_105_115_106_117_110_99_116_105_111_110_95_95_91_49_93_95_48_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_102_105_110_105_115_104_95_100_105_115_106_117_110_99_116_105_111_110_95_95_91_49_93_95_48_9_0);
	MR_init_label10(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_102_105_110_105_115_104_95_100_105_115_106_117_110_99_116_105_111_110_95_95_91_49_93_95_48_9_0,4,6,7,2,9,10,11,12,13,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__svar_finish_disjunction__[1]_0'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_102_105_110_105_115_104_95_100_105_115_106_117_110_99_116_105_111_110_95_95_91_49_93_95_48_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r4;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__make_hlds__state_var, svar_status);
	}
	MR_np_call_localret_ent(map__is_empty_1_0,
		f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_102_105_110_105_115_104_95_100_105_115_106_117_110_99_116_105_111_110_95_95_91_49_93_95_48_9_0_i4);
MR_def_label(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_102_105_110_105_115_104_95_100_105_115_106_117_110_99_116_105_111_110_95_95_91_49_93_95_48_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_102_105_110_105_115_104_95_100_105_115_106_117_110_99_116_105_111_110_95_95_91_49_93_95_48_9_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(hlds__make_hlds__state_var__get_disjuncts_with_empty_states_3_0,
		f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_102_105_110_105_115_104_95_100_105_115_106_117_110_99_116_105_111_110_95_95_91_49_93_95_48_9_0_i6);
MR_def_label(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_102_105_110_105_115_104_95_100_105_115_106_117_110_99_116_105_111_110_95_95_91_49_93_95_48_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_102_105_110_105_115_104_95_100_105_115_106_117_110_99_116_105_111_110_95_95_91_49_93_95_48_9_0_i7);
MR_def_label(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_102_105_110_105_115_104_95_100_105_115_106_117_110_99_116_105_111_110_95_95_91_49_93_95_48_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_decr_sp_and_return(8);
MR_def_label(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_102_105_110_105_115_104_95_100_105_115_106_117_110_99_116_105_111_110_95_95_91_49_93_95_48_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(hlds__make_hlds__state_var, svar_status);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(map__to_sorted_assoc_list_2_0,
		f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_102_105_110_105_115_104_95_100_105_115_106_117_110_99_116_105_111_110_95_95_91_49_93_95_48_9_0_i9);
MR_def_label(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_102_105_110_105_115_104_95_100_105_115_106_117_110_99_116_105_111_110_95_95_91_49_93_95_48_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(fn__map__init_0_0,
		f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_102_105_110_105_115_104_95_100_105_115_106_117_110_99_116_105_111_110_95_95_91_49_93_95_48_9_0_i10);
MR_def_label(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_102_105_110_105_115_104_95_100_105_115_106_117_110_99_116_105_111_110_95_95_91_49_93_95_48_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__compute_status_after_arms_6_0,
		f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_102_105_110_105_115_104_95_100_105_115_106_117_110_99_116_105_111_110_95_95_91_49_93_95_48_9_0_i11);
MR_def_label(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_102_105_110_105_115_104_95_100_105_115_106_117_110_99_116_105_111_110_95_95_91_49_93_95_48_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__to_sorted_assoc_list_2_0,
		f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_102_105_110_105_115_104_95_100_105_115_106_117_110_99_116_105_111_110_95_95_91_49_93_95_48_9_0_i12);
MR_def_label(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_102_105_110_105_115_104_95_100_105_115_106_117_110_99_116_105_111_110_95_95_91_49_93_95_48_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_sv(2);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_sv(4);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr3 = MR_sv(5);
	MR_r6 = MR_tfield(0, MR_tempr3, 0);
	MR_r7 = MR_tfield(0, MR_tempr3, 1);
	MR_r8 = MR_tfield(0, MR_tempr3, 2);
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__merge_changes_made_by_arms_12_0,
		f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_102_105_110_105_115_104_95_100_105_115_106_117_110_99_116_105_111_110_95_95_91_49_93_95_48_9_0_i13);
MR_def_label(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_102_105_110_105_115_104_95_100_105_115_106_117_110_99_116_105_111_110_95_95_91_49_93_95_48_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(5) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_102_105_110_105_115_104_95_100_105_115_106_117_110_99_116_105_111_110_95_95_91_49_93_95_48_9_0_i14);
MR_def_label(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_102_105_110_105_115_104_95_100_105_115_106_117_110_99_116_105_111_110_95_95_91_49_93_95_48_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(hlds__make_hlds__state_var_module79)
	MR_init_entry1(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_115_116_97_114_116_95_105_110_110_101_114_95_97_116_111_109_105_99_95_115_99_111_112_101_95_95_91_49_93_95_48_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_115_116_97_114_116_95_105_110_110_101_114_95_97_116_111_109_105_99_95_115_99_111_112_101_95_95_91_49_93_95_48_9_0);
	MR_init_label5(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_115_116_97_114_116_95_105_110_110_101_114_95_97_116_111_109_105_99_95_115_99_111_112_101_95_95_91_49_93_95_48_9_0,2,3,4,5,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__svar_start_inner_atomic_scope__[1]_0'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_115_116_97_114_116_95_105_110_110_101_114_95_97_116_111_109_105_99_95_115_99_111_112_101_95_95_91_49_93_95_48_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__varset__lookup_name_2_0,
		f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_115_116_97_114_116_95_105_110_110_101_114_95_97_116_111_109_105_99_95_115_99_111_112_101_95_95_91_49_93_95_48_9_0_i2);
MR_def_label(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_115_116_97_114_116_95_105_110_110_101_114_95_97_116_111_109_105_99_95_115_99_111_112_101_95_95_91_49_93_95_48_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("_0", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_115_116_97_114_116_95_105_110_110_101_114_95_97_116_111_109_105_99_95_115_99_111_112_101_95_95_91_49_93_95_48_9_0_i3);
MR_def_label(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_115_116_97_114_116_95_105_110_110_101_114_95_97_116_111_109_105_99_95_115_99_111_112_101_95_95_91_49_93_95_48_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("STATE_VARIABLE_", 15);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_115_116_97_114_116_95_105_110_110_101_114_95_97_116_111_109_105_99_95_115_99_111_112_101_95_95_91_49_93_95_48_9_0_i4);
MR_def_label(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_115_116_97_114_116_95_105_110_110_101_114_95_97_116_111_109_105_99_95_115_99_111_112_101_95_95_91_49_93_95_48_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(varset__new_named_var_4_0,
		f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_115_116_97_114_116_95_105_110_110_101_114_95_97_116_111_109_105_99_95_115_99_111_112_101_95_95_91_49_93_95_48_9_0_i5);
MR_def_label(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_115_116_97_114_116_95_105_110_110_101_114_95_97_116_111_109_105_99_95_115_99_111_112_101_95_95_91_49_93_95_48_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_sv(3) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__make_hlds__state_var, svar_status);
	MR_r4 = MR_sv(1);
	MR_r6 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_115_116_97_114_116_95_105_110_110_101_114_95_97_116_111_109_105_99_95_115_99_111_112_101_95_95_91_49_93_95_48_9_0_i8);
MR_def_label(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_115_116_97_114_116_95_105_110_110_101_114_95_97_116_111_109_105_99_95_115_99_111_112_101_95_95_91_49_93_95_48_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(2);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(4);
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__state_var_module80)
	MR_init_entry1(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_102_105_110_105_115_104_95_105_110_110_101_114_95_97_116_111_109_105_99_95_115_99_111_112_101_95_95_91_49_93_95_48_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_102_105_110_105_115_104_95_105_110_110_101_114_95_97_116_111_109_105_99_95_115_99_111_112_101_95_95_91_49_93_95_48_10_0);
	MR_init_label2(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_102_105_110_105_115_104_95_105_110_110_101_114_95_97_116_111_109_105_99_95_115_99_111_112_101_95_95_91_49_93_95_48_10_0,3,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__svar_finish_inner_atomic_scope__[1]_0'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_102_105_110_105_115_104_95_105_110_110_101_114_95_97_116_111_109_105_99_95_115_99_111_112_101_95_95_91_49_93_95_48_10_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_sv(2) = MR_tfield(0, MR_r1, 2);
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__make_hlds__state_var, svar_status);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_102_105_110_105_115_104_95_105_110_110_101_114_95_97_116_111_109_105_99_95_115_99_111_112_101_95_95_91_49_93_95_48_10_0_i3);
MR_def_label(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_102_105_110_105_115_104_95_105_110_110_101_114_95_97_116_111_109_105_99_95_115_99_111_112_101_95_95_91_49_93_95_48_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_102_105_110_105_115_104_95_105_110_110_101_114_95_97_116_111_109_105_99_95_115_99_111_112_101_95_95_91_49_93_95_48_10_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_decr_sp_and_return(5);
	}
MR_def_label(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_102_105_110_105_115_104_95_105_110_110_101_114_95_97_116_111_109_105_99_95_115_99_111_112_101_95_95_91_49_93_95_48_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.make_hlds.state_var", 24);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.make_hlds.state_var.svar_finish_inner_atomic_scope\'/10", 70);
	MR_r3 = (MR_Word) MR_string_const("status != known", 15);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__state_var_module81)
	MR_init_entry1(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_114_101_97_100_111_110_108_121_95_99_111_110_116_101_120_116_95_107_105_110_100_95_48_95_95_91_49_44_32_50_93_95_48_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_114_101_97_100_111_110_108_121_95_99_111_110_116_101_120_116_95_107_105_110_100_95_48_95_95_91_49_44_32_50_93_95_48_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred____Unify___hlds__make_hlds__state_var__readonly_context_kind_0__[1, 2]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_114_101_97_100_111_110_108_121_95_99_111_110_116_101_120_116_95_107_105_110_100_95_48_95_95_91_49_44_32_50_93_95_48_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__state_var_module82)
	MR_init_entry1(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_114_101_97_100_111_110_108_121_95_99_111_110_116_101_120_116_95_107_105_110_100_95_48_95_95_91_50_44_32_51_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_114_101_97_100_111_110_108_121_95_99_111_110_116_101_120_116_95_107_105_110_100_95_48_95_95_91_50_44_32_51_93_95_48_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred____Compare___hlds__make_hlds__state_var__readonly_context_kind_0__[2, 3]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_114_101_97_100_111_110_108_121_95_99_111_110_116_101_120_116_95_107_105_110_100_95_48_95_95_91_50_44_32_51_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__hlds__make_hlds__state_var_maybe_bunch_0(void)
{
	hlds__make_hlds__state_var_module0();
	hlds__make_hlds__state_var_module1();
	hlds__make_hlds__state_var_module2();
	hlds__make_hlds__state_var_module3();
	hlds__make_hlds__state_var_module4();
	hlds__make_hlds__state_var_module5();
	hlds__make_hlds__state_var_module6();
	hlds__make_hlds__state_var_module7();
	hlds__make_hlds__state_var_module8();
	hlds__make_hlds__state_var_module9();
	hlds__make_hlds__state_var_module10();
	hlds__make_hlds__state_var_module11();
	hlds__make_hlds__state_var_module12();
	hlds__make_hlds__state_var_module13();
	hlds__make_hlds__state_var_module14();
	hlds__make_hlds__state_var_module15();
	hlds__make_hlds__state_var_module16();
	hlds__make_hlds__state_var_module17();
	hlds__make_hlds__state_var_module18();
	hlds__make_hlds__state_var_module19();
	hlds__make_hlds__state_var_module20();
	hlds__make_hlds__state_var_module21();
	hlds__make_hlds__state_var_module22();
	hlds__make_hlds__state_var_module23();
	hlds__make_hlds__state_var_module24();
	hlds__make_hlds__state_var_module25();
	hlds__make_hlds__state_var_module26();
	hlds__make_hlds__state_var_module27();
	hlds__make_hlds__state_var_module28();
	hlds__make_hlds__state_var_module29();
	hlds__make_hlds__state_var_module30();
	hlds__make_hlds__state_var_module31();
	hlds__make_hlds__state_var_module32();
	hlds__make_hlds__state_var_module33();
	hlds__make_hlds__state_var_module34();
	hlds__make_hlds__state_var_module35();
	hlds__make_hlds__state_var_module36();
	hlds__make_hlds__state_var_module37();
	hlds__make_hlds__state_var_module38();
	hlds__make_hlds__state_var_module39();
}

static void mercury__hlds__make_hlds__state_var_maybe_bunch_1(void)
{
	hlds__make_hlds__state_var_module40();
	hlds__make_hlds__state_var_module41();
	hlds__make_hlds__state_var_module42();
	hlds__make_hlds__state_var_module43();
	hlds__make_hlds__state_var_module44();
	hlds__make_hlds__state_var_module45();
	hlds__make_hlds__state_var_module46();
	hlds__make_hlds__state_var_module47();
	hlds__make_hlds__state_var_module48();
	hlds__make_hlds__state_var_module49();
	hlds__make_hlds__state_var_module50();
	hlds__make_hlds__state_var_module51();
	hlds__make_hlds__state_var_module52();
	hlds__make_hlds__state_var_module53();
	hlds__make_hlds__state_var_module54();
	hlds__make_hlds__state_var_module55();
	hlds__make_hlds__state_var_module56();
	hlds__make_hlds__state_var_module57();
	hlds__make_hlds__state_var_module58();
	hlds__make_hlds__state_var_module59();
	hlds__make_hlds__state_var_module60();
	hlds__make_hlds__state_var_module61();
	hlds__make_hlds__state_var_module62();
	hlds__make_hlds__state_var_module63();
	hlds__make_hlds__state_var_module64();
	hlds__make_hlds__state_var_module65();
	hlds__make_hlds__state_var_module66();
	hlds__make_hlds__state_var_module67();
	hlds__make_hlds__state_var_module68();
	hlds__make_hlds__state_var_module69();
	hlds__make_hlds__state_var_module70();
	hlds__make_hlds__state_var_module71();
	hlds__make_hlds__state_var_module72();
	hlds__make_hlds__state_var_module73();
	hlds__make_hlds__state_var_module74();
	hlds__make_hlds__state_var_module75();
	hlds__make_hlds__state_var_module76();
	hlds__make_hlds__state_var_module77();
	hlds__make_hlds__state_var_module78();
	hlds__make_hlds__state_var_module79();
}

static void mercury__hlds__make_hlds__state_var_maybe_bunch_2(void)
{
	hlds__make_hlds__state_var_module80();
	hlds__make_hlds__state_var_module81();
	hlds__make_hlds__state_var_module82();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__hlds__make_hlds__state_var__init(void);
void mercury__hlds__make_hlds__state_var__init_type_tables(void);
void mercury__hlds__make_hlds__state_var__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__hlds__make_hlds__state_var__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__hlds__make_hlds__state_var__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__hlds__make_hlds__state_var__init_threadscope_string_table(void);
#endif

void mercury__hlds__make_hlds__state_var__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__hlds__make_hlds__state_var_maybe_bunch_0();
	mercury__hlds__make_hlds__state_var_maybe_bunch_1();
	mercury__hlds__make_hlds__state_var_maybe_bunch_2();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__make_hlds__state_var__type_ctor_info_hlds_goal_svar_state_0,
		hlds__make_hlds__state_var__hlds_goal_svar_state_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__make_hlds__state_var__type_ctor_info_readonly_context_kind_0,
		hlds__make_hlds__state_var__readonly_context_kind_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__make_hlds__state_var__type_ctor_info_state_var_name_source_0,
		hlds__make_hlds__state_var__state_var_name_source_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__make_hlds__state_var__type_ctor_info_svar_0,
		hlds__make_hlds__state_var__svar_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__make_hlds__state_var__type_ctor_info_svar_inner_atomic_scope_info_0,
		hlds__make_hlds__state_var__svar_inner_atomic_scope_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__make_hlds__state_var__type_ctor_info_svar_outer_atomic_scope_info_0,
		hlds__make_hlds__state_var__svar_outer_atomic_scope_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__make_hlds__state_var__type_ctor_info_svar_state_0,
		hlds__make_hlds__state_var__svar_state_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__make_hlds__state_var__type_ctor_info_svar_status_0,
		hlds__make_hlds__state_var__svar_status_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__make_hlds__state_var__type_ctor_info_svar_store_0,
		hlds__make_hlds__state_var__svar_store_0_0);
	mercury__hlds__make_hlds__state_var__init_debugger();
}

void mercury__hlds__make_hlds__state_var__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__make_hlds__state_var__type_ctor_info_hlds_goal_svar_state_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__make_hlds__state_var__type_ctor_info_readonly_context_kind_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__make_hlds__state_var__type_ctor_info_state_var_name_source_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__make_hlds__state_var__type_ctor_info_svar_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__make_hlds__state_var__type_ctor_info_svar_inner_atomic_scope_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__make_hlds__state_var__type_ctor_info_svar_outer_atomic_scope_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__make_hlds__state_var__type_ctor_info_svar_state_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__make_hlds__state_var__type_ctor_info_svar_status_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__make_hlds__state_var__type_ctor_info_svar_store_0);
	}
}


void mercury__hlds__make_hlds__state_var__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__hlds__make_hlds__state_var__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__hlds__make_hlds__state_var);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__hlds__make_hlds__state_var__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__hlds__make_hlds__state_var__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
