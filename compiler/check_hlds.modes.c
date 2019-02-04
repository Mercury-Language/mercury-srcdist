/*
** Automatically generated from `modes.m'
** by the Mercury compiler,
** version rotd-2007-08-16, configured for i686-pc-linux-gnu.
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
INIT mercury__check_hlds__modes__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 530 "../library/io.int"
#include "io.mh"

#line 27 "check_hlds.modes.c"
#line 538 "../library/io.int"
#include "string.mh"

#line 31 "check_hlds.modes.c"
#line 87 "../library/table_builtin.int2"
#include "table_builtin.mh"

#line 35 "check_hlds.modes.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 39 "check_hlds.modes.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 43 "check_hlds.modes.c"
#line 17 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 47 "check_hlds.modes.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 51 "check_hlds.modes.c"
#line 52 "check_hlds.modes.c"
#include "check_hlds.modes.mh"

#line 55 "check_hlds.modes.c"
#line 56 "check_hlds.modes.c"
#ifndef CHECK_HLDS__MODES_DECL_GUARD
#define CHECK_HLDS__MODES_DECL_GUARD

#line 60 "check_hlds.modes.c"
#line 61 "check_hlds.modes.c"

#endif
#line 64 "check_hlds.modes.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[11];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Integer f1;
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Integer f1;
	MR_Integer f2;
	MR_Word * f3;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

struct mercury_type_10 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_10 mercury_common_10[];

struct mercury_type_11 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[6];
};
MR_STATIC_LINKAGE const struct mercury_type_11 mercury_common_11[];

struct mercury_type_12 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[9];
};
MR_STATIC_LINKAGE const struct mercury_type_12 mercury_common_12[];

struct mercury_type_13 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[10];
};
MR_STATIC_LINKAGE const struct mercury_type_13 mercury_common_13[];

struct mercury_type_14 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[12];
};
MR_STATIC_LINKAGE const struct mercury_type_14 mercury_common_14[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_check_hlds__modes__type_ctor_info_impurity_errors_0,
	mercury_data_check_hlds__modes__type_ctor_info_extra_goals_0,
	mercury_data_check_hlds__modes__type_ctor_info_clause_form_0,
	mercury_data_check_hlds__modes__type_ctor_info_after_goals_0;
MR_decl_label2(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_99_111_110_116_101_120_116_95_116_111_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_49_93_95_48_3_0, 5,4)
MR_decl_label8(check_hlds__modes__add_necessary_disj_init_calls_7_0, 3,9,10,11,12,13,14,15)
MR_decl_label1(check_hlds__modes__add_necessary_disj_init_calls_7_0, 8)
MR_decl_label4(check_hlds__modes__append_extra_goals_3_0, 3,6,7,19)
MR_decl_label8(check_hlds__modes__candidate_init_vars_3_6_0, 133,142,18,22,17,26,25,31)
MR_decl_label8(check_hlds__modes__candidate_init_vars_3_6_0, 30,33,12,14,16,6,8,10)
MR_decl_label8(check_hlds__modes__candidate_init_vars_3_6_0, 11,143,38,39,40,41,42,43)
MR_decl_label8(check_hlds__modes__candidate_init_vars_3_6_0, 46,47,48,49,144,145,52,54)
MR_decl_label8(check_hlds__modes__candidate_init_vars_3_6_0, 56,57,59,60,146,63,64,65)
MR_decl_label5(check_hlds__modes__candidate_init_vars_3_6_0, 66,67,68,69,70)
MR_decl_label8(check_hlds__modes__candidate_init_vars_call_7_0, 70,3,6,7,14,9,23,25)
MR_decl_label3(check_hlds__modes__candidate_init_vars_call_7_0, 21,15,1)
MR_decl_label8(check_hlds__modes__check_final_insts_12_0, 101,2,10,11,14,12,17,19)
MR_decl_label8(check_hlds__modes__check_final_insts_12_0, 21,23,24,25,26,16,27,31)
MR_decl_label6(check_hlds__modes__check_final_insts_12_0, 30,35,34,39,40,6)
MR_decl_label8(check_hlds__modes__check_for_impurity_error_8_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(check_hlds__modes__check_for_impurity_error_8_0, 10,11,12,13,14,15,16,17)
MR_decl_label6(check_hlds__modes__check_for_impurity_error_8_0, 19,20,21,22,23,24)
MR_decl_label8(check_hlds__modes__check_no_inst_any_vars_6_0, 29,3,9,11,12,13,6,15)
MR_decl_label2(check_hlds__modes__check_no_inst_any_vars_6_0, 16,5)
MR_decl_label8(check_hlds__modes__check_pred_modes_7_0, 2,3,4,9,11,12,8,14)
MR_decl_label4(check_hlds__modes__check_pred_modes_7_0, 6,15,16,17)
MR_decl_label3(check_hlds__modes__compute_arg_offset_2_0, 2,3,4)
MR_decl_label7(check_hlds__modes__compute_goal_instmap_delta_6_0, 5,6,2,7,8,9,11)
MR_decl_label8(check_hlds__modes__construct_initialisation_call_8_0, 3,5,8,9,7,6,10,11)
MR_decl_label8(check_hlds__modes__construct_initialisation_call_8_0, 12,13,14,15,16,17,18,19)
MR_decl_label8(check_hlds__modes__construct_initialisation_call_8_0, 20,21,22,23,24,25,26,27)
MR_decl_label8(check_hlds__modes__construct_initialisation_call_8_0, 28,30,31,32,33,34,35,36)
MR_decl_label2(check_hlds__modes__construct_initialisation_call_8_0, 37,2)
MR_decl_label6(check_hlds__modes__construct_initialisation_calls_4_0, 4,5,6,7,8,3)
MR_decl_label8(check_hlds__modes__copy_pred_body_4_0, 2,4,5,3,7,8,9,10)
MR_decl_label2(check_hlds__modes__copy_pred_body_4_0, 11,12)
MR_decl_label4(check_hlds__modes__copy_proc_body_4_0, 2,3,4,5)
MR_decl_label3(check_hlds__modes__get_all_waiting_vars_2_3_0, 11,4,3)
MR_decl_label4(check_hlds__modes__get_live_vars_3_0, 3,9,8,38)
MR_decl_label8(check_hlds__modes__handle_extra_goals_11_0, 43,4,6,9,10,11,12,13)
MR_decl_label8(check_hlds__modes__handle_extra_goals_11_0, 14,15,16,17,18,19,20,21)
MR_decl_label7(check_hlds__modes__handle_extra_goals_11_0, 22,23,24,25,26,27,5)
MR_decl_label3(check_hlds__modes__handle_extra_goals_contexts_3_0, 4,5,3)
MR_decl_label3(check_hlds__modes__is_headvar_unification_goal_2_0, 5,3,1)
MR_decl_label1(check_hlds__modes__is_solver_var_3_0, 2)
MR_decl_label4(check_hlds__modes__maybe_clobber_insts_3_0, 3,10,11,8)
MR_decl_label8(check_hlds__modes__maybe_modecheck_pred_11_0, 2,3,9,7,13,11,15,16)
MR_decl_label8(check_hlds__modes__maybe_modecheck_pred_11_0, 4,18,20,24,25,30,31,23)
MR_decl_label8(check_hlds__modes__maybe_modecheck_pred_11_0, 19,39,40,45,46,44,49,38)
MR_decl_label8(check_hlds__modes__maybe_modecheck_pred_11_0, 51,53,54,55,56,57,58,59)
MR_decl_label6(check_hlds__modes__maybe_modecheck_pred_11_0, 77,60,62,63,66,67)
MR_decl_label8(check_hlds__modes__maybe_modecheck_proc_11_0, 2,4,3,5,6,7,8,9)
MR_decl_label8(check_hlds__modes__maybe_modecheck_proc_11_0, 10,11,14,13,12,15,16,17)
MR_decl_label8(check_hlds__modes__maybe_modecheck_proc_11_0, 18,19,20,21,22,24,23,26)
MR_decl_label8(check_hlds__modes__maybe_modecheck_proc_11_0, 27,31,34,33,38,39,40,41)
MR_decl_label8(check_hlds__modes__maybe_modecheck_proc_11_0, 43,44,47,49,50,55,54,52)
MR_decl_label8(check_hlds__modes__maybe_modecheck_proc_11_0, 58,59,60,62,63,64,65,68)
MR_decl_label8(check_hlds__modes__maybe_modecheck_proc_11_0, 70,71,72,73,69,75,67,76)
MR_decl_label8(check_hlds__modes__maybe_modecheck_proc_11_0, 51,77,78,79,80,28,29,82)
MR_decl_label8(check_hlds__modes__maybe_modecheck_proc_11_0, 84,85,86,87,90,92,91,93)
MR_decl_label8(check_hlds__modes__maybe_modecheck_proc_11_0, 94,95,89,96,97,98,99,100)
MR_decl_label8(check_hlds__modes__maybe_modecheck_proc_11_0, 101,102,103,104,105,106,108,110)
MR_decl_label6(check_hlds__modes__maybe_modecheck_proc_11_0, 111,112,113,114,115,116)
MR_decl_label5(check_hlds__modes__mode_info_add_goals_live_vars_4_0, 24,4,5,8,3)
MR_decl_label5(check_hlds__modes__mode_info_remove_goals_live_vars_3_0, 28,4,8,9,3)
MR_decl_label5(check_hlds__modes__modecheck_5_0, 2,3,4,5,6)
MR_decl_label8(check_hlds__modes__modecheck_case_list_8_0, 4,5,6,9,11,12,7,13)
MR_decl_label5(check_hlds__modes__modecheck_case_list_8_0, 14,15,16,17,3)
MR_decl_label3(check_hlds__modes__modecheck_clause_disj_9_0, 2,3,4)
MR_decl_label8(check_hlds__modes__modecheck_clause_switch_10_0, 2,3,4,7,9,10,5,11)
MR_decl_label2(check_hlds__modes__modecheck_clause_switch_10_0, 13,14)
MR_decl_label8(check_hlds__modes__modecheck_conj_list_7_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(check_hlds__modes__modecheck_conj_list_7_0, 10,11,12,13,14,15,16,17)
MR_decl_label8(check_hlds__modes__modecheck_conj_list_7_0, 18,19,22,23,24,21,26,28)
MR_decl_label5(check_hlds__modes__modecheck_conj_list_7_0, 30,31,32,33,34)
MR_decl_label4(check_hlds__modes__modecheck_conj_list_2_9_0, 28,3,7,4)
MR_decl_label8(check_hlds__modes__modecheck_conj_list_3_10_0, 2,5,3,6,7,8,9,10)
MR_decl_label8(check_hlds__modes__modecheck_conj_list_3_10_0, 11,12,15,14,16,17,18,19)
MR_decl_label8(check_hlds__modes__modecheck_conj_list_3_10_0, 21,22,23,24,25,27,29,31)
MR_decl_label8(check_hlds__modes__modecheck_conj_list_3_10_0, 32,33,36,38,35,39,40,45)
MR_decl_label3(check_hlds__modes__modecheck_conj_list_3_10_0, 43,42,49)
MR_decl_label8(check_hlds__modes__modecheck_conj_list_no_delay_6_0, 26,4,5,6,7,10,12,9)
MR_decl_label1(check_hlds__modes__modecheck_conj_list_no_delay_6_0, 13)
MR_decl_label8(check_hlds__modes__modecheck_delayed_goals_eager_10_0, 33,4,5,6,7,8,9,10)
MR_decl_label8(check_hlds__modes__modecheck_delayed_goals_eager_10_0, 11,12,13,14,15,17,18,19)
MR_decl_label2(check_hlds__modes__modecheck_delayed_goals_eager_10_0, 20,16)
MR_decl_label8(check_hlds__modes__modecheck_delayed_goals_try_det_10_0, 52,5,6,7,8,9,10,12)
MR_decl_label8(check_hlds__modes__modecheck_delayed_goals_try_det_10_0, 11,13,14,15,16,21,23,24)
MR_decl_label8(check_hlds__modes__modecheck_delayed_goals_try_det_10_0, 20,27,28,29,30,31,32,33)
MR_decl_label5(check_hlds__modes__modecheck_delayed_goals_try_det_10_0, 34,35,36,37,4)
MR_decl_label3(check_hlds__modes__modecheck_delayed_solver_goals_10_0, 2,3,4)
MR_decl_label6(check_hlds__modes__modecheck_disj_list_7_0, 4,5,6,7,8,3)
MR_decl_label8(check_hlds__modes__modecheck_final_insts_8_0, 2,3,6,5,7,4,8,9)
MR_decl_label8(check_hlds__modes__modecheck_final_insts_8_0, 10,13,12,14,15,16,17,18)
MR_decl_label5(check_hlds__modes__modecheck_final_insts_8_0, 19,20,21,22,23)
MR_decl_label5(check_hlds__modes__modecheck_functor_test_4_0, 2,3,4,5,6)
MR_decl_label8(check_hlds__modes__modecheck_goal_6_0, 2,3,6,5,8,9,11,13)
MR_decl_label8(check_hlds__modes__modecheck_goal_6_0, 14,15,16,17,18,10,19,20)
MR_decl_label1(check_hlds__modes__modecheck_goal_6_0, 21)
MR_decl_label8(check_hlds__modes__modecheck_goal_expr_7_0, 4,5,6,7,8,10,11,12)
MR_decl_label8(check_hlds__modes__modecheck_goal_expr_7_0, 13,14,15,16,17,18,19,20)
MR_decl_label8(check_hlds__modes__modecheck_goal_expr_7_0, 21,22,24,25,26,27,28,31)
MR_decl_label8(check_hlds__modes__modecheck_goal_expr_7_0, 32,34,36,37,38,41,40,44)
MR_decl_label8(check_hlds__modes__modecheck_goal_expr_7_0, 45,46,48,50,51,59,60,61)
MR_decl_label8(check_hlds__modes__modecheck_goal_expr_7_0, 63,64,66,71,72,73,74,75)
MR_decl_label8(check_hlds__modes__modecheck_goal_expr_7_0, 77,78,80,47,82,83,84,29)
MR_decl_label8(check_hlds__modes__modecheck_goal_expr_7_0, 85,87,88,89,90,91,92,93)
MR_decl_label8(check_hlds__modes__modecheck_goal_expr_7_0, 94,95,96,98,101,103,104,105)
MR_decl_label8(check_hlds__modes__modecheck_goal_expr_7_0, 100,107,108,109,111,112,115,116)
MR_decl_label8(check_hlds__modes__modecheck_goal_expr_7_0, 114,117,118,119,120,121,122,123)
MR_decl_label8(check_hlds__modes__modecheck_goal_expr_7_0, 124,125,126,128,129,132,133,131)
MR_decl_label8(check_hlds__modes__modecheck_goal_expr_7_0, 134,135,136,138,139,140,141,142)
MR_decl_label8(check_hlds__modes__modecheck_goal_expr_7_0, 143,144,145,146,147,148,149,150)
MR_decl_label8(check_hlds__modes__modecheck_goal_expr_7_0, 152,153,154,155,156,158,169,170)
MR_decl_label8(check_hlds__modes__modecheck_goal_expr_7_0, 171,172,173,174,176,207,208,209)
MR_decl_label8(check_hlds__modes__modecheck_goal_expr_7_0, 210,211,212,213,185,187,188,194)
MR_decl_label8(check_hlds__modes__modecheck_goal_expr_7_0, 196,197,198,199,200,201,202,186)
MR_decl_label8(check_hlds__modes__modecheck_goal_expr_7_0, 203,204,181,182,183,184,177,178)
MR_decl_label8(check_hlds__modes__modecheck_goal_expr_7_0, 179,180,215,216,217,218,219,220)
MR_decl_label8(check_hlds__modes__modecheck_goal_expr_7_0, 221,222,223,224,225,228,230,231)
MR_decl_label8(check_hlds__modes__modecheck_goal_expr_7_0, 226,232,233,234,235,236,237,238)
MR_decl_label8(check_hlds__modes__modecheck_goal_expr_7_0, 239,240,241,242,243,244,245,246)
MR_decl_label8(check_hlds__modes__modecheck_goal_expr_7_0, 247,248,249,250,251,252,253,254)
MR_decl_label7(check_hlds__modes__modecheck_goal_expr_7_0, 256,257,258,259,260,261,262)
MR_decl_label1(check_hlds__modes__modecheck_lambda_final_insts_6_0, 2)
MR_decl_label1(check_hlds__modes__modecheck_proc_8_0, 2)
MR_decl_label1(check_hlds__modes__modecheck_proc_general_10_0, 2)
MR_decl_label4(check_hlds__modes__modecheck_procs_12_0, 12,4,5,3)
MR_decl_label8(check_hlds__modes__modecheck_set_var_inst_5_0, 2,3,6,8,9,11,10,14)
MR_decl_label8(check_hlds__modes__modecheck_set_var_inst_5_0, 15,16,17,19,20,22,18,26)
MR_decl_label8(check_hlds__modes__modecheck_set_var_inst_5_0, 28,25,34,36,41,43,38,39)
MR_decl_label8(check_hlds__modes__modecheck_set_var_inst_5_0, 45,31,47,48,49,50,5,55)
MR_decl_label4(check_hlds__modes__modecheck_set_var_inst_5_0, 59,61,58,56)
MR_decl_label2(check_hlds__modes__modecheck_set_var_inst_list_8_0, 3,2)
MR_decl_label8(check_hlds__modes__modecheck_set_var_inst_list_2_9_0, 134,8,9,12,14,15,16,17)
MR_decl_label8(check_hlds__modes__modecheck_set_var_inst_list_2_9_0, 18,19,22,20,27,29,30,31)
MR_decl_label8(check_hlds__modes__modecheck_set_var_inst_list_2_9_0, 33,35,37,39,32,41,24,25)
MR_decl_label8(check_hlds__modes__modecheck_set_var_inst_list_2_9_0, 46,48,49,44,50,51,52,53)
MR_decl_label8(check_hlds__modes__modecheck_set_var_inst_list_2_9_0, 54,55,56,59,60,62,61,64)
MR_decl_label4(check_hlds__modes__modecheck_set_var_inst_list_2_9_0, 11,67,135,1)
MR_decl_label8(check_hlds__modes__modecheck_to_fixpoint_9_0, 60,2,3,4,5,6,10,12)
MR_decl_label8(check_hlds__modes__modecheck_to_fixpoint_9_0, 8,16,17,18,15,19,37,21)
MR_decl_label6(check_hlds__modes__modecheck_to_fixpoint_9_0, 20,25,24,27,28,29)
MR_decl_label1(check_hlds__modes__modecheck_var_has_inst_list_exact_match_6_0, 2)
MR_decl_label8(check_hlds__modes__modecheck_var_has_inst_list_exact_match_2_7_0, 46,3,9,10,11,12,13,14)
MR_decl_label5(check_hlds__modes__modecheck_var_has_inst_list_exact_match_2_7_0, 17,16,20,21,8)
MR_decl_label1(check_hlds__modes__modecheck_var_has_inst_list_no_exact_match_6_0, 2)
MR_decl_label8(check_hlds__modes__modecheck_var_has_inst_list_no_exact_match_2_7_0, 46,3,9,10,11,12,13,14)
MR_decl_label5(check_hlds__modes__modecheck_var_has_inst_list_no_exact_match_2_7_0, 17,16,20,21,8)
MR_decl_label8(check_hlds__modes__modecheck_var_list_is_live_exact_match_5_0, 38,3,9,10,11,12,13,8)
MR_decl_label8(check_hlds__modes__modecheck_var_list_is_live_no_exact_match_5_0, 45,3,9,10,14,15,11,8)
MR_decl_label3(check_hlds__modes__non_solver_var_3_0, 2,5,1)
MR_decl_label8(check_hlds__modes__only_fully_in_out_modes_2_0, 42,4,8,6,10,15,14,17)
MR_decl_label2(check_hlds__modes__only_fully_in_out_modes_2_0, 2,1)
MR_decl_label6(check_hlds__modes__only_nonunique_modes_2_0, 24,4,5,7,2,1)
MR_decl_label6(check_hlds__modes__pred_check_eval_methods_5_0, 14,4,5,6,7,3)
MR_decl_label8(check_hlds__modes__proc_check_eval_methods_6_0, 133,4,5,6,8,12,14,15)
MR_decl_label8(check_hlds__modes__proc_check_eval_methods_6_0, 16,17,18,19,20,21,7,24)
MR_decl_label8(check_hlds__modes__proc_check_eval_methods_6_0, 28,30,31,32,33,34,35,36)
MR_decl_label8(check_hlds__modes__proc_check_eval_methods_6_0, 37,23,38,40,42,44,51,52)
MR_decl_label8(check_hlds__modes__proc_check_eval_methods_6_0, 53,54,56,57,59,61,60,63)
MR_decl_label8(check_hlds__modes__proc_check_eval_methods_6_0, 64,47,66,67,68,69,39,3)
MR_decl_label3(check_hlds__modes__redelay_goals_3_0, 11,4,3)
MR_decl_label6(check_hlds__modes__solver_var_must_be_initialised_4_0, 3,4,6,7,10,2)
MR_decl_label1(check_hlds__modes__solver_var_to_init_3_0, 2)
MR_decl_label5(check_hlds__modes__unique_modecheck_clause_disj_12_0, 2,3,4,5,6)
MR_decl_label8(check_hlds__modes__unique_modecheck_clause_switch_10_0, 2,3,4,7,9,6,10,11)
MR_decl_label3(check_hlds__modes__unique_modecheck_clause_switch_10_0, 12,13,14)
MR_decl_label7(fn__check_hlds__modes__append_init_calls_to_goal_3_0, 2,3,4,7,5,8,9)
MR_decl_label1(fn__check_hlds__modes__flatten_disj_2_0, 2)
MR_decl_label5(fn__check_hlds__modes__non_free_vars_in_assoc_list_1_0, 27,6,4,9,3)
MR_decl_label4(fn__check_hlds__modes__set_vars_to_inst_any_2_0, 12,4,5,3)
MR_decl_label4(__Unify___check_hlds__modes__after_goals_0_0, 14,5,7,1)
MR_decl_label4(__Unify___check_hlds__modes__clause_form_0_0, 18,5,10,1)
MR_decl_label4(__Unify___check_hlds__modes__extra_goals_0_0, 14,5,7,1)
MR_decl_label6(__Compare___check_hlds__modes__after_goals_0_0, 24,7,5,9,11,16)
MR_decl_label8(__Compare___check_hlds__modes__clause_form_0_0, 3,2,7,5,10,12,16,54)
MR_decl_label6(__Compare___check_hlds__modes__extra_goals_0_0, 24,7,5,9,11,16)
MR_decl_static(check_hlds__modes__modecheck_to_fixpoint_9_0)
MR_decl_static(check_hlds__modes__only_fully_in_out_modes_2_0)
MR_decl_static(check_hlds__modes__only_nonunique_modes_2_0)
MR_decl_static(check_hlds__modes__proc_check_eval_methods_6_0)
MR_decl_static(check_hlds__modes__pred_check_eval_methods_5_0)
MR_def_extern_entry(check_hlds__modes__check_pred_modes_7_0)
MR_def_extern_entry(check_hlds__modes__modecheck_5_0)
MR_def_extern_entry(check_hlds__modes__get_live_vars_3_0)
MR_def_extern_entry(check_hlds__modes__compute_goal_instmap_delta_6_0)
MR_def_extern_entry(check_hlds__modes__mode_info_add_goals_live_vars_4_0)
MR_decl_static(check_hlds__modes__handle_extra_goals_contexts_3_0)
MR_def_extern_entry(check_hlds__modes__mode_info_remove_goals_live_vars_3_0)
MR_decl_static(check_hlds__modes__check_no_inst_any_vars_6_0)
MR_def_extern_entry(check_hlds__modes__construct_initialisation_call_8_0)
MR_def_extern_entry(check_hlds__modes__construct_initialisation_calls_4_0)
MR_decl_static(fn__check_hlds__modes__append_init_calls_to_goal_3_0)
MR_decl_static(fn__check_hlds__modes__set_vars_to_inst_any_2_0)
MR_decl_static(check_hlds__modes__add_necessary_disj_init_calls_7_0)
MR_decl_static(fn__check_hlds__modes__non_free_vars_in_assoc_list_1_0)
MR_decl_static(check_hlds__modes__get_all_waiting_vars_2_3_0)
MR_decl_static(check_hlds__modes__redelay_goals_3_0)
MR_def_extern_entry(check_hlds__modes__modecheck_set_var_inst_5_0)
MR_def_extern_entry(check_hlds__modes__modecheck_functor_test_4_0)
MR_def_extern_entry(check_hlds__modes__modecheck_goal_6_0)
MR_def_extern_entry(check_hlds__modes__modecheck_goal_expr_7_0)
MR_def_extern_entry(check_hlds__modes__handle_extra_goals_11_0)
MR_decl_static(check_hlds__modes__modecheck_conj_list_no_delay_6_0)
MR_decl_static(check_hlds__modes__modecheck_conj_list_7_0)
MR_decl_static(check_hlds__modes__modecheck_conj_list_2_9_0)
MR_decl_static(check_hlds__modes__modecheck_conj_list_3_10_0)
MR_decl_static(check_hlds__modes__modecheck_delayed_solver_goals_10_0)
MR_decl_static(check_hlds__modes__modecheck_delayed_goals_try_det_10_0)
MR_decl_static(check_hlds__modes__modecheck_delayed_goals_eager_10_0)
MR_decl_static(check_hlds__modes__check_for_impurity_error_8_0)
MR_decl_static(check_hlds__modes__modecheck_disj_list_7_0)
MR_decl_static(check_hlds__modes__modecheck_case_list_8_0)
MR_decl_static(check_hlds__modes__maybe_clobber_insts_3_0)
MR_decl_static(check_hlds__modes__check_final_insts_12_0)
MR_decl_static(check_hlds__modes__modecheck_final_insts_8_0)
MR_decl_static(check_hlds__modes__maybe_modecheck_proc_11_0)
MR_def_extern_entry(check_hlds__modes__modecheck_proc_general_10_0)
MR_def_extern_entry(check_hlds__modes__modecheck_proc_8_0)
MR_def_extern_entry(check_hlds__modes__compute_arg_offset_2_0)
MR_def_extern_entry(check_hlds__modes__modecheck_var_list_is_live_exact_match_5_0)
MR_def_extern_entry(check_hlds__modes__modecheck_var_list_is_live_no_exact_match_5_0)
MR_decl_static(check_hlds__modes__modecheck_var_has_inst_list_exact_match_2_7_0)
MR_def_extern_entry(check_hlds__modes__modecheck_var_has_inst_list_exact_match_6_0)
MR_decl_static(check_hlds__modes__modecheck_var_has_inst_list_no_exact_match_2_7_0)
MR_def_extern_entry(check_hlds__modes__modecheck_var_has_inst_list_no_exact_match_6_0)
MR_def_extern_entry(check_hlds__modes__append_extra_goals_3_0)
MR_def_extern_entry(check_hlds__modes__mode_context_to_unify_context_3_0)
MR_decl_static(check_hlds__modes__modecheck_set_var_inst_list_2_9_0)
MR_def_extern_entry(check_hlds__modes__modecheck_set_var_inst_list_8_0)
MR_def_extern_entry(check_hlds__modes__modecheck_lambda_final_insts_6_0)
MR_decl_static(check_hlds__modes__copy_pred_body_4_0)
MR_decl_static(check_hlds__modes__copy_proc_body_4_0)
MR_decl_static(check_hlds__modes__modecheck_procs_12_0)
MR_decl_static(check_hlds__modes__maybe_modecheck_pred_11_0)
MR_decl_static(check_hlds__modes__modecheck_clause_disj_9_0)
MR_decl_static(check_hlds__modes__modecheck_clause_switch_10_0)
MR_decl_static(check_hlds__modes__unique_modecheck_clause_disj_12_0)
MR_decl_static(check_hlds__modes__unique_modecheck_clause_switch_10_0)
MR_decl_static(check_hlds__modes__solver_var_must_be_initialised_4_0)
MR_decl_static(check_hlds__modes__is_solver_var_3_0)
MR_decl_static(fn__check_hlds__modes__flatten_disj_2_0)
MR_decl_static(check_hlds__modes__solver_var_to_init_3_0)
MR_decl_static(check_hlds__modes__candidate_init_vars_call_7_0)
MR_decl_static(check_hlds__modes__candidate_init_vars_3_6_0)
MR_decl_static(check_hlds__modes__non_solver_var_3_0)
MR_decl_static(fn__check_hlds__modes__hlds_goal_from_delayed_goal_1_0)
MR_decl_static(check_hlds__modes__is_headvar_unification_goal_2_0)
MR_def_extern_entry(__Unify___check_hlds__modes__after_goals_0_0)
MR_def_extern_entry(__Compare___check_hlds__modes__after_goals_0_0)
MR_decl_static(__Unify___check_hlds__modes__clause_form_0_0)
MR_decl_static(__Compare___check_hlds__modes__clause_form_0_0)
MR_def_extern_entry(__Unify___check_hlds__modes__extra_goals_0_0)
MR_def_extern_entry(__Compare___check_hlds__modes__extra_goals_0_0)
MR_decl_static(__Unify___check_hlds__modes__impurity_errors_0_0)
MR_decl_static(__Compare___check_hlds__modes__impurity_errors_0_0)
MR_decl_static(check_hlds__modes__IntroducedFrom__pred__modecheck_delayed_goals_eager__2589__1_2_0)
MR_def_extern_entry(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_99_111_110_116_101_120_116_95_116_111_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_49_93_95_48_3_0)

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modes__modecheck_to_fixpoint_9_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_info__type_ctor_info_how_to_check_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_info__type_ctor_info_may_change_called_proc_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const struct mercury_type_0 mercury_common_0[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__modes__modecheck_to_fixpoint_9_0_1,
(MR_Word *) (MR_Integer) 0
},
11,
{
MR_CTOR0_ADDR(check_hlds__mode_info, how_to_check_goal),
MR_CTOR0_ADDR(check_hlds__mode_info, may_change_called_proc),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_BOOL_CTOR_ADDR,
MR_BOOL_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const struct mercury_type_1 mercury_common_1[19] =
{
{
3,
MR_string_const("Mode analysis iteration limit exceeded.", 39)
},
{
3,
MR_string_const("You may need to declare the modes explicitly", 44)
},
{
3,
MR_string_const("or use the \140--mode-inference-iteration-limit\' option", 52)
},
{
3,
MR_string_const("to increase the limit.", 22)
},
{
3,
MR_string_const("(The current limit is", 21)
},
{
3,
MR_string_const("iterations.)", 12)
},
{
3,
MR_string_const("Sorry, not implemented:", 23)
},
{
3,
MR_string_const("declaration not allowed for procedure", 37)
},
{
3,
MR_string_const("with partially instantiated modes.", 34)
},
{
3,
MR_string_const("Tabling of predicates/functions", 31)
},
{
3,
MR_string_const("with partially instantiated modes", 33)
},
{
3,
MR_string_const("is not currently implemented.", 29)
},
{
3,
MR_string_const("Error:", 6)
},
{
3,
MR_string_const("with unique modes.", 18)
},
{
3,
MR_string_const("Tabling of predicates/functions with unique modes", 49)
},
{
3,
MR_string_const("is not allowed as this would lead to a copying", 46)
},
{
3,
MR_string_const("of the unique arguments which would result", 42)
},
{
3,
MR_string_const("in them no longer being unique.", 31)
},
{
3,
MR_string_const("Error: main/2 must have mode \140(di, uo)\'.", 40)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__instmap__type_ctor_info_instmap_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_inst_var_type_0;
static const struct mercury_type_2 mercury_common_2[27] =
{
{
{
MR_tbmkword(0, 0),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,1,5),
MR_TAG_COMMON(1,2,0)
}
},
{
{
MR_TAG_COMMON(3,1,8),
MR_TAG_COMMON(1,2,0)
}
},
{
{
MR_TAG_COMMON(3,1,7),
MR_TAG_COMMON(1,2,2)
}
},
{
{
MR_TAG_COMMON(3,1,11),
MR_TAG_COMMON(1,2,0)
}
},
{
{
MR_TAG_COMMON(3,1,10),
MR_TAG_COMMON(1,2,4)
}
},
{
{
MR_TAG_COMMON(3,1,9),
MR_TAG_COMMON(1,2,5)
}
},
{
{
MR_TAG_COMMON(2,6,0),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,1,13),
MR_TAG_COMMON(1,2,0)
}
},
{
{
MR_TAG_COMMON(3,1,7),
MR_TAG_COMMON(1,2,8)
}
},
{
{
MR_TAG_COMMON(3,1,17),
MR_TAG_COMMON(1,2,0)
}
},
{
{
MR_TAG_COMMON(3,1,16),
MR_TAG_COMMON(1,2,10)
}
},
{
{
MR_TAG_COMMON(3,1,15),
MR_TAG_COMMON(1,2,11)
}
},
{
{
MR_TAG_COMMON(3,1,14),
MR_TAG_COMMON(1,2,12)
}
},
{
{
MR_TAG_COMMON(2,6,1),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,1,18),
MR_TAG_COMMON(1,2,0)
}
},
{
{
MR_TAG_COMMON(0,6,2),
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
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_COMMON(2,18)
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
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__instmap, instmap)
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
MR_TAG_COMMON(0,2,17)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type)
}
},
};

static const struct mercury_type_3 mercury_common_3[1] =
{
{
0
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
static const struct mercury_type_4 mercury_common_4[6] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_pred, pred_info)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_id),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_info)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(2,18),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(2,18),
MR_INT_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_id),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modes__modecheck_to_fixpoint_9_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__modes__append_init_calls_to_goal_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modes__modecheck_goal_expr_7_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modes__modecheck_goal_expr_7_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modes__copy_pred_body_4_0_1;
static const struct mercury_type_5 mercury_common_5[5] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__modes__modecheck_to_fixpoint_9_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(4,0),
MR_INT_CTOR_ADDR,
MR_COMMON(4,0),
MR_COMMON(4,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__check_hlds__modes__append_init_calls_to_goal_3_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(2,19),
MR_COMMON(2,20),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__modes__modecheck_goal_expr_7_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(4,2),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(2,22),
MR_COMMON(2,21)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__modes__modecheck_goal_expr_7_0_4,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(4,2),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(2,22),
MR_COMMON(2,21)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__modes__copy_pred_body_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(4,4),
MR_INT_CTOR_ADDR,
MR_COMMON(4,4),
MR_COMMON(4,4)
}
},
};

static const struct mercury_type_6 mercury_common_6[3] =
{
{
MR_TAG_COMMON(1,2,6)
},
{
MR_TAG_COMMON(1,2,13)
},
{
MR_TAG_COMMON(1,2,15)
},
};

static const struct mercury_type_7 mercury_common_7[3] =
{
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
{
1,
0,
MR_tbmkword(0, 0)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modes__add_necessary_disj_init_calls_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__instmap__type_ctor_info_instmap_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modes__modecheck_goal_expr_7_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modes__modecheck_goal_expr_7_0_5;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modes__modecheck_goal_expr_7_0_6;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modes__maybe_modecheck_proc_11_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modes__maybe_modecheck_proc_11_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modes__maybe_modecheck_proc_11_0_5;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modes__maybe_modecheck_proc_11_0_9;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_info__type_ctor_info_mode_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_errors__type_ctor_info_mode_error_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modes__maybe_modecheck_proc_11_0_10;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_errors__type_ctor_info_mode_warning_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__modes__flatten_disj_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modes__candidate_init_vars_3_6_0_2;
static const struct mercury_type_8 mercury_common_8[11] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__modes__add_necessary_disj_init_calls_7_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__instmap, instmap),
MR_COMMON(2,21)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__modes__modecheck_goal_expr_7_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(2,20),
MR_COMMON(2,20)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__modes__modecheck_goal_expr_7_0_5,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__instmap, instmap),
MR_COMMON(2,21)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__modes__modecheck_goal_expr_7_0_6,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__instmap, instmap),
MR_COMMON(2,21)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__modes__maybe_modecheck_proc_11_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(4,2),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(2,21)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__modes__maybe_modecheck_proc_11_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(2,20),
MR_COMMON(2,20)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__modes__maybe_modecheck_proc_11_0_5,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(2,20),
MR_COMMON(2,20)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__modes__maybe_modecheck_proc_11_0_9,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(check_hlds__mode_info, mode_info),
MR_CTOR0_ADDR(check_hlds__mode_errors, mode_error_info),
MR_CTOR0_ADDR(parse_tree__error_util, error_spec)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__modes__maybe_modecheck_proc_11_0_10,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(check_hlds__mode_info, mode_info),
MR_CTOR0_ADDR(check_hlds__mode_errors, mode_warning_info),
MR_CTOR0_ADDR(parse_tree__error_util, error_spec)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__check_hlds__modes__flatten_disj_2_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(2,20),
MR_COMMON(2,20)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__modes__candidate_init_vars_3_6_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(4,2),
MR_COMMON(2,21)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modes__modecheck_goal_expr_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_foreign_arg_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modes__modecheck_delayed_goals_try_det_10_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_errors__type_ctor_info_delayed_goal_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modes__modecheck_delayed_goals_eager_10_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modes__modecheck_delayed_goals_eager_10_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_info__type_ctor_info_may_init_solver_vars_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modes__check_for_impurity_error_8_0_1;
static const struct mercury_type_9 mercury_common_9[5] =
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__modes__modecheck_goal_expr_7_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg),
MR_COMMON(2,21)
},
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__modes__modecheck_delayed_goals_try_det_10_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(check_hlds__mode_errors, delayed_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
},
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__modes__modecheck_delayed_goals_eager_10_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(check_hlds__mode_errors, delayed_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
},
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__modes__modecheck_delayed_goals_eager_10_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(check_hlds__mode_info, may_init_solver_vars),
MR_CTOR0_ADDR(check_hlds__mode_info, may_init_solver_vars)
},
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__modes__check_for_impurity_error_8_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(2,19),
MR_CTOR0_ADDR(check_hlds__mode_errors, delayed_goal)
},
};

MR_decl_entry(fn__hlds__hlds_goal__foreign_arg_var_1_0);
static const struct mercury_type_10 mercury_common_10[7] =
{
{
MR_COMMON(9,0),
MR_ENTRY_AP(fn__hlds__hlds_goal__foreign_arg_var_1_0),
0
},
{
MR_COMMON(8,1),
MR_ENTRY_AP(fn__check_hlds__modes__flatten_disj_2_0),
0
},
{
MR_COMMON(9,1),
MR_ENTRY_AP(fn__check_hlds__modes__hlds_goal_from_delayed_goal_1_0),
0
},
{
MR_COMMON(9,2),
MR_ENTRY_AP(fn__check_hlds__modes__hlds_goal_from_delayed_goal_1_0),
0
},
{
MR_COMMON(8,5),
MR_ENTRY_AP(fn__check_hlds__modes__flatten_disj_2_0),
0
},
{
MR_COMMON(8,6),
MR_ENTRY_AP(fn__check_hlds__modes__flatten_disj_2_0),
0
},
{
MR_COMMON(8,9),
MR_ENTRY_AP(fn__check_hlds__modes__flatten_disj_2_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modes__modecheck_delayed_goals_try_det_10_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modes__candidate_init_vars_3_6_0_1;
static const struct mercury_type_11 mercury_common_11[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__modes__modecheck_delayed_goals_try_det_10_0_2,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(check_hlds__mode_info, mode_info),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(2,19),
MR_COMMON(2,19),
MR_COMMON(2,19),
MR_COMMON(2,19)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__modes__candidate_init_vars_3_6_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(check_hlds__mode_info, mode_info),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(2,19),
MR_COMMON(2,19),
MR_COMMON(2,19),
MR_COMMON(2,19)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modes__maybe_modecheck_proc_11_0_3;
static const struct mercury_type_12 mercury_common_12[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__modes__maybe_modecheck_proc_11_0_3,
(MR_Word *) (MR_Integer) 0
},
9,
{
MR_COMMON(2,19),
MR_CTOR0_ADDR(hlds__instmap, instmap),
MR_COMMON(2,25),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(check_hlds__mode_info, mode_info),
MR_CTOR0_ADDR(check_hlds__mode_info, mode_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modes__maybe_modecheck_proc_11_0_4;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_case_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modes__maybe_modecheck_proc_11_0_8;
static const struct mercury_type_13 mercury_common_13[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__modes__maybe_modecheck_proc_11_0_4,
(MR_Word *) (MR_Integer) 0
},
10,
{
MR_COMMON(2,19),
MR_CTOR0_ADDR(hlds__instmap, instmap),
MR_COMMON(2,25),
MR_COMMON(2,21),
MR_CTOR0_ADDR(hlds__hlds_goal, case),
MR_CTOR0_ADDR(hlds__hlds_goal, case),
MR_CTOR0_ADDR(check_hlds__mode_info, mode_info),
MR_CTOR0_ADDR(check_hlds__mode_info, mode_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__modes__maybe_modecheck_proc_11_0_8,
(MR_Word *) (MR_Integer) 0
},
10,
{
MR_COMMON(2,19),
MR_CTOR0_ADDR(hlds__instmap, instmap),
MR_COMMON(2,25),
MR_COMMON(2,21),
MR_CTOR0_ADDR(hlds__hlds_goal, case),
MR_CTOR0_ADDR(hlds__hlds_goal, case),
MR_CTOR0_ADDR(check_hlds__mode_info, mode_info),
MR_CTOR0_ADDR(check_hlds__mode_info, mode_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modes__maybe_modecheck_proc_11_0_6;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_determinism_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modes__maybe_modecheck_proc_11_0_7;
static const struct mercury_type_14 mercury_common_14[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__modes__maybe_modecheck_proc_11_0_6,
(MR_Word *) (MR_Integer) 0
},
12,
{
MR_COMMON(2,19),
MR_CTOR0_ADDR(hlds__instmap, instmap),
MR_COMMON(2,25),
MR_CTOR0_ADDR(parse_tree__prog_data, determinism),
MR_COMMON(2,19),
MR_COMMON(4,3),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(check_hlds__mode_info, mode_info),
MR_CTOR0_ADDR(check_hlds__mode_info, mode_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__modes__maybe_modecheck_proc_11_0_7,
(MR_Word *) (MR_Integer) 0
},
12,
{
MR_COMMON(2,19),
MR_CTOR0_ADDR(hlds__instmap, instmap),
MR_COMMON(2,25),
MR_CTOR0_ADDR(parse_tree__prog_data, determinism),
MR_COMMON(2,19),
MR_COMMON(4,3),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(check_hlds__mode_info, mode_info),
MR_CTOR0_ADDR(check_hlds__mode_info, mode_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_errors__type_ctor_info_mode_error_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_errors__type_ctor_info_mode_error_info_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1check_hlds__mode_errors__type_ctor_info_mode_error_info_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_check_hlds__mode_errors__type_ctor_info_mode_error_info_0
}};

const MR_TypeCtorInfo_Struct mercury_data_check_hlds__modes__type_ctor_info_impurity_errors_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__modes__impurity_errors_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__modes__impurity_errors_0_0)),
	"check_hlds.modes",
	"impurity_errors",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1check_hlds__mode_errors__type_ctor_info_mode_error_info_0 },
	-1,
	0,
	NULL
};

static const MR_DuFunctorDesc mercury_data_check_hlds__modes__du_functor_desc_extra_goals_0_0 = {
	"no_extra_goals",
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

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0
}};

const MR_PseudoTypeInfo mercury_data_check_hlds__modes__field_types_extra_goals_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

const MR_ConstString mercury_data_check_hlds__modes__field_names_extra_goals_0_1[] = {
	"extra_before_main",
	"extra_after_main"
};

static const MR_DuFunctorDesc mercury_data_check_hlds__modes__du_functor_desc_extra_goals_0_1 = {
	"extra_goals",
	2,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__modes__field_types_extra_goals_0_1,
	mercury_data_check_hlds__modes__field_names_extra_goals_0_1,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__modes__du_stag_ordered_extra_goals_0_0[] = {
	&mercury_data_check_hlds__modes__du_functor_desc_extra_goals_0_0

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__modes__du_stag_ordered_extra_goals_0_1[] = {
	&mercury_data_check_hlds__modes__du_functor_desc_extra_goals_0_1

};

const MR_DuPtagLayout mercury_data_check_hlds__modes__du_ptag_ordered_extra_goals_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_check_hlds__modes__du_stag_ordered_extra_goals_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__modes__du_stag_ordered_extra_goals_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__modes__du_name_ordered_extra_goals_0[] = {
	&mercury_data_check_hlds__modes__du_functor_desc_extra_goals_0_1,
	&mercury_data_check_hlds__modes__du_functor_desc_extra_goals_0_0
};

const MR_Integer mercury_data_check_hlds__modes__functor_number_map_extra_goals_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__modes__type_ctor_info_extra_goals_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__modes__extra_goals_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__modes__extra_goals_0_0)),
	"check_hlds.modes",
	"extra_goals",
	{ (void *)mercury_data_check_hlds__modes__du_name_ordered_extra_goals_0 },
	{ (void *)mercury_data_check_hlds__modes__du_ptag_ordered_extra_goals_0 },
	2,
	4,
	mercury_data_check_hlds__modes__functor_number_map_extra_goals_0
};

const MR_PseudoTypeInfo mercury_data_check_hlds__modes__field_types_clause_form_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__modes__du_functor_desc_clause_form_0_0 = {
	"clause_disj",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__modes__field_types_clause_form_0_0,
	NULL,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_can_fail_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_case_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_case_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1hlds__hlds_goal__type_ctor_info_case_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_goal__type_ctor_info_case_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_can_fail_0;

const MR_PseudoTypeInfo mercury_data_check_hlds__modes__field_types_clause_form_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_can_fail_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1hlds__hlds_goal__type_ctor_info_case_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__modes__du_functor_desc_clause_form_0_1 = {
	"clause_switch",
	3,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__modes__field_types_clause_form_0_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__modes__du_stag_ordered_clause_form_0_0[] = {
	&mercury_data_check_hlds__modes__du_functor_desc_clause_form_0_0

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__modes__du_stag_ordered_clause_form_0_1[] = {
	&mercury_data_check_hlds__modes__du_functor_desc_clause_form_0_1

};

const MR_DuPtagLayout mercury_data_check_hlds__modes__du_ptag_ordered_clause_form_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__modes__du_stag_ordered_clause_form_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__modes__du_stag_ordered_clause_form_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__modes__du_name_ordered_clause_form_0[] = {
	&mercury_data_check_hlds__modes__du_functor_desc_clause_form_0_0,
	&mercury_data_check_hlds__modes__du_functor_desc_clause_form_0_1
};

const MR_Integer mercury_data_check_hlds__modes__functor_number_map_clause_form_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__modes__type_ctor_info_clause_form_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__modes__clause_form_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__modes__clause_form_0_0)),
	"check_hlds.modes",
	"clause_form",
	{ (void *)mercury_data_check_hlds__modes__du_name_ordered_clause_form_0 },
	{ (void *)mercury_data_check_hlds__modes__du_ptag_ordered_clause_form_0 },
	2,
	4,
	mercury_data_check_hlds__modes__functor_number_map_clause_form_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__modes__du_functor_desc_after_goals_0_0 = {
	"no_after_goals",
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

const MR_PseudoTypeInfo mercury_data_check_hlds__modes__field_types_after_goals_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__instmap__type_ctor_info_instmap_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

const MR_ConstString mercury_data_check_hlds__modes__field_names_after_goals_0_1[] = {
	"after_instmap",
	"after_goals"
};

static const MR_DuFunctorDesc mercury_data_check_hlds__modes__du_functor_desc_after_goals_0_1 = {
	"after_goals",
	2,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__modes__field_types_after_goals_0_1,
	mercury_data_check_hlds__modes__field_names_after_goals_0_1,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__modes__du_stag_ordered_after_goals_0_0[] = {
	&mercury_data_check_hlds__modes__du_functor_desc_after_goals_0_0

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__modes__du_stag_ordered_after_goals_0_1[] = {
	&mercury_data_check_hlds__modes__du_functor_desc_after_goals_0_1

};

const MR_DuPtagLayout mercury_data_check_hlds__modes__du_ptag_ordered_after_goals_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_check_hlds__modes__du_stag_ordered_after_goals_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__modes__du_stag_ordered_after_goals_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__modes__du_name_ordered_after_goals_0[] = {
	&mercury_data_check_hlds__modes__du_functor_desc_after_goals_0_1,
	&mercury_data_check_hlds__modes__du_functor_desc_after_goals_0_0
};

const MR_Integer mercury_data_check_hlds__modes__functor_number_map_after_goals_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__modes__type_ctor_info_after_goals_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__modes__after_goals_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__modes__after_goals_0_0)),
	"check_hlds.modes",
	"after_goals",
	{ (void *)mercury_data_check_hlds__modes__du_name_ordered_after_goals_0 },
	{ (void *)mercury_data_check_hlds__modes__du_ptag_ordered_after_goals_0 },
	2,
	4,
	mercury_data_check_hlds__modes__functor_number_map_after_goals_0
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modes__modecheck_to_fixpoint_9_0_1 = {
{
MR_PREDICATE,
"check_hlds.modes",
"check_hlds.modes",
"maybe_modecheck_pred",
11,
0
},
"check_hlds.modes",
"modes.m",
457,
"d1;c11;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modes__modecheck_to_fixpoint_9_0_2 = {
{
MR_PREDICATE,
"check_hlds.modes",
"check_hlds.modes",
"copy_pred_body",
4,
0
},
"check_hlds.modes",
"modes.m",
543,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__modes__append_init_calls_to_goal_3_0_1 = {
{
MR_FUNCTION,
"check_hlds.modes",
"check_hlds.modes",
"append_init_calls_to_goal",
4,
0
},
"check_hlds.modes",
"modes.m",
1894,
"d1;c9;t;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modes__add_necessary_disj_init_calls_7_0_1 = {
{
MR_PREDICATE,
"check_hlds.modes",
"check_hlds.modes",
"solver_var_to_init",
3,
0
},
"check_hlds.modes",
"modes.m",
1919,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modes__modecheck_goal_expr_7_0_1 = {
{
MR_FUNCTION,
"hlds.hlds_goal",
"hlds.hlds_goal",
"foreign_arg_var",
2,
0
},
"check_hlds.modes",
"modes.m",
1656,
"d10;c19;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modes__modecheck_goal_expr_7_0_2 = {
{
MR_PREDICATE,
"check_hlds.modes",
"check_hlds.modes",
"solver_var_must_be_initialised",
4,
0
},
"check_hlds.modes",
"modes.m",
1844,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modes__modecheck_goal_expr_7_0_3 = {
{
MR_FUNCTION,
"check_hlds.modes",
"check_hlds.modes",
"flatten_disj",
3,
0
},
"check_hlds.modes",
"modes.m",
1904,
"d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modes__modecheck_goal_expr_7_0_4 = {
{
MR_PREDICATE,
"check_hlds.modes",
"check_hlds.modes",
"solver_var_must_be_initialised",
4,
0
},
"check_hlds.modes",
"modes.m",
1844,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modes__modecheck_goal_expr_7_0_5 = {
{
MR_PREDICATE,
"check_hlds.modes",
"check_hlds.modes",
"solver_var_to_init",
3,
0
},
"check_hlds.modes",
"modes.m",
1919,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modes__modecheck_goal_expr_7_0_6 = {
{
MR_PREDICATE,
"check_hlds.modes",
"check_hlds.modes",
"solver_var_to_init",
3,
0
},
"check_hlds.modes",
"modes.m",
1919,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modes__modecheck_delayed_goals_try_det_10_0_1 = {
{
MR_FUNCTION,
"check_hlds.modes",
"check_hlds.modes",
"hlds_goal_from_delayed_goal",
2,
0
},
"check_hlds.modes",
"modes.m",
2267,
"d1;c11;d2;c2;?;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modes__modecheck_delayed_goals_try_det_10_0_2 = {
{
MR_PREDICATE,
"check_hlds.modes",
"check_hlds.modes",
"candidate_init_vars_3",
6,
0
},
"check_hlds.modes",
"modes.m",
2375,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modes__modecheck_delayed_goals_eager_10_0_1 = {
{
MR_FUNCTION,
"check_hlds.modes",
"check_hlds.modes",
"hlds_goal_from_delayed_goal",
2,
0
},
"check_hlds.modes",
"modes.m",
2582,
"d1;c11;d2;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modes__modecheck_delayed_goals_eager_10_0_2 = {
{
MR_PREDICATE,
"check_hlds.modes",
"check_hlds.modes",
"lambda_modes_m_2589",
2,
0
},
"check_hlds.modes",
"modes.m",
2589,
"d1;c11;d2;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modes__check_for_impurity_error_8_0_1 = {
{
MR_PREDICATE,
"check_hlds.modes",
"check_hlds.modes",
"is_headvar_unification_goal",
2,
0
},
"check_hlds.modes",
"modes.m",
2672,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modes__maybe_modecheck_proc_11_0_1 = {
{
MR_PREDICATE,
"check_hlds.modes",
"check_hlds.modes",
"is_solver_var",
3,
0
},
"check_hlds.modes",
"modes.m",
834,
"d1;c22;q;c11;?;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modes__maybe_modecheck_proc_11_0_2 = {
{
MR_FUNCTION,
"check_hlds.modes",
"check_hlds.modes",
"flatten_disj",
3,
0
},
"check_hlds.modes",
"modes.m",
1904,
"d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modes__maybe_modecheck_proc_11_0_3 = {
{
MR_PREDICATE,
"check_hlds.modes",
"check_hlds.modes",
"modecheck_clause_disj",
9,
0
},
"check_hlds.modes",
"modes.m",
853,
"d1;c22;q;c11;t;c4;d1;c2;d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modes__maybe_modecheck_proc_11_0_4 = {
{
MR_PREDICATE,
"check_hlds.modes",
"check_hlds.modes",
"modecheck_clause_switch",
10,
0
},
"check_hlds.modes",
"modes.m",
860,
"d1;c22;q;c11;t;c4;d1;c2;d2;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modes__maybe_modecheck_proc_11_0_5 = {
{
MR_FUNCTION,
"check_hlds.modes",
"check_hlds.modes",
"flatten_disj",
3,
0
},
"check_hlds.modes",
"modes.m",
1904,
"d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modes__maybe_modecheck_proc_11_0_6 = {
{
MR_PREDICATE,
"check_hlds.modes",
"check_hlds.modes",
"unique_modecheck_clause_disj",
12,
0
},
"check_hlds.modes",
"modes.m",
886,
"d1;c22;q;c11;t;c4;d2;c6;d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modes__maybe_modecheck_proc_11_0_7 = {
{
MR_PREDICATE,
"check_hlds.modes",
"check_hlds.modes",
"unique_modecheck_clause_disj",
12,
0
},
"check_hlds.modes",
"modes.m",
886,
"d1;c22;q;c11;t;c4;d2;c6;d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modes__maybe_modecheck_proc_11_0_8 = {
{
MR_PREDICATE,
"check_hlds.modes",
"check_hlds.modes",
"unique_modecheck_clause_switch",
10,
0
},
"check_hlds.modes",
"modes.m",
894,
"d1;c22;q;c11;t;c4;d2;c6;d2;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modes__maybe_modecheck_proc_11_0_9 = {
{
MR_FUNCTION,
"check_hlds.mode_errors",
"check_hlds.mode_errors",
"mode_error_info_to_spec",
3,
0
},
"check_hlds.modes",
"modes.m",
938,
"d1;c22;q;c13;d2;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modes__maybe_modecheck_proc_11_0_10 = {
{
MR_FUNCTION,
"check_hlds.mode_errors",
"check_hlds.mode_errors",
"mode_warning_info_to_spec",
3,
0
},
"check_hlds.modes",
"modes.m",
953,
"d1;c22;q;c13;d2;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modes__copy_pred_body_4_0_1 = {
{
MR_PREDICATE,
"check_hlds.modes",
"check_hlds.modes",
"copy_proc_body",
4,
0
},
"check_hlds.modes",
"modes.m",
569,
"d1;c6;e;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__modes__flatten_disj_2_0_1 = {
{
MR_FUNCTION,
"check_hlds.modes",
"check_hlds.modes",
"flatten_disj",
3,
0
},
"check_hlds.modes",
"modes.m",
1910,
"d1;c4;t;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modes__candidate_init_vars_3_6_0_1 = {
{
MR_PREDICATE,
"check_hlds.modes",
"check_hlds.modes",
"candidate_init_vars_3",
6,
0
},
"check_hlds.modes",
"modes.m",
2375,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modes__candidate_init_vars_3_6_0_2 = {
{
MR_PREDICATE,
"check_hlds.modes",
"check_hlds.modes",
"non_solver_var",
3,
0
},
"check_hlds.modes",
"modes.m",
2456,
"d5;c14;"
};

MR_decl_entry(hlds__hlds_module__module_info_preds_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
MR_decl_entry(list__foldl4_10_4);
MR_decl_entry(check_hlds__unify_proc__modecheck_queued_procs_8_0);
MR_decl_entry(io__get_exit_status_3_0);
MR_decl_entry(bool__or_3_0);
MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(libs__globals__lookup_int_option_3_0);
MR_decl_entry(parse_tree__error_util__write_error_spec_8_0);
MR_decl_entry(libs__globals__io_lookup_bool_option_4_0);
MR_decl_entry(check_hlds__mode_errors__write_mode_inference_messages_5_0);
MR_decl_entry(check_hlds__clause_to_proc__copy_module_clauses_to_procs_3_0);
MR_decl_entry(check_hlds__clause_to_proc__introduce_exists_casts_3_0);
MR_decl_entry(list__foldl_4_1);
MR_decl_entry(hlds__hlds_module__module_info_set_preds_3_0);

MR_BEGIN_MODULE(check_hlds__modes_module0)
	MR_init_entry1(check_hlds__modes__modecheck_to_fixpoint_9_0);
	MR_init_label8(check_hlds__modes__modecheck_to_fixpoint_9_0,60,2,3,4,5,6,10,12)
	MR_init_label8(check_hlds__modes__modecheck_to_fixpoint_9_0,8,16,17,18,15,19,37,21)
	MR_init_label6(check_hlds__modes__modecheck_to_fixpoint_9_0,20,25,24,27,28,29)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modes__modecheck_to_fixpoint_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(check_hlds__modes__modecheck_to_fixpoint_9_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
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
	MR_np_call_localret_ent(hlds__hlds_module__module_info_preds_2_0,
		check_hlds__modes__modecheck_to_fixpoint_9_0_i2);
MR_def_label(check_hlds__modes__modecheck_to_fixpoint_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r6 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__modes__maybe_modecheck_pred_11_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(4);
	MR_r8 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r3 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r4 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r5 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r7 = MR_sv(1);
	MR_r9 = (MR_Integer) 0;
	MR_r10 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__foldl4_10_4,
		check_hlds__modes__modecheck_to_fixpoint_9_0_i3);
MR_def_label(check_hlds__modes__modecheck_to_fixpoint_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_r3;
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(3);
	}
	MR_np_call_localret_ent(check_hlds__unify_proc__modecheck_queued_procs_8_0,
		check_hlds__modes__modecheck_to_fixpoint_9_0_i4);
MR_def_label(check_hlds__modes__modecheck_to_fixpoint_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r3;
	MR_sv(9) = MR_r2;
	MR_np_call_localret_ent(io__get_exit_status_3_0,
		check_hlds__modes__modecheck_to_fixpoint_9_0_i5);
MR_def_label(check_hlds__modes__modecheck_to_fixpoint_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_sv(5) = MR_tempr1;
	MR_r2 = MR_sv(8);
	}
	MR_np_call_localret_ent(bool__or_3_0,
		check_hlds__modes__modecheck_to_fixpoint_9_0_i6);
MR_def_label(check_hlds__modes__modecheck_to_fixpoint_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_to_fixpoint_9_0_i10);
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_decr_sp_and_return(10);
MR_def_label(check_hlds__modes__modecheck_to_fixpoint_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_sv(6),0)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_to_fixpoint_9_0_i12);
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_decr_sp_and_return(10);
MR_def_label(check_hlds__modes__modecheck_to_fixpoint_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(5),0)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_to_fixpoint_9_0_i8);
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_decr_sp_and_return(10);
MR_def_label(check_hlds__modes__modecheck_to_fixpoint_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GT(MR_sv(2),1)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_to_fixpoint_9_0_i15);
	}
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		check_hlds__modes__modecheck_to_fixpoint_9_0_i16);
MR_def_label(check_hlds__modes__modecheck_to_fixpoint_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Integer) 138;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		check_hlds__modes__modecheck_to_fixpoint_9_0_i17);
MR_def_label(check_hlds__modes__modecheck_to_fixpoint_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,2,1);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,1,4);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,1,3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,1,2);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,1,1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,1,0);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr1, 2) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr1, 3) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_TAG_COMMON(1,3,0);
	MR_tfield(0, MR_r1, 2) = MR_tempr2;
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(parse_tree__error_util__write_error_spec_8_0,
		check_hlds__modes__modecheck_to_fixpoint_9_0_i18);
MR_def_label(check_hlds__modes__modecheck_to_fixpoint_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_sv(9);
	MR_decr_sp_and_return(10);
MR_def_label(check_hlds__modes__modecheck_to_fixpoint_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 45;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		check_hlds__modes__modecheck_to_fixpoint_9_0_i19);
MR_def_label(check_hlds__modes__modecheck_to_fixpoint_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_to_fixpoint_9_0_i21);
	}
MR_def_label(check_hlds__modes__modecheck_to_fixpoint_9_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(9);
	MR_GOTO_LAB(check_hlds__modes__modecheck_to_fixpoint_9_0_i20);
MR_def_label(check_hlds__modes__modecheck_to_fixpoint_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__mode_errors__write_mode_inference_messages_5_0,
		check_hlds__modes__modecheck_to_fixpoint_9_0_i37);
MR_def_label(check_hlds__modes__modecheck_to_fixpoint_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_to_fixpoint_9_0_i24);
	}
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(check_hlds__clause_to_proc__copy_module_clauses_to_procs_3_0,
		check_hlds__modes__modecheck_to_fixpoint_9_0_i25);
MR_def_label(check_hlds__modes__modecheck_to_fixpoint_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__clause_to_proc__introduce_exists_casts_3_0,
		check_hlds__modes__modecheck_to_fixpoint_9_0_i29);
MR_def_label(check_hlds__modes__modecheck_to_fixpoint_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_preds_2_0,
		check_hlds__modes__modecheck_to_fixpoint_9_0_i27);
MR_def_label(check_hlds__modes__modecheck_to_fixpoint_9_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__modes__copy_pred_body_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(7);
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__foldl_4_1,
		check_hlds__modes__modecheck_to_fixpoint_9_0_i28);
MR_def_label(check_hlds__modes__modecheck_to_fixpoint_9_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_preds_3_0,
		check_hlds__modes__modecheck_to_fixpoint_9_0_i29);
MR_def_label(check_hlds__modes__modecheck_to_fixpoint_9_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r2 = ((MR_Integer) MR_sv(2) - (MR_Integer) 1);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(check_hlds__modes__modecheck_to_fixpoint_9_0_i60);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__mode_util__mode_get_insts_4_0);
MR_decl_entry(check_hlds__inst_match__inst_is_ground_2_0);
MR_decl_entry(check_hlds__inst_match__inst_is_free_2_0);

MR_BEGIN_MODULE(check_hlds__modes_module1)
	MR_init_entry1(check_hlds__modes__only_fully_in_out_modes_2_0);
	MR_init_label8(check_hlds__modes__only_fully_in_out_modes_2_0,42,4,8,6,10,15,14,17)
	MR_init_label2(check_hlds__modes__only_fully_in_out_modes_2_0,2,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modes__only_fully_in_out_modes_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(check_hlds__modes__only_fully_in_out_modes_2_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__only_fully_in_out_modes_2_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_get_insts_4_0,
		check_hlds__modes__only_fully_in_out_modes_2_0_i4);
MR_def_label(check_hlds__modes__only_fully_in_out_modes_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_ground_2_0,
		check_hlds__modes__only_fully_in_out_modes_2_0_i8);
MR_def_label(check_hlds__modes__only_fully_in_out_modes_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__only_fully_in_out_modes_2_0_i6);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(check_hlds__modes__only_fully_in_out_modes_2_0_i42);
MR_def_label(check_hlds__modes__only_fully_in_out_modes_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_free_2_0,
		check_hlds__modes__only_fully_in_out_modes_2_0_i10);
MR_def_label(check_hlds__modes__only_fully_in_out_modes_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__only_fully_in_out_modes_2_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_free_2_0,
		check_hlds__modes__only_fully_in_out_modes_2_0_i15);
MR_def_label(check_hlds__modes__only_fully_in_out_modes_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__only_fully_in_out_modes_2_0_i14);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(check_hlds__modes__only_fully_in_out_modes_2_0_i42);
MR_def_label(check_hlds__modes__only_fully_in_out_modes_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_ground_2_0,
		check_hlds__modes__only_fully_in_out_modes_2_0_i17);
MR_def_label(check_hlds__modes__only_fully_in_out_modes_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__only_fully_in_out_modes_2_0_i1);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(check_hlds__modes__only_fully_in_out_modes_2_0_i42);
MR_def_label(check_hlds__modes__only_fully_in_out_modes_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
MR_def_label(check_hlds__modes__only_fully_in_out_modes_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__inst_match__inst_is_not_partly_unique_2_0);

MR_BEGIN_MODULE(check_hlds__modes_module2)
	MR_init_entry1(check_hlds__modes__only_nonunique_modes_2_0);
	MR_init_label6(check_hlds__modes__only_nonunique_modes_2_0,24,4,5,7,2,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modes__only_nonunique_modes_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(check_hlds__modes__only_nonunique_modes_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__only_nonunique_modes_2_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_get_insts_4_0,
		check_hlds__modes__only_nonunique_modes_2_0_i4);
MR_def_label(check_hlds__modes__only_nonunique_modes_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_not_partly_unique_2_0,
		check_hlds__modes__only_nonunique_modes_2_0_i5);
MR_def_label(check_hlds__modes__only_nonunique_modes_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__only_nonunique_modes_2_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_not_partly_unique_2_0,
		check_hlds__modes__only_nonunique_modes_2_0_i7);
MR_def_label(check_hlds__modes__only_nonunique_modes_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__only_nonunique_modes_2_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(check_hlds__modes__only_nonunique_modes_2_0_i24);
MR_def_label(check_hlds__modes__only_nonunique_modes_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
MR_def_label(check_hlds__modes__only_nonunique_modes_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_5_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_eval_method_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_argmodes_2_0);
MR_decl_entry(fn__hlds__hlds_pred__eval_method_requires_ground_args_1_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_context_2_0);
MR_decl_entry(fn__parse_tree__prog_out__eval_method_to_string_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(hlds__hlds_module__module_info_incr_num_errors_3_0);
MR_decl_entry(fn__hlds__hlds_pred__eval_method_destroys_uniqueness_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_name_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_orig_arity_1_0);
MR_decl_entry(hlds__hlds_pred__pred_info_is_exported_1_0);
MR_decl_entry(check_hlds__inst_match__inst_expand_3_0);
MR_decl_entry(__Unify___parse_tree__prog_data__mer_inst_0_0);

MR_BEGIN_MODULE(check_hlds__modes_module3)
	MR_init_entry1(check_hlds__modes__proc_check_eval_methods_6_0);
	MR_init_label8(check_hlds__modes__proc_check_eval_methods_6_0,133,4,5,6,8,12,14,15)
	MR_init_label8(check_hlds__modes__proc_check_eval_methods_6_0,16,17,18,19,20,21,7,24)
	MR_init_label8(check_hlds__modes__proc_check_eval_methods_6_0,28,30,31,32,33,34,35,36)
	MR_init_label8(check_hlds__modes__proc_check_eval_methods_6_0,37,23,38,40,42,44,51,52)
	MR_init_label8(check_hlds__modes__proc_check_eval_methods_6_0,53,54,56,57,59,61,60,63)
	MR_init_label8(check_hlds__modes__proc_check_eval_methods_6_0,64,47,66,67,68,69,39,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modes__proc_check_eval_methods_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(check_hlds__modes__proc_check_eval_methods_6_0,133)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__proc_check_eval_methods_6_0_i3);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r3 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		check_hlds__modes__proc_check_eval_methods_6_0_i4);
MR_def_label(check_hlds__modes__proc_check_eval_methods_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_eval_method_2_0,
		check_hlds__modes__proc_check_eval_methods_6_0_i5);
MR_def_label(check_hlds__modes__proc_check_eval_methods_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		check_hlds__modes__proc_check_eval_methods_6_0_i6);
MR_def_label(check_hlds__modes__proc_check_eval_methods_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__eval_method_requires_ground_args_1_0,
		check_hlds__modes__proc_check_eval_methods_6_0_i8);
MR_def_label(check_hlds__modes__proc_check_eval_methods_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__modes__proc_check_eval_methods_6_0_i7);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__modes__only_fully_in_out_modes_2_0,
		check_hlds__modes__proc_check_eval_methods_6_0_i12);
MR_def_label(check_hlds__modes__proc_check_eval_methods_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__modes__proc_check_eval_methods_6_0_i7);
	}
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_eval_method_2_0,
		check_hlds__modes__proc_check_eval_methods_6_0_i14);
MR_def_label(check_hlds__modes__proc_check_eval_methods_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_context_2_0,
		check_hlds__modes__proc_check_eval_methods_6_0_i15);
MR_def_label(check_hlds__modes__proc_check_eval_methods_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_sv(8) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_out__eval_method_to_string_1_0,
		check_hlds__modes__proc_check_eval_methods_6_0_i16);
MR_def_label(check_hlds__modes__proc_check_eval_methods_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(3,1,6);
	MR_r2 = (MR_Word) MR_string_const("\'", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		check_hlds__modes__proc_check_eval_methods_6_0_i17);
MR_def_label(check_hlds__modes__proc_check_eval_methods_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\140pragma ", 8);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		check_hlds__modes__proc_check_eval_methods_6_0_i18);
MR_def_label(check_hlds__modes__proc_check_eval_methods_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,2,3);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,2,7);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(8);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_sv(8) = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_TAG_COMMON(1,3,0);
	MR_tfield(0, MR_tempr3, 2) = MR_tempr1;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		check_hlds__modes__proc_check_eval_methods_6_0_i19);
MR_def_label(check_hlds__modes__proc_check_eval_methods_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 0;
	MR_np_call_localret_ent(parse_tree__error_util__write_error_spec_8_0,
		check_hlds__modes__proc_check_eval_methods_6_0_i20);
MR_def_label(check_hlds__modes__proc_check_eval_methods_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_incr_num_errors_3_0,
		check_hlds__modes__proc_check_eval_methods_6_0_i21);
MR_def_label(check_hlds__modes__proc_check_eval_methods_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__eval_method_destroys_uniqueness_1_0,
		check_hlds__modes__proc_check_eval_methods_6_0_i24);
MR_def_label(check_hlds__modes__proc_check_eval_methods_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__eval_method_destroys_uniqueness_1_0,
		check_hlds__modes__proc_check_eval_methods_6_0_i24);
MR_def_label(check_hlds__modes__proc_check_eval_methods_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__modes__proc_check_eval_methods_6_0_i23);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__modes__only_nonunique_modes_2_0,
		check_hlds__modes__proc_check_eval_methods_6_0_i28);
MR_def_label(check_hlds__modes__proc_check_eval_methods_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__modes__proc_check_eval_methods_6_0_i23);
	}
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_eval_method_2_0,
		check_hlds__modes__proc_check_eval_methods_6_0_i30);
MR_def_label(check_hlds__modes__proc_check_eval_methods_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_context_2_0,
		check_hlds__modes__proc_check_eval_methods_6_0_i31);
MR_def_label(check_hlds__modes__proc_check_eval_methods_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_sv(6) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_out__eval_method_to_string_1_0,
		check_hlds__modes__proc_check_eval_methods_6_0_i32);
MR_def_label(check_hlds__modes__proc_check_eval_methods_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(3,1,12);
	MR_r2 = (MR_Word) MR_string_const("\'", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		check_hlds__modes__proc_check_eval_methods_6_0_i33);
MR_def_label(check_hlds__modes__proc_check_eval_methods_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\140pragma ", 8);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		check_hlds__modes__proc_check_eval_methods_6_0_i34);
MR_def_label(check_hlds__modes__proc_check_eval_methods_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,2,9);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,2,14);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_sv(6) = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_TAG_COMMON(1,3,0);
	MR_tfield(0, MR_tempr3, 2) = MR_tempr1;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		check_hlds__modes__proc_check_eval_methods_6_0_i35);
MR_def_label(check_hlds__modes__proc_check_eval_methods_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 0;
	MR_np_call_localret_ent(parse_tree__error_util__write_error_spec_8_0,
		check_hlds__modes__proc_check_eval_methods_6_0_i36);
MR_def_label(check_hlds__modes__proc_check_eval_methods_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_incr_num_errors_3_0,
		check_hlds__modes__proc_check_eval_methods_6_0_i37);
MR_def_label(check_hlds__modes__proc_check_eval_methods_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_GOTO_LAB(check_hlds__modes__proc_check_eval_methods_6_0_i38);
MR_def_label(check_hlds__modes__proc_check_eval_methods_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
MR_def_label(check_hlds__modes__proc_check_eval_methods_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		check_hlds__modes__proc_check_eval_methods_6_0_i40);
MR_def_label(check_hlds__modes__proc_check_eval_methods_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("main", 4)) != 0)) {
		MR_GOTO_LAB(check_hlds__modes__proc_check_eval_methods_6_0_i39);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_orig_arity_1_0,
		check_hlds__modes__proc_check_eval_methods_6_0_i42);
MR_def_label(check_hlds__modes__proc_check_eval_methods_6_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(check_hlds__modes__proc_check_eval_methods_6_0_i39);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_is_exported_1_0,
		check_hlds__modes__proc_check_eval_methods_6_0_i44);
MR_def_label(check_hlds__modes__proc_check_eval_methods_6_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__proc_check_eval_methods_6_0_i39);
	}
	if (MR_LTAGS_TEST(MR_sv(7),0,0)) {
		MR_GOTO_LAB(check_hlds__modes__proc_check_eval_methods_6_0_i47);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(7);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__proc_check_eval_methods_6_0_i47);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__proc_check_eval_methods_6_0_i47);
	}
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 0);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_ctfield(1, MR_tempr3, 0);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_get_insts_4_0,
		check_hlds__modes__proc_check_eval_methods_6_0_i51);
MR_def_label(check_hlds__modes__proc_check_eval_methods_6_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__mode_util__mode_get_insts_4_0,
		check_hlds__modes__proc_check_eval_methods_6_0_i52);
MR_def_label(check_hlds__modes__proc_check_eval_methods_6_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(3,7,0);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_expand_3_0,
		check_hlds__modes__proc_check_eval_methods_6_0_i53);
MR_def_label(check_hlds__modes__proc_check_eval_methods_6_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_inst_0_0,
		check_hlds__modes__proc_check_eval_methods_6_0_i54);
MR_def_label(check_hlds__modes__proc_check_eval_methods_6_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__proc_check_eval_methods_6_0_i47);
	}
	MR_r2 = MR_sv(6);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(3,7,1);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_expand_3_0,
		check_hlds__modes__proc_check_eval_methods_6_0_i56);
MR_def_label(check_hlds__modes__proc_check_eval_methods_6_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_inst_0_0,
		check_hlds__modes__proc_check_eval_methods_6_0_i57);
MR_def_label(check_hlds__modes__proc_check_eval_methods_6_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__proc_check_eval_methods_6_0_i47);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_expand_3_0,
		check_hlds__modes__proc_check_eval_methods_6_0_i59);
MR_def_label(check_hlds__modes__proc_check_eval_methods_6_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__proc_check_eval_methods_6_0_i61);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_GOTO_LAB(check_hlds__modes__proc_check_eval_methods_6_0_i60);
MR_def_label(check_hlds__modes__proc_check_eval_methods_6_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(check_hlds__modes__proc_check_eval_methods_6_0_i47);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
MR_def_label(check_hlds__modes__proc_check_eval_methods_6_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(check_hlds__inst_match__inst_expand_3_0,
		check_hlds__modes__proc_check_eval_methods_6_0_i63);
MR_def_label(check_hlds__modes__proc_check_eval_methods_6_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_inst_0_0,
		check_hlds__modes__proc_check_eval_methods_6_0_i64);
MR_def_label(check_hlds__modes__proc_check_eval_methods_6_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__modes__proc_check_eval_methods_6_0_i39);
	}
MR_def_label(check_hlds__modes__proc_check_eval_methods_6_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_context_2_0,
		check_hlds__modes__proc_check_eval_methods_6_0_i66);
MR_def_label(check_hlds__modes__proc_check_eval_methods_6_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,2,16);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_sv(4) = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_TAG_COMMON(1,3,0);
	MR_tfield(0, MR_tempr3, 2) = MR_tempr2;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		check_hlds__modes__proc_check_eval_methods_6_0_i67);
MR_def_label(check_hlds__modes__proc_check_eval_methods_6_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 0;
	MR_np_call_localret_ent(parse_tree__error_util__write_error_spec_8_0,
		check_hlds__modes__proc_check_eval_methods_6_0_i68);
MR_def_label(check_hlds__modes__proc_check_eval_methods_6_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_incr_num_errors_3_0,
		check_hlds__modes__proc_check_eval_methods_6_0_i69);
MR_def_label(check_hlds__modes__proc_check_eval_methods_6_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(check_hlds__modes__proc_check_eval_methods_6_0_i133);
MR_def_label(check_hlds__modes__proc_check_eval_methods_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(check_hlds__modes__proc_check_eval_methods_6_0_i133);
MR_def_label(check_hlds__modes__proc_check_eval_methods_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__lookup_3_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_procids_1_0);

MR_BEGIN_MODULE(check_hlds__modes_module4)
	MR_init_entry1(check_hlds__modes__pred_check_eval_methods_5_0);
	MR_init_label6(check_hlds__modes__pred_check_eval_methods_5_0,14,4,5,6,7,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modes__pred_check_eval_methods_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(check_hlds__modes__pred_check_eval_methods_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__pred_check_eval_methods_5_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_ctfield(1, MR_r1, 0);
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_preds_2_0,
		check_hlds__modes__pred_check_eval_methods_5_0_i4);
MR_def_label(check_hlds__modes__pred_check_eval_methods_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__modes__pred_check_eval_methods_5_0_i5);
MR_def_label(check_hlds__modes__pred_check_eval_methods_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_procids_1_0,
		check_hlds__modes__pred_check_eval_methods_5_0_i6);
MR_def_label(check_hlds__modes__pred_check_eval_methods_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__modes__proc_check_eval_methods_6_0,
		check_hlds__modes__pred_check_eval_methods_5_0_i7);
MR_def_label(check_hlds__modes__pred_check_eval_methods_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(check_hlds__modes__pred_check_eval_methods_5_0_i14);
MR_def_label(check_hlds__modes__pred_check_eval_methods_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_predids_3_0);
MR_decl_entry(libs__globals__io_lookup_int_option_4_0);
MR_decl_entry(check_hlds__delay_partial_inst__delay_partial_inst_preds_6_0);

MR_BEGIN_MODULE(check_hlds__modes_module5)
	MR_init_entry1(check_hlds__modes__check_pred_modes_7_0);
	MR_init_label8(check_hlds__modes__check_pred_modes_7_0,2,3,4,9,11,12,8,14)
	MR_init_label4(check_hlds__modes__check_pred_modes_7_0,6,15,16,17)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__modes__check_pred_modes_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_predids_3_0,
		check_hlds__modes__check_pred_modes_7_0_i2);
MR_def_label(check_hlds__modes__check_pred_modes_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Integer) 138;
	MR_np_call_localret_ent(libs__globals__io_lookup_int_option_4_0,
		check_hlds__modes__check_pred_modes_7_0_i3);
MR_def_label(check_hlds__modes__check_pred_modes_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__modes__modecheck_to_fixpoint_9_0,
		check_hlds__modes__check_pred_modes_7_0_i4);
MR_def_label(check_hlds__modes__check_pred_modes_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(check_hlds__modes__check_pred_modes_7_0_i6);
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(check_hlds__modes__check_pred_modes_7_0_i8);
	}
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Integer) 217;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		check_hlds__modes__check_pred_modes_7_0_i9);
MR_def_label(check_hlds__modes__check_pred_modes_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__modes__check_pred_modes_7_0_i11);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_sv(5);
	MR_decr_sp_and_return(6);
MR_def_label(check_hlds__modes__check_pred_modes_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__delay_partial_inst__delay_partial_inst_preds_6_0,
		check_hlds__modes__check_pred_modes_7_0_i12);
MR_def_label(check_hlds__modes__check_pred_modes_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(check_hlds__modes__modecheck_to_fixpoint_9_0);
MR_def_label(check_hlds__modes__check_pred_modes_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_errors__write_mode_inference_messages_5_0,
		check_hlds__modes__check_pred_modes_7_0_i14);
MR_def_label(check_hlds__modes__check_pred_modes_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_sv(5);
	MR_decr_sp_and_return(6);
MR_def_label(check_hlds__modes__check_pred_modes_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_errors__write_mode_inference_messages_5_0,
		check_hlds__modes__check_pred_modes_7_0_i15);
MR_def_label(check_hlds__modes__check_pred_modes_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_predids_3_0,
		check_hlds__modes__check_pred_modes_7_0_i16);
MR_def_label(check_hlds__modes__check_pred_modes_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(check_hlds__modes__pred_check_eval_methods_5_0,
		check_hlds__modes__check_pred_modes_7_0_i17);
MR_def_label(check_hlds__modes__check_pred_modes_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_out__maybe_write_string_4_0);
MR_decl_entry(parse_tree__prog_out__maybe_report_stats_3_0);

MR_BEGIN_MODULE(check_hlds__modes_module6)
	MR_init_entry1(check_hlds__modes__modecheck_5_0);
	MR_init_label5(check_hlds__modes__modecheck_5_0,2,3,4,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__modes__modecheck_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Integer) 42;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		check_hlds__modes__modecheck_5_0_i2);
MR_def_label(check_hlds__modes__modecheck_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 34;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		check_hlds__modes__modecheck_5_0_i3);
MR_def_label(check_hlds__modes__modecheck_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("% Mode-checking clauses...\n", 27);
	MR_np_call_localret_ent(parse_tree__prog_out__maybe_write_string_4_0,
		check_hlds__modes__modecheck_5_0_i4);
MR_def_label(check_hlds__modes__modecheck_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__modes__check_pred_modes_7_0,
		check_hlds__modes__modecheck_5_0_i5);
MR_def_label(check_hlds__modes__modecheck_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_out__maybe_report_stats_3_0,
		check_hlds__modes__modecheck_5_0_i6);
MR_def_label(check_hlds__modes__modecheck_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(check_hlds__modes_module7)
	MR_init_entry1(check_hlds__modes__get_live_vars_3_0);
	MR_init_label4(check_hlds__modes__get_live_vars_3_0,3,9,8,38)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__modes__get_live_vars_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__get_live_vars_3_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__get_live_vars_3_0_i8);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(check_hlds__modes__get_live_vars_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__get_live_vars_3_0_i8);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r2, 0);
	MR_sv(2) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_r2 = MR_ctfield(1, MR_r2, 1);
	MR_np_localcall_lab(check_hlds__modes__get_live_vars_3_0,
		check_hlds__modes__get_live_vars_3_0_i9);
MR_def_label(check_hlds__modes__get_live_vars_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(check_hlds__modes__get_live_vars_3_0_i38);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(check_hlds__modes__get_live_vars_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("modes.m", 7);
	MR_r2 = (MR_Word) MR_string_const("get_live_vars: length mismatch", 30);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(check_hlds__modes__get_live_vars_3_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__instmap__instmap_delta_init_reachable_1_0);
MR_decl_entry(check_hlds__mode_info__mode_info_set_instmap_3_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_instmap_delta_3_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_instmap_2_0);
MR_decl_entry(hlds__instmap__compute_instmap_delta_4_0);

MR_BEGIN_MODULE(check_hlds__modes_module8)
	MR_init_entry1(check_hlds__modes__compute_goal_instmap_delta_6_0);
	MR_init_label7(check_hlds__modes__compute_goal_instmap_delta_6_0,5,6,2,7,8,9,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__modes__compute_goal_instmap_delta_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(check_hlds__modes__compute_goal_instmap_delta_6_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r2, 2);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__compute_goal_instmap_delta_6_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_init_reachable_1_0,
		check_hlds__modes__compute_goal_instmap_delta_6_0_i5);
MR_def_label(check_hlds__modes__compute_goal_instmap_delta_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_instmap_3_0,
		check_hlds__modes__compute_goal_instmap_delta_6_0_i6);
MR_def_label(check_hlds__modes__compute_goal_instmap_delta_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_instmap_delta_3_0,
		check_hlds__modes__compute_goal_instmap_delta_6_0_i11);
MR_def_label(check_hlds__modes__compute_goal_instmap_delta_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		check_hlds__modes__compute_goal_instmap_delta_6_0_i7);
MR_def_label(check_hlds__modes__compute_goal_instmap_delta_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__modes__compute_goal_instmap_delta_6_0_i8);
MR_def_label(check_hlds__modes__compute_goal_instmap_delta_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(hlds__instmap__compute_instmap_delta_4_0,
		check_hlds__modes__compute_goal_instmap_delta_6_0_i9);
MR_def_label(check_hlds__modes__compute_goal_instmap_delta_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(1) = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_instmap_delta_3_0,
		check_hlds__modes__compute_goal_instmap_delta_6_0_i11);
MR_def_label(check_hlds__modes__compute_goal_instmap_delta_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_get_nonlocals_1_0);
MR_decl_entry(check_hlds__mode_info__mode_info_add_live_vars_3_0);

MR_BEGIN_MODULE(check_hlds__modes_module9)
	MR_init_entry1(check_hlds__modes__mode_info_add_goals_live_vars_4_0);
	MR_init_label5(check_hlds__modes__mode_info_add_goals_live_vars_4_0,24,4,5,8,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__modes__mode_info_add_goals_live_vars_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(check_hlds__modes__mode_info_add_goals_live_vars_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__mode_info_add_goals_live_vars_4_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_r2, 0);
	MR_r2 = MR_ctfield(1, MR_r2, 1);
	MR_np_localcall_lab(check_hlds__modes__mode_info_add_goals_live_vars_4_0,
		check_hlds__modes__mode_info_add_goals_live_vars_4_0_i4);
MR_def_label(check_hlds__modes__mode_info_add_goals_live_vars_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_sv(2), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(check_hlds__modes__mode_info_add_goals_live_vars_4_0_i5);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 1);
	if ((MR_sv(1) != MR_tempr2)) {
		MR_GOTO_LAB(check_hlds__modes__mode_info_add_goals_live_vars_4_0_i5);
	}
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_ctfield(3, MR_tempr1, 2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(check_hlds__modes__mode_info_add_goals_live_vars_4_0_i24);
	}
MR_def_label(check_hlds__modes__mode_info_add_goals_live_vars_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_get_nonlocals_1_0,
		check_hlds__modes__mode_info_add_goals_live_vars_4_0_i8);
MR_def_label(check_hlds__modes__mode_info_add_goals_live_vars_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(check_hlds__mode_info__mode_info_add_live_vars_3_0);
MR_def_label(check_hlds__modes__mode_info_add_goals_live_vars_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__goal_info_set_context_3_0);

MR_BEGIN_MODULE(check_hlds__modes_module10)
	MR_init_entry1(check_hlds__modes__handle_extra_goals_contexts_3_0);
	MR_init_label3(check_hlds__modes__handle_extra_goals_contexts_3_0,4,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modes__handle_extra_goals_contexts_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__handle_extra_goals_contexts_3_0_i3);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = MR_tempr2;
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_context_3_0,
		check_hlds__modes__handle_extra_goals_contexts_3_0_i4);
MR_def_label(check_hlds__modes__handle_extra_goals_contexts_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(2);
	}
	MR_np_localcall_lab(check_hlds__modes__handle_extra_goals_contexts_3_0,
		check_hlds__modes__handle_extra_goals_contexts_3_0_i5);
MR_def_label(check_hlds__modes__handle_extra_goals_contexts_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(check_hlds__modes__handle_extra_goals_contexts_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__mode_info__mode_info_remove_live_vars_3_0);

MR_BEGIN_MODULE(check_hlds__modes_module11)
	MR_init_entry1(check_hlds__modes__mode_info_remove_goals_live_vars_3_0);
	MR_init_label5(check_hlds__modes__mode_info_remove_goals_live_vars_3_0,28,4,8,9,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__modes__mode_info_remove_goals_live_vars_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(check_hlds__modes__mode_info_remove_goals_live_vars_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__mode_info_remove_goals_live_vars_3_0_i3);
	}
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_r3 = MR_ctfield(1, MR_r1, 0);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_r3, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(check_hlds__modes__mode_info_remove_goals_live_vars_3_0_i4);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 1);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(check_hlds__modes__mode_info_remove_goals_live_vars_3_0_i4);
	}
	MR_r1 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_localcall_lab(check_hlds__modes__mode_info_remove_goals_live_vars_3_0,
		check_hlds__modes__mode_info_remove_goals_live_vars_3_0_i9);
MR_def_label(check_hlds__modes__mode_info_remove_goals_live_vars_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_get_nonlocals_1_0,
		check_hlds__modes__mode_info_remove_goals_live_vars_3_0_i8);
MR_def_label(check_hlds__modes__mode_info_remove_goals_live_vars_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_remove_live_vars_3_0,
		check_hlds__modes__mode_info_remove_goals_live_vars_3_0_i9);
MR_def_label(check_hlds__modes__mode_info_remove_goals_live_vars_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(check_hlds__modes__mode_info_remove_goals_live_vars_3_0_i28);
MR_def_label(check_hlds__modes__mode_info_remove_goals_live_vars_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__instmap__lookup_var_3_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_module_info_2_0);
MR_decl_entry(check_hlds__inst_util__inst_contains_any_2_0);
MR_declare_entry(MR_do_redo);
MR_decl_entry(fn__set__make_singleton_set_1_0);
MR_decl_entry(check_hlds__mode_info__mode_info_error_4_0);

MR_BEGIN_MODULE(check_hlds__modes_module12)
	MR_init_entry1(check_hlds__modes__check_no_inst_any_vars_6_0);
	MR_init_label8(check_hlds__modes__check_no_inst_any_vars_6_0,29,3,9,11,12,13,6,15)
	MR_init_label2(check_hlds__modes__check_no_inst_any_vars_6_0,16,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modes__check_no_inst_any_vars_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
MR_def_label(check_hlds__modes__check_no_inst_any_vars_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__check_no_inst_any_vars_6_0_i3);
	}
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(13);
MR_def_label(check_hlds__modes__check_no_inst_any_vars_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r2;
	MR_sv(6) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(8) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(9) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(10));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(check_hlds__modes__check_no_inst_any_vars_6_0_i6);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(11) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(12) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(check_hlds__modes__check_no_inst_any_vars_6_0_i9);
	MR_sv(1) = MR_r1;
	MR_tempr3 = MR_r3;
	MR_sv(2) = MR_tempr3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__instmap__lookup_var_3_0,
		check_hlds__modes__check_no_inst_any_vars_6_0_i11);
MR_def_label(check_hlds__modes__check_no_inst_any_vars_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(11);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(12);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__instmap__lookup_var_3_0,
		check_hlds__modes__check_no_inst_any_vars_6_0_i11);
MR_def_label(check_hlds__modes__check_no_inst_any_vars_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		check_hlds__modes__check_no_inst_any_vars_6_0_i12);
MR_def_label(check_hlds__modes__check_no_inst_any_vars_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__inst_util__inst_contains_any_2_0,
		check_hlds__modes__check_no_inst_any_vars_6_0_i13);
MR_def_label(check_hlds__modes__check_no_inst_any_vars_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(10));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(8);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(9);
	MR_GOTO_LAB(check_hlds__modes__check_no_inst_any_vars_6_0_i15);
MR_def_label(check_hlds__modes__check_no_inst_any_vars_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(8);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(9);
	MR_GOTO_LAB(check_hlds__modes__check_no_inst_any_vars_6_0_i5);
MR_def_label(check_hlds__modes__check_no_inst_any_vars_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,17);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__set__make_singleton_set_1_0,
		check_hlds__modes__check_no_inst_any_vars_6_0_i16);
MR_def_label(check_hlds__modes__check_no_inst_any_vars_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 15;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(5);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(check_hlds__mode_info__mode_info_error_4_0);
	}
MR_def_label(check_hlds__modes__check_no_inst_any_vars_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(check_hlds__modes__check_no_inst_any_vars_6_0_i29);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_type__type_to_ctor_and_args_3_0);
MR_decl_entry(fn__hlds__special_pred__special_pred_name_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_name_2_0);
MR_decl_entry(hlds__instmap__instmap_delta_from_assoc_list_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_pred_id_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_proc_id_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_typevarset_2_0);
MR_decl_entry(hlds__pred_table__get_pred_id_and_proc_id_8_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_varset_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_var_types_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_varset_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_vartypes_3_0);
MR_decl_entry(check_hlds__polymorphism__create_poly_info_4_0);
MR_decl_entry(hlds__hlds_goal__goal_info_init_1_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_nonlocals_3_0);
MR_decl_entry(__Unify___mdbcomp__prim_data__sym_name_0_0);
MR_decl_entry(check_hlds__polymorphism__polymorphism_process_new_call_12_0);
MR_decl_entry(check_hlds__polymorphism__poly_info_extract_6_0);
MR_decl_entry(hlds__hlds_module__module_info_set_pred_proc_info_6_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_varset_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_vartypes_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_set_varset_3_0);
MR_decl_entry(check_hlds__mode_info__mode_info_set_var_types_3_0);
MR_decl_entry(check_hlds__mode_info__mode_info_set_module_info_3_0);

MR_BEGIN_MODULE(check_hlds__modes_module13)
	MR_init_entry1(check_hlds__modes__construct_initialisation_call_8_0);
	MR_init_label8(check_hlds__modes__construct_initialisation_call_8_0,3,5,8,9,7,6,10,11)
	MR_init_label8(check_hlds__modes__construct_initialisation_call_8_0,12,13,14,15,16,17,18,19)
	MR_init_label8(check_hlds__modes__construct_initialisation_call_8_0,20,21,22,23,24,25,26,27)
	MR_init_label8(check_hlds__modes__construct_initialisation_call_8_0,28,30,31,32,33,34,35,36)
	MR_init_label2(check_hlds__modes__construct_initialisation_call_8_0,37,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__modes__construct_initialisation_call_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(20);
	MR_sv(20) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(8) = MR_r6;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_3_0,
		check_hlds__modes__construct_initialisation_call_8_0_i3);
MR_def_label(check_hlds__modes__construct_initialisation_call_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__construct_initialisation_call_8_0_i2);
	}
	MR_sv(6) = MR_r2;
	MR_r1 = (MR_Integer) 3;
	MR_np_call_localret_ent(fn__hlds__special_pred__special_pred_name_2_0,
		check_hlds__modes__construct_initialisation_call_8_0_i5);
MR_def_label(check_hlds__modes__construct_initialisation_call_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(0, MR_sv(6), 0);
	if (MR_PTAG_TESTR(MR_r3,0)) {
		MR_GOTO_LAB(check_hlds__modes__construct_initialisation_call_8_0_i7);
	}
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		check_hlds__modes__construct_initialisation_call_8_0_i8);
MR_def_label(check_hlds__modes__construct_initialisation_call_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_name_2_0,
		check_hlds__modes__construct_initialisation_call_8_0_i9);
MR_def_label(check_hlds__modes__construct_initialisation_call_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,17);
	MR_GOTO_LAB(check_hlds__modes__construct_initialisation_call_8_0_i6);
MR_def_label(check_hlds__modes__construct_initialisation_call_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_ctfield(1, MR_r3, 0);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,17);
MR_def_label(check_hlds__modes__construct_initialisation_call_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__set__make_singleton_set_1_0,
		check_hlds__modes__construct_initialisation_call_8_0_i10);
MR_def_label(check_hlds__modes__construct_initialisation_call_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_from_assoc_list_2_0,
		check_hlds__modes__construct_initialisation_call_8_0_i11);
MR_def_label(check_hlds__modes__construct_initialisation_call_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(9) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(8);
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		check_hlds__modes__construct_initialisation_call_8_0_i12);
MR_def_label(check_hlds__modes__construct_initialisation_call_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_pred_id_2_0,
		check_hlds__modes__construct_initialisation_call_8_0_i13);
MR_def_label(check_hlds__modes__construct_initialisation_call_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_proc_id_2_0,
		check_hlds__modes__construct_initialisation_call_8_0_i14);
MR_def_label(check_hlds__modes__construct_initialisation_call_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		check_hlds__modes__construct_initialisation_call_8_0_i15);
MR_def_label(check_hlds__modes__construct_initialisation_call_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_sv(14) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_typevarset_2_0,
		check_hlds__modes__construct_initialisation_call_8_0_i16);
MR_def_label(check_hlds__modes__construct_initialisation_call_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(6);
	MR_r5 = MR_sv(9);
	MR_sv(9) = MR_tempr1;
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 0;
	MR_r6 = MR_sv(10);
	}
	MR_np_call_localret_ent(hlds__pred_table__get_pred_id_and_proc_id_8_0,
		check_hlds__modes__construct_initialisation_call_8_0_i17);
MR_def_label(check_hlds__modes__construct_initialisation_call_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_sv(16) = MR_r2;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(15);
	MR_r3 = MR_sv(16);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		check_hlds__modes__construct_initialisation_call_8_0_i18);
MR_def_label(check_hlds__modes__construct_initialisation_call_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	MR_sv(18) = MR_r2;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_varset_2_0,
		check_hlds__modes__construct_initialisation_call_8_0_i19);
MR_def_label(check_hlds__modes__construct_initialisation_call_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(19) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_var_types_2_0,
		check_hlds__modes__construct_initialisation_call_8_0_i20);
MR_def_label(check_hlds__modes__construct_initialisation_call_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(14);
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(19);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_varset_3_0,
		check_hlds__modes__construct_initialisation_call_8_0_i21);
MR_def_label(check_hlds__modes__construct_initialisation_call_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_vartypes_3_0,
		check_hlds__modes__construct_initialisation_call_8_0_i22);
MR_def_label(check_hlds__modes__construct_initialisation_call_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_sv(10) = MR_r3;
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(check_hlds__polymorphism__create_poly_info_4_0,
		check_hlds__modes__construct_initialisation_call_8_0_i23);
MR_def_label(check_hlds__modes__construct_initialisation_call_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_1_0,
		check_hlds__modes__construct_initialisation_call_8_0_i24);
MR_def_label(check_hlds__modes__construct_initialisation_call_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_context_3_0,
		check_hlds__modes__construct_initialisation_call_8_0_i25);
MR_def_label(check_hlds__modes__construct_initialisation_call_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_nonlocals_3_0,
		check_hlds__modes__construct_initialisation_call_8_0_i26);
MR_def_label(check_hlds__modes__construct_initialisation_call_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_instmap_delta_3_0,
		check_hlds__modes__construct_initialisation_call_8_0_i27);
MR_def_label(check_hlds__modes__construct_initialisation_call_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		check_hlds__modes__construct_initialisation_call_8_0_i28);
MR_def_label(check_hlds__modes__construct_initialisation_call_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__construct_initialisation_call_8_0_i2);
	}
	if ((strcmp((char *)MR_sv(6), (char *)MR_sv(3)) != 0)) {
		MR_GOTO_LAB(check_hlds__modes__construct_initialisation_call_8_0_i2);
	}
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(18);
	MR_r3 = MR_sv(15);
	MR_r4 = MR_sv(16);
	MR_r5 = MR_sv(2);
	MR_r6 = (MR_Integer) 2;
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(9);
	MR_r9 = MR_sv(1);
	MR_r10 = MR_sv(14);
	MR_np_call_localret_ent(check_hlds__polymorphism__polymorphism_process_new_call_12_0,
		check_hlds__modes__construct_initialisation_call_8_0_i30);
MR_def_label(check_hlds__modes__construct_initialisation_call_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(check_hlds__polymorphism__poly_info_extract_6_0,
		check_hlds__modes__construct_initialisation_call_8_0_i31);
MR_def_label(check_hlds__modes__construct_initialisation_call_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r5 = MR_r3;
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_pred_proc_info_6_0,
		check_hlds__modes__construct_initialisation_call_8_0_i32);
MR_def_label(check_hlds__modes__construct_initialisation_call_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		check_hlds__modes__construct_initialisation_call_8_0_i33);
MR_def_label(check_hlds__modes__construct_initialisation_call_8_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		check_hlds__modes__construct_initialisation_call_8_0_i34);
MR_def_label(check_hlds__modes__construct_initialisation_call_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r2 = MR_sv(8);
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_varset_3_0,
		check_hlds__modes__construct_initialisation_call_8_0_i35);
MR_def_label(check_hlds__modes__construct_initialisation_call_8_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_var_types_3_0,
		check_hlds__modes__construct_initialisation_call_8_0_i36);
MR_def_label(check_hlds__modes__construct_initialisation_call_8_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_module_info_3_0,
		check_hlds__modes__construct_initialisation_call_8_0_i37);
MR_def_label(check_hlds__modes__construct_initialisation_call_8_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(20);
MR_def_label(check_hlds__modes__construct_initialisation_call_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("modes.m", 7);
	MR_r2 = (MR_Word) MR_string_const("construct_initialisation_call", 29);
	MR_succip_word = MR_sv(20);
	MR_decr_sp(20);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(fn__term__context_init_0_0);

MR_BEGIN_MODULE(check_hlds__modes_module14)
	MR_init_entry1(check_hlds__modes__construct_initialisation_calls_4_0);
	MR_init_label6(check_hlds__modes__construct_initialisation_calls_4_0,4,5,6,7,8,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__modes__construct_initialisation_calls_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__construct_initialisation_calls_4_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_ctfield(1, MR_r1, 0);
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_var_types_2_0,
		check_hlds__modes__construct_initialisation_calls_4_0_i4);
MR_def_label(check_hlds__modes__construct_initialisation_calls_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,17);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__modes__construct_initialisation_calls_4_0_i5);
MR_def_label(check_hlds__modes__construct_initialisation_calls_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		check_hlds__modes__construct_initialisation_calls_4_0_i6);
MR_def_label(check_hlds__modes__construct_initialisation_calls_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__modes__construct_initialisation_call_8_0,
		check_hlds__modes__construct_initialisation_calls_4_0_i7);
MR_def_label(check_hlds__modes__construct_initialisation_calls_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_localcall_lab(check_hlds__modes__construct_initialisation_calls_4_0,
		check_hlds__modes__construct_initialisation_calls_4_0_i8);
MR_def_label(check_hlds__modes__construct_initialisation_calls_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(check_hlds__modes__construct_initialisation_calls_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(hlds__hlds_goal__goal_to_conj_list_2_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_decl_entry(hlds__hlds_goal__conj_list_to_goal_3_0);

MR_BEGIN_MODULE(check_hlds__modes_module15)
	MR_init_entry1(fn__check_hlds__modes__append_init_calls_to_goal_3_0);
	MR_init_label7(fn__check_hlds__modes__append_init_calls_to_goal_3_0,2,3,4,7,5,8,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__modes__append_init_calls_to_goal_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		fn__check_hlds__modes__append_init_calls_to_goal_3_0_i2);
MR_def_label(fn__check_hlds__modes__append_init_calls_to_goal_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,17);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		fn__check_hlds__modes__append_init_calls_to_goal_3_0_i3);
MR_def_label(fn__check_hlds__modes__append_init_calls_to_goal_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_nonlocals_3_0,
		fn__check_hlds__modes__append_init_calls_to_goal_3_0_i4);
MR_def_label(fn__check_hlds__modes__append_init_calls_to_goal_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(4),3,2)) {
		MR_GOTO_LAB(fn__check_hlds__modes__append_init_calls_to_goal_3_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__check_hlds__modes__append_init_calls_to_goal_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r4 = MR_ctfield(3, MR_sv(4), 1);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__check_hlds__modes__append_init_calls_to_goal_3_0_i7);
MR_def_label(fn__check_hlds__modes__append_init_calls_to_goal_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(6);
	}
MR_def_label(fn__check_hlds__modes__append_init_calls_to_goal_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_conj_list_2_0,
		fn__check_hlds__modes__append_init_calls_to_goal_3_0_i8);
MR_def_label(fn__check_hlds__modes__append_init_calls_to_goal_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__modes__append_init_calls_to_goal_3_0_i9);
MR_def_label(fn__check_hlds__modes__append_init_calls_to_goal_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(hlds__hlds_goal__conj_list_to_goal_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__prog_mode__any_inst_0_0);
MR_decl_entry(hlds__instmap__set_4_0);

MR_BEGIN_MODULE(check_hlds__modes_module16)
	MR_init_entry1(fn__check_hlds__modes__set_vars_to_inst_any_2_0);
	MR_init_label4(fn__check_hlds__modes__set_vars_to_inst_any_2_0,12,4,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__modes__set_vars_to_inst_any_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(fn__check_hlds__modes__set_vars_to_inst_any_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__check_hlds__modes__set_vars_to_inst_any_2_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_r1, 0);
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__any_inst_0_0,
		fn__check_hlds__modes__set_vars_to_inst_any_2_0_i4);
MR_def_label(fn__check_hlds__modes__set_vars_to_inst_any_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(hlds__instmap__set_4_0,
		fn__check_hlds__modes__set_vars_to_inst_any_2_0_i5);
MR_def_label(fn__check_hlds__modes__set_vars_to_inst_any_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(fn__check_hlds__modes__set_vars_to_inst_any_2_0_i12);
MR_def_label(fn__check_hlds__modes__set_vars_to_inst_any_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__filter_2_0);
MR_decl_entry(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0);

MR_BEGIN_MODULE(check_hlds__modes_module17)
	MR_init_entry1(check_hlds__modes__add_necessary_disj_init_calls_7_0);
	MR_init_label8(check_hlds__modes__add_necessary_disj_init_calls_7_0,3,9,10,11,12,13,14,15)
	MR_init_label1(check_hlds__modes__add_necessary_disj_init_calls_7_0,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modes__add_necessary_disj_init_calls_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__add_necessary_disj_init_calls_7_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__add_necessary_disj_init_calls_7_0_i8);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r4;
	MR_proceed();
MR_def_label(check_hlds__modes__add_necessary_disj_init_calls_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__add_necessary_disj_init_calls_7_0_i8);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(4) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(7) = MR_ctfield(1, MR_r1, 1);
	MR_sv(8) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		check_hlds__modes__add_necessary_disj_init_calls_7_0_i9);
MR_def_label(check_hlds__modes__add_necessary_disj_init_calls_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__modes__solver_var_to_init_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,2,17);
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__list__filter_2_0,
		check_hlds__modes__add_necessary_disj_init_calls_7_0_i10);
MR_def_label(check_hlds__modes__add_necessary_disj_init_calls_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(check_hlds__modes__construct_initialisation_calls_4_0,
		check_hlds__modes__add_necessary_disj_init_calls_7_0_i11);
MR_def_label(check_hlds__modes__add_necessary_disj_init_calls_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,17);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0,
		check_hlds__modes__add_necessary_disj_init_calls_7_0_i12);
MR_def_label(check_hlds__modes__add_necessary_disj_init_calls_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(fn__check_hlds__modes__append_init_calls_to_goal_3_0,
		check_hlds__modes__add_necessary_disj_init_calls_7_0_i13);
MR_def_label(check_hlds__modes__add_necessary_disj_init_calls_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__check_hlds__modes__set_vars_to_inst_any_2_0,
		check_hlds__modes__add_necessary_disj_init_calls_7_0_i14);
MR_def_label(check_hlds__modes__add_necessary_disj_init_calls_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(6);
	MR_np_localcall_lab(check_hlds__modes__add_necessary_disj_init_calls_7_0,
		check_hlds__modes__add_necessary_disj_init_calls_7_0_i15);
MR_def_label(check_hlds__modes__add_necessary_disj_init_calls_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(9);
	}
MR_def_label(check_hlds__modes__add_necessary_disj_init_calls_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("modes.m", 7);
	MR_r2 = (MR_Word) MR_string_const("add_necessary_init_calls: mismatched lists", 42);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__modes_module18)
	MR_init_entry1(fn__check_hlds__modes__non_free_vars_in_assoc_list_1_0);
	MR_init_label5(fn__check_hlds__modes__non_free_vars_in_assoc_list_1_0,27,6,4,9,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__modes__non_free_vars_in_assoc_list_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(fn__check_hlds__modes__non_free_vars_in_assoc_list_1_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__check_hlds__modes__non_free_vars_in_assoc_list_1_0_i3);
	}
	MR_r2 = MR_ctfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 0);
	MR_r4 = MR_ctfield(0, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(fn__check_hlds__modes__non_free_vars_in_assoc_list_1_0_i6);
	}
	MR_r1 = MR_r2;
	MR_succip_word = MR_sv(2);
	continue;
	}
	break; } /* end while */
MR_def_label(fn__check_hlds__modes__non_free_vars_in_assoc_list_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,2)) {
		MR_GOTO_LAB(fn__check_hlds__modes__non_free_vars_in_assoc_list_1_0_i4);
	}
	MR_r1 = MR_r2;
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(fn__check_hlds__modes__non_free_vars_in_assoc_list_1_0_i27);
MR_def_label(fn__check_hlds__modes__non_free_vars_in_assoc_list_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_localcall_lab(fn__check_hlds__modes__non_free_vars_in_assoc_list_1_0,
		fn__check_hlds__modes__non_free_vars_in_assoc_list_1_0_i9);
MR_def_label(fn__check_hlds__modes__non_free_vars_in_assoc_list_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(fn__check_hlds__modes__non_free_vars_in_assoc_list_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(check_hlds__modes_module19)
	MR_init_entry1(check_hlds__modes__get_all_waiting_vars_2_3_0);
	MR_init_label3(check_hlds__modes__get_all_waiting_vars_2_3_0,11,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modes__get_all_waiting_vars_2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(check_hlds__modes__get_all_waiting_vars_2_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__get_all_waiting_vars_2_3_0_i3);
	}
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,17);
	MR_r4 = MR_ctfield(0, MR_ctfield(1, MR_tempr1, 0), 0);
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__modes__get_all_waiting_vars_2_3_0_i4);
MR_def_label(check_hlds__modes__get_all_waiting_vars_2_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(check_hlds__modes__get_all_waiting_vars_2_3_0_i11);
MR_def_label(check_hlds__modes__get_all_waiting_vars_2_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__delay_info__delay_info_delay_goal_4_0);

MR_BEGIN_MODULE(check_hlds__modes_module20)
	MR_init_entry1(check_hlds__modes__redelay_goals_3_0);
	MR_init_label3(check_hlds__modes__redelay_goals_3_0,11,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modes__redelay_goals_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(check_hlds__modes__redelay_goals_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__redelay_goals_3_0_i3);
	}
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 1);
	MR_r3 = MR_ctfield(0, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(check_hlds__delay_info__delay_info_delay_goal_4_0,
		check_hlds__modes__redelay_goals_3_0_i4);
MR_def_label(check_hlds__modes__redelay_goals_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(check_hlds__modes__redelay_goals_3_0_i11);
MR_def_label(check_hlds__modes__redelay_goals_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__mode_info__mode_info_get_parallel_vars_2_0);
MR_decl_entry(hlds__instmap__is_reachable_1_0);
MR_decl_entry(check_hlds__inst_util__abstractly_unify_inst_8_0);
MR_decl_entry(hlds__instmap__init_unreachable_1_0);
MR_decl_entry(check_hlds__inst_match__inst_matches_initial_4_0);
MR_decl_entry(check_hlds__inst_match__inst_matches_binding_4_0);
MR_decl_entry(check_hlds__mode_info__mode_info_var_is_locked_3_0);
MR_decl_entry(check_hlds__inst_match__inst_is_at_least_as_instantiated_4_0);
MR_decl_entry(check_hlds__inst_match__inst_matches_binding_allow_any_any_4_0);
MR_decl_entry(set__singleton_set_2_1);
MR_decl_entry(check_hlds__mode_info__mode_info_get_delay_info_2_0);
MR_decl_entry(check_hlds__delay_info__delay_info_bind_var_3_0);
MR_decl_entry(check_hlds__mode_info__mode_info_set_delay_info_3_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(check_hlds__mode_info__mode_info_set_parallel_vars_3_0);

MR_BEGIN_MODULE(check_hlds__modes_module21)
	MR_init_entry1(check_hlds__modes__modecheck_set_var_inst_5_0);
	MR_init_label8(check_hlds__modes__modecheck_set_var_inst_5_0,2,3,6,8,9,11,10,14)
	MR_init_label8(check_hlds__modes__modecheck_set_var_inst_5_0,15,16,17,19,20,22,18,26)
	MR_init_label8(check_hlds__modes__modecheck_set_var_inst_5_0,28,25,34,36,41,43,38,39)
	MR_init_label8(check_hlds__modes__modecheck_set_var_inst_5_0,45,31,47,48,49,50,5,55)
	MR_init_label4(check_hlds__modes__modecheck_set_var_inst_5_0,59,61,58,56)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__modes__modecheck_set_var_inst_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_parallel_vars_2_0,
		check_hlds__modes__modecheck_set_var_inst_5_0_i2);
MR_def_label(check_hlds__modes__modecheck_set_var_inst_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__modes__modecheck_set_var_inst_5_0_i3);
MR_def_label(check_hlds__modes__modecheck_set_var_inst_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(hlds__instmap__is_reachable_1_0,
		check_hlds__modes__modecheck_set_var_inst_5_0_i6);
MR_def_label(check_hlds__modes__modecheck_set_var_inst_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_set_var_inst_5_0_i5);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__instmap__lookup_var_3_0,
		check_hlds__modes__modecheck_set_var_inst_5_0_i8);
MR_def_label(check_hlds__modes__modecheck_set_var_inst_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		check_hlds__modes__modecheck_set_var_inst_5_0_i9);
MR_def_label(check_hlds__modes__modecheck_set_var_inst_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(2);
	MR_r4 = (MR_Integer) 1;
	MR_np_call_localret_ent(check_hlds__inst_util__abstractly_unify_inst_8_0,
		check_hlds__modes__modecheck_set_var_inst_5_0_i11);
MR_def_label(check_hlds__modes__modecheck_set_var_inst_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_set_var_inst_5_0_i10);
	}
	MR_r1 = MR_r4;
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_sv(7) = MR_r3;
	MR_GOTO_LAB(check_hlds__modes__modecheck_set_var_inst_5_0_i14);
MR_def_label(check_hlds__modes__modecheck_set_var_inst_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("modes.m", 7);
	MR_r2 = (MR_Word) MR_string_const("modecheck_set_var_inst: unify_inst failed", 41);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		check_hlds__modes__modecheck_set_var_inst_5_0_i14);
MR_def_label(check_hlds__modes__modecheck_set_var_inst_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_module_info_3_0,
		check_hlds__modes__modecheck_set_var_inst_5_0_i15);
MR_def_label(check_hlds__modes__modecheck_set_var_inst_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_var_types_2_0,
		check_hlds__modes__modecheck_set_var_inst_5_0_i16);
MR_def_label(check_hlds__modes__modecheck_set_var_inst_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,2,17);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(10);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r5 = MR_sv(1);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__modes__modecheck_set_var_inst_5_0_i17);
MR_def_label(check_hlds__modes__modecheck_set_var_inst_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_expand_3_0,
		check_hlds__modes__modecheck_set_var_inst_5_0_i19);
MR_def_label(check_hlds__modes__modecheck_set_var_inst_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_inst_0_0,
		check_hlds__modes__modecheck_set_var_inst_5_0_i20);
MR_def_label(check_hlds__modes__modecheck_set_var_inst_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_set_var_inst_5_0_i18);
	}
	MR_np_call_localret_ent(hlds__instmap__init_unreachable_1_0,
		check_hlds__modes__modecheck_set_var_inst_5_0_i22);
MR_def_label(check_hlds__modes__modecheck_set_var_inst_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_instmap_3_0,
		check_hlds__modes__modecheck_set_var_inst_5_0_i55);
MR_def_label(check_hlds__modes__modecheck_set_var_inst_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_matches_initial_4_0,
		check_hlds__modes__modecheck_set_var_inst_5_0_i26);
MR_def_label(check_hlds__modes__modecheck_set_var_inst_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_set_var_inst_5_0_i25);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(hlds__instmap__set_4_0,
		check_hlds__modes__modecheck_set_var_inst_5_0_i28);
MR_def_label(check_hlds__modes__modecheck_set_var_inst_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_instmap_3_0,
		check_hlds__modes__modecheck_set_var_inst_5_0_i55);
MR_def_label(check_hlds__modes__modecheck_set_var_inst_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_matches_binding_4_0,
		check_hlds__modes__modecheck_set_var_inst_5_0_i34);
MR_def_label(check_hlds__modes__modecheck_set_var_inst_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_set_var_inst_5_0_i31);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_var_is_locked_3_0,
		check_hlds__modes__modecheck_set_var_inst_5_0_i36);
MR_def_label(check_hlds__modes__modecheck_set_var_inst_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_set_var_inst_5_0_i31);
	}
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_set_var_inst_5_0_i39);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_at_least_as_instantiated_4_0,
		check_hlds__modes__modecheck_set_var_inst_5_0_i41);
MR_def_label(check_hlds__modes__modecheck_set_var_inst_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_set_var_inst_5_0_i38);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_matches_binding_allow_any_any_4_0,
		check_hlds__modes__modecheck_set_var_inst_5_0_i43);
MR_def_label(check_hlds__modes__modecheck_set_var_inst_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_set_var_inst_5_0_i31);
	}
MR_def_label(check_hlds__modes__modecheck_set_var_inst_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
MR_def_label(check_hlds__modes__modecheck_set_var_inst_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(set__singleton_set_2_1,
		check_hlds__modes__modecheck_set_var_inst_5_0_i45);
MR_def_label(check_hlds__modes__modecheck_set_var_inst_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(7);
	MR_r3 = MR_sv(9);
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_error_4_0,
		check_hlds__modes__modecheck_set_var_inst_5_0_i55);
MR_def_label(check_hlds__modes__modecheck_set_var_inst_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(hlds__instmap__set_4_0,
		check_hlds__modes__modecheck_set_var_inst_5_0_i47);
MR_def_label(check_hlds__modes__modecheck_set_var_inst_5_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_instmap_3_0,
		check_hlds__modes__modecheck_set_var_inst_5_0_i48);
MR_def_label(check_hlds__modes__modecheck_set_var_inst_5_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_delay_info_2_0,
		check_hlds__modes__modecheck_set_var_inst_5_0_i49);
MR_def_label(check_hlds__modes__modecheck_set_var_inst_5_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__delay_info__delay_info_bind_var_3_0,
		check_hlds__modes__modecheck_set_var_inst_5_0_i50);
MR_def_label(check_hlds__modes__modecheck_set_var_inst_5_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_delay_info_3_0,
		check_hlds__modes__modecheck_set_var_inst_5_0_i55);
MR_def_label(check_hlds__modes__modecheck_set_var_inst_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
MR_def_label(check_hlds__modes__modecheck_set_var_inst_5_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(4),0,0)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_set_var_inst_5_0_i56);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(4);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(6) = MR_r1;
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,2,17);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__modes__modecheck_set_var_inst_5_0_i59);
MR_def_label(check_hlds__modes__modecheck_set_var_inst_5_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_set_var_inst_5_0_i58);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__modes__modecheck_set_var_inst_5_0_i61);
MR_def_label(check_hlds__modes__modecheck_set_var_inst_5_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(check_hlds__mode_info__mode_info_set_parallel_vars_3_0);
	}
MR_def_label(check_hlds__modes__modecheck_set_var_inst_5_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(check_hlds__mode_info__mode_info_set_parallel_vars_3_0);
MR_def_label(check_hlds__modes__modecheck_set_var_inst_5_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__check_hlds__type_util__cons_id_adjusted_arity_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0;
MR_decl_entry(list__duplicate_3_0);

MR_BEGIN_MODULE(check_hlds__modes_module22)
	MR_init_entry1(check_hlds__modes__modecheck_functor_test_4_0);
	MR_init_label5(check_hlds__modes__modecheck_functor_test_4_0,2,3,4,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__modes__modecheck_functor_test_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		check_hlds__modes__modecheck_functor_test_4_0_i2);
MR_def_label(check_hlds__modes__modecheck_functor_test_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_var_types_2_0,
		check_hlds__modes__modecheck_functor_test_4_0_i3);
MR_def_label(check_hlds__modes__modecheck_functor_test_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,17);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r5 = MR_sv(1);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__modes__modecheck_functor_test_4_0_i4);
MR_def_label(check_hlds__modes__modecheck_functor_test_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(fn__check_hlds__type_util__cons_id_adjusted_arity_3_0,
		check_hlds__modes__modecheck_functor_test_4_0_i5);
MR_def_label(check_hlds__modes__modecheck_functor_test_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(list__duplicate_3_0,
		check_hlds__modes__modecheck_functor_test_4_0_i6);
MR_def_label(check_hlds__modes__modecheck_functor_test_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_r2 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 1) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 2) = MR_tempr2;
	MR_r1 = MR_sv(1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(check_hlds__modes__modecheck_set_var_inst_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_context_1_0);
MR_decl_entry(term__context_init_1_0);
MR_decl_entry(__Unify___term__context_0_0);
MR_decl_entry(check_hlds__mode_info__mode_info_set_context_3_0);
MR_decl_entry(hlds__hlds_goal__goal_info_has_feature_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_in_dupl_for_switch_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_set_in_dupl_for_switch_3_0);

MR_BEGIN_MODULE(check_hlds__modes_module23)
	MR_init_entry1(check_hlds__modes__modecheck_goal_6_0);
	MR_init_label8(check_hlds__modes__modecheck_goal_6_0,2,3,6,5,8,9,11,13)
	MR_init_label8(check_hlds__modes__modecheck_goal_6_0,14,15,16,17,18,10,19,20)
	MR_init_label1(check_hlds__modes__modecheck_goal_6_0,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__modes__modecheck_goal_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_sv(2) = MR_ctfield(0, MR_r1, 1);
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__modes__modecheck_goal_6_0_i2);
MR_def_label(check_hlds__modes__modecheck_goal_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(term__context_init_1_0,
		check_hlds__modes__modecheck_goal_6_0_i3);
MR_def_label(check_hlds__modes__modecheck_goal_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___term__context_0_0,
		check_hlds__modes__modecheck_goal_6_0_i6);
MR_def_label(check_hlds__modes__modecheck_goal_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_goal_6_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_sv(3) = MR_sv(4);
	MR_GOTO_LAB(check_hlds__modes__modecheck_goal_6_0_i9);
MR_def_label(check_hlds__modes__modecheck_goal_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_context_3_0,
		check_hlds__modes__modecheck_goal_6_0_i8);
MR_def_label(check_hlds__modes__modecheck_goal_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
MR_def_label(check_hlds__modes__modecheck_goal_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r2 = (MR_Integer) 12;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_has_feature_2_0,
		check_hlds__modes__modecheck_goal_6_0_i11);
MR_def_label(check_hlds__modes__modecheck_goal_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_goal_6_0_i10);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_in_dupl_for_switch_2_0,
		check_hlds__modes__modecheck_goal_6_0_i13);
MR_def_label(check_hlds__modes__modecheck_goal_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_in_dupl_for_switch_3_0,
		check_hlds__modes__modecheck_goal_6_0_i14);
MR_def_label(check_hlds__modes__modecheck_goal_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__modes__modecheck_goal_6_0_i15);
MR_def_label(check_hlds__modes__modecheck_goal_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(check_hlds__modes__modecheck_goal_expr_7_0,
		check_hlds__modes__modecheck_goal_6_0_i16);
MR_def_label(check_hlds__modes__modecheck_goal_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__modes__compute_goal_instmap_delta_6_0,
		check_hlds__modes__modecheck_goal_6_0_i17);
MR_def_label(check_hlds__modes__modecheck_goal_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(3);
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_in_dupl_for_switch_3_0,
		check_hlds__modes__modecheck_goal_6_0_i18);
MR_def_label(check_hlds__modes__modecheck_goal_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(5);
MR_def_label(check_hlds__modes__modecheck_goal_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__modes__modecheck_goal_6_0_i19);
MR_def_label(check_hlds__modes__modecheck_goal_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(check_hlds__modes__modecheck_goal_expr_7_0,
		check_hlds__modes__modecheck_goal_6_0_i20);
MR_def_label(check_hlds__modes__modecheck_goal_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__modes__compute_goal_instmap_delta_6_0,
		check_hlds__modes__modecheck_goal_6_0_i21);
MR_def_label(check_hlds__modes__modecheck_goal_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__mode_debug__mode_checkpoint_6_0);
MR_decl_entry(check_hlds__mode_info__mode_info_set_call_context_3_0);
MR_decl_entry(check_hlds__modecheck_unify__modecheck_unification_10_0);
MR_decl_entry(check_hlds__mode_info__mode_info_unset_call_context_2_0);
MR_decl_entry(fn__mdbcomp__prim_data__sym_name_to_string_1_0);
MR_decl_entry(string__append_3_2);
MR_decl_entry(check_hlds__mode_info__mode_info_get_call_id_3_0);
MR_decl_entry(check_hlds__modecheck_call__modecheck_call_pred_10_0);
MR_decl_entry(fn__hlds__hlds_pred__builtin_state_4_0);
MR_decl_entry(hlds__hlds_goal__generic_call_id_2_0);
MR_decl_entry(check_hlds__modecheck_call__modecheck_higher_order_call_9_0);
MR_decl_entry(hlds__hlds_module__module_info_get_event_set_2_0);
MR_decl_entry(parse_tree__prog_event__event_arg_modes_3_0);
MR_decl_entry(check_hlds__modecheck_call__modecheck_event_call_5_0);
MR_decl_entry(fn__parse_tree__prog_mode__in_mode_0_0);
MR_decl_entry(__Unify___parse_tree__prog_data__mer_mode_0_0);
MR_decl_entry(fn__parse_tree__prog_mode__out_mode_0_0);
MR_decl_entry(hlds__hlds_module__module_info_get_type_table_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_type_ctor_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_type_defn_0;
MR_decl_entry(hlds__hlds_data__get_type_defn_body_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_cons_tag_0;
MR_decl_entry(check_hlds__modecheck_call__modecheck_builtin_cast_7_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_foreign_arg_0;
MR_decl_entry(hlds__hlds_goal__par_conj_list_to_goal_3_0);
MR_decl_entry(fn__set__to_sorted_list_1_0);
MR_decl_entry(fn__list__foldr_3_0);
MR_decl_entry(hlds__instmap__instmap_merge_5_0);
MR_decl_entry(hlds__hlds_goal__disj_list_to_goal_3_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_live_vars_2_0);
MR_decl_entry(fn__bag__init_0_0);
MR_decl_entry(check_hlds__mode_info__mode_info_set_live_vars_3_0);
MR_decl_entry(check_hlds__mode_info__mode_info_lock_vars_4_0);
MR_decl_entry(check_hlds__mode_info__mode_info_unlock_vars_4_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_in_promise_purity_scope_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_set_in_promise_purity_scope_3_0);
MR_decl_entry(__Unify___term__var_1_0);
MR_decl_entry(list__reverse_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_in_from_ground_term_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_set_in_from_ground_term_3_0);
MR_decl_entry(fn__hlds__hlds_goal__true_goal_0_0);
MR_decl_entry(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);

MR_BEGIN_MODULE(check_hlds__modes_module24)
	MR_init_entry1(check_hlds__modes__modecheck_goal_expr_7_0);
	MR_init_label8(check_hlds__modes__modecheck_goal_expr_7_0,4,5,6,7,8,10,11,12)
	MR_init_label8(check_hlds__modes__modecheck_goal_expr_7_0,13,14,15,16,17,18,19,20)
	MR_init_label8(check_hlds__modes__modecheck_goal_expr_7_0,21,22,24,25,26,27,28,31)
	MR_init_label8(check_hlds__modes__modecheck_goal_expr_7_0,32,34,36,37,38,41,40,44)
	MR_init_label8(check_hlds__modes__modecheck_goal_expr_7_0,45,46,48,50,51,59,60,61)
	MR_init_label8(check_hlds__modes__modecheck_goal_expr_7_0,63,64,66,71,72,73,74,75)
	MR_init_label8(check_hlds__modes__modecheck_goal_expr_7_0,77,78,80,47,82,83,84,29)
	MR_init_label8(check_hlds__modes__modecheck_goal_expr_7_0,85,87,88,89,90,91,92,93)
	MR_init_label8(check_hlds__modes__modecheck_goal_expr_7_0,94,95,96,98,101,103,104,105)
	MR_init_label8(check_hlds__modes__modecheck_goal_expr_7_0,100,107,108,109,111,112,115,116)
	MR_init_label8(check_hlds__modes__modecheck_goal_expr_7_0,114,117,118,119,120,121,122,123)
	MR_init_label8(check_hlds__modes__modecheck_goal_expr_7_0,124,125,126,128,129,132,133,131)
	MR_init_label8(check_hlds__modes__modecheck_goal_expr_7_0,134,135,136,138,139,140,141,142)
	MR_init_label8(check_hlds__modes__modecheck_goal_expr_7_0,143,144,145,146,147,148,149,150)
	MR_init_label8(check_hlds__modes__modecheck_goal_expr_7_0,152,153,154,155,156,158,169,170)
	MR_init_label8(check_hlds__modes__modecheck_goal_expr_7_0,171,172,173,174,176,207,208,209)
	MR_init_label8(check_hlds__modes__modecheck_goal_expr_7_0,210,211,212,213,185,187,188,194)
	MR_init_label8(check_hlds__modes__modecheck_goal_expr_7_0,196,197,198,199,200,201,202,186)
	MR_init_label8(check_hlds__modes__modecheck_goal_expr_7_0,203,204,181,182,183,184,177,178)
	MR_init_label8(check_hlds__modes__modecheck_goal_expr_7_0,179,180,215,216,217,218,219,220)
	MR_init_label8(check_hlds__modes__modecheck_goal_expr_7_0,221,222,223,224,225,228,230,231)
	MR_init_label8(check_hlds__modes__modecheck_goal_expr_7_0,226,232,233,234,235,236,237,238)
	MR_init_label8(check_hlds__modes__modecheck_goal_expr_7_0,239,240,241,242,243,244,245,246)
	MR_init_label8(check_hlds__modes__modecheck_goal_expr_7_0,247,248,249,250,251,252,253,254)
	MR_init_label7(check_hlds__modes__modecheck_goal_expr_7_0,256,257,258,259,260,261,262)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__modes__modecheck_goal_expr_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(check_hlds__modes__modecheck_goal_expr_7_0_i4) MR_AND
		MR_LABEL_AP(check_hlds__modes__modecheck_goal_expr_7_0_i10) MR_AND
		MR_LABEL_AP(check_hlds__modes__modecheck_goal_expr_7_0_i24) MR_AND
		MR_LABEL_AP(check_hlds__modes__modecheck_goal_expr_7_0_i87));
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_sv(3) = MR_ctfield(0, MR_r1, 1);
	MR_sv(4) = MR_ctfield(0, MR_r1, 3);
	MR_sv(5) = MR_ctfield(0, MR_r1, 4);
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_string_const("unify", 5);
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_6_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i5);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_call_context_3_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i6);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__modecheck_unify__modecheck_unification_10_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i7);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_unset_call_context_2_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i8);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_string_const("unify", 5);
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_6_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i261);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(3) = MR_ctfield(1, MR_r1, 0);
	MR_sv(4) = MR_ctfield(1, MR_r1, 1);
	MR_sv(5) = MR_ctfield(1, MR_r1, 2);
	MR_sv(6) = MR_ctfield(1, MR_r1, 4);
	MR_sv(7) = MR_ctfield(1, MR_r1, 5);
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__sym_name_to_string_1_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i11);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("call ", 5);
	MR_np_call_localret_ent(string__append_3_2,
		check_hlds__modes__modecheck_goal_expr_7_0_i12);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_6_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i13);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_call_id_3_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i14);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_call_context_3_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i15);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i16);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__modecheck_call__modecheck_call_pred_10_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i17);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(12) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i18);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_pred_id_2_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i19);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__builtin_state_4_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i20);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 6);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_tempr2 = MR_sv(9);
	MR_tfield(1, MR_tempr1, 2) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 3) = MR_r1;
	MR_tfield(1, MR_tempr1, 4) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 5) = MR_sv(7);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr2;
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(12);
	}
	MR_np_call_localret_ent(check_hlds__modes__handle_extra_goals_11_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i21);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_unset_call_context_2_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i22);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_6_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i261);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_ctfield(2, MR_r1, 0);
	MR_sv(3) = MR_ctfield(2, MR_r1, 1);
	MR_sv(4) = MR_ctfield(2, MR_r1, 2);
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_string_const("generic_call", 12);
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_6_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i25);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i26);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_goal__generic_call_id_2_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i27);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_call_context_3_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i28);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(check_hlds__modes__modecheck_goal_expr_7_0_i31) MR_AND
		MR_LABEL_AP(check_hlds__modes__modecheck_goal_expr_7_0_i34) MR_AND
		MR_LABEL_AP(check_hlds__modes__modecheck_goal_expr_7_0_i36) MR_AND
		MR_LABEL_AP(check_hlds__modes__modecheck_goal_expr_7_0_i46));
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 0);
	MR_r4 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(check_hlds__modecheck_call__modecheck_higher_order_call_9_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i32);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 4);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	MR_tfield(2, MR_tempr1, 2) = MR_r2;
	MR_tfield(2, MR_tempr1, 3) = MR_r3;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tempr4 = MR_sv(4);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr3, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r4;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr2;
	MR_r7 = MR_r5;
	MR_r5 = MR_tempr3;
	MR_r6 = MR_sv(5);
	}
	MR_np_call_localret_ent(check_hlds__modes__handle_extra_goals_11_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i84);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("modes.m", 7);
	MR_r2 = (MR_Word) MR_string_const("modecheck_goal_expr: class_method_call", 38);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i29);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_ctfield(2, MR_r3, 0);
	MR_sv(11) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i37);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_event_set_2_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i38);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__prog_event__event_arg_modes_3_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i41);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_goal_expr_7_0_i40);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(11);
	MR_GOTO_LAB(check_hlds__modes__modecheck_goal_expr_7_0_i44);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("modes.m", 7);
	MR_r2 = (MR_Word) MR_string_const("modecheck_goal_expr: unknown event", 34);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i44);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(check_hlds__modecheck_call__modecheck_event_call_5_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i45);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 4);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	MR_tfield(2, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 3) = (MR_Integer) 0;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_unset_call_context_2_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i85);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 10;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_has_feature_2_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i48);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_goal_expr_7_0_i47);
	}
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i50);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_goal_expr_7_0_i51);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(3);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_goal_expr_7_0_i51);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_goal_expr_7_0_i51);
	}
	if (MR_LTAGS_TEST(MR_sv(4),0,0)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_goal_expr_7_0_i51);
	}
	MR_tempr4 = MR_sv(4);
	MR_tempr1 = MR_ctfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_goal_expr_7_0_i51);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_goal_expr_7_0_i51);
	}
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_ctfield(1, MR_tempr3, 0);
	MR_sv(8) = MR_ctfield(1, MR_tempr4, 0);
	MR_sv(9) = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__in_mode_0_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i60);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("modes.m", 7);
	MR_r2 = (MR_Word) MR_string_const("modecheck_goal_expr: bad cast", 29);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i59);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__in_mode_0_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i60);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_mode_0_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i61);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_goal_expr_7_0_i47);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__out_mode_0_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i63);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_mode_0_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i64);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_goal_expr_7_0_i47);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(hlds__instmap__lookup_var_3_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i66);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_goal_expr_7_0_i47);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(3, MR_r1, 2);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_goal_expr_7_0_i47);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_goal_expr_7_0_i47);
	}
	MR_tempr3 = MR_ctfield(1, MR_tempr1, 0);
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_goal_expr_7_0_i47);
	}
	MR_sv(6) = MR_ctfield(3, MR_r1, 1);
	MR_sv(9) = MR_ctfield(0, MR_tempr3, 0);
	MR_r1 = MR_sv(11);
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i71);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_type_table_2_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i72);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_var_types_2_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i73);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,17);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r5 = MR_sv(7);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i74);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_3_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i75);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_goal_expr_7_0_i47);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_type_defn);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i77);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_body_2_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i78);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_goal_expr_7_0_i47);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, cons_tag);
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	MR_r4 = MR_sv(9);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i80);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,9)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_goal_expr_7_0_i47);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_ctfield(3, MR_r1, 2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 3);
	MR_r5 = MR_tempr4;
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr4, 1) = MR_sv(6);
	MR_tfield(3, MR_tempr4, 2) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr5;
	MR_tfield(0, MR_tempr5, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr5, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr6;
	MR_tfield(1, MR_tempr6, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr6, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(8);
	MR_tfield(1, MR_r1, 1) = MR_tempr6;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(11);
	MR_GOTO_LAB(check_hlds__modes__modecheck_goal_expr_7_0_i82);
	}
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(11);
	MR_r1 = MR_sv(4);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(check_hlds__modecheck_call__modecheck_builtin_cast_7_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i83);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 4);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	MR_tfield(2, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(2, MR_tempr1, 3) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_r7 = MR_r4;
	MR_r4 = MR_sv(3);
	MR_r5 = MR_ctfield(2, MR_r1, 1);
	MR_r6 = MR_sv(5);
	}
	MR_np_call_localret_ent(check_hlds__modes__handle_extra_goals_11_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i84);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_unset_call_context_2_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i85);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_unset_call_context_2_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i85);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_string_const("generic_call", 12);
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_6_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i261);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(check_hlds__modes__modecheck_goal_expr_7_0_i88) MR_AND
		MR_LABEL_AP(check_hlds__modes__modecheck_goal_expr_7_0_i98) MR_AND
		MR_LABEL_AP(check_hlds__modes__modecheck_goal_expr_7_0_i111) MR_AND
		MR_LABEL_AP(check_hlds__modes__modecheck_goal_expr_7_0_i128) MR_AND
		MR_LABEL_AP(check_hlds__modes__modecheck_goal_expr_7_0_i138) MR_AND
		MR_LABEL_AP(check_hlds__modes__modecheck_goal_expr_7_0_i158) MR_AND
		MR_LABEL_AP(check_hlds__modes__modecheck_goal_expr_7_0_i215) MR_AND
		MR_LABEL_AP(check_hlds__modes__modecheck_goal_expr_7_0_i262));
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_sv(3) = MR_ctfield(3, MR_r1, 2);
	MR_sv(4) = MR_ctfield(3, MR_r1, 3);
	MR_sv(5) = MR_ctfield(3, MR_r1, 4);
	MR_sv(6) = MR_ctfield(3, MR_r1, 5);
	MR_sv(7) = MR_ctfield(3, MR_r1, 6);
	MR_sv(8) = MR_ctfield(3, MR_r1, 7);
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_string_const("pragma_foreign_code", 19);
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_6_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i89);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_call_id_3_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i90);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i91);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_sv(9) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(10);
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_call_context_3_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i92);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,17);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,10,0);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(fn__list__map_2_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i93);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(10);
	MR_np_call_localret_ent(check_hlds__modecheck_call__modecheck_call_pred_10_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i94);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 8);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_tfield(3, MR_tempr1, 4) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 5) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 6) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 7) = MR_sv(8);
	MR_r1 = MR_tempr1;
	MR_r5 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_r7 = MR_r4;
	MR_r4 = MR_sv(4);
	MR_r6 = MR_sv(9);
	}
	MR_np_call_localret_ent(check_hlds__modes__handle_extra_goals_11_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i95);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_unset_call_context_2_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i96);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_string_const("pragma_foreign_code", 19);
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_6_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i261);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_r5 = MR_tempr1;
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_goal_expr_7_0_i100);
	}
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(3) = MR_ctfield(3, MR_r1, 2);
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_string_const("conj", 4);
	}
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_6_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i101);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_goal_expr_7_0_i103);
	}
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(3,7,2);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_string_const("conj", 4);
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_6_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i261);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__modes__modecheck_conj_list_7_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i104);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__conj_list_to_goal_3_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i105);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_string_const("conj", 4);
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_6_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i261);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_r5;
	MR_sv(3) = MR_ctfield(3, MR_r1, 2);
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_string_const("par_conj", 8);
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_6_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i107);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__modes__modecheck_conj_list_7_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i108);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__par_conj_list_to_goal_3_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i109);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_string_const("par_conj", 8);
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_6_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i261);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_ctfield(3, MR_r1, 1);
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_string_const("disj", 4);
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_6_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i112);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_goal_expr_7_0_i114);
	}
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(hlds__instmap__init_unreachable_1_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i115);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_instmap_3_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i116);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_string_const("disj", 4);
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_6_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i261);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i117);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__modes__modecheck_disj_list_7_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i118);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_var_types_2_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i119);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,2,17);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i120);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i121);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__modes__solver_var_must_be_initialised_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_tfield(0, MR_tempr1, 5) = MR_sv(4);
	MR_r1 = MR_sv(8);
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__list__filter_2_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i122);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__modes__add_necessary_disj_init_calls_7_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i123);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,23);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,10,1);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(fn__list__foldr_3_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i124);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_merge_5_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i125);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__disj_list_to_goal_3_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i126);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_string_const("disj", 4);
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_6_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i261);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,128)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_sv(3) = MR_ctfield(3, MR_r1, 2);
	MR_sv(4) = MR_ctfield(3, MR_r1, 3);
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_string_const("switch", 6);
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_6_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i129);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_goal_expr_7_0_i131);
	}
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(hlds__instmap__init_unreachable_1_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i132);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,132)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_instmap_3_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i133);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,133)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_tempr1;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_string_const("switch", 6);
	}
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_6_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i261);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,131)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i134);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,134)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__modes__modecheck_case_list_8_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i135);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r4 = MR_r3;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_merge_5_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i136);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,136)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(2);
	MR_sv(1) = MR_tempr1;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_string_const("switch", 6);
	}
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_6_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i261);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,138)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_string_const("not", 3);
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_6_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i139);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,139)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i140);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,140)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i141);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,141)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_live_vars_2_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i142);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,142)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,2,17);
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__bag__init_0_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i143);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,143)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_live_vars_3_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i144);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,144)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_lock_vars_4_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i145);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,145)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__modes__modecheck_goal_6_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i146);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,146)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_live_vars_3_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i147);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,147)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_unlock_vars_4_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i148);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,148)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_instmap_3_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i149);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,149)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_in_promise_purity_scope_2_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i150);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,150)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_goal_expr_7_0_i152);
	}
	MR_r3 = MR_sv(3);
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_string_const("not", 3);
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_6_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i261);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,152)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i153);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,153)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(hlds__instmap__init_unreachable_1_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i154);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,154)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i155);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,155)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__modes__check_no_inst_any_vars_6_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i156);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,156)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_string_const("not", 3);
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_6_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i261);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,158)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_ctfield(3, MR_r1, 1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r5),
		MR_LABEL_AP(check_hlds__modes__modecheck_goal_expr_7_0_i177) MR_AND
		MR_LABEL_AP(check_hlds__modes__modecheck_goal_expr_7_0_i181) MR_AND
		MR_LABEL_AP(check_hlds__modes__modecheck_goal_expr_7_0_i169) MR_AND
		MR_LABEL_AP(check_hlds__modes__modecheck_goal_expr_7_0_i176));
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,169)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_ctfield(3, MR_r1, 2);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_in_promise_purity_scope_2_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i170);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,170)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_in_promise_purity_scope_3_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i171);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,171)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_string_const("scope", 5);
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_6_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i172);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,172)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__modes__modecheck_goal_6_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i173);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,173)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("scope", 5);
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_6_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i174);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,174)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_in_promise_purity_scope_3_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i261);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,176)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_ctfield(3, MR_r5, 0),0)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_goal_expr_7_0_i177);
	}
	if (MR_INT_EQ(MR_ctfield(3, MR_r5, 0),1)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_goal_expr_7_0_i181);
	}
	if (MR_INT_EQ(MR_ctfield(3, MR_r5, 0),2)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_goal_expr_7_0_i185);
	}
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_ctfield(3, MR_r1, 2);
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_string_const("scope", 5);
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_6_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i207);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,207)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i208);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,208)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i209);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,209)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 2);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_lock_vars_4_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i210);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,210)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__modes__modecheck_goal_6_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i211);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,211)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 2);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_unlock_vars_4_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i212);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,212)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_instmap_3_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i213);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,213)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_string_const("scope", 5);
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_6_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i202);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,185)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_ctfield(3, MR_r1, 2);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_sv(3) = MR_tempr2;
	MR_sv(2) = MR_ctfield(3, MR_tempr2, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i187);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,187)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__instmap__lookup_var_3_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i188);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,188)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_goal_expr_7_0_i186);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_sv(4);
	MR_tempr1 = MR_ctfield(0, MR_tempr4, 0);
	MR_r4 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_goal_expr_7_0_i186);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 1);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_goal_expr_7_0_i186);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 2);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_goal_expr_7_0_i186);
	}
	MR_tempr3 = MR_ctfield(0, MR_ctfield(1, MR_tempr2, 0), 0);
	MR_r4 = MR_tempr3;
	if (MR_PTAG_TESTR(MR_tempr3,0)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_goal_expr_7_0_i186);
	}
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr4, 1);
	MR_sv(5) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r3 = MR_ctfield(0, MR_tempr3, 0);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i194);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,194)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_goal_expr_7_0_i186);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(list__reverse_2_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i196);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,196)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(2);
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_sv(1);
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_in_from_ground_term_2_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i197);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,197)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_in_from_ground_term_3_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i198);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,198)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_string_const("ground scope", 12);
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_6_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i199);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,199)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__modes__modecheck_goal_6_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i200);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,200)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("ground scope", 12);
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_6_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i201);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,201)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_in_from_ground_term_3_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i202);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,202)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(17);
	}
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,186)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_string_const("scope", 5);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_6_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i203);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,203)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__modes__modecheck_goal_6_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i204);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,204)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("scope", 5);
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_6_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i180);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,181)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_ctfield(3, MR_r1, 2);
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_string_const("scope", 5);
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_6_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i182);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,182)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__modes__modecheck_goal_6_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i183);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,183)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("scope", 5);
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_6_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i184);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,184)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tempr2 = MR_tempr1;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_decr_sp_and_return(17);
	}
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,177)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_ctfield(3, MR_r1, 2);
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_string_const("scope", 5);
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_6_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i178);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,178)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__modes__modecheck_goal_6_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i179);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,179)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("scope", 5);
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_6_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i180);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,180)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(17);
	}
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,215)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_sv(3) = MR_ctfield(3, MR_r1, 2);
	MR_sv(4) = MR_ctfield(3, MR_r1, 3);
	MR_sv(5) = MR_ctfield(3, MR_r1, 4);
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_string_const("if-then-else", 12);
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_6_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i216);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,216)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i217);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,217)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_get_nonlocals_1_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i218);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,218)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i219);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,219)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_lock_vars_4_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i220);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,220)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_add_live_vars_3_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i221);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,221)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__modes__modecheck_goal_6_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i222);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,222)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(8) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i223);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,223)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_sv(6) = MR_tempr1;
	MR_r2 = MR_sv(8);
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_remove_live_vars_3_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i224);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,224)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_unlock_vars_4_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i225);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,225)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__instmap__is_reachable_1_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i228);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,228)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_goal_expr_7_0_i226);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__modes__modecheck_goal_6_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i230);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,230)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i231);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,231)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r3;
	MR_GOTO_LAB(check_hlds__modes__modecheck_goal_expr_7_0_i233);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,226)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__true_goal_0_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i232);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,232)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,233)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_instmap_3_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i234);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,234)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__modes__modecheck_goal_6_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i235);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,235)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(10) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i236);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,236)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_var_types_2_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i237);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,237)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_sv(12) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(16) = (MR_Word) MR_TAG_COMMON(0,2,17);
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i238);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,238)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i239);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,239)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 6);
	MR_r2 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_COMMON(5,3);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__modes__solver_var_must_be_initialised_4_0);
	MR_tfield(0, MR_tempr3, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr3, 3) = MR_sv(9);
	MR_tfield(0, MR_tempr3, 4) = MR_r1;
	MR_tfield(0, MR_tempr3, 5) = MR_tempr2;
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r3 = MR_sv(11);
	}
	MR_np_call_localret_ent(fn__list__filter_2_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i240);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,240)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__modes__solver_var_to_init_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(6);
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r3 = MR_sv(11);
	}
	MR_np_call_localret_ent(fn__list__filter_2_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i241);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,241)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(check_hlds__modes__construct_initialisation_calls_4_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i242);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,242)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_sv(14) = MR_r2;
	MR_sv(15) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i243);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,243)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(fn__check_hlds__modes__append_init_calls_to_goal_3_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i244);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,244)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(fn__check_hlds__modes__set_vars_to_inst_any_2_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i245);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,245)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__modes__solver_var_to_init_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(8);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r3 = MR_sv(11);
	}
	MR_np_call_localret_ent(fn__list__filter_2_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i246);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,246)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(check_hlds__modes__construct_initialisation_calls_4_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i247);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,247)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r2;
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i248);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,248)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(fn__check_hlds__modes__append_init_calls_to_goal_3_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i249);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,249)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(fn__check_hlds__modes__set_vars_to_inst_any_2_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i250);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,250)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_instmap_3_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i251);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,251)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_merge_5_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i252);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,252)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(5);
	MR_sv(1) = MR_tempr1;
	MR_sv(5) = MR_r1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i253);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,253)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_in_promise_purity_scope_2_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i254);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,254)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_goal_expr_7_0_i256);
	}
	MR_r3 = MR_sv(5);
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_string_const("if-then-else", 12);
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_6_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i261);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,256)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_get_nonlocals_1_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i257);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,257)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(16);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i258);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,258)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(16);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i259);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,259)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__modes__check_no_inst_any_vars_6_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i260);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,260)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_string_const("if-then-else", 12);
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_6_0,
		check_hlds__modes__modecheck_goal_expr_7_0_i261);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,261)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(17);
MR_def_label(check_hlds__modes__modecheck_goal_expr_7_0,262)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("modes.m", 7);
	MR_r2 = (MR_Word) MR_string_const("modecheck_goal_expr: unexpected shorthand", 41);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__mode_info__mode_info_get_errors_2_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(list__append_3_1);
MR_decl_entry(check_hlds__mode_info__mode_info_get_may_change_called_proc_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_set_checking_extra_goals_3_0);
MR_decl_entry(check_hlds__mode_info__mode_info_set_may_change_called_proc_3_0);

MR_BEGIN_MODULE(check_hlds__modes_module25)
	MR_init_entry1(check_hlds__modes__handle_extra_goals_11_0);
	MR_init_label8(check_hlds__modes__handle_extra_goals_11_0,43,4,6,9,10,11,12,13)
	MR_init_label8(check_hlds__modes__handle_extra_goals_11_0,14,15,16,17,18,19,20,21)
	MR_init_label7(check_hlds__modes__handle_extra_goals_11_0,22,23,24,25,26,27,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__modes__handle_extra_goals_11_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__handle_extra_goals_11_0_i43);
	}
	MR_r2 = MR_r7;
	MR_proceed();
MR_def_label(check_hlds__modes__handle_extra_goals_11_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r7;
	MR_sv(6) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(7) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(8) = MR_ctfield(1, MR_tempr2, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_errors_2_0,
		check_hlds__modes__handle_extra_goals_11_0_i4);
MR_def_label(check_hlds__modes__handle_extra_goals_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__instmap__is_reachable_1_0,
		check_hlds__modes__handle_extra_goals_11_0_i6);
MR_def_label(check_hlds__modes__handle_extra_goals_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__handle_extra_goals_11_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(9),0,0)) {
		MR_GOTO_LAB(check_hlds__modes__handle_extra_goals_11_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		check_hlds__modes__handle_extra_goals_11_0_i9);
MR_def_label(check_hlds__modes__handle_extra_goals_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,2,17);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__modes__handle_extra_goals_11_0_i10);
MR_def_label(check_hlds__modes__handle_extra_goals_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__modes__handle_extra_goals_11_0_i11);
MR_def_label(check_hlds__modes__handle_extra_goals_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__modes__handle_extra_goals_11_0_i12);
MR_def_label(check_hlds__modes__handle_extra_goals_11_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__modes__handle_extra_goals_11_0_i13);
MR_def_label(check_hlds__modes__handle_extra_goals_11_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__modes__handle_extra_goals_11_0_i14);
MR_def_label(check_hlds__modes__handle_extra_goals_11_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_nonlocals_3_0,
		check_hlds__modes__handle_extra_goals_11_0_i15);
MR_def_label(check_hlds__modes__handle_extra_goals_11_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__modes__handle_extra_goals_11_0_i16);
MR_def_label(check_hlds__modes__handle_extra_goals_11_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__modes__handle_extra_goals_contexts_3_0,
		check_hlds__modes__handle_extra_goals_11_0_i17);
MR_def_label(check_hlds__modes__handle_extra_goals_11_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__modes__handle_extra_goals_contexts_3_0,
		check_hlds__modes__handle_extra_goals_11_0_i18);
MR_def_label(check_hlds__modes__handle_extra_goals_11_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(list__append_3_1,
		check_hlds__modes__handle_extra_goals_11_0_i19);
MR_def_label(check_hlds__modes__handle_extra_goals_11_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_may_change_called_proc_2_0,
		check_hlds__modes__handle_extra_goals_11_0_i20);
MR_def_label(check_hlds__modes__handle_extra_goals_11_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_checking_extra_goals_3_0,
		check_hlds__modes__handle_extra_goals_11_0_i21);
MR_def_label(check_hlds__modes__handle_extra_goals_11_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_may_change_called_proc_3_0,
		check_hlds__modes__handle_extra_goals_11_0_i22);
MR_def_label(check_hlds__modes__handle_extra_goals_11_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_instmap_3_0,
		check_hlds__modes__handle_extra_goals_11_0_i23);
MR_def_label(check_hlds__modes__handle_extra_goals_11_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__modes__mode_info_add_goals_live_vars_4_0,
		check_hlds__modes__handle_extra_goals_11_0_i24);
MR_def_label(check_hlds__modes__handle_extra_goals_11_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__modes__modecheck_conj_list_no_delay_6_0,
		check_hlds__modes__handle_extra_goals_11_0_i25);
MR_def_label(check_hlds__modes__handle_extra_goals_11_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_sv(1) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_checking_extra_goals_3_0,
		check_hlds__modes__handle_extra_goals_11_0_i26);
MR_def_label(check_hlds__modes__handle_extra_goals_11_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_may_change_called_proc_3_0,
		check_hlds__modes__handle_extra_goals_11_0_i27);
MR_def_label(check_hlds__modes__handle_extra_goals_11_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(11);
MR_def_label(check_hlds__modes__handle_extra_goals_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__instmap__is_unreachable_1_0);

MR_BEGIN_MODULE(check_hlds__modes_module26)
	MR_init_entry1(check_hlds__modes__modecheck_conj_list_no_delay_6_0);
	MR_init_label8(check_hlds__modes__modecheck_conj_list_no_delay_6_0,26,4,5,6,7,10,12,9)
	MR_init_label1(check_hlds__modes__modecheck_conj_list_no_delay_6_0,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modes__modecheck_conj_list_no_delay_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_conj_list_no_delay_6_0_i26);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(check_hlds__modes__modecheck_conj_list_no_delay_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_r1, 0);
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_get_nonlocals_1_0,
		check_hlds__modes__modecheck_conj_list_no_delay_6_0_i4);
MR_def_label(check_hlds__modes__modecheck_conj_list_no_delay_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_remove_live_vars_3_0,
		check_hlds__modes__modecheck_conj_list_no_delay_6_0_i5);
MR_def_label(check_hlds__modes__modecheck_conj_list_no_delay_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__modes__modecheck_goal_6_0,
		check_hlds__modes__modecheck_conj_list_no_delay_6_0_i6);
MR_def_label(check_hlds__modes__modecheck_conj_list_no_delay_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__modes__modecheck_conj_list_no_delay_6_0_i7);
MR_def_label(check_hlds__modes__modecheck_conj_list_no_delay_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__instmap__is_unreachable_1_0,
		check_hlds__modes__modecheck_conj_list_no_delay_6_0_i10);
MR_def_label(check_hlds__modes__modecheck_conj_list_no_delay_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_conj_list_no_delay_6_0_i9);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__modes__mode_info_remove_goals_live_vars_3_0,
		check_hlds__modes__modecheck_conj_list_no_delay_6_0_i12);
MR_def_label(check_hlds__modes__modecheck_conj_list_no_delay_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(check_hlds__modes__modecheck_conj_list_no_delay_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_np_localcall_lab(check_hlds__modes__modecheck_conj_list_no_delay_6_0,
		check_hlds__modes__modecheck_conj_list_no_delay_6_0_i13);
MR_def_label(check_hlds__modes__modecheck_conj_list_no_delay_6_0,13)
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

MR_decl_entry(check_hlds__mode_info__mode_info_set_errors_3_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_may_init_solver_vars_2_0);
MR_decl_entry(check_hlds__delay_info__delay_info_enter_conj_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_set_may_init_solver_vars_3_0);
MR_decl_entry(check_hlds__delay_info__delay_info_leave_conj_3_0);
MR_decl_entry(check_hlds__mode_info__mode_info_add_error_3_0);
MR_decl_entry(fn__set__init_0_0);

MR_BEGIN_MODULE(check_hlds__modes_module27)
	MR_init_entry1(check_hlds__modes__modecheck_conj_list_7_0);
	MR_init_label8(check_hlds__modes__modecheck_conj_list_7_0,2,3,4,5,6,7,8,9)
	MR_init_label8(check_hlds__modes__modecheck_conj_list_7_0,10,11,12,13,14,15,16,17)
	MR_init_label8(check_hlds__modes__modecheck_conj_list_7_0,18,19,22,23,24,21,26,28)
	MR_init_label5(check_hlds__modes__modecheck_conj_list_7_0,30,31,32,33,34)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modes__modecheck_conj_list_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_errors_2_0,
		check_hlds__modes__modecheck_conj_list_7_0_i2);
MR_def_label(check_hlds__modes__modecheck_conj_list_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_errors_3_0,
		check_hlds__modes__modecheck_conj_list_7_0_i3);
MR_def_label(check_hlds__modes__modecheck_conj_list_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_may_init_solver_vars_2_0,
		check_hlds__modes__modecheck_conj_list_7_0_i4);
MR_def_label(check_hlds__modes__modecheck_conj_list_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_delay_info_2_0,
		check_hlds__modes__modecheck_conj_list_7_0_i5);
MR_def_label(check_hlds__modes__modecheck_conj_list_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(check_hlds__delay_info__delay_info_enter_conj_2_0,
		check_hlds__modes__modecheck_conj_list_7_0_i6);
MR_def_label(check_hlds__modes__modecheck_conj_list_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_delay_info_3_0,
		check_hlds__modes__modecheck_conj_list_7_0_i7);
MR_def_label(check_hlds__modes__modecheck_conj_list_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_live_vars_2_0,
		check_hlds__modes__modecheck_conj_list_7_0_i8);
MR_def_label(check_hlds__modes__modecheck_conj_list_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__modes__mode_info_add_goals_live_vars_4_0,
		check_hlds__modes__modecheck_conj_list_7_0_i9);
MR_def_label(check_hlds__modes__modecheck_conj_list_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_may_init_solver_vars_3_0,
		check_hlds__modes__modecheck_conj_list_7_0_i10);
MR_def_label(check_hlds__modes__modecheck_conj_list_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(check_hlds__modes__modecheck_conj_list_2_9_0,
		check_hlds__modes__modecheck_conj_list_7_0_i11);
MR_def_label(check_hlds__modes__modecheck_conj_list_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(6) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_delay_info_2_0,
		check_hlds__modes__modecheck_conj_list_7_0_i12);
MR_def_label(check_hlds__modes__modecheck_conj_list_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(check_hlds__delay_info__delay_info_leave_conj_3_0,
		check_hlds__modes__modecheck_conj_list_7_0_i13);
MR_def_label(check_hlds__modes__modecheck_conj_list_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_sv(7) = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_delay_info_3_0,
		check_hlds__modes__modecheck_conj_list_7_0_i14);
MR_def_label(check_hlds__modes__modecheck_conj_list_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__modes__modecheck_delayed_solver_goals_10_0,
		check_hlds__modes__modecheck_conj_list_7_0_i15);
MR_def_label(check_hlds__modes__modecheck_conj_list_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_sv(6) = MR_r3;
	MR_sv(7) = MR_r4;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__modes__modecheck_conj_list_7_0_i16);
MR_def_label(check_hlds__modes__modecheck_conj_list_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_errors_2_0,
		check_hlds__modes__modecheck_conj_list_7_0_i17);
MR_def_label(check_hlds__modes__modecheck_conj_list_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_errors, mode_error_info);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(list__append_3_1,
		check_hlds__modes__modecheck_conj_list_7_0_i18);
MR_def_label(check_hlds__modes__modecheck_conj_list_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_errors_3_0,
		check_hlds__modes__modecheck_conj_list_7_0_i19);
MR_def_label(check_hlds__modes__modecheck_conj_list_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_conj_list_7_0_i21);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_errors, mode_error_info);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(list__reverse_2_0,
		check_hlds__modes__modecheck_conj_list_7_0_i22);
MR_def_label(check_hlds__modes__modecheck_conj_list_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_errors_2_0,
		check_hlds__modes__modecheck_conj_list_7_0_i23);
MR_def_label(check_hlds__modes__modecheck_conj_list_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_errors, mode_error_info);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(list__append_3_1,
		check_hlds__modes__modecheck_conj_list_7_0_i24);
MR_def_label(check_hlds__modes__modecheck_conj_list_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_errors_3_0,
		check_hlds__modes__modecheck_conj_list_7_0_i33);
MR_def_label(check_hlds__modes__modecheck_conj_list_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 0);
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_live_vars_3_0,
		check_hlds__modes__modecheck_conj_list_7_0_i26);
MR_def_label(check_hlds__modes__modecheck_conj_list_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_conj_list_7_0_i28);
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(3), 1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_add_error_3_0,
		check_hlds__modes__modecheck_conj_list_7_0_i33);
MR_def_label(check_hlds__modes__modecheck_conj_list_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,2,17);
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__set__init_0_0,
		check_hlds__modes__modecheck_conj_list_7_0_i30);
MR_def_label(check_hlds__modes__modecheck_conj_list_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 1);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,17);
	MR_r4 = MR_ctfield(0, MR_ctfield(1, MR_tempr1, 0), 0);
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__modes__modecheck_conj_list_7_0_i31);
MR_def_label(check_hlds__modes__modecheck_conj_list_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__modes__get_all_waiting_vars_2_3_0,
		check_hlds__modes__modecheck_conj_list_7_0_i32);
MR_def_label(check_hlds__modes__modecheck_conj_list_7_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 13;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 1);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_error_4_0,
		check_hlds__modes__modecheck_conj_list_7_0_i33);
MR_def_label(check_hlds__modes__modecheck_conj_list_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_may_init_solver_vars_3_0,
		check_hlds__modes__modecheck_conj_list_7_0_i34);
MR_def_label(check_hlds__modes__modecheck_conj_list_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__modes_module28)
	MR_init_entry1(check_hlds__modes__modecheck_conj_list_2_9_0);
	MR_init_label4(check_hlds__modes__modecheck_conj_list_2_9_0,28,3,7,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modes__modecheck_conj_list_2_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(check_hlds__modes__modecheck_conj_list_2_9_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_conj_list_2_9_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_decr_sp_and_return(4);
MR_def_label(check_hlds__modes__modecheck_conj_list_2_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_r6 = MR_ctfield(1, MR_tempr3, 1);
	MR_r7 = MR_ctfield(1, MR_tempr3, 0);
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_conj_list_2_9_0_i4);
	}
	MR_tempr1 = MR_ctfield(0, MR_r7, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_conj_list_2_9_0_i4);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 1);
	if ((MR_r1 != MR_tempr2)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_conj_list_2_9_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_ctfield(3, MR_tempr1, 2);
	MR_r3 = MR_r6;
	}
	MR_np_call_localret_ent(list__append_3_1,
		check_hlds__modes__modecheck_conj_list_2_9_0_i7);
MR_def_label(check_hlds__modes__modecheck_conj_list_2_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(check_hlds__modes__modecheck_conj_list_2_9_0_i28);
MR_def_label(check_hlds__modes__modecheck_conj_list_2_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r7;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_r5 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(check_hlds__modes__modecheck_conj_list_3_10_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_get_purity_1_0);
MR_decl_entry(check_hlds__delay_info__delay_info_wakeup_goals_3_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_context_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_mode_context_2_0);

MR_BEGIN_MODULE(check_hlds__modes_module29)
	MR_init_entry1(check_hlds__modes__modecheck_conj_list_3_10_0);
	MR_init_label8(check_hlds__modes__modecheck_conj_list_3_10_0,2,5,3,6,7,8,9,10)
	MR_init_label8(check_hlds__modes__modecheck_conj_list_3_10_0,11,12,15,14,16,17,18,19)
	MR_init_label8(check_hlds__modes__modecheck_conj_list_3_10_0,21,22,23,24,25,27,29,31)
	MR_init_label8(check_hlds__modes__modecheck_conj_list_3_10_0,32,33,36,38,35,39,40,45)
	MR_init_label3(check_hlds__modes__modecheck_conj_list_3_10_0,43,42,49)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modes__modecheck_conj_list_3_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_get_purity_1_0,
		check_hlds__modes__modecheck_conj_list_3_10_0_i2);
MR_def_label(check_hlds__modes__modecheck_conj_list_3_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_conj_list_3_10_0_i3);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__modes__check_for_impurity_error_8_0,
		check_hlds__modes__modecheck_conj_list_3_10_0_i5);
MR_def_label(check_hlds__modes__modecheck_conj_list_3_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = (MR_Integer) 1;
	MR_sv(5) = MR_r1;
	MR_sv(12) = MR_r2;
	MR_r1 = MR_r3;
	MR_GOTO_LAB(check_hlds__modes__modecheck_conj_list_3_10_0_i6);
MR_def_label(check_hlds__modes__modecheck_conj_list_3_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_sv(4);
	MR_sv(4) = (MR_Integer) 0;
	MR_r1 = MR_sv(5);
	MR_sv(5) = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(check_hlds__modes__modecheck_conj_list_3_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__modes__modecheck_conj_list_3_10_0_i7);
MR_def_label(check_hlds__modes__modecheck_conj_list_3_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_delay_info_2_0,
		check_hlds__modes__modecheck_conj_list_3_10_0_i8);
MR_def_label(check_hlds__modes__modecheck_conj_list_3_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_get_nonlocals_1_0,
		check_hlds__modes__modecheck_conj_list_3_10_0_i9);
MR_def_label(check_hlds__modes__modecheck_conj_list_3_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_remove_live_vars_3_0,
		check_hlds__modes__modecheck_conj_list_3_10_0_i10);
MR_def_label(check_hlds__modes__modecheck_conj_list_3_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__modes__modecheck_goal_6_0,
		check_hlds__modes__modecheck_conj_list_3_10_0_i11);
MR_def_label(check_hlds__modes__modecheck_conj_list_3_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(11) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_errors_2_0,
		check_hlds__modes__modecheck_conj_list_3_10_0_i12);
MR_def_label(check_hlds__modes__modecheck_conj_list_3_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_conj_list_3_10_0_i14);
	}
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_delay_info_2_0,
		check_hlds__modes__modecheck_conj_list_3_10_0_i15);
MR_def_label(check_hlds__modes__modecheck_conj_list_3_10_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_sv(12);
	MR_sv(8) = MR_sv(11);
	MR_np_call_localret_ent(check_hlds__delay_info__delay_info_wakeup_goals_3_0,
		check_hlds__modes__modecheck_conj_list_3_10_0_i24);
MR_def_label(check_hlds__modes__modecheck_conj_list_3_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r2 = MR_sv(11);
	MR_sv(11) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_errors_3_0,
		check_hlds__modes__modecheck_conj_list_3_10_0_i16);
MR_def_label(check_hlds__modes__modecheck_conj_list_3_10_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_instmap_3_0,
		check_hlds__modes__modecheck_conj_list_3_10_0_i17);
MR_def_label(check_hlds__modes__modecheck_conj_list_3_10_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_add_live_vars_3_0,
		check_hlds__modes__modecheck_conj_list_3_10_0_i18);
MR_def_label(check_hlds__modes__modecheck_conj_list_3_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__delay_info__delay_info_delay_goal_4_0,
		check_hlds__modes__modecheck_conj_list_3_10_0_i19);
MR_def_label(check_hlds__modes__modecheck_conj_list_3_10_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_conj_list_3_10_0_i21);
	}
	MR_sv(4) = MR_sv(12);
	MR_np_call_localret_ent(check_hlds__delay_info__delay_info_wakeup_goals_3_0,
		check_hlds__modes__modecheck_conj_list_3_10_0_i24);
MR_def_label(check_hlds__modes__modecheck_conj_list_3_10_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tempr4 = MR_sv(11);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr4, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr4;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_sv(6) = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 13;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(3, MR_tempr3, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = MR_sv(8);
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_context_2_0,
		check_hlds__modes__modecheck_conj_list_3_10_0_i22);
MR_def_label(check_hlds__modes__modecheck_conj_list_3_10_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_mode_context_2_0,
		check_hlds__modes__modecheck_conj_list_3_10_0_i23);
MR_def_label(check_hlds__modes__modecheck_conj_list_3_10_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(4) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(12);
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(check_hlds__delay_info__delay_info_wakeup_goals_3_0,
		check_hlds__modes__modecheck_conj_list_3_10_0_i24);
MR_def_label(check_hlds__modes__modecheck_conj_list_3_10_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r3 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(list__append_3_1,
		check_hlds__modes__modecheck_conj_list_3_10_0_i25);
MR_def_label(check_hlds__modes__modecheck_conj_list_3_10_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_conj_list_3_10_0_i27);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_delay_info_3_0,
		check_hlds__modes__modecheck_conj_list_3_10_0_i32);
MR_def_label(check_hlds__modes__modecheck_conj_list_3_10_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_sv(2), 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_conj_list_3_10_0_i29);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Integer) 2;
	MR_r2 = (MR_Word) MR_string_const("goal", 4);
	MR_r3 = MR_sv(8);
	}
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_6_0,
		check_hlds__modes__modecheck_conj_list_3_10_0_i31);
MR_def_label(check_hlds__modes__modecheck_conj_list_3_10_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Integer) 2;
	MR_r2 = (MR_Word) MR_string_const("goals", 5);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_6_0,
		check_hlds__modes__modecheck_conj_list_3_10_0_i31);
MR_def_label(check_hlds__modes__modecheck_conj_list_3_10_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_delay_info_3_0,
		check_hlds__modes__modecheck_conj_list_3_10_0_i32);
MR_def_label(check_hlds__modes__modecheck_conj_list_3_10_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__modes__modecheck_conj_list_3_10_0_i33);
MR_def_label(check_hlds__modes__modecheck_conj_list_3_10_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__instmap__is_unreachable_1_0,
		check_hlds__modes__modecheck_conj_list_3_10_0_i36);
MR_def_label(check_hlds__modes__modecheck_conj_list_3_10_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_conj_list_3_10_0_i35);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__modes__mode_info_remove_goals_live_vars_3_0,
		check_hlds__modes__modecheck_conj_list_3_10_0_i38);
MR_def_label(check_hlds__modes__modecheck_conj_list_3_10_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_GOTO_LAB(check_hlds__modes__modecheck_conj_list_3_10_0_i40);
MR_def_label(check_hlds__modes__modecheck_conj_list_3_10_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__modes__modecheck_conj_list_2_9_0,
		check_hlds__modes__modecheck_conj_list_3_10_0_i39);
MR_def_label(check_hlds__modes__modecheck_conj_list_3_10_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	MR_r3 = MR_r1;
	MR_r1 = MR_r2;
MR_def_label(check_hlds__modes__modecheck_conj_list_3_10_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(10),0,0)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_conj_list_3_10_0_i42);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_sv(9), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_conj_list_3_10_0_i43);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 1);
	if ((MR_sv(1) != MR_tempr2)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_conj_list_3_10_0_i43);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__modes__modecheck_conj_list_3_10_0_i45);
MR_def_label(check_hlds__modes__modecheck_conj_list_3_10_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__modes__modecheck_conj_list_3_10_0_i49);
MR_def_label(check_hlds__modes__modecheck_conj_list_3_10_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__modes__modecheck_conj_list_3_10_0_i49);
MR_def_label(check_hlds__modes__modecheck_conj_list_3_10_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__modes__modecheck_conj_list_3_10_0_i49);
MR_def_label(check_hlds__modes__modecheck_conj_list_3_10_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__modes_module30)
	MR_init_entry1(check_hlds__modes__modecheck_delayed_solver_goals_10_0);
	MR_init_label3(check_hlds__modes__modecheck_delayed_solver_goals_10_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modes__modecheck_delayed_solver_goals_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(check_hlds__modes__modecheck_delayed_goals_try_det_10_0,
		check_hlds__modes__modecheck_delayed_solver_goals_10_0_i2);
MR_def_label(check_hlds__modes__modecheck_delayed_solver_goals_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__modes__modecheck_delayed_goals_eager_10_0,
		check_hlds__modes__modecheck_delayed_solver_goals_10_0_i3);
MR_def_label(check_hlds__modes__modecheck_delayed_solver_goals_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__modes__modecheck_delayed_solver_goals_10_0_i4);
MR_def_label(check_hlds__modes__modecheck_delayed_solver_goals_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_errors__type_ctor_info_delayed_goal_0;
MR_decl_entry(hlds__instmap__to_assoc_list_2_0);
MR_decl_entry(list__foldl2_6_3);
MR_decl_entry(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(set__member_2_1);
MR_decl_entry(check_hlds__type_util__type_is_solver_type_2_0);

MR_BEGIN_MODULE(check_hlds__modes_module31)
	MR_init_entry1(check_hlds__modes__modecheck_delayed_goals_try_det_10_0);
	MR_init_label8(check_hlds__modes__modecheck_delayed_goals_try_det_10_0,52,5,6,7,8,9,10,12)
	MR_init_label8(check_hlds__modes__modecheck_delayed_goals_try_det_10_0,11,13,14,15,16,21,23,24)
	MR_init_label8(check_hlds__modes__modecheck_delayed_goals_try_det_10_0,20,27,28,29,30,31,32,33)
	MR_init_label5(check_hlds__modes__modecheck_delayed_goals_try_det_10_0,34,35,36,37,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modes__modecheck_delayed_goals_try_det_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_delayed_goals_try_det_10_0_i52);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(check_hlds__modes__modecheck_delayed_goals_try_det_10_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_errors, delayed_goal);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,10,2);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(fn__list__map_2_0,
		check_hlds__modes__modecheck_delayed_goals_try_det_10_0_i5);
MR_def_label(check_hlds__modes__modecheck_delayed_goals_try_det_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__modes__modecheck_delayed_goals_try_det_10_0_i6);
MR_def_label(check_hlds__modes__modecheck_delayed_goals_try_det_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__instmap__to_assoc_list_2_0,
		check_hlds__modes__modecheck_delayed_goals_try_det_10_0_i7);
MR_def_label(check_hlds__modes__modecheck_delayed_goals_try_det_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,2,17);
	MR_np_call_localret_ent(fn__check_hlds__modes__non_free_vars_in_assoc_list_1_0,
		check_hlds__modes__modecheck_delayed_goals_try_det_10_0_i8);
MR_def_label(check_hlds__modes__modecheck_delayed_goals_try_det_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0,
		check_hlds__modes__modecheck_delayed_goals_try_det_10_0_i9);
MR_def_label(check_hlds__modes__modecheck_delayed_goals_try_det_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(fn__set__init_0_0,
		check_hlds__modes__modecheck_delayed_goals_try_det_10_0_i10);
MR_def_label(check_hlds__modes__modecheck_delayed_goals_try_det_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(11,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__modes__candidate_init_vars_3_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(8);
	MR_sv(11) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(12) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(13));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(check_hlds__modes__modecheck_delayed_goals_try_det_10_0_i11);
	MR_r7 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,24);
	MR_r3 = MR_r2;
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__foldl2_6_3,
		check_hlds__modes__modecheck_delayed_goals_try_det_10_0_i12);
MR_def_label(check_hlds__modes__modecheck_delayed_goals_try_det_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_restore_maxfr(MR_sv(13));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(11);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(12);
	MR_GOTO_LAB(check_hlds__modes__modecheck_delayed_goals_try_det_10_0_i13);
MR_def_label(check_hlds__modes__modecheck_delayed_goals_try_det_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(11);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(12);
	MR_GOTO_LAB(check_hlds__modes__modecheck_delayed_goals_try_det_10_0_i4);
MR_def_label(check_hlds__modes__modecheck_delayed_goals_try_det_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__modes__modecheck_delayed_goals_try_det_10_0_i14);
MR_def_label(check_hlds__modes__modecheck_delayed_goals_try_det_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		check_hlds__modes__modecheck_delayed_goals_try_det_10_0_i15);
MR_def_label(check_hlds__modes__modecheck_delayed_goals_try_det_10_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_var_types_2_0,
		check_hlds__modes__modecheck_delayed_goals_try_det_10_0_i16);
MR_def_label(check_hlds__modes__modecheck_delayed_goals_try_det_10_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(15) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(16));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(check_hlds__modes__modecheck_delayed_goals_try_det_10_0_i20);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(set__member_2_1,
		check_hlds__modes__modecheck_delayed_goals_try_det_10_0_i21);
MR_def_label(check_hlds__modes__modecheck_delayed_goals_try_det_10_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__modes__modecheck_delayed_goals_try_det_10_0_i23);
MR_def_label(check_hlds__modes__modecheck_delayed_goals_try_det_10_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__type_util__type_is_solver_type_2_0,
		check_hlds__modes__modecheck_delayed_goals_try_det_10_0_i24);
MR_def_label(check_hlds__modes__modecheck_delayed_goals_try_det_10_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(16));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(14);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(15);
	MR_GOTO_LAB(check_hlds__modes__modecheck_delayed_goals_try_det_10_0_i4);
MR_def_label(check_hlds__modes__modecheck_delayed_goals_try_det_10_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(14);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(15);
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		check_hlds__modes__modecheck_delayed_goals_try_det_10_0_i27);
MR_def_label(check_hlds__modes__modecheck_delayed_goals_try_det_10_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__modes__construct_initialisation_calls_4_0,
		check_hlds__modes__modecheck_delayed_goals_try_det_10_0_i28);
MR_def_label(check_hlds__modes__modecheck_delayed_goals_try_det_10_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__modes__modecheck_delayed_goals_try_det_10_0_i29);
MR_def_label(check_hlds__modes__modecheck_delayed_goals_try_det_10_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_delay_info_2_0,
		check_hlds__modes__modecheck_delayed_goals_try_det_10_0_i30);
MR_def_label(check_hlds__modes__modecheck_delayed_goals_try_det_10_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(check_hlds__delay_info__delay_info_enter_conj_2_0,
		check_hlds__modes__modecheck_delayed_goals_try_det_10_0_i31);
MR_def_label(check_hlds__modes__modecheck_delayed_goals_try_det_10_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_delay_info_3_0,
		check_hlds__modes__modecheck_delayed_goals_try_det_10_0_i32);
MR_def_label(check_hlds__modes__modecheck_delayed_goals_try_det_10_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__modes__mode_info_add_goals_live_vars_4_0,
		check_hlds__modes__modecheck_delayed_goals_try_det_10_0_i33);
MR_def_label(check_hlds__modes__modecheck_delayed_goals_try_det_10_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__modes__modecheck_conj_list_2_9_0,
		check_hlds__modes__modecheck_delayed_goals_try_det_10_0_i34);
MR_def_label(check_hlds__modes__modecheck_delayed_goals_try_det_10_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_delay_info_2_0,
		check_hlds__modes__modecheck_delayed_goals_try_det_10_0_i35);
MR_def_label(check_hlds__modes__modecheck_delayed_goals_try_det_10_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(check_hlds__delay_info__delay_info_leave_conj_3_0,
		check_hlds__modes__modecheck_delayed_goals_try_det_10_0_i36);
MR_def_label(check_hlds__modes__modecheck_delayed_goals_try_det_10_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_delay_info_3_0,
		check_hlds__modes__modecheck_delayed_goals_try_det_10_0_i37);
MR_def_label(check_hlds__modes__modecheck_delayed_goals_try_det_10_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_decr_sp_and_return(17);
MR_def_label(check_hlds__modes__modecheck_delayed_goals_try_det_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_decr_sp_and_return(17);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__compiler_util__expect_3_0);
MR_decl_entry(fn__list__length_1_0);

MR_BEGIN_MODULE(check_hlds__modes_module32)
	MR_init_entry1(check_hlds__modes__modecheck_delayed_goals_eager_10_0);
	MR_init_label8(check_hlds__modes__modecheck_delayed_goals_eager_10_0,33,4,5,6,7,8,9,10)
	MR_init_label8(check_hlds__modes__modecheck_delayed_goals_eager_10_0,11,12,13,14,15,17,18,19)
	MR_init_label2(check_hlds__modes__modecheck_delayed_goals_eager_10_0,20,16)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modes__modecheck_delayed_goals_eager_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_delayed_goals_eager_10_0_i33);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(check_hlds__modes__modecheck_delayed_goals_eager_10_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_errors, delayed_goal);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,10,3);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(fn__list__map_2_0,
		check_hlds__modes__modecheck_delayed_goals_eager_10_0_i4);
MR_def_label(check_hlds__modes__modecheck_delayed_goals_eager_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_delay_info_2_0,
		check_hlds__modes__modecheck_delayed_goals_eager_10_0_i5);
MR_def_label(check_hlds__modes__modecheck_delayed_goals_eager_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(check_hlds__delay_info__delay_info_enter_conj_2_0,
		check_hlds__modes__modecheck_delayed_goals_eager_10_0_i6);
MR_def_label(check_hlds__modes__modecheck_delayed_goals_eager_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_delay_info_3_0,
		check_hlds__modes__modecheck_delayed_goals_eager_10_0_i7);
MR_def_label(check_hlds__modes__modecheck_delayed_goals_eager_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_may_init_solver_vars_2_0,
		check_hlds__modes__modecheck_delayed_goals_eager_10_0_i8);
MR_def_label(check_hlds__modes__modecheck_delayed_goals_eager_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__modes__IntroducedFrom__pred__modecheck_delayed_goals_eager__2589__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("modes.m", 7);
	MR_r3 = (MR_Word) MR_string_const("modecheck_delayed_goals_eager: may init solver vars", 51);
	}
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		check_hlds__modes__modecheck_delayed_goals_eager_10_0_i9);
MR_def_label(check_hlds__modes__modecheck_delayed_goals_eager_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_may_init_solver_vars_3_0,
		check_hlds__modes__modecheck_delayed_goals_eager_10_0_i10);
MR_def_label(check_hlds__modes__modecheck_delayed_goals_eager_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__modes__modecheck_conj_list_2_9_0,
		check_hlds__modes__modecheck_delayed_goals_eager_10_0_i11);
MR_def_label(check_hlds__modes__modecheck_delayed_goals_eager_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_may_init_solver_vars_3_0,
		check_hlds__modes__modecheck_delayed_goals_eager_10_0_i12);
MR_def_label(check_hlds__modes__modecheck_delayed_goals_eager_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_delay_info_2_0,
		check_hlds__modes__modecheck_delayed_goals_eager_10_0_i13);
MR_def_label(check_hlds__modes__modecheck_delayed_goals_eager_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(check_hlds__delay_info__delay_info_leave_conj_3_0,
		check_hlds__modes__modecheck_delayed_goals_eager_10_0_i14);
MR_def_label(check_hlds__modes__modecheck_delayed_goals_eager_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_delay_info_3_0,
		check_hlds__modes__modecheck_delayed_goals_eager_10_0_i15);
MR_def_label(check_hlds__modes__modecheck_delayed_goals_eager_10_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_errors, delayed_goal);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__list__length_1_0,
		check_hlds__modes__modecheck_delayed_goals_eager_10_0_i17);
MR_def_label(check_hlds__modes__modecheck_delayed_goals_eager_10_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_errors, delayed_goal);
	MR_np_call_localret_ent(fn__list__length_1_0,
		check_hlds__modes__modecheck_delayed_goals_eager_10_0_i18);
MR_def_label(check_hlds__modes__modecheck_delayed_goals_eager_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(2) >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_delayed_goals_eager_10_0_i16);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_np_localcall_lab(check_hlds__modes__modecheck_delayed_goals_eager_10_0,
		check_hlds__modes__modecheck_delayed_goals_eager_10_0_i19);
MR_def_label(check_hlds__modes__modecheck_delayed_goals_eager_10_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__modes__modecheck_delayed_goals_eager_10_0_i20);
MR_def_label(check_hlds__modes__modecheck_delayed_goals_eager_10_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_decr_sp_and_return(7);
MR_def_label(check_hlds__modes__modecheck_delayed_goals_eager_10_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_clauses_info_2_0);
MR_decl_entry(hlds__hlds_clauses__clauses_info_get_headvar_list_2_0);
MR_decl_entry(list__filter_4_0);

MR_BEGIN_MODULE(check_hlds__modes_module33)
	MR_init_entry1(check_hlds__modes__check_for_impurity_error_8_0);
	MR_init_label8(check_hlds__modes__check_for_impurity_error_8_0,2,3,4,5,6,7,8,9)
	MR_init_label8(check_hlds__modes__check_for_impurity_error_8_0,10,11,12,13,14,15,16,17)
	MR_init_label6(check_hlds__modes__check_for_impurity_error_8_0,19,20,21,22,23,24)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modes__check_for_impurity_error_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_delay_info_2_0,
		check_hlds__modes__check_for_impurity_error_8_0_i2);
MR_def_label(check_hlds__modes__check_for_impurity_error_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(check_hlds__delay_info__delay_info_leave_conj_3_0,
		check_hlds__modes__check_for_impurity_error_8_0_i3);
MR_def_label(check_hlds__modes__check_for_impurity_error_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_delay_info_3_0,
		check_hlds__modes__check_for_impurity_error_8_0_i4);
MR_def_label(check_hlds__modes__check_for_impurity_error_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		check_hlds__modes__check_for_impurity_error_8_0_i5);
MR_def_label(check_hlds__modes__check_for_impurity_error_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_pred_id_2_0,
		check_hlds__modes__check_for_impurity_error_8_0_i6);
MR_def_label(check_hlds__modes__check_for_impurity_error_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		check_hlds__modes__check_for_impurity_error_8_0_i7);
MR_def_label(check_hlds__modes__check_for_impurity_error_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_clauses_info_2_0,
		check_hlds__modes__check_for_impurity_error_8_0_i8);
MR_def_label(check_hlds__modes__check_for_impurity_error_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_get_headvar_list_2_0,
		check_hlds__modes__check_for_impurity_error_8_0_i9);
MR_def_label(check_hlds__modes__check_for_impurity_error_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__modes__is_headvar_unification_goal_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_errors, delayed_goal);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(list__filter_4_0,
		check_hlds__modes__check_for_impurity_error_8_0_i10);
MR_def_label(check_hlds__modes__check_for_impurity_error_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(2) = (MR_Integer) 0;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__modes__modecheck_delayed_goals_try_det_10_0,
		check_hlds__modes__check_for_impurity_error_8_0_i11);
MR_def_label(check_hlds__modes__check_for_impurity_error_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(check_hlds__modes__modecheck_delayed_goals_eager_10_0,
		check_hlds__modes__check_for_impurity_error_8_0_i12);
MR_def_label(check_hlds__modes__check_for_impurity_error_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(6) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__modes__check_for_impurity_error_8_0_i13);
MR_def_label(check_hlds__modes__check_for_impurity_error_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_delay_info_2_0,
		check_hlds__modes__check_for_impurity_error_8_0_i14);
MR_def_label(check_hlds__modes__check_for_impurity_error_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(check_hlds__delay_info__delay_info_enter_conj_2_0,
		check_hlds__modes__check_for_impurity_error_8_0_i15);
MR_def_label(check_hlds__modes__check_for_impurity_error_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__modes__redelay_goals_3_0,
		check_hlds__modes__check_for_impurity_error_8_0_i16);
MR_def_label(check_hlds__modes__check_for_impurity_error_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_delay_info_3_0,
		check_hlds__modes__check_for_impurity_error_8_0_i17);
MR_def_label(check_hlds__modes__check_for_impurity_error_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(check_hlds__modes__check_for_impurity_error_8_0_i19);
	}
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_decr_sp_and_return(7);
MR_def_label(check_hlds__modes__check_for_impurity_error_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,2,17);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__set__init_0_0,
		check_hlds__modes__check_for_impurity_error_8_0_i20);
MR_def_label(check_hlds__modes__check_for_impurity_error_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 1);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,17);
	MR_r4 = MR_ctfield(0, MR_ctfield(1, MR_tempr1, 0), 0);
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__modes__check_for_impurity_error_8_0_i21);
MR_def_label(check_hlds__modes__check_for_impurity_error_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__modes__get_all_waiting_vars_2_3_0,
		check_hlds__modes__check_for_impurity_error_8_0_i22);
MR_def_label(check_hlds__modes__check_for_impurity_error_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_sv(3) = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 13;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(4);
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_context_2_0,
		check_hlds__modes__check_for_impurity_error_8_0_i23);
MR_def_label(check_hlds__modes__check_for_impurity_error_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_mode_context_2_0,
		check_hlds__modes__check_for_impurity_error_8_0_i24);
MR_def_label(check_hlds__modes__check_for_impurity_error_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(6);
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__modes_module34)
	MR_init_entry1(check_hlds__modes__modecheck_disj_list_7_0);
	MR_init_label6(check_hlds__modes__modecheck_disj_list_7_0,4,5,6,7,8,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modes__modecheck_disj_list_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_disj_list_7_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_ctfield(1, MR_r1, 0);
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__modes__modecheck_disj_list_7_0_i4);
MR_def_label(check_hlds__modes__modecheck_disj_list_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(check_hlds__modes__modecheck_goal_6_0,
		check_hlds__modes__modecheck_disj_list_7_0_i5);
MR_def_label(check_hlds__modes__modecheck_disj_list_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__modes__modecheck_disj_list_7_0_i6);
MR_def_label(check_hlds__modes__modecheck_disj_list_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_instmap_3_0,
		check_hlds__modes__modecheck_disj_list_7_0_i7);
MR_def_label(check_hlds__modes__modecheck_disj_list_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_localcall_lab(check_hlds__modes__modecheck_disj_list_7_0,
		check_hlds__modes__modecheck_disj_list_7_0_i8);
MR_def_label(check_hlds__modes__modecheck_disj_list_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(5);
	}
MR_def_label(check_hlds__modes__modecheck_disj_list_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__mode_util__fixup_switch_var_5_0);

MR_BEGIN_MODULE(check_hlds__modes_module35)
	MR_init_entry1(check_hlds__modes__modecheck_case_list_8_0);
	MR_init_label8(check_hlds__modes__modecheck_case_list_8_0,4,5,6,9,11,12,7,13)
	MR_init_label5(check_hlds__modes__modecheck_case_list_8_0,14,15,16,17,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modes__modecheck_case_list_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_case_list_8_0_i3);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__modes__modecheck_case_list_8_0_i4);
MR_def_label(check_hlds__modes__modecheck_case_list_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__modes__modecheck_functor_test_4_0,
		check_hlds__modes__modecheck_case_list_8_0_i5);
MR_def_label(check_hlds__modes__modecheck_case_list_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__modes__modecheck_case_list_8_0_i6);
MR_def_label(check_hlds__modes__modecheck_case_list_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(hlds__instmap__is_reachable_1_0,
		check_hlds__modes__modecheck_case_list_8_0_i9);
MR_def_label(check_hlds__modes__modecheck_case_list_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_case_list_8_0_i7);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__modes__modecheck_goal_6_0,
		check_hlds__modes__modecheck_case_list_8_0_i11);
MR_def_label(check_hlds__modes__modecheck_case_list_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__modes__modecheck_case_list_8_0_i12);
MR_def_label(check_hlds__modes__modecheck_case_list_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_GOTO_LAB(check_hlds__modes__modecheck_case_list_8_0_i14);
MR_def_label(check_hlds__modes__modecheck_case_list_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__true_goal_0_0,
		check_hlds__modes__modecheck_case_list_8_0_i13);
MR_def_label(check_hlds__modes__modecheck_case_list_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_sv(6) = MR_sv(7);
MR_def_label(check_hlds__modes__modecheck_case_list_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(check_hlds__mode_util__fixup_switch_var_5_0,
		check_hlds__modes__modecheck_case_list_8_0_i15);
MR_def_label(check_hlds__modes__modecheck_case_list_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_instmap_3_0,
		check_hlds__modes__modecheck_case_list_8_0_i16);
MR_def_label(check_hlds__modes__modecheck_case_list_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_np_localcall_lab(check_hlds__modes__modecheck_case_list_8_0,
		check_hlds__modes__modecheck_case_list_8_0_i17);
MR_def_label(check_hlds__modes__modecheck_case_list_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(8);
	}
MR_def_label(check_hlds__modes__modecheck_case_list_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__modes_module36)
	MR_init_entry1(check_hlds__modes__maybe_clobber_insts_3_0);
	MR_init_label4(check_hlds__modes__maybe_clobber_insts_3_0,3,10,11,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modes__maybe_clobber_insts_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__maybe_clobber_insts_3_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__maybe_clobber_insts_3_0_i8);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(check_hlds__modes__maybe_clobber_insts_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__maybe_clobber_insts_3_0_i8);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r2, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(check_hlds__modes__maybe_clobber_insts_3_0_i10);
	}
	MR_r2 = MR_ctfield(1, MR_r2, 1);
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	}
	MR_np_localcall_lab(check_hlds__modes__maybe_clobber_insts_3_0,
		check_hlds__modes__maybe_clobber_insts_3_0_i11);
MR_def_label(check_hlds__modes__maybe_clobber_insts_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(1, MR_r2, 1);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(3,7,1);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_np_localcall_lab(check_hlds__modes__maybe_clobber_insts_3_0,
		check_hlds__modes__maybe_clobber_insts_3_0_i11);
MR_def_label(check_hlds__modes__maybe_clobber_insts_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(check_hlds__modes__maybe_clobber_insts_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("modes.m", 7);
	MR_r2 = (MR_Word) MR_string_const("maybe_clobber_insts: length mismatch", 36);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__inst_match__inst_matches_final_4_0);
MR_decl_entry(check_hlds__inst_match__inst_is_any_2_0);
MR_decl_entry(set__init_1_0);

MR_BEGIN_MODULE(check_hlds__modes_module37)
	MR_init_entry1(check_hlds__modes__check_final_insts_12_0);
	MR_init_label8(check_hlds__modes__check_final_insts_12_0,101,2,10,11,14,12,17,19)
	MR_init_label8(check_hlds__modes__check_final_insts_12_0,21,23,24,25,26,16,27,31)
	MR_init_label6(check_hlds__modes__check_final_insts_12_0,30,35,34,39,40,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modes__check_final_insts_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
MR_def_label(check_hlds__modes__check_final_insts_12_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__check_final_insts_12_0_i2);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__check_final_insts_12_0_i2);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__check_final_insts_12_0_i2);
	}
	MR_r1 = MR_r7;
	MR_r2 = MR_r8;
	MR_r3 = MR_r9;
	MR_decr_sp_and_return(15);
MR_def_label(check_hlds__modes__check_final_insts_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__check_final_insts_12_0_i6);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__check_final_insts_12_0_i6);
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__check_final_insts_12_0_i6);
	}
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_ctfield(1, MR_r1, 0);
	MR_sv(5) = MR_ctfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r2;
	MR_sv(6) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(7) = MR_ctfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_r3;
	MR_sv(8) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(9) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(11) = MR_r7;
	MR_sv(12) = MR_r8;
	MR_tempr3 = MR_r9;
	MR_sv(13) = MR_tempr3;
	MR_r1 = MR_tempr3;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_var_types_2_0,
		check_hlds__modes__check_final_insts_12_0_i10);
MR_def_label(check_hlds__modes__check_final_insts_12_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = (MR_Word) MR_TAG_COMMON(0,2,17);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(14);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__modes__check_final_insts_12_0_i11);
MR_def_label(check_hlds__modes__check_final_insts_12_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_matches_final_4_0,
		check_hlds__modes__check_final_insts_12_0_i14);
MR_def_label(check_hlds__modes__check_final_insts_12_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__check_final_insts_12_0_i12);
	}
	MR_r4 = MR_sv(1);
	MR_r6 = MR_sv(3);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(9);
	MR_r7 = MR_sv(11);
	MR_r8 = MR_sv(12);
	MR_r9 = MR_sv(13);
	MR_r5 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_succip_word = MR_sv(15);
	MR_GOTO_LAB(check_hlds__modes__check_final_insts_12_0_i101);
MR_def_label(check_hlds__modes__check_final_insts_12_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_free_2_0,
		check_hlds__modes__check_final_insts_12_0_i17);
MR_def_label(check_hlds__modes__check_final_insts_12_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__check_final_insts_12_0_i16);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_any_2_0,
		check_hlds__modes__check_final_insts_12_0_i19);
MR_def_label(check_hlds__modes__check_final_insts_12_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__check_final_insts_12_0_i16);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(check_hlds__type_util__type_is_solver_type_2_0,
		check_hlds__modes__check_final_insts_12_0_i21);
MR_def_label(check_hlds__modes__check_final_insts_12_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__check_final_insts_12_0_i16);
	}
	MR_sv(6) = MR_ctfield(0, MR_sv(11), 1);
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__modes__check_final_insts_12_0_i23);
MR_def_label(check_hlds__modes__check_final_insts_12_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(8);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = MR_sv(13);
	MR_np_call_localret_ent(check_hlds__modes__construct_initialisation_call_8_0,
		check_hlds__modes__check_final_insts_12_0_i24);
MR_def_label(check_hlds__modes__check_final_insts_12_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_conj_list_2_0,
		check_hlds__modes__check_final_insts_12_0_i25);
MR_def_label(check_hlds__modes__check_final_insts_12_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__conj_list_to_goal_3_0,
		check_hlds__modes__check_final_insts_12_0_i26);
MR_def_label(check_hlds__modes__check_final_insts_12_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(9);
	MR_r8 = (MR_Integer) 1;
	MR_r9 = MR_sv(4);
	MR_r5 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_succip_word = MR_sv(15);
	MR_GOTO_LAB(check_hlds__modes__check_final_insts_12_0_i101);
MR_def_label(check_hlds__modes__check_final_insts_12_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(check_hlds__modes__check_final_insts_12_0_i27);
	}
	MR_r4 = MR_sv(1);
	MR_r6 = MR_sv(3);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(9);
	MR_r7 = MR_sv(11);
	MR_r8 = (MR_Integer) 1;
	MR_r9 = MR_sv(13);
	MR_r5 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_succip_word = MR_sv(15);
	MR_GOTO_LAB(check_hlds__modes__check_final_insts_12_0_i101);
MR_def_label(check_hlds__modes__check_final_insts_12_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_matches_initial_4_0,
		check_hlds__modes__check_final_insts_12_0_i31);
MR_def_label(check_hlds__modes__check_final_insts_12_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__check_final_insts_12_0_i30);
	}
	MR_sv(10) = (MR_Integer) 0;
	MR_r1 = MR_sv(14);
	MR_np_call_localret_ent(set__init_1_0,
		check_hlds__modes__check_final_insts_12_0_i39);
MR_def_label(check_hlds__modes__check_final_insts_12_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_matches_initial_4_0,
		check_hlds__modes__check_final_insts_12_0_i35);
MR_def_label(check_hlds__modes__check_final_insts_12_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__check_final_insts_12_0_i34);
	}
	MR_sv(10) = (MR_Integer) 1;
	MR_r1 = MR_sv(14);
	MR_np_call_localret_ent(set__init_1_0,
		check_hlds__modes__check_final_insts_12_0_i39);
MR_def_label(check_hlds__modes__check_final_insts_12_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = (MR_Integer) 2;
	MR_r1 = MR_sv(14);
	MR_np_call_localret_ent(set__init_1_0,
		check_hlds__modes__check_final_insts_12_0_i39);
MR_def_label(check_hlds__modes__check_final_insts_12_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 6);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 14;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(8);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 5) = MR_sv(10);
	MR_r3 = MR_sv(13);
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_error_4_0,
		check_hlds__modes__check_final_insts_12_0_i40);
MR_def_label(check_hlds__modes__check_final_insts_12_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_r6 = MR_sv(3);
	MR_r9 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(9);
	MR_r7 = MR_sv(11);
	MR_r8 = (MR_Integer) 1;
	MR_r5 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_succip_word = MR_sv(15);
	MR_GOTO_LAB(check_hlds__modes__check_final_insts_12_0_i101);
MR_def_label(check_hlds__modes__check_final_insts_12_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("modes.m", 7);
	MR_r2 = (MR_Word) MR_string_const("check_final_insts: length mismatch", 34);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__instmap__lookup_vars_3_0);
MR_decl_entry(map__apply_to_list_3_0);
MR_decl_entry(check_hlds__mode_util__normalise_insts_4_0);
MR_decl_entry(hlds__hlds_module__module_info_proc_info_4_0);
MR_decl_entry(hlds__hlds_pred__proc_info_arglives_3_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_changed_flag_2_0);
MR_decl_entry(bool__or_list_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_set_changed_flag_3_0);

MR_BEGIN_MODULE(check_hlds__modes_module38)
	MR_init_entry1(check_hlds__modes__modecheck_final_insts_8_0);
	MR_init_label8(check_hlds__modes__modecheck_final_insts_8_0,2,3,6,5,7,4,8,9)
	MR_init_label8(check_hlds__modes__modecheck_final_insts_8_0,10,13,12,14,15,16,17,18)
	MR_init_label5(check_hlds__modes__modecheck_final_insts_8_0,19,20,21,22,23)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modes__modecheck_final_insts_8_0)
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
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		check_hlds__modes__modecheck_final_insts_8_0_i2);
MR_def_label(check_hlds__modes__modecheck_final_insts_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_errors_2_0,
		check_hlds__modes__modecheck_final_insts_8_0_i3);
MR_def_label(check_hlds__modes__modecheck_final_insts_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_final_insts_8_0_i5);
	}
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__modes__modecheck_final_insts_8_0_i6);
MR_def_label(check_hlds__modes__modecheck_final_insts_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = (MR_Integer) 0;
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_GOTO_LAB(check_hlds__modes__modecheck_final_insts_8_0_i4);
MR_def_label(check_hlds__modes__modecheck_final_insts_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__instmap__init_unreachable_1_0,
		check_hlds__modes__modecheck_final_insts_8_0_i7);
MR_def_label(check_hlds__modes__modecheck_final_insts_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = (MR_Integer) 1;
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(9);
MR_def_label(check_hlds__modes__modecheck_final_insts_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_var_types_2_0,
		check_hlds__modes__modecheck_final_insts_8_0_i8);
MR_def_label(check_hlds__modes__modecheck_final_insts_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__instmap__lookup_vars_3_0,
		check_hlds__modes__modecheck_final_insts_8_0_i9);
MR_def_label(check_hlds__modes__modecheck_final_insts_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,17);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(map__apply_to_list_3_0,
		check_hlds__modes__modecheck_final_insts_8_0_i10);
MR_def_label(check_hlds__modes__modecheck_final_insts_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_final_insts_8_0_i12);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(2);
	MR_r5 = (MR_Integer) 1;
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(4);
	MR_r8 = (MR_Integer) 0;
	MR_r9 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__modes__check_final_insts_12_0,
		check_hlds__modes__modecheck_final_insts_8_0_i13);
MR_def_label(check_hlds__modes__modecheck_final_insts_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(10);
MR_def_label(check_hlds__modes__modecheck_final_insts_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__mode_util__normalise_insts_4_0,
		check_hlds__modes__modecheck_final_insts_8_0_i14);
MR_def_label(check_hlds__modes__modecheck_final_insts_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_pred_id_2_0,
		check_hlds__modes__modecheck_final_insts_8_0_i15);
MR_def_label(check_hlds__modes__modecheck_final_insts_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_proc_id_2_0,
		check_hlds__modes__modecheck_final_insts_8_0_i16);
MR_def_label(check_hlds__modes__modecheck_final_insts_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_proc_info_4_0,
		check_hlds__modes__modecheck_final_insts_8_0_i17);
MR_def_label(check_hlds__modes__modecheck_final_insts_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_arglives_3_0,
		check_hlds__modes__modecheck_final_insts_8_0_i18);
MR_def_label(check_hlds__modes__modecheck_final_insts_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__modes__maybe_clobber_insts_3_0,
		check_hlds__modes__modecheck_final_insts_8_0_i19);
MR_def_label(check_hlds__modes__modecheck_final_insts_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r3;
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_r5 = (MR_Integer) 1;
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(4);
	MR_r8 = (MR_Integer) 0;
	MR_r9 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__modes__check_final_insts_12_0,
		check_hlds__modes__modecheck_final_insts_8_0_i20);
MR_def_label(check_hlds__modes__modecheck_final_insts_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_changed_flag_2_0,
		check_hlds__modes__modecheck_final_insts_8_0_i21);
MR_def_label(check_hlds__modes__modecheck_final_insts_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(6);
	MR_tfield(1, MR_r1, 1) = MR_tempr2;
	}
	MR_np_call_localret_ent(bool__or_list_2_0,
		check_hlds__modes__modecheck_final_insts_8_0_i22);
MR_def_label(check_hlds__modes__modecheck_final_insts_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_changed_flag_3_0,
		check_hlds__modes__modecheck_final_insts_8_0_i23);
MR_def_label(check_hlds__modes__modecheck_final_insts_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_get_can_process_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_headvars_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(hlds__hlds_clauses__clauses_info_clauses_only_2_0);
MR_decl_entry(check_hlds__mode_util__mode_list_get_initial_insts_3_0);
MR_decl_entry(assoc_list__from_corresponding_lists_3_0);
MR_decl_entry(hlds__instmap__from_assoc_list_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_init_9_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_markers_2_0);
MR_decl_entry(hlds__hlds_pred__check_marker_2_0);
MR_decl_entry(check_hlds__mode_util__mode_list_get_final_insts_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_info__type_ctor_info_mode_info_0;
MR_decl_entry(list__map_foldl2_7_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_nondet_live_vars_2_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_determinism_1_0);
MR_decl_entry(parse_tree__prog_data__determinism_components_3_0);
MR_decl_entry(check_hlds__mode_info__mode_info_set_nondet_live_vars_3_0);
MR_decl_entry(check_hlds__unique_modes__make_all_nondet_live_vars_mostly_uniq_2_0);
MR_decl_entry(check_hlds__unique_modes__unique_modes_check_goal_6_0);
MR_decl_entry(fn__check_hlds__mode_errors__mode_error_info_to_spec_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0;
MR_decl_entry(check_hlds__mode_info__mode_info_get_warnings_2_0);
MR_decl_entry(fn__check_hlds__mode_errors__mode_warning_info_to_spec_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_errors__type_ctor_info_mode_warning_info_0;
MR_decl_entry(parse_tree__prog_mode__inst_lists_to_mode_list_3_0);
MR_decl_entry(fn__f_104_108_100_115_95_95_104_108_100_115_95_112_114_101_100_95_95_109_111_100_101_95_101_114_114_111_114_115_32_58_61_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_need_to_requantify_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_goal_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_argmodes_3_0);
MR_decl_entry(hlds__quantification__requantify_proc_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_procedures_2_0);
MR_decl_entry(map__set_4_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_procedures_3_0);

MR_BEGIN_MODULE(check_hlds__modes_module39)
	MR_init_entry1(check_hlds__modes__maybe_modecheck_proc_11_0);
	MR_init_label8(check_hlds__modes__maybe_modecheck_proc_11_0,2,4,3,5,6,7,8,9)
	MR_init_label8(check_hlds__modes__maybe_modecheck_proc_11_0,10,11,14,13,12,15,16,17)
	MR_init_label8(check_hlds__modes__maybe_modecheck_proc_11_0,18,19,20,21,22,24,23,26)
	MR_init_label8(check_hlds__modes__maybe_modecheck_proc_11_0,27,31,34,33,38,39,40,41)
	MR_init_label8(check_hlds__modes__maybe_modecheck_proc_11_0,43,44,47,49,50,55,54,52)
	MR_init_label8(check_hlds__modes__maybe_modecheck_proc_11_0,58,59,60,62,63,64,65,68)
	MR_init_label8(check_hlds__modes__maybe_modecheck_proc_11_0,70,71,72,73,69,75,67,76)
	MR_init_label8(check_hlds__modes__maybe_modecheck_proc_11_0,51,77,78,79,80,28,29,82)
	MR_init_label8(check_hlds__modes__maybe_modecheck_proc_11_0,84,85,86,87,90,92,91,93)
	MR_init_label8(check_hlds__modes__maybe_modecheck_proc_11_0,94,95,89,96,97,98,99,100)
	MR_init_label8(check_hlds__modes__maybe_modecheck_proc_11_0,101,102,103,104,105,106,108,110)
	MR_init_label6(check_hlds__modes__maybe_modecheck_proc_11_0,111,112,113,114,115,116)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modes__maybe_modecheck_proc_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(6) = MR_tempr1;
	MR_sv(7) = MR_r6;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		check_hlds__modes__maybe_modecheck_proc_11_0_i2);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_can_process_2_0,
		check_hlds__modes__maybe_modecheck_proc_11_0_i4);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__maybe_modecheck_proc_11_0_i3);
	}
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_decr_sp_and_return(17);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		check_hlds__modes__maybe_modecheck_proc_11_0_i5);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		check_hlds__modes__maybe_modecheck_proc_11_0_i6);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_arglives_3_0,
		check_hlds__modes__maybe_modecheck_proc_11_0_i7);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		check_hlds__modes__maybe_modecheck_proc_11_0_i8);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		check_hlds__modes__maybe_modecheck_proc_11_0_i9);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_clauses_info_2_0,
		check_hlds__modes__maybe_modecheck_proc_11_0_i10);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_clauses_only_2_0,
		check_hlds__modes__maybe_modecheck_proc_11_0_i11);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__maybe_modecheck_proc_11_0_i13);
	}
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_context_2_0,
		check_hlds__modes__maybe_modecheck_proc_11_0_i14);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(9);
	MR_GOTO_LAB(check_hlds__modes__maybe_modecheck_proc_11_0_i12);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(9);
	MR_sv(13) = MR_ctfield(0, MR_ctfield(1, MR_tempr1, 0), 3);
	}
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_np_call_localret_ent(check_hlds__mode_util__mode_list_get_initial_insts_3_0,
		check_hlds__modes__maybe_modecheck_proc_11_0_i15);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_sv(15) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(16) = (MR_Word) MR_TAG_COMMON(0,2,17);
	MR_r1 = MR_sv(16);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(14);
	MR_np_call_localret_ent(assoc_list__from_corresponding_lists_3_0,
		check_hlds__modes__maybe_modecheck_proc_11_0_i16);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__instmap__from_assoc_list_2_0,
		check_hlds__modes__maybe_modecheck_proc_11_0_i17);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__modes__get_live_vars_3_0,
		check_hlds__modes__maybe_modecheck_proc_11_0_i18);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(16);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__modes__maybe_modecheck_proc_11_0_i19);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(13);
	MR_r6 = MR_sv(10);
	MR_r7 = MR_sv(3);
	MR_r8 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_init_9_0,
		check_hlds__modes__maybe_modecheck_proc_11_0_i20);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_changed_flag_3_0,
		check_hlds__modes__maybe_modecheck_proc_11_0_i21);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		check_hlds__modes__maybe_modecheck_proc_11_0_i22);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		check_hlds__modes__maybe_modecheck_proc_11_0_i24);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__maybe_modecheck_proc_11_0_i23);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(9);
	MR_sv(7) = (MR_Integer) 1;
	MR_GOTO_LAB(check_hlds__modes__maybe_modecheck_proc_11_0_i26);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(9);
	MR_sv(7) = (MR_Integer) 0;
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_util__mode_list_get_final_insts_3_0,
		check_hlds__modes__maybe_modecheck_proc_11_0_i27);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(7),0)) {
		MR_GOTO_LAB(check_hlds__modes__maybe_modecheck_proc_11_0_i29);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_r2 = (MR_Integer) 19;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		check_hlds__modes__maybe_modecheck_proc_11_0_i31);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__maybe_modecheck_proc_11_0_i28);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(11);
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,2)) {
		MR_GOTO_LAB(check_hlds__modes__maybe_modecheck_proc_11_0_i34);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 1);
	MR_r3 = MR_tempr2;
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__maybe_modecheck_proc_11_0_i28);
	}
	MR_tag_alloc_heap(MR_sv(12), 0, (MR_Integer) 1);
	MR_tfield(0, MR_sv(12), 0) = MR_tempr2;
	MR_r1 = MR_ctfield(0, MR_tempr3, 1);
	MR_GOTO_LAB(check_hlds__modes__maybe_modecheck_proc_11_0_i33);
	}
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,3)) {
		MR_GOTO_LAB(check_hlds__modes__maybe_modecheck_proc_11_0_i28);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 3);
	MR_r3 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__maybe_modecheck_proc_11_0_i28);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_sv(12) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_ctfield(3, MR_tempr3, 1);
	MR_tfield(1, MR_tempr2, 1) = MR_ctfield(3, MR_tempr3, 2);
	MR_tfield(1, MR_tempr2, 2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_sv(11), 1);
	}
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		check_hlds__modes__maybe_modecheck_proc_11_0_i38);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_var_types_2_0,
		check_hlds__modes__maybe_modecheck_proc_11_0_i39);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__modes__is_solver_var_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(6);
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(13);
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		check_hlds__modes__maybe_modecheck_proc_11_0_i40);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(fn__list__filter_2_0,
		check_hlds__modes__maybe_modecheck_proc_11_0_i41);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__maybe_modecheck_proc_11_0_i28);
	}
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__modes__maybe_modecheck_proc_11_0_i43);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(term__context_init_1_0,
		check_hlds__modes__maybe_modecheck_proc_11_0_i44);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___term__context_0_0,
		check_hlds__modes__maybe_modecheck_proc_11_0_i47);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__modes__maybe_modecheck_proc_11_0_i50);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_context_3_0,
		check_hlds__modes__maybe_modecheck_proc_11_0_i49);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(check_hlds__modes__maybe_modecheck_proc_11_0_i52);
	}
	if (MR_PTAG_TESTR(MR_sv(12),0)) {
		MR_GOTO_LAB(check_hlds__modes__maybe_modecheck_proc_11_0_i54);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,23);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,10,4);
	MR_r4 = MR_ctfield(0, MR_sv(12), 0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(fn__list__foldr_3_0,
		check_hlds__modes__maybe_modecheck_proc_11_0_i55);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(12,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__modes__modecheck_clause_disj_9_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(4);
	MR_r6 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_info, mode_info);
	MR_r4 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r7 = MR_sv(15);
	}
	MR_np_call_localret_ent(list__map_foldl2_7_0,
		check_hlds__modes__maybe_modecheck_proc_11_0_i75);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(13,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__modes__modecheck_clause_switch_10_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(4);
	MR_tempr2 = MR_sv(12);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 6);
	MR_sv(6) = MR_ctfield(1, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_info, mode_info);
	MR_r4 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r6 = MR_ctfield(1, MR_tempr2, 2);
	MR_r7 = MR_sv(15);
	}
	MR_np_call_localret_ent(list__map_foldl2_7_0,
		check_hlds__modes__maybe_modecheck_proc_11_0_i76);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(15);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_nondet_live_vars_2_0,
		check_hlds__modes__maybe_modecheck_proc_11_0_i58);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		check_hlds__modes__maybe_modecheck_proc_11_0_i59);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		check_hlds__modes__maybe_modecheck_proc_11_0_i60);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__modes__maybe_modecheck_proc_11_0_i62);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 3 == (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(check_hlds__modes__maybe_modecheck_proc_11_0_i65);
	}
	MR_r1 = MR_sv(16);
	MR_np_call_localret_ent(fn__bag__init_0_0,
		check_hlds__modes__maybe_modecheck_proc_11_0_i63);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_nondet_live_vars_3_0,
		check_hlds__modes__maybe_modecheck_proc_11_0_i64);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(12),0)) {
		MR_GOTO_LAB(check_hlds__modes__maybe_modecheck_proc_11_0_i67);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,23);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,10,5);
	MR_r4 = MR_ctfield(0, MR_sv(12), 0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(fn__list__foldr_3_0,
		check_hlds__modes__maybe_modecheck_proc_11_0_i68);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__modes__maybe_modecheck_proc_11_0_i70);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 3 != (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(check_hlds__modes__maybe_modecheck_proc_11_0_i69);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_add_live_vars_3_0,
		check_hlds__modes__maybe_modecheck_proc_11_0_i71);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(check_hlds__unique_modes__make_all_nondet_live_vars_mostly_uniq_2_0,
		check_hlds__modes__maybe_modecheck_proc_11_0_i72);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_remove_live_vars_3_0,
		check_hlds__modes__maybe_modecheck_proc_11_0_i73);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 9);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(14,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__modes__unique_modecheck_clause_disj_12_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 6;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 8) = MR_sv(3);
	MR_r7 = MR_r1;
	MR_r6 = MR_sv(12);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_info, mode_info);
	MR_r4 = (MR_Word) MR_IO_CTOR_ADDR;
	}
	MR_np_call_localret_ent(list__map_foldl2_7_0,
		check_hlds__modes__maybe_modecheck_proc_11_0_i75);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 9);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(14,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__modes__unique_modecheck_clause_disj_12_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 6;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 8) = MR_sv(3);
	MR_r7 = MR_sv(15);
	MR_r6 = MR_sv(12);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_info, mode_info);
	MR_r4 = (MR_Word) MR_IO_CTOR_ADDR;
	}
	MR_np_call_localret_ent(list__map_foldl2_7_0,
		check_hlds__modes__maybe_modecheck_proc_11_0_i75);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_sv(3) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(4);
	MR_sv(11) = MR_r2;
	MR_r1 = MR_sv(16);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_GOTO_LAB(check_hlds__modes__maybe_modecheck_proc_11_0_i51);
	}
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(13,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__modes__unique_modecheck_clause_switch_10_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(4);
	MR_tempr2 = MR_sv(12);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 6);
	MR_sv(6) = MR_ctfield(1, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_info, mode_info);
	MR_r4 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r6 = MR_ctfield(1, MR_tempr2, 2);
	MR_r7 = MR_sv(15);
	}
	MR_np_call_localret_ent(list__map_foldl2_7_0,
		check_hlds__modes__maybe_modecheck_proc_11_0_i76);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(4);
	MR_sv(3) = MR_tempr1;
	MR_sv(11) = MR_r2;
	MR_r1 = MR_sv(16);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	}
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r4;
	MR_np_call_localret_ent(assoc_list__from_corresponding_lists_3_0,
		check_hlds__modes__maybe_modecheck_proc_11_0_i77);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__instmap__from_assoc_list_2_0,
		check_hlds__modes__maybe_modecheck_proc_11_0_i78);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(hlds__instmap__compute_instmap_delta_4_0,
		check_hlds__modes__maybe_modecheck_proc_11_0_i79);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_instmap_delta_3_0,
		check_hlds__modes__maybe_modecheck_proc_11_0_i80);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(3) = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_sv(11);
	MR_GOTO_LAB(check_hlds__modes__maybe_modecheck_proc_11_0_i86);
	}
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(check_hlds__modes__maybe_modecheck_proc_11_0_i82);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(check_hlds__modes__modecheck_goal_6_0,
		check_hlds__modes__maybe_modecheck_proc_11_0_i84);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(check_hlds__unique_modes__unique_modes_check_goal_6_0,
		check_hlds__modes__maybe_modecheck_proc_11_0_i84);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r5 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__modes__modecheck_final_insts_8_0,
		check_hlds__modes__maybe_modecheck_proc_11_0_i85);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r3;
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_errors_2_0,
		check_hlds__modes__maybe_modecheck_proc_11_0_i87);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(7),0)) {
		MR_GOTO_LAB(check_hlds__modes__maybe_modecheck_proc_11_0_i89);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,7);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__check_hlds__mode_errors__mode_error_info_to_spec_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(11);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_errors, mode_error_info);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		check_hlds__modes__maybe_modecheck_proc_11_0_i90);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__maybe_modecheck_proc_11_0_i92);
	}
	MR_sv(6) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(11);
	MR_GOTO_LAB(check_hlds__modes__maybe_modecheck_proc_11_0_i91);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(6) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(11);
	}
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_warnings_2_0,
		check_hlds__modes__maybe_modecheck_proc_11_0_i93);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,8);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__check_hlds__mode_errors__mode_warning_info_to_spec_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(11);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_errors, mode_warning_info);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		check_hlds__modes__maybe_modecheck_proc_11_0_i94);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(list__append_3_1,
		check_hlds__modes__maybe_modecheck_proc_11_0_i95);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_sv(10) = MR_sv(5);
	MR_np_call_localret_ent(parse_tree__prog_mode__inst_lists_to_mode_list_3_0,
		check_hlds__modes__maybe_modecheck_proc_11_0_i97);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__f_104_108_100_115_95_95_104_108_100_115_95_112_114_101_100_95_95_109_111_100_101_95_101_114_114_111_114_115_32_58_61_2_0,
		check_hlds__modes__maybe_modecheck_proc_11_0_i96);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_np_call_localret_ent(parse_tree__prog_mode__inst_lists_to_mode_list_3_0,
		check_hlds__modes__maybe_modecheck_proc_11_0_i97);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_changed_flag_2_0,
		check_hlds__modes__maybe_modecheck_proc_11_0_i98);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		check_hlds__modes__maybe_modecheck_proc_11_0_i99);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_varset_2_0,
		check_hlds__modes__maybe_modecheck_proc_11_0_i100);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_var_types_2_0,
		check_hlds__modes__maybe_modecheck_proc_11_0_i101);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_need_to_requantify_2_0,
		check_hlds__modes__maybe_modecheck_proc_11_0_i102);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_r2 = MR_sv(10);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		check_hlds__modes__maybe_modecheck_proc_11_0_i103);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_varset_3_0,
		check_hlds__modes__maybe_modecheck_proc_11_0_i104);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_vartypes_3_0,
		check_hlds__modes__maybe_modecheck_proc_11_0_i105);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_argmodes_3_0,
		check_hlds__modes__maybe_modecheck_proc_11_0_i106);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(check_hlds__modes__maybe_modecheck_proc_11_0_i108);
	}
	MR_np_call_localret_ent(hlds__quantification__requantify_proc_2_0,
		check_hlds__modes__maybe_modecheck_proc_11_0_i108);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_preds_2_0,
		check_hlds__modes__maybe_modecheck_proc_11_0_i110);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__modes__maybe_modecheck_proc_11_0_i111);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		check_hlds__modes__maybe_modecheck_proc_11_0_i112);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(map__set_4_0,
		check_hlds__modes__maybe_modecheck_proc_11_0_i113);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_procedures_3_0,
		check_hlds__modes__maybe_modecheck_proc_11_0_i114);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__set_4_0,
		check_hlds__modes__maybe_modecheck_proc_11_0_i115);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_preds_3_0,
		check_hlds__modes__maybe_modecheck_proc_11_0_i116);
MR_def_label(check_hlds__modes__maybe_modecheck_proc_11_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_decr_sp_and_return(17);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__modes_module40)
	MR_init_entry1(check_hlds__modes__modecheck_proc_general_10_0);
	MR_init_label1(check_hlds__modes__modecheck_proc_general_10_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__modes__modecheck_proc_general_10_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r6 = (MR_Integer) 0;
	MR_np_call_localret_ent(check_hlds__modes__maybe_modecheck_proc_11_0,
		check_hlds__modes__modecheck_proc_general_10_0_i2);
MR_def_label(check_hlds__modes__modecheck_proc_general_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__modes_module41)
	MR_init_entry1(check_hlds__modes__modecheck_proc_8_0);
	MR_init_label1(check_hlds__modes__modecheck_proc_8_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__modes__modecheck_proc_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r5 = MR_r3;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 0;
	MR_r6 = (MR_Integer) 0;
	MR_np_call_localret_ent(check_hlds__modes__maybe_modecheck_proc_11_0,
		check_hlds__modes__modecheck_proc_8_0_i2);
MR_def_label(check_hlds__modes__modecheck_proc_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__pred_info_get_arg_types_2_0);
MR_decl_entry(list__length_2_0);

MR_BEGIN_MODULE(check_hlds__modes_module42)
	MR_init_entry1(check_hlds__modes__compute_arg_offset_2_0);
	MR_init_label3(check_hlds__modes__compute_arg_offset_2_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__modes__compute_arg_offset_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_orig_arity_1_0,
		check_hlds__modes__compute_arg_offset_2_0_i2);
MR_def_label(check_hlds__modes__compute_arg_offset_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_arg_types_2_0,
		check_hlds__modes__compute_arg_offset_2_0_i3);
MR_def_label(check_hlds__modes__compute_arg_offset_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_np_call_localret_ent(list__length_2_0,
		check_hlds__modes__compute_arg_offset_2_0_i4);
MR_def_label(check_hlds__modes__compute_arg_offset_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) - (MR_Integer) MR_r1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__mode_info__mode_info_set_call_arg_context_3_0);
MR_decl_entry(check_hlds__mode_info__mode_info_var_is_live_3_0);

MR_BEGIN_MODULE(check_hlds__modes_module43)
	MR_init_entry1(check_hlds__modes__modecheck_var_list_is_live_exact_match_5_0);
	MR_init_label8(check_hlds__modes__modecheck_var_list_is_live_exact_match_5_0,38,3,9,10,11,12,13,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__modes__modecheck_var_list_is_live_exact_match_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(check_hlds__modes__modecheck_var_list_is_live_exact_match_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_var_list_is_live_exact_match_5_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_var_list_is_live_exact_match_5_0_i8);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(7);
MR_def_label(check_hlds__modes__modecheck_var_list_is_live_exact_match_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_var_list_is_live_exact_match_5_0_i8);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(3) = ((MR_Integer) MR_r3 + (MR_Integer) 1);
	MR_sv(5) = MR_ctfield(1, MR_r1, 1);
	MR_sv(6) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_r4;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_call_arg_context_3_0,
		check_hlds__modes__modecheck_var_list_is_live_exact_match_5_0_i9);
MR_def_label(check_hlds__modes__modecheck_var_list_is_live_exact_match_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_var_is_live_3_0,
		check_hlds__modes__modecheck_var_list_is_live_exact_match_5_0_i10);
MR_def_label(check_hlds__modes__modecheck_var_list_is_live_exact_match_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 != MR_sv(1))) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_var_list_is_live_exact_match_5_0_i11);
	}
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r1 = MR_sv(5);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(check_hlds__modes__modecheck_var_list_is_live_exact_match_5_0_i38);
MR_def_label(check_hlds__modes__modecheck_var_list_is_live_exact_match_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,17);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(set__singleton_set_2_1,
		check_hlds__modes__modecheck_var_list_is_live_exact_match_5_0_i12);
MR_def_label(check_hlds__modes__modecheck_var_list_is_live_exact_match_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(6);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_error_4_0,
		check_hlds__modes__modecheck_var_list_is_live_exact_match_5_0_i13);
MR_def_label(check_hlds__modes__modecheck_var_list_is_live_exact_match_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(check_hlds__modes__modecheck_var_list_is_live_exact_match_5_0_i38);
MR_def_label(check_hlds__modes__modecheck_var_list_is_live_exact_match_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("modes.m", 7);
	MR_r2 = (MR_Word) MR_string_const("modecheck_var_list_is_live_exact_match: length mismatch", 55);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__modes_module44)
	MR_init_entry1(check_hlds__modes__modecheck_var_list_is_live_no_exact_match_5_0);
	MR_init_label8(check_hlds__modes__modecheck_var_list_is_live_no_exact_match_5_0,45,3,9,10,14,15,11,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__modes__modecheck_var_list_is_live_no_exact_match_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(check_hlds__modes__modecheck_var_list_is_live_no_exact_match_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_var_list_is_live_no_exact_match_5_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_var_list_is_live_no_exact_match_5_0_i8);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(7);
MR_def_label(check_hlds__modes__modecheck_var_list_is_live_no_exact_match_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_var_list_is_live_no_exact_match_5_0_i8);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(3) = ((MR_Integer) MR_r3 + (MR_Integer) 1);
	MR_sv(5) = MR_ctfield(1, MR_r1, 1);
	MR_sv(6) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_r4;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_call_arg_context_3_0,
		check_hlds__modes__modecheck_var_list_is_live_no_exact_match_5_0_i9);
MR_def_label(check_hlds__modes__modecheck_var_list_is_live_no_exact_match_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_var_is_live_3_0,
		check_hlds__modes__modecheck_var_list_is_live_no_exact_match_5_0_i10);
MR_def_label(check_hlds__modes__modecheck_var_list_is_live_no_exact_match_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_var_list_is_live_no_exact_match_5_0_i11);
	}
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_var_list_is_live_no_exact_match_5_0_i11);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,17);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(set__singleton_set_2_1,
		check_hlds__modes__modecheck_var_list_is_live_no_exact_match_5_0_i14);
MR_def_label(check_hlds__modes__modecheck_var_list_is_live_no_exact_match_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(6);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_error_4_0,
		check_hlds__modes__modecheck_var_list_is_live_no_exact_match_5_0_i15);
MR_def_label(check_hlds__modes__modecheck_var_list_is_live_no_exact_match_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(check_hlds__modes__modecheck_var_list_is_live_no_exact_match_5_0_i45);
MR_def_label(check_hlds__modes__modecheck_var_list_is_live_no_exact_match_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r1 = MR_sv(5);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(check_hlds__modes__modecheck_var_list_is_live_no_exact_match_5_0_i45);
MR_def_label(check_hlds__modes__modecheck_var_list_is_live_no_exact_match_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("modes.m", 7);
	MR_r2 = (MR_Word) MR_string_const("modecheck_var_list_is_live_no_exact_match: length mismatch", 58);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__inst_match__inst_matches_initial_no_implied_modes_7_0);

MR_BEGIN_MODULE(check_hlds__modes_module45)
	MR_init_entry1(check_hlds__modes__modecheck_var_has_inst_list_exact_match_2_7_0);
	MR_init_label8(check_hlds__modes__modecheck_var_has_inst_list_exact_match_2_7_0,46,3,9,10,11,12,13,14)
	MR_init_label5(check_hlds__modes__modecheck_var_has_inst_list_exact_match_2_7_0,17,16,20,21,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modes__modecheck_var_has_inst_list_exact_match_2_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(check_hlds__modes__modecheck_var_has_inst_list_exact_match_2_7_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_var_has_inst_list_exact_match_2_7_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_var_has_inst_list_exact_match_2_7_0_i8);
	}
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_decr_sp_and_return(11);
MR_def_label(check_hlds__modes__modecheck_var_has_inst_list_exact_match_2_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_var_has_inst_list_exact_match_2_7_0_i8);
	}
	MR_sv(1) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(4) = ((MR_Integer) MR_r3 + (MR_Integer) 1);
	MR_sv(6) = MR_ctfield(1, MR_r1, 1);
	MR_sv(7) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_r5;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_call_arg_context_3_0,
		check_hlds__modes__modecheck_var_has_inst_list_exact_match_2_7_0_i9);
MR_def_label(check_hlds__modes__modecheck_var_has_inst_list_exact_match_2_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__modes__modecheck_var_has_inst_list_exact_match_2_7_0_i10);
MR_def_label(check_hlds__modes__modecheck_var_has_inst_list_exact_match_2_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(hlds__instmap__lookup_var_3_0,
		check_hlds__modes__modecheck_var_has_inst_list_exact_match_2_7_0_i11);
MR_def_label(check_hlds__modes__modecheck_var_has_inst_list_exact_match_2_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_var_types_2_0,
		check_hlds__modes__modecheck_var_has_inst_list_exact_match_2_7_0_i12);
MR_def_label(check_hlds__modes__modecheck_var_has_inst_list_exact_match_2_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,2,17);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(10);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r5 = MR_sv(7);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__modes__modecheck_var_has_inst_list_exact_match_2_7_0_i13);
MR_def_label(check_hlds__modes__modecheck_var_has_inst_list_exact_match_2_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		check_hlds__modes__modecheck_var_has_inst_list_exact_match_2_7_0_i14);
MR_def_label(check_hlds__modes__modecheck_var_has_inst_list_exact_match_2_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(9);
	MR_r5 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_matches_initial_no_implied_modes_7_0,
		check_hlds__modes__modecheck_var_has_inst_list_exact_match_2_7_0_i17);
MR_def_label(check_hlds__modes__modecheck_var_has_inst_list_exact_match_2_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_var_has_inst_list_exact_match_2_7_0_i16);
	}
	MR_sv(1) = MR_r3;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_module_info_3_0,
		check_hlds__modes__modecheck_var_has_inst_list_exact_match_2_7_0_i21);
MR_def_label(check_hlds__modes__modecheck_var_has_inst_list_exact_match_2_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(set__singleton_set_2_1,
		check_hlds__modes__modecheck_var_has_inst_list_exact_match_2_7_0_i20);
MR_def_label(check_hlds__modes__modecheck_var_has_inst_list_exact_match_2_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(8);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(2);
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_error_4_0,
		check_hlds__modes__modecheck_var_has_inst_list_exact_match_2_7_0_i21);
MR_def_label(check_hlds__modes__modecheck_var_has_inst_list_exact_match_2_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(check_hlds__modes__modecheck_var_has_inst_list_exact_match_2_7_0_i46);
MR_def_label(check_hlds__modes__modecheck_var_has_inst_list_exact_match_2_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("modes.m", 7);
	MR_r2 = (MR_Word) MR_string_const("modecheck_var_has_inst_list_exact_match_2: length mismatch", 58);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__init_0_0);

MR_BEGIN_MODULE(check_hlds__modes_module46)
	MR_init_entry1(check_hlds__modes__modecheck_var_has_inst_list_exact_match_6_0);
	MR_init_label1(check_hlds__modes__modecheck_var_has_inst_list_exact_match_6_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__modes__modecheck_var_has_inst_list_exact_match_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,26);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_np_call_localret_ent(fn__map__init_0_0,
		check_hlds__modes__modecheck_var_has_inst_list_exact_match_6_0_i2);
MR_def_label(check_hlds__modes__modecheck_var_has_inst_list_exact_match_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(check_hlds__modes__modecheck_var_has_inst_list_exact_match_2_7_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__inst_match__inst_matches_initial_7_0);

MR_BEGIN_MODULE(check_hlds__modes_module47)
	MR_init_entry1(check_hlds__modes__modecheck_var_has_inst_list_no_exact_match_2_7_0);
	MR_init_label8(check_hlds__modes__modecheck_var_has_inst_list_no_exact_match_2_7_0,46,3,9,10,11,12,13,14)
	MR_init_label5(check_hlds__modes__modecheck_var_has_inst_list_no_exact_match_2_7_0,17,16,20,21,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modes__modecheck_var_has_inst_list_no_exact_match_2_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(check_hlds__modes__modecheck_var_has_inst_list_no_exact_match_2_7_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_var_has_inst_list_no_exact_match_2_7_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_var_has_inst_list_no_exact_match_2_7_0_i8);
	}
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_decr_sp_and_return(11);
MR_def_label(check_hlds__modes__modecheck_var_has_inst_list_no_exact_match_2_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_var_has_inst_list_no_exact_match_2_7_0_i8);
	}
	MR_sv(1) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(4) = ((MR_Integer) MR_r3 + (MR_Integer) 1);
	MR_sv(6) = MR_ctfield(1, MR_r1, 1);
	MR_sv(7) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_r5;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_call_arg_context_3_0,
		check_hlds__modes__modecheck_var_has_inst_list_no_exact_match_2_7_0_i9);
MR_def_label(check_hlds__modes__modecheck_var_has_inst_list_no_exact_match_2_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__modes__modecheck_var_has_inst_list_no_exact_match_2_7_0_i10);
MR_def_label(check_hlds__modes__modecheck_var_has_inst_list_no_exact_match_2_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(hlds__instmap__lookup_var_3_0,
		check_hlds__modes__modecheck_var_has_inst_list_no_exact_match_2_7_0_i11);
MR_def_label(check_hlds__modes__modecheck_var_has_inst_list_no_exact_match_2_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_var_types_2_0,
		check_hlds__modes__modecheck_var_has_inst_list_no_exact_match_2_7_0_i12);
MR_def_label(check_hlds__modes__modecheck_var_has_inst_list_no_exact_match_2_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,2,17);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(10);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r5 = MR_sv(7);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__modes__modecheck_var_has_inst_list_no_exact_match_2_7_0_i13);
MR_def_label(check_hlds__modes__modecheck_var_has_inst_list_no_exact_match_2_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		check_hlds__modes__modecheck_var_has_inst_list_no_exact_match_2_7_0_i14);
MR_def_label(check_hlds__modes__modecheck_var_has_inst_list_no_exact_match_2_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(9);
	MR_r5 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_matches_initial_7_0,
		check_hlds__modes__modecheck_var_has_inst_list_no_exact_match_2_7_0_i17);
MR_def_label(check_hlds__modes__modecheck_var_has_inst_list_no_exact_match_2_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_var_has_inst_list_no_exact_match_2_7_0_i16);
	}
	MR_sv(1) = MR_r3;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_module_info_3_0,
		check_hlds__modes__modecheck_var_has_inst_list_no_exact_match_2_7_0_i21);
MR_def_label(check_hlds__modes__modecheck_var_has_inst_list_no_exact_match_2_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(set__singleton_set_2_1,
		check_hlds__modes__modecheck_var_has_inst_list_no_exact_match_2_7_0_i20);
MR_def_label(check_hlds__modes__modecheck_var_has_inst_list_no_exact_match_2_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(8);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(2);
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_error_4_0,
		check_hlds__modes__modecheck_var_has_inst_list_no_exact_match_2_7_0_i21);
MR_def_label(check_hlds__modes__modecheck_var_has_inst_list_no_exact_match_2_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(check_hlds__modes__modecheck_var_has_inst_list_no_exact_match_2_7_0_i46);
MR_def_label(check_hlds__modes__modecheck_var_has_inst_list_no_exact_match_2_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("modes.m", 7);
	MR_r2 = (MR_Word) MR_string_const("modecheck_var_has_inst_list_no_exact_match_2: length mismatch", 61);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__modes_module48)
	MR_init_entry1(check_hlds__modes__modecheck_var_has_inst_list_no_exact_match_6_0);
	MR_init_label1(check_hlds__modes__modecheck_var_has_inst_list_no_exact_match_6_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__modes__modecheck_var_has_inst_list_no_exact_match_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,26);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_np_call_localret_ent(fn__map__init_0_0,
		check_hlds__modes__modecheck_var_has_inst_list_no_exact_match_6_0_i2);
MR_def_label(check_hlds__modes__modecheck_var_has_inst_list_no_exact_match_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(check_hlds__modes__modecheck_var_has_inst_list_no_exact_match_2_7_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__modes_module49)
	MR_init_entry1(check_hlds__modes__append_extra_goals_3_0);
	MR_init_label4(check_hlds__modes__append_extra_goals_3_0,3,6,7,19)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__modes__append_extra_goals_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__append_extra_goals_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(check_hlds__modes__append_extra_goals_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__append_extra_goals_3_0_i19);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_sv(1) = MR_ctfield(1, MR_tempr3, 1);
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_tempr2 = MR_tempr3;
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	MR_r3 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(list__append_3_1,
		check_hlds__modes__append_extra_goals_3_0_i6);
MR_def_label(check_hlds__modes__append_extra_goals_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(list__append_3_1,
		check_hlds__modes__append_extra_goals_3_0_i7);
MR_def_label(check_hlds__modes__append_extra_goals_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(check_hlds__modes__append_extra_goals_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__modes_module50)
	MR_init_entry1(check_hlds__modes__mode_context_to_unify_context_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__modes__mode_context_to_unify_context_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_tailcall_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_99_111_110_116_101_120_116_95_116_111_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_49_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__inst_match__inst_matches_initial_no_implied_modes_4_0);
MR_decl_entry(check_hlds__mode_info__mode_info_may_init_solver_vars_1_0);
MR_decl_entry(check_hlds__inst_match__inst_is_bound_2_0);
MR_decl_entry(varset__new_var_3_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);
MR_decl_entry(check_hlds__modecheck_unify__create_var_var_unification_5_0);

MR_BEGIN_MODULE(check_hlds__modes_module51)
	MR_init_entry1(check_hlds__modes__modecheck_set_var_inst_list_2_9_0);
	MR_init_label8(check_hlds__modes__modecheck_set_var_inst_list_2_9_0,134,8,9,12,14,15,16,17)
	MR_init_label8(check_hlds__modes__modecheck_set_var_inst_list_2_9_0,18,19,22,20,27,29,30,31)
	MR_init_label8(check_hlds__modes__modecheck_set_var_inst_list_2_9_0,33,35,37,39,32,41,24,25)
	MR_init_label8(check_hlds__modes__modecheck_set_var_inst_list_2_9_0,46,48,49,44,50,51,52,53)
	MR_init_label8(check_hlds__modes__modecheck_set_var_inst_list_2_9_0,54,55,56,59,60,62,61,64)
	MR_init_label4(check_hlds__modes__modecheck_set_var_inst_list_2_9_0,11,67,135,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modes__modecheck_set_var_inst_list_2_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_set_var_inst_list_2_9_0_i134);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_set_var_inst_list_2_9_0_i135);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_set_var_inst_list_2_9_0_i135);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__modes__modecheck_set_var_inst_list_2_9_0,134)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_set_var_inst_list_2_9_0_i1);
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_set_var_inst_list_2_9_0_i1);
	}
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_ctfield(1, MR_r1, 0);
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_r3;
	MR_sv(6) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(7) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(8) = ((MR_Integer) MR_r4 + (MR_Integer) 1);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_r6;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_call_arg_context_3_0,
		check_hlds__modes__modecheck_set_var_inst_list_2_9_0_i8);
MR_def_label(check_hlds__modes__modecheck_set_var_inst_list_2_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__modes__modecheck_set_var_inst_list_2_9_0_i9);
MR_def_label(check_hlds__modes__modecheck_set_var_inst_list_2_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(hlds__instmap__is_reachable_1_0,
		check_hlds__modes__modecheck_set_var_inst_list_2_9_0_i12);
MR_def_label(check_hlds__modes__modecheck_set_var_inst_list_2_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_set_var_inst_list_2_9_0_i11);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__instmap__lookup_var_3_0,
		check_hlds__modes__modecheck_set_var_inst_list_2_9_0_i14);
MR_def_label(check_hlds__modes__modecheck_set_var_inst_list_2_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		check_hlds__modes__modecheck_set_var_inst_list_2_9_0_i15);
MR_def_label(check_hlds__modes__modecheck_set_var_inst_list_2_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_expand_3_0,
		check_hlds__modes__modecheck_set_var_inst_list_2_9_0_i16);
MR_def_label(check_hlds__modes__modecheck_set_var_inst_list_2_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_expand_3_0,
		check_hlds__modes__modecheck_set_var_inst_list_2_9_0_i17);
MR_def_label(check_hlds__modes__modecheck_set_var_inst_list_2_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_var_types_2_0,
		check_hlds__modes__modecheck_set_var_inst_list_2_9_0_i18);
MR_def_label(check_hlds__modes__modecheck_set_var_inst_list_2_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_sv(15) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(16) = (MR_Word) MR_TAG_COMMON(0,2,17);
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(16);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(13);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__modes__modecheck_set_var_inst_list_2_9_0_i19);
MR_def_label(check_hlds__modes__modecheck_set_var_inst_list_2_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(14);
	MR_r4 = MR_sv(11);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_matches_initial_no_implied_modes_4_0,
		check_hlds__modes__modecheck_set_var_inst_list_2_9_0_i22);
MR_def_label(check_hlds__modes__modecheck_set_var_inst_list_2_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_set_var_inst_list_2_9_0_i20);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_sv(4) = MR_r1;
	MR_r4 = MR_sv(9);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(check_hlds__modes__modecheck_set_var_inst_list_2_9_0_i59);
MR_def_label(check_hlds__modes__modecheck_set_var_inst_list_2_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(14);
	if (MR_PTAG_TESTR(MR_sv(12),1)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_set_var_inst_list_2_9_0_i25);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_free_2_0,
		check_hlds__modes__modecheck_set_var_inst_list_2_9_0_i27);
MR_def_label(check_hlds__modes__modecheck_set_var_inst_list_2_9_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_set_var_inst_list_2_9_0_i24);
	}
	MR_sv(4) = MR_sv(2);
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_context_2_0,
		check_hlds__modes__modecheck_set_var_inst_list_2_9_0_i29);
MR_def_label(check_hlds__modes__modecheck_set_var_inst_list_2_9_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_mode_context_2_0,
		check_hlds__modes__modecheck_set_var_inst_list_2_9_0_i30);
MR_def_label(check_hlds__modes__modecheck_set_var_inst_list_2_9_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_99_111_110_116_101_120_116_95_116_111_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_49_93_95_48_3_0,
		check_hlds__modes__modecheck_set_var_inst_list_2_9_0_i31);
MR_def_label(check_hlds__modes__modecheck_set_var_inst_list_2_9_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tempr3 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 2) = MR_r1;
	MR_tag_alloc_heap(MR_sv(15), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(15), 0) = MR_tempr2;
	MR_r1 = MR_sv(9);
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_errors_2_0,
		check_hlds__modes__modecheck_set_var_inst_list_2_9_0_i33);
MR_def_label(check_hlds__modes__modecheck_set_var_inst_list_2_9_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_set_var_inst_list_2_9_0_i32);
	}
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_may_init_solver_vars_1_0,
		check_hlds__modes__modecheck_set_var_inst_list_2_9_0_i35);
MR_def_label(check_hlds__modes__modecheck_set_var_inst_list_2_9_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_set_var_inst_list_2_9_0_i32);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(check_hlds__type_util__type_is_solver_type_2_0,
		check_hlds__modes__modecheck_set_var_inst_list_2_9_0_i37);
MR_def_label(check_hlds__modes__modecheck_set_var_inst_list_2_9_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_set_var_inst_list_2_9_0_i32);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(13);
	MR_r5 = MR_sv(15);
	MR_r6 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__modes__construct_initialisation_call_8_0,
		check_hlds__modes__modecheck_set_var_inst_list_2_9_0_i39);
MR_def_label(check_hlds__modes__modecheck_set_var_inst_list_2_9_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(9) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__modes__append_extra_goals_3_0,
		check_hlds__modes__modecheck_set_var_inst_list_2_9_0_i56);
MR_def_label(check_hlds__modes__modecheck_set_var_inst_list_2_9_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(set__singleton_set_2_1,
		check_hlds__modes__modecheck_set_var_inst_list_2_9_0_i41);
MR_def_label(check_hlds__modes__modecheck_set_var_inst_list_2_9_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(10);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(12);
	MR_r3 = MR_sv(9);
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_error_4_0,
		check_hlds__modes__modecheck_set_var_inst_list_2_9_0_i49);
MR_def_label(check_hlds__modes__modecheck_set_var_inst_list_2_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(14);
MR_def_label(check_hlds__modes__modecheck_set_var_inst_list_2_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_bound_2_0,
		check_hlds__modes__modecheck_set_var_inst_list_2_9_0_i46);
MR_def_label(check_hlds__modes__modecheck_set_var_inst_list_2_9_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_set_var_inst_list_2_9_0_i44);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__singleton_set_2_1,
		check_hlds__modes__modecheck_set_var_inst_list_2_9_0_i48);
MR_def_label(check_hlds__modes__modecheck_set_var_inst_list_2_9_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(10);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(12);
	MR_r3 = MR_sv(9);
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_error_4_0,
		check_hlds__modes__modecheck_set_var_inst_list_2_9_0_i49);
MR_def_label(check_hlds__modes__modecheck_set_var_inst_list_2_9_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(check_hlds__modes__modecheck_set_var_inst_list_2_9_0_i59);
MR_def_label(check_hlds__modes__modecheck_set_var_inst_list_2_9_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(14);
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_varset_2_0,
		check_hlds__modes__modecheck_set_var_inst_list_2_9_0_i50);
MR_def_label(check_hlds__modes__modecheck_set_var_inst_list_2_9_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_np_call_localret_ent(varset__new_var_3_0,
		check_hlds__modes__modecheck_set_var_inst_list_2_9_0_i51);
MR_def_label(check_hlds__modes__modecheck_set_var_inst_list_2_9_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(16);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(13);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(14);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		check_hlds__modes__modecheck_set_var_inst_list_2_9_0_i52);
MR_def_label(check_hlds__modes__modecheck_set_var_inst_list_2_9_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_varset_3_0,
		check_hlds__modes__modecheck_set_var_inst_list_2_9_0_i53);
MR_def_label(check_hlds__modes__modecheck_set_var_inst_list_2_9_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_var_types_3_0,
		check_hlds__modes__modecheck_set_var_inst_list_2_9_0_i54);
MR_def_label(check_hlds__modes__modecheck_set_var_inst_list_2_9_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(14);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__modecheck_unify__create_var_var_unification_5_0,
		check_hlds__modes__modecheck_set_var_inst_list_2_9_0_i55);
MR_def_label(check_hlds__modes__modecheck_set_var_inst_list_2_9_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_sv(1);
	}
	MR_np_call_localret_ent(check_hlds__modes__append_extra_goals_3_0,
		check_hlds__modes__modecheck_set_var_inst_list_2_9_0_i56);
MR_def_label(check_hlds__modes__modecheck_set_var_inst_list_2_9_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_r4 = MR_sv(9);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(check_hlds__modes__modecheck_set_var_inst_list_2_9_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_np_call_localret_ent(check_hlds__modes__modecheck_set_var_inst_5_0,
		check_hlds__modes__modecheck_set_var_inst_list_2_9_0_i60);
MR_def_label(check_hlds__modes__modecheck_set_var_inst_list_2_9_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		check_hlds__modes__modecheck_set_var_inst_list_2_9_0_i62);
MR_def_label(check_hlds__modes__modecheck_set_var_inst_list_2_9_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_set_var_inst_list_2_9_0_i61);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(2);
	MR_np_localcall_lab(check_hlds__modes__modecheck_set_var_inst_list_2_9_0,
		check_hlds__modes__modecheck_set_var_inst_list_2_9_0_i67);
MR_def_label(check_hlds__modes__modecheck_set_var_inst_list_2_9_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__modes__modecheck_set_var_inst_5_0,
		check_hlds__modes__modecheck_set_var_inst_list_2_9_0_i64);
MR_def_label(check_hlds__modes__modecheck_set_var_inst_list_2_9_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(1);
	MR_np_localcall_lab(check_hlds__modes__modecheck_set_var_inst_list_2_9_0,
		check_hlds__modes__modecheck_set_var_inst_list_2_9_0_i67);
MR_def_label(check_hlds__modes__modecheck_set_var_inst_list_2_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(7);
	MR_sv(4) = MR_sv(2);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(9);
	MR_np_localcall_lab(check_hlds__modes__modecheck_set_var_inst_list_2_9_0,
		check_hlds__modes__modecheck_set_var_inst_list_2_9_0_i67);
MR_def_label(check_hlds__modes__modecheck_set_var_inst_list_2_9_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_set_var_inst_list_2_9_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(17);
	}
MR_def_label(check_hlds__modes__modecheck_set_var_inst_list_2_9_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
MR_def_label(check_hlds__modes__modecheck_set_var_inst_list_2_9_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(17);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__modes_module52)
	MR_init_entry1(check_hlds__modes__modecheck_set_var_inst_list_8_0);
	MR_init_label2(check_hlds__modes__modecheck_set_var_inst_list_8_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__modes__modecheck_set_var_inst_list_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r6 = MR_r5;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(check_hlds__modes__modecheck_set_var_inst_list_2_9_0,
		check_hlds__modes__modecheck_set_var_inst_list_8_0_i3);
MR_def_label(check_hlds__modes__modecheck_set_var_inst_list_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_set_var_inst_list_8_0_i2);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_decr_sp_and_return(1);
MR_def_label(check_hlds__modes__modecheck_set_var_inst_list_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("modes.m", 7);
	MR_r2 = (MR_Word) MR_string_const("modecheck_set_var_inst_list: length mismatch", 44);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__modes_module53)
	MR_init_entry1(check_hlds__modes__modecheck_lambda_final_insts_6_0);
	MR_init_label1(check_hlds__modes__modecheck_lambda_final_insts_6_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__modes__modecheck_lambda_final_insts_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r5 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(check_hlds__modes__modecheck_final_insts_8_0,
		check_hlds__modes__modecheck_lambda_final_insts_6_0_i2);
MR_def_label(check_hlds__modes__modecheck_lambda_final_insts_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__keys_2_0);

MR_BEGIN_MODULE(check_hlds__modes_module54)
	MR_init_entry1(check_hlds__modes__copy_pred_body_4_0);
	MR_init_label8(check_hlds__modes__copy_pred_body_4_0,2,4,5,3,7,8,9,10)
	MR_init_label2(check_hlds__modes__copy_pred_body_4_0,11,12)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modes__copy_pred_body_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__modes__copy_pred_body_4_0_i2);
MR_def_label(check_hlds__modes__copy_pred_body_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		check_hlds__modes__copy_pred_body_4_0_i4);
MR_def_label(check_hlds__modes__copy_pred_body_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 7;
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		check_hlds__modes__copy_pred_body_4_0_i5);
MR_def_label(check_hlds__modes__copy_pred_body_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__copy_pred_body_4_0_i3);
	}
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(6);
MR_def_label(check_hlds__modes__copy_pred_body_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		check_hlds__modes__copy_pred_body_4_0_i7);
MR_def_label(check_hlds__modes__copy_pred_body_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__modes__copy_pred_body_4_0_i8);
MR_def_label(check_hlds__modes__copy_pred_body_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		check_hlds__modes__copy_pred_body_4_0_i9);
MR_def_label(check_hlds__modes__copy_pred_body_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(map__keys_2_0,
		check_hlds__modes__copy_pred_body_4_0_i10);
MR_def_label(check_hlds__modes__copy_pred_body_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__modes__copy_proc_body_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,5);
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__foldl_4_1,
		check_hlds__modes__copy_pred_body_4_0_i11);
MR_def_label(check_hlds__modes__copy_pred_body_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_procedures_3_0,
		check_hlds__modes__copy_pred_body_4_0_i12);
MR_def_label(check_hlds__modes__copy_pred_body_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(map__set_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__modes_module55)
	MR_init_entry1(check_hlds__modes__copy_proc_body_4_0);
	MR_init_label4(check_hlds__modes__copy_proc_body_4_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modes__copy_proc_body_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__modes__copy_proc_body_4_0_i2);
MR_def_label(check_hlds__modes__copy_proc_body_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		check_hlds__modes__copy_proc_body_4_0_i3);
MR_def_label(check_hlds__modes__copy_proc_body_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__modes__copy_proc_body_4_0_i4);
MR_def_label(check_hlds__modes__copy_proc_body_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		check_hlds__modes__copy_proc_body_4_0_i5);
MR_def_label(check_hlds__modes__copy_proc_body_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(map__set_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__error_util__accumulate_error_specs_for_proc_3_0);

MR_BEGIN_MODULE(check_hlds__modes_module56)
	MR_init_entry1(check_hlds__modes__modecheck_procs_12_0);
	MR_init_label4(check_hlds__modes__modecheck_procs_12_0,12,4,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modes__modecheck_procs_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(check_hlds__modes__modecheck_procs_12_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_procs_12_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r7;
	MR_sv(5) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(check_hlds__modes__maybe_modecheck_proc_11_0,
		check_hlds__modes__modecheck_procs_12_0_i4);
MR_def_label(check_hlds__modes__modecheck_procs_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(parse_tree__error_util__accumulate_error_specs_for_proc_3_0,
		check_hlds__modes__modecheck_procs_12_0_i5);
MR_def_label(check_hlds__modes__modecheck_procs_12_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(check_hlds__modes__modecheck_procs_12_0_i12);
MR_def_label(check_hlds__modes__modecheck_procs_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_r2 = MR_r6;
	MR_r3 = MR_r7;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__pred_info_is_imported_1_0);
MR_decl_entry(hlds__hlds_pred__pred_info_is_pseudo_imported_1_0);
MR_decl_entry(hlds__passes_aux__write_pred_progress_message_5_0);
MR_decl_entry(map__member_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_0);
MR_decl_entry(check_hlds__mode_errors__maybe_report_error_no_modes_6_0);
MR_decl_entry(fn__parse_tree__error_util__init_error_spec_accumulator_0_0);
MR_decl_entry(fn__parse_tree__error_util__error_spec_accumulator_to_list_1_0);
MR_decl_entry(parse_tree__error_util__write_error_specs_8_0);
MR_decl_entry(hlds__hlds_module__module_info_get_num_errors_2_0);
MR_decl_entry(hlds__hlds_module__module_info_set_num_errors_3_0);
MR_decl_entry(hlds__hlds_module__module_info_remove_predid_3_0);

MR_BEGIN_MODULE(check_hlds__modes_module57)
	MR_init_entry1(check_hlds__modes__maybe_modecheck_pred_11_0);
	MR_init_label8(check_hlds__modes__maybe_modecheck_pred_11_0,2,3,9,7,13,11,15,16)
	MR_init_label8(check_hlds__modes__maybe_modecheck_pred_11_0,4,18,20,24,25,30,31,23)
	MR_init_label8(check_hlds__modes__maybe_modecheck_pred_11_0,19,39,40,45,46,44,49,38)
	MR_init_label8(check_hlds__modes__maybe_modecheck_pred_11_0,51,53,54,55,56,57,58,59)
	MR_init_label6(check_hlds__modes__maybe_modecheck_pred_11_0,77,60,62,63,66,67)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modes__maybe_modecheck_pred_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_r5;
	MR_sv(7) = MR_r6;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_preds_2_0,
		check_hlds__modes__maybe_modecheck_pred_11_0_i2);
MR_def_label(check_hlds__modes__maybe_modecheck_pred_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__modes__maybe_modecheck_pred_11_0_i3);
MR_def_label(check_hlds__modes__maybe_modecheck_pred_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_is_imported_1_0,
		check_hlds__modes__maybe_modecheck_pred_11_0_i9);
MR_def_label(check_hlds__modes__maybe_modecheck_pred_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__maybe_modecheck_pred_11_0_i7);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_decr_sp_and_return(11);
MR_def_label(check_hlds__modes__maybe_modecheck_pred_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_is_pseudo_imported_1_0,
		check_hlds__modes__maybe_modecheck_pred_11_0_i13);
MR_def_label(check_hlds__modes__maybe_modecheck_pred_11_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__maybe_modecheck_pred_11_0_i11);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_decr_sp_and_return(11);
MR_def_label(check_hlds__modes__maybe_modecheck_pred_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		check_hlds__modes__maybe_modecheck_pred_11_0_i15);
MR_def_label(check_hlds__modes__maybe_modecheck_pred_11_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 7;
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		check_hlds__modes__maybe_modecheck_pred_11_0_i16);
MR_def_label(check_hlds__modes__maybe_modecheck_pred_11_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__maybe_modecheck_pred_11_0_i4);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_decr_sp_and_return(11);
MR_def_label(check_hlds__modes__maybe_modecheck_pred_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		check_hlds__modes__maybe_modecheck_pred_11_0_i18);
MR_def_label(check_hlds__modes__maybe_modecheck_pred_11_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		check_hlds__modes__maybe_modecheck_pred_11_0_i20);
MR_def_label(check_hlds__modes__maybe_modecheck_pred_11_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__maybe_modecheck_pred_11_0_i19);
	}
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(check_hlds__modes__maybe_modecheck_pred_11_0_i23);
	}
	MR_r1 = (MR_Word) MR_string_const("% Mode-analysing ", 17);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(hlds__passes_aux__write_pred_progress_message_5_0,
		check_hlds__modes__maybe_modecheck_pred_11_0_i24);
MR_def_label(check_hlds__modes__maybe_modecheck_pred_11_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		check_hlds__modes__maybe_modecheck_pred_11_0_i25);
MR_def_label(check_hlds__modes__maybe_modecheck_pred_11_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(9) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(10));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(check_hlds__modes__maybe_modecheck_pred_11_0_i44);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_np_call_localret_ent(map__member_3_0,
		check_hlds__modes__maybe_modecheck_pred_11_0_i30);
MR_def_label(check_hlds__modes__maybe_modecheck_pred_11_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_0,
		check_hlds__modes__maybe_modecheck_pred_11_0_i31);
MR_def_label(check_hlds__modes__maybe_modecheck_pred_11_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(10));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(8);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(9);
	MR_GOTO_LAB(check_hlds__modes__maybe_modecheck_pred_11_0_i51);
MR_def_label(check_hlds__modes__maybe_modecheck_pred_11_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% Unique-mode-analysing ", 24);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(hlds__passes_aux__write_pred_progress_message_5_0,
		check_hlds__modes__maybe_modecheck_pred_11_0_i51);
MR_def_label(check_hlds__modes__maybe_modecheck_pred_11_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(check_hlds__modes__maybe_modecheck_pred_11_0_i38);
	}
	MR_r1 = (MR_Word) MR_string_const("% Mode-checking ", 16);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(hlds__passes_aux__write_pred_progress_message_5_0,
		check_hlds__modes__maybe_modecheck_pred_11_0_i39);
MR_def_label(check_hlds__modes__maybe_modecheck_pred_11_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		check_hlds__modes__maybe_modecheck_pred_11_0_i40);
MR_def_label(check_hlds__modes__maybe_modecheck_pred_11_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(9) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(10));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(check_hlds__modes__maybe_modecheck_pred_11_0_i44);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_np_call_localret_ent(map__member_3_0,
		check_hlds__modes__maybe_modecheck_pred_11_0_i45);
MR_def_label(check_hlds__modes__maybe_modecheck_pred_11_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_0,
		check_hlds__modes__maybe_modecheck_pred_11_0_i46);
MR_def_label(check_hlds__modes__maybe_modecheck_pred_11_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(10));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(8);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(9);
	MR_GOTO_LAB(check_hlds__modes__maybe_modecheck_pred_11_0_i51);
MR_def_label(check_hlds__modes__maybe_modecheck_pred_11_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(8);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(9);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_errors__maybe_report_error_no_modes_6_0,
		check_hlds__modes__maybe_modecheck_pred_11_0_i49);
MR_def_label(check_hlds__modes__maybe_modecheck_pred_11_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_procids_1_0,
		check_hlds__modes__maybe_modecheck_pred_11_0_i53);
MR_def_label(check_hlds__modes__maybe_modecheck_pred_11_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% Unique-mode-checking ", 23);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(hlds__passes_aux__write_pred_progress_message_5_0,
		check_hlds__modes__maybe_modecheck_pred_11_0_i51);
MR_def_label(check_hlds__modes__maybe_modecheck_pred_11_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_procids_1_0,
		check_hlds__modes__maybe_modecheck_pred_11_0_i53);
MR_def_label(check_hlds__modes__maybe_modecheck_pred_11_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__error_util__init_error_spec_accumulator_0_0,
		check_hlds__modes__maybe_modecheck_pred_11_0_i54);
MR_def_label(check_hlds__modes__maybe_modecheck_pred_11_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__modes__modecheck_procs_12_0,
		check_hlds__modes__maybe_modecheck_pred_11_0_i55);
MR_def_label(check_hlds__modes__maybe_modecheck_pred_11_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		check_hlds__modes__maybe_modecheck_pred_11_0_i56);
MR_def_label(check_hlds__modes__maybe_modecheck_pred_11_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__error_util__error_spec_accumulator_to_list_1_0,
		check_hlds__modes__maybe_modecheck_pred_11_0_i57);
MR_def_label(check_hlds__modes__maybe_modecheck_pred_11_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 0;
	MR_np_call_localret_ent(parse_tree__error_util__write_error_specs_8_0,
		check_hlds__modes__maybe_modecheck_pred_11_0_i58);
MR_def_label(check_hlds__modes__maybe_modecheck_pred_11_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_incr_num_errors_3_0,
		check_hlds__modes__maybe_modecheck_pred_11_0_i59);
MR_def_label(check_hlds__modes__maybe_modecheck_pred_11_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(check_hlds__modes__maybe_modecheck_pred_11_0_i60);
	}
MR_def_label(check_hlds__modes__maybe_modecheck_pred_11_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(3) = ((MR_Integer) MR_sv(7) + (MR_Integer) MR_tempr1);
	MR_r1 = (MR_Integer) 43;
	}
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		check_hlds__modes__maybe_modecheck_pred_11_0_i66);
MR_def_label(check_hlds__modes__maybe_modecheck_pred_11_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_num_errors_2_0,
		check_hlds__modes__maybe_modecheck_pred_11_0_i62);
MR_def_label(check_hlds__modes__maybe_modecheck_pred_11_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 + (MR_Integer) MR_sv(1));
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_num_errors_3_0,
		check_hlds__modes__maybe_modecheck_pred_11_0_i63);
MR_def_label(check_hlds__modes__maybe_modecheck_pred_11_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_remove_predid_3_0,
		check_hlds__modes__maybe_modecheck_pred_11_0_i77);
MR_def_label(check_hlds__modes__maybe_modecheck_pred_11_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_out__maybe_report_stats_3_0,
		check_hlds__modes__maybe_modecheck_pred_11_0_i67);
MR_def_label(check_hlds__modes__maybe_modecheck_pred_11_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__modes_module58)
	MR_init_entry1(check_hlds__modes__modecheck_clause_disj_9_0);
	MR_init_label3(check_hlds__modes__modecheck_clause_disj_9_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modes__modecheck_clause_disj_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r1 = MR_r2;
	MR_r2 = MR_r5;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_instmap_3_0,
		check_hlds__modes__modecheck_clause_disj_9_0_i2);
MR_def_label(check_hlds__modes__modecheck_clause_disj_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__modes__modecheck_goal_6_0,
		check_hlds__modes__modecheck_clause_disj_9_0_i3);
MR_def_label(check_hlds__modes__modecheck_clause_disj_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r5 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__modes__modecheck_final_insts_8_0,
		check_hlds__modes__modecheck_clause_disj_9_0_i4);
MR_def_label(check_hlds__modes__modecheck_clause_disj_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__modes_module59)
	MR_init_entry1(check_hlds__modes__modecheck_clause_switch_10_0);
	MR_init_label8(check_hlds__modes__modecheck_clause_switch_10_0,2,3,4,7,9,10,5,11)
	MR_init_label2(check_hlds__modes__modecheck_clause_switch_10_0,13,14)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modes__modecheck_clause_switch_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_tempr2 = MR_r5;
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r6;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_instmap_3_0,
		check_hlds__modes__modecheck_clause_switch_10_0_i2);
MR_def_label(check_hlds__modes__modecheck_clause_switch_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__modes__modecheck_functor_test_4_0,
		check_hlds__modes__modecheck_clause_switch_10_0_i3);
MR_def_label(check_hlds__modes__modecheck_clause_switch_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__modes__modecheck_clause_switch_10_0_i4);
MR_def_label(check_hlds__modes__modecheck_clause_switch_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(hlds__instmap__is_reachable_1_0,
		check_hlds__modes__modecheck_clause_switch_10_0_i7);
MR_def_label(check_hlds__modes__modecheck_clause_switch_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__modecheck_clause_switch_10_0_i5);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__modes__modecheck_goal_6_0,
		check_hlds__modes__modecheck_clause_switch_10_0_i9);
MR_def_label(check_hlds__modes__modecheck_clause_switch_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__modes__modecheck_clause_switch_10_0_i10);
MR_def_label(check_hlds__modes__modecheck_clause_switch_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__mode_util__fixup_switch_var_5_0,
		check_hlds__modes__modecheck_clause_switch_10_0_i13);
MR_def_label(check_hlds__modes__modecheck_clause_switch_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__true_goal_0_0,
		check_hlds__modes__modecheck_clause_switch_10_0_i11);
MR_def_label(check_hlds__modes__modecheck_clause_switch_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(7);
	MR_sv(7) = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__mode_util__fixup_switch_var_5_0,
		check_hlds__modes__modecheck_clause_switch_10_0_i13);
MR_def_label(check_hlds__modes__modecheck_clause_switch_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__modes__modecheck_final_insts_8_0,
		check_hlds__modes__modecheck_clause_switch_10_0_i14);
MR_def_label(check_hlds__modes__modecheck_clause_switch_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_sv(5);
	MR_tfield(0, MR_r1, 1) = MR_r2;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__unique_modes__prepare_for_disjunct_5_0);

MR_BEGIN_MODULE(check_hlds__modes_module60)
	MR_init_entry1(check_hlds__modes__unique_modecheck_clause_disj_12_0);
	MR_init_label5(check_hlds__modes__unique_modecheck_clause_disj_12_0,2,3,4,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modes__unique_modecheck_clause_disj_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_r1 = MR_r2;
	MR_r2 = MR_r8;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_instmap_3_0,
		check_hlds__modes__unique_modecheck_clause_disj_12_0_i2);
MR_def_label(check_hlds__modes__unique_modecheck_clause_disj_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_nondet_live_vars_3_0,
		check_hlds__modes__unique_modecheck_clause_disj_12_0_i3);
MR_def_label(check_hlds__modes__unique_modecheck_clause_disj_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__unique_modes__prepare_for_disjunct_5_0,
		check_hlds__modes__unique_modecheck_clause_disj_12_0_i4);
MR_def_label(check_hlds__modes__unique_modecheck_clause_disj_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__unique_modes__unique_modes_check_goal_6_0,
		check_hlds__modes__unique_modecheck_clause_disj_12_0_i5);
MR_def_label(check_hlds__modes__unique_modecheck_clause_disj_12_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r5 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__modes__modecheck_final_insts_8_0,
		check_hlds__modes__unique_modecheck_clause_disj_12_0_i6);
MR_def_label(check_hlds__modes__unique_modecheck_clause_disj_12_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__modes_module61)
	MR_init_entry1(check_hlds__modes__unique_modecheck_clause_switch_10_0);
	MR_init_label8(check_hlds__modes__unique_modecheck_clause_switch_10_0,2,3,4,7,9,6,10,11)
	MR_init_label3(check_hlds__modes__unique_modecheck_clause_switch_10_0,12,13,14)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modes__unique_modecheck_clause_switch_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_tempr2 = MR_r5;
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r6;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_instmap_3_0,
		check_hlds__modes__unique_modecheck_clause_switch_10_0_i2);
MR_def_label(check_hlds__modes__unique_modecheck_clause_switch_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__modes__modecheck_functor_test_4_0,
		check_hlds__modes__unique_modecheck_clause_switch_10_0_i3);
MR_def_label(check_hlds__modes__unique_modecheck_clause_switch_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__modes__unique_modecheck_clause_switch_10_0_i4);
MR_def_label(check_hlds__modes__unique_modecheck_clause_switch_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__instmap__is_reachable_1_0,
		check_hlds__modes__unique_modecheck_clause_switch_10_0_i7);
MR_def_label(check_hlds__modes__unique_modecheck_clause_switch_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__unique_modecheck_clause_switch_10_0_i6);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__unique_modes__unique_modes_check_goal_6_0,
		check_hlds__modes__unique_modecheck_clause_switch_10_0_i9);
MR_def_label(check_hlds__modes__unique_modecheck_clause_switch_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(check_hlds__modes__unique_modecheck_clause_switch_10_0_i11);
MR_def_label(check_hlds__modes__unique_modecheck_clause_switch_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_goal__true_goal_0_0,
		check_hlds__modes__unique_modecheck_clause_switch_10_0_i10);
MR_def_label(check_hlds__modes__unique_modecheck_clause_switch_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
MR_def_label(check_hlds__modes__unique_modecheck_clause_switch_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__modes__unique_modecheck_clause_switch_10_0_i12);
MR_def_label(check_hlds__modes__unique_modecheck_clause_switch_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__mode_util__fixup_switch_var_5_0,
		check_hlds__modes__unique_modecheck_clause_switch_10_0_i13);
MR_def_label(check_hlds__modes__unique_modecheck_clause_switch_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__modes__modecheck_final_insts_8_0,
		check_hlds__modes__unique_modecheck_clause_switch_10_0_i14);
MR_def_label(check_hlds__modes__unique_modecheck_clause_switch_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_sv(5);
	MR_tfield(0, MR_r1, 1) = MR_r2;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__instmap__type_ctor_info_instmap_0;
MR_decl_entry(list__member_2_1);

MR_BEGIN_MODULE(check_hlds__modes_module62)
	MR_init_entry1(check_hlds__modes__solver_var_must_be_initialised_4_0);
	MR_init_label6(check_hlds__modes__solver_var_must_be_initialised_4_0,3,4,6,7,10,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modes__solver_var_must_be_initialised_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(4) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(5) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(6));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(check_hlds__modes__solver_var_must_be_initialised_4_0_i2);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,17);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__modes__solver_var_must_be_initialised_4_0_i3);
MR_def_label(check_hlds__modes__solver_var_must_be_initialised_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__type_util__type_is_solver_type_2_0,
		check_hlds__modes__solver_var_must_be_initialised_4_0_i4);
MR_def_label(check_hlds__modes__solver_var_must_be_initialised_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__solver_var_must_be_initialised_4_0_i2);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__instmap, instmap);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(list__member_2_1,
		check_hlds__modes__solver_var_must_be_initialised_4_0_i6);
MR_def_label(check_hlds__modes__solver_var_must_be_initialised_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__instmap__lookup_var_3_0,
		check_hlds__modes__solver_var_must_be_initialised_4_0_i7);
MR_def_label(check_hlds__modes__solver_var_must_be_initialised_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_free_2_0,
		check_hlds__modes__solver_var_must_be_initialised_4_0_i10);
MR_def_label(check_hlds__modes__solver_var_must_be_initialised_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(6));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(4);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(5);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__modes__solver_var_must_be_initialised_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(4);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(5);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__modes_module63)
	MR_init_entry1(check_hlds__modes__is_solver_var_3_0);
	MR_init_label1(check_hlds__modes__is_solver_var_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modes__is_solver_var_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,17);
	MR_r5 = MR_r3;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__modes__is_solver_var_3_0_i2);
MR_def_label(check_hlds__modes__is_solver_var_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(check_hlds__type_util__type_is_solver_type_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__modes_module64)
	MR_init_entry1(fn__check_hlds__modes__flatten_disj_2_0);
	MR_init_label1(fn__check_hlds__modes__flatten_disj_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__modes__flatten_disj_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,2)) {
		MR_GOTO_LAB(fn__check_hlds__modes__flatten_disj_2_0_i2);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r5 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,23);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,10,6);
	MR_r4 = MR_ctfield(3, MR_tempr1, 1);
	MR_np_tailcall_ent(fn__list__foldr_3_0);
	}
MR_def_label(fn__check_hlds__modes__flatten_disj_2_0,2)
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


MR_BEGIN_MODULE(check_hlds__modes_module65)
	MR_init_entry1(check_hlds__modes__solver_var_to_init_3_0);
	MR_init_label1(check_hlds__modes__solver_var_to_init_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modes__solver_var_to_init_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(hlds__instmap__lookup_var_3_0,
		check_hlds__modes__solver_var_to_init_3_0_i2);
MR_def_label(check_hlds__modes__solver_var_to_init_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(check_hlds__inst_match__inst_is_free_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__mode_util__mode_get_insts_semidet_4_0);
MR_decl_entry(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(builtin__false_0_0);

MR_BEGIN_MODULE(check_hlds__modes_module66)
	MR_init_entry1(check_hlds__modes__candidate_init_vars_call_7_0);
	MR_init_label8(check_hlds__modes__candidate_init_vars_call_7_0,70,3,6,7,14,9,23,25)
	MR_init_label3(check_hlds__modes__candidate_init_vars_call_7_0,21,15,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modes__candidate_init_vars_call_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(check_hlds__modes__candidate_init_vars_call_7_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__candidate_init_vars_call_7_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__candidate_init_vars_call_7_0_i1);
	}
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
MR_def_label(check_hlds__modes__candidate_init_vars_call_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__candidate_init_vars_call_7_0_i1);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_r3;
	MR_sv(6) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(7) = MR_ctfield(1, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		check_hlds__modes__candidate_init_vars_call_7_0_i6);
MR_def_label(check_hlds__modes__candidate_init_vars_call_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__mode_util__mode_get_insts_semidet_4_0,
		check_hlds__modes__candidate_init_vars_call_7_0_i7);
MR_def_label(check_hlds__modes__candidate_init_vars_call_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__candidate_init_vars_call_7_0_i1);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__candidate_init_vars_call_7_0_i9);
	}
	if (MR_PTAG_TEST(MR_r2,2)) {
		MR_GOTO_LAB(check_hlds__modes__candidate_init_vars_call_7_0_i9);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,17);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__modes__candidate_init_vars_call_7_0_i14);
MR_def_label(check_hlds__modes__candidate_init_vars_call_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(check_hlds__modes__candidate_init_vars_call_7_0_i70);
MR_def_label(check_hlds__modes__candidate_init_vars_call_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__modes__candidate_init_vars_call_7_0_i15);
	}
	if (MR_PTAG_TEST(MR_r3,2)) {
		MR_GOTO_LAB(check_hlds__modes__candidate_init_vars_call_7_0_i15);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,17);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__modes__candidate_init_vars_call_7_0_i23);
MR_def_label(check_hlds__modes__candidate_init_vars_call_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__modes__candidate_init_vars_call_7_0_i21);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,17);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__modes__candidate_init_vars_call_7_0_i25);
MR_def_label(check_hlds__modes__candidate_init_vars_call_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(7);
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(check_hlds__modes__candidate_init_vars_call_7_0_i70);
MR_def_label(check_hlds__modes__candidate_init_vars_call_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(builtin__false_0_0,
		check_hlds__modes__candidate_init_vars_call_7_0_i1);
MR_def_label(check_hlds__modes__candidate_init_vars_call_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(check_hlds__modes__candidate_init_vars_call_7_0_i70);
MR_def_label(check_hlds__modes__candidate_init_vars_call_7_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(MR_do_fail);
MR_decl_entry(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_preds_2_0);
MR_decl_entry(map__values_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_declared_determinism_2_0);
MR_decl_entry(fn__set__filter_2_0);

MR_BEGIN_MODULE(check_hlds__modes_module67)
	MR_init_entry1(check_hlds__modes__candidate_init_vars_3_6_0);
	MR_init_label8(check_hlds__modes__candidate_init_vars_3_6_0,133,142,18,22,17,26,25,31)
	MR_init_label8(check_hlds__modes__candidate_init_vars_3_6_0,30,33,12,14,16,6,8,10)
	MR_init_label8(check_hlds__modes__candidate_init_vars_3_6_0,11,143,38,39,40,41,42,43)
	MR_init_label8(check_hlds__modes__candidate_init_vars_3_6_0,46,47,48,49,144,145,52,54)
	MR_init_label8(check_hlds__modes__candidate_init_vars_3_6_0,56,57,59,60,146,63,64,65)
	MR_init_label5(check_hlds__modes__candidate_init_vars_3_6_0,66,67,68,69,70)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modes__candidate_init_vars_3_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
MR_def_label(check_hlds__modes__candidate_init_vars_3_6_0,133)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r8 = MR_ctfield(0, MR_r2, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r8),
		MR_LABEL_AP(check_hlds__modes__candidate_init_vars_3_6_0_i142) MR_AND
		MR_LABEL_AP(check_hlds__modes__candidate_init_vars_3_6_0_i143) MR_AND
		MR_LABEL_AP(check_hlds__modes__candidate_init_vars_3_6_0_i144) MR_AND
		MR_LABEL_AP(check_hlds__modes__candidate_init_vars_3_6_0_i56));
MR_def_label(check_hlds__modes__candidate_init_vars_3_6_0,142)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred check_hlds.modes.candidate_init_vars_3/6-0", 7,
		MR_ENTRY(MR_do_fail));
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r8;
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 1);
	MR_r5 = MR_tempr1;
	if (MR_PTAG_TEST(MR_tempr1,1)) {
		MR_GOTO_LAB(check_hlds__modes__candidate_init_vars_3_6_0_i6);
	}
	if (MR_PTAG_TEST(MR_tempr1,2)) {
		MR_GOTO_LAB(check_hlds__modes__candidate_init_vars_3_6_0_i12);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 0);
	MR_fv(4) = MR_ctfield(0, MR_tempr1, 0);
	MR_fv(2) = MR_r3;
	MR_fv(3) = MR_r4;
	MR_fv(1) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_fv(5) = (MR_Word) MR_TAG_COMMON(0,2,17);
	MR_fv(6) = MR_tempr2;
	MR_r1 = MR_fv(1);
	MR_r2 = MR_fv(5);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_fv(2);
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__modes__candidate_init_vars_3_6_0_i18);
MR_def_label(check_hlds__modes__candidate_init_vars_3_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__candidate_init_vars_3_6_0_i17);
	}
	MR_r1 = MR_fv(1);
	MR_r2 = MR_fv(5);
	MR_r3 = MR_fv(4);
	MR_r4 = MR_fv(2);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__modes__candidate_init_vars_3_6_0_i22);
MR_def_label(check_hlds__modes__candidate_init_vars_3_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO(MR_ENTRY(MR_do_fail));
	}
	MR_r1 = MR_fv(1);
	MR_r2 = MR_fv(5);
	MR_r3 = MR_fv(2);
	MR_r4 = MR_fv(4);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__modes__candidate_init_vars_3_6_0_i16);
MR_def_label(check_hlds__modes__candidate_init_vars_3_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(1) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_fv(5) = (MR_Word) MR_TAG_COMMON(0,2,17);
	MR_r1 = MR_fv(1);
	MR_r2 = MR_fv(5);
	MR_r3 = MR_fv(4);
	MR_r4 = MR_fv(2);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__modes__candidate_init_vars_3_6_0_i26);
MR_def_label(check_hlds__modes__candidate_init_vars_3_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modes__candidate_init_vars_3_6_0_i25);
	}
	MR_r1 = MR_fv(1);
	MR_r2 = MR_fv(5);
	MR_r3 = MR_fv(2);
	MR_r4 = MR_fv(6);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__modes__candidate_init_vars_3_6_0_i16);
MR_def_label(check_hlds__modes__candidate_init_vars_3_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(check_hlds__modes__candidate_init_vars_3_6_0_i30);
	MR_fv(1) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_fv(5) = (MR_Word) MR_TAG_COMMON(0,2,17);
	MR_r1 = MR_fv(1);
	MR_r2 = MR_fv(5);
	MR_r3 = MR_fv(2);
	MR_r4 = MR_fv(6);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__modes__candidate_init_vars_3_6_0_i31);
MR_def_label(check_hlds__modes__candidate_init_vars_3_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_fv(5);
	MR_r3 = MR_fv(3);
	MR_r4 = MR_fv(4);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__modes__candidate_init_vars_3_6_0_i11);
MR_def_label(check_hlds__modes__candidate_init_vars_3_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	MR_fv(1) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r3 = MR_fv(2);
	MR_fv(2) = (MR_Word) MR_TAG_COMMON(0,2,17);
	MR_r1 = MR_fv(1);
	MR_r2 = MR_fv(2);
	MR_r4 = MR_fv(4);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__modes__candidate_init_vars_3_6_0_i33);
MR_def_label(check_hlds__modes__candidate_init_vars_3_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_fv(2);
	MR_r3 = MR_fv(3);
	MR_r4 = MR_fv(6);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__modes__candidate_init_vars_3_6_0_i11);
MR_def_label(check_hlds__modes__candidate_init_vars_3_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r8, 0);
	MR_fv(2) = MR_r3;
	MR_fv(3) = MR_r4;
	MR_fv(6) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,17);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_fv(2);
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__modes__candidate_init_vars_3_6_0_i14);
MR_def_label(check_hlds__modes__candidate_init_vars_3_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO(MR_ENTRY(MR_do_fail));
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,17);
	MR_r3 = MR_fv(2);
	MR_r4 = MR_fv(6);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__modes__candidate_init_vars_3_6_0_i16);
MR_def_label(check_hlds__modes__candidate_init_vars_3_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_fv(3);
	MR_succeed();
MR_def_label(check_hlds__modes__candidate_init_vars_3_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r8, 0);
	MR_fv(1) = MR_ctfield(1, MR_r5, 2);
	MR_fv(2) = MR_r3;
	MR_fv(3) = MR_r4;
	MR_fv(6) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,17);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_fv(2);
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__modes__candidate_init_vars_3_6_0_i8);
MR_def_label(check_hlds__modes__candidate_init_vars_3_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO(MR_ENTRY(MR_do_fail));
	}
	MR_r3 = MR_fv(2);
	MR_fv(2) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_fv(4) = (MR_Word) MR_TAG_COMMON(0,2,17);
	MR_r1 = MR_fv(2);
	MR_r2 = MR_fv(4);
	MR_r4 = MR_fv(6);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__modes__candidate_init_vars_3_6_0_i10);
MR_def_label(check_hlds__modes__candidate_init_vars_3_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_fv(1);
	MR_fv(1) = MR_r1;
	MR_r1 = MR_fv(2);
	MR_r2 = MR_fv(4);
	MR_r3 = MR_fv(3);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__modes__candidate_init_vars_3_6_0_i11);
MR_def_label(check_hlds__modes__candidate_init_vars_3_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_fv(1);
	MR_succeed();
MR_def_label(check_hlds__modes__candidate_init_vars_3_6_0,143)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred check_hlds.modes.candidate_init_vars_3/6-0", 7,
		MR_ENTRY(MR_do_fail));
	MR_fv(1) = MR_r1;
	MR_fv(2) = MR_r3;
	MR_fv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r8;
	MR_fv(4) = MR_ctfield(1, MR_tempr1, 0);
	MR_fv(5) = MR_ctfield(1, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_preds_2_0,
		check_hlds__modes__candidate_init_vars_3_6_0_i38);
MR_def_label(check_hlds__modes__candidate_init_vars_3_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r4 = MR_fv(4);
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__modes__candidate_init_vars_3_6_0_i39);
MR_def_label(check_hlds__modes__candidate_init_vars_3_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		check_hlds__modes__candidate_init_vars_3_6_0_i40);
MR_def_label(check_hlds__modes__candidate_init_vars_3_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_np_call_localret_ent(map__values_2_0,
		check_hlds__modes__candidate_init_vars_3_6_0_i41);
MR_def_label(check_hlds__modes__candidate_init_vars_3_6_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_np_call_localret_ent(list__member_2_1,
		check_hlds__modes__candidate_init_vars_3_6_0_i42);
MR_def_label(check_hlds__modes__candidate_init_vars_3_6_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(4) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_declared_determinism_2_0,
		check_hlds__modes__candidate_init_vars_3_6_0_i43);
MR_def_label(check_hlds__modes__candidate_init_vars_3_6_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r2 = MR_ctfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(check_hlds__modes__candidate_init_vars_3_6_0_i46);
	}
	MR_r1 = MR_fv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		check_hlds__modes__candidate_init_vars_3_6_0_i48);
MR_def_label(check_hlds__modes__candidate_init_vars_3_6_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,4)) {
		MR_GOTO_LAB(check_hlds__modes__candidate_init_vars_3_6_0_i47);
	}
	MR_r1 = MR_fv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		check_hlds__modes__candidate_init_vars_3_6_0_i48);
MR_def_label(check_hlds__modes__candidate_init_vars_3_6_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(check_hlds__modes__candidate_init_vars_3_6_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_fv(1);
	MR_r2 = MR_fv(5);
	MR_r4 = MR_fv(2);
	MR_r5 = MR_fv(3);
	MR_np_call_localret_ent(check_hlds__modes__candidate_init_vars_call_7_0,
		check_hlds__modes__candidate_init_vars_3_6_0_i49);
MR_def_label(check_hlds__modes__candidate_init_vars_3_6_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_succeed();
MR_def_label(check_hlds__modes__candidate_init_vars_3_6_0,144)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred check_hlds.modes.candidate_init_vars_3/6-0", 7,
		MR_ENTRY(MR_do_fail));
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r8;
	MR_r6 = MR_ctfield(2, MR_tempr1, 2);
	MR_r2 = MR_ctfield(2, MR_tempr1, 1);
	MR_r7 = MR_ctfield(2, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_r7,0)) {
		MR_GOTO_LAB(check_hlds__modes__candidate_init_vars_3_6_0_i52);
	}
	MR_GOTO(MR_ENTRY(MR_do_fail));
	}
MR_def_label(check_hlds__modes__candidate_init_vars_3_6_0,145)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(check_hlds__modes__candidate_init_vars_3_6_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = MR_r6;
	MR_np_call_localret_ent(check_hlds__modes__candidate_init_vars_call_7_0,
		check_hlds__modes__candidate_init_vars_3_6_0_i54);
MR_def_label(check_hlds__modes__candidate_init_vars_3_6_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_fail));
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_succeed();
MR_def_label(check_hlds__modes__candidate_init_vars_3_6_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r8, 0),
		MR_LABEL_AP(check_hlds__modes__candidate_init_vars_3_6_0_i145) MR_AND
		MR_LABEL_AP(check_hlds__modes__candidate_init_vars_3_6_0_i57) MR_AND
		MR_LABEL_AP(check_hlds__modes__candidate_init_vars_3_6_0_i59) MR_AND
		MR_LABEL_AP(check_hlds__modes__candidate_init_vars_3_6_0_i145) MR_AND
		MR_LABEL_AP(check_hlds__modes__candidate_init_vars_3_6_0_i145) MR_AND
		MR_LABEL_AP(check_hlds__modes__candidate_init_vars_3_6_0_i60) MR_AND
		MR_LABEL_AP(check_hlds__modes__candidate_init_vars_3_6_0_i146) MR_AND
		MR_LABEL_AP(check_hlds__modes__candidate_init_vars_3_6_0_i145));
MR_def_label(check_hlds__modes__candidate_init_vars_3_6_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(11,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_LABEL_AP(check_hlds__modes__candidate_init_vars_3_6_0_i133);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,24);
	MR_r6 = MR_r3;
	MR_r3 = MR_r2;
	MR_r7 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_ctfield(3, MR_r8, 2);
	MR_np_tailcall_ent(list__foldl2_6_3);
	}
MR_def_label(check_hlds__modes__candidate_init_vars_3_6_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_proceed();
MR_def_label(check_hlds__modes__candidate_init_vars_3_6_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(3, MR_r8, 2);
	MR_np_localtailcall(check_hlds__modes__candidate_init_vars_3_6_0);
MR_def_label(check_hlds__modes__candidate_init_vars_3_6_0,146)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred check_hlds.modes.candidate_init_vars_3/6-0", 7,
		MR_ENTRY(MR_do_fail));
	MR_fv(1) = MR_r1;
	MR_fv(2) = MR_r3;
	MR_fv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r8;
	MR_fv(4) = MR_ctfield(3, MR_tempr1, 3);
	MR_fv(5) = MR_ctfield(3, MR_tempr1, 4);
	MR_r1 = MR_ctfield(0, MR_ctfield(3, MR_tempr1, 2), 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		check_hlds__modes__candidate_init_vars_3_6_0_i63);
MR_def_label(check_hlds__modes__candidate_init_vars_3_6_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(6) = MR_r1;
	MR_r1 = MR_fv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		check_hlds__modes__candidate_init_vars_3_6_0_i64);
MR_def_label(check_hlds__modes__candidate_init_vars_3_6_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(7) = MR_r1;
	MR_r1 = MR_fv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_var_types_2_0,
		check_hlds__modes__candidate_init_vars_3_6_0_i65);
MR_def_label(check_hlds__modes__candidate_init_vars_3_6_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,10);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__modes__non_solver_var_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_fv(7);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_r3 = MR_fv(6);
	MR_fv(6) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_fv(7) = (MR_Word) MR_TAG_COMMON(0,2,17);
	MR_r1 = MR_fv(7);
	}
	MR_np_call_localret_ent(fn__set__filter_2_0,
		check_hlds__modes__candidate_init_vars_3_6_0_i66);
MR_def_label(check_hlds__modes__candidate_init_vars_3_6_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_fv(6);
	MR_r2 = MR_fv(7);
	MR_r4 = MR_fv(2);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__modes__candidate_init_vars_3_6_0_i67);
MR_def_label(check_hlds__modes__candidate_init_vars_3_6_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_fv(4);
	MR_fv(4) = MR_r1;
	MR_r1 = MR_fv(1);
	MR_r3 = MR_fv(4);
	MR_r4 = MR_fv(3);
	MR_np_localcall_lab(check_hlds__modes__candidate_init_vars_3_6_0,
		check_hlds__modes__candidate_init_vars_3_6_0_i68);
MR_def_label(check_hlds__modes__candidate_init_vars_3_6_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(3) = MR_r1;
	MR_r1 = MR_fv(1);
	MR_r4 = MR_r2;
	MR_r2 = MR_fv(5);
	MR_r3 = MR_fv(4);
	MR_np_localcall_lab(check_hlds__modes__candidate_init_vars_3_6_0,
		check_hlds__modes__candidate_init_vars_3_6_0_i69);
MR_def_label(check_hlds__modes__candidate_init_vars_3_6_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(2) = MR_r2;
	MR_r4 = MR_r1;
	MR_r1 = MR_fv(6);
	MR_r2 = MR_fv(7);
	MR_r3 = MR_fv(3);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__modes__candidate_init_vars_3_6_0_i70);
MR_def_label(check_hlds__modes__candidate_init_vars_3_6_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_fv(2);
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);

MR_BEGIN_MODULE(check_hlds__modes_module68)
	MR_init_entry1(check_hlds__modes__non_solver_var_3_0);
	MR_init_label3(check_hlds__modes__non_solver_var_3_0,2,5,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modes__non_solver_var_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r5 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,17);
	MR_r4 = MR_r3;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_np_call_localret_ent(fn__f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_101_108_101_109_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__modes__non_solver_var_3_0_i2);
MR_def_label(check_hlds__modes__non_solver_var_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__type_util__type_is_solver_type_2_0,
		check_hlds__modes__non_solver_var_3_0_i5);
MR_def_label(check_hlds__modes__non_solver_var_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__modes__non_solver_var_3_0_i1);
	}
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__modes__non_solver_var_3_0,1)
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


MR_BEGIN_MODULE(check_hlds__modes_module69)
	MR_init_entry1(fn__check_hlds__modes__hlds_goal_from_delayed_goal_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__modes__hlds_goal_from_delayed_goal_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);

MR_BEGIN_MODULE(check_hlds__modes_module70)
	MR_init_entry1(check_hlds__modes__is_headvar_unification_goal_2_0);
	MR_init_label3(check_hlds__modes__is_headvar_unification_goal_2_0,5,3,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modes__is_headvar_unification_goal_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(0, MR_r2, 2), 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(check_hlds__modes__is_headvar_unification_goal_2_0_i1);
	}
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,17);
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__modes__is_headvar_unification_goal_2_0_i5);
MR_def_label(check_hlds__modes__is_headvar_unification_goal_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__modes__is_headvar_unification_goal_2_0_i3);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(check_hlds__modes__is_headvar_unification_goal_2_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,17);
	MR_r3 = MR_ctfield(0, MR_sv(2), 0);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_def_label(check_hlds__modes__is_headvar_unification_goal_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__modes__is_headvar_unification_goal_2_0,1)
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

MR_decl_entry(__Unify___hlds__instmap__instmap_0_0);
MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(check_hlds__modes_module71)
	MR_init_entry1(__Unify___check_hlds__modes__after_goals_0_0);
	MR_init_label4(__Unify___check_hlds__modes__after_goals_0_0,14,5,7,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__modes__after_goals_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__modes__after_goals_0_0_i14);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___check_hlds__modes__after_goals_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___check_hlds__modes__after_goals_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__modes__after_goals_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___check_hlds__modes__after_goals_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 1);
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	MR_r2 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___hlds__instmap__instmap_0_0,
		__Unify___check_hlds__modes__after_goals_0_0_i7);
MR_def_label(__Unify___check_hlds__modes__after_goals_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__modes__after_goals_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___check_hlds__modes__after_goals_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___hlds__instmap__instmap_0_0);
MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(check_hlds__modes_module72)
	MR_init_entry1(__Compare___check_hlds__modes__after_goals_0_0);
	MR_init_label6(__Compare___check_hlds__modes__after_goals_0_0,24,7,5,9,11,16)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__modes__after_goals_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__modes__after_goals_0_0_i24);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__modes__after_goals_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__modes__after_goals_0_0_i7);
	}
MR_def_label(__Compare___check_hlds__modes__after_goals_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__modes__after_goals_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__modes__after_goals_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__modes__after_goals_0_0_i9);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__modes__after_goals_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_ctfield(1, MR_tempr5, 1);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_ctfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(1, MR_tempr3, 0);
	MR_r2 = MR_ctfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___hlds__instmap__instmap_0_0,
		__Compare___check_hlds__modes__after_goals_0_0_i11);
MR_def_label(__Compare___check_hlds__modes__after_goals_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__modes__after_goals_0_0_i16);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___check_hlds__modes__after_goals_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__modes_module73)
	MR_init_entry1(__Unify___check_hlds__modes__clause_form_0_0);
	MR_init_label4(__Unify___check_hlds__modes__clause_form_0_0,18,5,10,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__modes__clause_form_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__modes__clause_form_0_0_i18);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___check_hlds__modes__clause_form_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Unify___check_hlds__modes__clause_form_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr2, 0);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___check_hlds__modes__clause_form_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__modes__clause_form_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___check_hlds__modes__clause_form_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(4) = MR_ctfield(1, MR_tempr2, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	MR_r3 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		__Unify___check_hlds__modes__clause_form_0_0_i10);
MR_def_label(__Unify___check_hlds__modes__clause_form_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__modes__clause_form_0_0_i1);
	}
	if ((MR_sv(1) != MR_sv(3))) {
		MR_GOTO_LAB(__Unify___check_hlds__modes__clause_form_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___check_hlds__modes__clause_form_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___term__var_1_0);
MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(check_hlds__modes_module74)
	MR_init_entry1(__Compare___check_hlds__modes__clause_form_0_0);
	MR_init_label8(__Compare___check_hlds__modes__clause_form_0_0,3,2,7,5,10,12,16,54)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__modes__clause_form_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__modes__clause_form_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__modes__clause_form_0_0_i2);
MR_def_label(__Compare___check_hlds__modes__clause_form_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__modes__clause_form_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___check_hlds__modes__clause_form_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___check_hlds__modes__clause_form_0_0_i7);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_ctfield(0, MR_sv(1), 0);
	MR_r3 = MR_ctfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___check_hlds__modes__clause_form_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___check_hlds__modes__clause_form_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___check_hlds__modes__clause_form_0_0_i10);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___check_hlds__modes__clause_form_0_0,10)
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_ctfield(1, MR_tempr3, 0);
	MR_r3 = MR_ctfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___term__var_1_0,
		__Compare___check_hlds__modes__clause_form_0_0_i12);
MR_def_label(__Compare___check_hlds__modes__clause_form_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__modes__clause_form_0_0_i54);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___check_hlds__modes__clause_form_0_0_i16);
MR_def_label(__Compare___check_hlds__modes__clause_form_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__modes__clause_form_0_0_i54);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___check_hlds__modes__clause_form_0_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__modes_module75)
	MR_init_entry1(__Unify___check_hlds__modes__extra_goals_0_0);
	MR_init_label4(__Unify___check_hlds__modes__extra_goals_0_0,14,5,7,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__modes__extra_goals_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__modes__extra_goals_0_0_i14);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___check_hlds__modes__extra_goals_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(4);
	MR_proceed();
	}
MR_def_label(__Unify___check_hlds__modes__extra_goals_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__modes__extra_goals_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___check_hlds__modes__extra_goals_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	MR_r3 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___check_hlds__modes__extra_goals_0_0_i7);
MR_def_label(__Unify___check_hlds__modes__extra_goals_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__modes__extra_goals_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___check_hlds__modes__extra_goals_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__modes_module76)
	MR_init_entry1(__Compare___check_hlds__modes__extra_goals_0_0);
	MR_init_label6(__Compare___check_hlds__modes__extra_goals_0_0,24,7,5,9,11,16)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__modes__extra_goals_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__modes__extra_goals_0_0_i24);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__modes__extra_goals_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__modes__extra_goals_0_0_i7);
	}
MR_def_label(__Compare___check_hlds__modes__extra_goals_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__modes__extra_goals_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__modes__extra_goals_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__modes__extra_goals_0_0_i9);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__modes__extra_goals_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_ctfield(1, MR_tempr5, 1);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_ctfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_ctfield(1, MR_tempr3, 0);
	MR_r3 = MR_ctfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___check_hlds__modes__extra_goals_0_0_i11);
MR_def_label(__Compare___check_hlds__modes__extra_goals_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__modes__extra_goals_0_0_i16);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___check_hlds__modes__extra_goals_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__modes_module77)
	MR_init_entry1(__Unify___check_hlds__modes__impurity_errors_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__modes__impurity_errors_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_errors, mode_error_info);
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


MR_BEGIN_MODULE(check_hlds__modes_module78)
	MR_init_entry1(__Compare___check_hlds__modes__impurity_errors_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__modes__impurity_errors_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_errors, mode_error_info);
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


MR_BEGIN_MODULE(check_hlds__modes_module79)
	MR_init_entry1(check_hlds__modes__IntroducedFrom__pred__modecheck_delayed_goals_eager__2589__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modes__IntroducedFrom__pred__modecheck_delayed_goals_eager__2589__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__modes_module80)
	MR_init_entry1(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_99_111_110_116_101_120_116_95_116_111_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_49_93_95_48_3_0);
	MR_init_label2(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_99_111_110_116_101_120_116_95_116_111_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_49_93_95_48_3_0,5,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_99_111_110_116_101_120_116_95_116_111_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_49_93_95_48_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_99_111_110_116_101_120_116_95_116_111_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_49_93_95_48_3_0_i4);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_99_111_110_116_101_120_116_95_116_111_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_49_93_95_48_3_0_i5);
	}
	MR_r1 = (MR_Word) MR_string_const("modes.m", 7);
	MR_r2 = (MR_Word) MR_string_const("mode_context_to_unify_context: uninitialized context", 52);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_99_111_110_116_101_120_116_95_116_111_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_49_93_95_48_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(2, MR_r1, 0);
	MR_proceed();
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_99_111_110_116_101_120_116_95_116_111_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_49_93_95_48_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_ctfield(1, MR_r1, 0);
	MR_tfield(2, MR_tempr1, 1) = MR_ctfield(1, MR_r1, 1);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__check_hlds__modes_maybe_bunch_0(void)
{
	check_hlds__modes_module0();
	check_hlds__modes_module1();
	check_hlds__modes_module2();
	check_hlds__modes_module3();
	check_hlds__modes_module4();
	check_hlds__modes_module5();
	check_hlds__modes_module6();
	check_hlds__modes_module7();
	check_hlds__modes_module8();
	check_hlds__modes_module9();
	check_hlds__modes_module10();
	check_hlds__modes_module11();
	check_hlds__modes_module12();
	check_hlds__modes_module13();
	check_hlds__modes_module14();
	check_hlds__modes_module15();
	check_hlds__modes_module16();
	check_hlds__modes_module17();
	check_hlds__modes_module18();
	check_hlds__modes_module19();
	check_hlds__modes_module20();
	check_hlds__modes_module21();
	check_hlds__modes_module22();
	check_hlds__modes_module23();
	check_hlds__modes_module24();
	check_hlds__modes_module25();
	check_hlds__modes_module26();
	check_hlds__modes_module27();
	check_hlds__modes_module28();
	check_hlds__modes_module29();
	check_hlds__modes_module30();
	check_hlds__modes_module31();
	check_hlds__modes_module32();
	check_hlds__modes_module33();
	check_hlds__modes_module34();
	check_hlds__modes_module35();
	check_hlds__modes_module36();
	check_hlds__modes_module37();
	check_hlds__modes_module38();
	check_hlds__modes_module39();
}

static void mercury__check_hlds__modes_maybe_bunch_1(void)
{
	check_hlds__modes_module40();
	check_hlds__modes_module41();
	check_hlds__modes_module42();
	check_hlds__modes_module43();
	check_hlds__modes_module44();
	check_hlds__modes_module45();
	check_hlds__modes_module46();
	check_hlds__modes_module47();
	check_hlds__modes_module48();
	check_hlds__modes_module49();
	check_hlds__modes_module50();
	check_hlds__modes_module51();
	check_hlds__modes_module52();
	check_hlds__modes_module53();
	check_hlds__modes_module54();
	check_hlds__modes_module55();
	check_hlds__modes_module56();
	check_hlds__modes_module57();
	check_hlds__modes_module58();
	check_hlds__modes_module59();
	check_hlds__modes_module60();
	check_hlds__modes_module61();
	check_hlds__modes_module62();
	check_hlds__modes_module63();
	check_hlds__modes_module64();
	check_hlds__modes_module65();
	check_hlds__modes_module66();
	check_hlds__modes_module67();
	check_hlds__modes_module68();
	check_hlds__modes_module69();
	check_hlds__modes_module70();
	check_hlds__modes_module71();
	check_hlds__modes_module72();
	check_hlds__modes_module73();
	check_hlds__modes_module74();
	check_hlds__modes_module75();
	check_hlds__modes_module76();
	check_hlds__modes_module77();
	check_hlds__modes_module78();
	check_hlds__modes_module79();
}

static void mercury__check_hlds__modes_maybe_bunch_2(void)
{
	check_hlds__modes_module80();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__check_hlds__modes__init(void);
void mercury__check_hlds__modes__init_type_tables(void);
void mercury__check_hlds__modes__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__check_hlds__modes__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__check_hlds__modes__init_complexity_procs(void);
#endif

void mercury__check_hlds__modes__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__check_hlds__modes_maybe_bunch_0();
	mercury__check_hlds__modes_maybe_bunch_1();
	mercury__check_hlds__modes_maybe_bunch_2();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__modes__type_ctor_info_impurity_errors_0,
		check_hlds__modes__impurity_errors_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__modes__type_ctor_info_extra_goals_0,
		check_hlds__modes__extra_goals_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__modes__type_ctor_info_clause_form_0,
		check_hlds__modes__clause_form_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__modes__type_ctor_info_after_goals_0,
		check_hlds__modes__after_goals_0_0);
	mercury__check_hlds__modes__init_debugger();
}

void mercury__check_hlds__modes__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__modes__type_ctor_info_impurity_errors_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__modes__type_ctor_info_extra_goals_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__modes__type_ctor_info_clause_form_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__modes__type_ctor_info_after_goals_0);
	}
}


void mercury__check_hlds__modes__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__check_hlds__modes__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__check_hlds__modes__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
